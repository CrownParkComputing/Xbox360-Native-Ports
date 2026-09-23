// Unit tests for the XMsg app dispatcher.
//
// XAM's sub-applications are not reached through named imports: a title hands
// XMsg an app id and a message id and XAM routes the pair. Both Geometry Wars
// titles poll app 0xFA (the music player) message 0x0007001B -
// XMPGetPlaybackController - hundreds of thousands of times a minute from a
// worker thread, asking whether they still own the audio. A dispatcher that
// only reports failure and leaves the output pointers untouched never gives
// them an answer to act on.
//
// What is pinned here is what a title reads: the values written through the
// pointers inside its message buffer, and the result codes for a message and an
// app the dispatcher does not know - which must be distinguishable, because the
// console's own XMsgStartIORequest turns "no such app" into a different error
// than "that app cannot do that".
#include "whitty_xenon/host_function.h"
#include "whitty_xenon/kernel_handlers.h"
#include "whitty_xenon/kernel_state.h"

#include <cassert>
#include <cstdint>
#include <cstdio>
#include <cstring>

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

constexpr uint32_t kAppXmp = 0xFA;
constexpr uint32_t kAppXgi = 0xFB;
constexpr uint32_t kAppXam = 0xFE;
constexpr uint32_t kXamEnableGuestSignin = 0x00021012;
constexpr uint32_t kXamTitleGetDeploymentType = 0x00022005;
constexpr uint32_t kXmpGetPlaybackController = 0x0007001B;
constexpr uint32_t kXmpSetPlaybackController = 0x0007001A;
constexpr uint32_t kXmpGetStatus = 0x00070009;
constexpr uint32_t kXmpSetVolume = 0x0007000C;
constexpr uint32_t kXmpGetVolume = 0x0007000B;
// Xenia's X_E_FAIL and X_E_NOTFOUND, which is what the dispatcher returns.
constexpr uint32_t kMessageFail = 0x80004005u;
constexpr uint32_t kMessageNotFound = 0x80070490u;

struct fixture {
    guest_memory memory;
    guest_heap heap;
    kernel_state kernel;
    static constexpr uint32_t scratch = 0x30000000;

    fixture() : kernel(memory, heap) {
        std::string error;
        assert(memory.initialize(error));
        assert(heap.initialize(memory, 0x40000000, 0x00400000, error));
        assert(memory.commit(scratch, 0x2000, error));
        memory.zero_block(scratch, 0x2000);
        install_kernel(&kernel);
    }
    ~fixture() { install_kernel(nullptr); }
    uint8_t* base() noexcept { return memory.host_unchecked(0); }
};

uint32_t call_in_process(fixture& fx, uint32_t app, uint32_t message,
                         uint32_t buffer, uint32_t length) {
    test_ctx ctx{};
    ctx.r1.u32 = fixture::scratch + 0x1800;
    ctx.r3.u32 = app;
    ctx.r4.u32 = message;
    ctx.r5.u32 = buffer;
    ctx.r6.u32 = length;
    host_function<test_ctx, XMsgInProcessCall>(ctx, fx.base());
    return ctx.r3.u32;
}

uint32_t call_start_io(fixture& fx, uint32_t app, uint32_t message,
                       uint32_t overlapped, uint32_t buffer, uint32_t length) {
    test_ctx ctx{};
    ctx.r1.u32 = fixture::scratch + 0x1800;
    ctx.r3.u32 = app;
    ctx.r4.u32 = message;
    ctx.r5.u32 = overlapped;
    ctx.r6.u32 = buffer;
    ctx.r7.u32 = length;
    host_function<test_ctx, XMsgStartIORequest>(ctx, fx.base());
    return ctx.r3.u32;
}

// The message both titles spin on. XMP_GET_PLAYBACK_CONTROLLER is
// { client, controller_ptr, locked_ptr }; the answer, with nothing else
// playing, is that the game owns playback and nothing is locked.
void test_get_playback_controller_answers_through_the_pointers() {
    fixture fx;
    const uint32_t buffer = fixture::scratch;
    const uint32_t controller = fixture::scratch + 0x100;
    const uint32_t locked = fixture::scratch + 0x110;
    fx.memory.write_u32(buffer + 0, 2); // XMP_CLIENT::Game
    fx.memory.write_u32(buffer + 4, controller);
    fx.memory.write_u32(buffer + 8, locked);
    fx.memory.write_u32(controller, 0xDEADBEEF);
    fx.memory.write_u32(locked, 0xDEADBEEF);

    assert(call_in_process(fx, kAppXmp, kXmpGetPlaybackController, buffer, 0) ==
           x_error::success);
    assert(fx.memory.read_u32(controller) == xmp_playback_controller::game);
    assert(fx.memory.read_u32(locked) == 0);
}

