#include "whitty_xenon/stfs.h"

#include "whitty_xenon/file_system.h"

#include <algorithm>
#include <cstring>
#include <ctime>

namespace whitty_xenon {
namespace {

// Field offsets inside the container header. These are byte offsets rather
// than a struct because the header mixes endiannesses and 24-bit fields, and
// because getting one wrong should be a visibly wrong value here rather than
// silent padding somewhere in a struct definition.
constexpr uint64_t kMagicOffset = 0x000;
constexpr uint64_t kHeaderSizeOffset = 0x340;   // big-endian u32
constexpr uint64_t kMetadataOffset = 0x344;
constexpr uint64_t kExecutionInfoOffset = kMetadataOffset + 0x10;
constexpr uint64_t kTitleIdOffset = kExecutionInfoOffset + 0x0C; // big-endian
// The volume descriptor sits after content_type, metadata_version,
// content_size, the execution info, the console id and the profile id.
constexpr uint64_t kVolumeDescriptorOffset = kMetadataOffset + 0x35;
constexpr uint64_t kVolumeTypeOffset = kMetadataOffset + 0x61; // 0 = STFS

constexpr uint32_t kDirectoryEntrySize = 0x40;
constexpr uint32_t kEntriesPerDirectoryBlock =
    stfs_package::kBlockSize / kDirectoryEntrySize;
constexpr uint16_t kRootDirectoryIndex = 0xFFFF;

uint32_t load_u32_be(const uint8_t* p) noexcept {
    return (uint32_t(p[0]) << 24) | (uint32_t(p[1]) << 16) |
           (uint32_t(p[2]) << 8) | uint32_t(p[3]);
}
uint16_t load_u16_be(const uint8_t* p) noexcept {
    return static_cast<uint16_t>((uint32_t(p[0]) << 8) | uint32_t(p[1]));
}
uint16_t load_u16_le(const uint8_t* p) noexcept {
    return static_cast<uint16_t>((uint32_t(p[1]) << 8) | uint32_t(p[0]));
}
uint32_t load_u24_le(const uint8_t* p) noexcept {
    return uint32_t(p[0]) | (uint32_t(p[1]) << 8) | (uint32_t(p[2]) << 16);
}

uint64_t round_up(uint64_t value, uint64_t multiple) noexcept {
    return (value + multiple - 1) / multiple * multiple;
}

// FAT date/time as the console stores it, to the console's own epoch. The two
// halves are a packed date and a packed time, and the seconds field counts in
// two-second steps - a FAT inheritance that survives into the package format.
uint64_t decode_fat_timestamp(uint16_t date, uint16_t time) noexcept {
    std::tm parts{};
    parts.tm_year = ((date & 0xFE00) >> 9) + 80; // 1980 -> years since 1900
    parts.tm_mon = ((date & 0x01E0) >> 5) - 1;
    parts.tm_mday = (date & 0x001F);
    parts.tm_hour = (time & 0xF800) >> 11;
    parts.tm_min = (time & 0x07E0) >> 5;
    parts.tm_sec = (time & 0x001F) * 2;
    parts.tm_isdst = 0;
    const std::time_t seconds = ::timegm(&parts);
    if (seconds == static_cast<std::time_t>(-1)) return 0;
    return unix_time_to_file_time(static_cast<int64_t>(seconds));
}

char lower(char c) noexcept {
    return (c >= 'A' && c <= 'Z') ? static_cast<char>(c - 'A' + 'a') : c;
}

// Normalised for comparison: separators unified to '\', case folded, leading
// and trailing separators dropped, and a run of separators collapsed to one. A
// title is inconsistent about all four, and the last one is not hypothetical:
// the CRT's FindFirstFile splits "game:\data\menu\logo2.bin" into a directory
// that KEEPS its trailing separator and a leaf, so anything that joins the two
// back together produces "data\menu\\logo2.bin". This is what Xenia's
// `fix_path_separators` does - it "removes redundant separators" - and every
// guest path there goes through it before a lookup.
std::string normalise(const std::string& path) {
    std::string out;
    out.reserve(path.size());
    for (char c : path) {
        const char normalised = lower(c == '/' ? '\\' : c);
        if (normalised == '\\' && !out.empty() && out.back() == '\\') continue;
        out.push_back(normalised);
    }
    std::size_t start = 0;
    while (start < out.size() && out[start] == '\\') ++start;
    std::size_t end = out.size();
    while (end > start && out[end - 1] == '\\') --end;
    return out.substr(start, end - start);
}

} // namespace

bool stfs_package::read_at(uint64_t offset, void* out, std::size_t size) const {
    m_stream.clear();
    m_stream.seekg(static_cast<std::streamoff>(offset));
    if (!m_stream) return false;
    m_stream.read(static_cast<char*>(out), static_cast<std::streamsize>(size));
    return static_cast<std::size_t>(m_stream.gcount()) == size;
}

// Count the hash tables that precede a data block. One level-0 table covers
// 170 blocks, one level-1 table covers 170 of those, one level-2 table covers
// 170 of those; each is itself stored in the data area, so each pushes every
// later block further along.
uint64_t stfs_package::block_to_offset(uint64_t block_index) const noexcept {
    uint64_t base = kBlocksPerHashLevel[0];
    uint64_t block = block_index;
    for (uint32_t level = 0; level < 3; ++level) {
        block += ((block_index + base) / base) * m_blocks_per_table;
        if (block_index < base) break;
        base *= kBlocksPerHashLevel[0];
    }
    return m_data_start + (block << 12);
}

uint64_t stfs_package::hash_block_offset(uint32_t block_index,
                                         uint32_t level) const noexcept {
    uint64_t block = 0;
    if (level == 0) {
        if (block_index < kBlocksPerHashLevel[0]) {
            block = 0;
        } else {
            block = (block_index / kBlocksPerHashLevel[0]) * m_block_step[0];
            block += (static_cast<uint64_t>(block_index /
                                            kBlocksPerHashLevel[1]) +
                      1) *
                     m_blocks_per_table;
            if (block_index >= kBlocksPerHashLevel[1])
                block += m_blocks_per_table;
        }
    } else if (level == 1) {
        if (block_index < kBlocksPerHashLevel[1]) {
            block = m_block_step[0];
        } else {
            block = (block_index / kBlocksPerHashLevel[1]) * m_block_step[1];
            block += m_blocks_per_table;
        }
    } else {
        block = m_block_step[1];
    }
    return m_data_start + (block << 12);
}

bool stfs_package::hash_entry(uint32_t block_index, uint8_t out[0x18]) const {
    // Packages that are not read-only keep two copies of every hash table and
    // record which is live in the level above, so the upper levels have to be
    // consulted before the level-0 table can even be located. A read-only
    // package - which every shipped title is - has a single copy.
    uint64_t secondary = m_root_active ? kBlockSize : 0;
    if (m_read_only) {
        secondary = 0;
    } else {
        if (m_total_blocks > kBlocksPerHashLevel[0]) {
            if (m_total_blocks > kBlocksPerHashLevel[1]) {
                uint8_t table[0x18];
                const uint32_t record =
                    (block_index / kBlocksPerHashLevel[1]) %
                    kBlocksPerHashLevel[0];
                if (!read_at(hash_block_offset(block_index, 2) + secondary +
                                 record * 0x18,
                             table, sizeof(table)))
                    return false;
                secondary = (load_u32_be(table + 0x14) & 0x40000000) != 0
                                ? kBlockSize
                                : 0;
            }
            uint8_t table[0x18];
            const uint32_t record =
                (block_index / kBlocksPerHashLevel[0]) % kBlocksPerHashLevel[0];
            if (!read_at(hash_block_offset(block_index, 1) + secondary +
                             record * 0x18,
                         table, sizeof(table)))
                return false;
            secondary =
                (load_u32_be(table + 0x14) & 0x40000000) != 0 ? kBlockSize : 0;
        }
    }
    const uint32_t record = block_index % kBlocksPerHashLevel[0];
    return read_at(hash_block_offset(block_index, 0) + secondary + record * 0x18,
                   out, 0x18);
}

uint32_t stfs_package::next_block(uint32_t block_index, bool& ok) const {
    uint8_t entry[0x18];
    if (!hash_entry(block_index, entry)) {
        ok = false;
        return kEndOfChain;
    }
    ok = true;
    // The next block is the low 24 bits of the info word; the top two bits are
    // the allocation state, which a shipped package always has set to in-use.
    return load_u32_be(entry + 0x14) & 0xFFFFFF;
}

bool stfs_package::open(const std::string& path, std::string& error) {
    const std::lock_guard<std::mutex> lock(m_mutex);
    close_locked();
    m_stream.open(path, std::ios::binary);
    if (!m_stream) {
        error = "cannot open " + path;
        return false;
    }

    uint8_t magic[4];
    if (!read_at(kMagicOffset, magic, sizeof(magic))) {
        error = "package is too small to hold a header";
        close_locked();
        return false;
    }
    const uint32_t signature = load_u32_be(magic);
    if (signature != 0x4C495645u /*LIVE*/ && signature != 0x434F4E20u /*CON */ &&
        signature != 0x50495253u /*PIRS*/) {
        error = "not an STFS package (bad magic)";
        close_locked();
        return false;
    }

    uint8_t word[4];
    if (!read_at(kHeaderSizeOffset, word, sizeof(word))) {
        error = "cannot read the header size";
        close_locked();
        return false;
    }
    m_data_start = round_up(load_u32_be(word), kBlockSize);

    if (!read_at(kVolumeTypeOffset, word, sizeof(word))) {
        error = "cannot read the volume type";
        close_locked();
        return false;
    }
    if (load_u32_be(word) != 0) {
        // SVOD packages hold their data in a set of side files rather than
        // blocks in this one; nothing here would read them correctly.
        error = "package is SVOD, not STFS";
        close_locked();
        return false;
    }

    if (read_at(kTitleIdOffset, word, sizeof(word))) m_title_id = load_u32_be(word);

    uint8_t descriptor[0x24];
    if (!read_at(kVolumeDescriptorOffset, descriptor, sizeof(descriptor))) {
        error = "cannot read the volume descriptor";
        close_locked();
        return false;
    }
    if (descriptor[0] != sizeof(descriptor)) {
        error = "volume descriptor has an unexpected length";
        close_locked();
        return false;
    }
    // Bit 0: a read-only package keeps one backing block per hash table rather
    // than two. Bit 1: which copy of the top-level table is live.
    m_read_only = (descriptor[2] & 0x01) != 0;
    m_root_active = (descriptor[2] & 0x02) != 0;
    m_blocks_per_table = m_read_only ? 1 : 2;
    m_block_step[0] = kBlocksPerHashLevel[0] + m_blocks_per_table;
    m_block_step[1] = kBlocksPerHashLevel[1] +
                      ((kBlocksPerHashLevel[0] + 1) * m_blocks_per_table);
    m_directory_block_count = load_u16_le(descriptor + 3);
    m_directory_block = load_u24_le(descriptor + 5);
    m_total_blocks = load_u32_be(descriptor + 0x1C);

    if (!read_directory(error)) {
        close_locked();
        return false;
    }
    return true;
}

bool stfs_package::read_directory(std::string& error) {
    m_entries.clear();
    // Entries name their parent by its index in this list, and a child can
    // appear before its parent has been given a path, so paths are filled in
    // after every entry is known.
    std::vector<uint16_t> parents;

    uint32_t block = m_directory_block;
    for (uint32_t n = 0; n < m_directory_block_count; ++n) {
        std::vector<uint8_t> directory(kBlockSize);
        if (!read_at(block_to_offset(block), directory.data(), directory.size())) {
            error = "cannot read a directory block";
            return false;
        }
        bool finished = false;
        for (uint32_t i = 0; i < kEntriesPerDirectoryBlock; ++i) {
            const uint8_t* raw = directory.data() + i * kDirectoryEntrySize;
            if (raw[0] == 0) { // an empty name ends the directory
                finished = true;
                break;
            }
            const uint8_t flags = raw[0x28];
            stfs_entry entry;
            entry.name.assign(reinterpret_cast<const char*>(raw), flags & 0x3F);
            entry.directory = (flags & 0x80) != 0;
            entry.size = load_u32_be(raw + 0x34);
            entry.create_time =
                decode_fat_timestamp(load_u16_be(raw + 0x38), load_u16_be(raw + 0x3A));
            entry.write_time =
                decode_fat_timestamp(load_u16_be(raw + 0x3C), load_u16_be(raw + 0x3E));

            if (!entry.directory && entry.size != 0) {
                // Walk the chain rather than trusting the "contiguous" flag:
                // it is advisory, and a wrong assumption here reads another
                // file's bytes rather than failing.
                uint32_t data_block = load_u24_le(raw + 0x2F);
                uint64_t remaining = entry.size;
                while (remaining != 0 && data_block != kEndOfChain) {
                    entry.block_offsets.push_back(block_to_offset(data_block));
                    remaining -= std::min<uint64_t>(kBlockSize, remaining);
                    bool ok = false;
                    data_block = next_block(data_block, ok);
                    if (!ok) {
                        error = "cannot follow the block chain for " + entry.name;
                        return false;
                    }
                }
                if (remaining != 0) {
                    error = "block chain for " + entry.name + " ended early";
                    return false;
                }
            }
            parents.push_back(load_u16_be(raw + 0x32));
            m_entries.push_back(std::move(entry));
        }
        if (finished) break;

        bool ok = false;
        block = next_block(block, ok);
        if (!ok || block == kEndOfChain) break;
    }

    for (std::size_t i = 0; i < m_entries.size(); ++i) {
        std::string path = m_entries[i].name;
        // Bounded by the entry count: a self-referential or cyclic parent
        // index would otherwise spin here rather than produce a bad path.
        uint16_t parent = parents[i];
        for (std::size_t depth = 0;
             parent != kRootDirectoryIndex && parent < m_entries.size() &&
             depth <= m_entries.size();
             ++depth) {
            path = m_entries[parent].name + "\\" + path;
            const uint16_t next = parents[parent];
            if (next == parent) break;
            parent = next;
        }
        m_entries[i].path = std::move(path);
    }
    return true;
}

void stfs_package::close() {
    const std::lock_guard<std::mutex> lock(m_mutex);
    close_locked();
}

// The caller already holds the lock. open() needs this because it closes any
// previous package and closes again on every failure path, and taking a
// non-recursive mutex twice deadlocks rather than failing visibly.
void stfs_package::close_locked() {
    if (m_stream.is_open()) m_stream.close();
    m_entries.clear();
}

const stfs_entry* stfs_package::find(const std::string& path) const {
    const std::string wanted = normalise(path);
    if (wanted.empty()) return nullptr;
    for (const stfs_entry& entry : m_entries)
        if (normalise(entry.path) == wanted) return &entry;
    return nullptr;
}

std::vector<const stfs_entry*>
stfs_package::children_of(const std::string& directory_path) const {
    const std::string parent = normalise(directory_path);
    std::vector<const stfs_entry*> children;
    for (const stfs_entry& entry : m_entries) {
        const std::string path = normalise(entry.path);
        if (path.size() <= parent.size()) continue;
        if (!parent.empty()) {
            if (path.compare(0, parent.size(), parent) != 0) continue;
            if (path[parent.size()] != '\\') continue;
        }
        // Direct children only: nothing further down the tree.
        const std::size_t start = parent.empty() ? 0 : parent.size() + 1;
        if (path.find('\\', start) != std::string::npos) continue;
        children.push_back(&entry);
    }
    return children;
}

uint32_t stfs_package::read(const stfs_entry& entry, void* out, uint32_t size,
                            uint64_t offset) const {
    if (entry.directory || offset >= entry.size) return 0;
    const uint64_t available = entry.size - offset;
    if (size > available) size = static_cast<uint32_t>(available);

    const std::lock_guard<std::mutex> lock(m_mutex);
    uint8_t* cursor = static_cast<uint8_t*>(out);
    uint32_t done = 0;
    while (done < size) {
        const uint64_t position = offset + done;
        const std::size_t block = static_cast<std::size_t>(position / kBlockSize);
        if (block >= entry.block_offsets.size()) break;
        const uint32_t within = static_cast<uint32_t>(position % kBlockSize);
        const uint32_t chunk = std::min(kBlockSize - within, size - done);
        if (!read_at(entry.block_offsets[block] + within, cursor + done, chunk))
            break;
        done += chunk;
    }
    return done;
}

} // namespace whitty_xenon
