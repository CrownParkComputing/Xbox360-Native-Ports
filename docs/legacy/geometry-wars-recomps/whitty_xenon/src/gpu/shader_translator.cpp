#include "whitty_xenon/gpu/shader_translator.h"

#include <cmath>

#include "whitty_xenon/gpu/vertex_format.h"

#include <algorithm>
#include <limits>
#include <tuple>
#include <utility>

namespace whitty_xenon::gpu {

shader_translator::vector_op shader_translator::op_for(
    alu_vector_opcode opcode) noexcept {
    using k = op_kind;
    switch (opcode) {
        case alu_vector_opcode::add: return {k::core, spv::OpFAdd, 2};
        case alu_vector_opcode::mul: return {k::core, spv::OpFMul, 2};
        case alu_vector_opcode::max: return {k::ext, glsl::FMax, 2};
        case alu_vector_opcode::min: return {k::ext, glsl::FMin, 2};
        case alu_vector_opcode::mad: return {k::ext, glsl::Fma, 3};
        case alu_vector_opcode::frc: return {k::ext, glsl::Fract, 1};
        case alu_vector_opcode::trunc: return {k::ext, glsl::Trunc, 1};
        case alu_vector_opcode::floor: return {k::ext, glsl::Floor, 1};
        case alu_vector_opcode::dp4: return {k::dot, 0, 2, 4};
        case alu_vector_opcode::dp3: return {k::dot, 0, 2, 3};
        // dp2add is the two-dimensional rotation of every sprite quad this
        // console ever drew: dot((x, y), (cos, sin)) plus an offset, one
        // instruction per axis. Xenia's ucode.h gives the order as
        // src0.x*src1.x + src0.y*src1.y + src2.x, and notes that the sq_alu
        // reference disagreeing with MSDN was settled by assembling Shader
        // Model 2 dp2add through XNA - so the operands are NOT swizzled.
        case alu_vector_opcode::dp2_add: return {k::dot2_add, 0, 3, 2};
        case alu_vector_opcode::seq:
            return {k::compare, spv::OpFOrdEqual, 2};
        case alu_vector_opcode::sne:
            return {k::compare, spv::OpFOrdNotEqual, 2};
        case alu_vector_opcode::sgt:
            return {k::compare, spv::OpFOrdGreaterThan, 2};
        case alu_vector_opcode::sge:
            return {k::compare, spv::OpFOrdGreaterThanEqual, 2};
        // The conditional moves, which pick between two operands per component
        // on the sign of a third: cnde takes src1 where src0 is zero, cndge
        // where it is non-negative, cndgt where it is positive. A shader that
        // draws a shape out of one vertex buffer uses them to choose between two
        // candidate positions, so dropping one does not tint the shape - it puts
        // its vertices somewhere else entirely, and the shape simply is not
        // there.
        case alu_vector_opcode::cnd_eq:
            return {k::condition, spv::OpFOrdEqual, 3};
        case alu_vector_opcode::cnd_ge:
            return {k::condition, spv::OpFOrdGreaterThanEqual, 3};
        case alu_vector_opcode::cnd_gt:
            return {k::condition, spv::OpFOrdGreaterThan, 3};
        // The push half of the predicate stack. The Xenos has ONE predicate
        // register, so a shader that nests conditions keeps the outer ones in
        // an ordinary register: each push adds one to a counter and each pop
        // takes one away, and only a counter back at zero re-enables the
        // writes. The comparison named by the opcode applies to src1 alone -
        // src0 is always tested for equality with zero, being the counter.
        // (Not being able to translate these is not a missing effect but a
        // missing *branch*: every instruction the shader predicated on one runs
        // with a predicate register nothing wrote.)
        case alu_vector_opcode::setp_eq_push:
            return {k::push_predicate, spv::OpFOrdEqual, 2};
        // Deliberately the UNORDERED inequality, which the `sne` and `setp_ne`
        // above are not. Both of Xenia's back ends use it here (DXBC's `ne` and
        // the SPIR-V translator's OpFUnordNotEqual), and it is the answer the
        // hardware gives: a NaN counter is not equal to zero, so the nesting
        // level it stands for stays pushed. The ordered form would quietly pop
        // it. The inconsistency with `sne` is left alone rather than "fixed"
        // here: changing an instruction three working titles already draw with
        // is a separate measurement, not a tidy-up.
        case alu_vector_opcode::setp_ne_push:
            return {k::push_predicate, spv::OpFUnordNotEqual, 2};
        case alu_vector_opcode::setp_gt_push:
            return {k::push_predicate, spv::OpFOrdGreaterThan, 2};
        case alu_vector_opcode::setp_ge_push:
            return {k::push_predicate, spv::OpFOrdGreaterThanEqual, 2};
        case alu_vector_opcode::max4: return {k::max_of_four, 0, 1};
        // cube reads ONE operand however many the encoding names, which is
        // Xenia's rule too (`operand_count = 1` for kCube): the second is
        // there because the assembler's syntax has two, and reading it would
        // range-check a register the instruction does not use.
        case alu_vector_opcode::cube: return {k::cube_face, 0, 1};
        // The vector half of the maxas family: an ordinary component-wise max
        // whose real purpose is that it also loads the address register. The
        // max itself is `max` above, spelled the same way - Xenia writes both
        // as `a >= b ? a : b` for Shader Model 3's NaN rule, which differs
        // from GLSL's FMax only when an operand is NaN, and re-spelling the
        // `max` three working titles already draw with is a separate
        // measurement rather than a tidy-up. The a0 write is the part that was
        // missing.
        case alu_vector_opcode::max_a:
            return {k::max_address, glsl::FMax, 2};
        // The distance vector, the first half of a fixed-function attenuation:
        // (1, d*d, d*d, 1/d) arrives as (1, src0.y*src1.y, src0.z, src1.w),
        // which the shader then dots with the attenuation constants. Three of
        // its four components come from somewhere different, so there is no
        // component-wise form to approximate it with.
        case alu_vector_opcode::dst:
            return {k::distance_vector, 0, 2};
        // The pixel kill. Dropping one does not make a shader approximately
        // right: every pixel it was supposed to discard is drawn instead, so an
        // alpha-tested surface - foam, a decal, the cut-out edge of a sprite -
        // comes out as an opaque shard of its bounding quad.
        case alu_vector_opcode::kill_eq:
            return {k::kill, spv::OpFOrdEqual, 2};
        case alu_vector_opcode::kill_gt:
            return {k::kill, spv::OpFOrdGreaterThan, 2};
        case alu_vector_opcode::kill_ge:
            return {k::kill, spv::OpFOrdGreaterThanEqual, 2};
        case alu_vector_opcode::kill_ne:
            return {k::kill, spv::OpFUnordNotEqual, 2};
        default: return {k::unsupported, 0, 0};
    }
}

bool shader_translator::is_supported_vector_op(
    alu_vector_opcode opcode) noexcept {
    return op_for(opcode).kind != op_kind::unsupported;
}

bool shader_translator::honours_control_flow(
    const cf_instruction& cf) noexcept {
    switch (cf.opcode) {
        // Nothing to reproduce.
        case cf_opcode::nop:
        // An output-size reservation, not a branch. Vulkan declares its
        // outputs in the module, so there is nothing here to honour.
        case cf_opcode::alloc:
        // A hint that no further vertex fetch will happen. No effect on what
        // the shader computes.
        case cf_opcode::mark_vs_fetch_done:
        // Unconditional, and the instructions are translated in order.
        case cf_opcode::exec:
        case cf_opcode::exec_end:
            return true;
        // Conditional on p0, wrapped in a structured `if` - but the `if` is
        // built on p0 being SET, and the instruction's own condition bit says
        // which way round it is. An `(!p0) exec` therefore runs exactly when it
        // should not.
        case cf_opcode::cond_exec_pred:
        case cf_opcode::cond_exec_pred_end:
            return cf.condition;
        // Conditional on a bit of the boolean constant bank. Not honoured: the
        // block runs unconditionally.
        case cf_opcode::cond_exec:
        case cf_opcode::cond_exec_end:
        // The "predicate clean" forms are ALSO bool-constant conditionals, not
        // predicate ones - Xenia's ucode.h is explicit about it, and the field
        // layout proves it: the bits a predicate condition would occupy hold an
        // eight-bit constant index.
        case cf_opcode::cond_exec_pred_clean:
        case cf_opcode::cond_exec_pred_clean_end:
            return false;
        // A counted loop. Not honoured: the body runs once, whatever the loop
        // constant says, and aL stays at zero throughout.
        case cf_opcode::loop_start:
        case cf_opcode::loop_end:
            return false;
        // A conditional jump. Not honoured: the blocks it jumps over run too,
        // so both sides of a branch are taken.
        case cf_opcode::cond_jmp:
            return false;
        // Subroutines. Not reproduced: a dropped cond_call runs the callee
        // unconditionally and in place, and the ret that follows does not
        // return - so everything after the call site runs inside it.
        case cf_opcode::cond_call:
        case cf_opcode::ret:
            return false;
    }
    return false;
}

void shader_translator::setup_constant_buffer() {
    // struct { vec4 c[512]; } bound as a uniform buffer at set 0, binding 0.
    // The whole bank, both stages' halves, because which half a shader reads is
    // decided by the index it adds rather than by which buffer is bound.
    const uint32_t count = m_b.constant_uint(kFloatConstantCount);
    const uint32_t array_type = m_b.allocate_id();
    m_b.emit(spirv_section::types, spv::OpTypeArray,
             {array_type, m_vec4_type, count});
    m_b.emit(spirv_section::decorations, spv::OpDecorate,
             {array_type, spv::DecorationArrayStride, 16});

    const uint32_t struct_type = m_b.allocate_id();
    m_b.emit(spirv_section::types, spv::OpTypeStruct, {struct_type, array_type});
    m_b.emit(spirv_section::decorations, spv::OpDecorate,
             {struct_type, spv::DecorationBlock});
    m_b.emit(spirv_section::decorations, spv::OpMemberDecorate,
             {struct_type, 0, spv::DecorationOffset, 0});

    const uint32_t block_ptr =
        m_b.type_pointer(spv::StorageClassUniform, struct_type);
    m_const_buffer_var = m_b.allocate_id();
    m_b.emit(spirv_section::types, spv::OpVariable,
             {block_ptr, m_const_buffer_var, spv::StorageClassUniform});
    m_b.emit(spirv_section::decorations, spv::OpDecorate,
             {m_const_buffer_var, spv::DecorationDescriptorSet, 0});
    m_b.emit(spirv_section::decorations, spv::OpDecorate,
             {m_const_buffer_var, spv::DecorationBinding, 0});

    m_uniform_vec4_ptr = m_b.type_pointer(spv::StorageClassUniform, m_vec4_type);
    m_const_member_zero = m_b.constant_uint(0);
}

bool shader_translator::source_in_range(const alu_source& source) const {
    // A constant's 8-bit register field always lands inside this stage's half
    // of the bank, so only a temp register can be out of range.
    return source.is_temp ? source.temp_reg() < m_temp_vars.size() : true;
}

uint32_t shader_translator::load_register_vec4(const alu_source& source) {
    const uint32_t value = m_b.allocate_id();
    if (source.is_temp) {
        m_b.emit(spirv_section::functions, spv::OpLoad,
                 {m_vec4_type, value, m_temp_vars[source.temp_reg()]});
    } else {
        // A constant operand: index into the float-constant buffer. The index
        // is relative to this stage's half of the bank.
        //
        // Usually a literal. An operand that says "the constant bank indexed by
        // a0" - `c[a0 + n]` - makes it a value computed at run time instead,
        // which is the same OpAccessChain with a different index rather than a
        // second path: the bank is one uniform array either way.
        //
        // The clamp is not tidiness. A uniform read outside the array is
        // undefined behaviour in SPIR-V - not a wrapped read - and a0 is
        // whatever the shader's own arithmetic put there. It is clamped into
        // THIS STAGE's half of the bank rather than into the whole bank, so a
        // pixel shader with a negative a0 reads its own lowest constant rather
        // than a vertex shader's.
        uint32_t index;
        // Two registers can index the bank and they are not the same one: a0,
        // written by the maxas family, and aL, stepped by a loop. Both resolve
        // to the same access chain with a computed index; which register is
        // read is the only difference, and reading the wrong one is invisible
        // until the shader is inside a loop.
        const uint32_t index_var =
            source.const_address_relative && m_address_var != 0
                ? m_address_var
            : source.const_address_loop_relative && m_loop_address_var != 0
                ? m_loop_address_var
                : 0;
        if (index_var != 0) {
            const uint32_t int_type = m_b.type_int(true);
            const uint32_t address = m_b.allocate_id();
            m_b.emit(spirv_section::functions, spv::OpLoad,
                     {int_type, address, index_var});
            const uint32_t sum = m_b.allocate_id();
            m_b.emit(spirv_section::functions, spv::OpIAdd,
                     {int_type, sum, address,
                      m_b.constant_int(
                          static_cast<int32_t>(source.reg + m_constant_base))});
            index = m_b.allocate_id();
            m_b.emit(
                spirv_section::functions, spv::OpExtInst,
                {int_type, index, m_glsl_ext, glsl::SClamp, sum,
                 m_b.constant_int(static_cast<int32_t>(m_constant_base)),
                 m_b.constant_int(static_cast<int32_t>(
                     m_constant_base + kFloatConstantCount / 2 - 1))});
        } else {
            index = m_b.constant_uint(source.reg + m_constant_base);
        }
        const uint32_t ptr = m_b.allocate_id();
        m_b.emit(spirv_section::functions, spv::OpAccessChain,
                 {m_uniform_vec4_ptr, ptr, m_const_buffer_var,
                  m_const_member_zero, index});
        m_b.emit(spirv_section::functions, spv::OpLoad,
                 {m_vec4_type, value, ptr});
    }
    return value;
}

uint32_t shader_translator::load_source(const alu_source& source) {
    uint32_t value = load_register_vec4(source);

    // Swizzle: a component-relative select of the four components. Skip the
    // identity swizzle (0), which reads each component into itself.
    if (source.swizzle != 0) {
        const uint32_t shuffled = m_b.allocate_id();
        std::vector<uint32_t> operands = {m_vec4_type, shuffled, value, value};
        for (uint32_t c = 0; c < 4; ++c)
            operands.push_back(
                alu_instruction::swizzled_component(source.swizzle, c));
        m_b.emit(spirv_section::functions, spv::OpVectorShuffle, operands);
        value = shuffled;
    }

    if (source.negate) {
        const uint32_t negated = m_b.allocate_id();
        m_b.emit(spirv_section::functions, spv::OpFNegate,
                 {m_vec4_type, negated, value});
        value = negated;
    }
    return value;
}

void shader_translator::store_masked(uint32_t dest_var, uint32_t value,
                                     uint8_t mask) {
    mask &= 0xF;
    if (mask == 0) return;           // nothing to write
    if (mask == 0xF) {               // full write, no merge needed
        m_b.emit(spirv_section::functions, spv::OpStore, {dest_var, value});
        return;
    }
    // Partial write: merge the computed components (0..3) with the current
    // register value (4..7) per the mask, then store.
    const uint32_t current = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpLoad,
             {m_vec4_type, current, dest_var});
    const uint32_t merged = m_b.allocate_id();
    std::vector<uint32_t> operands = {m_vec4_type, merged, value, current};
    for (uint32_t c = 0; c < 4; ++c)
        operands.push_back((mask & (1u << c)) ? c : 4u + c);
    m_b.emit(spirv_section::functions, spv::OpVectorShuffle, operands);
    m_b.emit(spirv_section::functions, spv::OpStore, {dest_var, merged});
}

void shader_translator::store_fetch_result(uint32_t dest_var, uint32_t sample,
                                           uint16_t dst_swizzle) {
    // Three bits per component of the DESTINATION register:
    //   0-3  take that component of the sample
    //   4    the constant 0.0
    //   5    the constant 1.0
    //   7    KEEP - leave the register's own component alone
    // 6 is not a valid encoding; Xenia treats it as 0 and so does this.
    uint8_t mask = 0;
    bool identity = true;
    for (uint32_t c = 0; c < 4; ++c) {
        const uint32_t selector = (dst_swizzle >> (c * 3)) & 0x7;
        // Selector 6 is not a documented encoding, and 7 is KEEP; neither
        // writes. Guessing at 6 would put a value in a component the shader
        // never asked to be written.
        if (selector >= 6) {
            identity = false;
            continue;
        }
        mask = static_cast<uint8_t>(mask | (1u << c));
        if (selector != c) identity = false;
    }
    if (mask == 0) return; // a fetch that writes nothing at all
    // The identity encoding (0x688 - x, y, z, w into x, y, z, w) is what
    // almost every fetch carries, and taking it apart into four extracts and a
    // construct says the same thing in more instructions.
    if (identity) {
        m_b.emit(spirv_section::functions, spv::OpStore, {dest_var, sample});
        return;
    }
    const uint32_t zero = m_b.constant_float(0.0f);
    std::vector<uint32_t> parts = {m_vec4_type, m_b.allocate_id()};
    for (uint32_t c = 0; c < 4; ++c) {
        const uint32_t selector = (dst_swizzle >> (c * 3)) & 0x7;
        // An unwritten component still needs a value in the constructed
        // vector; the mask is what stops it reaching the register.
        parts.push_back(selector < 4  ? extract_component(sample, selector)
                        : selector == 5 ? m_b.constant_float(1.0f)
                                        : zero);
    }
    const uint32_t built = parts[1];
    m_b.emit(spirv_section::functions, spv::OpCompositeConstruct, parts);
    store_masked(dest_var, built, mask);
}

uint32_t shader_translator::vec4_splat(float value) {
    const uint32_t component = m_b.constant_float(value);
    return m_b.constant_composite(
        m_vec4_type, {component, component, component, component});
}

uint32_t shader_translator::broadcast(uint32_t scalar) {
    const uint32_t result = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpCompositeConstruct,
             {m_vec4_type, result, scalar, scalar, scalar, scalar});
    return result;
}

uint32_t shader_translator::address_register_value(uint32_t scalar,
                                                   bool round_nearest) {
    // Taken from Xenia's spirv_shader_translator_alu.cc, which spells both
    // forms out:
    //
    //   maxas   a0 = (int)clamp(floor(src0.a + 0.5), -256.0, 255.0)
    //   maxasf  a0 = (int)clamp(floor(src0.a),       -256.0, 255.0)
    //
    // The +0.5 is what makes maxas a round-to-nearest and maxasf a truncation
    // downwards, and it is the only difference between the two instructions.
    // The clamp is the hardware's own register range; it is also what keeps
    // the conversion below defined, since OpConvertFToS on a value outside the
    // int range - or on a NaN - is undefined, and the result of that indexes a
    // uniform.
    uint32_t value = scalar;
    if (round_nearest) {
        const uint32_t biased = m_b.allocate_id();
        m_b.emit(spirv_section::functions, spv::OpFAdd,
                 {m_float_type, biased, value, m_b.constant_float(0.5f)});
        value = biased;
    }
    const uint32_t floored = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpExtInst,
             {m_float_type, floored, m_glsl_ext, glsl::Floor, value});
    const uint32_t clamped = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpExtInst,
             {m_float_type, clamped, m_glsl_ext, glsl::NClamp, floored,
              m_b.constant_float(-256.0f), m_b.constant_float(255.0f)});
    const uint32_t result = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpConvertFToS,
             {m_b.type_int(true), result, clamped});
    return result;
}

uint32_t shader_translator::extract_component(uint32_t vec, uint32_t component) {
    const uint32_t result = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpCompositeExtract,
             {m_float_type, result, vec, component});
    return result;
}

