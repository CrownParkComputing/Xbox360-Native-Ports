// Unit tests for the GPU register file.
//
// The register file is simple storage, so the tests focus on the two things
// that would quietly corrupt state: the bounds handling (a decoded write run
// can address past the end of the file and must be dropped, not overflow) and
// the bit-exact float reinterpretation shader constants depend on. The end-to-
// end check drives a real decoded PM4 register-write packet into the file and
// reads the named registers back, which is exactly the path the command
// processor will take.
#include "whitty_xenon/gpu/pm4.h"
#include "whitty_xenon/gpu/register_file.h"

#include <cassert>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>

using namespace whitty_xenon::gpu;

namespace {

void put(std::vector<uint8_t>& s, uint32_t v) {
    s.push_back(static_cast<uint8_t>(v >> 24));
    s.push_back(static_cast<uint8_t>(v >> 16));
    s.push_back(static_cast<uint8_t>(v >> 8));
    s.push_back(static_cast<uint8_t>(v));
}
uint32_t type0_header(uint32_t base, uint32_t count, bool write_one) {
    return ((count - 1) << 16) | (write_one ? (1u << 15) : 0) | (base & 0x7FFF);
}

uint32_t float_bits(float f) {
    uint32_t bits;
    std::memcpy(&bits, &f, sizeof(bits));
    return bits;
}

void test_get_set_and_defaults() {
    register_file regs;
    // Everything starts zero.
    assert(regs.get(reg::rb_surface_info) == 0);
    regs.set(reg::rb_surface_info, 0x12345678);
    assert(regs.get(reg::rb_surface_info) == 0x12345678);
    // A distinct register is unaffected.
    assert(regs.get(reg::rb_color_info) == 0);
}

void test_out_of_range_is_safe() {
    register_file regs;
    assert(!regs.in_range(register_file::kRegisterCount));
    // Writing and reading past the end are no-ops, not overflows.
    regs.set(register_file::kRegisterCount + 100, 0xDEADBEEF);
    assert(regs.get(register_file::kRegisterCount + 100) == 0);
    assert(regs.get(0xFFFFFFFF) == 0);
}

void test_float_reinterpret() {
    register_file regs;
    // A shader/viewport constant is stored as raw bits and read back as float.
    regs.set(reg::shader_constant_000_x, float_bits(1.5f));
    assert(regs.get_float(reg::shader_constant_000_x) == 1.5f);
    regs.set(reg::shader_constant_000_x + 1, float_bits(-64.0f));
    assert(regs.get_float(reg::shader_constant_000_x + 1) == -64.0f);
}

void test_apply_decoded_register_write() {
    register_file regs;
    // A type-0 packet writing three consecutive surface/render-target registers.
    std::vector<uint8_t> s;
    put(s, type0_header(reg::rb_surface_info, 3, false));
    put(s, 0x00000123); // RB_SURFACE_INFO
    put(s, 0x00000456); // RB_COLOR_INFO
    put(s, 0x00000789); // RB_DEPTH_INFO
    std::vector<pm4_packet> packets;
    std::string error;
    assert(parse_pm4(s.data(), s.size(), packets, error));

    for (const pm4_packet& packet : packets) regs.apply(packet);
    assert(regs.get(reg::rb_surface_info) == 0x00000123);
    assert(regs.get(reg::rb_color_info) == 0x00000456);
    assert(regs.get(reg::rb_depth_info) == 0x00000789);
}

void test_write_one_register_lands_once() {
    register_file regs;
    // A write_one packet targets a single register repeatedly; the last value
    // wins, and neighbours are untouched.
    std::vector<uint8_t> s;
    put(s, type0_header(reg::vgt_draw_initiator, 2, true));
    put(s, 0x11111111);
    put(s, 0x22222222);
    std::vector<pm4_packet> packets;
    std::string error;
    assert(parse_pm4(s.data(), s.size(), packets, error));
    for (const pm4_packet& packet : packets) regs.apply(packet);

    assert(regs.get(reg::vgt_draw_initiator) == 0x22222222);
    assert(regs.get(reg::vgt_draw_initiator + 1) == 0); // neighbour untouched
}

} // namespace