// A title that hands playback to the user is told so the next time it asks -
// the state has to persist between messages or the answers contradict.
void test_set_then_get_playback_controller_agree() {
    fixture fx;
    const uint32_t set_buffer = fixture::scratch;
    fx.memory.write_u32(set_buffer + 0, 2); // client Game
    fx.memory.write_u32(set_buffer + 4, xmp_playback_controller::user);
    fx.memory.write_u32(set_buffer + 8, 0); // not locked
    assert(call_in_process(fx, kAppXmp, kXmpSetPlaybackController, set_buffer,
                           0) == x_error::success);

    const uint32_t get_buffer = fixture::scratch + 0x200;
    const uint32_t controller = fixture::scratch + 0x300;
    const uint32_t locked = fixture::scratch + 0x310;
    fx.memory.write_u32(get_buffer + 0, 2);
    fx.memory.write_u32(get_buffer + 4, controller);
    fx.memory.write_u32(get_buffer + 8, locked);
    assert(call_in_process(fx, kAppXmp, kXmpGetPlaybackController, get_buffer,
                           0) == x_error::success);
    assert(fx.memory.read_u32(controller) == xmp_playback_controller::user);
    // The user owns playback now, so the title is NOT in control.
    assert(fx.memory.read_u32(locked) == 1);

    // Restore hands it back to the game.
    fx.memory.write_u32(set_buffer + 4, xmp_playback_controller::restore);
    assert(call_in_process(fx, kAppXmp, kXmpSetPlaybackController, set_buffer,
                           0) == x_error::success);
    assert(call_in_process(fx, kAppXmp, kXmpGetPlaybackController, get_buffer,
                           0) == x_error::success);
    assert(fx.memory.read_u32(controller) == xmp_playback_controller::game);
    assert(fx.memory.read_u32(locked) == 0);
}

// Nothing is playing, so the player is idle.
void test_get_status_reports_idle() {
    fixture fx;
    const uint32_t buffer = fixture::scratch;
    const uint32_t state = fixture::scratch + 0x100;
    fx.memory.write_u32(buffer + 0, 2);
    fx.memory.write_u32(buffer + 4, state);
    fx.memory.write_u32(state, 0xDEADBEEF);
    assert(call_in_process(fx, kAppXmp, kXmpGetStatus, buffer, 0) ==
           x_error::success);
    assert(fx.memory.read_u32(state) == xmp_state::idle);
}

// A volume the title sets is the volume it reads back.
void test_volume_round_trips() {
    fixture fx;
    const uint32_t buffer = fixture::scratch;
    float wanted = 0.75f;
    uint32_t bits = 0;
    std::memcpy(&bits, &wanted, sizeof(bits));
    fx.memory.write_u32(buffer + 0, 2);
    fx.memory.write_u32(buffer + 4, bits);
    assert(call_in_process(fx, kAppXmp, kXmpSetVolume, buffer, 0) ==
           x_error::success);

    const uint32_t get_buffer = fixture::scratch + 0x200;
    const uint32_t volume = fixture::scratch + 0x300;
    fx.memory.write_u32(get_buffer + 0, 2);
    fx.memory.write_u32(get_buffer + 4, volume);
    assert(call_in_process(fx, kAppXmp, kXmpGetVolume, get_buffer, 0) ==
           x_error::success);
    float read_back = 0.0f;
    const uint32_t read_bits = fx.memory.read_u32(volume);
    std::memcpy(&read_back, &read_bits, sizeof(read_back));
    assert(read_back == wanted);
}

// An app that exists but whose message is not implemented fails; an app that
// does not exist is NOT FOUND. The console distinguishes them, and
// XMsgStartIORequest turns the second into an invalid-argument.
void test_unknown_message_and_unknown_app_differ() {
    fixture fx;
    // Deliberately messages nothing here will ever serve, rather than ones that
    // merely are not served yet: this test named 0x000B0006 (XGIUserSetContext)
    // until that was implemented, and then failed for being right; it then named
    // 0x000B0021 (XUserReadStats) until that acquired the answer Xenia gives it.
    // 0x000B9999 is not a real XGI message at all, and 0x00079999 is not a real
    // XMP one.
    assert(call_in_process(fx, kAppXgi, 0x000B9999, 0, 0) == kMessageFail);
    assert(call_in_process(fx, kAppXmp, 0x00079999, 0, 0) == kMessageFail);
    assert(call_in_process(fx, 0x12, 0x00000001, 0, 0) == kMessageNotFound);
    // XUserReadStats is refused, but with the code Xenia answers it with rather
    // than the dispatcher's generic failure: reading a leaderboard back needs a
    // reply structure whose layout is written down nowhere, so it stays refused
    // even though the WRITE side below is now served.
    assert(call_in_process(fx, kAppXgi, 0x000B0021, 0, 0) == 0x80151802u);
}

