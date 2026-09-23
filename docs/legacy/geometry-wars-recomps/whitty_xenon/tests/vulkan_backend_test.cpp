// Integration test for the Vulkan backend foundation.
//
// Unlike the CPU-side layers, this one is verified by actually rendering: it
// stands up a headless device, clears an offscreen target to a known colour, and
// reads the pixels back to confirm they are that colour. That proves the whole
// device/image/command/readback path the drawing code will build on. If no
// Vulkan device is present the test skips rather than fails, so a machine without
// a GPU still builds and runs the suite.
#include "whitty_xenon/gpu/shader_program.h"
#include "whitty_xenon/gpu/shader_translator.h"
#include "whitty_xenon/gpu/spirv_builder.h"
#include "whitty_xenon/gpu/vertex_format.h"
#include "whitty_xenon/gpu/vulkan/vulkan_backend.h"

#include <cassert>
#include <cstdint>
#include <cstdio>
#include <string>
#include <vector>

using namespace whitty_xenon::gpu;

namespace {

// A minimal vertex shader: read a vec2 position input, write it as clip-space
// position (z=0, w=1) to gl_Position.
std::vector<uint32_t> build_vertex_shader() {
    spirv_builder b;
    const uint32_t main_id = b.allocate_id();
    const uint32_t label = b.allocate_id();
    const uint32_t in_pos = b.allocate_id();
    const uint32_t out_pos = b.allocate_id();

    b.emit(spirv_section::capabilities, spv::OpCapability, {spv::CapabilityShader});
    b.emit(spirv_section::memory_model, spv::OpMemoryModel,
           {spv::AddressingModelLogical, spv::MemoryModelGLSL450});
    std::vector<uint32_t> entry = {spv::ExecutionModelVertex, main_id};
    for (uint32_t w : spirv_builder::string_words("main")) entry.push_back(w);
    entry.push_back(in_pos);
    entry.push_back(out_pos);
    b.emit(spirv_section::entry_points, spv::OpEntryPoint, entry);
    b.emit(spirv_section::decorations, spv::OpDecorate,
           {in_pos, spv::DecorationLocation, 0});
    b.emit(spirv_section::decorations, spv::OpDecorate,
           {out_pos, spv::DecorationBuiltIn, spv::BuiltInPosition});

    const uint32_t vf = b.type_void();
    const uint32_t fn = b.type_function(vf);
    const uint32_t f = b.type_float();
    const uint32_t v2 = b.type_vector(f, 2);
    const uint32_t v4 = b.type_vector(f, 4);
    const uint32_t in_ptr = b.type_pointer(1 /*Input*/, v2);
    const uint32_t out_ptr = b.type_pointer(spv::StorageClassOutput, v4);
    b.emit(spirv_section::types, spv::OpVariable, {in_ptr, in_pos, 1});
    b.emit(spirv_section::types, spv::OpVariable,
           {out_ptr, out_pos, spv::StorageClassOutput});
    const uint32_t f0 = b.constant_float(0.0f);
    const uint32_t f1 = b.constant_float(1.0f);

    b.emit(spirv_section::functions, spv::OpFunction,
           {vf, main_id, spv::FunctionControlNone, fn});
    b.emit(spirv_section::functions, spv::OpLabel, {label});
    const uint32_t pos2 = b.allocate_id();
    b.emit(spirv_section::functions, spv::OpLoad, {v2, pos2, in_pos});
    const uint32_t x = b.allocate_id();
    b.emit(spirv_section::functions, spv::OpCompositeExtract, {f, x, pos2, 0});
    const uint32_t y = b.allocate_id();
    b.emit(spirv_section::functions, spv::OpCompositeExtract, {f, y, pos2, 1});
    const uint32_t pos4 = b.allocate_id();
    b.emit(spirv_section::functions, spv::OpCompositeConstruct,
           {v4, pos4, x, y, f0, f1});
    b.emit(spirv_section::functions, spv::OpStore, {out_pos, pos4});
    b.emit(spirv_section::functions, spv::OpReturn, {});
    b.emit(spirv_section::functions, spv::OpFunctionEnd, {});
    return b.assemble();
}

// A minimal fragment shader: write a constant colour with a chosen alpha.
std::vector<uint32_t> build_fragment_shader(float r, float g, float bl,
                                            float a = 1.0f) {
    spirv_builder b;
    const uint32_t main_id = b.allocate_id();
    const uint32_t label = b.allocate_id();
    const uint32_t out_color = b.allocate_id();

    b.emit(spirv_section::capabilities, spv::OpCapability, {spv::CapabilityShader});
    b.emit(spirv_section::memory_model, spv::OpMemoryModel,
           {spv::AddressingModelLogical, spv::MemoryModelGLSL450});
    std::vector<uint32_t> entry = {spv::ExecutionModelFragment, main_id};
    for (uint32_t w : spirv_builder::string_words("main")) entry.push_back(w);
    entry.push_back(out_color);
    b.emit(spirv_section::entry_points, spv::OpEntryPoint, entry);
    b.emit(spirv_section::execution_modes, spv::OpExecutionMode,
           {main_id, spv::ExecutionModeOriginUpperLeft});
    b.emit(spirv_section::decorations, spv::OpDecorate,
           {out_color, spv::DecorationLocation, 0});

    const uint32_t vf = b.type_void();
    const uint32_t fn = b.type_function(vf);
    const uint32_t f = b.type_float();
    const uint32_t v4 = b.type_vector(f, 4);
    const uint32_t out_ptr = b.type_pointer(spv::StorageClassOutput, v4);
    b.emit(spirv_section::types, spv::OpVariable,
           {out_ptr, out_color, spv::StorageClassOutput});
    const uint32_t color =
        b.constant_composite(v4, {b.constant_float(r), b.constant_float(g),
                                  b.constant_float(bl), b.constant_float(a)});

    b.emit(spirv_section::functions, spv::OpFunction,
           {vf, main_id, spv::FunctionControlNone, fn});
    b.emit(spirv_section::functions, spv::OpLabel, {label});
    b.emit(spirv_section::functions, spv::OpStore, {out_color, color});
    b.emit(spirv_section::functions, spv::OpReturn, {});
    b.emit(spirv_section::functions, spv::OpFunctionEnd, {});
    return b.assemble();
}

// A byte is "about" a target within a small tolerance (UNORM rounding).
bool near_byte(uint8_t value, uint8_t target) {
    const int d = int(value) - int(target);
    return d >= -1 && d <= 1;
}

void test_clear_readback() {
    vulkan_backend backend;
    std::string error;
    if (!backend.initialize(error)) {
        std::printf("vulkan_backend_test: skipped (no device: %s)\n",
                    error.c_str());
        return;
    }
    std::printf("vulkan_backend_test: device = %s\n",
                backend.device_name().c_str());

    const uint32_t w = 16, h = 8;
    const float red[4] = {1.0f, 0.0f, 0.0f, 1.0f};
    std::vector<uint8_t> pixels;
    const bool ok = backend.render_clear(w, h, red, pixels, error);
    assert(ok && error.empty());
    assert(pixels.size() == std::size_t(w) * h * 4);

    // Every pixel must be opaque red.
    for (std::size_t i = 0; i < pixels.size(); i += 4) {
        assert(near_byte(pixels[i + 0], 255)); // R
        assert(near_byte(pixels[i + 1], 0));   // G
        assert(near_byte(pixels[i + 2], 0));   // B
        assert(near_byte(pixels[i + 3], 255)); // A
    }

    // A second clear to a different colour, reusing the device.
    const float teal[4] = {0.0f, 0.5f, 0.5f, 1.0f};
    assert(backend.render_clear(w, h, teal, pixels, error));
    assert(near_byte(pixels[0], 0));    // R
    assert(near_byte(pixels[1], 128));  // G ~ 0.5
    assert(near_byte(pixels[2], 128));  // B ~ 0.5
}

void test_draw_triangle() {
    vulkan_backend backend;
    std::string error;
    if (!backend.initialize(error)) return; // skip; the clear test reports it

    const uint32_t w = 64, h = 64;
    // A triangle around the centre of the image (clip space). The corners of the
    // image fall outside it.
    const std::vector<float> positions = {
        0.0f, -0.7f, // top
        0.7f, 0.7f,  // bottom-right
        -0.7f, 0.7f, // bottom-left
    };
    const float black[4] = {0.0f, 0.0f, 0.0f, 1.0f};
    std::vector<uint8_t> pixels;
    const bool ok = backend.render_draw(
        w, h, black, build_vertex_shader(), build_fragment_shader(0, 1, 0),
        positions, 3, pixels, error);
    assert(ok && error.empty());
    assert(pixels.size() == std::size_t(w) * h * 4);

    auto pixel = [&](uint32_t x, uint32_t y) -> const uint8_t* {
        return &pixels[(std::size_t(y) * w + x) * 4];
    };
    // The centre is inside the triangle: green.
    const uint8_t* centre = pixel(w / 2, h / 2);
    assert(near_byte(centre[0], 0) && near_byte(centre[1], 255) &&
           near_byte(centre[2], 0));
    // The top-left corner is outside: the black clear.
    const uint8_t* corner = pixel(0, 0);
    assert(near_byte(corner[0], 0) && near_byte(corner[1], 0) &&
           near_byte(corner[2], 0));
    std::printf("vulkan_backend_test: triangle rendered (centre green, corner "
                "clear)\n");
}

void test_frame_two_triangles() {
    vulkan_backend backend;
    std::string error;
    if (!backend.initialize(error)) return;

    const uint32_t w = 64, h = 64;
    // Left triangle green, right triangle red, into one frame.
    const std::vector<float> left = {-0.9f, -0.7f, -0.1f, -0.7f, -0.5f, 0.7f};
    const std::vector<float> right = {0.1f, -0.7f, 0.9f, -0.7f, 0.5f, 0.7f};
    const auto vs = build_vertex_shader();
    const auto green = build_fragment_shader(0, 1, 0);
    const auto red = build_fragment_shader(1, 0, 0);
    std::vector<vulkan_backend::frame_draw> draws = {
        {&vs, &green, &left, 3},
        {&vs, &red, &right, 3},
    };
    const float black[4] = {0, 0, 0, 1};
    std::vector<uint8_t> pixels;
    assert(backend.render_frame(w, h, black, draws, pixels, error));

    auto pixel = [&](uint32_t x, uint32_t y) -> const uint8_t* {
        return &pixels[(std::size_t(y) * w + x) * 4];
    };
    // Left third should hit green, right third red, both around mid-height.
    const uint8_t* left_px = pixel(w / 4, h / 2);
    assert(near_byte(left_px[0], 0) && near_byte(left_px[1], 255));
    const uint8_t* right_px = pixel(3 * w / 4, h / 2);
    assert(near_byte(right_px[0], 255) && near_byte(right_px[1], 0));
    std::printf("vulkan_backend_test: two triangles in one frame (green left, "
                "red right)\n");
}

// Textured vertex shader: gl_Position from a vec2 input, plus a uv varying
// (position mapped from clip [-1,1] to [0,1]).
std::vector<uint32_t> build_textured_vertex_shader() {
    spirv_builder b;
    const uint32_t main_id = b.allocate_id(), label = b.allocate_id();
    const uint32_t in_pos = b.allocate_id(), out_pos = b.allocate_id(),
                   out_uv = b.allocate_id();
    b.emit(spirv_section::capabilities, spv::OpCapability, {spv::CapabilityShader});
    b.emit(spirv_section::memory_model, spv::OpMemoryModel,
           {spv::AddressingModelLogical, spv::MemoryModelGLSL450});
    std::vector<uint32_t> e = {spv::ExecutionModelVertex, main_id};
    for (uint32_t w : spirv_builder::string_words("main")) e.push_back(w);
    e.push_back(in_pos);
    e.push_back(out_pos);
    e.push_back(out_uv);
    b.emit(spirv_section::entry_points, spv::OpEntryPoint, e);
    b.emit(spirv_section::decorations, spv::OpDecorate, {in_pos, spv::DecorationLocation, 0});
    b.emit(spirv_section::decorations, spv::OpDecorate, {out_pos, spv::DecorationBuiltIn, spv::BuiltInPosition});
    b.emit(spirv_section::decorations, spv::OpDecorate, {out_uv, spv::DecorationLocation, 0});
    const uint32_t vf = b.type_void(), fn = b.type_function(vf), f = b.type_float();
    const uint32_t v2 = b.type_vector(f, 2), v4 = b.type_vector(f, 4);
    b.emit(spirv_section::types, spv::OpVariable, {b.type_pointer(1, v2), in_pos, 1});
    b.emit(spirv_section::types, spv::OpVariable, {b.type_pointer(spv::StorageClassOutput, v4), out_pos, spv::StorageClassOutput});
    b.emit(spirv_section::types, spv::OpVariable, {b.type_pointer(spv::StorageClassOutput, v2), out_uv, spv::StorageClassOutput});
    const uint32_t f0 = b.constant_float(0.0f), f1 = b.constant_float(1.0f), fh = b.constant_float(0.5f);
    const uint32_t half2 = b.constant_composite(v2, {fh, fh});
    b.emit(spirv_section::functions, spv::OpFunction, {vf, main_id, spv::FunctionControlNone, fn});
    b.emit(spirv_section::functions, spv::OpLabel, {label});
    const uint32_t p2 = b.allocate_id();
    b.emit(spirv_section::functions, spv::OpLoad, {v2, p2, in_pos});
    const uint32_t x = b.allocate_id(), y = b.allocate_id(), p4 = b.allocate_id();
    b.emit(spirv_section::functions, spv::OpCompositeExtract, {f, x, p2, 0});
    b.emit(spirv_section::functions, spv::OpCompositeExtract, {f, y, p2, 1});
    b.emit(spirv_section::functions, spv::OpCompositeConstruct, {v4, p4, x, y, f0, f1});
    b.emit(spirv_section::functions, spv::OpStore, {out_pos, p4});
    // uv = pos * 0.5 + 0.5
    const uint32_t scaled = b.allocate_id(), uv = b.allocate_id();
    b.emit(spirv_section::functions, spv::OpFMul, {v2, scaled, p2, half2});
    b.emit(spirv_section::functions, spv::OpFAdd, {v2, uv, scaled, half2});
    b.emit(spirv_section::functions, spv::OpStore, {out_uv, uv});
    b.emit(spirv_section::functions, spv::OpReturn, {});
    b.emit(spirv_section::functions, spv::OpFunctionEnd, {});
    return b.assemble();
}

// Textured fragment shader: samples a 2D texture (binding 0 of `set`) at uv,
// scaled by `decay`. The scene path binds a draw's textures in set 2, the
// single-draw path in set 0, so which set is the caller's to say.
//
// `decay` is what makes a feedback loop a trail rather than a runaway: a pass
// that adds its own previous result back at full strength grows without bound
// and saturates, and every title that draws a trail damps the loop somewhere in
// its shader. Below 1 the loop has a fixed point, and where that point lands is
// the arithmetic a test can pin.
std::vector<uint32_t> build_textured_fragment_shader(uint32_t set = 0,
                                                    float decay = 1.0f) {
    spirv_builder b;
    const uint32_t main_id = b.allocate_id(), label = b.allocate_id();
    const uint32_t in_uv = b.allocate_id(), out_color = b.allocate_id(),
                   tex = b.allocate_id();
    b.emit(spirv_section::capabilities, spv::OpCapability, {spv::CapabilityShader});
    b.emit(spirv_section::memory_model, spv::OpMemoryModel,
           {spv::AddressingModelLogical, spv::MemoryModelGLSL450});
    std::vector<uint32_t> e = {spv::ExecutionModelFragment, main_id};
    for (uint32_t w : spirv_builder::string_words("main")) e.push_back(w);
    e.push_back(in_uv);
    e.push_back(out_color);
    b.emit(spirv_section::entry_points, spv::OpEntryPoint, e);
    b.emit(spirv_section::execution_modes, spv::OpExecutionMode, {main_id, spv::ExecutionModeOriginUpperLeft});
    b.emit(spirv_section::decorations, spv::OpDecorate, {in_uv, spv::DecorationLocation, 0});
    b.emit(spirv_section::decorations, spv::OpDecorate, {out_color, spv::DecorationLocation, 0});
    b.emit(spirv_section::decorations, spv::OpDecorate, {tex, spv::DecorationDescriptorSet, set});
    b.emit(spirv_section::decorations, spv::OpDecorate, {tex, spv::DecorationBinding, 0});
    const uint32_t vf = b.type_void(), fn = b.type_function(vf), f = b.type_float();
    const uint32_t v2 = b.type_vector(f, 2), v4 = b.type_vector(f, 4);
    const uint32_t image = b.allocate_id();
    b.emit(spirv_section::types, spv::OpTypeImage, {image, f, spv::Dim2D, 0, 0, 0, 1, spv::ImageFormatUnknown});
    const uint32_t sampled = b.allocate_id();
    b.emit(spirv_section::types, spv::OpTypeSampledImage, {sampled, image});
    b.emit(spirv_section::types, spv::OpVariable, {b.type_pointer(spv::StorageClassUniformConstant, sampled), tex, spv::StorageClassUniformConstant});
    b.emit(spirv_section::types, spv::OpVariable, {b.type_pointer(1, v2), in_uv, 1});
    b.emit(spirv_section::types, spv::OpVariable, {b.type_pointer(spv::StorageClassOutput, v4), out_color, spv::StorageClassOutput});
    b.emit(spirv_section::functions, spv::OpFunction, {vf, main_id, spv::FunctionControlNone, fn});
    b.emit(spirv_section::functions, spv::OpLabel, {label});
    const uint32_t uv = b.allocate_id(), s = b.allocate_id(), color = b.allocate_id();
    b.emit(spirv_section::functions, spv::OpLoad, {v2, uv, in_uv});
    b.emit(spirv_section::functions, spv::OpLoad, {sampled, s, tex});
    b.emit(spirv_section::functions, spv::OpImageSampleImplicitLod, {v4, color, s, uv});
    uint32_t exported = color;
    if (decay != 1.0f) {
        const uint32_t d = b.constant_float(decay);
        const uint32_t factor = b.constant_composite(v4, {d, d, d, d});
        const uint32_t scaled = b.allocate_id();
        b.emit(spirv_section::functions, spv::OpFMul,
               {v4, scaled, color, factor});
        exported = scaled;
    }
    b.emit(spirv_section::functions, spv::OpStore, {out_color, exported});
    b.emit(spirv_section::functions, spv::OpReturn, {});
    b.emit(spirv_section::functions, spv::OpFunctionEnd, {});
    return b.assemble();
}

void test_textured_draw() {
    vulkan_backend backend;
    std::string error;
    if (!backend.initialize(error)) return;

    const uint32_t w = 64, h = 64;
    // A solid magenta 4x4 texture; sampling it must yield magenta, proving the
    // fragment shader read the uploaded texels (not a constant or the clear).
    std::vector<uint8_t> texture(4 * 4 * 4);
    for (std::size_t i = 0; i < texture.size(); i += 4) {
        texture[i + 0] = 255; texture[i + 1] = 0;
        texture[i + 2] = 255; texture[i + 3] = 255;
    }
    const std::vector<float> tri = {0.0f, -0.7f, 0.7f, 0.7f, -0.7f, 0.7f};
    const float black[4] = {0, 0, 0, 1};
    std::vector<uint8_t> pixels;
    const bool ok = backend.render_textured(
        w, h, black, build_textured_vertex_shader(),
        build_textured_fragment_shader(), tri, 3, texture, 4, 4, pixels, error);
    assert(ok && error.empty());

    const uint8_t* c = &pixels[(std::size_t(h / 2) * w + w / 2) * 4];
    assert(near_byte(c[0], 255) && near_byte(c[1], 0) && near_byte(c[2], 255));
    std::printf("vulkan_backend_test: textured draw (sampled magenta texture)\n");
}

void test_alpha_blend() {
    vulkan_backend backend;
    std::string error;
    if (!backend.initialize(error)) return;

    const uint32_t w = 64, h = 64;
    // Two overlapping full-ish triangles covering the centre: opaque red, then
    // translucent blue (alpha 0.5) blended on top -> centre is a red/blue mix.
    const std::vector<float> tri = {-0.9f, -0.9f, 0.9f, -0.9f, 0.0f, 0.9f};
    const auto vs = build_vertex_shader();
    const auto red = build_fragment_shader(1, 0, 0, 1.0f);
    const auto blue = build_fragment_shader(0, 0, 1, 0.5f);
    std::vector<vulkan_backend::frame_draw> draws = {
        {&vs, &red, &tri, 3, false},
        {&vs, &blue, &tri, 3, true}, // blended
    };
    const float black[4] = {0, 0, 0, 1};
    std::vector<uint8_t> pixels;
    assert(backend.render_frame(w, h, black, draws, pixels, error));

    // Centre: 0.5*blue over red -> ~ (128, 0, 128).
    const uint8_t* c = &pixels[(std::size_t(h / 2) * w + w / 2) * 4];
    assert(near_byte(c[0], 128) && near_byte(c[1], 0) && near_byte(c[2], 128));
    std::printf("vulkan_backend_test: alpha blend (red + 50%% blue = purple)\n");
}

void test_triangle_strip() {
    vulkan_backend backend;
    std::string error;
    if (!backend.initialize(error)) return;

    const uint32_t w = 64, h = 64;
    // Four vertices as a triangle strip form a quad covering the centre.
    const std::vector<float> quad = {-0.6f, -0.6f, 0.6f, -0.6f,
                                     -0.6f, 0.6f,  0.6f, 0.6f};
    const auto vs = build_vertex_shader();
    const auto green = build_fragment_shader(0, 1, 0);
    vulkan_backend::frame_draw draw{&vs, &green, &quad, 4};
    draw.topo = topology::triangle_strip;
    const float black[4] = {0, 0, 0, 1};
    std::vector<uint8_t> pixels;
    assert(backend.render_frame(w, h, black, {draw}, pixels, error));

    // The centre of the quad is green; a corner outside it is clear.
    const uint8_t* centre = &pixels[(std::size_t(h / 2) * w + w / 2) * 4];
    assert(near_byte(centre[1], 255) && near_byte(centre[0], 0));
    const uint8_t* corner = &pixels[0];
    assert(near_byte(corner[1], 0));
    std::printf("vulkan_backend_test: triangle strip quad rendered\n");
}

// The general path, driven by the real translator rather than hand-built
// shaders - which is the point: it checks the contract BETWEEN the translator
// and the backend, where a mismatched location, stride or descriptor set does
// not fail loudly, it just draws nothing.
//
// The vertex shader fetches a position from a strided vertex whose attribute
// sits at a non-zero offset, adds a shader constant to it, and exports the
// result. So a correct picture requires the vertex layout, the index buffer and
// the constant upload all to be right at once.
void test_scene_draw_with_attributes_indices_and_constants() {
    vulkan_backend backend;
    std::string error;
    if (!backend.initialize(error)) return;

    // A vertex shader: r0 = vfetch(slot 0, offset 1 dword); r0 = r0 + c[0];
    // export position.
    shader_translator vertex_translator;
    shader_program vertex_program;
    {
        shader_exec_block block;
        block.cf.opcode = cf_opcode::exec;
        shader_instruction fetch;
        fetch.kind = instruction_kind::vertex_fetch;
        fetch.vertex.const_index = 0;
        fetch.vertex.stride = 4;  // 16-byte vertex
        fetch.vertex.offset = 1;  // attribute starts one dword in
        fetch.vertex.format = static_cast<uint8_t>(vertex_format::k_32_32_float);
        fetch.vertex.dst_reg = 0;
        fetch.vertex.dst_swizzle = 0b101'100'001'000; // x, y, 0, 1
        block.instructions.push_back(fetch);
        vertex_program.exec_blocks.push_back(block);

        shader_exec_block export_block;
        export_block.cf.opcode = cf_opcode::exec_end;
        shader_instruction add;
        add.kind = instruction_kind::alu;
        add.alu.vector_opcode = alu_vector_opcode::add;
        add.alu.scalar_opcode = alu_scalar_opcode::retain_prev;
        add.alu.is_export = true;
        add.alu.vector_dest = shader_translator::kExportPosition;
        add.alu.vector_write_mask = 0xF;
        add.alu.sources[0].is_temp = true;
        add.alu.sources[0].reg = 0;
        add.alu.sources[1].is_temp = false; // constant bank
        add.alu.sources[1].reg = 0;
        export_block.instructions.push_back(add);
        vertex_program.exec_blocks.push_back(export_block);
    }
    const std::vector<uint32_t> vs =
        vertex_translator.translate(vertex_program, 4, shader_type::vertex);
    assert(vertex_translator.vertex_inputs().size() == 1);

    const auto fs = build_fragment_shader(0, 1, 0);

    // Four vertices of 16 bytes each: a leading dword the shader must skip,
    // then the x/y the attribute reads, then a trailing dword.
    const std::vector<float> vertex_data = {
        99.0f, -0.5f, -0.5f, 99.0f,
        99.0f, 0.5f,  -0.5f, 99.0f,
        99.0f, -0.5f, 0.5f,  99.0f,
        99.0f, 0.5f,  0.5f,  99.0f,
    };

    vulkan_backend::scene_draw draw;
    draw.vertex_spirv = &vs;
    draw.fragment_spirv = &fs;
    draw.bindings.push_back({vertex_data.data(),
                             vertex_data.size() * sizeof(float),
                             /*stride*/ 16});
    const vertex_input& input = vertex_translator.vertex_inputs()[0];
    draw.attributes.push_back({input.location, /*binding*/ 0,
                               input.offset_dwords * 4, input.format});
    // Two triangles, as a quad list would expand to.
    draw.indices = {0, 1, 2, 1, 3, 2};
    draw.vertex_count = 4;
    // c[0] shifts the whole quad right by 0.4 - so where it lands proves the
    // constant reached the shader, not just that something was drawn.
    draw.constants.assign(kFloatConstantCount * 4, 0.0f);
    draw.constants[0] = 0.4f;
    draw.constants[1] = 0.0f;
    draw.constants[2] = 0.0f;
    draw.constants[3] = 0.0f;

    const uint32_t w = 64, h = 64;
    const float black[4] = {0, 0, 0, 1};
    std::vector<uint8_t> pixels;
    assert(backend.render_scene(w, h, black, {draw}, pixels, error));
    assert(error.empty());

    const auto pixel_at = [&](uint32_t x, uint32_t y) {
        return &pixels[(std::size_t(y) * w + x) * 4];
    };
    // The quad spans x in [-0.1, 0.9] after the constant shift, y in
    // [-0.5, 0.5] - so in pixels, x from 28 to 60 and y from 16 to 48.
    assert(near_byte(pixel_at(45, 32)[1], 255)); // inside, green
    assert(near_byte(pixel_at(20, 32)[1], 0));   // left of it, cleared
    assert(near_byte(pixel_at(45, 4)[1], 0));    // above it, cleared
    std::printf("vulkan_backend_test: translated shader, strided attribute, "
                "indices and constants all landed\n");
}

// A Xenos rectangle list, drawn through the geometry stage that completes it.
//
// The three vertices given span a whole quad only once the fourth - the mirror
// of one of them across the longest edge - exists. Without the stage exactly
// half of the quad is covered, split along the diagonal, so this checks the
// corner the fourth vertex is responsible for as well as the three that were
// in the vertex buffer. And it does it for all three possible windings, because
// which edge is longest depends on the order the title happened to write them:
// the case Geometry Wars uses is NOT the common one, so a shader handling only
// the common case would pass a test that used only the common case.
void test_rectangle_list_geometry_stage() {
    vulkan_backend backend;
    std::string error;
    if (!backend.initialize(error)) return;
    if (!backend.supports_geometry_shaders()) {
        std::printf("vulkan_backend_test: rectangle list skipped (no geometry "
                    "stage on this device)\n");
        return;
    }

    const auto vs = build_vertex_shader();
    const auto fs = build_fragment_shader(1, 0, 0);
    // The vertex shader here exports position and nothing else, so the stage
    // has no interpolators to carry.
    const auto gs = build_rectangle_geometry_shader({});

    // Three corners of a quad covering the middle half of the target, in each
    // of the three rotations. In every case the missing corner is the one
    // diagonally opposite the right angle, and the diagonal - the longest edge
    // - is a different pair of vertices each time, which is exactly what the
    // shader has to work out for itself.
    const std::vector<std::vector<float>> windings = {
        // Right angle at vertex 0: the diagonal is 1-2.
        {-0.5f, -0.5f, 0.5f, -0.5f, -0.5f, 0.5f},
        // Right angle at vertex 1: the diagonal is 2-0.
        {0.5f, -0.5f, -0.5f, -0.5f, -0.5f, 0.5f},
        // Right angle at vertex 2: the diagonal is 0-1.
        {-0.5f, 0.5f, 0.5f, -0.5f, -0.5f, -0.5f},
    };
    const uint32_t w = 64, h = 64;
    const float black[4] = {0, 0, 0, 1};
    for (std::size_t i = 0; i < windings.size(); ++i) {
        const std::vector<float>& positions = windings[i];
        vulkan_backend::scene_draw draw;
        draw.vertex_spirv = &vs;
        draw.fragment_spirv = &fs;
        draw.geometry_spirv = &gs;
        draw.bindings.push_back(
            {positions.data(), positions.size() * sizeof(float), 8});
        draw.attributes.push_back(
            {0, 0, 0, static_cast<uint8_t>(vertex_format::k_32_32_float)});
        draw.vertex_count = 3;

        std::vector<uint8_t> pixels;
        assert(backend.render_scene(w, h, black, {draw}, pixels, error));
        assert(error.empty());
        const auto red_at = [&](uint32_t x, uint32_t y) {
            return pixels[(std::size_t(y) * w + x) * 4];
        };
        // All four quadrants of the quad, which spans pixels 16..48 in both
        // axes. Any one of them empty is a rectangle drawn as a triangle.
        assert(near_byte(red_at(24, 24), 255));
        assert(near_byte(red_at(40, 24), 255));
        assert(near_byte(red_at(24, 40), 255));
        assert(near_byte(red_at(40, 40), 255));
        // And nothing outside it: the mirrored vertex must complete the
        // rectangle, not extend past it.
        assert(near_byte(red_at(8, 8), 0));
        assert(near_byte(red_at(56, 56), 0));
        assert(near_byte(red_at(8, 56), 0));
        assert(near_byte(red_at(56, 8), 0));
    }
    std::printf("vulkan_backend_test: rectangle lists complete under all three "
                "longest-edge windings\n");
}

// A vertex shader that also passes a per-vertex colour through as interpolator
// 0, and the fragment shader that reads it back. This is the shape every
// rectangle list in Geometry Wars has - its background quad is a colour
// gradient - so the interpolator path is not an optional extra.
std::vector<uint32_t> build_interpolating_vertex_shader() {
    spirv_builder b;
    const uint32_t main_id = b.allocate_id();
    const uint32_t label = b.allocate_id();
    const uint32_t in_pos = b.allocate_id();
    const uint32_t in_color = b.allocate_id();
    const uint32_t out_pos = b.allocate_id();
    const uint32_t out_color = b.allocate_id();

    b.emit(spirv_section::capabilities, spv::OpCapability, {spv::CapabilityShader});
    b.emit(spirv_section::memory_model, spv::OpMemoryModel,
           {spv::AddressingModelLogical, spv::MemoryModelGLSL450});
    std::vector<uint32_t> entry = {spv::ExecutionModelVertex, main_id};
    for (uint32_t w : spirv_builder::string_words("main")) entry.push_back(w);
    entry.push_back(in_pos);
    entry.push_back(in_color);
    entry.push_back(out_pos);
    entry.push_back(out_color);
    b.emit(spirv_section::entry_points, spv::OpEntryPoint, entry);
    b.emit(spirv_section::decorations, spv::OpDecorate,
           {in_pos, spv::DecorationLocation, 0});
    b.emit(spirv_section::decorations, spv::OpDecorate,
           {in_color, spv::DecorationLocation, 1});
    b.emit(spirv_section::decorations, spv::OpDecorate,
           {out_pos, spv::DecorationBuiltIn, spv::BuiltInPosition});
    b.emit(spirv_section::decorations, spv::OpDecorate,
           {out_color, spv::DecorationLocation, 0});

    const uint32_t vf = b.type_void();
    const uint32_t fn = b.type_function(vf);
    const uint32_t f = b.type_float();
    const uint32_t v2 = b.type_vector(f, 2);
    const uint32_t v4 = b.type_vector(f, 4);
    const uint32_t in2_ptr = b.type_pointer(spv::StorageClassInput, v2);
    const uint32_t in4_ptr = b.type_pointer(spv::StorageClassInput, v4);
    const uint32_t out_ptr = b.type_pointer(spv::StorageClassOutput, v4);
    b.emit(spirv_section::types, spv::OpVariable,
           {in2_ptr, in_pos, spv::StorageClassInput});
    b.emit(spirv_section::types, spv::OpVariable,
           {in4_ptr, in_color, spv::StorageClassInput});
    b.emit(spirv_section::types, spv::OpVariable,
           {out_ptr, out_pos, spv::StorageClassOutput});
    b.emit(spirv_section::types, spv::OpVariable,
           {out_ptr, out_color, spv::StorageClassOutput});
    const uint32_t f0 = b.constant_float(0.0f);
    const uint32_t f1 = b.constant_float(1.0f);

    b.emit(spirv_section::functions, spv::OpFunction,
           {vf, main_id, spv::FunctionControlNone, fn});
    b.emit(spirv_section::functions, spv::OpLabel, {label});
    const uint32_t pos2 = b.allocate_id();
    b.emit(spirv_section::functions, spv::OpLoad, {v2, pos2, in_pos});
    const uint32_t x = b.allocate_id();
    b.emit(spirv_section::functions, spv::OpCompositeExtract, {f, x, pos2, 0});
    const uint32_t y = b.allocate_id();
    b.emit(spirv_section::functions, spv::OpCompositeExtract, {f, y, pos2, 1});
    const uint32_t pos4 = b.allocate_id();
    b.emit(spirv_section::functions, spv::OpCompositeConstruct,
           {v4, pos4, x, y, f0, f1});
    b.emit(spirv_section::functions, spv::OpStore, {out_pos, pos4});
    const uint32_t color = b.allocate_id();
    b.emit(spirv_section::functions, spv::OpLoad, {v4, color, in_color});
    b.emit(spirv_section::functions, spv::OpStore, {out_color, color});
    b.emit(spirv_section::functions, spv::OpReturn, {});
    b.emit(spirv_section::functions, spv::OpFunctionEnd, {});
    return b.assemble();
}

std::vector<uint32_t> build_interpolant_fragment_shader() {
    spirv_builder b;
    const uint32_t main_id = b.allocate_id();
    const uint32_t label = b.allocate_id();
    const uint32_t in_color = b.allocate_id();
    const uint32_t out_color = b.allocate_id();

    b.emit(spirv_section::capabilities, spv::OpCapability, {spv::CapabilityShader});
    b.emit(spirv_section::memory_model, spv::OpMemoryModel,
           {spv::AddressingModelLogical, spv::MemoryModelGLSL450});
    std::vector<uint32_t> entry = {spv::ExecutionModelFragment, main_id};
    for (uint32_t w : spirv_builder::string_words("main")) entry.push_back(w);
    entry.push_back(in_color);
    entry.push_back(out_color);
    b.emit(spirv_section::entry_points, spv::OpEntryPoint, entry);
    b.emit(spirv_section::execution_modes, spv::OpExecutionMode,
           {main_id, spv::ExecutionModeOriginUpperLeft});
    b.emit(spirv_section::decorations, spv::OpDecorate,
           {in_color, spv::DecorationLocation, 0});
    b.emit(spirv_section::decorations, spv::OpDecorate,
           {out_color, spv::DecorationLocation, 0});

    const uint32_t vf = b.type_void();
    const uint32_t fn = b.type_function(vf);
    const uint32_t f = b.type_float();
    const uint32_t v4 = b.type_vector(f, 4);
    const uint32_t in_ptr = b.type_pointer(spv::StorageClassInput, v4);
    const uint32_t out_ptr = b.type_pointer(spv::StorageClassOutput, v4);
    b.emit(spirv_section::types, spv::OpVariable,
           {in_ptr, in_color, spv::StorageClassInput});
    b.emit(spirv_section::types, spv::OpVariable,
           {out_ptr, out_color, spv::StorageClassOutput});

    b.emit(spirv_section::functions, spv::OpFunction,
           {vf, main_id, spv::FunctionControlNone, fn});
    b.emit(spirv_section::functions, spv::OpLabel, {label});
    const uint32_t value = b.allocate_id();
    b.emit(spirv_section::functions, spv::OpLoad, {v4, value, in_color});
    b.emit(spirv_section::functions, spv::OpStore, {out_color, value});
    b.emit(spirv_section::functions, spv::OpReturn, {});
    b.emit(spirv_section::functions, spv::OpFunctionEnd, {});
    return b.assemble();
}

// The fourth vertex's INTERPOLATORS, not just its position.
//
// Mirroring the position alone would fill the missing half with whatever value
// the extrapolation happened to give - a visible seam down the diagonal of
// every gradient and a textured rectangle repeating half its texture. So the
// interpolator gets the same treatment, and the check is that the whole quad
// carries one affine function: with the fourth vertex's colour extrapolated
// correctly the two triangles share it exactly, and each corner reads back the
// colour that belongs to it.
void test_rectangle_list_extrapolates_interpolators() {
    vulkan_backend backend;
    std::string error;
    if (!backend.initialize(error)) return;
    if (!backend.supports_geometry_shaders()) return;

    const auto vs = build_interpolating_vertex_shader();
    const auto fs = build_interpolant_fragment_shader();
    const auto gs = build_rectangle_geometry_shader({0});

    // Three vertices of the quad, each with a position and a colour. The right
    // angle is at vertex 0, so the diagonal is 1-2 and the missing corner is
    // opposite vertex 0 - the one whose colour has to be (c1 - c0) + c2.
    const std::vector<float> vertex_data = {
        -0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1.0f, // top left, black
        0.5f,  -0.5f, 1.0f, 0.0f, 0.0f, 1.0f, // top right, red
        -0.5f, 0.5f,  0.0f, 1.0f, 0.0f, 1.0f, // bottom left, green
    };
    vulkan_backend::scene_draw draw;
    draw.vertex_spirv = &vs;
    draw.fragment_spirv = &fs;
    draw.geometry_spirv = &gs;
    draw.bindings.push_back({vertex_data.data(),
                             vertex_data.size() * sizeof(float),
                             /*stride*/ 24});
    draw.attributes.push_back(
        {0, 0, 0, static_cast<uint8_t>(vertex_format::k_32_32_float)});
    draw.attributes.push_back(
        {1, 0, 8, static_cast<uint8_t>(vertex_format::k_32_32_32_32_float)});
    draw.vertex_count = 3;

    const uint32_t w = 64, h = 64;
    const float black[4] = {0, 0, 0, 1};
    std::vector<uint8_t> pixels;
    assert(backend.render_scene(w, h, black, {draw}, pixels, error));
    assert(error.empty());
    const auto pixel_at = [&](uint32_t x, uint32_t y) {
        return &pixels[(std::size_t(y) * w + x) * 4];
    };
    // The quad spans pixels 16..48. Two pixels inside each corner the colour is
    // the corner's own, scaled by how far in the sample is - and the fourth
    // corner, the one the geometry stage invented, must read yellow: red from
    // the horizontal axis and green from the vertical, which is exactly what
    // (c1 - c0) + c2 says.
    const uint8_t* near_v0 = pixel_at(18, 18);
    const uint8_t* near_v1 = pixel_at(46, 18);
    const uint8_t* near_v2 = pixel_at(18, 46);
    const uint8_t* near_v3 = pixel_at(46, 46);
    // A shared affine function across both triangles: the value two pixels in
    // from a corner is 0.078 of the way across, so 0.078 and 0.953 of full.
    const auto about = [](uint8_t value, double fraction) {
        const double expected = fraction * 255.0;
        return double(value) >= expected - 4.0 && double(value) <= expected + 4.0;
    };
    assert(about(near_v0[0], 0.078) && about(near_v0[1], 0.078));
    assert(about(near_v1[0], 0.953) && about(near_v1[1], 0.078));
    assert(about(near_v2[0], 0.078) && about(near_v2[1], 0.953));
    assert(about(near_v3[0], 0.953) && about(near_v3[1], 0.953));
    // Blue was never written by any vertex, so no amount of extrapolation may
    // introduce it.
    assert(near_v3[2] == 0);
    std::printf("vulkan_backend_test: the mirrored vertex extrapolates its "
                "interpolators, so the quad carries one gradient\n");
}

// Without the stage, the same draw covers a diagonal half - which is the
// failure the stage exists to fix, and worth pinning so a regression shows up
// as a test rather than as a picture nobody looks at.
void test_rectangle_list_without_the_geometry_stage_is_half() {
    vulkan_backend backend;
    std::string error;
    if (!backend.initialize(error)) return;

    const auto vs = build_vertex_shader();
    const auto fs = build_fragment_shader(1, 0, 0);
    const std::vector<float> positions = {-0.5f, -0.5f, 0.5f, -0.5f,
                                          -0.5f, 0.5f};
    vulkan_backend::scene_draw draw;
    draw.vertex_spirv = &vs;
    draw.fragment_spirv = &fs;
    draw.bindings.push_back(
        {positions.data(), positions.size() * sizeof(float), 8});
    draw.attributes.push_back(
        {0, 0, 0, static_cast<uint8_t>(vertex_format::k_32_32_float)});
    draw.vertex_count = 3;

    const uint32_t w = 64, h = 64;
    const float black[4] = {0, 0, 0, 1};
    std::vector<uint8_t> pixels;
    assert(backend.render_scene(w, h, black, {draw}, pixels, error));
    const auto red_at = [&](uint32_t x, uint32_t y) {
        return pixels[(std::size_t(y) * w + x) * 4];
    };
    assert(near_byte(red_at(24, 24), 255)); // the triangle that is there
    assert(near_byte(red_at(40, 40), 0));   // the half that is not
    std::printf("vulkan_backend_test: a rectangle list without the stage is a "
                "diagonal half\n");
}

// A draw whose vertex format has no host equivalent must be reported, not
// drawn as something else.
void test_scene_draw_with_unknown_format_is_reported() {
    vulkan_backend backend;
    std::string error;
    if (!backend.initialize(error)) return;

    const auto vs = build_vertex_shader();
    const auto fs = build_fragment_shader(1, 0, 0);
    const std::vector<float> data = {0.0f, 0.0f, 1.0f, 1.0f};
    vulkan_backend::scene_draw draw;
    draw.vertex_spirv = &vs;
    draw.fragment_spirv = &fs;
    draw.bindings.push_back({data.data(), data.size() * sizeof(float), 8});
    draw.attributes.push_back({0, 0, 0, /*format*/ 0xFF}); // no such format
    draw.vertex_count = 2;

    const float black[4] = {0, 0, 0, 1};
    std::vector<uint8_t> pixels;
    assert(backend.render_scene(64, 64, black, {draw}, pixels, error));
    assert(!error.empty()); // the frame rendered, but said what it dropped
    std::printf("vulkan_backend_test: unknown vertex format reported\n");
}

// A pass may sample the image of a pass that comes LATER in the same frame.
// That is not a mistake to be defended against: the address it samples holds,
// on the console, the last resolve written to it - which for a later pass is the
// PREVIOUS frame's - and a title reading its own last frame (a trail, a
// feedback buffer, a bloom that accumulates) is asking for precisely that.
//
// Three passes make the round trip observable. Pass 0 samples pass 1, pass 1
// paints green, and pass 2 - the presented one - samples pass 0. So the green
// pass 1 writes has to travel through pass 0 and out of pass 2, and it can only
// do that one frame later. The first frame is the undefined one; the second is
// the one that has to be green.
//
// The read of pass 1 carries own_history, which is what the frame renderer
// decides for a forward reference, and the history image it needs belongs to
// PASS 1 - the pass being read - not to pass 0. Allocated on the reader instead,
// the read finds no image and falls back to the white placeholder: pass 2 then
// comes out white rather than green, which downstream of a real title's additive
// passes is a frame that saturates to white and says nothing about why.
void test_a_pass_samples_a_later_passs_image_from_the_previous_frame() {
    vulkan_backend backend;
    std::string error;
    if (!backend.initialize(error)) return;

    const auto textured_vs = build_textured_vertex_shader();
    const auto textured_fs = build_textured_fragment_shader(/*set=*/2);
    const auto plain_vs = build_vertex_shader();
    const auto green_fs = build_fragment_shader(0, 1, 0);
    // A triangle that covers the whole viewport, so every pass fills its target
    // and no sample lands on the clear colour.
    const std::vector<float> covering = {-1.0f, -1.0f, 3.0f, -1.0f, -1.0f, 3.0f};

    const auto sampling_draw = [&](int source_pass, bool own_history) {
        vulkan_backend::scene_draw draw;
        draw.vertex_spirv = &textured_vs;
        draw.fragment_spirv = &textured_fs;
        draw.bindings.push_back(
            {covering.data(), covering.size() * sizeof(float), 8});
        draw.attributes.push_back(
            {0, 0, 0, static_cast<uint8_t>(vertex_format::k_32_32_float)});
        draw.vertex_count = 3;
        draw.texture_slots = {0};
        vulkan_backend::scene_texture bound;
        bound.slot = 0;
        bound.resolved_pass = source_pass;
        bound.own_history = own_history;
        draw.textures.push_back(bound);
        return draw;
    };

    std::vector<vulkan_backend::scene_pass> passes(3);
    for (vulkan_backend::scene_pass& pass : passes) {
        pass.width = 64;
        pass.height = 64;
    }
    passes[0].draws.push_back(
        sampling_draw(/*source_pass=*/1, /*own_history=*/true));
    passes[0].resolve_address = 0x2000;
    {
        vulkan_backend::scene_draw green;
        green.vertex_spirv = &plain_vs;
        green.fragment_spirv = &green_fs;
        green.bindings.push_back(
            {covering.data(), covering.size() * sizeof(float), 8});
        green.attributes.push_back(
            {0, 0, 0, static_cast<uint8_t>(vertex_format::k_32_32_float)});
        green.vertex_count = 3;
        passes[1].draws.push_back(green);
    }
    passes[1].resolve_address = 0x1000;
    // Pass 2 reads an EARLIER pass, which is this frame's copy: no history.
    passes[2].draws.push_back(
        sampling_draw(/*source_pass=*/0, /*own_history=*/false));
    passes[2].presented = true;

    const float red[4] = {1, 0, 0, 1};
    std::vector<uint8_t> pixels;
    // Taken after each frame: the vector is resized by the readback, so a
    // pointer into it does not survive one.
    const auto centre = [&] { return &pixels[(std::size_t(32) * 64 + 32) * 4]; };
    // The first frame reads a history nothing has written yet. That is black,
    // because it is cleared before it is ever sampled - and specifically not
    // white, which is what a read that found no image at all falls back to.
    assert(backend.render_passes(passes, red, &pixels, error));
    assert(error.empty());
    assert(centre()[0] == 0 && centre()[1] == 0 && centre()[2] == 0);
    // The second frame is the one the green reaches, one pass and one frame
    // after it was drawn.
    assert(backend.render_passes(passes, red, &pixels, error));
    assert(error.empty());
    assert(centre()[0] == 0 && centre()[1] == 255 && centre()[2] == 0);
    std::printf("vulkan_backend_test: a pass reads a later pass's image, and "
                "gets the frame before\n");
}

// A pass that samples the very address it resolves to: a feedback buffer. The
// pass cannot sample its own image - a render pass may not read the attachment
// it is writing - so it reads a copy taken after the pass resolved LAST frame,
// which is what the console's memory would still hold at that point.
//
// Asserted as a DAMPED loop, which is what a trail is. Each frame the pass adds
// a quarter of full green on top of HALF of what the buffer held, so the value
// goes 0.25, 0.375, 0.4375 ... and settles at 0.5 - and settling is as much the
// property as climbing. Two ways to be wrong, and one assertion cannot see both:
//
//   - a history that never arrives leaves the value at 0.25 for ever, a layer
//     rebuilt from black every frame, which looks like a title drawing very
//     little rather than like a stage that was never wired;
//   - a history fed more than once a frame, or fed from the frame being drawn,
//     multiplies the loop's gain and the value walks up to full white, which is
//     invisible in one frame and unmistakable across several.
//
// So the exact sequence is pinned - it is what one generation of feedback a frame
// with a coefficient of a half computes, and nothing else - and then the value is
// checked to still be at the fixed point twenty frames later rather than above
// it.
void test_pass_reads_its_own_previous_result() {
    vulkan_backend backend;
    std::string error;
    if (!backend.initialize(error)) {
        std::printf("vulkan_backend_test: no device (%s) - skipped\n",
                    error.c_str());
        return;
    }
    const auto textured_vs = build_textured_vertex_shader();
    // Half of what the buffer held: the title's own damping, which is the part
    // of a feedback loop that decides whether it is a trail or a runaway.
    const auto fading_fs =
        build_textured_fragment_shader(/*set=*/2, /*decay=*/0.5f);
    const auto plain_vs = build_vertex_shader();
    const auto dim_green = build_fragment_shader(0.0f, 0.25f, 0.0f);
    const std::vector<float> covering = {-1.0f, -1.0f, 3.0f, -1.0f, -1.0f, 3.0f};

    std::vector<vulkan_backend::scene_pass> passes(1);
    passes[0].width = 64;
    passes[0].height = 64;
    passes[0].resolve_address = 0x1000;
    passes[0].presented = true;
    // Whatever the buffer already held, faded.
    {
        vulkan_backend::scene_draw draw;
        draw.vertex_spirv = &textured_vs;
        draw.fragment_spirv = &fading_fs;
        draw.bindings.push_back(
            {covering.data(), covering.size() * sizeof(float), 8});
        draw.attributes.push_back(
            {0, 0, 0, static_cast<uint8_t>(vertex_format::k_32_32_float)});
        draw.vertex_count = 3;
        draw.texture_slots = {0};
        vulkan_backend::scene_texture bound;
        bound.slot = 0;
        bound.resolved_pass = 0; // its own pass
        bound.own_history = true;
        draw.textures.push_back(bound);
        passes[0].draws.push_back(draw);
    }
    // Then add this frame's contribution, on top.
    {
        vulkan_backend::scene_draw draw;
        draw.vertex_spirv = &plain_vs;
        draw.fragment_spirv = &dim_green;
        draw.bindings.push_back(
            {covering.data(), covering.size() * sizeof(float), 8});
        draw.attributes.push_back(
            {0, 0, 0, static_cast<uint8_t>(vertex_format::k_32_32_float)});
        draw.vertex_count = 3;
        draw.blend.enabled = true;
        draw.blend.color_src = 1; // one
        draw.blend.color_dst = 1; // one
        draw.blend.alpha_src = 1;
        draw.blend.alpha_dst = 1;
        passes[0].draws.push_back(draw);
    }

    const float black[4] = {0, 0, 0, 1};
    std::vector<uint8_t> pixels;
    const auto centre_green = [&] {
        return pixels[(std::size_t(32) * 64 + 32) * 4 + 1];
    };
    // 0.25 of full green on a history that was cleared: 64.
    assert(backend.render_passes(passes, black, &pixels, error));
    assert(error.empty());
    const uint8_t first = centre_green();
    assert(first >= 60 && first <= 68);
    // 0.25 + 0.5 * 0.25: 96. Higher than the first frame, so the history is
    // being read at all, and well under twice it, so it is being read once.
    assert(backend.render_passes(passes, black, &pixels, error));
    assert(error.empty());
    const uint8_t second = centre_green();
    assert(second >= 92 && second <= 100);
    // 0.25 + 0.5 * 0.375: 112.
    assert(backend.render_passes(passes, black, &pixels, error));
    assert(error.empty());
    const uint8_t third = centre_green();
    assert(third >= 108 && third <= 116);
    // The fixed point of x = 0.25 + 0.5x is 0.5, and twenty more frames must
    // arrive there and stay: a loop with any excess gain is at full white long
    // before this, and one frame of it looks perfectly reasonable.
    for (int frame = 0; frame < 20; ++frame) {
        assert(backend.render_passes(passes, black, &pixels, error));
        assert(error.empty());
        assert(centre_green() <= 132);
    }
    const uint8_t settled = centre_green();
    assert(settled >= 124 && settled <= 132);
    std::printf("vulkan_backend_test: a pass reads its own previous result, "
                "accumulates and settles (%u -> %u -> %u -> ... -> %u)\n",
                first, second, third, settled);
}

// A pass that CONTINUES another begins holding that one's pixels.
//
// EDRAM is not emptied by a resolve. A title copies one surface out to several
// destinations in a row - Hydro Thunder resolves its lit scene four times over,
// the left half to one address, the whole thing twice to another, the right half
// to a fourth - and the passes those resolves split apart all describe the same
// surface, still full. Beginning each of them from the clear colour leaves one
// pass holding the picture and the rest holding nothing, and every later draw
// that samples one of the empty ones composites black.
//
// So: pass 0 draws green and pass 1 draws nothing at all. Pass 1 is presented,
// and it has to be green. Cleared, it would be the clear colour - here red, so
// that "the pass was cleared" and "the pass is empty" cannot be confused with
// each other or with a black frame.
void test_a_pass_continues_the_one_before() {
    vulkan_backend backend;
    std::string error;
    if (!backend.initialize(error)) {
        std::printf("vulkan_backend_test: no device (%s) - skipped\n",
                    error.c_str());
        return;
    }
    const auto plain_vs = build_vertex_shader();
    const auto green_fs = build_fragment_shader(0, 1, 0);
    const std::vector<float> covering = {-1.0f, -1.0f, 3.0f, -1.0f, -1.0f, 3.0f};

    std::vector<vulkan_backend::scene_pass> passes(2);
    for (vulkan_backend::scene_pass& pass : passes) {
        pass.width = 64;
        pass.height = 64;
    }
    vulkan_backend::scene_draw green;
    green.vertex_spirv = &plain_vs;
    green.fragment_spirv = &green_fs;
    green.bindings.push_back(
        {covering.data(), covering.size() * sizeof(float), 8});
    green.attributes.push_back(
        {0, 0, 0, static_cast<uint8_t>(vertex_format::k_32_32_float)});
    green.vertex_count = 3;
    passes[0].draws.push_back(green);
    passes[0].resolve_address = 0x1000;
    passes[1].continues_pass = 0;
    passes[1].resolve_address = 0x2000;
    passes[1].presented = true;

    const float red[4] = {1, 0, 0, 1};
    std::vector<uint8_t> pixels;
    assert(backend.render_passes(passes, red, &pixels, error));
    assert(error.empty());
    const uint8_t* centre = &pixels[(std::size_t(32) * 64 + 32) * 4];
    assert(centre[0] == 0 && centre[1] == 255 && centre[2] == 0);

    // And the source is left alone by having been carried forward: pass 0 is
    // still its own image, not the one that continued it. Without that, a
    // continuing pass that draws over what it inherited would rewrite history
    // for every earlier resolve of the same surface.
    passes[1].presented = false;
    passes[0].presented = true;
    assert(backend.render_passes(passes, red, &pixels, error));
    assert(error.empty());
    centre = &pixels[(std::size_t(32) * 64 + 32) * 4];
    assert(centre[0] == 0 && centre[1] == 255 && centre[2] == 0);
    std::printf("vulkan_backend_test: a pass continues the one before it, "
                "EDRAM intact\n");
}

// The same surface, reached at a DIFFERENT pass ordinal from one frame to the
// next, is still the same surface.
//
// A title's pass structure is not a constant, and assuming it was cost Ridge
// Racer 6 every second frame. It draws its scene in a three-pass frame,
// compositing at pass 1 and resolving that to one address, and the frame after
// it RE-PRESENTS that composite in two passes, reading the same address back at
// pass 0. Keyed by ordinal, those were two images: the re-present frame read a
// copy only other re-present frames had ever written, which is the black it was
// cleared to, for ever.
//
// So: a "draw" frame of two passes, the second of which fills the surface, and a
// "re-present" frame of one pass that reads that surface's previous copy and
// shows it. Alternated. The draw frame's picture must come out of the
// re-present frame.
//
// Asserted on the SECOND re-present frame, not the first, and the reason is
// worth keeping: the copy is only kept for an address some draw has asked to
// read, so on the very first alternation there is no history for the draw frame
// to write into yet. One frame of warm-up is the cost of not copying every
// target every frame; a second black frame would mean the surfaces never joined
// up at all.
void test_a_surface_is_found_again_at_a_different_pass_ordinal() {
    vulkan_backend backend;
    std::string error;
    if (!backend.initialize(error)) {
        std::printf("vulkan_backend_test: no device (%s) - skipped\n",
                    error.c_str());
        return;
    }
    const auto plain_vs = build_vertex_shader();
    const auto green_fs = build_fragment_shader(0, 1, 0);
    const auto textured_vs = build_textured_vertex_shader();
    const auto copy_fs = build_textured_fragment_shader(/*set=*/2);
    const std::vector<float> covering = {-1.0f, -1.0f, 3.0f, -1.0f, -1.0f, 3.0f};
    const uint32_t surface = 0x1000;

    // The draw frame. Pass 0 is another surface entirely - it is only there to
    // push the one that matters to ordinal 1 - and pass 1 fills the surface.
    std::vector<vulkan_backend::scene_pass> drawing(2);
    for (vulkan_backend::scene_pass& pass : drawing) {
        pass.width = 64;
        pass.height = 64;
    }
    {
        vulkan_backend::scene_draw green;
        green.vertex_spirv = &plain_vs;
        green.fragment_spirv = &green_fs;
        green.bindings.push_back(
            {covering.data(), covering.size() * sizeof(float), 8});
        green.attributes.push_back(
            {0, 0, 0, static_cast<uint8_t>(vertex_format::k_32_32_float)});
        green.vertex_count = 3;
        drawing[1].draws.push_back(green);
    }
    drawing[0].resolve_address = 0x2000;
    drawing[1].resolve_address = surface;
    drawing[1].presented = true;

    // The re-present frame. One pass, ordinal 0, the same surface, whose only
    // draw is the surface's own previous copy blitted over it.
    std::vector<vulkan_backend::scene_pass> representing(1);
    representing[0].width = 64;
    representing[0].height = 64;
    representing[0].resolve_address = surface;
    representing[0].presented = true;
    {
        vulkan_backend::scene_draw blit;
        blit.vertex_spirv = &textured_vs;
        blit.fragment_spirv = &copy_fs;
        blit.bindings.push_back(
            {covering.data(), covering.size() * sizeof(float), 8});
        blit.attributes.push_back(
            {0, 0, 0, static_cast<uint8_t>(vertex_format::k_32_32_float)});
        blit.vertex_count = 3;
        blit.texture_slots = {0};
        vulkan_backend::scene_texture bound;
        bound.slot = 0;
        bound.resolved_pass = 0; // its own pass, so: the previous frame's copy
        bound.own_history = true;
        blit.textures.push_back(bound);
        representing[0].draws.push_back(blit);
    }

    const float red[4] = {1, 0, 0, 1};
    std::vector<uint8_t> pixels;
    for (int cycle = 0; cycle < 2; ++cycle) {
        assert(backend.render_passes(drawing, red, &pixels, error));
        assert(error.empty());
        const uint8_t* drawn = &pixels[(std::size_t(32) * 64 + 32) * 4];
        assert(drawn[0] == 0 && drawn[1] == 255 && drawn[2] == 0);
        assert(backend.render_passes(representing, red, &pixels, error));
        assert(error.empty());
        // Green on the FIRST cycle too, which is the harder half. That frame is
        // where the history is made, so there is no copy from a previous frame
        // to read and the seed has to come from the target that last resolved
        // to this address - ordinal 1, in the other frame shape. Seeded from
        // ordinal 0 instead, this is the red clear of a pass that draws
        // nothing, and once the loop closes it never recovers.
        const uint8_t* shown = &pixels[(std::size_t(32) * 64 + 32) * 4];
        assert(shown[0] == 0 && shown[1] == 255 && shown[2] == 0);
    }
    std::printf("vulkan_backend_test: a surface resolved at pass 1 is read back "
                "at pass 0 of the next frame\n");
}

// A history image made LATE - on the first frame something reads the address,
// not on the first frame the pass runs - starts from the surface's own picture
// rather than from black.
//
// The two are the same thing only when the two frames coincide, and in a real
// title they never do: a pass resolves to an address for thousands of frames
// before anything reads it back, and by then guest memory at that address holds
// the last resolve. There is no "not written yet" on the console, so answering
// black is a claim about memory that is false.
//
// Ridge Racer 6's front end is what makes the difference total rather than one
// dark frame. Its drawing pass ends with a full-screen, blending-OFF blit of
// the address that same pass resolves to - so the frame's own picture is
// replaced by the history and then copied straight back into it. The loop's
// only input is the value the history was given the first time it was read.
// Seeded black, every frame after it is black, and nothing reports anything
// wrong: the draws run, the image exists, the descriptor binds it, and the
// sample is exactly the colour it holds.
//
// So: one pass at one ordinal, drawn plainly until it has a picture, and then
// the same pass with the blit appended. The blit must show the picture.
void test_a_history_made_late_starts_from_the_surface() {
    vulkan_backend backend;
    std::string error;
    if (!backend.initialize(error)) {
        std::printf("vulkan_backend_test: no device (%s) - skipped\n",
                    error.c_str());
        return;
    }
    const auto plain_vs = build_vertex_shader();
    const auto green_fs = build_fragment_shader(0, 1, 0);
    const auto textured_vs = build_textured_vertex_shader();
    const auto copy_fs = build_textured_fragment_shader(/*set=*/2);
    const std::vector<float> covering = {-1.0f, -1.0f, 3.0f, -1.0f, -1.0f, 3.0f};
    const uint32_t surface = 0x1000;

    const auto green_draw = [&] {
        vulkan_backend::scene_draw green;
        green.vertex_spirv = &plain_vs;
        green.fragment_spirv = &green_fs;
        green.bindings.push_back(
            {covering.data(), covering.size() * sizeof(float), 8});
        green.attributes.push_back(
            {0, 0, 0, static_cast<uint8_t>(vertex_format::k_32_32_float)});
        green.vertex_count = 3;
        return green;
    };

    // Nothing reads the surface, so no history is made at all.
    std::vector<vulkan_backend::scene_pass> drawing(1);
    drawing[0].width = 64;
    drawing[0].height = 64;
    drawing[0].resolve_address = surface;
    drawing[0].presented = true;
    drawing[0].draws.push_back(green_draw());

    // The same pass, with the surface's own previous copy blitted over the
    // green. This is the frame that first asks for a history.
    std::vector<vulkan_backend::scene_pass> wiping(1);
    wiping[0].width = 64;
    wiping[0].height = 64;
    wiping[0].resolve_address = surface;
    wiping[0].presented = true;
    wiping[0].draws.push_back(green_draw());
    {
        vulkan_backend::scene_draw blit;
        blit.vertex_spirv = &textured_vs;
        blit.fragment_spirv = &copy_fs;
        blit.bindings.push_back(
            {covering.data(), covering.size() * sizeof(float), 8});
        blit.attributes.push_back(
            {0, 0, 0, static_cast<uint8_t>(vertex_format::k_32_32_float)});
        blit.vertex_count = 3;
        blit.texture_slots = {0};
        vulkan_backend::scene_texture bound;
        bound.slot = 0;
        bound.resolved_pass = 0; // its own pass, so: the previous frame's copy
        bound.own_history = true;
        blit.textures.push_back(bound);
        wiping[0].draws.push_back(blit);
    }

    const float red[4] = {1, 0, 0, 1};
    std::vector<uint8_t> pixels;
    const auto centre = [&] { return &pixels[(std::size_t(32) * 64 + 32) * 4]; };
    // Two plain frames, so the surface unmistakably holds a picture before
    // anything asks for a history of it.
    for (int i = 0; i < 2; ++i) {
        assert(backend.render_passes(drawing, red, &pixels, error));
        assert(error.empty());
        assert(centre()[0] == 0 && centre()[1] == 255 && centre()[2] == 0);
    }
    // The frame that makes the history. Black here is the whole bug.
    assert(backend.render_passes(wiping, red, &pixels, error));
    assert(error.empty());
    assert(centre()[0] == 0 && centre()[1] == 255 && centre()[2] == 0);
    // And it stays: the loop now carries the picture instead of carrying zero.
    assert(backend.render_passes(wiping, red, &pixels, error));
    assert(error.empty());
    assert(centre()[0] == 0 && centre()[1] == 255 && centre()[2] == 0);
    std::printf("vulkan_backend_test: a history made late starts from the "
                "surface, not from black\n");
}

} // namespace

int main() {
    test_clear_readback();
    test_draw_triangle();
    test_frame_two_triangles();
    test_alpha_blend();
    test_triangle_strip();
    test_textured_draw();
    test_scene_draw_with_attributes_indices_and_constants();
    test_scene_draw_with_unknown_format_is_reported();
    test_rectangle_list_geometry_stage();
    test_rectangle_list_extrapolates_interpolators();
    test_rectangle_list_without_the_geometry_stage_is_half();
    test_a_pass_samples_a_later_passs_image_from_the_previous_frame();
    test_pass_reads_its_own_previous_result();
    test_a_pass_continues_the_one_before();
    test_a_surface_is_found_again_at_a_different_pass_ordinal();
    test_a_history_made_late_starts_from_the_surface();
    std::printf("vulkan_backend_test: all checks passed\n");
    return 0;
}
