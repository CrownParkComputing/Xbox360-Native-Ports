// Tests for the controller path, end to end through the kernel handler.
//
// The layout tests here read RAW BYTES rather than going back through
// guest_memory's helpers. That is deliberate: a test that writes with
// write_u16 and reads with read_u16 passes whatever byte order both agree on,
// so it cannot catch the case that matters - the title reading a big-endian
// halfword and getting the bytes the other way round. The expected bytes below
// are written out by hand, and the button values are the documented XInput
// constants rather than this codebase's own names, so a change to either has
// to be deliberate.
#include "whitty_xenon/host_function.h"
#include "whitty_xenon/input.h"
#include "whitty_xenon/kernel_handlers.h"
#include "whitty_xenon/kernel_state.h"

#include <cassert>
#include <cstdint>
#include <cstdio>
#include <string>

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
    static constexpr uint32_t scratch = 0x30000000;

    fixture() : kernel(memory, heap) {
        std::string error;
        assert(memory.initialize(error));
        assert(heap.initialize(memory, 0x40000000, 0x00400000, error));
        assert(memory.commit(scratch, 0x1000, error));
        install_kernel(&kernel);
    }
    ~fixture() { install_kernel(nullptr); }
    uint8_t* base() noexcept { return memory.host_unchecked(0); }
    // The raw byte at a guest address, with no byte-order helper in the way.
    uint8_t raw(uint32_t address) noexcept { return *(base() + address); }
};

// The button bits as Microsoft documents them, independent of this codebase.
constexpr uint16_t kDpadUp = 0x0001;
constexpr uint16_t kDpadDown = 0x0002;
constexpr uint16_t kDpadLeft = 0x0004;
constexpr uint16_t kDpadRight = 0x0008;
constexpr uint16_t kStart = 0x0010;
constexpr uint16_t kBack = 0x0020;
constexpr uint16_t kA = 0x1000;
constexpr uint16_t kB = 0x2000;
constexpr uint16_t kX = 0x4000;
constexpr uint16_t kY = 0x8000;

void test_button_constants_match_the_documented_values() {
    assert(pad_button::dpad_up == kDpadUp);
    assert(pad_button::dpad_down == kDpadDown);
    assert(pad_button::dpad_left == kDpadLeft);
    assert(pad_button::dpad_right == kDpadRight);
    assert(pad_button::start == kStart);
    assert(pad_button::back == kBack);
    assert(pad_button::a == kA);
    assert(pad_button::b == kB);
    assert(pad_button::x == kX);
    assert(pad_button::y == kY);
}

// The exact bytes a title reads. Everything here is checked against
// hand-written values, so no helper's byte order can make it agree with itself.
void test_state_bytes_are_big_endian() {
    fixture fx;
    gamepad_state pad;
    pad.connected = true;
    pad.buttons = kA | kDpadDown; // 0x1002
    pad.left_trigger = 0x12;
    pad.right_trigger = 0x34;
    pad.thumb_lx = 0x1122;
    pad.thumb_ly = -2;       // 0xFFFE
    pad.thumb_rx = -32768;   // 0x8000
    pad.thumb_ry = 0x0102;
    fx.kernel.set_input_provider([&](uint32_t, gamepad_state& out) {
        out = pad;
        return true;
    });

    const uint32_t state = fixture::scratch;
    test_ctx ctx{};
    ctx.r3.u32 = 0;
    ctx.r5.u32 = state;
    host_function<test_ctx, XamInputGetState>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::success);

    // buttons: big-endian halfword at +4, so the high byte comes first.
    assert(fx.raw(state + 4) == 0x10);
    assert(fx.raw(state + 5) == 0x02);
    // triggers: single bytes, no order to get wrong.
    assert(fx.raw(state + 6) == 0x12);
    assert(fx.raw(state + 7) == 0x34);
    // the four axes, each big-endian.
    assert(fx.raw(state + 8) == 0x11 && fx.raw(state + 9) == 0x22);
    assert(fx.raw(state + 10) == 0xFF && fx.raw(state + 11) == 0xFE);
    assert(fx.raw(state + 12) == 0x80 && fx.raw(state + 13) == 0x00);
    assert(fx.raw(state + 14) == 0x01 && fx.raw(state + 15) == 0x02);
}

// Every button, one at a time, lands on the bit the title tests for. A single
// swapped pair here is a button that silently does something else.
void test_each_button_lands_on_its_own_bit() {
    fixture fx;
    gamepad_state pad;
    pad.connected = true;
    fx.kernel.set_input_provider([&](uint32_t, gamepad_state& out) {
        out = pad;
        return true;
    });
    const uint32_t state = fixture::scratch;
    const uint16_t buttons[] = {kDpadUp, kDpadDown, kDpadLeft, kDpadRight,
                                kStart,  kBack,     kA,        kB,
                                kX,      kY};
    for (uint16_t button : buttons) {
        pad.buttons = button;
        test_ctx ctx{};
        ctx.r3.u32 = 0;
        ctx.r5.u32 = state;
        host_function<test_ctx, XamInputGetState>(ctx, fx.base());
        const uint16_t read = static_cast<uint16_t>(
            (fx.raw(state + 4) << 8) | fx.raw(state + 5));
        assert(read == button);
    }
}

// A host trigger's full signed range onto the console's byte.
void test_trigger_conversion() {
    assert(trigger_from_axis(0) == 0);
    assert(trigger_from_axis(-1) == 0);      // resting, below zero
    assert(trigger_from_axis(-32768) == 0);  // fully released on some backends
    assert(trigger_from_axis(32767) == 255); // fully pulled
    assert(trigger_from_axis(16384) == 128); // halfway
}

// The stick's vertical axis is inverted between host and console, and the one
// value that cannot simply be negated is the one a fully pushed stick reports.
void test_stick_y_conversion() {
    assert(stick_y_from_axis(0) == 0);
    assert(stick_y_from_axis(1000) == -1000);
    assert(stick_y_from_axis(-1000) == 1000);
    assert(stick_y_from_axis(32767) == -32767);
    // Negating -32768 in an int16 gives -32768 again: full down would read as
    // full down after the flip, i.e. the stick would appear stuck.
    assert(stick_y_from_axis(-32768) == 32767);
}

// A port with nobody on it is a different answer from a controller holding
// nothing, and a title branches on the difference.
void test_absent_controller_is_distinct_from_an_idle_one() {
    fixture fx;
    const uint32_t state = fixture::scratch;

    test_ctx ctx{};
    ctx.r3.u32 = 0;
    ctx.r5.u32 = state;
    host_function<test_ctx, XamInputGetState>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::device_not_connected);

    fx.kernel.set_input_provider([](uint32_t, gamepad_state& out) {
        out = gamepad_state{};
        out.connected = true; // attached, nothing held
        return true;
    });
    ctx = test_ctx{};
    ctx.r3.u32 = 0;
    ctx.r5.u32 = state;
    host_function<test_ctx, XamInputGetState>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::success);
    assert(fx.raw(state + 4) == 0 && fx.raw(state + 5) == 0);
}

} // namespace

int main() {
    test_button_constants_match_the_documented_values();
    test_state_bytes_are_big_endian();
    test_each_button_lands_on_its_own_bit();
    test_trigger_conversion();
    test_stick_y_conversion();
    test_absent_controller_is_distinct_from_an_idle_one();
    std::printf("input_test: all checks passed\n");
    return 0;
}
