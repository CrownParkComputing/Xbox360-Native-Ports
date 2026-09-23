// frame_renderer.h - a frame of draw records, turned into a picture.
//
// This is the last seam. Everything before it decodes: the command processor
// turns the ring into draw records with the register state each ran under, the
// disassembler turns uploaded microcode into shader programs, the translator
// turns those into SPIR-V. This assembles all of it into what the Vulkan
// backend needs, per draw:
//
//   - the translated vertex and pixel shaders (cached, because a title rebinds
//     the same handful every frame)
//   - the vertex buffers its vfetch slots name, read out of guest memory and
//     byte-swapped out of the console's order
//   - its indices, with the Xenos-only primitives expanded to triangles
//   - the float constants its shader reads, from its own register snapshot
//
// Anything that cannot be assembled is counted and named rather than skipped
// quietly: a frame that renders half its draws looks like a rendering bug, and
// the difference is only visible if the assembly says what it dropped.
#pragma once

#include "whitty_xenon/gpu/command_processor.h"
// For alpha_test_state: the alpha test is part of a shader's identity here,
// because Vulkan has no fixed-function stage for it.
#include "whitty_xenon/gpu/render_target.h"
#include "whitty_xenon/gpu/shader_translator.h"
#include "whitty_xenon/gpu/texture_cache.h"
#include "whitty_xenon/gpu/vulkan/vulkan_backend.h"
#include "whitty_xenon/memory.h"

#include <cstdint>
#include <deque>
#include <map>
#include <set>
#include <string>
#include <tuple>
#include <vector>

namespace whitty_xenon::gpu {

// Vertex buffers already read out of guest memory during THIS frame.
//
// A title binds one large buffer and draws many ranges out of it, so without
// this the same bytes are read, byte-swapped and copied once per draw.
//
// The subtlety - and it was a real 43x amplification on Hydro Thunder - is what
// makes two reads the same read. A buffer is identified by its address and the
// swap it is read under, and by nothing else. How MUCH a draw reads is a
// property of the DRAW: each one trims its read to the records it actually
// reaches, so a buffer read by a hundred draws that each reach a different
// highest vertex produces a hundred different lengths. Keying on the length
// made every one of those a separate entry and a separate read. Measured on
// Hydro Thunder frame 960: 3407 vertex-fetch resolutions against 69 distinct
// buffers holding 3.27 MB between them, one 2.75 MB buffer accounting for 2197
// of the resolutions, and 139.69 MB read per frame.
//
// So the extent is stored beside the storage rather than in the key, and grows
// monotonically: a draw reaching no further than an earlier one binds the same
// storage, and only a draw reaching FURTHER re-reads, at the larger extent.
// That is one read per new high-water mark instead of one per distinct trim.
//
// Handing a draw storage LONGER than it asked for is exact, not approximate.
// read_vertex_buffer is a pure function of (address, length, swap) over the
// guest bytes, so a shorter read is a prefix of a longer one byte for byte; the
// extra bytes lie past every index the draw fetches; and a vertex binding
// carries no length to the device, only an offset. Within one frame the guest
// bytes cannot change underneath this - the frame was recorded during the
// title's own frame and is replayed here at the swap - and the map is rebuilt
// per frame, so a later frame sees whatever the title wrote.
class vertex_buffer_reuse {
public:
    // The storage already holding at least `needed` bytes of this buffer, or
    // npos if this frame has not read that far into it yet.
    static constexpr std::size_t npos = static_cast<std::size_t>(-1);

    std::size_t find(uint32_t address, uint8_t swap,
                     uint32_t needed) const noexcept {
        const auto entry = m_entries.find(std::make_pair(address, swap));
        if (entry == m_entries.end() || entry->second.extent < needed)
            return npos;
        return entry->second.storage_index;
    }

    // Records a read. A read that reaches further replaces a shorter one, so
    // the map always names the longest storage held for a buffer; a shorter one
    // arriving later is ignored rather than losing ground.
    void record(uint32_t address, uint8_t swap, uint32_t extent,
                std::size_t storage_index) {
        entry& held = m_entries[std::make_pair(address, swap)];
        if (held.extent == 0 || extent > held.extent)
            held = {storage_index, extent};
    }

