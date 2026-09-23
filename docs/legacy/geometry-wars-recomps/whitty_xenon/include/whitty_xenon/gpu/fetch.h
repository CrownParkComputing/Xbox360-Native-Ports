// fetch.h - decoding Xenos fetch instructions.
//
// Alongside the ALU instructions in a shader's execution blocks sit the fetch
// instructions: the ones that pull data in from outside the shader. There are
// two kinds, told apart by the opcode in their first five bits - a vertex fetch,
// which reads a vertex attribute out of a vertex buffer, and a texture fetch,
// which samples a texture. Both are three dwords. This decodes them into the
// bindings and parameters a translator needs: which fetch constant, which source
// and destination registers, the swizzles, and (for vertex fetches) the format,
// stride and offset that locate the attribute.
//
// Field positions are taken from Xenia's VertexFetchInstruction and
// TextureFetchInstruction. Several fields are signed and narrower than a byte
// (a vertex fetch's exponent adjust and dword offset, a texture fetch's texel
// offsets), so those are sign-extended on the way out.
#pragma once

#include <cstdint>

namespace whitty_xenon::gpu {

// The opcode in a fetch instruction's low five bits.
enum class fetch_opcode : uint8_t {
    vertex_fetch = 0,
    texture_fetch = 1,
    get_texture_border_color_frac = 16,
    get_texture_computed_lod = 17,
    get_texture_gradients = 18,
    get_texture_weights = 19,
    set_texture_lod = 24,
    set_texture_gradients_horz = 25,
    set_texture_gradients_vert = 26,
};

// The shape of a sampled texture.
enum class fetch_dimension : uint8_t {
    d1 = 0,
    d2 = 1,
    d3_or_stacked = 2,
    cube = 3,
};

// How a sample is filtered. The same two-bit encoding appears twice - once in
// the texture fetch CONSTANT, as the state the title set on the sampler, and
// once in each texture fetch INSTRUCTION, as an override that shader wants for
// that one sample.
//
// `use_fetch_constant` is what makes the two work together: it is the
// instruction saying "whatever the constant says", and it is the default every
// compiler emits, so it is overwhelmingly the common case. Collapsing it to
// anything concrete - point or linear - throws away the title's own choice,
// which is exactly the thing being decoded here.
//
// `base_map` is only meaningful as a MIP filter: it means sample the base level
// and no other, which is a level clamp rather than a filter mode.
enum class texture_filter : uint8_t {
    point = 0,
    linear = 1,
    base_map = 2,
    use_fetch_constant = 3,
};

// How many samples an anisotropic minification takes, as a ratio. The value is
// a log2: the ratio is 1 << (value - 1), so max_4_1 is 4:1. Note the gap - 6 is
// unused and "use the fetch constant" is SEVEN, not one past the last ratio,
// which is the sort of thing that reads as an off-by-one when it is not.
enum class texture_aniso_filter : uint8_t {
    disabled = 0,
    max_1_1 = 1,
    max_2_1 = 2,
    max_4_1 = 3,
    max_8_1 = 4,
    max_16_1 = 5,
    use_fetch_constant = 7,
};

// What happens outside [0, 1]. Only the fetch constant carries this - an
// instruction cannot override addressing.
enum class texture_clamp_mode : uint8_t {
    repeat = 0,
    mirrored_repeat = 1,
    clamp_to_edge = 2,
    mirror_clamp_to_edge = 3,
    clamp_to_halfway = 4,
    mirror_clamp_to_halfway = 5,
    clamp_to_border = 6,
    mirror_clamp_to_border = 7,
};

// Which colour a clamp-to-border reads outside the texture.
enum class texture_border_color : uint8_t {
    abgr_black = 0,
    abgr_white = 1,
    acbycr_black = 2,
    acbcry_black = 3,
};

// The opcode of a fetch instruction, without decoding the rest.
fetch_opcode decode_fetch_opcode(const uint32_t* dwords) noexcept;

struct vertex_fetch_instruction {
    fetch_opcode opcode{fetch_opcode::vertex_fetch};
    uint8_t src_reg{0};
    uint8_t dst_reg{0};
    uint8_t const_index{0};   // vertex fetch constant slot [0, 95]
    bool is_mini_fetch{false}; // reuses the preceding full fetch's address
    uint8_t prefetch_count{0};
    uint8_t src_swizzle{0};   // 2 bits, one absolute component
    uint16_t dst_swizzle{0};  // 12 bits, three per component
    uint8_t format{0};        // xenos::VertexFormat, kept raw
    int32_t exp_adjust{0};    // signed exponent bias
    uint8_t stride{0};        // dword stride [0, 255]
    int32_t offset{0};        // signed dword offset
    bool is_predicated{false};
    bool predicate_condition{false};
};

struct texture_fetch_instruction {
    fetch_opcode opcode{fetch_opcode::texture_fetch};
    uint8_t src_reg{0};
    uint8_t dst_reg{0};
    uint8_t fetch_constant_index{0}; // texture/sampler fetch constant slot
    uint8_t src_swizzle{0};          // 6 bits, three components
    uint16_t dst_swizzle{0};         // 12 bits
    // What this one sample wants instead of the fetch constant's filtering.
    // Every one of them defaults to `use_fetch_constant`, which is what the
    // hardware's own default encoding is: a shader that says nothing about
    // filtering is deferring, not asking for point.
    texture_filter mag_filter{texture_filter::use_fetch_constant};
    texture_filter min_filter{texture_filter::use_fetch_constant};
    texture_filter mip_filter{texture_filter::use_fetch_constant};
    texture_aniso_filter aniso_filter{texture_aniso_filter::use_fetch_constant};
    fetch_dimension dimension{fetch_dimension::d2};
    int32_t offset_x{0};             // signed texel offsets
    int32_t offset_y{0};
    int32_t offset_z{0};
    bool is_predicated{false};
    bool predicate_condition{false};
};

// Decodes a three-dword fetch instruction of the matching kind (host dword
// order). Call decode_fetch_opcode first to pick which.
vertex_fetch_instruction decode_vertex_fetch_instruction(
    const uint32_t* dwords) noexcept;
texture_fetch_instruction decode_texture_fetch_instruction(
    const uint32_t* dwords) noexcept;

} // namespace whitty_xenon::gpu
