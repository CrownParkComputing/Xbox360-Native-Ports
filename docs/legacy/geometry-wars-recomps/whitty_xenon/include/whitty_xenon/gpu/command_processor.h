// command_processor.h - executing the Xenos command stream.
//
// The PM4 decoder turns bytes into packets; this runs them. It walks a command
// buffer (following jumps into secondary buffers), applies every register write
// to a register file so the GPU state is always current, and at each draw packet
// captures a draw record: the primitive, its resolved indices, and a snapshot of
// the register state the draw will be rendered with. The output is an ordered
// list of draw records - everything a backend needs to reproduce the frame,
// with no pixels produced here.
//
// This is the CPU-side heart of the GPU and is entirely host-testable: give it a
// command buffer in guest memory and check the register state and draw records
// it produces. The backend that turns a draw record into actual pixels (a Vulkan
// device, shaders, render targets) is a separate, device-side concern.
#pragma once

#include "whitty_xenon/gpu/pm4.h"
#include "whitty_xenon/gpu/register_file.h"
#include "whitty_xenon/memory.h"

#include <array>
#include <cstdint>
#include <functional>
#include <string>
#include <vector>

namespace whitty_xenon::gpu {

// Microcode the title uploaded for one pipeline stage. The console has no
// shader objects: a shader is a run of dwords the command stream hands to the
// sequencer, and stays bound until the next upload replaces it.
struct shader_upload {
    shader_kind kind{shader_kind::vertex};
    uint32_t address{0};             // guest address; 0 for an inline upload
    std::vector<uint32_t> microcode; // host dword order, ready for parse_shader
};

// One draw, captured with the state it runs under.
struct draw_record {
    primitive_type prim{primitive_type::none};
    uint32_t index_count{0};
    bool indexed{false};           // indices came from an index buffer
    std::vector<uint32_t> indices; // resolved indices (indexed draws only)
    register_file state;           // GPU registers at the moment of the draw
    // Which shaders were bound. Indices into shaders(); -1 for a draw issued
    // with no shader of that kind uploaded yet, which is a stream to report
    // rather than a draw to render.
    int vertex_shader{-1};
    int pixel_shader{-1};
    // A fingerprint of every vertex buffer this draw could fetch from, taken
    // when the draw was recorded.
    //
    // The renderer reads vertex data when it draws the frame, which is AFTER
    // the guest has issued every draw in it. A title that builds its dynamic
    // geometry into a scratch buffer and refills it per object has therefore
    // moved on, and every such object renders with somebody else's vertices.
    // This says whether that happened rather than leaving it to be argued
    // about from a picture. Only filled in when WHITTY_TRACE_VERTEX_AGE=1.
    struct fetch_fingerprint {
        uint8_t slot{0};
        uint32_t address{0};
        uint64_t hash{0};
    };
    std::vector<fetch_fingerprint> fingerprints;
};

class command_processor {
public:
    explicit command_processor(guest_memory& memory) noexcept
        : m_memory(&memory) {}

    // Processes the command buffer at guest address [address, address+size).
    // Appends to the draw list and updates the register state. Returns false and
    // sets `error` on a malformed buffer or an unreadable address.
    //
    // `pending`, when supplied, makes a buffer that ends part-way through a
    // packet succeed rather than fail, describing that trailing packet - see
    // parse_pm4. Only the buffer named here is treated that way; a secondary
    // buffer an INDIRECT_BUFFER packet jumps to declares its own length, so a
    // partial packet inside one is a broken stream, not a stream still arriving.
    bool process(uint32_t address, uint32_t size_bytes, std::string& error,
                 pending_packet* pending = nullptr) {
        return process_at(address, size_bytes, error, 0, pending);
    }

    // Clears the accumulated draws and register state.
    void reset();

    // Drops the accumulated draws, keeping register state and uploaded
    // shaders - which is what a frame boundary means to the hardware, and what
    // stops a live run accumulating a register snapshot per draw forever.
    void clear_draws() noexcept { m_draws.clear(); }

