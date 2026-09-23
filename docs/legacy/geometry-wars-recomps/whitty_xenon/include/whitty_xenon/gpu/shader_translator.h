// shader_translator.h - decoded shader -> SPIR-V.
//
// This is where the two halves of the GPU meet: the decoders on one side, the
// SPIR-V builder on the other. It walks a shader's ALU instructions and emits
// SPIR-V that computes the same thing, modelling the shader's temporary
// registers as four-component float locals - load the sources, apply their
// swizzle and negate, do the operation, write the result under its mask.
//
// It handles both halves of the co-issued instruction, and now every opcode the
// ISA defines: all 30 vector operations and all 50 scalar ones, each with
// per-source swizzle and negate, per-destination write mask, and the
// saturate/clamp modifier. A source can be a temporary register or a float
// constant read from a uniform buffer - by a literal index, or by one computed
// from the ADDRESS REGISTER a0 (which the maxas family writes, and which is how
// a shader reaches a matrix palette) or from the LOOP REGISTER aL (which a loop
// steps, and which is how a shader walks an array one element per iteration).
// A pixel/vertex shader exports colour/position to a real output variable.
//
// BLOCK-LEVEL CONTROL FLOW is translated, and the interesting part is that
// SPIR-V has none of the kind the Xenos has. Xenos control flow is a flat list
// of branches; SPIR-V has only nested constructs, each declaring the block it
// merges at. The two are reconciled by RECOGNITION rather than by lowering to a
// dispatch loop: the compiler that produced this microcode emitted it from
// structured source, so the branches come back out as an `if`, an `if`/`else`
// and a counted loop, properly nested. plan_control_flow finds that shape and
// the emitter turns it into OpSelectionMerge and OpLoopMerge; a program that
// does NOT structure falls back to the flat walk and is COUNTED, because the
// one thing this must never do is run a loop body once and report nothing.
// A conditional exec's condition - a boolean constant or the predicate - is
// honoured too, both ways round.
//
// Not translated: the subroutine call and its return. No title seen here emits
// one, and untested machinery is worth less than a count that appears loudly
// the day one does - which untranslated_control_flow() is.
//
// An instruction whose op is not yet handled is skipped rather than
// mistranslated, and every module the translator emits passes the Khronos
// validator - which the tests now run, rather than leaving it to a person.
#pragma once

#include "whitty_xenon/gpu/alu.h"
#include "whitty_xenon/gpu/fetch.h"
#include "whitty_xenon/gpu/register_file.h"
#include "whitty_xenon/gpu/shader_program.h"
#include "whitty_xenon/gpu/spirv_builder.h"

#include <cstdint>
#include <functional>
#include <map>
#include <vector>

namespace whitty_xenon::gpu {

// Which pipeline stage a shader is, deciding its entry point and its outputs.
enum class shader_type { vertex, pixel };

// One vertex attribute a translated vertex shader reads.
//
// The Xenos does not have fixed-function vertex input: a vertex shader fetches
// its own data with vfetch instructions, each naming a fetch constant slot (the
// buffer), a dword offset within the vertex, and a format. Vulkan does have
// fixed-function vertex input, so each vfetch becomes an input variable here
// and the backend needs exactly these fields to describe it. A mini fetch
// inherits the slot, stride and source of the full fetch before it, so the
// values recorded here are the resolved ones, not the instruction's own.
struct vertex_input {
    uint32_t location{0};      // SPIR-V input location
    uint8_t fetch_slot{0};     // vertex fetch constant slot [0, 95]
    uint32_t offset_dwords{0}; // dword offset of the attribute in the vertex
    uint32_t stride_dwords{0}; // dwords between consecutive vertices
    uint8_t format{0};         // vertex_format, kept raw
    uint32_t components{0};    // components the format carries
};

// The viewport transform a vertex shader's exported position needs.
//
// The Xenos lets a title turn the fixed-function viewport transform off and
// have the shader emit window-space coordinates itself - which is what
// PA_CL_VTE_CNTL's scale/offset enable bits say. Vulkan has no such option: it
// always wants clip space. So when the console's transform is disabled, the
// shader's window-space output has to be mapped back to clip space here, or
// every coordinate is off by the size of the render target.
struct viewport_transform {
    // False when the console's own viewport transform is enabled, in which
    // case the shader emits clip space already and nothing is applied.
    bool from_window_space{false};
    float scale[3]{1.0f, 1.0f, 1.0f};
    float offset[3]{0.0f, 0.0f, 0.0f};

    bool operator<(const viewport_transform& other) const noexcept;
};

class shader_translator {
public:
    // Xenos export indices this slice routes to real outputs.
    static constexpr uint32_t kExportColor0 = 0;   // pixel shader color 0
    static constexpr uint32_t kExportPosition = 62; // vertex shader position
    // Point size in X, edge flag in Y, kill-vertex in Z. Only the size is
    // routed; the other two have no effect on any title seen so far, and
    // silently dropping the whole export is what makes a point sprite one
    // pixel across.
    static constexpr uint32_t kExportPointSize = 63;