shader_translator::scalar_op shader_translator::scalar_op_for(
    alu_scalar_opcode opcode) noexcept {
    using k = scalar_kind;
    switch (opcode) {
        // Reciprocal family.
        case alu_scalar_opcode::rcp:
        case alu_scalar_opcode::rcpc:
        case alu_scalar_opcode::rcpf: return {k::reciprocal, 0};
        // Unary transcendentals (Xenos exp/log are base-2).
        case alu_scalar_opcode::rsq:
        case alu_scalar_opcode::rsqc:
        case alu_scalar_opcode::rsqf: return {k::unary_ext, glsl::InverseSqrt};
        case alu_scalar_opcode::sqrt: return {k::unary_ext, glsl::Sqrt};
        case alu_scalar_opcode::exp: return {k::unary_ext, glsl::Exp2};
        case alu_scalar_opcode::log:
        case alu_scalar_opcode::logc: return {k::unary_ext, glsl::Log2};
        case alu_scalar_opcode::sin: return {k::unary_ext, glsl::Sin};
        case alu_scalar_opcode::cos: return {k::unary_ext, glsl::Cos};
        case alu_scalar_opcode::floors: return {k::unary_ext, glsl::Floor};
        case alu_scalar_opcode::truncs: return {k::unary_ext, glsl::Trunc};
        case alu_scalar_opcode::frcs: return {k::unary_ext, glsl::Fract};
        // Two-component (W and X of the operand) ops.
        case alu_scalar_opcode::adds: return {k::binary_core, spv::OpFAdd};
        case alu_scalar_opcode::muls: return {k::binary_core, spv::OpFMul};
        case alu_scalar_opcode::subs: return {k::binary_core, spv::OpFSub};
        // The _prev forms take the previous scalar result as their second
        // operand: dest = src.a <op> ps.
        case alu_scalar_opcode::adds_prev:
            return {k::binary_prev, spv::OpFAdd};
        case alu_scalar_opcode::muls_prev:
            return {k::binary_prev, spv::OpFMul};
        // The LIT half of the scalar unit: src0.a * ps, except that the
        // specular term is FORCED OFF - to -FLT_MAX, which the exponent that
        // follows turns into zero - when the surface faces away from the light
        // or either input has gone non-finite. Translating it as a plain
        // multiply lights the backs of surfaces.
        case alu_scalar_opcode::muls_prev2:
            return {k::multiply_previous_lit, 0};
        case alu_scalar_opcode::subs_prev:
            return {k::binary_prev, spv::OpFSub};
        // "No scalar operation" is what this means in almost every instruction
        // that carries it, and that is why it reads as a no-op - but the name
        // is literal: it RETAINS ps, and with a destination it copies ps there.
        // A shader that accumulates a scalar across instructions and then
        // parks the total in a register does it with this.
        case alu_scalar_opcode::retain_prev:
            return {k::retain_previous, 0};
        // The constant forms: dest = constant.a <op> temp.b. The 0 and 1
        // flavours are one instruction - the opcode's low bit is an extra bit of
        // the temporary register's index - so both map to the same operation.
        case alu_scalar_opcode::mulsc0:
        case alu_scalar_opcode::mulsc1:
            return {k::constant_pair, spv::OpFMul};
        case alu_scalar_opcode::addsc0:
        case alu_scalar_opcode::addsc1:
            return {k::constant_pair, spv::OpFAdd};
        case alu_scalar_opcode::subsc0:
        case alu_scalar_opcode::subsc1:
            return {k::constant_pair, spv::OpFSub};
        case alu_scalar_opcode::maxs: return {k::binary_ext, glsl::FMax};
        // maxas and maxasf: `max` again, and a write to the ADDRESS REGISTER
        // a0 that is the whole point of the instruction. The two differ only
        // in how the value is rounded on the way into a0 - maxas rounds to
        // nearest (floor of x + 0.5), maxasf truncates downwards (floor of x) -
        // and `op` carries which. See Xenia's ucode.h, which gives both.
        case alu_scalar_opcode::max_as: return {k::max_address, 1};
        case alu_scalar_opcode::max_asf: return {k::max_address, 0};
        case alu_scalar_opcode::mins: return {k::binary_ext, glsl::FMin};
        case alu_scalar_opcode::seqs: return {k::binary_cmp, spv::OpFOrdEqual};
        case alu_scalar_opcode::snes:
            return {k::binary_cmp, spv::OpFOrdNotEqual};
        case alu_scalar_opcode::sgts:
            return {k::binary_cmp, spv::OpFOrdGreaterThan};
        case alu_scalar_opcode::sges:
            return {k::binary_cmp, spv::OpFOrdGreaterThanEqual};
        // setp* set the predicate register from a compare against zero.
        case alu_scalar_opcode::setp_eq:
            return {k::set_predicate, spv::OpFOrdEqual};
        case alu_scalar_opcode::setp_ne:
            return {k::set_predicate, spv::OpFOrdNotEqual};
        case alu_scalar_opcode::setp_gt:
            return {k::set_predicate, spv::OpFOrdGreaterThan};
        case alu_scalar_opcode::setp_ge:
            return {k::set_predicate, spv::OpFOrdGreaterThanEqual};
        // The rest of the predicate stack, the other side of the vector
        // setp_*_push above: inv and rstr restore a saved predicate out of a
        // register, pop unwinds one level of nesting, clr clears it outright.
        case alu_scalar_opcode::setp_inv:
            return {k::predicate_invert, 0};
        case alu_scalar_opcode::setp_pop:
            return {k::predicate_pop, 0};
        case alu_scalar_opcode::setp_clr:
            return {k::predicate_clear, 0};
        case alu_scalar_opcode::setp_rstr:
            return {k::predicate_restore, 0};
        // The scalar kills compare the operand against zero, except kills_one,
        // which compares against one.
        case alu_scalar_opcode::kills_eq:
            return {k::kill_scalar, spv::OpFOrdEqual};
        case alu_scalar_opcode::kills_gt:
            return {k::kill_scalar, spv::OpFOrdGreaterThan};
        case alu_scalar_opcode::kills_ge:
            return {k::kill_scalar, spv::OpFOrdGreaterThanEqual};
        case alu_scalar_opcode::kills_ne:
            return {k::kill_scalar, spv::OpFUnordNotEqual};
        case alu_scalar_opcode::kills_one:
            return {k::kill_scalar_one, spv::OpFOrdEqual};
        default: return {k::unsupported, 0};
    }
}

bool shader_translator::is_supported_scalar_op(
    alu_scalar_opcode opcode) noexcept {
    return scalar_op_for(opcode).kind != scalar_kind::unsupported;
}

uint32_t shader_translator::export_var_for(uint32_t index) const {
    const auto it = m_export_vars.find(index);
    return it == m_export_vars.end() ? 0 : it->second;
}

uint32_t shader_translator::predicate_gate(bool condition) {
    const uint32_t bool_type = m_b.type_bool();
    const uint32_t pred = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpLoad,
             {bool_type, pred, m_predicate_var});
    if (condition) return pred;
    const uint32_t negated = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpLogicalNot,
             {bool_type, negated, pred});
    return negated;
}

void shader_translator::predicated(bool is_predicated, bool condition,
                                   const std::function<void()>& store) {
    predicated(is_predicated ? predicate_gate(condition) : 0, store);
}

void shader_translator::kill_fragment(uint32_t condition) {
    // OpKill exists only in a fragment shader. A vertex shader carrying a kill
    // is not a thing any title does, and emitting one there would make the
    // module invalid - which would take the whole shader out rather than one
    // instruction.
    if (m_shader_type != shader_type::pixel) return;
    // A predicated kill discards only where the predicate also holds. The
    // whole instruction is conditional on the console, and a kill is the one
    // part of one that cannot be undone by skipping a store.
    if (m_predicate_gate != 0) {
        const uint32_t both = m_b.allocate_id();
        m_b.emit(spirv_section::functions, spv::OpLogicalAnd,
                 {m_b.type_bool(), both, m_predicate_gate, condition});
        condition = both;
    }
    const uint32_t kill_label = m_b.allocate_id();
    const uint32_t merge_label = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpSelectionMerge, {merge_label, 0});
    m_b.emit(spirv_section::functions, spv::OpBranchConditional,
             {condition, kill_label, merge_label});
    m_b.emit(spirv_section::functions, spv::OpLabel, {kill_label});
    // OpKill is a terminator, so this block ends here rather than branching to
    // the merge.
    m_b.emit(spirv_section::functions, spv::OpKill, {});
    m_b.emit(spirv_section::functions, spv::OpLabel, {merge_label});
}

void shader_translator::predicated(uint32_t gate,
                                   const std::function<void()>& store) {
    if (gate == 0) {
        store();
        return;
    }
    // Branch the store on the predicate register: a structured `if`.
    const uint32_t cond = gate;
    const uint32_t then_label = m_b.allocate_id();
    const uint32_t merge_label = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpSelectionMerge, {merge_label, 0});
    m_b.emit(spirv_section::functions, spv::OpBranchConditional,
             {cond, then_label, merge_label});
    m_b.emit(spirv_section::functions, spv::OpLabel, {then_label});
    store();
    m_b.emit(spirv_section::functions, spv::OpBranch, {merge_label});
    m_b.emit(spirv_section::functions, spv::OpLabel, {merge_label});
}

void shader_translator::translate_vector(const alu_instruction& alu) {
    const vector_op op = op_for(alu.vector_opcode);
    if (op.kind == op_kind::unsupported) return;

    // A non-export destination is a temp register and must be in range; an
    // export destination is an export index, resolved below.
    const bool dest_in_range =
        alu.is_export || alu.vector_dest < m_temp_vars.size();
    // max_a is the one vector op whose result is not the point of it: a shader
    // uses it as `mova`, loading the address register and writing nothing
    // worth keeping. So an unavailable destination drops the store rather than
    // the instruction - the same rule the predicate family follows on the
    // scalar side, and for the same reason: a0 is state of the shader, not of
    // that register.
    if (!dest_in_range && op.kind != op_kind::max_address) return;
    for (uint32_t i = 0; i < op.sources; ++i)
        if (!source_in_range(alu.sources[i])) return;

    uint32_t values[3];
    for (uint32_t i = 0; i < op.sources; ++i)
        values[i] = load_source(alu.sources[i]);

    // The new value of a0, for max_a, computed here and stored under the
    // instruction's own predicate below.
    uint32_t address = 0;
    uint32_t result = m_b.allocate_id();
    switch (op.kind) {
        case op_kind::core:
            m_b.emit(spirv_section::functions, op.op,
                     {m_vec4_type, result, values[0], values[1]});
            break;
        case op_kind::ext: {
            std::vector<uint32_t> operands = {m_vec4_type, result, m_glsl_ext,
                                              op.op};
            for (uint32_t i = 0; i < op.sources; ++i)
                operands.push_back(values[i]);
            m_b.emit(spirv_section::functions, spv::OpExtInst, operands);
            break;
        }
        case op_kind::dot: {
            // A dot yields a scalar, broadcast to every written component. dp3
            // takes the first three components only, so its operands are cut
            // down to vec3 before the dot rather than after - OpDot has no
            // component count of its own.
            uint32_t a = values[0];
            uint32_t b = values[1];
            if (op.components == 3) {
                const uint32_t vec3 = m_b.type_vector(m_float_type, 3);
                const uint32_t a3 = m_b.allocate_id();
                const uint32_t b3 = m_b.allocate_id();
                m_b.emit(spirv_section::functions, spv::OpVectorShuffle,
                         {vec3, a3, a, a, 0, 1, 2});
                m_b.emit(spirv_section::functions, spv::OpVectorShuffle,
                         {vec3, b3, b, b, 0, 1, 2});
                a = a3;
                b = b3;
            }
            const uint32_t scalar = m_b.allocate_id();
            m_b.emit(spirv_section::functions, spv::OpDot,
                     {m_float_type, scalar, a, b});
            m_b.emit(spirv_section::functions, spv::OpCompositeConstruct,
                     {m_vec4_type, result, scalar, scalar, scalar, scalar});
            break;
        }
        case op_kind::dot2_add: {
            // Two components of each of the first two operands, plus X of the
            // third, broadcast like any other dot.
            const uint32_t vec2 = m_b.type_vector(m_float_type, 2);
            const uint32_t a2 = m_b.allocate_id();
            const uint32_t b2 = m_b.allocate_id();
            m_b.emit(spirv_section::functions, spv::OpVectorShuffle,
                     {vec2, a2, values[0], values[0], 0, 1});
            m_b.emit(spirv_section::functions, spv::OpVectorShuffle,
                     {vec2, b2, values[1], values[1], 0, 1});
            const uint32_t dot = m_b.allocate_id();
            m_b.emit(spirv_section::functions, spv::OpDot,
                     {m_float_type, dot, a2, b2});
            const uint32_t addend = m_b.allocate_id();
            m_b.emit(spirv_section::functions, spv::OpCompositeExtract,
                     {m_float_type, addend, values[2], 0});
            const uint32_t sum = m_b.allocate_id();
            m_b.emit(spirv_section::functions, spv::OpFAdd,
                     {m_float_type, sum, dot, addend});
            m_b.emit(spirv_section::functions, spv::OpCompositeConstruct,
                     {m_vec4_type, result, sum, sum, sum, sum});
            break;
        }
        case op_kind::compare: {
            // A per-component compare gives a bool vector; select 1.0 / 0.0.
            const uint32_t bvec4 =
                m_b.type_vector(m_b.type_bool(), 4);
            const uint32_t condition = m_b.allocate_id();
            m_b.emit(spirv_section::functions, op.op,
                     {bvec4, condition, values[0], values[1]});
            m_b.emit(spirv_section::functions, spv::OpSelect,
                     {m_vec4_type, result, condition, vec4_splat(1.0f),
                      vec4_splat(0.0f)});
            break;
        }
        case op_kind::condition: {
            // The condition is the first operand against zero, per component;
            // the other two are the values chosen between. OpSelect before
            // SPIR-V 1.4 is strictly per component, so the condition has to be
            // a bool vector rather than a scalar.
            const uint32_t bvec4 = m_b.type_vector(m_b.type_bool(), 4);
            const uint32_t condition = m_b.allocate_id();
            m_b.emit(spirv_section::functions, op.op,
                     {bvec4, condition, values[0], vec4_splat(0.0f)});
            m_b.emit(spirv_section::functions, spv::OpSelect,
                     {m_vec4_type, result, condition, values[1], values[2]});
            break;
        }
        case op_kind::max_address: {
            // a0 takes src0's W component - after the operand's own swizzle and
            // negate, which is what Xenia's GetOperandComponents hands it too.
            if (m_address_var != 0)
                address = address_register_value(
                    extract_component(values[0], 3), /*round_nearest=*/true);
            std::vector<uint32_t> operands = {m_vec4_type, result, m_glsl_ext,
                                              op.op, values[0], values[1]};
            m_b.emit(spirv_section::functions, spv::OpExtInst, operands);
            break;
        }
        case op_kind::cube_face: {
            // The first half of a cube-map lookup, from Xenia's ucode.h:
            //
            //   if (|z| >= |x| && |z| >= |y|)  tc = -y;          sc = z<0?-x:x;
            //                                  ma = z;           id = z<0?5:4;
            //   else if (|y| >= |x|)           tc = y<0?-z:z;    sc = x;
            //                                  ma = y;           id = y<0?3:2;
            //   else                           tc = -y;          sc = x<0?z:-z;
            //                                  ma = x;           id = x<0?1:0;
            //
            // and the result is (tc, sc, 2*ma, id). The shader then divides by
            // that Z and adds 1.5 to reach the face coordinate, so this is not
            // a value anything can approximate: get the face wrong and the
            // reflection on a surface comes from the wrong side of the world.
            //
            // The operand arrives swizzled `.z_xy` - the second component is
            // deliberately skipped - so after load_source has applied that
            // swizzle the direction is (x, y, z) = (v.z, v.w, v.x). Reading
            // v.xyz instead is the mistake this comment exists to prevent.
            //
            // Written as selects rather than as Xenia's nested branches. The
            // three cases are pure arithmetic with no side effects and no
            // divide, so all three are safe to evaluate.
            const uint32_t v = values[0];
            const uint32_t x = extract_component(v, 2);
            const uint32_t y = extract_component(v, 3);
            const uint32_t z = extract_component(v, 0);
            const auto absolute = [&](uint32_t f) {
                const uint32_t id = m_b.allocate_id();
                m_b.emit(spirv_section::functions, spv::OpExtInst,
                         {m_float_type, id, m_glsl_ext, glsl::FAbs, f});
                return id;
            };
            const auto negate = [&](uint32_t f) {
                const uint32_t id = m_b.allocate_id();
                m_b.emit(spirv_section::functions, spv::OpFNegate,
                         {m_float_type, id, f});
                return id;
            };
            const auto compare = [&](uint32_t opcode, uint32_t a, uint32_t b) {
                const uint32_t id = m_b.allocate_id();
                m_b.emit(spirv_section::functions, opcode,
                         {m_b.type_bool(), id, a, b});
                return id;
            };
            const auto select = [&](uint32_t cond, uint32_t a, uint32_t b) {
                const uint32_t id = m_b.allocate_id();
                m_b.emit(spirv_section::functions, spv::OpSelect,
                         {m_float_type, id, cond, a, b});
                return id;
            };
            const uint32_t abs_x = absolute(x);
            const uint32_t abs_y = absolute(y);
            const uint32_t abs_z = absolute(z);
            const uint32_t zero = m_b.constant_float(0.0f);
            const uint32_t neg_x = negate(x);
            const uint32_t neg_y = negate(y);
            const uint32_t neg_z = negate(z);
            const uint32_t x_negative =
                compare(spv::OpFOrdLessThan, x, zero);
            const uint32_t y_negative =
                compare(spv::OpFOrdLessThan, y, zero);
            const uint32_t z_negative =
                compare(spv::OpFOrdLessThan, z, zero);
            const uint32_t z_major = m_b.allocate_id();
            m_b.emit(spirv_section::functions, spv::OpLogicalAnd,
                     {m_b.type_bool(), z_major,
                      compare(spv::OpFOrdGreaterThanEqual, abs_z, abs_x),
                      compare(spv::OpFOrdGreaterThanEqual, abs_z, abs_y)});
            const uint32_t y_major =
                compare(spv::OpFOrdGreaterThanEqual, abs_y, abs_x);
            const auto pick = [&](uint32_t on_z, uint32_t on_y, uint32_t on_x) {
                return select(z_major, on_z, select(y_major, on_y, on_x));
            };
            const uint32_t tc =
                pick(neg_y, select(y_negative, neg_z, z), neg_y);
            const uint32_t sc = pick(select(z_negative, neg_x, x), x,
                                     select(x_negative, z, neg_z));
            const uint32_t major = pick(z, y, x);
            const uint32_t id_z = select(z_negative, m_b.constant_float(5.0f),
                                         m_b.constant_float(4.0f));
            const uint32_t id_y = select(y_negative, m_b.constant_float(3.0f),
                                         m_b.constant_float(2.0f));
            const uint32_t id_x = select(x_negative, m_b.constant_float(1.0f),
                                         m_b.constant_float(0.0f));
            const uint32_t face = pick(id_z, id_y, id_x);
            // Twice the major axis: the shader reciprocates this to project
            // the other two onto the face.
            const uint32_t doubled = m_b.allocate_id();
            m_b.emit(spirv_section::functions, spv::OpFMul,
                     {m_float_type, doubled, major, m_b.constant_float(2.0f)});
            m_b.emit(spirv_section::functions, spv::OpCompositeConstruct,
                     {m_vec4_type, result, tc, sc, doubled, face});
            break;
        }
        case op_kind::max_of_four: {
            // The largest of the four components, broadcast like a dot.
            const uint32_t a = extract_component(values[0], 0);
            const uint32_t b = extract_component(values[0], 1);
            const uint32_t c = extract_component(values[0], 2);
            const uint32_t d = extract_component(values[0], 3);
            const auto larger = [&](uint32_t l, uint32_t r) {
                const uint32_t id = m_b.allocate_id();
                m_b.emit(spirv_section::functions, spv::OpExtInst,
                         {m_float_type, id, m_glsl_ext, glsl::FMax, l, r});
                return id;
            };
            const uint32_t best = larger(larger(a, b), larger(c, d));
            m_b.emit(spirv_section::functions, spv::OpCompositeConstruct,
                     {m_vec4_type, result, best, best, best, best});
            break;
        }
        case op_kind::kill: {
            // Discard where ANY component compares true, then leave zero in the
            // destination - which is what the hardware writes.
            const uint32_t bvec4 = m_b.type_vector(m_b.type_bool(), 4);
            const uint32_t per_component = m_b.allocate_id();
            m_b.emit(spirv_section::functions, op.op,
                     {bvec4, per_component, values[0], values[1]});
            const uint32_t any = m_b.allocate_id();
            m_b.emit(spirv_section::functions, spv::OpAny,
                     {m_b.type_bool(), any, per_component});
            kill_fragment(any);
            result = vec4_splat(0.0f);
            break;
        }
        case op_kind::push_predicate: {
            // Two independent halves, from two different components of the same
            // pair of operands - which is the part that is easy to get wrong,
            // because W decides the predicate and X decides the value:
            //
            //   p0     = (src0.w == 0) && (src1.w <op> 0)
            //   result = (src0.x == 0) && (src1.x <op> 0) ? 0 : src0.x + 1
            //
            // written here as Xenia writes it, ((cond ? -1 : src0.x) + 1), so
            // there is one add rather than two.
            const uint32_t bool_type = m_b.type_bool();
            const uint32_t zero = m_b.constant_float(0.0f);
            const auto tested = [&](uint32_t component) {
                const uint32_t a = extract_component(values[0], component);
                const uint32_t b = extract_component(values[1], component);
                const uint32_t a_is_zero = m_b.allocate_id();
                m_b.emit(spirv_section::functions, spv::OpFOrdEqual,
                         {bool_type, a_is_zero, a, zero});
                const uint32_t b_passes = m_b.allocate_id();
                m_b.emit(spirv_section::functions, op.op,
                         {bool_type, b_passes, b, zero});
                const uint32_t both = m_b.allocate_id();
                m_b.emit(spirv_section::functions, spv::OpLogicalAnd,
                         {bool_type, both, a_is_zero, b_passes});
                return std::make_pair(both, a);
            };
            // The predicate is written whether or not the destination is - it
            // is state of the shader, not of this register.
            const uint32_t predicate = tested(3).first;
            m_b.emit(spirv_section::functions, spv::OpStore,
                     {m_predicate_var, predicate});
            const auto value = tested(0);
            const uint32_t base = m_b.allocate_id();
            m_b.emit(spirv_section::functions, spv::OpSelect,
                     {m_float_type, base, value.first,
                      m_b.constant_float(-1.0f), value.second});
            const uint32_t counter = m_b.allocate_id();
            m_b.emit(spirv_section::functions, spv::OpFAdd,
                     {m_float_type, counter, base, m_b.constant_float(1.0f)});
            m_b.emit(spirv_section::functions, spv::OpCompositeConstruct,
                     {m_vec4_type, result, counter, counter, counter, counter});
            break;
        }
        case op_kind::distance_vector: {
            // (1, src0.y * src1.y, src0.z, src1.w). Every component comes from
            // somewhere different, which is the whole reason this cannot be
            // approximated by any component-wise operation.
            const uint32_t product = m_b.allocate_id();
            m_b.emit(spirv_section::functions, spv::OpFMul,
                     {m_float_type, product, extract_component(values[0], 1),
                      extract_component(values[1], 1)});
            m_b.emit(spirv_section::functions, spv::OpCompositeConstruct,
                     {m_vec4_type, result, m_b.constant_float(1.0f), product,
                      extract_component(values[0], 2),
                      extract_component(values[1], 3)});
            break;
        }
        case op_kind::unsupported:
            return;
    }

    // Saturate to [0, 1] when the clamp modifier is set.
    if (alu.vector_clamp) {
        const uint32_t clamped = m_b.allocate_id();
        m_b.emit(spirv_section::functions, spv::OpExtInst,
                 {m_vec4_type, clamped, m_glsl_ext, glsl::FClamp, result,
                  vec4_splat(0.0f), vec4_splat(1.0f)});
        result = clamped;
    }

    // a0 is written under the instruction's predicate, like the destination:
    // the whole instruction is conditional on the console, and a0 outliving a
    // branch it was not supposed to take sends every later indexed constant
    // read somewhere else.
    const auto store_address = [&] {
        if (address != 0)
            m_b.emit(spirv_section::functions, spv::OpStore,
                     {m_address_var, address});
    };

    if (alu.is_export) {
        // Route the result to the shader's output for this export index.
        const uint32_t var = export_var_for(alu.vector_dest);
        const bool is_position = alu.vector_dest == kExportPosition;
        // Both kinds of position export need Y reversed for Vulkan; they differ
        // only in what else has to happen. A window-space export has the whole
        // console viewport transform to undo, and the reversal falls out of the
        // inverse scale. A clip-space export - the hardware viewport left
        // enabled, so the shader emitted clip space itself - needs the reversal
        // ALONE, and w left as it is for the perspective divide still to come.
        const uint32_t exported =
            !is_position                     ? result
            : m_viewport.from_window_space   ? apply_viewport(result)
                                             : flip_clip_y(result);
        predicated(m_predicate_gate, [&] {
            store_address();
            // An export honours its write mask like any other destination. It
            // is not a formality: a shader that composites an effect writes its
            // colour and its alpha in separate export instructions, and storing
            // the whole vector each time makes the last one erase the others -
            // which turns the effect into whatever that last instruction
            // happened to compute, usually nothing.
            if (var != 0) store_masked(var, exported, alu.vector_write_mask);
        });
        return;
    }
    predicated(m_predicate_gate, [&] {
        store_address();
        if (dest_in_range)
            store_masked(m_temp_vars[alu.vector_dest], result,
                         alu.vector_write_mask);
    });
}