// The two XamApp messages, which fail in opposite directions and so make the
// bug class visible from both sides.
//
// XEnableGuestSignin's buffer is INPUT - one dword saying whether guest sign-in
// is permitted - so there is nothing to write back and no reason to refuse.
// Refusing it is the "no to something legitimate" half of the bug.
//
// XTitleGetDeploymentType is the other half: the title passes a pointer to write
// the type into and reads that dword straight back, so a handler that fails
// without writing it hands the title whatever was already there. The guard value
// below is what "whatever was already there" looks like, and the assertion is
// that it does not survive the call.
void test_xam_app_messages_are_answered_and_write_their_output() {
    fixture fx;

    // Input-only: accepted, and nothing about the buffer is disturbed.
    const uint32_t flag = fixture::scratch;
    fx.memory.write_u32(flag, 1);
    assert(call_in_process(fx, kAppXam, kXamEnableGuestSignin, flag, 4) ==
           x_error::success);
    assert(fx.memory.read_u32(flag) == 1);
    // And with no buffer at all, which is how the console may be called.
    assert(call_in_process(fx, kAppXam, kXamEnableGuestSignin, 0, 0) ==
           x_error::success);

    // Output-writing: { deployment_type_ptr, overlapped_ptr }.
    constexpr uint32_t kGuard = 0xDEADBEEFu;
    const uint32_t request = fixture::scratch + 0x100;
    const uint32_t type_out = fixture::scratch + 0x200;
    fx.memory.write_u32(request + 0, type_out);
    fx.memory.write_u32(request + 4, 0);
    fx.memory.write_u32(type_out, kGuard);
    assert(call_in_process(fx, kAppXam, kXamTitleGetDeploymentType, request,
                           8) == x_error::success);
    assert(fx.memory.read_u32(type_out) != kGuard);
    // These titles are Xbox Live Arcade downloads: Xenia's
    // XDeploymentType::kDownload.
    assert(fx.memory.read_u32(type_out) == 2);

    // A request with nowhere to put the answer is refused rather than answered,
    // because succeeding without writing is the bug this test exists for.
    fx.memory.write_u32(request + 0, 0);
    assert(call_in_process(fx, kAppXam, kXamTitleGetDeploymentType, request,
                           8) == kMessageFail);
    assert(call_in_process(fx, kAppXam, kXamTitleGetDeploymentType, 0, 0) ==
           kMessageFail);

    // The app still exists for messages nothing here serves, and still says so
    // the way the console does.
    assert(call_in_process(fx, kAppXam, 0x0002FFFF, 0, 0) == kMessageFail);
}

// The asynchronous form: the message runs, its result goes into the title's
// XAM_OVERLAPPED, and the call returns IO_PENDING.
void test_start_io_request_completes_the_overlapped() {
    fixture fx;
    const uint32_t buffer = fixture::scratch;
    const uint32_t controller = fixture::scratch + 0x100;
    const uint32_t locked = fixture::scratch + 0x110;
    const uint32_t overlapped = fixture::scratch + 0x400;
    fx.memory.write_u32(buffer + 0, 2);
    fx.memory.write_u32(buffer + 4, controller);
    fx.memory.write_u32(buffer + 8, locked);
    fx.memory.zero_block(overlapped, 0x1C);
    fx.memory.write_u32(overlapped + 0x00, x_error::io_pending);

    assert(call_start_io(fx, kAppXmp, kXmpGetPlaybackController, overlapped,
                         buffer, 0) == x_error::io_pending);
    assert(fx.memory.read_u32(overlapped + 0x00) == x_error::success);
    assert(fx.memory.read_u32(controller) == xmp_playback_controller::game);

    // With no overlapped the result comes back directly, as both Geometry Wars
    // titles call it.
    assert(call_start_io(fx, kAppXmp, kXmpGetPlaybackController, 0, buffer,
                         0) == x_error::success);
}

