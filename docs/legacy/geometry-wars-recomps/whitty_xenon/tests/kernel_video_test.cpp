// Unit tests for the video / GPU bridge handlers.
//
// These are the calls the recompiled title uses to drive the GPU: it queries
// the display, hands over a PM4 command ring, registers a graphics interrupt
// callback, and presents frames with VdSwap. Each handler is driven exactly as
// the title will drive it - arguments in the guest registers (spilling to the
// stack past r10) and the handler wrapped in host_function - and its effect is
// checked in real guest memory and in the recorded video state. The expected
// behaviour is Xenia's.
#include "whitty_xenon/host_function.h"
#include "whitty_xenon/kernel_handlers.h"
#include "whitty_xenon/kernel_state.h"
#include "whitty_xenon/gpu/pm4.h"
#include "whitty_xenon/video.h"

#include <cassert>
#include <cstdint>
#include <cstdio>
#include <cstring>
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
    kernel_state kernel;

    static constexpr uint32_t heap_base = 0x40000000;
    static constexpr uint32_t heap_size = 0x00400000;
    static constexpr uint32_t scratch = 0x30000000;
    static constexpr uint32_t scratch_size = 0x10000;
    static constexpr uint32_t stack = scratch + 0x8000;

    fixture() : kernel(memory, heap) {
        std::string error;
        bool ok = memory.initialize(error);
        assert(ok && "guest memory");
        ok = heap.initialize(memory, heap_base, heap_size, error);
        assert(ok && "guest heap");
        ok = memory.commit(scratch, scratch_size, error);
        assert(ok && "scratch commit");
        install_kernel(&kernel);
    }
    ~fixture() { install_kernel(nullptr); }

    uint8_t* base() noexcept { return memory.host_unchecked(0); }
};

// Reads the float the guest sees at `address`.
float read_f32(guest_memory& memory, uint32_t address) {
    const uint32_t bits = memory.read_u32(address);
    float value;
    std::memcpy(&value, &bits, 4);
    return value;
}

void test_query_video_mode() {
    fixture fx;
    const uint32_t mode = fixture::scratch;
    test_ctx ctx{};
    ctx.r3.u32 = mode;
    host_function<test_ctx, VdQueryVideoMode>(ctx, fx.base());

    // 1280x720, progressive, widescreen, high definition, 60Hz, NTSC.
    assert(fx.memory.read_u32(mode + 0x00) == 1280);
    assert(fx.memory.read_u32(mode + 0x04) == 720);
    assert(fx.memory.read_u32(mode + 0x08) == 0); // not interlaced
    assert(fx.memory.read_u32(mode + 0x0C) == 1); // widescreen
    assert(fx.memory.read_u32(mode + 0x10) == 1); // hi-def
    assert(read_f32(fx.memory, mode + 0x14) == 60.0f);
    assert(fx.memory.read_u32(mode + 0x18) == 1);    // NTSC
    assert(fx.memory.read_u32(mode + 0x1C) == 0x4A); // values titles expect
    assert(fx.memory.read_u32(mode + 0x20) == 0x01);
}

void test_query_video_flags() {
    fixture fx;
    test_ctx ctx{};
    host_function<test_ctx, VdQueryVideoFlags>(ctx, fx.base());
    // Widescreen (1) and at least 1024 wide (2), but not 1920 (4).
    assert(ctx.r3.u32 == (x_video::flag_widescreen | x_video::flag_1024_wide));
}

