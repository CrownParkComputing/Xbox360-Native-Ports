// shader_program.h - a whole shader, decoded.
//
// The four shader decoders each handle one layer: the control-flow skeleton, the
// ALU instructions, and the two kinds of fetch instruction. This ties them into
// a single pass. Given a shader's microcode it walks the control-flow program,
// and for every exec instruction it follows the exec's address and count to the
// block of instructions it dispatches, decoding each one - as ALU or fetch
// according to the exec's sequence bits (two per instruction: bit 0 selects
// fetch over ALU). The result is the shader laid out as the translator will
// consume it: control flow, and under each exec the decoded instructions it
// runs.
#pragma once

#include "whitty_xenon/gpu/alu.h"
#include "whitty_xenon/gpu/fetch.h"
#include "whitty_xenon/gpu/shader.h"

#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>

namespace whitty_xenon::gpu {

enum class instruction_kind : uint8_t { alu, vertex_fetch, texture_fetch };

// One decoded instruction from an exec block. Only the member matching `kind`
// is meaningful.
struct shader_instruction {
    instruction_kind kind{instruction_kind::alu};
    alu_instruction alu{};
    vertex_fetch_instruction vertex{};
    texture_fetch_instruction texture{};
};

// One exec control-flow instruction and the block of instructions it dispatches.
struct shader_exec_block {
    cf_instruction cf{};
    std::vector<shader_instruction> instructions;
};

// A fully decoded shader.
struct shader_program {
    shader_control_flow control_flow;
    std::vector<shader_exec_block> exec_blocks; // one per exec CF instruction
};

// Decodes a whole shader from its microcode (host dword order). Returns false
// and sets `error` if the control flow is malformed or an exec block points past
// the end of the microcode.
bool parse_shader(const uint32_t* ucode, std::size_t dword_count,
                  shader_program& out, std::string& error);

} // namespace whitty_xenon::gpu
