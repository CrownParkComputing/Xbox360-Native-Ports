// Unit tests for the path a title's score takes to the local high-score table.
//
// A score does not arrive through an export. The title opens a session, sets
// the properties its leaderboards are built from, and submits them - and every
// one of those steps used to be refused here, which is why the table could only
// ever be filled by hand from the command line.
//
// What is pinned here is the whole chain, in the order a title walks it:
//
//   XamSessionCreateHandle  -> a handle, and SUCCESS
//   XamSessionRefObjByHandle-> a session object that is really mapped
//   XGI 0x000B0010          -> the session, granted offline for stats
//   XGI 0x000B0007          -> the properties, held
//   XGI 0x000B0025          -> the submission, recorded against the board
//
// and the refusals that must survive: a board the title's SPA does not declare,
// a matchmaking session, and a read-back that has no layout to answer with.
//
// The leaderboard definitions are the ones Space Giraffe actually carries - a
// board whose ranked column is property 0x20000001 - so the test is shaped by
// the same metadata a real title supplies rather than by a convenient invention.
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

constexpr uint32_t kAppXgi = 0xFB;
constexpr uint32_t kXgiSessionCreate = 0x000B0010;
constexpr uint32_t kXgiSessionEnd = 0x000B0015;
constexpr uint32_t kXgiUserSetProperty = 0x000B0007;
constexpr uint32_t kXgiUserReadStats = 0x000B0021;
constexpr uint32_t kXgiSessionWriteStats = 0x000B0025;
constexpr uint32_t kSessionNotLoggedOn = 0x80155209u;
constexpr uint32_t kLogonNotLoggedOn = 0x80151802u;

// Space Giraffe's own numbers, out of its SPA: board 3 is "Space Giraffe All
// Time Hall of Fame", its ranked column is the one carrying the reserved
// `rating` attribute, and that column is filled from property 0x20000001.
constexpr uint32_t kBoardId = 3;
constexpr uint32_t kScoreProperty = 0x20000001;
constexpr uint32_t kLevelProperty = 0x10000002;
constexpr uint32_t kTitleId = 0x5841080Cu;

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
        kernel.set_title_id(kTitleId);

        xdbf_leaderboard board;
        board.id = kBoardId;
        board.flags = 0; // view type 0: a leaderboard
        board.name = "Space Giraffe All Time Hall of Fame";
        xdbf_view_field rank;
        rank.property_id = 0x10008001;
        rank.attribute_id = xdbf_attribute::rank;
        rank.name = "Rank";
        xdbf_view_field score;
        score.property_id = kScoreProperty;
        score.attribute_id = xdbf_attribute::rating;
        score.aggregation_type = xdbf_aggregation::max;
        score.name = "Score";
        xdbf_view_field level;
        level.property_id = kLevelProperty;
        level.attribute_id = 1;
        level.name = "Level";
        board.columns = {rank, score, level};
        kernel.set_title_leaderboards({board});

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

// Lays down XSESSION_VIEW_PROPERTIES + XUSER_PROPERTY for one board with one
// property, and returns the XSessionWriteStats buffer that names it.
uint32_t build_write_stats(fixture& fx, uint32_t board_id, uint32_t property_id,
                           uint32_t value) {
    const uint32_t buffer = fixture::scratch + 0x400;
    const uint32_t views = fixture::scratch + 0x500;
    const uint32_t properties = fixture::scratch + 0x600;

    fx.memory.write_u32(buffer + 0x00, 0xCAFEDEAD); // session object
    fx.memory.write_u32(buffer + 0x04, 0);
    fx.memory.write_u64(buffer + 0x08, 0xE000BABEBABEBABEull); // xuid
    fx.memory.write_u32(buffer + 0x10, 1);      // one view
    fx.memory.write_u32(buffer + 0x14, views);

    fx.memory.write_u32(views + 0x00, board_id);
    fx.memory.write_u32(views + 0x04, 1); // one property
    fx.memory.write_u32(views + 0x08, properties);

    fx.memory.write_u32(properties + 0x00, property_id);
    fx.memory.write_u8(properties + 0x08, 1); // X_USER_DATA_TYPE::INT32
    // The union sits eight bytes into X_USER_DATA, and a 32-bit value occupies
    // its first four bytes.
    fx.memory.write_u32(properties + 0x10, value);
    fx.memory.write_u32(properties + 0x14, 0);
    return buffer;
}