// XamGetOverlappedResult reads what the completion wrote. Everything here
// finishes before returning, so an overlapped still reading IO_PENDING is one
// nothing ever completed - and saying so beats blocking forever.
void test_get_overlapped_result() {
    fixture fx;
    const uint32_t overlapped = fixture::scratch + 0x400;
    const uint32_t length = fixture::scratch + 0x500;
    fx.memory.zero_block(overlapped, 0x1C);
    fx.memory.write_u32(overlapped + 0x00, x_error::success);
    fx.memory.write_u32(overlapped + 0x04, 7);

    test_ctx ctx{};
    ctx.r1.u32 = fixture::scratch + 0x1800;
    ctx.r3.u32 = overlapped;
    ctx.r4.u32 = length;
    ctx.r5.u32 = 0;
    host_function<test_ctx, XamGetOverlappedResult>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::success);
    assert(fx.memory.read_u32(length) == 7);

    fx.memory.write_u32(overlapped + 0x00, x_error::io_pending);
    ctx = test_ctx{};
    ctx.r1.u32 = fixture::scratch + 0x1800;
    ctx.r3.u32 = overlapped;
    ctx.r4.u32 = length;
    ctx.r5.u32 = 1; // asked to wait
    host_function<test_ctx, XamGetOverlappedResult>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::io_incomplete);
}

// An achievement enumerator over an empty list. Zero unlocked achievements is
// the truth for a fresh profile, and the title has to be able to drain it:
// NO_MORE_FILES with zero items returned is how the console ends an
// enumeration.
void test_achievement_enumerator_drains_empty() {
    fixture fx;
    const uint32_t size_ptr = fixture::scratch;
    const uint32_t handle_ptr = fixture::scratch + 0x10;
    test_ctx ctx{};
    ctx.r1.u32 = fixture::scratch + 0x1800;
    ctx.r3.u32 = 0;  // title id: the running title
    ctx.r4.u32 = 0;  // user index
    ctx.r5.u64 = 0;  // xuid
    ctx.r6.u32 = 0;  // flags: no strings wanted
    ctx.r7.u32 = 0;  // offset
    ctx.r8.u32 = 12; // count
    ctx.r9.u32 = size_ptr;
    ctx.r10.u32 = handle_ptr;
    host_function<test_ctx, XamUserCreateAchievementEnumerator>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::success);
    // X_ACHIEVEMENT_DETAILS is 36 bytes and no string buffer was asked for.
    assert(fx.memory.read_u32(size_ptr) == 36 * 12);
    const uint32_t handle = fx.memory.read_u32(handle_ptr);
    assert(handle != 0);

    const uint32_t buffer = fixture::scratch + 0x100;
    const uint32_t returned = fixture::scratch + 0x800;
    fx.memory.write_u32(returned, 0xDEADBEEF);
    test_ctx enumerate{};
    enumerate.r1.u32 = fixture::scratch + 0x1800;
    enumerate.r3.u32 = handle;
    enumerate.r4.u32 = 0;
    enumerate.r5.u32 = buffer;
    enumerate.r6.u32 = 36 * 12;
    enumerate.r7.u32 = returned;
    enumerate.r8.u32 = 0; // no overlapped
    host_function<test_ctx, XamEnumerate>(enumerate, fx.base());
    assert(enumerate.r3.u32 == x_error::no_more_files);
    assert(fx.memory.read_u32(returned) == 0);

    // Asking for the string buffers grows each item by 464 bytes.
    ctx.r6.u32 = 1;
    host_function<test_ctx, XamUserCreateAchievementEnumerator>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::success);
    assert(fx.memory.read_u32(size_ptr) == (36 + 464) * 12);

    // A handle that names nothing is rejected rather than answered.
    enumerate.r3.u32 = 0xF8000FFC;
    host_function<test_ctx, XamEnumerate>(enumerate, fx.base());
    assert(enumerate.r3.u32 == x_error::invalid_handle);
}

} // namespace

int main() {
    test_get_playback_controller_answers_through_the_pointers();
    test_set_then_get_playback_controller_agree();
    test_get_status_reports_idle();
    test_volume_round_trips();
    test_unknown_message_and_unknown_app_differ();
    test_xam_app_messages_are_answered_and_write_their_output();
    test_start_io_request_completes_the_overlapped();
    test_get_overlapped_result();
    test_achievement_enumerator_drains_empty();
    std::printf("kernel_xmsg_test: all checks passed\n");
    return 0;
}
