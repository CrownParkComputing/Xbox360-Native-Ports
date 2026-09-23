// primitive_conversion.h - Xenos primitives the host cannot draw.
//
// The Xenos draws with primitive types Vulkan has no equivalent for. Two of
// them matter, because titles lean on them heavily:
//
//   quad list      - four vertices per quad, drawn as two triangles. This is a
//                    pure index expansion: no new vertices, no geometry needed,
//                    exactly reproducible.
//   rectangle list - THREE vertices per rectangle, with the fourth implied by
//                    mirroring a vertex across the longest edge. The fourth
//                    vertex does not exist in the vertex buffer and its
//                    position depends on the other three AFTER the vertex
//                    shader has run, so it cannot be produced by reindexing.
//                    The triangle that IS present is emitted, and the
//                    conversion asks for the geometry stage that completes it
//                    (see build_rectangle_geometry_shader). Drawn without that
//                    stage, every rectangle loses a diagonal half - which is
//                    why the request is stated here rather than assumed.
//
// Everything else maps straight onto a host topology.
//
// This is index arithmetic and nothing else, so it is entirely host-testable
// away from a GPU - which is the point, because an off-by-one in a winding
// order produces a picture that is wrong in a way no assertion would catch.
#pragma once

#include "whitty_xenon/gpu/pm4.h"

#include <cstdint>
#include <vector>

namespace whitty_xenon::gpu {

// The host topology a converted draw is issued with.
enum class host_topology : uint8_t {
    triangle_list,
    triangle_strip,
    triangle_fan,
    line_list,
    line_strip,
    point_list,
    unsupported, // no host equivalent, and no conversion for it yet
};

// An extra pipeline stage a converted draw needs to be complete.
//
// Index arithmetic can only move vertices that exist. Where the console invents
// one - and where inventing it depends on values the vertex shader produces -
// the conversion cannot do the work and says here who must.
enum class geometry_stage : uint8_t {
    none,
    // A rectangle list's fourth vertex, mirrored across the longest edge of
    // each triangle once the three have been transformed.
    complete_rectangle,
};

struct converted_primitives {
    host_topology topology{host_topology::unsupported};
    // The indices to draw with. Empty means "draw the source indices
    // unchanged" - the common case, where only the topology needed mapping.
    std::vector<uint32_t> indices;
    // The stage the draw must be issued with to be what the console drew.
    // Issuing it without that stage draws less geometry than the console did,
    // so a caller that cannot supply the stage has to say the draw was
    // approximate itself - the conversion cannot know.
    geometry_stage geometry{geometry_stage::none};
    // False when these indices, drawn with `geometry`, are still not what the
    // console would have drawn. Nothing sets this yet: every primitive is
    // either mapped exactly or unsupported outright.
    bool exact{true};
};

// Converts a draw's primitive type and index list into something the host can
// draw. `indices` may be empty for an auto-generated draw, in which case the
// indices are taken to be 0..index_count-1.
converted_primitives convert_primitives(primitive_type prim,
                                        const std::vector<uint32_t>& indices,
                                        uint32_t index_count);

} // namespace whitty_xenon::gpu
