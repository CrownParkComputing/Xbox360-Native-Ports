// register_file.h - the Xenos GPU's register state.
//
// The type-0 and type-1 PM4 packets the decoder produces do one thing: write
// registers. Those registers are the whole of the GPU's pipeline state - which
// render target is bound, the scissor rectangle, which shaders are loaded, the
// shader constants - so the register file is where a decoded command stream
// turns into something the render path can read back.
//
// It is a flat array indexed by register index (a dword index, not a byte
// address, matching how the console and Xenia number them; the same numbering
// as the Adreno 200 / AMD R400 the Xenos descends from). Most of the 0x5003
// entries are shader constants; a handful of named ones drive the fixed-
// function state, and those are given names here as they are needed.
#pragma once

#include "whitty_xenon/gpu/fetch.h"
#include "whitty_xenon/gpu/pm4.h"

#include <array>
#include <cstdint>
#include <tuple>

namespace whitty_xenon::gpu {

// Named registers, by dword index (from Xenia's register table). Only the ones
// the render path reaches for first are named; the rest are addressed by number.
namespace reg {
inline constexpr uint32_t rb_surface_info = 0x2000;
inline constexpr uint32_t rb_color_info = 0x2001;
inline constexpr uint32_t rb_depth_info = 0x2002;
inline constexpr uint32_t rb_color1_info = 0x2003;
inline constexpr uint32_t rb_color2_info = 0x2004;
inline constexpr uint32_t rb_color3_info = 0x2005;
inline constexpr uint32_t vgt_indx_offset = 0x2102;
// The signed x/y a TILED frame shifts its geometry by. A title that renders
// 1280x720 through EDRAM does it in horizontal slices, replaying the same
// full-screen geometry once per slice and moving the window so each replay
// lands in the slice's rows. Ignore it and every slice keeps the same rows.
// Bit 16 of PA_SU_SC_MODE_CNTL says whether it reaches vertex positions at all.
inline constexpr uint32_t pa_sc_window_offset = 0x2080;
inline constexpr uint32_t pa_sc_window_scissor_tl = 0x2081;
inline constexpr uint32_t pa_sc_window_scissor_br = 0x2082;
inline constexpr uint32_t sq_program_cntl = 0x2180;
// Which interpolator register the hardware fills in itself for a pixel shader:
// bits 8-15 here, enabled by SQ_PROGRAM_CNTL's bit 18. See
// shader_translator::options::param_gen_interpolator - for a point sprite this
// register is where its texture coordinate comes from, and nothing else carries
// it.
inline constexpr uint32_t sq_context_misc = 0x2181;
// A point sprite's size, and the range a per-vertex size is clamped to. Both
// hold HALF the size in 1/16ths of a pixel, so a diameter in pixels is the
// field times 2/16.
inline constexpr uint32_t pa_su_point_size = 0x2280;
inline constexpr uint32_t pa_su_point_minmax = 0x2281;
inline constexpr uint32_t rb_blendcontrol0 = 0x2201;
// The other three blend controls are NOT rb_blendcontrol0 + index. RB_COLOR
// CONTROL and RB_HIZCONTROL sit between them (Xenia's register_table.inc), so
// 1, 2 and 3 are 0x2209, 0x220A and 0x220B. Indexing off the first one reads
// the alpha test as a blend mode for target 1.
inline constexpr uint32_t rb_blendcontrol1 = 0x2209;
// The ALPHA TEST: alpha_func[2:0], alpha_test_enable[3], alpha_to_mask[4]
// (Xenia's registers.h RB_COLORCONTROL), compared against RB_ALPHA_REF.
//
// It is the stage after the pixel shader that decides whether a fragment is
// written at all, and it is how a sprite sheet's cut-out is usually done: the
// quad is opaque, and the texels outside the sprite fail the test. Ignoring it
// draws the whole quad - a RECTANGLE around every sprite - and no counter
// anywhere reports that, because the draw did happen and every pixel of it was
// written on purpose.
inline constexpr uint32_t rb_alpha_ref = 0x210E;
inline constexpr uint32_t rb_colorcontrol = 0x2202;
inline constexpr uint32_t vgt_event_initiator = 0x21F9;
inline constexpr uint32_t vgt_draw_initiator = 0x21FC;
// Which face is the front, and which faces are thrown away. Bit 0 culls the
// front, bit 1 the back, and bit 2 says a CLOCKWISE winding is the front.
inline constexpr uint32_t pa_su_sc_mode_cntl = 0x2205;
inline constexpr uint32_t pa_cl_vte_cntl = 0x2206;
inline constexpr uint32_t rb_modecontrol = 0x2208;
// What a resolve does BESIDES copying. Bit 8 clears the colour buffer and bit 9
// the depth buffer, both AFTER the copy - so this register is the statement of
// whether EDRAM survives the resolve. It usually does: a title that resolves the
// same surface to several destinations in a row, or resolves and then keeps
// drawing into it, is relying on that. (RB_COPY_CONTROL in Xenia's
// registers.h: copy_src_select:3, copy_sample_select:3, color_clear_enable at
// +8, depth_clear_enable at +9, copy_command at +20.)
inline constexpr uint32_t rb_copy_control = 0x2318;
// Where a resolve puts its result. RB_MODECONTROL's mode 6 means the draw is a
// copy out of EDRAM rather than geometry, and this is its destination address -
// the thing a later pass samples to get this pass's picture back.
inline constexpr uint32_t rb_copy_dest_base = 0x2319;
inline constexpr uint32_t rb_copy_dest_pitch = 0x231A;
inline constexpr uint32_t rb_copy_dest_info = 0x231B;
// Where an occlusion query's sample counts are written. The EVENT_WRITE_ZPD
// packet carries no address of its own: it uses whatever this register held
// when it ran, which is how one packet can serve both the BEGIN and the END
// record of a query. The low five bits pick the record within a 0x40-byte
// slot - END at the slot base, BEGIN at +0x20.
inline constexpr uint32_t rb_sample_count_ctl = 0x2324;
inline constexpr uint32_t rb_sample_count_addr = 0x2325;
// The eight scratch registers, and the two that mirror them into memory.
//
// A scratch register is not pipeline state: it is a mailbox the command stream
// writes and the CPU reads. SCRATCH_ADDR holds the PHYSICAL address of a block
// of memory and SCRATCH_UMSK a bit per register; writing SCRATCH_REGn while
// bit n of the mask is set also stores the value at SCRATCH_ADDR + n*4, so a
// packet part-way through a buffer can hand the CPU a value at exactly the
// point the GPU reaches it. Xenia does the same in
// CommandProcessor::HandleSpecialRegisterWrite (src/xenia/gpu/command_processor.cc).
inline constexpr uint32_t scratch_umsk = 0x01DC;
inline constexpr uint32_t scratch_addr = 0x01DD;
inline constexpr uint32_t scratch_reg0 = 0x0578;
inline constexpr uint32_t scratch_reg7 = 0x057F;
// Bases of the large banks: 512 float constants from 0x4000, fetch constants
// (vertex/texture) from 0x4800.
inline constexpr uint32_t shader_constant_000_x = 0x4000;
inline constexpr uint32_t shader_constant_fetch_00_0 = 0x4800;
// The two small banks a shader's CONTROL FLOW reads, as opposed to its
// arithmetic. Eight dwords of boolean constants - 256 single bits, one per
// possible `if (b<n>)` - then 32 loop constants, one per loop the shader may
// name. A loop constant packs the trip count in bits 0:7, the starting value
// of the loop register aL in 8:15, and aL's signed step in 16:23.
//
// They are per-DRAW state like the float bank, not per shader: the same shader
// runs its loop a different number of times from one draw to the next, which
// is why they have to reach the shader as uniforms and cannot be folded in at
// translation time.
inline constexpr uint32_t shader_constant_bool_000_031 = 0x4900;
inline constexpr uint32_t shader_constant_loop_00 = 0x4908;
} // namespace reg

class register_file {
public:
    static constexpr uint32_t kRegisterCount = 0x5003;

