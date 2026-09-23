// Unit tests for the system blade's text page.
//
// The one thing here that will silently look like a corrupt font rather than a
// bug is the glyph bit order: the font stores row 0 as the TOP row of the glyph
// and bit 7 as its LEFTMOST pixel, so reading either the other way round
// mirrors every character. Both are checked against glyphs whose shape is
// asymmetric in that axis - 'L' top to bottom, 'F' left to right - by reading
// pixels out of the bitmap, not by asking the panel what it drew.
//
// The other thing worth pinning is the size the page is built at. The page is
// copied into the surface one pixel to one pixel, and a copy that runs off the
// edge is dropped whole - so a page that does not fit is a page nobody sees,
// which looks exactly like a blade that never opened.
#include "whitty_xenon/gpu/text_panel.h"

#include <cassert>
#include <cstdio>
#include <string>
#include <vector>

using namespace whitty_xenon::gpu;

namespace {

constexpr uint32_t kPad = text_panel::kPadding;
constexpr uint32_t kCellWidth = text_panel::kGlyphWidth;
constexpr uint32_t kCellHeight = text_panel::kGlyphHeight;

// True when the pixel at (x, y) of the bitmap is not the plaque background.
bool inked(const text_panel& panel, uint32_t x, uint32_t y) {
    const std::vector<uint8_t>& rgba = panel.rgba();
    const std::size_t at =
        (static_cast<std::size_t>(y) * panel.width() + x) * 4;
    assert(at + 3 < rgba.size());
    // The ink asked for below is pure white; the plaque is near-black and the
    // border is green, so "red is high" identifies ink and nothing else.
    return rgba[at + 0] > 0xC0 && rgba[at + 1] > 0xC0 && rgba[at + 2] > 0xC0;
}

// The glyph's ink as a picture, one string a row, for asserting on a shape
// rather than on individual coordinates.
std::vector<std::string> glyph_picture(const text_panel& panel) {
    std::vector<std::string> rows;
    for (uint32_t y = 0; y < kCellHeight; ++y) {
        std::string row;
        for (uint32_t x = 0; x < kCellWidth; ++x)
            row.push_back(inked(panel, kPad + x, kPad + y) ? '#' : '.');
        rows.push_back(row);
    }
    return rows;
}

void test_glyph_is_the_right_way_up_and_round() {
    // Scale 1 so bitmap pixels are font pixels, and one character so the pen
    // starts at a known place: the padding.
    text_panel panel(1);
    panel.build({{"L", 0xFF, 0xFF, 0xFF, false}}, 1);
    assert(!panel.empty());
    const std::vector<std::string> ell = glyph_picture(panel);
    // 'L' is a stem down the left with a foot along the bottom. The foot is on
    // the LAST inked row and the stem runs above it; upside down, the foot
    // would be the first.
    uint32_t first = kCellHeight;
    uint32_t last = 0;
    for (uint32_t y = 0; y < kCellHeight; ++y) {
        if (ell[y].find('#') == std::string::npos) continue;
        if (first == kCellHeight) first = y;
        last = y;
    }
    assert(first < last);
    // The top of the stem inks the left of the cell and nothing to the right of
    // it; the foot at the bottom reaches across. Upside down, the two swap.
    assert(ell[first][0] == '#' && ell[first][kCellWidth - 3] == '.');
    assert(ell[last][kCellWidth - 3] == '#');

    // 'F' is a stem down the left with arms to the right, so its ink is
    // left-heavy. Mirrored, the stem would be on the right.
    text_panel eff(1);
    eff.build({{"F", 0xFF, 0xFF, 0xFF, false}}, 1);
    const std::vector<std::string> picture = glyph_picture(eff);
    uint32_t left = 0;
    uint32_t right = 0;
    for (const std::string& row : picture) {
        for (uint32_t x = 0; x < kCellWidth; ++x) {
            if (row[x] != '#') continue;
            if (x < kCellWidth / 2) ++left;
            else ++right;
        }
    }
    assert(left > right);
    std::printf("  a glyph is drawn the right way up and the right way round\n");
}

void test_the_font_has_real_lowercase() {
    // The whole point of replacing the 3x5 diagnostic font: an achievement is
    // called "Multitastic", not "MULTITASTIC". A font without lowercase folded
    // them, so the two panels below would have been identical.
    text_panel upper(1);
    upper.build({{"L", 0xFF, 0xFF, 0xFF, false}}, 1);
    text_panel lower(1);
    lower.build({{"l", 0xFF, 0xFF, 0xFF, false}}, 1);
    assert(upper.rgba() != lower.rgba());
    // And a descender reaches below the baseline the capitals sit on: 'y' inks
    // rows that 'v' does not.
    text_panel wye(1);
    wye.build({{"y", 0xFF, 0xFF, 0xFF, false}}, 1);
    text_panel vee(1);
    vee.build({{"v", 0xFF, 0xFF, 0xFF, false}}, 1);
    uint32_t wye_last = 0;
    uint32_t vee_last = 0;
    for (uint32_t y = 0; y < kCellHeight; ++y) {
        for (uint32_t x = 0; x < kCellWidth; ++x) {
            if (inked(wye, kPad + x, kPad + y)) wye_last = y;
            if (inked(vee, kPad + x, kPad + y)) vee_last = y;
        }
    }
    assert(wye_last > vee_last);
    std::printf("  the font has real lowercase with descenders\n");
}

void test_scale_multiplies_every_pixel() {
    text_panel panel(3);
    panel.build({{"L", 0xFF, 0xFF, 0xFF, false}}, 1);
    // 'L' has a blank top row and its stem starts one row down, two pixels
    // wide. Find the first inked row at scale 1 and check the same pixel is a
    // 3x3 block at scale 3.
    text_panel single(1);
    single.build({{"L", 0xFF, 0xFF, 0xFF, false}}, 1);
    uint32_t row = 0;
    while (row < kCellHeight && !inked(single, kPad, kPad + row)) ++row;
    assert(row < kCellHeight);
    for (uint32_t y = 0; y < 3; ++y)
        for (uint32_t x = 0; x < 3; ++x)
            assert(inked(panel, (kPad + 0) * 3 + x, (kPad + row) * 3 + y));
    // And the row above the stem is empty at every one of its three pixels.
    if (row > 0)
        for (uint32_t x = 0; x < 3; ++x)
            assert(!inked(panel, (kPad + 0) * 3 + x, (kPad + row - 1) * 3));
    std::printf("  scale multiplies each font pixel into a block\n");
}

void test_an_unknown_character_still_advances() {
    // A byte the font does not draw - a UTF-8 continuation out of a title's own
    // string table, say - leaves its cell blank but still advances, so the
    // characters after it stay in the columns the layout put them in.
    text_panel spaced(1);
    spaced.build({{"\xC2L", 0xFF, 0xFF, 0xFF, false}}, 2);
    text_panel plain(1);
    plain.build({{" L", 0xFF, 0xFF, 0xFF, false}}, 2);
    assert(spaced.rgba() == plain.rgba());
    std::printf("  an unknown character draws nothing and still advances\n");
}

void test_geometry_and_placement() {
    text_panel panel(2);
    // Two lines, the second after a gap.
    panel.build({{"AB", 0xFF, 0xFF, 0xFF, false},
                 {"CD", 0xFF, 0xFF, 0xFF, true}},
                8);
    // Width: eight cells plus the padding either side.
    assert(panel.width() == (8 * kCellWidth + kPad * 2) * 2);
    // Height: two line advances, plus half a one for the gap, plus the padding.
    assert(panel.height() ==
           (kCellHeight * 2 + kCellHeight / 2 + kPad * 2) * 2);
    // One span, covering the whole opaque plaque.
    assert(panel.spans().size() == 1);
    assert(panel.spans()[0].width == panel.width());
    assert(panel.spans()[0].height == panel.height());

    int32_t x = -1;
    int32_t y = -1;
    assert(panel.placement(1280, 720, x, y));
    assert(x == static_cast<int32_t>((1280 - panel.width()) / 2));
    assert(y == static_cast<int32_t>((720 - panel.height()) / 2));
    // A frame too small refuses rather than clipping, because a page drawn
    // half-off the screen is worse than one that reports it does not fit.
    assert(!panel.placement(panel.width() - 1, 720, x, y));
    assert(!panel.placement(1280, panel.height() - 1, x, y));
    std::printf("  the page is sized and centred as laid out\n");
}

void test_the_page_is_sized_for_the_surface() {
    // A 720p frame gets the font at its drawn size; a 1080p one gets it at
    // double, so the page keeps its share of the screen instead of shrinking
    // into the corner of a bigger frame.
    assert(text_panel::scale_for(720) == 1);
    assert(text_panel::scale_for(1080) == 2);
    assert(text_panel::scale_for(480) == 1);
    assert(text_panel::scale_for(2160) == 3);

    std::vector<panel_line> page;
    for (int i = 0; i < 30; ++i)
        page.push_back({"a page of thirty lines", 0xFF, 0xFF, 0xFF, false});

    text_panel small(1);
    assert(small.build_to_fit(page, 80, 1280, 720));
    assert(small.scale() == 1);
    assert(small.width() <= 1280 && small.height() <= 720);

    text_panel large(1);
    assert(large.build_to_fit(page, 80, 1920, 1080));
    assert(large.scale() == 2);
    assert(large.width() <= 1920 && large.height() <= 1080);

    // A surface that cannot hold the page at the scale it asked for gets a
    // smaller one rather than nothing at all: 1080p wants scale 2, and thirty
    // lines at scale 2 are 960 rows, which does not fit a 1080-wide window that
    // is only 700 tall.
    text_panel squeezed(1);
    assert(squeezed.build_to_fit(page, 80, 1920, 700));
    assert(squeezed.scale() == 1);
    assert(squeezed.height() <= 700);

    // Too narrow for eighty columns: the columns are clipped so the page still
    // fits the width, rather than being built too wide to copy.
    text_panel narrow(1);
    assert(narrow.build_to_fit(page, 80, 400, 720));
    assert(narrow.width() <= 400);
    std::printf("  a page is built at the size the surface can take\n");
}

void test_empty_page_draws_nothing() {
    text_panel panel(1);
    panel.build({}, 64);
    assert(panel.empty());
    assert(panel.spans().empty());
    int32_t x = 0;
    int32_t y = 0;
    assert(!panel.placement(1280, 720, x, y));
    // Compositing an unbuilt page must leave the frame alone.
    std::vector<uint8_t> frame(64 * 64 * 4, 0x11);
    const std::vector<uint8_t> before = frame;
    panel.draw(frame.data(), 64, 64);
    assert(frame == before);
    std::printf("  an unbuilt page draws nothing\n");
}

void test_draw_lands_where_placement_says() {
    text_panel panel(1);
    panel.build({{"L", 0xFF, 0xFF, 0xFF, false}}, 1);
    const uint32_t frame_width = 128;
    const uint32_t frame_height = 128;
    std::vector<uint8_t> frame(
        static_cast<std::size_t>(frame_width) * frame_height * 4, 0);
    int32_t x = 0;
    int32_t y = 0;
    assert(panel.placement(frame_width, frame_height, x, y));
    panel.draw(frame.data(), frame_width, frame_height);
    // The panel's top-left pixel is now at (x, y) in the frame, and the pixel
    // just outside it is untouched.
    const std::size_t inside =
        (static_cast<std::size_t>(y) * frame_width + x) * 4;
    assert(frame[inside + 3] == 0xFF);
    if (y > 0) {
        const std::size_t above =
            (static_cast<std::size_t>(y - 1) * frame_width + x) * 4;
        assert(frame[above + 3] == 0);
    }
    std::printf("  a drawn page lands where placement said it would\n");
}

} // namespace

int main() {
    std::printf("text_panel_test\n");
    test_glyph_is_the_right_way_up_and_round();
    test_the_font_has_real_lowercase();
    test_scale_multiplies_every_pixel();
    test_an_unknown_character_still_advances();
    test_geometry_and_placement();
    test_the_page_is_sized_for_the_surface();
    test_empty_page_draws_nothing();
    test_draw_lands_where_placement_says();
    std::printf("text_panel_test: ok\n");
    return 0;
}
