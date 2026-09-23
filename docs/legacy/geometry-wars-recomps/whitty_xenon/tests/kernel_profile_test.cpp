// Unit tests for the profile-settings handlers - the XBLA save path.
//
// An Xbox Live Arcade title of this era has no content package and no save
// device: it writes its progress into the signed-in profile under a
// title-specific setting key and reads it back next launch. So these two calls
// ARE the save, and the things worth pinning are the ones a title branches on.
//
// The load-bearing one, and the reason this file exists: a read of a setting
// that has never been written must report source = DEFAULT with the setting's
// own declared type, not NO_VALUE. Geometry Wars 2 branches on that field -
// TITLE means "here is your save", DEFAULT means "there is none, start fresh" -
// and an answer that matches neither branch left it re-queueing the load
// forever behind its "Saving content. Please don't turn off your console."
// banner. Neither completing nor failing is the worst answer available.
#include "whitty_xenon/host_function.h"
#include "whitty_xenon/kernel_handlers.h"
#include "whitty_xenon/kernel_state.h"

#include <cassert>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>

#include <unistd.h>

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

// Setting keys, as the titles pass them. The key packs the type in bits 28..31,
// the maximum data size in 16..27 and the id in 0..15.
constexpr uint32_t kTitleSpecific1 = 0x63E83FFF; // BINARY, 1000 bytes, id 3FFF
constexpr uint32_t kMovementControl = 0x10040024; // INT32, 4 bytes, id 24

// X_USER_PROFILE_SETTING field offsets, and the header ahead of the records.
constexpr uint32_t kHeaderSize = 8;
constexpr uint32_t kRecordSize = 40;
constexpr uint32_t kRecordSource = 0x00;
constexpr uint32_t kRecordUserIndex = 0x08;
constexpr uint32_t kRecordId = 0x10;
constexpr uint32_t kRecordDataType = 0x18;
constexpr uint32_t kRecordDataUnion = 0x20;

// The XAM_OVERLAPPED a title passes for the asynchronous form.
constexpr uint32_t kOverlappedResult = 0x00;
constexpr uint32_t kOverlappedLength = 0x04;
constexpr uint32_t kOverlappedEvent = 0x0C;

struct fixture {
    guest_memory memory;
    guest_heap heap;
    kernel_state kernel;
    std::string profile_path;
    // Room for a title-sized read buffer (Geometry Wars 2 passes 1500 bytes)
    // plus the small in/out words around it.
    static constexpr uint32_t scratch = 0x30000000;

    fixture() : kernel(memory, heap) {
        std::string error;
        assert(memory.initialize(error));
        assert(heap.initialize(memory, 0x40000000, 0x00400000, error));
        assert(memory.commit(scratch, 0x4000, error));
        memory.zero_block(scratch, 0x4000);
        install_kernel(&kernel);
        kernel.set_title_id(0x584108FF);
        profile_path = temporary_path();
        kernel.profile().set_path(profile_path);
    }
    ~fixture() {
        install_kernel(nullptr);
        if (!profile_path.empty()) std::remove(profile_path.c_str());
    }
    uint8_t* base() noexcept { return memory.host_unchecked(0); }

    static std::string temporary_path() {
        static int counter = 0;
        std::string path = "/tmp/whitty_profile_test_";
        path += std::to_string(static_cast<long>(::getpid()));
        path += "_";
        path += std::to_string(++counter);
        path += ".bin";
        std::remove(path.c_str());
        return path;
    }
};

