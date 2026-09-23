// xdbf_test - the achievement metadata parser, against bytes written by hand.
//
// The resource is built here field by field with explicit big-endian writes, so
// nothing in the test shares code with the parser. That matters more than usual
// for this format: the two tables in front of the data area are sized by their
// CAPACITY, and a parser that used the used-counts instead would still find the
// first entry at a plausible-looking offset. So the fixture deliberately gives
// the tables spare slots - with capacity == used the bug is invisible.
#include "whitty_xenon/user_profile.h"
#include "whitty_xenon/xdbf.h"

#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <string>
#include <vector>

using namespace whitty_xenon;

namespace {

void put_u16(std::vector<uint8_t>& out, uint16_t value) {
    out.push_back(static_cast<uint8_t>(value >> 8));
    out.push_back(static_cast<uint8_t>(value & 0xFF));
}
void put_u32(std::vector<uint8_t>& out, uint32_t value) {
    out.push_back(static_cast<uint8_t>(value >> 24));
    out.push_back(static_cast<uint8_t>(value >> 16));
    out.push_back(static_cast<uint8_t>(value >> 8));
    out.push_back(static_cast<uint8_t>(value & 0xFF));
}
void put_u64(std::vector<uint8_t>& out, uint64_t value) {
    for (int shift = 56; shift >= 0; shift -= 8)
        out.push_back(static_cast<uint8_t>((value >> shift) & 0xFF));
}
void put_string(std::vector<uint8_t>& out, const std::string& text) {
    out.insert(out.end(), text.begin(), text.end());
}

struct blob {
    uint16_t section;
    uint64_t id;
    std::vector<uint8_t> bytes;
};

// An XSTR string table: section header (magic, version, size, count) then
// id/length/bytes per string, with no terminators.
std::vector<uint8_t> string_table(
    const std::vector<std::pair<uint16_t, std::string>>& strings) {
    std::vector<uint8_t> body;
    for (const auto& entry : strings) {
        put_u16(body, entry.first);
        put_u16(body, static_cast<uint16_t>(entry.second.size()));
        put_string(body, entry.second);
    }
    std::vector<uint8_t> out;
    put_u32(out, 0x58535452); // "XSTR"
    put_u32(out, 1);
    put_u32(out, static_cast<uint32_t>(body.size() + 2));
    put_u16(out, static_cast<uint16_t>(strings.size()));
    out.insert(out.end(), body.begin(), body.end());
    return out;
}

struct achievement_fields {
    uint16_t id;
    uint16_t name_id;
    uint16_t description_id;
    uint16_t locked_id;
    uint32_t image_id;
    uint16_t gamerscore;
    uint32_t flags;
};

// An XACH table: section header with a count, then 0x24 bytes per achievement.
std::vector<uint8_t> achievement_table(
    const std::vector<achievement_fields>& achievements) {
    std::vector<uint8_t> body;
    for (const achievement_fields& achievement : achievements) {
        put_u16(body, achievement.id);
        put_u16(body, achievement.name_id);
        put_u16(body, achievement.description_id);
        put_u16(body, achievement.locked_id);
        put_u32(body, achievement.image_id);
        put_u16(body, achievement.gamerscore);
        put_u16(body, 0); // padding in every real title
        put_u32(body, achievement.flags);
        for (int i = 0; i < 4; ++i) put_u32(body, 0); // reserved 0x14..0x23
    }
    std::vector<uint8_t> out;
    put_u32(out, 0x58414348); // "XACH"
    put_u32(out, 1);
    put_u32(out, static_cast<uint32_t>(body.size() + 2));
    put_u16(out, static_cast<uint16_t>(achievements.size()));
    out.insert(out.end(), body.begin(), body.end());
    return out;
}

// Assembles a whole XDBF resource. `spare_entries` and `spare_free` give the
// tables slots beyond what is used, which is what a real file has and what
// makes the capacity-versus-used distinction detectable.
std::vector<uint8_t> build_xdbf(const std::vector<blob>& blobs,
                                uint32_t spare_entries, uint32_t spare_free) {
    const uint32_t entry_used = static_cast<uint32_t>(blobs.size());
    const uint32_t entry_capacity = entry_used + spare_entries;
    const uint32_t free_used = 1;
    const uint32_t free_capacity = free_used + spare_free;

    std::vector<uint8_t> out;
    put_u32(out, 0x58444246); // "XDBF"
    put_u32(out, 0x00010000);
    put_u32(out, entry_capacity);
    put_u32(out, entry_used);
    put_u32(out, free_capacity);
    put_u32(out, free_used);

    // Entry table. Offsets are relative to the data area.
    std::vector<uint32_t> offsets;
    uint32_t running = 0;
    for (const blob& item : blobs) {
        offsets.push_back(running);
        running += static_cast<uint32_t>(item.bytes.size());
    }
    for (std::size_t i = 0; i < blobs.size(); ++i) {
        put_u16(out, blobs[i].section);
        put_u64(out, blobs[i].id);
        put_u32(out, offsets[i]);
        put_u32(out, static_cast<uint32_t>(blobs[i].bytes.size()));
    }
    for (uint32_t i = 0; i < spare_entries; ++i)
        for (int byte = 0; byte < 18; ++byte) out.push_back(0);

    // Free-space table. The last entry is the end-of-data sentinel.
    put_u32(out, running);
    put_u32(out, 0xFFFFFFFF);
    for (uint32_t i = 0; i < spare_free; ++i)
        for (int byte = 0; byte < 8; ++byte) out.push_back(0);

    for (const blob& item : blobs)
        out.insert(out.end(), item.bytes.begin(), item.bytes.end());
    return out;
}

std::vector<uint8_t> sample_resource() {
    std::vector<blob> blobs;

    // XTHD: 12-byte section header then the title id.
    std::vector<uint8_t> xthd;
    put_u32(xthd, 0x58544844);
    put_u32(xthd, 1);
    put_u32(xthd, 32);
    put_u32(xthd, 0x584107ED);
    for (int i = 0; i < 7; ++i) put_u32(xthd, 0);
    blobs.push_back({1, 0x58544844ull, xthd});

    // XSTC: the default language, after the same 12-byte header.
    std::vector<uint8_t> xstc;
    put_u32(xstc, 0x58535443);
    put_u32(xstc, 1);
    put_u32(xstc, 4);
    put_u32(xstc, 1); // English
    blobs.push_back({1, 0x58535443ull, xstc});

    blobs.push_back({1, 0x58414348ull,
                     achievement_table({
                         {7, 0x100, 0x101, 0x102, 42, 20, 0x0C},
                         {9, 0x200, 0x201, 0x201, 43, 30, 0x0C},
                     })});
    // English strings.
    blobs.push_back({3, 1,
                     string_table({{0x100, "Multitastic"},
                                   {0x101, "Earned it"},
                                   {0x102, "Earn x10 multiplier"},
                                   {0x200, "Pacifism"},
                                   {0x201, "Do not fire"}})});
    // German has the name but not the descriptions, so the fallback is exercised.
    blobs.push_back({3, 3, string_table({{0x100, "Vielfaeltig"}})});

    return build_xdbf(blobs, 6, 3);
}

void test_parses_hand_written_resource() {
    const std::vector<uint8_t> resource = sample_resource();
    xdbf_file spa;
    std::string error;
    assert(spa.parse(resource.data(), resource.size(), error));
    assert(error.empty());
    assert(spa.title_id() == 0x584107EDu);
    assert(spa.default_language() == 1);
    assert(spa.achievements().size() == 2);
    assert(spa.total_gamerscore() == 50);

    const xdbf_achievement& first = spa.achievements()[0];
    assert(first.id == 7);
    assert(first.image_id == 42);
    assert(first.gamerscore == 20);
    assert(first.flags == 0x0Cu);
    assert(first.name == "Multitastic");
    assert(first.description == "Earned it");
    assert(first.locked_description == "Earn x10 multiplier");

    const xdbf_achievement& second = spa.achievements()[1];
    assert(second.id == 9);
    assert(second.name == "Pacifism");
    // Both description ids point at the same string, as they do in every real
    // Geometry Wars record.
    assert(second.description == "Do not fire");
    assert(second.locked_description == "Do not fire");
    std::printf("  parses a hand-written resource\n");
}

void test_language_fallback() {
    const std::vector<uint8_t> resource = sample_resource();
    xdbf_file spa;
    std::string error;
    assert(spa.parse(resource.data(), resource.size(), error));
    spa.resolve_strings(3); // German
    // The German table has the name...
    assert(spa.achievements()[0].name == "Vielfaeltig");
    // ...and nothing else, so the description falls back to the default
    // language rather than coming back blank.
    assert(spa.achievements()[0].description == "Earned it");
    std::printf("  falls back to the default language for missing strings\n");
}

void test_capacity_not_used_count_places_the_data() {
    // The same content with different amounts of slack in the tables must parse
    // identically. It does not if the parser sizes the tables by the used
    // counts: the data area then starts too early and every blob is misread.
    std::vector<blob> blobs;
    blobs.push_back({1, 0x58414348ull,
                     achievement_table({{3, 0x10, 0x11, 0x12, 1, 5, 0}})});
    blobs.push_back({3, 1, string_table({{0x10, "Only one"}})});

    for (uint32_t spare = 0; spare < 5; ++spare) {
        const std::vector<uint8_t> resource = build_xdbf(blobs, spare, spare);
        xdbf_file spa;
        std::string error;
        assert(spa.parse(resource.data(), resource.size(), error));
        assert(spa.achievements().size() == 1);
        assert(spa.achievements()[0].id == 3);
        assert(spa.achievements()[0].gamerscore == 5);
        assert(spa.achievements()[0].name == "Only one");
    }
    std::printf("  locates data from the table capacities\n");
}

void test_rejects_rubbish() {
    xdbf_file spa;
    std::string error;
    const uint8_t too_short[4] = {'X', 'D', 'B', 'F'};
    assert(!spa.parse(too_short, sizeof(too_short), error));
    assert(!error.empty());

    std::vector<uint8_t> bad_magic = sample_resource();
    bad_magic[0] = 'Y';
    error.clear();
    assert(!spa.parse(bad_magic.data(), bad_magic.size(), error));
    assert(!error.empty());

    // A capacity that would put the data area past the end of the buffer is
    // refused rather than trusted into an out-of-bounds read.
    std::vector<uint8_t> huge = sample_resource();
    huge[0x08] = 0x40; // entry_count high byte
    error.clear();
    assert(!spa.parse(huge.data(), huge.size(), error));
    assert(!error.empty());
    std::printf("  refuses a resource it cannot trust\n");
}

void test_resource_with_no_achievements_is_not_an_error() {
    std::vector<blob> blobs;
    blobs.push_back({3, 1, string_table({{1, "nothing here"}})});
    const std::vector<uint8_t> resource = build_xdbf(blobs, 2, 1);
    xdbf_file spa;
    std::string error;
    assert(spa.parse(resource.data(), resource.size(), error));
    assert(spa.achievements().empty());
    assert(spa.total_gamerscore() == 0);
    assert(spa.string(1, 1) == "nothing here");
    std::printf("  a title with no achievements parses cleanly\n");
}

// --- leaderboards, out of XVC2 ---------------------------------------------
//
// The section is two tables back to back, and the first one's entries are all
// of DIFFERENT lengths - a shared view is a column list, a row list and a
// property bag whose size only its own header knows. So the second table can
// only be found by walking the first, and a walk that is off by even one bag
// lands the view table inside the shared views' data, where it still parses
// into ids and flags that look entirely plausible.
//
// The fixture therefore builds TWO shared views with different shapes and puts
// the boards in the second one. With a single view, or with two of the same
// size, the arithmetic could be wrong in several ways and still come out right.

struct view_field_fields {
    uint32_t property_id;
    uint16_t attribute_id;
    uint16_t string_id;
    uint16_t aggregation_type;
};

void put_view_field(std::vector<uint8_t>& out, const view_field_fields& field) {
    put_u32(out, 0x20); // size
    put_u32(out, field.property_id);
    put_u32(out, 0); // flags
    put_u16(out, field.attribute_id);
    put_u16(out, field.string_id);
    put_u16(out, field.aggregation_type);
    out.push_back(0); // ordinal
    out.push_back(0); // field type
    put_u32(out, 0);  // format type
    put_u32(out, 0);
    put_u32(out, 0);
}

// An XPBM property bag. Its declared size is measured from just after the
// magic, which is why the walk adds four to it and not twelve.
std::vector<uint8_t> property_bag(const std::vector<uint32_t>& contexts,
                                  const std::vector<uint32_t>& properties) {
    std::vector<uint8_t> body;
    put_u32(body, static_cast<uint32_t>(contexts.size()));
    put_u32(body, static_cast<uint32_t>(properties.size()));
    for (uint32_t context : contexts) put_u32(body, context);
    for (uint32_t property : properties) put_u32(body, property);
    std::vector<uint8_t> out;
    put_u32(out, 0x5850424D); // "XPBM"
    put_u32(out, 1);
    put_u32(out, static_cast<uint32_t>(body.size() + 8));
    out.insert(out.end(), body.begin(), body.end());
    return out;
}

struct board_fields {
    uint32_t id;
    uint32_t flags;
    uint16_t shared_index;
    uint16_t string_id;
};

std::vector<uint8_t> stats_views(
    const std::vector<std::vector<view_field_fields>>& shared_columns,
    const std::vector<std::vector<uint32_t>>& shared_bags,
    const std::vector<board_fields>& boards) {
    std::vector<uint8_t> body;
    put_u16(body, static_cast<uint16_t>(shared_columns.size()));
    for (std::size_t i = 0; i < shared_columns.size(); ++i) {
        put_u16(body, static_cast<uint16_t>(shared_columns[i].size()));
        put_u16(body, 0); // no rows
        put_u32(body, 0);
        put_u32(body, 0);
        for (const view_field_fields& column : shared_columns[i])
            put_view_field(body, column);
        const std::vector<uint8_t> bag = property_bag({}, shared_bags[i]);
        body.insert(body.end(), bag.begin(), bag.end());
    }
    put_u16(body, static_cast<uint16_t>(boards.size()));
    for (const board_fields& board : boards) {
        put_u32(body, board.id);
        put_u32(body, board.flags);
        put_u16(body, board.shared_index);
        put_u16(body, board.string_id);
        put_u32(body, 0);
    }
    std::vector<uint8_t> out;
    put_u32(out, 0x58564332); // "XVC2"
    put_u32(out, 1);
    put_u32(out, static_cast<uint32_t>(body.size() + 8));
    out.insert(out.end(), body.begin(), body.end());
    return out;
}

void test_leaderboards_are_read_and_named() {
    // Shared view 0 has one column and a two-entry bag; shared view 1 has three
    // and an empty one. Different lengths on purpose.
    const std::vector<std::vector<view_field_fields>> shared = {
        {{0x10000009, 0x0001, 20, xdbf_aggregation::last}},
        {{0x10008001, xdbf_attribute::rank, 21, xdbf_aggregation::last},
         {0x20000001, xdbf_attribute::rating, 22, xdbf_aggregation::max},
         {0x10000002, 0x0001, 23, xdbf_aggregation::max}},
    };
    const std::vector<std::vector<uint32_t>> bags = {{0x1111, 0x2222}, {}};
    const std::vector<board_fields> boards = {
        {1, 0, 1, 10},
        {3, 0, 1, 11},
        // A view that is not a leaderboard - the low nibble of its flags says
        // "context by property" - must not be offered as one.
        {9, 1, 0, 12},
    };

    std::vector<blob> blobs;
    blobs.push_back({1, 0x58564332ull, stats_views(shared, bags, boards)});
    blobs.push_back({3, 1,
                     string_table({{10, "Weekly Hall of Fame"},
                                   {11, "All Time Hall of Fame"},
                                   {12, "Not a board"},
                                   {21, "Rank"},
                                   {22, "Score"},
                                   {23, "Level"}})});
    const std::vector<uint8_t> resource = build_xdbf(blobs, 3, 2);

    xdbf_file spa;
    std::string error;
    assert(spa.parse(resource.data(), resource.size(), error));
    assert(spa.leaderboards().size() == 3);

    const xdbf_leaderboard* weekly = spa.leaderboard(1);
    assert(weekly != nullptr);
    assert(weekly->name == "Weekly Hall of Fame");
    assert(weekly->is_leaderboard());
    assert(weekly->columns.size() == 3);

    // The ranked column is the one carrying the reserved rating attribute, not
    // simply the first: getting that wrong would record the player's RANK as
    // their score, which is a small number that always places.
    const xdbf_view_field* ranked = weekly->ranked_column();
    assert(ranked != nullptr);
    assert(ranked->property_id == 0x20000001);
    assert(ranked->name == "Score");
    assert(ranked->aggregation_type == xdbf_aggregation::max);

    const xdbf_leaderboard* all_time = spa.leaderboard(3);
    assert(all_time != nullptr);
    assert(all_time->name == "All Time Hall of Fame");

    const xdbf_leaderboard* not_a_board = spa.leaderboard(9);
    assert(not_a_board != nullptr);
    assert(!not_a_board->is_leaderboard());
    // It shares view 0, which is the one-column shape - proof the walk found
    // the right shared view for each board rather than one shape for all.
    assert(not_a_board->columns.size() == 1);

    assert(spa.leaderboard(0x4242) == nullptr);
    std::printf("  leaderboards read from XVC2, named and ranked\n");
}

void test_a_title_with_no_leaderboards_is_not_an_error() {
    std::vector<blob> blobs;
    blobs.push_back({3, 1, string_table({{1, "nothing here"}})});
    const std::vector<uint8_t> resource = build_xdbf(blobs, 2, 1);
    xdbf_file spa;
    std::string error;
    assert(spa.parse(resource.data(), resource.size(), error));
    assert(spa.leaderboards().empty());
    std::printf("  a title with no XVC2 section parses cleanly\n");
}

// A section that lies about its own length must stop the walk, not run off the
// end of the blob. Truncating the resource is the cheapest way to produce one.
void test_truncated_stats_section_is_survived() {
    const std::vector<std::vector<view_field_fields>> shared = {
        {{0x20000001, xdbf_attribute::rating, 22, xdbf_aggregation::max}},
    };
    std::vector<blob> blobs;
    blobs.push_back({1, 0x58564332ull,
                     stats_views(shared, {{}}, {{1, 0, 0, 10}})});
    // Cut the section in half. Every intermediate length is walked, so this
    // covers a truncation inside the header, the fields and the bag alike.
    const std::size_t full = blobs[0].bytes.size();
    for (std::size_t length = 1; length < full; ++length) {
        std::vector<blob> cut = blobs;
        cut[0].bytes.resize(length);
        const std::vector<uint8_t> resource = build_xdbf(cut, 1, 1);
        xdbf_file spa;
        std::string error;
        // Parsing succeeds or fails, but it must not read past the blob - which
        // is what the sanitiser build of this test is really checking.
        (void)spa.parse(resource.data(), resource.size(), error);
    }
    std::printf("  a truncated XVC2 section is survived at every length\n");
}

// --- the store ------------------------------------------------------------
//
// Achievements and scores live in profile_store beside the profile settings -
// one persistence layer, keyed by title id. These tests care about the keying
// and about a write really reaching the file, so every reload is done with a
// FRESH store object that has never seen the first one.

constexpr uint32_t kTitleA = 0x584107EDu; // Geometry Wars
constexpr uint32_t kTitleB = 0x58410954u; // some other title

std::string temporary_profile(const char* name) {
    const std::filesystem::path base =
        std::filesystem::temp_directory_path() /
        (std::string("whitty_xdbf_test_") + name);
    std::error_code code;
    std::filesystem::remove_all(base, code);
    std::filesystem::create_directories(base, code);
    return (base / "profile.bin").string();
}

void test_unlock_survives_the_process() {
    const std::string path = temporary_profile("unlock");
    {
        profile_store store;
        store.set_path(path);
        assert(store.load());
        // A first run has no file, which is not a failure and not "loaded".
        assert(!store.loaded_from_file());
        assert(!store.is_unlocked(kTitleA, 3));

        bool already = true;
        assert(store.unlock_achievement(kTitleA, 3, 1234567890123ull, &already));
        assert(!already);
        assert(store.is_unlocked(kTitleA, 3));
        // Firing the same unlock again is not a failure and does not move the
        // time - that is what a title does every time the condition triggers.
        already = false;
        assert(!store.unlock_achievement(kTitleA, 3, 999ull, &already));
        assert(already);
        assert(store.unlock_time(kTitleA, 3) == 1234567890123ull);
    }
    // The file, not the object, is what has to hold the state.
    assert(std::filesystem::exists(path));
    {
        profile_store store;
        store.set_path(path);
        assert(store.load());
        assert(store.loaded_from_file());
        assert(store.is_unlocked(kTitleA, 3));
        assert(store.unlock_time(kTitleA, 3) == 1234567890123ull);
        assert(!store.is_unlocked(kTitleA, 4));
        assert(store.unlock_count(kTitleA) == 1);
    }
    std::error_code code;
    std::filesystem::remove_all(std::filesystem::path(path).parent_path(), code);
    std::printf("  an unlock is still unlocked in a new process\n");
}

void test_two_titles_do_not_share_what_they_earned() {
    const std::string path = temporary_profile("titles");
    {
        profile_store store;
        store.set_path(path);
        assert(store.load());
        assert(store.unlock_achievement(kTitleA, 1, 10, nullptr));
        assert(store.unlock_achievement(kTitleB, 1, 20, nullptr));
        assert(store.unlock_achievement(kTitleB, 2, 30, nullptr));
        assert(store.add_score(kTitleA, 1, 500, 40, "A", nullptr));
        assert(store.add_score(kTitleB, 1, 900, 50, "B", nullptr));
    }
    {
        profile_store store;
        store.set_path(path);
        assert(store.load());
        // The same achievement id in two titles is two different achievements.
        assert(store.unlock_count(kTitleA) == 1);
        assert(store.unlock_count(kTitleB) == 2);
        assert(store.unlock_time(kTitleA, 1) == 10);
        assert(store.unlock_time(kTitleB, 1) == 20);
        assert(!store.is_unlocked(kTitleA, 2));
        assert(store.is_unlocked(kTitleB, 2));
        // And the score tables are separate too.
        assert(store.scores(kTitleA).size() == 1);
        assert(store.scores(kTitleA).front().score == 500);
        assert(store.scores(kTitleB).front().score == 900);
        // A title that has never run has nothing, rather than someone else's.
        assert(store.unlock_count(0xDEADBEEF) == 0);
        assert(store.scores(0xDEADBEEF).empty());
    }
    std::error_code code;
    std::filesystem::remove_all(std::filesystem::path(path).parent_path(), code);
    std::printf("  two titles keep their own achievements and scores\n");
}

void test_settings_and_achievements_share_the_file() {
    // Both halves of the store have to survive the same save, because they are
    // written by the same code path: an achievement unlock rewrites the whole
    // file, including a title's save blob.
    const std::string path = temporary_profile("mixed");
    {
        profile_store store;
        store.set_path(path);
        assert(store.load());
        user_setting save_blob;
        save_blob.key = 0x63E83FFF; // XPROFILE_TITLE_SPECIFIC1
        save_blob.payload = {1, 2, 3, 4, 5};
        store.store(kTitleA, save_blob);
        assert(store.save());
        // Now unlock, which saves again from the achievement path.
        assert(store.unlock_achievement(kTitleA, 6, 77, nullptr));
    }
    {
        profile_store store;
        store.set_path(path);
        assert(store.load());
        const user_setting* found = store.find(kTitleA, 0x63E83FFF);
        assert(found != nullptr);
        assert(found->payload.size() == 5 && found->payload[4] == 5);
        assert(store.is_unlocked(kTitleA, 6));
    }
    std::error_code code;
    std::filesystem::remove_all(std::filesystem::path(path).parent_path(), code);
    std::printf("  a save blob and an unlock survive each other\n");
}

void test_scores_are_a_top_ten_per_board() {
    const std::string path = temporary_profile("scores");
    profile_store store;
    store.set_path(path);
    assert(store.load());

    for (uint64_t i = 1; i <= 12; ++i) {
        bool placed = false;
        store.add_score(kTitleA, 1, i * 1000, 7, "WHITTY", &placed);
        assert(placed);
    }
    std::vector<local_score> board = store.scores(kTitleA, 1);
    assert(board.size() == profile_store::kScoresPerBoard);
    assert(board.front().score == 12000);
    assert(board.back().score == 3000);

    // A score below the tail of a full board does not place.
    bool placed = true;
    assert(!store.add_score(kTitleA, 1, 500, 7, "WHITTY", &placed));
    assert(!placed);

    // A different leaderboard keeps its own table and is not trimmed by the
    // first one's inserts.
    placed = false;
    assert(store.add_score(kTitleA, 2, 42, 7, "WHITTY", &placed));
    assert(placed);
    assert(store.scores(kTitleA, 2).size() == 1);
    assert(store.scores(kTitleA, 1).size() == profile_store::kScoresPerBoard);

    // Reload from the file and the tables come back the same.
    store.forget();
    assert(store.scores(kTitleA).empty());
    assert(store.load());
    assert(store.scores(kTitleA, 1).size() == profile_store::kScoresPerBoard);
    assert(store.scores(kTitleA, 1).front().score == 12000);
    assert(store.scores(kTitleA, 2).size() == 1);
    assert(store.scores(kTitleA, 2).front().score == 42);
    assert(store.scores(kTitleA, 2).front().name == "WHITTY");

    std::error_code code;
    std::filesystem::remove_all(std::filesystem::path(path).parent_path(), code);
    std::printf("  the high-score table keeps a top ten per leaderboard\n");
}

void test_unreadable_file_is_not_an_empty_profile() {
    const std::string path = temporary_profile("corrupt");
    {
        std::ofstream out(path, std::ios::binary);
        out << "not a profile file at all";
    }
    profile_store store;
    store.set_path(path);
    // False, so a caller cannot mistake a damaged file for a fresh profile and
    // overwrite what the player earned.
    assert(!store.load());
    assert(!store.loaded_from_file());
    std::error_code code;
    std::filesystem::remove_all(std::filesystem::path(path).parent_path(), code);
    std::printf("  a damaged profile is refused, not treated as empty\n");
}

void test_a_settings_only_file_still_loads() {
    // Version 1 of the file held settings and nothing else. It must still load -
    // refusing it would make an existing save unreadable - and read back as a
    // profile with nothing earned yet. The bytes are assembled here by hand so
    // this cannot pass by being written with the same code that reads it.
    const std::string path = temporary_profile("v1");
    {
        std::string out("WXPROF", 6);
        out.push_back(1); // version 1, little-endian u16
        out.push_back(0);
        const unsigned char rest[] = {
            1, 0, 0, 0,             // one setting
            0xED, 0x07, 0x41, 0x58, // title id 0x584107ED, little-endian
            0xFF, 0x3F, 0xE8, 0x63, // key 0x63E83FFF
            0, 0, 0, 0, 0, 0, 0, 0, // scalar
            2, 0, 0, 0,             // payload length
            0xAB, 0xCD,             // payload
        };
        out.append(reinterpret_cast<const char*>(rest), sizeof(rest));
        std::ofstream file(path, std::ios::binary);
        file.write(out.data(), static_cast<std::streamsize>(out.size()));
    }
    profile_store store;
    store.set_path(path);
    assert(store.load());
    assert(store.loaded_from_file());
    const user_setting* found = store.find(0x584107EDu, 0x63E83FFF);
    assert(found != nullptr);
    assert(found->payload.size() == 2);
    assert(found->payload[0] == 0xAB && found->payload[1] == 0xCD);
    assert(store.unlock_count(0x584107EDu) == 0);
    assert(store.scores(0x584107EDu).empty());
    std::error_code code;
    std::filesystem::remove_all(std::filesystem::path(path).parent_path(), code);
    std::printf("  a version-1 settings-only profile still loads\n");
}

void test_without_a_path_a_write_does_not_claim_to_persist() {
    profile_store store;
    assert(store.load());
    // The unlock takes effect for this run...
    assert(store.unlock_achievement(kTitleA, 1, 5, nullptr));
    assert(store.is_unlocked(kTitleA, 1));
    // ...but save() does not pretend a file was written.
    assert(!store.save());
    std::printf("  an unpersisted store does not claim to have saved\n");
}

} // namespace

int main() {
    std::printf("xdbf_test\n");
    test_parses_hand_written_resource();
    test_language_fallback();
    test_capacity_not_used_count_places_the_data();
    test_rejects_rubbish();
    test_resource_with_no_achievements_is_not_an_error();
    test_leaderboards_are_read_and_named();
    test_a_title_with_no_leaderboards_is_not_an_error();
    test_truncated_stats_section_is_survived();
    test_unlock_survives_the_process();
    test_two_titles_do_not_share_what_they_earned();
    test_settings_and_achievements_share_the_file();
    test_scores_are_a_top_ten_per_board();
    test_unreadable_file_is_not_an_empty_profile();
    test_a_settings_only_file_still_loads();
    test_without_a_path_a_write_does_not_claim_to_persist();
    std::printf("xdbf_test: ok\n");
    return 0;
}