uint32_t open_session(fixture& fx, uint32_t flags) {
    const uint32_t buffer = fixture::scratch + 0x100;
    fx.memory.zero_block(buffer, 28);
    fx.memory.write_u32(buffer + 0x04, flags);
    return call_in_process(fx, kAppXgi, kXgiSessionCreate, buffer, 28);
}

// The two exports that open the sequence. Both returned FUNCTION_FAILED and
// wrote nothing, which stopped every title before it could reach the write -
// so the assertion is not only on the result but on the values the title reads
// back, because a success that writes nothing is the same bug wearing a
// different code.
void test_session_handle_is_granted_and_written() {
    fixture fx;
    const uint32_t handle_ptr = fixture::scratch + 0x20;
    const uint32_t object_ptr = fixture::scratch + 0x30;
    fx.memory.write_u32(handle_ptr, 0xDEADBEEF);
    fx.memory.write_u32(object_ptr, 0xDEADBEEF);

    test_ctx ctx{};
    ctx.r1.u32 = fixture::scratch + 0x1800;
    ctx.r3.u32 = handle_ptr;
    host_function<test_ctx, XamSessionCreateHandle>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::success);
    const uint32_t handle = fx.memory.read_u32(handle_ptr);
    assert(handle != 0xDEADBEEF);
    assert(handle != 0);

    test_ctx ref{};
    ref.r1.u32 = fixture::scratch + 0x1800;
    ref.r3.u32 = handle;
    ref.r4.u32 = object_ptr;
    host_function<test_ctx, XamSessionRefObjByHandle>(ref, fx.base());
    assert(ref.r3.u32 == x_error::success);
    const uint32_t object = fx.memory.read_u32(object_ptr);
    assert(object != 0xDEADBEEF);
    assert(object != 0);
    // Unlike Xenia's 0xDEADF00D placeholder, the object is real memory: a title
    // that reads through the pointer it was just given must not fault.
    assert(fx.memory.host(object, 0x10) != nullptr);

    // A handle we never issued names a session that does not exist.
    test_ctx bogus{};
    bogus.r1.u32 = fixture::scratch + 0x1800;
    bogus.r3.u32 = 0x12345678;
    bogus.r4.u32 = object_ptr;
    host_function<test_ctx, XamSessionRefObjByHandle>(bogus, fx.base());
    assert(bogus.r3.u32 == x_error::invalid_parameter);
}

// An offline session with stats is granted; one that wants matchmaking or
// arbitration is not, because those are about other consoles.
void test_offline_stats_session_is_granted_and_matchmaking_is_not() {
    fixture fx;
    assert(open_session(fx, 0) == x_error::success);
    assert(open_session(fx, 0x02 | 0x04) == x_error::success); // presence|stats
    assert(open_session(fx, 0x08) == kSessionNotLoggedOn);     // matchmaking
    assert(open_session(fx, 0x10) == kSessionNotLoggedOn);     // arbitration
    assert(open_session(fx, 0x02 | 0x04 | 0x08) == kSessionNotLoggedOn);
}

// The whole chain, ending with a row on the table under the board's own name.
void test_write_stats_records_against_the_declared_board() {
    fixture fx;
    assert(fx.kernel.profile().scores(kTitleId).empty());
    assert(open_session(fx, 0x02 | 0x04) == x_error::success);

    const uint32_t buffer = build_write_stats(fx, kBoardId, kScoreProperty,
                                              1284350);
    assert(call_in_process(fx, kAppXgi, kXgiSessionWriteStats, buffer, 0x18) ==
           x_error::success);

    const std::vector<local_score> table =
        fx.kernel.profile().scores(kTitleId, kBoardId);
    assert(table.size() == 1);
    assert(table[0].score == 1284350);
    assert(table[0].leaderboard_id == kBoardId);
    assert(table[0].name == kLocalPlayerName);
}