void test_current_display_information() {
    fixture fx;
    const uint32_t info = fixture::scratch;
    test_ctx ctx{};
    ctx.r3.u32 = info;
    host_function<test_ctx, VdGetCurrentDisplayInformation>(ctx, fx.base());

    assert(fx.memory.read_u16(info + 0x00) == 1280); // front buffer width
    assert(fx.memory.read_u16(info + 0x02) == 720);
    assert(fx.memory.read_u32(info + 0x08 + 0x10) == 1280); // scaled output
    assert(fx.memory.read_u32(info + 0x08 + 0x14) == 720);
    assert(fx.memory.read_u32(info + 0x08 + 0x18) == 1); // vertical filter
    assert(fx.memory.read_u32(info + 0x08 + 0x28) == 1); // horizontal filter
    assert(fx.memory.read_u16(info + 0x40) == 320);      // overscan inset
    assert(fx.memory.read_u16(info + 0x42) == 180);
    assert(fx.memory.read_u16(info + 0x48) == 1280); // display width
    assert(fx.memory.read_u16(info + 0x4A) == 720);
    assert(read_f32(fx.memory, info + 0x4C) == 60.0f);
    assert(fx.memory.read_u16(info + 0x56) == 1280); // actual display width
}

void test_ring_buffer_handover() {
    fixture fx;
    // The title allocates the ring in physical memory and hands it over.
    const uint32_t ring = 0xA0010000;
    test_ctx ctx{};
    ctx.r3.u32 = ring;
    ctx.r4.u32 = 16; // 64 KiB ring
    host_function<test_ctx, VdInitializeRingBuffer>(ctx, fx.base());

    const video_state& video = fx.kernel.video();
    assert(video.ring_buffer_initialized);
    assert(video.ring_buffer_address == ring);
    assert(video.ring_buffer_size_log2 == 16);
    assert(video.ring_buffer_size() == 0x10000);

    // And tells the GPU where to write the consumed-to read pointer back.
    const uint32_t writeback = 0xA0020000;
    ctx = test_ctx{};
    ctx.r3.u32 = writeback;
    ctx.r4.u32 = 6;
    host_function<test_ctx, VdEnableRingBufferRPtrWriteBack>(ctx, fx.base());
    assert(video.read_pointer_writeback_enabled);
    assert(video.read_pointer_writeback_address == writeback);
    assert(video.read_pointer_writeback_block_log2 == 6);
}

void test_graphics_interrupt_callback() {
    fixture fx;
    test_ctx ctx{};
    ctx.r3.u32 = 0x82012340; // guest routine
    ctx.r4.u32 = 0xCAFE0001; // its user argument
    host_function<test_ctx, VdSetGraphicsInterruptCallback>(ctx, fx.base());
    assert(fx.kernel.video().interrupt_callback == 0x82012340);
    assert(fx.kernel.video().interrupt_callback_data == 0xCAFE0001);
}

void test_system_command_buffer() {
    fixture fx;
    const uint32_t p0 = fixture::scratch;
    const uint32_t p1 = fixture::scratch + 0x100;
    fx.memory.write_u32(p0 + 0x40, 0xFFFFFFFF); // must be cleared
    test_ctx ctx{};
    ctx.r3.u32 = p0;
    ctx.r4.u32 = p1;
    host_function<test_ctx, VdGetSystemCommandBuffer>(ctx, fx.base());
    assert(fx.memory.read_u32(p0) == 0xBEEF0000);
    assert(fx.memory.read_u32(p0 + 0x40) == 0); // the block was zeroed
    assert(fx.memory.read_u32(p1) == 0xBEEF0001);
}

void test_engines_and_display_mode() {
    fixture fx;
    test_ctx ctx{};
    host_function<test_ctx, VdInitializeEngines>(ctx, fx.base());
    assert(ctx.r3.u32 == 1); // success
    assert(fx.kernel.video().engines_initialized);

    ctx = test_ctx{};
    host_function<test_ctx, VdShutdownEngines>(ctx, fx.base());
    assert(!fx.kernel.video().engines_initialized);

    ctx = test_ctx{};
    ctx.r3.u32 = 0x40000000;
    host_function<test_ctx, VdSetDisplayMode>(ctx, fx.base());
    assert(fx.kernel.video().display_mode_flags == 0x40000000);

    ctx = test_ctx{};
    host_function<test_ctx, VdIsHSIOTrainingSucceeded>(ctx, fx.base());
    assert(ctx.r3.u32 == 1);
}

