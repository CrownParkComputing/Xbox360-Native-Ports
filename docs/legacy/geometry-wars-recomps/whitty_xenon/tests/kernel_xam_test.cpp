// Unit tests for the xam.xex handlers.
//
// A statically recompiled title runs with no dashboard behind it, so most of
// these report "nothing there" - no launch data, no signed-in user, no
// controller. Those are real answers a title handles, not failures, and the
// exact result codes are what a title branches on, so they are pinned here.
#include "whitty_xenon/host_function.h"
#include "whitty_xenon/kernel_handlers.h"
#include "whitty_xenon/kernel_state.h"

#include <cassert>
#include <cstdlib>
#include <filesystem>
#include <system_error>
#include <cstdint>
#include <cstdio>
#include <string>
#include <utility>

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
};

void test_no_launch_data() {
    fixture fx;
    const uint32_t size_ptr = fixture::scratch;
    fx.memory.write_u32(size_ptr, 0xDEADBEEF);

    test_ctx ctx{};
    ctx.r3.u32 = size_ptr;
    host_function<test_ctx, XamLoaderGetLaunchDataSize>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::not_found);
    assert(fx.memory.read_u32(size_ptr) == 0); // size cleared, not left stale

    ctx = test_ctx{};
    host_function<test_ctx, XamLoaderGetLaunchData>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::not_found);
}

void test_console_identity() {
    fixture fx;
    test_ctx ctx{};
    host_function<test_ctx, XGetAVPack>(ctx, fx.base());
    assert(ctx.r3.u32 == 6); // VGA

    ctx = test_ctx{};
    host_function<test_ctx, XGetGameRegion>(ctx, fx.base());
    assert(ctx.r3.u32 == 0xFFFFu); // all regions

    ctx = test_ctx{};
    host_function<test_ctx, XGetLanguage>(ctx, fx.base());
    assert(ctx.r3.u32 == 1); // English
}

void test_execution_id_reports_the_block() {
    fixture fx;
    // Unset: the title is told there is no execution info rather than being
    // handed a null pointer to dereference.
    const uint32_t info_ptr = fixture::scratch;
    test_ctx ctx{};
    ctx.r3.u32 = info_ptr;
    host_function<test_ctx, XamGetExecutionId>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::not_found);

    fx.kernel.set_execution_info_address(0x40001000);
    ctx = test_ctx{};
    ctx.r3.u32 = info_ptr;
    host_function<test_ctx, XamGetExecutionId>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::success);
    assert(fx.memory.read_u32(info_ptr) == 0x40001000u);
}

void test_xam_alloc_round_trip() {
    fixture fx;
    const uint32_t out_ptr = fixture::scratch;
    test_ctx ctx{};
    ctx.r3.u32 = 0;
    ctx.r4.u32 = 256;
    ctx.r5.u32 = out_ptr;
    host_function<test_ctx, XamAlloc>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::success);
    const uint32_t address = fx.memory.read_u32(out_ptr);
    assert(address != 0);
    assert(fx.memory.read_u32(address) == 0); // zeroed
    assert(fx.heap.live_allocations() == 1);

    ctx = test_ctx{};
    ctx.r3.u32 = address;
    host_function<test_ctx, XamFree>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::success);
    assert(fx.heap.live_allocations() == 0);
}

void test_input_reports_no_controller() {
    fixture fx;
    const uint32_t caps = fixture::scratch;
    fx.memory.write_u32(caps, 0xDEADBEEF);
    test_ctx ctx{};
    ctx.r3.u32 = 0;
    ctx.r4.u32 = 0;
    ctx.r5.u32 = caps;
    host_function<test_ctx, XamInputGetCapabilities>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::device_not_connected);
    assert(fx.memory.read_u32(caps) == 0); // zeroed, not left stale

    const uint32_t state = fixture::scratch + 0x100;
    fx.memory.write_u32(state, 0xDEADBEEF);
    ctx = test_ctx{};
    ctx.r5.u32 = state;
    host_function<test_ctx, XamInputGetState>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::device_not_connected);
    assert(fx.memory.read_u32(state) == 0);

    // A null state pointer is a legitimate "anything attached?" query.
    ctx = test_ctx{};
    ctx.r5.u32 = 0;
    host_function<test_ctx, XamInputGetState>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::device_not_connected);
}

