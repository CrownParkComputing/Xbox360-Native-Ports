#include <mutex>
#include <vector>
#include <set>
#include "whitty_xenon/gpu/command_processor.h"

#include "whitty_xenon/gpu/draw.h"
#include "whitty_xenon/gpu/render_target.h"

#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

namespace whitty_xenon::gpu {
namespace {
// Guards against a cycle of indirect buffers referencing each other.
constexpr int kMaxIndirectDepth = 4;

// WHITTY_DUMP_BIN_SKIPS=1 - see the call site in the predication-skip block
// below for what this actually prints and why it is safe to use where every
// draw-altering diagnostic in this file is not.
bool dump_bin_skips() {
    static const bool on = [] {
        const char* value = std::getenv("WHITTY_DUMP_BIN_SKIPS");
        return value != nullptr && value[0] == '1';
    }();
    return on;
}

// WHITTY_TRACE_FENCE=1 prints every write-back the command stream asks for.
// A title's "has the GPU got this far" wait reads one of these words, so when
// it spins forever the question is always whether the value it wants was ever
// written, and to where - which nothing else in the report can answer.
bool fence_trace_enabled() {
    static const bool on = [] {
        const char* value = std::getenv("WHITTY_TRACE_FENCE");
        return value != nullptr && value[0] == '1';
    }();
    return on;
}

// WHITTY_SANITIZE_SHADER_CONSTANTS=1 zeroes a non-finite ALU shader constant
// instead of writing its raw bit pattern through.
//
// The Xenon CPU's VMX unit and x86 disagree on what a borderline float
// normalisation produces: a lighting/material vector the guest computes with
// VMX can land on a canonical NaN bit pattern that the console's own shader
// hardware was never asked to shade with (the guest code path that reaches it
// only runs on VMX), while an ARM host recomputing the same guest instructions
// produces a finite value instead. x86 Vulkan does not have that mercy - it
// shades the NaN exactly as asked, and every material sampling that constant
// clamps to black. RR6's car-lighting vectors (c21/c22) were the title that
// pinned this down; the same mechanism is generic to any title whose lighting
// math takes the same VMX path, and it is exactly what produces a triangle
// that is otherwise correctly transformed and textured but renders solid
// black instead of shaded.
//
// Opt-in, not a default: widening a NaN to 0 changes the picture for a title
// that was relying on IEEE NaN-propagation semantics on purpose (unlikely for
// lighting, not impossible elsewhere), so this stays a diagnosis-and-apply
// switch per title rather than a silent global correction.
bool sanitize_shader_constants() {
    static const bool on = [] {
        const char* value = std::getenv("WHITTY_SANITIZE_SHADER_CONSTANTS");
        return value != nullptr && value[0] == '1';
    }();
    return on;
}

// WHITTY_DRAW_ACCOUNTING=1, the same switch the frame renderer reads. See
// frame_renderer.cpp: it names every draw the renderer declined, and this is
// the one discard that happens before a draw exists to decline.
bool draw_accounting_enabled() {
    static const bool on = [] {
        const char* value = std::getenv("WHITTY_DRAW_ACCOUNTING");
        return value != nullptr && value[0] == '1';
    }();
    return on;
}
// WHITTY_IGNORE_PREDICATION=1 runs every packet whatever the bin state says.
// A title that bins replays its command buffer once per tile, so obeying the
// predicate is right; a title whose geometry goes missing wholesale is the case
// where the question "are we skipping draws we should be keeping?" is worth an
// answer rather than an argument.
bool ignore_predication() {
    static const bool on = [] {
        const char* value = std::getenv("WHITTY_IGNORE_PREDICATION");
        return value != nullptr && value[0] == '1';
    }();
    return on;
}

// WHITTY_TRACE_BINS=1 narrates tiled rendering: every change of bin selection,
// how much geometry arrived under the previous one, and - in the end-of-run
// report - which opcodes the bin test discarded.
//
// A title that renders through EDRAM in horizontal strips replays its whole
// command buffer once per strip and lets the bin selection decide what each
// replay draws. If the replays after the first one contribute nothing, the
// frame is one strip's geometry presented as a whole picture, and no other
// counter in the runtime distinguishes that from a title that drew little.
// WHITTY_ALL_BINS=1 draws every bin's geometry instead of only the selected
// one, while STILL skipping the packets that signal progress back to the guest.
//
// The console splits a frame into bins because 10 MiB of EDRAM does not hold a
// 720p colour and depth buffer at once, and replays the command buffer once per
// bin. This renderer has no such limit: it draws the whole frame into one
// full-size target, so the right amount of work is every bin's geometry, once.
//
// The signalling is a different matter. A fence, an interrupt or a wait that
// the console would not have reached is not extra work, it is a lie told to the
// guest about how far the GPU has got - and running those as well is what left
// the title rendering happily and swapping forty times before it stopped.
bool all_bins() {
    static const bool on = [] {
        const char* value = std::getenv("WHITTY_ALL_BINS");
        return value != nullptr && value[0] == '1';
    }();
    return on;
}

// Whether a predicated packet is one the guest is waiting on the result of,
// rather than work the bin selection is choosing between.
bool signals_the_guest(uint32_t opcode) {
    switch (opcode) {
        case pm4_op::wait_reg_mem:
        case pm4_op::mem_write:
        case pm4_op::cond_write:
        case pm4_op::event_write:
        case pm4_op::event_write_shd:
        case pm4_op::event_write_ext:
        case pm4_op::event_write_zpd:
        case pm4_op::interrupt:
        case pm4_op::xe_swap:
            return true;
        default:
            return false;
    }
}

bool trace_bins() {
    static const bool on = [] {
        const char* value = std::getenv("WHITTY_TRACE_BINS");
        return value != nullptr && value[0] == '1';
    }();
    return on;
}

bool trace_vertex_age() {
    static const bool on = [] {
        const char* value = std::getenv("WHITTY_TRACE_VERTEX_AGE");
        return value != nullptr && value[0] == '1';
    }();
    return on;
}

// A cheap fingerprint of a vertex buffer: the first 64 bytes, which is where
// the guest writes vertex zero. Enough to tell "this buffer has been refilled"
// from "this buffer is the one the draw meant", and cheap enough to take for
// every fetch slot of every draw.
uint64_t fingerprint_bytes(const guest_memory& memory, uint32_t address,
                           uint32_t size_bytes) {
    const uint32_t span = size_bytes < 64 ? size_bytes : 64;
    uint64_t hash = 1469598103934665603ull;
    for (uint32_t i = 0; i < span; ++i) {
        hash ^= memory.read_u8(address + i);
        hash *= 1099511628211ull;
    }
    return hash;
}

} // namespace

std::vector<draw_record::fetch_fingerprint>
command_processor::fingerprint_fetches() const {
    std::vector<draw_record::fetch_fingerprint> out;
    for (uint32_t slot = 0; slot < 96; ++slot) {
        const vertex_fetch_constant fetch =
            decode_vertex_fetch_constant(m_registers, slot);
        if (fetch.type != 3 || fetch.size_bytes == 0) continue;
        const uint32_t address = physical_to_virtual(fetch.base_address);
        if (!m_memory->committed(address, fetch.size_bytes)) continue;
        out.push_back({static_cast<uint8_t>(slot), address,
                       fingerprint_bytes(*m_memory, address,
                                         fetch.size_bytes)});
    }
    return out;
}

void command_processor::reset() {
    m_registers = register_file{};
    m_draws.clear();
    m_total_draws = 0;
    m_shaders.clear();
    m_bin_mask = ~0ull;
    m_bin_select = ~0ull;
    m_active_vertex_shader = -1;
    m_active_pixel_shader = -1;
}

void command_processor::record_draw(const draw_command& draw) {
    draw_record record;
    record.prim = draw.prim;
    record.index_count = draw.index_count;
    record.indexed = draw.source == index_source::indexed;
    if (record.indexed) record.indices = resolve_indices(draw, *m_memory);
    // An auto-generated draw needs no index list; an inline draw's indices live
    // in the command stream and are resolved by the backend when it needs them.
    record.state = m_registers; // snapshot the state this draw runs under
    if (trace_vertex_age()) record.fingerprints = fingerprint_fetches();
    record.vertex_shader = m_active_vertex_shader;
    record.pixel_shader = m_active_pixel_shader;
    m_draws.push_back(std::move(record));
    ++m_total_draws;
}

void command_processor::write_constant_range(uint32_t index,
                                             const uint32_t* values,
                                             uint32_t count) {
    // WHICH HALF OF THE ALU FILE A TITLE ACTUALLY WRITES.
    //
    // The file is 512 vectors; a vertex shader reads the first 256 and a pixel
    // shader the second. A title whose geometry comes out smeared with its
    // colours intact has had its vertex half left at zero, and that is
    // indistinguishable from a transform bug unless somebody counts. Cheap
    // enough to leave in: two compares on a path that already stores.
    const uint32_t alu_lo = constant_bank::alu;
    const uint32_t alu_split = constant_bank::alu + 256 * 4;
    const uint32_t alu_hi = constant_bank::alu + 512 * 4;
    const bool sanitize = sanitize_shader_constants();
    for (uint32_t i = 0; i < count; ++i) {
        const uint32_t at = index + i;
        uint32_t value = values[i];
        // Only the ALU (shader float constant) bank - see
        // sanitize_shader_constants() above. Every other bank's dwords are
        // control bits, indices or fixed-point data, not IEEE floats, and a
        // "NaN-shaped" bit pattern there is a legitimate value this must not
        // touch.
        if (sanitize && at >= alu_lo && at < alu_hi) {
            float as_float;
            std::memcpy(&as_float, &value, sizeof(value));
            if (!std::isfinite(as_float)) value = 0;
        }
        m_registers.set(at, value);
    }
    m_constant_writes += count;
    for (uint32_t i = 0; i < count; ++i) {
        const uint32_t at = index + i;
        if (at < alu_lo || at >= alu_hi) continue;
        if (at < alu_split) {
            ++m_vertex_constant_writes;
            if (values[i] != 0) ++m_vertex_constant_nonzero;
        } else {
            ++m_pixel_constant_writes;
        }
    }
}

void command_processor::execute_set_constant(const pm4_packet& packet) {
    // dword0 selects the bank and the offset within it; the rest are values.
    if (packet.payload.empty()) return;
    const uint32_t offset_type = packet.payload[0];
    const uint32_t index = offset_type & 0x7FF;
    const uint32_t type = (offset_type >> 16) & 0xFF;
    uint32_t base = 0;
    if (!constant_bank_base(type, base)) {
        ++m_bad_constant_banks;
        return;
    }
    write_constant_range(base + index, packet.payload.data() + 1,
                         static_cast<uint32_t>(packet.payload.size() - 1));
}

void command_processor::execute_set_constant2(const pm4_packet& packet) {
    // The same thing without the bank indirection: dword0 is a register index.
    if (packet.payload.empty()) return;
    write_constant_range(packet.payload[0] & 0xFFFF, packet.payload.data() + 1,
                         static_cast<uint32_t>(packet.payload.size() - 1));
}

void command_processor::execute_load_alu_constant(const pm4_packet& packet) {
    // Constants from a buffer rather than from the stream: address, then the
    // same bank/offset selector, then how many dwords to take.
    if (packet.payload.size() < 3) return;
    const uint32_t address = physical_to_virtual(packet.payload[0] & 0x3FFFFFFF);
    const uint32_t offset_type = packet.payload[1];
    const uint32_t index = offset_type & 0x7FF;
    const uint32_t type = (offset_type >> 16) & 0xFF;
    const uint32_t size_dwords = packet.payload[2] & 0xFFF;
    uint32_t base = 0;
    if (!constant_bank_base(type, base)) {
        ++m_bad_constant_banks;
        return;
    }
    if (size_dwords == 0) return;
    // The buffer address comes out of the command stream, so it can name memory
    // the guest never committed. That is a stream to report, not a fault.
    if (!m_memory->committed(address, size_dwords * 4)) {
        ++m_dropped_shader_loads;
        return;
    }
    if ((packet.payload[0] & 0x3u) != 0) ++m_misaligned_constant_loads;
    std::vector<uint32_t> values(size_dwords);
    for (uint32_t i = 0; i < size_dwords; ++i)
        values[i] = m_memory->read_u32(address + i * 4);
    write_constant_range(base + index, values.data(), size_dwords);
    m_loaded_constant_dwords += size_dwords;
}

void command_processor::bind_shader(shader_kind kind, uint32_t address,
                                    std::vector<uint32_t> microcode) {
    int slot = -1;
    for (std::size_t i = 0; i < m_shaders.size(); ++i) {
        if (m_shaders[i].kind == kind && m_shaders[i].address == address &&
            m_shaders[i].microcode == microcode) {
            slot = static_cast<int>(i);
            break;
        }
    }
    if (slot < 0) {
        slot = static_cast<int>(m_shaders.size());
        m_shaders.push_back(
            shader_upload{kind, address, std::move(microcode)});
    }
    if (kind == shader_kind::vertex)
        m_active_vertex_shader = slot;
    else
        m_active_pixel_shader = slot;
}

void command_processor::execute_reg_rmw(const pm4_packet& packet) {
    // info, and-operand, or-operand. The top two bits of `info` say whether
    // each operand is an immediate or names another register to read. Register
    // indices here are 13 bits, so this reaches only the first 0x2000 - which
    // is where the shader-upload and EDRAM registers it is used for live.
    if (packet.payload.size() < 3) return;
    const uint32_t info = packet.payload[0];
    const uint32_t and_operand = packet.payload[1];
    const uint32_t or_operand = packet.payload[2];
    const uint32_t index = info & 0x1FFF;
    uint32_t value = m_registers.get(index);
    value &= ((info >> 31) & 0x1) ? m_registers.get(and_operand & 0x1FFF)
                                  : and_operand;
    value |= ((info >> 30) & 0x1) ? m_registers.get(or_operand & 0x1FFF)
                                  : or_operand;
    write_register(index, value);
}

void command_processor::execute_set_bin(const pm4_packet& packet) {
    const uint64_t select_before = m_bin_select;
    const uint64_t mask_before = m_bin_mask;
    // The whole-value forms carry the high dword first.
    const auto pair = [&]() -> uint64_t {
        return (static_cast<uint64_t>(packet.payload[0]) << 32) |
               packet.payload[1];
    };
    const auto low = [](uint64_t current, uint32_t value) {
        return (current & 0xFFFFFFFF00000000ull) | value;
    };
    const auto high = [](uint64_t current, uint32_t value) {
        return (current & 0xFFFFFFFFull) | (static_cast<uint64_t>(value) << 32);
    };
    switch (packet.opcode) {
        case pm4_op::set_bin_mask:
            if (packet.payload.size() >= 2) m_bin_mask = pair();
            break;
        case pm4_op::set_bin_select:
            if (packet.payload.size() >= 2) m_bin_select = pair();
            break;
        case pm4_op::set_bin_mask_lo:
            if (!packet.payload.empty())
                m_bin_mask = low(m_bin_mask, packet.payload[0]);
            break;
        case pm4_op::set_bin_mask_hi:
            if (!packet.payload.empty())
                m_bin_mask = high(m_bin_mask, packet.payload[0]);
            break;
        case pm4_op::set_bin_select_lo:
            if (!packet.payload.empty())
                m_bin_select = low(m_bin_select, packet.payload[0]);
            break;
        case pm4_op::set_bin_select_hi:
            if (!packet.payload.empty())
                m_bin_select = high(m_bin_select, packet.payload[0]);
            break;
        default:
            break;
    }
    if (!trace_bins()) return;
    // Only a change of SELECTION is narrated. The mask moves per draw - it says
    // which bins the next primitive touches - and printing that is a line per
    // draw; the selection moves per replay, which is the granularity the
    // question is asked at.
    if (m_bin_select == select_before && m_bin_mask == mask_before) return;
    if (m_bin_select != select_before) {
        std::printf("  [bins] select %016llX -> %016llX (mask %016llX, "
                    "%s); %llu draw(s) under the previous selection\n",
                    static_cast<unsigned long long>(select_before),
                    static_cast<unsigned long long>(m_bin_select),
                    static_cast<unsigned long long>(m_bin_mask),
                    (m_bin_select & m_bin_mask) != 0 ? "packets pass"
                                                     : "PACKETS SKIPPED",
                    static_cast<unsigned long long>(
                        m_total_draws - m_draws_at_last_bin_change));
        m_draws_at_last_bin_change = m_total_draws;
        return;
    }
    // A mask change is worth one line only when it flips whether anything can
    // pass at all, which is the transition that loses a replay.
    const bool passed = (select_before & mask_before) != 0;
    const bool passes = (m_bin_select & m_bin_mask) != 0;
    if (passed != passes)
        std::printf("  [bins] mask %016llX -> %016llX (select %016llX) - "
                    "packets now %s\n",
                    static_cast<unsigned long long>(mask_before),
                    static_cast<unsigned long long>(m_bin_mask),
                    static_cast<unsigned long long>(m_bin_select),
                    passes ? "pass" : "SKIPPED");
}

void command_processor::execute_im_load(const pm4_packet& packet) {
    // dword0 = microcode address with the stage in its low two bits,
    // dword1 = start in the high half, dword count in the low half.
    if (packet.payload.size() < 2) return;
    const uint32_t addr_type = packet.payload[0];
    const uint32_t kind_bits = addr_type & 0x3;
    // Only vertex and pixel exist; anything else names no stage, so there is
    // nothing to bind it to.
    if (kind_bits > 1) {
        ++m_dropped_shader_loads;
        return;
    }
    const auto kind = static_cast<shader_kind>(kind_bits);
    const uint32_t address = physical_to_virtual(addr_type & ~0x3u);
    const uint32_t size_dwords = packet.payload[1] & 0xFFFF;
    if (size_dwords == 0) return;
    if (!m_memory->committed(address, size_dwords * 4)) {
        ++m_dropped_shader_loads;
        return;
    }
    // Microcode is stored big-endian like everything else the guest wrote;
    // the disassembler wants host dword order.
    std::vector<uint32_t> microcode(size_dwords);
    for (uint32_t i = 0; i < size_dwords; ++i)
        microcode[i] = m_memory->read_u32(address + i * 4);
    bind_shader(kind, address, std::move(microcode));
}

void command_processor::execute_im_load_immediate(const pm4_packet& packet) {
    // dword0 = stage, dword1 = start/size, then the microcode itself.
    if (packet.payload.size() < 2) return;
    const uint32_t kind_bits = packet.payload[0];
    if (kind_bits > 1) {
        ++m_dropped_shader_loads;
        return;
    }
    const uint32_t size_dwords = packet.payload[1] & 0xFFFF;
    if (size_dwords == 0) return;
    // A declared size longer than the packet is a truncated upload; binding
    // the short read would produce a shader that decodes as noise.
    if (packet.payload.size() < 2 + size_dwords) {
        ++m_dropped_shader_loads;
        return;
    }
    std::vector<uint32_t> microcode(packet.payload.begin() + 2,
                                    packet.payload.begin() + 2 + size_dwords);
    bind_shader(static_cast<shader_kind>(kind_bits), 0, std::move(microcode));
}

bool command_processor::process_packets(const std::vector<pm4_packet>& packets,
                                        std::string& error, int depth) {
    for (const pm4_packet& packet : packets) {
        // Register writes (type 0 and type 1) keep the state current.
        for (const register_write& write : packet.register_writes)
            write_register(write.index, write.value);

        if (packet.type == packet_type::type3 &&
            packet.opcode < kOpcodeCount)
            ++m_opcode_counts[packet.opcode];

        // A predicated type-3 packet belongs to a subset of the frame's bins.
        // Direct3D replays the whole command buffer once per bin and lets this
        // bit select what each replay actually does, so running a packet whose
        // bins are not selected draws the same geometry into every tile.
        if (packet.type == packet_type::type3 && packet.predicated &&
            (m_bin_select & m_bin_mask) == 0 && !ignore_predication() &&
            !(all_bins() && !signals_the_guest(packet.opcode))) {
            ++m_predicated_skips;
            if (packet.opcode < kOpcodeCount)
                ++m_predicated_skip_counts[packet.opcode];
            // TEMP-DIAG: WHITTY_DUMP_BIN_SKIPS, widened from draws-only to
            // every predicated packet this drops - a SET_CONSTANT this skips
            // leaves whatever a PRIOR shader's constants were in the bank,
            // and a draw a few packets later that is NOT itself bin-filtered
            // would then run with stale/wrong transform or colour data rather
            // than being skipped outright. That reads as "geometry vanished"
            // exactly like a dropped draw does, but the fix is different (do
            // not drop the constant load) and this is the only way to tell
            // the two apart. Still pure printf against existing state.
            if (dump_bin_skips()) {
                static uint64_t skip_dump_count = 0;
                if (skip_dump_count < 200000) {
                    ++skip_dump_count;
                    const viewport_state vp = decode_viewport(m_registers);
                    std::printf(
                        "  [gpu] BINSKIP #%llu opcode=0x%02X is_draw=%d "
                        "draw#%llu bin_mask=%016llX bin_select=%016llX "
                        "viewport center=(%.1f,%.1f) half=(%.1f,%.1f)\n",
                        static_cast<unsigned long long>(skip_dump_count),
                        packet.opcode, packet.is_draw ? 1 : 0,
                        static_cast<unsigned long long>(m_total_draws),
                        static_cast<unsigned long long>(m_bin_mask),
                        static_cast<unsigned long long>(m_bin_select),
                        static_cast<double>(vp.offset[0]),
                        static_cast<double>(vp.offset[1]),
                        static_cast<double>(vp.scale[0]),
                        static_cast<double>(vp.scale[1]));
                }
            }
            if (packet.is_draw) {
                // The only draw this runtime discards before it becomes a draw
                // record, and so the only one the frame renderer's accounting
                // cannot see. Said ONCE per run rather than per draw - the
                // skips run to hundreds of thousands - because what is worth
                // knowing is that it happens at all: a run where this line
                // never appears is a run in which no draw was discarded here,
                // which is the half of "are we missing draws" that lives above
                // the renderer.
                if (m_predicated_draw_skips == 0 && draw_accounting_enabled())
                    std::printf("  [gpu] draw accounting: a DRAW was skipped "
                                "by bin selection (bin_mask %016llX, "
                                "bin_select %016llX) - correct for tiled "
                                "rendering, and the running total is "
                                "predicated_draw_skips()\n",
                                static_cast<unsigned long long>(m_bin_mask),
                                static_cast<unsigned long long>(m_bin_select));
                ++m_predicated_draw_skips;
            }
            continue;
        }

        if (packet.is_draw) {
            record_draw(packet.draw);
            continue;
        }
        if (packet.is_indirect_buffer) {
            if (depth >= kMaxIndirectDepth) {
                error = "indirect buffer nesting is too deep";
                return false;
            }
            // Addresses inside the command stream are PHYSICAL - the title
            // fills these in from MmGetPhysicalAddress, because the GPU has no
            // view of the CPU's virtual mapping. Following one as if it were a
            // virtual address reads whatever happens to live at that number,
            // which parses as plausible garbage rather than failing.
            if (fence_trace_enabled())
                std::printf("  [ib] phys=%08X dwords=%u\n",
                            packet.indirect.address,
                            packet.indirect.length_dwords);
            if (!process_at(physical_to_virtual(packet.indirect.address),
                            packet.indirect.length_dwords * 4, error,
                            depth + 1))
                return false;
            continue;
        }
        if (packet.type != packet_type::type3) continue;

        switch (packet.opcode) {
            case pm4_op::mem_write:
            case pm4_op::event_write_shd:
            case pm4_op::event_write_ext:
            case pm4_op::interrupt:
                execute_write_back(packet);
                break;
            case pm4_op::set_constant:
                execute_set_constant(packet);
                break;
            case pm4_op::set_constant2:
                execute_set_constant2(packet);
                break;
            case pm4_op::load_alu_constant:
                execute_load_alu_constant(packet);
                break;
            case pm4_op::im_load:
                execute_im_load(packet);
                break;
            case pm4_op::im_load_immediate:
                execute_im_load_immediate(packet);
                break;
            case pm4_op::reg_rmw:
                execute_reg_rmw(packet);
                break;
            case pm4_op::set_bin_mask:
            case pm4_op::set_bin_select:
            case pm4_op::set_bin_mask_lo:
            case pm4_op::set_bin_mask_hi:
            case pm4_op::set_bin_select_lo:
            case pm4_op::set_bin_select_hi:
                execute_set_bin(packet);
                break;
            case pm4_op::event_write_zpd:
                execute_event_write_zpd(packet);
                break;
            case pm4_op::xe_swap:
                execute_swap(packet);
                break;
            // Commands that carry no state this side of the pipeline. They are
            // counted as handled because ignoring them is the correct
            // behaviour, not an omission: a filler word, a synchronisation the
            // host has already satisfied by running the stream in order, or a
            // hint to hardware caches we do not model.
            case pm4_op::nop:
            case pm4_op::me_init:
            case pm4_op::wait_reg_mem:
            case pm4_op::event_write:
            case pm4_op::invalidate_state:
            case pm4_op::viz_query:
            case pm4_op::cond_write:
            case pm4_op::context_update:
                break;
            default:
                // Anything else is state the frame may need and is not
                // getting. Counted per opcode so bring-up can see which.
                if (packet.opcode < kOpcodeCount)
                    ++m_unhandled_counts[packet.opcode];
                break;
        }
    }
    return true;
}

namespace {

// The GPU swaps a value as it writes it, in the mode the low two bits of the
// destination address carry. Transcribed from Xenia's GpuSwap.
uint32_t gpu_swap(uint32_t value, uint32_t endianness) noexcept {
    switch (endianness & 0x3) {
        case 1: // 8in16 - swap the bytes within each half word
            return ((value << 8) & 0xFF00FF00u) | ((value >> 8) & 0x00FF00FFu);
        case 2: // 8in32 - swap all four bytes
            return __builtin_bswap32(value);
        case 3: // 16in32 - swap the half words
            return (value >> 16) | (value << 16);
        default:
            return value;
    }
}

} // namespace

void command_processor::write_gpu_dword(uint32_t address_and_endian,
                                        uint32_t value) {
    const uint32_t endianness = address_and_endian & 0x3;
    const uint32_t address = physical_to_virtual(address_and_endian & ~0x3u);
    // The address comes out of the command stream, which is just data the
    // title wrote - it can be wrong. Storing through it unchecked would fault
    // inside the GPU rather than reporting a bad stream.
    if (!m_memory->committed(address, 4)) {
        if (m_dropped_writes == 0) m_first_dropped_write = address;
        ++m_dropped_writes;
        return;
    }
    // Xenia stores the swapped value raw, into memory a guest big-endian load
    // will then reverse; our write_u32 takes the value the guest will SEE, so
    // that reversal has to be applied here. For the usual 8in32 mode the two
    // cancel and the guest reads back exactly the dword the packet carried,
    // which is what makes this usable as a fence.
    m_memory->write_u32(address, __builtin_bswap32(gpu_swap(value, endianness)));
    ++m_memory_writes;
    if (fence_trace_enabled())
        std::printf("  [fence] %08X <- %08X\n", address, value);
}

void command_processor::write_register(uint32_t index, uint32_t value) {
    m_registers.set(index, value);
    // THE CONSTANT WINDOW, reported the first time a title sets it.
    //
    // The Xenos lets a title choose where in the 512-vector ALU file each
    // shader stage's constants live, and by how much. The translator assumes
    // the default - vertex at 0, pixel at 256 - which is right for every title
    // converted so far and produces a transform of all zeros for one that
    // moves the window. Printed rather than assumed, because the two cases are
    // indistinguishable from the picture: a moved window looks exactly like a
    // transform bug.
    if (index == 0x2307 || index == 0x2308) {
        static std::mutex mutex;
        static std::set<uint32_t> seen;
        bool first = false;
        {
            const std::lock_guard<std::mutex> lock(mutex);
            first = seen.insert((index << 24) ^ value).second;
        }
        if (first)
            std::printf("  [gpu] %s = %08X (base %u, size %u)\n",
                        index == 0x2307 ? "SQ_VS_CONST" : "SQ_PS_CONST", value,
                        value & 0x1FF, (value >> 12) & 0x1FF);
    }
    // Counted here as well as in write_constant_range, because a title can
    // reach the ALU file BOTH ways: through SET_CONSTANT's bank selector, and
    // by writing the registers directly from a type-0 packet. Counting only
    // one of them reports zero for a title that uses the other, which is a
    // measurement that looks like a finding.
    if (index >= constant_bank::alu && index < constant_bank::alu + 512 * 4) {
        if (index < constant_bank::alu + 256 * 4) {
            ++m_vertex_constant_writes;
            // NON-ZERO separately, because a title that clears its constant
            // bank every frame and then fills it writes both, and a count that
            // does not tell them apart says "4.2 million writes arrived" for a
            // bank that is entirely zero at every draw.
            if (value != 0) ++m_vertex_constant_nonzero;
        } else {
            ++m_pixel_constant_writes;
        }
    }
    if (index < reg::scratch_reg0 || index > reg::scratch_reg7) return;
    // A scratch register the title armed in SCRATCH_UMSK is also a store into
    // guest memory, at SCRATCH_ADDR + n*4. That is not an optimisation the
    // hardware happens to offer - it is how Direct3D passes the CPU a value
    // AT the point the GPU reaches it, and Hydro Thunder Hurricane's D3D
    // depends on it for the graphics interrupt: sub_822D5D20 writes the ISR
    // routine into SCRATCH_REG4 and its argument into SCRATCH_REG5 and then
    // raises an INTERRUPT packet, and the handler it registered with
    // VdSetGraphicsInterruptCallback calls whatever those two words landed in.
    // Ignore the mirror and that slot stays null, the ISR does nothing, and the
    // submissions D3D queued behind it are never retired. Xenia does this in
    // CommandProcessor::HandleSpecialRegisterWrite.
    const uint32_t slot = index - reg::scratch_reg0;
    if (((m_registers.get(reg::scratch_umsk) >> slot) & 0x1) == 0) return;
    // SCRATCH_ADDR is physical, like every other address in the stream.
    const uint32_t address =
        physical_to_virtual(m_registers.get(reg::scratch_addr) + slot * 4);
    if (!m_memory->committed(address, 4)) {
        if (m_dropped_writes == 0) m_first_dropped_write = address;
        ++m_dropped_writes;
        return;
    }
    // write_u32 takes the value the guest will see, which is what Xenia's
    // store_and_swap leaves behind - no swap mode is involved here, unlike the
    // write-back packets, whose address carries one in its low two bits.
    m_memory->write_u32(address, value);
    ++m_scratch_writes;
    if (fence_trace_enabled())
        std::printf("  [scratch] reg%u -> %08X = %08X\n", slot, address, value);
}

void command_processor::execute_write_back(const pm4_packet& packet) {
    const std::vector<uint32_t>& payload = packet.payload;
    switch (packet.opcode) {
        case pm4_op::mem_write: {
            // address, then one dword per remaining payload word.
            if (payload.empty()) return;
            uint32_t address = payload[0];
            for (std::size_t i = 1; i < payload.size(); ++i) {
                write_gpu_dword(address, payload[i]);
                address += 4;
            }
            break;
        }
        case pm4_op::event_write_shd: {
            // initiator, address, value. Bit 31 of the initiator asks for the
            // GPU's own frame counter instead of the literal value - which is
            // how a title watches the GPU make progress rather than just
            // reaching a point.
            if (payload.size() < 3) return;
            const uint32_t initiator = payload[0];
            m_registers.set(reg::vgt_event_initiator, initiator & 0x3F);
            const uint32_t value =
                ((initiator >> 31) & 0x1) ? m_counter : payload[2];
            write_gpu_dword(payload[1], value);
            break;
        }
        case pm4_op::event_write_ext: {
            // initiator, address. The GPU reports the screen extents a draw
            // touched; nothing downstream uses them, but the title reads the
            // block, so it gets the whole-surface answer Xenia gives.
            if (payload.size() < 2) return;
            m_registers.set(reg::vgt_event_initiator, payload[0] & 0x3F);
            static constexpr uint16_t kExtents[6] = {0, 0x2000 >> 3, 0,
                                                     0x2000 >> 3, 0, 1};
            const uint32_t endianness = payload[1] & 0x3;
            uint32_t address = payload[1] & ~0x3u;
            for (int i = 0; i < 3; ++i) {
                const uint32_t pair = (static_cast<uint32_t>(kExtents[i * 2])
                                       << 16) |
                                      kExtents[i * 2 + 1];
                write_gpu_dword(address | endianness, pair);
                address += 4;
            }
            break;
        }
        case pm4_op::interrupt: {
            // One bit per CPU. Raising it is the point of the packet.
            if (payload.empty() || !m_interrupt_handler) return;
            const uint32_t cpu_mask = payload[0];
            for (uint32_t cpu = 0; cpu < 6; ++cpu) {
                if ((cpu_mask & (1u << cpu)) == 0) continue;
                ++m_interrupts;
                m_interrupt_handler(1, cpu);
            }
            break;
        }
        default:
            break;
    }
}

// The occlusion query's result record: eight LITTLE-endian dwords, because
// Direct3D swaps them on the way in and the title reads them back the same way.
// Transcribed from Xenia's xe_gpu_depth_sample_counts / XenosZPDReport.
namespace {
// One record; a query's slot is two of them, END at the slot base and BEGIN at
// +0x20, which is why the packet's own address has to come from the register
// rather than being fixed per query.
constexpr uint32_t kZpdRecordBytes = 0x20;
// What Direct3D leaves in a record it is waiting on. Present as written by the
// guest (big-endian FFFFFEED) or already byte-swapped, so both are accepted -
// which is what Xenia does, for the same reason.
constexpr uint32_t kZpdPendingBig = 0xFFFFFEEDu;
constexpr uint32_t kZpdPendingLittle = 0xEDFEFFFFu;
// Field offsets within the record.
constexpr uint32_t kZpdTotalA = 0;
constexpr uint32_t kZpdZFailA = 8;
constexpr uint32_t kZpdZPassA = 16;
} // namespace

void command_processor::execute_swap(const pm4_packet& packet) {
    // Signature first. These 64 words are ring memory the title reserved, not
    // memory anybody cleared, so an unfilled reserve holds whatever the ring
    // held a lap ago - which can decode as this opcode. Ending a frame on one
    // of those would cut the stream at an arbitrary point, so a packet that
    // does not say 'SWAP' is not a frame boundary and is left alone.
    if (packet.payload.size() < 4 || packet.payload[0] != kSwapSignature) return;
    ++m_swaps;
    if (m_swap_handler)
        m_swap_handler(packet.payload[1], packet.payload[2], packet.payload[3]);
}

void command_processor::execute_event_write_zpd(const pm4_packet& packet) {
    ++m_occlusion_queries;
    if (packet.payload.empty()) return;
    m_registers.set(reg::vgt_event_initiator, packet.payload[0] & 0x3F);

    // The packet names no address; the query's record is wherever
    // RB_SAMPLE_COUNT_ADDR pointed when it ran.
    const uint32_t report = m_registers.get(reg::rb_sample_count_addr);
    const uint32_t record = physical_to_virtual(report & ~(kZpdRecordBytes - 1));
    if ((report & ~(kZpdRecordBytes - 1)) == 0) return;
    if (!m_memory->committed(record, kZpdRecordBytes)) return;

    // Only a record the guest has marked pending is answered. Direct3D writes
    // its sentinel into the record before issuing the query and then polls for
    // it to change, so the sentinel IS the question - and writing over a record
    // that does not carry one would be answering a question nobody asked, which
    // on a shared slot means overwriting a result the title has not read yet.
    auto read_le = [&](uint32_t offset) {
        return __builtin_bswap32(m_memory->read_u32(record + offset));
    };
    const uint32_t zpass = read_le(kZpdZPassA);
    const uint32_t zfail = read_le(kZpdZFailA);
    const bool pending = zpass == kZpdPendingBig || zpass == kZpdPendingLittle ||
                         zfail == kZpdPendingBig || zfail == kZpdPendingLittle;
    if (!pending) return;

    // There is no host occlusion query behind this, so the count is invented -
    // which is Xenia's default ("fake") and for the same reason: a title that
    // gets no answer at all does not fall back to drawing everything, it sits
    // on the sentinel forever. A walking value between 80 and 100 is what
    // Xenia writes; it has to be non-zero, or every query reports "nothing was
    // visible" and the title culls the whole scene.
    m_occlusion_sample_count = (m_occlusion_sample_count <= 80)
                                   ? 100
                                   : m_occlusion_sample_count - 1;
    const uint32_t samples = __builtin_bswap32(m_occlusion_sample_count);
    for (uint32_t offset = 0; offset < kZpdRecordBytes; offset += 4)
        m_memory->write_u32(record + offset, 0);
    m_memory->write_u32(record + kZpdTotalA, samples);
    m_memory->write_u32(record + kZpdZPassA, samples);
    ++m_occlusion_queries_answered;
}

bool command_processor::process_at(uint32_t address, uint32_t size_bytes,
                                   std::string& error, int depth,
                                   pending_packet* pending) {
    if (pending != nullptr) *pending = pending_packet{};
    if (size_bytes == 0) return true;
    const void* host = m_memory->host(address, size_bytes);
    if (!host) {
        error = "command buffer is not in committed guest memory";
        return false;
    }
    std::vector<pm4_packet> packets;
    if (!parse_pm4(static_cast<const uint8_t*>(host), size_bytes, packets, error,
                   pending))
        return false;
    if (fence_trace_enabled() && depth > 0) {
        std::string ops;
        for (const pm4_packet& packet : packets) {
            char entry[16];
            std::snprintf(entry, sizeof(entry), " %u/%02X",
                          static_cast<unsigned>(packet.type), packet.opcode);
            ops += entry;
        }
        std::printf("  [ib] %zu packet(s):%s\n", packets.size(), ops.c_str());
    }
    return process_packets(packets, error, depth);
}

} // namespace whitty_xenon::gpu