void test_scaler_command_buffer_fills_nops() {
    fixture fx;
    const uint32_t dest = fixture::scratch;
    const uint32_t count = 8;
    test_ctx ctx{};
    ctx.r1.u32 = fixture::stack;
    // 12 arguments: indices 0..7 in r3..r10, 8..11 spill to the stack.
    ctx.r3.u32 = 0; ctx.r4.u32 = 0; ctx.r5.u32 = 0; ctx.r6.u32 = 0;
    ctx.r7.u32 = 0; ctx.r8.u32 = 0; ctx.r9.u32 = 0; ctx.r10.u32 = 0;
    fx.memory.write_u32(fixture::stack + 0x54 + 0, 0);     // arg 8
    fx.memory.write_u32(fixture::stack + 0x54 + 8, 0);     // arg 9
    fx.memory.write_u32(fixture::stack + 0x54 + 16, dest); // arg 10 dest
    fx.memory.write_u32(fixture::stack + 0x54 + 24, count); // arg 11 count
    host_function<test_ctx, VdInitializeScalerCommandBuffer>(ctx, fx.base());

    assert(ctx.r3.u32 == count); // returns the word count it wrote
    for (uint32_t i = 0; i < count; ++i)
        assert(fx.memory.read_u32(dest + i * 4) == 0x80000000u);
}

void test_swap_presents_a_frame() {
    fixture fx;
    const uint32_t ring = fixture::scratch;           // reserved ring words
    const uint32_t fetch = fixture::scratch + 0x400;  // texture fetch constant
    const uint32_t front = fixture::scratch + 0x500;
    const uint32_t format = fixture::scratch + 0x510;
    const uint32_t colour = fixture::scratch + 0x520;
    const uint32_t width = fixture::scratch + 0x530;
    const uint32_t height = fixture::scratch + 0x540;

    // The six-word fetch constant describing the front buffer.
    for (uint32_t i = 0; i < 6; ++i)
        fx.memory.write_u32(fetch + i * 4, 0x11110000u + i);
    fx.memory.write_u32(front, 0x1F000000);
    fx.memory.write_u32(format, 6); // k_8_8_8_8
    fx.memory.write_u32(colour, 0); // RGB
    fx.memory.write_u32(width, 1280);
    fx.memory.write_u32(height, 720);
    // Something stale in the reserved region must be overwritten.
    fx.memory.write_u32(ring + 0x80, 0xDEADBEEF);
    fx.memory.write_u32(ring + 0xFC, 0xDEADBEEF); // the very last word

    test_ctx ctx{};
    ctx.r1.u32 = fixture::stack;
    ctx.r3.u32 = ring;   // buffer_ptr
    ctx.r4.u32 = fetch;  // fetch_ptr
    ctx.r5.u32 = 0;
    ctx.r6.u32 = 0;
    ctx.r7.u32 = 0;
    ctx.r8.u32 = front;  // frontbuffer_ptr
    ctx.r9.u32 = format; // texture_format_ptr
    ctx.r10.u32 = colour;
    fx.memory.write_u32(fixture::stack + 0x54 + 0, width);  // arg 8
    fx.memory.write_u32(fixture::stack + 0x54 + 8, height); // arg 9
    host_function<test_ctx, VdSwap>(ctx, fx.base());

    const video_state& video = fx.kernel.video();
    assert(video.swap_count == 1); // one presented frame
    assert(video.front_buffer_address == 0x1F000000);
    assert(video.front_buffer_format == 6);
    assert(video.front_buffer_width == 1280);
    assert(video.front_buffer_height == 720);

    // A PM4 type-0 write of the six-word fetch constant to register 0x4800 was
    // placed at the start of the reservation.
    const uint32_t header = fx.memory.read_u32(ring);
    assert((header >> 30) == 0);            // type 0
    assert((header & 0x7FFF) == 0x4800);    // shader fetch constant 0
    assert(((header >> 16) & 0x3FFF) == 5); // count - 1, six words
    for (uint32_t i = 0; i < 6; ++i)
        assert(fx.memory.read_u32(ring + 4 + i * 4) == 0x11110000u + i);

    // Every word of the reservation the fetch constant did not use holds a
    // type-2 filler, which the command processor steps over one word at a time.
    // Zeroing them instead is not "nothing": a zero dword is a two-word type-0
    // packet writing register 0, so the 57 words left over here would scribble
    // on the register file and - 57 being odd - leave the walk one word short
    // of a packet it had been promised, which reads as a corrupt command
    // stream once per presented frame.
    for (uint32_t word = 7; word < 64; ++word)
        assert(fx.memory.read_u32(ring + word * 4) == 0x80000000u);
    // And the whole 64-word span walks with nothing left over.
    std::vector<uint8_t> span(64 * 4);
    assert(fx.memory.read_block(ring, span.data(), 64 * 4));
    std::vector<gpu::pm4_packet> packets;
    std::string parse_error;
    assert(gpu::parse_pm4(span.data(), span.size(), packets, parse_error));
    assert(packets.size() == 1 + 57); // the fetch write plus 57 fillers

    // A second swap advances the frame counter.
    host_function<test_ctx, VdSwap>(ctx, fx.base());
    assert(video.swap_count == 2);
}

