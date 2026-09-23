// Unit tests for the system's own pages.
//
// The pages are asserted as TEXT rather than as pixels: what a page says is the
// thing that matters, and reading it out of a bitmap would test the font twice
// and the content not at all. What is being guarded is that a locked achievement
// appears at all - an achievements screen that listed only what had been earned
// would be empty on every first run and look like a broken parser.
#include "whitty_xenon/local_services.h"
#include "whitty_xenon/kernel_state.h"

#include <cassert>
#include <cstdio>
#include <string>
#include <vector>

using namespace whitty_xenon;

namespace {

constexpr uint32_t kTitle = 0x584107EDu;

struct fixture {
    guest_memory memory;
    guest_heap heap;
    kernel_state kernel;

    fixture() : kernel(memory, heap) {
        std::string error;
        assert(memory.initialize(error));
        assert(heap.initialize(memory, 0x40000000, 0x00100000, error));
        kernel.set_title_id(kTitle);
    }

    void give_two_achievements() {
        std::vector<xdbf_achievement> list;
        xdbf_achievement first;
        first.id = 0;
        first.name = "Multitastic";
        first.description = "Earned the multiplier";
        first.locked_description = "Earn x10 multiplier";
        first.gamerscore = 20;
        list.push_back(first);
        xdbf_achievement second;
        second.id = 3;
        second.name = "Pacifism";
        second.description = "Never fired";
        second.locked_description = "Do not fire";
        second.gamerscore = 10;
        list.push_back(second);
        kernel.set_title_achievements(list);
    }

    // A title the shape of the real one: twelve achievements worth 200 points
    // between them, with the longest name and description Geometry Wars has.
    // The widths are the point - columns placed for "1 of 2" and "10 of 30 G"
    // have room to spare that "3 of 12" and "200 of 200 G" do not, so a layout
    // checked only against the small fixture passes while the real page reads
    // "3 of 1235 of 200 G".
    void give_a_full_title() {
        std::vector<xdbf_achievement> list;
        for (int i = 0; i < 12; ++i) {
            xdbf_achievement one;
            one.id = static_cast<uint16_t>(i);
            one.name = "Survived 1,000,000";
            one.description = "Earn 1,000,000 points without dying";
            one.locked_description =
                "Survive the first 60 seconds of the game without firing";
            one.gamerscore = i < 4 ? 30 : 10; // 4*30 + 8*10 = 200
            list.push_back(one);
        }
        kernel.set_title_achievements(list);
    }

