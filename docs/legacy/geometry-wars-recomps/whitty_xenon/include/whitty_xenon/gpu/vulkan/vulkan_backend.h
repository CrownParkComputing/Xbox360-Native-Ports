// vulkan_backend.h - turning draw records into pixels.
//
// Everything above this point runs on the CPU: it decodes commands, tracks GPU
// state, and translates shaders to SPIR-V. This is where that becomes an image.
// The backend owns a headless Vulkan device - no window, no swapchain - and
// renders offscreen into a colour target it can read back as RGBA, which is
// exactly the shape the C ABI's capture_frame wants.
//
// Unlike the layers above, this one needs a real GPU to do anything, so it is
// verified by rendering and reading the pixels back rather than by inspecting
// emitted data. It starts at the foundation - stand up a device, clear a target,
// read it back - and builds toward binding translated shaders and issuing draws.
#pragma once

#include "whitty_xenon/gpu/register_file.h"

#include <cstdint>
#include <functional>
#include <string>
#include <tuple>
#include <vector>

namespace whitty_xenon::gpu {

// The primitive topology a draw assembles its vertices with.
enum class topology {
    triangle_list,
    triangle_strip,
    triangle_fan,
    line_list,
    line_strip,
    point_list,
};

class vulkan_backend {
public:
    vulkan_backend() = default;
    ~vulkan_backend();

    vulkan_backend(const vulkan_backend&) = delete;
    vulkan_backend& operator=(const vulkan_backend&) = delete;

    // How to put frames on a screen.
    //
    // The backend does no windowing of its own: a window belongs to whatever
    // is hosting the runtime, and pulling a windowing library in here would
    // make the whole GPU stack depend on one. Instead the host says which
    // instance extensions its windowing needs and hands back a surface once
    // the instance exists.
    struct display_config {
        std::vector<std::string> instance_extensions;
        // Called with the created VkInstance; must produce a VkSurfaceKHR.
        std::function<bool(void* instance, void** out_surface)> create_surface;
        uint32_t width{1280};
        uint32_t height{720};
        // Whether the screen the picture does not cover is painted as a border
        // rather than left black. It is the host's call because the host reads
        // the environment; see border_enabled_by_environment in
        // present_panes.h. There is nothing to paint unless the surface is
        // bigger than the picture, which is what fullscreen makes of it.
        bool bordered{true};
    };

    // Stands up a Vulkan device (instance, physical device, graphics queue,
    // command pool). Returns false and sets `error` if no usable device is
    // present. Headless by default; with a `display`, the instance is created
    // with its extensions and a swapchain is set up, so present() can show
    // what render_scene drew.
    bool initialize(std::string& error,
                    const display_config* display = nullptr);
    void shutdown();

    // Whether frames can be shown rather than only read back.
    bool has_display() const noexcept { return m_swapchain != nullptr; }

    // Whether the device can run a geometry stage. It is an optional Vulkan
    // feature, and it is the only way to complete a Xenos rectangle list - so a
    // caller has to ask before relying on it rather than discover it when
    // pipeline creation fails.
    bool supports_geometry_shaders() const noexcept {
        return m_geometry_shaders;
    }

    // Shows the most recently rendered frame. Blits the offscreen target into
    // the next swapchain image rather than rendering straight into it, so the
    // render path is identical with or without a window - what you see is what
    // the readback would have given you.
    bool present(std::string& error);
    bool initialized() const noexcept { return m_device != nullptr; }

    // Whether the surface has changed shape under the swapchain - a resize, or
    // a move between windowed and fullscreen. present() reports it here rather
    // than failing: the frame it could not show is one frame, whereas a failure
    // stops the runtime for good, and the host is the only thing that knows the
    // window's new size.
    bool display_out_of_date() const noexcept { return m_display_out_of_date; }

    // Rebuilds the swapchain for a surface that is now `width`x`height`, and
    // everything placed against it - the credit, the system page's copy region.
    // The host passes the window's size in PIXELS; where the surface reports its
    // own extent that wins, because the swapchain has to match the surface and
    // not what the window manager was asked for.
    bool resize_display(uint32_t width, uint32_t height, std::string& error);

