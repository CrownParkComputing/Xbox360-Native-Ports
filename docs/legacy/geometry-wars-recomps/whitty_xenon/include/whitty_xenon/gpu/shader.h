// shader.h - the structure of a Xenos shader.
//
// A Xenos vertex or pixel shader is a block of microcode: a program in the
// AMD R400 / Adreno 200 ISA the console inherited. Before any of it can be
// translated to SPIR-V, it has to be decoded, and the decode has a natural
// first layer - the control-flow program.
//
// A shader begins with a run of control-flow (CF) instructions, packed two to
// every three dwords (each CF instruction is 48 bits). The CF program is the
// skeleton: it says which blocks of ALU and fetch instructions to run, in what
// order, and where the shader ends. The ALU and fetch instructions those blocks
// point at sit after the CF program in the same microcode. This layer decodes
// the skeleton; decoding the individual ALU and fetch instructions is the next
// step and the real bulk of the translator.
//
// The neat trick that bounds the CF program: every exec instruction names the
// address (in three-dword units) of its instruction block, and the first such
// block begins exactly where the CF program ends. So scanning forward, each exec
// caps how far the scan may go, and the walk stops on its own at the first
// block - which is also the smallest address any exec points to.
#pragma once

#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>

namespace whitty_xenon::gpu {

// Control-flow opcodes (from Xenia's ControlFlowOpcode; stable ISA values).
enum class cf_opcode : uint8_t {
    nop = 0,
    exec = 1,
    exec_end = 2,
    cond_exec = 3,
    cond_exec_end = 4,
    cond_exec_pred = 5,
    cond_exec_pred_end = 6,
    loop_start = 7,
    loop_end = 8,
    cond_call = 9,
    ret = 10,
    cond_jmp = 11,
    alloc = 12,
    cond_exec_pred_clean = 13,
    cond_exec_pred_clean_end = 14,
    mark_vs_fetch_done = 15,
};

// True for the opcodes that dispatch a block of ALU/fetch instructions - the
// ones that carry an address, count and sequence.
bool is_exec_opcode(cf_opcode opcode) noexcept;
// True for the opcodes that end shader execution (the *_end variants).
bool ends_shader(cf_opcode opcode) noexcept;

// True for the conditional exec forms whose condition is a BOOLEAN CONSTANT -
// one bit of SQ_CF_BOOLEANS, named by bool_address.
//
// The two "predicate clean" opcodes are in this set and not in the predicate
// one, which is not obvious from their names. Xenia's ucode.h says so outright
// and the field layout proves it: the bits a predicate condition would occupy
// hold an eight-bit constant index instead. Treating them as predicated reads
// a condition out of p0 that the shader never put there.
bool is_bool_conditional_exec(cf_opcode opcode) noexcept;
// True for the conditional exec forms whose condition is the PREDICATE p0.
bool is_predicated_exec(cf_opcode opcode) noexcept;

// One decoded control-flow instruction.
//
// The fields are a union in the hardware - the same 48 bits mean different
// things per opcode - so only the group matching `opcode` is meaningful, and
// each group says which opcodes populate it.
struct cf_instruction {
    cf_opcode opcode{cf_opcode::nop};

    // Populated only when is_exec_opcode(opcode): the instruction block this
    // exec runs.
    uint32_t exec_address{0}; // three-dword-unit address of the block
    uint32_t exec_count{0};   // number of ALU/fetch instructions in the block
    // Two bits per instruction in the block: bit 0 selects fetch (1) over
    // ALU (0), bit 1 requests serialization.
    uint32_t exec_sequence{0};

    // The condition. For is_bool_conditional_exec, cond_jmp and cond_call it is
    // a bit of the boolean constant bank; for is_predicated_exec and a
    // predicated loop_end/cond_jmp/cond_call it is p0. `condition` is the value
    // the bit must equal for the branch to be taken - so a false condition is
    // `if (!b)`, not a branch that never runs.
    uint32_t bool_address{0}; // index into the 256-bit boolean constant bank
    bool condition{true};

    // cond_jmp and cond_call. An unconditional one is always taken; a
    // predicated one tests p0 rather than a boolean constant.
    uint32_t jump_address{0}; // three-dword-unit CF address of the target
    bool is_unconditional{false};
    bool is_predicated{false};

    // loop_start and loop_end.
    //
    // loop_start's address is where to jump when the loop is SKIPPED (past the
    // matching loop_end); loop_end's is the top of the body. `loop_id` names
    // one of the 32 loop constants, which carry the count, the start value of
    // aL and its step.
    uint32_t loop_address{0};
    uint32_t loop_id{0};
    bool loop_is_repeat{false};      // reuse aL rather than reset it
    bool loop_predicated_break{false}; // break when p0 == condition

    // alloc: what the shader is reserving space for, and how much.
    uint32_t alloc_type{0};
    uint32_t alloc_size{0};
};

// The decoded control-flow program of a shader.
struct shader_control_flow {
    std::vector<cf_instruction> instructions;
    // Three-dword-unit address where the CF program ends and the first ALU/
    // fetch instruction block begins.
    uint32_t instruction_block_start{0};
};

// Decodes the control-flow program from a shader's microcode. `ucode` is the
// microcode in host dword order (the caller byte-swaps it out of guest memory).
// Returns false and sets `error` if the microcode is too short to hold even one
// CF pair.
bool disassemble_control_flow(const uint32_t* ucode, std::size_t dword_count,
                              shader_control_flow& out, std::string& error);

} // namespace whitty_xenon::gpu