// A board the title's SPA does not declare is refused. This is the check that
// makes the derived layout safe: if the buffer were not what it was taken for,
// the view ids would be arbitrary words, and an arbitrary word is not a board.
void test_undeclared_board_records_nothing() {
    fixture fx;
    assert(open_session(fx, 0x04) == x_error::success);
    const uint32_t buffer = build_write_stats(fx, 0x1234, kScoreProperty, 999);
    assert(call_in_process(fx, kAppXgi, kXgiSessionWriteStats, buffer, 0x18) ==
           x_error::success);
    assert(fx.kernel.profile().scores(kTitleId).empty());
}

// A submission that carries only the LEVEL column leaves the table alone: the
// board ranks on the score property, and a level is not a score.
void test_a_property_that_is_not_the_ranked_column_records_nothing() {
    fixture fx;
    assert(open_session(fx, 0x04) == x_error::success);
    const uint32_t buffer = build_write_stats(fx, kBoardId, kLevelProperty, 7);
    assert(call_in_process(fx, kAppXgi, kXgiSessionWriteStats, buffer, 0x18) ==
           x_error::success);
    assert(fx.kernel.profile().scores(kTitleId).empty());
}

// Setting a property is not scoring. A title that sets the property its board
// ranks on and then ends the session without submitting has NOT told the
// console which board it meant, and nothing is recorded.
//
// This is the shape that made the point. Geometry Wars declares two boards -
// "Evolved" and "Retro" - that rank on the SAME property, so a fallback which
// swept every board whose property had been set wrote the player's Evolved
// score onto the Retro table too. One submission, three rows, one of them for
// a mode that had not been played. The fixture below carries that pair, so the
// bug cannot come back without this failing.
void test_setting_a_property_without_submitting_records_nothing() {
    fixture fx;
    // A second board ranking on the same property, exactly as Geometry Wars'
    // "Evolved" and "Retro" do.
    std::vector<xdbf_leaderboard> boards = fx.kernel.title_leaderboards();
    xdbf_leaderboard twin = boards.front();
    twin.id = kBoardId + 1;
    twin.name = "Space Giraffe Hardcore Wall";
    boards.push_back(twin);
    fx.kernel.set_title_leaderboards(boards);

    assert(open_session(fx, 0x04) == x_error::success);

    const uint32_t buffer = fixture::scratch + 0x800;
    const uint32_t data = fixture::scratch + 0x900;
    fx.memory.zero_block(buffer, 0x20);
    fx.memory.write_u32(buffer + 0x10, kScoreProperty);
    fx.memory.write_u32(buffer + 0x14, 0x10); // sizeof(X_USER_DATA)
    fx.memory.write_u32(buffer + 0x18, data);
    fx.memory.zero_block(data, 0x10);
    fx.memory.write_u8(data + 0x00, 1);  // INT32
    fx.memory.write_u32(data + 0x08, 4242);
    assert(call_in_process(fx, kAppXgi, kXgiUserSetProperty, buffer, 0x20) ==
           x_error::success);
    assert(fx.kernel.profile().scores(kTitleId).empty());

    assert(call_in_process(fx, kAppXgi, kXgiSessionEnd, 0, 0) ==
           x_error::success);
    assert(fx.kernel.profile().scores(kTitleId).empty());

    // And a submission that names ONE of the two boards puts exactly one row
    // on the table - on that board, not on its twin.
    assert(open_session(fx, 0x04) == x_error::success);
    const uint32_t submit = build_write_stats(fx, kBoardId, kScoreProperty,
                                              13425);
    assert(call_in_process(fx, kAppXgi, kXgiSessionWriteStats, submit, 0x18) ==
           x_error::success);
    assert(fx.kernel.profile().scores(kTitleId).size() == 1);
    assert(fx.kernel.profile().scores(kTitleId, kBoardId).size() == 1);
    assert(fx.kernel.profile().scores(kTitleId, kBoardId + 1).empty());

    // Ending that session records nothing further, and empties the properties
    // so the next run cannot inherit this one's score.
    assert(call_in_process(fx, kAppXgi, kXgiSessionEnd, 0, 0) ==
           x_error::success);
    assert(fx.kernel.profile().scores(kTitleId).size() == 1);
    assert(fx.kernel.session_property_count() == 0);
}