void shader_translator::translate_scalar(const alu_instruction& alu) {
    const scalar_op op = scalar_op_for(alu.scalar_opcode);
    if (op.kind == scalar_kind::unsupported) return;

    // The scalar operand is src3; its W component is the operand (two-component
    // ops also use X). Only temp-register operands are handled here.
    const alu_source& src = alu.sources[2];
    // The predicate-stack family. Every one of them writes p0, and every one
    // ALSO produces an ordinary scalar result that the destination register and
    // ps take like any other scalar op's. That result is not decoration: the
    // push/pop pair keeps its nesting depth in a REGISTER - one predicate is
    // all the hardware has - so a pop whose destination was never written
    // unwinds a counter nothing ever incremented, and every instruction
    // predicated on the outer condition runs when it should not.
    const bool writes_predicate = op.kind == scalar_kind::set_predicate ||
                                  op.kind == scalar_kind::predicate_invert ||
                                  op.kind == scalar_kind::predicate_pop ||
                                  op.kind == scalar_kind::predicate_clear ||
                                  op.kind == scalar_kind::predicate_restore;
    // setp_clr reads no operand at all - its entry in Xenia's opcode table has
    // an operand count of zero - so its source field carries whatever the
    // encoder happened to leave there. Range-checking it would refuse a
    // perfectly good instruction, and loading it would read a register the
    // instruction never named.
    // retain_prev reads no operand either: its result is ps, which no source
    // field names. Its entry in Xenia's opcode table also has an operand count
    // of zero.
    const bool reads_source = op.kind != scalar_kind::predicate_clear &&
                              op.kind != scalar_kind::retain_previous;
    // The *sc forms do not read src3 as one register. Xenia's
    // ParseAluInstruction splits it into a CONSTANT operand, taking src3's
    // register field and its `a`/W swizzle, and a TEMPORARY register operand
    // whose index is assembled from src3's select bit, the middle bits of its
    // swizzle, and the opcode's low bit - which is the whole reason mulsc0 and
    // mulsc1 are one instruction. Reading src3 straight would take the constant
    // bank's value for both halves and silently square it.
    const bool pair = op.kind == scalar_kind::constant_pair;
    // retain_prev with no destination is how a shader spells "no scalar
    // operation", which is most instructions in most shaders. Nothing to
    // emit - and nothing TO emit, since ps is only declared where something
    // reads it.
    if (op.kind == scalar_kind::retain_previous &&
        (alu.scalar_write_mask == 0 || m_previous_scalar_var == 0))
        return;
    alu_source const_src = src;
    alu_source temp_src = src;
    if (pair) {
        const_src.is_temp = false;
        temp_src.is_temp = true;
        temp_src.reg = static_cast<uint8_t>(
            (static_cast<uint32_t>(alu.scalar_opcode) & 0x1u) |
            ((src.is_temp ? 1u : 0u) << 1) |
            (static_cast<uint32_t>(src.swizzle) & 0x3Cu));
        if (!source_in_range(temp_src)) return;
    } else if (reads_source && !source_in_range(src)) {
        return;
    }
    // Where the result goes. An export instruction's two halves write the SAME
    // export, each the components its own mask names. This is not a corner
    // case: a title's glow composite builds its whole colour out of the scalar
    // halves of three export instructions whose vector halves write nothing at
    // all, so skipping the scalar half of an export leaves that composite black
    // - a missing effect with nothing to show it was ever drawn.
    // AN EXPORT'S SCALAR HALF WRITES vector_dest, NOT scalar_dest.
    //
    // Xenia states it as a property of the encoding rather than a special case
    // (ucode.h, on the AluInstruction bitfield): "If exporting, both vector and
    // scalar operations use the vector destination (which can't be relative in
    // this case)", and again on the write masks: "export is done to vector_dest
    // by both the vector and the scalar operation". On an export `scalar_dest`
    // is not an export index at all - the field is reused, which is why the
    // constant-0 rule reads `scalar_dest_rel` out of it as a flag.
    //
    // Taking it as an export index sends the scalar half to whichever output
    // that number happens to name. It is silent both ways: the component the
    // instruction meant to write is never written, and some OTHER export gets a
    // write it never asked for.
    //
    // MEASURED ON JETPAC, which is what this cost. Its terrain vertex shader
    // ends with
    //
    //     export 1: vector .__zw  scalar ._y__  scalar_dest 0
    //
    // so interpolator 1's Y came from the scalar half, went to interpolator 0,
    // and interpolator 1 arrived at the pixel shader with Y never written. That
    // pixel shader samples a second texture at a coordinate built from
    // interpolator 1 - `r2.y = r0.x * r1.y` - so V was constant across every
    // primitive and one row of texels smeared down the whole screen. Every
    // counter in the runtime reported a clean translation: shaders parsed,
    // exports counted, 0 UNSUPPORTED, 0 CF DROPPED, valid SPIR-V, all 23 draws
    // rendered. WHITTY_DUMP_EXPORTS=1 is what shows it, and it exists because
    // of this.
    const uint32_t dest_var =
        alu.is_export
            ? export_var_for(alu.vector_dest)
            : (alu.scalar_dest < m_temp_vars.size() ? m_temp_vars[alu.scalar_dest]
                                                    : 0);
    // maxas is the same shape: its point is a0, and a shader uses it as `mova`
    // with nothing worth keeping in the destination.
    const bool writes_address = op.kind == scalar_kind::max_address;
    // A predicate op whose destination this shader does not route still has to
    // set p0 - the predicate is state of the shader, not of that register - so
    // an unavailable destination drops the store rather than the instruction.
    if (dest_var == 0 && !writes_predicate && !writes_address) return;

    // For the pair forms the two halves come from two different registers, so
    // each is loaded from its own operand.
    const uint32_t vec =
        reads_source ? load_register_vec4(pair ? const_src : src) : 0;
    const uint32_t pair_vec = pair ? load_register_vec4(temp_src) : 0;

    auto maybe_negate = [&](uint32_t scalar) {
        if (!src.negate) return scalar;
        const uint32_t n = m_b.allocate_id();
        m_b.emit(spirv_section::functions, spv::OpFNegate,
                 {m_float_type, n, scalar});
        return n;
    };

    const bool two = op.kind == scalar_kind::binary_core ||
                     op.kind == scalar_kind::binary_ext ||
                     op.kind == scalar_kind::binary_cmp ||
                     op.kind == scalar_kind::max_address;
    const uint32_t w =
        reads_source
            ? maybe_negate(extract_component(
                  vec, alu_instruction::swizzled_component(src.swizzle, 3)))
            : 0;

    // Stores the scalar result into ps. Every scalar operation updates it, so
    // this runs on every path that produces one - including setp, which the
    // hardware also leaves a value behind for. Skipped entirely for a shader
    // with no _prev form, where the value could never be read again.
    const auto store_previous = [&](uint32_t value) {
        if (!m_reads_previous_scalar) return;
        m_b.emit(spirv_section::functions, spv::OpStore,
                 {m_previous_scalar_var, value});
    };

    // Small helpers the predicate family is built out of.
    const uint32_t zero_f = m_b.constant_float(0.0f);
    const uint32_t one_f = m_b.constant_float(1.0f);
    const auto compare_to = [&](uint32_t opcode, uint32_t a, uint32_t b) {
        const uint32_t id = m_b.allocate_id();
        m_b.emit(spirv_section::functions, opcode, {m_b.type_bool(), id, a, b});
        return id;
    };
    const auto write_predicate = [&](uint32_t cond) {
        m_b.emit(spirv_section::functions, spv::OpStore,
                 {m_predicate_var, cond});
        return cond;
    };

    uint32_t x = 0;
    if (two)
        x = maybe_negate(
            extract_component(vec, alu_instruction::swizzled_component(src.swizzle, 0)));
    if (pair)
        x = maybe_negate(extract_component(
            pair_vec, alu_instruction::swizzled_component(src.swizzle, 0)));
    if (op.kind == scalar_kind::binary_prev ||
        op.kind == scalar_kind::multiply_previous_lit) {
        x = m_b.allocate_id();
        m_b.emit(spirv_section::functions, spv::OpLoad,
                 {m_float_type, x, m_previous_scalar_var});
    }

    // The new value of a0, for maxas/maxasf, stored under the instruction's own
    // predicate below.
    uint32_t address = 0;
    uint32_t result = m_b.allocate_id();
    switch (op.kind) {
        case scalar_kind::max_address:
            // The instruction's whole purpose: a0 takes the W operand, rounded
            // the way the opcode says. The value it also leaves in the
            // destination is an ordinary max of the two components, spelled
            // exactly as `maxs` above spells it.
            if (m_address_var != 0)
                address = address_register_value(w, op.op != 0);
            m_b.emit(spirv_section::functions, spv::OpExtInst,
                     {m_float_type, result, m_glsl_ext, glsl::FMax, w, x});
            break;
        case scalar_kind::reciprocal:
            m_b.emit(spirv_section::functions, spv::OpFDiv,
                     {m_float_type, result, m_b.constant_float(1.0f), w});
            break;
        case scalar_kind::unary_ext:
            m_b.emit(spirv_section::functions, spv::OpExtInst,
                     {m_float_type, result, m_glsl_ext, op.op, w});
            break;
        case scalar_kind::binary_core:
        case scalar_kind::binary_prev:
        case scalar_kind::constant_pair:
            m_b.emit(spirv_section::functions, op.op,
                     {m_float_type, result, w, x});
            break;
        case scalar_kind::binary_ext:
            m_b.emit(spirv_section::functions, spv::OpExtInst,
                     {m_float_type, result, m_glsl_ext, op.op, w, x});
            break;
        case scalar_kind::binary_cmp: {
            const uint32_t cond = compare_to(op.op, w, x);
            m_b.emit(spirv_section::functions, spv::OpSelect,
                     {m_float_type, result, cond, one_f, zero_f});
            break;
        }
        case scalar_kind::set_predicate: {
            // p0 = w <op> 0; result = p0 ? 0 : 1 - the inverse of what reads
            // naturally, and what the hardware does.
            const uint32_t cond = write_predicate(compare_to(op.op, w, zero_f));
            m_b.emit(spirv_section::functions, spv::OpSelect,
                     {m_float_type, result, cond, zero_f, one_f});
            break;
        }
        case scalar_kind::predicate_invert: {
            // p0 = w == 1; result = p0 ? 0 : (w == 0 ? 1 : w). The inner select
            // is what makes this an INVERSION rather than a compare: it swaps
            // the two ends of the [0, 1] pair a push left behind and passes
            // any deeper count through untouched.
            const uint32_t cond = write_predicate(
                compare_to(spv::OpFOrdEqual, w, one_f));
            const uint32_t inner = m_b.allocate_id();
            m_b.emit(spirv_section::functions, spv::OpSelect,
                     {m_float_type, inner,
                      compare_to(spv::OpFOrdEqual, w, zero_f), one_f, w});
            m_b.emit(spirv_section::functions, spv::OpSelect,
                     {m_float_type, result, cond, zero_f, inner});
            break;
        }
        case scalar_kind::predicate_pop: {
            // t = w - 1; p0 = t <= 0; result = p0 ? 0 : t. One level of
            // nesting comes off the counter the matching push put on it, and
            // the predicate comes back on only at the outermost level.
            const uint32_t t = m_b.allocate_id();
            m_b.emit(spirv_section::functions, spv::OpFSub,
                     {m_float_type, t, w, one_f});
            const uint32_t cond = write_predicate(
                compare_to(spv::OpFOrdLessThanEqual, t, zero_f));
            m_b.emit(spirv_section::functions, spv::OpSelect,
                     {m_float_type, result, cond, zero_f, t});
            break;
        }
        case scalar_kind::predicate_clear:
            // p0 = false, unconditionally, and the result is FLT_MAX - a
            // counter no pop can ever bring back to zero, which is how the
            // hardware spells "predication is off and stays off".
            write_predicate(m_b.constant_bool(false));
            result = m_b.constant_float(std::numeric_limits<float>::max());
            break;
        case scalar_kind::predicate_restore:
            // p0 = w == 0; result = p0 ? 0 : w. The counter is put back the
            // way it was, so a saved predicate can be reloaded out of a
            // register without disturbing the level it belongs to.
            m_b.emit(spirv_section::functions, spv::OpSelect,
                     {m_float_type, result,
                      write_predicate(compare_to(spv::OpFOrdEqual, w, zero_f)),
                      zero_f, w});
            break;
        case scalar_kind::kill_scalar:
        case scalar_kind::kill_scalar_one: {
            // The scalar kill: one component against 0.0, or against 1.0 for
            // kills_one. The destination takes zero, as the hardware writes.
            const uint32_t against = op.kind == scalar_kind::kill_scalar_one
                                         ? one_f
                                         : zero_f;
            kill_fragment(compare_to(op.op, w, against));
            result = zero_f;
            break;
        }
        case scalar_kind::multiply_previous_lit: {
            // The scalar half of a LIT: src0.a * ps, forced to -FLT_MAX when
            // the light is behind the surface or either input has gone
            // non-finite. -FLT_MAX rather than 0 because what follows is an
            // exp2, which turns it into zero - so the specular term vanishes
            // rather than being clamped, which is what "no highlight here"
            // has to mean.
            const uint32_t bool_type = m_b.type_bool();
            const uint32_t b = maybe_negate(extract_component(
                vec, alu_instruction::swizzled_component(src.swizzle, 0)));
            const uint32_t lowest =
                m_b.constant_float(-std::numeric_limits<float>::max());
            const auto not_finite = [&](uint32_t value) {
                const uint32_t is_nan = m_b.allocate_id();
                m_b.emit(spirv_section::functions, spv::OpIsNan,
                         {bool_type, is_nan, value});
                const uint32_t is_inf = m_b.allocate_id();
                m_b.emit(spirv_section::functions, spv::OpIsInf,
                         {bool_type, is_inf, value});
                const uint32_t either = m_b.allocate_id();
                m_b.emit(spirv_section::functions, spv::OpLogicalOr,
                         {bool_type, either, is_nan, is_inf});
                return either;
            };
            uint32_t off = compare_to(spv::OpFOrdEqual, x, lowest);
            const auto also = [&](uint32_t next) {
                const uint32_t both = m_b.allocate_id();
                m_b.emit(spirv_section::functions, spv::OpLogicalOr,
                         {bool_type, both, off, next});
                off = both;
            };
            also(not_finite(x));
            also(not_finite(b));
            also(compare_to(spv::OpFOrdLessThanEqual, b, zero_f));
            const uint32_t product = m_b.allocate_id();
            m_b.emit(spirv_section::functions, spv::OpFMul,
                     {m_float_type, product, w, x});
            m_b.emit(spirv_section::functions, spv::OpSelect,
                     {m_float_type, result, off, lowest, product});
            break;
        }
        case scalar_kind::retain_previous:
            // ps unchanged, and copied to the destination. Almost every
            // instruction carrying this has no scalar destination at all, in
            // which case the store above has already returned - so this is
            // reached only by the shader that really does mean the copy.
            result = m_b.allocate_id();
            m_b.emit(spirv_section::functions, spv::OpLoad,
                     {m_float_type, result, m_previous_scalar_var});
            break;
        case scalar_kind::unsupported:
            return;
    }

    predicated(m_predicate_gate, [&] {
        // a0, like p0 and ps, is state of the shader rather than of the
        // destination register, so it is written whether or not the
        // destination is - but under the instruction's own predicate, because
        // an a0 that outlives a branch the shader did not take sends every
        // later indexed constant read somewhere else.
        if (address != 0)
            m_b.emit(spirv_section::functions, spv::OpStore,
                     {m_address_var, address});
        // ps is updated whether or not the destination is. A scalar op with an
        // empty write mask is not a no-op: chaining through ps is exactly what
        // it is there for, and dropping the update breaks the next _prev form.
        store_previous(result);
        if (dest_var != 0)
            store_masked(dest_var, broadcast(result), alu.scalar_write_mask);
    });
}

