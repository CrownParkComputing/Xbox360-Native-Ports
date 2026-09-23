#include "whitty_xenon/gpu/shader_program.h"

namespace whitty_xenon::gpu {

bool parse_shader(const uint32_t* ucode, std::size_t dword_count,
                  shader_program& out, std::string& error) {
    out.exec_blocks.clear();
    if (!disassemble_control_flow(ucode, dword_count, out.control_flow, error))
        return false;

    const uint32_t total_groups = static_cast<uint32_t>(dword_count / 3);
    for (const cf_instruction& cf : out.control_flow.instructions) {
        if (!is_exec_opcode(cf.opcode)) continue;

        shader_exec_block block;
        block.cf = cf;
        for (uint32_t i = 0; i < cf.exec_count; ++i) {
            const uint32_t group = cf.exec_address + i;
            if (group >= total_groups) {
                error = "exec block runs past the end of the shader microcode";
                return false;
            }
            const uint32_t* words = ucode + group * 3;

            // The exec's sequence bits: two per instruction, bit 0 of the pair
            // selects a fetch instruction over an ALU one.
            const bool is_fetch = (cf.exec_sequence >> (i * 2)) & 0x1;
            shader_instruction instruction;
            if (!is_fetch) {
                instruction.kind = instruction_kind::alu;
                instruction.alu = decode_alu_instruction(words);
            } else if (decode_fetch_opcode(words) ==
                       fetch_opcode::vertex_fetch) {
                instruction.kind = instruction_kind::vertex_fetch;
                instruction.vertex = decode_vertex_fetch_instruction(words);
            } else {
                instruction.kind = instruction_kind::texture_fetch;
                instruction.texture = decode_texture_fetch_instruction(words);
            }
            block.instructions.push_back(instruction);
        }
        out.exec_blocks.push_back(std::move(block));
    }
    return true;
}

} // namespace whitty_xenon::gpu