// Reading a leaderboard back stays refused, with the code Xenia gives it. The
// write side working must not be mistaken for the read side existing.
void test_read_stats_is_still_refused() {
    fixture fx;
    assert(call_in_process(fx, kAppXgi, kXgiUserReadStats, 0, 0) ==
           kLogonNotLoggedOn);
}

// A malformed submission is refused rather than walked: a view count that could
// not be a view count, and an array pointer that is not mapped.
void test_malformed_submissions_are_refused() {
    fixture fx;
    assert(open_session(fx, 0x04) == x_error::success);

    const uint32_t buffer = fixture::scratch + 0x400;
    fx.memory.zero_block(buffer, 0x18);
    fx.memory.write_u32(buffer + 0x10, 0x00FFFFFF); // absurd view count
    fx.memory.write_u32(buffer + 0x14, fixture::scratch + 0x500);
    assert(call_in_process(fx, kAppXgi, kXgiSessionWriteStats, buffer, 0x18) ==
           x_error::success);
    assert(fx.kernel.profile().scores(kTitleId).empty());

    fx.memory.write_u32(buffer + 0x10, 1);
    fx.memory.write_u32(buffer + 0x14, 0x7F000000); // not mapped
    assert(call_in_process(fx, kAppXgi, kXgiSessionWriteStats, buffer, 0x18) !=
           x_error::success);
    assert(fx.kernel.profile().scores(kTitleId).empty());
}

// XamUserCreateStatsEnumerator used to return the RAW 0x525 - whose top bit is
// clear, so `if (FAILED(...))` reads it as success - while writing neither of
// its two output pointers. All four titles here import it, so a title that
// believed that answer went on to use an uninitialised handle. The assertion is
// on the values read back, not only on the result: a success that writes
// nothing is the same bug wearing a different code.
void test_stats_enumerator_writes_its_outputs() {
    fixture fx;
    const uint32_t stats = fixture::scratch + 0xA00;
    const uint32_t size_ptr = fixture::scratch + 0xA40;
    const uint32_t handle_ptr = fixture::scratch + 0xA50;
    fx.memory.zero_block(stats, 0x20);
    fx.memory.write_u32(size_ptr, 0xDEADBEEF);
    fx.memory.write_u32(handle_ptr, 0xDEADBEEF);

    test_ctx ctx{};
    ctx.r1.u32 = fixture::scratch + 0x1800;
    ctx.r3.u32 = 0;        // title id: the running one
    ctx.r4.u32 = 0;        // user index
    ctx.r5.u32 = 1;        // count
    ctx.r6.u32 = 1;        // flags
    ctx.r7.u32 = 0x20;     // item size
    ctx.r8.u32 = stats;
    ctx.r9.u32 = size_ptr;
    ctx.r10.u32 = handle_ptr;
    host_function<test_ctx, XamUserCreateStatsEnumerator>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::success);
    assert(fx.memory.read_u32(size_ptr) == 0);
    const uint32_t handle = fx.memory.read_u32(handle_ptr);
    assert(handle != 0xDEADBEEF);
    assert(handle != 0);

    // And a call that really is malformed is still refused - with a code whose
    // top bit is set, so a caller testing FAILED() sees it.
    test_ctx bad{};
    bad.r1.u32 = fixture::scratch + 0x1800;
    bad.r3.u32 = 0;
    bad.r4.u32 = 0;
    bad.r5.u32 = 0; // count of zero
    bad.r6.u32 = 1;
    bad.r7.u32 = 0x20;
    bad.r8.u32 = stats;
    bad.r9.u32 = size_ptr;
    bad.r10.u32 = handle_ptr;
    host_function<test_ctx, XamUserCreateStatsEnumerator>(bad, fx.base());
    assert(bad.r3.u32 == x_error::invalid_parameter);
}

} // namespace

int main() {
    test_session_handle_is_granted_and_written();
    test_offline_stats_session_is_granted_and_matchmaking_is_not();
    test_write_stats_records_against_the_declared_board();
    test_undeclared_board_records_nothing();
    test_a_property_that_is_not_the_ranked_column_records_nothing();
    test_setting_a_property_without_submitting_records_nothing();
    test_read_stats_is_still_refused();
    test_malformed_submissions_are_refused();
    test_stats_enumerator_writes_its_outputs();
    std::printf("kernel_score_test: all checks passed\n");
    return 0;
}