    // The surface's current size, which is what everything laid over the frame
    // is placed against.
    uint32_t display_width() const noexcept;
    uint32_t display_height() const noexcept;

    // A page of the system's own UI, laid over the presented frame.
    //
    // Separate from the credit because it changes: the credit is uploaded once
    // and copied forever, whereas the achievement blade appears, scrolls and
    // goes away. `rgba` is tightly packed width*height*4 and is placed with its
    // top-left at (x, y) in the swapchain image; an empty vector takes the page
    // down. The buffer is rebuilt only when the pixels differ from last time,
    // so holding a static page open costs the same as showing nothing.
    //
    // `slot` picks which of the independent pages is being set. They exist
    // because two unrelated things want one at the same time - the achievement
    // blade and the frame-rate readout - and sharing a single page would mean
    // either could blank the other. Slot 0 is the blade, slot 1 the readout.
    static constexpr uint32_t kOverlaySlotPage = 0;
    static constexpr uint32_t kOverlaySlotRate = 1;
    void set_overlay_panel(uint32_t width, uint32_t height, int32_t x,
                           int32_t y, const std::vector<uint8_t>& rgba,
                           uint32_t slot = kOverlaySlotPage);

    // The cabinet surround: the artwork painted into the screen the picture
    // does not cover. `rgba` is tightly packed and is the size of the WHOLE
    // surface, so a coordinate in it is a coordinate in the swapchain image and
    // there is no second frame of reference to get wrong. Only the four
    // rectangles AROUND the presented picture are ever copied out of it; the
    // picture's own rectangle is never touched, which is what keeps this from
    // being able to disturb a single pixel the title rendered. An empty vector
    // takes the surround down and the flat border comes back.
    //
    // It goes to a DEVICE-LOCAL image rather than a host buffer, and that is a
    // measurement rather than a preference: the surround around a 1080p picture
    // on a 5120x1440 display is 26 MB, and copying that out of host memory
    // every present would be about a millisecond of DMA a frame for a picture
    // that changes perhaps twice a run. Uploaded once, it is a copy inside
    // video memory instead.
    void set_surround(uint32_t width, uint32_t height,
                      const std::vector<uint8_t>& rgba);

    // The one part of the surround that changes every frame: the audio meter.
    // Same shape as set_overlay_panel - a small bitmap placed at (x, y) in the
    // swapchain image - and kept separate from the surround for exactly that
    // reason, so a bar moving does not re-upload the artwork behind it.
    void set_meter(uint32_t width, uint32_t height, int32_t x, int32_t y,
                   const std::vector<uint8_t>& rgba);

    // The chosen device's name, for diagnostics.
    const std::string& device_name() const noexcept { return m_device_name; }

    // Persists the pipeline cache now. Safe to call repeatedly and on a device
    // that never made one. See the definition for why shutdown() alone is not
    // enough.
    void save_pipeline_cache();

    // Renders an offscreen `width`x`height` RGBA8 target cleared to `clear`
    // (four floats in 0..1), and reads it back into `out` as tightly-packed
    // RGBA bytes (width*height*4). The foundation the drawing path builds on.
    bool render_clear(uint32_t width, uint32_t height, const float clear[4],
                      std::vector<uint8_t>& out, std::string& error);

    // Renders a triangle-list draw into an offscreen target and reads it back.
    // `vertex_spirv`/`fragment_spirv` are the shader modules; `positions` holds
    // `vertex_count` clip-space vec2 positions (x, y interleaved). This is the
    // path a translated shader and a draw record flow through.
    bool render_draw(uint32_t width, uint32_t height, const float clear[4],
                     const std::vector<uint32_t>& vertex_spirv,
                     const std::vector<uint32_t>& fragment_spirv,
                     const std::vector<float>& positions, uint32_t vertex_count,
                     std::vector<uint8_t>& out, std::string& error);

    // One draw within a frame: its shaders and its clip-space vec2 positions.
    struct frame_draw {
        const std::vector<uint32_t>* vertex_spirv;
        const std::vector<uint32_t>* fragment_spirv;
        const std::vector<float>* positions;
        uint32_t vertex_count;
        // Standard src-alpha over dst blending, for translucent draws.
        bool blend = false;
        topology topo = topology::triangle_list;
    };

