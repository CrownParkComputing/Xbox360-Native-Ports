// cabinet.h - the arcade surround: what goes in the screen the picture does
// not cover.
//
// A fullscreen surface is the display's shape and the picture is the title's,
// magnified by a whole number, so there is screen left over by construction -
// on Jon's 5120x1440 display that is 1280 pixels either side of Space Giraffe
// and 1600 either side of Geometry Wars 2, which is more area than the game.
// present_panes.h computes that leftover and painted it flat; this paints it as
// a cabinet.
//
// THREE RULES, all of them inherited rather than invented here:
//
//  * The picture is never moved, resized or resampled to make room. This is
//    handed the rectangle fit_frame_in_pane() already chose and paints around
//    it. Nothing in this file can change where the picture goes.
//  * Nothing here reaches a capture. WHITTY_FRAME_PPM is written from the
//    rendered frame at the title's own resolution, before presentation; the
//    surround exists only in the swapchain image. Every pinned frame in the
//    project depends on that staying true.
//  * NOTHING ON THE INFO PANEL IS INVENTED. Every row is either read out of the
//    running title (its SPA, its execution info, the size it renders at) or out
//    of this machine's own profile (achievements earned, the local score
//    table). The one exception is publisher/developer/year, which no container
//    carries, and those live in cabinet_facts.h under their own heading so a
//    reader can always tell the two apart. A title nobody has written an entry
//    for shows no such rows at all.
//
// The artwork is GENERATED - a gradient, some rectangles, some circles and the
// font the system pages already use. There is no image asset, because /home on
// this machine has been at 98% all week and because an 8x16 bitmap font already
// in the tree beats a PNG nobody can regenerate.
#pragma once

#include "whitty_xenon/gpu/present_panes.h"
#include "whitty_xenon/gpu/text_panel.h"

#include <cstdint>
#include <string>
#include <vector>

namespace whitty_xenon::gpu {

// A control on the pad, as a place the legend can point at.
//
// This names the PHYSICAL control, not what it does - what it does is
// per-title and is authored in cabinet_facts.h. The set is exactly what
// sample_pad() in run_title.cpp binds; there is no entry for the Guide button,
// because nothing in the runtime reads it.
enum class pad_control {
    left_stick,
    right_stick,
    dpad,
    a,
    b,
    x,
    y,
    left_shoulder,
    right_shoulder,
    left_trigger,
    right_trigger,
    back,
    start,
};

// What one control does in the running title. `action` is a short verb - "Move",
// "Fire" - and is HAND-AUTHORED: nothing in an XEX, an SPA or an XDBF says what
// a stick is for, so this can only come from a person who has played the game.
// See cabinet_facts.h.
struct cabinet_control {
    pad_control control{pad_control::a};
    std::string action;
};

// One row of the local high-score table, as the panel shows it.
struct cabinet_score {
    std::string board; // the leaderboard's name out of the title's own SPA
    uint64_t score{0};
    std::string who;
};

// Everything the info panel can say, and where each field comes from. A field
// left empty or zero is a field nothing knew, and the panel then has no such
// row - it never prints a placeholder.
struct cabinet_title {
    // The title's own name, out of string 0x8000 of its SPA string table (the
    // id Xenia calls kXdbfIdTitle), in the language the runtime resolved.
    std::string name;
    // From the XEX execution info - the same number title_probe reports.
    uint32_t title_id{0};
    // The size the title actually renders at, from the colour target's pitch
    // and the viewport's y scale. Zero until the first frame with draws in it.
    uint32_t frame_width{0};
    uint32_t frame_height{0};
    // The SPA's achievement table, and this machine's unlocks against it.
    uint32_t achievements{0};
    uint32_t achievements_earned{0};
    uint32_t gamerscore{0};
    uint32_t gamerscore_earned{0};
    // The leaderboards the title's own SPA declares (XVC2), by name.
    std::vector<std::string> leaderboards;
    // The local high-score table for this title, highest first.
    std::vector<cabinet_score> scores;