// XamUserReadProfileSettings(title_id, user_index, xuid_count, xuids,
//   setting_count, setting_ids, buffer_size_ptr, buffer, overlapped) - nine
// arguments, so the ninth spills to the caller's stack at r1 + 0x54.
uint32_t call_read(fixture& fx, uint32_t title_id, uint32_t user_index,
                   uint32_t setting_count, uint32_t setting_ids,
                   uint32_t buffer_size_ptr, uint32_t buffer,
                   uint32_t overlapped) {
    const uint32_t stack = fixture::scratch + 0x3000;
    fx.memory.write_u32(stack + 0x54, overlapped);
    test_ctx ctx{};
    ctx.r1.u32 = stack;
    ctx.r3.u32 = title_id;
    ctx.r4.u32 = user_index;
    ctx.r5.u32 = 0; // xuid_count
    ctx.r6.u32 = 0; // xuids
    ctx.r7.u32 = setting_count;
    ctx.r8.u32 = setting_ids;
    ctx.r9.u32 = buffer_size_ptr;
    ctx.r10.u32 = buffer;
    host_function<test_ctx, XamUserReadProfileSettings>(ctx, fx.base());
    return ctx.r3.u32;
}

uint32_t call_write(fixture& fx, uint32_t title_id, uint32_t user_index,
                    uint32_t setting_count, uint32_t settings,
                    uint32_t overlapped) {
    test_ctx ctx{};
    ctx.r1.u32 = fixture::scratch + 0x3000;
    ctx.r3.u32 = title_id;
    ctx.r4.u32 = user_index;
    ctx.r5.u32 = setting_count;
    ctx.r6.u32 = settings;
    ctx.r7.u32 = overlapped;
    host_function<test_ctx, XamUserWriteProfileSettings>(ctx, fx.base());
    return ctx.r3.u32;
}

// The size query: called with a zero buffer size, the console reports how much
// room the request needs and returns INSUFFICIENT_BUFFER. A title that skipped
// this and guessed would overrun its own buffer.
void test_size_query_reports_what_is_needed() {
    fixture fx;
    const uint32_t ids = fixture::scratch;
    const uint32_t size_ptr = fixture::scratch + 0x100;
    fx.memory.write_u32(ids, kTitleSpecific1);
    fx.memory.write_u32(size_ptr, 0);

    assert(call_read(fx, 0, 0, 1, ids, size_ptr, 0, 0) ==
           x_error::insufficient_buffer);
    // Header, one record, and the setting's whole maximum payload, because the
    // value has to be reachable from the record.
    assert(fx.memory.read_u32(size_ptr) == kHeaderSize + kRecordSize + 0x3E8);

    // An INT32 setting needs no payload area at all.
    fx.memory.write_u32(ids, kMovementControl);
    fx.memory.write_u32(size_ptr, 0);
    assert(call_read(fx, 0, 0, 1, ids, size_ptr, 0, 0) ==
           x_error::insufficient_buffer);
    assert(fx.memory.read_u32(size_ptr) == kHeaderSize + kRecordSize);
}

// The regression guard. Nothing stored, so the console answers with the
// setting's DEFAULT - a zero of its own declared type - and says DEFAULT in the
// source field. Reporting NO_VALUE here is what wedged Geometry Wars 2.
void test_unset_setting_reads_as_default_not_no_value() {
    fixture fx;
    const uint32_t ids = fixture::scratch;
    const uint32_t size_ptr = fixture::scratch + 0x100;
    const uint32_t buffer = fixture::scratch + 0x200;
    fx.memory.write_u32(ids, kTitleSpecific1);
    fx.memory.write_u32(size_ptr, 1500);

    assert(call_read(fx, 0, 0, 1, ids, size_ptr, buffer, 0) ==
           x_error::success);
    const uint32_t record = buffer + kHeaderSize;
    assert(fx.memory.read_u32(buffer + 0) == 1);      // setting_count
    assert(fx.memory.read_u32(buffer + 4) == record); // settings_ptr
    assert(fx.memory.read_u32(record + kRecordId) == kTitleSpecific1);
    assert(fx.memory.read_u32(record + kRecordUserIndex) == 0);
    assert(fx.memory.read_u32(record + kRecordSource) ==
           setting_source::from_default);
    // The type is the setting's own - BINARY - so a title reading the type
    // before the value finds what it expects.
    assert(fx.memory.read_u8(record + kRecordDataType) ==
           static_cast<uint8_t>(user_data_type::binary));
    // Empty: no size and no pointer.
    assert(fx.memory.read_u64(record + kRecordDataUnion) == 0);
}