// With a controller attached, the title reads a real gamepad - and reads it in
// the console's layout, which is big-endian and packed. A byte in the wrong
// place is a button doing something else, which looks like a broken game.
void test_input_reports_an_attached_controller() {
    fixture fx;
    gamepad_state pad;
    pad.connected = true;
    pad.buttons = pad_button::a | pad_button::dpad_left;
    pad.left_trigger = 0x40;
    pad.right_trigger = 0xFF;
    pad.thumb_lx = -32768;
    pad.thumb_ly = 32767;
    pad.thumb_rx = 1234;
    pad.thumb_ry = -1234;
    fx.kernel.set_input_provider(
        [&](uint32_t user, gamepad_state& out) {
            if (user != 0) return false;
            out = pad;
            return true;
        });

    const uint32_t state = fixture::scratch;
    test_ctx ctx{};
    ctx.r3.u32 = 0;
    ctx.r5.u32 = state;
    host_function<test_ctx, XamInputGetState>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::success);
    assert(fx.memory.read_u16(state + 4) == pad.buttons);
    assert(fx.memory.read_u8(state + 6) == 0x40);
    assert(fx.memory.read_u8(state + 7) == 0xFF);
    assert(static_cast<int16_t>(fx.memory.read_u16(state + 8)) == -32768);
    assert(static_cast<int16_t>(fx.memory.read_u16(state + 10)) == 32767);
    assert(static_cast<int16_t>(fx.memory.read_u16(state + 12)) == 1234);
    assert(static_cast<int16_t>(fx.memory.read_u16(state + 14)) == -1234);

    // A port with nothing on it still reports nothing.
    ctx = test_ctx{};
    ctx.r3.u32 = 1;
    ctx.r5.u32 = state;
    host_function<test_ctx, XamInputGetState>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::device_not_connected);
}

// The packet number is how a title tells "still held" from "pressed again", so
// it must advance when the state changes and stay put when it does not.
void test_input_packet_number_tracks_change() {
    fixture fx;
    gamepad_state pad;
    pad.connected = true;
    fx.kernel.set_input_provider([&](uint32_t, gamepad_state& out) {
        out = pad;
        return true;
    });
    const uint32_t state = fixture::scratch;
    const auto poll = [&]() {
        test_ctx ctx{};
        ctx.r3.u32 = 0;
        ctx.r5.u32 = state;
        host_function<test_ctx, XamInputGetState>(ctx, fx.base());
        return fx.memory.read_u32(state);
    };
    pad.buttons = pad_button::a;
    const uint32_t first = poll();
    const uint32_t unchanged = poll();
    assert(unchanged == first); // held, not pressed again
    pad.buttons = pad_button::a | pad_button::b;
    assert(poll() != first);
}

void test_input_capabilities_describe_a_gamepad() {
    fixture fx;
    fx.kernel.set_input_provider([](uint32_t, gamepad_state& out) {
        out = gamepad_state{};
        out.connected = true;
        return true;
    });
    const uint32_t caps = fixture::scratch;
    test_ctx ctx{};
    ctx.r3.u32 = 0;
    ctx.r5.u32 = caps;
    host_function<test_ctx, XamInputGetCapabilities>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::success);
    assert(fx.memory.read_u8(caps + 0) == kInputDeviceTypeGamepad);
    assert(fx.memory.read_u8(caps + 1) == kInputDeviceSubtypeGamepad);
    // Capabilities report which inputs EXIST, not their values.
    assert(fx.memory.read_u16(caps + 4) == 0xFFFF);
}

// A title hands these calls a buffer of exactly the structure's size, so writing
// one byte more corrupts whatever follows it. That is not a theoretical worry:
// X_INPUT_CAPABILITIES was declared 0x1C here rather than its true 0x14, and
// Hydro Thunder Hurricane passes a 20-byte buffer immediately below its stack
// cookie - so the eight extra bytes destroyed the cookie and the title bug
// checked 0xC0000409 in its own CRT, three frames away from any input code.
//
// The assertion is on the bytes AFTER the structure, because that is the damage;
// asserting the fields inside it cannot see this bug at all, which is exactly
// why the test above passed throughout.
void test_input_calls_write_only_their_own_structure() {
    fixture fx;
    fx.kernel.set_input_provider([](uint32_t, gamepad_state& out) {
        out = gamepad_state{};
        out.connected = true;
        return true;
    });
    constexpr uint32_t kCapabilitiesSize = 0x14;
    constexpr uint32_t kStateSize = 0x10;
    constexpr uint8_t kGuard = 0xCD;
    // A guard band standing in for the caller's stack cookie.
    const uint32_t buffer = fixture::scratch;
    const uint32_t guard_length = 16;

    for (const auto& call : {std::pair<uint32_t, bool>{kCapabilitiesSize, true},
                             std::pair<uint32_t, bool>{kStateSize, false}}) {
        for (uint32_t i = 0; i < call.first + guard_length; ++i)
            fx.memory.write_u8(buffer + i, kGuard);
        test_ctx ctx{};
        ctx.r3.u32 = 0;
        ctx.r5.u32 = buffer;
        if (call.second)
            host_function<test_ctx, XamInputGetCapabilities>(ctx, fx.base());
        else
            host_function<test_ctx, XamInputGetState>(ctx, fx.base());
        assert(ctx.r3.u32 == x_error::success);
        for (uint32_t i = 0; i < guard_length; ++i)
            assert(fx.memory.read_u8(buffer + call.first + i) == kGuard);
    }

    // And the same on the not-connected path, which zeroes the block before it
    // has looked at whether anything is attached.
    fx.kernel.set_input_provider([](uint32_t, gamepad_state& out) {
        out = gamepad_state{};
        out.connected = false;
        return true;
    });
    for (uint32_t i = 0; i < kCapabilitiesSize + guard_length; ++i)
        fx.memory.write_u8(buffer + i, kGuard);
    test_ctx ctx{};
    ctx.r3.u32 = 0;
    ctx.r5.u32 = buffer;
    host_function<test_ctx, XamInputGetCapabilities>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::device_not_connected);
    for (uint32_t i = 0; i < guard_length; ++i)
        assert(fx.memory.read_u8(buffer + kCapabilitiesSize + i) == kGuard);
}

