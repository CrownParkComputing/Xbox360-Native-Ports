#include "whitty_xenon/gpu/texture_format.h"

namespace whitty_xenon::gpu {

texture_format_info decode_texture_format(texture_format format) noexcept {
    switch (format) {
        // 8-bit-per-block.
        case texture_format::k_8: return {1, 1, 1, false};
        // 16-bit-per-block.
        case texture_format::k_1_5_5_5:
        case texture_format::k_5_6_5:
        case texture_format::k_8_8:
        case texture_format::k_4_4_4_4:
        case texture_format::k_16:
        case texture_format::k_16_float: return {2, 1, 1, false};
        // 32-bit-per-block.
        case texture_format::k_8_8_8_8:
        case texture_format::k_2_10_10_10:
        case texture_format::k_2_10_10_10_as_16_16_16_16:
        case texture_format::k_10_11_11:
        case texture_format::k_11_11_10:
        case texture_format::k_16_16:
        case texture_format::k_16_16_float:
        case texture_format::k_32_float: return {4, 1, 1, false};
        // 64-bit-per-block.
        case texture_format::k_16_16_16_16:
        case texture_format::k_16_16_16_16_float:
        case texture_format::k_32_32_float: return {8, 1, 1, false};
        // 128-bit-per-block.
        case texture_format::k_32_32_32_32_float: return {16, 1, 1, false};
        // Block-compressed: a 4x4 block of texels. Eight bytes a block where
        // the block carries one interpolated channel pair (DXT1's colours,
        // DXT3A/DXT5A/CTX1's single or paired values), sixteen where it carries
        // two - a colour half and an alpha half, or DXN's two.
        case texture_format::k_DXT1:
        case texture_format::k_DXT1_as_16_16_16_16:
        case texture_format::k_DXT3A:
        case texture_format::k_DXT5A:
        case texture_format::k_CTX1:
        case texture_format::k_DXT3A_as_1_1_1_1: return {8, 4, 4, true};
        case texture_format::k_DXT2_3:
        case texture_format::k_DXT2_3_as_16_16_16_16:
        case texture_format::k_DXT4_5:
        case texture_format::k_DXT4_5_as_16_16_16_16:
        case texture_format::k_DXN: return {16, 4, 4, true};
    }
    return {0, 1, 1, false};
}

} // namespace whitty_xenon::gpu