    // Addresses embedded in the command stream are physical: the GPU reads
    // guest memory through the physical alias, not the CPU's virtual mapping,
    // so the title writes what MmGetPhysicalAddress gave it. This is the
    // inverse of that, and it matches Xenia's TranslatePhysical.
    static uint32_t physical_to_virtual(uint32_t physical) noexcept {
        return physical >= kPhysicalBase ? physical : kPhysicalBase + physical;
    }

    // Fingerprints of every vertex buffer currently bound - see draw_record.
    std::vector<draw_record::fetch_fingerprint> fingerprint_fetches() const;

    const register_file& registers() const noexcept { return m_registers; }
    const std::vector<draw_record>& draws() const noexcept { return m_draws; }
    // Draws issued since the last reset, including those already cleared at a
    // frame boundary - draws() alone cannot be a progress measure once a live
    // run starts consuming frames.
    uint64_t total_draws() const noexcept { return m_total_draws; }

    // Every shader the stream has uploaded, oldest first, and which of them is
    // currently bound to each stage.
    const std::vector<shader_upload>& shaders() const noexcept {
        return m_shaders;
    }
    int active_vertex_shader() const noexcept { return m_active_vertex_shader; }
    int active_pixel_shader() const noexcept { return m_active_pixel_shader; }

    // Tiled rendering state. Both start all-ones: until the title says
    // otherwise every bin is selected, so a predicated packet runs. Starting
    // them at zero would silently drop every predicated draw in the frame.
    uint64_t bin_mask() const noexcept { return m_bin_mask; }
    uint64_t bin_select() const noexcept { return m_bin_select; }
    // Predicated packets skipped because their bins were not selected. This is
    // correct behaviour, not a loss, but the count separates "the title drew
    // nothing" from "we discarded it".
    uint64_t predicated_skips() const noexcept { return m_predicated_skips; }
    // Of those, the ones that were DRAWS. This is the only place a draw is
    // discarded before it becomes a draw record, so it is the only part of the
    // "where did the draws go" question that the frame renderer's own
    // accounting cannot see: everything it declines is counted against
    // draws_submitted, and a draw skipped here was never submitted at all.
    // Counted separately from the packets because a bin-select region is mostly
    // state - Hydro Thunder skips 864,248 packets over a run - and a total over
    // both says nothing about whether any geometry was in them.
    uint64_t predicated_draw_skips() const noexcept {
        return m_predicated_draw_skips;
    }
    // Which OPCODES the bin test discarded. A total says a lot was skipped; a
    // breakdown says what. It matters because bin select and mask are set by
    // packets that are themselves type-3: if SET_BIN_SELECT (0x62/0x63) ever
    // appears here, the selection that would have let the next replay through
    // was thrown away by the selection already in force, and every later
    // replay is lost with it.
    uint64_t predicated_skip_count(uint32_t opcode) const noexcept {
        return opcode < kOpcodeCount ? m_predicated_skip_counts[opcode] : 0;
    }

    // How many times each type-3 opcode appeared, and how many of those the
    // processor did nothing with. An unhandled command is the difference
    // between a frame that is missing state and a frame that is missing
    // nothing, so bring-up needs it counted rather than inferred.
    static constexpr uint32_t kOpcodeCount = 128;
    uint64_t opcode_count(uint32_t opcode) const noexcept {
        return opcode < kOpcodeCount ? m_opcode_counts[opcode] : 0;
    }
    uint64_t unhandled_count(uint32_t opcode) const noexcept {
        return opcode < kOpcodeCount ? m_unhandled_counts[opcode] : 0;
    }
    uint64_t constant_writes() const noexcept { return m_constant_writes; }
    // Bank selectors no bank is defined for. Never seen in a healthy stream.
    uint64_t bad_constant_banks() const noexcept { return m_bad_constant_banks; }
    // How many ALU constant dwords reached each half of the file. See
    // write_constant_range: a vertex half left at zero is a smeared picture.
    uint64_t vertex_constant_writes() const noexcept {
        return m_vertex_constant_writes;
    }
    uint64_t vertex_constant_nonzero() const noexcept {
        return m_vertex_constant_nonzero;
    }
    uint64_t pixel_constant_writes() const noexcept {
        return m_pixel_constant_writes;
    }
    // Shader uploads whose microcode was not in committed guest memory.
    uint64_t loaded_constant_dwords() const noexcept {
        return m_loaded_constant_dwords;
    }
    uint64_t misaligned_constant_loads() const noexcept {
        return m_misaligned_constant_loads;
    }
    uint64_t dropped_shader_loads() const noexcept {
        return m_dropped_shader_loads;
    }

