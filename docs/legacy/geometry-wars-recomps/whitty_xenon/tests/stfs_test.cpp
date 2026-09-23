// Unit tests for the STFS package reader.
//
// The package format's whole difficulty is arithmetic: a block number becomes
// an offset only after counting the hash tables that precede it, and a file's
// blocks are a linked list rather than a run. Both failure modes are silent -
// a wrong offset or an assumed-contiguous chain reads a neighbouring file's
// bytes and returns them as if they were right - so the package built here is
// laid out to catch exactly that. One file is deliberately split across two
// non-adjacent blocks with a different file's block sitting between them, and
// the test reads across that seam. A reader that ignores the chain gets the
// wrong bytes from the middle of the read rather than an error.
#include "whitty_xenon/stfs.h"

#include "whitty_xenon/file_system.h"

#include <memory>

#include <cassert>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <string>
#include <vector>

using namespace whitty_xenon;

namespace {

constexpr uint32_t kBlockSize = stfs_package::kBlockSize;
constexpr uint32_t kHeaderSize = 0xB000; // already block-aligned
constexpr uint32_t kEndOfChain = 0xFFFFFF;

// With one backing block per hash table, block N of the data area lands at
// header + (N + 1) * 0x1000: the single level-0 hash table occupies the first
// block. So block 0 is at 0xC000, block 1 at 0xD000, and so on.
uint64_t block_offset(uint32_t block) { return kHeaderSize + (block + 1) * kBlockSize; }
uint64_t hash_table_offset() { return kHeaderSize; }

void put_u32_be(std::vector<uint8_t>& image, uint64_t at, uint32_t value) {
    image[at + 0] = static_cast<uint8_t>(value >> 24);
    image[at + 1] = static_cast<uint8_t>(value >> 16);
    image[at + 2] = static_cast<uint8_t>(value >> 8);
    image[at + 3] = static_cast<uint8_t>(value);
}
void put_u16_be(std::vector<uint8_t>& image, uint64_t at, uint16_t value) {
    image[at + 0] = static_cast<uint8_t>(value >> 8);
    image[at + 1] = static_cast<uint8_t>(value);
}
void put_u24_le(std::vector<uint8_t>& image, uint64_t at, uint32_t value) {
    image[at + 0] = static_cast<uint8_t>(value);
    image[at + 1] = static_cast<uint8_t>(value >> 8);
    image[at + 2] = static_cast<uint8_t>(value >> 16);
}

// The chain pointer for a block lives in the low 24 bits of its hash entry's
// info word; the top bits are the allocation state, set to in-use here as a
// shipped package has them.
void set_chain(std::vector<uint8_t>& image, uint32_t block, uint32_t next) {
    put_u32_be(image, hash_table_offset() + block * 0x18 + 0x14,
               0x80000000u | (next & 0xFFFFFF));
}

struct entry_spec {
    const char* name;
    bool directory;
    uint32_t start_block;
    uint32_t size;
    uint16_t parent; // 0xFFFF for the root
};

void write_directory_entry(std::vector<uint8_t>& image, uint32_t index,
                           const entry_spec& spec) {
    const uint64_t at = block_offset(0) + index * 0x40;
    const std::size_t length = std::strlen(spec.name);
    std::memcpy(&image[at], spec.name, length);
    image[at + 0x28] =
        static_cast<uint8_t>((length & 0x3F) | (spec.directory ? 0x80 : 0x00));
    put_u24_le(image, at + 0x29, (spec.size + kBlockSize - 1) / kBlockSize);
    put_u24_le(image, at + 0x2C, (spec.size + kBlockSize - 1) / kBlockSize);
    put_u24_le(image, at + 0x2F, spec.start_block);
    put_u16_be(image, at + 0x32, spec.parent);
    put_u32_be(image, at + 0x34, spec.size);
    // 2010-03-11 12:30:20, packed as FAT date and time.
    put_u16_be(image, at + 0x38, 0x3C6B);
    put_u16_be(image, at + 0x3A, 0x63CA);
    put_u16_be(image, at + 0x3C, 0x3C6B);
    put_u16_be(image, at + 0x3E, 0x63CA);
}

// Bytes of the split file: a position-dependent pattern, so reading the wrong
// block returns visibly wrong values rather than plausible ones.
uint8_t split_byte(std::size_t i) { return static_cast<uint8_t>((i * 7 + 3) & 0xFF); }

constexpr uint32_t kSplitSize = 6000; // two blocks

// Blocks: 0 directory, 1 hello.txt, 2 split.bin part one, 3 inner.txt,
// 4 split.bin part two. Block 3 sits between the two halves on purpose.
std::string build_package(const char* path, uint32_t magic = 0x4C495645u) {
    std::vector<uint8_t> image(block_offset(5), 0);

    put_u32_be(image, 0x000, magic);
    put_u32_be(image, 0x340, kHeaderSize);
    put_u32_be(image, 0x344 + 0x0C + 0x10, 0x58410964u); // title id
    put_u32_be(image, 0x344 + 0x61, 0);                  // volume type: STFS

    const uint64_t descriptor = 0x344 + 0x35;
    image[descriptor + 0] = 0x24; // descriptor length
    image[descriptor + 1] = 0;    // version
    image[descriptor + 2] = 0x01; // read-only: one block per hash table
    image[descriptor + 3] = 1;    // file table block count (little-endian u16)
    image[descriptor + 4] = 0;
    put_u24_le(image, descriptor + 5, 0); // file table starts at block 0
    put_u32_be(image, descriptor + 0x1C, 5); // total block count

    const entry_spec entries[] = {
        {"hello.txt", false, 1, 5, 0xFFFF},
        {"split.bin", false, 2, kSplitSize, 0xFFFF},
        {"sub", true, 0, 0, 0xFFFF},
        {"inner.txt", false, 3, 6, 2},
    };
    for (uint32_t i = 0; i < 4; ++i) write_directory_entry(image, i, entries[i]);

    set_chain(image, 0, kEndOfChain); // the directory itself
    set_chain(image, 1, kEndOfChain);
    set_chain(image, 2, 4); // split.bin jumps over block 3
    set_chain(image, 3, kEndOfChain);
    set_chain(image, 4, kEndOfChain);

    std::memcpy(&image[block_offset(1)], "hello", 5);
    std::memcpy(&image[block_offset(3)], "inner!", 6);
    for (std::size_t i = 0; i < kSplitSize; ++i) {
        const uint64_t at = i < kBlockSize ? block_offset(2) + i
                                           : block_offset(4) + (i - kBlockSize);
        image[at] = split_byte(i);
    }

    std::ofstream out(path, std::ios::binary);
    out.write(reinterpret_cast<const char*>(image.data()),
              static_cast<std::streamsize>(image.size()));
    out.close();
    return path;
}

std::string temp_path(const char* name) {
    const char* directory = std::getenv("TMPDIR");
    return std::string(directory ? directory : "/tmp") + "/" + name;
}

void test_directory_is_read_with_paths_and_types() {
    const std::string path = temp_path("whitty_stfs_basic.bin");
    build_package(path.c_str());
    stfs_package package;
    std::string error;
    assert(package.open(path, error));
    assert(package.title_id() == 0x58410964u);
    assert(package.total_block_count() == 5);
    assert(package.entries().size() == 4);

    const stfs_entry* hello = package.find("hello.txt");
    assert(hello != nullptr);
    assert(!hello->directory);
    assert(hello->size == 5);

    // A child names its parent by index, so its full path has to be rebuilt.
    const stfs_entry* inner = package.find("sub\\inner.txt");
    assert(inner != nullptr);
    assert(inner->path == "sub\\inner.txt");
    assert(package.find("sub")->directory);
    std::remove(path.c_str());
}

void test_lookup_is_forgiving_about_spelling() {
    const std::string path = temp_path("whitty_stfs_lookup.bin");
    build_package(path.c_str());
    stfs_package package;
    std::string error;
    assert(package.open(path, error));

    // A title spells its own paths inconsistently - case, separator and a
    // leading separator all vary - and every spelling names the same file.
    const stfs_entry* expected = package.find("sub\\inner.txt");
    assert(expected != nullptr);
    assert(package.find("SUB\\INNER.TXT") == expected);
    assert(package.find("sub/inner.txt") == expected);
    assert(package.find("\\sub\\inner.txt") == expected);
    assert(package.find("nothing.txt") == nullptr);
    // A directory's own name must not match a path below it.
    assert(package.find("sub\\missing.txt") == nullptr);
    // A redundant separator names the same file too. This is not a nicety: the
    // CRT's FindFirstFile splits a path into a directory that keeps its
    // trailing separator and a leaf, so anything that joins the two hands a
    // doubled separator to a lookup. Xenia's fix_path_separators removes
    // redundant separators for the same reason.
    assert(package.find("sub\\\\inner.txt") == expected);
    assert(package.find("sub//inner.txt") == expected);
    std::remove(path.c_str());
}

// Bubble Bobble Neo faulted here, and the crash was four calls away from the
// cause. Its CRT `stat` is FindFirstFile, which opens "game:\sub\" - trailing
// separator kept - and passes the leaf as the search pattern. The scan then
// joined the two back together, looked up "sub\\inner.txt", found nothing, and
// still reported the entry: SUCCESS, name right, size zero. The title's
// `fread` of zero bytes issued no read at all, and it parsed a table out of a
// buffer nothing had written.
void test_a_scan_of_a_directory_that_kept_its_separator_reports_real_sizes() {
    const std::string path = temp_path("whitty_stfs_trailing.bin");
    build_package(path.c_str());
    auto package = std::make_shared<stfs_package>();
    std::string error;
    assert(package->open(path, error));
    file_system files;
    files.mount_package("game:", package);

    const open_result scan =
        files.open(files.resolve_path("game:\\sub\\"),
                   file_disposition::open_existing, false, true, false);
    assert(scan.error == file_error::ok);
    assert(files.is_directory(scan.file_id));

    directory_entry entry;
    assert(files.next_directory_entry(scan.file_id, "inner.txt", true, entry));
    assert(entry.name == "inner.txt");
    // The whole point: a size of zero here is what sent the title into a
    // buffer it never filled.
    assert(entry.info.exists);
    assert(!entry.info.is_directory);
    assert(entry.info.size == 6);
    files.close(scan.file_id);
    std::remove(path.c_str());
}

void test_children_are_direct_children_only() {
    const std::string path = temp_path("whitty_stfs_children.bin");
    build_package(path.c_str());
    stfs_package package;
    std::string error;
    assert(package.open(path, error));

    // The root holds three entries; inner.txt is one level further down and
    // must not appear in the root's listing.
    assert(package.children_of("").size() == 3);
    const std::vector<const stfs_entry*> sub = package.children_of("sub");
    assert(sub.size() == 1);
    assert(sub[0]->name == "inner.txt");
    assert(package.children_of("hello.txt").empty());
    std::remove(path.c_str());
}

void test_reads_follow_the_block_chain() {
    const std::string path = temp_path("whitty_stfs_read.bin");
    build_package(path.c_str());
    stfs_package package;
    std::string error;
    assert(package.open(path, error));

    const stfs_entry* hello = package.find("hello.txt");
    char text[8] = {};
    assert(package.read(*hello, text, 5, 0) == 5);
    assert(std::string(text) == "hello");

    // The whole of the split file, in one read that crosses the block seam.
    const stfs_entry* split = package.find("split.bin");
    assert(split != nullptr);
    assert(split->block_offsets.size() == 2);
    std::vector<uint8_t> whole(kSplitSize);
    assert(package.read(*split, whole.data(), kSplitSize, 0) == kSplitSize);
    for (std::size_t i = 0; i < kSplitSize; ++i) assert(whole[i] == split_byte(i));

    // And a short read straddling the seam, which is where a reader that
    // assumed the blocks were adjacent returns another file's bytes.
    uint8_t seam[32] = {};
    assert(package.read(*split, seam, sizeof(seam), kBlockSize - 16) == sizeof(seam));
    for (std::size_t i = 0; i < sizeof(seam); ++i)
        assert(seam[i] == split_byte(kBlockSize - 16 + i));

    // Reads are clamped to the file, not to its blocks: the tail of the last
    // block belongs to no one.
    assert(package.read(*split, whole.data(), 100, kSplitSize - 10) == 10);
    assert(package.read(*split, whole.data(), 100, kSplitSize) == 0);
    std::remove(path.c_str());
}

void test_timestamps_decode_to_the_console_epoch() {
    const std::string path = temp_path("whitty_stfs_time.bin");
    build_package(path.c_str());
    stfs_package package;
    std::string error;
    assert(package.open(path, error));
    // 2010-03-11 12:30:20 UTC in 100ns ticks since 1601, computed
    // independently of the code under test.
    assert(package.find("hello.txt")->write_time == 129127842200000000ull);
    std::remove(path.c_str());
}

void test_bad_containers_are_refused() {
    stfs_package package;
    std::string error;
    assert(!package.open(temp_path("whitty_stfs_missing.bin"), error));

    // A file that is not a package at all must be rejected on its magic
    // rather than parsed into nonsense.
    const std::string path = temp_path("whitty_stfs_bad.bin");
    build_package(path.c_str(), 0x12345678u);
    assert(!package.open(path, error));
    assert(error.find("magic") != std::string::npos);
    assert(!package.is_open());
    std::remove(path.c_str());
}

// The package reader is only useful once a title can reach it through the
// ordinary file calls, and that path has its own ways to go wrong: a package
// mount must answer stat and directory scans as well as reads, and it must
// refuse writes rather than accept them and drop the bytes.
void test_a_package_mounts_as_a_device() {
    const std::string path = temp_path("whitty_stfs_mount.bin");
    build_package(path.c_str());
    auto package = std::make_shared<stfs_package>();
    std::string error;
    assert(package->open(path, error));

    file_system files;
    // The same package under two device names, as a title sees its disc.
    files.mount_package("game:", package);
    files.mount_package("d:", package);

    // Resolution reports which kind of mount answered, so nothing downstream
    // has to guess from the shape of the path.
    const resolved_path resolved = files.resolve_path("game:\\hello.txt");
    assert(resolved.from_package());
    assert(resolved.mounted());
    assert(resolved.entry != nullptr);
    assert(!files.resolve_path("x:\\hello.txt").mounted());

    // A file inside the package opens and reads through the normal calls.
    const open_result opened =
        files.open(resolved, file_disposition::open_existing, false, false, true);
    assert(opened.error == file_error::ok);
    char text[8] = {};
    assert(files.read(opened.file_id, text, 5, 0) == 5);
    assert(std::string(text) == "hello");
    assert(files.size_of(opened.file_id) == 5);
    assert(!files.is_writable(opened.file_id));
    // Package files are read-only and say so, because a title checks.
    assert(files.stat_of(opened.file_id).attributes & x_file_attribute::readonly);
    files.close(opened.file_id);

    // Both device names reach the same file.
    const resolved_path other = files.resolve_path("D:\\HELLO.TXT");
    assert(other.entry == resolved.entry);

    // A missing file is not found, rather than opening empty.
    assert(files.open(files.resolve_path("game:\\nope.txt"),
                      file_disposition::open_existing, false, false, true)
               .error == file_error::not_found);
    std::remove(path.c_str());
}

void test_a_package_is_read_only() {
    const std::string path = temp_path("whitty_stfs_ro.bin");
    build_package(path.c_str());
    auto package = std::make_shared<stfs_package>();
    std::string error;
    assert(package->open(path, error));
    file_system files;
    files.mount_package("game:", package);

    // Opening for write, creating, and truncating are all refused. Accepting
    // any of them would leave the title believing writes had landed.
    const resolved_path hello = files.resolve_path("game:\\hello.txt");
    assert(files.open(hello, file_disposition::open_existing, true, false, true)
               .error != file_error::ok);
    assert(files.open(hello, file_disposition::overwrite, false, false, true)
               .error != file_error::ok);
    assert(files.open(files.resolve_path("game:\\new.txt"),
                      file_disposition::create, true, false, true)
               .error != file_error::ok);
    std::remove(path.c_str());
}

void test_a_package_directory_can_be_scanned() {
    const std::string path = temp_path("whitty_stfs_scan.bin");
    build_package(path.c_str());
    auto package = std::make_shared<stfs_package>();
    std::string error;
    assert(package->open(path, error));
    file_system files;
    files.mount_package("game:", package);

    // The device root is a directory even though no entry describes it.
    const resolved_path root = files.resolve_path("game:\\");
    assert(files.stat(root).is_directory);
    const open_result scan =
        files.open(root, file_disposition::open_existing, false, true, false);
    assert(scan.error == file_error::ok);
    assert(files.is_directory(scan.file_id));

    int found = 0;
    directory_entry entry;
    while (files.next_directory_entry(scan.file_id, "", found == 0, entry)) {
        ++found;
        assert(entry.info.exists);
        if (entry.name == "sub") assert(entry.info.is_directory);
        if (entry.name == "hello.txt") assert(entry.info.size == 5);
    }
    assert(found == 3); // inner.txt is a level down and must not appear
    files.close(scan.file_id);

    // A filtered scan of the subdirectory.
    const open_result sub = files.open(files.resolve_path("game:\\sub"),
                                       file_disposition::open_existing, false,
                                       true, false);
    assert(sub.error == file_error::ok);
    assert(files.next_directory_entry(sub.file_id, "*.txt", true, entry));
    assert(entry.name == "inner.txt");
    assert(!files.next_directory_entry(sub.file_id, "", false, entry));
    files.close(sub.file_id);
    std::remove(path.c_str());
}

} // namespace

int main() {
    test_directory_is_read_with_paths_and_types();
    test_lookup_is_forgiving_about_spelling();
    test_children_are_direct_children_only();
    test_reads_follow_the_block_chain();
    test_timestamps_decode_to_the_console_epoch();
    test_bad_containers_are_refused();
    test_a_package_mounts_as_a_device();
    test_a_package_is_read_only();
    test_a_package_directory_can_be_scanned();
    test_a_scan_of_a_directory_that_kept_its_separator_reports_real_sizes();
    std::printf("stfs_test: all checks passed\n");
    return 0;
}
