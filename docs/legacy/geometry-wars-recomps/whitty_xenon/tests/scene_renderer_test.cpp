// End-to-end test: a command buffer becomes a rendered frame.
//
// This exercises the whole GPU chain on real hardware. Vertex positions and a
// PM4 command buffer are laid down in guest memory; the command processor turns
// the buffer into a draw record; the scene renderer walks the draw's vertices
// out of memory and renders them through the Vulkan backend; and the readback
// confirms the triangle landed where its geometry said it would. If no GPU is
// present the test skips.
#include "whitty_xenon/gpu/command_processor.h"
#include "whitty_xenon/gpu/register_file.h"
#include "whitty_xenon/gpu/spirv_builder.h"
#include "whitty_xenon/gpu/vulkan/scene_renderer.h"
#include "whitty_xenon/gpu/vulkan/vulkan_backend.h"
#include "whitty_xenon/memory.h"

#include <cassert>
#include <cstdint>
#include <cstdio>
#include <string>
#include <vector>

using namespace whitty_xenon;
using namespace whitty_xenon::gpu;

namespace {

bool near_byte(uint8_t v, uint8_t t) { const int d = int(v) - int(t); return d >= -2 && d <= 2; }

// A passthrough vertex shader (vec2 input at location 0 -> gl_Position).
std::vector<uint32_t> vertex_shader() {
    spirv_builder b;
    const uint32_t main_id = b.allocate_id(), label = b.allocate_id();
    const uint32_t in_pos = b.allocate_id(), out_pos = b.allocate_id();
    b.emit(spirv_section::capabilities, spv::OpCapability, {spv::CapabilityShader});
    b.emit(spirv_section::memory_model, spv::OpMemoryModel,
           {spv::AddressingModelLogical, spv::MemoryModelGLSL450});
    std::vector<uint32_t> e = {spv::ExecutionModelVertex, main_id};
    for (uint32_t w : spirv_builder::string_words("main")) e.push_back(w);
    e.push_back(in_pos);
    e.push_back(out_pos);
    b.emit(spirv_section::entry_points, spv::OpEntryPoint, e);
    b.emit(spirv_section::decorations, spv::OpDecorate,
           {in_pos, spv::DecorationLocation, 0});
    b.emit(spirv_section::decorations, spv::OpDecorate,
           {out_pos, spv::DecorationBuiltIn, spv::BuiltInPosition});
    const uint32_t vf = b.type_void(), fn = b.type_function(vf), f = b.type_float();
    const uint32_t v2 = b.type_vector(f, 2), v4 = b.type_vector(f, 4);
    b.emit(spirv_section::types, spv::OpVariable,
           {b.type_pointer(1, v2), in_pos, 1});
    b.emit(spirv_section::types, spv::OpVariable,
           {b.type_pointer(spv::StorageClassOutput, v4), out_pos,
            spv::StorageClassOutput});
    const uint32_t f0 = b.constant_float(0.0f), f1 = b.constant_float(1.0f);
    b.emit(spirv_section::functions, spv::OpFunction,
           {vf, main_id, spv::FunctionControlNone, fn});
    b.emit(spirv_section::functions, spv::OpLabel, {label});
    const uint32_t p2 = b.allocate_id();
    b.emit(spirv_section::functions, spv::OpLoad, {v2, p2, in_pos});
    const uint32_t x = b.allocate_id(), y = b.allocate_id(), p4 = b.allocate_id();
    b.emit(spirv_section::functions, spv::OpCompositeExtract, {f, x, p2, 0});
    b.emit(spirv_section::functions, spv::OpCompositeExtract, {f, y, p2, 1});
    b.emit(spirv_section::functions, spv::OpCompositeConstruct, {v4, p4, x, y, f0, f1});
    b.emit(spirv_section::functions, spv::OpStore, {out_pos, p4});
    b.emit(spirv_section::functions, spv::OpReturn, {});
    b.emit(spirv_section::functions, spv::OpFunctionEnd, {});
    return b.assemble();
}

// A solid-colour fragment shader.
std::vector<uint32_t> fragment_shader(float r, float g, float bl) {
    spirv_builder b;
    const uint32_t main_id = b.allocate_id(), label = b.allocate_id();
    const uint32_t out_color = b.allocate_id();
    b.emit(spirv_section::capabilities, spv::OpCapability, {spv::CapabilityShader});
    b.emit(spirv_section::memory_model, spv::OpMemoryModel,
           {spv::AddressingModelLogical, spv::MemoryModelGLSL450});
    std::vector<uint32_t> e = {spv::ExecutionModelFragment, main_id};
    for (uint32_t w : spirv_builder::string_words("main")) e.push_back(w);
    e.push_back(out_color);
    b.emit(spirv_section::entry_points, spv::OpEntryPoint, e);
    b.emit(spirv_section::execution_modes, spv::OpExecutionMode,
           {main_id, spv::ExecutionModeOriginUpperLeft});
    b.emit(spirv_section::decorations, spv::OpDecorate,
           {out_color, spv::DecorationLocation, 0});
    const uint32_t vf = b.type_void(), fn = b.type_function(vf), f = b.type_float();
    const uint32_t v4 = b.type_vector(f, 4);
    b.emit(spirv_section::types, spv::OpVariable,
           {b.type_pointer(spv::StorageClassOutput, v4), out_color,
            spv::StorageClassOutput});
    const uint32_t color = b.constant_composite(
        v4, {b.constant_float(r), b.constant_float(g), b.constant_float(bl),
             b.constant_float(1.0f)});
    b.emit(spirv_section::functions, spv::OpFunction,
           {vf, main_id, spv::FunctionControlNone, fn});
    b.emit(spirv_section::functions, spv::OpLabel, {label});
    b.emit(spirv_section::functions, spv::OpStore, {out_color, color});
    b.emit(spirv_section::functions, spv::OpReturn, {});
    b.emit(spirv_section::functions, spv::OpFunctionEnd, {});
    return b.assemble();
}

void put_dword(guest_memory& m, uint32_t addr, uint32_t v) {
    m.write_u8(addr + 0, uint8_t(v >> 24));
    m.write_u8(addr + 1, uint8_t(v >> 16));
    m.write_u8(addr + 2, uint8_t(v >> 8));
    m.write_u8(addr + 3, uint8_t(v));
}

void test_command_buffer_to_frame() {
    vulkan_backend backend;
    std::string error;
    if (!backend.initialize(error)) {
        std::printf("scene_renderer_test: skipped (no device)\n");
        return;
    }

    guest_memory memory;
    assert(memory.initialize(error));
    const uint32_t region = 0x20000000;
    assert(memory.commit(region, 0x10000, error));

    // A triangle around the centre, as big-endian clip-space float pairs.
    const uint32_t verts = region + 0x1000;
    const float tri[6] = {0.0f, -0.7f, 0.7f, 0.7f, -0.7f, 0.7f};
    for (int i = 0; i < 6; ++i) memory.write_f32(verts + i * 4, tri[i]);

    // A PM4 command buffer: one auto DRAW_INDX of 3 vertices, triangle list.
    const uint32_t cmd = region;
    put_dword(memory, cmd + 0, 0xC0000000u | ((2u - 1) << 16) |
                                   ((pm4_op::draw_indx & 0x7F) << 8));
    put_dword(memory, cmd + 4, 0);
    put_dword(memory, cmd + 8, (3u << 16) | (2u << 6) | 0x04);

    command_processor cp(memory);
    assert(cp.process(cmd, 3 * 4, error));
    assert(cp.draws().size() == 1);
    assert(cp.draws()[0].index_count == 3);

    scene_renderer renderer(backend, memory);
    const vertex_layout layout{verts, 8, 0}; // stride 8 (x,y), position at 0
    const float black[4] = {0, 0, 0, 1};
    const uint32_t w = 64, h = 64;
    std::vector<uint8_t> pixels;
    const auto vs = vertex_shader();
    const auto fs = fragment_shader(0, 1, 0); // green
    assert(renderer.render(cp.draws(), layout, vs, fs, w, h, black, pixels,
                           error));

    auto px = [&](uint32_t x, uint32_t y) { return &pixels[(std::size_t(y) * w + x) * 4]; };
    const uint8_t* centre = px(w / 2, h / 2);
    assert(near_byte(centre[0], 0) && near_byte(centre[1], 255) &&
           near_byte(centre[2], 0));
    const uint8_t* corner = px(0, 0);
    assert(near_byte(corner[1], 0)); // outside the triangle -> clear
    std::printf("scene_renderer_test: command buffer -> frame (triangle from "
                "guest memory rendered on %s)\n",
                backend.device_name().c_str());
}

} // namespace

int main() {
    test_command_buffer_to_frame();
    std::printf("scene_renderer_test: all checks passed\n");
    return 0;
}
