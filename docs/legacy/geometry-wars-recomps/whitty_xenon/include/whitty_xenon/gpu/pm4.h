// pm4.h - decoding the Xenos command stream.
//
// The Xbox 360 does not draw by writing pixels; it writes a ring buffer of PM4
// command packets that the GPU's command processor consumes. Every frame the
// title issues - register writes that set up pipeline state, draw calls,
// jumps into secondary command buffers - arrives as this stream. So the first
// thing a Xenos GPU has to do, before any pixel is produced, is decode it.
// This is that decoder: bytes in, a list of typed packets out.
//
// The format is compact. Each packet begins with one 32-bit header whose top
// two bits select the packet type:
//
//   type 0 - write `count` consecutive (or one repeated) registers
//   type 1 - write two registers named in the header
//   type 2 - a filler word, no payload
//   type 3 - a command, identified by a 7-bit opcode (draw, jump, event, ...)
//
// The stream is big-endian, as it lives in guest memory. Getting the per-packet
// word count right is the whole game: miscount one packet and every packet
// after it decodes from the wrong offset, so the walk is what the tests hammer.
//
// This layer only decodes. It does not maintain register state or issue draws -
// those belong to the command processor that consumes these packets.
#pragma once

#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>

namespace whitty_xenon::gpu {

enum class packet_type : uint8_t { type0 = 0, type1 = 1, type2 = 2, type3 = 3 };

// Type-3 opcodes. Only the ones the decoder acts on are named here; the full
// set is large and the rest are carried through by number.
namespace pm4_op {
inline constexpr uint32_t nop = 0x10;
inline constexpr uint32_t indirect_buffer = 0x3F;
inline constexpr uint32_t indirect_buffer_pfd = 0x37;
inline constexpr uint32_t wait_reg_mem = 0x3C;
inline constexpr uint32_t draw_indx = 0x22;
inline constexpr uint32_t draw_indx_2 = 0x36;
inline constexpr uint32_t set_constant = 0x2D;
inline constexpr uint32_t set_constant2 = 0x55;
inline constexpr uint32_t load_alu_constant = 0x2F;
inline constexpr uint32_t im_load = 0x27;
inline constexpr uint32_t im_load_immediate = 0x2B;
inline constexpr uint32_t invalidate_state = 0x3B;
inline constexpr uint32_t viz_query = 0x30;
inline constexpr uint32_t cond_write = 0x45;
inline constexpr uint32_t event_write = 0x46;
inline constexpr uint32_t me_init = 0x48;
inline constexpr uint32_t mem_write = 0x3D;
inline constexpr uint32_t interrupt = 0x54;
inline constexpr uint32_t event_write_shd = 0x58;
inline constexpr uint32_t event_write_ext = 0x5A;
// The occlusion query's completion event: "the depth pass is done, write the
// sample count out". Direct3D pairs one of these with the query's BEGIN and
// another with its END, and the title subtracts one record from the other to
// learn how many samples the geometry between them passed the depth test.
inline constexpr uint32_t event_write_zpd = 0x5B;
inline constexpr uint32_t context_update = 0x5E;
inline constexpr uint32_t reg_rmw = 0x21;
// Tiled rendering. The console's 10 MiB of EDRAM does not hold a 720p colour
// and depth buffer at once, so Direct3D splits the frame into bins and replays
// the command buffer once per bin, using these to say which bins each replay
// is for. A packet with its predication bit set runs only when the selected
// bins and the mask overlap.
inline constexpr uint32_t set_bin_mask = 0x50;
inline constexpr uint32_t set_bin_select = 0x51;
inline constexpr uint32_t set_bin_mask_lo = 0x60;
inline constexpr uint32_t set_bin_mask_hi = 0x61;
inline constexpr uint32_t set_bin_select_lo = 0x62;
inline constexpr uint32_t set_bin_select_hi = 0x63;
// The frame boundary. No such opcode exists on the console - presenting is a
// kernel call, VdSwap - but WHERE a frame ends is a position in the command
// stream, not a moment on the title's CPU thread, and the two are not the same
// place. Direct3D writes the frame's final resolve into the ring, reserves 64
// words for VdSwap to fill, calls it, and only THEN advances the write pointer
// past the lot. So at the instant VdSwap runs, the composite that fills the
// front buffer has not been submitted yet: ending the frame there cuts it off
// before its own picture, which arrives at the head of the next frame instead.
// Measured on Choplifter HD, frame 300: the whole window was 53 draws, the
// front-buffer resolve was draw 24 of them, and the ~900 draws that made the
// picture were in the window before. Writing the boundary into the ring puts it
// back where the guest put it. Xenia does the same, with this opcode and this
// signature, so a stream either of them writes is readable by the other.
inline constexpr uint32_t xe_swap = 0x64;
} // namespace pm4_op

// 'SWAP', the first payload dword of an xe_swap packet. The 64 words a title
// reserves for VdSwap are ordinary ring memory holding whatever was there last
// time round, so the signature is what tells a real boundary from a stale one.
inline constexpr uint32_t kSwapSignature = 0x53574150u;

// The constant banks SET_CONSTANT and LOAD_ALU_CONSTANT address, and where each
// one lands in the register file. The bank is named by the packet rather than
// by register index, so this mapping is the only thing that puts a title's
// vertex fetch constants and shader constants where the render path looks for
// them. Transcribed from Xenia's Write*RangeFromRing.
namespace constant_bank {
inline constexpr uint32_t alu = 0x4000;
inline constexpr uint32_t fetch = 0x4800;
inline constexpr uint32_t boolean = 0x4900;
inline constexpr uint32_t loop = 0x4908;
inline constexpr uint32_t registers = 0x2000;
} // namespace constant_bank

// Returns the register-file base for a bank selector, or false for a selector
// that names no bank - which is a stream to report rather than a range to
// write somewhere arbitrary.
bool constant_bank_base(uint32_t type, uint32_t& base) noexcept;

// Which pipeline stage a shader upload targets. The low bits of an IM_LOAD's
// first payload dword carry this.
enum class shader_kind : uint8_t { vertex = 0, pixel = 1 };

// How the GPU swaps a value as it fetches it from guest memory. The Xbox 360 is
// big-endian, so index and vertex buffers carry one of these to say how their
// bytes are laid out relative to what the pipeline wants.
enum class endian : uint8_t {
    none = 0,       // no swap
    swap_8in16 = 1, // swap bytes within each 16-bit halfword
    swap_8in32 = 2, // swap all four bytes of a 32-bit word
    swap_16in32 = 3,// swap the two halfwords of a 32-bit word
};

// Xenos primitive types (the subset a title actually draws with).
enum class primitive_type : uint8_t {
    none = 0x00,
    point_list = 0x01,
    line_list = 0x02,
    line_strip = 0x03,
    triangle_list = 0x04,
    triangle_fan = 0x05,
    triangle_strip = 0x06,
    rectangle_list = 0x08,
    line_loop = 0x0C,
    quad_list = 0x0D,
    quad_strip = 0x0E,
    polygon = 0x0F,
};

struct register_write {
    uint16_t index; // register index (not a byte address)
    uint32_t value;
};

// Where a draw's vertex indices come from.
enum class index_source : uint8_t {
    indexed,           // from an index buffer in guest memory
    auto_generated,    // 0..count-1, no index buffer
    inline_in_packet,  // supplied in the draw packet itself
};

struct draw_command {
    primitive_type prim{primitive_type::none};
    uint32_t index_count{0};
    index_source source{index_source::auto_generated};
    bool index_32bit{false};
    endian index_endian{endian::none}; // swap for indexed index buffers
    uint32_t index_base{0};     // guest address of the index buffer (indexed)
    uint32_t index_size{0};     // index buffer size in bytes (indexed)
    uint32_t inline_offset{0};  // dword offset of the first inline index
};

// A jump into a secondary command buffer. Its contents are another PM4 stream,
// parsed by resolving the address in guest memory - a step above this decoder.
struct indirect_buffer_ref {
    uint32_t address{0};
    uint32_t length_dwords{0};
};

// One decoded packet. The decoded payload that is populated depends on the
// type and opcode; everything else stays empty.
struct pm4_packet {
    packet_type type{packet_type::type2};
    uint32_t opcode{0};       // type-3 opcode; 0 for other types
    bool predicated{false};   // type-3 predication bit
    uint32_t header_word{0};  // dword offset of this packet's header
    uint32_t word_count{0};   // dwords this packet spans, header included

