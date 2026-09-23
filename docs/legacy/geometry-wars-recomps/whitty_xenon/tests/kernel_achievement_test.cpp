// Unit tests for the achievement path, driven through the real calling
// convention - the guest registers, the guest buffers, the same wrapper the
// recompiled code goes through.
//
// The thing being guarded against here is the failure this project keeps
// finding: a call that reports success for something that never happened. So
// every assertion about a write is made against the STORE (and, where it
// matters, against a fresh store that re-reads the file), never against the
// return code alone.
#include "whitty_xenon/host_function.h"
#include "whitty_xenon/kernel_handlers.h"
#include "whitty_xenon/kernel_state.h"
#include "whitty_xenon/user_profile.h"

#include <cassert>
#include <cstdint>
#include <cstdio>
#include <filesystem>
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
    static constexpr uint32_t scratch = 0x30000000;
    static constexpr uint32_t kTitle = 0x584107EDu;

    fixture() : kernel(memory, heap) {
        std::string error;
        assert(memory.initialize(error));
        assert(heap.initialize(memory, 0x40000000, 0x00400000, error));
        assert(memory.commit(scratch, 0x4000, error));
        // A real title id, because every achievement and score is keyed by one -
        // a fixture that left it zero would not notice the key being dropped.
        kernel.set_title_id(kTitle);
        install_kernel(&kernel);
    }
    ~fixture() { install_kernel(nullptr); }
    uint8_t* base() noexcept { return memory.host_unchecked(0); }

    // The two achievements Geometry Wars' own table starts with, so the records
    // under test are shaped like a real title's.
    void give_two_achievements() {
        std::vector<xdbf_achievement> list;
        xdbf_achievement first;
        first.id = 0;
        first.name = "Multitastic";
        first.description = "Earn x10 multiplier";
        first.locked_description = "Earn x10 multiplier";
        first.gamerscore = 20;
        first.image_id = 2;
        first.flags = 0x0C;
        list.push_back(first);
        xdbf_achievement second;
        second.id = 3;
        second.name = "Pacifism";
        second.description = "Do not fire";
        second.locked_description = "Do not fire";
        second.gamerscore = 10;
        second.image_id = 12;
        second.flags = 0x0C;
        list.push_back(second);
        kernel.set_title_achievements(list);
    }
};

std::string temporary_state(const char* name) {
    const std::filesystem::path base =
        std::filesystem::temp_directory_path() /
        (std::string("whitty_achievement_test_") + name);
    std::error_code code;
    std::filesystem::remove_all(base, code);
    std::filesystem::create_directories(base, code);
    return (base / "gamer.bin").string();
}

// Builds the buffer the XGI message carries: { be32 count; be32 records_ptr; }
// followed by { be32 user_index; be32 achievement_id; } records.
uint32_t write_message(fixture& fx, const std::vector<std::pair<uint32_t, uint32_t>>& records) {
    const uint32_t header = fixture::scratch;
    const uint32_t list = fixture::scratch + 0x40;
    fx.memory.write_u32(header + 0, static_cast<uint32_t>(records.size()));
    fx.memory.write_u32(header + 4, list);
    for (std::size_t i = 0; i < records.size(); ++i) {
        fx.memory.write_u32(list + static_cast<uint32_t>(i) * 8 + 0,
                            records[i].first);
        fx.memory.write_u32(list + static_cast<uint32_t>(i) * 8 + 4,
                            records[i].second);
    }
    return header;
}

void test_show_achievements_ui_raises_the_blade() {
    fixture fx;
    assert(!fx.kernel.system_blade_open());

    test_ctx ctx{};
    ctx.r3.u32 = 0; // user index
    ctx.r4.u32 = 0; // title id: the running one
    host_function<test_ctx, XamShowAchievementsUI>(ctx, fx.base());
    // SUCCESS, matching Xenia's async dialog dispatch, and the blade is up.
    assert(ctx.r3.u32 == x_error::success);
    assert(fx.kernel.system_blade_open());
    assert(fx.kernel.system_blade_page() ==
           kernel_state::blade_page_achievements);

    // A port with no profile gets NO_SUCH_USER and does not raise anything.
    fx.kernel.close_system_blade();
    test_ctx other{};
    other.r3.u32 = 2;
    host_function<test_ctx, XamShowAchievementsUI>(other, fx.base());
    assert(other.r3.u32 == x_error::no_such_user);
    assert(!fx.kernel.system_blade_open());
    std::printf("  XamShowAchievementsUI raises the blade for port 0 only\n");
}