    // Locations for the two extra stage-to-stage values a point sprite needs.
    // Interpolators occupy 0-15 (the console's own limit), so these sit above
    // them and cannot collide with one.
    static constexpr uint32_t kPointSizeLocation = 16;
    static constexpr uint32_t kPointCoordLocation = 17;

    // Whether a vector opcode is one this slice can translate.
    static bool is_supported_vector_op(alu_vector_opcode opcode) noexcept;
    // Whether a scalar opcode is one this slice can translate.
    static bool is_supported_scalar_op(alu_scalar_opcode opcode) noexcept;

    // Builds a complete SPIR-V module for a `type` shader that runs
    // `instructions` over `temp_register_count` vec4 temporary registers, with a
    // pixel shader exporting colour 0 and a vertex shader exporting position.
    // Unsupported instructions are skipped; the module passes spirv-val.
    std::vector<uint32_t> translate(
        const std::vector<alu_instruction>& instructions,
        uint32_t temp_register_count,
        shader_type type = shader_type::pixel);

    // Builds the module from a whole decoded shader, honouring its control flow:
    // each exec block's instructions in order, with a predicate-conditional
    // block wrapped in a structured `if`, and texture fetches translated to
    // image samples.
    std::vector<uint32_t> translate(const shader_program& program,
                                    uint32_t temp_register_count,
                                    shader_type type = shader_type::pixel);

    // As above, with the viewport the shader's position export is mapped
    // through. Only meaningful for a vertex shader.
    std::vector<uint32_t> translate(const shader_program& program,
                                    uint32_t temp_register_count,
                                    shader_type type,
                                    const viewport_transform& viewport);

    // Everything a shader needs that is not in its own microcode.
    struct options {
        shader_type type{shader_type::pixel};
        viewport_transform viewport;
        // For a PIXEL shader: the interpolator indices its paired vertex
        // shader writes. The console hands a pixel shader its interpolators
        // pre-loaded in registers - interpolator N in register N - so these
        // become input variables that seed those registers. They must match
        // what the vertex shader actually exports: an input with no matching
        // output is not a pipeline Vulkan will accept.
        std::vector<uint32_t> interpolators;
        // For a PIXEL shader: which interpolator register the hardware fills in
        // itself rather than taking from the vertex shader - PsParamGen, named
        // by SQ_CONTEXT_MISC when SQ_PROGRAM_CNTL's param_gen bit is set. -1 is
        // "the hardware generates nothing", which is the common case.
        //
        // It holds the pixel's own screen position in XY and, for a POINT, the
        // sprite's texture coordinate in ZW. That coordinate is the only way a
        // point sprite's pixel shader can know where in the sprite it is: a
        // point is one vertex, so an interpolated coordinate is constant across
        // it. Leaving the register at zero makes every pixel of the sprite
        // sample the texture's corner texel - transparent, in every glow
        // texture there is - so the sprite draws nothing at all and looks like a
        // draw that was skipped.
        int param_gen_interpolator{-1};
        // Whether this draw is a point list, which decides what PsParamGen's
        // ZW mean and whether its Y carries the "is a point" sign bit.
        bool param_gen_point{false};
        // The ALPHA TEST, for a PIXEL shader: the fixed-function stage that
        // throws a fragment away when the alpha it exported fails a comparison
        // against a reference value (RB_COLORCONTROL / RB_ALPHA_REF).
        //
        // It is part of the SHADER and not of the pipeline because Vulkan has
        // no such stage - it has to become a discard - so a guest shader run
        // under two different alpha tests is two modules, and the cache key has
        // to say so.
        //
        // `alpha_test_func` is a Xenos CompareFunction: 0 never, 1 less,
        // 2 equal, 3 lessequal, 4 greater, 5 notequal, 6 greaterequal,
        // 7 always. Nothing is emitted unless `alpha_test` is set, so a title
        // that never enables it gets byte-identical SPIR-V to before this
        // existed - which is what makes adding it safe for the pinned frames.
        bool alpha_test{false};
        uint8_t alpha_test_func{7};
        float alpha_test_ref{0.0f};
        // WHITTY_DEBUG_TINT diagnostic (see shader_translator::emit_debug_tint):
        // overwrites a pixel shader's exported RGB with a fixed, unmistakable
        // colour, leaving the alpha (and therefore the alpha test and any
        // blending) untouched. The SAME colour for every shader every time -
        // not one baked value per draw - which is what keeps this from costing
        // a shader recompile per draw: the option is read once from the
        // environment and never changes for the life of the process, so it is
        // not part of the shader cache key either.
        bool debug_tint{false};
    };
    std::vector<uint32_t> translate(const shader_program& program,
                                    uint32_t temp_register_count,
                                    const options& opts);

    // The interpolator indices the last translated VERTEX shader exports, in
    // ascending order. Feed these to its paired pixel shader.
    const std::vector<uint32_t>& interpolators() const noexcept {
        return m_interpolators;
    }

    // The vertex attributes the last translated shader reads, in the order its
    // vfetch instructions appear. The backend must describe exactly these, in
    // this order, or the shader reads a different attribute than it asked for.
    const std::vector<vertex_input>& vertex_inputs() const noexcept {
        return m_vertex_inputs;
    }