    void clear() noexcept { m_entries.clear(); }

private:
    struct entry {
        std::size_t storage_index{0};
        uint32_t extent{0}; // bytes actually read into that storage
    };
    std::map<std::pair<uint32_t, uint8_t>, entry> m_entries;
};

// What became of one frame. Every count here is a reason a picture might be
// missing something.
struct frame_stats {
    uint32_t draws_submitted{0};
    uint32_t draws_rendered{0};
    // A frame is not one pass. A title renders it as several, into different
    // surfaces at different sizes - a downsample chain for a glow, say - and
    // only one of them is what gets presented. Every pass is rendered, each into
    // its own image, because a later one samples an earlier one's result; the
    // count below is how many draws were NOT in the presented pass, which is a
    // measure of how much of the frame is effect rather than scene.
    uint32_t passes{0};
    uint32_t draws_in_other_passes{0};
    // Passes that began holding an earlier pass's pixels rather than the clear
    // colour. A resolve is a copy, not an emptying: EDRAM keeps everything drawn
    // into it unless RB_COPY_CONTROL asks for the clear that follows the copy, so
    // a surface resolved to several destinations in a row - which is how a title
    // hands the same picture to several later passes, and how it copies one
    // surface out in halves - yields one pass with the picture and the rest
    // continuing it. At zero on a title that does that, every destination but the
    // first reads as an empty image, and whatever composites them shows nothing.
    uint32_t passes_continued{0};
    // Which pass was shown, and whether the front buffer address named it or
    // the width heuristic guessed it. The two are worth separating: a frame
    // presented on the guess is a frame that MIGHT be showing the wrong
    // surface, and on a title with many passes it silently will.
    int presented_pass{-1};
    bool presented_from_front_buffer{false};
    // Draws the renderer DECLINED, each under a named reason. The rule is that
    // these plus draws_rendered must come to draws_submitted exactly - see
    // declined_unaccounted below - because "65 of 124" with no breakdown reads
    // as 59 lost draws whether or not any were lost, and there is nothing in
    // the report to tell the two apart.
    //
    // A copy out of EDRAM: RB_MODECONTROL mode 6, the pass's result going to an
    // address a later pass samples. It is not geometry and drawing it would
    // paint a full-screen rectangle over the pass it is copying, so declining
    // it is CORRECT - but it is by far the largest of these on a title built
    // out of passes (59 of Geometry Wars 2's 124 draws at frame 200), and while
    // it was uncounted it was indistinguishable from a real loss.
    uint32_t resolve_copies{0};
    // A draw belonging to no pass. Structurally impossible - every draw is
    // assigned one by the loop above - and counted so that stays true rather
    // than being assumed.
    uint32_t no_pass{0};
    uint32_t no_shader{0};        // a draw with no vertex or pixel shader bound
    uint32_t shader_parse_failed{0};
    uint32_t no_vertex_buffer{0}; // a vfetch slot that named no usable buffer
    uint32_t unsupported_primitive{0};
    // Draws that reached neither the scene nor any of the reasons above. This
    // is the counter that matters most and it should always be zero: a `continue`
    // added to the assembly loop without a reason beside it shows up here
    // instead of vanishing into the gap between the two totals.
    uint32_t declined_unaccounted{0};
    uint32_t approximate_primitive{0}; // drawn, but not as the console would
    // Rectangle lists drawn WITH the geometry stage that builds their fourth
    // vertex, so each rectangle is whole. Counted rather than assumed: without
    // the stage each of these loses a diagonal half, which on a full-screen
    // background quad is the most visible failure the renderer can have, and
    // the count is the difference between the two states.
    uint32_t rectangles_completed{0};
    // Of those, the ones whose fourth vertex was built on the CPU from the
    // vertex buffer instead, because the device has no geometry stage (or
    // WHITTY_CPU_RECTANGLES asked for that path). Separate from the count above
    // rather than folded into it: the two paths are supposed to draw the same
    // picture, and on a new device the first thing worth knowing is which one
    // actually ran.
    uint32_t rectangles_completed_on_cpu{0};
    // Point lists expanded into sprites by the geometry stage. A Xenos point is
    // a SQUARE whose size the vertex shader can compute per point, up to a
    // couple of hundred pixels across; drawn as a Vulkan point it is one pixel,
    // sampling one texel of its texture. So this count is the difference between
    // a title's particles and glows being there and being invisible, and at zero
    // on a title that draws point lists something in the chain is not wired.
    uint32_t point_sprites{0};
    // Texture slots given a real texture out of guest memory, and slots that
    // fell back to the flat white placeholder because their fetch constant
    // described something that could not be converted. A placeholder is not an
    // error, but it IS a surface drawn without its pattern - which looks like a
    // shading bug and is not one, so it is counted rather than left white and
    // silent.
    uint32_t textures_bound{0};
    uint32_t texture_placeholders{0};
    // Texture slots fed by an earlier pass of the same frame rather than by
    // guest memory - a pass rendered, resolved to an address, and sampled back.
    // This is the direct evidence that an effect built out of passes is wired
    // up: at zero, a title's glow is being sampled from memory that never
    // received the copy, which is to say from nothing.
    uint32_t resolved_sources{0};
    // The other side of that, and the one with a failure mode. A slot NOT
    // served from a pass falls through to guest memory - and this runtime never
    // writes a resolve back into guest memory, so if the address was one a pass
    // resolved to, the read is of memory nothing ever wrote and it comes back
    // ZERO. Everything reports success: the fetch constant decodes, a texture
    // binds, the draw runs; a composite that should read the scene reads black.
    //
    // Ridge Racer 6 dies exactly this way. Its race scene renders, and then the
    // first draw of the next pass - a full-screen tone-map sampling the address
    // the previous pass resolved to - writes black over it, and the pass after
    // that inherits the black and is presented.
    //
    // So: every slot served out of guest memory is counted, and separately the
    // ones whose address lands inside a surface some pass of this frame
    // resolved to, which is the population that cannot be right. The second is
    // the number to read; the first is what makes it a proportion rather than a
    // bare count.
    uint32_t textures_from_guest_memory{0};
    uint32_t resolve_reads_missed{0};
    // Of those, slots reading the pass's OWN previous result - a pass that
    // samples the very address it resolves to. That is a feedback buffer, and it
    // is the one resolve relationship a pass's own image cannot express. At zero
    // on a title built out of trails and decay, every such layer is being
    // rebuilt from black each frame instead of accumulating.
    uint32_t feedback_sources{0};
    // Where the frame's time went: gathering vertex data, indices and
    // constants out of guest memory, versus building and submitting the
    // command buffer. Rendering continuously is a budget, and a budget cannot
    // be spent well without knowing which half is consuming it.
    uint64_t assemble_us{0};
    uint64_t submit_us{0};
    // The gathering half, broken into the five things it does. In NANOSECONDS,
    // not microseconds: each of these is summed from dozens of spans per frame,
    // most of them well under a microsecond, and truncating each span to whole
    // microseconds would report the frequent-and-small ones as zero - which
    // reads as "that part is free" when it may be most of the frame.
    //
    // These are what says which of the five to attack. Without them the only
    // honest statement about a slow frame is that it is slow.
    uint64_t vertex_ns{0};    // reading and byte-swapping vertex buffers
    uint64_t texture_ns{0};   // unpacking textures out of guest memory
    uint64_t constants_ns{0}; // copying the float constant bank per draw
    uint64_t shader_ns{0};    // shader lookup, and translation on a miss
    uint64_t primitive_ns{0}; // index expansion to a host topology
    // What that work was ON, so a cost can be read as a rate rather than only
    // as a total - and so a cache's effect shows up as work not done rather
    // than only as time not spent.
    uint64_t vertex_bytes{0};
    // Texels the frame's draws BOUND, and of those, texels actually unpacked.
    // The gap between them is what the cache saved, stated as work rather than
    // as time - which is the form that stays meaningful on another machine.
    uint64_t texture_texels{0};
    uint64_t texture_texels_decoded{0};
    // Textures whose pixels were served from the decode cache instead of being
    // unpacked again, and those that had to be unpacked. A cache that is not
    // hitting looks exactly like no cache at all from the timings alone.
    uint32_t texture_cache_hits{0};
    uint32_t texture_cache_misses{0};
    // Shader lookups that found a translated module already built, and those
    // that had to translate one. A miss every frame means the key holds
    // something that varies per frame, which costs far more than translation.
    uint32_t shader_cache_hits{0};
    uint32_t shader_cache_misses{0};
    // Vertex buffers read out of guest memory this frame, and reads avoided
    // because an earlier draw in the same frame had already read exactly those
    // bytes. A title binds one buffer and draws many ranges out of it, so the
    // second number is usually much the larger - and the pair is what says so,
    // rather than a timing that only shows the total came down.
    uint32_t vertex_buffer_reads{0};
    uint32_t vertex_buffer_reuses{0};
};

class frame_renderer {
public:
    frame_renderer(vulkan_backend& backend, guest_memory& memory) noexcept
        : m_backend(&backend), m_memory(&memory) {}

