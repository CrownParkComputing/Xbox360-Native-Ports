// render_target.h - the framebuffer a draw writes into.
//
// A Xenos draw does not name a framebuffer; it writes to render targets defined
// by a few registers. RB_SURFACE_INFO gives the shared pitch and multisampling,
// and each of the four RB_COLOR[0-3]_INFO registers gives one colour target's
// base tile in the 10 MB EDRAM, its pixel format, and an exponent bias. This
// decodes those registers into a description a backend can bind - where the
// target lives, how wide it is, and how its pixels are laid out.
//
// Getting the format's byte size right matters downstream: it decides how many
// EDRAM tiles a target spans and how a resolve reads it back, and the exponent
// bias is a known source of washed-out or truncated colour if dropped. So both
// are decoded and pinned by tests.
#pragma once

#include "whitty_xenon/gpu/register_file.h"

#include <cstdint>

namespace whitty_xenon::gpu {

// Colour render-target formats (from Xenia's ColorRenderTargetFormat).
enum class color_format : uint8_t {
    k_8_8_8_8 = 0,
    k_8_8_8_8_gamma = 1,
    k_2_10_10_10 = 2,
    k_2_10_10_10_float = 3,
    k_16_16 = 4,
    k_16_16_16_16 = 5,
    k_16_16_float = 6,
    k_16_16_16_16_float = 7,
    k_2_10_10_10_as_10_10_10_10 = 10,
    k_2_10_10_10_float_as_16_16_16_16 = 12,
    k_32_float = 14,
    k_32_32_float = 15,
};

// Multisample counts (from Xenia's MsaaSamples).
enum class msaa_samples : uint8_t { k1x = 0, k2x = 1, k4x = 2 };

// A decoded colour render target.
struct color_render_target {
    uint32_t pitch_pixels{0};    // shared surface pitch
    uint32_t edram_base_tiles{0}; // base tile in EDRAM (12-bit, incl. bit 11)
    color_format format{color_format::k_8_8_8_8};
    int32_t exp_bias{0};          // signed exponent bias
    msaa_samples samples{msaa_samples::k1x};
};

// Bytes per pixel for a colour format.
uint32_t color_format_bytes_per_pixel(color_format format) noexcept;

// Decodes colour render target `index` (0..3) from the register state. The
// pitch and MSAA come from the shared RB_SURFACE_INFO.
color_render_target decode_color_render_target(const register_file& regs,
                                               uint32_t index) noexcept;

// Whether colour blending is non-trivial for render target `index`, from
// RB_BLENDCONTROL: blending is off only when the factors are src=One, dst=Zero.
bool blend_enabled(const register_file& regs, uint32_t index) noexcept;

// How a draw's colour is combined with what is already in the target.
//
// Not a detail. A title composites an effect over its scene by ADDING it -
// src=One, dst=One - and a renderer that assumes source-alpha-over-destination
// instead multiplies that effect by an alpha it was never given, which for a
// glow built out of a resolved pass is usually zero. The effect then vanishes
// with nothing to show it was ever drawn. So the factors are read rather than
// assumed.
enum class blend_factor : uint8_t {
    zero = 0,
    one = 1,
    src_color = 4,
    one_minus_src_color = 5,
    src_alpha = 6,
    one_minus_src_alpha = 7,
    dst_color = 8,
    one_minus_dst_color = 9,
    dst_alpha = 10,
    one_minus_dst_alpha = 11,
    constant_color = 12,
    one_minus_constant_color = 13,
    constant_alpha = 14,
    one_minus_constant_alpha = 15,
    src_alpha_saturate = 16,
};

enum class blend_op : uint8_t {
    add = 0,
    subtract = 1,
    min = 2,
    max = 3,
    reverse_subtract = 4,
};

struct blend_state {
    // False only when the result is the source untouched - src=One, dst=Zero,
    // add - in which case blending can be switched off entirely.
    bool enabled{false};
    blend_factor color_src{blend_factor::one};
    blend_factor color_dst{blend_factor::zero};
    blend_op color_op{blend_op::add};
    blend_factor alpha_src{blend_factor::one};
    blend_factor alpha_dst{blend_factor::zero};
    blend_op alpha_op{blend_op::add};
};

// Decodes RB_BLENDCONTROL[index] into the state above.
blend_state decode_blend(const register_file& regs, uint32_t index) noexcept;

// The alpha test - the fixed-function stage between the pixel shader and the
// depth test, which throws a fragment away when its alpha fails a comparison
// against a reference value.
//
// Vulkan has no such stage, so it has to be a discard inside the fragment
// shader, which makes this part of the SHADER key rather than of the pipeline
// state. That is why it is decoded rather than passed straight to a pipeline
// field like the blend factors are.
enum class compare_function : uint8_t {
    never = 0,
    less = 1,
    equal = 2,
    less_equal = 3,
    greater = 4,
    not_equal = 5,
    greater_equal = 6,
    always = 7,
};

struct alpha_test_state {
    bool enabled{false};
    compare_function func{compare_function::always};
    float reference{0.0f};
    // Two draws with the test off are the same shader whatever their function
    // and reference fields happen to hold, and two with it on are the same only
    // if all three agree. Getting this wrong costs a shader variant per draw,
    // or - far worse - one draw's test applied to another's geometry.
    bool operator==(const alpha_test_state& other) const noexcept {
        if (enabled != other.enabled) return false;
        if (!enabled) return true;
        return func == other.func && reference == other.reference;
    }
    bool operator<(const alpha_test_state& other) const noexcept {
        if (enabled != other.enabled) return enabled < other.enabled;
        if (!enabled) return false;
        if (func != other.func) return func < other.func;
        return reference < other.reference;
    }
};

// Decodes RB_COLORCONTROL and RB_ALPHA_REF into the state above.
alpha_test_state decode_alpha_test(const register_file& regs) noexcept;

// Depth render-target formats (from Xenia's DepthRenderTargetFormat).
enum class depth_format : uint8_t {
    d24s8 = 0,
    f32 = 1,
    d16 = 2,
    d24x8 = 3,
};

// A decoded depth render target.
struct depth_render_target {
    depth_format format{depth_format::d24s8};
    uint32_t edram_base_tiles{0}; // base tile in EDRAM
};

// Decodes RB_DEPTH_INFO into a depth target description.
depth_render_target decode_depth_render_target(const register_file& regs) noexcept;

// Depth test state, decoded from RB_DEPTHCONTROL and PA_SC_MODE_CNTL.
// PA_SC_MODE_CNTL bit 0 is the master z-enable: when clear, depth testing
// and writing are both off regardless of RB_DEPTHCONTROL.
struct depth_test_state {
    bool test_enabled{false};
    bool write_enabled{false};
    compare_function func{compare_function::less_equal};
};

depth_test_state decode_depth_test(const register_file& regs) noexcept;

// Which faces this draw throws away, and which winding it calls the front.
//
// A closed opaque model looks the same whichever of its two sides is culled,
// so getting this wrong is invisible on most titles and catastrophic on a 3D
// one: with nothing culled, the INSIDE of the terrain and the sky are drawn
// over the scene as huge smooth-shaded triangles.
struct face_cull_state {
    bool cull_front{false};
    bool cull_back{false};
    // The guest's own sense, before any host-side flip.
    bool front_ccw{true};
};

face_cull_state decode_face_cull(const register_file& regs) noexcept;

// Viewport registers, by dword index.
namespace reg {
inline constexpr uint32_t pa_cl_vport_xscale = 0x210F;
inline constexpr uint32_t pa_cl_vport_xoffset = 0x2110;
inline constexpr uint32_t pa_cl_vport_yscale = 0x2111;
inline constexpr uint32_t pa_cl_vport_yoffset = 0x2112;
inline constexpr uint32_t pa_cl_vport_zscale = 0x2113;
inline constexpr uint32_t pa_cl_vport_zoffset = 0x2114;
// PA_SC_MODE_CNTL: bit 0 is the master z-enable. When clear, depth testing
// and depth writing are both off regardless of RB_DEPTHCONTROL. Unset means
// the hardware's own early-z optimisations are also off, but the RE-render
// debug bits (19-20) are not decoded - they are a real-console diagnostic.
inline constexpr uint32_t pa_sc_mode_cntl = 0x2205;
// RB_DEPTHCONTROL: z_enable[0], z_write_enable[1], zfunc[7:5], and stencil
// fields that are not modelled. Xenia's rb_depthcontrol in registers.h.
inline constexpr uint32_t rb_depthcontrol = 0x2200;
} // namespace reg

// The viewport scale and offset, and whether the shader is emitting window
// space rather than clip space.
//
// PA_CL_VTE_CNTL's low six bits enable the hardware's own scale and offset per
// axis. When they are CLEAR the hardware does nothing and the vertex shader is
// emitting window-space coordinates itself - so those are exactly the cases a
// host renderer has to undo. This returns the values needed to do that, and
// whether they are needed at all.
struct viewport_state {
    bool shader_emits_window_space{false};
    float scale[3]{1.0f, 1.0f, 1.0f};
    float offset[3]{0.0f, 0.0f, 0.0f};
};

viewport_state decode_viewport(const register_file& regs) noexcept;

} // namespace whitty_xenon::gpu
