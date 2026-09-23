// vertex_format.h - how a vertex attribute is laid out in memory.
//
// A vertex fetch instruction names a format for the attribute it reads. That
// format decides how many components the attribute has, how wide each element
// is, and whether it is floating-point or a normalized/integer fixed layout -
// everything a backend needs to describe the vertex input to the host GPU. This
// decodes the format field into that description.
#pragma once

#include <cstdint>

namespace whitty_xenon::gpu {

// Vertex element formats (from Xenia's VertexFormat).
enum class vertex_format : uint8_t {
    k_8_8_8_8 = 6,
    k_2_10_10_10 = 7,
    k_10_11_11 = 16,
    k_11_11_10 = 17,
    k_16_16 = 25,
    k_16_16_16_16 = 26,
    k_16_16_float = 31,
    k_16_16_16_16_float = 32,
    k_32 = 33,
    k_32_32 = 34,
    k_32_32_32_32 = 35,
    k_32_float = 36,
    k_32_32_float = 37,
    k_32_32_32_32_float = 38,
    k_32_32_32_float = 57,
};

struct vertex_format_info {
    uint32_t components{0}; // number of components (1..4)
    uint32_t byte_size{0};  // size of one attribute element in bytes
    bool is_float{false};   // floating-point (packed or IEEE) vs fixed/integer
};

// Decodes a vertex element format. An unknown format returns a zeroed info.
vertex_format_info decode_vertex_format(vertex_format format) noexcept;

} // namespace whitty_xenon::gpu
