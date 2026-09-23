// present_panes.h - how the finished frame is laid out in the surface it is
// presented into.
//
// Normally that is one pane covering the whole surface, because the window is
// opened at the title's own resolution and the two are the same size. Where
// they are not - fullscreen, or a window the player has dragged - the frame is
// fitted into the pane rather than stretched, at a whole-number scale where
// that is the better picture. Twin ("dual output") mode instead divides the
// surface
// down the middle into two side-by-side panes, both showing the SAME finished
// frame, so a second player watching an ultrawide - or two monitors spanned as
// one desktop - has a screen area of their own. That is what GW2's local
// multiplayer is: one console, one image, two people looking at it.
//
// The arithmetic lives here, apart from the presenting backend, because it is
// the part that can be silently wrong. A pane one pixel off still presents; a
// stretched pane still shows the game; a gutter computed from the wrong
// dimension still looks plausible in a screenshot. None of that shows up as a
// failure, so it is tested instead.
//
// The geometry matches WhittyArcade's own dual-output mode
// (src/arcade_renderer.cpp, whitty_window::twin_layout) rather than inventing a
// second one: a gutter proportional to the width with a floor, a frame margin
// proportional to the smaller pane dimension with a floor and a ceiling, and
// each pane letterboxing the frame independently at its true aspect. Two
// products that split a screen the same way should split it identically.
#pragma once

#include <cstdint>
#include <cstdlib>

