#include "whitty_xenon/gpu/cabinet.h"

#include "whitty_xenon/gpu/overlay_toggles.h"
#include "whitty_xenon/input.h"

#include <atomic>

#include "whitty_xenon/gpu/cabinet_facts.h"
#include "whitty_xenon/gpu/embedded/recomp_logo.h"
#include "whitty_xenon/gpu/embedded/pad_360.h"
// For kSpectrumFloorDb: the meter's scale lines have to be at the same
// decibels the analysis measures in, or the grid behind the bars is a grid of
// nothing. The two constants live together for that reason.
#include "whitty_xenon/gpu/spectrum.h"

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

namespace whitty_xenon::gpu {
namespace {

// The palette. Green because that is already what the credit, the plaque border
// and both system pages are: the surround should look like the same product,
// not like a second one bolted to the side of it.
constexpr uint8_t kBackdropTop[3] = {0x06, 0x07, 0x0C};
constexpr uint8_t kBackdropBottom[3] = {0x14, 0x17, 0x20};
constexpr uint8_t kAccent[3] = {0x50, 0xC0, 0x60};
constexpr uint8_t kAccentDim[3] = {0x1E, 0x48, 0x26};
constexpr uint8_t kPlaque[3] = {0x0C, 0x10, 0x14};
constexpr uint8_t kInk[3] = {0xEC, 0xF2, 0xEE};
constexpr uint8_t kHeading[3] = {0x80, 0xE0, 0x90};
constexpr uint8_t kBright[3] = {0xB0, 0xF0, 0xB8};
constexpr uint8_t kPlain[3] = {0xC8, 0xD0, 0xD8};
constexpr uint8_t kDim[3] = {0x78, 0x80, 0x88};
constexpr uint8_t kRule[3] = {0x40, 0x70, 0x48};

// The bezel: the moulding between the artwork and the picture, drawn outward
// from the picture's edge. A screen set into a cabinet has one, and without it
// the game looks pasted onto the artwork rather than sitting in it.
constexpr uint8_t kBezelShadow[3] = {0x02, 0x03, 0x05};
constexpr uint8_t kBezelBody[3] = {0x22, 0x26, 0x2E};
constexpr uint8_t kBezelLip[3] = {0x3C, 0x44, 0x50};

// --- the controller ---------------------------------------------------------
//
// FACE ON, AND PHOTOGRAPHED. These are Xbox 360 titles and the player is
// holding a 360 pad, so the pane shows one - seen straight down onto its face,
// the way the control diagram in a printed manual shows it.
//
// THREE ANSWERS, IN ORDER, AND WHY EACH GAVE WAY TO THE NEXT:
//
//  * A hand-drawn ARCADE panel: a ball-top joystick and three buttons on an
//    arc. The wrong machine entirely, and crude besides.
//  * A THREE-QUARTER photograph - assets/xbox360_controller.png, still in the
//    tree and still described in assets/PROVENANCE.md. Its licence was clean.
//    What made it unusable was the ANGLE: every control's position had to be
//    measured off the image by hand as a fraction of its width and height, and
//    an arrow into a foreshortened face is estimated, never known.
//  * The pad DRAWN from signed distances, face on. That fixed the angle and
//    kept the positions exact, and it always looked drawn.
//
// The picture baked into embedded/pad_360.h is face on, so the objection to the
// first photograph does not apply to it: a control's centre is a measurement,
// not an estimate, and kPadAnchors below holds those measurements. It is still
// the ONE table of where every control is - the LEGEND'S ARROWS read it, and
// there is no second set of numbers to disagree with it.
//
// THE MARKS RULE IS UNCHANGED, and it lives in assets/PROVENANCE.md rather than
// here because it is about what may be shown, not about this code. The Guide
// button is painted over with a plain ring BEFORE the picture is baked, by
// tools/make_image_header.py - no emblem, no green sphere, no Xbox wordmark -
// and it gets no anchor either, because nothing in this runtime binds it. A, B,
// X and Y keep their own letters and colours because those are the control
// labels every printed manual carries and are what a player reads first; they
// identify the button under the thumb and claim nothing else.
//
// ART SPACE. Every coordinate below is in the baked picture's own pixel space,
// scaled to whatever room the pane has, so a control's centre is a NUMBER here
// rather than a fraction of something.
constexpr double kArtWidth = 1498.0;
constexpr double kArtHeight = 1001.0;

// A tightly packed RGBA8 bitmap with the few primitives this file needs.
// Everything is clipped rather than wrapped, so a shape that runs off the edge
// loses the part that ran off and nothing else.
struct canvas {
    uint8_t* pixels{nullptr};
    int32_t width{0};
    int32_t height{0};

    void plot(int32_t x, int32_t y, const uint8_t colour[3]) {
        if (x < 0 || y < 0 || x >= width || y >= height) return;
        const std::size_t at =
            (static_cast<std::size_t>(y) * width + x) * 4;
        pixels[at + 0] = colour[0];
        pixels[at + 1] = colour[1];
        pixels[at + 2] = colour[2];
        pixels[at + 3] = 0xFF;
    }

    void fill(int32_t x, int32_t y, int32_t w, int32_t h,
              const uint8_t colour[3]) {
        for (int32_t row = 0; row < h; ++row)
            for (int32_t column = 0; column < w; ++column)
                plot(x + column, y + row, colour);
    }

    void fill(const present_pane& box, const uint8_t colour[3]) {
        fill(box.x, box.y, box.width, box.height, colour);
    }

    // A rectangle's outline, `thickness` pixels inside its own bounds.
    void outline(const present_pane& box, int32_t thickness,
                 const uint8_t colour[3]) {
        fill(box.x, box.y, box.width, thickness, colour);
        fill(box.x, box.y + box.height - thickness, box.width, thickness,
             colour);
        fill(box.x, box.y, thickness, box.height, colour);
        fill(box.x + box.width - thickness, box.y, thickness, box.height,
             colour);
    }

    // A filled rectangle with its corners cut, which is as much rounding as a
    // plaque needs and costs no arithmetic beyond a compare per row.
    void plaque(const present_pane& box, int32_t radius,
                const uint8_t colour[3]) {
        for (int32_t row = 0; row < box.height; ++row) {
            int32_t inset = 0;
            const int32_t from_top = row;
            const int32_t from_bottom = box.height - 1 - row;
            const int32_t near = from_top < from_bottom ? from_top
                                                        : from_bottom;
            if (near < radius) inset = radius - near;
            fill(box.x + inset, box.y + row, box.width - inset * 2, 1, colour);
        }
    }

