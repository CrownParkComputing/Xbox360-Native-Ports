#include "whitty_xenon/gpu/alu.h"

namespace whitty_xenon::gpu {

alu_instruction decode_alu_instruction(const uint32_t* dwords) noexcept {
    const uint32_t d0 = dwords[0];
    const uint32_t d1 = dwords[1];
    const uint32_t d2 = dwords[2];

    alu_instruction alu;

    // dword 0: destinations, write masks, clamps, scalar opcode.
    alu.vector_dest = static_cast<uint8_t>(d0 & 0x3F);
    alu.scalar_dest = static_cast<uint8_t>((d0 >> 8) & 0x3F);
    alu.is_export = (d0 >> 15) & 0x1;
    alu.vector_write_mask = static_cast<uint8_t>((d0 >> 16) & 0xF);
    alu.scalar_write_mask = static_cast<uint8_t>((d0 >> 20) & 0xF);
    alu.vector_clamp = (d0 >> 24) & 0x1;
    alu.scalar_clamp = (d0 >> 25) & 0x1;
    alu.scalar_opcode = static_cast<alu_scalar_opcode>((d0 >> 26) & 0x3F);

    // dword 1: source swizzles, negates, predication.
    const uint8_t src3_swiz = static_cast<uint8_t>(d1 & 0xFF);
    const uint8_t src2_swiz = static_cast<uint8_t>((d1 >> 8) & 0xFF);
    const uint8_t src1_swiz = static_cast<uint8_t>((d1 >> 16) & 0xFF);
    const bool src3_negate = (d1 >> 24) & 0x1;
    const bool src2_negate = (d1 >> 25) & 0x1;
    const bool src1_negate = (d1 >> 26) & 0x1;
    alu.predicate_condition = (d1 >> 27) & 0x1;
    alu.is_predicated = (d1 >> 28) & 0x1;
    // The three bits above the predication flags say how a CONSTANT operand's
    // index is addressed. There are only two "is addressed" bits for three
    // possible constant operands, and which operand takes which is not
    // positional - it is min(number of constants before this one, 1), the rule
    // Xenia's AluInstruction::src_const_is_addressed spells out from the XNA
    // assembler's own error message ("when three constants are used in one
    // instruction, the second and third must either both be non-relative or
    // both be relative"). Assuming src1 takes bit 0 and src2 bit 1 reads the
    // wrong bit for every instruction whose first source is a temporary, which
    // is most of them.
    const bool address_register_relative = (d1 >> 29) & 0x1;
    const bool const_1_rel_abs = (d1 >> 30) & 0x1;
    const bool const_0_rel_abs = (d1 >> 31) & 0x1;

    // dword 2: source registers, selects, vector opcode.
    const uint8_t src3_reg = static_cast<uint8_t>(d2 & 0xFF);
    const uint8_t src2_reg = static_cast<uint8_t>((d2 >> 8) & 0xFF);
    const uint8_t src1_reg = static_cast<uint8_t>((d2 >> 16) & 0xFF);
    alu.vector_opcode = static_cast<alu_vector_opcode>((d2 >> 24) & 0x1F);
    const bool src3_sel = (d2 >> 29) & 0x1;
    const bool src2_sel = (d2 >> 30) & 0x1;
    const bool src1_sel = (d2 >> 31) & 0x1;

    alu.sources[0] = alu_source{src1_reg, src1_swiz, src1_sel, src1_negate};
    alu.sources[1] = alu_source{src2_reg, src2_swiz, src2_sel, src2_negate};
    alu.sources[2] = alu_source{src3_reg, src3_swiz, src3_sel, src3_negate};

    // Which of the two bits each operand reads, and then what "addressed"
    // means: a0-relative when the third bit is set, aL-relative (the loop
    // register) when it is not.
    const bool addressed[3] = {
        const_0_rel_abs,
        src1_sel ? const_0_rel_abs : const_1_rel_abs,
        (src1_sel && src2_sel) ? const_0_rel_abs : const_1_rel_abs,
    };
    for (uint32_t i = 0; i < 3; ++i) {
        const bool indexed = !alu.sources[i].is_temp && addressed[i];
        alu.sources[i].const_address_relative =
            indexed && address_register_relative;
        alu.sources[i].const_address_loop_relative =
            indexed && !address_register_relative;
    }
    return alu;
}

} // namespace whitty_xenon::gpu
