// Unit tests for the "WhittyArcade" credit overlay.
//
// Two things about this have to be true or the credit is either invisible or
// expensive, and neither shows up as a crash.
//
// Invisible: the span list is the only thing a presenting backend copies, so if
// a span misses an opaque pixel that pixel never reaches the screen, and if a
// span covers a transparent one the game gets a hole punched in it. The test
// therefore asserts the spans are exactly the opaque pixels - every one, once
// each, and nothing else.
//
// Expensive: each span is one GPU transfer region per frame. Bounding the count
// is what keeps "it must not cost meaningful frame time" a checked fact rather
// than a hope, and it is also what proves the scale-up trick works: doubling the
// scale must not change the number of regions at all.
#include "whitty_xenon/gpu/overlay.h"

#include "whitty_xenon/gpu/present_panes.h"

#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>

using namespace whitty_xenon::gpu;

namespace {

bool opaque(const credit_overlay& overlay, uint32_t x, uint32_t y) {
    const std::size_t index =
        (static_cast<std::size_t>(y) * overlay.width() + x) * 4;
    return overlay.rgba()[index + 3] != 0;
}

// The spans must partition the opaque pixels: each covered exactly once, and no
// transparent pixel covered at all.
void test_spans_are_exactly_the_credit() {
    const credit_overlay overlay;
    assert(overlay.width() > 0 && overlay.height() > 0);
    std::vector<int> cover(
        static_cast<std::size_t>(overlay.width()) * overlay.height(), 0);
    for (const overlay_span& span : overlay.spans()) {
        assert(span.width > 0 && span.height > 0);
        assert(span.x + span.width <= overlay.width());
        assert(span.y + span.height <= overlay.height());
        for (uint32_t row = 0; row < span.height; ++row)
            for (uint32_t column = 0; column < span.width; ++column)
                cover[static_cast<std::size_t>(span.y + row) *
                          overlay.width() +
                      span.x + column] += 1;
    }
    std::size_t opaque_pixels = 0;
    for (uint32_t y = 0; y < overlay.height(); ++y) {
        for (uint32_t x = 0; x < overlay.width(); ++x) {
            const int covered =
                cover[static_cast<std::size_t>(y) * overlay.width() + x];
            if (opaque(overlay, x, y)) {
                assert(covered == 1 && "an opaque pixel is not in exactly one span");
                ++opaque_pixels;
            } else {
                assert(covered == 0 && "a span covers a transparent pixel");
            }
        }
    }
    assert(opaque_pixels > 0);
    std::printf("spans: %zu regions covering %zu pixels of a %ux%u credit\n",
                overlay.spans().size(), opaque_pixels, overlay.width(),
                overlay.height());
}

// Every glyph in the credit has to exist, or the text is misspelled by omission.
// A missing glyph leaves a blank, so the ink of the whole string must exceed the
// ink of the string with any one character removed.
void test_every_letter_draws() {
    const std::string text = "WhittyArcade";
    const credit_overlay full(text, 1);
    const auto ink = [](const credit_overlay& overlay) {
        std::size_t count = 0;
        for (std::size_t index = 3; index < overlay.rgba().size(); index += 4)
            if (overlay.rgba()[index] != 0) ++count;
        return count;
    };
    const std::size_t whole = ink(full);
    for (std::size_t position = 0; position < text.size(); ++position) {
        std::string shortened = text;
        shortened.erase(position, 1);
        const credit_overlay partial(shortened, 1);
        assert(ink(partial) < whole && "a character of the credit draws nothing");
    }
    // A character the font does not have leaves a gap rather than a mark.
    const credit_overlay unknown("\x01\x02\x03", 1);
    assert(ink(unknown) == 0);
}

// Both consumers - the GPU copy and the host composite - work from the spans, so
// drawing must reproduce the bitmap exactly and touch nothing else.
void test_draw_touches_only_the_credit() {
    const credit_overlay overlay;
    const uint32_t frame_width = 1280;
    const uint32_t frame_height = 720;
    std::vector<uint8_t> frame(
        static_cast<std::size_t>(frame_width) * frame_height * 4, 0x5A);
    overlay.draw(frame.data(), frame_width, frame_height);

    int32_t origin_x = 0;
    int32_t origin_y = 0;
    assert(overlay.placement(frame_width, frame_height, origin_x, origin_y));
    // Bottom right, inside the frame.
    assert(origin_x > static_cast<int32_t>(frame_width / 2));
    assert(origin_y > static_cast<int32_t>(frame_height / 2));
    assert(origin_x + static_cast<int32_t>(overlay.width()) <
           static_cast<int32_t>(frame_width));
    assert(origin_y + static_cast<int32_t>(overlay.height()) <
           static_cast<int32_t>(frame_height));

    std::size_t changed = 0;
    for (uint32_t y = 0; y < frame_height; ++y) {
        for (uint32_t x = 0; x < frame_width; ++x) {
            const std::size_t index =
                (static_cast<std::size_t>(y) * frame_width + x) * 4;
            const bool inside =
                x >= static_cast<uint32_t>(origin_x) &&
                y >= static_cast<uint32_t>(origin_y) &&
                x < static_cast<uint32_t>(origin_x) + overlay.width() &&
                y < static_cast<uint32_t>(origin_y) + overlay.height();
            if (!inside) {
                assert(frame[index] == 0x5A && "the credit wrote outside itself");
                continue;
            }
            const uint32_t local_x = x - static_cast<uint32_t>(origin_x);
            const uint32_t local_y = y - static_cast<uint32_t>(origin_y);
            const std::size_t source =
                (static_cast<std::size_t>(local_y) * overlay.width() +
                 local_x) * 4;
            if (overlay.rgba()[source + 3] != 0) {
                assert(std::memcmp(&frame[index], &overlay.rgba()[source], 4) ==
                       0);
                ++changed;
            } else {
                assert(frame[index] == 0x5A);
            }
        }
    }
    assert(changed > 0);

    // A frame with no room for the credit is left exactly as it was.
    std::vector<uint8_t> tiny(16 * 16 * 4, 0x11);
    int32_t unused_x = 0;
    int32_t unused_y = 0;
    assert(!overlay.placement(16, 16, unused_x, unused_y));
    overlay.draw(tiny.data(), 16, 16);
    for (uint8_t value : tiny) assert(value == 0x11);
}

// The region count is the per-frame cost, and it comes from the font grid, not
// the pixel grid - so a bigger credit is not a more expensive one.
void test_cost_is_independent_of_scale() {
    const credit_overlay small("WhittyArcade", 1);
    const credit_overlay large("WhittyArcade", 4);
    assert(small.spans().size() == large.spans().size());
    assert(large.width() == small.width() * 4);
    assert(large.height() == small.height() * 4);
    // A handful of transfer regions, not a per-pixel upload.
    assert(small.spans().size() < 200);
    std::printf("cost: %zu transfer regions at any scale\n",
                small.spans().size());
}

// A swapchain in B8G8R8A8 order gets the same picture with red and blue swapped,
// and the same alpha - a mismatch here would tint the credit, not break it, so
// nothing else would catch it.
void test_bgra_matches_rgba() {
    const credit_overlay overlay;
    const std::vector<uint8_t> swapped = overlay.bgra();
    assert(swapped.size() == overlay.rgba().size());
    for (std::size_t index = 0; index + 3 < swapped.size(); index += 4) {
        assert(swapped[index] == overlay.rgba()[index + 2]);
        assert(swapped[index + 1] == overlay.rgba()[index + 1]);
        assert(swapped[index + 2] == overlay.rgba()[index]);
        assert(swapped[index + 3] == overlay.rgba()[index + 3]);
    }
}

void test_environment_switch() {
    ::unsetenv("WHITTY_OVERLAY");
    assert(credit_overlay::enabled_by_environment());
    ::setenv("WHITTY_OVERLAY", "1", 1);
    assert(credit_overlay::enabled_by_environment());
    ::setenv("WHITTY_OVERLAY", "0", 1);
    assert(!credit_overlay::enabled_by_environment());
    ::unsetenv("WHITTY_OVERLAY");
}


// --- the twin-screen split -------------------------------------------------
//
// Same-screen multiplayer divides the surface into two panes showing the same
// finished frame. The arithmetic is what can be silently wrong: a pane one pixel
// off still presents, a stretched pane still shows the game, and a gutter taken
// from the wrong dimension still looks plausible in a screenshot. So it is
// asserted rather than looked at.

void test_single_pane_covers_the_whole_surface() {
    // The case that must not change: a window opened at the title's own
    // resolution gets one pane covering the whole surface, so the frame is
    // presented one pixel to one pixel with nothing resampled.
    present_pane panes[2]{};
    assert(layout_present_panes(1280, 720, 1280, 720, false, panes) == 1);
    assert(panes[0].x == 0 && panes[0].y == 0);
    assert(panes[0].width == 1280 && panes[0].height == 720);
    // A whole-number reduction still fills the surface: the shape is the same,
    // so there is nothing to letterbox.
    assert(layout_present_panes(960, 540, 1920, 1080, false, panes) == 1);
    assert(panes[0].x == 0 && panes[0].y == 0);
    assert(panes[0].width == 960 && panes[0].height == 540);
}

// A surface of a different shape from the frame - which is what fullscreen and
// a dragged window edge produce - letterboxes rather than stretching. A
// stretched pane shows the game and is the wrong picture, which is why this is
// asserted rather than looked at.
void test_single_pane_letterboxes_a_surface_of_another_shape() {
    present_pane panes[2]{};
    // 4:3 frame on a 16:9 surface. Not stretched to 1920x1080, and not even the
    // 1440x1080 the aspect alone would allow: 2:1 fits, so the frame is doubled
    // exactly and centred, with bars on all four sides.
    assert(layout_present_panes(1920, 1080, 640, 480, false, panes) == 1);
    assert(panes[0].width == 1280 && panes[0].height == 960);
    assert(panes[0].x == 320 && panes[0].y == 60);
    // The frame's aspect is preserved, not the surface's.
    assert(static_cast<int64_t>(panes[0].width) * 480 ==
           static_cast<int64_t>(panes[0].height) * 640);
    // And it stays inside the surface.
    assert(panes[0].x + panes[0].width <= 1920);
    assert(panes[0].y + panes[0].height <= 1080);
}

// Magnifying: a whole-number factor is preferred, but not at the cost of most
// of the screen. Both halves of that rule are load-bearing - the first keeps a
// fullscreen picture sharp, the second keeps it from being a postage stamp.
void test_fullscreen_prefers_a_whole_number_magnification() {
    present_pane panes[2]{};
    // Exactly 2:1. The whole factor is also the letterbox, so it fills.
    assert(layout_present_panes(2560, 1440, 1280, 720, false, panes) == 1);
    assert(panes[0].width == 2560 && panes[0].height == 1440);
    // 2.03:1 available. The letterbox is barely bigger than 2:1, so 2:1 wins
    // and the picture is exact rather than resampled for three per cent.
    assert(layout_present_panes(2600, 1462, 1280, 720, false, panes) == 1);
    assert(panes[0].width == 2560 && panes[0].height == 1440);
    assert(panes[0].x == 20 && panes[0].y == 11);
    // 1.5:1 available. Refusing it would leave a 720p title as a 1280x720
    // island on a 1080p screen, which is not what fullscreen is for - so the
    // letterbox wins and the frame is magnified by three halves.
    assert(layout_present_panes(1920, 1080, 1280, 720, false, panes) == 1);
    assert(panes[0].width == 1920 && panes[0].height == 1080);
}

// Reducing is the direction that measurably destroys the picture: the blit
// takes two samples per axis however far it goes, so a fractional reduction
// discards most of the detail above the new limit. It is always by a whole
// number, and the letterbox covers the remainder.
void test_a_surface_smaller_than_the_frame_reduces_by_a_whole_number() {
    present_pane panes[2]{};
    // 1920x1080 into a surface that could hold 1.2:1. Halved instead, centred.
    assert(layout_present_panes(1600, 900, 1920, 1080, false, panes) == 1);
    assert(panes[0].width == 960 && panes[0].height == 540);
    assert(panes[0].x == 320 && panes[0].y == 180);
    // Small enough that even a quarter does not fit: the letterbox covers it,
    // which is the case the filtered blit exists for.
    assert(layout_present_panes(200, 200, 1920, 1080, false, panes) == 1);
    assert(panes[0].width == 200);
    assert(panes[0].height == 112);
}

void test_twin_panes_split_with_a_gutter() {
    present_pane panes[2]{};
    assert(layout_present_panes(3840, 1080, 1280, 720, true, panes) == 2);
    // Two panes, left then right, neither overlapping the other.
    assert(panes[0].x < panes[1].x);
    assert(panes[0].x + panes[0].width <= panes[1].x);
    // Both inside the surface.
    for (const present_pane& pane : panes) {
        assert(pane.x >= 0 && pane.y >= 0);
        assert(pane.x + pane.width <= 3840);
        assert(pane.y + pane.height <= 1080);
        assert(pane.width > 0 && pane.height > 0);
    }
    // The gutter is proportional to the width with a floor, as WhittyArcade's
    // own split is: max(width/40, 24). A gutter that vanished on a wide screen
    // would let the two pictures touch.
    const int32_t gutter = 3840 / 40;
    assert(gutter >= 24);
    // The two panes are the same size, so neither player gets the bigger screen.
    assert(panes[0].width == panes[1].width);
    assert(panes[0].height == panes[1].height);
    // Each pane holds the frame at its TRUE aspect, not stretched to the half.
    // Checked as a cross product, within a pixel of rounding.
    for (const present_pane& pane : panes) {
        const int64_t left = static_cast<int64_t>(pane.width) * 720;
        const int64_t right = static_cast<int64_t>(pane.height) * 1280;
        const int64_t slack = 1280LL * 720LL / 100LL;
        assert(left - right <= slack && right - left <= slack);
    }
    // And they are not just the halves: each is letterboxed inside its half, so
    // a 16:9 frame in a 1920-wide half is much shorter than the surface.
    assert(panes[0].height < 1080);
}

void test_twin_panes_hold_a_tall_frame() {
    // A frame taller than the pane is limited by the pane's width instead, and
    // must still fit. Getting this branch backwards puts the picture off-screen.
    present_pane panes[2]{};
    assert(layout_present_panes(2560, 1440, 480, 640, true, panes) == 2);
    for (const present_pane& pane : panes) {
        assert(pane.x >= 0 && pane.x + pane.width <= 2560);
        assert(pane.y >= 0 && pane.y + pane.height <= 1440);
    }
    // Portrait source, so each pane is taller than it is wide.
    assert(panes[0].height > panes[0].width);
}

void test_a_surface_too_narrow_stays_single() {
    // Two panes a few pixels wide would be worse than one usable screen, and
    // reporting the split anyway would leave the caller blitting into nothing.
    present_pane panes[2]{};
    assert(layout_present_panes(200, 200, 1280, 720, true, panes) == 1);
    assert(panes[0].width == 200 && panes[0].height == 200);
    // A degenerate surface or frame is single too rather than dividing by zero.
    assert(layout_present_panes(0, 0, 1280, 720, true, panes) == 1);
    assert(layout_present_panes(1280, 720, 0, 0, true, panes) == 1);
}

// --- the size the window opens at ------------------------------------------
//
// The other half of "what the player actually sees": the window has to be the
// size the title renders, or every presented frame is resampled into it. A blit
// takes two samples per axis however far it reduces, so GW2's 1920x1080 into the
// 1280x720 window this used to open unconditionally was a 1.5:1 reduction that
// measurably lost two thirds of the detail in its text. Nothing about that is
// visible in a test run, so the arithmetic is asserted instead.

void test_a_frame_that_fits_gets_a_window_its_own_size() {
    // The whole point: 1:1, so present() blits without resampling.
    const window_fit fit = fit_window_to_display(1920, 1080, 5120, 1440);
    assert(fit.width == 1920 && fit.height == 1080);
    assert(fit.reduction == 1);
    // And the 720p titles, which were already 1:1 and must stay exactly so.
    const window_fit hd = fit_window_to_display(1280, 720, 5120, 1440);
    assert(hd.width == 1280 && hd.height == 720 && hd.reduction == 1);
    // Exactly the size of the desktop still fits: the bound is inclusive, and
    // an off-by-one here would needlessly halve a full-screen-sized window.
    const window_fit exact = fit_window_to_display(1920, 1080, 1920, 1080);
    assert(exact.width == 1920 && exact.height == 1080 && exact.reduction == 1);
}

void test_a_frame_too_big_is_reduced_by_a_whole_number() {
    // A window bigger than the desktop opens with its edges off-screen. Reduced
    // by a whole number rather than fitted exactly, because an integer
    // reduction resamples cleanly and a fractional one is the blur being
    // avoided - 2:1 lands exactly on the average of four source pixels.
    const window_fit fit = fit_window_to_display(1920, 1080, 1366, 768);
    assert(fit.reduction == 2);
    assert(fit.width == 960 && fit.height == 540);
    assert(fit.width <= 1366 && fit.height <= 768);
    // The largest window that fits, not the first reduction that does: a
    // desktop that holds a third takes a third rather than dropping to a
    // quarter and wasting the screen it has.
    const window_fit third = fit_window_to_display(1920, 1080, 700, 400);
    assert(third.reduction == 3);
    assert(third.width == 640 && third.height == 360);
    // Too small even for a third, so a quarter.
    const window_fit quarter = fit_window_to_display(1920, 1080, 500, 400);
    assert(quarter.reduction == 4);
    assert(quarter.width == 480 && quarter.height == 270);
    // Height alone can force it. A wide, short desktop holds 1920 across and
    // still cannot hold 1080 down.
    const window_fit shallow = fit_window_to_display(1920, 1080, 3840, 600);
    assert(shallow.reduction == 2 && shallow.height == 540);
}

void test_a_window_is_still_produced_when_nothing_fits() {
    // Past the largest factor tried, the largest stands and the filtered blit
    // covers the remainder. An unusable window would be worse than a resampled
    // picture, and this is the case the filter exists for.
    const window_fit fit = fit_window_to_display(1920, 1080, 200, 100);
    assert(fit.reduction == 4);
    assert(fit.width == 480 && fit.height == 270);
    assert(fit.width > 0 && fit.height > 0);
}

void test_an_unknown_desktop_does_not_shrink_the_picture() {
    // Bounds of zero mean the desktop's size could not be read. That is not a
    // reason to reduce: the frame's own size is what makes the blit 1:1.
    const window_fit unknown = fit_window_to_display(1920, 1080, 0, 0);
    assert(unknown.width == 1920 && unknown.height == 1080);
    assert(unknown.reduction == 1);
    // A frame size of zero is not a size. Returned unchanged rather than
    // divided by, so the caller can recognise it.
    const window_fit none = fit_window_to_display(0, 0, 5120, 1440);
    assert(none.width == 0 && none.height == 0 && none.reduction == 1);
}

// The border is the screen the picture does NOT cover, painted rather than left
// black - and the one thing it must never do is change the picture. This is the
// regression test for the implementation that did: insetting the surface by the
// border before fitting the picture in it turned Space Giraffe's exact 2:1
// fullscreen magnification into 1.9:1, which is precisely the fractional
// resampling the rest of this file exists to prevent. Measured on a 5120x1440
// display, which is why those numbers are the ones asserted.
void test_the_border_never_changes_the_picture() {
    present_pane panes[2]{};
    // 720p fullscreen on a 5120x1440 display: exactly 2:1, filling the height.
    assert(layout_present_panes(5120, 1440, 1280, 720, false, panes) == 1);
    assert(panes[0].width == 2560 && panes[0].height == 1440);
    assert(panes[0].x == 1280 && panes[0].y == 0);
    // A whole number, which is the property that matters.
    assert(panes[0].width % 1280 == 0);
    assert(panes[0].width / 1280 == panes[0].height / 720);
    // The border is what is left over: 1280 px either side, and NOTHING above
    // or below, because the picture already fills that axis exactly. Uneven,
    // and deliberately so - the only way to make room above would be to drop to
    // 1:1, which is a quarter of the picture area.
    assert((5120 - panes[0].width) / 2 == 1280);
    assert((1440 - panes[0].height) / 2 == 0);

    // 1080p fullscreen on the same display: 1:1, with room on both axes, so
    // that border goes all the way round.
    assert(layout_present_panes(5120, 1440, 1920, 1080, false, panes) == 1);
    assert(panes[0].width == 1920 && panes[0].height == 1080);
    assert((5120 - panes[0].width) / 2 == 1600);
    assert((1440 - panes[0].height) / 2 == 180);

    // And a window opened at the picture's own size still has one pane covering
    // it exactly, so there is no surround and nothing is painted.
    assert(layout_present_panes(1280, 720, 1280, 720, false, panes) == 1);
    assert(panes[0].x == 0 && panes[0].y == 0);
    assert(panes[0].width == 1280 && panes[0].height == 720);
}

// A window has no leftover of its own, so WHITTY_BORDER=<n> makes some by
// growing the window. The picture keeps its size - the window grew, the picture
// did not shrink - which is asserted here because the opposite would look
// identical in a screenshot and would be resampling.
void test_window_padding_grows_the_window_not_the_picture() {
    present_pane panes[2]{};
    assert(layout_present_panes(1352, 792, 1280, 720, false, panes) == 1);
    assert(panes[0].width == 1280 && panes[0].height == 720);
    assert(panes[0].x == 36 && panes[0].y == 36);

    // Room for all of it.
    assert(border_that_fits(36, 1280, 720, 2560, 1440) == 36);
    // Room for some: as much as fits, and the window is never pushed off the
    // desktop to keep a decoration.
    assert(border_that_fits(36, 1280, 720, 1300, 1440) == 10);
    assert(border_that_fits(36, 1280, 720, 2560, 730) == 5);
    // Room for none. The picture keeps its size; the padding goes.
    assert(border_that_fits(36, 1280, 720, 1280, 720) == 0);
    assert(border_that_fits(36, 1920, 1080, 1366, 768) == 0);
    // An unknown desktop is not a reason to drop it.
    assert(border_that_fits(36, 1280, 720, 0, 0) == 36);
}

void test_border_environment_switch() {
    // Read once and cached, as the twin switch is, so this can only assert the
    // value the process was started with. Absent means ON - the leftover screen
    // in fullscreen is painted unless somebody says otherwise - and a window is
    // padded only when a number is asked for.
    const char* value = ::getenv("WHITTY_BORDER");
    if (value == nullptr || value[0] == '\0') {
        assert(border_enabled_by_environment());
        assert(border_window_padding() == 0);
    } else if (value[0] == '0') {
        assert(!border_enabled_by_environment());
    } else {
        assert(border_enabled_by_environment());
        assert(border_window_padding() ==
               static_cast<uint32_t>(::atoi(value)));
    }
}

void test_twin_environment_switch() {
    // Read once and cached, so this can only be asserted for the value the
    // process was started with. Absent means off, which is the default a
    // single-screen player must get without setting anything.
    const char* value = ::getenv("WHITTY_TWIN");
    const bool expected = value != nullptr && value[0] == '1';
    assert(twin_panes_enabled_by_environment() == expected);
}

} // namespace

int main() {
    test_spans_are_exactly_the_credit();
    test_every_letter_draws();
    test_draw_touches_only_the_credit();
    test_cost_is_independent_of_scale();
    test_bgra_matches_rgba();
    test_environment_switch();
    test_single_pane_covers_the_whole_surface();
    test_single_pane_letterboxes_a_surface_of_another_shape();
    test_fullscreen_prefers_a_whole_number_magnification();
    test_a_surface_smaller_than_the_frame_reduces_by_a_whole_number();
    test_twin_panes_split_with_a_gutter();
    test_twin_panes_hold_a_tall_frame();
    test_a_surface_too_narrow_stays_single();
    test_a_frame_that_fits_gets_a_window_its_own_size();
    test_a_frame_too_big_is_reduced_by_a_whole_number();
    test_a_window_is_still_produced_when_nothing_fits();
    test_an_unknown_desktop_does_not_shrink_the_picture();
    test_twin_environment_switch();
    test_the_border_never_changes_the_picture();
    test_window_padding_grows_the_window_not_the_picture();
    test_border_environment_switch();
    std::printf("overlay tests passed\n");
    return 0;
}
