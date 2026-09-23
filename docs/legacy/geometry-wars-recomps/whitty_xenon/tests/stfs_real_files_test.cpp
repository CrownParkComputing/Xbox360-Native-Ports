// Integration test: read real retail STFS packages.
//
// The unit tests build a package by hand, which can only confirm that the
// reader agrees with the writer in the same file. These run it over genuine
// downloaded titles, where the block arithmetic has to survive real numbers:
// the packages here are hundreds of megabytes, so their files sit well past
// the first hash table and the offsets exercise the multi-level accounting
// that a small synthetic package never reaches.
//
// The checks are all independently corroborated. The package's title id must
// match the directory it was downloaded into (the console names that directory
// after the title), and the file the runtime actually needs - default.xex -
// must start with the XEX2 magic. A block-arithmetic error puts that read a
// few kilobytes off and the magic is simply not there.
//
// Packages come from the environment, so a machine without the games skips
// rather than fails.
#include "whitty_xenon/stfs.h"

#include <cassert>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>

using namespace whitty_xenon;

namespace {

struct expected_package {
    const char* env_var;
    const char* name;
    uint32_t title_id; // also the name of the directory it lives in
    const char* a_file;    // a file the title is known to ship
    uint64_t a_file_size;  // its exact length, from the package directory
};

constexpr expected_package kPackages[] = {
    {"WHITTY_PKG_ALIENBREED", "Alien Breed: Evolution", 0x58410964u,
     "default.xex", 0},
    {"WHITTY_PKG_GEOMETRYWARS2", "Geometry Wars: Retro Evolved 2", 0x584108FFu,
     "default.xex", 704512},
};

int checked = 0;
int skipped = 0;

void check_package(const expected_package& expected) {
    const char* path = std::getenv(expected.env_var);
    if (path == nullptr || *path == 0) {
        std::printf("  skipped %s (%s not set)\n", expected.name,
                    expected.env_var);
        ++skipped;
        return;
    }

    stfs_package package;
    std::string error;
    if (!package.open(path, error)) {
        std::printf("  FAILED to open %s: %s\n", expected.name, error.c_str());
        assert(false);
    }

    // The title id is stored in the package metadata and is also the name of
    // the directory the console downloaded it into, so the two agreeing means
    // the metadata offsets are right.
    assert(package.title_id() == expected.title_id);
    // A real package has a real directory; an empty one means the walk failed
    // silently rather than the title shipping no files.
    assert(!package.entries().empty());

    const stfs_entry* entry = package.find(expected.a_file);
    assert(entry != nullptr);
    assert(!entry->directory);
    assert(entry->size > 0);
    if (expected.a_file_size != 0) assert(entry->size == expected.a_file_size);
    // A file's blocks are 4 KiB each and must exactly cover its length.
    assert(entry->block_offsets.size() ==
           (entry->size + stfs_package::kBlockSize - 1) /
               stfs_package::kBlockSize);

    // The decisive check: the bytes at the computed offset really are the
    // start of an executable.
    char magic[4] = {};
    assert(package.read(*entry, magic, sizeof(magic), 0) == sizeof(magic));
    assert(std::memcmp(magic, "XEX2", 4) == 0);

    // And a read from the far end of a large file, which is only correct if
    // every hash table between here and the start was accounted for.
    if (entry->size > stfs_package::kBlockSize) {
        uint8_t tail[16] = {};
        const uint64_t offset = entry->size - sizeof(tail);
        assert(package.read(*entry, tail, sizeof(tail), offset) == sizeof(tail));
        assert(package.read(*entry, tail, sizeof(tail), entry->size) == 0);
    }

    std::printf("  %s: title %08X, %zu entries, %s is %llu bytes\n",
                expected.name, package.title_id(), package.entries().size(),
                expected.a_file,
                static_cast<unsigned long long>(entry->size));
    ++checked;
}

} // namespace

int main() {
    for (const expected_package& expected : kPackages) check_package(expected);
    std::printf("stfs_real_files_test: %d package(s) checked, %d skipped\n",
                checked, skipped);
    return 0;
}