// A blob written and read back, byte for byte, with source = TITLE so the title
// knows it is its own save and not a default.
void test_binary_setting_round_trips_through_the_guest() {
    fixture fx;
    const uint32_t settings = fixture::scratch + 0x400;
    const uint32_t payload = fixture::scratch + 0x800;
    // Geometry Wars 2's save is 48 bytes; it checks the size before using it.
    std::vector<uint8_t> blob(48);
    for (std::size_t i = 0; i < blob.size(); ++i)
        blob[i] = static_cast<uint8_t>(0xA0 + i);
    for (std::size_t i = 0; i < blob.size(); ++i)
        fx.memory.write_u8(payload + static_cast<uint32_t>(i), blob[i]);

    fx.memory.zero_block(settings, kRecordSize);
    fx.memory.write_u32(settings + kRecordId, kTitleSpecific1);
    fx.memory.write_u8(settings + kRecordDataType,
                       static_cast<uint8_t>(user_data_type::binary));
    fx.memory.write_u32(settings + kRecordDataUnion, 48);
    fx.memory.write_u32(settings + kRecordDataUnion + 4, payload);

    assert(call_write(fx, 0, 0, 1, settings, 0) == x_error::success);

    const uint32_t ids = fixture::scratch;
    const uint32_t size_ptr = fixture::scratch + 0x100;
    const uint32_t buffer = fixture::scratch + 0x1000;
    fx.memory.write_u32(ids, kTitleSpecific1);
    fx.memory.write_u32(size_ptr, 1500);
    assert(call_read(fx, 0, 0, 1, ids, size_ptr, buffer, 0) ==
           x_error::success);

    const uint32_t record = buffer + kHeaderSize;
    assert(fx.memory.read_u32(record + kRecordSource) ==
           setting_source::from_title);
    assert(fx.memory.read_u8(record + kRecordDataType) ==
           static_cast<uint8_t>(user_data_type::binary));
    assert(fx.memory.read_u32(record + kRecordDataUnion) == 48);
    const uint32_t read_payload = fx.memory.read_u32(record + kRecordDataUnion + 4);
    assert(read_payload != 0);
    for (std::size_t i = 0; i < blob.size(); ++i)
        assert(fx.memory.read_u8(read_payload + static_cast<uint32_t>(i)) ==
               blob[i]);
}

// The write has to reach the host, or the player's progress is gone at the next
// launch even though the title was told the save succeeded.
void test_write_lands_in_the_host_file() {
    std::string path;
    std::vector<uint8_t> blob(48, 0x5A);
    {
        fixture fx;
        path = fx.profile_path;
        const uint32_t settings = fixture::scratch + 0x400;
        const uint32_t payload = fixture::scratch + 0x800;
        for (std::size_t i = 0; i < blob.size(); ++i)
            fx.memory.write_u8(payload + static_cast<uint32_t>(i), blob[i]);
        fx.memory.zero_block(settings, kRecordSize);
        fx.memory.write_u32(settings + kRecordId, kTitleSpecific1);
        fx.memory.write_u32(settings + kRecordDataUnion, 48);
        fx.memory.write_u32(settings + kRecordDataUnion + 4, payload);
        assert(call_write(fx, 0, 0, 1, settings, 0) == x_error::success);

        // A fresh store over the same file finds the setting.
        profile_store reloaded;
        reloaded.set_path(path);
        assert(reloaded.load());
        assert(reloaded.loaded_from_file());
        const user_setting* stored = reloaded.find(0x584108FF, kTitleSpecific1);
        assert(stored != nullptr);
        assert(stored->payload == blob);
        // And it is scoped to the title: another title id does not see it.
        assert(reloaded.find(0x12345678, kTitleSpecific1) == nullptr);
    }
    std::remove(path.c_str());
}

