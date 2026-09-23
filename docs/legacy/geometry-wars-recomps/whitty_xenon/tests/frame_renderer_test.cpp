// How a frame's draws are cut into passes.
//
// A pass is a run of draws sharing an EDRAM surface, and the cut points decide
// which pass a later draw samples when it reads an address something resolved
// to. Two rules meet here and they pull in opposite directions:
//
//   - a resolve ENDS a pass, because a pass records where it was copied to and
//     one pass cannot record two destinations;
//   - a resolve does not EMPTY the surface, because it is a copy. Unless
//     RB_COPY_CONTROL asks for the clear that follows it, the next draws into
//     that surface land on top of everything drawn before.
//
// So the pass after a resolve begins holding the previous pass's picture. Hydro
// Thunder resolves one lit surface four times over - the left half to one
// address, the depth twice to another, the right half to a fourth, with no
// drawing in between - and starting each of those from the clear colour left one
// pass with the scene and three with nothing at all. Every draw that composited
// one of the empty ones showed black, which is the whole 3D world missing from a
// title whose menu still drew correctly.
//
// The pass-structure tests need only register snapshots. The raster regressions
// below also run synthetic guest shaders and check the resulting pixels.
#include "whitty_xenon/gpu/command_processor.h"
#include "whitty_xenon/gpu/frame_selection.h"
#include "whitty_xenon/gpu/register_file.h"
#include "whitty_xenon/gpu/render_target.h"
#include "whitty_xenon/gpu/vulkan/frame_renderer.h"
#include "whitty_xenon/gpu/vulkan/vulkan_backend.h"
#include "whitty_xenon/memory.h"

#include <algorithm>
#include <array>
#include <cassert>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>

using namespace whitty_xenon;
using namespace whitty_xenon::gpu;

