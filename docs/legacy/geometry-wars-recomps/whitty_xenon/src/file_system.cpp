#include "whitty_xenon/file_system.h"

#include <sys/stat.h>

#include <algorithm>
#include <filesystem>
#include <system_error>

namespace whitty_xenon {
namespace {

// Lower-cases in place; device names compare case-insensitively, as they do on
// the console.
std::string lowered(std::string text) {
    std::transform(text.begin(), text.end(), text.begin(), [](char c) {
        return static_cast<char>(c >= 'A' && c <= 'Z' ? c + 32 : c);
    });
    return text;
}

// The device a path with no device of its own belongs to: the one the title was
// launched from. Both "game:" and "d:" are mounted on it, and "d:" is what the
// console calls the running title's own directory.
constexpr const char* kDefaultDevice = "d";

// Strips a trailing ':' and any slashes from a device name.
std::string normalize_device(std::string device) {
    while (!device.empty() &&
           (device.back() == ':' || device.back() == '\\' || device.back() == '/'))
        device.pop_back();
    return lowered(std::move(device));
}

char lower_char(char c) noexcept {
    return static_cast<char>(c >= 'A' && c <= 'Z' ? c + 32 : c);
}

// Backtracking glob. `*` spans any run of characters, `?` exactly one; both
// are case-insensitive, matching the console's case-insensitive file names.
bool wildcard_match(const char* name, const char* pattern) {
    const char* star_pattern = nullptr;
    const char* star_name = nullptr;
    while (*name != '\0') {
        if (*pattern == '?' || lower_char(*pattern) == lower_char(*name)) {
            ++pattern;
            ++name;
        } else if (*pattern == '*') {
            star_pattern = pattern++;
            star_name = name;
        } else if (star_pattern != nullptr) {
            // Backtrack: let the last '*' swallow one more character.
            pattern = star_pattern + 1;
            name = ++star_name;
        } else {
            return false;
        }
    }
    while (*pattern == '*') ++pattern;
    return *pattern == '\0';
}

std::string join_path(const std::string& directory, const std::string& name) {
    if (directory.empty()) return name;
    return directory + "/" + name;
}

// The same, for a path inside a package - and the separator is only added when
// the directory does not already end in one. That is not a nicety: the CRT's
// FindFirstFile hands the kernel a directory name that KEEPS its trailing
// separator ("game:\data\menu\") and the leaf as a separate search pattern, so
// appending unconditionally builds "data\menu\\logo2.bin", which matches no
// entry. The lookup then fails, the scan reports the file with a zero size, and
// the title reads nothing into a buffer it goes on to parse. Xenia's
// `join_paths` guards the same way, for the same reason.
std::string join_package_path(const std::string& directory,
                              const std::string& name) {
    if (directory.empty()) return name;
    const char last = directory.back();
    if (last == '\\' || last == '/') return directory + name;
    return directory + "\\" + name;
}

uint64_t round_up_to_sector(uint64_t size) noexcept {
    const uint64_t sector = file_system::kSectorSize;
    return (size + sector - 1) / sector * sector;
}

} // namespace

bool match_file_pattern(const std::string& name, const std::string& pattern) {
    if (pattern.empty()) return true;
    return wildcard_match(name.c_str(), pattern.c_str());
}

uint64_t unix_time_to_file_time(int64_t seconds) noexcept {
    // The console counts 100ns ticks from 1601-01-01; POSIX counts seconds from
    // 1970-01-01. 11644473600 seconds separate them.
    if (seconds < 0) return 0;
    return static_cast<uint64_t>(seconds) * 10000000ull + 116444736000000000ull;
}

void file_system::mount(std::string device, std::string host_root) {
    const std::lock_guard<std::recursive_mutex> lock(m_mutex);
    while (!host_root.empty() &&
           (host_root.back() == '/' || host_root.back() == '\\'))
        host_root.pop_back();
    m_mounts.push_back(
        mount_point{normalize_device(std::move(device)), std::move(host_root)});
}

bool file_system::unmount(const std::string& device) {
    const std::lock_guard<std::recursive_mutex> lock(m_mutex);
    const std::string wanted = normalize_device(device);
    const std::size_t before = m_mounts.size();
    m_mounts.erase(std::remove_if(m_mounts.begin(), m_mounts.end(),
                                  [&](const mount_point& mount) {
                                      return mount.device == wanted;
                                  }),
                   m_mounts.end());
    return m_mounts.size() != before;
}

void file_system::mount_package(std::string device,
                                std::shared_ptr<stfs_package> package) {
    const std::lock_guard<std::recursive_mutex> lock(m_mutex);
    mount_point mount;
    mount.device = normalize_device(std::move(device));
    mount.package = std::move(package);
    m_mounts.push_back(std::move(mount));
}

namespace {

bool path_exists(const std::string& path) {
    struct ::stat st {};
    return ::stat(path.c_str(), &st) == 0;
}

// Re-resolves a path one component at a time, matching each case-insensitively
// against what is actually on disk. The console's file system ignores case and
// titles rely on it - Alien Breed asks for both "Coalesced.int" and
// "Coalesced.INT" for the same file - but a Linux host does not, so the naive
// join misses. Only ever reached when the exact path is absent, so the usual
// case costs one stat.
std::string resolve_ignoring_case(const std::string& root,
                                  const std::string& relative) {
    std::string path = root;
    std::size_t start = 0;
    while (start <= relative.size()) {
        const std::size_t slash = relative.find('/', start);
        const std::string component = relative.substr(
            start, slash == std::string::npos ? std::string::npos : slash - start);
        if (!component.empty()) {
            const std::string exact = path + "/" + component;
            if (path_exists(exact)) {
                path = exact;
            } else {
                const std::string wanted = lowered(component);
                std::string found;
                std::error_code ec;
                std::filesystem::directory_iterator it(path, ec);
                if (ec) return "";
                for (const auto& entry : it) {
                    const std::string name = entry.path().filename().string();
                    if (lowered(name) == wanted) {
                        found = name;
                        break;
                    }
                }
                if (found.empty()) return "";
                path += "/" + found;
            }
        }
        if (slash == std::string::npos) break;
        start = slash + 1;
    }
    return path;
}

} // namespace

std::string file_system::resolve(const std::string& guest_path) const {
    const std::lock_guard<std::recursive_mutex> lock(m_mutex);
    const std::size_t colon = guest_path.find(':');
    // No device at all is not a malformed path: it is a path relative to the
    // title's own working directory, which for a running title is the device it
    // was launched from. Space Giraffe opens plain "config.txt" that way.
    // Refusing it - which is what returning nothing here did - fails the open
    // with a path the report then prints as "", so the title is told its own
    // settings file does not exist and carries on with whatever it does when
    // there is none.
    const std::string device =
        colon == std::string::npos
            ? kDefaultDevice
            : normalize_device(guest_path.substr(0, colon));

    std::string relative =
        colon == std::string::npos ? guest_path : guest_path.substr(colon + 1);
    for (char& c : relative)
        if (c == '\\') c = '/';
    // The remainder is device-relative; a leading slash would make the join
    // look absolute, so drop it.
    std::size_t start = 0;
    while (start < relative.size() && relative[start] == '/') ++start;
    relative = relative.substr(start);

    for (const mount_point& mount : m_mounts) {
        if (mount.device != device) continue;
        if (relative.empty()) return mount.host_root;
        const std::string joined = mount.host_root + "/" + relative;
        if (path_exists(joined)) return joined;
        // Not there as written - try again ignoring case before giving up.
        const std::string insensitive =
            resolve_ignoring_case(mount.host_root, relative);
        // Falling back to the exact join keeps "does not exist" reporting the
        // path the title actually asked for.
        return insensitive.empty() ? joined : insensitive;
    }
    return "";
}

resolved_path file_system::resolve_path(const std::string& guest_path) const {
    const std::lock_guard<std::recursive_mutex> lock(m_mutex);
    resolved_path resolved;
    resolved.guest_path = guest_path;
    const std::size_t colon = guest_path.find(':');
    // As above: no device means the title's own, not a bad path.
    const std::string device =
        colon == std::string::npos
            ? kDefaultDevice
            : normalize_device(guest_path.substr(0, colon));

    std::string relative =
        colon == std::string::npos ? guest_path : guest_path.substr(colon + 1);
    std::size_t start = 0;
    while (start < relative.size() &&
           (relative[start] == '\\' || relative[start] == '/'))
        ++start;
    relative = relative.substr(start);

    for (const mount_point& mount : m_mounts) {
        if (mount.device != device) continue;
        if (mount.package) {
            resolved.package = mount.package.get();
            resolved.package_path = relative;
            // An empty path names the device root, which is a directory that
            // has no entry of its own.
            resolved.entry = relative.empty()
                                 ? nullptr
                                 : mount.package->find(relative);
            return resolved;
        }
        resolved.host_path = resolve(guest_path);
        return resolved;
    }
    return resolved;
}

file_stat file_system::stat(const resolved_path& path) const {
    if (!path.from_package()) return stat_host_path(path.host_path);

    file_stat info;
    // The root of a package is always a directory, whether or not the package
    // has an entry describing it.
    if (path.package_path.empty()) {
        info.exists = true;
        info.is_directory = true;
        info.attributes = x_file_attribute::directory;
        return info;
    }
    if (path.entry == nullptr) return info;

    info.exists = true;
    info.is_directory = path.entry->directory;
    info.size = path.entry->size;
    info.allocation_size =
        (info.size + kSectorSize - 1) / kSectorSize * kSectorSize;
    info.creation_time = path.entry->create_time;
    info.write_time = path.entry->write_time;
    info.access_time = path.entry->write_time;
    // A package is signed and immutable, so everything in it is read-only.
    info.attributes = path.entry->directory
                          ? x_file_attribute::directory
                          : (x_file_attribute::normal |
                             x_file_attribute::readonly);
    return info;
}

file_stat file_system::stat_host_path(const std::string& host_path) const {
    const std::lock_guard<std::recursive_mutex> lock(m_mutex);
    file_stat info;
    if (host_path.empty()) return info;

    struct ::stat st {};
    if (::stat(host_path.c_str(), &st) != 0) return info;

    info.exists = true;
    info.is_directory = S_ISDIR(st.st_mode) != 0;
    info.size = info.is_directory ? 0 : static_cast<uint64_t>(st.st_size);
    info.allocation_size = round_up_to_sector(info.size);
    // POSIX has no creation time; st_ctime (inode change) is the closest thing,
    // and a title only ever displays or compares these.
    info.creation_time = unix_time_to_file_time(st.st_ctime);
    info.access_time = unix_time_to_file_time(st.st_atime);
    info.write_time = unix_time_to_file_time(st.st_mtime);

    if (info.is_directory) {
        info.attributes = x_file_attribute::directory;
    } else {
        info.attributes = x_file_attribute::normal;
        if ((st.st_mode & S_IWUSR) == 0)
            info.attributes |= x_file_attribute::readonly;
    }
    return info;
}

uint32_t file_system::store(std::unique_ptr<open_file> file) {
    const std::lock_guard<std::recursive_mutex> lock(m_mutex);
    // Reuse a closed slot so a title that churns files does not grow the table.
    for (std::size_t i = 0; i < m_files.size(); ++i) {
        if (!m_files[i]) {
            m_files[i] = std::move(file);
            return static_cast<uint32_t>(i + 1);
        }
    }
    m_files.push_back(std::move(file));
    return static_cast<uint32_t>(m_files.size());
}

uint32_t file_system::open(const std::string& host_path) {
    const std::lock_guard<std::recursive_mutex> lock(m_mutex);
    const open_result result =
        open(host_path, file_disposition::open_existing, /*writable=*/false,
             /*directory_expected=*/false, /*non_directory_expected=*/true);
    return result.error == file_error::ok ? result.file_id : 0;
}

open_result file_system::open(const resolved_path& path,
                              file_disposition disposition, bool writable,
                              bool directory_expected,
                              bool non_directory_expected) {
    if (!path.from_package()) {
        open_result result = open(path.host_path, disposition, writable,
                                  directory_expected, non_directory_expected);
        // The host-path overload cannot know what the guest called this, and a
        // directory handle is useless for resolving relative names without it.
        if (result.file_id != 0) {
            const std::lock_guard<std::recursive_mutex> lock(m_mutex);
            if (open_file* file = file_for(result.file_id))
                file->guest_path = path.guest_path;
        }
        return result;
    }

    const std::lock_guard<std::recursive_mutex> lock(m_mutex);
    open_result result;
    const file_stat existing = stat(path);

    // A package cannot be written to. Refusing here is deliberate: an open
    // that claimed to succeed would have its writes silently discarded, and
    // the title would only find out much later when it read them back.
    if (writable || disposition == file_disposition::create ||
        disposition == file_disposition::supersede ||
        disposition == file_disposition::overwrite ||
        disposition == file_disposition::overwrite_always) {
        result.error = existing.exists ? file_error::failed
                                       : file_error::not_found;
        result.action =
            existing.exists ? file_action::exists : file_action::does_not_exist;
        return result;
    }
    if (!existing.exists) {
        result.error = file_error::not_found;
        result.action = file_action::does_not_exist;
        return result;
    }
    if (existing.is_directory && non_directory_expected) {
        result.error = file_error::is_a_directory;
        result.action = file_action::exists;
        return result;
    }
    if (!existing.is_directory && directory_expected) {
        result.error = file_error::not_a_directory;
        result.action = file_action::exists;
        return result;
    }

    auto file = std::make_unique<open_file>();
    file->package = path.package;
    file->entry = path.entry;
    file->package_path = path.package_path;
    file->host_path = path.package_path;
    file->guest_path = path.guest_path;
    file->size = existing.size;
    file->directory = existing.is_directory;
    file->writable = false;
    result.file_id = store(std::move(file));
    result.error = file_error::ok;
    result.action = file_action::opened;
    return result;
}

open_result file_system::open(const std::string& host_path,
                              file_disposition disposition, bool writable,
                              bool directory_expected,
                              bool non_directory_expected) {
    const std::lock_guard<std::recursive_mutex> lock(m_mutex);
    open_result result;
    if (host_path.empty()) {
        result.error = file_error::not_found;
        result.action = file_action::does_not_exist;
        return result;
    }

    const file_stat existing = stat_host_path(host_path);

    // What the caller insists the target is. A title says which it wants when
    // it matters, and gets told plainly when the path is the other kind.
    if (existing.exists) {
        if (existing.is_directory && non_directory_expected) {
            result.error = file_error::is_a_directory;
            result.action = file_action::exists;
            return result;
        }
        if (!existing.is_directory && directory_expected) {
            result.error = file_error::not_a_directory;
            result.action = file_action::exists;
            return result;
        }
    }

    // Does the disposition allow what it found - or did not find?
    switch (disposition) {
        case file_disposition::open_existing:
        case file_disposition::overwrite:
            if (!existing.exists) {
                result.error = file_error::not_found;
                result.action = file_action::does_not_exist;
                return result;
            }
            break;
        case file_disposition::create:
            if (existing.exists) {
                result.error = file_error::already_exists;
                result.action = file_action::exists;
                return result;
            }
            break;
        default:
            break;
    }

    auto file = std::make_unique<open_file>();
    file->host_path = host_path;

    if (existing.exists && existing.is_directory) {
        // A directory handle holds no stream: it exists to be scanned.
        file->directory = true;
        result.error = file_error::ok;
        result.action = file_action::opened;
        result.file_id = store(std::move(file));
        return result;
    }
    if (!existing.exists && directory_expected) {
        // Creating directories is not modelled; a title only opens ones its
        // own package layout already contains.
        result.error = file_error::not_found;
        result.action = file_action::does_not_exist;
        return result;
    }

    const bool truncate = disposition == file_disposition::supersede ||
                          disposition == file_disposition::overwrite ||
                          disposition == file_disposition::overwrite_always;
    const bool creating = !existing.exists;

    std::ios::openmode mode = std::ios::binary | std::ios::in;
    if (writable || truncate || creating) mode |= std::ios::out;
    if (truncate || creating) mode |= std::ios::trunc;

    file->stream.open(host_path, mode);
    if (!file->stream.is_open() && (mode & std::ios::out) != 0) {
        // A read-only mount (or a read-only host file) refuses the write mode.
        // Fall back to reading rather than failing the open outright, so a
        // title that asks for write access it never uses still gets its data.
        mode &= ~(std::ios::out | std::ios::trunc);
        file->stream.open(host_path, mode);
    }
    if (!file->stream.is_open()) {
        result.error =
            existing.exists ? file_error::failed : file_error::not_found;
        result.action =
            existing.exists ? file_action::exists : file_action::does_not_exist;
        return result;
    }
    // Only claim the handle is writable if it really opened that way; a
    // read-only mount would otherwise silently swallow writes.
    file->writable = (mode & std::ios::out) != 0;

    file->stream.seekg(0, std::ios::end);
    file->size = static_cast<uint64_t>(file->stream.tellg());
    file->stream.seekg(0, std::ios::beg);

    result.error = file_error::ok;
    if (creating)
        result.action = file_action::created;
    else if (disposition == file_disposition::supersede)
        result.action = file_action::superseded;
    else if (truncate)
        result.action = file_action::overwritten;
    else
        result.action = file_action::opened;
    result.file_id = store(std::move(file));
    return result;
}

const file_system::open_file* file_system::file_for(
    uint32_t file_id) const noexcept {
    if (file_id == 0 || file_id > m_files.size()) return nullptr;
    return m_files[file_id - 1].get();
}

file_system::open_file* file_system::file_for(uint32_t file_id) noexcept {
    if (file_id == 0 || file_id > m_files.size()) return nullptr;
    return m_files[file_id - 1].get();
}

uint32_t file_system::read(uint32_t file_id, void* out, uint32_t size,
                           uint64_t offset) {
    const std::lock_guard<std::recursive_mutex> lock(m_mutex);
    open_file* file = file_for(file_id);
    if (!file || file->directory || size == 0) return 0;

    const uint64_t from = offset == kCurrentOffset ? file->position : offset;
    if (from >= file->size) return 0; // reading at or past the end yields none

    // A file inside a package has no stream of its own: its bytes are blocks
    // scattered through the container, and the package assembles them.
    if (file->package != nullptr) {
        const uint32_t got = file->package->read(*file->entry, out, size, from);
        file->position = from + got;
        return got;
    }

    file->stream.clear(); // a prior read to EOF leaves the stream in fail state
    file->stream.seekg(static_cast<std::streamoff>(from), std::ios::beg);

    const uint64_t available = file->size - from;
    const uint32_t to_read =
        static_cast<uint32_t>(std::min<uint64_t>(size, available));
    file->stream.read(static_cast<char*>(out), to_read);
    const uint32_t got = static_cast<uint32_t>(file->stream.gcount());
    file->position = from + got;
    return got;
}

uint32_t file_system::write(uint32_t file_id, const void* data, uint32_t size,
                            uint64_t offset) {
    const std::lock_guard<std::recursive_mutex> lock(m_mutex);
    open_file* file = file_for(file_id);
    if (!file || file->directory || !file->writable || size == 0) return 0;

    const uint64_t at = offset == kCurrentOffset ? file->position : offset;
    file->stream.clear();
    file->stream.seekp(static_cast<std::streamoff>(at), std::ios::beg);
    file->stream.write(static_cast<const char*>(data), size);
    if (!file->stream) {
        file->stream.clear();
        return 0;
    }
    file->position = at + size;
    file->size = std::max(file->size, file->position);
    return size;
}

uint64_t file_system::size_of(uint32_t file_id) const {
    const std::lock_guard<std::recursive_mutex> lock(m_mutex);
    const open_file* file = file_for(file_id);
    return file ? file->size : 0;
}

file_stat file_system::stat_of(uint32_t file_id) const {
    const std::lock_guard<std::recursive_mutex> lock(m_mutex);
    const open_file* file = file_for(file_id);
    if (!file) return {};
    // A package is immutable, so what the open recorded is still true and
    // there is nothing on the host to re-stat.
    if (file->package != nullptr) {
        resolved_path path;
        path.package = file->package;
        path.entry = file->entry;
        path.package_path = file->package_path;
        return stat(path);
    }
    // Re-stat rather than trusting what the open recorded: a write through
    // this handle may have grown the file since.
    file_stat info = stat_host_path(file->host_path);
    if (info.exists && !info.is_directory && file->size > info.size) {
        // Bytes still buffered are part of the file as far as the guest is
        // concerned, even though the host has not seen them yet.
        info.size = file->size;
        info.allocation_size = round_up_to_sector(info.size);
    }
    return info;
}

const std::string& file_system::host_path_of(uint32_t file_id) const {
    const std::lock_guard<std::recursive_mutex> lock(m_mutex);
    static const std::string empty;
    const open_file* file = file_for(file_id);
    return file ? file->host_path : empty;
}

const std::string& file_system::guest_path_of(uint32_t file_id) const {
    const std::lock_guard<std::recursive_mutex> lock(m_mutex);
    static const std::string empty;
    const open_file* file = file_for(file_id);
    return file ? file->guest_path : empty;
}

bool file_system::is_directory(uint32_t file_id) const {
    const std::lock_guard<std::recursive_mutex> lock(m_mutex);
    const open_file* file = file_for(file_id);
    return file != nullptr && file->directory;
}

bool file_system::is_writable(uint32_t file_id) const {
    const std::lock_guard<std::recursive_mutex> lock(m_mutex);
    const open_file* file = file_for(file_id);
    return file != nullptr && file->writable;
}

uint64_t file_system::position(uint32_t file_id) const {
    const std::lock_guard<std::recursive_mutex> lock(m_mutex);
    const open_file* file = file_for(file_id);
    return file ? file->position : 0;
}

bool file_system::set_position(uint32_t file_id, uint64_t position) {
    const std::lock_guard<std::recursive_mutex> lock(m_mutex);
    open_file* file = file_for(file_id);
    if (!file || file->directory) return false;
    file->position = position;
    return true;
}

bool file_system::set_length(uint32_t file_id, uint64_t length) {
    const std::lock_guard<std::recursive_mutex> lock(m_mutex);
    open_file* file = file_for(file_id);
    if (!file || file->directory || !file->writable) return false;
    file->stream.flush();
    std::error_code ec;
    std::filesystem::resize_file(file->host_path, length, ec);
    if (ec) return false;
    file->size = length;
    if (file->position > length) file->position = length;
    return true;
}

void file_system::flush(uint32_t file_id) {
    const std::lock_guard<std::recursive_mutex> lock(m_mutex);
    open_file* file = file_for(file_id);
    if (file && !file->directory) file->stream.flush();
}

void file_system::load_children(open_file& file) const {
    if (file.children_loaded) return;
    file.children_loaded = true;
    if (file.package != nullptr) {
        for (const stfs_entry* child : file.package->children_of(file.package_path))
            file.children.push_back(child->name);
        std::sort(file.children.begin(), file.children.end());
        return;
    }
    std::error_code ec;
    std::filesystem::directory_iterator it(file.host_path, ec);
    if (ec) return;
    for (const auto& entry : it)
        file.children.push_back(entry.path().filename().string());
    // Sorted so a scan is reproducible run to run; the host's directory order
    // is not.
    std::sort(file.children.begin(), file.children.end());
}

bool file_system::next_directory_entry(uint32_t file_id,
                                       const std::string& pattern, bool restart,
                                       directory_entry& out) {
    const std::lock_guard<std::recursive_mutex> lock(m_mutex);
    open_file* file = file_for(file_id);
    if (!file || !file->directory) return false;
    load_children(*file);

    // A scan given a name filter always starts over: the console treats the
    // filter as the start of a new search. It then sticks, because the calls
    // that follow ask only for "the next one" and still mean the same search.
    if (!pattern.empty()) {
        file->find_pattern = pattern;
        file->find_index = 0;
    } else if (restart) {
        file->find_index = 0;
    }

    while (file->find_index < file->children.size()) {
        const std::string& name = file->children[file->find_index];
        const uint32_t index = static_cast<uint32_t>(file->find_index);
        ++file->find_index;
        if (!match_file_pattern(name, file->find_pattern)) continue;

        out.name = name;
        out.index = index;
        if (file->package != nullptr) {
            resolved_path child;
            child.package = file->package;
            child.package_path =
                join_package_path(file->package_path, name);
            child.entry = file->package->find(child.package_path);
            out.info = stat(child);
        } else {
            out.info = stat_host_path(join_path(file->host_path, name));
        }
        return true;
    }
    return false;
}

void file_system::close(uint32_t file_id) {
    const std::lock_guard<std::recursive_mutex> lock(m_mutex);
    if (file_id == 0 || file_id > m_files.size()) return;
    m_files[file_id - 1].reset();
}

std::size_t file_system::open_count() const noexcept {
    const std::lock_guard<std::recursive_mutex> lock(m_mutex);
    std::size_t count = 0;
    for (const auto& file : m_files)
        if (file) ++count;
    return count;
}

} // namespace whitty_xenon