    // Whether the last translated VERTEX shader exports a point size. A point
    // list drawn from such a shader takes its sprite size per vertex; one from
    // a shader that does not takes PA_SU_POINT_SIZE for every point.
    bool writes_point_size() const noexcept { return m_writes_point_size; }

    // The texture fetch constant slots the last translated shader samples, in
    // ascending order. These are the bindings its descriptor set must provide:
    // a set bound with fewer than the shader declares is invalid, and one bound
    // with different indices samples the wrong texture.
    std::vector<uint32_t> texture_slots() const;

    // What each of those slots' sampling instructions asked for, in the same
    // order as texture_slots(). Mostly "whatever the fetch constant says",
    // which is the hardware's default and not a missing value: it is the
    // shader deferring, and the renderer resolves it against the constant.
    std::vector<sampler_override> texture_filters() const;

    // Whether a control-flow opcode's *semantics* survive the FLAT
    // translation - the fallback that walks every exec block in order and
    // ignores the branches between them.
    //
    // The distinction is the whole point of counting any of this. An exec
    // block reached by a dropped `loop_start` still has its instructions
    // translated, so every other number on a frame-dump line - alu, tfetch,
    // UNSUPPORTED - looks exactly as it does for a shader with no control flow
    // at all. The body simply runs once instead of eight times, or both sides
    // of a branch run instead of one, and nothing anywhere says so. A count
    // that only ever reports the opcodes it knows about is a counter reporting
    // a falsehood, which is this project's most expensive bug class.
    static bool honours_control_flow(const cf_instruction& cf) noexcept;

    // How many of the last translated shader's control-flow instructions had
    // their semantics dropped. Non-zero means the module computes something
    // the console did not. Zero when the program structured, which is the
    // normal outcome.
    std::size_t untranslated_control_flow() const noexcept {
        return m_untranslated_control_flow;
    }

    // Which opcodes those were, as one bit per cf_opcode value. Reported
    // alongside the count for the same reason the unsupported ALU opcodes are:
    // a count says a shader is wrong, the opcodes say what to go and build.
    uint32_t untranslated_control_flow_opcodes() const noexcept {
        return m_untranslated_control_flow_opcodes;
    }

    // Whether the last translated shader's control flow was expressed as
    // STRUCTURED SPIR-V - real loops and real branches - rather than
    // flattened. False is not a failure to translate: the module is still
    // emitted and still valid. It is a statement that the module runs every
    // block unconditionally, which is what the count above quantifies.
    bool structured_control_flow() const noexcept {
        return m_structured_control_flow;
    }

    // Texture fetch instructions this translator did NOT emit a sample for.
    // Non-zero means the shader draws with a register the fetch never wrote -
    // geometry appears, the picture does not, and nothing else in the pipeline
    // has any way to know. A volume texture is the one case that reaches this
    // today; a stacked one does not, and used to.
    std::size_t skipped_texture_fetches() const noexcept {
        return m_skipped_texture_fetches;
    }

private:
    // How a vector opcode maps to SPIR-V.
    enum class op_kind : uint8_t {
        unsupported, // not translated yet
        core,        // a core binary op (OpFAdd, OpFMul)
        ext,         // an OpExtInst into GLSL.std.450
        dot,         // a dot product broadcast to the written components
        compare,     // a per-component compare yielding 1.0 / 0.0
        condition,   // per component: src0 <op> 0 ? src1 : src2
        dot2_add,    // src0.x*src1.x + src0.y*src1.y + src2.x, broadcast
        // max4: the largest of the four components, broadcast.
        max_of_four,
        // cube: the first half of a cube-map lookup. Picks the major axis of a
        // direction vector and returns the face's 2D coordinate, twice the
        // major axis (which the shader reciprocates to divide by) and the face
        // number. One instruction, three cases, and no way to approximate it.
        cube_face,
        // kill_*: discard this fragment where ANY component compares true, and
        // leave 0.0 in the destination. A kill that is dropped does not make a
        // shader slightly wrong - the pixels it was supposed to remove are all
        // drawn, so an alpha-tested surface comes out as opaque shards.
        kill,
        // max_a: a component-wise max that also writes the ADDRESS REGISTER
        // a0, from src0's W component. The vector half of the maxas family.
        max_address,
        // The predicate PUSH half of the predicate stack: setp_*_push. It sets
        // p0 from the W components and returns a running counter built from the
        // X ones, which is what setp_pop later unwinds. `op` is the comparison
        // src1 is tested with; src0 is always tested against equality with zero.
        push_predicate,
        // dst: the distance vector for a fixed-function attenuation term -
        // (1, src0.y*src1.y, src0.z, src1.w). Four components from four
        // different places, so it has no component-wise form.
        distance_vector,
    };
    struct vector_op {
        op_kind kind{op_kind::unsupported};
        uint32_t op{0};      // core/compare opcode, or GLSL.std.450 number
        uint32_t sources{0}; // number of source operands
        // For `dot`, how many components take part: dp4 uses all four, dp3 the
        // first three. Dotting all four of a dp3 folds in a w the shader never
        // meant to contribute, which shifts a normal or a distance slightly and
        // looks like imprecision rather than like the wrong instruction.
        uint32_t components{4};
    };
    static vector_op op_for(alu_vector_opcode opcode) noexcept;