void shader_translator::begin_function(uint32_t temp_register_count,
                                       shader_type type) {
    const uint32_t main_id = m_b.allocate_id();
    const uint32_t label_id = m_b.allocate_id();

    // One output variable: colour 0 for a pixel shader, position for a vertex
    // shader. Allocated up front so the entry-point interface can name it.
    m_shader_type = type;
    m_constant_base = type == shader_type::pixel ? kPixelConstantBase : 0;
    m_export_vars.clear();
    m_texture_vars.clear();
    m_texture_filters.clear();
    m_sampled_image_type = 0;
    m_sampled_image_ptr_type = 0;
    const uint32_t output_var = m_b.allocate_id();
    m_export_vars[type == shader_type::pixel ? kExportColor0 : kExportPosition] =
        output_var;
    // Vertex input variables, allocated here so the entry point below can name
    // them. A SPIR-V entry point must list every input and output it uses.
    m_vertex_input_vars.clear();
    m_vertex_input_vars.reserve(m_vertex_inputs.size());
    for (std::size_t i = 0; i < m_vertex_inputs.size(); ++i)
        m_vertex_input_vars.push_back(m_b.allocate_id());

    // Interpolators. A vertex shader gets an output per index it exports, and
    // the export routing below sends the export straight to it; a pixel shader
    // gets an input per index its vertex shader wrote, which seeds the matching
    // register. Both sides use the interpolator index as the location, so the
    // two halves line up without either knowing the other's layout.
    m_interpolator_vars.clear();
    m_interpolator_vars.reserve(m_interpolators.size());
    for (std::size_t i = 0; i < m_interpolators.size(); ++i) {
        const uint32_t var = m_b.allocate_id();
        m_interpolator_vars.push_back(var);
        if (type == shader_type::vertex) m_export_vars[m_interpolators[i]] = var;
    }

    // The point size a vertex shader exports leaves as an ordinary output for
    // the geometry stage to read; the rasteriser never sees it.
    m_point_size_var = 0;
    if (type == shader_type::vertex && m_writes_point_size) {
        m_point_size_var = m_b.allocate_id();
        m_export_vars[kExportPointSize] = m_point_size_var;
    }
    // A pixel shader whose PsParamGen register is generated needs the fragment
    // coordinate, and - for a point - the sprite coordinate the geometry stage
    // wrote.
    m_frag_coord_var = 0;
    m_point_coord_var = 0;
    if (type == shader_type::pixel && m_param_gen_interpolator >= 0) {
        m_frag_coord_var = m_b.allocate_id();
        if (m_param_gen_point) m_point_coord_var = m_b.allocate_id();
    }
    // Every vertex shader gets the index, because the console gives it one
    // whether or not it is used - see the store into r0.x below.
    m_vertex_index_var = 0;
    if (type == shader_type::vertex) m_vertex_index_var = m_b.allocate_id();

    m_b.emit(spirv_section::capabilities, spv::OpCapability,
             {spv::CapabilityShader});
    m_glsl_ext = m_b.allocate_id();
    std::vector<uint32_t> import = {m_glsl_ext};
    for (uint32_t w : spirv_builder::string_words("GLSL.std.450"))
        import.push_back(w);
    m_b.emit(spirv_section::ext_imports, spv::OpExtInstImport, import);
    m_b.emit(spirv_section::memory_model, spv::OpMemoryModel,
             {spv::AddressingModelLogical, spv::MemoryModelGLSL450});

    const uint32_t model = type == shader_type::pixel
                               ? spv::ExecutionModelFragment
                               : spv::ExecutionModelVertex;
    // The entry point's interface lists the shader's input/output variables.
    std::vector<uint32_t> entry = {model, main_id};
    for (uint32_t w : spirv_builder::string_words("main")) entry.push_back(w);
    entry.push_back(output_var);
    for (uint32_t var : m_vertex_input_vars) entry.push_back(var);
    for (uint32_t var : m_interpolator_vars) entry.push_back(var);
    if (m_point_size_var != 0) entry.push_back(m_point_size_var);
    if (m_frag_coord_var != 0) entry.push_back(m_frag_coord_var);
    if (m_point_coord_var != 0) entry.push_back(m_point_coord_var);
    if (m_vertex_index_var != 0) entry.push_back(m_vertex_index_var);
    m_b.emit(spirv_section::entry_points, spv::OpEntryPoint, entry);
    if (type == shader_type::pixel)
        m_b.emit(spirv_section::execution_modes, spv::OpExecutionMode,
                 {main_id, spv::ExecutionModeOriginUpperLeft});

    // Decorate the output: a pixel colour is a Location, a vertex position is
    // the Position built-in.
    if (type == shader_type::pixel)
        m_b.emit(spirv_section::decorations, spv::OpDecorate,
                 {output_var, spv::DecorationLocation, 0});
    else
        m_b.emit(spirv_section::decorations, spv::OpDecorate,
                 {output_var, spv::DecorationBuiltIn, spv::BuiltInPosition});

    const uint32_t void_type = m_b.type_void();
    const uint32_t fn_type = m_b.type_function(void_type);
    m_float_type = m_b.type_float();
    m_vec4_type = m_b.type_vector(m_float_type, 4);
    m_vec4_ptr_type = m_b.type_pointer(spv::StorageClassFunction, m_vec4_type);
    const uint32_t output_ptr_type =
        m_b.type_pointer(spv::StorageClassOutput, m_vec4_type);
    // The output variable is a module-scope global.
    m_b.emit(spirv_section::types, spv::OpVariable,
             {output_ptr_type, output_var, spv::StorageClassOutput});

    // One input variable per vfetch, at the location its position in the
    // shader gives it. Every attribute is read as a vec4 whatever its format
    // carries: Vulkan fills the components the format does not supply with
    // (0, 0, 0, 1), which is what the console's fetch does too.
    if (!m_vertex_input_vars.empty()) {
        const uint32_t input_ptr_type =
            m_b.type_pointer(spv::StorageClassInput, m_vec4_type);
        for (std::size_t i = 0; i < m_vertex_input_vars.size(); ++i) {
            m_b.emit(spirv_section::types, spv::OpVariable,
                     {input_ptr_type, m_vertex_input_vars[i],
                      spv::StorageClassInput});
            m_b.emit(spirv_section::decorations, spv::OpDecorate,
                     {m_vertex_input_vars[i], spv::DecorationLocation,
                      static_cast<uint32_t>(i)});
        }
    }

    // Interpolator variables, at the interpolator index as their location.
    // Vertex-side they are outputs the exports write; pixel-side they are
    // inputs the registers are seeded from.
    if (!m_interpolator_vars.empty()) {
        const uint32_t storage = type == shader_type::vertex
                                     ? spv::StorageClassOutput
                                     : spv::StorageClassInput;
        const uint32_t ptr_type = m_b.type_pointer(storage, m_vec4_type);
        for (std::size_t i = 0; i < m_interpolator_vars.size(); ++i) {
            m_b.emit(spirv_section::types, spv::OpVariable,
                     {ptr_type, m_interpolator_vars[i], storage});
            m_b.emit(spirv_section::decorations, spv::OpDecorate,
                     {m_interpolator_vars[i], spv::DecorationLocation,
                      m_interpolators[i]});
        }
    }

    // The point size output, and the two inputs PsParamGen is built from.
    if (m_point_size_var != 0) {
        m_b.emit(spirv_section::types, spv::OpVariable,
                 {output_ptr_type, m_point_size_var, spv::StorageClassOutput});
        m_b.emit(spirv_section::decorations, spv::OpDecorate,
                 {m_point_size_var, spv::DecorationLocation,
                  kPointSizeLocation});
    }
    if (m_frag_coord_var != 0) {
        const uint32_t input_ptr_type =
            m_b.type_pointer(spv::StorageClassInput, m_vec4_type);
        m_b.emit(spirv_section::types, spv::OpVariable,
                 {input_ptr_type, m_frag_coord_var, spv::StorageClassInput});
        m_b.emit(spirv_section::decorations, spv::OpDecorate,
                 {m_frag_coord_var, spv::DecorationBuiltIn,
                  spv::BuiltInFragCoord});
    }
    if (m_point_coord_var != 0) {
        const uint32_t vec2_type = m_b.type_vector(m_float_type, 2);
        const uint32_t input_ptr_type =
            m_b.type_pointer(spv::StorageClassInput, vec2_type);
        m_b.emit(spirv_section::types, spv::OpVariable,
                 {input_ptr_type, m_point_coord_var, spv::StorageClassInput});
        m_b.emit(spirv_section::decorations, spv::OpDecorate,
                 {m_point_coord_var, spv::DecorationLocation,
                  kPointCoordLocation});
    }
    // The vertex index, as a signed 32-bit scalar: that is the only type
    // Vulkan's VertexIndex built-in may have.
    if (m_vertex_index_var != 0) {
        const uint32_t int_type = m_b.type_int(true);
        const uint32_t input_ptr_type =
            m_b.type_pointer(spv::StorageClassInput, int_type);
        m_b.emit(spirv_section::types, spv::OpVariable,
                 {input_ptr_type, m_vertex_index_var, spv::StorageClassInput});
        m_b.emit(spirv_section::decorations, spv::OpDecorate,
                 {m_vertex_index_var, spv::DecorationBuiltIn,
                  spv::BuiltInVertexIndex});
    }

    // The float-constant buffer, read from by constant operands.
    setup_constant_buffer();

    m_b.emit(spirv_section::functions, spv::OpFunction,
             {void_type, main_id, spv::FunctionControlNone, fn_type});
    m_b.emit(spirv_section::functions, spv::OpLabel, {label_id});

    // Function-storage variables must be first in the block; declare all temps
    // and the predicate register before any other instruction.
    m_temp_vars.clear();
    m_temp_vars.reserve(temp_register_count);
    // Temporaries are zero-initialised through OpVariable's initializer
    // operand rather than by storing to each one, which keeps the function body
    // to the shader's own instructions.
    //
    // They must be initialised at all because a shader reads registers it never
    // wrote: a pixel shader's inputs arrive interpolated from the vertex shader
    // in exactly those registers. Until those interpolators are wired, reading
    // an uninitialised SPIR-V variable is undefined, and it renders as
    // per-pixel noise that looks like a rasterisation fault rather than a
    // missing stage. Zero is not what the console supplies, but it is defined,
    // and a flat wrong colour can be reasoned about where noise cannot.
    const uint32_t zero_vec4 = vec4_splat(0.0f);
    for (uint32_t i = 0; i < temp_register_count; ++i) {
        const uint32_t var = m_b.allocate_id();
        m_b.emit(spirv_section::functions, spv::OpVariable,
                 {m_vec4_ptr_type, var, spv::StorageClassFunction, zero_vec4});
        m_temp_vars.push_back(var);
    }
    const uint32_t bool_ptr =
        m_b.type_pointer(spv::StorageClassFunction, m_b.type_bool());
    m_predicate_var = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpVariable,
             {bool_ptr, m_predicate_var, spv::StorageClassFunction});
    // ps starts at zero, which is what the hardware's scalar result holds
    // before the first scalar operation of a shader runs. Declared only when
    // something reads it, so a shader with no _prev form is byte-for-byte what
    // it was before ps existed.
    m_previous_scalar_var = 0;
    if (m_reads_previous_scalar) {
        const uint32_t float_ptr =
            m_b.type_pointer(spv::StorageClassFunction, m_float_type);
        m_previous_scalar_var = m_b.allocate_id();
        m_b.emit(spirv_section::functions, spv::OpVariable,
                 {float_ptr, m_previous_scalar_var, spv::StorageClassFunction,
                  m_b.constant_float(0.0f)});
    }
    // The address register a0, initialised to zero - which is where the
    // hardware's is before a shader's first maxas. Declared only in a shader
    // that writes it: nothing else can change a0, so in a shader without one
    // `c[a0 + n]` is exactly `c[n]`, the literal index is the right answer,
    // and the module is byte-for-byte what it was before a0 existed. (That is
    // not a shortcut for its own sake - it is what makes a change to indexed
    // constant addressing unable to move a title that has no indexed constant.)
    m_address_var = 0;
    if (m_writes_address_register) {
        const uint32_t int_ptr =
            m_b.type_pointer(spv::StorageClassFunction, m_b.type_int(true));
        m_address_var = m_b.allocate_id();
        m_b.emit(spirv_section::functions, spv::OpVariable,
                 {int_ptr, m_address_var, spv::StorageClassFunction,
                  m_b.constant_int(0)});
    }
    // The loop register aL, under exactly the same rule: a shader with no loop
    // cannot change it, so `c[aL + n]` there is `c[n]` and the module is what
    // it was before loops existed.
    m_loop_address_var = 0;
    if (m_uses_loop_register) {
        const uint32_t int_ptr =
            m_b.type_pointer(spv::StorageClassFunction, m_b.type_int(true));
        m_loop_address_var = m_b.allocate_id();
        m_b.emit(spirv_section::functions, spv::OpVariable,
                 {int_ptr, m_loop_address_var, spv::StorageClassFunction,
                  m_b.constant_int(0)});
        // One trip counter per loop, here rather than at the loop: SPIR-V
        // requires every function-scope variable to be in the entry block.
        const uint32_t uint_ptr =
            m_b.type_pointer(spv::StorageClassFunction, m_b.type_int(false));
        for (uint32_t& counter : m_loop_counter_vars) {
            counter = m_b.allocate_id();
            m_b.emit(spirv_section::functions, spv::OpVariable,
                     {uint_ptr, counter, spv::StorageClassFunction,
                      m_b.constant_uint(0)});
        }
    }
    // Initialise the predicate to false (after all variable declarations).
    m_b.emit(spirv_section::functions, spv::OpStore,
             {m_predicate_var, m_b.constant_bool(false)});

    // The console starts a vertex shader with the vertex index, as a float, in
    // r0.x - see Xenia's StartVertexOrTessEvalShaderInMain, which writes
    // float(index + base) there before the shader's first instruction. It is
    // usually only the address a vfetch reads from, which Vulkan supplies for
    // us through the vertex input layout, so it went unnoticed. But a shader
    // may also COMPUTE with it: a sprite quad is expanded from the corner
    // number, index - 4 * trunc(index / 4), and with r0.x left at zero every
    // vertex of such a draw resolves to the same corner. The quad collapses to
    // a point, and the draw covers no pixels at all - correct textures,
    // correct constants, correct blend state, and nothing on the screen.
    //
    // Vulkan's index is already the console's: the index offset is folded into
    // the indices (or into firstVertex) before the draw is submitted, and an
    // indexed draw's gl_VertexIndex is the index buffer's value, which is what
    // the console's shader sees too.
    if (m_vertex_index_var != 0 && !m_temp_vars.empty()) {
        const uint32_t int_type = m_b.type_int(true);
        const uint32_t index = m_b.allocate_id();
        m_b.emit(spirv_section::functions, spv::OpLoad,
                 {int_type, index, m_vertex_index_var});
        const uint32_t as_float = m_b.allocate_id();
        m_b.emit(spirv_section::functions, spv::OpConvertSToF,
                 {m_float_type, as_float, index});
        // Inserted rather than splatted and masked: one component of a vec4
        // that is otherwise the initialiser, in one instruction.
        const uint32_t current = m_b.allocate_id();
        m_b.emit(spirv_section::functions, spv::OpLoad,
                 {m_vec4_type, current, m_temp_vars[0]});
        const uint32_t merged = m_b.allocate_id();
        m_b.emit(spirv_section::functions, spv::OpCompositeInsert,
                 {m_vec4_type, merged, as_float, current, 0});
        m_b.emit(spirv_section::functions, spv::OpStore,
                 {m_temp_vars[0], merged});
    }

    // The exports start defined, because an export instruction writes only the
    // components its mask names and a shader legitimately builds one export out
    // of several instructions - a title's glow composite writes its colour and
    // its alpha in separate exports. Merging into an unwritten output variable
    // is undefined; merging into this is not.
    const uint32_t opaque_black = m_b.constant_composite(
        m_vec4_type, {m_b.constant_float(0.0f), m_b.constant_float(0.0f),
                      m_b.constant_float(0.0f), m_b.constant_float(1.0f)});
    for (const auto& entry : m_export_vars)
        m_b.emit(spirv_section::functions, spv::OpStore,
                 {entry.second, opaque_black});

    // A pixel shader does not fetch its inputs - the console hands them to it
    // already interpolated, in the registers. Interpolator N arrives in
    // register N, so each input is loaded once here and the shader's own
    // instructions then read it as an ordinary register.
    if (type == shader_type::pixel) {
        for (std::size_t i = 0; i < m_interpolator_vars.size(); ++i) {
            const uint32_t index = m_interpolators[i];
            if (index >= m_temp_vars.size()) continue;
            const uint32_t value = m_b.allocate_id();
            m_b.emit(spirv_section::functions, spv::OpLoad,
                     {m_vec4_type, value, m_interpolator_vars[i]});
            m_b.emit(spirv_section::functions, spv::OpStore,
                     {m_temp_vars[index], value});
        }
        store_param_gen();
    }
}

