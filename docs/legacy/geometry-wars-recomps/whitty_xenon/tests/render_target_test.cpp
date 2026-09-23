// Unit tests for render-target register decoding.
//
// The registers are packed by hand from the documented bit fields and decoded
// back, with attention to the two fields that fail quietly: the signed exponent
// bias (a dropped sign extension washes colour out) and the format-to-byte-size
// mapping (wrong here and a target spans the wrong number of EDRAM tiles).
#include "whitty_xenon/gpu/register_file.h"
#include "whitty_xenon/gpu/render_target.h"

#include <cassert>
#include <cstdint>
#include <cstdio>

using namespace whitty_xenon::gpu;

namespace {

void test_surface_and_color_decode() {
    register_file regs;
    // Surface: pitch 1280, 4x MSAA.
    regs.set(reg::rb_surface_info,
             (1280u & 0x3FFF) | (static_cast<uint32_t>(msaa_samples::k4x) << 16));
    // Color 0: base tile 0x100, format 8_8_8_8, exp bias 0.
    regs.set(reg::rb_color_info,
             (0x100u & 0xFFF) |
                 (static_cast<uint32_t>(color_format::k_8_8_8_8) << 16));

    const color_render_target rt = decode_color_render_target(regs, 0);
    assert(rt.pitch_pixels == 1280);
    assert(rt.samples == msaa_samples::k4x);
    assert(rt.edram_base_tiles == 0x100);
    assert(rt.format == color_format::k_8_8_8_8);
    assert(rt.exp_bias == 0);
}

void test_signed_exp_bias() {
    register_file regs;
    regs.set(reg::rb_surface_info, 640);
    // exp_bias field = -3 (6-bit two's complement = 0x3D) at bits 20..25.
    const uint32_t bias = static_cast<uint32_t>(-3) & 0x3F;
    regs.set(reg::rb_color_info,
             (static_cast<uint32_t>(color_format::k_2_10_10_10) << 16) |
                 (bias << 20));
    const color_render_target rt = decode_color_render_target(regs, 0);
    assert(rt.exp_bias == -3);
    assert(rt.format == color_format::k_2_10_10_10);
}

void test_multiple_color_targets() {
    register_file regs;
    regs.set(reg::rb_surface_info, 512);
    regs.set(reg::rb_color1_info,
             0x055u | (static_cast<uint32_t>(color_format::k_16_16_16_16) << 16));
    regs.set(reg::rb_color3_info,
             0x077u |
                 (static_cast<uint32_t>(color_format::k_32_float) << 16));

    const color_render_target rt1 = decode_color_render_target(regs, 1);
    assert(rt1.edram_base_tiles == 0x055);
    assert(rt1.format == color_format::k_16_16_16_16);

    const color_render_target rt3 = decode_color_render_target(regs, 3);
    assert(rt3.edram_base_tiles == 0x077);
    assert(rt3.format == color_format::k_32_float);
}

void test_bytes_per_pixel() {
    assert(color_format_bytes_per_pixel(color_format::k_8_8_8_8) == 4);
    assert(color_format_bytes_per_pixel(color_format::k_2_10_10_10) == 4);
    assert(color_format_bytes_per_pixel(color_format::k_32_float) == 4);
    assert(color_format_bytes_per_pixel(color_format::k_16_16_16_16) == 8);
    assert(color_format_bytes_per_pixel(color_format::k_16_16_16_16_float) == 8);
    assert(color_format_bytes_per_pixel(color_format::k_32_32_float) == 8);
}

void test_blend_enabled() {
    register_file regs;
    // Default (all zero) decodes to src=Zero, dst=Zero -> that is a blend
    // (not the src=One/dst=Zero passthrough), so enabled.
    assert(blend_enabled(regs, 0));
    // The explicit passthrough: src=One(1), dst=Zero(0) -> no blend.
    regs.set(reg::rb_blendcontrol0, (1u & 0x1F) | ((0u & 0x1F) << 8));
    assert(!blend_enabled(regs, 0));
    // A real alpha blend: src=SrcAlpha, dst=OneMinusSrcAlpha -> enabled.
    regs.set(reg::rb_blendcontrol0, (4u & 0x1F) | ((5u & 0x1F) << 8));
    assert(blend_enabled(regs, 0));
}

// The factors themselves, not just whether blending is on. A title composites
// its glow additively and its overlays with premultiplied alpha, and a renderer
// that assumes source-alpha-over-destination for both draws the glow multiplied
// by an alpha the title never set - which is to say not at all.
void test_decode_blend_factors() {
    register_file regs;
    // Additive: src=One, dst=One, add, for both colour and alpha.
    regs.set(reg::rb_blendcontrol0,
             1u | (0u << 5) | (1u << 8) | (1u << 16) | (0u << 21) | (1u << 24));
    blend_state state = decode_blend(regs, 0);
    assert(state.enabled);
    assert(state.color_src == blend_factor::one);
    assert(state.color_dst == blend_factor::one);
    assert(state.color_op == blend_op::add);
    assert(state.alpha_src == blend_factor::one);
    assert(state.alpha_dst == blend_factor::one);

    // Premultiplied over: src=One, dst=OneMinusSrcAlpha.
    regs.set(reg::rb_blendcontrol0, 1u | (7u << 8) | (1u << 16) | (1u << 24));
    state = decode_blend(regs, 0);
    assert(state.enabled);
    assert(state.color_dst == blend_factor::one_minus_src_alpha);

    // The passthrough is the one case with nothing to do.
    regs.set(reg::rb_blendcontrol0, 1u | (0u << 8) | (1u << 16) | (0u << 24));
    assert(!decode_blend(regs, 0).enabled);

    // A non-add operation is a blend even with passthrough factors: max(src,
    // dst) is not src.
    regs.set(reg::rb_blendcontrol0,
             1u | (3u << 5) | (0u << 8) | (1u << 16) | (0u << 24));
    state = decode_blend(regs, 0);
    assert(state.enabled && state.color_op == blend_op::max);
}

// A CLOSED OPAQUE MODEL LOOKS THE SAME WHICHEVER SIDE IS CULLED, so a wrong
// polarity here is invisible on most titles and ruinous on a 3D one: with
// nothing culled the far side of the terrain and the sky are drawn over the
// scene as huge flat triangles. The decode reports what the title asked for;
// inverting it for the host's mirrored Y is the renderer's business.
void test_face_cull_decode() {
    register_file regs;

    // Nothing set: draw both faces, counter-clockwise is the front.
    face_cull_state cull = decode_face_cull(regs);
    assert(!cull.cull_front && !cull.cull_back);
    assert(cull.front_ccw);

    // Bit 1 culls the back face - the ordinary case for solid geometry.
    regs.set(reg::pa_su_sc_mode_cntl, 0x2u);
    cull = decode_face_cull(regs);
    assert(!cull.cull_front && cull.cull_back);
    assert(cull.front_ccw);

    // Bit 0 culls the front instead, which is how an inverted-hull outline is
    // drawn over its own model.
    regs.set(reg::pa_su_sc_mode_cntl, 0x1u);
    cull = decode_face_cull(regs);
    assert(cull.cull_front && !cull.cull_back);

    // Bit 2 SET means CLOCKWISE is the front face, so front_ccw goes false.
    regs.set(reg::pa_su_sc_mode_cntl, 0x4u);
    assert(!decode_face_cull(regs).front_ccw);

    // Banjo-Kazooie's scenery: cull the back, clockwise front.
    regs.set(reg::pa_su_sc_mode_cntl, 0x6u);
    cull = decode_face_cull(regs);
    assert(cull.cull_back && !cull.cull_front && !cull.front_ccw);

    // Both bits: nothing survives. A title does this to suppress a draw
    // without removing it, so it must not be folded into "cull the back".
    regs.set(reg::pa_su_sc_mode_cntl, 0x3u);
    cull = decode_face_cull(regs);
    assert(cull.cull_front && cull.cull_back);

    // The bits above bit 2 are polygon mode, offsets and line state, none of
    // which is culling: a register full of them must still cull nothing.
    regs.set(reg::pa_su_sc_mode_cntl, 0xFFFFFFF8u);
    cull = decode_face_cull(regs);
    assert(!cull.cull_front && !cull.cull_back);
}

// RB_DEPTHCONTROL's fields, against the console's layout: stencil_enable at
// bit 0, z_enable at 1, z_write_enable at 2, zfunc at 4..6. Reading bit 0 as
// the depth test turns depth on exactly where a title uses stencil and off
// everywhere else, and a zfunc read one bit high turns LESS_EQUAL into EQUAL -
// a scene that draws almost nothing, for a reason no counter reports.
void test_depth_control_decode() {
    register_file regs;
    regs.set(reg::pa_sc_mode_cntl, 0x1); // master z-enable

    // Nothing set: no test, no write.
    depth_test_state state = decode_depth_test(regs);
    assert(!state.test_enabled && !state.write_enabled);

    // Stencil alone must NOT enable the depth test.
    regs.set(reg::rb_depthcontrol, 0x1);
    state = decode_depth_test(regs);
    assert(!state.test_enabled && !state.write_enabled);

    // z_enable alone: test on, write off.
    regs.set(reg::rb_depthcontrol, 0x2);
    state = decode_depth_test(regs);
    assert(state.test_enabled && !state.write_enabled);

    // z_enable + z_write_enable: the ordinary opaque case.
    regs.set(reg::rb_depthcontrol, 0x2 | 0x4);
    state = decode_depth_test(regs);
    assert(state.test_enabled && state.write_enabled);

    // zfunc lives at bits 4..6. LESS_EQUAL is 3 on the console.
    regs.set(reg::rb_depthcontrol, 0x2 | 0x4 | (3u << 4));
    state = decode_depth_test(regs);
    assert(state.func == compare_function::less_equal);

    // And the largest value, to catch a mask that is too narrow.
    regs.set(reg::rb_depthcontrol, 0x2 | (7u << 4));
    assert(decode_depth_test(regs).func == compare_function::always);

    // PA_SC_MODE_CNTL's master z-enable still overrides everything.
    regs.set(reg::pa_sc_mode_cntl, 0x0);
    state = decode_depth_test(regs);
    assert(!state.test_enabled && !state.write_enabled);
}

} // namespace

int main() {
    test_surface_and_color_decode();
    test_signed_exp_bias();
    test_multiple_color_targets();
    test_bytes_per_pixel();
    test_blend_enabled();
    test_decode_blend_factors();
    test_face_cull_decode();
    test_depth_control_decode();
    std::printf("render_target_test: all checks passed\n");
    return 0;
}