// Which surface the swap is going to show, in the units the GPU writes.
//
// The renderer has to match this against RB_COPY_DEST_BASE to know which of a
// frame's passes is the picture, and the two are only comparable if the fetch's
// address is converted the way the console's own windows work. Direct3D fills
// the front buffer's fetch in from a 4 KiB-window pointer, and that window
// starts 0x1000 INTO physical memory - so dropping the 0xE0000000 base alone
// leaves the address one page short of every resolve, and the match fails
// silently. Alien Breed presented a black frame for exactly that page: its
// scene resolves to 0x0032D000 and its fetch says 0xE032C000.
void test_swap_records_the_front_buffer_surface() {
    fixture fx;
    const uint32_t ring = fixture::scratch;
    const uint32_t fetch = fixture::scratch + 0x500;

    // A real front-buffer fetch constant: type 2, tiled, pitch 1280, format 6,
    // 1280x720, base page 0xE032C. These are Alien Breed's own words.
    const uint32_t words[6] = {0x8A000002, 0xE032C006, 0x0059E4FF,
                               0x00001414, 0x00000000, 0x00000200};
    for (uint32_t i = 0; i < 6; ++i) fx.memory.write_u32(fetch + i * 4, words[i]);

    test_ctx ctx{};
    ctx.r1.u32 = fixture::stack;
    ctx.r3.u32 = ring;
    ctx.r4.u32 = fetch;
    host_function<test_ctx, VdSwap>(ctx, fx.base());

    const video_state& video = fx.kernel.video();
    // The fetch is kept whole, so a wrong field position can be seen rather
    // than inferred from an address that looks plausible either way.
    for (uint32_t i = 0; i < 6; ++i)
        assert(video.front_buffer_fetch[i] == words[i]);
    // 0xE032C000 is physical 0x0032D000, not 0x0032C000.
    assert(video.front_buffer_fetch_base == 0x0032D000);
}

} // namespace

int main() {
    test_query_video_mode();
    test_query_video_flags();
    test_current_display_information();
    test_ring_buffer_handover();
    test_graphics_interrupt_callback();
    test_system_command_buffer();
    test_engines_and_display_mode();
    test_scaler_command_buffer_fills_nops();
    test_swap_presents_a_frame();
    test_swap_records_the_front_buffer_surface();
    std::printf("kernel_video_test: all checks passed\n");
    return 0;
}
