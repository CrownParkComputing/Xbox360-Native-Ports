#include "whitty_xenon/gpu/vulkan/scene_renderer.h"

#include "whitty_xenon/gpu/render_target.h"

namespace whitty_xenon::gpu {
namespace {

// Maps a Xenos primitive type onto the backend topology.
topology topology_for(primitive_type prim) {
    switch (prim) {
        case primitive_type::point_list: return topology::point_list;
        case primitive_type::line_list: return topology::line_list;
        case primitive_type::line_strip: return topology::line_strip;
        case primitive_type::triangle_fan: return topology::triangle_fan;
        case primitive_type::triangle_strip: return topology::triangle_strip;
        default: return topology::triangle_list;
    }
}

} // namespace

std::vector<float> scene_renderer::gather_positions(
    const draw_record& draw, const vertex_layout& layout) const {
    std::vector<float> positions;
    positions.reserve(std::size_t(draw.index_count) * 2);

    auto read_vertex = [&](uint32_t vertex_index) {
        const uint32_t address = layout.base_address +
                                 vertex_index * layout.stride_bytes +
                                 layout.position_offset;
        positions.push_back(m_memory->read_f32(address));
        positions.push_back(m_memory->read_f32(address + 4));
    };

    if (draw.indexed) {
        for (uint32_t index : draw.indices) read_vertex(index);
    } else {
        for (uint32_t i = 0; i < draw.index_count; ++i) read_vertex(i);
    }
    return positions;
}

bool scene_renderer::render(const std::vector<draw_record>& draws,
                            const vertex_layout& layout,
                            const std::vector<uint32_t>& vertex_spirv,
                            const std::vector<uint32_t>& fragment_spirv,
                            uint32_t width, uint32_t height, const float clear[4],
                            std::vector<uint8_t>& out, std::string& error) {
    // Assemble the geometry for every draw first; the frame_draw pointers must
    // outlive the render call, so the position lists are kept here.
    std::vector<std::vector<float>> geometry;
    geometry.reserve(draws.size());
    for (const draw_record& draw : draws)
        geometry.push_back(gather_positions(draw, layout));

    std::vector<vulkan_backend::frame_draw> frame_draws;
    frame_draws.reserve(draws.size());
    for (std::size_t i = 0; i < draws.size(); ++i) {
        vulkan_backend::frame_draw fd{&vertex_spirv, &fragment_spirv,
                                      &geometry[i], draws[i].index_count};
        fd.topo = topology_for(draws[i].prim);
        // Blend state comes from the register snapshot captured at the draw.
        fd.blend = blend_enabled(draws[i].state, 0);
        frame_draws.push_back(fd);
    }
    return m_backend->render_frame(width, height, clear, frame_draws, out,
                                   error);
}

} // namespace whitty_xenon::gpu
