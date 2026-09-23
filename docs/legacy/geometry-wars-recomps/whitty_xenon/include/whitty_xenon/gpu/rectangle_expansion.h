// rectangle_expansion.h - a Xenos rectangle list drawn without a geometry stage.
//
// A rectangle list gives three vertices per rectangle and leaves the fourth
// implied: it is the first vertex mirrored across the edge the other two span,
// chosen so the longest edge of the triangle becomes the rectangle's diagonal.
// primitive_conversion.cpp says why index arithmetic cannot produce it - the
// mirror is defined on the vertices AFTER the vertex shader has transformed
// them, and nothing before the draw knows what those are.
//
// That is true in general and false for one specific and very common shape of
// shader: one whose exports are an AFFINE function of what it fetched. For such
// a shader, transforming the fourth vertex and building the fourth vertex
// commute -
//
//     T((v1 - v0) + v2)  ==  (T(v1) - T(v0)) + T(v2)   for affine T
//
// - so the vertex can be built from the vertex BUFFER, before the draw, and the
// shader will transform it into exactly the one the geometry stage would have
// emitted. That is worth having because `geometryShader` is an optional Vulkan
// feature: a device without it draws a rectangle list as bare triangles and
// loses half of every rectangle, and for a title whose composite passes are
// full-screen rectangles that is half the picture.
//
// The precondition is checked, not assumed - see analyse_rectangle_passthrough.
// A shader that does not meet it is refused here and the caller falls back to
// the geometry stage, or counts the draw approximate exactly as it does today.
// Guessing instead would produce a picture that is subtly wrong with nothing
// reporting an error, which is the failure this project pays for most often.
//
// Two limits are deliberate rather than incidental:
//
//   * only IEEE-float attributes are expanded. (v1 - v0) + v2 has to be
//     representable in the SOURCE format, and in a normalised or packed one it
//     is not; a rounded fourth vertex is a wrong fourth vertex.
//   * the affinity test is a dataflow one over the decoded microcode, not a
//     guess from the instruction count. A shader with any arithmetic between a
//     fetch and an export is refused, including arithmetic that happens to be
//     affine, because proving THAT needs a real value analysis and refusing is
//     free.
#pragma once

#include "whitty_xenon/gpu/shader_program.h"

#include <cstddef>
#include <cstdint>
#include <vector>

namespace whitty_xenon::gpu {

// What the microcode analysis found.
struct rectangle_passthrough {
    // True when every export is a plain copy of a vertex-fetch result, so the
    // whole shader is affine in its inputs.
    bool ok{false};
    // Which vertex fetch supplies gl_Position, as an index into the fetch
    // instructions in program order - which is the same order
    // shader_translator::collect_vertex_inputs numbers its `vertex_input`
    // entries in, so it indexes translated_shader::inputs directly.
    uint32_t position_input{0};
    // Why a shader was refused, as a fixed string. A refusal that says only
    // "no" costs an afternoon to turn back into a reason, and there are eleven
    // distinct ones here.
    const char* reason{"not analysed"};
};

// Decides whether a vertex shader's outputs are an affine function of the
// vertex buffer, and which attribute becomes the position.
rectangle_passthrough analyse_rectangle_passthrough(const shader_program& program);

// One float attribute inside a staged vertex record.
struct rectangle_field {
    uint32_t binding{0};      // which of the draw's vertex bindings holds it
    uint32_t offset_bytes{0}; // byte offset within one record
    uint32_t components{0};   // 1..4 IEEE floats, host byte order
};

// One of the draw's staged vertex buffers, as the backend would have bound it.
struct rectangle_binding {
    const uint8_t* data{nullptr};
    std::size_t size{0};
    uint32_t stride{0};
};

// A rectangle-list draw rebuilt as an ordinary indexed triangle list.
struct expanded_rectangles {
    bool ok{false};
    // A replacement buffer per input binding: four records per rectangle, in
    // the order the console's geometry stage would have emitted them. Compact,
    // so the draw's first_vertex becomes 0 and its index offset is already
    // applied.
    std::vector<std::vector<uint8_t>> buffers;
    // Six indices per rectangle. The pair of triangles a four-vertex strip
    // rasterises: (0,1,2) and (2,1,3), which is the strip rule spelled out.
    std::vector<uint32_t> indices;
    uint32_t vertex_count{0};
};

// Rebuilds a rectangle-list draw with its fourth vertices present.
//
// `fields` names every float attribute the shader reads, across all bindings;
// each is interpolated into the fourth vertex. Anything in a record that is not
// named is copied from the third vertex, which is harmless because the shader
// does not read it.
//
// `edge_scale` is the per-axis factor the shader's own position export applies
// (1, -1 for a clip-space export; the inverse viewport scale for a window-space
// one). It exists because the console picks the diagonal by comparing edge
// lengths AFTER the transform, and a transform that scales x and y differently
// can pick a different edge than the untransformed comparison would. Getting
// this wrong builds a valid rectangle in the wrong place, which looks like a
// geometry bug and is not one.
//
// `indices` is the draw's own index list, or empty for a sequential draw;
// `first_vertex` is added to every index exactly as the draw would.
expanded_rectangles expand_rectangle_list(
    const std::vector<rectangle_binding>& bindings,
    const std::vector<rectangle_field>& fields,
    const rectangle_field& position, const float edge_scale[2],
    const std::vector<uint32_t>& indices, uint32_t index_count,
    uint32_t first_vertex);

} // namespace whitty_xenon::gpu