    // Loads a source operand's vec4 - a temp register variable or an indexed
    // read of the constant buffer - without any modifiers.
    uint32_t load_register_vec4(const alu_source& source);
    // Whether a source operand is available (an in-range temp or constant).
    bool source_in_range(const alu_source& source) const;
    // Loads a source and applies its swizzle and negate. Returns a vec4 id.
    uint32_t load_source(const alu_source& source);
    // Writes `value` into the destination register's variable under `mask`.
    void store_masked(uint32_t dest_var, uint32_t value, uint8_t mask);
    // Writes a TEXTURE fetch's sampled vec4 into a register under the
    // instruction's own DESTINATION SWIZZLE - three bits per component of the
    // register, naming a component of the sample, the constant 0 or 1, or KEEP.
    //
    // A vertex fetch reads the same encoding and does not come through here;
    // see translate_vertex_fetch for why that duplication is on purpose.
    //
    // Storing the sample whole instead is right for the identity encoding and
    // wrong for every other one, and the way it is wrong is invisible: a
    // shader that samples three planes of a video frame into three components
    // of ONE register, keeping the other components, has its coordinate in
    // that same register. Overwriting it makes the second and third fetch
    // sample wherever the first one's texel happened to point, so a whole
    // movie decodes to one flat colour that still changes frame to frame.
    void store_fetch_result(uint32_t dest_var, uint32_t sample,
                            uint16_t dst_swizzle);
    // Runs `store` unconditionally, or - when the instruction is predicated -
    // inside a structured `if` on the predicate register, emitting the merge and
    // leaving the merge block current.
    void predicated(bool is_predicated, bool condition,
                    const std::function<void()>& store);
    // The same, gated on an already-computed bool id. 0 runs unconditionally.
    void predicated(uint32_t gate, const std::function<void()>& store);
    // Reads p0 into a bool id, negated when the instruction executes on a
    // CLEAR predicate.
    uint32_t predicate_gate(bool condition);
    // Discards the fragment where `condition` (a bool id) holds, as a
    // structured `if` whose taken branch ends in OpKill. Does nothing outside a
    // fragment shader, where OpKill is not a valid instruction.
    void kill_fragment(uint32_t condition);
    // Both halves of one co-issued ALU instruction, sharing one reading of the
    // predicate register.
    //
    // The reading has to happen before either half runs, because a half may be
    // a member of the predicate family and write p0 itself: gating an
    // instruction's own store on the value that same instruction just produced
    // makes it self-fulfilling, and a predicated setp is exactly where the
    // predicate stack is used.
    void translate_alu(const alu_instruction& alu);
    // A vec4 with every component set to `value` (a splat constant).
    uint32_t vec4_splat(float value);
    // Broadcasts a scalar value id into a vec4.
    uint32_t broadcast(uint32_t scalar);
    // Extracts one component (a float) from a loaded vec4.
    uint32_t extract_component(uint32_t vec, uint32_t component);

    // How a scalar opcode maps to SPIR-V.
    enum class scalar_kind : uint8_t {
        unsupported,
        reciprocal,    // 1 / w
        unary_ext,     // OpExtInst f(w)
        binary_core,   // f(w, x)
        binary_ext,    // OpExtInst f(w, x)
        binary_cmp,    // compare(w, x) -> 1.0 / 0.0
        set_predicate, // compare(w, 0) -> p0; result = p0 ? 0.0 : 1.0
        // The rest of the predicate-stack family. Each writes p0 AND produces
        // an ordinary scalar result, and the result is not decoration: the
        // push/pop pair keeps its nesting depth in a REGISTER, so a pop whose
        // destination was never written unwinds a counter nothing incremented.
        predicate_invert,  // setp_inv:  p0 = w == 1; = p0 ? 0 : (w == 0 ? 1 : w)
        predicate_pop,     // setp_pop:  t = w - 1; p0 = t <= 0; = p0 ? 0 : t
        predicate_clear,   // setp_clr:  p0 = false; = FLT_MAX. Reads no operand
        predicate_restore, // setp_rstr: p0 = w == 0; = p0 ? 0 : w
        // kills_*: the scalar kill. `op` compares the operand with 0.0, except
        // kills_one, which compares it with 1.0.
        kill_scalar,
        kill_scalar_one,
        // f(w, ps): the second operand is the PREVIOUS scalar result rather
        // than anything named by this instruction. adds_prev and its siblings
        // are how a shader chains a running scalar total across instructions.
        binary_prev,
        // f(constant.a, temp.b): the *sc forms, whose one source field is split
        // into a constant operand and a temporary-register operand.
        constant_pair,
        // maxas/maxasf: an ordinary two-component max whose real purpose is
        // the side effect - it writes the ADDRESS REGISTER a0. `op` says which
        // way the value is rounded on the way in.
        max_address,
        // muls_prev2: src0.a * ps, forced to -FLT_MAX when the surface faces
        // away from the light (src0.b <= 0) or either input has gone
        // non-finite. The scalar half of a LIT.
        multiply_previous_lit,
        // retain_prev: dest = ps. Named for what it does to ps - nothing -
        // rather than for what it does to the destination, which is why it is
        // usually a shader's way of spelling "no scalar operation" and is
        // occasionally a real copy.
        retain_previous,
    };
    struct scalar_op {
        scalar_kind kind{scalar_kind::unsupported};
        uint32_t op{0};
    };
    static scalar_op scalar_op_for(alu_scalar_opcode opcode) noexcept;