// Port 0 has a local profile; the rest have nobody. A title that finds nobody
// signed in anywhere refuses to let the controller do anything, so "signed in
// locally" is the stub that keeps a single-player game playable - there is no
// profile system or Live behind it.
//
// The four ports are NOT symmetric here and that is the point: there are four
// CONTROLLERS and one ACCOUNT. Xenia answers signin per slot from whether a
// profile is logged into it, and its defaults leave slots 1-3 empty, so a second
// pad in Xenia reports exactly this too.
void test_first_port_is_signed_in_locally() {
    fixture fx;
    test_ctx ctx{};
    ctx.r3.u32 = 0;
    host_function<test_ctx, XamUserGetSigninState>(ctx, fx.base());
    assert(ctx.r3.u32 == 1); // signed in locally, not to Live
    // And that is what an unrecognised title gets, which is the important half:
    // state 2 is a claim about a Live service that does not exist, so it is
    // reached only by a title measured under it, never by default. See
    // kLiveSigninTitles.
    fx.kernel.set_title_id(0xFFFFFFFFu);
    ctx = test_ctx{};
    ctx.r3.u32 = 0;
    host_function<test_ctx, XamUserGetSigninState>(ctx, fx.base());
    assert(ctx.r3.u32 == 1);
    fx.kernel.set_title_id(0);

    for (uint32_t user = 1; user < 4; ++user) {
        ctx = test_ctx{};
        ctx.r3.u32 = user;
        host_function<test_ctx, XamUserGetSigninState>(ctx, fx.base());
        assert(ctx.r3.u32 == 0); // a controller, but no profile
    }
    // Past the four ports there is not even a port to be signed out of.
    ctx = test_ctx{};
    ctx.r3.u32 = 4;
    host_function<test_ctx, XamUserGetSigninState>(ctx, fx.base());
    assert(ctx.r3.u32 == 0);

    const uint32_t xuid = fixture::scratch;
    ctx = test_ctx{};
    ctx.r3.u32 = 0;
    ctx.r5.u32 = xuid;
    host_function<test_ctx, XamUserGetXUID>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::success);
    // An offline XUID: the E0 prefix is what marks it as one.
    assert((fx.memory.read_u64(xuid) >> 56) == 0xE0);
}

// XamUserGetXUID answers with an HRESULT, not a raw error code, and a title
// tests it with FAILED() - which is "top bit set". Returning the raw 0x00000525
// therefore reads as SUCCESS to the caller, which then treats the zero XUID this
// call just wrote as a real player. That is the failure this pins: the value
// looks like the right error in a debugger and behaves like success in the
// title.
//
// Xenia declares the export X_HRESULT_result_t and returns X_E_NO_SUCH_USER
// (0x80070525) for an empty slot and X_E_INVALIDARG (0x80070057) past the four
// ports (xam_user.cc).
void test_xuid_for_other_ports_fails_as_an_hresult() {
    fixture fx;
    const uint32_t xuid = fixture::scratch;

    for (uint32_t user = 1; user < 4; ++user) {
        fx.memory.write_u64(xuid, 0xDEADBEEFDEADBEEFull);
        test_ctx ctx{};
        ctx.r3.u32 = user;
        ctx.r5.u32 = xuid;
        host_function<test_ctx, XamUserGetXUID>(ctx, fx.base());
        assert(ctx.r3.u32 == x_hresult::no_such_user);
        assert(ctx.r3.u32 == 0x80070525u);
        // The top bit is the whole point: a caller testing FAILED() must fail.
        assert((ctx.r3.u32 & 0x80000000u) != 0);
        // And no XUID was left behind for a caller that ignored the result.
        assert(fx.memory.read_u64(xuid) == 0);
    }

    fx.memory.write_u64(xuid, 0xDEADBEEFDEADBEEFull);
    test_ctx ctx{};
    ctx.r3.u32 = 4; // not a port at all
    ctx.r5.u32 = xuid;
    host_function<test_ctx, XamUserGetXUID>(ctx, fx.base());
    assert(ctx.r3.u32 == x_hresult::invalid_argument);
    assert(fx.memory.read_u64(xuid) == 0);

    // A null buffer is refused rather than written through.
    ctx = test_ctx{};
    ctx.r3.u32 = 0;
    ctx.r5.u32 = 0;
    host_function<test_ctx, XamUserGetXUID>(ctx, fx.base());
    assert(ctx.r3.u32 == x_hresult::invalid_argument);
}

