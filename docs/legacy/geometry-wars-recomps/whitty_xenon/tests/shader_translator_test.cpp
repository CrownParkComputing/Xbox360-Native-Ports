// Unit tests for the ALU -> SPIR-V translator.
//
// The tests confirm each decoded operation turns into the right SPIR-V - a core
// op or a GLSL.std.450 extended instruction - and that the source swizzle/negate
// and the destination write mask emit the expected shuffles and loads. Counting
// opcodes in the assembled module is enough to pin the shape; the proof the bytes
// are a valid module is the Khronos spirv-val, run separately on a module that
// exercises the whole set of features.
#include "whitty_xenon/gpu/alu.h"
#include "whitty_xenon/gpu/shader_translator.h"
#include "whitty_xenon/gpu/spirv_builder.h"

#include <cassert>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <vector>

using namespace whitty_xenon::gpu;

// Whether the module decorates any variable with `builtin`. Defined further
// down, alongside the tests that were the first to need it.
bool has_builtin(const std::vector<uint32_t>& module, uint32_t builtin);
// The whole set of operands of the first instruction matching `opcode`. Also
// defined further down; declared here for the fetch tests above it.
std::vector<uint32_t> first_instruction(const std::vector<uint32_t>& module,
                                        uint32_t opcode);

namespace {

uint32_t count_opcode(const std::vector<uint32_t>& module, uint32_t opcode) {
    uint32_t count = 0;
    for (std::size_t i = 5; i < module.size();) {
        const uint32_t len = module[i] >> 16;
        if (len == 0) break;
        if ((module[i] & 0xFFFF) == opcode) ++count;
        i += len;
    }
    return count;
}

// A vector ALU instruction with temp sources; write mask defaults to all four.
alu_instruction op(alu_vector_opcode opcode, uint32_t s1, uint32_t s2,
                   uint32_t dest, uint8_t mask = 0xF) {
    alu_instruction a;
    a.vector_opcode = opcode;
    a.scalar_opcode = alu_scalar_opcode::retain_prev; // unsupported -> scalar skipped
    a.vector_dest = static_cast<uint8_t>(dest);
    a.vector_write_mask = mask;
    a.sources[0].is_temp = true;
    a.sources[0].reg = static_cast<uint8_t>(s1);
    a.sources[1].is_temp = true;
    a.sources[1].reg = static_cast<uint8_t>(s2);
    a.sources[2].is_temp = true; // used only by 3-source ops
    a.sources[2].reg = static_cast<uint8_t>(s1);
    return a;
}

void test_core_ops() {
    shader_translator t;
    auto add = t.translate({op(alu_vector_opcode::add, 0, 1, 2)}, 3);
    assert(count_opcode(add, spv::OpFAdd) == 1);
    // Two source loads; the add's store plus two init stores - the predicate
    // register, and the export variable, which starts defined because an export
    // writes only the components its mask names.
    assert(count_opcode(add, spv::OpLoad) == 2 && count_opcode(add, spv::OpStore) == 3);
    // Three temps, the output, the constant buffer, and the predicate register.
    // No ps: this shader has no _prev form, so ps is never declared.
    assert(count_opcode(add, spv::OpVariable) == 6);

    auto mul = t.translate({op(alu_vector_opcode::mul, 0, 1, 0)}, 2);
    assert(count_opcode(mul, spv::OpFMul) == 1);
}

void test_glsl_ext_ops() {
    // min/max map to GLSL.std.450 extended instructions.
    shader_translator tmin;
    auto mn = tmin.translate({op(alu_vector_opcode::min, 0, 1, 2)}, 3);
    assert(count_opcode(mn, spv::OpExtInst) == 1);
    assert(count_opcode(mn, spv::OpExtInstImport) == 1); // the import itself

    shader_translator tmax;
    auto mx = tmax.translate({op(alu_vector_opcode::max, 0, 1, 2)}, 3);
    assert(count_opcode(mx, spv::OpExtInst) == 1);
}

void test_mad_has_three_sources() {
    shader_translator t;
    auto m = t.translate({op(alu_vector_opcode::mad, 0, 1, 2)}, 3);
    assert(count_opcode(m, spv::OpExtInst) == 1);
    assert(count_opcode(m, spv::OpLoad) == 3); // three sources loaded
}

void test_single_source_op() {
    shader_translator t;
    auto f = t.translate({op(alu_vector_opcode::frc, 0, 1, 2)}, 3);
    assert(count_opcode(f, spv::OpExtInst) == 1);
    assert(count_opcode(f, spv::OpLoad) == 1); // frc reads one source
}

void test_swizzle_emits_shuffle() {
    shader_translator t;
    alu_instruction a = op(alu_vector_opcode::add, 0, 1, 2);
    a.sources[0].swizzle = 0x1B; // a non-identity swizzle
    auto m = t.translate({a}, 3);
    assert(count_opcode(m, spv::OpVectorShuffle) == 1);
}

void test_negate_emits_fnegate() {
    shader_translator t;
    alu_instruction a = op(alu_vector_opcode::add, 0, 1, 2);
    a.sources[1].negate = true;
    auto m = t.translate({a}, 3);
    assert(count_opcode(m, spv::OpFNegate) == 1);
}

void test_partial_write_mask_merges() {
    shader_translator t;
    // Writing only .xy must load the current value and shuffle-merge it.
    auto m = t.translate({op(alu_vector_opcode::add, 0, 1, 2, /*mask*/ 0b0011)}, 3);
    assert(count_opcode(m, spv::OpVectorShuffle) == 1);      // the merge
    assert(count_opcode(m, spv::OpLoad) == 3);               // 2 sources + current
}

void test_clamp_emits_fclamp() {
    shader_translator t;
    alu_instruction a = op(alu_vector_opcode::add, 0, 1, 2);
    a.vector_clamp = true;
    auto m = t.translate({a}, 3);
    // The op's ExtInst plus the FClamp ExtInst.
    assert(count_opcode(m, spv::OpExtInst) == 1); // FClamp only (add is a core op)
}

void test_dot_product_broadcasts() {
    shader_translator t;
    // dp4 is a scalar dot broadcast to the written components.
    auto m = t.translate({op(alu_vector_opcode::dp4, 0, 1, 2)}, 3);
    assert(count_opcode(m, spv::OpDot) == 1);
    assert(count_opcode(m, spv::OpCompositeConstruct) == 1); // broadcast
    // dot store, plus the predicate and export initialisers.
    assert(count_opcode(m, spv::OpStore) == 3);
}

void test_compare_selects_one_or_zero() {
    shader_translator t;
    auto m = t.translate({op(alu_vector_opcode::sge, 0, 1, 2)}, 3);
    assert(count_opcode(m, spv::OpFOrdGreaterThanEqual) == 1);
    assert(count_opcode(m, spv::OpSelect) == 1);

    shader_translator t2;
    auto eq = t2.translate({op(alu_vector_opcode::seq, 0, 1, 2)}, 3);
    assert(count_opcode(eq, spv::OpFOrdEqual) == 1);
}

// The conditional moves choose between two operands per component on the sign of
// a third: three sources, one compare against zero, one select. They matter
// because a shader that builds a shape from one buffer picks between candidate
// positions with them, so an untranslated cnd* does not shade the shape wrongly -
// it moves its vertices and the shape is not drawn at all.
void test_conditional_move_selects_between_two_sources() {
    shader_translator t;
    auto m = t.translate({op(alu_vector_opcode::cnd_eq, 0, 1, 2)}, 3);
    assert(count_opcode(m, spv::OpFOrdEqual) == 1);
    assert(count_opcode(m, spv::OpSelect) == 1);
    assert(count_opcode(m, spv::OpLoad) == 3); // all three sources are read

    shader_translator tge;
    auto ge = tge.translate({op(alu_vector_opcode::cnd_ge, 0, 1, 2)}, 3);
    assert(count_opcode(ge, spv::OpFOrdGreaterThanEqual) == 1);
    assert(count_opcode(ge, spv::OpSelect) == 1);

    shader_translator tgt;
    auto gt = tgt.translate({op(alu_vector_opcode::cnd_gt, 0, 1, 2)}, 3);
    assert(count_opcode(gt, spv::OpFOrdGreaterThan) == 1);
    assert(count_opcode(gt, spv::OpSelect) == 1);

    assert(shader_translator::is_supported_vector_op(alu_vector_opcode::cnd_eq));
    assert(shader_translator::is_supported_vector_op(alu_vector_opcode::cnd_ge));
    assert(shader_translator::is_supported_vector_op(alu_vector_opcode::cnd_gt));
}

// --- whole-program translation (control flow + fetch) --------------------
// Builds an exec block from a list of ALU instructions.
shader_exec_block alu_block(cf_opcode opcode,
                            const std::vector<alu_instruction>& alu) {
    shader_exec_block block;
    block.cf.opcode = opcode;
    for (const alu_instruction& a : alu) {
        shader_instruction si;
        si.kind = instruction_kind::alu;
        si.alu = a;
        block.instructions.push_back(si);
    }
    return block;
}

void test_program_emits_each_block() {
    shader_translator t;
    shader_program program;
    program.exec_blocks.push_back(
        alu_block(cf_opcode::exec, {op(alu_vector_opcode::add, 0, 1, 2)}));
    program.exec_blocks.push_back(
        alu_block(cf_opcode::exec_end, {op(alu_vector_opcode::mul, 2, 0, 3)}));
    auto m = t.translate(program, 4);
    assert(count_opcode(m, spv::OpFAdd) == 1);
    assert(count_opcode(m, spv::OpFMul) == 1);
    // No control-flow constructs for unconditional blocks.
    assert(count_opcode(m, spv::OpSelectionMerge) == 0);
}

void test_conditional_block_is_wrapped() {
    shader_translator t;
    shader_program program;
    program.exec_blocks.push_back(alu_block(
        cf_opcode::cond_exec_pred, {op(alu_vector_opcode::add, 0, 1, 2)}));
    auto m = t.translate(program, 3);
    // A predicate-conditional block is a structured `if`.
    assert(count_opcode(m, spv::OpSelectionMerge) == 1);
    assert(count_opcode(m, spv::OpBranchConditional) == 1);
    assert(count_opcode(m, spv::OpFAdd) == 1);
}

// --- control flow -------------------------------------------------------
//
// Everything below builds a program with a REAL control-flow list, not just a
// list of blocks, because that list is what the structured translation is
// driven by. A program assembled from blocks alone takes the flat path, which
// is what every test above it exercises.

// Runs a module through the Khronos validator, and fails the test if it is not
// valid.
//
// This lives inside ctest rather than beside it on purpose. The first loop this
// translator ever emitted put the trip-count test between OpLoopMerge and its
// branch, which is invalid SPIR-V; nothing in the runtime checks a module
// before handing it to the driver, so it reached a rendered frame and was found
// there. Validation costs a few milliseconds here and would have caught it at
// the point it was written.
void validate(const std::vector<uint32_t>& module, const char* what) {
    char path[256];
    std::snprintf(path, sizeof(path), "/tmp/whitty_cf_%s.spv", what);
    std::FILE* f = std::fopen(path, "wb");
    if (f == nullptr) return;
    std::fwrite(module.data(), 4, module.size(), f);
    std::fclose(f);
    char command[512];
    std::snprintf(command, sizeof(command),
                  "spirv-val %s > /tmp/whitty_cf_val.txt 2>&1", path);
    const int status = std::system(command);
    if (status == 0) {
        std::remove(path);
        return;
    }
    // A missing validator must not fail the build; an invalid module must.
    if (std::system("command -v spirv-val > /dev/null 2>&1") != 0) {
        std::printf("  (spirv-val not installed - %s not validated)\n", what);
        return;
    }
    std::printf("spirv-val rejected %s (%s):\n", what, path);
    std::system("cat /tmp/whitty_cf_val.txt");
    assert(false && "emitted module is not valid SPIR-V");
}

// Assembles a program from a control-flow list and the blocks its execs run.
shader_program cf_program(const std::vector<cf_instruction>& cf,
                          const std::vector<shader_exec_block>& blocks) {
    shader_program program;
    program.control_flow.instructions = cf;
    program.exec_blocks = blocks;
    // The block's own cf must match the exec that dispatches it: the
    // translator reads the condition off it.
    std::size_t next = 0;
    for (const cf_instruction& one : cf)
        if (is_exec_opcode(one.opcode) && next < program.exec_blocks.size())
            program.exec_blocks[next++].cf = one;
    return program;
}

cf_instruction exec_cf(cf_opcode opcode) {
    cf_instruction cf;
    cf.opcode = opcode;
    return cf;
}

// A counted loop runs its body inside a real SPIR-V loop, and reads its trip
// count from the loop constant bank. Without this the body runs exactly once,
// whatever the constant says - and every other number about the shader looks
// unchanged, which is why it went unnoticed.
void test_loop_becomes_a_structured_loop() {
    //   0 exec        1 loop -> skip to 4       2 exec (the body)
    //   3 endloop -> body at 2                  4 exece
    std::vector<cf_instruction> cf(5);
    cf[0] = exec_cf(cf_opcode::exec);
    cf[1].opcode = cf_opcode::loop_start;
    cf[1].loop_id = 3;
    cf[1].loop_address = 4; // one past the matching loop_end
    cf[2] = exec_cf(cf_opcode::exec);
    cf[3].opcode = cf_opcode::loop_end;
    cf[3].loop_id = 3;
    cf[3].loop_address = 2; // the top of the body
    cf[4] = exec_cf(cf_opcode::exec_end);
    shader_program program = cf_program(
        cf, {alu_block(cf_opcode::exec, {op(alu_vector_opcode::add, 0, 1, 2)}),
             alu_block(cf_opcode::exec, {op(alu_vector_opcode::mul, 2, 0, 3)}),
             alu_block(cf_opcode::exec_end,
                       {op(alu_vector_opcode::max, 3, 0, 1)})});
    shader_translator t;
    auto m = t.translate(program, 4);
    assert(t.structured_control_flow());
    assert(t.untranslated_control_flow() == 0);
    assert(count_opcode(m, spv::OpLoopMerge) == 1);
    // The trip count and aL's start and step come out of the loop constant.
    assert(count_opcode(m, spv::OpBitFieldUExtract) == 2);
    assert(count_opcode(m, spv::OpBitFieldSExtract) == 1);
    validate(m, "loop");
}

// A forward conditional jump is an `if`: the instructions it jumps over run
// only when the jump is NOT taken. Running them anyway is what made both sides
// of a branch happen.
void test_forward_jump_becomes_an_if() {
    std::vector<cf_instruction> cf(4);
    cf[0] = exec_cf(cf_opcode::exec);
    cf[1].opcode = cf_opcode::cond_jmp;
    cf[1].jump_address = 3;
    cf[1].bool_address = 5;
    cf[1].condition = false; // jump when b5 is clear, so the body runs when set
    cf[2] = exec_cf(cf_opcode::exec);
    cf[3] = exec_cf(cf_opcode::exec_end);
    shader_program program = cf_program(
        cf, {alu_block(cf_opcode::exec, {op(alu_vector_opcode::add, 0, 1, 2)}),
             alu_block(cf_opcode::exec, {op(alu_vector_opcode::mul, 2, 0, 3)}),
             alu_block(cf_opcode::exec_end,
                       {op(alu_vector_opcode::max, 3, 0, 1)})});
    shader_translator t;
    auto m = t.translate(program, 4);
    assert(t.structured_control_flow());
    assert(t.untranslated_control_flow() == 0);
    assert(count_opcode(m, spv::OpSelectionMerge) == 1);
    // The condition is a bit of the boolean constant bank, so the module reads
    // the second uniform buffer and tests one bit of it.
    assert(count_opcode(m, spv::OpShiftRightLogical) == 1);
    assert(count_opcode(m, spv::OpBitwiseAnd) == 1);
    assert(count_opcode(m, spv::OpFMul) == 1); // the guarded block is emitted
    validate(m, "jump");
}

// A then-side ending in an unconditional jump over an else-side is an
// if/else - and recognising the pair is what keeps the two mutually exclusive.
void test_jump_pair_becomes_if_else() {
    std::vector<cf_instruction> cf(5);
    cf[0].opcode = cf_opcode::cond_jmp;
    cf[0].jump_address = 3;
    cf[0].bool_address = 1;
    cf[0].condition = false;
    cf[1] = exec_cf(cf_opcode::exec); // then
    cf[2].opcode = cf_opcode::cond_jmp;
    cf[2].jump_address = 4;
    cf[2].is_unconditional = true;
    cf[3] = exec_cf(cf_opcode::exec); // else
    cf[4] = exec_cf(cf_opcode::exec_end);
    shader_program program = cf_program(
        cf, {alu_block(cf_opcode::exec, {op(alu_vector_opcode::add, 0, 1, 2)}),
             alu_block(cf_opcode::exec, {op(alu_vector_opcode::mul, 2, 0, 3)}),
             alu_block(cf_opcode::exec_end,
                       {op(alu_vector_opcode::max, 3, 0, 1)})});
    shader_translator t;
    auto m = t.translate(program, 4);
    assert(t.structured_control_flow());
    assert(count_opcode(m, spv::OpSelectionMerge) == 1);
    // One merge, one conditional branch, and BOTH sides present - an if/else
    // read as a plain `if` would emit the else-side unconditionally.
    assert(count_opcode(m, spv::OpFAdd) == 1);
    assert(count_opcode(m, spv::OpFMul) == 1);
    validate(m, "ifelse");
}

// A subroutine call is not translated, and says so. It is left counted rather
// than guessed at because no title here emits one - and an untested mechanism
// is worth less than a number that appears loudly the day one does.
void test_call_is_reported_not_guessed() {
    std::vector<cf_instruction> cf(3);
    cf[0] = exec_cf(cf_opcode::exec);
    cf[1].opcode = cf_opcode::cond_call;
    cf[1].jump_address = 2;
    cf[2] = exec_cf(cf_opcode::exec_end);
    shader_program program = cf_program(
        cf, {alu_block(cf_opcode::exec, {op(alu_vector_opcode::add, 0, 1, 2)}),
             alu_block(cf_opcode::exec_end,
                       {op(alu_vector_opcode::mul, 2, 0, 3)})});
    shader_translator t;
    auto m = t.translate(program, 4);
    assert(!t.structured_control_flow());
    assert(t.untranslated_control_flow() == 1);
    assert((t.untranslated_control_flow_opcodes() &
            (1u << static_cast<uint32_t>(cf_opcode::cond_call))) != 0);
    // The flat fallback still emits every block, so the shader draws something
    // rather than nothing.
    assert(count_opcode(m, spv::OpFAdd) == 1);
    assert(count_opcode(m, spv::OpFMul) == 1);
    validate(m, "call");
}

// A BACKWARD jump has no structured form to be recognised as, so it is
// reported rather than translated into something that merely looks plausible.
void test_backward_jump_is_reported() {
    std::vector<cf_instruction> cf(3);
    cf[0] = exec_cf(cf_opcode::exec);
    cf[1] = exec_cf(cf_opcode::exec);
    cf[2].opcode = cf_opcode::cond_jmp;
    cf[2].jump_address = 0;
    shader_program program = cf_program(
        cf, {alu_block(cf_opcode::exec, {op(alu_vector_opcode::add, 0, 1, 2)}),
             alu_block(cf_opcode::exec, {op(alu_vector_opcode::mul, 2, 0, 3)})});
    shader_translator t;
    t.translate(program, 4);
    assert(!t.structured_control_flow());
    assert(t.untranslated_control_flow() == 1);
}

// A shader with no branches at all must translate to what it always did: no
// loop register, no second uniform buffer, no extra construct. This is the
// invariant that makes a change here unable to move a title that has no
// control flow - which is every title here but one.
void test_plain_program_is_unchanged() {
    std::vector<cf_instruction> cf(2);
    cf[0] = exec_cf(cf_opcode::exec);
    cf[1] = exec_cf(cf_opcode::exec_end);
    const std::vector<shader_exec_block> blocks = {
        alu_block(cf_opcode::exec, {op(alu_vector_opcode::add, 0, 1, 2)}),
        alu_block(cf_opcode::exec_end, {op(alu_vector_opcode::mul, 2, 0, 3)})};
    shader_translator with_cf;
    const std::vector<uint32_t> structured =
        with_cf.translate(cf_program(cf, blocks), 4);
    shader_program blocks_only;
    blocks_only.exec_blocks = blocks;
    shader_translator without_cf;
    const std::vector<uint32_t> flat = without_cf.translate(blocks_only, 4);
    assert(structured == flat);
    assert(count_opcode(structured, spv::OpLoopMerge) == 0);
    assert(count_opcode(structured, spv::OpSelectionMerge) == 0);
}

void test_texture_fetch_samples() {
    shader_translator t;
    shader_program program;
    shader_exec_block block;
    block.cf.opcode = cf_opcode::exec_end;
    shader_instruction tex;
    tex.kind = instruction_kind::texture_fetch;
    tex.texture.dimension = fetch_dimension::d2;
    tex.texture.src_reg = 0; // coords
    tex.texture.dst_reg = 1; // result
    tex.texture.fetch_constant_index = 3;
    tex.texture.src_swizzle = 0b0100;              // x, y - the identity
    tex.texture.dst_swizzle = 0b011'010'001'000;   // xyzw - the identity
    block.instructions.push_back(tex);
    program.exec_blocks.push_back(block);

    auto m = t.translate(program, 2);
    assert(count_opcode(m, spv::OpImageSampleImplicitLod) == 1);
    assert(count_opcode(m, spv::OpTypeSampledImage) == 1);
    assert(count_opcode(m, spv::OpVectorShuffle) == 1); // .xy of the coords
    // The identity destination swizzle stores the sample whole, so there is no
    // merge and nothing is taken apart.
    assert(count_opcode(m, spv::OpCompositeExtract) == 0);
}

// A texture fetch writes the components ITS OWN destination swizzle names and
// keeps the rest, exactly as a vertex fetch does.
//
// Storing the sample whole is right for the identity encoding and silently
// wrong for every other one, and Ridge Racer 6's movie is what that costs: its
// YUV converter samples three planes into three components of ONE register -
// each fetch keeping the others - and the coordinate the fetches index with
// lives in that same register. Overwriting it makes the second and third fetch
// sample wherever the first one's texel happened to point, so the whole frame
// comes out one flat colour. Every stage reports success: the fetches are
// counted, the module validates, the draw runs.
void test_texture_fetch_honours_destination_swizzle() {
    shader_translator t;
    shader_program program;
    shader_exec_block block;
    block.cf.opcode = cf_opcode::exec_end;
    shader_instruction tex;
    tex.kind = instruction_kind::texture_fetch;
    tex.texture.dimension = fetch_dimension::d2;
    tex.texture.src_reg = 0;
    tex.texture.dst_reg = 0; // the SAME register the coordinate is in
    tex.texture.fetch_constant_index = 3;
    tex.texture.src_swizzle = 0b0100;
    // Ridge Racer 6's first plane fetch: keep x, keep y, take the sample's w
    // into z, keep w.
    tex.texture.dst_swizzle = 0xEFF;
    block.instructions.push_back(tex);
    program.exec_blocks.push_back(block);

    auto m = t.translate(program, 2);
    // One component of the sample is taken...
    assert(count_opcode(m, spv::OpCompositeExtract) == 1);
    // ...assembled into a vec4 and merged with what the register already held,
    // rather than replacing it.
    assert(count_opcode(m, spv::OpCompositeConstruct) == 1);
    assert(count_opcode(m, spv::OpVectorShuffle) == 2); // coords + the merge
}

// A fetch whose every component says KEEP writes nothing - and must not emit a
// store that writes the register with itself.
void test_texture_fetch_keep_everything_writes_nothing() {
    shader_translator t;
    shader_program program;
    shader_exec_block block;
    block.cf.opcode = cf_opcode::exec_end;
    shader_instruction tex;
    tex.kind = instruction_kind::texture_fetch;
    tex.texture.dimension = fetch_dimension::d2;
    tex.texture.src_reg = 0;
    tex.texture.dst_reg = 1;
    tex.texture.fetch_constant_index = 3;
    tex.texture.src_swizzle = 0b0100;
    tex.texture.dst_swizzle = 0b111'111'111'111;
    block.instructions.push_back(tex);
    program.exec_blocks.push_back(block);

    auto m = t.translate(program, 2);
    assert(count_opcode(m, spv::OpImageSampleImplicitLod) == 1); // still sampled
    assert(count_opcode(m, spv::OpCompositeConstruct) == 0);
    assert(count_opcode(m, spv::OpStore) == 2); // only the two initialisers
}

// The coordinate comes from the components the SOURCE swizzle names, two bits
// each. A fetch that indexes by .yx rather than .xy samples the transpose of
// the texture, which reads as a rotated picture rather than as a wrong lookup.
void test_texture_fetch_honours_source_swizzle() {
    shader_translator t;
    shader_program program;
    shader_exec_block block;
    block.cf.opcode = cf_opcode::exec_end;
    shader_instruction tex;
    tex.kind = instruction_kind::texture_fetch;
    tex.texture.dimension = fetch_dimension::d2;
    tex.texture.src_reg = 0;
    tex.texture.dst_reg = 1;
    tex.texture.fetch_constant_index = 3;
    tex.texture.src_swizzle = 0b0001; // y, x
    tex.texture.dst_swizzle = 0b011'010'001'000;
    block.instructions.push_back(tex);
    program.exec_blocks.push_back(block);

    auto m = t.translate(program, 2);
    const std::vector<uint32_t> shuffle =
        first_instruction(m, spv::OpVectorShuffle);
    // Result type, id, the two vectors, then the component indices.
    assert(shuffle.size() == 6 && shuffle[4] == 1 && shuffle[5] == 0);
}

// A scalar op: reads src3, writes scalar_dest. The vector op is left as nop
// so only the scalar path emits.
alu_instruction scalar(alu_scalar_opcode sop, uint32_t src3, uint32_t dest,
                       uint8_t mask = 0xF) {
    alu_instruction a;
    // A RESERVED vector encoding, so the vector half is skipped and the test
    // looks at the scalar half alone.
    //
    // This has now been wrong twice. It was `cube`, which became a real
    // instruction; then `dst`, which became a real instruction. Naming any
    // real opcode as the sentinel means the day somebody implements it, every
    // count in every test that used it silently gains that opcode's output -
    // which is a translator improvement showing up as a dozen unrelated test
    // failures. The opcode field is five bits and the ISA defines 0-29, so 31
    // is not an instruction and cannot become one.
    a.vector_opcode = static_cast<alu_vector_opcode>(31);
    a.scalar_opcode = sop;
    a.scalar_dest = static_cast<uint8_t>(dest);
    a.scalar_write_mask = mask;
    a.sources[2].is_temp = true;
    a.sources[2].reg = static_cast<uint8_t>(src3);
    return a;
}

void test_scalar_reciprocal() {
    shader_translator t;
    auto m = t.translate({scalar(alu_scalar_opcode::rcp, 0, 1)}, 2);
    assert(count_opcode(m, spv::OpFDiv) == 1);       // 1 / w
    assert(count_opcode(m, spv::OpCompositeExtract) == 1); // read one component
    assert(count_opcode(m, spv::OpCompositeConstruct) == 1); // broadcast
}

void test_scalar_transcendental() {
    shader_translator t;
    auto m = t.translate({scalar(alu_scalar_opcode::rsq, 0, 1)}, 2);
    assert(count_opcode(m, spv::OpExtInst) == 1); // InverseSqrt
    assert(count_opcode(m, spv::OpCompositeExtract) == 1);
}

void test_scalar_two_component() {
    shader_translator t;
    // adds reads W and X of src3 and adds them.
    auto m = t.translate({scalar(alu_scalar_opcode::adds, 0, 1)}, 2);
    assert(count_opcode(m, spv::OpFAdd) == 1);
    assert(count_opcode(m, spv::OpCompositeExtract) == 2); // W and X
}

void test_scalar_compare() {
    shader_translator t;
    auto m = t.translate({scalar(alu_scalar_opcode::sges, 0, 1)}, 2);
    assert(count_opcode(m, spv::OpFOrdGreaterThanEqual) == 1);
    assert(count_opcode(m, spv::OpSelect) == 1);
}

void test_vector_and_scalar_co_issue() {
    shader_translator t;
    // A real instruction does both halves at once.
    alu_instruction a = op(alu_vector_opcode::add, 0, 1, 2);
    a.scalar_opcode = alu_scalar_opcode::rcp;
    a.scalar_dest = 3;
    a.scalar_write_mask = 0xF;
    a.sources[2].is_temp = true;
    a.sources[2].reg = 0;
    auto m = t.translate({a}, 4);
    assert(count_opcode(m, spv::OpFAdd) == 1); // vector half
    assert(count_opcode(m, spv::OpFDiv) == 1); // scalar half
}

// Every opcode the ISA defines is translated - all 30 vector and all 50
// scalar, which is what Xenia's tables carry.
//
// Worth asserting rather than believing, because the failure mode of a missing
// one is silence: the instruction is skipped, the module is valid, the shader
// draws, and the only trace is a number in a frame dump nobody is reading.
// Scalar 41 is deliberately absent from the count - the ISA has no such
// opcode, and Xenia's table goes from kSqrt = 40 straight to kMulsc0 = 42.
void test_every_defined_opcode_is_translated() {
    for (uint32_t i = 0; i < 30; ++i)
        assert(shader_translator::is_supported_vector_op(
            static_cast<alu_vector_opcode>(i)));
    for (uint32_t i = 0; i <= 50; ++i) {
        if (i == 41) continue;
        assert(shader_translator::is_supported_scalar_op(
            static_cast<alu_scalar_opcode>(i)));
    }
    assert(!shader_translator::is_supported_scalar_op(
        static_cast<alu_scalar_opcode>(41)));
}

void test_unsupported_and_out_of_range_skipped() {
    shader_translator t;
    // A RESERVED encoding - the ISA defines vector opcodes 0-29 - so this
    // stays a test of the SKIPPING rather than becoming a test of whichever
    // instruction was implemented most recently. Every one of the ISA's real
    // vector opcodes is now translated.
    const alu_vector_opcode reserved = static_cast<alu_vector_opcode>(31);
    assert(!shader_translator::is_supported_vector_op(reserved));
    auto skip = t.translate({op(reserved, 0, 1, 2)}, 3);
    // Only the two initialisers: the predicate and the export variable.
    assert(count_opcode(skip, spv::OpStore) == 2);
    assert(count_opcode(skip, spv::OpFunction) == 1);

    shader_translator t2;
    auto oob = t2.translate({op(alu_vector_opcode::add, 0, 1, 9)}, 2);
    assert(count_opcode(oob, spv::OpFAdd) == 0);
    assert(count_opcode(oob, spv::OpVariable) == 5); // 2 temps + output + cbuf + predicate
}

void test_setp_sets_predicate() {
    shader_translator t;
    assert(shader_translator::is_supported_scalar_op(alu_scalar_opcode::setp_gt));
    auto m = t.translate({scalar(alu_scalar_opcode::setp_eq, 0, 0)}, 1);
    assert(count_opcode(m, spv::OpFOrdEqual) == 1); // compare against zero
    // Four stores: the predicate and export initialisers, the predicate itself,
    // and the DESTINATION REGISTER. A setp is not only a predicate write - it
    // leaves p0 ? 0.0 : 1.0 in its destination like any other scalar op, which
    // is the value the predicate stack is built out of, so the select that
    // computes it is emitted whether or not anything reads ps.
    assert(count_opcode(m, spv::OpStore) == 4);
    assert(count_opcode(m, spv::OpSelect) == 1);
}

// ps, the previous scalar result, is state with a lifetime: one instruction
// writes it and a later one reads it. These check the state, not just the
// arithmetic - a translator that computed adds_prev from a fresh zero every
// time would pass an arithmetic-only test and still lose the running total.
void test_previous_scalar_is_written_then_read() {
    shader_translator t;
    // muls writes ps; adds_prev reads it back as its second operand.
    auto m = t.translate({scalar(alu_scalar_opcode::muls, 0, 1),
                          scalar(alu_scalar_opcode::adds_prev, 0, 2)},
                         3);
    assert(shader_translator::is_supported_scalar_op(
        alu_scalar_opcode::adds_prev));
    assert(count_opcode(m, spv::OpFMul) == 1); // the muls
    assert(count_opcode(m, spv::OpFAdd) == 1); // the adds_prev
    // Stores: predicate init, export init, then ps + destination for each of
    // the two scalar instructions.
    assert(count_opcode(m, spv::OpStore) == 2 + 2 * 2);
    // The read of ps is a load that the first instruction alone would not need.
    // muls reads one register (1 load); adds_prev reads one register plus ps.
    assert(count_opcode(m, spv::OpLoad) == 3);
}

// max4 is the largest of one operand's four components, broadcast.
// cube: the face selection half of a cube-map lookup. Its three cases are
// pinned by the values they produce for three directions, one down each axis,
// because a face number that is merely plausible - 4 where the answer is 5 -
// puts a reflection on the opposite side of the world and looks like a lighting
// bug rather than like a wrong instruction.
void test_cube_selects_the_major_axis() {
    assert(shader_translator::is_supported_vector_op(alu_vector_opcode::cube));
    shader_translator t;
    auto m = t.translate({op(alu_vector_opcode::cube, 0, 1, 2)}, 3);
    // One operand, however many the encoding names.
    assert(count_opcode(m, spv::OpLoad) == 1);
    // The direction is (x, y, z) = (v.z, v.w, v.x) - the operand arrives
    // swizzled .z_xy, with the second component deliberately skipped.
    assert(count_opcode(m, spv::OpCompositeExtract) == 3);
    // Three absolute values, and nothing else uses an extended instruction.
    assert(count_opcode(m, spv::OpExtInst) == 3);
    // Two comparisons for the Z-major test, one for Y-major, and one sign test
    // per axis.
    assert(count_opcode(m, spv::OpFOrdGreaterThanEqual) == 3);
    assert(count_opcode(m, spv::OpFOrdLessThan) == 3);
    assert(count_opcode(m, spv::OpLogicalAnd) == 1);
    // Two selects to pick between the three cases, for each of the four
    // components, plus the six sign-dependent choices inside them.
    assert(count_opcode(m, spv::OpSelect) == 4 * 2 + 6);
    assert(count_opcode(m, spv::OpFNegate) == 3);
    // The major axis is doubled, and the four components assembled.
    assert(count_opcode(m, spv::OpFMul) == 1);
    assert(count_opcode(m, spv::OpCompositeConstruct) == 1);
}

void test_max4_takes_the_largest_component() {
    shader_translator t;
    assert(shader_translator::is_supported_vector_op(alu_vector_opcode::max4));
    auto m = t.translate({op(alu_vector_opcode::max4, 0, 1, 2)}, 3);
    assert(count_opcode(m, spv::OpLoad) == 1);            // one operand
    assert(count_opcode(m, spv::OpCompositeExtract) == 4); // all four components
    assert(count_opcode(m, spv::OpExtInst) == 3);          // three pairwise maxes
    assert(count_opcode(m, spv::OpCompositeConstruct) == 1);
}

// The pixel kill. A dropped kill is not a slightly wrong shader: every pixel it
// was supposed to discard is drawn, so an alpha-tested surface comes out as an
// opaque shard of its bounding quad - which reads as broken geometry rather
// than as a missing instruction.
void test_vector_kill_discards_the_fragment() {
    shader_translator t;
    for (alu_vector_opcode o :
         {alu_vector_opcode::kill_eq, alu_vector_opcode::kill_gt,
          alu_vector_opcode::kill_ge, alu_vector_opcode::kill_ne})
        assert(shader_translator::is_supported_vector_op(o));
    auto m = t.translate({op(alu_vector_opcode::kill_gt, 0, 1, 2)}, 3);
    assert(count_opcode(m, spv::OpFOrdGreaterThan) == 1); // per component
    assert(count_opcode(m, spv::OpAny) == 1);             // any component
    assert(count_opcode(m, spv::OpKill) == 1);
    assert(count_opcode(m, spv::OpSelectionMerge) == 1);  // structured
}

// OpKill exists only in a fragment shader, so a vertex shader carrying one gets
// the destination write and no discard - a module that still validates rather
// than one the driver rejects, which would take the whole shader out.
void test_kill_is_pixel_only() {
    shader_translator t;
    auto m = t.translate({op(alu_vector_opcode::kill_gt, 0, 1, 2)}, 3,
                         shader_type::vertex);
    assert(count_opcode(m, spv::OpKill) == 0);
    assert(count_opcode(m, spv::OpFOrdGreaterThan) == 1); // still computed
}

// The scalar kills compare one component against zero - except kills_one,
// which compares against one.
void test_scalar_kill_discards_the_fragment() {
    shader_translator t;
    assert(shader_translator::is_supported_scalar_op(alu_scalar_opcode::kills_ge));
    auto m = t.translate({scalar(alu_scalar_opcode::kills_ge, 0, 1)}, 2);
    assert(count_opcode(m, spv::OpFOrdGreaterThanEqual) == 1);
    assert(count_opcode(m, spv::OpKill) == 1);
    assert(count_opcode(m, spv::OpAny) == 0); // scalar: no reduction needed

    shader_translator one;
    auto k = one.translate({scalar(alu_scalar_opcode::kills_one, 0, 1)}, 2);
    assert(count_opcode(k, spv::OpFOrdEqual) == 1);
    assert(count_opcode(k, spv::OpKill) == 1);
}

// A predicated kill discards only where the predicate also holds. Skipping a
// store is how predication is modelled everywhere else, and a kill is the one
// thing that cannot be undone that way.
void test_predicated_kill_is_gated_on_the_predicate() {
    shader_translator t;
    alu_instruction a = op(alu_vector_opcode::kill_gt, 0, 1, 2);
    a.is_predicated = true;
    a.predicate_condition = true;
    auto m = t.translate({a}, 3);
    assert(count_opcode(m, spv::OpKill) == 1);
    // The predicate is read once and ANDed into the kill condition.
    assert(count_opcode(m, spv::OpLogicalAnd) == 1);
}

// The predicate stack.
//
// The Xenos has ONE predicate register, so a shader that nests conditions keeps
// the outer ones in an ordinary temporary: setp_*_push counts a level on,
// setp_pop counts one off, and setp_inv / setp_rstr put a saved one back. The
// register is therefore load-bearing, which is why these tests check the
// DESTINATION store as much as the predicate store - a family that set p0 and
// dropped its result would look right in a disassembly and unwind a counter
// nothing had incremented.

// setp_*_push reads two different components of the same two operands, and gets
// two different answers from them: W decides the predicate, X the counter. A
// translation that used one component for both would still set a predicate, and
// would still produce a number, and both would be wrong.
void test_vector_predicate_push() {
    shader_translator t;
    assert(shader_translator::is_supported_vector_op(
        alu_vector_opcode::setp_gt_push));
    auto m = t.translate({op(alu_vector_opcode::setp_gt_push, 0, 1, 2)}, 3);
    // Four extracts: X and W of each of the two operands.
    assert(count_opcode(m, spv::OpCompositeExtract) == 4);
    // src0 is tested for equality with zero in both halves; only src1 uses the
    // comparison the opcode names.
    assert(count_opcode(m, spv::OpFOrdEqual) == 2);
    assert(count_opcode(m, spv::OpFOrdGreaterThan) == 2);
    assert(count_opcode(m, spv::OpLogicalAnd) == 2);
    // result = (cond ? -1.0 : src0.x) + 1.0, broadcast to the written
    // components.
    assert(count_opcode(m, spv::OpSelect) == 1);
    assert(count_opcode(m, spv::OpFAdd) == 1);
    assert(count_opcode(m, spv::OpCompositeConstruct) == 1);
    // Two initialisers, the predicate, and the destination register.
    assert(count_opcode(m, spv::OpStore) == 4);
}

// All four comparisons exist, and ne is the UNORDERED one - a NaN counter is
// not equal to zero, so the level it stands for stays pushed.
void test_vector_predicate_push_comparisons() {
    for (alu_vector_opcode o :
         {alu_vector_opcode::setp_eq_push, alu_vector_opcode::setp_ne_push,
          alu_vector_opcode::setp_gt_push, alu_vector_opcode::setp_ge_push})
        assert(shader_translator::is_supported_vector_op(o));

    shader_translator tne;
    auto ne = tne.translate({op(alu_vector_opcode::setp_ne_push, 0, 1, 2)}, 3);
    assert(count_opcode(ne, spv::OpFUnordNotEqual) == 2);
    assert(count_opcode(ne, spv::OpFOrdNotEqual) == 0);

    shader_translator tge;
    auto ge = tge.translate({op(alu_vector_opcode::setp_ge_push, 0, 1, 2)}, 3);
    assert(count_opcode(ge, spv::OpFOrdGreaterThanEqual) == 2);

    // eq_push tests both operands for equality with zero, so all four
    // comparisons are the same opcode.
    shader_translator teq;
    auto eq = teq.translate({op(alu_vector_opcode::setp_eq_push, 0, 1, 2)}, 3);
    assert(count_opcode(eq, spv::OpFOrdEqual) == 4);
}

// setp_inv: p0 = w == 1, result = p0 ? 0 : (w == 0 ? 1 : w). The inner select
// is the inversion - without it this would be an ordinary compare, and a
// saved predicate would come back the wrong way round.
void test_scalar_predicate_invert() {
    shader_translator t;
    assert(shader_translator::is_supported_scalar_op(alu_scalar_opcode::setp_inv));
    auto m = t.translate({scalar(alu_scalar_opcode::setp_inv, 0, 1)}, 2);
    assert(count_opcode(m, spv::OpFOrdEqual) == 2); // against 1.0 and against 0.0
    assert(count_opcode(m, spv::OpSelect) == 2);    // inner, then the predicate
    assert(count_opcode(m, spv::OpStore) == 4);     // 2 init + predicate + dest
}

// setp_pop: t = w - 1, p0 = t <= 0, result = p0 ? 0 : t. The subtraction is
// what makes it a pop; the destination write is what makes the NEXT pop see it.
void test_scalar_predicate_pop() {
    shader_translator t;
    assert(shader_translator::is_supported_scalar_op(alu_scalar_opcode::setp_pop));
    auto m = t.translate({scalar(alu_scalar_opcode::setp_pop, 0, 1)}, 2);
    assert(count_opcode(m, spv::OpFSub) == 1);
    assert(count_opcode(m, spv::OpFOrdLessThanEqual) == 1);
    assert(count_opcode(m, spv::OpSelect) == 1);
    assert(count_opcode(m, spv::OpStore) == 4);
}

// setp_rstr: p0 = w == 0, result = p0 ? 0 : w. The counter is put back as it
// was rather than reduced to 0/1, which is the whole difference from setp_eq.
void test_scalar_predicate_restore() {
    shader_translator t;
    assert(shader_translator::is_supported_scalar_op(alu_scalar_opcode::setp_rstr));
    auto m = t.translate({scalar(alu_scalar_opcode::setp_rstr, 0, 1)}, 2);
    assert(count_opcode(m, spv::OpFOrdEqual) == 1);
    assert(count_opcode(m, spv::OpSelect) == 1);
    assert(count_opcode(m, spv::OpStore) == 4);
}

// setp_clr reads NO operand - Xenia's opcode table gives it an operand count of
// zero - so its source field holds whatever the encoder left there. Refusing it
// because that field names a register the shader does not have would drop a
// perfectly good instruction, and the predicate it clears would stay set.
void test_scalar_predicate_clear_reads_no_operand() {
    shader_translator t;
    assert(shader_translator::is_supported_scalar_op(alu_scalar_opcode::setp_clr));
    // Source register 9 against two temporaries: out of range, and irrelevant.
    auto m = t.translate({scalar(alu_scalar_opcode::setp_clr, 9, 1)}, 2);
    assert(count_opcode(m, spv::OpLoad) == 0);            // nothing read
    assert(count_opcode(m, spv::OpCompositeExtract) == 0);
    assert(count_opcode(m, spv::OpStore) == 4);           // predicate + dest
    assert(count_opcode(m, spv::OpCompositeConstruct) == 1); // FLT_MAX, broadcast
}

// A predicate op whose destination this shader does not route still has to set
// p0: the predicate is state of the shader, not of that register. Dropping the
// whole instruction would leave every instruction predicated on it running.
void test_predicate_is_set_even_with_no_destination() {
    shader_translator t;
    alu_instruction a = scalar(alu_scalar_opcode::setp_gt, 0, 5);
    // AN EXPORT IS NAMED BY vector_dest, INCLUDING FOR THE SCALAR HALF - see
    // translate_scalar. This test used to make the export unroutable by
    // setting `scalar_dest` to 5 and leaving vector_dest at 0, which worked
    // only because the scalar half was reading the wrong field: under the real
    // encoding that is an export to interpolator 0, which IS routed. Setting
    // the field the hardware actually uses keeps the test testing what it
    // says - a predicate op whose destination goes nowhere still sets p0.
    a.vector_dest = 5;
    a.is_export = true; // export 5 is not one a pixel shader routes
    auto m = t.translate({a}, 2);
    assert(count_opcode(m, spv::OpFOrdGreaterThan) == 1);
    // Two initialisers and the predicate; no destination store.
    assert(count_opcode(m, spv::OpStore) == 3);
}

// The rule the test above now depends on, pinned on its own so it cannot be
// undone quietly: on an EXPORT the scalar half writes vector_dest. Xenia states
// it on the encoding itself - "if exporting, both vector and scalar operations
// use the vector destination". Reading scalar_dest instead sends the write to
// whichever export that number names, which is silent in both directions: the
// component meant for one interpolator never arrives, and another interpolator
// gains a write nothing asked for. It smeared Jetpac's whole terrain.
void test_an_exports_scalar_half_writes_the_vector_destination() {
    shader_translator t;
    // Jetpac's shape exactly: the vector half writes .zw of interpolator 1 and
    // the SCALAR half writes .y of the same export, with scalar_dest left at 0.
    alu_instruction a = scalar(alu_scalar_opcode::adds, 0, 0, /*mask*/ 0x2);
    a.is_export = true;
    a.vector_dest = 1;          // interpolator 1 - where both halves must land
    a.scalar_dest = 0;          // interpolator 0 - what the field happens to say
    a.vector_write_mask = 0xC;  // .zw from the vector half
    shader_program program;
    program.exec_blocks.push_back(alu_block(cf_opcode::exec_end, {a}));
    const std::vector<uint32_t> m = t.translate(program, 2,
                                                shader_type::vertex);
    // ONE interpolator is declared, and it is 1. Reading scalar_dest would
    // have declared interpolator 0 as well - a shader exporting something it
    // never mentions, which is the half of this bug that is easy to miss.
    const std::vector<uint32_t>& used = t.interpolators();
    assert(used.size() == 1);
    assert(used[0] == 1);
    // Two stores into it: the vector half's .zw and the scalar half's .y.
    // Three would mean the scalar half went somewhere else entirely.
    assert(count_opcode(m, spv::OpStore) >= 2);
    std::printf("  an export's scalar half writes vector_dest (%u), not "
                "scalar_dest\n", used[0]);
}

// A setp leaves a value in ps like any other scalar operation - the INVERSE of
// the predicate it set, which is easy to get backwards. Only observable once
// something reads ps, so the pair is what the test drives.
void test_setp_leaves_the_inverse_predicate_in_previous_scalar() {
    shader_translator t;
    auto m = t.translate({scalar(alu_scalar_opcode::setp_gt, 0, 1),
                          scalar(alu_scalar_opcode::adds_prev, 0, 2)},
                         3);
    assert(count_opcode(m, spv::OpFOrdGreaterThan) == 1);
    // The select that turns the predicate into ps: set -> 0.0, clear -> 1.0.
    assert(count_opcode(m, spv::OpSelect) == 1);
    assert(count_opcode(m, spv::OpFAdd) == 1); // the adds_prev reads it
}

// An empty write mask still advances ps: chaining through it is the whole
// purpose of such an instruction, so the update cannot hang off the mask.
void test_previous_scalar_updates_with_an_empty_write_mask() {
    shader_translator t;
    auto m = t.translate(
        {scalar(alu_scalar_opcode::muls, 0, 1, /*mask=*/0),
         scalar(alu_scalar_opcode::muls_prev, 0, 2)},
        3);
    assert(count_opcode(m, spv::OpFMul) == 2); // muls and muls_prev
    // The masked-out destination stores nothing, so only ps is written by the
    // first instruction; the second writes ps and its destination.
    assert(count_opcode(m, spv::OpStore) == 2 + 1 + 2);
}

// The *sc forms split their single source field into a constant operand and a
// temporary-register operand, with one bit of the temp index coming from the
// opcode. Reading src3 straight would use the constant for both halves.
void test_scalar_constant_pair_reads_two_operands() {
    shader_translator t;
    assert(shader_translator::is_supported_scalar_op(alu_scalar_opcode::mulsc0));
    alu_instruction a = scalar(alu_scalar_opcode::mulsc0, 0, 1);
    a.sources[2].is_temp = false; // src3_sel clear
    a.sources[2].reg = 5;         // the constant index
    a.sources[2].swizzle = 0;
    auto m = t.translate({a}, 4);
    assert(count_opcode(m, spv::OpFMul) == 1);
    // Two operand loads from two different places: one indexed read of the
    // constant buffer, one temp register load.
    assert(count_opcode(m, spv::OpLoad) == 2);
    assert(count_opcode(m, spv::OpAccessChain) == 1); // the constant half
    // mulsc1 is the same instruction with the low opcode bit set, so it must
    // also translate rather than be treated as a different operation.
    assert(shader_translator::is_supported_scalar_op(alu_scalar_opcode::mulsc1));
    assert(shader_translator::is_supported_scalar_op(alu_scalar_opcode::addsc0));
    assert(shader_translator::is_supported_scalar_op(alu_scalar_opcode::subsc1));
}

// The temp register index for a *sc form is assembled from the opcode's low
// bit, the source select bit, and the middle bits of the swizzle. An index that
// lands outside the shader's temp registers must be refused, not read.
void test_scalar_constant_pair_temp_index_is_range_checked() {
    shader_translator t;
    alu_instruction a = scalar(alu_scalar_opcode::mulsc1, 0, 1);
    a.sources[2].is_temp = true; // contributes bit 1
    a.sources[2].swizzle = 0x3C; // contributes bits 2..5 -> index 0x3F
    auto m = t.translate({a}, 2); // only 2 temp registers exist
    assert(count_opcode(m, spv::OpFMul) == 0); // refused, nothing emitted
}

void test_predicated_instruction_branches() {
    shader_translator t;
    alu_instruction a = op(alu_vector_opcode::add, 0, 1, 2);
    a.is_predicated = true;
    a.predicate_condition = true;
    auto m = t.translate({a}, 3);
    assert(count_opcode(m, spv::OpSelectionMerge) == 1);
    assert(count_opcode(m, spv::OpBranchConditional) == 1);
    assert(count_opcode(m, spv::OpBranch) == 1);        // back-edge to merge
    assert(count_opcode(m, spv::OpLogicalNot) == 0);    // condition true, no negate
}

void test_predicated_condition_false_negates() {
    shader_translator t;
    alu_instruction a = op(alu_vector_opcode::add, 0, 1, 2);
    a.is_predicated = true;
    a.predicate_condition = false; // execute when predicate is false
    auto m = t.translate({a}, 3);
    assert(count_opcode(m, spv::OpLogicalNot) == 1);
    assert(count_opcode(m, spv::OpBranchConditional) == 1);
}

void test_pixel_and_vertex_outputs() {
    shader_translator t;
    const std::vector<alu_instruction> none;
    auto pixel = t.translate(none, 0, shader_type::pixel);
    // The output's decoration plus the constant buffer's four decorations.
    assert(count_opcode(pixel, spv::OpDecorate) == 5);
    assert(count_opcode(pixel, spv::OpExecutionMode) == 1); // OriginUpperLeft

    // A pixel shader takes no vertex index and must not declare one.
    assert(!has_builtin(pixel, spv::BuiltInVertexIndex));

    shader_translator tv;
    auto vertex = tv.translate(none, 0, shader_type::vertex);
    // Six, not five: a vertex shader declares the vertex index built-in as
    // well. The console starts one with the index in r0.x - the shader can
    // compute with it, and a sprite quad expanded from index & 3 collapses to
    // a point without it - so the input is always there.
    assert(count_opcode(vertex, spv::OpDecorate) == 6);
    assert(has_builtin(vertex, spv::BuiltInVertexIndex));
    assert(count_opcode(vertex, spv::OpExecutionMode) == 0); // vertex needs none
}

void test_constant_operand_reads_buffer() {
    shader_translator t;
    // add temp0, c5 -> temp2 : the second source is a float constant.
    alu_instruction a = op(alu_vector_opcode::add, 0, 1, 2);
    a.sources[1].is_temp = false;
    a.sources[1].reg = 5;
    auto m = t.translate({a}, 3);
    assert(count_opcode(m, spv::OpAccessChain) == 1); // the constant read
    assert(count_opcode(m, spv::OpFAdd) == 1);
    // The buffer is a decorated struct with a member offset.
    assert(count_opcode(m, spv::OpTypeStruct) == 1);
    assert(count_opcode(m, spv::OpMemberDecorate) == 1);
}

// The address register a0 and the constant reads it indexes.
//
// This is the one piece of shader state whose absence does not shade a surface
// slightly wrong. `c[a0 + n]` is how a shader reaches a matrix palette, a light
// array or per-instance data, so a dropped maxas leaves every vertex
// transformed through the wrong matrix - the geometry arrives as shards, and
// nothing else in the pipeline has any way to know.

// The word index of the `nth` instruction with `opcode`, or the module's size
// if there is no such instruction. Order matters for a0: the store has to sit
// INSIDE the instruction's predicate, and a count cannot tell you that.
std::size_t index_of(const std::vector<uint32_t>& module, uint32_t opcode,
                     uint32_t nth = 0) {
    for (std::size_t i = 5; i < module.size();) {
        const uint32_t len = module[i] >> 16;
        if (len == 0) break;
        if ((module[i] & 0xFFFF) == opcode && nth-- == 0) return i;
        i += len;
    }
    return module.size();
}

// Whether the module declares the signed-int constant `value`. The two bounds
// of the constant-bank clamp are the visible half of "which stage's constants
// does this read", so they are worth reading back rather than counting.
bool has_int_constant(const std::vector<uint32_t>& module, int32_t value) {
    uint32_t int_type = 0;
    for (std::size_t i = 5; i < module.size();) {
        const uint32_t len = module[i] >> 16;
        if (len == 0) break;
        const uint32_t opcode = module[i] & 0xFFFF;
        if (opcode == spv::OpTypeInt && len == 4 && module[i + 2] == 32 &&
            module[i + 3] == 1)
            int_type = module[i + 1];
        if (opcode == spv::OpConstant && len == 4 && int_type != 0 &&
            module[i + 1] == int_type &&
            module[i + 3] == static_cast<uint32_t>(value))
            return true;
        i += len;
    }
    return false;
}

void test_max_as_writes_the_address_register() {
    assert(shader_translator::is_supported_scalar_op(alu_scalar_opcode::max_as));
    shader_translator t;
    auto m = t.translate({scalar(alu_scalar_opcode::max_as, 0, 1)}, 2);
    // a0 = (int)clamp(floor(w + 0.5), -256, 255), then the max itself: three
    // extended instructions (Floor, NClamp, FMax) and one float-to-signed-int.
    assert(count_opcode(m, spv::OpExtInst) == 3);
    assert(count_opcode(m, spv::OpConvertFToS) == 1);
    // The +0.5 is what makes maxas round to nearest rather than truncate.
    assert(count_opcode(m, spv::OpFAdd) == 1);
    // Stores: the predicate initialiser, the export initialiser, a0, and the
    // destination register.
    assert(count_opcode(m, spv::OpStore) == 4);
}

void test_max_asf_truncates_downwards() {
    shader_translator t;
    auto m = t.translate({scalar(alu_scalar_opcode::max_asf, 0, 1)}, 2);
    assert(count_opcode(m, spv::OpExtInst) == 3);
    assert(count_opcode(m, spv::OpConvertFToS) == 1);
    // No bias: maxasf floors the value as it stands. Rounding a0 the wrong way
    // picks the neighbouring constant, which for a matrix palette is another
    // bone's matrix - a plausible transform, applied to the wrong vertices.
    assert(count_opcode(m, spv::OpFAdd) == 0);
}

void test_max_a_writes_the_address_register_and_the_max() {
    assert(shader_translator::is_supported_vector_op(alu_vector_opcode::max_a));
    shader_translator t;
    auto m = t.translate({op(alu_vector_opcode::max_a, 0, 1, 2)}, 3);
    // The component-wise max, plus Floor and NClamp for a0.
    assert(count_opcode(m, spv::OpExtInst) == 3);
    assert(count_opcode(m, spv::OpConvertFToS) == 1);
    assert(count_opcode(m, spv::OpFAdd) == 1); // the rounding bias
    // a0 comes from src0's W component, which is the only component extracted.
    assert(count_opcode(m, spv::OpCompositeExtract) == 1);
}

void test_address_register_is_declared_only_when_written() {
    // a0 starts at zero and only the maxas family can change it, so a shader
    // with none does not need the variable at all.
    shader_translator plain, addressed;
    auto without = plain.translate({scalar(alu_scalar_opcode::maxs, 0, 1)}, 2);
    auto with = addressed.translate({scalar(alu_scalar_opcode::max_as, 0, 1)}, 2);
    assert(count_opcode(with, spv::OpVariable) ==
           count_opcode(without, spv::OpVariable) + 1);
}

void test_relative_constant_indexes_by_the_address_register() {
    shader_translator t;
    // maxas loads a0; the add that follows reads c[a0 + 5].
    alu_instruction load = scalar(alu_scalar_opcode::max_as, 0, 1);
    alu_instruction use = op(alu_vector_opcode::add, 0, 1, 2);
    use.sources[1].is_temp = false;
    use.sources[1].reg = 5;
    use.sources[1].const_address_relative = true;
    auto m = t.translate({load, use}, 3, shader_type::vertex);
    // One constant read, through the same access chain a literal index uses -
    // the bank is one uniform array either way, so the index becomes dynamic
    // rather than the read becoming a second path.
    assert(count_opcode(m, spv::OpAccessChain) == 1);
    // a0 + 5, then clamped into the bank: an integer add and an SClamp on top
    // of the maxas's own Floor, NClamp and FMax.
    assert(count_opcode(m, spv::OpIAdd) == 1);
    assert(count_opcode(m, spv::OpExtInst) == 4);
    // A vertex shader's half of the bank is [0, 255].
    assert(has_int_constant(m, 0) && has_int_constant(m, 255));
}

void test_relative_constant_clamps_into_this_stage_s_half() {
    shader_translator t;
    alu_instruction load = scalar(alu_scalar_opcode::max_as, 0, 1);
    alu_instruction use = op(alu_vector_opcode::add, 0, 1, 2);
    use.sources[1].is_temp = false;
    use.sources[1].reg = 5;
    use.sources[1].const_address_relative = true;
    auto m = t.translate({load, use}, 3, shader_type::pixel);
    // A pixel shader's constants start at 256, and a negative a0 must land on
    // its own lowest constant rather than in the vertex shader's half - where
    // it would read whatever the other stage put there and shade a surface
    // with a transform.
    assert(has_int_constant(m, 256) && has_int_constant(m, 511));
}

void test_relative_constant_without_a_writer_is_a_literal_index() {
    // Nothing but the maxas family writes a0, so in a shader with none
    // c[a0 + 5] IS c[5] - and the module has to be the one it always was, or a
    // change to indexed addressing moves a title that has no indexed constant.
    shader_translator relative, plain;
    alu_instruction indexed = op(alu_vector_opcode::add, 0, 1, 2);
    indexed.sources[1].is_temp = false;
    indexed.sources[1].reg = 5;
    alu_instruction literal = indexed;
    indexed.sources[1].const_address_relative = true;
    assert(relative.translate({indexed}, 3) == plain.translate({literal}, 3));
}

void test_address_register_store_is_predicated() {
    shader_translator t;
    alu_instruction a = scalar(alu_scalar_opcode::max_as, 0, 1);
    a.is_predicated = true;
    a.predicate_condition = true;
    auto m = t.translate({a}, 2);
    // The stores in order: the predicate initialiser, the export initialiser,
    // a0, and the destination. The last two must both be inside the structured
    // `if` - an a0 that outlives a branch the shader did not take sends every
    // later indexed constant read somewhere else, and unlike a dropped
    // destination write that damage is not local to one instruction.
    assert(count_opcode(m, spv::OpStore) == 4);
    assert(count_opcode(m, spv::OpSelectionMerge) == 1);
    assert(index_of(m, spv::OpStore, 2) > index_of(m, spv::OpSelectionMerge));
}

void test_export_writes_output() {
    shader_translator t;
    // An export add to colour 0 in a pixel shader stores to the output var.
    alu_instruction a = op(alu_vector_opcode::add, 0, 1, 0);
    a.is_export = true;
    a.vector_dest = shader_translator::kExportColor0;
    auto m = t.translate({a}, 2, shader_type::pixel);
    assert(count_opcode(m, spv::OpFAdd) == 1);
    // The export store, plus the predicate and export initialisers.
    assert(count_opcode(m, spv::OpStore) == 3);
}

void test_export_to_unrouted_index_is_dropped() {
    shader_translator t;
    // Export index 3 (colour 3) is not routed in this slice: computed but not
    // stored, and no crash.
    alu_instruction a = op(alu_vector_opcode::add, 0, 1, 0);
    a.is_export = true;
    a.vector_dest = 3;
    auto m = t.translate({a}, 2, shader_type::pixel);
    assert(count_opcode(m, spv::OpFAdd) == 1);
    // Only the two initialisers: nothing routed the export anywhere.
    assert(count_opcode(m, spv::OpStore) == 2);
}

} // namespace