void test_opening_the_blade_notifies_the_title() {
    fixture fx;
    // A listener drains the two seeded events first; what follows is the
    // SystemUI notification the console sends when the guide appears.
    const uint32_t listener = 1;
    fx.kernel.add_notification_listener(listener);
    notification event{};
    while (fx.kernel.next_notification(listener, 0, event)) {
    }

    test_ctx ctx{};
    ctx.r3.u32 = 0;
    host_function<test_ctx, XamShowAchievementsUI>(ctx, fx.base());
    assert(fx.kernel.next_notification(listener, 0, event));
    assert(event.id == notification_id::system_ui);
    assert(event.data == 1);

    fx.kernel.close_system_blade();
    assert(fx.kernel.next_notification(listener, 0, event));
    assert(event.id == notification_id::system_ui);
    assert(event.data == 0);
    // Closing a blade that is already closed says nothing, rather than sending
    // a second "the guide went away".
    fx.kernel.close_system_blade();
    assert(!fx.kernel.next_notification(listener, 0, event));
    std::printf("  the blade opening and closing is broadcast once each\n");
}

void test_write_achievements_persists() {
    const std::string path = temporary_state("write");
    {
        fixture fx;
        fx.give_two_achievements();
        fx.kernel.profile().set_path(path);
        assert(fx.kernel.profile().load());

        const uint32_t buffer = write_message(fx, {{0, 3}});
        test_ctx ctx{};
        ctx.r3.u32 = buffer;
        ctx.r4.u32 = 8;
        host_function<test_ctx, xgi_user_write_achievements>(ctx, fx.base());
        assert(ctx.r3.u32 == x_error::success);
        assert(fx.kernel.profile().is_unlocked(fixture::kTitle, 3));
        assert(!fx.kernel.profile().is_unlocked(fixture::kTitle, 0));

        // The same write again is still a success - a title fires its unlock
        // every time the condition triggers.
        test_ctx again{};
        again.r3.u32 = buffer;
        again.r4.u32 = 8;
        host_function<test_ctx, xgi_user_write_achievements>(again, fx.base());
        assert(again.r3.u32 == x_error::success);
        assert(fx.kernel.profile().unlock_count(fixture::kTitle) == 1);
    }
    // A different process: the file is the only thing that carried the unlock.
    {
        profile_store fresh;
        fresh.set_path(path);
        assert(fresh.load());
        assert(fresh.loaded_from_file());
        assert(fresh.is_unlocked(fixture::kTitle, 3));
        assert(fresh.unlock_time(fixture::kTitle, 3) != 0);
        // And no other title picked it up, which is what keying by title id is
        // for: two games' achievements share one file and must not mix.
        assert(!fresh.is_unlocked(0x584107EEu, 3));
        assert(fresh.unlocks(0x584107EEu).empty());
    }
    std::error_code code;
    std::filesystem::remove_all(
        std::filesystem::path(path).parent_path(), code);
    std::printf("  an XGI achievement write reaches the file\n");
}

void test_the_message_a_title_actually_posts_unlocks() {
    // The path Geometry Wars takes. It does not import an achievement export at
    // all: XUserWriteAchievements is a stub in its own xam library that posts
    // XMsgStartIORequest(app 0xFB, message 0x000B0008, overlapped, buffer, 8).
    // Measured in the recompiled code at sub_82029238, and this is the test that
    // catches the routing being lost.
    const std::string path = temporary_state("message");
    fixture fx;
    fx.give_two_achievements();
    fx.kernel.profile().set_path(path);
    assert(fx.kernel.profile().load());

    const uint32_t buffer = write_message(fx, {{0, 0}});
    test_ctx ctx{};
    ctx.r3.u32 = 0xFB;       // XGI
    ctx.r4.u32 = 0x000B0008; // XGIUserWriteAchievements
    ctx.r5.u32 = 0;          // no overlapped: answer synchronously
    ctx.r6.u32 = buffer;
    ctx.r7.u32 = 8;
    host_function<test_ctx, XMsgStartIORequest>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::success);
    assert(fx.kernel.profile().is_unlocked(fixture::kTitle, 0));

    // An unknown XGI message is still refused, so this did not turn the whole
    // app into "everything succeeds".
    test_ctx unknown{};
    unknown.r3.u32 = 0xFB;
    unknown.r4.u32 = 0x000B0021; // XUserReadStats
    unknown.r5.u32 = 0;
    unknown.r6.u32 = buffer;
    unknown.r7.u32 = 8;
    host_function<test_ctx, XMsgStartIORequest>(unknown, fx.base());
    assert(unknown.r3.u32 != x_error::success);

    std::error_code code;
    std::filesystem::remove_all(
        std::filesystem::path(path).parent_path(), code);
    std::printf("  the XGI message a title posts unlocks and persists\n");
}