    // Renders a whole frame - clear once, then every draw into the same target -
    // and reads it back. This is the shape a command buffer's draw records take:
    // many draws accumulating into one image.
    bool render_frame(uint32_t width, uint32_t height, const float clear[4],
                      const std::vector<frame_draw>& draws,
                      std::vector<uint8_t>& out, std::string& error);

    // --- the general path, the shape a real draw actually has ---------------
    //
    // The simplified entry points above take clip-space positions, which is
    // enough to prove the spine but not to render a title: a console draw has
    // several attributes at arbitrary offsets inside a strided vertex, is
    // usually indexed, and depends on shader constants for its transform. This
    // is that shape.

    // One vertex buffer bound to a draw. `data` points at the vertex data in
    // host order - the caller is responsible for having undone the console's
    // byte order, because only it knows the fetch constant's swap mode.
    struct scene_binding {
        const void* data{nullptr};
        uint64_t size_bytes{0};
        uint32_t stride_bytes{0};
    };

    // One attribute within a bound vertex buffer, matching a translated
    // shader's vertex_input.
    struct scene_attribute {
        uint32_t location{0};
        uint32_t binding{0};
        uint32_t offset_bytes{0};
        uint8_t format{0}; // vertex_format, kept raw and mapped internally
    };

    // Where one of a draw's texture slots gets its pixels.
    //
    // A slot the fragment shader declares must have something bound - a
    // descriptor set written with fewer descriptors than its layout declares is
    // invalid - so a declared slot with no entry here falls back to the
    // placeholder.
    struct scene_texture {
        uint32_t slot{0};
        // A pass of this frame whose result was resolved to the address this
        // slot samples. When set, this slot samples THAT pass's image and the
        // fields below are ignored: the pixels are already on the device, in
        // host layout, and there is nothing in guest memory to read. This is
        // what makes an effect built out of passes - a glow - possible at all.
        //
        // The pass may come LATER in the frame than the draw sampling it, and
        // that is not a mistake: its image then still holds the previous
        // frame's result, which is exactly what guest memory would hold on the
        // console, and a title sampling its own last frame - a trail, a
        // feedback buffer - is asking for precisely that. -1 is "not resolved".
        int resolved_pass{-1};
        // The pass's OWN previous result, when this slot samples the very
        // address its own pass resolves to. That is a title reading the frame it
        // is in the middle of building on top of - a trail, a decay buffer, the
        // whole basis of a feedback effect - and it cannot be served by
        // `resolved_pass`, because a render pass may not sample the image it is
        // writing. It is served instead by a copy taken after the pass resolved
        // LAST frame, which is exactly what the console's memory would still
        // hold. Without it the sample falls through to guest memory, which a
        // resolve never wrote, and the effect accumulates onto nothing: the
        // layer is rebuilt from black every frame and only ever shows the one
        // frame's worth of geometry drawn directly into it.
        bool own_history{false};
        // Identifies these pixels: where in guest memory they came from and how
        // they were unpacked. Uploading a texture costs far more than a frame's
        // drawing, and a title rebinds the same handful every frame, so an
        // upload is skipped when this matches one already held AND the pixels
        // compare equal. Both checks matter: the key alone would miss a title
        // rewriting a texture in place, and the comparison alone would mean
        // reading every uploaded texture back.
        uint64_t key{0};
        const uint8_t* rgba{nullptr}; // width*height*4, alive for this call
        uint32_t width{0};
        uint32_t height{0};
    };