void shader_translator::store_param_gen() {
    if (m_frag_coord_var == 0) return;
    const auto index = static_cast<uint32_t>(m_param_gen_interpolator);
    if (index >= m_temp_vars.size()) return;

    const uint32_t frag = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpLoad,
             {m_vec4_type, frag, m_frag_coord_var});
    const auto floored = [&](uint32_t component) {
        const uint32_t raw = extract_component(frag, component);
        const uint32_t id = m_b.allocate_id();
        m_b.emit(spirv_section::functions, spv::OpExtInst,
                 {m_float_type, id, m_glsl_ext, glsl::Floor, raw});
        return id;
    };
    // X and Y are the pixel's own position, truncated to the integer the
    // console reports (0, 1, 2 - not the half-pixel centre). Y's SIGN says the
    // primitive is a point, which is how a shader written for both cases tells
    // them apart, so it is negated rather than left positive.
    const uint32_t x = floored(0);
    uint32_t y = floored(1);
    if (m_param_gen_point) {
        const uint32_t negated = m_b.allocate_id();
        m_b.emit(spirv_section::functions, spv::OpFNegate,
                 {m_float_type, negated, y});
        y = negated;
    }
    // Z and W are the sprite's own texture coordinate, and only a point has
    // one. Clamped, because a pixel whose centre the sprite does not cover gets
    // an extrapolated value outside [0, 1] - which wraps to the far side of the
    // texture and puts a bright edge on every sprite.
    uint32_t z = m_b.constant_float(0.0f);
    uint32_t w = z;
    if (m_point_coord_var != 0) {
        const uint32_t vec2_type = m_b.type_vector(m_float_type, 2);
        const uint32_t raw = m_b.allocate_id();
        m_b.emit(spirv_section::functions, spv::OpLoad,
                 {vec2_type, raw, m_point_coord_var});
        const uint32_t zero2 = m_b.constant_composite(
            vec2_type, {m_b.constant_float(0.0f), m_b.constant_float(0.0f)});
        const uint32_t one2 = m_b.constant_composite(
            vec2_type, {m_b.constant_float(1.0f), m_b.constant_float(1.0f)});
        const uint32_t clamped = m_b.allocate_id();
        m_b.emit(spirv_section::functions, spv::OpExtInst,
                 {vec2_type, clamped, m_glsl_ext, glsl::FClamp, raw, zero2,
                  one2});
        z = m_b.allocate_id();
        m_b.emit(spirv_section::functions, spv::OpCompositeExtract,
                 {m_float_type, z, clamped, 0});
        w = m_b.allocate_id();
        m_b.emit(spirv_section::functions, spv::OpCompositeExtract,
                 {m_float_type, w, clamped, 1});
    }
    const uint32_t value = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpCompositeConstruct,
             {m_vec4_type, value, x, y, z, w});
    m_b.emit(spirv_section::functions, spv::OpStore,
             {m_temp_vars[index], value});
}

// WHITTY_DEBUG_TINT diagnostic: overwrites the exported colour's RGB with a
// fixed, saturated magenta, leaving alpha untouched.
//
// Built to answer one question a black gap in a picture cannot answer on its
// own: did ANY draw's rasteriser output ever reach this pixel? A gap that
// stays exactly as black under this diagnostic as without it had no draw
// cover it at all - the geometry never got there (culling, bin selection, a
// degenerate transform). A gap that turns magenta had a draw reach it and
// still ended up black some other way (the shader's own colour maths, a
// missing texture bind) - a different bug, in a different place, and this is
// how the two are told apart without a real GPU capture tool.
//
// Deliberately ONE fixed colour for every shader, not one baked value per
// draw - see options::debug_tint. Alpha is read back from the export and
// carried through unchanged, exactly as emit_alpha_test does, so a draw that
// alpha-tests or blends still does so exactly as it would without this: only
// what a surviving fragment's colour LOOKS like changes, never whether it
// survives or how it blends.
void shader_translator::emit_debug_tint() {
    if (!m_debug_tint || m_shader_type != shader_type::pixel) return;
    const uint32_t var = export_var_for(kExportColor0);
    if (var == 0) return;
    const uint32_t colour = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpLoad,
             {m_vec4_type, colour, var});
    const uint32_t alpha = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpCompositeExtract,
             {m_float_type, alpha, colour, 3});
    const uint32_t tinted = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpCompositeConstruct,
             {m_vec4_type, tinted, m_b.constant_float(1.0f),
              m_b.constant_float(0.0f), m_b.constant_float(1.0f), alpha});
    m_b.emit(spirv_section::functions, spv::OpStore, {var, tinted});
}

// The alpha test, as a discard at the end of main.
//
// The console runs this AFTER the pixel shader and BEFORE the depth test, so
// the end of main is exactly the right place: everything the shader computed
// has been stored, and a fragment killed here writes no colour and no depth,
// which is what failing the test means.
//
// It reads the alpha back out of the colour output rather than remembering the
// last value some export instruction computed, and that is deliberate: an
// export honours a write mask and may be predicated, so a shader can write
// alpha in one instruction and colour in another. The variable is the only
// place that says what the fragment actually ended up with.
void shader_translator::emit_alpha_test() {
    if (!m_alpha_test || m_shader_type != shader_type::pixel) return;
    const uint32_t var = export_var_for(kExportColor0);
    if (var == 0) return;
    const uint32_t bool_type = m_b.type_bool();
    // `never` discards unconditionally, and it is a state a title sets - it is
    // not the same as the test being off. Xenia's CompareFunction, in order:
    // never, less, equal, lessequal, greater, notequal, greaterequal, always.
    uint32_t fails = 0;
    if (m_alpha_test_func == 0) {
        fails = m_b.constant_bool(true);
    } else {
        static const uint32_t comparison[8] = {
            0,                            // never, handled above
            spv::OpFOrdLessThan,          // less
            spv::OpFOrdEqual,             // equal
            spv::OpFOrdLessThanEqual,     // lessequal
            spv::OpFOrdGreaterThan,       // greater
            spv::OpFOrdNotEqual,          // notequal
            spv::OpFOrdGreaterThanEqual,  // greaterequal
            0,                            // always, never reaches here
        };
        const uint32_t op = comparison[m_alpha_test_func & 7];
        if (op == 0) return;
        const uint32_t colour = m_b.allocate_id();
        m_b.emit(spirv_section::functions, spv::OpLoad,
                 {m_vec4_type, colour, var});
        const uint32_t alpha = m_b.allocate_id();
        m_b.emit(spirv_section::functions, spv::OpCompositeExtract,
                 {m_float_type, alpha, colour, 3});
        // ORDERED comparisons throughout, so a NaN alpha fails the test rather
        // than passing every one of them.
        const uint32_t passes = m_b.allocate_id();
        m_b.emit(spirv_section::functions, op,
                 {bool_type, passes, alpha, m_b.constant_float(m_alpha_test_ref)});
        fails = m_b.allocate_id();
        m_b.emit(spirv_section::functions, spv::OpLogicalNot,
                 {bool_type, fails, passes});
    }
    // Not kill_fragment(): that ANDs in the predicate gate, which belongs to
    // whichever instruction was translated last and means nothing here.
    const uint32_t kill_label = m_b.allocate_id();
    const uint32_t merge_label = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpSelectionMerge, {merge_label, 0});
    m_b.emit(spirv_section::functions, spv::OpBranchConditional,
             {fails, kill_label, merge_label});
    m_b.emit(spirv_section::functions, spv::OpLabel, {kill_label});
    m_b.emit(spirv_section::functions, spv::OpKill, {});
    m_b.emit(spirv_section::functions, spv::OpLabel, {merge_label});
}

std::vector<uint32_t> shader_translator::end_function() {
    emit_debug_tint();
    emit_alpha_test();
    m_b.emit(spirv_section::functions, spv::OpReturn, {});
    m_b.emit(spirv_section::functions, spv::OpFunctionEnd, {});
    return m_b.assemble();
}

bool shader_translator::reads_previous_scalar(
    const alu_instruction& alu) noexcept {
    switch (alu.scalar_opcode) {
        case alu_scalar_opcode::adds_prev:
        case alu_scalar_opcode::muls_prev:
        case alu_scalar_opcode::subs_prev:
        case alu_scalar_opcode::muls_prev2:
            return true;
        // retain_prev is the one that has to look further than the opcode.
        // It appears in almost every instruction in every shader as the way to
        // spell "no scalar operation", and only the handful that give it a
        // DESTINATION are copying ps anywhere. Treating the opcode alone as a
        // read would make every shader maintain ps - a store on every scalar
        // operation in the frame, and a different module for every shader that
        // has no use for one.
        case alu_scalar_opcode::retain_prev:
            return alu.scalar_write_mask != 0;
        default:
            return false;
    }
}

bool shader_translator::writes_address_register(
    const alu_instruction& alu) noexcept {
    // The three instructions that load a0, one vector and two scalar. Nothing
    // else on this machine can change it.
    return alu.vector_opcode == alu_vector_opcode::max_a ||
           alu.scalar_opcode == alu_scalar_opcode::max_as ||
           alu.scalar_opcode == alu_scalar_opcode::max_asf;
}

std::vector<uint32_t> shader_translator::translate(
    const std::vector<alu_instruction>& instructions,
    uint32_t temp_register_count, shader_type type) {
    m_reads_previous_scalar = false;
    m_writes_address_register = false;
    for (const alu_instruction& alu : instructions) {
        if (reads_previous_scalar(alu))
            m_reads_previous_scalar = true;
        if (writes_address_register(alu)) m_writes_address_register = true;
    }
    begin_function(temp_register_count, type);
    for (const alu_instruction& alu : instructions) translate_alu(alu);
    return end_function();
}

void shader_translator::translate_alu(const alu_instruction& alu) {
    // One reading of p0 for both halves, taken BEFORE either of them runs.
    // Either half can be a member of the predicate family and write p0 itself,
    // and an instruction gated on the value it has just produced is not
    // predicated at all - it is self-fulfilling. Skipped for an instruction
    // neither half of which translates, so a shader with no predication and no
    // supported op is byte for byte what it was.
    m_predicate_gate =
        alu.is_predicated && (is_supported_vector_op(alu.vector_opcode) ||
                              is_supported_scalar_op(alu.scalar_opcode))
            ? predicate_gate(alu.predicate_condition)
            : 0;
    translate_vector(alu);
    translate_scalar(alu);
    m_predicate_gate = 0;
}

void shader_translator::translate_instruction(
    const shader_instruction& instruction) {
    switch (instruction.kind) {
        case instruction_kind::alu:
            translate_alu(instruction.alu);
            break;
        case instruction_kind::texture_fetch:
            translate_texture_fetch(instruction.texture);
            break;
        case instruction_kind::vertex_fetch:
            translate_vertex_fetch(instruction.vertex);
            break;
    }
}

bool viewport_transform::operator<(const viewport_transform& other) const
    noexcept {
    if (from_window_space != other.from_window_space)
        return from_window_space < other.from_window_space;
    for (int i = 0; i < 3; ++i) {
        if (scale[i] != other.scale[i]) return scale[i] < other.scale[i];
        if (offset[i] != other.offset[i]) return offset[i] < other.offset[i];
    }
    return false;
}

uint32_t shader_translator::apply_viewport(uint32_t position) {
    // The shader emitted window-space coordinates, already divided by w. The
    // inverse of what the console's viewport hardware would have done takes
    // them back to clip space: clip = (window - offset) / scale, with w = 1
    // because the division has already happened.
    //
    // A zero scale would divide by zero, so it is treated as an axis that was
    // not transformed at all rather than one that collapses the frame.
    // Y is negated on top of the inverse scale. The console's viewport maps
    // clip -1 to the BOTTOM of the screen; Vulkan's clip space has +Y pointing
    // down, so -1 is the top. Undoing the console transform without accounting
    // for that renders the whole frame upside down - which is a mirror image,
    // not an obviously broken one, so it is easy to look at and not see.
    const auto invert = [&](int axis) {
        const float scale =
            m_viewport.scale[axis] != 0.0f ? 1.0f / m_viewport.scale[axis]
                                           : 1.0f;
        return axis == 1 ? -scale : scale;
    };
    const uint32_t offsets = m_b.constant_composite(
        m_vec4_type,
        {m_b.constant_float(m_viewport.offset[0]),
         m_b.constant_float(m_viewport.offset[1]),
         m_b.constant_float(m_viewport.offset[2]), m_b.constant_float(0.0f)});
    const uint32_t inverse_scales = m_b.constant_composite(
        m_vec4_type, {m_b.constant_float(invert(0)), m_b.constant_float(invert(1)),
                      m_b.constant_float(invert(2)), m_b.constant_float(1.0f)});

    const uint32_t shifted = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpFSub,
             {m_vec4_type, shifted, position, offsets});
    const uint32_t scaled = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpFMul,
             {m_vec4_type, scaled, shifted, inverse_scales});
    // Force w to 1: the shader's own w is the pre-divide value, and leaving it
    // in would divide every coordinate a second time.
    const uint32_t result = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpCompositeInsert,
             {m_vec4_type, result, m_b.constant_float(1.0f), scaled, 3});
    return result;
}

uint32_t shader_translator::flip_clip_y(uint32_t position) {
    // Multiplied rather than negated component-wise so w survives untouched:
    // this position has not been divided yet, and forcing w the way the
    // window-space path does would flatten the perspective out of the frame.
    const uint32_t factors = m_b.constant_composite(
        m_vec4_type,
        {m_b.constant_float(1.0f), m_b.constant_float(-1.0f),
         m_b.constant_float(1.0f), m_b.constant_float(1.0f)});
    const uint32_t result = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpFMul,
             {m_vec4_type, result, position, factors});
    return result;
}

std::vector<uint32_t> shader_translator::texture_slots() const {
    std::vector<uint32_t> slots;
    slots.reserve(m_texture_vars.size());
    // m_texture_vars is keyed by fetch constant index, and a std::map keeps
    // those in order, which is the order the bindings must be described in.
    for (const auto& entry : m_texture_vars) slots.push_back(entry.first);
    return slots;
}

std::vector<sampler_override> shader_translator::texture_filters() const {
    std::vector<sampler_override> filters;
    filters.reserve(m_texture_vars.size());
    // Walked over m_texture_vars, not m_texture_filters, so the result lines up
    // with texture_slots() element for element even if a slot somehow got a
    // variable without a recorded override. A slot with none defers entirely,
    // which is the same answer the hardware's default encoding gives.
    for (const auto& entry : m_texture_vars) {
        const auto it = m_texture_filters.find(entry.first);
        filters.push_back(it != m_texture_filters.end() ? it->second
                                                        : sampler_override{});
    }
    return filters;
}

namespace {

// One vertex's worth of the register file, as floats: enough to run the handful
// of instructions that produce a fetch's element index.
struct index_eval {
    const register_file& constants;
    float regs[64][4]{};
    bool ok{true};

    void read(const alu_source& src, float out[4]) {
        float base[4];
        if (src.is_temp) {
            if (src.temp_reg() >= 64 || src.temp_relative()) {
                ok = false;
                return;
            }
            for (uint32_t c = 0; c < 4; ++c) base[c] = regs[src.temp_reg()][c];
            if (src.temp_absolute())
                for (uint32_t c = 0; c < 4; ++c)
                    base[c] = base[c] < 0.0f ? -base[c] : base[c];
        } else {
            // A vertex shader's constants count from zero; only a vertex
            // shader has a vertex fetch, so no pixel-half offset applies.
            for (uint32_t c = 0; c < 4; ++c)
                base[c] = constants.get_float(reg::shader_constant_000_x +
                                              src.reg * 4 + c);
        }
        for (uint32_t c = 0; c < 4; ++c)
            out[c] = base[alu_instruction::swizzled_component(src.swizzle, c)];
        if (src.negate)
            for (uint32_t c = 0; c < 4; ++c) out[c] = -out[c];
    }

    void write(uint32_t dest, uint8_t mask, const float value[4]) {
        if (dest >= 64) {
            ok = false;
            return;
        }
        for (uint32_t c = 0; c < 4; ++c)
            if (mask & (1u << c)) regs[dest][c] = value[c];
    }

    void run(const alu_instruction& alu) {
        // A predicated instruction depends on state this does not model, and
        // an export writes nothing a fetch can read.
        if (alu.is_predicated) {
            ok = false;
            return;
        }
        if (alu.is_export) return;
        // Zeroed because read() gives up without writing its output when it
        // meets something it cannot evaluate, and the arithmetic below runs
        // anyway - the caller throws the whole evaluation away on `ok`, so the
        // values never escape, but reading them uninitialised is undefined and
        // the compiler is right to say so.
        float a[4]{}, b[4]{}, c[4]{}, result[4]{};
        switch (alu.vector_opcode) {
            case alu_vector_opcode::add:
            case alu_vector_opcode::mul:
            case alu_vector_opcode::max:
            case alu_vector_opcode::min:
                read(alu.sources[0], a);
                read(alu.sources[1], b);
                for (uint32_t i = 0; i < 4; ++i)
                    result[i] = alu.vector_opcode == alu_vector_opcode::add
                                    ? a[i] + b[i]
                                : alu.vector_opcode == alu_vector_opcode::mul
                                    ? a[i] * b[i]
                                : alu.vector_opcode == alu_vector_opcode::max
                                    ? std::max(a[i], b[i])
                                    : std::min(a[i], b[i]);
                break;
            case alu_vector_opcode::mad:
                read(alu.sources[0], a);
                read(alu.sources[1], b);
                read(alu.sources[2], c);
                for (uint32_t i = 0; i < 4; ++i) result[i] = a[i] * b[i] + c[i];
                break;
            case alu_vector_opcode::frc:
            case alu_vector_opcode::trunc:
            case alu_vector_opcode::floor:
                read(alu.sources[0], a);
                for (uint32_t i = 0; i < 4; ++i)
                    result[i] =
                        alu.vector_opcode == alu_vector_opcode::frc
                            ? a[i] - std::floor(a[i])
                        : alu.vector_opcode == alu_vector_opcode::trunc
                            ? std::trunc(a[i])
                            : std::floor(a[i]);
                break;
            default:
                // Only the instruction that WRITES something matters; an
                // opcode this cannot evaluate is only a problem if the fetch
                // index depends on it, which is not knowable here.
                ok = false;
                return;
        }
        if (alu.vector_clamp)
            for (uint32_t i = 0; i < 4; ++i)
                result[i] = std::min(std::max(result[i], 0.0f), 1.0f);
        write(alu.vector_dest, alu.vector_write_mask, result);
        // The co-issued scalar half. retain_prev writes nothing.
        if (alu.scalar_opcode != alu_scalar_opcode::retain_prev &&
            alu.scalar_write_mask != 0)
            ok = false;
    }
};

} // namespace

namespace {

// The first vertex fetch of a program, or null if it has none.
const vertex_fetch_instruction* first_vertex_fetch(
    const shader_program& program) noexcept {
    for (const shader_exec_block& block : program.exec_blocks)
        for (const shader_instruction& instruction : block.instructions)
            if (instruction.kind == instruction_kind::vertex_fetch)
                return &instruction.vertex;
    return nullptr;
}

} // namespace

bool vertex_fetch_indexes_by_vertex_index(
    const shader_program& program) noexcept {
    const vertex_fetch_instruction* first = first_vertex_fetch(program);
    // No fetch at all is the same answer for the caller: nothing to remap.
    if (first == nullptr) return true;
    // Anything other than r0.x is a computed index by definition.
    if (first->src_reg != 0 || first->src_swizzle != 0) return false;
    // r0.x is the vertex index only while nothing has overwritten it.
    for (const shader_exec_block& block : program.exec_blocks)
        for (const shader_instruction& instruction : block.instructions) {
            if (instruction.kind == instruction_kind::vertex_fetch)
                return true;
            if (instruction.kind == instruction_kind::alu &&
                !instruction.alu.is_export &&
                instruction.alu.vector_dest == 0 &&
                (instruction.alu.vector_write_mask & 0x1) != 0)
                return false;
        }
    return true;
}

bool vertex_fetch_index_map(const shader_program& program,
                            const register_file& constants, uint32_t count,
                            std::vector<uint32_t>& out) {
    const vertex_fetch_instruction* first = first_vertex_fetch(program);
    if (first == nullptr) return false;
    if (vertex_fetch_indexes_by_vertex_index(program)) return false;

    out.clear();
    out.reserve(count);
    for (uint32_t vertex = 0; vertex < count; ++vertex) {
        index_eval eval{constants};
        // The console starts a vertex shader with the vertex index in r0.x.
        eval.regs[0][0] = static_cast<float>(vertex);
        bool reached = false;
        for (const shader_exec_block& block : program.exec_blocks) {
            for (const shader_instruction& instruction : block.instructions) {
                if (instruction.kind == instruction_kind::vertex_fetch) {
                    reached = true;
                    break;
                }
                if (instruction.kind == instruction_kind::texture_fetch) {
                    eval.ok = false;
                    break;
                }
                eval.run(instruction.alu);
                if (!eval.ok) break;
            }
            if (reached || !eval.ok) break;
        }
        if (!reached || !eval.ok) return false;
        const float index = eval.regs[first->src_reg][first->src_swizzle];
        if (!std::isfinite(index) || index < 0.0f) return false;
        out.push_back(static_cast<uint32_t>(std::floor(index)));
    }
    return true;
}

