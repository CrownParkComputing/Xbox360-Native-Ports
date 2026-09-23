// Unit tests for the XMA audio kernel calls.
//
// These read and write a 64-byte block of packed bitfields that the title
// never touches directly, so a field written one bit out is invisible until
// audio comes out wrong much later. Every accessor here is therefore checked
// by writing through one call and reading back through the other, and the
// packing itself is checked against the raw dwords for the fields whose
// position is load-bearing.
//
// The other thing worth pinning is the pacing, because it is what a title
// actually reacts to: a kick is one work pass, a pass writes only as far as the
// output ring has room, and an input buffer stays valid until its last packet
// has been read. Break any of the three and the title decides its voice has
// finished - so the failure is silence, not distortion.
#include "whitty_xenon/apu/xma.h"
#include "whitty_xenon/apu/xma_decoder.h"
#include "whitty_xenon/host_function.h"
#include "whitty_xenon/kernel_handlers.h"
#include "whitty_xenon/kernel_state.h"

#include <cassert>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <string>
#include <vector>

using namespace whitty_xenon;

namespace {

union reg {
    uint64_t u64;
    uint32_t u32;
    double f64;
};
struct test_ctx {
    reg r1, r3, r4, r5, r6, r7, r8, r9, r10;
    reg f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13;
};

struct fixture {
    guest_memory memory;
    guest_heap heap;
    guest_heap physical;
    kernel_state kernel;
    apu::xma_registers registers;
    static constexpr uint32_t scratch = 0x30000000;

    fixture() : kernel(memory, heap) {
        std::string error;
        assert(memory.initialize(error));
        assert(heap.initialize(memory, 0x40000000, 0x00400000, error));
        assert(physical.initialize(memory, kPhysicalBase + 0x10000, 0x00400000,
                                   error));
        assert(memory.commit(scratch, 0x4000, error));
        kernel.set_physical_heap(&physical);
        install_kernel(&kernel);
        clear_mmio_devices();
        apu::install_xma_registers(&registers);
        assert(apu::initialize_xma_contexts(kernel, registers));
    }
    ~fixture() {
        apu::install_xma_registers(nullptr);
        clear_mmio_devices();
        install_kernel(nullptr);
    }
    uint8_t* base() noexcept { return memory.host_unchecked(0); }