    void translate_vector(const alu_instruction& alu);
    void translate_scalar(const alu_instruction& alu);
    void translate_texture_fetch(const texture_fetch_instruction& tf);
    // Diagnostic only - see WHITTY_FETCH_CONSTANT in the .cpp.
    uint32_t forced_fetch_constant();
    static bool show_texcoord();
    void translate_vertex_fetch(const vertex_fetch_instruction& vf);
    // Walks the shader before translation to find every vfetch, resolving mini
    // fetches against the full fetch they follow. The input variables have to
    // be declared - and named in the entry point's interface - before any
    // instruction is emitted, so this cannot be done as they are encountered.
    void collect_vertex_inputs(const shader_program& program);

    // Emits the module preamble, function header, and variable declarations for
    // a `type` shader with `temp_register_count` temps. Leaves the entry block
    // current, ready for instructions.
    void begin_function(uint32_t temp_register_count, shader_type type);
    // Closes the function and returns the assembled module.
    std::vector<uint32_t> end_function();
    // Translates one decoded shader instruction (ALU or fetch).
    void translate_instruction(const shader_instruction& instruction);

    // The 2D sampled-image binding for a texture fetch constant, created lazily.
    uint32_t sampled_image_for(uint32_t fetch_constant_index);

    // The output variable for an export index, or 0 if that export is not one
    // this shader routes.
    uint32_t export_var_for(uint32_t index) const;

    spirv_builder m_b;
    uint32_t m_float_type{0};
    uint32_t m_vec4_type{0};
    uint32_t m_vec4_ptr_type{0};
    uint32_t m_glsl_ext{0}; // GLSL.std.450 import id
    std::vector<uint32_t> m_temp_vars;
    std::map<uint32_t, uint32_t> m_export_vars; // export index -> output var

    // The float-constant uniform buffer: struct { vec4 c[256]; } at set 0,
    // binding 0. Set up in translate(); read from by load_source for constant
    // operands.
    uint32_t m_const_buffer_var{0};
    uint32_t m_uniform_vec4_ptr{0};
    uint32_t m_const_member_zero{0};
    // Added to every constant index this shader reads: 0 for a vertex shader,
    // kPixelConstantBase for a pixel shader.
    uint32_t m_constant_base{0};
    void setup_constant_buffer();

    // The ADDRESS REGISTER (a0): a function-local signed int, written by the
    // maxas family and read as an offset into the float constant bank -
    // `c[a0 + n]`. That is how a shader reaches a matrix palette, a light
    // array or per-instance data, so dropping it does not shade a surface
    // slightly wrong: every vertex transformed through an indexed constant
    // gets whatever the register happened to hold, and the geometry comes out
    // as shards.
    //
    // Declared only in a shader that WRITES it, for the same reason ps below
    // is: a0 starts at zero and nothing else can change it, so in a shader
    // with no maxas `c[a0 + n]` is exactly `c[n]` and the module is
    // byte-for-byte what it was before a0 existed.
    uint32_t m_address_var{0};
    bool m_writes_address_register{false};
    static bool writes_address_register(const alu_instruction& alu) noexcept;
    // Computes a0's new value from a float: floor it (rounding to nearest
    // first for maxas, truncating downwards for maxasf), clamp to the range
    // the hardware's register holds, and convert to an int. Returns the id;
    // storing it is the caller's, so the store can sit inside the
    // instruction's predicate.
    uint32_t address_register_value(uint32_t scalar, bool round_nearest);

    // The predicate register (p0): a function-local bool the setp scalar ops
    // write and predicated instructions branch on.
    uint32_t m_predicate_var{0};
    // The reading of p0 the ALU instruction currently being translated is gated
    // on, or 0 when it is not predicated. See translate_alu.
    uint32_t m_predicate_gate{0};
    // Which stage this module is, so the instructions that only exist in one of
    // them - the pixel kill - are emitted only there.
    shader_type m_shader_type{shader_type::pixel};
    // ps, the previous scalar result. Real per-shader state, not a shorthand:
    // EVERY scalar operation writes it and the _prev forms read it, which is
    // also why retain_prev - "no scalar operation" - is named the way it is.
    // Without it a shader that accumulates across instructions loses every
    // step but the last one it happened to spell out in full.
    uint32_t m_previous_scalar_var{0};
    // Whether this shader contains a _prev form at all. ps is only observable
    // through one, so a shader with none needs no store per scalar op - and
    // most shaders have none, so maintaining it regardless would add a store to
    // every scalar operation in the frame for nothing.
    bool m_reads_previous_scalar{false};
    // Does any scalar op in this program read ps?
    static bool reads_previous_scalar(const alu_instruction& alu) noexcept;

