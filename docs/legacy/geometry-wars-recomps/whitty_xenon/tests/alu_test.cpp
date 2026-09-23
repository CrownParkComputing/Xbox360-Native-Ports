// Unit tests for the ALU instruction decoder.
//
// An ALU instruction packs a lot into three dwords - two co-issued operations,
// their destinations and masks, and three source operands each with a register,
// swizzle and negate - so the risk is a field decoded from the wrong bits. The
// instruction under test is assembled here from symbolic fields by OR-ing them
// into place from the documented bit positions, independently of the decoder,
// and every field is read back. The source-register unpacking (temp index vs
// relative/absolute flags) and the component-relative swizzle helper, the two
// non-obvious parts, get their own checks.
#include "whitty_xenon/gpu/alu.h"

#include <cassert>
#include <cstdint>
#include <cstdio>

using namespace whitty_xenon::gpu;

namespace {

// Fields of an ALU instruction, packed independently of the decoder.
struct alu_fields {
    uint32_t vector_dest = 0, scalar_dest = 0;
    uint32_t vector_write_mask = 0, scalar_write_mask = 0;
    uint32_t vector_clamp = 0, scalar_clamp = 0;
    uint32_t is_export = 0;
    alu_vector_opcode vector_opcode = alu_vector_opcode::add;
    alu_scalar_opcode scalar_opcode = alu_scalar_opcode::adds;
    uint32_t is_predicated = 0, predicate_condition = 0;
    uint32_t src_reg[3] = {0, 0, 0};   // src1, src2, src3
    uint32_t src_swiz[3] = {0, 0, 0};
    uint32_t src_sel[3] = {0, 0, 0};
    uint32_t src_negate[3] = {0, 0, 0};
    // Constant addressing: two "this operand is addressed" bits shared between
    // up to three constant operands, and one bit saying whether "addressed"
    // means a0 (the address register) or aL (the loop register).
    uint32_t const_0_rel_abs = 0, const_1_rel_abs = 0;
    uint32_t address_register_relative = 0;
};

void pack(const alu_fields& f, uint32_t out[3]) {
    out[0] = (f.vector_dest & 0x3F) | ((f.scalar_dest & 0x3F) << 8) |
             ((f.is_export & 1) << 15) | ((f.vector_write_mask & 0xF) << 16) |
             ((f.scalar_write_mask & 0xF) << 20) | ((f.vector_clamp & 1) << 24) |
             ((f.scalar_clamp & 1) << 25) |
             ((static_cast<uint32_t>(f.scalar_opcode) & 0x3F) << 26);
    out[1] = (f.src_swiz[2] & 0xFF) | ((f.src_swiz[1] & 0xFF) << 8) |
             ((f.src_swiz[0] & 0xFF) << 16) | ((f.src_negate[2] & 1) << 24) |
             ((f.src_negate[1] & 1) << 25) | ((f.src_negate[0] & 1) << 26) |
             ((f.predicate_condition & 1) << 27) | ((f.is_predicated & 1) << 28) |
             ((f.address_register_relative & 1) << 29) |
             ((f.const_1_rel_abs & 1) << 30) | ((f.const_0_rel_abs & 1) << 31);
    out[2] = (f.src_reg[2] & 0xFF) | ((f.src_reg[1] & 0xFF) << 8) |
             ((f.src_reg[0] & 0xFF) << 16) |
             ((static_cast<uint32_t>(f.vector_opcode) & 0x1F) << 24) |
             ((f.src_sel[2] & 1) << 29) | ((f.src_sel[1] & 1) << 30) |
             ((f.src_sel[0] & 1) << 31);
}

void test_full_instruction_round_trip() {
    alu_fields f;
    f.vector_opcode = alu_vector_opcode::mad;
    f.scalar_opcode = alu_scalar_opcode::muls;
    f.vector_dest = 5;
    f.scalar_dest = 9;
    f.vector_write_mask = 0b1110;
    f.scalar_write_mask = 0b0001;
    f.vector_clamp = 1;
    f.is_predicated = 1;
    f.predicate_condition = 1;
    // src1 temp reg 3, src2 constant 0x20, src3 temp reg 7 negated.
    f.src_reg[0] = 3;    f.src_sel[0] = 1; f.src_swiz[0] = 0x00;
    f.src_reg[1] = 0x20; f.src_sel[1] = 0; f.src_swiz[1] = 0x1B;
    f.src_reg[2] = 7;    f.src_sel[2] = 1; f.src_swiz[2] = 0x00; f.src_negate[2] = 1;

    uint32_t words[3];
    pack(f, words);
    const alu_instruction alu = decode_alu_instruction(words);

    assert(alu.vector_opcode == alu_vector_opcode::mad);
    assert(alu.scalar_opcode == alu_scalar_opcode::muls);
    assert(alu.vector_dest == 5);
    assert(alu.scalar_dest == 9);
    assert(alu.vector_write_mask == 0b1110);
    assert(alu.scalar_write_mask == 0b0001);
    assert(alu.vector_clamp && !alu.scalar_clamp);
    assert(alu.is_predicated && alu.predicate_condition);
    assert(!alu.is_export);

    assert(alu.sources[0].is_temp && alu.sources[0].reg == 3);
    assert(!alu.sources[1].is_temp && alu.sources[1].reg == 0x20);
    assert(alu.sources[1].swizzle == 0x1B);
    assert(alu.sources[2].is_temp && alu.sources[2].reg == 7);
    assert(alu.sources[2].negate);
    assert(!alu.sources[0].negate && !alu.sources[1].negate);
}

void test_export_flag() {
    alu_fields f;
    f.is_export = 1;
    f.vector_dest = 0; // export target 0 (e.g. position / color)
    uint32_t words[3];
    pack(f, words);
    assert(decode_alu_instruction(words).is_export);
}

void test_source_register_unpacking() {
    // A temp register field: low 6 bits index, bit 6 relative, bit 7 absolute.
    alu_source s;
    s.reg = 0x0A; // temp 10, no flags
    assert(s.temp_reg() == 10 && !s.temp_relative() && !s.temp_absolute());
    s.reg = 0x40 | 0x05; // temp 5, relative
    assert(s.temp_reg() == 5 && s.temp_relative() && !s.temp_absolute());
    s.reg = 0x80 | 0x11; // temp 17, absolute
    assert(s.temp_reg() == 17 && !s.temp_relative() && s.temp_absolute());
}

void test_constant_relative_addressing() {
    // Which of the two "addressed" bits an operand reads is NOT positional. It
    // is min(number of constant operands before this one, 1) - so the first
    // constant in the instruction takes const_0, and every later one takes
    // const_1, whatever slot it sits in. Reading them positionally gets the
    // wrong bit for any instruction whose first source is a temporary, which
    // is most of them.
    {
        // src1 temp, src2 constant: src2 is the FIRST constant, so it reads
        // const_0 - not const_1, which its position would suggest.
        alu_fields f;
        f.src_sel[0] = 1; // src1 is a temp
        f.src_sel[1] = 0; // src2 is a constant
        f.src_sel[2] = 1; // src3 is a temp
        f.const_0_rel_abs = 1;
        f.address_register_relative = 1;
        uint32_t words[3];
        pack(f, words);
        const alu_instruction a = decode_alu_instruction(words);
        assert(a.sources[1].const_address_relative);
    }
    {
        // Both src1 and src2 constants: src1 takes const_0, src2 const_1.
        alu_fields f;
        f.const_0_rel_abs = 0;
        f.const_1_rel_abs = 1;
        f.address_register_relative = 1;
        uint32_t words[3];
        pack(f, words);
        const alu_instruction a = decode_alu_instruction(words);
        assert(!a.sources[0].const_address_relative);
        assert(a.sources[1].const_address_relative);
    }
    {
        // Addressed, but NOT by the address register: that is the loop
        // register aL, which is a different thing entirely. Reporting it as a0
        // would index the constant bank by whatever the last maxas left there.
        alu_fields f;
        f.const_0_rel_abs = 1;
        f.address_register_relative = 0;
        uint32_t words[3];
        pack(f, words);
        const alu_instruction a = decode_alu_instruction(words);
        assert(!a.sources[0].const_address_relative);
    }
    {
        // A TEMPORARY register is never a0-relative - the encoding has no way
        // to say so - however the constant bits happen to be set.
        alu_fields f;
        f.src_sel[0] = 1;
        f.const_0_rel_abs = 1;
        f.address_register_relative = 1;
        uint32_t words[3];
        pack(f, words);
        const alu_instruction a = decode_alu_instruction(words);
        assert(!a.sources[0].const_address_relative);
    }
    {
        // Nothing set: an ordinary literal constant index.
        alu_fields f;
        uint32_t words[3];
        pack(f, words);
        const alu_instruction a = decode_alu_instruction(words);
        for (const alu_source& s : a.sources)
            assert(!s.const_address_relative);
    }
}

void test_swizzle_component_helper() {
    // Identity swizzle (0) maps each component to itself.
    for (uint32_t c = 0; c < 4; ++c)
        assert(alu_instruction::swizzled_component(0, c) == c);

    // A replicate-x swizzle maps every component to component 0.
    const uint8_t replicate_x = 0x6C; // fields: x=0, y=3, z=2, w=1
    for (uint32_t c = 0; c < 4; ++c)
        assert(alu_instruction::swizzled_component(replicate_x, c) == 0);
}

} // namespace

int main() {
    test_full_instruction_round_trip();
    test_export_flag();
    test_source_register_unpacking();
    test_constant_relative_addressing();
    test_swizzle_component_helper();
    std::printf("alu_test: all checks passed\n");
    return 0;
}
