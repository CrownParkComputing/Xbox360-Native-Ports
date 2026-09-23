// texture_tile.h - the Xenos texture memory layout.
//
// Xenos textures are not stored row by row. To spread accesses across the
// memory banks and pipes, texels are shuffled through a tiled address function:
// a macro-tile grid on the outside, an 8x8 block pattern on the inside, and a
// bank/pipe swizzle derived from the coordinates. A backend that wants to upload
// a texture has to undo this - read each texel from its tiled offset and write
// it into a linear image - so it needs the exact function that maps a texel
// coordinate to its byte offset.
//
// This is that function, ported from Xenia's texture_address::Tiled2D. It works
// in blocks (a block is one texel for uncompressed formats, a 4x4 group for the
// DXT ones), and the pitch must already be aligned to the 32-block macro tile.
#pragma once

#include <cstdint>

namespace whitty_xenon::gpu {

// The macro tile is 32x32 blocks; a texture's pitch is aligned to it.
inline constexpr uint32_t kTextureMacroTileBlocks = 32;

// Interleaves the bank/pipe/y-low bits into the address the way the hardware
// does (Xenia's texture_address::TiledCombine).
inline uint32_t tiled_combine(uint32_t outer_inner_bytes, uint32_t bank,
                              uint32_t pipe, uint32_t y_lsb) noexcept {
    return ((y_lsb << 4) | (pipe << 6) | (bank << 11)) |
           (outer_inner_bytes & 0xF) |
           (((outer_inner_bytes >> 4) & 0x1) << 5) |
           (((outer_inner_bytes >> 5) & 0x7) << 8) |
           ((outer_inner_bytes >> 8) << 12);
}

// The byte offset of block (x, y) within a 2D tiled texture whose pitch is
// `pitch_blocks` (blocks, a multiple of 32) and whose block is
// 2^bytes_per_block_log2 bytes.
//
// Defined here rather than in a translation unit of its own because it is
// called once per TEXEL - a quarter of a million times for one 512x512 texture,
// and this project builds without link-time optimisation, so out of line it is
// a real call with real spills. Measured on its own it cost 2.8ns a texel,
// which on the textures one frame of Space Giraffe unpacks is over two
// milliseconds of the sixteen the frame had.
inline uint32_t tiled_offset_2d(uint32_t x, uint32_t y, uint32_t pitch_blocks,
                                uint32_t bytes_per_block_log2) noexcept {
    // Outer: which macro tile, times 64 blocks per macro tile in the address
    // space. Inner: the 8x8 block position within it.
    const uint32_t outer_blocks =
        ((y >> 5) * (pitch_blocks >> 5) + (x >> 5)) << 6;
    const uint32_t inner_blocks = (((y >> 1) & 0x7) << 3) | (x & 0x7);
    const uint32_t outer_inner_bytes =
        (outer_blocks | inner_blocks) << bytes_per_block_log2;

    const uint32_t bank = (y >> 4) & 0x1;
    const uint32_t pipe = ((x >> 3) & 0x3) ^ (((y >> 3) & 0x1) << 1);
    return tiled_combine(outer_inner_bytes, bank, pipe, y & 0x1);
}

} // namespace whitty_xenon::gpu