void shader_translator::collect_vertex_inputs(const shader_program& program) {
    m_vertex_inputs.clear();
    // A mini fetch carries no address of its own; it reads from the buffer the
    // last full fetch named, at its own offset. Tracking the last full fetch is
    // the whole of that rule.
    uint8_t current_slot = 0;
    uint32_t current_stride = 0;
    for (const shader_exec_block& block : program.exec_blocks) {
        for (const shader_instruction& instruction : block.instructions) {
            if (instruction.kind != instruction_kind::vertex_fetch) continue;
            const vertex_fetch_instruction& vf = instruction.vertex;
            if (!vf.is_mini_fetch) {
                current_slot = vf.const_index;
                current_stride = vf.stride;
            }
            const vertex_format_info info =
                decode_vertex_format(static_cast<vertex_format>(vf.format));
            vertex_input input;
            input.location = static_cast<uint32_t>(m_vertex_inputs.size());
            input.fetch_slot = current_slot;
            input.stride_dwords = current_stride;
            // The instruction's offset is its own even for a mini fetch - that
            // is how several attributes are read out of one vertex.
            input.offset_dwords = static_cast<uint32_t>(vf.offset < 0 ? 0
                                                                      : vf.offset);
            input.format = vf.format;
            input.components = info.components;
            m_vertex_inputs.push_back(input);
        }
    }
}

void shader_translator::translate_vertex_fetch(
    const vertex_fetch_instruction& vf) {
    const std::size_t index = m_next_vertex_fetch++;
    if (index >= m_vertex_input_vars.size()) return;
    if (vf.dst_reg >= m_temp_vars.size()) return;

    const uint32_t loaded = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpLoad,
             {m_vec4_type, loaded, m_vertex_input_vars[index]});

    // The destination swizzle picks, per component, a component of the fetched
    // attribute, a literal 0 or 1, or "leave the register alone". The last one
    // is a write mask, not a value, so it has to suppress the store rather than
    // write something.
    //
    // A texture fetch reads the same encoding, and store_fetch_result below
    // says so in one place - but this is deliberately NOT routed through it.
    // Sharing would fold in that function's shortcut for the identity swizzle,
    // which emits a bare store where this emits a construct: the same value,
    // and a different module for every vertex fetch in every title. A change
    // meant to fix one title's texture fetches has no business re-emitting
    // every other title's vertex shaders, and the way that goes wrong is a
    // picture nobody can attribute.
    uint32_t write_mask = 0;
    uint32_t components[4] = {0, 0, 0, 0};
    const uint32_t zero = m_b.constant_float(0.0f);
    const uint32_t one = m_b.constant_float(1.0f);
    for (uint32_t i = 0; i < 4; ++i) {
        const uint32_t selector = (vf.dst_swizzle >> (i * 3)) & 0x7;
        switch (selector) {
            case 0: case 1: case 2: case 3:
                components[i] = extract_component(loaded, selector);
                write_mask |= 1u << i;
                break;
            case 4: // literal 0
                components[i] = zero;
                write_mask |= 1u << i;
                break;
            case 5: // literal 1
                components[i] = one;
                write_mask |= 1u << i;
                break;
            case 7: // keep whatever the register already holds
                break;
            default:
                // Selector 6 is not a documented encoding; treating it as zero
                // is a guess, so it is left unwritten instead.
                break;
        }
    }
    if (write_mask == 0) return;

    // Assemble the four components into a vec4, filling the unwritten lanes
    // with anything - store_masked drops them.
    for (uint32_t i = 0; i < 4; ++i)
        if ((write_mask & (1u << i)) == 0) components[i] = zero;
    const uint32_t assembled = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpCompositeConstruct,
             {m_vec4_type, assembled, components[0], components[1],
              components[2], components[3]});

    predicated(vf.is_predicated, vf.predicate_condition, [&] {
        store_masked(m_temp_vars[vf.dst_reg], assembled, write_mask);
    });
}

void shader_translator::collect_interpolators(const shader_program& program) {
    m_interpolators.clear();
    m_writes_point_size = false;
    for (const shader_exec_block& block : program.exec_blocks) {
        for (const shader_instruction& instruction : block.instructions) {
            if (instruction.kind != instruction_kind::alu) continue;
            if (!instruction.alu.is_export) continue;
            // Exports below 16 are interpolators; 62 is position and 63 is
            // point size, neither of which the pixel shader reads as one.
            const uint32_t index = instruction.alu.vector_dest;
            if (index == kExportPointSize) m_writes_point_size = true;
            if (index >= 16) continue;
            if (std::find(m_interpolators.begin(), m_interpolators.end(),
                          index) == m_interpolators.end())
                m_interpolators.push_back(index);
        }
    }
    std::sort(m_interpolators.begin(), m_interpolators.end());
}

std::vector<uint32_t> shader_translator::translate(
    const shader_program& program, uint32_t temp_register_count,
    shader_type type, const viewport_transform& viewport) {
    options opts;
    opts.type = type;
    opts.viewport = viewport;
    return translate(program, temp_register_count, opts);
}

std::vector<uint32_t> shader_translator::translate(
    const shader_program& program, uint32_t temp_register_count,
    shader_type type) {
    options opts;
    opts.type = type;
    return translate(program, temp_register_count, opts);
}

std::vector<uint32_t> shader_translator::translate(
    const shader_program& program, uint32_t temp_register_count,
    const options& opts) {
    const shader_type type = opts.type;
    m_viewport = opts.viewport;
    m_param_gen_interpolator = -1;
    m_param_gen_point = opts.param_gen_point;
    // Only a pixel shader has an alpha test. Carrying it onto a vertex shader
    // would emit an OpKill the stage does not have.
    m_alpha_test = opts.alpha_test && opts.type == shader_type::pixel;
    m_alpha_test_func = opts.alpha_test_func;
    m_alpha_test_ref = opts.alpha_test_ref;
    m_debug_tint = opts.debug_tint && opts.type == shader_type::pixel;
    // Vertex inputs and interpolators must be known before the module preamble
    // is emitted: the entry point's interface has to name them.
    if (type == shader_type::vertex) {
        collect_vertex_inputs(program);
        collect_interpolators(program);
    } else {
        m_vertex_inputs.clear();
        // A pixel shader's interpolators are its vertex shader's, not its own.
        m_interpolators = opts.interpolators;
        m_writes_point_size = false;
        if (opts.param_gen_interpolator >= 0 &&
            opts.param_gen_interpolator < 16)
            m_param_gen_interpolator = opts.param_gen_interpolator;
    }
    m_next_vertex_fetch = 0;
    // Plan the control flow before anything is emitted. Two things come out of
    // it: whether a structured translation is possible at all, and - if it is
    // not - the count of what the flat fallback will drop.
    const std::vector<cf_instruction>& cf = program.control_flow.instructions;
    // The structured walk is driven by the control-flow program and reaches
    // the exec blocks through it, so the two have to agree about how many
    // there are. They always do for a shader that came out of parse_shader;
    // they do not for a program assembled by hand from blocks alone, which is
    // what every translator test does and what the flat walk has always
    // handled. Checking rather than assuming is the difference between those
    // programs translating as before and translating to an empty function.
    std::size_t exec_instructions = 0;
    for (const cf_instruction& one : cf)
        if (is_exec_opcode(one.opcode)) ++exec_instructions;
    std::vector<cf_node> plan;
    m_structured_control_flow =
        exec_instructions == program.exec_blocks.size() &&
        plan_control_flow(cf, 0, static_cast<uint32_t>(cf.size()), plan);
    m_untranslated_control_flow = 0;
    m_untranslated_control_flow_opcodes = 0;
    if (!m_structured_control_flow) {
        for (const cf_instruction& one : cf)
            if (!honours_control_flow(one)) {
                ++m_untranslated_control_flow;
                m_untranslated_control_flow_opcodes |=
                    1u << static_cast<uint32_t>(one.opcode);
            }
    }
    // Whether ps has to be maintained at all is a property of the whole
    // program, so it is settled before any instruction is emitted.
    m_reads_previous_scalar = false;
    // And whether a0 exists at all, which is the same kind of question.
    m_writes_address_register = false;
    for (const shader_exec_block& block : program.exec_blocks)
        for (const shader_instruction& instruction : block.instructions) {
            if (instruction.kind != instruction_kind::alu) continue;
            if (reads_previous_scalar(instruction.alu))
                m_reads_previous_scalar = true;
            if (writes_address_register(instruction.alu))
                m_writes_address_register = true;
        }
    // aL exists only where a loop sets it. A shader with no loop leaves it at
    // zero for its whole life, which is exactly the literal index the operand
    // already reads - so the module is unchanged.
    m_uses_loop_register = false;
    std::size_t loop_count = 0;
    if (m_structured_control_flow)
        for (const cf_instruction& one : cf)
            if (one.opcode == cf_opcode::loop_start) {
                m_uses_loop_register = true;
                ++loop_count;
            }
    m_loop_counter_vars.assign(loop_count, 0);
    m_next_loop_counter = 0;

    m_bool_loop_var = 0;
    begin_function(temp_register_count, type);

    if (m_structured_control_flow) {
        // Which exec block each exec CF instruction owns. parse_shader builds
        // them in control-flow order, so this is a running count - but it is
        // written down rather than assumed, because the structured walk visits
        // them out of order and a drifting index would silently pair a block
        // with the wrong exec.
        std::vector<int> exec_block_of_cf(cf.size(), -1);
        int next = 0;
        for (std::size_t i = 0; i < cf.size(); ++i)
            if (is_exec_opcode(cf[i].opcode)) exec_block_of_cf[i] = next++;
        // The last exec at the top level needs no explicit return: the
        // function ends there anyway, and emitting one would change every
        // module that has no control flow to speak of.
        uint32_t last_top_level = 0;
        for (const cf_node& node : plan)
            if (node.node_kind == cf_node::kind::block)
                last_top_level = node.cf_index;
        emit_control_flow(program, exec_block_of_cf, plan, 0, last_top_level);
    } else {
        for (const shader_exec_block& block : program.exec_blocks) {
            // The flat fallback, unchanged: every block in order, with only
            // the predicate condition honoured.
            const bool conditional =
                block.cf.opcode == cf_opcode::cond_exec_pred ||
                block.cf.opcode == cf_opcode::cond_exec_pred_end;
            predicated(conditional, /*condition=*/true, [&] {
                for (const shader_instruction& instruction : block.instructions)
                    translate_instruction(instruction);
            });
        }
    }
    return end_function();
}

// ---------------------------------------------------------------------------
// Control flow.

bool shader_translator::plan_control_flow(const std::vector<cf_instruction>& cf,
                                          uint32_t begin, uint32_t end,
                                          std::vector<cf_node>& out) {
    uint32_t i = begin;
    while (i < end) {
        const cf_instruction& one = cf[i];
        switch (one.opcode) {
            // Nothing to emit and nothing to reproduce.
            case cf_opcode::nop:
            case cf_opcode::alloc:
            case cf_opcode::mark_vs_fetch_done:
                ++i;
                continue;
            case cf_opcode::exec:
            case cf_opcode::exec_end:
            case cf_opcode::cond_exec:
            case cf_opcode::cond_exec_end:
            case cf_opcode::cond_exec_pred:
            case cf_opcode::cond_exec_pred_end:
            case cf_opcode::cond_exec_pred_clean:
            case cf_opcode::cond_exec_pred_clean_end: {
                cf_node node;
                node.node_kind = cf_node::kind::block;
                node.cf_index = i;
                out.push_back(std::move(node));
                ++i;
                continue;
            }
            case cf_opcode::loop_start: {
                // loop_start names where to jump when the loop is SKIPPED,
                // which is one past its loop_end. Every one of these has to
                // agree or the pair is not the pair it looks like, and pairing
                // the wrong endloop would put a loop's merge point inside
                // another loop's body - which spirv-val would reject, but only
                // after the shader had been built wrong.
                const uint32_t after = one.loop_address;
                if (after > end || after < i + 2) return false;
                const uint32_t loop_end_index = after - 1;
                const cf_instruction& tail = cf[loop_end_index];
                if (tail.opcode != cf_opcode::loop_end) return false;
                if (tail.loop_id != one.loop_id) return false;
                if (tail.loop_address != i + 1) return false;
                cf_node node;
                node.node_kind = cf_node::kind::loop;
                node.cf_index = i;
                node.partner_index = loop_end_index;
                if (!plan_control_flow(cf, i + 1, loop_end_index, node.body))
                    return false;
                out.push_back(std::move(node));
                i = after;
                continue;
            }
            case cf_opcode::cond_jmp: {
                const uint32_t target = one.jump_address;
                // A BACKWARD jump is a loop the compiler did not spell out as
                // one, and there is no structured form to recognise it as.
                // Nothing in any title here does it; if something does, it
                // must be counted rather than guessed at.
                if (target <= i || target > end) return false;
                if (one.is_unconditional) {
                    // Only meaningful as the tail of a region: it says "the
                    // rest of this construct is the other side of a branch",
                    // and the branch case below is what pairs it up. Anywhere
                    // else it would make the instructions it skips dead, which
                    // is not a shape any of this microcode produces.
                    if (target != end) return false;
                    i = end;
                    continue;
                }
                // if / else: the then-side ends in an unconditional jump over
                // the else-side. Recognising the pair is what keeps the two
                // sides mutually exclusive; treating it as a plain `if` would
                // run the else-side either way.
                if (target >= i + 2 &&
                    cf[target - 1].opcode == cf_opcode::cond_jmp &&
                    cf[target - 1].is_unconditional) {
                    const uint32_t after_else = cf[target - 1].jump_address;
                    if (after_else > target && after_else <= end) {
                        cf_node node;
                        node.node_kind = cf_node::kind::branch;
                        node.cf_index = i;
                        if (!plan_control_flow(cf, i + 1, target - 1, node.body))
                            return false;
                        if (!plan_control_flow(cf, target, after_else,
                                               node.alternative))
                            return false;
                        out.push_back(std::move(node));
                        i = after_else;
                        continue;
                    }
                }
                cf_node node;
                node.node_kind = cf_node::kind::branch;
                node.cf_index = i;
                if (!plan_control_flow(cf, i + 1, target, node.body))
                    return false;
                out.push_back(std::move(node));
                i = target;
                continue;
            }
            // A subroutine call and its return. Not reproduced: no title seen
            // here emits one, and a mechanism with no test is worth less than
            // a count that says loudly when it first appears.
            case cf_opcode::cond_call:
            case cf_opcode::ret:
                return false;
            // An endloop with no loop_start above it, or one whose start named
            // a different end. Either way the program is not what it looks
            // like and nothing should be inferred from it.
            case cf_opcode::loop_end:
                return false;
        }
        return false;
    }
    return true;
}

uint32_t shader_translator::control_flow_gate(const cf_instruction& cf) {
    if (is_predicated_exec(cf.opcode)) return predicate_gate(cf.condition);
    if (is_bool_conditional_exec(cf.opcode)) {
        const uint32_t bit = load_bool_constant(cf.bool_address);
        if (cf.condition) return bit;
        const uint32_t inverted = m_b.allocate_id();
        m_b.emit(spirv_section::functions, spv::OpLogicalNot,
                 {m_b.type_bool(), inverted, bit});
        return inverted;
    }
    return 0;
}

void shader_translator::emit_selection(uint32_t gate,
                                       const std::function<void()>& then_body,
                                       const std::function<void()>& else_body) {
    if (gate == 0) {
        then_body();
        return;
    }
    const uint32_t then_label = m_b.allocate_id();
    const uint32_t else_label = else_body ? m_b.allocate_id() : 0;
    const uint32_t merge_label = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpSelectionMerge, {merge_label, 0});
    m_b.emit(spirv_section::functions, spv::OpBranchConditional,
             {gate, then_label, else_body ? else_label : merge_label});
    m_b.emit(spirv_section::functions, spv::OpLabel, {then_label});
    then_body();
    m_b.emit(spirv_section::functions, spv::OpBranch, {merge_label});
    if (else_body) {
        m_b.emit(spirv_section::functions, spv::OpLabel, {else_label});
        else_body();
        m_b.emit(spirv_section::functions, spv::OpBranch, {merge_label});
    }
    m_b.emit(spirv_section::functions, spv::OpLabel, {merge_label});
}

void shader_translator::emit_exec_block(
    const shader_program& program, const std::vector<int>& exec_block_of_cf,
    uint32_t cf_index, uint32_t depth, uint32_t last_top_level_cf) {
    const cf_instruction& cf = program.control_flow.instructions[cf_index];
    const int block_index = exec_block_of_cf[cf_index];
    if (block_index < 0 ||
        static_cast<std::size_t>(block_index) >= program.exec_blocks.size())
        return;
    const shader_exec_block& block = program.exec_blocks[block_index];
    // A shader-ending exec ends the shader when its condition is MET - which
    // is why the return goes inside the conditional body and not after it.
    // (The one at the top level with nothing after it needs no return at all:
    // the function ends there regardless, and emitting one would change every
    // module that has no control flow worth the name.)
    const bool returns = ends_shader(cf.opcode) &&
                         !(depth == 0 && cf_index == last_top_level_cf);
    emit_selection(control_flow_gate(cf),
                   [&] {
                       for (const shader_instruction& instruction :
                            block.instructions)
                           translate_instruction(instruction);
                       if (returns) {
                           m_b.emit(spirv_section::functions, spv::OpReturn, {});
                           // OpReturn terminates the block, so anything the
                           // caller emits next needs a fresh one. An
                           // unconditional end mid-shader leaves it
                           // unreachable, which is exactly what it is.
                           m_b.emit(spirv_section::functions, spv::OpLabel,
                                    {m_b.allocate_id()});
                       }
                   },
                   nullptr);
}