    // Replaces every pixel shader with one that writes a flat colour. This
    // separates the two questions a wrong frame raises - "is the geometry in
    // the right place" and "is the shading right" - which are otherwise only
    // answerable together. With it on, anything visible is geometry that
    // reached the rasteriser.
    void set_solid_shading(bool enabled) noexcept { m_solid_shading = enabled; }

    // Whether to read the finished frame back into `out`. Copying a 720p
    // frame out of device memory and waiting for it is the most expensive
    // thing in a frame nothing looks at, so a run that only counts frames
    // should turn it off.
    void set_readback(bool enabled) noexcept { m_readback = enabled; }

    // Whether decoded textures may be kept between draws and between frames.
    //
    // On by default, because a title binds the same few textures across every
    // draw of every frame and unpacking them again each time was ninety per
    // cent of a frame. Off is what proves a wrong picture is not the cache's
    // doing: with it off every texture is unpacked exactly as before, so the
    // two runs must produce identical pixels, and if they do not the cache is
    // at fault rather than whatever else changed.
    void set_texture_cache(bool enabled) noexcept {
        m_textures.set_enabled(enabled);
    }

    // Which pass of the frame to render, by index, instead of the one whose
    // surface matches the presented size. A frame is several passes into
    // different surfaces, and a title's glow or highlight can live entirely in
    // one that never reaches the screen directly - so being able to look at an
    // earlier pass is the only way to tell "the game did nothing" from "the
    // game did something we are not drawing". Negative means the default.
    void set_pass_index(int index) noexcept { m_pass_index = index; }