    // 2D sampled textures, one per fetch constant index used, created lazily.
    uint32_t m_sampled_image_type{0};
    uint32_t m_sampled_image_ptr_type{0};
    std::map<uint32_t, uint32_t> m_texture_vars; // fetch index -> texture var
    // What each of those slots' fetch instructions asked of the sampler. The
    // first instruction to sample a slot decides: the console can want two
    // different samplers on one texture within a shader, but a slot here is one
    // descriptor, and the first sample is the one whose choice is knowable
    // without splitting the binding.
    std::map<uint32_t, sampler_override> m_texture_filters;

    // Vertex inputs, collected before translation and declared in
    // begin_function. `m_next_vertex_fetch` walks them as the vfetch
    // instructions are translated - the collection pass and the translation
    // pass visit the shader in the same order, so position in that order is
    // what ties an instruction to its input.
    std::vector<vertex_input> m_vertex_inputs;
    std::vector<uint32_t> m_vertex_input_vars;
    std::size_t m_next_vertex_fetch{0};

    // See skipped_texture_fetches().
    std::size_t m_skipped_texture_fetches{0};
    // See untranslated_control_flow().
    std::size_t m_untranslated_control_flow{0};
    uint32_t m_untranslated_control_flow_opcodes{0};
    bool m_structured_control_flow{true};

    // ---- control flow -------------------------------------------------
    //
    // Xenos control flow is a flat list of branches; SPIR-V has no branches,
    // only nested constructs with a declared merge point. Reconciling the two
    // is the whole job here, and it is done by RECOGNITION rather than by
    // lowering: the shader compiler that produced this microcode emitted it
    // from structured source, so the branches come back out as an `if`, an
    // `if`/`else` and a counted loop, properly nested, essentially always.
    //
    // Planning is separate from emission for one reason: a program that does
    // not structure must fall back to the flat walk WITHOUT having emitted
    // half a loop first. So the plan is built and checked in full, and only
    // then turned into SPIR-V.
    struct cf_node {
        enum class kind : uint8_t {
            // An exec instruction and the block it dispatches, with its own
            // condition (a boolean constant or the predicate) applied.
            block,
            // loop_start .. loop_end over `body`.
            loop,
            // A forward cond_jmp: `body` runs when the jump is NOT taken,
            // `alternative` when it is (empty for a plain `if`).
            branch,
        };
        kind node_kind{kind::block};
        uint32_t cf_index{0};      // the CF instruction this came from
        uint32_t partner_index{0}; // the matching loop_end, for a loop
        std::vector<cf_node> body;
        std::vector<cf_node> alternative;
    };
    // Builds the plan for control-flow instructions [begin, end). Returns
    // false the moment anything does not nest, leaving `out` unusable.
    static bool plan_control_flow(const std::vector<cf_instruction>& cf,
                                  uint32_t begin, uint32_t end,
                                  std::vector<cf_node>& out);
    // Emits a planned range. `depth` is 0 at the top level, which is the only
    // place a shader-ending exec needs no explicit return.
    void emit_control_flow(const shader_program& program,
                           const std::vector<int>& exec_block_of_cf,
                           const std::vector<cf_node>& nodes, uint32_t depth,
                           uint32_t last_top_level_cf);
    // Emits one exec block's instructions, wrapped in its condition.
    void emit_exec_block(const shader_program& program,
                         const std::vector<int>& exec_block_of_cf,
                         uint32_t cf_index, uint32_t depth,
                         uint32_t last_top_level_cf);
    // The bool id a conditional exec / jump runs on, or 0 for unconditional.
    uint32_t control_flow_gate(const cf_instruction& cf);
    // `if (gate) then_body else else_body`, as a structured selection. A zero
    // gate runs `then_body` unconditionally and must have no else.
    void emit_selection(uint32_t gate, const std::function<void()>& then_body,
                        const std::function<void()>& else_body);

    // The boolean and loop constant buffer: struct { uvec4 v[10]; } at set 0,
    // binding 1 - two uvec4 of boolean bits, then eight of loop constants.
    //
    // A SECOND buffer rather than more members on the float bank, so that a
    // shader which reads neither is byte-for-byte the module it was before any
    // of this existed. That is not tidiness: the two Geometry Wars gates are
    // frame hashes, and the only way to know a translator change cannot have
    // moved them is for the modules they use to be identical.
    uint32_t m_bool_loop_var{0};
    uint32_t m_uniform_uint_ptr{0};
    uint32_t setup_bool_loop_buffer();
    // Bit `index` of the boolean bank, as a bool id.
    uint32_t load_bool_constant(uint32_t index);
    // Loop constant `id`, as a uint id.
    uint32_t load_loop_constant(uint32_t id);