namespace whitty_xenon::gpu {

// A rectangle of the presented surface, in surface pixels.
struct present_pane {
    int32_t x{0};
    int32_t y{0};
    int32_t width{0};
    int32_t height{0};
};

// The border - the screen around the picture, painted as a frame instead of
// left as a void.
//
// FULLSCREEN IS WHAT THIS IS FOR, and the space it uses is space the layout
// already leaves. A fullscreen surface is the display's shape and the picture
// is the title's, magnified by a whole number, so there is screen left over by
// construction: on a 5120x1440 display a 720p title is presented 2:1 as
// 2560x1440 with 1280 pixels free either side, and a 1080p title 1:1 with 1600
// free either side and 180 above and below. That leftover used not to be
// written at all - a swapchain image comes back with undefined contents, so it
// held whatever was there - and it is the border now.
//
// THE PICTURE IS NEVER MOVED OR RESIZED TO MAKE ROOM. That is not a
// preference, it is the one thing that would break: taking the border out of
// the surface BEFORE the fit was tried, which is the obvious implementation,
// turns Space Giraffe's exact 2:1 into 1.9:1 (2432x1368) on this display - a
// fractional magnification, which is the resampling the rest of this file
// exists to avoid. Measured, not reasoned about. So the fit is computed
// against the whole surface, and the border is only what is left over
// afterwards.
//
// The consequence, stated because it is asymmetric and someone will notice: an
// axis the picture already fills exactly gets no border on that axis. A 720p
// title at 2:1 fills 1440 exactly, so its border is the two side panels and
// nothing above or below. Making it symmetric would mean dropping to 1:1 - a
// quarter of the picture area - which is a far worse trade than an uneven
// frame.
//
// A WINDOW has no leftover at all, because it is opened at the picture's own
// size. WHITTY_BORDER=<n> grows the window by n pixels on every side to create
// some; the picture still keeps its size and its 1:1 presentation, because the
// window grew rather than the picture shrinking.
//
// Nothing about a capture goes through here - WHITTY_FRAME_PPM is written from
// the rendered frame, before any of this - so a picture in a file is the
// title's own pixels at the title's own size, bordered or not.
//
// Flat colour today. The region it fills is a rectangle of the swapchain image
// that the presenting backend already knows how to copy an image into - that is
// how the credit and the system page get there - so cabinet artwork in this
// space later is a different source for the same geometry, not a different
// design.
constexpr float kBorderColour[3] = {0.20f, 0.20f, 0.22f};

// Whether the screen around the picture is painted as a border. WHITTY_BORDER=0
// turns it off and the surround goes back to black; anything else, including
// the variable being absent, leaves it on. Read once, because the credit is
// placed when the swapchain is built and the two must agree.
inline bool border_enabled_by_environment() {
    static const bool wanted = [] {
        const char* value = std::getenv("WHITTY_BORDER");
        return value == nullptr || value[0] != '0';
    }();
    return wanted;
}

// How many pixels to grow a WINDOW by on each side so that a windowed run has
// a surround to put a border in. Zero unless WHITTY_BORDER names a number,
// because the border is wanted in fullscreen and a window that grew by itself
// would be a surprise. `WHITTY_BORDER=0` is off, not a padding of zero with the
// border still on - border_enabled_by_environment() reads the same variable.
inline uint32_t border_window_padding() {
    static const uint32_t pad = [] {
        const char* value = std::getenv("WHITTY_BORDER");
        if (value == nullptr || value[0] == '\0') return 0L;
        char* end = nullptr;
        const long parsed = std::strtol(value, &end, 10);
        if (end == value || parsed < 0) return 0L;
        return parsed;
    }();
    return pad;
}

// The largest rectangle of the frame's own shape that fits in `box`, centred in
// it. The comparison is a cross product so this stays integer: a floating-point
// ratio would round differently for two panes and leave the pair mismatched.
inline present_pane letterbox_in(const present_pane& box, uint32_t source_width,
                                 uint32_t source_height) {
    int32_t width = box.width;
    int32_t height = box.height;
    const int64_t wide = static_cast<int64_t>(box.width) * source_height;
    const int64_t tall = static_cast<int64_t>(box.height) * source_width;
    if (wide > tall)
        width = static_cast<int32_t>(tall / source_height);
    else
        height = static_cast<int32_t>(wide / source_width);
    if (width < 1) width = 1;
    if (height < 1) height = 1;
    return present_pane{box.x + (box.width - width) / 2,
                        box.y + (box.height - height) / 2, width, height};
}

// Where the frame goes inside a pane that is not its own size - which is what a
// mode change makes of every pane, since a fullscreen surface is the display's
// size and the frame is the title's.
//
// The rule is not the same in both directions, because the two directions do
// not cost the same thing.
//
// MAGNIFYING never discards a source pixel; it only softens the edges between
// them. So a whole-number magnification is preferred but not insisted on: 2:1
// into a 2560x1440 screen is exact and obviously right, whereas refusing a
// 1.5:1 into a 1920x1080 screen would leave a 720p title as a small window in
// the middle of a fullscreen display for the sake of an edge nobody can see at
// that size. The whole factor wins when it reaches three quarters of the
// letterbox's size - close enough that the extra area is not worth the
// resampling, and far enough that a genuinely bigger picture still wins.
//
// REDUCING is the case that measurably destroys the picture: the blit takes two
// samples per axis however far it has to go, so a fractional reduction drops
// most of the detail above the new limit - two thirds of it, measured on GW2's
// title text. So a reduction is always by a WHOLE number, exactly as
// fit_window_to_display() below argues at length for the window's own size, and
// the letterbox covers what is left over.
inline present_pane fit_frame_in_pane(const present_pane& pane,
                                      uint32_t source_width,
                                      uint32_t source_height) {
    if (pane.width <= 0 || pane.height <= 0 || source_width == 0 ||
        source_height == 0)
        return pane;
    const present_pane letterbox = letterbox_in(pane, source_width,
                                                source_height);
    const int32_t source_w = static_cast<int32_t>(source_width);
    const int32_t source_h = static_cast<int32_t>(source_height);
    const auto centred = [&](int32_t width, int32_t height) {
        return present_pane{pane.x + (pane.width - width) / 2,
                            pane.y + (pane.height - height) / 2, width, height};
    };

    if (letterbox.width >= source_w && letterbox.height >= source_h) {
        // Magnifying. The whole factor is how many times the frame fits.
        const int32_t factor = letterbox.width / source_w < letterbox.height /
                                                                source_h
                                   ? letterbox.width / source_w
                                   : letterbox.height / source_h;
        const int32_t whole_width = source_w * factor;
        // Three quarters, compared without division so an odd size does not
        // round the threshold away.
        if (whole_width * 4 >= letterbox.width * 3)
            return centred(whole_width, source_h * factor);
        return letterbox;
    }
    // Reducing. The smallest whole factor that fits, capped where
    // fit_window_to_display caps it - past a quarter the picture is gone
    // anyway, and the letterbox then covers the rest.
    for (int32_t factor = 2; factor <= 4; ++factor)
        if (source_w / factor <= letterbox.width &&
            source_h / factor <= letterbox.height)
            return centred(source_w / factor, source_h / factor);
    return letterbox;
}

// Where the finished frame goes. Writes 1 or 2 panes into `out` and returns how
// many, so a caller loops over the answer rather than branching on the mode.
//
// `twin` false gives exactly one pane. When the surface is the frame's own size
// - which is the ordinary windowed case, because the window is opened at the
// title's resolution - that pane is the whole surface and the frame is
// presented one pixel to one pixel, exactly as before. When it is not, which is
// what fullscreen and a user-dragged window edge make of it, the frame is fitted
// by fit_frame_in_pane() above rather than stretched: a mode change must not be
// a way to silently acquire a fractional scale, and a stretched pane on a
// display of a different shape is the wrong picture as well as a soft one.
//
// `twin` true gives two panes with a gutter between them, each holding the frame
// at its true aspect - WhittyArcade's own split, kept identical to it rather
// than given the whole-number preference above, because a twin pane is already
// far from the frame's size and rounding it down to a whole factor would throw
// away a quarter of a screen somebody is watching. A surface too narrow to
// divide falls back to one pane: two panes a few pixels wide would be worse
// than one usable screen, and reporting the split anyway would leave the caller
// blitting into nothing.
// The border takes NO parameter here, deliberately. It is whatever this
// function leaves over, painted rather than left black - see kBorderColour for
// the measurement that settled it. Insetting the surface first, so the border
// had a thickness of its own, cost the picture its whole-number magnification.
// `fill` true abandons the whole-number preference and gives the picture the
// whole letterbox - every pixel of screen its aspect can reach.
//
// It exists because the cabinet can be TAKEN DOWN at runtime, with R3. The
// whole-number rule above is the right one while there is a cabinet, since the
// screen it leaves over is the cabinet rather than waste; with the cabinet
// gone that same rule leaves a 1920x1080 picture floating in the middle of a
// 5120x1440 display with nothing around it, which is not a choice anybody
// would make on purpose. So the leftover follows the surround: there is
// leftover when something is drawn in it, and none when there is not.
// A PLAIN BORDER: pixels of flat margin on all four sides, inside which the
// picture is fitted.
//
// This replaced a reservation that kept room at the SIDES for cabinet artwork.
// The artwork is not drawn on a handheld any more, and what is wanted there is
// simply that the picture is not flush to the bezel - so the margin is equal on
// all four sides and the picture takes as much of what is left as its aspect
// allows.
//
// The fit inside the margin is the LETTERBOX, not the whole-number rule the
// unbordered path uses, and that is the point rather than an oversight: a
// whole-number fit inside a small margin lands on the next factor down and
// leaves a margin several times the one that was asked for. A border asked for
// in centimetres has to come out in centimetres.
//
// Note what the geometry can and cannot give. A 16:9 picture inside a 16:9
// panel inset equally on all sides cannot touch the left and right margins -
// the inset room is wider than 16:9, so height is the limit and the side
// margins come out larger than the top and bottom ones. That is arithmetic,
// not a layout bug.
constexpr int32_t kNoBorder = 0;

inline int layout_present_panes(uint32_t surface_width, uint32_t surface_height,
                                uint32_t source_width, uint32_t source_height,
                                bool twin, present_pane out[2],
                                bool fill = false,
                                int32_t plain_border = kNoBorder,
                                int32_t max_picture_width = 0) {
    const int32_t surface_w = static_cast<int32_t>(surface_width);
    const int32_t surface_h = static_cast<int32_t>(surface_height);
    out[0] = present_pane{0, 0, surface_w, surface_h};
    out[1] = present_pane{};
    if (surface_w <= 0 || surface_h <= 0 || source_width == 0 ||
        source_height == 0)
        return 1;
    if (!twin) {
        // The reservation is ignored when the surround is hidden - the whole
        // point of hiding it is to give the screen back - and when it would
        // leave too little for a picture.
        if (plain_border > 0 && surface_w - plain_border * 2 >= surface_w / 3 &&
            surface_h - plain_border * 2 >= surface_h / 3) {
            const present_pane room{plain_border, plain_border,
                                    surface_w - plain_border * 2,
                                    surface_h - plain_border * 2};
            out[0] = letterbox_in(room, source_width, source_height);
        } else {
            out[0] = fill ? letterbox_in(out[0], source_width, source_height)
                          : fit_frame_in_pane(out[0], source_width,
                                              source_height);
        }
        // The cap, applied last and only downward.
        //
        // Deliberately AFTER the whole-number fit rather than folded into it:
        // the fit answers "the largest this can honestly be" and the cap
        // answers "but no larger than this", and keeping them apart means a
        // title with no cap is laid out exactly as it was before this existed.
        // The reduction it forces is fractional and does soften the picture -
        // see the note on fit_frame_in_pane - which is why nothing sets it by
        // default and why it is a per-title choice.
        if (max_picture_width > 0 && out[0].width > max_picture_width) {
            const int32_t width = max_picture_width;
            const int32_t height = static_cast<int32_t>(
                (static_cast<int64_t>(width) * source_height) / source_width);
            out[0] = present_pane{(surface_w - width) / 2,
                                  (surface_h - height) / 2, width,
                                  height > 0 ? height : 1};
        }
        return 1;
    }

    // The gutter, so the two screens never touch. Proportional to the width
    // with a floor, as WhittyArcade's fullscreen split does: max(width/40, 24).
    const int32_t gutter = surface_w / 40 > 24 ? surface_w / 40 : 24;
    // A surface that cannot hold two panes either side of the gutter stays
    // single. 160 pixels is WhittyArcade's own floor for a pane.
    constexpr int32_t kMinimumPaneWidth = 160;
    if (surface_w - gutter < kMinimumPaneWidth * 2) return 1;
    const int32_t left_width = (surface_w - gutter) / 2;
    const present_pane halves[2] = {
        {0, 0, left_width, surface_h},
        {left_width + gutter, 0, surface_w - left_width - gutter, surface_h},
    };

    for (int i = 0; i < 2; ++i) {
        const present_pane& half = halves[i];
        // A margin inside each pane, so a player's picture has an edge rather
        // than running into the gutter and the screen border. Proportional to
        // the pane's smaller dimension, clamped, as WhittyArcade's is.
        const int32_t smaller =
            half.width < half.height ? half.width : half.height;
        int32_t margin = smaller / 32;
        if (margin < 12) margin = 12;
        if (margin > 30) margin = 30;
        int32_t content_w = half.width - margin * 2;
        int32_t content_h = half.height - margin * 2;
        if (content_w < 1) content_w = 1;
        if (content_h < 1) content_h = 1;
        const int32_t content_x = half.x + margin;
        const int32_t content_y = half.y + margin;

        // Letterbox the frame inside the content box at its true aspect, and
        // centre it - the same arithmetic the single pane starts from, so the
        // two cannot drift apart.
        out[i] = letterbox_in(
            present_pane{content_x, content_y, content_w, content_h},
            source_width, source_height);
    }
    return 2;
}

// The size a window is opened at, and by what whole-number factor the frame was
// reduced to reach it. A `reduction` of 1 is a frame presented one pixel to one
// pixel.
struct window_fit {
    uint32_t width{0};
    uint32_t height{0};
    uint32_t reduction{1};
};

// How big to open the window, given the size the title renders at and the area
// of the desktop a window can occupy.
//
// The answer is normally the frame's own size. A window the size of the frame
// gives a swapchain the size of the frame, and the finished frame is then
// presented 1:1 rather than resampled into a surface of some other shape. That
// matters because a blit takes two samples per axis however far it has to
// reduce: a fractional reduction - GW2's 1920x1080 into the 1280x720 window this
// used to open unconditionally is 1.5:1 - discards most of the detail above the
// new limit, which is exactly the fine strokes of a font. Measured on GW2's
// title text, two thirds of it.
//
// A frame larger than the desktop cannot have a window its own size: that window
// opens with its edges off-screen, and there is then no title bar to drag it
// back by. So it is reduced by a WHOLE number where it has to be. 2:1 is the
// good case and the common one - the blit's two taps per axis land exactly on
// the average of the four source pixels, which is the filter a correct downscale
// would have used anyway. Beyond that a whole factor is only the better of two
// bad options: 3:1 and 4:1 still leave source pixels unsampled, but on a regular
// grid, whereas a fractional reduction beats against the pixel grid and turns
// even edges into an uneven one. Where even the largest factor tried does not
// fit, that factor stands and the filtered blit covers the remainder: that is
// the case the filter is there for.
//
// A `usable_width` or `usable_height` of zero means the desktop's size is not
// known, and the frame's own size is used unreduced - an unknown screen is not a
// reason to shrink the picture. A frame size of zero is not a size, and is
// returned unchanged for the caller to recognise.
inline window_fit fit_window_to_display(uint32_t frame_width,
                                        uint32_t frame_height,
                                        uint32_t usable_width,
                                        uint32_t usable_height) {
    window_fit fit{frame_width, frame_height, 1};
    if (frame_width == 0 || frame_height == 0) return fit;
    if (usable_width == 0 || usable_height == 0) return fit;
    // Four is as far as this goes: a quarter of the smallest mode the console
    // has is already a 320x240 window, and anything that does not fit by then is
    // a desktop no window was going to be usable on.
    constexpr uint32_t kMaximumReduction = 4;
    for (uint32_t factor = 1; factor <= kMaximumReduction; ++factor) {
        const uint32_t width = frame_width / factor;
        const uint32_t height = frame_height / factor;
        if (width == 0 || height == 0) break;
        fit = window_fit{width, height, factor};
        if (width <= usable_width && height <= usable_height) break;
    }
    return fit;
}

// How much of the window padding a desktop can actually spare, given a window
// already sized at `window_width`x`window_height` for the picture.
//
// The padding is added OUTSIDE the picture, so a desktop with no room left for
// it has to give something up - and the thing to give up is the border, never
// the picture. Shrinking the picture to make room for its own frame would trade
// the 1:1 presentation for decoration, which is backwards. So this returns as
// much of `wanted` as fits and nothing more; a desktop whose size is not known
// (a zero) is not a reason to drop it.
inline uint32_t border_that_fits(uint32_t wanted, uint32_t window_width,
                                 uint32_t window_height, uint32_t usable_width,
                                 uint32_t usable_height) {
    if (usable_width == 0 || usable_height == 0) return wanted;
    const uint32_t spare_width =
        usable_width > window_width ? (usable_width - window_width) / 2 : 0;
    const uint32_t spare_height =
        usable_height > window_height ? (usable_height - window_height) / 2 : 0;
    const uint32_t spare =
        spare_width < spare_height ? spare_width : spare_height;
    return wanted < spare ? wanted : spare;
}

// WHITTY_TWIN=1 turns the split on; anything else, including the variable being
// absent, leaves the surface single. Read once - the swapchain's credit is
// placed per pane when it is built, so this cannot change mid-run without the
// credit and the panes disagreeing.
inline bool twin_panes_enabled_by_environment() {
    static const bool wanted = [] {
        const char* value = std::getenv("WHITTY_TWIN");
        return value != nullptr && value[0] == '1';
    }();
    return wanted;
}

} // namespace whitty_xenon::gpu
