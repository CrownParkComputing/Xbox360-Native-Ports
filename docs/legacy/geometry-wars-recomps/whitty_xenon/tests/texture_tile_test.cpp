// Unit tests for the Xenos 2D texture tiling.
//
// The tiling function has no simple closed form to check against, so it is
// tested two ways: a few hand-traced coordinates whose offsets follow directly
// from the formula, and the property that must hold for any addressing scheme to
// be usable - within a texture it is injective, mapping every distinct block to a
// distinct byte offset (a collision would make two texels alias in memory). The
// formula itself is ported from Xenia, which is the reference.
#include "whitty_xenon/gpu/texture_tile.h"

#include <cassert>
#include <cstdint>
#include <cstdio>
#include <set>

using namespace whitty_xenon::gpu;

namespace {

void test_known_offsets() {
    // Block (0,0) is at the start.
    assert(tiled_offset_2d(0, 0, 32, 0) == 0);
    // Moving one block in x, within the inner 8x8, advances by one block.
    assert(tiled_offset_2d(1, 0, 32, 0) == 1);
    // Row 1 (y_lsb) is offset into a separate interleave lane.
    assert(tiled_offset_2d(0, 1, 32, 0) == 16);
    // The block byte size scales the inner address.
    assert(tiled_offset_2d(1, 0, 32, 2) == 4); // 4 bytes per block
}

// No two distinct blocks in a region may share a byte offset.
void assert_injective(uint32_t width, uint32_t height, uint32_t pitch,
                      uint32_t bpb_log2) {
    std::set<uint32_t> seen;
    for (uint32_t y = 0; y < height; ++y) {
        for (uint32_t x = 0; x < width; ++x) {
            const uint32_t off = tiled_offset_2d(x, y, pitch, bpb_log2);
            assert(seen.insert(off).second && "tiled offset collision");
        }
    }
}

void test_injective_within_a_macro_tile() {
    assert_injective(32, 32, 32, 0); // one macro tile, 1 byte/block
    assert_injective(32, 32, 32, 2); // 4 bytes/block
}

void test_injective_across_macro_tiles() {
    // A larger texture spanning several macro tiles in each direction.
    assert_injective(96, 64, 96, 2);
    assert_injective(128, 128, 128, 0);
}

void test_bytes_per_block_scales_inner_pattern() {
    // Two blocks that share a macro tile but differ in the inner pattern keep a
    // consistent 4x ratio when the block size grows from 1 to 4 bytes, for the
    // low bits the scale applies to.
    const uint32_t a1 = tiled_offset_2d(3, 0, 32, 0);
    const uint32_t a4 = tiled_offset_2d(3, 0, 32, 2);
    assert(a4 == a1 * 4); // (x & 7)=3 stays in the low nibble, so it scales
}

} // namespace

int main() {
    test_known_offsets();
    test_injective_within_a_macro_tile();
    test_injective_across_macro_tiles();
    test_bytes_per_block_scales_inner_pattern();
    std::printf("texture_tile_test: all checks passed\n");
    return 0;
}