namespace {

// Everything the pass split reads: which EDRAM surface a draw is aimed at, how
// big the viewport over it is, and - for a resolve - where the copy goes and
// whether it clears.
uint32_t as_bits(float value) {
    uint32_t bits = 0;
    std::memcpy(&bits, &value, sizeof(bits));
    return bits;
}

void set_surface(register_file& regs, uint32_t edram_base, uint32_t pitch) {
    regs.set(reg::rb_surface_info, pitch);
    regs.set(reg::rb_color_info, edram_base);
    regs.set(reg::pa_cl_vport_xscale, as_bits(32.0f));
    regs.set(reg::pa_cl_vport_yscale, as_bits(-32.0f));
    regs.set(reg::pa_cl_vport_xoffset, as_bits(32.0f));
    regs.set(reg::pa_cl_vport_yoffset, as_bits(32.0f));
    regs.set(reg::pa_cl_vte_cntl, 0x3F);
}

draw_record geometry(uint32_t edram_base, uint32_t pitch) {
    draw_record draw;
    draw.prim = primitive_type::triangle_list;
    draw.index_count = 3;
    set_surface(draw.state, edram_base, pitch);
    draw.state.set(reg::rb_modecontrol, 4); // colour and depth
    return draw;
}

draw_record resolve(uint32_t edram_base, uint32_t pitch, uint32_t destination,
                    bool clears) {
    draw_record draw = geometry(edram_base, pitch);
    draw.state.set(reg::rb_modecontrol, 6); // a copy out of EDRAM
    draw.state.set(reg::rb_copy_dest_base, destination);
    // Bit 20 is the copy command every title sets; bit 8 is the clear that
    // follows the copy.
    draw.state.set(reg::rb_copy_control, 0x00100000u | (clears ? 0x100u : 0u));
    return draw;
}

frame_stats render(frame_renderer& renderer,
                   const std::vector<draw_record>& draws) {
    frame_stats stats;
    std::vector<uint8_t> pixels;
    std::string error;
    const float clear[4] = {0, 0, 0, 1};
    const bool ok = renderer.render(draws, {}, 64, 64, clear, pixels, stats,
                                    error);
    assert(ok);
    (void)ok;
    return stats;
}

// One surface, resolved four times with nothing drawn between the copies: four
// passes, three of them continuing the first. That is the shape Hydro Thunder
// hands over, and the count is the difference between one pass holding the
// picture and four passes all holding it.
void test_resolves_in_a_row_continue_one_surface(frame_renderer& renderer) {
    std::vector<draw_record> draws;
    draws.push_back(geometry(936, 520));
    draws.push_back(geometry(936, 520));
    draws.push_back(resolve(936, 520, 0x09175000, /*clears=*/false));
    draws.push_back(resolve(936, 520, 0x093C5000, /*clears=*/false));
    draws.push_back(resolve(936, 520, 0x09185000, /*clears=*/false));
    const frame_stats stats = render(renderer, draws);
    assert(stats.passes == 3);
    assert(stats.passes_continued == 2);
    std::printf("frame_renderer_test: three resolves of one surface are three "
                "passes, two of them carrying the first's pixels\n");
}

// The clear the resolve packet can ask for is the one thing that does empty the
// surface, and a pass after it starts from the clear colour. Same stream as
// above with one bit set, so the bit is what the assertion is about.
void test_a_resolve_that_clears_ends_the_surface(frame_renderer& renderer) {
    std::vector<draw_record> draws;
    draws.push_back(geometry(936, 520));
    draws.push_back(resolve(936, 520, 0x09175000, /*clears=*/true));
    draws.push_back(resolve(936, 520, 0x09185000, /*clears=*/false));
    const frame_stats stats = render(renderer, draws);
    assert(stats.passes == 2);
    assert(stats.passes_continued == 0);
    std::printf("frame_renderer_test: a resolve that clears leaves the next "
                "pass empty\n");
}

// A different EDRAM base is a different surface, and what was in the old one
// says nothing about what is in the new. Without this the whole frame would be
// one chain of inheritance and every unrelated pass would start holding the
// previous one's picture.
void test_a_new_surface_does_not_continue(frame_renderer& renderer) {
    std::vector<draw_record> draws;
    draws.push_back(geometry(936, 520));
    draws.push_back(resolve(936, 520, 0x09175000, /*clears=*/false));
    draws.push_back(geometry(468, 1040));
    draws.push_back(resolve(468, 1040, 0x08F35000, /*clears=*/false));
    const frame_stats stats = render(renderer, draws);
    assert(stats.passes == 2);
    assert(stats.passes_continued == 0);
    std::printf("frame_renderer_test: a different EDRAM surface starts from the "
                "clear colour\n");
}

// Every draw the renderer declines is counted under a name, and the names are
// exhaustive.
//
// "frame render: 65 of 124 draw(s)" was the whole of what the report said about
// 59 draws, and it reads as 59 lost draws whether or not any were lost. On
// Geometry Wars 2 at frame 200 all 59 are copies out of EDRAM - RB_MODECONTROL
// mode 6, the pass result going to an address a later pass samples - which are
// correct to decline and were being declined silently, indistinguishably from a
// shader that would not translate.
//
// The assertion that matters is the last one. `declined_unaccounted` is what a
// `continue` added to the assembly loop without a reason beside it falls into,
// so it stands in for every reason nobody has thought of yet; at zero, the sum
// of the named reasons IS the difference between the two totals, and the report
// can be read as a complete account rather than as a subtraction.
void test_every_declined_draw_has_a_reason(frame_renderer& renderer) {
    std::vector<draw_record> draws;
    // Three geometry draws with no shader bound, and two copies out of EDRAM.
    // Neither kind is rendered, and the two are declined for entirely different
    // reasons - one is a stream worth reporting, the other is the renderer doing
    // exactly the right thing.
    draws.push_back(geometry(936, 520));
    draws.push_back(geometry(936, 520));
    draws.push_back(resolve(936, 520, 0x09175000, /*clears=*/false));
    draws.push_back(geometry(936, 520));
    draws.push_back(resolve(936, 520, 0x09185000, /*clears=*/false));
    const frame_stats stats = render(renderer, draws);
    assert(stats.draws_submitted == 5);
    assert(stats.draws_rendered == 0);
    assert(stats.resolve_copies == 2);
    assert(stats.no_shader == 3);
    assert(stats.no_pass == 0);
    const uint32_t named = stats.resolve_copies + stats.no_pass +
                           stats.no_shader + stats.shader_parse_failed +
                           stats.unsupported_primitive +
                           stats.no_vertex_buffer;
    assert(named == stats.draws_submitted - stats.draws_rendered);
    assert(stats.declined_unaccounted == 0);
    std::printf("frame_renderer_test: every declined draw is counted under a "
                "reason, and the reasons account for all of them\n");
}

// How a frame decides it has already read a vertex buffer.
//
// This is the whole of a 43x read amplification, and it is one line's worth of
// keying. Hydro Thunder binds one 2.75 MB vertex buffer and draws out of it
// 2197 times in a frame; each draw trims its read to the highest vertex it
// reaches, and while that trimmed LENGTH was part of the key, every distinct
// trim was a separate entry and the buffer was re-read and re-byte-swapped
// dozens of times. Keyed on the buffer instead - address and swap - with the
// extent kept beside the storage, the frame reads it once per new high-water
// mark. Measured on the title: 139.69 MB of vertex data per frame became
// 26.99 MB, and the frame went from 51.65 ms to 31.44 ms.
//
// The assertions below are the four cases that decide it, and the second is
// the one that regressed: a SHORTER read after a longer one must reuse, not
// re-read.
void test_vertex_reuse_is_keyed_on_the_buffer_not_the_draw() {
    vertex_buffer_reuse reuse;
    constexpr uint32_t address = 0x40001000;
    constexpr uint8_t swap = 2;

    // Nothing read yet.
    assert(reuse.find(address, swap, 100) == vertex_buffer_reuse::npos);

    reuse.record(address, swap, /*extent=*/1000, /*storage_index=*/7);
    // Exactly as far: the same storage.
    assert(reuse.find(address, swap, 1000) == 7);
    // Less far. This is the case the old key got wrong - a different trimmed
    // length looked like a different buffer, so it read the whole thing again.
    // A shorter read is a PREFIX of the longer one byte for byte, and the extra
    // bytes lie past every index the draw fetches, so the same storage serves.
    assert(reuse.find(address, swap, 40) == 7);
    assert(reuse.find(address, swap, 1) == 7);
    // Further than has been read: this one genuinely has to read again.
    assert(reuse.find(address, swap, 1001) == vertex_buffer_reuse::npos);

    // A different swap over the same address is a different result, because
    // read_vertex_buffer is a function of the swap as much as of the bytes.
    assert(reuse.find(address, swap + 1, 40) == vertex_buffer_reuse::npos);
    // As is a different address.
    assert(reuse.find(address + 4, swap, 40) == vertex_buffer_reuse::npos);

    // Growing keeps the longer storage, and now serves the draw that forced it
    // as well as every shorter one.
    reuse.record(address, swap, /*extent=*/4000, /*storage_index=*/9);
    assert(reuse.find(address, swap, 4000) == 9);
    assert(reuse.find(address, swap, 1000) == 9);

    // A shorter read arriving afterwards must not lose ground: recording it
    // over the top would strand every draw that needs the longer extent and
    // put the re-reads straight back.
    reuse.record(address, swap, /*extent=*/500, /*storage_index=*/11);
    assert(reuse.find(address, swap, 4000) == 9);
    assert(reuse.find(address, swap, 500) == 9);

    // The map is per frame: a later frame reads guest memory again and sees
    // whatever the title changed.
    reuse.clear();
    assert(reuse.find(address, swap, 1) == vertex_buffer_reuse::npos);

    std::printf("frame_renderer_test: a vertex buffer is identified by its "
                "address and swap, not by how far one draw reads into it\n");
}

} // namespace