    // The address VdSwap named as the front buffer, in the physical byte form
    // RB_COPY_DEST_BASE uses. The pass that resolved THERE is the picture -
    // that is what "presented" means on this console, and it is the only
    // statement of it that does not have to be inferred.
    //
    // The fallback, matching a pass's surface width against the size being
    // asked for, is a guess that holds only while a frame has one pass at the
    // display's width. Alien Breed renders 28 passes and ends its frame with
    // three that carry no geometry at all - resolve-only passes splitting the
    // scene into EDRAM-sized bands - so "the last pass 1280 wide" is an empty
    // image, and the frame presents black with every draw in it accounted for.
    // Zero means the address is unknown and the fallback stands.
    void set_front_buffer(uint32_t address) noexcept {
        m_front_buffer = address;
    }

    // Renders every draw into one `width` x `height` image, read back as
    // tightly packed RGBA8. `shaders` is the command processor's shader store,
    // which the draw records index into.
    bool render(const std::vector<draw_record>& draws,
                const std::vector<shader_upload>& shaders, uint32_t width,
                uint32_t height, const float clear[4],
                std::vector<uint8_t>& out, frame_stats& stats,
                std::string& error);

    // Writes an RGBA8 image as a binary PPM - the simplest format that any
    // viewer opens, which is the whole requirement for looking at a frame.
    static bool write_ppm(const std::string& path,
                          const std::vector<uint8_t>& rgba, uint32_t width,
                          uint32_t height);

private:
    // A translated shader, kept because a title binds the same few every frame
    // and translation is not free.
    struct translated_shader {
        std::vector<uint32_t> spirv;
        std::vector<vertex_input> inputs;
        std::vector<uint32_t> texture_slots;
        // What each slot's sampling instruction asked of the sampler, in the
        // same order. Resolved against the fetch constant at draw time, because
        // only then is the constant known.
        std::vector<sampler_override> texture_filters;
        std::vector<uint32_t> interpolators;
        bool writes_point_size{false};
        bool valid{false};
        // The microcode, kept for the one thing the translated module cannot
        // answer: which record of the vertex buffer each vertex fetches. That
        // is a value the shader computes, and a shader that computes it as
        // anything but the vertex index needs its buffer gathered into the
        // order the host input assembler reads. Only kept when that is so.
        bool remaps_fetch_index{false};
        shader_program program;
    };
    // A pixel shader is translated against the interpolators its paired vertex
    // shader exports, so the two are cached as a pair rather than separately.
    // The generated-parameter register is part of the key for the same reason:
    // the same microcode with PsParamGen enabled is a different module.
    struct shader_key {
        int index{-1};
        viewport_transform viewport;
        std::vector<uint32_t> interpolators;
        int param_gen{-1};
        bool param_gen_point{false};
        // Vulkan has no alpha-test stage, so the test becomes a discard inside
        // the module - which makes it part of the shader's identity. Two draws
        // of one guest shader under different alpha tests are two modules, and
        // leaving this out of the key would hand the second draw the first
        // one's test.
        alpha_test_state alpha_test;
        bool operator<(const shader_key& other) const;
    };
    const translated_shader* translate(const std::vector<shader_upload>& shaders,
                                       int index,
                                       const viewport_transform& viewport,
                                       const std::vector<uint32_t>&
                                           interpolators,
                                       frame_stats& stats,
                                       int param_gen = -1,
                                       bool param_gen_point = false,
                                       const alpha_test_state& alpha_test =
                                           alpha_test_state{});
    // A fragment shader writing one opaque colour, built once on demand.
    const std::vector<uint32_t>& solid_fragment_shader();
    // The geometry shader that completes a rectangle list for a vertex shader
    // exporting `interpolators`, or null where the device has no geometry
    // stage. Keyed by the interpolator set because the stage has to pass
    // through exactly what the shader pair agrees on, and that varies per pair.
    const std::vector<uint32_t>* rectangle_geometry_shader(
        const std::vector<uint32_t>& interpolators);
    // The geometry shader that expands a point list into sprites. Keyed by the
    // interpolator set and by the sizes, because both are baked in.
    const std::vector<uint32_t>* point_geometry_shader(
        const std::vector<uint32_t>& interpolators,
        const point_sprite_params& params);

    vulkan_backend* m_backend;
    guest_memory* m_memory;
    bool m_solid_shading{false};
    bool m_readback{true};
    int m_pass_index{-1};
    uint32_t m_front_buffer{0};
    // Decoded textures, kept between draws and between frames. See
    // texture_cache.h: this is where most of a frame used to go.
    texture_cache m_textures;
    std::vector<uint32_t> m_solid_fragment;
    // Keyed by the shader's index in the store and the viewport it was
    // translated for. The store is append-only within a run so an index is
    // stable, and the viewport is part of the key because it is baked into the
    // position export - the same shader under a different viewport is a
    // different module.
    std::map<shader_key, translated_shader> m_cache;
    std::map<std::vector<uint32_t>, std::vector<uint32_t>> m_rectangle_geometry;
    std::map<std::pair<std::vector<uint32_t>, point_sprite_params>,
             std::vector<uint32_t>>
        m_point_geometry;
    // Reasons the CPU rectangle expansion has already reported, so a frame full
    // of rectangle draws says each one once rather than once per draw.
    std::set<const char*> m_rectangle_refusals;
};

} // namespace whitty_xenon::gpu