void shader_translator::emit_control_flow(
    const shader_program& program, const std::vector<int>& exec_block_of_cf,
    const std::vector<cf_node>& nodes, uint32_t depth,
    uint32_t last_top_level_cf) {
    const std::vector<cf_instruction>& cf = program.control_flow.instructions;
    for (const cf_node& node : nodes) {
        switch (node.node_kind) {
            case cf_node::kind::block:
                emit_exec_block(program, exec_block_of_cf, node.cf_index, depth,
                                last_top_level_cf);
                break;
            case cf_node::kind::branch: {
                // The jump's condition is the condition for SKIPPING the body,
                // so the body runs when it does not hold. Building the `if`
                // the other way round runs precisely the wrong half.
                const cf_instruction& jump = cf[node.cf_index];
                uint32_t taken = 0;
                if (jump.is_predicated)
                    taken = predicate_gate(jump.condition);
                else {
                    const uint32_t bit = load_bool_constant(jump.bool_address);
                    if (jump.condition)
                        taken = bit;
                    else {
                        taken = m_b.allocate_id();
                        m_b.emit(spirv_section::functions, spv::OpLogicalNot,
                                 {m_b.type_bool(), taken, bit});
                    }
                }
                const uint32_t not_taken = m_b.allocate_id();
                m_b.emit(spirv_section::functions, spv::OpLogicalNot,
                         {m_b.type_bool(), not_taken, taken});
                emit_selection(
                    not_taken,
                    [&] {
                        emit_control_flow(program, exec_block_of_cf, node.body,
                                          depth + 1, last_top_level_cf);
                    },
                    node.alternative.empty()
                        ? std::function<void()>()
                        : std::function<void()>([&] {
                              emit_control_flow(program, exec_block_of_cf,
                                                node.alternative, depth + 1,
                                                last_top_level_cf);
                          }));
                break;
            }
            case cf_node::kind::loop: {
                const cf_instruction& start = cf[node.cf_index];
                const cf_instruction& tail = cf[node.partner_index];
                const uint32_t uint_type = m_b.type_int(false);
                const uint32_t int_type = m_b.type_int(true);
                const uint32_t bool_type = m_b.type_bool();

                // The loop constant: trip count in bits 0:7, aL's start in
                // 8:15, aL's SIGNED step in 16:23.
                const uint32_t constant = load_loop_constant(start.loop_id);
                const uint32_t count_start = m_b.allocate_id();
                m_b.emit(spirv_section::functions, spv::OpBitFieldUExtract,
                         {uint_type, count_start, constant,
                          m_b.constant_int(0), m_b.constant_int(8)});

                // aL is saved and restored around the loop, because a nested
                // loop writes the same register and `c[aL + n]` after the
                // inner one must see the outer one's value again.
                const uint32_t saved_address = m_b.allocate_id();
                m_b.emit(spirv_section::functions, spv::OpLoad,
                         {int_type, saved_address, m_loop_address_var});
                if (!start.loop_is_repeat) {
                    const uint32_t initial = m_b.allocate_id();
                    m_b.emit(spirv_section::functions, spv::OpBitFieldUExtract,
                             {uint_type, initial, constant, m_b.constant_int(8),
                              m_b.constant_int(8)});
                    const uint32_t as_int = m_b.allocate_id();
                    m_b.emit(spirv_section::functions, spv::OpBitcast,
                             {int_type, as_int, initial});
                    m_b.emit(spirv_section::functions, spv::OpStore,
                             {m_loop_address_var, as_int});
                }

                // A function-local counter per loop, declared up front in the
                // entry block - SPIR-V requires every Function variable to be
                // there, so they cannot be created where they are used. The
                // nesting is lexical here, so each loop gets its own and there
                // is no stack to keep, which is the one real simplification
                // structured recognition buys over a dispatch loop.
                const uint32_t counter =
                    m_next_loop_counter < m_loop_counter_vars.size()
                        ? m_loop_counter_vars[m_next_loop_counter++]
                        : 0;
                if (counter == 0) break;
                m_b.emit(spirv_section::functions, spv::OpStore,
                         {counter, count_start});

                // The header does nothing but declare the construct. SPIR-V
                // requires OpLoopMerge to be the second-to-last instruction in
                // its block, so the trip-count test - which loads a variable,
                // and so cannot be hoisted out of the loop - goes in a block
                // of its own between the header and the body. This is the same
                // shape glslang emits for a `while`.
                const uint32_t header = m_b.allocate_id();
                const uint32_t test = m_b.allocate_id();
                const uint32_t body = m_b.allocate_id();
                const uint32_t continue_target = m_b.allocate_id();
                const uint32_t merge = m_b.allocate_id();
                m_b.emit(spirv_section::functions, spv::OpBranch, {header});
                m_b.emit(spirv_section::functions, spv::OpLabel, {header});
                m_b.emit(spirv_section::functions, spv::OpLoopMerge,
                         {merge, continue_target, 0});
                m_b.emit(spirv_section::functions, spv::OpBranch, {test});
                m_b.emit(spirv_section::functions, spv::OpLabel, {test});
                const uint32_t remaining = m_b.allocate_id();
                m_b.emit(spirv_section::functions, spv::OpLoad,
                         {uint_type, remaining, counter});
                const uint32_t more = m_b.allocate_id();
                m_b.emit(spirv_section::functions, spv::OpINotEqual,
                         {bool_type, more, remaining, m_b.constant_uint(0)});
                m_b.emit(spirv_section::functions, spv::OpBranchConditional,
                         {more, body, merge});

                m_b.emit(spirv_section::functions, spv::OpLabel, {body});
                emit_control_flow(program, exec_block_of_cf, node.body,
                                  depth + 1, last_top_level_cf);
                // The predicated break, tested at the bottom of the body -
                // which is where the console tests it.
                if (tail.loop_predicated_break) {
                    const uint32_t gate = predicate_gate(tail.condition);
                    const uint32_t break_label = m_b.allocate_id();
                    const uint32_t after = m_b.allocate_id();
                    m_b.emit(spirv_section::functions, spv::OpSelectionMerge,
                             {after, 0});
                    m_b.emit(spirv_section::functions, spv::OpBranchConditional,
                             {gate, break_label, after});
                    m_b.emit(spirv_section::functions, spv::OpLabel,
                             {break_label});
                    m_b.emit(spirv_section::functions, spv::OpBranch, {merge});
                    m_b.emit(spirv_section::functions, spv::OpLabel, {after});
                }
                m_b.emit(spirv_section::functions, spv::OpBranch,
                         {continue_target});

                m_b.emit(spirv_section::functions, spv::OpLabel,
                         {continue_target});
                const uint32_t at_end = m_b.allocate_id();
                m_b.emit(spirv_section::functions, spv::OpLoad,
                         {uint_type, at_end, counter});
                const uint32_t decremented = m_b.allocate_id();
                m_b.emit(spirv_section::functions, spv::OpISub,
                         {uint_type, decremented, at_end, m_b.constant_uint(1)});
                m_b.emit(spirv_section::functions, spv::OpStore,
                         {counter, decremented});
                // aL steps once per iteration, by the loop constant's signed
                // step. This is what makes `c[aL + n]` walk an array rather
                // than read one element eight times.
                const uint32_t step = m_b.allocate_id();
                m_b.emit(spirv_section::functions, spv::OpBitcast,
                         {int_type, step, constant});
                const uint32_t step_value = m_b.allocate_id();
                m_b.emit(spirv_section::functions, spv::OpBitFieldSExtract,
                         {int_type, step_value, step, m_b.constant_int(16),
                          m_b.constant_int(8)});
                const uint32_t address_now = m_b.allocate_id();
                m_b.emit(spirv_section::functions, spv::OpLoad,
                         {int_type, address_now, m_loop_address_var});
                const uint32_t stepped = m_b.allocate_id();
                m_b.emit(spirv_section::functions, spv::OpIAdd,
                         {int_type, stepped, address_now, step_value});
                m_b.emit(spirv_section::functions, spv::OpStore,
                         {m_loop_address_var, stepped});
                m_b.emit(spirv_section::functions, spv::OpBranch, {header});

                m_b.emit(spirv_section::functions, spv::OpLabel, {merge});
                m_b.emit(spirv_section::functions, spv::OpStore,
                         {m_loop_address_var, saved_address});
                break;
            }
        }
    }
}

uint32_t shader_translator::setup_bool_loop_buffer() {
    if (m_bool_loop_var != 0) return m_bool_loop_var;
    const uint32_t uint_type = m_b.type_int(false);
    const uint32_t uvec4 = m_b.type_vector(uint_type, 4);
    const uint32_t array = m_b.allocate_id();
    m_b.emit(spirv_section::types, spv::OpTypeArray,
             {array, uvec4, m_b.constant_uint(kBoolLoopVec4Count)});
    m_b.emit(spirv_section::decorations, spv::OpDecorate,
             {array, spv::DecorationArrayStride, 16});
    const uint32_t block = m_b.allocate_id();
    m_b.emit(spirv_section::types, spv::OpTypeStruct, {block, array});
    m_b.emit(spirv_section::decorations, spv::OpDecorate,
             {block, spv::DecorationBlock});
    m_b.emit(spirv_section::decorations, spv::OpMemberDecorate,
             {block, 0, spv::DecorationOffset, 0});
    const uint32_t block_ptr =
        m_b.type_pointer(spv::StorageClassUniform, block);
    m_bool_loop_var = m_b.allocate_id();
    m_b.emit(spirv_section::types, spv::OpVariable,
             {block_ptr, m_bool_loop_var, spv::StorageClassUniform});
    m_b.emit(spirv_section::decorations, spv::OpDecorate,
             {m_bool_loop_var, spv::DecorationDescriptorSet, 0});
    m_b.emit(spirv_section::decorations, spv::OpDecorate,
             {m_bool_loop_var, spv::DecorationBinding, 1});
    m_uniform_uint_ptr =
        m_b.type_pointer(spv::StorageClassUniform, uint_type);
    return m_bool_loop_var;
}

// One dword of the bool/loop bank, by its index within the bank.
uint32_t shader_translator::load_loop_constant(uint32_t id) {
    setup_bool_loop_buffer();
    const uint32_t dword = kBoolConstantDwords + (id & 0x1F);
    const uint32_t ptr = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpAccessChain,
             {m_uniform_uint_ptr, ptr, m_bool_loop_var, m_b.constant_uint(0),
              m_b.constant_uint(dword / 4), m_b.constant_uint(dword % 4)});
    const uint32_t value = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpLoad,
             {m_b.type_int(false), value, ptr});
    return value;
}

uint32_t shader_translator::load_bool_constant(uint32_t index) {
    setup_bool_loop_buffer();
    const uint32_t uint_type = m_b.type_int(false);
    const uint32_t dword = (index & 0xFF) >> 5;
    const uint32_t ptr = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpAccessChain,
             {m_uniform_uint_ptr, ptr, m_bool_loop_var, m_b.constant_uint(0),
              m_b.constant_uint(dword / 4), m_b.constant_uint(dword % 4)});
    const uint32_t word = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpLoad, {uint_type, word, ptr});
    const uint32_t shifted = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpShiftRightLogical,
             {uint_type, shifted, word, m_b.constant_uint(index & 0x1F)});
    const uint32_t bit = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpBitwiseAnd,
             {uint_type, bit, shifted, m_b.constant_uint(1)});
    const uint32_t set = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpINotEqual,
             {m_b.type_bool(), set, bit, m_b.constant_uint(0)});
    return set;
}

uint32_t shader_translator::sampled_image_for(uint32_t fetch_constant_index) {
    const auto it = m_texture_vars.find(fetch_constant_index);
    if (it != m_texture_vars.end()) return it->second;

    if (m_sampled_image_type == 0) {
        // image2D<float>, then a combined image+sampler.
        const uint32_t image_type = m_b.allocate_id();
        m_b.emit(spirv_section::types, spv::OpTypeImage,
                 {image_type, m_float_type, spv::Dim2D, 0, 0, 0, 1,
                  spv::ImageFormatUnknown});
        m_sampled_image_type = m_b.allocate_id();
        m_b.emit(spirv_section::types, spv::OpTypeSampledImage,
                 {m_sampled_image_type, image_type});
        m_sampled_image_ptr_type = m_b.type_pointer(
            spv::StorageClassUniformConstant, m_sampled_image_type);
    }

    const uint32_t var = m_b.allocate_id();
    m_b.emit(spirv_section::types, spv::OpVariable,
             {m_sampled_image_ptr_type, var, spv::StorageClassUniformConstant});
    // Textures live in descriptor set 2, one binding per fetch constant.
    m_b.emit(spirv_section::decorations, spv::OpDecorate,
             {var, spv::DecorationDescriptorSet, 2});
    m_b.emit(spirv_section::decorations, spv::OpDecorate,
             {var, spv::DecorationBinding, fetch_constant_index});
    m_texture_vars[fetch_constant_index] = var;
    return var;
}

// The constant WHITTY_FETCH_CONSTANT asks for, as a vec4 id, or 0 when the
// variable is unset. Parsed once; the id is per-module, so it is built here
// each time rather than cached across shaders.
uint32_t shader_translator::forced_fetch_constant() {
    static const char* const spec = std::getenv("WHITTY_FETCH_CONSTANT");
    if (spec == nullptr || *spec == 0) return 0;
    float rgba[4] = {1.0f, 0.0f, 1.0f, 1.0f}; // magenta, if only some are given
    const char* p = spec;
    for (float& component : rgba) {
        if (*p == 0) break;
        char* end = nullptr;
        const float value = std::strtof(p, &end);
        if (end == p) break;
        component = value;
        p = (*end == ',') ? end + 1 : end;
    }
    std::vector<uint32_t> components;
    for (float value : rgba) components.push_back(m_b.constant_float(value));
    return m_b.constant_composite(m_vec4_type, components);
}

// Whether to show the fetch's coordinate instead of sampling with it.
bool shader_translator::show_texcoord() {
    static const bool on = std::getenv("WHITTY_SHOW_TEXCOORD") != nullptr;
    return on;
}

void shader_translator::translate_texture_fetch(
    const texture_fetch_instruction& tf) {
    // Which dimensions sample a 2D host image, and why `tfetch3D` is one of
    // them.
    //
    // The instruction's field and the fetch CONSTANT's field are two different
    // encodings that share this enum's numbers, and they disagree at exactly
    // the value that matters. Xenia (xenos.h) spells both out:
    //
    //   FetchOpDimension (the instruction):  k1D=0 k2D=1 k3DOrStacked=2 kCube=3
    //   DataDimension    (the constant):     k1D=0 k2DOrStacked=1 k3D=2 kCube=3
    //
    // So a `tfetch3D` - instruction dimension 2 - is NOT necessarily a volume
    // texture. It is "3D or stacked", and which one it is comes from the
    // constant: a constant saying k2DOrStacked means a STACKED texture, an
    // array of 2D slices, and only a constant saying k3D is a true volume.
    //
    // Jetpac Refuelled draws its title art and its sprites with exactly this
    // pair - `tfetch3D` against a constant that says k2DOrStacked - so
    // refusing every instruction that was not literally `tfetch2D` dropped the
    // sample, and the pixel shader's `mul oC0, r0, r1` multiplied by a register
    // nothing had written. The geometry drew; nothing appeared. Nothing said
    // so either, which is the half of this that mattered: see below.
    //
    // A stacked texture is sampled here as its first slice. Every texture this
    // runtime uploads is a single 2D image (read_texture in texture_read.cpp
    // builds nothing else), so slice 0 is not a choice between layers, it is
    // the only layer there is - and for a stack of depth 1, which is what a UI
    // atlas is, it is also the whole texture. A genuine volume texture would
    // need a 3D image built and bound, and it is NOT modelled: it takes the
    // report below rather than a silently wrong picture.
    const bool samples_2d = tf.dimension == fetch_dimension::d2 ||
                            tf.dimension == fetch_dimension::d3_or_stacked;
    if (!samples_2d || tf.src_reg >= m_temp_vars.size() ||
        tf.dst_reg >= m_temp_vars.size()) {
        // A fetch that is not translated leaves its destination register
        // holding whatever was there before, and the shader carries on and
        // draws with it. That is this project's recurring failure wearing a
        // shader's clothes - reporting success for something that never
        // happened - so it is counted and named instead of being dropped in
        // silence. `translate()`'s caller reports the count.
        ++m_skipped_texture_fetches;
        return;
    }

    // Load the coordinate register and take the components the instruction's
    // SOURCE swizzle names - two bits per coordinate, absolute component
    // indices. The identity encoding for a 2D fetch is 0x04 (x, then y), which
    // is what a shader sampling an ordinary texture carries, so this is the
    // .xy it has always been unless the shader said otherwise.
    const uint32_t coords_vec4 = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpLoad,
             {m_vec4_type, coords_vec4, m_temp_vars[tf.src_reg]});
    const uint32_t vec2_type = m_b.type_vector(m_float_type, 2);
    const uint32_t coords = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpVectorShuffle,
             {vec2_type, coords, coords_vec4, coords_vec4,
              static_cast<uint32_t>(tf.src_swizzle & 0x3),
              static_cast<uint32_t>((tf.src_swizzle >> 2) & 0x3)});

    // Sample the texture. What this instruction wants of the sampler is
    // recorded against the slot before the binding is made, so a slot always
    // has an override by the time texture_filters() reads them back.
    if (m_texture_filters.find(tf.fetch_constant_index) ==
        m_texture_filters.end()) {
        sampler_override wanted;
        wanted.mag_filter = tf.mag_filter;
        wanted.min_filter = tf.min_filter;
        wanted.mip_filter = tf.mip_filter;
        wanted.aniso_filter = tf.aniso_filter;
        m_texture_filters[tf.fetch_constant_index] = wanted;
    }
    const uint32_t sampler = sampled_image_for(tf.fetch_constant_index);
    const uint32_t loaded = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpLoad,
             {m_sampled_image_type, loaded, sampler});
    const uint32_t result = m_b.allocate_id();
    m_b.emit(spirv_section::functions, spv::OpImageSampleImplicitLod,
             {m_vec4_type, result, loaded, coords});

    // WHITTY_FETCH_CONSTANT=r,g,b,a replaces every texture sample with that
    // constant, leaving the whole rest of the pipeline - geometry, blending,
    // resolves, the passes each draw lands in - exactly as it was. It answers
    // one question and no other: is a surface's colour coming from the sample?
    // A surface that stays the same colour with every texel forced to a
    // constant was never getting its colour from a texture, and no amount of
    // work on texture decode will change it. The sample is still emitted above
    // so the shader keeps its descriptor bindings and its validation shape.
    //
    // Both diagnostics below write the WHOLE destination register rather than
    // the components the instruction's destination swizzle names. That is
    // deliberate: their job is to make one value legible on the screen, and a
    // fetch that writes one component of a register would otherwise show
    // nothing at all.
    if (const uint32_t forced = forced_fetch_constant(); forced != 0) {
        m_b.emit(spirv_section::functions, spv::OpStore,
                 {m_temp_vars[tf.dst_reg], forced});
        return;
    }

    // WHITTY_SHOW_TEXCOORD=1 writes the COORDINATE the fetch was about to
    // sample with, as a colour, instead of the texel it would have got: red
    // carries u, green carries v.
    //
    // This is the other half of the constant above, and it separates the two
    // things a texture fetch can get wrong. The constant asks "does this
    // surface's colour come from a texture at all"; this asks "was it asking
    // for the right texel". A correct coordinate over a quad is a smooth ramp,
    // black in one corner running to yellow in the other, and anything that is
    // not a smooth ramp is the bug - a coordinate that varies along one axis
    // and not the other smears one line of texels across the surface, which is
    // exactly what a streaked picture looks like.
    //
    // Worth stating because it cost a day: a streaked picture and a wrongly
    // decoded texture look alike, and they are not the same fault. Dump the
    // decoded textures with WHITTY_TEXTURE_PPM before believing either.
    if (show_texcoord()) {
        const uint32_t zero = m_b.constant_float(0.0f);
        const uint32_t one = m_b.constant_float(1.0f);
        const uint32_t u = m_b.allocate_id();
        m_b.emit(spirv_section::functions, spv::OpCompositeExtract,
                 {m_float_type, u, coords, 0});
        const uint32_t v = m_b.allocate_id();
        m_b.emit(spirv_section::functions, spv::OpCompositeExtract,
                 {m_float_type, v, coords, 1});
        const uint32_t shown = m_b.allocate_id();
        m_b.emit(spirv_section::functions, spv::OpCompositeConstruct,
                 {m_vec4_type, shown, u, v, zero, one});
        m_b.emit(spirv_section::functions, spv::OpStore,
                 {m_temp_vars[tf.dst_reg], shown});
        return;
    }

    store_fetch_result(m_temp_vars[tf.dst_reg], result, tf.dst_swizzle);
}

