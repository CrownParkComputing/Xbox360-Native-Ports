// Unit tests for the shader control-flow disassembler.
//
// The subtle part is the bound: the CF program's length is not stored anywhere,
// it is inferred from the first instruction block an exec points at, and the
// walk must stop there rather than decoding ALU/fetch data as if it were more
// control flow. So the tests build shaders whose CF program is a known length
// and assert that exactly that many CF instructions come back. The microcode is
// assembled here from symbolic fields by the inverse of the hardware's packing,
// so the encoder in the test and the decoder under test share no code.
#include "whitty_xenon/gpu/shader.h"

#include <array>
#include <cassert>
#include <cstdint>
#include <cstdio>
#include <string>
#include <vector>

using namespace whitty_xenon::gpu;

namespace {

// One CF instruction's two words, built from symbolic fields.
struct cf_words {
    uint32_t dword_0;
    uint32_t dword_1; // 16-bit
};

cf_words make_exec(cf_opcode opcode, uint32_t address, uint32_t count,
                   uint32_t sequence) {
    cf_words w;
    w.dword_0 = (address & 0xFFF) | ((count & 0x7) << 12) |
                ((sequence & 0xFFF) << 16);
    w.dword_1 = (static_cast<uint32_t>(opcode) & 0xF) << 12;
    return w;
}
cf_words make_simple(cf_opcode opcode) {
    return cf_words{0, (static_cast<uint32_t>(opcode) & 0xF) << 12};
}

// The inverse of the hardware's unpack: two CF instructions into three dwords.
void pack_pair(const cf_words& a, const cf_words& b, std::vector<uint32_t>& out) {
    out.push_back(a.dword_0);
    out.push_back((a.dword_1 & 0xFFFF) | (b.dword_0 << 16));
    out.push_back((b.dword_0 >> 16) | (b.dword_1 << 16));
}

// Appends a filler instruction block (three dwords the CF decoder must not read
// as control flow).
void append_block(std::vector<uint32_t>& out) {
    out.push_back(0xDEAD0000);
    out.push_back(0xDEAD0001);
    out.push_back(0xDEAD0002);
}

shader_control_flow disassemble(const std::vector<uint32_t>& ucode) {
    shader_control_flow out;
    std::string error;
    const bool ok =
        disassemble_control_flow(ucode.data(), ucode.size(), out, error);
    assert(ok && error.empty());
    return out;
}

void test_opcode_classification() {
    assert(is_exec_opcode(cf_opcode::exec));
    assert(is_exec_opcode(cf_opcode::cond_exec_pred_clean_end));
    assert(!is_exec_opcode(cf_opcode::nop));
    assert(!is_exec_opcode(cf_opcode::alloc));

    assert(ends_shader(cf_opcode::exec_end));
    assert(ends_shader(cf_opcode::cond_exec_pred_end));
    assert(!ends_shader(cf_opcode::exec));
    assert(!ends_shader(cf_opcode::nop));
}

void test_single_group_program() {
    // One CF group: an exec pointing at block 1, then an exec_end at block 2.
    // The CF program is one group, so exactly two CF instructions come back and
    // the two filler blocks are never decoded.
    std::vector<uint32_t> ucode;
    pack_pair(make_exec(cf_opcode::exec, 1, 2, 0),
              make_exec(cf_opcode::exec_end, 2, 1, 0), ucode);
    append_block(ucode); // block at group 1
    append_block(ucode); // block at group 2

    const auto cf = disassemble(ucode);
    assert(cf.instruction_block_start == 1);
    assert(cf.instructions.size() == 2);

    assert(cf.instructions[0].opcode == cf_opcode::exec);
    assert(cf.instructions[0].exec_address == 1);
    assert(cf.instructions[0].exec_count == 2);
    assert(!ends_shader(cf.instructions[0].opcode));

    assert(cf.instructions[1].opcode == cf_opcode::exec_end);
    assert(cf.instructions[1].exec_address == 2);
    assert(cf.instructions[1].exec_count == 1);
    assert(ends_shader(cf.instructions[1].opcode));
}

void test_two_group_program_bounds_correctly() {
    // Two CF groups (four CF instructions), then the instruction blocks. The
    // first exec points at group 2, which is where the CF program must end.
    std::vector<uint32_t> ucode;
    pack_pair(make_simple(cf_opcode::nop),
              make_exec(cf_opcode::exec, 2, 1, 0), ucode);   // group 0
    pack_pair(make_exec(cf_opcode::exec_end, 3, 1, 0),
              make_simple(cf_opcode::nop), ucode);           // group 1
    append_block(ucode);                                      // group 2
    append_block(ucode);                                      // group 3

    const auto cf = disassemble(ucode);
    assert(cf.instruction_block_start == 2);
    assert(cf.instructions.size() == 4); // both groups decoded, blocks not
    assert(cf.instructions[0].opcode == cf_opcode::nop);
    assert(cf.instructions[1].opcode == cf_opcode::exec &&
           cf.instructions[1].exec_address == 2);
    assert(cf.instructions[2].opcode == cf_opcode::exec_end &&
           cf.instructions[2].exec_address == 3);
    assert(cf.instructions[3].opcode == cf_opcode::nop);
}

void test_sequence_bits_decoded() {
    // Sequence: two instructions, the first ALU (bit 0 = 0), the second a fetch
    // (bit 0 = 1) -> bits 0b1000 == 0x8 for instruction index 1.
    std::vector<uint32_t> ucode;
    pack_pair(make_exec(cf_opcode::exec_end, 1, 2, 0x8),
              make_simple(cf_opcode::nop), ucode);
    append_block(ucode);
    const auto cf = disassemble(ucode);
    assert(cf.instructions[0].exec_sequence == 0x8);
}

void test_too_short_is_rejected() {
    std::array<uint32_t, 2> ucode{0, 0};
    shader_control_flow out;
    std::string error;
    assert(!disassemble_control_flow(ucode.data(), ucode.size(), out, error));
    assert(!error.empty());
    assert(!disassemble_control_flow(nullptr, 0, out, error));
}

} // namespace

int main() {
    test_opcode_classification();
    test_single_group_program();
    test_two_group_program_bounds_correctly();
    test_sequence_bits_decoded();
    test_too_short_is_rejected();
    std::printf("shader_test: all checks passed\n");
    return 0;
}