// WHITTY_GPU_DUMP's frame list. The one rule that outranks the rest: a SINGLE
// frame must behave exactly as it always has, because both gates, every title
// profile and every script in the tree pass one number and one path.
void test_frame_list_parsing() {
    // The compatibility case, first and loudest.
    const std::vector<uint64_t> one = parse_frame_list("900");
    assert(one.size() == 1 && one[0] == 900);

    // A list, sorted and deduped - written out of order and with a repeat,
    // which is what a hand-typed variable looks like.
    const std::vector<uint64_t> many = parse_frame_list("2400,900,1200,900");
    assert(many.size() == 3);
    assert(many[0] == 900 && many[1] == 1200 && many[2] == 2400);

    // A trailing comma is somebody appending one more and not deleting it.
    const std::vector<uint64_t> trailing = parse_frame_list("900,1200,");
    assert(trailing.size() == 2 && trailing[1] == 1200);
    // As are doubled commas and spaces.
    const std::vector<uint64_t> untidy = parse_frame_list(" 900 , ,1200 ");
    assert(untidy.size() == 2 && untidy[0] == 900 && untidy[1] == 1200);

    // Unset means no frames at all. Set-but-junk keeps its OLD meaning - it is
    // frame 0, because that is what strtoull gave when this took one value.
    // Turning it into "capture nothing" would be a silent behaviour change on
    // the one input nobody types deliberately.
    assert(parse_frame_list(nullptr).empty());
    const std::vector<uint64_t> junk = parse_frame_list("abc");
    assert(junk.size() == 1 && junk[0] == 0);
    const std::vector<uint64_t> blank = parse_frame_list("");
    assert(blank.empty());

    std::printf("  frame list: single value, out of order, duplicated, "
                "trailing comma and junk all behave\n");
}