std::vector<uint32_t> build_rectangle_geometry_shader(
    const std::vector<uint32_t>& interpolators) {
    spirv_builder b;
    const uint32_t main_id = b.allocate_id();
    const uint32_t label = b.allocate_id();
    const uint32_t in_position = b.allocate_id();
    const uint32_t out_position = b.allocate_id();
    // One input and one output per interpolator the vertex shader exports.
    std::vector<uint32_t> in_vars, out_vars;
    in_vars.reserve(interpolators.size());
    out_vars.reserve(interpolators.size());
    for (std::size_t i = 0; i < interpolators.size(); ++i) {
        in_vars.push_back(b.allocate_id());
        out_vars.push_back(b.allocate_id());
    }

    b.emit(spirv_section::capabilities, spv::OpCapability,
           {spv::CapabilityShader});
    b.emit(spirv_section::capabilities, spv::OpCapability,
           {spv::CapabilityGeometry});
    b.emit(spirv_section::memory_model, spv::OpMemoryModel,
           {spv::AddressingModelLogical, spv::MemoryModelGLSL450});
    std::vector<uint32_t> entry = {spv::ExecutionModelGeometry, main_id};
    for (uint32_t w : spirv_builder::string_words("main")) entry.push_back(w);
    entry.push_back(in_position);
    entry.push_back(out_position);
    for (uint32_t var : in_vars) entry.push_back(var);
    for (uint32_t var : out_vars) entry.push_back(var);
    b.emit(spirv_section::entry_points, spv::OpEntryPoint, entry);
    // Triangles in - the three vertices of one rectangle - and a four-vertex
    // triangle strip out, once per primitive.
    b.emit(spirv_section::execution_modes, spv::OpExecutionMode,
           {main_id, spv::ExecutionModeTriangles});
    b.emit(spirv_section::execution_modes, spv::OpExecutionMode,
           {main_id, spv::ExecutionModeInvocations, 1});
    b.emit(spirv_section::execution_modes, spv::OpExecutionMode,
           {main_id, spv::ExecutionModeOutputTriangleStrip});
    b.emit(spirv_section::execution_modes, spv::OpExecutionMode,
           {main_id, spv::ExecutionModeOutputVertices, 4});

    b.emit(spirv_section::decorations, spv::OpDecorate,
           {in_position, spv::DecorationBuiltIn, spv::BuiltInPosition});
    b.emit(spirv_section::decorations, spv::OpDecorate,
           {out_position, spv::DecorationBuiltIn, spv::BuiltInPosition});
    // The interpolator index is the location on both sides, which is how this
    // stage lines up with the vertex shader above it and the pixel shader
    // below without either knowing it is here.
    for (std::size_t i = 0; i < interpolators.size(); ++i) {
        b.emit(spirv_section::decorations, spv::OpDecorate,
               {in_vars[i], spv::DecorationLocation, interpolators[i]});
        b.emit(spirv_section::decorations, spv::OpDecorate,
               {out_vars[i], spv::DecorationLocation, interpolators[i]});
    }

    const uint32_t void_type = b.type_void();
    const uint32_t fn_type = b.type_function(void_type);
    const uint32_t float_type = b.type_float();
    const uint32_t vec4_type = b.type_vector(float_type, 4);
    const uint32_t bool_type = b.type_bool();
    const uint32_t bvec4_type = b.type_vector(bool_type, 4);
    // A geometry shader's inputs are per-vertex, so every one of them arrives
    // as an array - three entries for a triangle.
    const uint32_t vec4_array_type = b.type_array(vec4_type, b.constant_uint(3));
    const uint32_t in_array_ptr =
        b.type_pointer(spv::StorageClassInput, vec4_array_type);
    const uint32_t in_element_ptr =
        b.type_pointer(spv::StorageClassInput, vec4_type);
    const uint32_t out_ptr = b.type_pointer(spv::StorageClassOutput, vec4_type);
    b.emit(spirv_section::types, spv::OpVariable,
           {in_array_ptr, in_position, spv::StorageClassInput});
    b.emit(spirv_section::types, spv::OpVariable,
           {out_ptr, out_position, spv::StorageClassOutput});
    for (std::size_t i = 0; i < interpolators.size(); ++i) {
        b.emit(spirv_section::types, spv::OpVariable,
               {in_array_ptr, in_vars[i], spv::StorageClassInput});
        b.emit(spirv_section::types, spv::OpVariable,
               {out_ptr, out_vars[i], spv::StorageClassOutput});
    }

    b.emit(spirv_section::functions, spv::OpFunction,
           {void_type, main_id, spv::FunctionControlNone, fn_type});
    b.emit(spirv_section::functions, spv::OpLabel, {label});

    const auto binop = [&](uint32_t opcode, uint32_t type, uint32_t left,
                           uint32_t right) {
        const uint32_t id = b.allocate_id();
        b.emit(spirv_section::functions, opcode, {type, id, left, right});
        return id;
    };
    // One vertex of an input array.
    const auto load_vertex = [&](uint32_t var, uint32_t vertex) {
        const uint32_t ptr = b.allocate_id();
        b.emit(spirv_section::functions, spv::OpAccessChain,
               {in_element_ptr, ptr, var, b.constant_uint(vertex)});
        const uint32_t value = b.allocate_id();
        b.emit(spirv_section::functions, spv::OpLoad, {vec4_type, value, ptr});
        return value;
    };
    const auto component = [&](uint32_t vector, uint32_t index) {
        const uint32_t id = b.allocate_id();
        b.emit(spirv_section::functions, spv::OpCompositeExtract,
               {float_type, id, vector, index});
        return id;
    };
    // The squared length of an edge, in x and y only: the console's choice of
    // diagonal is a screen-space one, and a square root would not change which
    // of three values is largest.
    const auto edge_length_squared = [&](uint32_t from, uint32_t to) {
        const uint32_t dx = binop(spv::OpFSub, float_type, component(to, 0),
                                  component(from, 0));
        const uint32_t dy = binop(spv::OpFSub, float_type, component(to, 1),
                                  component(from, 1));
        const uint32_t dx2 = binop(spv::OpFMul, float_type, dx, dx);
        const uint32_t dy2 = binop(spv::OpFMul, float_type, dy, dy);
        return binop(spv::OpFAdd, float_type, dx2, dy2);
    };

    const uint32_t position[3] = {load_vertex(in_position, 0),
                                  load_vertex(in_position, 1),
                                  load_vertex(in_position, 2)};
    const uint32_t edge_12 = edge_length_squared(position[1], position[2]);
    const uint32_t edge_20 = edge_length_squared(position[2], position[0]);
    const uint32_t edge_01 = edge_length_squared(position[0], position[1]);
    // If 12 is the longest edge the strip starts at vertex 0; otherwise if 20
    // beats 01 it starts at 1, and if not, at 2.
    const uint32_t starts_at_0 =
        binop(spv::OpLogicalAnd, bool_type,
              binop(spv::OpFOrdGreaterThan, bool_type, edge_12, edge_20),
              binop(spv::OpFOrdGreaterThan, bool_type, edge_12, edge_01));
    const uint32_t starts_at_1 =
        binop(spv::OpFOrdGreaterThan, bool_type, edge_20, edge_01);
    // Before SPIR-V 1.4 OpSelect is strictly per component, so choosing between
    // two vec4s needs the condition broadcast to a bvec4 rather than a scalar
    // bool - which the Khronos validator rejects outright.
    const auto splat = [&](uint32_t condition) {
        const uint32_t id = b.allocate_id();
        b.emit(spirv_section::functions, spv::OpCompositeConstruct,
               {bvec4_type, id, condition, condition, condition, condition});
        return id;
    };
    const uint32_t rotate_0 = splat(starts_at_0);
    const uint32_t rotate_1 = splat(starts_at_1);

    // One per-vertex value - a position or an interpolator - reordered into the
    // strip the winning rotation asks for, with the mirrored fourth appended.
    const auto in_strip_order = [&](const uint32_t source[3]) {
        std::vector<uint32_t> strip(4, 0);
        for (uint32_t i = 0; i < 3; ++i) {
            const uint32_t if_1 = b.allocate_id();
            b.emit(spirv_section::functions, spv::OpSelect,
                   {vec4_type, if_1, rotate_1, source[(1 + i) % 3],
                    source[(2 + i) % 3]});
            const uint32_t chosen = b.allocate_id();
            b.emit(spirv_section::functions, spv::OpSelect,
                   {vec4_type, chosen, rotate_0, source[i], if_1});
            strip[i] = chosen;
        }
        // The fourth: the first vertex mirrored across the edge the other two
        // span, which is (second - first) + third.
        const uint32_t along =
            binop(spv::OpFSub, vec4_type, strip[1], strip[0]);
        strip[3] = binop(spv::OpFAdd, vec4_type, along, strip[2]);
        return strip;
    };

    const std::vector<uint32_t> position_strip = in_strip_order(position);
    std::vector<std::vector<uint32_t>> interpolator_strips;
    interpolator_strips.reserve(interpolators.size());
    for (std::size_t i = 0; i < interpolators.size(); ++i) {
        const uint32_t source[3] = {load_vertex(in_vars[i], 0),
                                    load_vertex(in_vars[i], 1),
                                    load_vertex(in_vars[i], 2)};
        interpolator_strips.push_back(in_strip_order(source));
    }

    for (uint32_t vertex = 0; vertex < 4; ++vertex) {
        b.emit(spirv_section::functions, spv::OpStore,
               {out_position, position_strip[vertex]});
        for (std::size_t i = 0; i < interpolators.size(); ++i)
            b.emit(spirv_section::functions, spv::OpStore,
                   {out_vars[i], interpolator_strips[i][vertex]});
        b.emit(spirv_section::functions, spv::OpEmitVertex, {});
    }
    b.emit(spirv_section::functions, spv::OpEndPrimitive, {});
    b.emit(spirv_section::functions, spv::OpReturn, {});
    b.emit(spirv_section::functions, spv::OpFunctionEnd, {});
    return b.assemble();
}

bool point_sprite_params::operator<(
    const point_sprite_params& other) const noexcept {
    return std::tie(constant_diameter[0], constant_diameter[1], min_diameter,
                    max_diameter, viewport[0], viewport[1], from_vertex) <
           std::tie(other.constant_diameter[0], other.constant_diameter[1],
                    other.min_diameter, other.max_diameter, other.viewport[0],
                    other.viewport[1], other.from_vertex);
}

std::vector<uint32_t> build_point_geometry_shader(
    const std::vector<uint32_t>& interpolators,
    const point_sprite_params& params) {
    spirv_builder b;
    const uint32_t main_id = b.allocate_id();
    const uint32_t label = b.allocate_id();
    const uint32_t glsl_ext = b.allocate_id();
    const uint32_t in_position = b.allocate_id();
    const uint32_t out_position = b.allocate_id();
    const uint32_t out_coord = b.allocate_id();
    const uint32_t in_size = params.from_vertex ? b.allocate_id() : 0;
    std::vector<uint32_t> in_vars, out_vars;
    for (std::size_t i = 0; i < interpolators.size(); ++i) {
        in_vars.push_back(b.allocate_id());
        out_vars.push_back(b.allocate_id());
    }

    b.emit(spirv_section::capabilities, spv::OpCapability,
           {spv::CapabilityShader});
    b.emit(spirv_section::capabilities, spv::OpCapability,
           {spv::CapabilityGeometry});
    std::vector<uint32_t> import = {glsl_ext};
    for (uint32_t w : spirv_builder::string_words("GLSL.std.450"))
        import.push_back(w);
    b.emit(spirv_section::ext_imports, spv::OpExtInstImport, import);
    b.emit(spirv_section::memory_model, spv::OpMemoryModel,
           {spv::AddressingModelLogical, spv::MemoryModelGLSL450});
    std::vector<uint32_t> entry = {spv::ExecutionModelGeometry, main_id};
    for (uint32_t w : spirv_builder::string_words("main")) entry.push_back(w);
    entry.push_back(in_position);
    entry.push_back(out_position);
    entry.push_back(out_coord);
    if (in_size != 0) entry.push_back(in_size);
    for (uint32_t var : in_vars) entry.push_back(var);
    for (uint32_t var : out_vars) entry.push_back(var);
    b.emit(spirv_section::entry_points, spv::OpEntryPoint, entry);
    // One point in, a four-vertex triangle strip out.
    b.emit(spirv_section::execution_modes, spv::OpExecutionMode,
           {main_id, spv::ExecutionModeInputPoints});
    b.emit(spirv_section::execution_modes, spv::OpExecutionMode,
           {main_id, spv::ExecutionModeInvocations, 1});
    b.emit(spirv_section::execution_modes, spv::OpExecutionMode,
           {main_id, spv::ExecutionModeOutputTriangleStrip});
    b.emit(spirv_section::execution_modes, spv::OpExecutionMode,
           {main_id, spv::ExecutionModeOutputVertices, 4});

    b.emit(spirv_section::decorations, spv::OpDecorate,
           {in_position, spv::DecorationBuiltIn, spv::BuiltInPosition});
    b.emit(spirv_section::decorations, spv::OpDecorate,
           {out_position, spv::DecorationBuiltIn, spv::BuiltInPosition});
    b.emit(spirv_section::decorations, spv::OpDecorate,
           {out_coord, spv::DecorationLocation,
            shader_translator::kPointCoordLocation});
    if (in_size != 0)
        b.emit(spirv_section::decorations, spv::OpDecorate,
               {in_size, spv::DecorationLocation,
                shader_translator::kPointSizeLocation});
    for (std::size_t i = 0; i < interpolators.size(); ++i) {
        b.emit(spirv_section::decorations, spv::OpDecorate,
               {in_vars[i], spv::DecorationLocation, interpolators[i]});
        b.emit(spirv_section::decorations, spv::OpDecorate,
               {out_vars[i], spv::DecorationLocation, interpolators[i]});
    }

    const uint32_t void_type = b.type_void();
    const uint32_t fn_type = b.type_function(void_type);
    const uint32_t float_type = b.type_float();
    const uint32_t vec2_type = b.type_vector(float_type, 2);
    const uint32_t vec4_type = b.type_vector(float_type, 4);
    // A geometry shader's inputs are per-vertex arrays; a point list gives one.
    const uint32_t vec4_array_type = b.type_array(vec4_type, b.constant_uint(1));
    const uint32_t in_array_ptr =
        b.type_pointer(spv::StorageClassInput, vec4_array_type);
    const uint32_t in_element_ptr =
        b.type_pointer(spv::StorageClassInput, vec4_type);
    const uint32_t out_ptr = b.type_pointer(spv::StorageClassOutput, vec4_type);
    const uint32_t out_coord_ptr =
        b.type_pointer(spv::StorageClassOutput, vec2_type);
    b.emit(spirv_section::types, spv::OpVariable,
           {in_array_ptr, in_position, spv::StorageClassInput});
    b.emit(spirv_section::types, spv::OpVariable,
           {out_ptr, out_position, spv::StorageClassOutput});
    b.emit(spirv_section::types, spv::OpVariable,
           {out_coord_ptr, out_coord, spv::StorageClassOutput});
    if (in_size != 0)
        b.emit(spirv_section::types, spv::OpVariable,
               {in_array_ptr, in_size, spv::StorageClassInput});
    for (std::size_t i = 0; i < interpolators.size(); ++i) {
        b.emit(spirv_section::types, spv::OpVariable,
               {in_array_ptr, in_vars[i], spv::StorageClassInput});
        b.emit(spirv_section::types, spv::OpVariable,
               {out_ptr, out_vars[i], spv::StorageClassOutput});
    }

    b.emit(spirv_section::functions, spv::OpFunction,
           {void_type, main_id, spv::FunctionControlNone, fn_type});
    b.emit(spirv_section::functions, spv::OpLabel, {label});

    const auto binop = [&](uint32_t opcode, uint32_t type, uint32_t left,
                           uint32_t right) {
        const uint32_t id = b.allocate_id();
        b.emit(spirv_section::functions, opcode, {type, id, left, right});
        return id;
    };
    const auto load_first = [&](uint32_t var) {
        const uint32_t ptr = b.allocate_id();
        b.emit(spirv_section::functions, spv::OpAccessChain,
               {in_element_ptr, ptr, var, b.constant_uint(0)});
        const uint32_t value = b.allocate_id();
        b.emit(spirv_section::functions, spv::OpLoad, {vec4_type, value, ptr});
        return value;
    };
    const auto component = [&](uint32_t vector, uint32_t index) {
        const uint32_t id = b.allocate_id();
        b.emit(spirv_section::functions, spv::OpCompositeExtract,
               {float_type, id, vector, index});
        return id;
    };

    const uint32_t position = load_first(in_position);
    const uint32_t px = component(position, 0);
    const uint32_t py = component(position, 1);
    const uint32_t pz = component(position, 2);
    const uint32_t pw = component(position, 3);

    // The sprite's half-size in clip space, per axis. A diameter in pixels is
    // half a diameter in normalised device coordinates per viewport half-extent
    // - the halving for diameter-to-radius and the doubling for the NDC's own
    // half-extent cancel, so it is simply diameter / extent - and multiplying by
    // w undoes the perspective divide still to come.
    uint32_t diameter[2] = {b.constant_float(params.constant_diameter[0]),
                            b.constant_float(params.constant_diameter[1])};
    if (in_size != 0) {
        uint32_t exported = component(load_first(in_size), 0);
        // Clamped to the range the register gives, but only when it names one:
        // a title that never writes PA_SU_POINT_MINMAX leaves it at zero, and
        // clamping to [0, 0] would make every sprite vanish.
        if (params.max_diameter > params.min_diameter) {
            const uint32_t clamped = b.allocate_id();
            b.emit(spirv_section::functions, spv::OpExtInst,
                   {float_type, clamped, glsl_ext, glsl::FClamp, exported,
                    b.constant_float(params.min_diameter),
                    b.constant_float(params.max_diameter)});
            exported = clamped;
        }
        diameter[0] = exported;
        diameter[1] = exported;
    }
    uint32_t radius[2];
    for (uint32_t axis = 0; axis < 2; ++axis) {
        const float extent = params.viewport[axis] > 0.0f
                                 ? params.viewport[axis]
                                 : 1.0f;
        const uint32_t scaled =
            binop(spv::OpFMul, float_type, diameter[axis],
                  b.constant_float(1.0f / extent));
        radius[axis] = binop(spv::OpFMul, float_type, scaled, pw);
    }

    // The four corners, as a triangle strip: -x-y, -x+y, +x-y, +x+y. The sprite
    // coordinate is 0 on the low side of each axis and 1 on the high side, and
    // because the position has already been mapped into Vulkan's clip space -
    // where +y is DOWN - that puts the coordinate's origin at the sprite's top
    // left, which is where the console puts it.
    const int corner[4][2] = {{-1, -1}, {-1, 1}, {1, -1}, {1, 1}};
    std::vector<uint32_t> interpolator_values;
    interpolator_values.reserve(in_vars.size());
    for (uint32_t var : in_vars) interpolator_values.push_back(load_first(var));
    for (const auto& sign : corner) {
        uint32_t xy[2] = {px, py};
        for (uint32_t axis = 0; axis < 2; ++axis)
            xy[axis] = binop(sign[axis] > 0 ? spv::OpFAdd : spv::OpFSub,
                             float_type, xy[axis], radius[axis]);
        const uint32_t moved = b.allocate_id();
        b.emit(spirv_section::functions, spv::OpCompositeConstruct,
               {vec4_type, moved, xy[0], xy[1], pz, pw});
        b.emit(spirv_section::functions, spv::OpStore, {out_position, moved});
        const uint32_t coord = b.constant_composite(
            vec2_type, {b.constant_float(sign[0] > 0 ? 1.0f : 0.0f),
                        b.constant_float(sign[1] > 0 ? 1.0f : 0.0f)});
        b.emit(spirv_section::functions, spv::OpStore, {out_coord, coord});
        for (std::size_t i = 0; i < out_vars.size(); ++i)
            b.emit(spirv_section::functions, spv::OpStore,
                   {out_vars[i], interpolator_values[i]});
        b.emit(spirv_section::functions, spv::OpEmitVertex, {});
    }
    b.emit(spirv_section::functions, spv::OpEndPrimitive, {});
    b.emit(spirv_section::functions, spv::OpReturn, {});
    b.emit(spirv_section::functions, spv::OpFunctionEnd, {});
    return b.assemble();
}

} // namespace whitty_xenon::gpu