    // Two named boards, as Geometry Wars declares in its own SPA. The names are
    // the point: a table that says "BOARD 1" is telling the player a number the
    // title never showed them.
    void give_two_boards() {
        std::vector<xdbf_leaderboard> boards;
        xdbf_leaderboard evolved;
        evolved.id = 1;
        evolved.name = "Evolved";
        boards.push_back(evolved);
        xdbf_leaderboard retro;
        retro.id = 2;
        retro.name = "Retro";
        boards.push_back(retro);
        kernel.set_title_leaderboards(boards);
    }
};

// A FILETIME for a date in the machine's own timezone, so what the page prints
// round-trips whatever that timezone is. Midday, so no daylight-saving shift can
// move it onto the day either side.
uint64_t filetime_for(int year, int month, int day) {
    std::tm parts{};
    parts.tm_year = year - 1900;
    parts.tm_mon = month - 1;
    parts.tm_mday = day;
    parts.tm_hour = 12;
    parts.tm_isdst = -1;
    const std::time_t when = std::mktime(&parts);
    assert(when != static_cast<std::time_t>(-1));
    return (static_cast<uint64_t>(when) + 11644473600ull) * 10000000ull;
}

// A row's fields, split where the layout left a gap of two spaces or more. The
// font is fixed width and a row is laid out by counting characters, so a column
// placed one character too far left does not wrap or overflow - it runs into the
// field beside it and reads as one longer field. "3 of 1235 of 200 G" was
// exactly that, and asserting on substrings did not notice, because both halves
// were still in there.
std::vector<std::string> fields(const std::string& row) {
    std::vector<std::string> out;
    std::size_t at = 0;
    while (at < row.size()) {
        while (at < row.size() && row[at] == ' ') ++at;
        if (at >= row.size()) break;
        std::size_t end = at;
        while (end < row.size() &&
               !(row[end] == ' ' && end + 1 < row.size() && row[end + 1] == ' '))
            ++end;
        std::string field = row.substr(at, end - at);
        while (!field.empty() && field.back() == ' ') field.pop_back();
        out.push_back(field);
        at = end;
    }
    return out;
}

// The first line whose first field is `first`, so a test can name a row by what
// it starts with rather than by its index on the page.
std::vector<std::string> row_fields(const std::vector<gpu::panel_line>& lines,
                                    const std::string& first) {
    for (const gpu::panel_line& line : lines) {
        const std::vector<std::string> parts = fields(line.text);
        if (!parts.empty() && parts[0] == first) return parts;
    }
    return {};
}

bool any_line_contains(const std::vector<gpu::panel_line>& lines,
                       const std::string& text) {
    for (const gpu::panel_line& line : lines)
        if (line.text.find(text) != std::string::npos) return true;
    return false;
}

void test_page_lists_locked_and_unlocked() {
    fixture fx;
    fx.give_two_achievements();
    // A real time, so the page can print the day it was earned.
    assert(fx.kernel.profile().unlock_achievement(
        kTitle, 3, filetime_for(2026, 7, 25), nullptr));

    const std::vector<gpu::panel_line> page =
        build_achievements_page(fx.kernel);
    // Both are listed, and the marker distinguishes them.
    assert(any_line_contains(page, "[ ] Multitastic"));
    assert(any_line_contains(page, "[*] Pacifism"));
    // Real gamerscore from the title, and the earned tally - as three separate
    // fields, not as two that have run into each other.
    const std::vector<std::string> header = row_fields(page, "Achievements");
    assert(header.size() == 3);
    assert(header[1] == "1 of 2");
    assert(header[2] == "10 of 30 G");
    // And a row is its marker and name, then the date, then the gamerscore.
    const std::vector<std::string> row = row_fields(page, "[*] Pacifism");
    assert(row.size() == 3);
    assert(row[2] == "10 G");
    // When it was earned, beside the one that was. The locked one has no date,
    // and printing 1601 for it would look like a corrupt store.
    assert(row[1] == "25 Jul 2026");
    assert(row_fields(page, "[ ] Multitastic").size() == 2);
    assert(!any_line_contains(page, "1601"));
    // The console shows the unachieved text while locked and the achieved text
    // once earned, and the title supplies both - so the page must use the one
    // the title meant for that state, not one of them for both.
    assert(any_line_contains(page, "Earn x10 multiplier"));
    assert(!any_line_contains(page, "Earned the multiplier"));
    assert(any_line_contains(page, "Never fired"));
    assert(!any_line_contains(page, "Do not fire"));
    std::printf("  the page lists locked and unlocked with the right text\n");
}

void test_page_says_so_when_a_title_defines_none() {
    fixture fx; // no achievements set: a title with no XDBF resource
    const std::vector<gpu::panel_line> page =
        build_achievements_page(fx.kernel);
    // Said outright rather than shown as an empty list, because an empty list
    // and a list that failed to parse look identical.
    assert(any_line_contains(page, "no achievements"));
    assert(any_line_contains(page, "0 of 0"));
    std::printf("  a title with no achievements is not shown as an empty list\n");
}

void test_the_columns_hold_the_real_titles_numbers() {
    fixture fx;
    fx.give_a_full_title();
    for (uint16_t id = 0; id < 3; ++id)
        assert(fx.kernel.profile().unlock_achievement(
            kTitle, id, filetime_for(2026, 7, 25), nullptr));

    const std::vector<gpu::panel_line> page =
        build_achievements_page(fx.kernel);
    const std::vector<std::string> header = row_fields(page, "Achievements");
    assert(header.size() == 3);
    assert(header[1] == "3 of 12");
    assert(header[2] == "90 of 200 G");
    // An earned row: name, date, gamerscore, still three fields with the
    // longest name this title has.
    const std::vector<std::string> row =
        row_fields(page, "[*] Survived 1,000,000");
    assert(row.size() == 3);
    assert(row[1] == "25 Jul 2026");
    assert(row[2] == "30 G");
    // And nothing on the page overflows the width the panel is built at.
    for (const gpu::panel_line& line : page)
        assert(line.text.size() <= kBladeColumns);
    // A description too long for one line is carried onto the next rather than
    // cut off: the locked text in this fixture is 54 characters indented by 5,
    // which fits, so lengthen it and check both halves survive.
    std::vector<xdbf_achievement> longer = fx.kernel.title_achievements();
    // On one that stays locked, so it is the locked text that gets shown.
    longer[5].locked_description =
        "Chain together 5 gates in 5 seconds, crossing at least one gate "
        "every second without ever being hit";
    fx.kernel.set_title_achievements(longer);
    const std::vector<gpu::panel_line> wrapped =
        build_achievements_page(fx.kernel);
    for (const gpu::panel_line& line : wrapped)
        assert(line.text.size() <= kBladeColumns);
    assert(any_line_contains(wrapped, "Chain together 5 gates"));
    assert(any_line_contains(wrapped, "without ever being hit"));
    std::printf("  the columns hold a real title's numbers without colliding\n");
}

void test_the_two_pages_are_separate_views() {
    // Scores are a page of their own, not a block at the bottom of the
    // achievements list: neither page may carry the other's content, and each
    // has to say which button reaches the other one.
    fixture fx;
    fx.give_two_achievements();
    fx.give_two_boards();
    assert(fx.kernel.profile().add_score(kTitle, 1, 13425,
                                         filetime_for(2026, 7, 25), "WHITTY",
                                         nullptr));

    const std::vector<gpu::panel_line> achievements =
        build_achievements_page(fx.kernel);
    assert(!any_line_contains(achievements, "13,425"));
    assert(!any_line_contains(achievements, "Evolved"));
    assert(any_line_contains(achievements, "X  Local scores"));

    const std::vector<gpu::panel_line> scores = build_scores_page(fx.kernel);
    assert(!any_line_contains(scores, "Multitastic"));
    assert(!any_line_contains(scores, "20 G")); // no gamerscore column here
    assert(any_line_contains(scores, "X  Achievements"));
    std::printf("  achievements and scores are separate pages\n");
}

void test_page_shows_only_this_title() {
    fixture fx;
    fx.give_two_achievements();
    // Another title earned the same ids. None of it may appear here.
    assert(fx.kernel.profile().unlock_achievement(0x58410954u, 0, 1, nullptr));
    assert(fx.kernel.profile().unlock_achievement(0x58410954u, 3, 2, nullptr));
    assert(fx.kernel.profile().add_score(0x58410954u, 1, 5000, 3, "OTHER",
                                        nullptr));

    const std::vector<gpu::panel_line> page =
        build_achievements_page(fx.kernel);
    assert(any_line_contains(page, "0 of 2"));
    assert(!any_line_contains(page, "[*]"));
    const std::vector<gpu::panel_line> scores = build_scores_page(fx.kernel);
    assert(!any_line_contains(scores, "OTHER"));
    assert(!any_line_contains(scores, "5,000"));
    assert(any_line_contains(scores, "No scores on this machine yet"));
    std::printf("  a page shows only the running title's state\n");
}

void test_scores_page_groups_by_board() {
    fixture fx;
    fx.give_two_boards();
    profile_store& profile = fx.kernel.profile();
    assert(profile.add_score(kTitle, 1, 1284350, filetime_for(2026, 7, 25),
                             "WHITTY", nullptr));
    assert(profile.add_score(kTitle, 1, 42, filetime_for(2026, 7, 24), "WHITTY",
                             nullptr));

    const std::vector<gpu::panel_line> page = build_scores_page(fx.kernel);
    // The board's own name out of the title's SPA, not the number the title
    // never showed the player.
    assert(any_line_contains(page, "Evolved"));
    assert(!any_line_contains(page, "Board 1"));
    // Rank, score with thousands separators, and the day it was set - three
    // fields, each in its own column rather than run together.
    const std::vector<std::string> top = row_fields(page, "1");
    assert(top.size() == 3);
    assert(top[1] == "1,284,350");
    assert(top[2] == "25 Jul 2026");
    const std::vector<std::string> second = row_fields(page, "2");
    assert(second.size() == 3);
    assert(second[1] == "42");
    assert(second[2] == "24 Jul 2026");
    // Highest first: the top score is on the line above the lower one.
    std::size_t best = 0;
    std::size_t worst = 0;
    for (std::size_t i = 0; i < page.size(); ++i) {
        if (page[i].text.find("1,284,350") != std::string::npos) best = i;
        if (page[i].text.find("42") != std::string::npos) worst = i;
    }
    assert(best < worst);
    // A declared board nobody has finished a round on says so under its own
    // name, rather than being left off the page as though it did not exist.
    assert(any_line_contains(page, "Retro"));
    assert(any_line_contains(page, "No scores yet"));
    std::printf("  the scores page groups the table under each board\n");
}

void test_a_score_on_an_undeclared_board_still_shows() {
    // A score recorded against a board the title's SPA does not name - put
    // there by hand, or a name that did not parse. A score that exists and is
    // not on the page is the one thing this table must never do.
    fixture fx;
    fx.give_two_boards();
    assert(fx.kernel.profile().add_score(kTitle, 9, 777,
                                         filetime_for(2026, 7, 20), "WHITTY",
                                         nullptr));
    const std::vector<gpu::panel_line> page = build_scores_page(fx.kernel);
    assert(any_line_contains(page, "Board 9"));
    assert(any_line_contains(page, "777"));
    std::printf("  a score on a board the title never declared still shows\n");
}

void test_the_page_is_built_for_the_surface_it_is_drawn_into() {
    // The window opens at the title's own resolution, so the page has to be
    // sized against the surface it is composited into rather than against a
    // fixed 720p. Too big and the copy is dropped whole and the player sees
    // nothing - which looks exactly like a blade that never opened.
    fixture fx;
    fx.give_two_achievements();
    fx.kernel.open_system_blade(kernel_state::blade_page_achievements);

    system_blade blade;
    blade.refresh(fx.kernel, 1280, 720);
    const uint32_t at_720 = blade.panel().width();
    assert(at_720 <= 1280 && blade.panel().height() <= 720);
    int32_t x = 0;
    int32_t y = 0;
    assert(blade.panel().placement(1280, 720, x, y));

    // A bigger surface gets a bigger page, and it still fits.
    blade.refresh(fx.kernel, 1920, 1080);
    assert(blade.panel().width() > at_720);
    assert(blade.panel().placement(1920, 1080, x, y));

    // And a small one gets a page that fits IT, rather than one built for a
    // frame this run never had.
    blade.refresh(fx.kernel, 640, 480);
    assert(blade.panel().placement(640, 480, x, y));

    // A caller with no surface yet - nothing presented into it - falls back to
    // the resolution the title says it is rendering at, not to 720p. A 1080p
    // title whose page was built for 720p is the bug this guards: the page is
    // then half the size it should be on screen.
    fx.kernel.video().front_buffer_width = 1920;
    fx.kernel.video().front_buffer_height = 1080;
    blade.refresh(fx.kernel, 0, 0);
    assert(blade.panel().width() > at_720);
    assert(blade.panel().placement(1920, 1080, x, y));
    std::printf("  a page is built for the surface it will be drawn into\n");
}

void test_blade_takes_the_pad_and_gives_it_back() {
    fixture fx;
    fx.give_two_achievements();
    system_blade blade;

    // Closed: the pad passes straight through.
    gamepad_state pad{};
    pad.connected = true;
    pad.buttons = pad_button::a;
    assert(!blade.consume_input(fx.kernel, pad));
    assert(pad.buttons == pad_button::a);

    fx.kernel.open_system_blade(kernel_state::blade_page_achievements);
    blade.refresh(fx.kernel, 1280, 720);
    assert(!blade.panel().empty());

    // Open: the pad is taken over, so the title never sees the press.
    pad.buttons = pad_button::x;
    assert(blade.consume_input(fx.kernel, pad));
    assert(pad.buttons == 0);
    assert(fx.kernel.system_blade_open());
    assert(fx.kernel.system_blade_page() == kernel_state::blade_page_scores);

    // A held button is one press, not a stream of them: X held down must not
    // flip the page again on the next poll.
    pad.buttons = pad_button::x;
    assert(blade.consume_input(fx.kernel, pad));
    assert(fx.kernel.system_blade_page() == kernel_state::blade_page_scores);

    // B closes it, and the panel comes down on the next refresh.
    pad.buttons = 0;
    blade.consume_input(fx.kernel, pad);
    pad.buttons = pad_button::b;
    assert(blade.consume_input(fx.kernel, pad));
    assert(!fx.kernel.system_blade_open());
    blade.refresh(fx.kernel, 1280, 720);
    assert(blade.panel().empty());
    std::printf("  the blade owns the pad only while it is up\n");
}

void test_refresh_rebuilds_only_when_the_content_changes() {
    fixture fx;
    fx.give_two_achievements();
    fx.kernel.open_system_blade(kernel_state::blade_page_achievements);
    system_blade blade;
    blade.refresh(fx.kernel, 1280, 720);
    const std::vector<uint8_t> first = blade.panel().rgba();
    blade.refresh(fx.kernel, 1280, 720);
    assert(blade.panel().rgba() == first);
    // Earning something must change the page.
    assert(fx.kernel.profile().unlock_achievement(kTitle, 0, 7, nullptr));
    blade.refresh(fx.kernel, 1280, 720);
    assert(blade.panel().rgba() != first);
    std::printf("  a page is rebuilt when, and only when, it changed\n");
}

} // namespace

int main() {
    std::printf("system_ui_test\n");
    test_page_lists_locked_and_unlocked();
    test_page_says_so_when_a_title_defines_none();
    test_the_columns_hold_the_real_titles_numbers();
    test_the_two_pages_are_separate_views();
    test_page_shows_only_this_title();
    test_scores_page_groups_by_board();
    test_a_score_on_an_undeclared_board_still_shows();
    test_the_page_is_built_for_the_surface_it_is_drawn_into();
    test_blade_takes_the_pad_and_gives_it_back();
    test_refresh_rebuilds_only_when_the_content_changes();
    std::printf("system_ui_test: ok\n");
    return 0;
}