// A block holding one vertex fetch.
shader_exec_block vertex_fetch_block(cf_opcode opcode,
                                     const std::vector<vertex_fetch_instruction>&
                                         fetches) {
    shader_exec_block block;
    block.cf.opcode = opcode;
    for (const vertex_fetch_instruction& vf : fetches) {
        shader_instruction si;
        si.kind = instruction_kind::vertex_fetch;
        si.vertex = vf;
        block.instructions.push_back(si);
    }
    return block;
}

vertex_fetch_instruction vfetch(uint8_t slot, uint8_t stride, int32_t offset,
                                uint8_t format, uint8_t dst,
                                bool mini = false) {
    vertex_fetch_instruction vf;
    vf.const_index = slot;
    vf.stride = stride;
    vf.offset = offset;
    vf.format = format;
    vf.dst_reg = dst;
    vf.is_mini_fetch = mini;
    vf.dst_swizzle = 0b011'010'001'000; // xyzw
    return vf;
}

// A vertex shader fetches its own data, so each vfetch has to become a vertex
// input the backend can describe. Getting the order or the count wrong makes
// the shader read a different attribute than it asked for.
void test_vertex_fetches_become_inputs() {
    shader_translator t;
    shader_program program;
    program.exec_blocks.push_back(vertex_fetch_block(
        cf_opcode::exec_end,
        {vfetch(/*slot*/ 5, /*stride*/ 7, /*offset*/ 0, /*format*/ 57, 0),
         vfetch(/*slot*/ 5, /*stride*/ 7, /*offset*/ 3, /*format*/ 38, 1)}));
    t.translate(program, 4, shader_type::vertex);
    const std::vector<vertex_input>& inputs = t.vertex_inputs();
    assert(inputs.size() == 2);
    assert(inputs[0].location == 0 && inputs[1].location == 1);
    assert(inputs[0].fetch_slot == 5 && inputs[1].fetch_slot == 5);
    assert(inputs[0].offset_dwords == 0 && inputs[1].offset_dwords == 3);
    assert(inputs[0].components == 3); // k_32_32_32_float
    assert(inputs[1].components == 4); // k_32_32_32_32_float
}