// A texture slot is SIX dwords into the same bank a vertex buffer takes two
// from, so the two indexings must not be confused - slot 2 as a texture starts
// where slot 6 as a vertex buffer does.
void test_texture_fetch_constant_decode() {
    register_file regs;
    const uint32_t slot = 3;
    const uint32_t base = reg::shader_constant_fetch_00_0 + slot * 6;
    // type 2 (texture), pitch (320 >> 5) = 10 at bit 22, tiled.
    regs.set(base + 0, 0x2u | (10u << 22) | (1u << 31));
    // format 6 at bit 0, endianness 8in32 at bit 6, base address >> 12 at 12.
    regs.set(base + 1, 6u | (2u << 6) | ((0x01921000u >> 12) << 12));
    // 320x180, each stored as extent - 1.
    regs.set(base + 2, (320u - 1) | ((180u - 1) << 13));
    // The swizzle sits one bit into dword 3, three bits per channel: bgra,
    // which is what a title's 8:8:8:8 surfaces actually carry.
    regs.set(base + 3, (2u | (1u << 3) | (0u << 6) | (3u << 9)) << 1);

    const texture_fetch_constant fetch =
        decode_texture_fetch_constant(regs, slot);
    assert(fetch.type == 2);
    assert(fetch.base_address == 0x01921000);
    assert(fetch.format == 6);
    assert(fetch.pitch_pixels == 320);
    assert(fetch.tiled);
    assert(fetch.width == 320 && fetch.height == 180);
    // Both of these decide which byte of a texel becomes which channel, and
    // both used to be dropped - which is a channel swap with no error.
    assert(fetch.endianness == endian::swap_8in32);
    assert(fetch.swizzle == (2u | (1u << 3) | (0u << 6) | (3u << 9)));

    // The same slot read as a vertex fetch lands somewhere else entirely,
    // which is the mistake this layout invites.
    assert(decode_vertex_fetch_constant(regs, slot).base_address !=
           fetch.base_address);
}

// How a texture is SAMPLED, which lives in the same six dwords as where it is.
//
// The dwords below are written out as literal hex, derived by hand from Xenia's
// xe_gpu_texture_fetch_t field order (src/xenia/gpu/xenos.h) and not from any
// encoder in this tree. That is deliberate: an encoder of mine feeding my own
// decoder proves the two agree with each other and nothing about whether either
// agrees with the console. Each literal is annotated with what it holds.
void test_texture_fetch_constant_sampler_fields() {
    register_file regs;
    const uint32_t slot = 5;
    const uint32_t base = reg::shader_constant_fetch_00_0 + slot * 6;

    // dword 0: type 2 (bits 0-1), clamp_x = clamp_to_edge 2 (bits 10-12),
    // clamp_y = clamp_to_border 6 (bits 13-15), clamp_z = repeat 0 (16-18),
    // pitch = 10 (bits 22-30, so 320 pixels).
    //   0x2 | (2 << 10) | (6 << 13) | (10 << 22) = 0x0280C802
    regs.set(base + 0, 0x0280C802u);
    // dword 1: format 6, endianness 8in32, base address 0x01921000.
    regs.set(base + 1, 6u | (2u << 6) | ((0x01921000u >> 12) << 12));
    // dword 2: 320x180, each stored as extent - 1.
    regs.set(base + 2, (320u - 1) | ((180u - 1) << 13));
    // dword 3: swizzle 0xFFF (bits 1-12), mag = point 0 (bits 19-20),
    // min = linear 1 (bits 21-22), mip = base_map 2 (bits 23-24),
    // aniso = max_4_1 3 (bits 25-27).
    //   (0xFFF << 1) | (0 << 19) | (1 << 21) | (2 << 23) | (3 << 25)
    //     = 0x07201FFE
    regs.set(base + 3, 0x07201FFEu);
    // dword 4: mip_min_level 3 (bits 2-5), mip_max_level 9 (bits 6-9).
    //   (3 << 2) | (9 << 6) = 0x0000024C
    regs.set(base + 4, 0x0000024Cu);
    // dword 5: border_color = abgr_white 1 (bits 0-1), dimension = 2D 1
    // (bits 9-10), mip address page 0x01000 (bits 12-31, so 0x01000000).
    //   0x1 | (1 << 9) | (0x1000 << 12) = 0x01000201
    regs.set(base + 5, 0x01000201u);

    const texture_fetch_constant fetch =
        decode_texture_fetch_constant(regs, slot);
    assert(fetch.mag_filter == texture_filter::point);
    assert(fetch.min_filter == texture_filter::linear);
    assert(fetch.mip_filter == texture_filter::base_map);
    assert(fetch.aniso_filter == texture_aniso_filter::max_4_1);
    assert(fetch.clamp_x == texture_clamp_mode::clamp_to_edge);
    assert(fetch.clamp_y == texture_clamp_mode::clamp_to_border);
    assert(fetch.clamp_z == texture_clamp_mode::repeat);
    assert(fetch.border_color == texture_border_color::abgr_white);
    assert(fetch.dimension == fetch_dimension::d2);
    assert(fetch.mip_min_level == 3 && fetch.mip_max_level == 9);
    assert(fetch.mip_address == 0x01000000);
    // The fields these share a dword with must be untouched. A filter decoded
    // one bit out reads plausibly and silently steals a bit from its
    // neighbour, so the neighbours are the check that catches it.
    assert(fetch.swizzle == 0xFFF);
    assert(fetch.pitch_pixels == 320);
    assert(fetch.type == 2);
    assert(fetch.base_address == 0x01921000);
    assert(fetch.width == 320 && fetch.height == 180);
    assert(!fetch.packed_mips);
}