// Where each capture is written. One frame keeps the path untouched; several
// fold the number in before the extension so they sort and keep their suffix.
void test_frame_capture_paths() {
    assert(frame_capture_path("/tmp/f.ppm", 900, true) == "/tmp/f.ppm");
    assert(frame_capture_path("/tmp/f.ppm", 900, false) == "/tmp/f_0900.ppm");
    // No extension: the number goes on the end rather than nowhere.
    assert(frame_capture_path("/tmp/frame", 12, false) == "/tmp/frame_0012");
    // A dot in a DIRECTORY is not an extension, and splitting on it would put
    // the number in the middle of a path and write to a directory that is not
    // there.
    assert(frame_capture_path("/tmp/run.1/frame", 7, false) ==
           "/tmp/run.1/frame_0007");
    // Frames past four digits still work; the padding is a minimum, not a cap.
    assert(frame_capture_path("/tmp/f.ppm", 123456, false) ==
           "/tmp/f_123456.ppm");
    std::printf("  capture paths: one frame keeps its name, several are "
                "numbered before the extension\n");
}

// A real fetch and position export, followed by a constant green pixel shader.
// Exercise the frame renderer, including its primitive conversion and pipeline
// state, rather than passing already assembled Vulkan draws to the backend.
std::vector<shader_upload> raster_shaders() {
    return {
        {shader_kind::vertex, 0, {
            0x00012001, 0x00002000, 0, // exec_end: fetch, ALU
            1u << 12, (38u << 16) | 0x688u, 4, // float4 -> r1
            (50u << 26) | (15u << 16) | (1u << 15) | 62u,
            0, (2u << 24) | (1u << 31) | (1u << 30) | (1u << 16) | (1u << 8)
        }},
        {shader_kind::pixel, 0, {
            0x00001001, 0x00002000, 0, // exec_end: ALU
            (50u << 26) | (15u << 16) | (1u << 15), 0, 2u << 24
        }}
    };
}