    // --- hand-entered, from cabinet_facts.h --------------------------------
    // Not read from the game. Empty unless somebody typed it in, and shown
    // under a heading that says so.
    std::string publisher;
    std::string developer;
    std::string year;
    // What each control does in THIS title. Empty for every title nobody has
    // authored, and an empty list draws the pad with no labels at all rather
    // than a generic diagram - see cabinet_facts.h for why inference is not an
    // option here.
    std::vector<cabinet_control> controls;
};

// The rows of the info panel. Exposed so a test can assert what it says without
// going near a bitmap - which is the only way to hold the "nothing invented"
// rule to anything.
std::vector<panel_line> build_cabinet_lines(const cabinet_title& title,
                                            uint32_t columns);

// The equaliser's bars, painted into their own small bitmap.
//
// Separate from the surround because it is the one part that changes every
// frame: the surround is uploaded when its content changes and copied
// thereafter, and this is re-uploaded each present. `levels` and `peaks` are
// `bands` values in 0..1 from audio_spectrum::sample(). `live` false - a title
// that has not started its mixer - draws the empty scale and says so, rather
// than drawing flat bars that look like silence.
void draw_spectrum_meter(std::vector<uint8_t>& rgba, uint32_t width,
                         uint32_t height, const float* levels,
                         const float* peaks, uint32_t bands, bool live);

class cabinet_surround {
public:
    // WHITTY_SURROUND=0 leaves the flat border of before; WHITTY_BORDER=0 turns
    // the whole surround off along with the border, which is the switch the
    // border already had and the one the brief asked this to answer to.
    static bool enabled_by_environment();

    // How much leftover screen there has to be before a surround is drawn at
    // all, in pixels on the side being painted.
    //
    // This is what keeps a WINDOW unchanged. A window is opened at the
    // picture's own size and has no leftover; WHITTY_BORDER=<n> gives it n
    // pixels a side, which is tens of pixels, not hundreds. Below this there is
    // no room for a marquee or a panel and the flat border is the better
    // picture - so a windowed run never gets one without somebody asking for a
    // border wider than most windows.
    static constexpr int32_t kMinimumSide = 300;

    // Paints the surround for a surface of this size with the picture at
    // `picture`. Returns false - and leaves the bitmap empty - when there is
    // not enough screen around the picture to put anything in, which the caller
    // shows as the flat border.
    bool build(uint32_t surface_width, uint32_t surface_height,
               const present_pane& picture, const cabinet_title& title);

    bool built() const noexcept { return !m_rgba.empty(); }
    uint32_t width() const noexcept { return m_width; }
    uint32_t height() const noexcept { return m_height; }
    // Tightly packed RGBA8 the size of the WHOLE surface. The picture's own
    // rectangle is painted too (with the backdrop) and is simply never copied -
    // that way a coordinate in here is a coordinate in the swapchain image and
    // there is no second frame of reference to get wrong.
    const std::vector<uint8_t>& rgba() const noexcept { return m_rgba; }

    // Where the equaliser goes, in surface pixels. Zero-sized when there was no
    // room for one.
    const present_pane& meter() const noexcept { return m_meter; }

    // A summary of everything the last build was made from. The caller rebuilds
    // when this changes and copies the same bitmap otherwise, so a surround
    // that is not changing costs nothing per frame.
    uint64_t signature() const noexcept { return m_signature; }
    static uint64_t signature_of(uint32_t surface_width,
                                 uint32_t surface_height,
                                 const present_pane& picture,
                                 const cabinet_title& title);

private:
    uint32_t m_width{0};
    uint32_t m_height{0};
    std::vector<uint8_t> m_rgba;
    present_pane m_meter{};
    uint64_t m_signature{0};
};

} // namespace whitty_xenon::gpu