    struct scene_draw {
        const std::vector<uint32_t>* vertex_spirv{nullptr};
        const std::vector<uint32_t>* fragment_spirv{nullptr};
        // An optional geometry stage between the two. A Xenos rectangle list
        // needs one: its fourth vertex is a function of the other three AFTER
        // the vertex shader, so nothing earlier can produce it. Null means the
        // vertex shader feeds the rasteriser directly, as most draws do.
        const std::vector<uint32_t>* geometry_spirv{nullptr};
        std::vector<scene_binding> bindings;
        std::vector<scene_attribute> attributes;
        // Indices to draw with, or empty for a sequential draw.
        std::vector<uint32_t> indices;
        uint32_t vertex_count{0};
        // Added to every index, or to the first vertex of a non-indexed draw.
        uint32_t first_vertex{0};
        // The float constant bank, 256 vec4s. Empty binds a zeroed buffer -
        // which is not the same as binding nothing, because the shader reads
        // it unconditionally.
        std::vector<float> constants;
        // The boolean and loop constant bank the shader's CONTROL FLOW reads:
        // eight dwords of boolean bits, then 32 loop constants. Empty binds a
        // zeroed buffer, which is a shader whose every `if (b)` is false and
        // whose every loop runs zero times - defined, and visibly wrong, where
        // an unbound descriptor is undefined.
        std::vector<uint32_t> bool_loop_constants;
        // The texture fetch slots the fragment shader samples, from the
        // translator. Every one of them is bound: a set bound with fewer
        // descriptors than the shader declares is invalid.
        std::vector<uint32_t> texture_slots;
        // How each of those slots is sampled, in the same order - the title's
        // own filtering and addressing, out of the fetch constant and the
        // shader's per-instruction override. Shorter than `texture_slots`
        // (including empty) leaves the remaining slots on a plain linear
        // sampler, which is what the whole runtime used before this was
        // decoded.
        //
        // It is not cosmetic. A title that draws its UI one texel to one pixel
        // and asks for point sampling gets a soft blur over its text if this is
        // ignored - and nothing reports an error, because bilinear filtering of
        // a texture is a perfectly valid thing to have done.
        std::vector<sampler_state> texture_samplers;
        // The pixels for those slots. A slot named here samples the texture it
        // describes; one that is not samples the placeholder.
        std::vector<scene_texture> textures;
        // How this draw combines with what is already in the target, as the
        // console's own factors and operations (xenos BlendFactor / BlendOp
        // values, kept raw and mapped internally the way a vertex format is).
        // Assuming source-alpha-over-destination instead is what makes an
        // additively composited effect - a glow - draw nothing at all.
        struct scene_blend {
            bool enabled{false};
            uint8_t color_src{1}, color_dst{0}, color_op{0};
            uint8_t alpha_src{1}, alpha_dst{0}, alpha_op{0};
            bool operator<(const scene_blend& other) const {
                return std::tie(enabled, color_src, color_dst, color_op,
                                alpha_src, alpha_dst, alpha_op) <
                       std::tie(other.enabled, other.color_src, other.color_dst,
                                other.color_op, other.alpha_src,
                                other.alpha_dst, other.alpha_op);
            }
        };
        scene_blend blend;
        topology topo{topology::triangle_list};
        // Depth test state for this draw. When test_enabled is false the
        // depth-stencil state is left at the Vulkan defaults: depth testing off,
        // depth writing off, which is exactly what the console does when
        // PA_SC_MODE_CNTL's z-enable is clear or RB_DEPTHCONTROL says off.
        bool depth_test_enabled{false};
        bool depth_write_enabled{false};
        uint8_t depth_compare_op{0}; // compare_function, kept raw like blend
        // Which faces the rasteriser throws away, and which winding is the
        // front - already resolved to the HOST's sense, so the renderer does
        // not have to know whether the vertex stage mirrored anything.
        // 0 none, 1 front, 2 back, 3 both.
        uint8_t cull_mode{0};
        bool front_face_ccw{true};
        // Depth-only guest draws still run, but must preserve the colour target.
        bool color_write_enabled{true};
    };

