#include "whitty_xenon/gpu/shader.h"

namespace whitty_xenon::gpu {
namespace {

// One CF instruction's two 32-bit words, as unpacked from the microcode.
struct cf_words {
    uint32_t dword_0;
    uint32_t dword_1; // only the low 16 bits are meaningful
};

// Unpacks a three-dword group into its two packed CF instructions, exactly as
// the hardware lays them out.
void unpack_pair(const uint32_t* group, cf_words& a, cf_words& b) noexcept {
    const uint32_t d0 = group[0];
    const uint32_t d1 = group[1];
    const uint32_t d2 = group[2];
    a.dword_0 = d0;
    a.dword_1 = d1 & 0xFFFF;
    b.dword_0 = (d1 >> 16) | (d2 << 16);
    b.dword_1 = d2 >> 16;
}

cf_opcode opcode_of(const cf_words& cf) noexcept {
    // The opcode is the top four bits of the 16-bit second word.
    return static_cast<cf_opcode>((cf.dword_1 >> 12) & 0xF);
}

cf_instruction decode(const cf_words& cf) noexcept {
    const uint32_t d0 = cf.dword_0;
    const uint32_t d1 = cf.dword_1;
    cf_instruction out;
    out.opcode = opcode_of(cf);
    if (is_exec_opcode(out.opcode)) {
        // Exec word 0: address[11:0], count[14:12], sequence[27:16].
        out.exec_address = d0 & 0xFFF;
        out.exec_count = (d0 >> 12) & 0x7;
        out.exec_sequence = (d0 >> 16) & 0xFFF;
    }
    switch (out.opcode) {
        case cf_opcode::cond_exec:
        case cf_opcode::cond_exec_end:
        case cf_opcode::cond_exec_pred_clean:
        case cf_opcode::cond_exec_pred_clean_end:
            // Word 1: bool_address[9:2], condition[10].
            out.bool_address = (d1 >> 2) & 0xFF;
            out.condition = ((d1 >> 10) & 0x1) != 0;
            break;
        case cf_opcode::cond_exec_pred:
        case cf_opcode::cond_exec_pred_end:
            // Same condition bit; the eight bits below it are the predicate
            // form's reserved field rather than a constant index.
            out.condition = ((d1 >> 10) & 0x1) != 0;
            break;
        case cf_opcode::loop_start:
            // Word 0: address[12:0], repeat[13], loop_id[20:16].
            out.loop_address = d0 & 0x1FFF;
            out.loop_is_repeat = ((d0 >> 13) & 0x1) != 0;
            out.loop_id = (d0 >> 16) & 0x1F;
            break;
        case cf_opcode::loop_end:
            // Word 0: address[12:0], loop_id[20:16], predicated_break[21].
            out.loop_address = d0 & 0x1FFF;
            out.loop_id = (d0 >> 16) & 0x1F;
            out.loop_predicated_break = ((d0 >> 21) & 0x1) != 0;
            out.condition = ((d1 >> 10) & 0x1) != 0;
            break;
        case cf_opcode::cond_call:
        case cf_opcode::cond_jmp:
            // Word 0: address[12:0], unconditional[13], predicated[14].
            // Word 1: bool_address[9:2], condition[10].
            out.jump_address = d0 & 0x1FFF;
            out.is_unconditional = ((d0 >> 13) & 0x1) != 0;
            out.is_predicated = ((d0 >> 14) & 0x1) != 0;
            out.bool_address = (d1 >> 2) & 0xFF;
            out.condition = ((d1 >> 10) & 0x1) != 0;
            break;
        case cf_opcode::alloc:
            // Word 0: size[2:0]. Word 1: alloc_type[10:9].
            out.alloc_size = d0 & 0x7;
            out.alloc_type = (d1 >> 9) & 0x3;
            break;
        default: break;
    }
    return out;
}

} // namespace

bool is_exec_opcode(cf_opcode opcode) noexcept {
    switch (opcode) {
        case cf_opcode::exec:
        case cf_opcode::exec_end:
        case cf_opcode::cond_exec:
        case cf_opcode::cond_exec_end:
        case cf_opcode::cond_exec_pred:
        case cf_opcode::cond_exec_pred_end:
        case cf_opcode::cond_exec_pred_clean:
        case cf_opcode::cond_exec_pred_clean_end:
            return true;
        default:
            return false;
    }
}

bool is_bool_conditional_exec(cf_opcode opcode) noexcept {
    switch (opcode) {
        case cf_opcode::cond_exec:
        case cf_opcode::cond_exec_end:
        case cf_opcode::cond_exec_pred_clean:
        case cf_opcode::cond_exec_pred_clean_end:
            return true;
        default:
            return false;
    }
}

bool is_predicated_exec(cf_opcode opcode) noexcept {
    switch (opcode) {
        case cf_opcode::cond_exec_pred:
        case cf_opcode::cond_exec_pred_end:
            return true;
        default:
            return false;
    }
}

bool ends_shader(cf_opcode opcode) noexcept {
    switch (opcode) {
        case cf_opcode::exec_end:
        case cf_opcode::cond_exec_end:
        case cf_opcode::cond_exec_pred_end:
        case cf_opcode::cond_exec_pred_clean_end:
            return true;
        default:
            return false;
    }
}

bool disassemble_control_flow(const uint32_t* ucode, std::size_t dword_count,
                              shader_control_flow& out, std::string& error) {
    out.instructions.clear();
    out.instruction_block_start = 0;
    if (!ucode || dword_count < 3) {
        error = "microcode too short to hold a control-flow instruction";
        return false;
    }

    // The CF program runs from group 0 up to the first instruction block. The
    // bound starts at the whole microcode and shrinks each time an exec names an
    // earlier block, so the walk stops on its own at the first block.
    uint32_t bound = static_cast<uint32_t>(dword_count / 3);
    for (uint32_t group = 0; group < bound; ++group) {
        cf_words a, b;
        unpack_pair(ucode + group * 3, a, b);
        for (const cf_words& cf : {a, b}) {
            const cf_instruction decoded = decode(cf);
            out.instructions.push_back(decoded);
            if (is_exec_opcode(decoded.opcode) && decoded.exec_address < bound)
                bound = decoded.exec_address;
        }
    }
    out.instruction_block_start = bound;
    return true;
}

} // namespace whitty_xenon::gpu
