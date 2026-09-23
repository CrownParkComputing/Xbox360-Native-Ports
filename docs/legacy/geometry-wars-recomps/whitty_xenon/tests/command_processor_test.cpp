// Unit tests for the command processor.
//
// The processor is driven exactly as the console drives it: a PM4 command buffer
// is laid down in guest memory and processed, and the register state and draw
// records it produces are checked. The interesting cases are a draw capturing
// the register state in force at that moment (a later register write must not
// change an earlier draw's snapshot), an indexed draw resolving its indices out
// of memory, and a jump into a secondary command buffer being followed.
#include "whitty_xenon/gpu/command_processor.h"
#include "whitty_xenon/gpu/register_file.h"
#include "whitty_xenon/memory.h"

#include <cassert>
#include <cstdint>
#include <cstdio>
#include <string>
#include <vector>

using namespace whitty_xenon;
using namespace whitty_xenon::gpu;

namespace {

// Writes big-endian dwords (the command stream's order) into guest memory.
struct writer {
    guest_memory& memory;
    uint32_t address;
    void dword(uint32_t v) {
        memory.write_u8(address + 0, static_cast<uint8_t>(v >> 24));
        memory.write_u8(address + 1, static_cast<uint8_t>(v >> 16));
        memory.write_u8(address + 2, static_cast<uint8_t>(v >> 8));
        memory.write_u8(address + 3, static_cast<uint8_t>(v));
        address += 4;
    }
};

uint32_t type0(uint32_t base, uint32_t count) { return ((count - 1) << 16) | (base & 0x7FFF); }
uint32_t type3(uint32_t opcode, uint32_t count) {
    return 0xC0000000u | ((count - 1) << 16) | ((opcode & 0x7F) << 8);
}

struct fixture {
    guest_memory memory;
    static constexpr uint32_t cmd = 0x20000000;
    // The index buffer, like the secondary command buffer below, is named in
    // the command stream by its PHYSICAL address and read through the alias.
    static constexpr uint32_t idx_physical = 0x00020000;
    static constexpr uint32_t idx = kPhysicalBase + idx_physical;
    // The secondary command buffer lives in the physical-alias region, because
    // that is where a title really puts one: the address it writes into the
    // command stream is physical, and the GPU reads it back through the alias.
    static constexpr uint32_t ib_physical = 0x00010000;
    static constexpr uint32_t ib = kPhysicalBase + ib_physical;
    fixture() {
        std::string error;
        assert(memory.initialize(error));
        assert(memory.commit(cmd, 0x30000, error));
        assert(memory.commit(idx, 0x1000, error));
        assert(memory.commit(ib, 0x1000, error));
    }
};

void test_register_writes_update_state() {
    fixture fx;
    writer w{fx.memory, fixture::cmd};
    w.dword(type0(reg::rb_surface_info, 2));
    w.dword(0x11112222); // RB_SURFACE_INFO
    w.dword(0x33334444); // RB_COLOR_INFO

    command_processor cp(fx.memory);
    std::string error;
    assert(cp.process(fixture::cmd, 3 * 4, error));
    assert(cp.registers().get(reg::rb_surface_info) == 0x11112222);
    assert(cp.registers().get(reg::rb_color_info) == 0x33334444);
    assert(cp.draws().empty());
}

void test_auto_draw_captures_state() {
    fixture fx;
    writer w{fx.memory, fixture::cmd};
    // Set a render target, draw, then change the render target.
    w.dword(type0(reg::rb_color_info, 1));
    w.dword(0xAAAA0001);
    w.dword(type3(pm4_op::draw_indx, 2)); // auto triangle-list, 6 indices
    w.dword(0);
    w.dword((6u << 16) | (2u << 6) | 0x04);
    w.dword(type0(reg::rb_color_info, 1)); // changed AFTER the draw
    w.dword(0xBBBB0002);

    command_processor cp(fx.memory);
    std::string error;
    assert(cp.process(fixture::cmd, 7 * 4, error));
    assert(cp.draws().size() == 1);
    const draw_record& d = cp.draws()[0];
    assert(d.prim == primitive_type::triangle_list);
    assert(d.index_count == 6);
    assert(!d.indexed);
    // The snapshot holds the value at draw time, not the later overwrite.
    assert(d.state.get(reg::rb_color_info) == 0xAAAA0001);
    assert(cp.registers().get(reg::rb_color_info) == 0xBBBB0002);
}

void test_indexed_draw_resolves_indices() {
    fixture fx;
    // A 16-bit index buffer (big-endian) with an 8in16 fetch swap.
    const uint16_t src[] = {0, 1, 2, 2, 1, 3};
    for (uint32_t i = 0; i < 6; ++i) fx.memory.write_u16(fixture::idx + i * 2, src[i]);

    writer w{fx.memory, fixture::cmd};
    w.dword(type3(pm4_op::draw_indx, 4));
    w.dword(0);
    w.dword((6u << 16) | (0u << 6) | 0x04); // src_sel 0 (indexed), 16-bit, tri list
    w.dword(fixture::idx_physical);          // index buffer address (physical)
    // size word: 8in16 endian in top bits, index count in low 24.
    w.dword((static_cast<uint32_t>(endian::swap_8in16) << 30) | 6);

    command_processor cp(fx.memory);
    std::string error;
    assert(cp.process(fixture::cmd, 5 * 4, error));
    assert(cp.draws().size() == 1);
    const draw_record& d = cp.draws()[0];
    assert(d.indexed);
    assert(d.indices.size() == 6);
    assert(d.indices[0] == 0 && d.indices[3] == 2 && d.indices[5] == 3);
}

void test_indirect_buffer_is_followed() {
    fixture fx;
    assert(fx.memory.committed(fixture::ib, 0x1000));
    // Secondary buffer: one auto draw.
    writer sub{fx.memory, fixture::ib};
    sub.dword(type3(pm4_op::draw_indx, 2));
    sub.dword(0);
    sub.dword((3u << 16) | (2u << 6) | 0x04);

    // Primary buffer: jump into the secondary buffer. The address in the
    // command stream is PHYSICAL - what MmGetPhysicalAddress would have given
    // the title - because the GPU reads through the physical alias and has no
    // view of the CPU's virtual mapping.
    writer w{fx.memory, fixture::cmd};
    w.dword(type3(pm4_op::indirect_buffer, 2));
    w.dword(fixture::ib_physical);
    w.dword(3); // length in dwords

    command_processor cp(fx.memory);
    std::string error;
    assert(cp.process(fixture::cmd, 3 * 4, error));
    // The draw from the secondary buffer was recorded.
    assert(cp.draws().size() == 1);
    assert(cp.draws()[0].index_count == 3);
}

void test_uncommitted_buffer_is_rejected() {
    fixture fx;
    command_processor cp(fx.memory);
    std::string error;
    assert(!cp.process(0x50000000, 16, error)); // never committed
    assert(!error.empty());
}

void test_reset_clears_state() {
    fixture fx;
    writer w{fx.memory, fixture::cmd};
    w.dword(type0(reg::rb_color_info, 1));
    w.dword(0x1234);
    command_processor cp(fx.memory);
    std::string error;
    assert(cp.process(fixture::cmd, 2 * 4, error));
    assert(cp.registers().get(reg::rb_color_info) == 0x1234);
    cp.reset();
    assert(cp.registers().get(reg::rb_color_info) == 0);
    assert(cp.draws().empty());
}

// SET_CONSTANT names a bank rather than a register index. Getting the bank
// bases wrong puts a title's vertex fetch constants somewhere the render path
// does not look, which reads as "the title bound no vertex buffer".
void test_set_constant_writes_each_bank() {
    fixture fx;
    writer w{fx.memory, fixture::cmd};
    struct bank_case {
        uint32_t type;
        uint32_t offset;
        uint32_t expected_index;
    };
    const bank_case cases[] = {
        {0, 0x12, constant_bank::alu + 0x12},
        {1, 0x06, constant_bank::fetch + 0x06},
        {2, 0x01, constant_bank::boolean + 0x01},
        {3, 0x02, constant_bank::loop + 0x02},
        {4, 0x81, constant_bank::registers + 0x81},
    };
    for (const bank_case& c : cases) {
        w.dword(type3(pm4_op::set_constant, 3));
        w.dword((c.type << 16) | c.offset);
        w.dword(0xAABBCC00 | c.type);
        w.dword(0xDDEEFF00 | c.type);
    }
    command_processor cp(fx.memory);
    std::string error;
    assert(cp.process(fixture::cmd, 4 * 5 * 4, error));
    for (const bank_case& c : cases) {
        assert(cp.registers().get(c.expected_index) == (0xAABBCC00 | c.type));
        assert(cp.registers().get(c.expected_index + 1) ==
               (0xDDEEFF00 | c.type));
    }
    assert(cp.constant_writes() == 10);
    assert(cp.bad_constant_banks() == 0);
}

// A selector naming no bank must be reported, not written somewhere arbitrary.
void test_unknown_constant_bank_is_reported() {
    fixture fx;
    writer w{fx.memory, fixture::cmd};
    w.dword(type3(pm4_op::set_constant, 2));
    w.dword((0x7Fu << 16) | 0x10);
    w.dword(0xDEADBEEF);
    command_processor cp(fx.memory);
    std::string error;
    assert(cp.process(fixture::cmd, 3 * 4, error));
    assert(cp.bad_constant_banks() == 1);
    assert(cp.constant_writes() == 0);
}

void test_set_constant2_writes_registers_directly() {
    fixture fx;
    writer w{fx.memory, fixture::cmd};
    w.dword(type3(pm4_op::set_constant2, 2));
    w.dword(reg::rb_color_info);
    w.dword(0x5150);
    command_processor cp(fx.memory);
    std::string error;
    assert(cp.process(fixture::cmd, 3 * 4, error));
    assert(cp.registers().get(reg::rb_color_info) == 0x5150);
}

// LOAD_ALU_CONSTANT takes its values from a buffer, and the address it names is
// physical - following it as a virtual address reads unrelated memory.
void test_load_alu_constant_reads_from_physical_memory() {
    fixture fx;
    std::string error;
    assert(fx.memory.commit(fixture::ib, 0x1000, error));
    for (uint32_t i = 0; i < 4; ++i)
        fx.memory.write_u32(fixture::ib + i * 4, 0x1000 + i);
    writer w{fx.memory, fixture::cmd};
    w.dword(type3(pm4_op::load_alu_constant, 3));
    w.dword(fixture::ib_physical);
    w.dword((1u << 16) | 0x08); // FETCH bank, offset 8
    w.dword(4);
    command_processor cp(fx.memory);
    assert(cp.process(fixture::cmd, 4 * 4, error));
    for (uint32_t i = 0; i < 4; ++i)
        assert(cp.registers().get(constant_bank::fetch + 8 + i) == 0x1000 + i);
}

// A shader is a run of dwords the stream hands to the sequencer. IM_LOAD points
// at it in physical memory; the microcode is big-endian there and the
// disassembler wants host order.
void test_im_load_captures_microcode_from_memory() {
    fixture fx;
    std::string error;
    assert(fx.memory.commit(fixture::ib, 0x1000, error));
    const uint32_t ucode[] = {0x00000102, 0x10000000, 0xC2000000};
    for (uint32_t i = 0; i < 3; ++i)
        fx.memory.write_u32(fixture::ib + i * 4, ucode[i]);
    writer w{fx.memory, fixture::cmd};
    w.dword(type3(pm4_op::im_load, 2));
    w.dword(fixture::ib_physical | 0x1); // pixel shader
    w.dword(3);                          // start 0, three dwords
    command_processor cp(fx.memory);
    assert(cp.process(fixture::cmd, 3 * 4, error));
    assert(cp.shaders().size() == 1);
    assert(cp.shaders()[0].kind == shader_kind::pixel);
    assert(cp.shaders()[0].microcode ==
           std::vector<uint32_t>(ucode, ucode + 3));
    assert(cp.active_pixel_shader() == 0);
    assert(cp.active_vertex_shader() == -1);
}

void test_im_load_immediate_captures_inline_microcode() {
    fixture fx;
    writer w{fx.memory, fixture::cmd};
    w.dword(type3(pm4_op::im_load_immediate, 4));
    w.dword(0); // vertex shader
    w.dword(2); // start 0, two dwords
    w.dword(0xAAAA0001);
    w.dword(0xBBBB0002);
    command_processor cp(fx.memory);
    std::string error;
    assert(cp.process(fixture::cmd, 5 * 4, error));
    assert(cp.shaders().size() == 1);
    assert(cp.shaders()[0].kind == shader_kind::vertex);
    assert(cp.shaders()[0].microcode ==
           std::vector<uint32_t>({0xAAAA0001, 0xBBBB0002}));
    assert(cp.active_vertex_shader() == 0);
}

// A title rebinds the same shaders every draw. Storing each upload separately
// would grow without bound over a run.
void test_repeated_shader_upload_reuses_its_slot() {
    fixture fx;
    writer w{fx.memory, fixture::cmd};
    for (int i = 0; i < 3; ++i) {
        w.dword(type3(pm4_op::im_load_immediate, 3));
        w.dword(0);
        w.dword(1);
        w.dword(0x12345678);
    }
    command_processor cp(fx.memory);
    std::string error;
    assert(cp.process(fixture::cmd, 3 * 4 * 4, error));
    assert(cp.shaders().size() == 1);
}

// A draw carries the shaders bound at the moment it was issued, so a later
// upload cannot change what an earlier draw was drawn with.
void test_draw_records_the_bound_shaders() {
    fixture fx;
    writer w{fx.memory, fixture::cmd};
    w.dword(type3(pm4_op::im_load_immediate, 3));
    w.dword(0); // vertex
    w.dword(1);
    w.dword(0x11111111);
    w.dword(type3(pm4_op::draw_indx, 2));
    w.dword(0);
    w.dword((3u << 16) | (0x2u << 6) | 0x04); // auto, triangle list
    w.dword(type3(pm4_op::im_load_immediate, 3));
    w.dword(0);
    w.dword(1);
    w.dword(0x22222222);
    command_processor cp(fx.memory);
    std::string error;
    assert(cp.process(fixture::cmd, 11 * 4, error));
    assert(cp.draws().size() == 1);
    assert(cp.draws()[0].vertex_shader == 0);
    assert(cp.draws()[0].pixel_shader == -1);
    assert(cp.shaders().size() == 2); // the second upload still happened
}

// Tiled rendering: the command buffer is replayed once per bin, and predicated
// packets run only for the bins selected. The masks must START all-ones, or
// every predicated packet in the first frame is dropped.
void test_predicated_packets_follow_the_bin_masks() {
    fixture fx;
    writer w{fx.memory, fixture::cmd};
    const uint32_t predicated_draw = type3(pm4_op::draw_indx, 2) | 0x1;
    const auto draw = [&]() {
        w.dword(predicated_draw);
        w.dword(0);
        w.dword((3u << 16) | (0x2u << 6) | 0x04);
    };
    draw();                                    // selected by default
    w.dword(type3(pm4_op::set_bin_select, 2)); // select no bins
    w.dword(0);
    w.dword(0);
    draw();                                    // must be skipped
    w.dword(type3(pm4_op::set_bin_select_lo, 1));
    w.dword(0x8);
    w.dword(type3(pm4_op::set_bin_mask_lo, 1));
    w.dword(0x8);
    draw();                                    // selected again
    command_processor cp(fx.memory);
    std::string error;
    assert(cp.process(fixture::cmd, 16 * 4, error));
    assert(cp.draws().size() == 2);
    assert(cp.predicated_skips() == 1);
    // The half-value forms replace only their own half, so the mask keeps the
    // all-ones high half it started with.
    assert(cp.bin_select() == 0x8);
    assert(cp.bin_mask() == 0xFFFFFFFF00000008ull);
}

// An unpredicated packet runs whatever the bins say.
void test_unpredicated_packets_ignore_the_bin_masks() {
    fixture fx;
    writer w{fx.memory, fixture::cmd};
    w.dword(type3(pm4_op::set_bin_select, 2));
    w.dword(0);
    w.dword(0);
    w.dword(type3(pm4_op::draw_indx, 2)); // no predication bit
    w.dword(0);
    w.dword((3u << 16) | (0x2u << 6) | 0x04);
    command_processor cp(fx.memory);
    std::string error;
    assert(cp.process(fixture::cmd, 6 * 4, error));
    assert(cp.draws().size() == 1);
    assert(cp.predicated_skips() == 0);
}

// REG_RMW addresses registers through a 13-bit field, so it can only reach the
// first 0x2000 - which is where the shader-upload and EDRAM setup registers it
// is used for live. An index above that wraps rather than failing.
void test_reg_rmw_masks_and_merges() {
    fixture fx;
    constexpr uint32_t target = 0x100;
    constexpr uint32_t source = 0x101;
    writer w{fx.memory, fixture::cmd};
    w.dword(type0(target, 1));
    w.dword(0xFFFF0000);
    w.dword(type0(source, 1));
    w.dword(0x0000BEEF);
    // Immediate AND, register OR: keep the top byte, then merge in the register.
    w.dword(type3(pm4_op::reg_rmw, 3));
    w.dword((1u << 30) | target);
    w.dword(0xFF000000);
    w.dword(source);
    command_processor cp(fx.memory);
    std::string error;
    assert(cp.process(fixture::cmd, 8 * 4, error));
    assert(cp.registers().get(target) == 0xFF00BEEF);
}

// Draws are cleared at a frame boundary; register state and shaders are not -
// the hardware keeps them, and a title relies on that across frames.
void test_clear_draws_keeps_state_and_shaders() {
    fixture fx;
    writer w{fx.memory, fixture::cmd};
    w.dword(type0(reg::rb_color_info, 1));
    w.dword(0x1234);
    w.dword(type3(pm4_op::im_load_immediate, 3));
    w.dword(0);
    w.dword(1);
    w.dword(0x33333333);
    w.dword(type3(pm4_op::draw_indx, 2));
    w.dword(0);
    w.dword((3u << 16) | (0x2u << 6) | 0x04);
    command_processor cp(fx.memory);
    std::string error;
    assert(cp.process(fixture::cmd, 9 * 4, error));
    assert(cp.draws().size() == 1);
    assert(cp.total_draws() == 1);
    cp.clear_draws();
    assert(cp.draws().empty());
    assert(cp.total_draws() == 1); // progress is cumulative
    assert(cp.registers().get(reg::rb_color_info) == 0x1234);
    assert(cp.shaders().size() == 1);
    assert(cp.active_vertex_shader() == 0);
}

// Every type-3 opcode is counted, and one that goes nowhere is counted
// separately - a frame missing state is otherwise indistinguishable from one
// that is not.
void test_opcode_accounting_separates_handled_from_unhandled() {
    fixture fx;
    writer w{fx.memory, fixture::cmd};
    w.dword(type3(pm4_op::nop, 1));
    w.dword(0);
    w.dword(type3(0x2C, 1)); // IM_STORE - real opcode, nothing acts on it
    w.dword(0);
    command_processor cp(fx.memory);
    std::string error;
    assert(cp.process(fixture::cmd, 4 * 4, error));
    assert(cp.opcode_count(pm4_op::nop) == 1);
    assert(cp.unhandled_count(pm4_op::nop) == 0);
    assert(cp.opcode_count(0x2C) == 1);
    assert(cp.unhandled_count(0x2C) == 1);
}

// SCRATCH_UMSK/SCRATCH_ADDR turn a scratch register into a mailbox: writing
// SCRATCH_REGn also stores the value at SCRATCH_ADDR + n*4, so a packet can
// hand the CPU a value at the point the GPU reaches it. Hydro Thunder's
// Direct3D posts its graphics-interrupt routine and that routine's argument
// this way (sub_822D5D20 writes SCRATCH_REG4 and SCRATCH_REG5) and its
// interrupt handler calls whatever landed in memory - so dropping the mirror
// leaves the handler with a null routine and the work behind it never retired.
void test_armed_scratch_registers_mirror_into_memory() {
    fixture fx;
    // The block the mirror lands in, named to the GPU by its PHYSICAL address.
    constexpr uint32_t block_physical = 0x00011000;
    constexpr uint32_t block = kPhysicalBase + block_physical;
    std::string error;
    assert(fx.memory.commit(block, 0x1000, error));

    writer w{fx.memory, fixture::cmd};
    w.dword(type0(reg::scratch_addr, 1));
    w.dword(block_physical);
    w.dword(type0(reg::scratch_umsk, 1));
    w.dword(0x00000031); // registers 0, 4 and 5 armed - not 1, 2 or 3
    w.dword(type0(reg::scratch_reg0, 1));
    w.dword(0x0000000F);
    w.dword(type0(reg::scratch_reg0 + 1, 1));
    w.dword(0xDEADBEEF); // not armed: the register moves, memory must not
    w.dword(type0(reg::scratch_reg0 + 4, 2));
    w.dword(0x822DE268); // the interrupt routine
    w.dword(0x400FD300); // and its argument

    command_processor cp(fx.memory);
    assert(cp.process(fixture::cmd, 11 * 4, error));

    // The register file still takes every write, armed or not.
    assert(cp.registers().get(reg::scratch_reg0 + 1) == 0xDEADBEEF);
    // Memory takes only the armed ones, each at its own slot.
    assert(fx.memory.read_u32(block + 0) == 0x0000000F);
    assert(fx.memory.read_u32(block + 4) == 0);
    assert(fx.memory.read_u32(block + 16) == 0x822DE268);
    assert(fx.memory.read_u32(block + 20) == 0x400FD300);
    assert(cp.scratch_writes() == 3); // registers 0, 4 and 5, and nothing else
    assert(cp.dropped_writes() == 0);
}

// With no mask armed - the state the register file starts in - a scratch write
// is register state and nothing else. The console behaves the same way, and a
// stream that never sets SCRATCH_UMSK must not have words scattered at
// physical address zero.
void test_unarmed_scratch_registers_touch_no_memory() {
    fixture fx;
    writer w{fx.memory, fixture::cmd};
    w.dword(type0(reg::scratch_reg0 + 4, 1));
    w.dword(0x822DE268);

    command_processor cp(fx.memory);
    std::string error;
    assert(cp.process(fixture::cmd, 2 * 4, error));
    assert(cp.registers().get(reg::scratch_reg0 + 4) == 0x822DE268);
    assert(cp.scratch_writes() == 0);
    assert(cp.dropped_writes() == 0);
}

// EVENT_WRITE_ZPD is an occlusion query's answer. Direct3D writes the pending
// sentinel FFFFFEED into the record, issues the query, and polls until it
// changes; the packet itself carries no address, so the record is wherever
// RB_SAMPLE_COUNT_ADDR pointed when it ran. Leaving the sentinel in place is
// not a degraded result - the title waits on it and culls what the query was
// guarding, which is a black frame with no other symptom.
//
// The record's fields are LITTLE-endian: Direct3D swaps them on the way in.
void test_occlusion_query_answers_a_pending_record() {
    fixture fx;
    constexpr uint32_t record_physical = 0x00012000;
    constexpr uint32_t record = kPhysicalBase + record_physical;
    std::string error;
    assert(fx.memory.commit(record, 0x1000, error));
    // The sentinel, as the guest wrote it: little-endian FFFFFEED in ZPass_A.
    fx.memory.write_u32(record + 16, __builtin_bswap32(0xFFFFFEEDu));

    writer w{fx.memory, fixture::cmd};
    w.dword(type0(reg::rb_sample_count_addr, 1));
    w.dword(record_physical);
    w.dword(type3(pm4_op::event_write_zpd, 1));
    w.dword(0x00000008); // VIZQUERY_END

    command_processor cp(fx.memory);
    assert(cp.process(fixture::cmd, 4 * 4, error));
    assert(cp.occlusion_queries() == 1);
    assert(cp.occlusion_queries_answered() == 1);
    assert(cp.unhandled_count(pm4_op::event_write_zpd) == 0);
    // The sentinel is gone and a non-zero sample count is in its place. Zero
    // would be a valid answer to write and a useless one: it says nothing was
    // visible, so a title culling on the result culls everything.
    const uint32_t zpass = __builtin_bswap32(fx.memory.read_u32(record + 16));
    assert(zpass != 0xFFFFFEEDu);
    assert(zpass != 0);
    // Total_A carries the same count; the B lanes and the fail counters are 0.
    assert(__builtin_bswap32(fx.memory.read_u32(record + 0)) == zpass);
    assert(fx.memory.read_u32(record + 4) == 0);  // Total_B
    assert(fx.memory.read_u32(record + 8) == 0);  // ZFail_A
    assert(fx.memory.read_u32(record + 20) == 0); // ZPass_B
}

// A record with no sentinel is a question nobody asked. Writing one anyway
// would overwrite a result the title has not read yet, since BEGIN and END
// share a slot and only one of them is pending at a time.
void test_occlusion_query_leaves_an_unmarked_record_alone() {
    fixture fx;
    constexpr uint32_t record_physical = 0x00012000;
    constexpr uint32_t record = kPhysicalBase + record_physical;
    std::string error;
    assert(fx.memory.commit(record, 0x1000, error));
    fx.memory.write_u32(record + 0, 0x11111111);
    fx.memory.write_u32(record + 16, 0x22222222);

    writer w{fx.memory, fixture::cmd};
    w.dword(type0(reg::rb_sample_count_addr, 1));
    w.dword(record_physical);
    w.dword(type3(pm4_op::event_write_zpd, 1));
    w.dword(0x00000008);

    command_processor cp(fx.memory);
    assert(cp.process(fixture::cmd, 4 * 4, error));
    assert(cp.occlusion_queries() == 1);
    assert(cp.occlusion_queries_answered() == 0);
    assert(fx.memory.read_u32(record + 0) == 0x11111111);
    assert(fx.memory.read_u32(record + 16) == 0x22222222);
}

// The frame boundary comes out of the stream, in submission order, carrying the
// front buffer it names. VdSwap writes this packet into the ring behind the
// frame's last resolve; a boundary raised anywhere else cuts the frame off from
// its own composite.
void test_swap_packet_ends_the_frame_where_the_stream_says() {
    fixture fx;
    writer w{fx.memory, fixture::cmd};
    w.dword(type3(pm4_op::draw_indx, 2)); // auto triangle-list, 3 indices
    w.dword(0);
    w.dword((3u << 16) | (2u << 6) | 0x04);
    w.dword(type3(pm4_op::xe_swap, 4));
    w.dword(kSwapSignature);
    w.dword(0x00330000);
    w.dword(1280);
    w.dword(720);
    // Everything after the boundary belongs to the NEXT frame.
    w.dword(type3(pm4_op::draw_indx, 2));
    w.dword(0);
    w.dword((3u << 16) | (2u << 6) | 0x04);

    command_processor cp(fx.memory);
    uint32_t address = 0, width = 0, height = 0;
    std::size_t draws_at_the_boundary = 0;
    int swaps = 0;
    cp.set_swap_handler([&](uint32_t a, uint32_t wide, uint32_t high) {
        address = a;
        width = wide;
        height = high;
        draws_at_the_boundary = cp.draws().size();
        ++swaps;
        cp.clear_draws();
    });
    std::string error;
    assert(cp.process(fixture::cmd, 11 * 4, error));
    assert(swaps == 1);
    assert(cp.swaps() == 1);
    // The draw before the packet was in the frame; the one after it was not.
    assert(draws_at_the_boundary == 1);
    assert(cp.draws().size() == 1);
    assert(address == 0x00330000);
    assert(width == 1280);
    assert(height == 720);
}

// The 64 words a title reserves are ring memory holding whatever was there a
// lap ago, and that can decode as a swap. Only the signature separates a real
// boundary from a stale one, and cutting the frame on a stale one would end it
// at an arbitrary point in the stream.
void test_swap_packet_without_the_signature_is_not_a_boundary() {
    fixture fx;
    writer w{fx.memory, fixture::cmd};
    w.dword(type3(pm4_op::xe_swap, 4));
    w.dword(0xDEADBEEF); // not 'SWAP'
    w.dword(0x00330000);
    w.dword(1280);
    w.dword(720);

    command_processor cp(fx.memory);
    int swaps = 0;
    cp.set_swap_handler([&](uint32_t, uint32_t, uint32_t) { ++swaps; });
    std::string error;
    assert(cp.process(fixture::cmd, 5 * 4, error));
    assert(swaps == 0);
    assert(cp.swaps() == 0);
    // Handled, not unhandled: the packet was understood and correctly declined.
    assert(cp.opcode_count(pm4_op::xe_swap) == 1);
    assert(cp.unhandled_count(pm4_op::xe_swap) == 0);
}

} // namespace

