#include "whitty_xenon/gpu/fetch.h"

namespace whitty_xenon::gpu {
namespace {

// Sign-extends the low `bits` of `value` to a 32-bit signed integer.
int32_t sign_extend(uint32_t value, uint32_t bits) noexcept {
    const uint32_t mask = 1u << (bits - 1);
    value &= (bits >= 32) ? 0xFFFFFFFFu : ((1u << bits) - 1);
    return static_cast<int32_t>((value ^ mask) - mask);
}

} // namespace

fetch_opcode decode_fetch_opcode(const uint32_t* dwords) noexcept {
    return static_cast<fetch_opcode>(dwords[0] & 0x1F);
}

vertex_fetch_instruction decode_vertex_fetch_instruction(
    const uint32_t* dwords) noexcept {
    const uint32_t d0 = dwords[0];
    const uint32_t d1 = dwords[1];
    const uint32_t d2 = dwords[2];

    vertex_fetch_instruction vf;
    vf.opcode = static_cast<fetch_opcode>(d0 & 0x1F);
    vf.src_reg = static_cast<uint8_t>((d0 >> 5) & 0x3F);
    vf.dst_reg = static_cast<uint8_t>((d0 >> 12) & 0x3F);
    // The fetch constant is addressed by TWO fields, not one: a 5-bit index and
    // a 2-bit selector, combined as index * 3 + selector to reach a slot in
    // [0, 95]. Taking the 5-bit field alone reads slot 31 where the shader
    // meant slot 93, which is a different vertex buffer entirely - or, far more
    // often, an empty one.
    vf.const_index = static_cast<uint8_t>(((d0 >> 20) & 0x1F) * 3 +
                                          ((d0 >> 25) & 0x3));
    vf.prefetch_count = static_cast<uint8_t>((d0 >> 27) & 0x7);
    vf.src_swizzle = static_cast<uint8_t>((d0 >> 30) & 0x3);

    vf.dst_swizzle = static_cast<uint16_t>(d1 & 0xFFF);
    vf.format = static_cast<uint8_t>((d1 >> 16) & 0x3F);
    vf.exp_adjust = sign_extend((d1 >> 24) & 0x3F, 6);
    // A mini fetch reuses the address, stride and source of the full fetch
    // before it, so its own const_index, src_reg and stride mean nothing.
    vf.is_mini_fetch = (d1 >> 30) & 0x1;
    vf.is_predicated = (d1 >> 31) & 0x1;

    vf.stride = static_cast<uint8_t>(d2 & 0xFF);
    vf.offset = sign_extend((d2 >> 8) & 0x7FFFFF, 23);
    vf.predicate_condition = (d2 >> 31) & 0x1;
    return vf;
}

texture_fetch_instruction decode_texture_fetch_instruction(
    const uint32_t* dwords) noexcept {
    const uint32_t d0 = dwords[0];
    const uint32_t d1 = dwords[1];
    const uint32_t d2 = dwords[2];

    texture_fetch_instruction tf;
    tf.opcode = static_cast<fetch_opcode>(d0 & 0x1F);
    tf.src_reg = static_cast<uint8_t>((d0 >> 5) & 0x3F);
    tf.dst_reg = static_cast<uint8_t>((d0 >> 12) & 0x3F);
    tf.fetch_constant_index = static_cast<uint8_t>((d0 >> 20) & 0x1F);
    tf.src_swizzle = static_cast<uint8_t>((d0 >> 26) & 0x3F);

    tf.dst_swizzle = static_cast<uint16_t>(d1 & 0xFFF);
    // The per-instruction filter override, immediately above the destination
    // swizzle. Two bits each for mag, min and mip; three for anisotropy.
    tf.mag_filter = static_cast<texture_filter>((d1 >> 12) & 0x3);
    tf.min_filter = static_cast<texture_filter>((d1 >> 14) & 0x3);
    tf.mip_filter = static_cast<texture_filter>((d1 >> 16) & 0x3);
    tf.aniso_filter = static_cast<texture_aniso_filter>((d1 >> 18) & 0x7);
    tf.is_predicated = (d1 >> 31) & 0x1;

    tf.dimension = static_cast<fetch_dimension>((d2 >> 14) & 0x3);
    tf.offset_x = sign_extend((d2 >> 16) & 0x1F, 5);
    tf.offset_y = sign_extend((d2 >> 21) & 0x1F, 5);
    tf.offset_z = sign_extend((d2 >> 26) & 0x1F, 5);
    tf.predicate_condition = (d2 >> 31) & 0x1;
    return tf;
}

} // namespace whitty_xenon::gpu