draw_record raster_draw(guest_memory& memory, primitive_type prim,
                        const std::vector<std::array<float, 4>>& vertices) {
    constexpr uint32_t address = 0xA1000000;
    draw_record draw = geometry(0, 64);
    draw.prim = prim;
    draw.index_count = static_cast<uint32_t>(vertices.size());
    draw.vertex_shader = 0;
    draw.pixel_shader = 1;
    for (std::size_t i = 0; i < vertices.size(); ++i)
        for (uint32_t c = 0; c < 4; ++c)
            memory.write_f32(address + uint32_t(i * 16) + c * 4, vertices[i][c]);
    draw.state.set(reg::shader_constant_fetch_00_0, 0x01000003);
    draw.state.set(reg::shader_constant_fetch_00_0 + 1,
                   uint32_t(vertices.size() * 16) | 2u);
    draw.state.set(reg::rb_blendcontrol0, 1u | (1u << 16)); // one, zero
    draw.state.set(reg::shader_constant_000_x + 256 * 4 + 1, as_bits(1));
    draw.state.set(reg::shader_constant_000_x + 256 * 4 + 3, as_bits(1));
    return draw;
}

std::vector<uint8_t> raster_pixels(frame_renderer& renderer,
                                   const std::vector<draw_record>& draws,
                                   frame_stats* result = nullptr) {
    frame_stats stats;
    std::vector<uint8_t> pixels;
    std::string error;
    const float clear[4] = {0, 0, 0, 1};
    assert(renderer.render(draws, raster_shaders(), 64, 64, clear,
                           pixels, stats, error));
    assert(stats.draws_rendered == draws.size());
    if (result) *result = stats;
    return pixels;
}

void test_window_facing_and_expanded_rectangles(frame_renderer& renderer,
                                               guest_memory& memory) {
    const std::vector<std::array<float, 4>> quad = {
        {-0.75f, 0.75f, 0.5f, 1}, {0.75f, 0.75f, 0.5f, 1},
        {0.75f, -0.75f, 0.5f, 1}, {-0.75f, -0.75f, 0.5f, 1}};
    auto draw = raster_draw(memory, primitive_type::quad_list, quad);
    const auto green = [&](const draw_record& d) {
        const auto px = raster_pixels(renderer, {d});
        return px[(32 * 64 + 32) * 4 + 1];
    };
    // Clockwise in guest window coordinates, with the ordinary negative Y
    // viewport scale. Back culling keeps it; front culling rejects it.
    draw.state.set(reg::pa_su_sc_mode_cntl, 6);
    assert(green(draw) == 255);
    draw.state.set(reg::pa_su_sc_mode_cntl, 5);
    assert(green(draw) == 0);
    draw.state.set(reg::pa_su_sc_mode_cntl, 2); // opposite front definition
    assert(green(draw) == 0);
    draw.state.set(reg::pa_cl_vport_yscale, as_bits(32));
    assert(green(draw) == 255); // guest viewport reversed facing

    // The same clockwise quad, this time supplied in window coordinates.
    auto window_quad = quad;
    for (auto& v : window_quad) { v[0] = 32 + v[0] * 32; v[1] = 32 - v[1] * 32; }
    draw = raster_draw(memory, primitive_type::quad_list, window_quad);
    draw.state.set(reg::pa_cl_vte_cntl, 0x300);
    draw.state.set(reg::pa_su_sc_mode_cntl, 6);
    assert(green(draw) == 255);

    // Generated rectangle triangles must render with either source winding,
    // even when both polygon cull bits were left set by a previous draw.
    for (bool reverse : {false, true}) {
        std::vector<std::array<float, 4>> rect(quad.begin(), quad.begin() + 3);
        if (reverse) std::reverse(rect.begin(), rect.end());
        draw = raster_draw(memory, primitive_type::rectangle_list, rect);
        draw.state.set(reg::pa_su_sc_mode_cntl, 7);
        const auto px = raster_pixels(renderer, {draw});
        assert(px[(16 * 64 + 48) * 4 + 1] == 255);
        assert(px[(48 * 64 + 16) * 4 + 1] == 255);
    }
    std::printf("frame_renderer_test: window facing and rectangle culling passed\n");
}