    uint32_t create_context() {
        test_ctx ctx{};
        ctx.r3.u32 = scratch;
        host_function<test_ctx, XMACreateContext>(ctx, base());
        assert(ctx.r3.u32 == x_status::success);
        return memory.read_u32(scratch);
    }
    template <auto Fn>
    uint32_t call(uint32_t a, uint32_t b = 0, uint32_t c = 0) {
        test_ctx ctx{};
        ctx.r3.u32 = a;
        ctx.r4.u32 = b;
        ctx.r5.u32 = c;
        host_function<test_ctx, Fn>(ctx, base());
        return ctx.r3.u32;
    }
};

void test_contexts_are_handed_out_of_the_hardware_array() {
    fixture fx;
    const uint32_t first = fx.create_context();
    const uint32_t second = fx.create_context();

    // Contexts are slots in the array the register file points at, not loose
    // allocations - the hardware knows them by index.
    assert(first != 0 && second != 0);
    assert(second - first == apu::kXmaContextSize);
    assert(fx.registers.context_index(first) == 0);
    assert(fx.registers.context_index(second) == 1);
    assert(fx.registers.allocated_context_count() == 2);

    // An address that is not on a context boundary names no context.
    assert(fx.registers.context_index(first + 4) ==
           apu::xma_registers::kNoContext);
    assert(fx.registers.context_index(0x40000000) ==
           apu::xma_registers::kNoContext);

    fx.call<XMAReleaseContext>(first);
    assert(fx.registers.allocated_context_count() == 1);
    // The freed slot is reused, so a title that churns voices does not run out.
    assert(fx.create_context() == first);
}

void test_initialize_stores_physical_buffer_addresses() {
    fixture fx;
    const uint32_t context = fx.create_context();
    const uint32_t init = fixture::scratch + 0x100;
    const uint32_t input0 = kPhysicalBase + 0x20000;
    const uint32_t output = kPhysicalBase + 0x30000;

    fx.memory.zero_block(init, 56);
    fx.memory.write_u32(init + 0x00, input0);
    fx.memory.write_u32(init + 0x04, 12);   // input 0 packet count
    fx.memory.write_u32(init + 0x08, 0);    // no second input buffer
    fx.memory.write_u32(init + 0x10, 0x1234); // input read offset
    fx.memory.write_u32(init + 0x14, output);
    fx.memory.write_u32(init + 0x18, 7);    // output block count
    fx.memory.write_u32(init + 0x20, 4);    // subframe decode count
    fx.memory.write_u32(init + 0x24, 2);    // channel count
    fx.memory.write_u32(init + 0x28, 3);    // sample rate
    fx.memory.write_u32(init + 0x2C, 0x1000); // loop start
    fx.memory.write_u32(init + 0x30, 0x2000); // loop end
    fx.memory.write_u8(init + 0x34, 5);       // loop count

    assert(fx.call<XMAInitializeContext>(context, init) == 0);

    // The buffers are stored as PHYSICAL addresses: the decoder reads them and
    // has no view of the CPU's virtual mapping.
    assert(fx.memory.read_u32(context + 5 * 4) == 0x20000);
    assert(fx.memory.read_u32(context + 7 * 4) == 0x30000);
    assert(fx.memory.read_u32(context + 6 * 4) == 0); // null stays null

    assert(fx.call<XMAGetInputBufferReadOffset>(context) == 0x1234);
    // Packet count is the low 12 bits of dword 0.
    assert((fx.memory.read_u32(context) & 0xFFF) == 12);
    // Loop count sits above it, at bit 12.
    assert(((fx.memory.read_u32(context) >> 12) & 0xFF) == 5);
    // Output block count at bit 22, still in dword 0.
    assert(((fx.memory.read_u32(context) >> 22) & 0x1F) == 7);
}

void test_buffer_valid_bits_round_trip() {
    fixture fx;
    const uint32_t context = fx.create_context();

    assert(fx.call<XMAIsInputBuffer0Valid>(context) == 0);
    assert(fx.call<XMAIsInputBuffer1Valid>(context) == 0);
    assert(fx.call<XMAIsOutputBufferValid>(context) == 0);

    fx.call<XMASetInputBuffer0Valid>(context);
    assert(fx.call<XMAIsInputBuffer0Valid>(context) == 1);
    assert(fx.call<XMAIsInputBuffer1Valid>(context) == 0); // neighbouring bit
    fx.call<XMASetInputBuffer1Valid>(context);
    assert(fx.call<XMAIsInputBuffer1Valid>(context) == 1);
    fx.call<XMASetOutputBufferValid>(context);
    assert(fx.call<XMAIsOutputBufferValid>(context) == 1);

    // Output valid is bit 31 of dword 1 - the one field most likely to be
    // written into the wrong word.
    assert((fx.memory.read_u32(context + 4) >> 31) == 1);
}

void test_offsets_round_trip_without_disturbing_neighbours() {
    fixture fx;
    const uint32_t context = fx.create_context();

    // The read offset is 26 bits at the bottom of dword 2; writing it must not
    // touch the six bits above.
    fx.memory.write_u32(context + 2 * 4, 0xFC000000);
    fx.call<XMASetInputBufferReadOffset>(context, 0x03FFFFFF);
    assert(fx.call<XMAGetInputBufferReadOffset>(context) == 0x03FFFFFF);
    assert((fx.memory.read_u32(context + 2 * 4) & 0xFC000000) == 0xFC000000);

    // Output read offset is only five bits, at the bottom of dword 9.
    fx.call<XMASetOutputBufferReadOffset>(context, 0x1F);
    assert(fx.call<XMAGetOutputBufferReadOffset>(context) == 0x1F);
    fx.call<XMASetOutputBufferReadOffset>(context, 0x03);
    assert(fx.call<XMAGetOutputBufferReadOffset>(context) == 0x03);
}

void test_a_kick_is_one_work_pass() {
    fixture fx;
    const uint32_t context = fx.create_context();
    fx.call<XMASetInputBuffer0Valid>(context);

    assert(fx.call<XMAEnableContext>(context) == 0);
    assert(fx.registers.kick_count() == 1);
    // A kick buys one pass and no more: the hardware goes quiet again, and the
    // title kicks it once per service pass for as long as it has audio queued.
    // Leaving it live would let a worker run ahead of the title's read cursor.
    assert(!fx.registers.context_enabled(0));

    // Nothing was decoded here - there is no output buffer - so the queued
    // input is still queued. Retiring it on the kick is what made the title
    // treat its music as a stream that had ended.
    assert(fx.call<XMAIsInputBuffer0Valid>(context) == 1);
}

void test_block_while_in_use_leaves_queued_input_alone() {
    fixture fx;
    const uint32_t context = fx.create_context();
    fx.call<XMASetInputBuffer0Valid>(context);
    fx.call<XMASetInputBuffer1Valid>(context);

    // The title calls this before it refills, while one buffer may still hold
    // audio the hardware has not read. Clearing the valid bits here throws
    // that audio away and tells the title it was played.
    assert(fx.call<XMABlockWhileInUse>(context) == 0);
    assert(fx.call<XMAIsInputBuffer0Valid>(context) == 1);
    assert(fx.call<XMAIsInputBuffer1Valid>(context) == 1);

    fx.call<XMADisableContext>(context, 0);
    assert(!fx.registers.context_enabled(0));
}

// The decoder writes into a ring of 256-byte blocks and must stop one short of
// the title's read offset - a ring with only offsets to go by cannot tell full
// from empty. Checked against a count of the blocks between the two offsets
// worked out the long way round, not against the same expression twice.
void test_output_ring_free_space_never_laps_the_reader() {
    for (uint32_t blocks = 2; blocks <= 31; ++blocks) {
        for (uint32_t read = 0; read < blocks; ++read) {
            for (uint32_t write = 0; write < blocks; ++write) {
                uint32_t reachable = 0;
                for (uint32_t at = write; (at + 1) % blocks != read;
                     at = (at + 1) % blocks)
                    ++reachable;
                assert(xma_output_free_blocks(read, write, blocks) == reachable);
            }
        }
    }
    // A degenerate ring has no room at all rather than wrapping to a huge one.
    assert(xma_output_free_blocks(0, 0, 1) == 0);
    assert(xma_output_free_blocks(0, 0, 0) == 0);
}

void test_calls_on_a_bad_context_are_refused() {
    fixture fx;
    // An address that names no context must not be treated as one - writing
    // through it would corrupt whatever really lives there.
    const uint32_t bogus = fixture::scratch + 0x2000;
    fx.memory.write_u32(bogus, 0xDEADBEEF);
    assert(fx.call<XMAIsInputBuffer0Valid>(bogus) == 0);
    fx.call<XMASetInputBuffer0Valid>(bogus);
    assert(fx.memory.read_u32(bogus) == 0xDEADBEEF);
    assert(fx.call<XMAInitializeContext>(bogus, fixture::scratch) ==
           x_error::function_failed);
}

// A looping voice keeps its input buffer instead of handing it back.
//
// This is what a piece of music actually is on this hardware: the title queues
// the track once, sets a loop over the whole of it, and never touches the
// buffer again. Retiring the buffer at the last packet tells the title the
// voice has ended, so the music stops after one play-through and never comes
// back - which is exactly what Geometry Wars 2 did, roughly fifteen seconds in,
// while its uncompressed effects carried on.
//
// The packets here are zeroes: nothing decodes out of them, and nothing needs
// to. What is being pinned is the walk - which packet is next, and what happens
// at the end of the buffer - and that runs whatever the decoder makes of the
// bits.
void test_a_looping_buffer_is_never_handed_back_early() {
    if (!apu::xma_decoder::available()) {
        std::printf("kernel_xma_test: looping not checked (needs a decoder)\n");
        return;
    }
    constexpr uint32_t kPackets = 4;
    constexpr uint32_t kPacketBits = 2048 * 8;

    // Builds a context over `kPackets` empty packets with the loop the title
    // would have asked for, and returns it ready to be kicked.
    const auto prepare = [](fixture& fx, uint32_t loop_count) {
        const uint32_t context = fx.create_context();
        const uint32_t input = kPhysicalBase + 0x20000;
        const uint32_t output = kPhysicalBase + 0x30000;
        const uint32_t init = fixture::scratch + 0x100;
        std::string error;
        assert(fx.memory.commit(input, kPackets * 2048, error));
        assert(fx.memory.commit(output, 0x4000, error));
        assert(fx.memory.zero_block(input, kPackets * 2048));
        fx.memory.zero_block(init, 56);
        fx.memory.write_u32(init + 0x00, input);
        fx.memory.write_u32(init + 0x04, kPackets);
        fx.memory.write_u32(init + 0x10, 32);
        fx.memory.write_u32(init + 0x14, output);
        fx.memory.write_u32(init + 0x18, 8);
        fx.memory.write_u32(init + 0x24, 1); // two channels
        fx.memory.write_u32(init + 0x28, 3); // 48 kHz
        fx.memory.write_u32(init + 0x2C, 32); // loop start: first packet
        // Loop end sits inside the last packet, the way a real one does.
        fx.memory.write_u32(init + 0x30, (kPackets - 1) * kPacketBits + 100);
        fx.memory.write_u8(init + 0x34, static_cast<uint8_t>(loop_count));
        assert(fx.call<XMAInitializeContext>(context, init) == 0);
        fx.call<XMASetOutputBufferValid>(context);
        fx.call<XMASetInputBuffer0Valid>(context);
        return context;
    };
    const auto loop_count = [](fixture& fx, uint32_t context) {
        return (fx.memory.read_u32(context) >> 12) & 0xFF;
    };

    // 255 is the console's "forever", and is the one count that does not come
    // down. However long the title plays, the buffer stays queued.
    {
        fixture fx;
        const uint32_t context = prepare(fx, 255);
        for (uint32_t i = 0; i < 64; ++i) fx.call<XMAEnableContext>(context);
        assert(fx.call<XMAIsInputBuffer0Valid>(context) == 1);
        assert(loop_count(fx, context) == 255);
        // And it is still reading inside the buffer it was given, not sitting
        // at the start of one the title has not filled.
        assert(fx.call<XMAIsInputBuffer1Valid>(context) == 0);
    }

    // A finite count is a countdown, and the buffer retires when it runs out -
    // one play-through plus that many repeats, not one play-through.
    {
        fixture fx;
        const uint32_t context = prepare(fx, 3);
        assert(loop_count(fx, context) == 3);
        uint32_t kicks = 0;
        while (fx.call<XMAIsInputBuffer0Valid>(context) != 0 && kicks < 256) {
            fx.call<XMAEnableContext>(context);
            ++kicks;
        }
        assert(fx.call<XMAIsInputBuffer0Valid>(context) == 0);
        assert(loop_count(fx, context) == 0);
    }

    // No loop at all still retires at the last packet - the behaviour every
    // streaming voice depends on, and the one this must not disturb.
    {
        fixture fx;
        const uint32_t context = prepare(fx, 0);
        fx.call<XMAEnableContext>(context);
        assert(fx.call<XMAIsInputBuffer0Valid>(context) == 0);
    }
}

// The whole rate loop, driven the way the title drives it, against real
// packets. WHITTY_XMA_SAMPLE names a dump of them (WHITTY_XMA_DUMP writes one);
// without it there is nothing to decode and the pacing cannot be observed at
// all, so the test says so rather than pretending to check it.
//
// What is being pinned here is not "audio comes out" but the two things that
// stopped the title's music: a pass must never write past the read offset, and
// the input buffer must stay valid until its last packet has been read.
void test_the_handshake_paces_itself_against_the_ring() {
    const char* path = std::getenv("WHITTY_XMA_SAMPLE");
    if (path == nullptr || !apu::xma_decoder::available()) {
        std::printf("kernel_xma_test: pacing not checked (needs a decoder and"
                    " WHITTY_XMA_SAMPLE)\n");
        return;
    }
    std::ifstream in(path, std::ios::binary | std::ios::ate);
    assert(in && "WHITTY_XMA_SAMPLE names a file that cannot be read");
    std::vector<uint8_t> packets(static_cast<std::size_t>(in.tellg()));
    in.seekg(0);
    in.read(reinterpret_cast<char*>(packets.data()),
            static_cast<std::streamsize>(packets.size()));
    const uint32_t packet_count =
        static_cast<uint32_t>(packets.size() / 2048) < 8
            ? static_cast<uint32_t>(packets.size() / 2048)
            : 8;
    assert(packet_count != 0 && "the sample holds no whole packets");

    fixture fx;
    const uint32_t context = fx.create_context();
    // Input and output live in physical memory, where the hardware reads them.
    const uint32_t input = kPhysicalBase + 0x20000;
    const uint32_t output = kPhysicalBase + 0x30000;
    const uint32_t init = fixture::scratch + 0x100;
    std::string error;
    assert(fx.memory.commit(input, packet_count * 2048, error));
    assert(fx.memory.commit(output, 0x4000, error));
    std::memcpy(fx.memory.host(input, packet_count * 2048), packets.data(),
                packet_count * 2048);

    constexpr uint32_t kBlocks = 16; // 16 * 256 bytes of decoded audio
    fx.memory.zero_block(init, 56);
    fx.memory.write_u32(init + 0x00, input);
    fx.memory.write_u32(init + 0x04, packet_count);
    fx.memory.write_u32(init + 0x10, 32); // first packet, past its header
    fx.memory.write_u32(init + 0x14, output);
    fx.memory.write_u32(init + 0x18, kBlocks);
    fx.memory.write_u32(init + 0x24, 1); // two channels
    fx.memory.write_u32(init + 0x28, 3); // 48 kHz
    assert(fx.call<XMAInitializeContext>(context, init) == 0);
    fx.call<XMASetOutputBufferValid>(context);
    fx.call<XMASetInputBuffer0Valid>(context);

    // The title's loop: kick, drain what appeared, push the read offset back.
    uint32_t passes = 0;
    uint32_t total = 0;
    uint32_t peak = 0;
    while (fx.call<XMAIsInputBuffer0Valid>(context) != 0 && passes < 4096) {
        const uint32_t before =
            fx.call<XMAGetOutputBufferWriteOffset>(context);
        const uint32_t read = fx.call<XMAGetOutputBufferReadOffset>(context);
        assert(fx.call<XMAEnableContext>(context) == 0);
        const uint32_t after = fx.call<XMAGetOutputBufferWriteOffset>(context);
        // Never past the reader: that is what would overwrite audio the title
        // has not taken, and it is silent when it happens.
        const uint32_t wrote =
            after >= before ? after - before : kBlocks - before + after;
        assert(wrote <= xma_output_free_blocks(read, before, kBlocks));
        total += wrote;
        // One pass cannot deliver the whole buffer, however much is queued.
        assert(wrote < kBlocks);
        for (uint32_t block = 0; block < wrote; ++block)
            for (uint32_t i = 0; i < 128; ++i) {
                const int16_t sample = static_cast<int16_t>(fx.memory.read_u16(
                    output + ((before + block) % kBlocks) * 256 + i * 2));
                const uint32_t magnitude = static_cast<uint32_t>(
                    sample < 0 ? -int32_t(sample) : int32_t(sample));
                if (magnitude > peak) peak = magnitude;
            }
        // Whatever it wrote, the title has now played: read catches up.
        fx.call<XMASetOutputBufferReadOffset>(context, after);
        ++passes;
    }

    // The buffer retired, but only after several passes - not on the first
    // kick, which is what told the title its stream had ended.
    assert(fx.call<XMAIsInputBuffer0Valid>(context) == 0);
    assert(passes > 4 && passes < 4096);
    assert(total >= packet_count * 8 && "far less audio than the packets hold");
    assert(peak > 1000 && "the ring holds silence");
    // Reading past the end of the buffer starts the other one, so the decoder
    // is looking at buffer 1 and waiting for the title to fill it.
    assert(fx.call<XMAIsInputBuffer1Valid>(context) == 0);
    // With no input left a further kick is harmless and produces nothing new
    // once the leftovers have drained.
    for (uint32_t i = 0; i < 64; ++i) fx.call<XMAEnableContext>(context);
    std::printf("kernel_xma_test: paced %u block(s) over %u pass(es), peak %u\n",
                total, passes, peak);
}

} // namespace

int main() {
    test_contexts_are_handed_out_of_the_hardware_array();
    test_initialize_stores_physical_buffer_addresses();
    test_buffer_valid_bits_round_trip();
    test_offsets_round_trip_without_disturbing_neighbours();
    test_a_kick_is_one_work_pass();
    test_block_while_in_use_leaves_queued_input_alone();
    test_output_ring_free_space_never_laps_the_reader();
    test_a_looping_buffer_is_never_handed_back_early();
    test_the_handshake_paces_itself_against_the_ring();
    test_calls_on_a_bad_context_are_refused();
    std::printf("kernel_xma_test: all checks passed\n");
    return 0;
}
