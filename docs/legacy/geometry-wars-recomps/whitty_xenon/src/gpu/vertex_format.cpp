#include "whitty_xenon/gpu/vertex_format.h"

namespace whitty_xenon::gpu {

vertex_format_info decode_vertex_format(vertex_format format) noexcept {
    switch (format) {
        // Packed 32-bit formats.
        case vertex_format::k_8_8_8_8: return {4, 4, false};
        case vertex_format::k_2_10_10_10: return {4, 4, false};
        case vertex_format::k_10_11_11: return {3, 4, true};  // packed float
        case vertex_format::k_11_11_10: return {3, 4, true};  // packed float
        // 16-bit-per-component.
        case vertex_format::k_16_16: return {2, 4, false};
        case vertex_format::k_16_16_16_16: return {4, 8, false};
        case vertex_format::k_16_16_float: return {2, 4, true};
        case vertex_format::k_16_16_16_16_float: return {4, 8, true};
        // 32-bit-per-component integer.
        case vertex_format::k_32: return {1, 4, false};
        case vertex_format::k_32_32: return {2, 8, false};
        case vertex_format::k_32_32_32_32: return {4, 16, false};
        // 32-bit-per-component float.
        case vertex_format::k_32_float: return {1, 4, true};
        case vertex_format::k_32_32_float: return {2, 8, true};
        case vertex_format::k_32_32_32_float: return {3, 12, true};
        case vertex_format::k_32_32_32_32_float: return {4, 16, true};
    }
    return {0, 0, false};
}

} // namespace whitty_xenon::gpu
