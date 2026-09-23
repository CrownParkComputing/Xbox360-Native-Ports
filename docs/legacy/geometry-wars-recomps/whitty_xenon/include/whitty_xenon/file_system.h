// file_system.h - the title's view of the host's files.
//
// A title reads its assets through the kernel's file calls, naming files by a
// guest device path like "game:\CookedXenon\startup.xxx". The host side of that
// is three directories the runtime is handed over the C ABI; this maps the one
// onto the other.
//
// The mapping is deliberately small: a device name ("game") is mounted onto a
// host directory, and a guest path is resolved by swapping the device for its
// host root and the backslashes for forward slashes. The symbolic-link forms a
// console also accepts ("\Device\Harddisk0\...") are a later addition alongside
// ObCreateSymbolicLink; the device form is what a title uses in practice.
//
// Open files live here too, because a file is a host resource with no guest
// dispatcher header - unlike an event, there is nothing in guest memory to hold
// its state. The object table hands out the handle and remembers which open
// file it names; this owns the host stream, the read position, and - for a
// handle opened on a directory - where a directory scan has got to.
//
// Metadata is POSIX `stat` and enumeration is std::filesystem. The runtime
// targets Linux, and one stat gives size, mode and all three timestamps at
// once; timestamps are converted to the console's epoch (100ns ticks since
// 1601) on the way out so nothing above this layer has to know about time_t.
#pragma once

#include "whitty_xenon/stfs.h"

#include <cstddef>
#include <cstdint>
#include <fstream>
#include <memory>
#include <mutex>
#include <string>
#include <vector>

namespace whitty_xenon {

// X_FILE_ATTRIBUTE_*, the attribute bits a title reads back.
namespace x_file_attribute {
inline constexpr uint32_t readonly = 0x0001;
inline constexpr uint32_t hidden = 0x0002;
inline constexpr uint32_t system = 0x0004;
inline constexpr uint32_t directory = 0x0010;
inline constexpr uint32_t archive = 0x0020;
inline constexpr uint32_t device = 0x0040;
inline constexpr uint32_t normal = 0x0080;
} // namespace x_file_attribute

// NT creation dispositions, exactly as NtCreateFile receives them.
enum class file_disposition : uint32_t {
    supersede = 0,     // exists: replace; else create
    open_existing = 1, // exists: open; else fail
    create = 2,        // exists: fail; else create
    open_always = 3,   // exists: open; else create
    overwrite = 4,     // exists: open and truncate; else fail
    overwrite_always = 5, // exists: open and truncate; else create
};

// What an open actually did, as the guest reads it out of the I/O status
// block's information word.
enum class file_action : uint32_t {
    superseded = 0,
    opened = 1,
    created = 2,
    overwritten = 3,
    exists = 4,
    does_not_exist = 5,
};

// Why an open failed. Kept as its own enum rather than an NTSTATUS so this
// layer stays independent of the kernel's status codes; the file handlers map
// it across.
enum class file_error : uint32_t {
    ok,
    not_found,
    already_exists,
    is_a_directory,
    not_a_directory,
    failed,
};

// What `stat` says about a path, in the terms the guest asks for it.
struct file_stat {
    bool exists{false};
    bool is_directory{false};
    uint64_t size{0};
    uint64_t allocation_size{0}; // size rounded up to a sector
    uint64_t creation_time{0};   // 100ns ticks since 1601
    uint64_t access_time{0};
    uint64_t write_time{0};
    uint32_t attributes{0};
};

// One child of a directory being scanned.
struct directory_entry {
    std::string name;
    file_stat info;
    uint32_t index{0}; // position in the scan, which the guest echoes back
};

// A guest path resolved against the mount table. A device is backed either by
// a host directory or by an STFS package, and the two answer every question
// differently - so resolution says which, once, instead of every caller
// guessing from the shape of a string.
struct resolved_path {
    // The guest path this was resolved from, kept so an open DIRECTORY handle
    // can say what it is a handle TO. A title may open its data directory once
    // and then open everything inside it by bare name, against that handle -
    // see NtCreateFile's root_directory.
    std::string guest_path;
    std::string host_path;                // set for a directory mount
    const stfs_package* package{nullptr}; // set for a package mount
    const stfs_entry* entry{nullptr};     // the matched entry, if it exists
    std::string package_path;             // path within the package
    bool from_package() const noexcept { return package != nullptr; }
    // False when the device is not mounted at all, which is a different
    // failure from a file that is simply not there.
    bool mounted() const noexcept { return package != nullptr || !host_path.empty(); }
};

struct open_result {
    file_error error{file_error::failed};
    file_action action{file_action::does_not_exist};
    uint32_t file_id{0};
};

// Case-insensitive `*` / `?` wildcard match, as a directory scan's filter uses.
// An empty pattern matches everything.
bool match_file_pattern(const std::string& name, const std::string& pattern);

// Converts a POSIX time_t to the console's epoch (100ns ticks since 1601).
uint64_t unix_time_to_file_time(int64_t seconds) noexcept;

class file_system {
public:
    // Passed as the offset to read() to mean "continue from the current
    // position" rather than seek to an absolute one.
    static constexpr uint64_t kCurrentOffset = ~uint64_t{0};

    // The sector size reported to the guest, which allocation sizes round up
    // to. 0x200 is what Xenia's devices report and what XCTD code asserts on.
    static constexpr uint64_t kSectorSize = 0x200;

    // Mounts a guest device (e.g. "game") onto a host directory. A trailing
    // colon or slash on the device name is ignored, so "game", "game:" and
    // "game:\\" all mount the same device.
    void mount(std::string device, std::string host_root);