    // The LOOP REGISTER aL: a function-local int, set by loop_start, stepped
    // by loop_end, and read by a `c[aL + n]` operand. Declared only in a
    // shader that has a loop - see m_address_var for the same rule and the
    // same reason.
    uint32_t m_loop_address_var{0};
    // Whether this shader has a loop at all, settled before the preamble is
    // emitted because that is where aL would have to be declared.
    bool m_uses_loop_register{false};
    // One trip counter per loop in the program. SPIR-V requires every
    // function-scope variable to be declared in the function's FIRST block, so
    // these cannot be created at the loop; they are allocated in the preamble
    // and handed out in the order the loops are emitted.
    std::vector<uint32_t> m_loop_counter_vars;
    std::size_t m_next_loop_counter{0};

    // Applied to the position export; see viewport_transform.
    viewport_transform m_viewport;
    // Maps a window-space position to clip space. Returns the id to store.
    uint32_t apply_viewport(uint32_t position);
    // Negates a clip-space position's Y. The console's clip space puts -1 at
    // the BOTTOM of the screen and Vulkan's puts it at the top, so a shader
    // that emits clip space directly - one whose draw left the hardware
    // viewport enabled - needs the axis reversed and nothing else. This is the
    // other half of the rule apply_viewport applies: a title that emits window
    // space for every draw never reaches this path, which is why the flip can
    // be missing here and look perfectly correct on such a title.
    uint32_t flip_clip_y(uint32_t position);

    // Interpolators: written by a vertex shader, read by its pixel shader.
    std::vector<uint32_t> m_interpolators;
    // For a pixel shader, the input variable seeding each interpolator's
    // register, in the same order as m_interpolators.
    std::vector<uint32_t> m_interpolator_vars;
    // Collects the export indices below 16 a vertex shader writes, and notes
    // whether it also writes the point size export.
    void collect_interpolators(const shader_program& program);

    // Point sprites. A vertex shader's exported size leaves at
    // kPointSizeLocation for the geometry stage to expand; a pixel shader's
    // PsParamGen register is built from the fragment coordinate and the sprite
    // coordinate the geometry stage hands it.
    bool m_writes_point_size{false};
    uint32_t m_point_size_var{0};
    int m_param_gen_interpolator{-1};
    bool m_param_gen_point{false};
    uint32_t m_frag_coord_var{0};
    uint32_t m_point_coord_var{0};
    // The alpha test, emitted as a discard at the end of a pixel shader's main.
    bool m_alpha_test{false};
    uint8_t m_alpha_test_func{7};
    float m_alpha_test_ref{0.0f};
    // Emits the discard. No-op unless m_alpha_test is set on a pixel shader
    // whose colour export exists.
    void emit_alpha_test();
    // WHITTY_DEBUG_TINT diagnostic - see options::debug_tint.
    bool m_debug_tint{false};
    // Overwrites the exported colour's RGB with a fixed, saturated colour,
    // leaving alpha alone. No-op unless m_debug_tint is set on a pixel shader
    // whose colour export exists. Run BEFORE emit_alpha_test so the test still
    // sees the shader's own original alpha, not this diagnostic's.
    void emit_debug_tint();
    // The vertex index the console hands a vertex shader in r0.x. It is not
    // only the vfetch address - a shader may compute with it, and expanding a
    // quad from its corner number (index & 3) is the common case - so leaving
    // r0 at zero collapses every vertex of such a draw onto one point.
    uint32_t m_vertex_index_var{0};
    // Fills the PsParamGen register, after the interpolators have been loaded
    // so it wins over any vertex-shader output at the same index - which is what
    // the hardware does, the generated value replacing the interpolator.
    void store_param_gen();
};

// The geometry shader that completes a Xenos rectangle list.
//
// A rectangle list hands the GPU THREE vertices per rectangle and leaves the
// fourth implied: it is the mirror of one vertex across the rectangle's longest
// edge - the diagonal. Which edge is longest is only known once the three have
// been through the vertex shader, so the fourth vertex cannot be produced by
// reindexing on the CPU. Something has to run after the vertex shader and
// before the rasteriser, which is what a geometry stage is for.
//
// Three vertices means three possible diagonals, and all three occur:
//
//   0---1        1---2        2---0
//   |  /|        |  /|        |  /|
//   | / |        | / |        | / |
//   2--[3]       0--[3]       1--[3]
//   12 longest   20 longest   01 longest
//   strip 0123   strip 1203   strip 2013
//
// In every case the strip is the three vertices ROTATED so that the one
// opposite the longest edge comes first, and the fourth vertex is
// (second - first) + third. So the shader is: measure the three squared edge
// lengths of the transformed positions, pick the rotation, and emit four
// vertices as a triangle strip - the triangle that was in the vertex buffer,
// plus the one that completes the rectangle.
//
// `interpolators` must be exactly what the paired VERTEX shader exports (its
// interpolators()). This stage sits between the vertex and pixel shaders and
// has to pass through everything the two agree on: an output the pixel shader
// reads and the geometry shader does not write is not a pipeline Vulkan will
// accept. The fourth vertex's interpolators are extrapolated the same way its
// position is, which is what makes a textured rectangle's second triangle
// sample the right half of its texture rather than repeat the first.
std::vector<uint32_t> build_rectangle_geometry_shader(
    const std::vector<uint32_t>& interpolators);

// How big a point sprite is, and where its size comes from.
//
// The console rasterises a point list as SPRITES: one vertex becomes a screen-
// aligned square whose size is either PA_SU_POINT_SIZE, shared by the whole
// draw, or a per-vertex value the vertex shader exports - clamped to the range
// PA_SU_POINT_MINMAX gives. Both registers hold HALF the size in 1/16ths of a
// pixel, so a diameter in pixels is the field times 2/16.
//
// Getting this wrong is invisible in the register trace and obvious in the
// picture: a title that exports the size per vertex leaves PA_SU_POINT_SIZE at
// one pixel, so reading only the register draws every sprite as a single dot.
struct point_sprite_params {
    // The whole-draw diameter in pixels, used when the vertex shader exports
    // none.
    float constant_diameter[2]{1.0f, 1.0f};
    // The range a per-vertex diameter is clamped to. Ignored when max is not
    // above min, which is how a title that never sets the register is left
    // unclamped rather than clamped to zero and made invisible.
    float min_diameter{0.0f};
    float max_diameter{0.0f};
    // The viewport's extent in pixels, which turns a size in pixels into one in
    // clip space.
    float viewport[2]{1.0f, 1.0f};
    // Whether the size comes from the vertex shader's export 63.
    bool from_vertex{false};