// A fetch constant with every sampler field zero is the state a slot the title
// never wrote is in, and zero means POINT - not linear. Which is the whole
// point of decoding this: linear was never the console's default, it was ours.
void test_unwritten_fetch_constant_is_point_sampled() {
    register_file regs;
    const texture_fetch_constant fetch = decode_texture_fetch_constant(regs, 0);
    assert(fetch.mag_filter == texture_filter::point);
    assert(fetch.min_filter == texture_filter::point);
    const sampler_state state = resolve_sampler_state(fetch, sampler_override{});
    assert(!state.mag_linear && !state.min_linear && !state.mip_linear);
}

// The shader said nothing, so the constant decides - every field.
void test_sampler_state_defers_to_the_fetch_constant() {
    texture_fetch_constant fetch;
    fetch.mag_filter = texture_filter::linear;
    fetch.min_filter = texture_filter::point;
    fetch.mip_filter = texture_filter::linear;
    fetch.aniso_filter = texture_aniso_filter::max_8_1;
    fetch.dimension = fetch_dimension::d2;

    const sampler_state state = resolve_sampler_state(fetch, sampler_override{});
    assert(state.mag_linear);
    assert(!state.min_linear);
    assert(state.mip_linear);
    assert(!state.mip_base_map);
    assert(state.aniso == texture_aniso_filter::max_8_1);
}

// The shader overrode some of it. The override wins PER FIELD - a shader can
// force point magnification and still defer on minification, and collapsing
// that to one mode is a different picture from the one the title asked for.
void test_sampler_state_takes_the_instruction_override_per_field() {
    texture_fetch_constant fetch;
    fetch.mag_filter = texture_filter::linear;
    fetch.min_filter = texture_filter::linear;
    fetch.mip_filter = texture_filter::linear;
    fetch.aniso_filter = texture_aniso_filter::max_16_1;

    sampler_override shader;
    shader.mag_filter = texture_filter::point; // overridden
    // min, mip and aniso are left deferring.
    const sampler_state state = resolve_sampler_state(fetch, shader);
    assert(!state.mag_linear);
    assert(state.min_linear);
    assert(state.mip_linear);
    assert(state.aniso == texture_aniso_filter::max_16_1);

    // And the other way: the constant says point, the shader insists on linear.
    texture_fetch_constant point_fetch;
    sampler_override wants_linear;
    wants_linear.min_filter = texture_filter::linear;
    wants_linear.aniso_filter = texture_aniso_filter::disabled;
    const sampler_state forced =
        resolve_sampler_state(point_fetch, wants_linear);
    assert(forced.min_linear);
    assert(!forced.mag_linear);
    assert(forced.aniso == texture_aniso_filter::disabled);
}

// "Base map" is a mip FILTER value, and it is not a filter: it means read the
// base level and nothing else. Treating it as linear or point silently allows
// the sampler down the mip chain the title excluded.
void test_sampler_state_base_map_is_a_level_clamp_not_a_filter() {
    texture_fetch_constant fetch;
    fetch.mip_filter = texture_filter::base_map;
    const sampler_state state = resolve_sampler_state(fetch, sampler_override{});
    assert(state.mip_base_map);
    assert(!state.mip_linear);
}