// The player has a name, and every other answer about port 0 already assumed
// one. This refused unconditionally, which made the runtime self-contradictory:
// signed in, with an offline XUID, and with scores recorded under a gamertag -
// but no name to give when asked for it. Jetpac Refuelled asks while building a
// game session and abandons the session when refused ("Failed to create the
// game."), which is why a refusal is worth pinning as tightly as a wrong value.
//
// Shape from Xenia's xam_user.cc: length counts the terminator, an empty port
// clears the first byte so a caller that ignores the result reads an empty
// string, and an index past the ports is INVALID_PARAMETER.
void test_local_player_has_a_name() {
    fixture fx;
    const uint32_t buffer = fixture::scratch;

    auto fill = [&](uint32_t length) {
        for (uint32_t i = 0; i < length; ++i)
            fx.memory.write_u8(buffer + i, 0xCC);
    };
    auto read = [&]() {
        std::string out;
        for (uint32_t i = 0; i < 32; ++i) {
            const uint8_t c = fx.memory.read_u8(buffer + i);
            if (c == 0) break;
            out.push_back(static_cast<char>(c));
        }
        return out;
    };

    fill(32);
    test_ctx ctx{};
    ctx.r3.u32 = 0;
    ctx.r4.u32 = buffer;
    ctx.r5.u32 = 16;
    host_function<test_ctx, XamUserGetName>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::success);
    // The same name the score table and the blade already use - one player, one
    // gamertag, and nothing here invents a second one.
    assert(read() == std::string(kLocalPlayerName));

    // The length counts the terminator, so a short buffer truncates and still
    // terminates rather than running off its end.
    fill(32);
    ctx = test_ctx{};
    ctx.r3.u32 = 0;
    ctx.r4.u32 = buffer;
    ctx.r5.u32 = 4;
    host_function<test_ctx, XamUserGetName>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::success);
    assert(read() == std::string(kLocalPlayerName).substr(0, 3));
    assert(fx.memory.read_u8(buffer + 3) == 0);
    // Nothing was written past the length it was given.
    assert(fx.memory.read_u8(buffer + 4) == 0xCC);

    // Ports 1-3 have no profile, exactly as XamUserGetXUID says they do - and
    // the buffer is emptied rather than left holding whatever was in it.
    for (uint32_t user = 1; user < 4; ++user) {
        fill(32);
        ctx = test_ctx{};
        ctx.r3.u32 = user;
        ctx.r4.u32 = buffer;
        ctx.r5.u32 = 16;
        host_function<test_ctx, XamUserGetName>(ctx, fx.base());
        assert(ctx.r3.u32 == x_error::no_such_user);
        assert(read().empty());
    }

    // Past the four ports there is no port to have a profile on.
    fill(32);
    ctx = test_ctx{};
    ctx.r3.u32 = 4;
    ctx.r4.u32 = buffer;
    ctx.r5.u32 = 16;
    host_function<test_ctx, XamUserGetName>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::invalid_parameter);
    // An out-of-range index is not a reason to touch the caller's buffer.
    assert(fx.memory.read_u8(buffer) == 0xCC);

    // A null buffer, and a zero length, are refused rather than written to.
    ctx = test_ctx{};
    ctx.r3.u32 = 0;
    ctx.r4.u32 = 0;
    ctx.r5.u32 = 16;
    host_function<test_ctx, XamUserGetName>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::invalid_parameter);

    ctx = test_ctx{};
    ctx.r3.u32 = 0;
    ctx.r4.u32 = buffer;
    ctx.r5.u32 = 0;
    host_function<test_ctx, XamUserGetName>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::invalid_parameter);
}

