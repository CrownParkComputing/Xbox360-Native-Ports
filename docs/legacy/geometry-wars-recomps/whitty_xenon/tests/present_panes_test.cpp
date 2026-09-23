// present_panes_test - where the picture goes, with the cabinet and without it.
//
// The one case this exists for is the R3 toggle. With the cabinet up the
// picture is magnified by a WHOLE number and the screen it leaves over is the
// cabinet; with the cabinet down that same rule would leave the picture
// floating in the middle of the display with nothing around it. So the
// leftover has to follow the surround, and this pins both halves of that -
// including the one case where the two answers are the SAME, which is the one
// a reader is most likely to assume is broken.
//
#include "whitty_xenon/gpu/present_panes.h"

#include <cstdio>
#include <cstdlib>

// Not assert(): a release build defines NDEBUG and deletes every one of them,
// and a test that cannot fail is worse than no test because it reports a pass.
#define CHECK(condition)                                                       \
    do {                                                                       \
        if (!(condition)) {                                                    \
            std::fprintf(stderr, "%s:%d: FAILED: %s\n", __FILE__, __LINE__,    \
                         #condition);                                          \
            std::abort();                                                      \
        }                                                                      \
    } while (0)

using namespace whitty_xenon::gpu;

namespace {

present_pane single(uint32_t surface_w, uint32_t surface_h, uint32_t frame_w,
                    uint32_t frame_h, bool fill, int32_t reserved_side = 0,
                    int32_t cap = 0) {
    present_pane out[2]{};
    const int count = layout_present_panes(surface_w, surface_h, frame_w,
                                           frame_h, false, out, fill,
                                           reserved_side, cap);
    CHECK(count == 1);
    return out[0];
}

// Geometry Wars 2 renders at 1080p. On the 5120x1440 display it fits twice
// over in width and not at all in height, so the whole factor is 1 and the
// cabinet gets 1600 pixels a side and 180 top and bottom. That is the layout
// the surround is drawn for.
void gw2_with_the_cabinet_up_is_presented_one_to_one() {
    const present_pane p = single(5120, 1440, 1920, 1080, false);
    CHECK(p.width == 1920 && p.height == 1080);
    CHECK(p.x == 1600 && p.y == 180);
    std::printf("  1080p with the cabinet: %dx%d at %d,%d\n", p.width, p.height,
                p.x, p.y);
}

// With the cabinet down it takes the display's full height. 1440 is every row
// the screen has; the 1280 pixels still left at each side are what a 16:9
// picture cannot reach on a 32:9 display without being stretched, and
// stretching it is the one thing this layout will not do.
void gw2_with_the_cabinet_down_fills_the_height() {
    const present_pane p = single(5120, 1440, 1920, 1080, true);
    CHECK(p.height == 1440);
    CHECK(p.width == 2560);
    CHECK(p.x == 1280 && p.y == 0);
    std::printf("  1080p with it hidden:   %dx%d at %d,%d\n", p.width, p.height,
                p.x, p.y);
}

// Geometry Wars 1 and 3 render at 720p, which magnifies 2:1 to exactly the
// display's height. The whole-number rule already reaches the top and bottom,
// so hiding the cabinet cannot make the picture any bigger and must not make
// it any different. A toggle that moved this picture would be a bug.
void a_720p_picture_is_already_as_large_as_it_can_be() {
    const present_pane up = single(5120, 1440, 1280, 720, false);
    const present_pane down = single(5120, 1440, 1280, 720, true);
    CHECK(up.width == 2560 && up.height == 1440);
    CHECK(down.width == up.width && down.height == up.height);
    CHECK(down.x == up.x && down.y == up.y);
    std::printf("  720p, both ways:        %dx%d at %d,%d\n", up.width,
                up.height, up.x, up.y);
}

// A window opened at the title's own size has no leftover to argue about, and
// neither answer may introduce one.
void a_window_at_the_frames_own_size_is_untouched_either_way() {
    const present_pane up = single(1920, 1080, 1920, 1080, false);
    const present_pane down = single(1920, 1080, 1920, 1080, true);
    CHECK(up.x == 0 && up.y == 0 && up.width == 1920 && up.height == 1080);
    CHECK(down.x == 0 && down.y == 0 && down.width == 1920 &&
          down.height == 1080);
    std::printf("  a 1:1 window:           unchanged by the toggle\n");
}

// A HANDHELD, which gets a plain margin and no artwork.
//
// One centimetre on this panel's 319 dpi is 126 pixels. A 16:9 picture inside a
// 16:9 panel inset equally on all four sides is limited by HEIGHT - the inset
// room is wider than 16:9 - so the top and bottom margins come out at exactly
// what was asked for and the sides come out larger. That is arithmetic and is
// asserted rather than treated as a defect.
void a_handheld_gets_the_margin_it_asked_for_top_and_bottom() {
    const present_pane p = single(1920, 1080, 1280, 720, false, 126);
    CHECK(p.y == 126);
    CHECK(p.y + p.height == 1080 - 126);
    CHECK(p.x > 126);            // wider, because 16:9 cannot reach the sides
    CHECK(p.width * 9 == p.height * 16);
    std::printf("  720p, 1 cm margin:      %dx%d at %d,%d\n", p.width,
                p.height, p.x, p.y);
}

// AND THE SAME SIZE WHATEVER THE TITLE RENDERS AT. Two titles of the same shape
// in the same margin come out identical, which is the thing a person looking at
// both of them notices. The unbordered path could not do this: it gave a 720p
// title 1280 wide and a 1080p title 960.
void two_titles_of_the_same_shape_come_out_identical() {
    const present_pane low = single(1920, 1080, 1280, 720, false, 126);
    const present_pane high = single(1920, 1080, 1920, 1080, false, 126);
    CHECK(low.width == high.width && low.height == high.height);
    CHECK(low.x == high.x && low.y == high.y);
    std::printf("  720p and 1080p agree:   %dx%d at %d,%d\n", low.width,
                low.height, low.x, low.y);
}

// A margin that would leave almost nothing is refused rather than honoured.
void an_absurd_margin_is_refused() {
    const present_pane p = single(1920, 1080, 1280, 720, false, 900);
    CHECK(p.width > 1920 / 3);
    std::printf("  an absurd margin is ignored, not obeyed\n");
}

// THE CAP, which makes two titles that render at different resolutions come out
// the same size in the same cabinet.
//
// Geometry Wars 3 renders at 720p and Geometry Wars 2 at 1080p, so on the same
// handheld the honest fit gives one a 1280-wide picture and the other 960. The
// cap is how the smaller of those is imposed on both. It reduces fractionally
// and therefore softens - which is why it is off by default and set per title.
void a_capped_picture_matches_a_title_that_renders_larger() {
    const present_pane uncapped = single(1920, 1080, 1280, 720, false, 126);
    const present_pane capped = single(1920, 1080, 1280, 720, false, 126, 960);
    CHECK(uncapped.width > 960);
    CHECK(capped.width == 960 && capped.height == 540);
    std::printf("  capped to 960: %dx%d at %d,%d\n", capped.width,
                capped.height, capped.x, capped.y);
}

// The cap only ever reduces. A cap wider than the picture is not an
// instruction to magnify it.
void a_cap_wider_than_the_picture_changes_nothing() {
    const present_pane plain = single(1920, 1080, 1280, 720, false, 126);
    const present_pane roomy = single(1920, 1080, 1280, 720, false, 126, 1800);
    CHECK(roomy.width == plain.width && roomy.height == plain.height);
    CHECK(roomy.x == plain.x && roomy.y == plain.y);
    std::printf("  a cap above the fit is ignored\n");
}

} // namespace

int main() {
    std::printf("present panes\n");
    gw2_with_the_cabinet_up_is_presented_one_to_one();
    gw2_with_the_cabinet_down_fills_the_height();
    a_720p_picture_is_already_as_large_as_it_can_be();
    a_window_at_the_frames_own_size_is_untouched_either_way();
    a_handheld_gets_the_margin_it_asked_for_top_and_bottom();
    two_titles_of_the_same_shape_come_out_identical();
    an_absurd_margin_is_refused();
    a_capped_picture_matches_a_title_that_renders_larger();
    a_cap_wider_than_the_picture_changes_nothing();
    std::printf("present panes: all checks passed\n");
    return 0;
}
