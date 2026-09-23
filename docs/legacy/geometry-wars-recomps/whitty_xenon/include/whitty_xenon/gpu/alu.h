// alu.h - decoding Xenos ALU instructions.
//
// The blocks a shader's control flow dispatches are runs of ALU and fetch
// instructions. The ALU ones are the arithmetic core of a shader, and each is a
// co-issued pair: one vector operation (operating on all four components) and
// one scalar operation (on a single component), packed together into three
// dwords. This decodes that packing into the operations, their destinations and
// write masks, and their three source operands with the register, swizzle and
// negate for each.
//
// The layout is dense - a source operand's register field, for instance, packs
// a temporary-register index with relative- and absolute-addressing flags - so
// the decode is taken field for field from Xenia's AluInstruction, and the
// operand-unpacking helpers mirror its accessors.
#pragma once

#include <cstdint>

namespace whitty_xenon::gpu {

// Vector ALU opcodes (5-bit field). Values from Xenia's AluVectorOpcode.
enum class alu_vector_opcode : uint8_t {
    add = 0, mul = 1, max = 2, min = 3,
    seq = 4, sgt = 5, sge = 6, sne = 7,
    frc = 8, trunc = 9, floor = 10, mad = 11,
    cnd_eq = 12, cnd_ge = 13, cnd_gt = 14, dp4 = 15,
    dp3 = 16, dp2_add = 17, cube = 18, max4 = 19,
    setp_eq_push = 20, setp_ne_push = 21, setp_gt_push = 22, setp_ge_push = 23,
    kill_eq = 24, kill_gt = 25, kill_ge = 26, kill_ne = 27,
    dst = 28, max_a = 29,
};

// Scalar ALU opcodes (6-bit field). Values from Xenia's AluScalarOpcode.
enum class alu_scalar_opcode : uint8_t {
    adds = 0, adds_prev = 1, muls = 2, muls_prev = 3, muls_prev2 = 4,
    maxs = 5, mins = 6, seqs = 7, sgts = 8, sges = 9, snes = 10,
    frcs = 11, truncs = 12, floors = 13, exp = 14, logc = 15, log = 16,
    rcpc = 17, rcpf = 18, rcp = 19, rsqc = 20, rsqf = 21, rsq = 22,
    max_as = 23, max_asf = 24, subs = 25, subs_prev = 26,
    setp_eq = 27, setp_ne = 28, setp_gt = 29, setp_ge = 30,
    setp_inv = 31, setp_pop = 32, setp_clr = 33, setp_rstr = 34,
    kills_eq = 35, kills_gt = 36, kills_ge = 37, kills_ne = 38, kills_one = 39,
    sqrt = 40, mulsc0 = 42, mulsc1 = 43, addsc0 = 44, addsc1 = 45,
    subsc0 = 46, subsc1 = 47, sin = 48, cos = 49, retain_prev = 50,
};

// One source operand of an ALU instruction.
struct alu_source {
    uint8_t reg{0};      // raw register field
    uint8_t swizzle{0};  // 2 bits per component, component-relative
    bool is_temp{false}; // temporary register (true) or constant (false)
    bool negate{false};
    // A CONSTANT operand whose index is relative to the ADDRESS REGISTER a0:
    // `c[a0 + reg]` rather than `c[reg]`. Meaningless when is_temp - a
    // temporary register can be aL-relative but never a0-relative.
    //
    // This is how a shader reaches a matrix palette, a light array or
    // per-instance data: one constant slot names the base and a0, written by
    // maxas, names the element. Read as a literal index instead and every
    // vertex transformed through it uses the wrong matrix.
    bool const_address_relative{false};
    // The same operand form addressed by the LOOP register aL instead:
    // `c[aL + reg]`. The two are decoded from the same "is addressed" bit and
    // told apart by a second one, so an operand is at most one of them.
    //
    // This is how a loop walks an array of constants - a bone palette, a light
    // list, the taps of a blur kernel - one element per iteration. With aL
    // pinned at zero every iteration reads element zero, which is not a subtle
    // error: a four-tap blur becomes four copies of one tap, and a skinning
    // shader puts every bone at the first bone's transform.
    bool const_address_loop_relative{false};

    // Temporary-register unpacking (meaningful when is_temp).
    uint32_t temp_reg() const noexcept { return reg & 0x3F; }
    bool temp_relative() const noexcept { return (reg & 0x40) != 0; }
    bool temp_absolute() const noexcept { return (reg & 0x80) != 0; }
};

// A decoded ALU instruction: the co-issued vector and scalar operations.
struct alu_instruction {
    alu_vector_opcode vector_opcode{alu_vector_opcode::add};
    alu_scalar_opcode scalar_opcode{alu_scalar_opcode::adds};

    uint8_t vector_dest{0};
    uint8_t scalar_dest{0};
    uint8_t vector_write_mask{0}; // 4 bits, one per component
    uint8_t scalar_write_mask{0};
    bool vector_clamp{false};
    bool scalar_clamp{false};

    bool is_export{false};     // writing to an export rather than a register
    bool is_predicated{false};
    bool predicate_condition{false};

    // sources[0] is src1, [1] is src2, [2] is src3.
    alu_source sources[3]{};

    // The absolute source component index a destination component reads, given
    // a component-relative swizzle (matches Xenia's GetSwizzledComponentIndex).
    static uint32_t swizzled_component(uint8_t swizzle,
                                       uint32_t component) noexcept {
        return ((swizzle >> (2 * component)) + component) & 3;
    }
};

// Decodes a three-dword ALU instruction (host dword order).
alu_instruction decode_alu_instruction(const uint32_t* dwords) noexcept;

} // namespace whitty_xenon::gpu