// A write that cannot be persisted must FAIL. Reporting success would lose the
// save silently, which is the failure this project keeps paying for.
void test_write_with_nowhere_to_go_reports_a_failure() {
    fixture fx;
    fx.kernel.profile().set_path(""); // no backing store
    const uint32_t settings = fixture::scratch + 0x400;
    fx.memory.zero_block(settings, kRecordSize);
    fx.memory.write_u32(settings + kRecordId, kMovementControl);
    fx.memory.write_u32(settings + kRecordDataUnion, 1);
    // DEVICE_NOT_CONNECTED names the actual condition - there is no writable
    // store - and it is a code titles have an error path for.
    assert(call_write(fx, 0, 0, 1, settings, 0) ==
           x_error::device_not_connected);
}

// Only the first port has a profile, matching XamUserGetSigninState.
void test_second_user_has_no_profile() {
    fixture fx;
    const uint32_t ids = fixture::scratch;
    const uint32_t size_ptr = fixture::scratch + 0x100;
    const uint32_t buffer = fixture::scratch + 0x200;
    fx.memory.write_u32(ids, kMovementControl);
    fx.memory.write_u32(size_ptr, 1500);
    assert(call_read(fx, 0, 1, 1, ids, size_ptr, buffer, 0) ==
           x_error::no_such_user);

    const uint32_t settings = fixture::scratch + 0x400;
    fx.memory.zero_block(settings, kRecordSize);
    fx.memory.write_u32(settings + kRecordId, kMovementControl);
    assert(call_write(fx, 0, 1, 1, settings, 0) == x_error::no_such_user);
}

// The asynchronous form. The call itself returns IO_PENDING; the result the
// title acts on is the one written into its XAM_OVERLAPPED, and the event it
// supplied is signalled.
void test_overlapped_completes_with_the_result_and_signals_the_event() {
    fixture fx;
    const uint32_t ids = fixture::scratch;
    const uint32_t size_ptr = fixture::scratch + 0x100;
    const uint32_t buffer = fixture::scratch + 0x200;
    const uint32_t overlapped = fixture::scratch + 0x2000;
    fx.memory.write_u32(ids, kTitleSpecific1);
    fx.memory.write_u32(size_ptr, 1500);

    // An auto-reset event for the overlapped to signal.
    const uint32_t event_handle_ptr = fixture::scratch + 0x2100;
    test_ctx ctx{};
    ctx.r3.u32 = event_handle_ptr;
    ctx.r4.u32 = 0;
    ctx.r5.u32 = 1; // synchronization event
    ctx.r6.u32 = 0; // not signalled
    host_function<test_ctx, NtCreateEvent>(ctx, fx.base());
    const uint32_t event_handle = fx.memory.read_u32(event_handle_ptr);
    assert(event_handle != 0);

    fx.memory.zero_block(overlapped, 0x1C);
    fx.memory.write_u32(overlapped + kOverlappedResult, x_error::io_pending);
    fx.memory.write_u32(overlapped + kOverlappedEvent, event_handle);

    assert(call_read(fx, 0, 0, 1, ids, size_ptr, buffer, overlapped) ==
           x_error::io_pending);
    // The title reads the outcome out of the structure, not the return value.
    assert(fx.memory.read_u32(overlapped + kOverlappedResult) ==
           x_error::success);
    assert(fx.memory.read_u32(overlapped + kOverlappedLength) == 0);

    // Signalled, so a title waiting on the event is released.
    test_ctx wait{};
    wait.r3.u32 = event_handle;
    wait.r4.u32 = 0;
    wait.r5.u32 = 0;
    wait.r6.u32 = 0;
    host_function<test_ctx, NtWaitForSingleObjectEx>(wait, fx.base());
    assert(wait.r3.u32 == 0); // STATUS_SUCCESS, not a timeout
}

