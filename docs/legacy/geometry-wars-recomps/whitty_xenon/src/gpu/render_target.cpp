#include "whitty_xenon/gpu/render_target.h"

namespace whitty_xenon::gpu {

uint32_t color_format_bytes_per_pixel(color_format format) noexcept {
    switch (format) {
        case color_format::k_8_8_8_8:
        case color_format::k_8_8_8_8_gamma:
        case color_format::k_2_10_10_10:
        case color_format::k_2_10_10_10_float:
        case color_format::k_16_16:
        case color_format::k_16_16_float:
        case color_format::k_2_10_10_10_as_10_10_10_10:
        case color_format::k_2_10_10_10_float_as_16_16_16_16:
        case color_format::k_32_float:
            return 4;
        case color_format::k_16_16_16_16:
        case color_format::k_16_16_16_16_float:
        case color_format::k_32_32_float:
            return 8;
    }
    return 4;
}

color_render_target decode_color_render_target(const register_file& regs,
                                               uint32_t index) noexcept {
    color_render_target rt;

    // RB_SURFACE_INFO: surface_pitch[13:0], msaa_samples[17:16].
    const uint32_t surface = regs.get(reg::rb_surface_info);
    rt.pitch_pixels = surface & 0x3FFF;
    rt.samples = static_cast<msaa_samples>((surface >> 16) & 0x3);

    // RB_COLOR[index]_INFO: base tile[10:0] plus bit 11, format[19:16],
    // exp_bias[25:20] (signed).
    uint32_t info_reg = reg::rb_color_info;
    switch (index) {
        case 1: info_reg = reg::rb_color1_info; break;
        case 2: info_reg = reg::rb_color2_info; break;
        case 3: info_reg = reg::rb_color3_info; break;
        default: info_reg = reg::rb_color_info; break;
    }
    const uint32_t info = regs.get(info_reg);
    rt.edram_base_tiles = info & 0xFFF; // 11-bit base plus bit 11
    rt.format = static_cast<color_format>((info >> 16) & 0xF);
    // Sign-extend the 6-bit exponent bias.
    const uint32_t bias6 = (info >> 20) & 0x3F;
    rt.exp_bias = static_cast<int32_t>((bias6 ^ 0x20) - 0x20);
    return rt;
}

// Which register holds render target `index`'s blend control. They are NOT
// consecutive: RB_BLENDCONTROL0 is 0x2201 and the other three are 0x2209-0x220B,
// with RB_COLORCONTROL and RB_HIZCONTROL in between. `rb_blendcontrol0 + index`
// therefore reads the ALPHA TEST as target 1's blend mode.
uint32_t blend_control_register(uint32_t index) noexcept {
    return index == 0 ? reg::rb_blendcontrol0
                      : reg::rb_blendcontrol1 + (index - 1);
}

bool blend_enabled(const register_file& regs, uint32_t index) noexcept {
    // RB_BLENDCONTROL[index]: color_srcblend[4:0], color_destblend[12:8]. The
    // Xenos BlendFactor values are kZero=0, kOne=1.
    const uint32_t blend_control = regs.get(blend_control_register(index));
    const uint32_t src = blend_control & 0x1F;
    const uint32_t dst = (blend_control >> 8) & 0x1F;
    constexpr uint32_t kZero = 0, kOne = 1;
    return !(src == kOne && dst == kZero);
}

blend_state decode_blend(const register_file& regs, uint32_t index) noexcept {
    // RB_BLENDCONTROL[index]: colour source factor, colour combine function and
    // colour destination factor in the low half, the same three for alpha in the
    // high half.
    const uint32_t value = regs.get(blend_control_register(index));
    blend_state state;
    state.color_src = static_cast<blend_factor>(value & 0x1F);
    state.color_op = static_cast<blend_op>((value >> 5) & 0x7);
    state.color_dst = static_cast<blend_factor>((value >> 8) & 0x1F);
    state.alpha_src = static_cast<blend_factor>((value >> 16) & 0x1F);
    state.alpha_op = static_cast<blend_op>((value >> 21) & 0x7);
    state.alpha_dst = static_cast<blend_factor>((value >> 24) & 0x1F);
    const auto passthrough = [](blend_factor src, blend_factor dst,
                                blend_op op) {
        return src == blend_factor::one && dst == blend_factor::zero &&
               op == blend_op::add;
    };
    state.enabled =
        !passthrough(state.color_src, state.color_dst, state.color_op) ||
        !passthrough(state.alpha_src, state.alpha_dst, state.alpha_op);
    return state;
}

alpha_test_state decode_alpha_test(const register_file& regs) noexcept {
    const uint32_t control = regs.get(reg::rb_colorcontrol);
    alpha_test_state state;
    state.enabled = (control & 0x8) != 0;
    state.func = static_cast<compare_function>(control & 0x7);
    state.reference = regs.get_float(reg::rb_alpha_ref);
    // A test that always passes is not a test, and treating it as one would
    // build a second copy of every shader for nothing. Note the mirror is NOT
    // folded away: `never` is a real state that discards everything, and a
    // title uses it deliberately.
    if (state.func == compare_function::always) state.enabled = false;
    return state;
}

depth_render_target decode_depth_render_target(const register_file& regs) noexcept {
    depth_render_target rt;
    const uint32_t info = regs.get(reg::rb_depth_info);
    rt.format = static_cast<depth_format>(info & 0x3);
    rt.edram_base_tiles = (info >> 12) & 0xFFF;
    return rt;
}

depth_test_state decode_depth_test(const register_file& regs) noexcept {
    depth_test_state state;
    // PA_SC_MODE_CNTL bit 0 is the master z-enable.
    const uint32_t mode_cntl = regs.get(reg::pa_sc_mode_cntl);
    const bool z_enabled = (mode_cntl & 0x1) != 0;
    if (!z_enabled) return state; // both test and write off

    // RB_DEPTHCONTROL: stencil_enable at bit 0, z_enable at 1, z_write_enable
    // at 2, zfunc at 4..6. Bit 0 is NOT the depth test - reading it as one
    // enables depth wherever a title uses stencil and disables it everywhere
    // else, and shifts the compare function by one bit so LESS_EQUAL arrives
    // as EQUAL.
    const uint32_t depth_control = regs.get(reg::rb_depthcontrol);
    state.test_enabled = (depth_control & 0x2) != 0;
    state.write_enabled = (depth_control & 0x4) != 0;
    state.func = static_cast<compare_function>((depth_control >> 4) & 0x7);
    return state;
}

face_cull_state decode_face_cull(const register_file& regs) noexcept {
    const uint32_t mode = regs.get(reg::pa_su_sc_mode_cntl);
    face_cull_state state;
    state.cull_front = (mode & 0x1) != 0;
    state.cull_back = (mode & 0x2) != 0;
    // Bit 2 set means the CLOCKWISE winding is the front face.
    state.front_ccw = (mode & 0x4) == 0;
    return state;
}

viewport_state decode_viewport(const register_file& regs) noexcept {
    viewport_state state;
    state.scale[0] = regs.get_float(reg::pa_cl_vport_xscale);
    state.scale[1] = regs.get_float(reg::pa_cl_vport_yscale);
    state.scale[2] = regs.get_float(reg::pa_cl_vport_zscale);
    state.offset[0] = regs.get_float(reg::pa_cl_vport_xoffset);
    state.offset[1] = regs.get_float(reg::pa_cl_vport_yoffset);
    state.offset[2] = regs.get_float(reg::pa_cl_vport_zoffset);
    // Bits 0..5 enable the hardware's scale and offset for x, y and z. If any
    // of them is off for an axis the shader has already applied that part
    // itself, so the values above describe a transform to be undone rather
    // than one to be applied. Titles set all six or none; treating "not all
    // set" as window space follows what the enables mean per axis without
    // pretending a mixed case is handled.
    const uint32_t vte_cntl = regs.get(reg::pa_cl_vte_cntl);
    constexpr uint32_t kAllScaleOffsetEnables = 0x3F;
    state.shader_emits_window_space =
        (vte_cntl & kAllScaleOffsetEnables) != kAllScaleOffsetEnables;
    return state;
}

} // namespace whitty_xenon::gpu