    std::vector<register_write> register_writes; // type 0 and type 1
    // A type-3 packet's payload dwords, host-order. Populated for the
    // commands with no dedicated decode below - which is where the GPU's
    // write-backs to guest memory live.
    std::vector<uint32_t> payload;

    bool is_draw{false};
    draw_command draw{};

    bool is_indirect_buffer{false};
    indirect_buffer_ref indirect{};
};

// What a walk stopped short of: a trailing packet the buffer does not hold all
// of. `required_bytes` comes from the packet's own header, so a caller can ask
// whether the rest of it could ever arrive - a packet claiming more than the
// ring that must carry it is a bad header, not a packet still being written.
struct pending_packet {
    uint32_t present_bytes{0};  // how much of it the buffer did hold
    uint32_t required_bytes{0}; // how much its header says it needs in total
};

// Decodes a command buffer of big-endian dwords. `size_bytes` must be a
// multiple of four.
//
// A buffer can end part-way through a packet, and what that means depends on
// who is asking. In a fixed buffer it means the walk has lost sync, which must
// never pass silently. In a live ring it means only that the title has not
// finished writing yet: it advances its write pointer as it goes, so the last
// packet of a span is routinely incomplete and belongs to the next span. The
// two are told apart by whether the caller supplies `pending`:
//
//   * `pending == nullptr` - a trailing partial packet is an error.
//   * otherwise - every whole packet is decoded, `*pending` describes the
//     trailing bytes that do not yet form one, and the call succeeds. A caller
//     that consumes only `size_bytes - pending->present_bytes` leaves the
//     partial packet to be walked again once the rest of it arrives.
//
// A buffer whose size is not a multiple of four is malformed either way, and
// reports as an error with nothing pending.
bool parse_pm4(const uint8_t* data, std::size_t size_bytes,
               std::vector<pm4_packet>& packets, std::string& error,
               pending_packet* pending = nullptr);

} // namespace whitty_xenon::gpu