// Four controllers on one console, which is what local multiplayer is. Each port
// answers with its OWN pad, a port with nothing on it says so, and an index past
// the four ports is refused even when the host would happily answer for it.
//
// That last one is the hazard worth pinning. The provider here answers for every
// index, as a permissive host easily might; a handler that folded an
// out-of-range index onto port 0 would then report SUCCESS and hand back player
// one's buttons for a port that does not exist - a title polling ports until one
// fails would never stop.
void test_input_answers_each_port_independently() {
    fixture fx;
    gamepad_state pads[4]{};
    pads[0].connected = true;
    pads[0].buttons = pad_button::a;
    pads[0].thumb_lx = 1000;
    pads[1].connected = true;
    pads[1].buttons = pad_button::b;
    pads[1].thumb_lx = -2000;
    // Ports 2 and 3 have nothing plugged in.
    fx.kernel.set_input_provider([&](uint32_t user, gamepad_state& out) {
        // Deliberately permissive: answers for ANY index, including ones that
        // are not ports. The handler is what has to refuse those.
        out = pads[user < 4 ? user : 0];
        return true;
    });

    const uint32_t state = fixture::scratch;
    const auto poll = [&](uint32_t user) {
        test_ctx ctx{};
        ctx.r3.u32 = user;
        ctx.r5.u32 = state;
        host_function<test_ctx, XamInputGetState>(ctx, fx.base());
        return ctx.r3.u32;
    };

    assert(poll(0) == x_error::success);
    assert(fx.memory.read_u16(state + 4) == pad_button::a);
    const uint32_t packet_zero = fx.memory.read_u32(state);

    assert(poll(1) == x_error::success);
    assert(fx.memory.read_u16(state + 4) == pad_button::b);
    assert(static_cast<int16_t>(fx.memory.read_u16(state + 8)) == -2000);

    assert(poll(2) == x_error::device_not_connected);
    assert(poll(3) == x_error::device_not_connected);

    // Player two pressing a button must not make player one's held button look
    // like a fresh press. Each port keeps its own packet number.
    pads[1].buttons = static_cast<uint16_t>(pad_button::b | pad_button::x);
    assert(poll(1) == x_error::success);
    assert(poll(0) == x_error::success);
    assert(fx.memory.read_u32(state) == packet_zero);

    // Not ports. DEVICE_NOT_CONNECTED, as Xenia answers for
    // user_index >= XUserMaxUserCount - including XUSER_INDEX_ANY, whose guard
    // fires before the "pin to port 0" it would otherwise get.
    assert(poll(4) == x_error::device_not_connected);
    assert(poll(0xFF) == x_error::device_not_connected);
    assert(poll(0xFFFFFFFFu) == x_error::device_not_connected);

    // Capabilities follow the same per-port rule...
    const uint32_t caps = fixture::scratch + 0x100;
    const auto capabilities = [&](uint32_t user, uint32_t flags) {
        test_ctx ctx{};
        ctx.r3.u32 = user;
        ctx.r4.u32 = flags;
        ctx.r5.u32 = caps;
        host_function<test_ctx, XamInputGetCapabilities>(ctx, fx.base());
        return ctx.r3.u32;
    };
    assert(capabilities(0, 0) == x_error::success);
    assert(capabilities(1, 0) == x_error::success);
    assert(capabilities(2, 0) == x_error::device_not_connected);
    // ...except that this call DOES resolve "any user", which Xenia pins to port
    // 0. A title asking "is there a controller at all" must not be told no while
    // one is plugged into port 0.
    assert(capabilities(0xFF, 0) == x_error::success);
    assert(capabilities(0xFFFFFFFFu, 0) == x_error::success);
    constexpr uint32_t kAnyUserFlag = 1u << 30;
    assert(capabilities(2, kAnyUserFlag) == x_error::success);
}

// A second player must not earn the first player's achievements. There is one
// local profile and it is port 0's, so an unlock naming any other port is
// dropped - and the call still reports success, because nobody was there to lose
// anything. Xenia does the same: it looks the slot's profile up and returns
// silently when there is none.
void test_achievements_are_only_the_first_port_s() {
    fixture fx;
    fx.kernel.set_title_id(0x584108FF);
    fx.kernel.profile().set_path(std::string()); // in memory only
    const uint32_t buffer = fixture::scratch;
    const uint32_t records = fixture::scratch + 0x40;
    fx.memory.write_u32(buffer + 0x00, 2); // two unlocks
    fx.memory.write_u32(buffer + 0x04, records);
    fx.memory.write_u32(records + 0, 1);  // port 1 - the second player
    fx.memory.write_u32(records + 4, 11);
    fx.memory.write_u32(records + 8, 0);  // port 0 - the profile
    fx.memory.write_u32(records + 12, 22);

    assert(xgi_user_write_achievements(buffer, 8) == x_error::success);
    // Only port 0's reached the store.
    assert(!fx.kernel.profile().is_unlocked(0x584108FF, 11));
    assert(fx.kernel.profile().is_unlocked(0x584108FF, 22));
}