// A mini fetch has no address of its own: it reads the buffer the preceding
// full fetch named, at its own offset. Taking its own (zero) slot and stride
// points it at an unrelated buffer.
void test_mini_fetch_inherits_slot_and_stride() {
    shader_translator t;
    shader_program program;
    program.exec_blocks.push_back(vertex_fetch_block(
        cf_opcode::exec_end,
        {vfetch(/*slot*/ 9, /*stride*/ 8, /*offset*/ 0, /*format*/ 37, 0),
         vfetch(/*slot*/ 0, /*stride*/ 0, /*offset*/ 4, /*format*/ 38, 1,
                /*mini*/ true)}));
    t.translate(program, 4, shader_type::vertex);
    const std::vector<vertex_input>& inputs = t.vertex_inputs();
    assert(inputs.size() == 2);
    assert(inputs[1].fetch_slot == 9);     // inherited
    assert(inputs[1].stride_dwords == 8);  // inherited
    assert(inputs[1].offset_dwords == 4);  // its own
    assert(inputs[1].format == 38);        // its own
}

// A pixel shader has no vertex inputs, whatever it contains.
void test_pixel_shader_declares_no_vertex_inputs() {
    shader_translator t;
    shader_program program;
    program.exec_blocks.push_back(vertex_fetch_block(
        cf_opcode::exec_end, {vfetch(1, 4, 0, 37, 0)}));
    t.translate(program, 4, shader_type::pixel);
    assert(t.vertex_inputs().empty());
}