void test_native_indices_and_base_vertex(frame_renderer& renderer,
                                         guest_memory& memory) {
    // Only records 4..6 form a triangle. Losing either the indices or the
    // base vertex draws off-screen dummy records and leaves the centre black.
    const std::array<float, 4> dummy = {4, 4, 0.5f, 1};
    auto draw = raster_draw(memory, primitive_type::triangle_list,
        {dummy, dummy, dummy, dummy, {-0.75f, 0.75f, 0.5f, 1},
         {0.75f, 0.75f, 0.5f, 1}, {0, -0.75f, 0.5f, 1}});
    draw.indices = {5, 3, 4};
    draw.indexed = true;
    draw.index_count = 3;
    draw.state.set(reg::vgt_indx_offset, 1);
    const auto px = raster_pixels(renderer, {draw});
    assert(px[(32 * 64 + 32) * 4 + 1] == 255);
    std::printf("frame_renderer_test: native indices and base vertex passed\n");
}

void test_depth_clear_preserves_color(frame_renderer& renderer,
                                      guest_memory& memory) {
    auto color = raster_draw(memory, primitive_type::rectangle_list,
        {{-0.75f, 0.75f, 0.5f, 1}, {0.75f, 0.75f, 0.5f, 1},
         {0.75f, -0.75f, 0.5f, 1}});
    auto depth = color;
    depth.state.set(reg::rb_modecontrol, 5);
    depth.state.set(reg::rb_surface_info, 32); // depth surface has another pitch
    depth.state.set(reg::pa_sc_mode_cntl, 1);
    depth.state.set(reg::rb_depthcontrol, 0x76); // always, test and write
    // Red if accidentally written to colour, followed by another red draw which
    // must fail LESS against the clear's equal depth.
    depth.state.set(reg::shader_constant_000_x + 256 * 4, as_bits(1));
    depth.state.set(reg::shader_constant_000_x + 256 * 4 + 1, 0);
    auto hidden = depth;
    hidden.state.set(reg::rb_modecontrol, 4);
    hidden.state.set(reg::rb_surface_info, 64);
    hidden.state.set(reg::rb_depthcontrol, 0x12); // less, no write
    frame_stats stats;
    const auto reference = raster_pixels(renderer, {color});
    const auto result = raster_pixels(renderer, {color, depth, hidden}, &stats);
    assert(stats.passes == 1);
    assert(result == reference);
    std::printf("frame_renderer_test: depth clear preserves colour and still writes depth\n");
}

int main() {
    // Need no device, so they run on a machine that would skip the rest.
    test_frame_list_parsing();
    test_frame_capture_paths();
    test_vertex_reuse_is_keyed_on_the_buffer_not_the_draw();

    vulkan_backend backend;
    std::string error;
    if (!backend.initialize(error)) {
        std::printf("frame_renderer_test: no device (%s) - pass split skipped\n",
                    error.c_str());
        return 0;
    }
    guest_memory memory;
    assert(memory.initialize(error));
    assert(memory.commit(0xA1000000, 0x10000, error));
    frame_renderer renderer(backend, memory);
    test_resolves_in_a_row_continue_one_surface(renderer);
    test_a_resolve_that_clears_ends_the_surface(renderer);
    test_a_new_surface_does_not_continue(renderer);
    test_every_declined_draw_has_a_reason(renderer);
    test_window_facing_and_expanded_rectangles(renderer, memory);
    test_native_indices_and_base_vertex(renderer, memory);
    test_depth_clear_preserves_color(renderer, memory);
    std::printf("frame_renderer_test: all checks passed\n");
    return 0;
}
