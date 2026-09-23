#include "whitty_xenon/gpu/primitive_conversion.h"

namespace whitty_xenon::gpu {
namespace {

// The index of vertex `i` of the draw, whether the draw carried an index list
// or generates them.
uint32_t source_index(const std::vector<uint32_t>& indices,
                      uint32_t i) noexcept {
    return indices.empty() ? i : indices[i];
}

uint32_t vertex_count(const std::vector<uint32_t>& indices,
                      uint32_t index_count) noexcept {
    return indices.empty() ? index_count
                           : static_cast<uint32_t>(indices.size());
}

} // namespace

converted_primitives convert_primitives(primitive_type prim,
                                        const std::vector<uint32_t>& indices,
                                        uint32_t index_count) {
    converted_primitives out;
    const uint32_t count = vertex_count(indices, index_count);

    switch (prim) {
        case primitive_type::triangle_list:
            out.topology = host_topology::triangle_list;
            return out;
        case primitive_type::triangle_strip:
            out.topology = host_topology::triangle_strip;
            return out;
        case primitive_type::triangle_fan:
            out.topology = host_topology::triangle_fan;
            return out;
        case primitive_type::line_list:
            out.topology = host_topology::line_list;
            return out;
        case primitive_type::line_strip:
            out.topology = host_topology::line_strip;
            return out;
        case primitive_type::point_list:
            out.topology = host_topology::point_list;
            return out;

        case primitive_type::line_loop: {
            // A closed strip: the same vertices, with the first repeated at the
            // end so the last edge joins back up.
            out.topology = host_topology::line_strip;
            if (count < 2) return out;
            out.indices.reserve(count + 1);
            for (uint32_t i = 0; i < count; ++i)
                out.indices.push_back(source_index(indices, i));
            out.indices.push_back(source_index(indices, 0));
            return out;
        }

        case primitive_type::quad_list: {
            // Four vertices per quad, two triangles each, sharing the 0-2
            // diagonal. No new vertices, so this is exact.
            out.topology = host_topology::triangle_list;
            const uint32_t quads = count / 4;
            out.indices.reserve(static_cast<std::size_t>(quads) * 6);
            for (uint32_t q = 0; q < quads; ++q) {
                const uint32_t base = q * 4;
                const uint32_t v0 = source_index(indices, base + 0);
                const uint32_t v1 = source_index(indices, base + 1);
                const uint32_t v2 = source_index(indices, base + 2);
                const uint32_t v3 = source_index(indices, base + 3);
                out.indices.push_back(v0);
                out.indices.push_back(v1);
                out.indices.push_back(v2);
                out.indices.push_back(v0);
                out.indices.push_back(v2);
                out.indices.push_back(v3);
            }
            return out;
        }

        case primitive_type::quad_strip: {
            // Two vertices per quad after the first pair, same split.
            out.topology = host_topology::triangle_list;
            if (count < 4) return out;
            const uint32_t quads = (count - 2) / 2;
            out.indices.reserve(static_cast<std::size_t>(quads) * 6);
            for (uint32_t q = 0; q < quads; ++q) {
                const uint32_t base = q * 2;
                const uint32_t v0 = source_index(indices, base + 0);
                const uint32_t v1 = source_index(indices, base + 1);
                const uint32_t v2 = source_index(indices, base + 2);
                const uint32_t v3 = source_index(indices, base + 3);
                // A strip's quad is v0 v1 v3 v2 in winding order.
                out.indices.push_back(v0);
                out.indices.push_back(v1);
                out.indices.push_back(v3);
                out.indices.push_back(v0);
                out.indices.push_back(v3);
                out.indices.push_back(v2);
            }
            return out;
        }

        case primitive_type::rectangle_list: {
            // Three vertices per rectangle. The fourth is the mirror of one
            // vertex across the longest edge, which is only known once the
            // three have been transformed - so it cannot be reindexed into
            // existence here. The triangle that IS present goes out as a
            // triangle list, and the geometry stage named below turns each of
            // those triangles back into a whole rectangle.
            out.topology = host_topology::triangle_list;
            out.geometry = geometry_stage::complete_rectangle;
            const uint32_t rectangles = count / 3;
            out.indices.reserve(static_cast<std::size_t>(rectangles) * 3);
            for (uint32_t r = 0; r < rectangles; ++r) {
                const uint32_t base = r * 3;
                out.indices.push_back(source_index(indices, base + 0));
                out.indices.push_back(source_index(indices, base + 1));
                out.indices.push_back(source_index(indices, base + 2));
            }
            return out;
        }

        case primitive_type::polygon:
            // A single convex polygon - a fan around its first vertex.
            out.topology = host_topology::triangle_fan;
            return out;

        case primitive_type::none:
        default:
            out.topology = host_topology::unsupported;
            return out;
    }
}

} // namespace whitty_xenon::gpu