    // One pixel, mixed rather than replaced. The pad is drawn from signed
    // distances, so its edges arrive as a coverage between 0 and 1 - and a
    // curve written with plot() is a staircase, which is most of what made the
    // first drawn pad look like a diagram.
    void blend(int32_t x, int32_t y, const uint8_t colour[3], double alpha) {
        if (x < 0 || y < 0 || x >= width || y >= height) return;
        if (alpha <= 0.0) return;
        if (alpha > 1.0) alpha = 1.0;
        const std::size_t at = (static_cast<std::size_t>(y) * width + x) * 4;
        for (int i = 0; i < 3; ++i)
            pixels[at + i] = static_cast<uint8_t>(
                pixels[at + i] * (1.0 - alpha) + colour[i] * alpha + 0.5);
        pixels[at + 3] = 0xFF;
    }

    void disc(int32_t centre_x, int32_t centre_y, int32_t radius,
              const uint8_t colour[3]) {
        for (int32_t y = -radius; y <= radius; ++y)
            for (int32_t x = -radius; x <= radius; ++x)
                if (x * x + y * y <= radius * radius)
                    plot(centre_x + x, centre_y + y, colour);
    }

    // Copies another tightly packed RGBA8 bitmap in whole. Used for the info
    // plaque, which is built by text_panel so the cabinet and the system's own
    // pages are the same object drawn in two places.
    void blit(const std::vector<uint8_t>& source, uint32_t source_width,
              uint32_t source_height, int32_t x, int32_t y) {
        for (uint32_t row = 0; row < source_height; ++row) {
            const int32_t target_y = y + static_cast<int32_t>(row);
            if (target_y < 0 || target_y >= height) continue;
            for (uint32_t column = 0; column < source_width; ++column) {
                const int32_t target_x = x + static_cast<int32_t>(column);
                if (target_x < 0 || target_x >= width) continue;
                const std::size_t from =
                    (static_cast<std::size_t>(row) * source_width + column) * 4;
                if (source[from + 3] == 0) continue;
                const std::size_t to =
                    (static_cast<std::size_t>(target_y) * width + target_x) * 4;
                pixels[to + 0] = source[from + 0];
                pixels[to + 1] = source[from + 1];
                pixels[to + 2] = source[from + 2];
                pixels[to + 3] = 0xFF;
            }
        }
    }
};

int32_t clamp_i(int32_t value, int32_t low, int32_t high) {
    return value < low ? low : (value > high ? high : value);
}

// --- the marquee artwork ----------------------------------------------------
// The logo is baked in as RGB with no alpha - see embedded/recomp_logo.h. Its
// coverage is the brightest channel, which keys the black away AND keeps the
// glow around the letters; a hard mask cuts the glow off and leaves the
// artwork looking stuck on rather than lit.

void logo_texel(int32_t x, int32_t y, double rgb[3]) {
    x = clamp_i(x, 0, static_cast<int32_t>(kRecompLogoWidth) - 1);
    y = clamp_i(y, 0, static_cast<int32_t>(kRecompLogoHeight) - 1);
    const std::size_t at =
        (static_cast<std::size_t>(y) * kRecompLogoWidth + x) * 3;
    rgb[0] = kRecompLogoRgb[at + 0];
    rgb[1] = kRecompLogoRgb[at + 1];
    rgb[2] = kRecompLogoRgb[at + 2];
}

void logo_sample(double u, double v, double rgb[3]) {
    const double fx = u - 0.5;
    const double fy = v - 0.5;
    const int32_t x0 = static_cast<int32_t>(std::floor(fx));
    const int32_t y0 = static_cast<int32_t>(std::floor(fy));
    const double tx = fx - x0;
    const double ty = fy - y0;
    double a[3], b[3], c[3], d[3];
    logo_texel(x0, y0, a);
    logo_texel(x0 + 1, y0, b);
    logo_texel(x0, y0 + 1, c);
    logo_texel(x0 + 1, y0 + 1, d);
    for (int i = 0; i < 3; ++i)
        rgb[i] = (a[i] * (1.0 - tx) + b[i] * tx) * (1.0 - ty) +
                 (c[i] * (1.0 - tx) + d[i] * tx) * ty;
}

// The rectangle the logo would fill inside `box`: as wide as the box allows,
// centred, at the artwork's own aspect. Separate from the drawing so the
// caller can size the plaque around it before anything is painted.
present_pane fit_recomp_logo(const present_pane& box) {
    if (box.width <= 0 || box.height <= 0) return present_pane{box.x, box.y, 0, 0};
    int32_t w = box.width;
    int32_t h = static_cast<int32_t>(
        (static_cast<int64_t>(w) * kRecompLogoHeight) / kRecompLogoWidth);
    if (h > box.height) {
        h = box.height;
        w = static_cast<int32_t>(
            (static_cast<int64_t>(h) * kRecompLogoWidth) / kRecompLogoHeight);
    }
    if (h < 1) h = 1;
    if (w < 1) w = 1;
    return present_pane{box.x + (box.width - w) / 2,
                        box.y + (box.height - h) / 2, w, h};
}

// The pad picture. Same idea as the logo above and one difference that
// matters: this has an alpha channel of its own, so the filtering has to be
// done on PREMULTIPLIED values. Interpolating straight alpha pulls the
// transparent black outside the pad's edge into the pixels along it and leaves
// a dark fringe all the way round the shell - which on a light grey controller
// against a dark cabinet is the first thing anybody would notice.

void pad_texel(int32_t x, int32_t y, double out[4]) {
    x = clamp_i(x, 0, static_cast<int32_t>(kPad360Width) - 1);
    y = clamp_i(y, 0, static_cast<int32_t>(kPad360Height) - 1);
    const std::size_t at =
        (static_cast<std::size_t>(y) * kPad360Width + x) * 4;
    const double alpha = kPad360Rgba[at + 3] / 255.0;
    out[0] = kPad360Rgba[at + 0] * alpha;
    out[1] = kPad360Rgba[at + 1] * alpha;
    out[2] = kPad360Rgba[at + 2] * alpha;
    out[3] = alpha;
}

void pad_sample(double u, double v, double out[4]) {
    const double fx = u - 0.5;
    const double fy = v - 0.5;
    const int32_t x0 = static_cast<int32_t>(std::floor(fx));
    const int32_t y0 = static_cast<int32_t>(std::floor(fy));
    const double tx = fx - x0;
    const double ty = fy - y0;
    double a[4], b[4], c[4], d[4];
    pad_texel(x0, y0, a);
    pad_texel(x0 + 1, y0, b);
    pad_texel(x0, y0 + 1, c);
    pad_texel(x0 + 1, y0 + 1, d);
    for (int i = 0; i < 4; ++i)
        out[i] = (a[i] * (1.0 - tx) + b[i] * tx) * (1.0 - ty) +
                 (c[i] * (1.0 - tx) + d[i] * tx) * ty;
}

void draw_pad_360(canvas& out, const present_pane& at) {
    if (at.width <= 0 || at.height <= 0) return;
    const double scale_x = static_cast<double>(kPad360Width) / at.width;
    const double scale_y = static_cast<double>(kPad360Height) / at.height;
    const int32_t taps_x = clamp_i(static_cast<int32_t>(std::ceil(scale_x)), 1, 4);
    const int32_t taps_y = clamp_i(static_cast<int32_t>(std::ceil(scale_y)), 1, 4);
    const double weight = 1.0 / (taps_x * taps_y);
    for (int32_t row = 0; row < at.height; ++row) {
        for (int32_t column = 0; column < at.width; ++column) {
            double sum[4] = {0.0, 0.0, 0.0, 0.0};
            for (int32_t sy = 0; sy < taps_y; ++sy) {
                const double v = (row + (sy + 0.5) / taps_y) * scale_y;
                for (int32_t sx = 0; sx < taps_x; ++sx) {
                    const double u = (column + (sx + 0.5) / taps_x) * scale_x;
                    double rgba[4];
                    pad_sample(u, v, rgba);
                    for (int i = 0; i < 4; ++i) sum[i] += rgba[i] * weight;
                }
            }
            if (sum[3] <= 0.004) continue;
            const uint8_t ink[3] = {
                static_cast<uint8_t>(clamp_i(
                    static_cast<int32_t>(sum[0] / sum[3] + 0.5), 0, 255)),
                static_cast<uint8_t>(clamp_i(
                    static_cast<int32_t>(sum[1] / sum[3] + 0.5), 0, 255)),
                static_cast<uint8_t>(clamp_i(
                    static_cast<int32_t>(sum[2] / sum[3] + 0.5), 0, 255))};
            out.blend(at.x + column, at.y + row, ink, sum[3]);
        }
    }
}

void draw_recomp_logo(canvas& out, const present_pane& at) {
    if (at.width <= 0 || at.height <= 0) return;
    const double scale_x = static_cast<double>(kRecompLogoWidth) / at.width;
    const double scale_y = static_cast<double>(kRecompLogoHeight) / at.height;
    // A destination pixel that covers several source pixels has to average
    // them or the gradients in the letters break up into bands. One sample is
    // enough when the artwork is being enlarged, which is the common case on a
    // 1080p side; the taps only matter on a narrow pane.
    const int32_t taps_x = clamp_i(static_cast<int32_t>(std::ceil(scale_x)), 1, 4);
    const int32_t taps_y = clamp_i(static_cast<int32_t>(std::ceil(scale_y)), 1, 4);
    const double weight = 1.0 / (taps_x * taps_y);
    for (int32_t row = 0; row < at.height; ++row) {
        for (int32_t column = 0; column < at.width; ++column) {
            double sum[3] = {0.0, 0.0, 0.0};
            for (int32_t sy = 0; sy < taps_y; ++sy) {
                const double v =
                    (row + (sy + 0.5) / taps_y) * scale_y;
                for (int32_t sx = 0; sx < taps_x; ++sx) {
                    const double u =
                        (column + (sx + 0.5) / taps_x) * scale_x;
                    double rgb[3];
                    logo_sample(u, v, rgb);
                    for (int i = 0; i < 3; ++i) sum[i] += rgb[i] * weight;
                }
            }
            const double peak = std::max(sum[0], std::max(sum[1], sum[2]));
            if (peak < 1.0) continue;
            // Unpremultiply against the coverage so a half-covered edge pixel
            // keeps the colour it had rather than fading towards black.
            const uint8_t ink[3] = {
                static_cast<uint8_t>(clamp_i(
                    static_cast<int32_t>(sum[0] * 255.0 / peak + 0.5), 0, 255)),
                static_cast<uint8_t>(clamp_i(
                    static_cast<int32_t>(sum[1] * 255.0 / peak + 0.5), 0, 255)),
                static_cast<uint8_t>(clamp_i(
                    static_cast<int32_t>(sum[2] * 255.0 / peak + 0.5), 0, 255))};
            out.blend(at.x + column, at.y + row, ink, peak / 255.0);
        }
    }
}

// A number a player reads: 1,234,560 rather than 1234560.
std::string with_thousands(uint64_t value) {
    const std::string digits = std::to_string(value);
    std::string out;
    for (std::size_t i = 0; i < digits.size(); ++i) {
        if (i != 0 && (digits.size() - i) % 3 == 0) out.push_back(',');
        out.push_back(digits[i]);
    }
    return out;
}

// Puts `text` at a character column of a fixed-width row, growing the row as
// needed. The same idea as system_ui.cpp's - a table is laid out by counting
// characters because the font is fixed width.
void place(std::string& row, std::size_t column, const std::string& text) {
    if (row.size() < column) row.resize(column, ' ');
    for (std::size_t i = 0; i < text.size(); ++i) {
        const std::size_t at = column + i;
        if (row.size() <= at) row.resize(at + 1, ' ');
        row[at] = text[i];
    }
}

// Breaks a line on spaces so a long title name reads rather than being clipped.
// A single word longer than the column count is cut, because the alternative is
// a panel that changes width with its contents.
std::vector<std::string> wrap(const std::string& text, std::size_t columns) {
    std::vector<std::string> out;
    if (columns == 0) return out;
    std::string line;
    std::size_t at = 0;
    while (at < text.size()) {
        std::size_t space = text.find(' ', at);
        if (space == std::string::npos) space = text.size();
        const std::string word = text.substr(at, space - at);
        if (line.empty())
            line = word;
        else if (line.size() + 1 + word.size() <= columns)
            line += " " + word;
        else {
            out.push_back(line);
            line = word;
        }
        while (line.size() > columns) {
            out.push_back(line.substr(0, columns));
            line = line.substr(columns);
        }
        at = space + 1;
    }
    if (!line.empty()) out.push_back(line);
    return out;
}

// Mixes two colours, `amount` in 0..255 of the second.
void mix(const uint8_t from[3], const uint8_t to[3], uint32_t amount,
         uint8_t out[3]) {
    for (int i = 0; i < 3; ++i)
        out[i] = static_cast<uint8_t>(
            (uint32_t(from[i]) * (255 - amount) + uint32_t(to[i]) * amount) /
            255);
}

// --- art space ---------------------------------------------------------------
//
// `scale` is surface pixels per art unit, and an art unit is a pixel of the
// baked picture - see kArtWidth. The legend reads this to turn a control's
// measured position into a point on the screen to aim an arrow at.
struct pad_frame {
    double left{0.0};
    double top{0.0};
    double scale{1.0};