    // How the GPU raises an interrupt in the guest. A PM4 INTERRUPT packet in
    // the command stream calls this with source 1 and the CPU the packet's
    // mask names; the harness routes it to the routine the title registered
    // with VdSetGraphicsInterruptCallback, the same one vblank uses. Titles
    // use it as "tell me when the GPU has got this far", so a stream that
    // contains one and a runtime that ignores it is a title waiting forever.
    void set_interrupt_handler(std::function<void(uint32_t, uint32_t)> handler) {
        m_interrupt_handler = std::move(handler);
    }

    // The end of a frame, raised where the guest put it: the xe_swap packet
    // VdSwap writes into the ring. Called with the front buffer's physical
    // address and its size, which are the three things the packet carries and
    // the three a presenter needs.
    //
    // This is the frame boundary for everything downstream - the draw list is
    // complete at the moment it fires and is cleared straight after - so it has
    // to be raised HERE, in submission order, and not from the kernel call. See
    // pm4_op::xe_swap for what happens when it is not.
    void set_swap_handler(
        std::function<void(uint32_t, uint32_t, uint32_t)> handler) {
        m_swap_handler = std::move(handler);
    }
    // Swap packets that carried the right signature. A title whose swaps never
    // reach the ring reads as zero here while VdSwap is being called every
    // frame, which is the one distinction worth being able to make.
    uint64_t swaps() const noexcept { return m_swaps; }

    // The GPU's own frame counter, which an EVENT_WRITE_SHD packet can ask to
    // have written into guest memory instead of a literal value. The vblank
    // worker advances it.
    void increment_counter() noexcept { ++m_counter; }
    uint32_t counter() const noexcept { return m_counter; }

    // Memory the command stream told the GPU to write back. Counted so a test
    // - and bring-up - can tell "the stream contained no fences" from "the
    // fences were ignored".
    uint64_t memory_writes() const noexcept { return m_memory_writes; }
    uint64_t interrupts() const noexcept { return m_interrupts; }
    // Write-backs aimed at memory the guest has not committed. The command
    // stream is data, so a bad address in it is a stream to be reported, not
    // a reason to take the process down with an unmapped store.
    uint64_t dropped_writes() const noexcept { return m_dropped_writes; }
    uint32_t first_dropped_write() const noexcept {
        return m_first_dropped_write;
    }
    // Scratch registers mirrored into guest memory (see reg::scratch_umsk).
    // Separate from memory_writes() because it answers a different question:
    // a title that arms SCRATCH_UMSK and gets nothing back is one waiting on a
    // mailbox the GPU never posted to.
    uint64_t scratch_writes() const noexcept { return m_scratch_writes; }