// The store itself: a missing file is a first run, not an error, and a file
// that cannot be understood is an error rather than an empty profile - because
// treating it as empty and saving over it would destroy the player's save.
void test_store_distinguishes_missing_from_corrupt() {
    const std::string path = fixture::temporary_path();
    {
        profile_store store;
        store.set_path(path);
        assert(store.load());              // nothing there yet
        assert(!store.loaded_from_file()); // and it says so
        assert(store.setting_count() == 0);
    }
    {
        std::FILE* file = std::fopen(path.c_str(), "wb");
        assert(file != nullptr);
        const char junk[] = "not a profile";
        std::fwrite(junk, 1, sizeof(junk), file);
        std::fclose(file);
        profile_store store;
        store.set_path(path);
        assert(!store.load());
    }
    std::remove(path.c_str());
}

// Scalars go through the eight-byte union rather than a payload.
void test_scalar_setting_round_trips() {
    fixture fx;
    const uint32_t settings = fixture::scratch + 0x400;
    fx.memory.zero_block(settings, kRecordSize);
    fx.memory.write_u32(settings + kRecordId, kMovementControl);
    fx.memory.write_u8(settings + kRecordDataType,
                       static_cast<uint8_t>(user_data_type::int32));
    fx.memory.write_u32(settings + kRecordDataUnion, 1);
    assert(call_write(fx, 0, 0, 1, settings, 0) == x_error::success);

    const uint32_t ids = fixture::scratch;
    const uint32_t size_ptr = fixture::scratch + 0x100;
    const uint32_t buffer = fixture::scratch + 0x1000;
    fx.memory.write_u32(ids, kMovementControl);
    fx.memory.write_u32(size_ptr, 1500);
    assert(call_read(fx, 0, 0, 1, ids, size_ptr, buffer, 0) ==
           x_error::success);
    const uint32_t record = buffer + kHeaderSize;
    assert(fx.memory.read_u32(record + kRecordSource) ==
           setting_source::from_title);
    assert(fx.memory.read_u8(record + kRecordDataType) ==
           static_cast<uint8_t>(user_data_type::int32));
    assert(fx.memory.read_u32(record + kRecordDataUnion) == 1);

    // A profile-wide setting is NOT scoped to the title: every title shares it.
    assert(fx.kernel.profile().find(0, kMovementControl) != nullptr);
    assert(fx.kernel.profile().find(0x584108FF, kMovementControl) == nullptr);
}

// Argument checks the console makes before anything else.
void test_argument_checks() {
    fixture fx;
    const uint32_t ids = fixture::scratch;
    const uint32_t size_ptr = fixture::scratch + 0x100;
    fx.memory.write_u32(ids, kTitleSpecific1);
    fx.memory.write_u32(size_ptr, 0);
    // One to thirty-two settings.
    assert(call_read(fx, 0, 0, 0, ids, size_ptr, 0, 0) ==
           x_error::invalid_parameter);
    assert(call_read(fx, 0, 0, 33, ids, size_ptr, 0, 0) ==
           x_error::invalid_parameter);
    // A size pointer is required; without one there is nowhere to answer.
    assert(call_read(fx, 0, 0, 1, ids, 0, 0, 0) == x_error::invalid_parameter);
    assert(call_write(fx, 0, 0, 0, fixture::scratch + 0x400, 0) ==
           x_error::invalid_parameter);
}

} // namespace

int main() {
    test_size_query_reports_what_is_needed();
    test_unset_setting_reads_as_default_not_no_value();
    test_binary_setting_round_trips_through_the_guest();
    test_write_lands_in_the_host_file();
    test_write_with_nowhere_to_go_reports_a_failure();
    test_second_user_has_no_profile();
    test_overlapped_completes_with_the_result_and_signals_the_event();
    test_store_distinguishes_missing_from_corrupt();
    test_scalar_setting_round_trips();
    test_argument_checks();
    std::printf("kernel_profile_test: all checks passed\n");
    return 0;
}