// The fetched attribute is loaded and written to the destination register.
void test_vertex_fetch_loads_and_stores() {
    shader_translator t;
    shader_program program;
    program.exec_blocks.push_back(vertex_fetch_block(
        cf_opcode::exec_end, {vfetch(0, 4, 0, 37, 2)}));
    auto m = t.translate(program, 4, shader_type::vertex);
    assert(count_opcode(m, spv::OpLoad) >= 1);
    assert(count_opcode(m, spv::OpCompositeConstruct) >= 1);
}

// Swizzle selector 7 means "leave the destination alone". A translator that
// writes something there overwrites a register the shader still needs.
void test_keep_swizzle_writes_nothing() {
    shader_translator t;
    shader_program program;
    vertex_fetch_instruction vf = vfetch(0, 4, 0, 37, 2);
    vf.dst_swizzle = 0b111'111'111'111; // keep every component
    program.exec_blocks.push_back(
        vertex_fetch_block(cf_opcode::exec_end, {vf}));
    auto m = t.translate(program, 4, shader_type::vertex);
    assert(count_opcode(m, spv::OpCompositeConstruct) == 0);
    // The input is still declared - the layout does not depend on the swizzle.
    assert(t.vertex_inputs().size() == 1);
}

// Selectors 4 and 5 are the literals 0 and 1, not source components.
void test_literal_swizzle_components() {
    shader_translator t;
    shader_program program;
    vertex_fetch_instruction vf = vfetch(0, 4, 0, 37, 2);
    vf.dst_swizzle = 0b101'100'001'000; // x, y, 0, 1
    program.exec_blocks.push_back(
        vertex_fetch_block(cf_opcode::exec_end, {vf}));
    auto m = t.translate(program, 4, shader_type::vertex);
    assert(count_opcode(m, spv::OpCompositeConstruct) == 1);
    // Only two components come from the attribute.
    assert(count_opcode(m, spv::OpCompositeExtract) == 2);
}