// A new listener is seeded with what the machine already is, not left empty.
// This is the difference between a title that knows a controller is attached
// and one that polls input forever while believing nothing is plugged in.
void test_listener_is_seeded_with_current_state() {
    fixture fx;
    fx.kernel.set_connected_ports(0x1);
    fx.kernel.set_signed_in_ports(0x1);
    test_ctx ctx{};
    host_function<test_ctx, XamNotifyCreateListener>(ctx, fx.base());
    const uint32_t handle = ctx.r3.u32;
    assert(handle != 0); // a real handle the title can hold

    const uint32_t id = fixture::scratch;
    const uint32_t param = fixture::scratch + 0x10;
    const auto next = [&](uint32_t match) {
        fx.memory.write_u32(id, 0xDEADBEEF);
        fx.memory.write_u32(param, 0xDEADBEEF);
        test_ctx call{};
        call.r3.u32 = handle;
        call.r4.u32 = match;
        call.r5.u32 = id;
        call.r6.u32 = param;
        host_function<test_ctx, XNotifyGetNext>(call, fx.base());
        return call.r3.u32;
    };

    assert(next(0) == 1);
    assert(fx.memory.read_u32(id) == notification_id::input_devices_changed);
    assert(fx.memory.read_u32(param) == 0x1); // port 0 has a controller

    assert(next(0) == 1);
    assert(fx.memory.read_u32(id) == notification_id::sign_in_changed);
    assert(fx.memory.read_u32(param) == 0x1);

    // Drained, and a drained listener reports nothing rather than repeating.
    assert(next(0) == 0);
    assert(fx.memory.read_u32(id) == 0);
}

// A broadcast reaches every listener, and a match id takes only what it names.
void test_notifications_broadcast_and_filter() {
    fixture fx;
    test_ctx ctx{};
    host_function<test_ctx, XamNotifyCreateListener>(ctx, fx.base());
    const uint32_t handle = ctx.r3.u32;
    // Drop the two seeded events.
    const uint32_t id = fixture::scratch;
    const uint32_t param = fixture::scratch + 0x10;
    const auto next = [&](uint32_t match) {
        test_ctx call{};
        call.r3.u32 = handle;
        call.r4.u32 = match;
        call.r5.u32 = id;
        call.r6.u32 = param;
        host_function<test_ctx, XNotifyGetNext>(call, fx.base());
        return call.r3.u32;
    };
    while (next(0) == 1) {
    }

    fx.kernel.broadcast_notification(notification_id::system_ui, 1);
    fx.kernel.broadcast_notification(notification_id::sign_in_changed, 3);
    // Asking for one id skips past the other rather than consuming it.
    assert(next(notification_id::sign_in_changed) == 1);
    assert(fx.memory.read_u32(param) == 3);
    assert(next(0) == 1);
    assert(fx.memory.read_u32(id) == notification_id::system_ui);
}

void test_full_license_mask() {
    fixture fx;
    const uint32_t mask = fixture::scratch;
    test_ctx ctx{};
    ctx.r3.u32 = mask;
    host_function<test_ctx, XamContentGetLicenseMask>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::success);
    // Full licence: the title must not take its trial-mode path.
    assert(fx.memory.read_u32(mask) == 0xFFFFFFFFu);
}

// There is exactly one storage device - the hard disk this runtime already
// keeps the profile on - and every one of these calls has to agree about it.
// A device id that is not it must be told the device is not there rather than
// handed a plausible one, and the buffer it offered has to come back untouched:
// a title that reads a name out of it after a failure would otherwise find
// something that looks like a name.
void test_only_the_hard_disk_is_a_storage_device() {
    fixture fx;
    const uint32_t buffer = fixture::scratch;
    for (uint32_t i = 0; i < 8; ++i)
        fx.memory.write_u32(buffer + i * 4, 0xDEADBEEFu);

    for (uint32_t device : {0u, 2u, 0xF00Du}) {
        test_ctx ctx{};
        ctx.r3.u32 = device;
        ctx.r4.u32 = buffer;
        ctx.r5.u32 = 32;
        host_function<test_ctx, XamContentGetDeviceName>(ctx, fx.base());
        assert(ctx.r3.u32 == x_error::device_not_connected);

        ctx = test_ctx{};
        ctx.r3.u32 = device;
        host_function<test_ctx, XamContentGetDeviceState>(ctx, fx.base());
        assert(ctx.r3.u32 == x_error::device_not_connected);

        ctx = test_ctx{};
        ctx.r3.u32 = device;
        ctx.r4.u32 = buffer;
        host_function<test_ctx, XamContentGetDeviceData>(ctx, fx.base());
        assert(ctx.r3.u32 == x_error::device_not_connected);
    }
    for (uint32_t i = 0; i < 8; ++i)
        assert(fx.memory.read_u32(buffer + i * 4) == 0xDEADBEEFu);

    // Device 1 is the hard disk, and it answers all three.
    test_ctx ctx{};
    ctx.r3.u32 = 1;
    ctx.r4.u32 = buffer;
    ctx.r5.u32 = 32;
    host_function<test_ctx, XamContentGetDeviceName>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::success);
    // UTF-16, and terminated: a title copies until the zero.
    assert(fx.memory.read_u16(buffer) == u'H');
    assert(fx.memory.read_u16(buffer + 2) == u'a');
    assert(fx.memory.read_u16(buffer + 20) == 0);

    // A buffer with no room for the terminator is refused rather than truncated.
    ctx = test_ctx{};
    ctx.r3.u32 = 1;
    ctx.r4.u32 = buffer;
    ctx.r5.u32 = 10; // exactly the name, no terminator
    host_function<test_ctx, XamContentGetDeviceName>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::insufficient_buffer);

    ctx = test_ctx{};
    ctx.r3.u32 = 1;
    host_function<test_ctx, XamContentGetDeviceState>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::success);

    const uint32_t data = fixture::scratch + 0x200;
    ctx = test_ctx{};
    ctx.r3.u32 = 1;
    ctx.r4.u32 = data;
    host_function<test_ctx, XamContentGetDeviceData>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::success);
    assert(fx.memory.read_u32(data + 0x00) == 1);  // id
    assert(fx.memory.read_u32(data + 0x04) == 1);  // type: HDD
    // Free space is a real number, and never larger than the device.
    const uint64_t total = fx.memory.read_u64(data + 0x08);
    const uint64_t free_bytes = fx.memory.read_u64(data + 0x10);
    assert(total > 0 && free_bytes <= total);
}