    bool in_range(uint32_t index) const noexcept {
        return index < kRegisterCount;
    }

    // Reads a register. An out-of-range index reads zero rather than faulting -
    // a decoded write run can address past the end, and a stray read should not
    // take the process down.
    uint32_t get(uint32_t index) const noexcept {
        return in_range(index) ? m_values[index] : 0;
    }
    void set(uint32_t index, uint32_t value) noexcept {
        if (in_range(index)) m_values[index] = value;
    }

    // Reads a register's bits as a float - shader constants and viewport values
    // are stored this way.
    float get_float(uint32_t index) const noexcept;

    // Applies one decoded register write. Out-of-range writes are dropped.
    void apply(const register_write& write) noexcept {
        set(write.index, write.value);
    }
    // Applies every register write a decoded packet carried (type 0 and 1).
    void apply(const pm4_packet& packet) noexcept {
        for (const register_write& write : packet.register_writes)
            apply(write);
    }

private:
    std::array<uint32_t, kRegisterCount> m_values{};
};

// Where one vertex buffer is. A vfetch instruction names a slot rather than an
// address, and this is what that slot holds: two dwords in the fetch bank.
// Both fields are stored scaled - the address in dwords, the size in dwords -
// so a reader that takes them as bytes lands a quarter of the way into the
// buffer and reads a quarter of it.
struct vertex_fetch_constant {
    uint32_t base_address{0}; // byte address, in the GPU's physical view
    uint32_t size_bytes{0};
    endian swap{endian::none};
    uint32_t type{0}; // FetchConstantType; 3 is a vertex fetch
};

// Decodes vertex fetch slot `slot` (two dwords each, from the fetch bank).
vertex_fetch_constant decode_vertex_fetch_constant(const register_file& regs,
                                                   uint32_t slot) noexcept;

// Where a texture is. Six dwords per slot in the same bank the vertex fetch
// constants live in - so the two indexings must not be confused: a texture at
// slot N starts at N*6, a vertex buffer at N*2.
//
// The base address matters beyond just finding pixels: a title renders a pass,
// resolves it out of EDRAM to an address, then samples THAT address in a later
// pass. Matching a sampled address against a resolve destination is what lets
// a renderer feed one pass's output into the next, which is the whole
// mechanism behind an effect like a glow.
struct texture_fetch_constant {
    uint32_t type{0};         // FetchConstantType; 2 is a texture
    uint32_t base_address{0}; // byte address (stored as address >> 12)
    uint32_t format{0};
    uint32_t pitch_pixels{0}; // stored >> 5
    bool tiled{false};
    uint32_t width{0};        // 2D size, stored as size-1
    uint32_t height{0};
    // How the console's bytes are ordered within a texel. A texel's fields are
    // packed into a word whose LOW bits hold the first component, and the word
    // itself is stored big-endian - so undoing this swap is what puts the
    // components back where the format says they are. Dropping it silently
    // reverses every channel of a 32-bit texture.
    endian endianness{endian::none};
    // Which source component each of the four sampled components reads: four
    // three-bit selectors (0-3 pick a component, 4 is constant 0, 5 is
    // constant 1), x in the lowest bits. This is not cosmetic - a title that
    // uploads an ARGB surface relies on it to present as RGBA, so ignoring it
    // swaps red and blue on exactly the textures a title uses most.
    uint32_t swizzle{0};
    // Whether this texture's mip levels share one tile with each other. It
    // sounds like it concerns only the mips, and it does not: when the shorter
    // side is small enough the BASE level is packed into that tile too, offset
    // to one side of it, so the pixels do not start at the base address.
    bool packed_mips{false};
    // How the title asked for this texture to be SAMPLED, as opposed to where
    // it is and what shape it is. Ignoring these does not fail: it silently
    // substitutes one plausible picture for another. Bilinear on a texture a
    // title asked to be point-sampled - a font page, a UI atlas, anything drawn
    // at one texel per pixel - is a soft blur over text that should be exact,
    // and there is no error anywhere to say so.
    texture_filter mag_filter{texture_filter::point};
    texture_filter min_filter{texture_filter::point};
    texture_filter mip_filter{texture_filter::point};
    texture_aniso_filter aniso_filter{texture_aniso_filter::disabled};
    texture_clamp_mode clamp_x{texture_clamp_mode::repeat};
    texture_clamp_mode clamp_y{texture_clamp_mode::repeat};
    texture_clamp_mode clamp_z{texture_clamp_mode::repeat};
    texture_border_color border_color{texture_border_color::abgr_black};
    uint32_t mip_min_level{0};
    uint32_t mip_max_level{0};
    // Where the mip chain is, stored >> 12 like the base address. Zero means
    // there are no mips at all, which is what decides whether the mip filter
    // and the level clamps mean anything.
    uint32_t mip_address{0};
    fetch_dimension dimension{fetch_dimension::d2};
};

texture_fetch_constant decode_texture_fetch_constant(const register_file& regs,
                                                     uint32_t slot) noexcept;

// The sampler one draw's one texture slot actually needs, once the shader's
// per-instruction override and the fetch constant have been reconciled.
//
// Kept as booleans rather than as the console's enums because that is the shape
// a host sampler wants and because it is the shape that compares: two slots
// wanting the same sampler must produce the same key, or the cache holds one
// sampler per slot per draw and the point of caching is lost.
struct sampler_state {
    bool mag_linear{false};
    bool min_linear{false};
    bool mip_linear{false};
    // The mip filter asked for the base level and nothing else. That is not a
    // filter mode on the host - it is a clamp on which levels may be read.
    bool mip_base_map{false};
    texture_aniso_filter aniso{texture_aniso_filter::disabled};
    texture_clamp_mode clamp_x{texture_clamp_mode::repeat};
    texture_clamp_mode clamp_y{texture_clamp_mode::repeat};
    texture_clamp_mode clamp_z{texture_clamp_mode::repeat};
    texture_border_color border{texture_border_color::abgr_black};
    uint32_t mip_min_level{0};