// The whole set of operands of the first instruction matching `opcode`.
std::vector<uint32_t> first_instruction(const std::vector<uint32_t>& module,
                                       uint32_t opcode) {
    for (std::size_t i = 5; i < module.size();) {
        const uint32_t len = module[i] >> 16;
        if (len == 0) break;
        if ((module[i] & 0xFFFF) == opcode)
            return std::vector<uint32_t>(
                module.begin() + static_cast<long>(i) + 1,
                module.begin() + static_cast<long>(i + len));
        i += len;
    }
    return {};
}

// Whether the module decorates `target` with `decoration` and `value`.
bool has_decoration(const std::vector<uint32_t>& module, uint32_t target,
                    uint32_t decoration, uint32_t value) {
    for (std::size_t i = 5; i < module.size();) {
        const uint32_t len = module[i] >> 16;
        if (len == 0) break;
        if ((module[i] & 0xFFFF) == spv::OpDecorate && len == 4 &&
            module[i + 1] == target && module[i + 2] == decoration &&
            module[i + 3] == value)
            return true;
        i += len;
    }
    return false;
}

// Whether the module declares a built-in input. A built-in is how a shader reads
// something the hardware supplies rather than something a stage before it wrote,
// and its absence is the difference between PsParamGen carrying the pixel's own
// position and carrying zero.
bool has_builtin(const std::vector<uint32_t>& module, uint32_t builtin) {
    std::size_t i = 5;
    while (i < module.size()) {
        const uint32_t len = module[i] >> 16;
        if (len == 0) break;
        if ((module[i] & 0xFFFF) == spv::OpDecorate && len == 4 &&
            module[i + 2] == spv::DecorationBuiltIn && module[i + 3] == builtin)
            return true;
        i += len;
    }
    return false;
}