    int32_t to_x(double ax) const {
        return static_cast<int32_t>(left + ax * scale);
    }
    int32_t to_y(double ay) const {
        return static_cast<int32_t>(top + ay * scale);
    }
};

// --- where every control is -------------------------------------------------
//
// THE ONE TABLE. The drawing below reads it for where to put each control, and
// the legend reads it for where to point each arrow. Nothing else in this file
// carries a control's position, so the label and the thing it names cannot come
// apart - which is exactly what a three-quarter photograph could not promise.
//
// `radius` is the control's own size in art units, and it is load-bearing twice
// over: the drawing sizes the control from it, and an arrow stops at it rather
// than landing on top of the control it is naming.
//
// The 360's asymmetry is the strongest thing about its shape and is NOT
// mirrored: LEFT STICK top-left with the D-PAD below and inboard of it, the
// ABXY diamond top-right with the RIGHT STICK below and inboard of it.
struct pad_anchor {
    pad_control control;
    double x, y;
    double radius;
    const char* short_name;
};
constexpr pad_anchor kPadAnchors[] = {
    // Measured off the baked picture, not estimated: the four face buttons are
    // the centroids of their own colours, the sticks and the D-pad the centres
    // of their dark masses, and the bumpers the dark shapes on the top edge.
    // The triggers are BEHIND the pad and are not in a face-on picture at all,
    // so they point at the outboard end of the bumper each one sits under -
    // which is where a hand finds them, and is the honest thing to point at.
    {pad_control::left_trigger, 245.0, 26.0, 40.0, "LT"},
    {pad_control::right_trigger, 1255.0, 26.0, 40.0, "RT"},
    {pad_control::left_shoulder, 400.0, 30.0, 44.0, "LB"},
    {pad_control::right_shoulder, 1100.0, 30.0, 44.0, "RB"},
    {pad_control::y, 1183.0, 152.0, 52.0, "Y"},
    {pad_control::left_stick, 322.0, 250.0, 95.0, "LS"},
    {pad_control::x, 1073.0, 262.0, 52.0, "X"},
    {pad_control::b, 1287.0, 260.0, 52.0, "B"},
    {pad_control::back, 578.0, 268.0, 36.0, "BACK"},
    {pad_control::start, 925.0, 268.0, 36.0, "START"},
    {pad_control::a, 1182.0, 371.0, 52.0, "A"},
    {pad_control::dpad, 530.0, 496.0, 118.0, "D-PAD"},
    {pad_control::right_stick, 960.0, 498.0, 102.0, "RS"},
};

const pad_anchor* anchor_of(pad_control control) {
    for (const pad_anchor& one : kPadAnchors)
        if (one.control == control) return &one;
    return nullptr;
}

// Draws the pad into `box`, as large as the box will take.
void draw_gamepad(canvas& out, uint8_t* rgba, uint32_t surface_width,
                  uint32_t surface_height, const present_pane& box,
                  const std::vector<cabinet_control>& controls) {
    // Room down each side for the labels, and the pad in the middle of what is
    // left. The labels are text at the pane's own edges, so what the pad may
    // have is the pane less two label columns.
    const double side = box.width * 0.13;
    double width = box.width - side * 2.0;
    const double tall = kArtHeight / kArtWidth;
    if (width * tall > box.height) width = box.height / tall;
    if (width < 180.0) return;
    pad_frame f;
    f.scale = width / kArtWidth;
    f.left = box.x + (box.width - width) / 2.0;
    f.top = box.y + (box.height - width * tall) / 2.0;

    // The pad itself: one picture, filtered into place.
    //
    // It used to be built here out of signed distance fields - a shell, two
    // sticks, a D-pad, six buttons and two bumpers, several hundred lines of
    // it. What that bought was a drawing whose control positions were the same
    // numbers the legend points at, and it cost a pad that always looked drawn.
    // The picture keeps the first property, because kPadAnchors is now measured
    // off the picture rather than defining a drawing, and loses the second.
    //
    // See assets/PROVENANCE.md. The Guide button is painted over with a plain
    // ring before the picture is baked, by tools/make_image_header.py: the
    // emblem is Microsoft's, nothing in this runtime reads that button, and a
    // rule the project wrote down for a drawing is not one a photograph gets
    // out of.
    draw_pad_360(out, present_pane{
                          static_cast<int32_t>(f.left),
                          static_cast<int32_t>(f.top),
                          static_cast<int32_t>(width),
                          static_cast<int32_t>(width * tall)});

    // The legend: what each control DOES in this title.
    //
    // Nothing generic is drawn. A title nobody has authored controls for gets
    // the pad and no labels at all - see cabinet_facts.h. That is not a gap
    // waiting to be filled in with inference; it is the honest state.
    if (controls.empty()) return;

    std::vector<const cabinet_control*> labelled;
    for (const cabinet_control& one : controls) {
        if (anchor_of(one.control) == nullptr || one.action.empty()) continue;
        labelled.push_back(&one);
    }
    if (labelled.empty()) return;
    // Down each side in the order their controls appear down the pad, so two
    // labels pointing at nearby controls cannot land on top of each other.
    std::sort(labelled.begin(), labelled.end(),
              [](const cabinet_control* a, const cabinet_control* b) {
                  return anchor_of(a->control)->y < anchor_of(b->control)->y;
              });
    std::size_t per_side[2] = {0, 0};
    for (const cabinet_control* one : labelled)
        ++per_side[anchor_of(one->control)->x < kArtWidth / 2 ? 0 : 1];
    const std::size_t most = std::max(per_side[0], per_side[1]);

    // Sized so the fuller side FITS. Every control on the pad can carry a
    // label now that the whole face is visible, so a title with a dozen of them
    // is a real case - and a stack that overflows its box is one that quietly
    // clamps labels on top of each other.
    uint32_t label = static_cast<uint32_t>(clamp_i(box.width / 220, 1, 3));
    while (label > 1 &&
           static_cast<int32_t>(most * text_pixel_height(label) * 3 / 2) >
               box.height)
        --label;
    const int32_t line_h = static_cast<int32_t>(text_pixel_height(label));
    const int32_t gap = static_cast<int32_t>(label) * 3;

    int32_t next_free[2] = {box.y, box.y};
    for (const cabinet_control* one : labelled) {
        const pad_anchor& a = *anchor_of(one->control);
        const int32_t cx = f.to_x(a.x);
        const int32_t cy = f.to_y(a.y);
        const std::string text = one->action;
        const int32_t tw =
            static_cast<int32_t>(text_pixel_width(text, label, 1));
        const int side = a.x < kArtWidth / 2 ? 0 : 1;
        int32_t ty = cy - line_h / 2;
        if (ty < next_free[side]) ty = next_free[side];
        if (ty + line_h > box.y + box.height) ty = box.y + box.height - line_h;
        next_free[side] = ty + line_h * 3 / 2;
        const int32_t tx = side == 0 ? box.x : box.x + box.width - tw;
        const int32_t from_x = side == 0 ? tx + tw + gap : tx - gap;
        const int32_t from_y = ty + line_h / 2;
        // The leader stops at the control's own edge rather than on top of it.
        // That is the second thing the radius in kPadAnchors is for, and it is
        // why an arrow can never cover the button it is naming.
        const double dx = cx - from_x;
        const double dy = cy - from_y;
        const double span = std::sqrt(dx * dx + dy * dy);
        const double stop = a.radius * f.scale + static_cast<double>(label) * 2;
        const double keep = span > stop ? (span - stop) / span : 0.0;
        const int32_t steps = static_cast<int32_t>(span * keep);
        for (int32_t step = 0; step <= steps; ++step) {
            const double t = steps == 0 ? 0.0 : double(step) / double(steps);
            out.fill(from_x + static_cast<int32_t>(dx * keep * t),
                     from_y + static_cast<int32_t>(dy * keep * t),
                     static_cast<int32_t>(label), static_cast<int32_t>(label),
                     kRule);
        }
        out.disc(from_x + static_cast<int32_t>(dx * keep),
                 from_y + static_cast<int32_t>(dy * keep),
                 static_cast<int32_t>(label) * 2, kAccent);
        draw_text(rgba, surface_width, surface_height, tx, ty, text, label,
                  kBright, 1);
    }
}

// A 64-bit mix, for the signature. FNV-1a over whatever is fed to it.
void hash_bytes(uint64_t& state, const void* data, std::size_t size) {
    const uint8_t* at = static_cast<const uint8_t*>(data);
    for (std::size_t i = 0; i < size; ++i) {
        state ^= at[i];
        state *= 1099511628211ull;
    }
}

void hash_u64(uint64_t& state, uint64_t value) {
    hash_bytes(state, &value, sizeof(value));
}

void hash_text(uint64_t& state, const std::string& text) {
    hash_bytes(state, text.data(), text.size());
}

// How wide the label column of the info panel is, in characters.
constexpr std::size_t kLabelColumn = 14;

} // namespace

bool cabinet_surround::enabled_by_environment() {
    static const bool wanted = [] {
        // The border's own switch comes first: WHITTY_BORDER=0 turns the whole
        // surround off along with the flat colour it replaced, which is the
        // switch that already existed and the one to keep working.
        if (!border_enabled_by_environment()) return false;
        const char* value = std::getenv("WHITTY_SURROUND");
        return value == nullptr || value[0] != '0';
    }();
    return wanted;
}

// The runtime half of the same question. enabled_by_environment() is the
// STARTING state and never changes; these are what the pad moves, and both have
// to be true for the surround to be on the screen. Kept apart so that
// WHITTY_SURROUND=0 still means "not at all" rather than "off until somebody
// clicks the stick".
std::atomic<bool>& surround_visible() noexcept {
    static std::atomic<bool> visible{cabinet_surround::enabled_by_environment()};
    return visible;
}

std::atomic<bool>& fps_visible() noexcept {
    // On unless switched off, which is what the ReXGlue ports do and the
    // reason a person moving between the two builds does not have to remember
    // which one hides it. It costs nothing to leave on - the readout is
    // rebuilt only when the number changes - and it never reaches a capture,
    // because it is copied into the swapchain image and WHITTY_FRAME_PPM is
    // written before presentation.
    static std::atomic<bool> visible{[] {
        const char* value = std::getenv("WHITTY_FPS_OVERLAY");
        return value == nullptr || value[0] != '0';
    }()};
    return visible;
}

std::atomic<int32_t>& plain_border() noexcept {
    // Nothing unless a host asks, and WHITTY_BORDER_PX overrides whatever it
    // asked for - which is how a margin specified in centimetres is made exact
    // on a panel whose reported density is a bucket rather than a measurement.
    static std::atomic<int32_t> pixels{[] {
        const char* value = std::getenv("WHITTY_BORDER_PX");
        if (value == nullptr) return 0;
        const long width = std::strtol(value, nullptr, 10);
        return width >= 0 && width < 4096 ? static_cast<int32_t>(width) : 0;
    }()};
    return pixels;
}

std::atomic<int32_t>& picture_width_cap() noexcept {
    // WHITTY_PICTURE_WIDTH, read once. Per title rather than per build: on
    // Android it comes from the whitty.env file beside that title's own game
    // data, so capping one title does not touch any other.
    static std::atomic<int32_t> pixels{[] {
        const char* value = std::getenv("WHITTY_PICTURE_WIDTH");
        if (value == nullptr) return 0;
        const long width = std::strtol(value, nullptr, 10);
        return width > 0 && width < 16384 ? static_cast<int32_t>(width) : 0;
    }()};
    return pixels;
}

std::atomic<bool>& surround_toggle_allowed() noexcept {
    static std::atomic<bool> allowed{true};
    return allowed;
}

void apply_overlay_toggles(uint16_t buttons, uint16_t previous) noexcept {
    // Rising edges only. Holding the stick in must not strobe the panel, and
    // the same press arriving on two ports must not cancel itself out - so the
    // caller passes one port at a time and the edge is per port.
    const uint16_t pressed = static_cast<uint16_t>(buttons & ~previous);
    if ((pressed & pad_button::right_thumb) &&
        surround_toggle_allowed().load(std::memory_order_relaxed)) {
        auto& v = surround_visible();
        v.store(!v.load(std::memory_order_relaxed), std::memory_order_relaxed);
    }
    if (pressed & pad_button::left_thumb) {
        auto& v = fps_visible();
        v.store(!v.load(std::memory_order_relaxed), std::memory_order_relaxed);
    }
}

std::vector<panel_line> build_cabinet_lines(const cabinet_title& title,
                                            uint32_t columns) {
    std::vector<panel_line> lines;
    if (columns == 0) return lines;
    const auto rule = [&] {
        lines.push_back(panel_line{std::string(columns, '-'), kRule[0],
                                   kRule[1], kRule[2], false});
    };
    const auto row = [&](const std::string& label, const std::string& value,
                         const uint8_t colour[3]) {
        // Label and value on one line where they fit, and on two where they do
        // not. They always fit on a desktop, where the pane is 1600 pixels of
        // ultrawide border; on a handheld the pane is 320, and a row laid out
        // for the wide case comes back as "RENDERS AT  1920 x 10" with the
        // value cut off - which reads as a rendering bug rather than a layout
        // one, because the number it truncates to is a plausible number.
        if (kLabelColumn + value.size() <= columns) {
            std::string text;
            place(text, 0, label);
            place(text, kLabelColumn, value);
            lines.push_back(
                panel_line{text, colour[0], colour[1], colour[2], false});
            return;
        }
        lines.push_back(panel_line{label, colour[0], colour[1], colour[2],
                                   false});
        // Indented, so a wrapped value is visibly the label's and not a row of
        // its own.
        const std::size_t room = columns > 2 ? columns - 2 : 1;
        for (const std::string& part : wrap(value, room)) {
            std::string text;
            place(text, 2, part);
            lines.push_back(
                panel_line{text, colour[0], colour[1], colour[2], false});
        }
    };

    lines.push_back(panel_line{"NOW PLAYING", kHeading[0], kHeading[1],
                               kHeading[2], false});
    // The title's own name, out of its SPA. A title with no SPA has no name
    // here and gets no row - it does not get the file name or the title id
    // dressed up as one.
    if (!title.name.empty())
        for (const std::string& part : wrap(title.name, columns))
            lines.push_back(
                panel_line{part, kInk[0], kInk[1], kInk[2], false});
    rule();

    if (title.title_id != 0) {
        char text[16];
        std::snprintf(text, sizeof(text), "%08X", title.title_id);
        row("TITLE ID", text, kPlain);
    }
    if (title.frame_width != 0 && title.frame_height != 0) {
        char text[32];
        std::snprintf(text, sizeof(text), "%u x %u", title.frame_width,
                      title.frame_height);
        row("RENDERS AT", text, kPlain);
    }
    // Achievements: the count comes from the title's own achievement table and
    // the earned half from this machine's profile, keyed by title id. A title
    // that defines none gets no row rather than "0 of 0".
    if (title.achievements != 0) {
        char text[64];
        std::snprintf(text, sizeof(text), "%u of %u", title.achievements_earned,
                      title.achievements);
        row("ACHIEVEMENTS", text, kPlain);
        char score[64];
        std::snprintf(score, sizeof(score), "%u of %u G",
                      title.gamerscore_earned, title.gamerscore);
        row("GAMERSCORE", score, kPlain);
    }
    if (!title.leaderboards.empty()) {
        std::string joined;
        for (const std::string& name : title.leaderboards) {
            if (!joined.empty()) joined += ", ";
            joined += name;
        }
        const std::size_t room = columns > kLabelColumn
                                     ? columns - kLabelColumn
                                     : 1;
        const std::vector<std::string> wrapped = wrap(joined, room);
        for (std::size_t i = 0; i < wrapped.size(); ++i)
            row(i == 0 ? "LEADERBOARDS" : "", wrapped[i], kPlain);
    }

    // The local high-score table - this player's own scores, on the boards the
    // title's own SPA named. It is the one thing on here a cabinet's marquee
    // would genuinely have had.
    if (!title.scores.empty()) {
        lines.push_back(panel_line{"HIGH SCORES, THIS MACHINE", kHeading[0],
                                   kHeading[1], kHeading[2], true});
        std::size_t shown = 0;
        for (const cabinet_score& score : title.scores) {
            if (shown >= 5) break;
            std::string text;
            char rank[8];
            std::snprintf(rank, sizeof(rank), "%zu", shown + 1);
            place(text, 0, rank);
            place(text, 3, score.board);
            const std::string number = with_thousands(score.score);
            const std::size_t at =
                columns > number.size() + 1 ? columns - number.size() : 0;
            place(text, at, number);
            const uint8_t* colour = shown == 0 ? kBright : kPlain;
            lines.push_back(
                panel_line{text, colour[0], colour[1], colour[2], false});
            ++shown;
        }
    }

    // And the hand-entered half, under its own heading and nowhere else. See
    // cabinet_facts.h: a title nobody has written an entry for reaches none of
    // this, and shows no publisher and no year rather than a guess.
    const bool any_hand_entered = !title.publisher.empty() ||
                                  !title.developer.empty() ||
                                  !title.year.empty();
    if (any_hand_entered) {
        lines.push_back(panel_line{"FROM OUR OWN NOTES, NOT THE GAME",
                                   kDim[0], kDim[1], kDim[2], true});
        if (!title.publisher.empty()) row("PUBLISHER", title.publisher, kPlain);
        if (!title.developer.empty()) row("DEVELOPER", title.developer, kPlain);
        if (!title.year.empty()) row("YEAR", title.year, kPlain);
    }

    // How the thing in the middle of the screen is actually running. This is
    // not a claim about the GAME - it is a statement about this binary, which
    // is why it sits under its own heading and why the "nothing invented" rule
    // at the top of cabinet.h is not bent by it. The same six lines are on the
    // ReXGlue ports' right rail; they are here so the two builds read alike.
    lines.push_back(panel_line{"HOW THIS IS RUNNING", kHeading[0], kHeading[1],
                               kHeading[2], true});
    static const char* const kRuntimeLines[] = {
        "Static recompilation", "PowerPC to native code", "",
        "Native kernel",        "Vulkan renderer",        "Native audio",
        "",                     "No emulation",
    };
    for (const char* text : kRuntimeLines) {
        const uint8_t* colour = *text == '\0' ? kDim : kPlain;
        lines.push_back(
            panel_line{text, colour[0], colour[1], colour[2], false});
    }

    // NO LINE MAY BE WIDER THAN THE PANEL, checked here rather than trusted at
    // each of the dozen places above that push one.
    //
    // It was trusted, and on a desktop it was true: every heading and every
    // row fits the 1600-pixel pane an ultrawide's border gives. A handheld's
    // pane is 320, where "HIGH SCORES, THIS MACHINE" alone is wider than the
    // page - and a line that overflows is CUT, which turns a heading into a
    // different heading and a value into a plausible wrong number. One pass at
    // the end is the only place that can promise it for every producer,
    // including the ones nobody has written yet.
    std::vector<panel_line> fitted;
    fitted.reserve(lines.size());
    for (const panel_line& line : lines) {
        if (line.text.size() <= columns) {
            fitted.push_back(line);
            continue;
        }
        for (const std::string& part : wrap(line.text, columns))
            fitted.push_back(panel_line{part, line.r, line.g, line.b,
                                        line.gap_before});
    }
    return fitted;
}

void draw_spectrum_meter(std::vector<uint8_t>& rgba, uint32_t width,
                         uint32_t height, const float* levels,
                         const float* peaks, uint32_t bands, bool live) {
    rgba.assign(static_cast<std::size_t>(width) * height * 4, 0);
    if (width == 0 || height == 0) return;
    canvas out{rgba.data(), static_cast<int32_t>(width),
               static_cast<int32_t>(height)};
    out.fill(0, 0, out.width, out.height, kPlaque);

    // The scale behind the bars: a line every 6 dB over the range the bars
    // cover, so the display is readable as a measurement rather than only as
    // movement.
    const int32_t divisions = static_cast<int32_t>(-kSpectrumFloorDb / 6.0f);
    for (int32_t line = 1; line < divisions; ++line) {
        const int32_t y = out.height - 1 -
                          (out.height - 1) * line / divisions;
        uint8_t tint[3];
        mix(kPlaque, kAccentDim, 110, tint);
        out.fill(0, y, out.width, 1, tint);
    }

    if (bands == 0) return;
    // Bars with a gap between them, sized so the whole width is used whatever
    // the band count is.
    const int32_t slot = out.width / static_cast<int32_t>(bands);
    if (slot < 2) return;
    const int32_t gap = slot / 6 > 1 ? slot / 6 : 1;
    const int32_t bar = slot - gap;
    for (uint32_t band = 0; band < bands; ++band) {
        const int32_t x =
            static_cast<int32_t>(band) * slot + gap / 2;
        const float level = live && levels != nullptr ? levels[band] : 0.0f;
        int32_t filled = static_cast<int32_t>(level * float(out.height) + 0.5f);
        if (filled > out.height) filled = out.height;
        // A bar is drawn as segments rather than as a solid block - the way a
        // real level meter is - and the segments warm towards the top, so how
        // loud a band is reads at a glance without a number beside it.
        constexpr int32_t kSegment = 6;
        for (int32_t y = 0; y < filled; ++y) {
            if ((out.height - 1 - y) % kSegment == kSegment - 1) continue;
            const uint32_t heat = static_cast<uint32_t>(
                255ull * static_cast<uint64_t>(y) /
                static_cast<uint64_t>(out.height > 1 ? out.height - 1 : 1));
            static constexpr uint8_t kHot[3] = {0xF0, 0x80, 0x30};
            uint8_t colour[3];
            mix(kAccent, kHot, heat, colour);
            out.fill(x, out.height - 1 - y, bar, 1, colour);
        }
        // The peak marker, which falls far more slowly than the bar and is the
        // part that shows a transient after it has gone.
        const float peak = live && peaks != nullptr ? peaks[band] : 0.0f;
        if (peak > 0.0f) {
            int32_t at = static_cast<int32_t>(peak * float(out.height) + 0.5f);
            if (at >= out.height) at = out.height - 1;
            if (at > 0)
                out.fill(x, out.height - 1 - at, bar, 2, kBright);
        }
    }

    if (!live) {
        // Nothing has been submitted. Said, rather than drawn as flat bars -
        // which is what a silent title looks like, and the two are not the
        // same thing.
        const std::string text = "NO AUDIO SUBMITTED YET";
        uint32_t scale = 2;
        while (scale > 1 && text_pixel_width(text, scale) > width) --scale;
        const uint32_t text_width = text_pixel_width(text, scale);
        if (text_width < width && text_pixel_height(scale) < height)
            draw_text(rgba.data(), width, height,
                      static_cast<int32_t>((width - text_width) / 2),
                      static_cast<int32_t>((height - text_pixel_height(scale)) /
                                           2),
                      text, scale, kDim);
    }
}

uint64_t cabinet_surround::signature_of(uint32_t surface_width,
                                        uint32_t surface_height,
                                        const present_pane& picture,
                                        const cabinet_title& title) {
    uint64_t state = 1469598103934665603ull;
    hash_u64(state, surface_width);
    hash_u64(state, surface_height);
    hash_u64(state, static_cast<uint64_t>(picture.x));
    hash_u64(state, static_cast<uint64_t>(picture.y));
    hash_u64(state, static_cast<uint64_t>(picture.width));
    hash_u64(state, static_cast<uint64_t>(picture.height));
    hash_text(state, title.name);
    hash_u64(state, title.title_id);
    hash_u64(state, title.frame_width);
    hash_u64(state, title.frame_height);
    hash_u64(state, title.achievements);
    hash_u64(state, title.achievements_earned);
    hash_u64(state, title.gamerscore);
    hash_u64(state, title.gamerscore_earned);
    for (const std::string& board : title.leaderboards) hash_text(state, board);
    for (const cabinet_score& score : title.scores) {
        hash_text(state, score.board);
        hash_u64(state, score.score);
        hash_text(state, score.who);
    }
    hash_text(state, title.publisher);
    hash_text(state, title.developer);
    hash_text(state, title.year);
    for (const cabinet_control& one : title.controls) {
        hash_u64(state, static_cast<uint64_t>(one.control));
        hash_text(state, one.action);
    }
    return state;
}

bool cabinet_surround::build(uint32_t surface_width, uint32_t surface_height,
                             const present_pane& picture,
                             const cabinet_title& title) {
    m_rgba.clear();
    m_width = 0;
    m_height = 0;
    m_meter = present_pane{};
    m_signature =
        signature_of(surface_width, surface_height, picture, title);
    if (surface_width == 0 || surface_height == 0) return false;

    const int32_t surface_w = static_cast<int32_t>(surface_width);
    const int32_t surface_h = static_cast<int32_t>(surface_height);
    const int32_t left_width = picture.x;
    const int32_t right_width = surface_w - (picture.x + picture.width);
    // Not enough screen either side to put a marquee or a panel in. The caller
    // paints the flat border instead, which is the better picture at that size
    // and is what a window gets.
    if (left_width < kMinimumSide && right_width < kMinimumSide) return false;

    m_width = surface_width;
    m_height = surface_height;
    m_rgba.assign(static_cast<std::size_t>(surface_width) * surface_height * 4,
                  0);
    canvas out{m_rgba.data(), surface_w, surface_h};

    // The backdrop: a vertical gradient, darkest at the top, with a very faint
    // diagonal hatch over it. The hatch is six levels of one channel - enough
    // that the surround is not a flat field, far too little to compete with the
    // game.
    //
    // This is the whole cost of a rebuild, so it is written for it. Two things,
    // both measured rather than assumed:
    //
    //  * THE PICTURE'S OWN RECTANGLE IS SKIPPED. Those pixels are never copied
    //    to the screen - the backend copies only what surrounds the picture -
    //    so painting them is pure waste, and on this display it is half the
    //    surface for a 720p title.
    //  * The pixels are written directly rather than through plot(). A bounds
    //    check and a call per pixel over seven megapixels is most of the time
    //    this used to take, and the bounds are known here: the loop cannot
    //    leave the bitmap.
    //
    // It matters because a rebuild is not only a start-up cost. The panel
    // changes when a score lands or an achievement unlocks, which is
    // mid-gameplay, and a repaint the player can see as a hitch would be a
    // worse thing than the panel is a good one.
    for (int32_t y = 0; y < surface_h; ++y) {
        const uint32_t down = static_cast<uint32_t>(
            255ull * static_cast<uint64_t>(y) /
            static_cast<uint64_t>(surface_h > 1 ? surface_h - 1 : 1));
        uint8_t base[3];
        mix(kBackdropTop, kBackdropBottom, down, base);
        const uint8_t plain[4] = {base[0], base[1], base[2], 0xFF};
        const uint8_t hatched[4] = {static_cast<uint8_t>(base[0] + 4),
                                    static_cast<uint8_t>(base[1] + 5),
                                    static_cast<uint8_t>(base[2] + 6), 0xFF};
        // The columns to paint on this row: the whole width above and below the
        // picture, and only the two sides beside it.
        const bool beside = y >= picture.y && y < picture.y + picture.height;
        int32_t spans[2][2] = {{0, surface_w}, {0, 0}};
        if (beside && picture.x > 0) {
            spans[0][1] = picture.x;
            spans[1][0] = picture.x + picture.width;
            spans[1][1] = surface_w;
        } else if (beside) {
            spans[0][0] = picture.x + picture.width;
        }
        uint8_t* row = m_rgba.data() + static_cast<std::size_t>(y) *
                                           static_cast<std::size_t>(surface_w) *
                                           4;
        // Filled in RUNS rather than per pixel. The hatch is `((x + y) / 12) %
        // 2`, and evaluating that at every pixel costs an integer division -
        // which measured at 18.7 ms over this surface, most of the whole
        // repaint. The pattern has a period of 24 and is constant for up to 12
        // pixels at a time, so the run length is arithmetic and the division
        // happens once per run instead of once per pixel.
        for (const auto& span : spans) {
            int32_t x = span[0];
            while (x < span[1]) {
                const int32_t phase = (x + y) % 24;
                const uint8_t* colour = phase < 12 ? hatched : plain;
                int32_t run = 12 - phase % 12;
                if (x + run > span[1]) run = span[1] - x;
                uint8_t* at = row + static_cast<std::size_t>(x) * 4;
                for (int32_t i = 0; i < run; ++i, at += 4)
                    std::memcpy(at, colour, 4);
                x += run;
            }
        }
    }

    // The bezel, drawn outward from the picture. Anything it puts inside the
    // picture's own rectangle is never copied to the screen - the caller copies
    // only what surrounds the picture - so this needs no clipping of its own.
    struct bezel_band {
        int32_t thickness;
        const uint8_t* colour;
    };
    const int32_t unit = clamp_i(surface_h / 200, 2, 8);
    const bezel_band bands[] = {
        {unit, kBezelShadow}, {unit * 4, kBezelBody},
        {unit, kBezelLip},    {unit * 2, kBezelShadow},
    };
    int32_t grown = 0;
    for (const bezel_band& band : bands) {
        const present_pane box{picture.x - grown - band.thickness,
                               picture.y - grown - band.thickness,
                               picture.width + (grown + band.thickness) * 2,
                               picture.height + (grown + band.thickness) * 2};
        out.outline(box, band.thickness, band.colour);
        grown += band.thickness;
    }
    // A thin accent line just outside the moulding, which is the cabinet's own
    // colour showing at the edge of the screen.
    {
        const int32_t at = grown + unit;
        const present_pane box{picture.x - at, picture.y - at,
                               picture.width + at * 2, picture.height + at * 2};
        out.outline(box, unit / 2 > 0 ? unit / 2 : 1, kAccentDim);
    }

    // --- the left pane: who made this -------------------------------------
    if (left_width >= kMinimumSide) {
        const int32_t margin = clamp_i(left_width / 12, 16, 72);
        const int32_t inner_x = margin;
        const int32_t inner_w = left_width - margin * 2;
        const int32_t pad = clamp_i(inner_w / 24, 8, 28);

        // The marquee. The same Retro Recompilation artwork the ReXGlue ports
        // carry on their side rails, so a person moving between the two builds
        // is looking at one product rather than two - it is the reason this is
        // a baked bitmap and not the drawn wordmark that used to be here.
        const int32_t usable = inner_w - pad * 2;
        // The pane is tall and narrow and the logo is very wide, so width is
        // what sizes it; the cap stops a short pane being all marquee.
        const int32_t marquee_cap = clamp_i(surface_h / 5, 80, 360);
        const present_pane logo =
            fit_recomp_logo(present_pane{inner_x + pad, margin + pad, usable,
                                         marquee_cap});
        // A small text scale is still wanted below, for the meter's label.
        int32_t small = clamp_i(usable / 96, 1, 5);
        while (small > 1 &&
               static_cast<int32_t>(text_pixel_width("ARCADE", small, 8)) >
                   usable)
            --small;

        const int32_t marquee_h = pad * 2 + logo.height;
        const present_pane marquee{inner_x, margin, inner_w, marquee_h};
        out.plaque(marquee, pad, kPlaque);
        // The marquee's own edge, inset so the cut corners still read.
        out.outline(present_pane{marquee.x, marquee.y + pad / 2, marquee.width,
                                 marquee.height - pad},
                    2, kAccent);
        draw_recomp_logo(out, present_pane{logo.x, marquee.y + pad, logo.width,
                                           logo.height});

        // NO EQUALISER. It was here, at the foot of the pane, and it was the
        // one part of the surround that changed every frame: its bars were
        // painted on the CPU and re-uploaded on every present. On a desktop
        // that was affordable and it was a nice thing to look at. On a handheld
        // it is per-frame work on the guest's own thread for decoration, and
        // the pane reads better with the pad given the room instead.
        //
        // draw_spectrum_meter() and audio_spectrum are deliberately left in the
        // tree: the analysis is correct, it is tested, and the reason it is not
        // drawn is a budget rather than a fault.
        const int32_t meter_top = surface_h;

        // The controller the player is actually holding. These are Xbox 360
        // titles, so this is a 360 pad - drawn, labelled from the runtime's own
        // bindings, and sized to fill whatever the marquee and the meter left
        // between them, so the pane reads as three things spaced down it rather
        // than as two at the ends with a hole in the middle.
        const int32_t gap_top = marquee.y + marquee.height + margin;
        const int32_t gap_height = meter_top - margin - gap_top;
        if (gap_height > 120)
            draw_gamepad(out, m_rgba.data(), surface_width, surface_height,
                         present_pane{inner_x, gap_top, inner_w, gap_height},
                         title.controls);
    }

    // --- the right pane: what is playing ----------------------------------
    if (right_width >= kMinimumSide) {
        const int32_t pane_x = picture.x + picture.width;
        const int32_t margin = clamp_i(right_width / 12, 16, 72);
        const int32_t inner_x = pane_x + margin;
        const int32_t inner_w = right_width - margin * 2;
        const int32_t inner_h = surface_h - margin * 2;

        // The panel is built by text_panel - the same plaque the system's own
        // achievement page is - so the two look like one product. The scale is
        // chosen here rather than by build_to_fit(), which sizes for a frame
        // rather than for a column of border.
        text_panel panel;
        bool fitted = false;
        for (uint32_t scale = 4; scale >= 1 && !fitted; --scale) {
            const uint32_t room = static_cast<uint32_t>(inner_w) / scale;
            if (room < text_panel::kPadding * 2 + text_panel::kGlyphWidth)
                continue;
            const uint32_t columns =
                (room - text_panel::kPadding * 2) / text_panel::kGlyphWidth;
            panel = text_panel(scale);
            panel.build(build_cabinet_lines(title, columns), columns);
            // The width always fits by construction - the columns were derived
            // from it - so this is really asking whether the page is too TALL,
            // which a title with a long score table can be.
            if (panel.height() <= static_cast<uint32_t>(inner_h) &&
                panel.width() <= static_cast<uint32_t>(inner_w))
                fitted = true;
        }
        // Nothing fitted even at one pixel per pixel: the smallest page is
        // still shown, clipped by the canvas, rather than the pane being left
        // empty. An empty pane is indistinguishable from a build that never
        // ran, and this way the top of the panel - which is the title's name -
        // is always the part that survives.
        if (!panel.empty()) {
            const int32_t panel_x =
                inner_x + (inner_w - static_cast<int32_t>(panel.width())) / 2;
            // Vertically centred rather than hung from the top. What the panel
            // says grows and shrinks with the title - a title with no scores
            // yet has half the rows of one with a full table - and a box pinned
            // to the top of a 1440-pixel column leaves the bottom two thirds of
            // the pane visibly empty.
            int32_t panel_y =
                margin +
                (inner_h - static_cast<int32_t>(panel.height())) / 2;
            if (panel_y < margin) panel_y = margin;
            out.blit(panel.rgba(), panel.width(), panel.height(), panel_x,
                     panel_y);
        }
    }

    return true;
}

} // namespace whitty_xenon::gpu