// The call Ridge Racer 6 made 12,338 times in a 260 s run without ever getting
// an answer. It asks the console where to save; there is one device and no
// blade to choose it on, so it is answered with that device, through the
// overlapped, exactly as Xenia answers it headless.
void test_device_selector_picks_the_hard_disk() {
    fixture fx;
    const uint32_t device_id = fixture::scratch;
    const uint32_t overlapped = fixture::scratch + 0x100;

    // No overlapped at all: there is nowhere to put the answer, so it is
    // refused rather than answered somewhere the title will not look.
    test_ctx ctx{};
    ctx.r3.u32 = 0;
    ctx.r7.u32 = device_id;
    ctx.r8.u32 = 0;
    host_function<test_ctx, XamShowDeviceSelectorUI>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::invalid_parameter);

    fx.memory.zero_block(overlapped, 0x40);
    fx.memory.write_u32(device_id, 0xDEADBEEFu);
    ctx = test_ctx{};
    ctx.r3.u32 = 0;   // user index
    ctx.r4.u32 = 1;   // content type: saved game
    ctx.r5.u32 = 0;   // content flags
    ctx.r6.u32 = 0;   // bytes requested
    ctx.r7.u32 = device_id;
    ctx.r8.u32 = overlapped;
    host_function<test_ctx, XamShowDeviceSelectorUI>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::io_pending);
    assert(fx.memory.read_u32(device_id) == 1);
    // And the overlapped carries the real result, which is where the title
    // reads it from.
    assert(fx.memory.read_u32(overlapped + 0x00) == x_error::success);

    // A device-id pointer of zero has nowhere to write the choice.
    ctx = test_ctx{};
    ctx.r3.u32 = 0;
    ctx.r7.u32 = 0;
    ctx.r8.u32 = overlapped;
    host_function<test_ctx, XamShowDeviceSelectorUI>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::invalid_parameter);
}