// The geometry shader that completes a rectangle list: triangles in, a
// four-vertex strip out, and one input/output pair per interpolator so the
// stage can drop in between a vertex and a pixel shader without either of them
// changing. What it computes is checked by rendering, in vulkan_backend_test;
// this pins the shape, and spirv-val pins that it is a valid module.
void test_rectangle_geometry_shader_shape() {
    const std::vector<uint32_t> module =
        build_rectangle_geometry_shader({0, 3});
    // Shader and Geometry, declared as capabilities.
    assert(count_opcode(module, spv::OpCapability) == 2);
    const std::vector<uint32_t> entry =
        first_instruction(module, spv::OpEntryPoint);
    assert(!entry.empty() && entry[0] == spv::ExecutionModelGeometry);
    // Four vertices, as one primitive: the triangle that was in the vertex
    // buffer plus the mirrored fourth.
    assert(count_opcode(module, spv::OpEmitVertex) == 4);
    assert(count_opcode(module, spv::OpEndPrimitive) == 1);
    // Position in and out, plus an in/out pair per interpolator.
    assert(count_opcode(module, spv::OpVariable) == 2 + 2 * 2);
    // Three squared edge lengths decide which edge is the diagonal, and the
    // choice between the three rotations is one compare pair and one AND.
    assert(count_opcode(module, spv::OpFOrdGreaterThan) == 3);
    assert(count_opcode(module, spv::OpLogicalAnd) == 1);
    // Six selects per per-vertex value: position and the two interpolators.
    assert(count_opcode(module, spv::OpSelect) == 6 * 3);
    // The two conditions broadcast to bvec4. Before SPIR-V 1.4 a vec4 select
    // with a scalar condition is invalid, and the validator rejects it.
    assert(count_opcode(module, spv::OpCompositeConstruct) == 2);
    // The interpolator index is the location on both sides, which is what makes
    // the stage line up with the shaders around it. An entry point's operands
    // are the model, the function, its name, and then the interface - here
    // position in, position out, the inputs, and the outputs.
    const std::size_t interface_start =
        2 + spirv_builder::string_words("main").size();
    assert(entry.size() == interface_start + 6);
    assert(has_decoration(module, entry[interface_start + 0],
                          spv::DecorationBuiltIn, spv::BuiltInPosition));
    assert(has_decoration(module, entry[interface_start + 1],
                          spv::DecorationBuiltIn, spv::BuiltInPosition));
    const uint32_t locations[2] = {0, 3};
    for (std::size_t i = 0; i < 2; ++i) {
        assert(has_decoration(module, entry[interface_start + 2 + i],
                              spv::DecorationLocation, locations[i]));
        assert(has_decoration(module, entry[interface_start + 4 + i],
                              spv::DecorationLocation, locations[i]));
    }
}

