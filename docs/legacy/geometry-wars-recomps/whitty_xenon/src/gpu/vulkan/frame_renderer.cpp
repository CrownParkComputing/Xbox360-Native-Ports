#include "whitty_xenon/gpu/vulkan/frame_renderer.h"

#include "whitty_xenon/gpu/primitive_conversion.h"
#include "whitty_xenon/gpu/rectangle_expansion.h"
#include "whitty_xenon/gpu/render_target.h"
#include "whitty_xenon/gpu/shader_program.h"
#include "whitty_xenon/gpu/shader_translator.h"
#include "whitty_xenon/gpu/spirv_builder.h"
#include "whitty_xenon/gpu/texture_read.h"
#include "whitty_xenon/gpu/vertex_format.h"

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <chrono>
#include <deque>
#include <set>
#include <tuple>

namespace whitty_xenon::gpu {
namespace {

// WHITTY_DRAW_ACCOUNTING=1 prints, per rendered frame, every draw the renderer
// declined and why.
//
// Opt-in rather than always on because render() runs once per presented frame
// in a windowed run and this would be sixty lines a second there, while a
// headless capture renders exactly one frame and wants all of it. Read here
// rather than passed in because this is a diagnostic of the GPU library and
// nothing above it has to know the switch exists - the same arrangement
// WHITTY_TRACE_FENCE uses in the command processor.
bool draw_accounting_enabled() {
    static const bool on = [] {
        const char* value = std::getenv("WHITTY_DRAW_ACCOUNTING");
        return value != nullptr && value[0] == '1';
    }();
    return on;
}

// One line per non-zero reason, in the same shape the frame report already uses
// for skipped texture fetches: a count with a reason attached, and silence for a
// reason that did not occur.
//
// The last line is the one to read. Every reason above it is a statement that a
// draw was declined deliberately; `declined_unaccounted` is the statement that
// one was not, and it is printed even at zero because the value of an identity
// is that it was checked.
void report_declined_draws(const frame_stats& stats) {
    if (!draw_accounting_enabled()) return;
    const uint32_t declined = stats.draws_submitted > stats.draws_rendered
                                  ? stats.draws_submitted - stats.draws_rendered
                                  : 0;
    // The pass count is on this line because it is what says WHICH frame is
    // being looked at on a title whose frame N is not the same picture twice.
    // Ridge Racer 6's menu is 2-3 passes and its race is sixteen; without it, a
    // scan over thousands of frames cannot say whether the interesting one was
    // ever in the sample.
    std::printf("  [gpu] draw accounting: %u submitted, %u rendered, %u "
                "declined, %u pass(es)\n",
                stats.draws_submitted, stats.draws_rendered, declined,
                stats.passes);
    const auto line = [](uint32_t count, const char* why) {
        if (count != 0) std::printf("          %6u %s\n", count, why);
    };
    line(stats.resolve_copies,
         "a copy out of EDRAM, not geometry (RB_MODECONTROL mode 6) - "
         "CORRECT to skip");
    line(stats.no_pass, "belonged to no pass");
    line(stats.no_shader, "had no vertex or pixel shader bound");
    line(stats.shader_parse_failed, "had a shader that would not translate");
    line(stats.unsupported_primitive, "used a primitive with no host form");
    line(stats.no_vertex_buffer, "named no usable vertex buffer");
    std::printf("          %6u UNACCOUNTED%s\n", stats.declined_unaccounted,
                stats.declined_unaccounted == 0
                    ? " (every declined draw has a reason)"
                    : " - a skip with no reason beside it");
    // The same question one layer down: not "was the draw made" but "did it
    // sample what it asked for". A slot served from guest memory at an address
    // inside a surface this frame resolved to reads ZERO, because no resolve is
    // written back to guest memory here - and a full-screen composite reading
    // zero paints black over a finished scene with nothing in any other count
    // to say so.
    std::printf("  [gpu] texture slots: %u from a pass's resolved output "
                "(%u of them history), %u from guest memory, of which %u "
                "%s\n",
                stats.resolved_sources, stats.feedback_sources,
                stats.textures_from_guest_memory, stats.resolve_reads_missed,
                stats.resolve_reads_missed == 0
                    ? "INSIDE A RESOLVED SURFACE (none - every read of a "
                      "resolved surface was served from its pass)"
                    : "INSIDE A RESOLVED SURFACE - those read zero; "
                      "WHITTY_TRACE_RESOLVE_READS=1 names them");
}

// WHITTY_TRACE_RESOLVE_READS=1 names every texture slot the frame binds, the
// address it fetches from, and which pass's resolved output served it - or that
// none did. See the site in render() for why an unserved one is not a neutral
// outcome.
bool trace_resolve_reads() {
    static const bool on = [] {
        const char* value = std::getenv("WHITTY_TRACE_RESOLVE_READS");
        return value != nullptr && value[0] == '1';
    }();
    return on;
}

// Adds its own lifetime to a counter, in nanoseconds.
//
// The reading costs around 25ns, and the gathering loop takes a few hundred of
// them per frame - single-digit microseconds against a frame that was taking
// fifteen thousand. Paying that permanently is worth it: the two-way split
// between gathering and submitting said only which HALF of the frame was
// expensive, and every attempt to guess which part of the gathering half it was
// has to be checked against a measurement anyway.
class scoped_timer {
public:
    explicit scoped_timer(uint64_t& sink) noexcept
        : m_sink(&sink), m_started(std::chrono::steady_clock::now()) {}
    scoped_timer(const scoped_timer&) = delete;
    scoped_timer& operator=(const scoped_timer&) = delete;
    ~scoped_timer() {
        *m_sink += static_cast<uint64_t>(
            std::chrono::duration_cast<std::chrono::nanoseconds>(
                std::chrono::steady_clock::now() - m_started)
                .count());
    }

private:
    uint64_t* m_sink;
    std::chrono::steady_clock::time_point m_started;
};

// How many temporary registers a translated shader is given. The count is in
// the shader's own SQ_PROGRAM_CNTL, but over-allocating costs only unused
// SPIR-V variables, where under-allocating silently drops instructions that
// address a register past the end.
constexpr uint32_t kTempRegisters = 64;

// Copies `size_bytes` of vertex data out of guest memory, undoing the console's
// byte order as the GPU's fetch would. The swap mode comes from the fetch
// constant; for the 32-bit formats a title actually uses it is a whole-dword
// swap, and getting it wrong turns every coordinate into a denormal or an
// enormous number rather than failing.
std::vector<uint8_t> read_vertex_buffer(guest_memory& memory, uint32_t address,
                                        uint32_t size_bytes, endian swap) {
    std::vector<uint8_t> data(size_bytes);
    const void* host = memory.host(address, size_bytes);
    if (host == nullptr) return {};
    std::memcpy(data.data(), host, size_bytes);
    // Swap whole words at a time. A byte-at-a-time swap of a megabyte-scale
    // vertex buffer, every frame, costs more than everything else the frame
    // does put together.
    uint32_t* words = reinterpret_cast<uint32_t*>(data.data());
    const uint32_t word_count = size_bytes / 4;
    switch (swap) {
        case endian::swap_8in32:
            for (uint32_t i = 0; i < word_count; ++i)
                words[i] = __builtin_bswap32(words[i]);
            break;
        case endian::swap_8in16:
            for (uint32_t i = 0; i + 1 < size_bytes; i += 2)
                std::swap(data[i + 0], data[i + 1]);
            break;
        case endian::swap_16in32:
            for (uint32_t i = 0; i < word_count; ++i)
                words[i] = (words[i] >> 16) | (words[i] << 16);
            break;
        case endian::none:
            break;
    }
    return data;
}

// What identifies an uploaded texture, so the backend can skip re-uploading
// one a title rebinds unchanged.
//
// A hash rather than a packed field, because the identity is wider than 64 bits
// once the channel swizzle is part of it - the same memory sampled with two
// different swizzles is two different images. A collision would cost an upload,
// never a wrong picture: the backend compares the pixels before reusing an
// image, so a key that matches the wrong texture simply replaces it.
// WHITTY_TRACE_PLACEHOLDER=1 also names the textures that DID decode, so a run
// reports the whole texture set rather than only its failures.
bool trace_textures() {
    static const bool on = std::getenv("WHITTY_TRACE_PLACEHOLDER") != nullptr;
    return on;
}

// WHITTY_CPU_RECTANGLES=1 completes rectangle lists on the CPU even where the
// device has a geometry stage.
//
// It exists to be a measurement, not a preference. The two paths are supposed
// to produce the same picture, and the only way to know they do is to render a
// pinned frame both ways and compare the md5 - which needs the CPU path
// reachable on the machine the reference was taken on. On a device with no
// geometry stage the CPU path is taken regardless and this changes nothing.
bool cpu_rectangles() {
    static const bool on = [] {
        const char* set = std::getenv("WHITTY_CPU_RECTANGLES");
        return set != nullptr && set[0] == '1';
    }();
    return on;
}

// WHITTY_TRACE_CULL=1 prints each draw's PA_SU_SC_MODE_CNTL and what it was
// decoded as. A wrong cull polarity is nearly invisible - a closed opaque model
// looks the same whichever side survives - so the register has to be read out
// rather than assumed.
bool trace_cull() {
    static const bool on = [] {
        const char* set = std::getenv("WHITTY_TRACE_CULL");
        return set != nullptr && set[0] == '1';
    }();
    return on;
}

// The same fingerprint the command processor takes when it records a draw -
// the first 64 bytes of the buffer. Kept here rather than shared so the two
// layers do not have to know about each other's headers; the definition is one
// loop and the two must agree, which the counter it feeds would show.
uint64_t fingerprint_vertex_bytes(const guest_memory& memory, uint32_t address,
                                  uint32_t size_bytes) {
    const uint32_t span = size_bytes < 64 ? size_bytes : 64;
    uint64_t hash = 1469598103934665603ull;
    for (uint32_t i = 0; i < span; ++i) {
        hash ^= memory.read_u8(address + i);
        hash *= 1099511628211ull;
    }
    return hash;
}

// The inclusive draw range WHITTY_DRAW_FROM / WHITTY_DRAW_TO asks for, or the
// whole frame when neither is set.
std::size_t draw_range_first() {
    static const std::size_t first = [] {
        const char* set = std::getenv("WHITTY_DRAW_FROM");
        return set != nullptr ? std::strtoull(set, nullptr, 10) : 0ull;
    }();
    return first;
}

std::size_t draw_range_last() {
    static const std::size_t last = [] {
        const char* set = std::getenv("WHITTY_DRAW_TO");
        return set != nullptr ? std::strtoull(set, nullptr, 10)
                              : ~0ull;
    }();
    return last;
}

// WHITTY_NO_CULL=1 restores the old behaviour of drawing every face, so a
// picture with culling can be compared against one without it from the same
// build and the same frame.
bool no_cull() {
    static const bool on = [] {
        const char* set = std::getenv("WHITTY_NO_CULL");
        return set != nullptr && set[0] == '1';
    }();
    return on;
}

// WHITTY_DEBUG_TINT=1 - see shader_translator::emit_debug_tint. Read once and
// baked into every shader this process ever compiles: it never changes for
// the run, so it does not belong in the shader cache key.
bool debug_tint_enabled() {
    static const bool on = [] {
        const char* set = std::getenv("WHITTY_DEBUG_TINT");
        return set != nullptr && set[0] == '1';
    }();
    return on;
}

// WHITTY_FLIP_FRONT_FACE=1 inverts the host winding, so which polarity is right
// is settled by looking at two pictures instead of by reasoning about how many
// mirrors the pipeline applies.
bool flip_front_face() {
    static const bool on = [] {
        const char* set = std::getenv("WHITTY_FLIP_FRONT_FACE");
        return set != nullptr && set[0] == '1';
    }();
    return on;
}

// Where WHITTY_TEXTURE_DUMP asks decoded textures to be written, or null.
const char* texture_dump_dir() {
    static const char* dir = std::getenv("WHITTY_TEXTURE_DUMP");
    return dir;
}

uint64_t texture_key(const texture_fetch_constant& fetch) {
    const uint32_t fields[6] = {fetch.base_address,
                                fetch.format,
                                fetch.width,
                                fetch.height,
                                fetch.swizzle,
                                (fetch.tiled ? 2u : 0u) |
                                    static_cast<uint32_t>(fetch.endianness)};
    uint64_t hash = 0xCBF29CE484222325ull; // FNV-1a
    for (uint32_t field : fields) {
        hash ^= field;
        hash *= 0x100000001B3ull;
    }
    // Zero is the caller's "nothing here", so it must not be a real key.
    return hash != 0 ? hash : 1;
}

// The whole float constant bank, read out of the draw's own register snapshot.
// Both stages' halves: which half a shader reads is decided by the index it
// adds, not by which buffer is bound.
std::vector<float> read_constants(const register_file& regs) {
    std::vector<float> constants(kFloatConstantCount * 4, 0.0f);
    for (uint32_t i = 0; i < kFloatConstantCount * 4; ++i)
        constants[i] = regs.get_float(reg::shader_constant_000_x + i);
    return constants;
}

// The two small banks a shader's control flow reads: the boolean constants a
// conditional exec or jump branches on, then the loop constants that say how
// many times a loop runs and how its aL steps.
//
// Read per draw for the same reason the float bank is: a title sets these
// between draws, so the same shader takes a different branch and runs a
// different number of iterations from one draw to the next. Folding them into
// the shader at translation time would make one module per combination.
std::vector<uint32_t> read_bool_loop_constants(const register_file& regs) {
    std::vector<uint32_t> values(kBoolLoopDwords, 0);
    for (uint32_t i = 0; i < kBoolConstantDwords; ++i)
        values[i] = regs.get(reg::shader_constant_bool_000_031 + i);
    for (uint32_t i = 0; i < kLoopConstantDwords; ++i)
        values[kBoolConstantDwords + i] =
            regs.get(reg::shader_constant_loop_00 + i);
    return values;
}

} // namespace

bool frame_renderer::shader_key::operator<(const shader_key& other) const {
    if (index != other.index) return index < other.index;
    if (viewport < other.viewport) return true;
    if (other.viewport < viewport) return false;
    if (interpolators != other.interpolators)
        return interpolators < other.interpolators;
    if (param_gen != other.param_gen) return param_gen < other.param_gen;
    if (param_gen_point != other.param_gen_point)
        return param_gen_point < other.param_gen_point;
    return alpha_test < other.alpha_test;
}

const frame_renderer::translated_shader* frame_renderer::translate(
    const std::vector<shader_upload>& shaders, int index,
    const viewport_transform& viewport,
    const std::vector<uint32_t>& interpolators, frame_stats& stats,
    int param_gen, bool param_gen_point, const alpha_test_state& alpha_test) {
    const scoped_timer timer(stats.shader_ns);
    if (index < 0 || static_cast<std::size_t>(index) >= shaders.size())
        return nullptr;
    const shader_key key{index, viewport, interpolators, param_gen,
                         param_gen_point, alpha_test};
    const auto cached = m_cache.find(key);
    if (cached != m_cache.end()) {
        ++stats.shader_cache_hits;
        return cached->second.valid ? &cached->second : nullptr;
    }
    ++stats.shader_cache_misses;

    const shader_upload& upload = shaders[static_cast<std::size_t>(index)];
    translated_shader entry;
    shader_program program;
    std::string parse_error;
    if (parse_shader(upload.microcode.data(), upload.microcode.size(), program,
                     parse_error)) {
        shader_translator translator;
        shader_translator::options opts;
        opts.type = upload.kind == shader_kind::vertex ? shader_type::vertex
                                                       : shader_type::pixel;
        opts.viewport = viewport;
        opts.interpolators = interpolators;
        opts.param_gen_interpolator = param_gen;
        opts.param_gen_point = param_gen_point;
        opts.alpha_test = alpha_test.enabled;
        opts.alpha_test_func = static_cast<uint8_t>(alpha_test.func);
        opts.alpha_test_ref = alpha_test.reference;
        opts.debug_tint = debug_tint_enabled();
        entry.spirv = translator.translate(program, kTempRegisters, opts);
        entry.inputs = translator.vertex_inputs();
        entry.texture_slots = translator.texture_slots();
        entry.texture_filters = translator.texture_filters();
        entry.interpolators = translator.interpolators();
        entry.writes_point_size = translator.writes_point_size();
        entry.valid = !entry.spirv.empty();
        entry.remaps_fetch_index =
            opts.type == shader_type::vertex && !entry.inputs.empty() &&
            !vertex_fetch_indexes_by_vertex_index(program);
        // Kept for every vertex shader now, not only a remapping one. The
        // rectangle expansion has to ask whether this shader's exports are an
        // affine function of its fetches, and that question is only answerable
        // from the microcode - the translated module has already turned it into
        // SPIR-V. Keeping it only for remapping shaders made the analysis
        // silently see an EMPTY program for every other shader and report "no
        // position export", which is the correct answer to the wrong question.
        if (opts.type == shader_type::vertex) entry.program = program;
        // WHITTY_SPIRV_DIR also gets what the RENDERER built, which is not the
        // same module as translating the microcode on its own: a pixel shader is
        // translated against its vertex shader's interpolators and against the
        // generated-parameter register, and without those it has no inputs at
        // all - every register reads zero and every sample lands on the
        // texture's corner texel. Disassembling the standalone module and
        // concluding the shader samples nothing is a mistake this file can
        // prevent, so the real one is written alongside it.
        if (const char* dir = std::getenv("WHITTY_SPIRV_DIR");
            dir != nullptr && entry.valid) {
            std::string name = std::string(dir) + "/used_" +
                               std::to_string(index) +
                               (opts.type == shader_type::vertex ? "_vertex"
                                                                 : "_pixel") +
                               "_i";
            for (uint32_t i : interpolators) name += std::to_string(i) + ".";
            if (param_gen >= 0)
                name += "pg" + std::to_string(param_gen) +
                        (param_gen_point ? "p" : "");
            name += ".spv";
            if (std::FILE* file = std::fopen(name.c_str(), "wb")) {
                std::fwrite(entry.spirv.data(), 4, entry.spirv.size(), file);
                std::fclose(file);
            }
        }
    }
    const auto inserted = m_cache.emplace(key, std::move(entry));
    return inserted.first->second.valid ? &inserted.first->second : nullptr;
}

const std::vector<uint32_t>& frame_renderer::solid_fragment_shader() {
    if (!m_solid_fragment.empty()) return m_solid_fragment;
    // The translator builds pixel shaders that export colour 0, so the
    // simplest way to get one that writes a constant is to hand it a shader
    // that exports a constant: max(c[0], c[0]) with the constant bank zeroed
    // would give black, so the colour comes from a literal instead. Building
    // it directly is shorter and has no dependence on the constant upload.
    spirv_builder b;
    const uint32_t main_id = b.allocate_id();
    const uint32_t label = b.allocate_id();
    const uint32_t out_color = b.allocate_id();

    b.emit(spirv_section::capabilities, spv::OpCapability,
           {spv::CapabilityShader});
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

    const uint32_t void_type = b.type_void();
    const uint32_t fn_type = b.type_function(void_type);
    const uint32_t float_type = b.type_float();
    const uint32_t vec4 = b.type_vector(float_type, 4);
    const uint32_t out_ptr = b.type_pointer(spv::StorageClassOutput, vec4);
    b.emit(spirv_section::types, spv::OpVariable,
           {out_ptr, out_color, spv::StorageClassOutput});
    const uint32_t colour = b.constant_composite(
        vec4, {b.constant_float(0.2f), b.constant_float(1.0f),
               b.constant_float(0.4f), b.constant_float(1.0f)});
    b.emit(spirv_section::functions, spv::OpFunction,
           {void_type, main_id, spv::FunctionControlNone, fn_type});
    b.emit(spirv_section::functions, spv::OpLabel, {label});
    b.emit(spirv_section::functions, spv::OpStore, {out_color, colour});
    b.emit(spirv_section::functions, spv::OpReturn, {});
    b.emit(spirv_section::functions, spv::OpFunctionEnd, {});
    m_solid_fragment = b.assemble();
    return m_solid_fragment;
}

const std::vector<uint32_t>* frame_renderer::rectangle_geometry_shader(
    const std::vector<uint32_t>& interpolators) {
    // An optional Vulkan feature, so the answer can legitimately be "there is
    // no geometry stage on this device" - in which case the caller counts the
    // draw as approximate rather than quietly drawing half of it.
    if (!m_backend->supports_geometry_shaders()) return nullptr;
    const auto cached = m_rectangle_geometry.find(interpolators);
    if (cached != m_rectangle_geometry.end())
        return cached->second.empty() ? nullptr : &cached->second;
    const auto inserted = m_rectangle_geometry.emplace(
        interpolators, build_rectangle_geometry_shader(interpolators));
    return inserted.first->second.empty() ? nullptr : &inserted.first->second;
}

const std::vector<uint32_t>* frame_renderer::point_geometry_shader(
    const std::vector<uint32_t>& interpolators,
    const point_sprite_params& params) {
    if (!m_backend->supports_geometry_shaders()) return nullptr;
    const auto key = std::make_pair(interpolators, params);
    const auto cached = m_point_geometry.find(key);
    if (cached != m_point_geometry.end())
        return cached->second.empty() ? nullptr : &cached->second;
    const auto inserted = m_point_geometry.emplace(
        key, build_point_geometry_shader(interpolators, params));
    return inserted.first->second.empty() ? nullptr : &inserted.first->second;
}

bool frame_renderer::render(const std::vector<draw_record>& draws,
                            const std::vector<shader_upload>& shaders,
                            uint32_t width, uint32_t height,
                            const float clear[4], std::vector<uint8_t>& out,
                            frame_stats& stats, std::string& error) {
    stats = frame_stats{};
    stats.draws_submitted = static_cast<uint32_t>(draws.size());

    // A new frame, before anything is handed a pointer into the texture cache.
    // That is the one moment nothing holds one, and so the only moment an entry
    // may be dropped.
    m_textures.begin_frame();
    const uint64_t hits_before = m_textures.hits();
    const uint64_t misses_before = m_textures.misses();
    const uint64_t decoded_before = m_textures.decoded_texels();

    // The SPIR-V has to outlive the scene_draw list, which only points at it.
    std::vector<std::vector<uint8_t>> vertex_storage;
    vertex_storage.reserve(draws.size() * 2);
    // Vertex buffers already read out of guest memory THIS frame. The rule and
    // the reason it is keyed the way it is are on vertex_buffer_reuse itself;
    // the short version is that a title binds one large buffer and draws many
    // ranges out of it, and that the length a draw happens to reach must not be
    // part of what identifies the buffer.
    //
    // Only the ungathered case is recorded here. A shader that remaps its fetch
    // index rewrites the buffer into that draw's own vertex order, which is a
    // different result from the same guest bytes.
    vertex_buffer_reuse vertex_reuse;
    uint32_t vertex_reads = 0;
    uint32_t vertex_rereads_avoided = 0;
    // How many of the vertex buffers read here no longer hold what they held
    // when the draw that uses them was recorded. See draw_record::fingerprints.
    uint32_t vertex_buffers_stale = 0;
    uint32_t vertex_buffers_checked = 0;
    // How many draws WHITTY_DRAW_FROM/TO held back this frame. Reported so the
    // filter can be trusted: a range that names nothing must leave NOTHING, and
    // a harness whose negative control still draws the picture is measuring
    // something other than what it claims to.
    uint32_t draws_outside_range = 0;

    // Split the frame into passes. A pass is a run of draws sharing a render
    // target, and a frame is several of them at different sizes: a title
    // renders small, copies the result out of EDRAM to an address, and samples
    // that address in a later pass drawn over the scene. That is how a glow is
    // built, so every pass is rendered into its own image, in order, and only
    // one of them - the one whose surface is the size being asked for - is the
    // picture. Rendering only that one loses the effect; rendering them all
    // into one image piles unrelated geometry on top of the scene.
    const auto pass_key = [](const draw_record& draw) {
        const color_render_target target =
            decode_color_render_target(draw.state, 0);
        return std::make_tuple(target.edram_base_tiles, target.pitch_pixels,
                               static_cast<uint32_t>(target.format));
    };
    // Which pass each draw belongs to, and what each pass looks like.
    std::vector<int> draw_pass(draws.size(), -1);
    struct pass_info {
        uint32_t width{0};
        uint32_t height{0};
        uint32_t resolve_address{0};
        // The pass whose pixels are already in this one's EDRAM when it begins,
        // or -1 to begin from the clear colour. See the resolve rule below.
        int continues{-1};
    };
    std::vector<pass_info> pass_infos;
    // A resolve ends the pass it belongs to. The copy out of EDRAM is what the
    // surface was being rendered FOR, and whatever the title draws next is a
    // new surface even when it reuses the same EDRAM base and pitch - which it
    // usually does, because the pitch is quantised to whole tiles and a chain
    // of shrinking blur levels lands on the same quantised pitch.
    //
    // Without this, a run of draw/resolve/draw/resolve pairs is ONE pass, and a
    // pass records ONE destination: every resolve in that run but the last is
    // forgotten. A later draw sampling one of the forgotten addresses finds no
    // pass to sample and reads guest memory instead - which no resolve ever
    // wrote, so it reads as zero, and every effect built on that chain comes
    // out black with nothing to say why.
    //
    // But a resolve does not EMPTY the surface. It is a copy, and unless
    // RB_COPY_CONTROL asks for the clear that follows it, the EDRAM the next
    // draws land in still holds everything drawn before - so the next pass
    // begins from this pass's picture rather than from the clear colour.
    //
    // Hydro Thunder resolves one lit 1024x576 surface FOUR times over: the left
    // half to one address, the whole thing twice to another, the right half to a
    // fourth, with no drawing between them. Starting each of those from black
    // left one pass holding the scene and three holding nothing, and every draw
    // that sampled one of the three - which is what the title composites the
    // world from - got an empty image. The title screen's logo, drawn in a pass
    // of its own, was all that reached the screen.
    bool pass_finished = true;
    // Whether the resolve that finished the previous pass left EDRAM intact,
    // and which pass it was.
    bool edram_kept = false;
    // How far the pass's draws REACH, measured over every draw as it joins.
    // The first draw's viewport is not the pass's size: a title opens a pass
    // with a band fill - Banjo-Kazooie clears the top 256 rows with a
    // window-space rectangle, viewport scale (640, -128) - and then draws the
    // whole 720-row scene into the same surface. Sizing the pass from the
    // first draw clipped every later row out of the image, and the frame's
    // band resolves then copied a 256-row fragment three times over: the
    // picture was the top slab stretched to fill the screen, exactly as seen.
    // EDRAM is one image for the whole pass, so the pass is as big as the
    // union of what was drawn into it.
    // Reach is PER PASS: a pass is as big as the union of what ITS draws
    // covered, and nothing else. A frame-wide maximum would inflate every
    // other pass of the frame - a shrinking blur chain would get its every
    // level the scene's size, and the feedback-history keys, which are the
    // resolve address plus these very dimensions, would follow - so the
    // accumulators reset each time a pass opens.
    std::vector<std::pair<uint32_t, uint32_t>> pass_reach;
    // Same conversion the pass opener uses: the viewport scale is half the
    // size it names.
    const auto from_viewport = [](float scale) {
        const float half = scale < 0.0f ? -scale : scale;
        return static_cast<uint32_t>(half * 2.0f + 0.5f);
    };
    // PA_SC_WINDOW_OFFSET as the dump prints it: two signed 15-bit fields,
    // moved onto vertices when PA_SU_SC_MODE_CNTL bit 16 says so. A band
    // resolve's second and third copies set (0, -256) and (0, -512); a
    // multi-band scene's draws set the same offsets to place their rows.
    const auto window_offset_of = [](const register_file& state) {
        const uint32_t window = state.get(reg::pa_sc_window_offset);
        const auto signed15 = [](uint32_t field) {
            const int32_t value = static_cast<int32_t>(field & 0x7FFF);
            return (field & 0x4000) != 0 ? value - 0x8000 : value;
        };
        return std::pair<int32_t, int32_t>{signed15(window & 0x7FFF),
                                           signed15((window >> 16) & 0x7FFF)};
    };
    auto color_surface = draws.empty() ? std::make_tuple(0u, 0u, 0u)
                                      : pass_key(draws.front());
    for (std::size_t i = 0; i < draws.size(); ++i) {
        const bool depth_only =
            (draws[i].state.get(reg::rb_modecontrol) & 0x7) == 5;
        // A depth clear can use a different pitch without rebinding colour.
        // GW3 does this between its final composite and its UI; treating the
        // depth pitch as a new colour surface discards the finished backdrop.
        const auto next_surface = depth_only ? color_surface : pass_key(draws[i]);
        const bool key_changed = i != 0 && next_surface != color_surface;
        color_surface = next_surface;
        if (i == 0 || pass_finished || key_changed) {
            const color_render_target target =
                decode_color_render_target(draws[i].state, 0);
            const viewport_state viewport = decode_viewport(draws[i].state);
            pass_info info;
            // Both dimensions come from the viewport, which is half of each:
            // the surface pitch is a MEMORY stride, rounded up to whole EDRAM
            // tiles, and only coincidentally the width. A chain of shrinking
            // blur levels - 75 pixels wide, then 37, 18, 9, 4 - is stored at
            // pitch 80 throughout, so taking the pitch gives every level the
            // same width while the heights shrink correctly. The horizontal
            // detail then never leaves the chain, and what should be a broad
            // wash of light comes out as a thin vertical streak per bright
            // column: an effect that looks like a smear rather than like a
            // size being wrong.
            const auto from_viewport = [](float scale) {
                const float half = scale < 0.0f ? -scale : scale;
                return static_cast<uint32_t>(half * 2.0f + 0.5f);
            };
            info.width = from_viewport(viewport.scale[0]);
            if (info.width == 0) info.width = target.pitch_pixels;
            info.height = from_viewport(viewport.scale[1]);
            if (info.height == 0) info.height = height;
            // Same surface, and the resolve that ended the last pass did not
            // clear it: this pass starts where that one left off. A change of
            // EDRAM base, pitch or format is a different surface, and what was
            // in the old one says nothing about what is in the new.
            if (edram_kept && !key_changed && !pass_infos.empty())
                info.continues = static_cast<int>(pass_infos.size()) - 1;
            pass_infos.push_back(info);
            pass_reach.emplace_back(0u, 0u);
            pass_finished = false;
            edram_kept = false;
        }
        draw_pass[i] = static_cast<int>(pass_infos.size()) - 1;
        // Grow the pass to cover this draw's reach. A copy out of EDRAM is
        // not geometry and carries no rows of its own - its viewport is
        // whatever the title left behind - so only drawing draws contribute.
        if ((draws[i].state.get(reg::rb_modecontrol) & 0x7) != 6) {
            const viewport_state viewport = decode_viewport(draws[i].state);
            const auto [wox, woy] = window_offset_of(draws[i].state);
            const uint32_t w = from_viewport(viewport.scale[0]);
            const uint32_t h = from_viewport(viewport.scale[1]);
            const int32_t bottom = woy + static_cast<int32_t>(h);
            const int32_t right = wox + static_cast<int32_t>(w);
            auto& reach = pass_reach.back();
            if (right > 0 && static_cast<uint32_t>(right) > reach.first)
                reach.first = static_cast<uint32_t>(right);
            if (bottom > 0 &&
                static_cast<uint32_t>(bottom) > reach.second)
                reach.second = static_cast<uint32_t>(bottom);
        }
        // RB_MODECONTROL says what a draw is FOR, and mode 6 is a copy out of
        // EDRAM rather than geometry: the pass's result going to an address a
        // later pass can sample. It is recorded as the pass's destination and
        // NOT drawn - drawing it would paint a full-screen rectangle over the
        // pass it is supposed to be copying.
        if ((draws[i].state.get(reg::rb_modecontrol) & 0x7) == 6) {
            pass_infos.back().resolve_address = draws[i].state.get(
                reg::rb_copy_dest_base);
            pass_finished = true;
            // Bit 8 of RB_COPY_CONTROL is the clear that follows the copy.
            // Without it the surface is untouched and the next pass into it
            // inherits every pixel.
            edram_kept =
                (draws[i].state.get(reg::rb_copy_control) & 0x100) == 0;
        }
    }
    // The measured reach becomes the size its pass gets. The first-draw
    // dimensions stay as the floor - a pass genuinely smaller than its
    // opener's viewport keeps the opener's, and a pass whose draws never
    // exceeded it is sized exactly as before. BK's scene pass opens with a
    // 256-row band fill and then draws 720 rows of scene: this is the line
    // that makes it 720 instead of 256.
    for (std::size_t p = 0; p < pass_infos.size(); ++p) {
        if (pass_reach[p].first > pass_infos[p].width)
            pass_infos[p].width = pass_reach[p].first;
        if (pass_reach[p].second > pass_infos[p].height)
            pass_infos[p].height = pass_reach[p].second;
    }
    stats.passes = static_cast<uint32_t>(pass_infos.size());
    for (const pass_info& info : pass_infos)
        if (info.continues >= 0) ++stats.passes_continued;

    // Which pass is the picture.
    //
    // The console answers this outright: VdSwap is handed the fetch constant of
    // the surface the scaler reads, and the pass that RESOLVED to that address
    // is the one being shown. Matched against a pass whose draws were actually
    // assembled, because the last resolve of a frame is often a band of a
    // surface an earlier pass drew - a scene split across EDRAM-sized strips
    // resolves each strip separately, and the strip's own pass holds no
    // geometry.
    //
    // Only when that address is unknown does the width heuristic stand. It is a
    // guess, and on a frame of many passes at the display's width it picks the
    // last of them regardless of whether anything was drawn into it.
    int presented_pass = -1;
    if (m_front_buffer != 0) {
        for (std::size_t i = 0; i < pass_infos.size(); ++i) {
            if (pass_infos[i].resolve_address != m_front_buffer) continue;
            // An empty pass is a resolve of something another pass drew; it has
            // no image of its own to present, so it is not the answer even
            // though it names the right address.
            bool has_draws = false;
            for (std::size_t d = 0; d < draws.size(); ++d)
                if (draw_pass[d] == static_cast<int>(i) &&
                    (draws[d].state.get(reg::rb_modecontrol) & 0x7) != 6) {
                    has_draws = true;
                    break;
                }
            if (has_draws) presented_pass = static_cast<int>(i);
        }
        stats.presented_from_front_buffer = presented_pass >= 0;
    }
    if (presented_pass < 0)
        for (std::size_t i = 0; i < pass_infos.size(); ++i)
            if (pass_infos[i].width == width)
                presented_pass = static_cast<int>(i);
    if (m_pass_index >= 0 &&
        m_pass_index < static_cast<int>(pass_infos.size())) {
        presented_pass = m_pass_index;
        // Asked for by hand, so the report must not go on claiming the front
        // buffer chose it - the whole point of that label is to say whether the
        // frame on screen is the one the title asked for.
        stats.presented_from_front_buffer = false;
    }
    if (presented_pass < 0 && !pass_infos.empty())
        presented_pass = static_cast<int>(pass_infos.size()) - 1;
    stats.presented_pass = presented_pass;
    // The presented pass is rendered at the size the caller asked for, so the
    // readback is the shape it expects whichever pass that turns out to be.
    if (presented_pass >= 0) {
        pass_infos[static_cast<std::size_t>(presented_pass)].width = width;
        pass_infos[static_cast<std::size_t>(presented_pass)].height = height;
    }

    // An address a pass resolves to, mapped to every pass that resolves there
    // in the order they run, so a draw sampling that address can be pointed at
    // a pass instead of at guest memory that never received the copy.
    //
    // Several passes legitimately resolve to the same address - a chain that
    // reduces a buffer step by step writes each step to the same place - so
    // this cannot be one pass per address.
    std::map<uint32_t, std::vector<int>> resolve_sources;
    for (std::size_t i = 0; i < pass_infos.size(); ++i)
        if (pass_infos[i].resolve_address != 0)
            resolve_sources[pass_infos[i].resolve_address].push_back(
                static_cast<int>(i));
    // The table a [resolve-read] line is read against: an address that appears
    // here and is still served from guest memory is a read of memory no resolve
    // ever wrote.
    if (trace_resolve_reads()) {
        std::printf("  [resolve-read] %zu pass(es), presented %d\n",
                    pass_infos.size(), presented_pass);
        for (std::size_t i = 0; i < pass_infos.size(); ++i)
            std::printf("  [resolve-read]   pass %2zu %4ux%-4u resolves to "
                        "%08X%s\n",
                        i, pass_infos[i].width, pass_infos[i].height,
                        pass_infos[i].resolve_address,
                        pass_infos[i].continues >= 0 ? " (continues)" : "");
    }
    // Whether an address lands INSIDE a surface some pass of this frame resolved
    // to, rather than exactly at its base.
    //
    // resolved_pass_for below matches the destination address exactly, so a
    // slot fetching from an OFFSET into a resolved surface - a sub-rectangle, a
    // second plane, a half the title composites separately - finds nothing and
    // falls through to guest memory. That read cannot be right: no resolve is
    // written back to guest memory here, so it returns zero, and a composite
    // reading zero paints black over whatever was underneath.
    //
    // The footprint is the pass's own viewport-derived size at FOUR bytes a
    // pixel. That is an upper bound for the 32-bit destination formats these
    // titles resolve to, and the bound is deliberately the generous one: this
    // number exists to stop a loss being invisible, so over-reporting a
    // suspicious read is the right way to be wrong. Every hit is printed with
    // its address under WHITTY_TRACE_RESOLVE_READS, so a false one is
    // identifiable rather than merely counted.
    const auto lands_inside_a_resolved_surface = [&](uint32_t address) {
        for (const pass_info& info : pass_infos) {
            if (info.resolve_address == 0) continue;
            const uint64_t start = info.resolve_address;
            const uint64_t end = start + static_cast<uint64_t>(info.width) *
                                             info.height * 4;
            if (address > start && address < end) return true;
        }
        return false;
    };
    // Which pass's image is at `address` when the draws of `pass` run: the most
    // recent resolve to it before this pass. With none before it, the address
    // still holds a resolve - the LAST one of the previous frame, because the
    // title runs the same passes every frame - and that is what a title
    // sampling its own previous output is asking for.
    // The pass itself is never the answer: a render pass cannot sample the image
    // it is writing, and a title that resolves and re-reads within one surface
    // has an earlier copy to read anyway.
    // `own_history` comes back true when the pass resolves to this address
    // ITSELF and no other pass has a more recent copy - the feedback case, which
    // the pass's own image cannot serve because it is being written.
    const auto resolved_pass_for = [&](uint32_t address, int pass,
                                       bool& own_history) -> int {
        own_history = false;
        const auto found = resolve_sources.find(address);
        if (found == resolve_sources.end()) return -1;
        int before = -1;
        int any = -1;
        bool self = false;
        for (int candidate : found->second) {
            if (candidate == pass) {
                self = true;
                continue;
            }
            any = candidate;
            if (candidate < pass) before = candidate;
        }
        // An earlier pass of THIS frame is the most recent copy, so it wins over
        // the pass's own from last frame.
        if (before >= 0) return before;
        if (self) {
            own_history = true;
            return pass;
        }
        // Only a LATER pass resolves here, so what this draw reads was written
        // last frame - the copy this frame has not been made yet. That is the
        // LATER pass's history: the difference from a pass sampling its own
        // destination is whose history it is, which the backend has to key its
        // history image on. It keys on the pass named here, so both cases are one
        // mechanism, but only because it was made to - naming the pass is not on
        // its own enough.
        //
        // Binding the later pass's current image instead reads a target this
        // frame has not drawn to yet. Its pixels are last frame's, since the
        // clear happens when that pass begins, so it is nearly the same read -
        // but nothing orders this frame's write to it after this read, and the
        // read gets no guarantee at all on the frame the image is created.
        if (any >= 0) {
            own_history = true;
            return any;
        }
        return -1;
    };

    std::vector<vulkan_backend::scene_pass> scene_passes(pass_infos.size());
    for (std::size_t i = 0; i < pass_infos.size(); ++i) {
        scene_passes[i].width = pass_infos[i].width;
        scene_passes[i].height = pass_infos[i].height;
        scene_passes[i].resolve_address = pass_infos[i].resolve_address;
        scene_passes[i].continues_pass = pass_infos[i].continues;
        scene_passes[i].presented = static_cast<int>(i) == presented_pass;
    }

    const auto assemble_started = std::chrono::steady_clock::now();
    for (std::size_t draw_index = 0; draw_index < draws.size(); ++draw_index) {
        // WHITTY_DRAW_FROM / WHITTY_DRAW_TO render only part of the frame, so a
        // visible fault can be narrowed to the draw that causes it. A resolve
        // is still performed for every draw - skipping those would change which
        // image reaches the screen and hide the thing being looked for.
        if (draw_index < draw_range_first() || draw_index > draw_range_last()) {
            const bool is_resolve =
                (draws[draw_index].state.get(reg::rb_modecontrol) & 0x7) == 6;
            if (!is_resolve) {
                ++draws_outside_range;
                continue;
            }
        }
        const draw_record& draw = draws[draw_index];
        const int this_pass = draw_pass[draw_index];
        if (this_pass < 0) {
            ++stats.no_pass;
            continue;
        }
        if (static_cast<int>(this_pass) != presented_pass)
            ++stats.draws_in_other_passes;
        // A copy out of EDRAM is not geometry; the pass already recorded where
        // it goes.
        if ((draw.state.get(reg::rb_modecontrol) & 0x7) == 6) {
            ++stats.resolve_copies;
            continue;
        }
        // The viewport is per-draw state, and it is baked into the vertex
        // shader's position export, so it is read from this draw's own
        // snapshot rather than from whatever the registers hold at the end.
        const viewport_state viewport = decode_viewport(draw.state);
        viewport_transform transform;
        transform.from_window_space = viewport.shader_emits_window_space;
        for (int i = 0; i < 3; ++i) {
            transform.scale[i] = viewport.scale[i];
            transform.offset[i] = viewport.offset[i];
        }
        const translated_shader* vertex =
            translate(shaders, draw.vertex_shader, transform, {}, stats);
        // Which interpolator the hardware fills in for the pixel shader, and
        // whether this draw is a point list - the two together decide whether a
        // point sprite's pixel shader can see where in the sprite it is.
        const uint32_t program_cntl = draw.state.get(reg::sq_program_cntl);
        const uint32_t context_misc = draw.state.get(reg::sq_context_misc);
        const uint32_t param_gen_pos = (context_misc >> 8) & 0xFF;
        const int param_gen =
            ((program_cntl >> 18) & 1) != 0 && param_gen_pos < 16
                ? static_cast<int>(param_gen_pos)
                : -1;
        const bool is_point_list = draw.prim == primitive_type::point_list;
        // The pixel shader is translated against what its vertex shader
        // actually exports: an input with no matching output is not a pipeline
        // Vulkan will accept, and one interpolator out of step reads a
        // different value than the shader asked for.
        // The alpha test is per-draw state and it lives in the pixel shader,
        // because Vulkan has nowhere else to put it. A sprite sheet's cut-out
        // is usually done here rather than by blending - the quad is opaque and
        // the texels outside the sprite fail the test - so a renderer that
        // ignores it draws a RECTANGLE around every sprite, with every counter
        // in the frame reporting a correct draw.
        const alpha_test_state alpha_test = decode_alpha_test(draw.state);
        const translated_shader* pixel =
            translate(shaders, draw.pixel_shader, viewport_transform{},
                      vertex != nullptr ? vertex->interpolators
                                        : std::vector<uint32_t>{},
                      stats, param_gen, is_point_list, alpha_test);
        if (draw.vertex_shader < 0 || draw.pixel_shader < 0) {
            ++stats.no_shader;
            continue;
        }
        if (vertex == nullptr || pixel == nullptr) {
            ++stats.shader_parse_failed;
            continue;
        }

        // VGT_INDX_OFFSET is added to every vertex index. A title uses it to
        // draw a mesh larger than one draw's 16-bit index count allows: it
        // splits the mesh and offsets the second half. Ignoring the offset
        // makes that second draw redraw the first half over itself, and the
        // rest of the mesh simply never appears - which looks like geometry
        // being clipped rather than like an index being wrong.
        const uint32_t index_offset = draw.state.get(reg::vgt_indx_offset);
        converted_primitives primitives;
        {
            const scoped_timer timer(stats.primitive_ns);
            primitives =
                convert_primitives(draw.prim, draw.indices, draw.index_count);
            // Native host topologies return no replacement index list.
            // They still need the guest's indices, including repeated and
            // non-sequential indices, before applying VGT_INDX_OFFSET.
            if (primitives.indices.empty()) primitives.indices = draw.indices;
            for (uint32_t& index : primitives.indices) index += index_offset;
        }
        if (primitives.topology == host_topology::unsupported) {
            ++stats.unsupported_primitive;
            continue;
        }
        if (!primitives.exact) ++stats.approximate_primitive;

        vulkan_backend::scene_draw scene_draw;
        scene_draw.vertex_spirv = &vertex->spirv;
        scene_draw.color_write_enabled =
            (draw.state.get(reg::rb_modecontrol) & 0x7) != 5;
        if (m_solid_shading) {
            scene_draw.fragment_spirv = &solid_fragment_shader();
            // The flat shader samples nothing, so it declares no textures.
        } else {
            scene_draw.fragment_spirv = &pixel->spirv;
            scene_draw.texture_slots = pixel->texture_slots;
            // The pixels behind each slot the shader samples. A slot whose
            // fetch constant describes something read_texture will not convert
            // - a compressed format, an unknown one, an address outside
            // committed memory - is left for the placeholder and counted, so a
            // flat white surface shows up in the report rather than only in the
            // picture.
            scene_draw.texture_samplers.reserve(pixel->texture_slots.size());
            for (std::size_t i = 0; i < pixel->texture_slots.size(); ++i) {
                const uint32_t slot = pixel->texture_slots[i];
                const texture_fetch_constant fetch =
                    decode_texture_fetch_constant(draw.state, slot);
                // How the title asked for this slot to be sampled. Recorded for
                // EVERY declared slot, before any of the reasons a slot might
                // not get pixels - a slot on the placeholder still has a
                // sampler, and the vector has to stay aligned with the slot
                // list the descriptor set is written from.
                scene_draw.texture_samplers.push_back(resolve_sampler_state(
                    fetch, i < pixel->texture_filters.size()
                               ? pixel->texture_filters[i]
                               : sampler_override{}));
                // An address a pass resolved to is that pass's image, not a
                // texture: the copy out of EDRAM is not performed into guest
                // memory, so reading that address finds whatever was there
                // before - usually nothing at all.
                bool own_history = false;
                const int source =
                    resolved_pass_for(fetch.base_address, this_pass,
                                      own_history);
                // WHITTY_TRACE_RESOLVE_READS=1 names every slot and says which
                // pass served it, or that nothing did.
                //
                // A slot that is NOT served falls through to guest memory, and
                // this runtime never writes a resolve back there - so if the
                // address was one a pass resolved to, the read is of memory
                // nothing ever wrote, and it comes back ZERO. Everything
                // reports success: the fetch constant decodes, a texture binds,
                // the draw runs, and the composite that should have read the
                // scene reads black. There is no other diagnostic in the
                // renderer that can distinguish that from a title legitimately
                // sampling an ordinary texture.
                const bool inside_a_resolve =
                    source < 0 &&
                    lands_inside_a_resolved_surface(fetch.base_address);
                if (source < 0) {
                    ++stats.textures_from_guest_memory;
                    if (inside_a_resolve) ++stats.resolve_reads_missed;
                }
                if (trace_resolve_reads()) {
                    char served[80];
                    if (source >= 0)
                        std::snprintf(served, sizeof(served), "pass %d%s",
                                      source, own_history ? " (history)" : "");
                    else
                        std::snprintf(served, sizeof(served),
                                      "GUEST MEMORY - no pass%s",
                                      inside_a_resolve
                                          ? " *** INSIDE A RESOLVED SURFACE, "
                                            "reads zero ***"
                                          : "");
                    std::printf("  [resolve-read] draw %zu pass %d slot %u "
                                "addr %08X %ux%u fmt %u -> %s\n",
                                draw_index, this_pass, slot,
                                fetch.base_address, fetch.width, fetch.height,
                                fetch.format, served);
                }
                if (source >= 0) {
                    vulkan_backend::scene_texture bound;
                    bound.slot = slot;
                    bound.resolved_pass = source;
                    bound.own_history = own_history;
                    scene_draw.textures.push_back(bound);
                    ++stats.resolved_sources;
                    if (own_history) ++stats.feedback_sources;
                    continue;
                }
                const host_texture* texture = nullptr;
                {
                    const scoped_timer timer(stats.texture_ns);
                    texture = m_textures.decode(*m_memory, fetch);
                }
                if (texture == nullptr) {
                    ++stats.texture_placeholders;
                    // WHITTY_TRACE_PLACEHOLDER=1 names each DISTINCT fetch
                    // constant that fell back, once. A placeholder is a flat
                    // white surface, so "the scene is white" and "read_texture
                    // refused these" are the same sentence - but the count
                    // alone cannot say whether the refusals are one big sky
                    // polygon or ninety specks, and the format is what says
                    // which conversion is missing.
                    static const bool trace =
                        std::getenv("WHITTY_TRACE_PLACEHOLDER") != nullptr;
                    if (trace) {
                        static std::set<uint64_t> seen;
                        const uint64_t k =
                            (static_cast<uint64_t>(fetch.format) << 40) |
                            (static_cast<uint64_t>(fetch.type) << 38) |
                            (static_cast<uint64_t>(fetch.tiled) << 37) |
                            (static_cast<uint64_t>(fetch.endianness) << 35) |
                            (static_cast<uint64_t>(fetch.width) << 22) |
                            (static_cast<uint64_t>(fetch.height) << 9) |
                            static_cast<uint64_t>(fetch.dimension);
                        if (seen.insert(k).second) {
                            std::printf(
                                "  [placeholder] format %2u type %u %ux%u "
                                "tiled %u endian %u dim %u pitch %u addr "
                                "%08X\n",
                                fetch.format, fetch.type, fetch.width,
                                fetch.height, fetch.tiled ? 1u : 0u,
                                static_cast<uint32_t>(fetch.endianness),
                                static_cast<uint32_t>(fetch.dimension),
                                fetch.pitch_pixels, fetch.base_address);
                            std::fflush(stdout);
                        }
                    }
                    continue;
                }
                stats.texture_texels +=
                    static_cast<uint64_t>(texture->width) * texture->height;
                // The other half of WHITTY_TRACE_PLACEHOLDER: what DID decode.
                // A texture that decodes to the wrong pixels is silent - it
                // binds, it draws, and only the picture says otherwise - so
                // the shape it was decoded under is worth being able to read
                // off a run. Distinct constants only, once each.
                if (trace_textures()) {
                    static std::set<uint64_t> seen_bound;
                    const uint64_t k = texture_key(fetch);
                    if (seen_bound.insert(k).second) {
                        std::printf(
                            "  [texture] format %2u %ux%u pitch %u tiled %u "
                            "endian %u swizzle %03X packed_mips %u addr %08X "
                            "-> %ux%u\n",
                            fetch.format, fetch.width, fetch.height,
                            fetch.pitch_pixels, fetch.tiled ? 1u : 0u,
                            static_cast<uint32_t>(fetch.endianness),
                            fetch.swizzle, fetch.packed_mips ? 1u : 0u,
                            fetch.base_address, texture->width,
                            texture->height);
                        std::fflush(stdout);
                    }
                }
                // WHITTY_TEXTURE_DUMP=<dir> writes every distinct decoded
                // texture out as a PPM.
                //
                // This exists because counts could not settle the question it
                // settles. A frame reporting "1728 textures bound, 0 fell back
                // to the placeholder" says decode succeeded, not that it was
                // right, and a day went into suspecting texture decode on
                // Jetpac from numbers alone. Looking at the images ended it in
                // a minute: a clean rainbow gradient, a correct red-to-green
                // fuel bar, a correct red glow - and the purple-blue ones that
                // read as broken are normal maps, which is what a normal map
                // looks like. Decode was never the fault.
                //
                // So the rule this encodes: when the question is whether
                // pixels are right, produce the pixels. Distinct fetch
                // constants only, once each, so a frame writes a contact sheet
                // rather than thousands of copies.
                if (const char* dump_dir = texture_dump_dir()) {
                    static std::set<uint64_t> dumped;
                    const uint64_t k = texture_key(fetch);
                    if (dumped.insert(k).second) {
                        char path[640];
                        std::snprintf(path, sizeof(path),
                                      "%s/tex_%016llX_f%02u_%ux%u.ppm",
                                      dump_dir,
                                      static_cast<unsigned long long>(k),
                                      fetch.format, texture->width,
                                      texture->height);
                        if (std::FILE* f = std::fopen(path, "wb")) {
                            std::fprintf(f, "P6\n%u %u\n255\n", texture->width,
                                         texture->height);
                            const std::size_t texels =
                                static_cast<std::size_t>(texture->width) *
                                texture->height;
                            for (std::size_t at = 0; at < texels; ++at)
                                std::fwrite(texture->rgba.data() + at * 4, 1, 3,
                                            f);
                            std::fclose(f);
                        }
                    }
                }
                vulkan_backend::scene_texture bound;
                bound.slot = slot;
                bound.key = texture_key(fetch);
                bound.rgba = texture->rgba.data();
                bound.width = texture->width;
                bound.height = texture->height;
                scene_draw.textures.push_back(bound);
                ++stats.textures_bound;
            }
        }
        scene_draw.indices = primitives.indices;
        scene_draw.vertex_count = draw.index_count;
        // A topology drawn without an index list needs the offset applied to
        // where it starts instead.
        scene_draw.first_vertex = index_offset;
        {
            const scoped_timer timer(stats.constants_ns);
            scene_draw.constants = read_constants(draw.state);
            scene_draw.bool_loop_constants =
                read_bool_loop_constants(draw.state);
        }
        // How this draw combines with the target, from its own registers. A
        // title composites its glow by adding it, and assuming source-alpha
        // blending instead multiplies that by an alpha it never set.
        const blend_state blending = decode_blend(draw.state, 0);
        scene_draw.blend.enabled = blending.enabled;
        scene_draw.blend.color_src = static_cast<uint8_t>(blending.color_src);
        scene_draw.blend.color_dst = static_cast<uint8_t>(blending.color_dst);
        scene_draw.blend.color_op = static_cast<uint8_t>(blending.color_op);
        scene_draw.blend.alpha_src = static_cast<uint8_t>(blending.alpha_src);
        scene_draw.blend.alpha_dst = static_cast<uint8_t>(blending.alpha_dst);
        scene_draw.blend.alpha_op = static_cast<uint8_t>(blending.alpha_op);
        // Depth test, from the draw's own register snapshot. When PA_SC_MODE_CNTL's
        // z-enable is clear, both test and write are off regardless of RB_DEPTHCONTROL.
        const depth_test_state depth = decode_depth_test(draw.state);
        scene_draw.depth_test_enabled = depth.test_enabled;
        scene_draw.depth_write_enabled = depth.write_enabled;
        scene_draw.depth_compare_op = static_cast<uint8_t>(depth.func);
        // Face culling, from the draw's own PA_SU_SC_MODE_CNTL.
        //
        // Facing is defined in window space. The shader's Y flip replaces
        // the guest's normally negative viewport Y scale, so it does not
        // reverse facing relative to the console's final window coordinates.
        // Account only for a reflection between that viewport and ours.
        const face_cull_state cull = decode_face_cull(draw.state);
        scene_draw.cull_mode = static_cast<uint8_t>((cull.cull_front ? 1u : 0u) |
                                                    (cull.cull_back ? 2u : 0u));
        const bool reflected = (viewport.scale[0] < 0.0f) ==
                               (viewport.scale[1] < 0.0f);
        scene_draw.front_face_ccw = cull.front_ccw != reflected;
        if (flip_front_face())
            scene_draw.front_face_ccw = !scene_draw.front_face_ccw;
        // Rectangle and point expansion generates host triangles, but those
        // triangles must not acquire polygon culling from stale guest state.
        if (draw.prim == primitive_type::rectangle_list || is_point_list)
            scene_draw.cull_mode = 0;
        if (no_cull()) scene_draw.cull_mode = 0;
        if (trace_cull())
            std::printf("  [cull] draw %zu: PA_SU_SC_MODE_CNTL %08X -> %s, "
                        "front %s\n",
                        draw_index,
                        draw.state.get(reg::pa_su_sc_mode_cntl),
                        scene_draw.cull_mode == 3   ? "cull both"
                        : scene_draw.cull_mode == 2 ? "cull back"
                        : scene_draw.cull_mode == 1 ? "cull front"
                                                    : "cull nothing",
                        scene_draw.front_face_ccw ? "CCW" : "CW");
        switch (primitives.topology) {
            case host_topology::triangle_strip:
                scene_draw.topo = topology::triangle_strip;
                break;
            case host_topology::triangle_fan:
                scene_draw.topo = topology::triangle_fan;
                break;
            case host_topology::line_list:
                scene_draw.topo = topology::line_list;
                break;
            case host_topology::line_strip:
                scene_draw.topo = topology::line_strip;
                break;
            case host_topology::point_list:
                scene_draw.topo = topology::point_list;
                break;
            default:
                scene_draw.topo = topology::triangle_list;
                break;
        }

        // A rectangle list arrives here as the one triangle that was in the
        // vertex buffer; the geometry stage mirrors a vertex across the longest
        // edge to make the rectangle whole. Without it the draw is a diagonal
        // half - so a device with no geometry stage is counted as approximate
        // rather than left to look like a rasterisation fault.
        //
        // The decision is only recorded here. Completing the rectangle on the
        // CPU needs the vertex buffers, which are read below, so the attempt is
        // made after them; the geometry stage is asked for here so that a
        // device which HAS one still takes exactly the path it took before and
        // no picture moves.
        const bool completes_rectangle =
            primitives.geometry == geometry_stage::complete_rectangle;
        bool rectangle_on_cpu = false;
        if (completes_rectangle) {
            const std::vector<uint32_t>* geometry =
                cpu_rectangles() ? nullptr
                                 : rectangle_geometry_shader(
                                       vertex->interpolators);
            if (geometry != nullptr) {
                scene_draw.geometry_spirv = geometry;
                ++stats.rectangles_completed;
            } else {
                rectangle_on_cpu = true;
            }
        }
        // A point list is a list of SPRITES: the geometry stage turns each point
        // into the square the console would have rasterised. Without it the
        // rasteriser draws one pixel per point, which for a title whose
        // particles and glows are point sprites is the whole effect missing.
        if (is_point_list) {
            point_sprite_params point;
            const uint32_t size = draw.state.get(reg::pa_su_point_size);
            const uint32_t minmax = draw.state.get(reg::pa_su_point_minmax);
            point.constant_diameter[0] = float(size >> 16) * (2.0f / 16.0f);
            point.constant_diameter[1] = float(size & 0xFFFF) * (2.0f / 16.0f);
            point.min_diameter = float(minmax & 0xFFFF) * (2.0f / 16.0f);
            point.max_diameter = float(minmax >> 16) * (2.0f / 16.0f);
            // The viewport's own extent, not the pass image's: the size is in
            // the pixels the title is drawing to, and the two differ whenever a
            // pass is rendered at another resolution.
            const auto extent = [](float scale) {
                const float half = scale < 0.0f ? -scale : scale;
                return half * 2.0f;
            };
            point.viewport[0] = extent(viewport.scale[0]);
            point.viewport[1] = extent(viewport.scale[1]);
            point.from_vertex = vertex->writes_point_size;
            const std::vector<uint32_t>* geometry =
                point_geometry_shader(vertex->interpolators, point);
            if (geometry != nullptr) {
                scene_draw.geometry_spirv = geometry;
                ++stats.point_sprites;
            } else {
                ++stats.approximate_primitive;
            }
        }

        // One vertex binding per distinct fetch slot the shader reads; several
        // attributes can share a slot, which is how one vertex carries a
        // position and a colour.
        std::map<uint8_t, uint32_t> slot_to_binding;
        bool buffers_ok = true;
        // How many vertices the draw reaches. An indexed draw's highest index
        // is NOT its index count: indices may point anywhere in the buffer, so
        // the largest one decides.
        uint32_t vertex_count = 0;
        for (uint32_t index : primitives.indices)
            vertex_count = std::max(vertex_count, index + 1);
        if (primitives.indices.empty())
            vertex_count = index_offset + draw.index_count;
        // Which record each of those vertices actually fetches. Empty unless
        // the shader indexes by something other than the vertex index.
        std::vector<uint32_t> fetch_index;
        uint32_t max_fetch_index = 0;
        if (vertex->remaps_fetch_index && vertex_count != 0 &&
            vertex_fetch_index_map(vertex->program, draw.state, vertex_count,
                                   fetch_index)) {
            for (uint32_t element : fetch_index)
                max_fetch_index = std::max(max_fetch_index, element);
        } else {
            fetch_index.clear();
        }
        for (const vertex_input& input : vertex->inputs) {
            if (slot_to_binding.count(input.fetch_slot) == 0) {
                const vertex_fetch_constant fetch =
                    decode_vertex_fetch_constant(draw.state, input.fetch_slot);
                // Type 3 is a vertex fetch; any other type means the slot was
                // never set up and the address that came with it is not a
                // vertex buffer.
                const uint32_t address =
                    command_processor::physical_to_virtual(fetch.base_address);
                if (fetch.type != 3 || fetch.size_bytes == 0 ||
                    !m_memory->committed(address, fetch.size_bytes)) {
                    buffers_ok = false;
                    break;
                }
                // Only the records this draw reaches. A fetch constant
                // describes the whole buffer the title allocated, which can be
                // several times what a draw uses - and the difference is
                // copied and byte-swapped every frame otherwise.
                // Is this still the data the draw was recorded with? A
                // fingerprint is only present when WHITTY_TRACE_VERTEX_AGE is
                // set, so this costs nothing in an ordinary run.
                for (const draw_record::fetch_fingerprint& print :
                     draw.fingerprints) {
                    if (print.slot != input.fetch_slot) continue;
                    ++vertex_buffers_checked;
                    if (fingerprint_vertex_bytes(*m_memory, print.address,
                                                 fetch.size_bytes) !=
                        print.hash)
                        ++vertex_buffers_stale;
                    break;
                }
                const uint32_t stride_bytes = input.stride_dwords * 4;
                uint32_t needed = fetch.size_bytes;
                if (stride_bytes != 0) {
                    const uint64_t records =
                        fetch_index.empty() ? vertex_count
                                            : uint64_t(max_fetch_index) + 1;
                    const uint64_t used = records * stride_bytes;
                    if (used != 0 && used < needed)
                        needed = static_cast<uint32_t>(used);
                }
                // The same bytes, already read this frame? See vertex_reuse.
                // A read that reached at least as far as this draw does serves
                // it; one that stopped short is replaced by a read at the new
                // high-water mark.
                const bool gathers = !fetch_index.empty() && stride_bytes != 0;
                const uint8_t swap_key = static_cast<uint8_t>(fetch.swap);
                std::size_t storage_index =
                    gathers ? vertex_buffer_reuse::npos
                            : vertex_reuse.find(address, swap_key, needed);
                if (storage_index != vertex_buffer_reuse::npos) {
                    ++vertex_rereads_avoided;
                } else {
                    {
                        const scoped_timer timer(stats.vertex_ns);
                        vertex_storage.push_back(read_vertex_buffer(
                            *m_memory, address, needed, fetch.swap));
                    }
                    ++vertex_reads;
                    storage_index = vertex_storage.size() - 1;
                    stats.vertex_bytes += vertex_storage.back().size();
                    if (vertex_storage.back().empty()) {
                        buffers_ok = false;
                        break;
                    }
                    // Gather the records into the order the host input assembler
                    // will read them in, so element N of what it sees is the
                    // record the console's fetch would have read for vertex N.
                    if (gathers) {
                        const std::vector<uint8_t>& source =
                            vertex_storage.back();
                        std::vector<uint8_t> gathered(
                            std::size_t(vertex_count) * stride_bytes, 0);
                        for (uint32_t v = 0; v < vertex_count; ++v) {
                            const std::size_t from =
                                std::size_t(fetch_index[v]) * stride_bytes;
                            if (from + stride_bytes > source.size()) continue;
                            std::memcpy(gathered.data() +
                                            std::size_t(v) * stride_bytes,
                                        source.data() + from, stride_bytes);
                        }
                        vertex_storage.back() = std::move(gathered);
                    } else {
                        vertex_reuse.record(address, swap_key, needed,
                                            storage_index);
                    }
                }
                const uint32_t binding =
                    static_cast<uint32_t>(scene_draw.bindings.size());
                slot_to_binding[input.fetch_slot] = binding;
                scene_draw.bindings.push_back(
                    {vertex_storage[storage_index].data(),
                     vertex_storage[storage_index].size(), stride_bytes});
            }
            scene_draw.attributes.push_back(
                {input.location, slot_to_binding[input.fetch_slot],
                 input.offset_dwords * 4, input.format});
        }
        if (!buffers_ok) {
            ++stats.no_vertex_buffer;
            continue;
        }

        // The fourth vertex of every rectangle, built here because there is no
        // geometry stage to build it - either the device has none, or
        // WHITTY_CPU_RECTANGLES asked for this path on a device that does, so
        // the two can be compared against a pinned frame.
        //
        // Only for a shader whose exports are an affine function of what it
        // fetched, which is checked rather than assumed; see
        // rectangle_expansion.h. A shader that fails the check falls through to
        // the same "approximate" count as before, so nothing is drawn wrongly
        // in silence.
        if (rectangle_on_cpu) {
            bool expanded = false;
            const char* refused = nullptr;
            const rectangle_passthrough shape =
                analyse_rectangle_passthrough(vertex->program);
            if (!shape.ok) refused = shape.reason;
            if (shape.ok && shape.position_input >= vertex->inputs.size())
                refused = "the position fetch is not one of the shader's inputs";
            if (shape.ok && shape.position_input < vertex->inputs.size()) {
                std::vector<rectangle_binding> rect_bindings;
                rect_bindings.reserve(scene_draw.bindings.size());
                for (const auto& binding : scene_draw.bindings)
                    rect_bindings.push_back(
                        {static_cast<const uint8_t*>(binding.data),
                         static_cast<std::size_t>(binding.size_bytes),
                         binding.stride_bytes});
                std::vector<rectangle_field> fields;
                rectangle_field position{};
                bool all_float = true;
                for (std::size_t i = 0; i < vertex->inputs.size(); ++i) {
                    const vertex_input& input = vertex->inputs[i];
                    const vertex_format_info info = decode_vertex_format(
                        static_cast<vertex_format>(input.format));
                    // Only 32-bit IEEE components. In a packed or normalised
                    // format (v1 - v0) + v2 is not representable, so a fourth
                    // vertex written back into it would be a rounded one - and
                    // a rounded corner is a wrong corner with nothing to say so.
                    if (!info.is_float || info.byte_size != info.components * 4) {
                        all_float = false;
                        refused = "an attribute that is not 32-bit float";
                        break;
                    }
                    const auto slot = slot_to_binding.find(input.fetch_slot);
                    if (slot == slot_to_binding.end()) {
                        all_float = false;
                        refused = "an attribute with no bound buffer";
                        break;
                    }
                    rectangle_field field{slot->second, input.offset_dwords * 4,
                                          info.components};
                    fields.push_back(field);
                    if (i == shape.position_input) position = field;
                }
                if (all_float && position.components >= 2) {
                    // What the position export multiplies x and y by, so the
                    // longest-edge test compares the same numbers the geometry
                    // stage would have. A clip-space export flips y and nothing
                    // else; a window-space one is scaled back by the inverse of
                    // the console's own viewport, which is not the same factor
                    // on both axes.
                    float edge_scale[2] = {1.0f, -1.0f};
                    if (viewport.shader_emits_window_space) {
                        edge_scale[0] = viewport.scale[0] != 0.0f
                                            ? 1.0f / viewport.scale[0]
                                            : 1.0f;
                        edge_scale[1] = viewport.scale[1] != 0.0f
                                            ? -1.0f / viewport.scale[1]
                                            : -1.0f;
                    }
                    const expanded_rectangles rects = expand_rectangle_list(
                        rect_bindings, fields, position, edge_scale,
                        scene_draw.indices, scene_draw.vertex_count,
                        scene_draw.first_vertex);
                    if (rects.ok) {
                        for (std::size_t b = 0; b < rects.buffers.size(); ++b) {
                            vertex_storage.push_back(std::move(rects.buffers[b]));
                            scene_draw.bindings[b].data =
                                vertex_storage.back().data();
                            scene_draw.bindings[b].size_bytes =
                                vertex_storage.back().size();
                        }
                        scene_draw.indices = rects.indices;
                        scene_draw.vertex_count = rects.vertex_count;
                        // The expansion resolved the source indices and the
                        // offset into a compact buffer, so both are spent.
                        scene_draw.first_vertex = 0;
                        expanded = true;
                        ++stats.rectangles_completed;
                        ++stats.rectangles_completed_on_cpu;
                    } else {
                        refused = "the vertex records were out of range";
                    }
                }
            }
            if (!expanded) {
                ++stats.approximate_primitive;
                // Said once per distinct reason, not once per draw: a frame
                // with a thousand rectangle draws would otherwise bury it.
                if (refused != nullptr && m_rectangle_refusals.insert(refused).second)
                    std::printf(
                        "  [gpu] rectangles not completed on the CPU: %s\n",
                        refused);
            }
        }

        ++stats.draws_rendered;
        scene_passes[static_cast<std::size_t>(this_pass)].draws.push_back(
            std::move(scene_draw));
    }

    // Every draw the renderer declined, under a named reason - and the check
    // that the names are exhaustive.
    //
    // "frame render: 65 of 124 draw(s)" is the same line whether the 59 are
    // EDRAM copies that are correct to skip or geometry that was lost, and
    // nothing else in the report separated them. So the reasons are summed
    // here and the remainder is carried as its own count: a `continue` added
    // to the loop above without a reason beside it lands in
    // declined_unaccounted rather than in the gap between two totals.
    {
        const uint32_t named = stats.resolve_copies + stats.no_pass +
                               stats.no_shader + stats.shader_parse_failed +
                               stats.unsupported_primitive +
                               stats.no_vertex_buffer;
        const uint32_t declined =
            stats.draws_submitted > stats.draws_rendered
                ? stats.draws_submitted - stats.draws_rendered
                : 0;
        stats.declined_unaccounted = declined > named ? declined - named : 0;
    }
    report_declined_draws(stats);

    stats.vertex_buffer_reads = vertex_reads;
    stats.vertex_buffer_reuses = vertex_rereads_avoided;
    if (draws_outside_range != 0)
        std::printf("  [draws] %u of %zu held back by the draw range\n",
                    draws_outside_range, draws.size());
    if (vertex_buffers_checked != 0)
        std::printf("  [vertex] %u of %u buffer(s) changed between the draw "
                    "and the render\n",
                    vertex_buffers_stale, vertex_buffers_checked);
    stats.texture_cache_hits =
        static_cast<uint32_t>(m_textures.hits() - hits_before);
    stats.texture_cache_misses =
        static_cast<uint32_t>(m_textures.misses() - misses_before);
    stats.texture_texels_decoded =
        m_textures.decoded_texels() - decoded_before;
    stats.assemble_us = static_cast<uint64_t>(
        std::chrono::duration_cast<std::chrono::microseconds>(
            std::chrono::steady_clock::now() - assemble_started)
            .count());
    const auto submit_started = std::chrono::steady_clock::now();
    const auto record_submit = [&](bool ok) {
        stats.submit_us = static_cast<uint64_t>(
            std::chrono::duration_cast<std::chrono::microseconds>(
                std::chrono::steady_clock::now() - submit_started)
                .count());
        return ok;
    };

    if (scene_passes.empty()) {
        // Nothing to draw is still a frame - a cleared one - and returning it
        // says so more usefully than an error would.
        const std::vector<vulkan_backend::scene_draw> none;
        return record_submit(m_backend->render_scene(
            width, height, clear, none, m_readback ? &out : nullptr, error));
    }
    return record_submit(m_backend->render_passes(
        scene_passes, clear, m_readback ? &out : nullptr, error));
}

bool frame_renderer::write_ppm(const std::string& path,
                               const std::vector<uint8_t>& rgba, uint32_t width,
                               uint32_t height) {
    if (rgba.size() < static_cast<std::size_t>(width) * height * 4) return false;
    std::FILE* file = std::fopen(path.c_str(), "wb");
    if (file == nullptr) return false;
    std::fprintf(file, "P6\n%u %u\n255\n", width, height);
    std::vector<uint8_t> row(static_cast<std::size_t>(width) * 3);
    for (uint32_t y = 0; y < height; ++y) {
        for (uint32_t x = 0; x < width; ++x) {
            const std::size_t source =
                (static_cast<std::size_t>(y) * width + x) * 4;
            row[x * 3 + 0] = rgba[source + 0];
            row[x * 3 + 1] = rgba[source + 1];
            row[x * 3 + 2] = rgba[source + 2];
        }
        std::fwrite(row.data(), 1, row.size(), file);
    }
    std::fclose(file);
    return true;
}

} // namespace whitty_xenon::gpu
