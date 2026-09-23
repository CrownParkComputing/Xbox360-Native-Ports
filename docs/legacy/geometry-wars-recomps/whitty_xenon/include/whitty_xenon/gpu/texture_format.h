// texture_format.h - the memory layout of a Xenos texture format.
//
// A texture fetch constant names one of the Xenos texture formats. To upload a
// texture - to walk its tiled memory and hand the texels to the host GPU - a
// backend needs to know how big a block is and, for the compressed DXT formats,
// that a block covers a 4x4 group of texels rather than one. This decodes the
// format into that layout.
#pragma once

#include <cstdint>

namespace whitty_xenon::gpu {

// Xenos texture formats (subset, from Xenia's TextureFormat).
enum class texture_format : uint8_t {
    k_8 = 2,
    k_1_5_5_5 = 3,
    k_5_6_5 = 4,
    k_8_8_8_8 = 6,
    k_2_10_10_10 = 7,
    k_8_8 = 10,
    k_4_4_4_4 = 15,
    k_10_11_11 = 16,
    k_11_11_10 = 17,
    k_DXT1 = 18,
    k_DXT2_3 = 19,
    k_DXT4_5 = 20,
    k_16 = 24,
    k_16_16 = 25,
    k_16_16_16_16 = 26,
    k_16_float = 30,
    k_16_16_float = 31,
    k_16_16_16_16_float = 32,
    k_32_float = 36,
    k_32_32_float = 37,
    k_32_32_32_32_float = 38,
    // Two BC4-style interpolated-alpha halves, read as red and green. Xenos's
    // normal-map format; the same bits a host calls BC5.
    k_DXN = 49,
    // Ordinary DXT blocks with a note to the sampler that it expands them to
    // 16:16:16:16 internally. Nothing about the memory changes, so they decode
    // as their base format - see k_2_10_10_10_as_16_16_16_16 above.
    k_DXT1_as_16_16_16_16 = 51,
    k_DXT2_3_as_16_16_16_16 = 52,
    k_DXT4_5_as_16_16_16_16 = 53,
    // The "_AS_" formats are not layouts of their own: they are an ordinary
    // packed format with a note to the sampler about what it expands to
    // internally. In memory a k_2_10_10_10_AS_16_16_16_16 texel is exactly a
    // k_2_10_10_10 one, so it reads the same way - and rejecting the number
    // because it is not the plain format's is a texture dropped for nothing.
    k_2_10_10_10_as_16_16_16_16 = 54,
    k_DXT3A = 58,
    k_DXT5A = 59,
    // Two 8-bit endpoints per channel and DXT1's index weighting, read as red
    // and green. Not a 5:6:5 format despite the block being DXT1-sized.
    k_CTX1 = 60,
    // A DXT3 alpha half whose four bits per texel are a 1:1:1:1 texel rather
    // than one alpha value.
    k_DXT3A_as_1_1_1_1 = 61,
};

struct texture_format_info {
    uint32_t bytes_per_block{0}; // size of one block in bytes
    uint32_t block_width{1};     // texels a block spans horizontally
    uint32_t block_height{1};    // texels a block spans vertically
    bool compressed{false};      // a DXT block-compressed format
};

// Decodes a texture format's block layout. An unknown format returns zeroes.
texture_format_info decode_texture_format(texture_format format) noexcept;

} // namespace whitty_xenon::gpu