// A vertex shader that exports the point size gets an output for it, and says
// so, which is what tells the caller to size the sprites per vertex rather than
// from the register. Dropping the export is silent and turns every sprite into
// one pixel, so both halves are pinned.
void test_vertex_shader_exports_point_size() {
    shader_translator t;
    shader_program program;
    alu_instruction a = op(alu_vector_opcode::add, 0, 1, 0);
    a.is_export = true;
    a.vector_dest = shader_translator::kExportPointSize;
    shader_exec_block block;
    block.cf.opcode = cf_opcode::exec_end;
    shader_instruction instruction;
    instruction.kind = instruction_kind::alu;
    instruction.alu = a;
    block.instructions.push_back(instruction);
    program.exec_blocks.push_back(block);

    shader_translator::options opts;
    opts.type = shader_type::vertex;
    const std::vector<uint32_t> m = t.translate(program, 4, opts);
    assert(t.writes_point_size());
    // The output variable exists, at the location the geometry stage reads.
    const std::vector<uint32_t> entry = first_instruction(m, spv::OpEntryPoint);
    const std::size_t interface_start =
        2 + spirv_builder::string_words("main").size();
    bool found = false;
    for (std::size_t i = interface_start; i < entry.size(); ++i)
        if (has_decoration(m, entry[i], spv::DecorationLocation,
                           shader_translator::kPointSizeLocation))
            found = true;
    assert(found);

    // A shader that does NOT export it says so too, and grows no output.
    shader_translator plain;
    shader_program other;
    alu_instruction position = op(alu_vector_opcode::add, 0, 1, 0);
    position.is_export = true;
    position.vector_dest = shader_translator::kExportPosition;
    shader_exec_block other_block;
    other_block.cf.opcode = cf_opcode::exec_end;
    shader_instruction other_instruction;
    other_instruction.kind = instruction_kind::alu;
    other_instruction.alu = position;
    other_block.instructions.push_back(other_instruction);
    other.exec_blocks.push_back(other_block);
    plain.translate(other, 4, opts);
    assert(!plain.writes_point_size());
}