    // One pass of a frame: the run of draws that share a render target, at that
    // target's own size.
    //
    // A frame is not one image. A title renders it as several passes into
    // different surfaces at different sizes, and the interesting part is that
    // they are not independent: a pass RESOLVES its result to an address, and a
    // later pass SAMPLES that address. That is how a glow is built - render
    // small, resolve, sample it back magnified over the scene - so rendering
    // only the pass that reaches the screen loses the effect entirely.
    struct scene_pass {
        uint32_t width{0};
        uint32_t height{0};
        std::vector<scene_draw> draws;
        // Where this pass copies its result when it finishes, or zero. Which
        // pass a sampling draw is pointed at is decided by the caller, which
        // knows the whole frame's resolve order; this is here so a pass can say
        // what it is for.
        uint32_t resolve_address{0};
        // The pass whose result is already in this pass's target when it starts,
        // or -1 to start from the clear colour.
        //
        // EDRAM is not emptied by a resolve. A title that copies one surface out
        // to several destinations, or that resolves and then carries on drawing
        // into the same surface, expects every pixel it drew before the copy to
        // still be there - so those later passes begin from a copy of this one
        // rather than from black. Naming the source rather than sharing its
        // image keeps each pass a snapshot: what a later draw samples for an
        // address is what had been drawn when that address was resolved, not
        // whatever the surface ended the frame holding.
        int continues_pass{-1};
        // Whether this is the pass whose pixels are the frame. Exactly one pass
        // should say so; its target is the one read back and presented.
        bool presented{false};
        // Whether the pass that continues this one left the depth buffer
        // intact, so loading rather than clearing it is more faithful to the
        // console. Only meaningful when has_depth is true.
        bool continues_depth{false};
    };

    // Which frame of the title's run this is, so a per-pass capture can name
    // one. WHITTY_PASS_PPM writes every pass of every frame, and on a title
    // heavy enough to be worth capturing that is several readbacks and a file
    // per pass, per frame: Hydro Thunder drops to under two frames a second,
    // so a minute of running never reaches the part of the title the capture
    // was for. WHITTY_PASS_PPM_FRAME=N narrows it to one frame, which is what
    // the measurement always wanted - the same shape WHITTY_GPU_DUMP already
    // has. Left at zero the capture behaves as before.
    //
    // The line each pass prints carries its ALPHA mean and peak as well as its
    // brightness, and that is not decoration: a pass sampled by a later draw
    // under the ordinary SRC_ALPHA blend contributes its colour multiplied by
    // that number, so a perfect picture with an alpha of zero composites to
    // nothing and a line reporting brightness alone says the picture is there
    // and cannot say why none of it arrives. The PPM carries only RGB, so
    // without it the alpha channel is unmeasurable from outside the process -
    // and it was `alpha mean 0.5529` against a 0.2170% one-pixel border that
    // identified Ridge Racer 6's full-screen wipe to four figures.
    void set_frame_number(uint64_t frame) noexcept { m_frame_number = frame; }

    // Where the SUBMIT half of a frame went, in nanoseconds.
    //
    // frame_stats already splits a frame into gathering and submitting, and
    // that split is where the measurement used to stop: "6.7 seconds building
    // and submitting" names a half, not a cause. Every part below was a
    // plausible candidate for it and three of them turned out to cost nothing,
    // which is not something reading the code can tell you - a memcmp over a
    // frame's worth of texels and a pipeline compile look equally alarming on
    // the page and differ by two orders of magnitude in fact.
    //
    // Reset at the top of every render_passes, so this describes ONE frame; the
    // caller sums it over the run. Counts sit beside times because a cost is
    // only actionable as a rate: 500 ms of pipeline build is a catastrophe
    // across 20 draws and a bargain across 400 first-time pipelines.
    struct submit_profile {
        uint64_t pipeline_ns{0}; // vkCreateGraphicsPipelines, on a cache miss
        uint32_t pipelines_built{0};
        uint32_t pipelines_reused{0};
        uint64_t module_ns{0}; // vkCreateShaderModule, on a cache miss
        uint32_t modules_built{0};
        // Deciding whether an already-uploaded texture still matches the pixels
        // the caller has now - a memcmp over the whole image, per bound slot,
        // per draw.
        uint64_t texture_compare_ns{0};
        uint64_t texture_compare_bytes{0};
        uint64_t texture_upload_ns{0}; // uploading one that changed, or is new
        uint32_t textures_uploaded{0};
        uint32_t textures_reused{0};
        uint64_t descriptor_ns{0}; // allocating and writing descriptor sets
        uint64_t arena_ns{0};      // staging every buffer into the frame arena
        uint64_t arena_bytes{0};
        uint64_t record_ns{0};    // recording the command buffer
        uint64_t gpu_wait_ns{0};  // vkQueueSubmit and waiting for it
        // Of that span, how long the GPU was executing - measured on the device
        // by a timestamp at each end of the command buffer, not inferred. The
        // difference between the two is submission and fence latency, which the
        // CPU spends idle and which more frames in flight would hide; the
        // execution time itself is work, and only shrinks by asking for less.
        // Zero where the device has no timestamp support.
        uint64_t gpu_exec_ns{0};
        uint64_t readback_ns{0};  // mapping the result out
        uint64_t target_ns{0};    // creating render targets and the arena
    };
    const submit_profile& profile() const noexcept { return m_profile; }

