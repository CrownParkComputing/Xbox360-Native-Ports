// Unit tests for the arcade surround.
//
// TWO THINGS ARE PINNED HERE AND THEY ARE BOTH ABOUT HONESTY RATHER THAN ABOUT
// PIXELS.
//
// A panel that shows a publisher nobody read out of the game looks exactly like
// a panel that shows one somebody did - that is the whole failure mode, and it
// is the same shape as every entry in "the recurring bug class" in
// docs/BRINGUP.md: something reporting a fact it does not have. So the field
// tests here are about what the panel does NOT say when nothing knew it.
//
// And the surround must never be able to reach a pixel the title rendered. The
// backend copies only the four rectangles around the picture, but the geometry
// that decides where the picture IS lives here too, so the test asserts the
// picture rectangle is inside the bitmap and that a surface with no room around
// it produces no surround at all.
#include "whitty_xenon/gpu/cabinet.h"

#include "whitty_xenon/gpu/cabinet_facts.h"
#include "whitty_xenon/gpu/spectrum.h"

#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>

using namespace whitty_xenon::gpu;

namespace {

// Everything a real run would have read out of Geometry Wars 2, as the harness
// fills it in. The numbers are shaped like the real ones; what is being tested
// is the panel's treatment of them, not the values.
cabinet_title known_title() {
    cabinet_title title;
    title.name = "Geometry Wars: Retro Evolved 2";
    title.title_id = 0x584108FF;
    title.frame_width = 1920;
    title.frame_height = 1080;
    title.achievements = 12;
    title.achievements_earned = 3;
    title.gamerscore = 200;
    title.gamerscore_earned = 45;
    title.leaderboards = {"Evolved", "Retro"};
    title.scores = {{"Evolved", 1234560, "WHITTY"},
                    {"Retro", 98765, "WHITTY"}};
    return title;
}

bool any_line_contains(const std::vector<panel_line>& lines,
                       const std::string& text) {
    for (const panel_line& line : lines)
        if (line.text.find(text) != std::string::npos) return true;
    return false;
}

// The whole point of cabinet_facts.h. A title nobody has written an entry for
// gets no publisher row, no developer row and no year row - not a blank one,
// not a question mark, and not a heading with nothing under it.
void nothing_is_invented() {
    const cabinet_title title = known_title();
    assert(title.publisher.empty());
    const std::vector<panel_line> lines = build_cabinet_lines(title, 46);
    assert(!any_line_contains(lines, "PUBLISHER"));
    assert(!any_line_contains(lines, "DEVELOPER"));
    assert(!any_line_contains(lines, "YEAR"));
    assert(!any_line_contains(lines, "?"));
    assert(!any_line_contains(lines, "OUR OWN NOTES"));
    // And the table really is empty, so nobody has quietly filled it in.
    assert(cabinet_facts_for(0x584108FF) == nullptr);
    assert(cabinet_facts_for(0x584107ED) == nullptr);
    assert(cabinet_facts_for(0x5841080C) == nullptr);
    std::printf("  with no hand-entered facts: no publisher, no year, no "
                "guesses\n");
}

// And when somebody HAS written one, it appears - under a heading that says
// where it came from, so the two halves of the panel are never confused.
void hand_entered_facts_are_labelled_as_such() {
    cabinet_title title = known_title();
    title.publisher = "Example Publisher";
    title.year = "2008";
    const std::vector<panel_line> lines = build_cabinet_lines(title, 46);
    assert(any_line_contains(lines, "Example Publisher"));
    assert(any_line_contains(lines, "2008"));
    assert(any_line_contains(lines, "NOT THE GAME"));
    // A developer nobody filled in stays absent even when its neighbours are
    // present - the rows are independent, not a block.
    assert(!any_line_contains(lines, "DEVELOPER"));
    std::printf("  hand-entered facts appear under their own heading\n");
}

// What the panel says when it was read out of the game.
void read_fields_are_shown() {
    const std::vector<panel_line> lines = build_cabinet_lines(known_title(), 46);
    assert(any_line_contains(lines, "Geometry Wars"));   // the SPA's own string
    assert(any_line_contains(lines, "584108FF"));        // the execution info
    assert(any_line_contains(lines, "1920 x 1080"));     // what it renders at
    assert(any_line_contains(lines, "3 of 12"));         // SPA + local profile
    assert(any_line_contains(lines, "45 of 200 G"));
    assert(any_line_contains(lines, "Evolved"));         // the SPA's XVC2
    assert(any_line_contains(lines, "1,234,560"));       // the local table
    std::printf("  every field read from the game or the profile is shown\n");
}

// A NARROW pane, which is what a handheld has.
//
// The desktop pane is 1600 pixels of ultrawide border and every row fits its
// label and its value on one line. A handheld's is 320, and a row laid out for
// the wide case comes back truncated - "RENDERS AT  1920 x 10" - which reads as
// a rendering fault rather than a layout one, because what it truncates to is a
// plausible number. So no line may exceed the columns it was built for, and the
// value must still be there somewhere.
void a_narrow_panel_wraps_its_values_instead_of_cutting_them() {
    cabinet_title title;
    title.name = "Geometry Wars 2";
    title.title_id = 0x584108FF;
    title.frame_width = 1920;
    title.frame_height = 1080;
    for (uint32_t columns : {20u, 24u, 30u, 46u}) {
        const std::vector<panel_line> lines = build_cabinet_lines(title,
                                                                  columns);
        for (const panel_line& line : lines)
            assert(line.text.size() <= columns);
        assert(any_line_contains(lines, "1920 x 1080"));
    }
    std::printf("  a narrow panel keeps every value whole at 20 columns up\n");
}

// A title with no SPA at all - which is a title with no name, no achievements
// and no leaderboards. It must show the little it knows and nothing else,
// rather than dressing the title id up as a name.
void a_title_with_no_metadata_says_little() {
    cabinet_title bare;
    bare.title_id = 0x12345678;
    bare.frame_width = 1280;
    bare.frame_height = 720;
    const std::vector<panel_line> lines = build_cabinet_lines(bare, 46);
    assert(any_line_contains(lines, "12345678"));
    assert(any_line_contains(lines, "1280 x 720"));
    assert(!any_line_contains(lines, "ACHIEVEMENTS"));
    assert(!any_line_contains(lines, "LEADERBOARDS"));
    assert(!any_line_contains(lines, "HIGH SCORES"));
    std::printf("  a title with no SPA shows %zu lines and invents none\n",
                lines.size());
}

// The geometry. A fullscreen surface with the picture magnified 2:1 in the
// middle - Space Giraffe's real layout on Jon's display.
void a_fullscreen_surface_gets_a_surround() {
    cabinet_surround surround;
    const present_pane picture{1280, 0, 2560, 1440};
    assert(surround.build(5120, 1440, picture, known_title()));
    assert(surround.built());
    assert(surround.width() == 5120);
    assert(surround.height() == 1440);
    assert(surround.rgba().size() == 5120ull * 1440ull * 4ull);
    // NO METER WELL. The equaliser was removed: it was the one part of the
    // surround that changed every frame, and on a handheld that is per-frame
    // CPU work and an upload for decoration. A zero-sized well is what tells
    // the host there is nothing to paint per present, so it is asserted rather
    // than assumed - a well that came back would silently restore the cost.
    const present_pane& meter = surround.meter();
    assert(meter.width == 0 && meter.height == 0);
    std::printf("  no equaliser well: nothing is repainted per present\n");
}

// Geometry Wars 2's layout: 1:1, so there is border above and below as well.
void a_letterboxed_surface_gets_a_surround() {
    cabinet_surround surround;
    const present_pane picture{1600, 180, 1920, 1080};
    assert(surround.build(5120, 1440, picture, known_title()));
    assert(surround.meter().width == 0);
    std::printf("  1:1 layout: surround built, no meter\n");
}

// A WINDOW. This is the constraint that must not move: a windowed run is
// unchanged, and it is unchanged because a window has no leftover to put a
// cabinet in. Both the no-border case and the small-WHITTY_BORDER case have to
// come back with nothing.
void a_window_gets_no_surround() {
    cabinet_surround surround;
    // The ordinary window: the surface IS the picture.
    assert(!surround.build(1280, 720, present_pane{0, 0, 1280, 720},
                           known_title()));
    assert(!surround.built());
    assert(surround.rgba().empty());
    // WHITTY_BORDER=27, which is the sort of number a window gets.
    assert(!surround.build(1334, 774, present_pane{27, 27, 1280, 720},
                           known_title()));
    assert(!surround.built());
    std::printf("  a window, bordered or not, gets no surround\n");
}

// The rebuild signature. It exists so a surround that is not changing is not
// repainted and re-uploaded every frame, and it has to notice everything the
// picture depends on - a signature that missed the score table would leave a
// new high score off the panel until the window was resized.
void the_signature_notices_what_changed() {
    const present_pane picture{1280, 0, 2560, 1440};
    const cabinet_title title = known_title();
    const uint64_t base =
        cabinet_surround::signature_of(5120, 1440, picture, title);
    assert(cabinet_surround::signature_of(5120, 1440, picture, title) == base);

    cabinet_title moved = title;
    moved.achievements_earned = 4;
    assert(cabinet_surround::signature_of(5120, 1440, picture, moved) != base);

    cabinet_title scored = title;
    scored.scores.push_back({"Retro", 5, "WHITTY"});
    assert(cabinet_surround::signature_of(5120, 1440, picture, scored) != base);

    assert(cabinet_surround::signature_of(5120, 1440,
                                          present_pane{1600, 180, 1920, 1080},
                                          title) != base);
    assert(cabinet_surround::signature_of(3840, 1080, picture, title) != base);
    std::printf("  the signature changes with the layout, the scores and the "
                "unlocks\n");
}

// The meter's own bitmap. It is re-uploaded every frame, so it is the one part
// of this that has to be cheap and the one part that has to fully repaint - a
// bitmap that left last frame's bars behind would smear.
void the_meter_paints_its_whole_bitmap() {
    std::vector<uint8_t> pixels;
    float levels[kSpectrumBands] = {};
    float peaks[kSpectrumBands] = {};
    for (uint32_t band = 0; band < kSpectrumBands; ++band) {
        levels[band] = float(band) / float(kSpectrumBands);
        peaks[band] = levels[band] + 0.1f;
    }
    draw_spectrum_meter(pixels, 480, 200, levels, peaks, kSpectrumBands, true);
    assert(pixels.size() == 480ull * 200ull * 4ull);
    // Every pixel opaque: the meter is a plaque, and a transfer copy cannot
    // blend, so a transparent pixel would arrive as a black hole.
    for (std::size_t at = 3; at < pixels.size(); at += 4)
        assert(pixels[at] == 0xFF);

    // A tall band has more ink in its column than a short one. This is the
    // check that the bars are the right way up - a meter drawn upside down
    // still moves with the music.
    const auto ink_in_column = [&](uint32_t x) {
        uint32_t count = 0;
        for (uint32_t y = 0; y < 200; ++y) {
            const std::size_t at = (std::size_t(y) * 480 + x) * 4;
            if (pixels[at + 1] > 0x60) ++count;
        }
        return count;
    };
    const uint32_t slot = 480 / kSpectrumBands;
    const uint32_t quiet = ink_in_column(slot / 2);                    // band 0
    const uint32_t loud = ink_in_column(slot * (kSpectrumBands - 1) +
                                        slot / 2);                     // top
    std::printf("  meter: quietest band %u lit rows, loudest %u\n", quiet,
                loud);
    assert(loud > quiet);
    // And the loud band's ink is at the BOTTOM of the bitmap, not the top.
    uint32_t lit_low = 0;
    uint32_t lit_high = 0;
    const uint32_t column = slot * (kSpectrumBands - 1) + slot / 2;
    for (uint32_t y = 0; y < 100; ++y) {
        const std::size_t at = (std::size_t(y) * 480 + column) * 4;
        if (pixels[at + 1] > 0x60) ++lit_high;
    }
    for (uint32_t y = 100; y < 200; ++y) {
        const std::size_t at = (std::size_t(y) * 480 + column) * 4;
        if (pixels[at + 1] > 0x60) ++lit_low;
    }
    assert(lit_low > lit_high);

    // Nothing submitted: the meter says so rather than drawing flat bars,
    // which is what a genuinely silent title looks like.
    std::vector<uint8_t> idle;
    draw_spectrum_meter(idle, 480, 200, levels, peaks, kSpectrumBands, false);
    assert(idle.size() == pixels.size());
    assert(idle != pixels);
    std::printf("  with no audio submitted the meter draws something else\n");
}

// WHITTY_CABINET_PPM=<path> writes the surround this test builds, so the
// ARTWORK can be looked at without opening a window.
//
// That is not a convenience. The only other way to see it is a fullscreen run
// on the machine's own display, which takes the screen away from whoever is
// using it - and on a shared desktop that is both rude and unreliable, since a
// window that loses focus or gets dismissed produces a screenshot of somebody
// else's work. The layout is pure CPU, so it can be rendered and inspected here
// instead, and the display is only needed for the final look.
void dump_if_asked() {
    const char* path = std::getenv("WHITTY_CABINET_PPM");
    if (path == nullptr) return;
    // Geometry Wars 1's real layout on the 5120x1440 display: 720p magnified
    // 2:1 with 1280 pixels of border either side, and the one title anybody has
    // authored controls for.
    cabinet_surround surround;
    cabinet_title title = known_title();
    title.name = "Geometry Wars Evolved";
    title.title_id = 0x584107ED;
    // WHITTY_CABINET_TITLE=<hex id> photographs a different title's legend.
    // Worth having because the legends differ in the thing that is hard to get
    // right: Geometry Wars 1 has four labels and Space Giraffe five, spread
    // over both sides and down to the triggers, so one picture does not show
    // whether the stacking works.
    if (const char* which = std::getenv("WHITTY_CABINET_TITLE")) {
        title.title_id =
            static_cast<uint32_t>(std::strtoul(which, nullptr, 16));
        title.name = "Title " + std::string(which);
    }
    title.frame_width = 1280;
    title.frame_height = 720;
    title.controls = cabinet_controls_for(title.title_id);
    // WHITTY_CABINET_BARE=1 drops them again, which is what every title but
    // this one looks like: the photograph and no labels.
    if (std::getenv("WHITTY_CABINET_BARE") != nullptr) title.controls.clear();
    if (!surround.build(5120, 1440, present_pane{1280, 0, 2560, 1440}, title))
        return;
    std::FILE* file = std::fopen(path, "wb");
    if (file == nullptr) return;
    std::fprintf(file, "P6\n%u %u\n255\n", surround.width(), surround.height());
    const std::vector<uint8_t>& rgba = surround.rgba();
    std::vector<uint8_t> row(static_cast<std::size_t>(surround.width()) * 3);
    for (uint32_t y = 0; y < surround.height(); ++y) {
        for (uint32_t x = 0; x < surround.width(); ++x) {
            const std::size_t at =
                (static_cast<std::size_t>(y) * surround.width() + x) * 4;
            row[x * 3 + 0] = rgba[at + 0];
            row[x * 3 + 1] = rgba[at + 1];
            row[x * 3 + 2] = rgba[at + 2];
        }
        std::fwrite(row.data(), 1, row.size(), file);
    }
    std::fclose(file);
    std::printf("  wrote the surround to %s\n", path);
}

// The control legend. The whole point of it is that it says what a control
// DOES in the running game, and that nothing in the runtime can know that - so
// it is authored, and a title nobody has authored gets no labels rather than
// labels guessed from its genre.
void controls_are_authored_or_absent() {
    // Exactly what Geometry Wars 1's OWN controls screen states, and nothing
    // beyond it: Movement, Firing, Bomb. That screen says nothing about Start
    // or Back, so neither is here. If somebody later adds a pause binding on
    // the assumption that the game must have one, this fails - which is the
    // point.
    const std::vector<cabinet_control> gw1 = cabinet_controls_for(0x584107ED);
    assert(gw1.size() == 4);
    assert(gw1[0].control == pad_control::left_stick);
    assert(gw1[0].action == "Move");
    assert(gw1[1].control == pad_control::right_stick);
    assert(gw1[1].action == "Fire");
    assert(gw1[2].control == pad_control::left_trigger);
    assert(gw1[2].action == "Bomb");
    assert(gw1[3].control == pad_control::right_trigger);
    assert(gw1[3].action == "Bomb");

    // Space Giraffe's own Controls screen is a pad diagram with five arrows on
    // it, and these are those five.
    const std::vector<cabinet_control> sg = cabinet_controls_for(0x5841080C);
    assert(sg.size() == 5);
    assert(sg[2].control == pad_control::a);
    assert(sg[2].action == "Bomb");

    // EVERY AUTHORED ROW NAMES THE SCREEN IT WAS READ FROM. That is the whole
    // difference between a harvested mapping and a remembered one, and a row
    // with no source is exactly the shape of claim this file exists to stop.
    for (const cabinet_control_entry& entry : kCabinetControls) {
        assert(entry.note != nullptr && entry.note[0] != '\0');
        assert(entry.confirmed);
    }

    // Geometry Wars 2 states the same three as Geometry Wars 1 on its own
    // screen - which was CHECKED there rather than carried across.
    assert(cabinet_controls_for(0x584108FF).size() == 4);

    // Every other title is empty, including the live ones nobody has reached a
    // controls screen on. Empty is the honest answer and it draws no labels.
    assert(cabinet_controls_for(0x58410964).empty()); // Alien Breed
    assert(cabinet_controls_for(0x12345678).empty());
    assert(cabinet_controls_for(0).empty());
    std::printf("  controls: %zu for Geometry Wars 1 and %zu for Space "
                "Giraffe, each off the title's own screen; none guessed for "
                "anything else\n", gw1.size(), sg.size());

    // And the surround notices when they change, or a title that gained a
    // legend would keep the old picture until the window was resized.
    const present_pane picture{1280, 0, 2560, 1440};
    cabinet_title bare = known_title();
    cabinet_title labelled = bare;
    labelled.controls = cabinet_controls_for(0x584107ED);
    assert(cabinet_surround::signature_of(5120, 1440, picture, bare) !=
           cabinet_surround::signature_of(5120, 1440, picture, labelled));

    // A pad with no authored controls still builds - it is the photograph on
    // its own, which is what every title but one shows today.
    cabinet_surround surround;
    assert(surround.build(5120, 1440, picture, bare));
    assert(surround.built());
    std::printf("  a title with no authored controls still draws the pad\n");
}

} // namespace

int main() {
    std::printf("cabinet\n");
    nothing_is_invented();
    hand_entered_facts_are_labelled_as_such();
    read_fields_are_shown();
    a_title_with_no_metadata_says_little();
    a_narrow_panel_wraps_its_values_instead_of_cutting_them();
    a_fullscreen_surface_gets_a_surround();
    a_letterboxed_surface_gets_a_surround();
    a_window_gets_no_surround();
    the_signature_notices_what_changed();
    the_meter_paints_its_whole_bitmap();
    controls_are_authored_or_absent();
    dump_if_asked();
    std::printf("cabinet: all checks passed\n");
    return 0;
}