// XGIUserSetContext / XGIUserSetPropertyEx: the title telling the console to
// remember something about the session. The console accepts these
// unconditionally and Space Giraffe refuses to start a level if they fail, so
// the ANSWER is the whole contract - but a buffer that cannot be read is still
// refused, because accepting one would be the same lie facing the other way.
void test_session_context_and_property_are_accepted() {
    fixture fx;
    fx.kernel.profile().set_path(std::string()); // in memory only

    // XGI_XUSER_SET_CONTEXT: user_index, unused, xuid(8), context_id, value.
    const uint32_t context_buffer = fixture::scratch + 0x800;
    fx.kernel.memory().write_u32(context_buffer + 0x00, 0);          // port 0
    fx.kernel.memory().write_u32(context_buffer + 0x04, 0);          // unused
    fx.kernel.memory().write_u32(context_buffer + 0x08, 0);          // xuid hi
    fx.kernel.memory().write_u32(context_buffer + 0x0C, 0);          // xuid lo
    fx.kernel.memory().write_u32(context_buffer + 0x10, 0x00008001); // game mode
    fx.kernel.memory().write_u32(context_buffer + 0x14, 3);          // value
    test_ctx ctx{};
    ctx.r3.u32 = 0xFB;       // XGI
    ctx.r4.u32 = 0x000B0006; // XGIUserSetContext
    ctx.r5.u32 = 0;          // synchronous
    ctx.r6.u32 = context_buffer;
    ctx.r7.u32 = 0x18;
    host_function<test_ctx, XMsgStartIORequest>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::success);

    // XGI_XUSER_SET_PROPERTY: ..., property_id, data_size, data_address.
    const uint32_t property_buffer = fixture::scratch + 0x900;
    const uint32_t property_data = fixture::scratch + 0xA00;
    fx.kernel.memory().write_u32(property_data, 0x12345678);
    fx.kernel.memory().write_u32(property_buffer + 0x00, 0);
    fx.kernel.memory().write_u32(property_buffer + 0x04, 0);
    fx.kernel.memory().write_u32(property_buffer + 0x08, 0);
    fx.kernel.memory().write_u32(property_buffer + 0x0C, 0);
    fx.kernel.memory().write_u32(property_buffer + 0x10, 0x10000001);
    fx.kernel.memory().write_u32(property_buffer + 0x14, 4);
    fx.kernel.memory().write_u32(property_buffer + 0x18, property_data);
    test_ctx property{};
    property.r3.u32 = 0xFB;
    property.r4.u32 = 0x000B0007; // XGIUserSetPropertyEx
    property.r5.u32 = 0;
    property.r6.u32 = property_buffer;
    property.r7.u32 = 0x20;
    host_function<test_ctx, XMsgStartIORequest>(property, fx.base());
    assert(property.r3.u32 == x_error::success);

    // A null buffer is refused, so acceptance is not unconditional.
    test_ctx bad{};
    bad.r3.u32 = 0xFB;
    bad.r4.u32 = 0x000B0006;
    bad.r5.u32 = 0;
    bad.r6.u32 = 0;
    bad.r7.u32 = 0x18;
    host_function<test_ctx, XMsgStartIORequest>(bad, fx.base());
    assert(bad.r3.u32 != x_error::success);

    // A property naming data outside guest memory is refused too.
    fx.kernel.memory().write_u32(property_buffer + 0x14, 0x10000);
    fx.kernel.memory().write_u32(property_buffer + 0x18, 0xF0000000);
    test_ctx unreadable{};
    unreadable.r3.u32 = 0xFB;
    unreadable.r4.u32 = 0x000B0007;
    unreadable.r5.u32 = 0;
    unreadable.r6.u32 = property_buffer;
    unreadable.r7.u32 = 0x20;
    host_function<test_ctx, XMsgStartIORequest>(unreadable, fx.base());
    assert(unreadable.r3.u32 != x_error::success);

    std::printf("  session context and property writes are accepted\n");
}