    // Occlusion queries: EVENT_WRITE_ZPD packets seen, and how many of them
    // found a record marked pending and wrote a sample count into it.
    //
    // Both numbers are needed and neither alone means anything. A title that
    // issues queries and is answered has them equal; one that issues them and
    // is not is a title waiting on a result that never arrives, which does not
    // degrade - it culls everything and draws a black frame. And "answered: 0"
    // reads the same whether the packets never arrived or every one of them
    // was ignored, so the count of packets seen has to be beside it.
    uint64_t occlusion_queries() const noexcept { return m_occlusion_queries; }
    uint64_t occlusion_queries_answered() const noexcept {
        return m_occlusion_queries_answered;
    }

private:
    // Processes one buffer at a given indirect-buffer nesting depth.
    bool process_at(uint32_t address, uint32_t size_bytes, std::string& error,
                    int depth, pending_packet* pending = nullptr);
    bool process_packets(const std::vector<pm4_packet>& packets,
                         std::string& error, int depth);
    void record_draw(const draw_command& draw);
    // The write-back packets: MEM_WRITE, EVENT_WRITE_SHD, EVENT_WRITE_EXT and
    // INTERRUPT. Returns false only for a packet it cannot make sense of.
    void execute_write_back(const pm4_packet& packet);
    // The constant-bank packets. SET_CONSTANT and SET_CONSTANT2 carry their
    // values in the stream; LOAD_ALU_CONSTANT names a buffer in physical
    // memory to read them from.
    void execute_set_constant(const pm4_packet& packet);
    void execute_set_constant2(const pm4_packet& packet);
    void execute_load_alu_constant(const pm4_packet& packet);
    // Writes a run of constants into the register file starting at `index`.
    void write_constant_range(uint32_t index, const uint32_t* values,
                              uint32_t count);
    // The shader-upload packets. IM_LOAD points at microcode in physical
    // memory; IM_LOAD_IMMEDIATE carries it in the packet.
    void execute_im_load(const pm4_packet& packet);
    void execute_im_load_immediate(const pm4_packet& packet);
    // Binds microcode to a stage, reusing an identical earlier upload so a
    // title that rebinds the same shader every draw does not grow the store.
    void bind_shader(shader_kind kind, uint32_t address,
                     std::vector<uint32_t> microcode);
    // Read-modify-write of one register, with either operand able to name a
    // register instead of carrying an immediate.
    void execute_reg_rmw(const pm4_packet& packet);
    // The bin mask/select packets, in their whole-value and half-value forms.
    void execute_set_bin(const pm4_packet& packet);
    // EVENT_WRITE_ZPD - an occlusion query's result.
    void execute_event_write_zpd(const pm4_packet& packet);
    // XE_SWAP - the frame boundary VdSwap wrote into the stream.
    void execute_swap(const pm4_packet& packet);
    // Stores one dword where the GPU was told to, honouring the two low bits
    // of the address, which carry the swap mode rather than being part of it.
    void write_gpu_dword(uint32_t address_and_endian, uint32_t value);
    // Applies one register write from the command stream. Every such write goes
    // through here rather than straight to the register file, because a write
    // to a scratch register is also a store into guest memory.
    void write_register(uint32_t index, uint32_t value);

    guest_memory* m_memory;
    register_file m_registers;
    std::vector<draw_record> m_draws;
    std::vector<shader_upload> m_shaders;
    int m_active_vertex_shader{-1};
    int m_active_pixel_shader{-1};
    std::function<void(uint32_t, uint32_t)> m_interrupt_handler;
    std::function<void(uint32_t, uint32_t, uint32_t)> m_swap_handler;
    uint64_t m_swaps{0};
    uint32_t m_counter{0};
    uint64_t m_memory_writes{0};
    uint64_t m_scratch_writes{0};
    uint64_t m_interrupts{0};
    uint64_t m_dropped_writes{0};
    uint32_t m_first_dropped_write{0};
    uint64_t m_bin_mask{~0ull};
    uint64_t m_bin_select{~0ull};
    uint64_t m_predicated_skips{0};
    uint64_t m_predicated_draw_skips{0};
    uint64_t m_predicated_skip_counts[kOpcodeCount]{};
    // Draws recorded when the bin selection last changed, so the trace can say
    // how much geometry arrived under each selection rather than only that the
    // selection moved.
    uint64_t m_draws_at_last_bin_change{0};
    uint64_t m_total_draws{0};
    uint64_t m_constant_writes{0};
    uint64_t m_bad_constant_banks{0};
    uint64_t m_vertex_constant_writes{0};
    uint64_t m_vertex_constant_nonzero{0};
    uint64_t m_pixel_constant_writes{0};
    uint64_t m_loaded_constant_dwords{0};
    uint64_t m_misaligned_constant_loads{0};
    uint64_t m_dropped_shader_loads{0};
    uint64_t m_occlusion_queries{0};
    uint64_t m_occlusion_queries_answered{0};
    uint32_t m_occlusion_sample_count{0};
    std::array<uint64_t, kOpcodeCount> m_opcode_counts{};
    std::array<uint64_t, kOpcodeCount> m_unhandled_counts{};
};

} // namespace whitty_xenon::gpu