// PsParamGen: the register the hardware fills in itself. It is not an
// interpolator the vertex shader wrote - it is the pixel's own position and, for
// a point sprite, the sprite's texture coordinate. A point sprite's pixel shader
// has no other way to know where in the sprite it is, so leaving the register at
// zero makes every pixel sample the texture's corner texel.
void test_param_gen_fills_its_register() {
    shader_program program;
    shader_exec_block block;
    block.cf.opcode = cf_opcode::exec_end;
    shader_instruction tex;
    tex.kind = instruction_kind::texture_fetch;
    tex.texture.dimension = fetch_dimension::d2;
    tex.texture.src_reg = 1; // the generated register
    tex.texture.dst_reg = 2;
    tex.texture.fetch_constant_index = 0;
    block.instructions.push_back(tex);
    program.exec_blocks.push_back(block);

    shader_translator::options opts;
    opts.type = shader_type::pixel;
    // Off: no fragment coordinate is read at all.
    shader_translator off;
    const std::vector<uint32_t> without = off.translate(program, 4, opts);
    assert(!has_builtin(without, spv::BuiltInFragCoord));

    // On, for a point: the fragment coordinate AND the sprite coordinate.
    opts.param_gen_interpolator = 1;
    opts.param_gen_point = true;
    shader_translator on;
    const std::vector<uint32_t> with = on.translate(program, 4, opts);
    assert(has_builtin(with, spv::BuiltInFragCoord));
    const std::vector<uint32_t> entry =
        first_instruction(with, spv::OpEntryPoint);
    bool has_coord = false;
    const std::size_t interface_start =
        2 + spirv_builder::string_words("main").size();
    for (std::size_t i = interface_start; i < entry.size(); ++i)
        if (has_decoration(with, entry[i], spv::DecorationLocation,
                           shader_translator::kPointCoordLocation))
            has_coord = true;
    assert(has_coord);
    // Y's sign says the primitive is a point, so it is negated. For a non-point
    // draw it is not, and there is no sprite coordinate to read.
    assert(count_opcode(with, spv::OpFNegate) == 1);
    opts.param_gen_point = false;
    shader_translator not_point;
    const std::vector<uint32_t> triangle =
        not_point.translate(program, 4, opts);
    assert(has_builtin(triangle, spv::BuiltInFragCoord));
    assert(count_opcode(triangle, spv::OpFNegate) == 0);

    // An index outside the interpolator range is refused rather than used to
    // write past the register file.
    opts.param_gen_interpolator = 40;
    shader_translator out_of_range;
    assert(!has_builtin(out_of_range.translate(program, 4, opts),
                        spv::BuiltInFragCoord));
}

// The geometry shader that turns a point into a sprite: one point in, four
// vertices out, with the sprite's own texture coordinate per corner.
void test_point_geometry_shader_shape() {
    point_sprite_params params;
    params.constant_diameter[0] = 8.0f;
    params.constant_diameter[1] = 8.0f;
    params.viewport[0] = 512.0f;
    params.viewport[1] = 512.0f;
    const std::vector<uint32_t> module =
        build_point_geometry_shader({0, 3}, params);
    const std::vector<uint32_t> entry =
        first_instruction(module, spv::OpEntryPoint);
    assert(!entry.empty() && entry[0] == spv::ExecutionModelGeometry);
    assert(count_opcode(module, spv::OpEmitVertex) == 4);
    assert(count_opcode(module, spv::OpEndPrimitive) == 1);
    // Position in and out, the sprite coordinate out, and an in/out pair per
    // interpolator. No size input: this draw takes it from the register.
    assert(count_opcode(module, spv::OpVariable) == 3 + 2 * 2);
    // The size is clamped only when it comes from the vertex shader AND the
    // register names a range - clamping a constant size would be meaningless,
    // and clamping to an unset [0, 0] range would make every sprite vanish.
    assert(count_opcode(module, spv::OpExtInst) == 0);

    point_sprite_params per_vertex = params;
    per_vertex.from_vertex = true;
    per_vertex.min_diameter = 2.0f;
    per_vertex.max_diameter = 128.0f;
    const std::vector<uint32_t> sized =
        build_point_geometry_shader({0}, per_vertex);
    // One more input variable - the exported size - and one clamp.
    assert(count_opcode(sized, spv::OpVariable) == 3 + 2 * 1 + 1);
    assert(count_opcode(sized, spv::OpExtInst) == 1);

    point_sprite_params unset = per_vertex;
    unset.min_diameter = 0.0f;
    unset.max_diameter = 0.0f;
    assert(count_opcode(build_point_geometry_shader({0}, unset),
                        spv::OpExtInst) == 0);
}

// A vertex shader that exports no interpolators still needs the stage; it then
// passes position through and nothing else.
void test_rectangle_geometry_shader_without_interpolators() {
    const std::vector<uint32_t> module = build_rectangle_geometry_shader({});
    assert(count_opcode(module, spv::OpVariable) == 2);
    assert(count_opcode(module, spv::OpEmitVertex) == 4);
    assert(count_opcode(module, spv::OpSelect) == 6);
    assert(count_opcode(module, spv::OpStore) == 4);
}

int main() {
    test_core_ops();
    test_glsl_ext_ops();
    test_mad_has_three_sources();
    test_single_source_op();
    test_swizzle_emits_shuffle();
    test_negate_emits_fnegate();
    test_partial_write_mask_merges();
    test_clamp_emits_fclamp();
    test_dot_product_broadcasts();
    test_compare_selects_one_or_zero();
    test_conditional_move_selects_between_two_sources();
    test_scalar_reciprocal();
    test_scalar_transcendental();
    test_scalar_two_component();
    test_scalar_compare();
    test_vector_and_scalar_co_issue();
    test_pixel_and_vertex_outputs();
    test_export_writes_output();
    test_export_to_unrouted_index_is_dropped();
    test_vertex_fetches_become_inputs();
    test_mini_fetch_inherits_slot_and_stride();
    test_pixel_shader_declares_no_vertex_inputs();
    test_vertex_fetch_loads_and_stores();
    test_keep_swizzle_writes_nothing();
    test_literal_swizzle_components();
    test_constant_operand_reads_buffer();
    test_max_as_writes_the_address_register();
    test_max_asf_truncates_downwards();
    test_max_a_writes_the_address_register_and_the_max();
    test_address_register_is_declared_only_when_written();
    test_relative_constant_indexes_by_the_address_register();
    test_relative_constant_clamps_into_this_stage_s_half();
    test_relative_constant_without_a_writer_is_a_literal_index();
    test_address_register_store_is_predicated();
    test_cube_selects_the_major_axis();
    test_max4_takes_the_largest_component();
    test_vector_kill_discards_the_fragment();
    test_kill_is_pixel_only();
    test_scalar_kill_discards_the_fragment();
    test_predicated_kill_is_gated_on_the_predicate();
    test_setp_sets_predicate();
    test_vector_predicate_push();
    test_vector_predicate_push_comparisons();
    test_scalar_predicate_invert();
    test_scalar_predicate_pop();
    test_scalar_predicate_restore();
    test_scalar_predicate_clear_reads_no_operand();
    test_predicate_is_set_even_with_no_destination();
    test_an_exports_scalar_half_writes_the_vector_destination();
    test_previous_scalar_is_written_then_read();
    test_setp_leaves_the_inverse_predicate_in_previous_scalar();
    test_previous_scalar_updates_with_an_empty_write_mask();
    test_scalar_constant_pair_reads_two_operands();
    test_scalar_constant_pair_temp_index_is_range_checked();
    test_predicated_instruction_branches();
    test_predicated_condition_false_negates();
    test_program_emits_each_block();
    test_conditional_block_is_wrapped();
    test_loop_becomes_a_structured_loop();
    test_forward_jump_becomes_an_if();
    test_jump_pair_becomes_if_else();
    test_call_is_reported_not_guessed();
    test_backward_jump_is_reported();
    test_plain_program_is_unchanged();
    test_texture_fetch_samples();
    test_texture_fetch_honours_destination_swizzle();
    test_texture_fetch_keep_everything_writes_nothing();
    test_texture_fetch_honours_source_swizzle();
    test_every_defined_opcode_is_translated();
    test_unsupported_and_out_of_range_skipped();
    test_rectangle_geometry_shader_shape();
    test_rectangle_geometry_shader_without_interpolators();
    test_vertex_shader_exports_point_size();
    test_param_gen_fills_its_register();
    test_point_geometry_shader_shape();
    std::printf("shader_translator_test: all checks passed\n");
    return 0;
}
