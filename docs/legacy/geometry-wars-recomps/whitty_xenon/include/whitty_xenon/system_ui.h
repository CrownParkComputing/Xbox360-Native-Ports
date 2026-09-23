// system_ui.h - the screens the SYSTEM owns rather than the title.
//
// Some of a game's menu entries do not lead to anything the game draws. Select
// Achievements in Geometry Wars and it calls XamShowAchievementsUI and renders
// nothing further: on a console the dashboard takes the whole screen over. It
// does not import an achievement enumerator at all, so there is no title-side
// list to feed - measured, both from its import table and at runtime. Xenia
// answers that call by drawing the list itself. So does this.
//
// This is therefore NOT a substitute for a title's own screen. It is the screen
// the title asked the system for, and its content is the running title's own
// achievement metadata joined against local storage - nothing invented.
//
// It lives in the shared layer rather than in the per-title harness so that
// every host gets the same pages: whatever presents frames only has to hand the
// panel's pixels to its own compositor and let the blade see the controller.
#pragma once

#include "whitty_xenon/gpu/text_panel.h"
#include "whitty_xenon/input.h"

#include <cstdint>
#include <string>
#include <vector>

namespace whitty_xenon {

class kernel_state;

// The pages, as lines of text. Exposed for testing: what a page says is worth
// asserting on directly, without going through a bitmap.
std::vector<gpu::panel_line> build_achievements_page(const kernel_state& kernel);
std::vector<gpu::panel_line> build_scores_page(const kernel_state& kernel);

// How wide a page is, in characters. Fixed so the panel does not resize as its
// contents change, and 80 because that is what the longest thing on either page
// needs: an achievement description indented under its name.
inline constexpr uint32_t kBladeColumns = 80;

class system_blade {
public:
    // Rebuilds the page when what it shows has changed, and takes it down when
    // the blade is closed. Cheap to call every frame: it compares a summary of
    // what the page is built from, so a page held open costs nothing.
    //
    // `frame_width` and `frame_height` are the SURFACE the page will be
    // composited into, in pixels - not a fixed 720p, and not the guest's idea of
    // its own resolution. The page is copied into that surface one pixel to one
    // pixel, so its size is chosen from these: too big and the copy is dropped
    // whole and the player sees nothing at all.
    //
    // Call this from whichever thread presents, not from the guest thread that
    // opened the blade - building a page walks the achievement list and the
    // store, and doing that inside a kernel call would put it on whatever thread
    // happened to make the call.
    void refresh(const kernel_state& kernel, uint32_t frame_width,
                 uint32_t frame_height);

    // The pixels to composite. Empty when no page is up.
    const gpu::text_panel& panel() const noexcept { return m_panel; }

    // The guide owns the controller while it is showing, exactly as a console's
    // does: a button pressed to close the blade must not also act on the menu
    // behind it. Returns true when the pad was taken over, and in that case
    // `pad` has been cleared before the title ever sees it.
    bool consume_input(kernel_state& kernel, gamepad_state& pad);

private:
    gpu::text_panel m_panel{1};
    bool m_built{false};
    uint64_t m_signature{~0ull};
    uint16_t m_last_buttons{0};
};

} // namespace whitty_xenon
