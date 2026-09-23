// stfs.h - reading an STFS package, the container an XBLA title ships in.
//
// A downloaded title is one file: a signed container ("LIVE", "CON " or
// "PIRS") holding the title's whole file tree. Nothing above this layer wants
// to know that - the kernel's file calls name files by path - so this presents
// the package as a read-only directory tree and answers reads by byte range.
//
// The format is a filesystem, not an archive: file data lives in 4 KiB blocks
// scattered through the container, and a file's blocks are found by walking a
// linked list held in hash tables that are themselves interleaved with the
// data. Two things follow, and both are the whole difficulty of the format:
//
//  - A block number is not an offset. Converting one to the other means
//    counting how many hash tables have been passed on the way, which depends
//    on the block number itself (one table per 170 blocks, one second-level
//    table per 170 tables, and so on).
//  - A file's blocks need not be contiguous even when the directory entry says
//    "contiguous", so the chain is always walked rather than assumed.
//
// Grounded in Xenia's stfs_container_device.cc, which is the only description
// of the block arithmetic that is known to be right. The layout constants are
// spelled out as explicit byte offsets rather than packed structs: the console
// wrote these fields in a mix of big- and little-endian, sometimes 24-bit, and
// a struct that looks correct but is padded differently reads plausible
// garbage rather than failing.
#pragma once

#include <cstdint>
#include <fstream>
#include <mutex>
#include <string>
#include <vector>

namespace whitty_xenon {

// One file or directory inside a package.
struct stfs_entry {
    std::string name;      // leaf name, as stored
    std::string path;      // full path from the root, '\' separated
    bool directory{false};
    uint64_t size{0};
    uint64_t create_time{0}; // 100ns ticks since 1601, as the guest wants it
    uint64_t write_time{0};
    // Host byte offset of each 4 KiB block of the file, in order. Empty for a
    // directory. Walking this is how a read at an arbitrary offset finds its
    // bytes without re-walking the hash chain every time.
    std::vector<uint64_t> block_offsets;
};

class stfs_package {
public:
    static constexpr uint32_t kBlockSize = 0x1000;

    // Reads the header and the whole directory. Returns false with `error` set
    // if the file is not a package or its directory could not be walked; a
    // package that opens is one whose every file can be read.
    bool open(const std::string& path, std::string& error);
    void close();
    bool is_open() const noexcept { return m_stream.is_open(); }

    // Case-insensitive lookup by full internal path. Accepts either separator
    // and ignores a leading one, so "a\b.txt", "/a/b.txt" and "A\B.TXT" all
    // name the same entry. Returns nullptr if there is no such entry.
    const stfs_entry* find(const std::string& path) const;

    // Entries directly inside `directory_path` ("" for the root).
    std::vector<const stfs_entry*> children_of(const std::string& directory_path) const;

    // Reads up to `size` bytes of `entry` starting at `offset`. Returns the
    // number of bytes read, which is short at end of file.
    uint32_t read(const stfs_entry& entry, void* out, uint32_t size,
                  uint64_t offset) const;

    const std::vector<stfs_entry>& entries() const noexcept { return m_entries; }
    uint32_t total_block_count() const noexcept { return m_total_blocks; }
    uint32_t title_id() const noexcept { return m_title_id; }

private:
    // Blocks per hash table at each level: 170 data blocks per level-0 table,
    // 170 of those per level-1 table, and so on.
    static constexpr uint32_t kBlocksPerHashLevel[3] = {170, 28900, 4913000};
    static constexpr uint32_t kEndOfChain = 0xFFFFFF;

    void close_locked();
    bool read_at(uint64_t offset, void* out, std::size_t size) const;
    uint64_t block_to_offset(uint64_t block) const noexcept;
    uint64_t hash_block_offset(uint32_t block, uint32_t level) const noexcept;
    // The 0x18-byte hash entry for a block, or false if it could not be read.
    bool hash_entry(uint32_t block, uint8_t out[0x18]) const;
    uint32_t next_block(uint32_t block, bool& ok) const;
    bool read_directory(std::string& error);

    mutable std::mutex m_mutex;
    mutable std::ifstream m_stream;

    uint64_t m_data_start{0};        // first byte after the header, block-aligned
    uint32_t m_blocks_per_table{1};  // 1 for a read-only package, else 2
    uint32_t m_block_step[2]{0, 0};
    bool m_read_only{true};
    bool m_root_active{false};
    uint32_t m_total_blocks{0};
    uint32_t m_directory_block{0};
    uint32_t m_directory_block_count{0};
    uint32_t m_title_id{0};

    std::vector<stfs_entry> m_entries;
};

} // namespace whitty_xenon