// A texture with no mip chain has no level to select, and the fields that would
// select one hold whatever the last title to use the slot left there.
void test_sampler_state_ignores_mip_levels_without_a_mip_chain() {
    texture_fetch_constant fetch;
    fetch.mip_min_level = 4;
    fetch.mip_address = 0; // no mips
    assert(resolve_sampler_state(fetch, sampler_override{}).mip_min_level == 0);
    fetch.mip_address = 0x00200000;
    assert(resolve_sampler_state(fetch, sampler_override{}).mip_min_level == 4);
}

// Addressing comes from the constant, but only for the axes the texture has -
// and the border colour only where something can actually read it.
void test_sampler_state_addressing_follows_the_dimension() {
    texture_fetch_constant fetch;
    fetch.dimension = fetch_dimension::d2;
    fetch.clamp_x = texture_clamp_mode::mirrored_repeat;
    fetch.clamp_y = texture_clamp_mode::clamp_to_edge;
    fetch.clamp_z = texture_clamp_mode::repeat; // no third axis to address
    fetch.border_color = texture_border_color::abgr_white;

    const sampler_state flat = resolve_sampler_state(fetch, sampler_override{});
    assert(flat.clamp_x == texture_clamp_mode::mirrored_repeat);
    assert(flat.clamp_y == texture_clamp_mode::clamp_to_edge);
    assert(flat.clamp_z == texture_clamp_mode::clamp_to_edge);
    // Nothing clamps to a border, so the border colour is not part of what
    // makes this sampler distinct.
    assert(flat.border == texture_border_color::abgr_black);

    fetch.clamp_y = texture_clamp_mode::clamp_to_border;
    assert(resolve_sampler_state(fetch, sampler_override{}).border ==
           texture_border_color::abgr_white);

    fetch.dimension = fetch_dimension::d3_or_stacked;
    assert(resolve_sampler_state(fetch, sampler_override{}).clamp_z ==
           texture_clamp_mode::repeat);
}

// The constant's own anisotropy field can hold the "use the fetch constant"
// value, which has nothing left to defer to. Off is the reading that is not a
// wild maxAnisotropy: 1 << (7 - 1) is 64, which no device allows and which
// makes the whole VkSamplerCreateInfo invalid.
void test_sampler_state_anisotropy_has_no_circular_default() {
    texture_fetch_constant fetch;
    fetch.aniso_filter = texture_aniso_filter::use_fetch_constant;
    assert(resolve_sampler_state(fetch, sampler_override{}).aniso ==
           texture_aniso_filter::disabled);
}

// Two slots asking for the same thing must produce the same key, or a cache of
// samplers holds one per slot per draw and caches nothing.
void test_sampler_state_compares_by_value() {
    texture_fetch_constant fetch;
    fetch.mag_filter = texture_filter::linear;
    const sampler_state a = resolve_sampler_state(fetch, sampler_override{});
    const sampler_state b = resolve_sampler_state(fetch, sampler_override{});
    assert(a == b);
    assert(!(a < b) && !(b < a));

    sampler_override point;
    point.mag_filter = texture_filter::point;
    const sampler_state c = resolve_sampler_state(fetch, point);
    assert(!(a == c));
    assert((a < c) != (c < a));
}

int main() {
    test_get_set_and_defaults();
    test_out_of_range_is_safe();
    test_float_reinterpret();
    test_apply_decoded_register_write();
    test_write_one_register_lands_once();
    test_texture_fetch_constant_decode();
    test_texture_fetch_constant_sampler_fields();
    test_unwritten_fetch_constant_is_point_sampled();
    test_sampler_state_defers_to_the_fetch_constant();
    test_sampler_state_takes_the_instruction_override_per_field();
    test_sampler_state_base_map_is_a_level_clamp_not_a_filter();
    test_sampler_state_ignores_mip_levels_without_a_mip_chain();
    test_sampler_state_addressing_follows_the_dimension();
    test_sampler_state_anisotropy_has_no_circular_default();
    test_sampler_state_compares_by_value();
    std::printf("register_file_test: all checks passed\n");
    return 0;
}