// The content store, which is the whole of what Ridge Racer 6 was waiting for.
// A package is a directory; opening one mounts it under the root name the title
// gave, so the title's own file calls resolve into it. The two answers that
// matter are that OPEN_EXISTING refuses when there is nothing there - what a
// first run gets - and that a create really produces something the file system
// can then reach, because a success without a mount hands the title a root
// whose every open fails one call further from the mistake.
void test_content_packages_open_create_and_close() {
    const std::string root =
        std::string(::getenv("HOME") ? ::getenv("HOME") : ".") +
        "/.cache/whitty_xenon_content_test";
    std::error_code error;
    std::filesystem::remove_all(root, error);
    ::setenv("WHITTY_CONTENT", root.c_str(), 1);

    fixture fx;
    const uint32_t name_ptr = fixture::scratch;
    const char* name = "save";
    for (uint32_t i = 0; i <= 4; ++i)
        fx.memory.write_u8(name_ptr + i, static_cast<uint8_t>(name[i]));

    const uint32_t data = fixture::scratch + 0x40;
    fx.memory.zero_block(data, 0x140);
    fx.memory.write_u32(data + 0x04, 1); // content type: saved game
    const char* file_name = "Game Data";
    for (uint32_t i = 0; i <= 9; ++i)
        fx.memory.write_u8(data + 0x108 + i, static_cast<uint8_t>(file_name[i]));

    const uint32_t disposition = fixture::scratch + 0x200;
    const uint32_t overlapped = fixture::scratch + 0x210;

    auto create = [&](uint32_t flags) {
        fx.memory.zero_block(overlapped, 0x40);
        fx.memory.write_u32(disposition, 0xDEADBEEFu);
        test_ctx ctx{};
        ctx.r3.u32 = 0;
        ctx.r4.u32 = name_ptr;
        ctx.r5.u32 = data;
        ctx.r6.u32 = flags;
        ctx.r7.u32 = disposition;
        ctx.r8.u32 = 0;
        ctx.r9.u32 = overlapped;
        host_function<test_ctx, XamContentCreate>(ctx, fx.base());
        assert(ctx.r3.u32 == x_error::io_pending);
        return fx.memory.read_u32(overlapped); // the real result
    };

    // Nothing there: a first run's answer, and nothing mounted.
    assert(create(3) == x_error::path_not_found);
    assert(!fx.kernel.files().resolve_path("save:\\x").mounted());

    // CREATE_ALWAYS makes one, reports "created", and it is reachable.
    assert(create(2) == x_error::success);
    assert(fx.memory.read_u32(disposition) == 1);
    assert(fx.kernel.files().resolve_path("save:\\x").mounted());
    assert(std::filesystem::is_directory(root + "/00000000/00000001/Game Data"));

    // Closing it takes the root away again.
    {
        test_ctx ctx{};
        ctx.r3.u32 = name_ptr;
        ctx.r4.u32 = 0;
        host_function<test_ctx, XamContentClose>(ctx, fx.base());
        assert(ctx.r3.u32 == x_error::success);
        assert(!fx.kernel.files().resolve_path("save:\\x").mounted());
        // A root nobody opened is NOT_FOUND, so a double close is visible.
        host_function<test_ctx, XamContentClose>(ctx, fx.base());
        assert(ctx.r3.u32 == x_error::not_found);
    }

    // And now the package really is there, so the call the title actually makes
    // succeeds and reports "opened" rather than "created".
    assert(create(3) == x_error::success);
    assert(fx.memory.read_u32(disposition) == 2);

    // CREATE_NEW over an existing package is refused rather than silently
    // replacing a save.
    assert(create(1) == x_error::already_exists);

    // Deleting it removes the directory, and says so only when there was one.
    {
        test_ctx ctx{};
        ctx.r3.u32 = 0;
        ctx.r4.u32 = data;
        ctx.r5.u32 = 0;
        host_function<test_ctx, XamContentDelete>(ctx, fx.base());
        assert(ctx.r3.u32 == x_error::success);
        assert(!std::filesystem::exists(root + "/00000000/00000001/Game Data"));
        host_function<test_ctx, XamContentDelete>(ctx, fx.base());
        assert(ctx.r3.u32 == x_error::path_not_found);
    }

    std::filesystem::remove_all(root, error);
    ::unsetenv("WHITTY_CONTENT");
}

void test_terminate_title_is_recorded() {
    fixture fx;
    test_ctx ctx{};
    host_function<test_ctx, XamLoaderTerminateTitle>(ctx, fx.base());
    assert(fx.kernel.terminated());
}

// The one per-title switch in the runtime. Space Giraffe is told port 0 is on
// Live because a full run under state 2 was traced and every message it adds is
// served or refused - see kLiveSigninTitles and the note on
// XamUserGetSigninState. This asserts the list is actually consulted, because a
// list that is never read looks exactly like a list of titles that were fine
// anyway.
void test_a_listed_title_is_told_it_is_on_live() {
    // WHITTY_LIVE_SIGNIN overrides the list in both directions, so the list
    // itself can only be asserted when nothing is overriding it.
    if (::getenv("WHITTY_LIVE_SIGNIN") != nullptr) return;
    fixture fx;
    fx.kernel.set_title_id(0x5841080Cu); // Space Giraffe
    test_ctx ctx{};
    ctx.r3.u32 = 0;
    host_function<test_ctx, XamUserGetSigninState>(ctx, fx.base());
    assert(ctx.r3.u32 == 2); // signed in to Live

    // Only port 0. The other three have no profile whatever the title is: one
    // account, four controllers.
    for (uint32_t user = 1; user < 4; ++user) {
        ctx = test_ctx{};
        ctx.r3.u32 = user;
        host_function<test_ctx, XamUserGetSigninState>(ctx, fx.base());
        assert(ctx.r3.u32 == 0);
    }
    fx.kernel.set_title_id(0);
}

} // namespace

int main() {
    test_no_launch_data();
    test_a_listed_title_is_told_it_is_on_live();
    test_console_identity();
    test_execution_id_reports_the_block();
    test_xam_alloc_round_trip();
    test_input_reports_no_controller();
    test_input_reports_an_attached_controller();
    test_input_packet_number_tracks_change();
    test_input_capabilities_describe_a_gamepad();
    test_input_calls_write_only_their_own_structure();
    test_first_port_is_signed_in_locally();
    test_xuid_for_other_ports_fails_as_an_hresult();
    test_local_player_has_a_name();
    test_input_answers_each_port_independently();
    test_achievements_are_only_the_first_port_s();
    test_listener_is_seeded_with_current_state();
    test_notifications_broadcast_and_filter();
    test_full_license_mask();
    test_only_the_hard_disk_is_a_storage_device();
    test_device_selector_picks_the_hard_disk();
    test_content_packages_open_create_and_close();
    test_terminate_title_is_recorded();
    std::printf("kernel_xam_test: all checks passed\n");
    return 0;
}