    bool operator<(const point_sprite_params& other) const noexcept;
};

// The geometry shader that expands a Xenos point list into sprites.
//
// A point arrives as one vertex and has to leave as a four-vertex triangle
// strip: the square the hardware would have rasterised, centred on the point,
// `diameter` pixels across. The expansion has to happen after the vertex shader
// - the size can be a value the vertex shader computes - and the size is in
// SCREEN pixels while the position is in clip space, so the half-size is scaled
// by (1 / viewport extent) and by the vertex's own w to survive the perspective
// divide.
//
// It also writes the sprite's texture coordinate to kPointCoordLocation, which
// is what the pixel shader's PsParamGen register reads. Without it a sprite is
// a flat square of one texel rather than a shaped, textured blob.
//
// `interpolators` must be exactly what the paired vertex shader exports; they
// are passed through unchanged, being constant across a point.
std::vector<uint32_t> build_point_geometry_shader(
    const std::vector<uint32_t>& interpolators,
    const point_sprite_params& params);

// The boolean and loop constant bank, as the shader sees it: 8 dwords of
// boolean bits (256 of them, one per possible `if (b<n>)`) followed by 32 loop
// constants, laid out as 10 uvec4 in one uniform buffer at set 0, binding 1.
inline constexpr uint32_t kBoolConstantDwords = 8;
inline constexpr uint32_t kLoopConstantDwords = 32;
inline constexpr uint32_t kBoolLoopDwords =
    kBoolConstantDwords + kLoopConstantDwords;
inline constexpr uint32_t kBoolLoopVec4Count = kBoolLoopDwords / 4;

// The size of the float constant bank.
//
// 512 vec4s, and the two halves are not interchangeable: a VERTEX shader's
// constant index counts from 0, a PIXEL shader's from 256. Both are written as
// the same 8-bit index in the microcode, so a pixel shader reading its own
// constants out of the lower half finds whatever the vertex shader put there -
// usually zero, which makes a shader that scales by a constant produce black or
// saturate rather than fail.
inline constexpr uint32_t kFloatConstantCount = 512;
// Where a pixel shader's half of that bank begins.
inline constexpr uint32_t kPixelConstantBase = 256;

// The element index each vertex fetch of `program` reads, for vertex indices
// [0, count).
//
// The console's vfetch names a register component to index by - `vfetch dst,
// r0.x` for the ordinary "one record per vertex", which a host input assembler
// reproduces for free from gl_VertexIndex. It does NOT have to be that: a
// sprite batch expands one record into a quad by fetching with r0.x/4, so four
// consecutive vertices read the SAME record and differ only in the corner they
// compute. Indexing that by the vertex index reads three records that belong to
// other sprites, and the quad comes out folded into a sliver of nothing.
//
// Everything the index depends on is known before the first fetch: the vertex
// index in r0.x and the shader's own float constants. So the instructions up to
// that fetch are evaluated here, and the caller gathers the records into the
// order the host input assembler will read them in.
//
// Returns false if the index is just the vertex index (nothing to do) or if the
// expression uses something this cannot evaluate - in both cases the caller
// keeps indexing by the vertex index, which is what it did before.
bool vertex_fetch_index_map(const shader_program& program,
                            const register_file& constants, uint32_t count,
                            std::vector<uint32_t>& out);

// Whether that expression is just the vertex index - true for the overwhelming
// majority of shaders, and for every shader with no vertex fetch at all. Costs
// nothing per draw, so the map above is only built for the shaders that need
// one.
bool vertex_fetch_indexes_by_vertex_index(
    const shader_program& program) noexcept;

} // namespace whitty_xenon::gpu