    // Removes every mount of a device, and says whether there was one. The
    // content calls need it: a package is mounted under a root name while it is
    // open and has to stop being reachable when the title closes it, or the
    // next open of the same root resolves against the previous package -
    // resolution takes the FIRST matching mount, so an unremoved one wins
    // forever.
    bool unmount(const std::string& device);

    // Mounts a device onto a package instead of a directory. The package is
    // shared because a title mounts the same one under several device names -
    // "game:" and "d:" are the same disc - and reopening it per name would
    // re-read the whole directory each time.
    void mount_package(std::string device, std::shared_ptr<stfs_package> package);

    // Resolves a guest path to a host path, or "" if its device is not mounted.
    // Only meaningful for a directory mount; use resolve_path for the general
    // case, which handles packages too.
    std::string resolve(const std::string& guest_path) const;

    // Resolves against every kind of mount.
    resolved_path resolve_path(const std::string& guest_path) const;

    // What the mount says about a resolved path.
    file_stat stat(const resolved_path& path) const;

    // What the host says about a path. `exists` is false for anything that is
    // not there, including an unmounted device (an empty host path).
    file_stat stat_host_path(const std::string& host_path) const;

    // Opens an existing host file for reading. Returns a file id (>= 1), or 0
    // if the file could not be opened. The id is what the object table stores.
    uint32_t open(const std::string& host_path);

    // The full open: honours the creation disposition, opens for writing when
    // asked, and opens directories as scannable handles. `directory_expected`
    // and `non_directory_expected` are NtCreateFile's FILE_DIRECTORY_FILE and
    // FILE_NON_DIRECTORY_FILE, which say what the caller insists the target is.
    open_result open(const std::string& host_path, file_disposition disposition,
                     bool writable, bool directory_expected,
                     bool non_directory_expected);

    // The same, against a resolved path. A package is read-only: an open that
    // asks to create or truncate is refused rather than quietly succeeding and
    // dropping the writes.
    open_result open(const resolved_path& path, file_disposition disposition,
                     bool writable, bool directory_expected,
                     bool non_directory_expected);

    // Reads up to `size` bytes into `out`, from `offset` or - when offset is
    // kCurrentOffset - from the current position, which then advances. Returns
    // the number of bytes actually read.
    uint32_t read(uint32_t file_id, void* out, uint32_t size, uint64_t offset);

    // Writes `size` bytes, at `offset` or the current position. Returns the
    // number written; 0 for a handle that was not opened for writing.
    uint32_t write(uint32_t file_id, const void* data, uint32_t size,
                   uint64_t offset);

    // Total size of an open file in bytes, or 0 if the id is not open.
    uint64_t size_of(uint32_t file_id) const;
    // Fresh metadata for an open handle, re-stat'ed - a write may have grown
    // the file since it was opened.
    file_stat stat_of(uint32_t file_id) const;
    const std::string& host_path_of(uint32_t file_id) const;
    // The guest path a handle was opened with, or empty when it was opened by
    // host path. Only a path that went through resolve_path has one.
    const std::string& guest_path_of(uint32_t file_id) const;
    bool is_directory(uint32_t file_id) const;
    bool is_writable(uint32_t file_id) const;

    // The read/write cursor a title can query and set directly.
    uint64_t position(uint32_t file_id) const;
    bool set_position(uint32_t file_id, uint64_t position);
    // Truncates or extends the file. Only for a handle opened for writing.
    bool set_length(uint32_t file_id, uint64_t length);
    void flush(uint32_t file_id);

    // Advances a directory scan by one entry. `pattern` filters by name and,
    // as on the console, restarts the scan whenever it is given; an empty
    // pattern continues, or restarts if `restart` is set. Returns false when
    // there are no more matching entries.
    bool next_directory_entry(uint32_t file_id, const std::string& pattern,
                              bool restart, directory_entry& out);

    // Closes an open file. A no-op for an id that is not open.
    void close(uint32_t file_id);

    std::size_t open_count() const noexcept;

private:
    struct mount_point {
        std::string device;    // normalised, lower-cased, no colon/slash
        std::string host_root; // no trailing slash; empty for a package mount
        std::shared_ptr<stfs_package> package;
    };
    struct open_file {
        std::fstream stream;
        // Set instead of the stream for a file inside a package. The package
        // outlives every handle into it because the mount holds it.
        const stfs_package* package{nullptr};
        const stfs_entry* entry{nullptr};
        std::string package_path;
        std::string host_path;
        std::string guest_path;
        uint64_t position{0};
        uint64_t size{0};
        bool writable{false};
        bool directory{false};
        // Directory scans: the child names, read once and sorted so a scan is
        // reproducible, how far through them the guest has got, and the name
        // filter in force. The filter sticks until another one is given - a
        // title sets it on the first call and then just asks for "the next
        // one" until the scan runs out.
        std::vector<std::string> children;
        std::string find_pattern;
        std::size_t find_index{0};
        bool children_loaded{false};
    };

    const open_file* file_for(uint32_t file_id) const noexcept;
    open_file* file_for(uint32_t file_id) noexcept;
    uint32_t store(std::unique_ptr<open_file> file);
    void load_children(open_file& file) const;

    std::vector<mount_point> m_mounts;
    // Index i holds the file with id i+1; a null entry is a closed slot.
    std::vector<std::unique_ptr<open_file>> m_files;
    // Guest threads are real host threads and the title loads packages on
    // several at once, so the open-file table and the host streams behind it
    // are shared. Recursive because the small overloads are defined in terms
    // of the full ones - open(path) calls open(path, disposition, ...).
    mutable std::recursive_mutex m_mutex;
};

} // namespace whitty_xenon
