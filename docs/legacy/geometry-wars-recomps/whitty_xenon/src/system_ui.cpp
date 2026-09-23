#include "whitty_xenon/system_ui.h"

#include "whitty_xenon/kernel_state.h"

#include <cstdio>
#include <ctime>
#include <string>
#include <vector>

namespace whitty_xenon {
namespace {

std::string with_thousands(uint64_t value) {
    std::string digits = std::to_string(value);
    std::string out;
    for (std::size_t i = 0; i < digits.size(); ++i) {
        if (i != 0 && (digits.size() - i) % 3 == 0) out.push_back(',');
        out.push_back(digits[i]);
    }
    return out;
}

// A FILETIME as a player reads it: "25 Jul 2026". Local time, because the
// question a score answers is "when did I do that", and that is asked in the
// clock on the wall rather than in UTC. An empty string for a record with no
// time on it - every score written by this runtime carries one, but a store
// written by an older build does not, and a row reading "01 Jan 1601" would
// look like a corrupt file rather than a missing field.
std::string as_date(uint64_t filetime) {
    if (filetime == 0) return std::string();
    constexpr uint64_t kEpochDelta = 11644473600ull * 10000000ull;
    if (filetime < kEpochDelta) return std::string();
    const std::time_t seconds =
        static_cast<std::time_t>((filetime - kEpochDelta) / 10000000ull);
    std::tm parts{};
#ifdef _WIN32
    if (localtime_s(&parts, &seconds) != 0) return std::string();
#else
    if (localtime_r(&seconds, &parts) == nullptr) return std::string();
#endif
    char text[32];
    if (std::strftime(text, sizeof(text), "%d %b %Y", &parts) == 0)
        return std::string();
    return std::string(text);
}

// Pads or clips `text` so a column lands where it is meant to. The font is
// fixed width, so a row is laid out by counting characters.
void place(std::string& row, std::size_t column, const std::string& text) {
    if (row.size() < column) row.resize(column, ' ');
    for (std::size_t i = 0; i < text.size(); ++i) {
        const std::size_t at = column + i;
        if (row.size() <= at) row.resize(at + 1, ' ');
        row[at] = text[i];
    }
}

// The same, ending AT `column` rather than starting there. Numbers in a table
// are read down their last digit, so a rank or a score that is one digit longer
// than the row above has to grow leftwards.
void place_right(std::string& row, std::size_t column,
                 const std::string& text) {
    const std::size_t start = text.size() >= column ? 0 : column - text.size();
    place(row, start, text);
}

// The page's own palette, named so the two pages agree without repeating
// numbers. Green because that is what the credit and the plaque border already
// are; the system's pages should look like one thing.
constexpr uint8_t kHeading[3] = {0x80, 0xE0, 0x90};
constexpr uint8_t kRule[3] = {0x40, 0x70, 0x48};
constexpr uint8_t kBright[3] = {0xB0, 0xF0, 0xB8};
constexpr uint8_t kPlain[3] = {0xC8, 0xD0, 0xD8};
constexpr uint8_t kDim[3] = {0x78, 0x80, 0x88};
constexpr uint8_t kQuiet[3] = {0xA0, 0xA8, 0xB0};

// Where the date sits on the achievements page. Far enough right to leave the
// longest achievement name room, and far enough left that the gamerscore
// right-aligned against the far edge does not run into it.
constexpr std::size_t kDateColumn = 60;
// Where the "3 of 12" tally starts in the achievements header. Left of the date
// column: the gamerscore tally is right-aligned against the far edge and is the
// longest thing on the line, so putting the count under the dates runs the two
// into each other - "3 of 1235 of 200 G", which is what this used to say.
constexpr std::size_t kTallyColumn = 46;

gpu::panel_line text_line(const std::string& text, const uint8_t colour[3],
                          bool gap_before = false) {
    return gpu::panel_line{text, colour[0], colour[1], colour[2], gap_before};
}

// Adds `text` indented under a heading, broken across lines at spaces where it
// is too long for the page. A description is prose, and prose clipped at the
// eightieth character stops mid-sentence - Geometry Wars 2's "Chain together 5
// gates in 5 seconds. Crossing at least one gate every second..." lost its last
// two words that way. Breaking mid-word would be worse than either, so a run
// longer than the page is passed through and clipped by the panel.
void add_wrapped(std::vector<gpu::panel_line>& lines, const std::string& text,
                 std::size_t indent, const uint8_t colour[3]) {
    const std::size_t room = kBladeColumns > indent ? kBladeColumns - indent : 1;
    std::size_t at = 0;
    while (at < text.size()) {
        std::size_t take = text.size() - at;
        if (take > room) {
            const std::size_t space = text.rfind(' ', at + room);
            take = (space != std::string::npos && space > at) ? space - at : room;
        }
        std::string row;
        place(row, indent, text.substr(at, take));
        lines.push_back(text_line(row, colour));
        at += take;
        while (at < text.size() && text[at] == ' ') ++at;
    }
}

// One board's block: its own name, then its rows, highest first. The rank, the
// score and the date - what a high-score table is. The player's name is not
// repeated down the column because there is only ever one of them, and it is in
// the page's header instead.
void add_board(std::vector<gpu::panel_line>& lines, const std::string& name,
               const std::vector<local_score>& table) {
    std::string title;
    place(title, 1, name);
    lines.push_back(text_line(title, kHeading, true));
    if (table.empty()) {
        lines.push_back(text_line("   No scores yet.", kQuiet));
        return;
    }
    uint32_t rank = 0;
    for (const local_score& score : table) {
        std::string row;
        place_right(row, 6, std::to_string(++rank));
        place_right(row, 30, with_thousands(score.score));
        // The same column the achievements page dates its unlocks in, so the
        // two pages line up when the player flips between them.
        place(row, kDateColumn, as_date(score.when));
        lines.push_back(text_line(row, rank == 1 ? kBright : kPlain));
    }
}

// The two lines every page ends with: the rule, then what the buttons do. Which
// page X leads to is named, because a page that only says "X" makes the player
// press it to find out.
void add_footer(std::vector<gpu::panel_line>& lines, const char* next_page) {
    lines.push_back(text_line(std::string(kBladeColumns, '-'), kRule, true));
    std::string row = "B  Close";
    place(row, 13, std::string("X  ") + next_page);
    lines.push_back(text_line(row, kHeading));
}

} // namespace

std::vector<gpu::panel_line> build_achievements_page(
    const kernel_state& kernel) {
    const std::vector<xdbf_achievement>& defined = kernel.title_achievements();
    const profile_store& profile = kernel.profile();
    const uint32_t title = kernel.title_id();

    uint32_t total_score = 0;
    uint32_t earned_score = 0;
    std::size_t earned = 0;
    for (const xdbf_achievement& achievement : defined) {
        total_score += achievement.gamerscore;
        if (profile.is_unlocked(title, achievement.id)) {
            ++earned;
            earned_score += achievement.gamerscore;
        }
    }

    std::vector<gpu::panel_line> lines;
    std::string header = "Achievements";
    place(header, kTallyColumn,
          std::to_string(earned) + " of " + std::to_string(defined.size()));
    place_right(header, kBladeColumns - 2,
                std::to_string(earned_score) + " of " +
                    std::to_string(total_score) + " G");
    lines.push_back(text_line(header, kHeading));
    lines.push_back(text_line(std::string(kBladeColumns, '-'), kRule));

    if (defined.empty())
        lines.push_back(
            text_line("This title defines no achievements.", kQuiet, true));
    for (const xdbf_achievement& achievement : defined) {
        const bool unlocked = profile.is_unlocked(title, achievement.id);
        std::string row = unlocked ? " [*] " : " [ ] ";
        row += achievement.name;
        // When it was earned, from the same store the marker comes from. A
        // locked one has no date and says nothing rather than saying zero.
        if (unlocked)
            place(row, kDateColumn,
                  as_date(profile.unlock_time(title, achievement.id)));
        place_right(row, kBladeColumns - 2,
                    std::to_string(achievement.gamerscore) + " G");
        // Unlocked is bright, locked is dim: the state has to be readable at a
        // glance and not only from the marker. No blank line between entries -
        // twelve of them with two lines each plus a gap runs the page past the
        // frame, and a page taller than the frame has to be shrunk to fit.
        lines.push_back(text_line(row, unlocked ? kBright : kPlain));
        // The console shows the unachieved description while it is locked and
        // the achieved one after - and the title supplies both, so use the one
        // it meant.
        const std::string& detail =
            unlocked ? achievement.description : achievement.locked_description;
        add_wrapped(lines, detail, 5, kDim);
    }
    add_footer(lines, "Local scores");
    return lines;
}

std::vector<gpu::panel_line> build_scores_page(const kernel_state& kernel) {
    const profile_store& profile = kernel.profile();
    const std::vector<local_score> table = profile.scores(kernel.title_id());
    const std::vector<xdbf_leaderboard>& boards = kernel.title_leaderboards();

    std::vector<gpu::panel_line> lines;
    std::string header = "Local high scores";
    // Whose they are. There is one local player and no gamertag service, so
    // this is the name every row would otherwise repeat.
    place(header, kBladeColumns - 1 - std::string(kLocalPlayerName).size(),
          kLocalPlayerName);
    lines.push_back(text_line(header, kHeading));
    lines.push_back(text_line(std::string(kBladeColumns, '-'), kRule));

    // One block per board the title declares, in the order the title declares
    // them, whether or not anything has been set on it. A board with no scores
    // is a board nobody has finished a round on yet, and saying so under its own
    // name is the difference between "nothing yet" and "this is broken".
    std::vector<uint32_t> shown;
    bool any_board = false;
    for (const xdbf_leaderboard& board : boards) {
        if (!board.is_leaderboard() || board.name.empty()) continue;
        any_board = true;
        shown.push_back(board.id);
        add_board(lines, board.name, profile.scores(kernel.title_id(),
                                                   board.id));
    }
    // Anything recorded against a board the title does not declare - a score
    // put there by hand, or a board whose name did not parse. Shown rather than
    // dropped: a score that exists and is not on the page is the one thing this
    // table must never do.
    for (const local_score& score : table) {
        bool already = false;
        for (uint32_t id : shown)
            if (id == score.leaderboard_id) already = true;
        if (already) continue;
        shown.push_back(score.leaderboard_id);
        any_board = true;
        add_board(lines, "Board " + std::to_string(score.leaderboard_id),
                  profile.scores(kernel.title_id(), score.leaderboard_id));
    }

    if (!any_board) {
        // Said plainly rather than left as an empty table, because an empty
        // table and a table that cannot be filled look identical.
        lines.push_back(
            text_line("No scores on this machine yet.", kQuiet, true));
        lines.push_back(
            text_line("This title declares no leaderboard, so it never submits",
                      kDim, true));
        lines.push_back(text_line("a score to the console.", kDim));
    }
    add_footer(lines, "Achievements");
    return lines;
}

void system_blade::refresh(const kernel_state& kernel, uint32_t frame_width,
                           uint32_t frame_height) {
    if (!kernel.system_blade_open()) {
        if (m_built) {
            m_panel.build({}, 0);
            m_built = false;
            m_signature = ~0ull;
        }
        return;
    }
    // A caller that does not know its surface yet - nothing has been presented
    // into it - gets the size the title is rendering at, which is what the
    // window will be opened at and what a capture composites into. A title that
    // has not said either is given the console's own default mode. Resolved
    // before the summary below, so that learning the real size rebuilds the page
    // rather than leaving one sized for a guess.
    if (frame_width == 0 || frame_height == 0) {
        frame_width = kernel.video().front_buffer_width;
        frame_height = kernel.video().front_buffer_height;
    }
    if (frame_width == 0 || frame_height == 0) {
        frame_width = 1280;
        frame_height = 720;
    }
    // Keyed on a cheap summary rather than on the pixels: the page is built from
    // the page number, the scroll, the size of the surface it has to fit and
    // what is in the store, so nothing else can change it.
    const uint64_t now =
        (static_cast<uint64_t>(kernel.system_blade_page()) << 48) ^
        (static_cast<uint64_t>(kernel.system_blade_scroll()) << 32) ^
        (static_cast<uint64_t>(
             kernel.profile().unlock_count(kernel.title_id())) << 16) ^
        static_cast<uint64_t>(kernel.profile().scores(kernel.title_id()).size()) ^
        (static_cast<uint64_t>(frame_width) << 24) ^
        (static_cast<uint64_t>(frame_height) << 8);
    if (m_built && now == m_signature) return;
    const bool fitted = m_panel.build_to_fit(
        kernel.system_blade_page() == kernel_state::blade_page_scores
            ? build_scores_page(kernel)
            : build_achievements_page(kernel),
        kBladeColumns, frame_width, frame_height);
    m_built = !m_panel.empty();
    m_signature = now;
    // A page bigger than the frame is not drawn, and silence there reads exactly
    // like a handler that never fired - which cost a round here once already.
    if (m_built && !fitted)
        std::printf(
            "  [blade] page is %ux%u and does not fit a %ux%u frame; not "
            "drawn\n",
            m_panel.width(), m_panel.height(), frame_width, frame_height);
}

bool system_blade::consume_input(kernel_state& kernel, gamepad_state& pad) {
    if (!kernel.system_blade_open()) {
        m_last_buttons = pad.buttons;
        return false;
    }
    // Edges, not levels: the pad is polled several times a frame, and a held
    // button must read as one press.
    const uint16_t pressed = static_cast<uint16_t>(pad.buttons & ~m_last_buttons);
    m_last_buttons = pad.buttons;
    if (pressed & (pad_button::b | pad_button::back))
        kernel.close_system_blade();
    else if (pressed & (pad_button::x | pad_button::left_shoulder |
                        pad_button::right_shoulder))
        kernel.set_system_blade_page((kernel.system_blade_page() + 1) %
                                     kernel_state::blade_page_count);
    pad = gamepad_state{};
    pad.connected = true;
    return true;
}

} // namespace whitty_xenon