    bool operator<(const sampler_state& other) const noexcept {
        return std::tie(mag_linear, min_linear, mip_linear, mip_base_map,
                        aniso, clamp_x, clamp_y, clamp_z, border,
                        mip_min_level) <
               std::tie(other.mag_linear, other.min_linear, other.mip_linear,
                        other.mip_base_map, other.aniso, other.clamp_x,
                        other.clamp_y, other.clamp_z, other.border,
                        other.mip_min_level);
    }
    bool operator==(const sampler_state& other) const noexcept {
        return !(*this < other) && !(other < *this);
    }
};

// What one texture fetch instruction asked for, as far as a sampler is
// concerned. Every field may be `use_fetch_constant`, and usually is.
struct sampler_override {
    texture_filter mag_filter{texture_filter::use_fetch_constant};
    texture_filter min_filter{texture_filter::use_fetch_constant};
    texture_filter mip_filter{texture_filter::use_fetch_constant};
    texture_aniso_filter aniso_filter{texture_aniso_filter::use_fetch_constant};
};

// Reconciles the two. Per field: the instruction wins unless it said
// `use_fetch_constant`, in which case the constant does. This is the whole of
// the rule, and it is per FIELD - a shader can override the magnification
// filter and defer on the rest, and frequently does.
//
// A default-constructed override - every field deferring - therefore yields
// exactly what the fetch constant says, which is what a draw whose shader
// expressed no preference should get.
sampler_state resolve_sampler_state(const texture_fetch_constant& fetch,
                                    const sampler_override& shader) noexcept;

} // namespace whitty_xenon::gpu
