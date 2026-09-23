#pragma once
// Runtime show/hide for the cabinet surround and the frame-rate readout.
//
// Both used to be decided once, from the environment, into a function-local
// static - which is fine for a bring-up switch and useless on a handheld, where
// the person who wants the surround out of the way is holding a pad and not a
// keyboard. So the environment still chooses the STARTING state and the pad
// changes it from then on.
//
// The bindings match the ReXGlue ports so muscle memory carries between them:
//
//     R3 (right thumb click)  the cabinet surround
//     L3 (left thumb click)   the frame-rate readout
//
// R3 does nothing where surround_toggle_allowed() is false - see below.
//
// Atomic because the pad is sampled on the input thread and these are read by
// the presenting thread; relaxed because nothing else is ordered against them
// and a toggle landing one frame later is not a bug anybody can see.

#include <atomic>
#include <cstdint>

namespace whitty_xenon::gpu {

// Defined in cabinet.cpp. The environment sets the initial value on first use.
std::atomic<bool>& surround_visible() noexcept;
std::atomic<bool>& fps_visible() noexcept;

// How many pixels each side the layout keeps free for the cabinet, and whether
// R3 may take the cabinet away at all.
//
// Both are host properties rather than build-time constants, and they are here
// rather than behind an #ifdef because THREE places need the same answer - the
// layout, the surround and the readout - and three #ifdefs is three chances to
// disagree.
//
// A desktop sets neither: the cabinet lives in whatever a whole-number
// magnification leaves over, and R3 gives that screen back to the picture. A
// handheld sets both: its panel is the same shape as the title, so nothing is
// left over and the cabinet exists only because room is made for it - and a
// toggle that took the cabinet away would then be a toggle that resized the
// picture under the player mid-game, which is not a thing a button should do.
// A flat margin, in pixels, on all four sides of the presented picture, with no
// artwork in it. Zero - the default - leaves the layout's own rules alone.
//
// A desktop sets nothing: its cabinet lives in whatever a whole-number
// magnification leaves over. A handheld sets this instead of a cabinet: there
// is no room on a 16:9 panel for artwork worth reading, and what is actually
// wanted is that the picture is not flush to the bezel.
std::atomic<int32_t>& plain_border() noexcept;
std::atomic<bool>& surround_toggle_allowed() noexcept;

// The widest the picture may be presented, in surface pixels. Zero - the
// default - means the layout's own rules decide and nothing is capped.
//
// This exists because "as large as it can be" is not always what is wanted. Two
// titles on the same handheld can render at different resolutions and therefore
// come out different sizes in the same cabinet, and a person looking at both
// wants them to match. Capping is the only way to make a 720p title the size of
// a 1080p one, and it costs a fractional reduction - which this codebase
// otherwise refuses, for the measured reason in present_panes.h. So it is off
// unless asked for, per title, through WHITTY_PICTURE_WIDTH.
std::atomic<int32_t>& picture_width_cap() noexcept;

// Edge-triggered from a pad sample. Pass the button mask for one port and the
// previous mask for that port; only a press flips anything, so holding the
// stick down does not strobe.
void apply_overlay_toggles(uint16_t buttons, uint16_t previous) noexcept;

}  // namespace whitty_xenon::gpu
