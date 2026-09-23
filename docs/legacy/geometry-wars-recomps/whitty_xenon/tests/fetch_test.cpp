// Unit tests for the fetch instruction decoder.
//
// Fetch instructions carry several signed, sub-byte fields - a vertex fetch's
// exponent adjust and dword offset, a texture fetch's texel offsets - and those
// are where a decoder goes wrong: a missing sign extension turns a small
// negative offset into a large positive one. So the tests feed negative values
// through and assert they come back negative. As elsewhere, the instruction is
// assembled from symbolic fields independently of the decoder.
#include "whitty_xenon/gpu/fetch.h"

#include <cassert>
#include <cstdint>
#include <cstdio>

using namespace whitty_xenon::gpu;

namespace {

// Packs a vertex fetch from the fields the decoder reads (others left zero).
// The fetch constant is addressed by two separate fields, so both are given
// here and the decoder is expected to combine them.
void pack_vertex(fetch_opcode opcode, uint32_t src_reg, uint32_t dst_reg,
                 uint32_t const_index, uint32_t const_index_sel,
                 uint32_t prefetch, uint32_t src_swiz, uint32_t dst_swiz,
                 uint32_t format, int32_t exp_adjust, uint32_t stride,
                 int32_t offset, uint32_t mini_fetch, uint32_t predicated,
                 uint32_t out[3]) {
    out[0] = (static_cast<uint32_t>(opcode) & 0x1F) | ((src_reg & 0x3F) << 5) |
             ((dst_reg & 0x3F) << 12) | ((const_index & 0x1F) << 20) |
             ((const_index_sel & 0x3) << 25) | ((prefetch & 0x7) << 27) |
             ((src_swiz & 0x3) << 30);
    out[1] = (dst_swiz & 0xFFF) | ((format & 0x3F) << 16) |
             ((static_cast<uint32_t>(exp_adjust) & 0x3F) << 24) |
             ((mini_fetch & 1) << 30) | ((predicated & 1) << 31);
    out[2] = (stride & 0xFF) |
             ((static_cast<uint32_t>(offset) & 0x7FFFFF) << 8);
}

// Packs a texture fetch from the fields the decoder reads.
void pack_texture(fetch_opcode opcode, uint32_t src_reg, uint32_t dst_reg,
                  uint32_t const_index, uint32_t src_swiz, uint32_t dst_swiz,
                  uint32_t predicated, fetch_dimension dim, int32_t off_x,
                  int32_t off_y, int32_t off_z, uint32_t out[3]) {
    out[0] = (static_cast<uint32_t>(opcode) & 0x1F) | ((src_reg & 0x3F) << 5) |
             ((dst_reg & 0x3F) << 12) | ((const_index & 0x1F) << 20) |
             ((src_swiz & 0x3F) << 26);
    out[1] = (dst_swiz & 0xFFF) | ((predicated & 1) << 31);
    out[2] = ((static_cast<uint32_t>(dim) & 0x3) << 14) |
             ((static_cast<uint32_t>(off_x) & 0x1F) << 16) |
             ((static_cast<uint32_t>(off_y) & 0x1F) << 21) |
             ((static_cast<uint32_t>(off_z) & 0x1F) << 26);
}

void test_opcode_dispatch() {
    uint32_t words[3];
    pack_vertex(fetch_opcode::vertex_fetch, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, words);
    assert(decode_fetch_opcode(words) == fetch_opcode::vertex_fetch);
    pack_texture(fetch_opcode::texture_fetch, 0, 0, 0, 0, 0, 0,
                 fetch_dimension::d2, 0, 0, 0, words);
    assert(decode_fetch_opcode(words) == fetch_opcode::texture_fetch);
}

void test_vertex_fetch_fields() {
    uint32_t words[3];
    pack_vertex(fetch_opcode::vertex_fetch, /*src*/ 2, /*dst*/ 5,
                /*const*/ 3, /*const_sel*/ 0, /*prefetch*/ 1, /*src_swiz*/ 2,
                /*dst_swiz*/ 0x688, /*format*/ 0x06, /*exp*/ 0,
                /*stride*/ 0x10, /*offset*/ 0x100, /*mini*/ 0, /*pred*/ 1,
                words);
    const auto vf = decode_vertex_fetch_instruction(words);
    assert(vf.opcode == fetch_opcode::vertex_fetch);
    assert(vf.src_reg == 2 && vf.dst_reg == 5);
    assert(vf.const_index == 9 && vf.prefetch_count == 1); // 3 * 3 + 0
    assert(vf.src_swizzle == 2 && vf.dst_swizzle == 0x688);
    assert(vf.format == 0x06);
    assert(vf.stride == 0x10 && vf.offset == 0x100);
    assert(!vf.is_mini_fetch);
    assert(vf.is_predicated);
}

// The fetch constant slot is index * 3 + selector, over [0, 95]. Reading only
// the 5-bit index caps every shader at slot 31 and silently points two thirds
// of a title's vertex fetches at the wrong buffer.
void test_vertex_fetch_constant_slot_combines_both_fields() {
    uint32_t words[3];
    const struct {
        uint32_t index;
        uint32_t selector;
        uint32_t expected;
    } cases[] = {{0, 0, 0}, {0, 2, 2}, {1, 0, 3}, {7, 1, 22}, {31, 2, 95}};
    for (const auto& c : cases) {
        pack_vertex(fetch_opcode::vertex_fetch, 0, 0, c.index, c.selector, 0, 0,
                    0, 0, 0, 0, 0, 0, 0, words);
        assert(decode_vertex_fetch_instruction(words).const_index ==
               c.expected);
    }
}

// A mini fetch reuses the preceding full fetch's address and stride, so a
// reader that treats its own (meaningless) fields as real reads garbage.
void test_mini_fetch_is_flagged() {
    uint32_t words[3];
    pack_vertex(fetch_opcode::vertex_fetch, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                /*mini*/ 1, 0, words);
    assert(decode_vertex_fetch_instruction(words).is_mini_fetch);
}

void test_vertex_fetch_signed_fields() {
    uint32_t words[3];
    pack_vertex(fetch_opcode::vertex_fetch, 0, 0, 0, 0, 0, 0, 0, 0,
                /*exp_adjust*/ -2, 0, /*offset*/ -4, 0, 0, words);
    const auto vf = decode_vertex_fetch_instruction(words);
    assert(vf.exp_adjust == -2); // 6-bit signed
    assert(vf.offset == -4);     // 23-bit signed
}

void test_texture_fetch_fields() {
    uint32_t words[3];
    pack_texture(fetch_opcode::texture_fetch, /*src*/ 1, /*dst*/ 4,
                 /*const*/ 2, /*src_swiz*/ 0x24, /*dst_swiz*/ 0x123,
                 /*pred*/ 1, fetch_dimension::cube, /*off*/ 0, 0, 0, words);
    const auto tf = decode_texture_fetch_instruction(words);
    assert(tf.opcode == fetch_opcode::texture_fetch);
    assert(tf.src_reg == 1 && tf.dst_reg == 4);
    assert(tf.fetch_constant_index == 2);
    assert(tf.src_swizzle == 0x24 && tf.dst_swizzle == 0x123);
    assert(tf.dimension == fetch_dimension::cube);
    assert(tf.is_predicated);
}

void test_texture_fetch_signed_offsets() {
    uint32_t words[3];
    pack_texture(fetch_opcode::texture_fetch, 0, 0, 0, 0, 0, 0,
                 fetch_dimension::d2, /*off_x*/ -1, /*off_y*/ 2, /*off_z*/ -8,
                 words);
    const auto tf = decode_texture_fetch_instruction(words);
    assert(tf.offset_x == -1); // 5-bit signed
    assert(tf.offset_y == 2);
    assert(tf.offset_z == -8);
}

// The filter override a single sample carries, which sits directly above the
// destination swizzle in the instruction's second word.
//
// Written as literal hex from Xenia's TextureFetchInstruction::Data
// (src/xenia/gpu/ucode.h) rather than through pack_texture, so this tests the
// decoder against the console's layout and not against the test helper.
void test_texture_fetch_instruction_filters() {
    // word 1: dst_swiz 0xABC (bits 0-11), mag = linear 1 (bits 12-13),
    // min = point 0 (bits 14-15), mip = base_map 2 (bits 16-17),
    // aniso = max_16_1 5 (bits 18-20).
    //   0xABC | (1 << 12) | (0 << 14) | (2 << 16) | (5 << 18) = 0x00161ABC
    const uint32_t words[3] = {0x00000001u, 0x00161ABCu, 0x00000000u};
    const auto tf = decode_texture_fetch_instruction(words);
    assert(tf.mag_filter == texture_filter::linear);
    assert(tf.min_filter == texture_filter::point);
    assert(tf.mip_filter == texture_filter::base_map);
    assert(tf.aniso_filter == texture_aniso_filter::max_16_1);
    // The neighbour below, which a one-bit slip would eat into.
    assert(tf.dst_swizzle == 0xABC);
    assert(!tf.is_predicated);
}

// An instruction that says nothing about filtering is DEFERRING, not asking for
// point. The console's encoding for "use the fetch constant" is 3, and the
// value 3 in all four fields is what a shader compiler emits by default.
void test_texture_fetch_instruction_defers_by_default() {
    // word 1: mag/min/mip all 3, aniso 7 - i.e. every field deferring.
    //   (3 << 12) | (3 << 14) | (3 << 16) | (7 << 18) = 0x001FF000
    const uint32_t words[3] = {0x00000001u, 0x001FF000u, 0x00000000u};
    const auto tf = decode_texture_fetch_instruction(words);
    assert(tf.mag_filter == texture_filter::use_fetch_constant);
    assert(tf.min_filter == texture_filter::use_fetch_constant);
    assert(tf.mip_filter == texture_filter::use_fetch_constant);
    assert(tf.aniso_filter == texture_aniso_filter::use_fetch_constant);
}

} // namespace

int main() {
    test_opcode_dispatch();
    test_vertex_fetch_fields();
    test_vertex_fetch_constant_slot_combines_both_fields();
    test_mini_fetch_is_flagged();
    test_vertex_fetch_signed_fields();
    test_texture_fetch_fields();
    test_texture_fetch_signed_offsets();
    test_texture_fetch_instruction_filters();
    test_texture_fetch_instruction_defers_by_default();
    std::printf("fetch_test: all checks passed\n");
    return 0;
}