    // Renders a whole frame - every pass, in order, each into its own target -
    // and reads the presented pass back as RGBA8.
    //
    // Pipelines, shader modules, descriptor layouts and the render targets are
    // cached across calls, keyed by what actually varies, because rebuilding
    // them costs more than the drawing does. `out` may be null to skip the
    // readback entirely - it is the single most expensive part of a frame
    // nothing looks at.
    bool render_passes(const std::vector<scene_pass>& passes,
                       const float clear[4], std::vector<uint8_t>* out,
                       std::string& error);

    // Renders one pass' worth of draws, as the whole frame. The shape most
    // callers and every test want.
    bool render_scene(uint32_t width, uint32_t height, const float clear[4],
                      const std::vector<scene_draw>& draws,
                      std::vector<uint8_t>* out, std::string& error);

    // Convenience overload for callers that always want the pixels.
    bool render_scene(uint32_t width, uint32_t height, const float clear[4],
                      const std::vector<scene_draw>& draws,
                      std::vector<uint8_t>& out, std::string& error) {
        return render_scene(width, height, clear, draws, &out, error);
    }

    // Renders a single textured triangle-list draw: the fragment shader samples
    // `texture_rgba` (tex_width x tex_height, RGBA8) bound at descriptor set 0,
    // binding 0. Validates the whole texture path - upload, sampler, descriptor
    // binding, sampling.
    bool render_textured(uint32_t width, uint32_t height, const float clear[4],
                         const std::vector<uint32_t>& vertex_spirv,
                         const std::vector<uint32_t>& fragment_spirv,
                         const std::vector<float>& positions,
                         uint32_t vertex_count,
                         const std::vector<uint8_t>& texture_rgba,
                         uint32_t tex_width, uint32_t tex_height,
                         std::vector<uint8_t>& out, std::string& error);

private:
    // Opaque Vulkan handles kept as void* so this header pulls in no Vulkan
    // headers; the .cpp casts them back.
    void* m_instance{nullptr};
    // The validation layer's message sink, when it was asked for.
    void* m_debug_messenger{nullptr};
    void* m_physical_device{nullptr};
    void* m_device{nullptr};
    void* m_queue{nullptr};
    void* m_command_pool{nullptr};
    uint32_t m_queue_family{0};
    std::string m_device_name;
    bool m_geometry_shaders{false};
    // Presentation, all opaque for the same reason as the handles above.
    void* m_surface{nullptr};
    void* m_swapchain{nullptr};
    void* m_display_state{nullptr};
    // Set when the surface stopped matching the swapchain, cleared by
    // resize_display(). A flag rather than a return code because the frame that
    // discovers it is already half-submitted and there is nothing useful the
    // caller can do about that frame.
    bool m_display_out_of_date{false};
    // Objects render_scene reuses between frames. Opaque here so this header
    // stays free of Vulkan; owned and destroyed by shutdown().
    void* m_scene_cache{nullptr};
    // A VkPipelineCache handed to every vkCreateGraphicsPipelines call, seeded
    // from disk at startup and written back at shutdown.
    //
    // It cannot change a picture - the pipeline it produces is the same one -
    // and it is here for one measured reason. Geometry Wars' first rendered
    // frame costs 63 ms, of which 52 ms is building eight pipelines; on this
    // desktop that is a single blip, and on Adreno and Mali, which compile far
    // more slowly, it is the hitch a player sees on the first draw of every
    // launch. Persisting it moves that cost to the first run only.
    void* m_pipeline_cache{nullptr};
    std::string m_pipeline_cache_path;
    // The caller's frame counter, used only to name a captured frame.
    uint64_t m_frame_number{0};
    // The last frame's submit breakdown. See submit_profile.
    submit_profile m_profile{};
};

} // namespace whitty_xenon::gpu