int main() {
    test_register_writes_update_state();
    test_auto_draw_captures_state();
    test_indexed_draw_resolves_indices();
    test_indirect_buffer_is_followed();
    test_uncommitted_buffer_is_rejected();
    test_reset_clears_state();
    test_set_constant_writes_each_bank();
    test_unknown_constant_bank_is_reported();
    test_set_constant2_writes_registers_directly();
    test_load_alu_constant_reads_from_physical_memory();
    test_im_load_captures_microcode_from_memory();
    test_im_load_immediate_captures_inline_microcode();
    test_repeated_shader_upload_reuses_its_slot();
    test_draw_records_the_bound_shaders();
    test_predicated_packets_follow_the_bin_masks();
    test_unpredicated_packets_ignore_the_bin_masks();
    test_reg_rmw_masks_and_merges();
    test_clear_draws_keeps_state_and_shaders();
    test_opcode_accounting_separates_handled_from_unhandled();
    test_armed_scratch_registers_mirror_into_memory();
    test_unarmed_scratch_registers_touch_no_memory();
    test_occlusion_query_answers_a_pending_record();
    test_occlusion_query_leaves_an_unmarked_record_alone();
    test_swap_packet_ends_the_frame_where_the_stream_says();
    test_swap_packet_without_the_signature_is_not_a_boundary();
    std::printf("command_processor_test: all checks passed\n");
    return 0;
}