void test_write_achievements_rejects_a_buffer_it_cannot_read() {
    fixture fx;
    fx.kernel.profile().set_path(std::string()); // in memory only

    test_ctx null_buffer{};
    null_buffer.r3.u32 = 0;
    null_buffer.r4.u32 = 8;
    host_function<test_ctx, xgi_user_write_achievements>(null_buffer, fx.base());
    assert(null_buffer.r3.u32 == x_error::invalid_parameter);

    // A buffer shorter than the message cannot be read, and saying SUCCESS
    // would claim an unlock that never happened.
    const uint32_t buffer = write_message(fx, {{0, 5}});
    test_ctx short_buffer{};
    short_buffer.r3.u32 = buffer;
    short_buffer.r4.u32 = 4;
    host_function<test_ctx, xgi_user_write_achievements>(short_buffer,
                                                        fx.base());
    assert(short_buffer.r3.u32 == x_error::invalid_parameter);
    assert(!fx.kernel.profile().is_unlocked(fixture::kTitle, 5));

    // A record pointer into uncommitted memory is refused rather than walked.
    fx.memory.write_u32(fixture::scratch + 0, 1);
    fx.memory.write_u32(fixture::scratch + 4, 0x7F000000);
    test_ctx bad_records{};
    bad_records.r3.u32 = fixture::scratch;
    bad_records.r4.u32 = 8;
    host_function<test_ctx, xgi_user_write_achievements>(bad_records,
                                                        fx.base());
    assert(bad_records.r3.u32 == x_error::invalid_parameter);
    std::printf("  a write it cannot read is refused, not reported as done\n");
}

void test_write_achievements_ignores_other_ports() {
    fixture fx;
    fx.kernel.profile().set_path(std::string());
    // Port 1 has no profile, so nothing is earned for it.
    const uint32_t buffer = write_message(fx, {{1, 7}});
    test_ctx ctx{};
    ctx.r3.u32 = buffer;
    ctx.r4.u32 = 8;
    host_function<test_ctx, xgi_user_write_achievements>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::success);
    assert(!fx.kernel.profile().is_unlocked(fixture::kTitle, 7));
    std::printf("  a write for a port with no profile earns nothing\n");
}

