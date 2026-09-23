// Unit tests for texture format decoding.
#include "whitty_xenon/gpu/texture_format.h"

#include <cassert>
#include <cstdio>

using namespace whitty_xenon::gpu;

namespace {

void test_uncompressed_sizes() {
    assert(decode_texture_format(texture_format::k_8).bytes_per_block == 1);
    assert(decode_texture_format(texture_format::k_5_6_5).bytes_per_block == 2);
    assert(decode_texture_format(texture_format::k_8_8_8_8).bytes_per_block == 4);
    assert(decode_texture_format(texture_format::k_16_16_16_16).bytes_per_block == 8);
    assert(decode_texture_format(texture_format::k_32_32_32_32_float).bytes_per_block == 16);
    // Uncompressed formats are one texel per block.
    const auto rgba = decode_texture_format(texture_format::k_8_8_8_8);
    assert(rgba.block_width == 1 && rgba.block_height == 1 && !rgba.compressed);
}

void test_compressed_blocks() {
    // DXT1 is an 8-byte block over a 4x4 texel group.
    const auto dxt1 = decode_texture_format(texture_format::k_DXT1);
    assert(dxt1.bytes_per_block == 8 && dxt1.block_width == 4 &&
           dxt1.block_height == 4 && dxt1.compressed);
    // DXT4/5 is 16 bytes per 4x4.
    const auto dxt5 = decode_texture_format(texture_format::k_DXT4_5);
    assert(dxt5.bytes_per_block == 16 && dxt5.block_width == 4 && dxt5.compressed);
}

void test_unknown_is_zeroed() {
    assert(decode_texture_format(static_cast<texture_format>(200)).bytes_per_block == 0);
}

} // namespace

int main() {
    test_uncompressed_sizes();
    test_compressed_blocks();
    test_unknown_is_zeroed();
    std::printf("texture_format_test: all checks passed\n");
    return 0;
}
