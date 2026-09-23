// Integration test for the whole-shader parser.
//
// This is the point where the four shader decoders meet, so the test builds a
// complete little shader - a control-flow program whose two exec blocks run one
// ALU instruction and one vertex fetch respectively - and checks that the parser
// follows the exec addresses to the right instruction groups and dispatches each
// to the right decoder off the sequence bits. The microcode is assembled from
// symbolic fields, sharing no code with the decoders.
#include "whitty_xenon/gpu/shader_program.h"

#include <cassert>
#include <cstdint>
#include <cstdio>
#include <string>
#include <vector>

using namespace whitty_xenon::gpu;

namespace {

// --- microcode assembly (inverse of the decoders' packing) ---------------
struct cf_words {
    uint32_t dword_0;
    uint32_t dword_1;
};
cf_words make_exec(cf_opcode opcode, uint32_t address, uint32_t count,
                   uint32_t sequence) {
    return cf_words{(address & 0xFFF) | ((count & 0x7) << 12) |
                        ((sequence & 0xFFF) << 16),
                    (static_cast<uint32_t>(opcode) & 0xF) << 12};
}
void pack_pair(const cf_words& a, const cf_words& b, std::vector<uint32_t>& out) {
    out.push_back(a.dword_0);
    out.push_back((a.dword_1 & 0xFFFF) | (b.dword_0 << 16));
    out.push_back((b.dword_0 >> 16) | (b.dword_1 << 16));
}
void pack_alu(uint32_t vector_dest, alu_vector_opcode vop,
              std::vector<uint32_t>& out) {
    out.push_back(vector_dest & 0x3F);
    out.push_back(0);
    out.push_back((static_cast<uint32_t>(vop) & 0x1F) << 24);
}
void pack_vertex_fetch(uint32_t src_reg, uint32_t dst_reg, uint32_t const_index,
                       std::vector<uint32_t>& out) {
    out.push_back((static_cast<uint32_t>(fetch_opcode::vertex_fetch) & 0x1F) |
                  ((src_reg & 0x3F) << 5) | ((dst_reg & 0x3F) << 12) |
                  ((const_index & 0x1F) << 20));
    out.push_back(0);
    out.push_back(0);
}

void test_parse_whole_shader() {
    // Group 0 (control flow): exec -> block at group 1 (one ALU instruction),
    // then exec_end -> block at group 2 (one vertex fetch instruction). The
    // sequence bit is 0 for the ALU block and 1 for the fetch block.
    std::vector<uint32_t> ucode;
    pack_pair(make_exec(cf_opcode::exec, /*addr*/ 1, /*count*/ 1, /*seq*/ 0),
              make_exec(cf_opcode::exec_end, /*addr*/ 2, /*count*/ 1, /*seq*/ 1),
              ucode);
    pack_alu(/*vector_dest*/ 7, alu_vector_opcode::mad, ucode);        // group 1
    pack_vertex_fetch(/*src*/ 2, /*dst*/ 5, /*const*/ 3, ucode);       // group 2

    shader_program program;
    std::string error;
    assert(parse_shader(ucode.data(), ucode.size(), program, error));
    assert(error.empty());

    // Control flow: two exec instructions.
    assert(program.control_flow.instructions.size() == 2);
    assert(program.control_flow.instruction_block_start == 1);

    // Two exec blocks, one instruction each.
    assert(program.exec_blocks.size() == 2);

    const shader_exec_block& alu_block = program.exec_blocks[0];
    assert(alu_block.cf.opcode == cf_opcode::exec);
    assert(alu_block.instructions.size() == 1);
    assert(alu_block.instructions[0].kind == instruction_kind::alu);
    assert(alu_block.instructions[0].alu.vector_opcode ==
           alu_vector_opcode::mad);
    assert(alu_block.instructions[0].alu.vector_dest == 7);

    const shader_exec_block& fetch_block = program.exec_blocks[1];
    assert(fetch_block.cf.opcode == cf_opcode::exec_end);
    assert(ends_shader(fetch_block.cf.opcode));
    assert(fetch_block.instructions.size() == 1);
    assert(fetch_block.instructions[0].kind == instruction_kind::vertex_fetch);
    assert(fetch_block.instructions[0].vertex.src_reg == 2);
    assert(fetch_block.instructions[0].vertex.dst_reg == 5);
    // The slot combines the packed index with its selector: 3 * 3 + 0.
    assert(fetch_block.instructions[0].vertex.const_index == 9);
}

void test_multiple_instructions_in_one_block() {
    // One exec block with two instructions: an ALU then a fetch. Sequence bits
    // (two per instruction) are 0b0100 - instruction 0 ALU, instruction 1 fetch.
    std::vector<uint32_t> ucode;
    pack_pair(make_exec(cf_opcode::exec_end, /*addr*/ 1, /*count*/ 2,
                        /*seq*/ 0b0100),
              cf_words{0, 0}, ucode); // second CF slot: nop
    pack_alu(1, alu_vector_opcode::add, ucode);                  // group 1, instr 0
    pack_vertex_fetch(4, 6, 1, ucode);                           // group 2, instr 1

    shader_program program;
    std::string error;
    assert(parse_shader(ucode.data(), ucode.size(), program, error));
    assert(program.exec_blocks.size() == 1);
    const auto& block = program.exec_blocks[0];
    assert(block.instructions.size() == 2);
    assert(block.instructions[0].kind == instruction_kind::alu);
    assert(block.instructions[1].kind == instruction_kind::vertex_fetch);
    assert(block.instructions[1].vertex.dst_reg == 6);
}

void test_out_of_bounds_block_is_rejected() {
    // An exec pointing at a group that does not exist must be caught.
    std::vector<uint32_t> ucode;
    pack_pair(make_exec(cf_opcode::exec_end, /*addr*/ 99, /*count*/ 1, 0),
              cf_words{0, 0}, ucode);
    // No instruction groups follow.
    shader_program program;
    std::string error;
    assert(!parse_shader(ucode.data(), ucode.size(), program, error));
    assert(!error.empty());
}

} // namespace

int main() {
    test_parse_whole_shader();
    test_multiple_instructions_in_one_block();
    test_out_of_bounds_block_is_rejected();
    std::printf("shader_program_test: all checks passed\n");
    return 0;
}