void test_enumerator_lists_every_achievement_with_its_state() {
    fixture fx;
    fx.give_two_achievements();
    fx.kernel.profile().set_path(std::string());
    assert(fx.kernel.profile().unlock_achievement(fixture::kTitle, 3, 0x0123456789ABCDEFull, nullptr));

    const uint32_t size_ptr = fixture::scratch;
    const uint32_t handle_ptr = fixture::scratch + 4;
    test_ctx create{};
    create.r3.u32 = 0;    // title id: the running one
    create.r4.u32 = 0;    // user index
    create.r5.u64 = 0;    // xuid
    create.r6.u32 = 7;    // all three strings
    create.r7.u32 = 0;    // offset
    create.r8.u32 = 8;    // items per enumerate
    create.r9.u32 = size_ptr;
    create.r10.u32 = handle_ptr;
    host_function<test_ctx, XamUserCreateAchievementEnumerator>(create,
                                                               fx.base());
    assert(create.r3.u32 == x_error::success);
    const uint32_t handle = fx.memory.read_u32(handle_ptr);
    assert(handle != 0);
    // 36 bytes of record plus the console's 464-byte string area per item.
    assert(fx.memory.read_u32(size_ptr) == (36 + 464) * 8);

    const uint32_t buffer = fixture::scratch + 0x100;
    const uint32_t returned_ptr = fixture::scratch + 8;
    test_ctx enumerate{};
    enumerate.r3.u32 = handle;
    enumerate.r4.u32 = 0;
    enumerate.r5.u32 = buffer;
    enumerate.r6.u32 = (36 + 464) * 8;
    enumerate.r7.u32 = returned_ptr;
    enumerate.r8.u32 = 0; // no overlapped
    host_function<test_ctx, XamEnumerate>(enumerate, fx.base());
    assert(enumerate.r3.u32 == x_error::success);
    // BOTH achievements come back - the locked one as well as the earned one.
    // An enumerator that returned only what was unlocked would make an
    // achievements screen look empty on a first run.
    assert(fx.memory.read_u32(returned_ptr) == 2);

    const uint32_t item = 36 + 464;
    // The locked one: id 0, its gamerscore, no unlock time, and the earned bit
    // clear.
    assert(fx.memory.read_u32(buffer + 0x00) == 0);
    assert(fx.memory.read_u32(buffer + 0x14) == 20);
    assert(fx.memory.read_u32(buffer + 0x18) == 0);
    assert(fx.memory.read_u32(buffer + 0x1C) == 0);
    assert((fx.memory.read_u32(buffer + 0x20) &
            xdbf_achievement_flag::achieved) == 0);
    // The earned one: id 3, the stored FILETIME split into two big-endian
    // halves, and the earned bit set on top of the title's own flags.
    assert(fx.memory.read_u32(buffer + item + 0x00) == 3);
    assert(fx.memory.read_u32(buffer + item + 0x14) == 10);
    assert(fx.memory.read_u32(buffer + item + 0x18) == 0x01234567u);
    assert(fx.memory.read_u32(buffer + item + 0x1C) == 0x89ABCDEFu);
    assert((fx.memory.read_u32(buffer + item + 0x20) &
            xdbf_achievement_flag::achieved) != 0);
    assert((fx.memory.read_u32(buffer + item + 0x20) & 0xC) == 0xC);

    // The name pointer is a readable guest address holding UTF-16 text, which
    // is what the title dereferences.
    const uint32_t name_ptr = fx.memory.read_u32(buffer + 0x04);
    assert(name_ptr != 0);
    assert(fx.memory.read_u16(name_ptr + 0) == 'M');
    assert(fx.memory.read_u16(name_ptr + 2) == 'u');
    const uint32_t locked_ptr = fx.memory.read_u32(buffer + 0x0C);
    assert(locked_ptr != 0 && locked_ptr != name_ptr);
    assert(fx.memory.read_u16(locked_ptr) == 'E'); // "Earn x10 multiplier"

    // A second pass has nothing left.
    test_ctx spent{};
    spent.r3.u32 = handle;
    spent.r4.u32 = 0;
    spent.r5.u32 = buffer;
    spent.r6.u32 = (36 + 464) * 8;
    spent.r7.u32 = returned_ptr;
    host_function<test_ctx, XamEnumerate>(spent, fx.base());
    assert(spent.r3.u32 != x_error::success);
    std::printf("  the enumerator lists locked and unlocked alike\n");
}

void test_enumerator_without_string_flags_reports_the_smaller_item() {
    fixture fx;
    fx.give_two_achievements();
    const uint32_t size_ptr = fixture::scratch;
    const uint32_t handle_ptr = fixture::scratch + 4;
    test_ctx create{};
    create.r3.u32 = 0;
    create.r4.u32 = 0;
    create.r6.u32 = 0; // no strings wanted
    create.r8.u32 = 4;
    create.r9.u32 = size_ptr;
    create.r10.u32 = handle_ptr;
    host_function<test_ctx, XamUserCreateAchievementEnumerator>(create,
                                                               fx.base());
    assert(create.r3.u32 == x_error::success);
    assert(fx.memory.read_u32(size_ptr) == 36 * 4);
    std::printf("  the item size follows the string flags\n");
}

} // namespace

int main() {
    std::printf("kernel_achievement_test\n");
    test_show_achievements_ui_raises_the_blade();
    test_opening_the_blade_notifies_the_title();
    test_write_achievements_persists();
    test_the_message_a_title_actually_posts_unlocks();
    test_session_context_and_property_are_accepted();
    test_write_achievements_rejects_a_buffer_it_cannot_read();
    test_write_achievements_ignores_other_ports();
    test_enumerator_lists_every_achievement_with_its_state();
    test_enumerator_without_string_flags_reports_the_smaller_item();
    std::printf("kernel_achievement_test: ok\n");
    return 0;
}
