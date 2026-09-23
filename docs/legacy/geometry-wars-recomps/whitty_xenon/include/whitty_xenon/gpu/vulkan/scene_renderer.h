// scene_renderer.h - a command buffer, all the way to a frame.
//
// This is the seam where the two halves of the GPU finally join. The command
// processor turns a command buffer into draw records; the Vulkan backend turns
// geometry and shaders into pixels. Between them sits the geometry assembly: for
// each draw, walk its indices, read each vertex's position out of guest memory,
// and hand the result to the backend as a draw within the frame.
//
// The vertex layout (where the vertex buffer is, its stride, and where the
// position sits inside each vertex) comes from the title's vertex fetch setup;
// here it is passed in, so the assembly can be exercised end to end without a
// full shader decode. Positions are read big-endian, as the console stores them.
#pragma once

#include "whitty_xenon/gpu/command_processor.h"
#include "whitty_xenon/gpu/vulkan/vulkan_backend.h"
#include "whitty_xenon/memory.h"

#include <cstdint>
#include <string>
#include <vector>

namespace whitty_xenon::gpu {

// Where a draw's vertex positions live in guest memory.
struct vertex_layout {
    uint32_t base_address{0};    // byte address of the vertex buffer
    uint32_t stride_bytes{0};    // bytes between consecutive vertices
    uint32_t position_offset{0}; // byte offset of the position within a vertex
};

class scene_renderer {
public:
    scene_renderer(vulkan_backend& backend, guest_memory& memory) noexcept
        : m_backend(&backend), m_memory(&memory) {}

    // Reads a draw's vertex positions (two big-endian floats each) out of guest
    // memory, following its indices for an indexed draw or 0..count-1 for an
    // auto draw. Returned as clip-space x, y pairs.
    std::vector<float> gather_positions(const draw_record& draw,
                                        const vertex_layout& layout) const;

    // Renders every draw record into one frame with the given shaders and vertex
    // layout, and reads it back as RGBA.
    bool render(const std::vector<draw_record>& draws,
                const vertex_layout& layout,
                const std::vector<uint32_t>& vertex_spirv,
                const std::vector<uint32_t>& fragment_spirv, uint32_t width,
                uint32_t height, const float clear[4],
                std::vector<uint8_t>& out, std::string& error);

private:
    vulkan_backend* m_backend;
    guest_memory* m_memory;
};

} // namespace whitty_xenon::gpu
