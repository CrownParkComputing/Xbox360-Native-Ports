// text_panel.h - a page of text drawn over a finished frame.
//
// This is the system's own UI, not the title's. Two of Geometry Wars' menu
// entries lead somewhere the title does not draw: selecting Achievements calls
// XamShowAchievementsUI, which on a console hands the whole screen to the
// dashboard's achievement blade, and the title renders nothing at all for it.
// Xenia answers that call by drawing the list itself; so does this. The panel is
// therefore not a substitute for a title screen - it IS the screen the title
// asked the system for.
//
// Built on the same idea as credit_overlay: a bitmap plus a list of opaque
// spans, so a presenting backend copies it with transfer commands and a host
// capture composites the identical pixels. The difference is that this one is a
// full page and its content changes, so it is rebuilt on demand rather than
// once at startup.
//
// The face is Spleen 8x16 (src/font8x16.inc, BSD-2-Clause, Frederic Cambus),
// not the 3x5 font the diagnostic frame uses. The 3x5 font was built to put a
// dozen characters of state on a debug frame and it has no lowercase at all, so
// it folded every achievement name and every leaderboard name to capitals. That
// is a reasonable trade for a frame counter and the wrong one for a page of
// prose. Spleen is a bitmap font DESIGNED at this size - one pixel per pixel,
// even strokes, real ascenders and descenders - so it costs a 1.5 KB table and
// no rasteriser, and it composites through exactly the same single opaque copy
// the old font did.
#pragma once

#include "whitty_xenon/gpu/overlay.h"

#include <cstdint>
#include <string>
#include <vector>

namespace whitty_xenon::gpu {

// One line of the page. Colour is per line, because the page's job is to
// distinguish states: an unlocked achievement has to look different from a
// locked one at a glance.
struct panel_line {
    std::string text;
    uint8_t r{0xE6};
    uint8_t g{0xEC};
    uint8_t b{0xF1};
    // Half-height gap above this line, used to separate blocks without
    // spending a whole blank line on it.
    bool gap_before{false};
};

// --- the same font, without a page around it -------------------------------
//
// text_panel below is a PAGE: a plaque with a border and a background, laid
// over the finished frame. The cabinet surround wants the same letters painted
// straight into artwork it has already drawn - a marquee, a heading, a row of a
// table - so the glyph loop is exposed here rather than copied into a second
// file. One font table, one reading of it, so a page and the cabinet cannot end
// up disagreeing about what the font is.
//
// `scale` is bitmap pixels per font pixel, exactly as text_panel's is.
// `tracking` is extra font pixels between characters, which is what makes a
// wordmark read as a wordmark rather than as a line of body text; it is not
// added after the last character, so the width below is the ink's width.
//
// Coordinates are in bitmap pixels and anything outside the bitmap is clipped.
// A character the font does not draw still advances the pen, so a row laid out
// by counting characters keeps its columns.
uint32_t text_pixel_width(const std::string& text, uint32_t scale,
                          uint32_t tracking = 0);
uint32_t text_pixel_height(uint32_t scale);
void draw_text(uint8_t* rgba, uint32_t width, uint32_t height, int32_t x,
               int32_t y, const std::string& text, uint32_t scale,
               const uint8_t colour[3], uint32_t tracking = 0);

class text_panel {
public:
    // The font's cell, in font pixels. The glyphs are drawn on an 8x16 grid
    // with the ink inside columns 0..6 and rows 1..14, so the cell already
    // carries its own inter-character gap and line leading: a page is laid out
    // by multiplying these, with nothing added between.
    static constexpr uint32_t kGlyphWidth = 8;
    static constexpr uint32_t kGlyphHeight = 16;
    // Padding inside the plaque, in font pixels.
    static constexpr uint32_t kPadding = 8;

    // `scale` is bitmap pixels per font pixel: 1 gives 8x16 glyphs, which is
    // the size the font was drawn at and what a 720p frame wants.
    explicit text_panel(uint32_t scale = 1);

    // The scale a frame of this height wants: one font pixel per 540 rows, so
    // 720p gets 8x16 glyphs and 1080p gets 16x32. A page then holds roughly the
    // same share of the screen whatever resolution the title renders at, rather
    // than shrinking into the corner of a bigger frame - the window now opens at
    // the title's own size, so this is not hypothetical. Capped at 3 because
    // beyond that the plaque is the screen.
    static uint32_t scale_for(uint32_t frame_height) noexcept;

    // Renders `lines` into the bitmap. `columns` fixes the page width in
    // characters so the panel does not jump about as the text changes; lines
    // longer than that are clipped rather than wrapped, which keeps a row a row.
    void build(const std::vector<panel_line>& lines, uint32_t columns);

    // The same, sized for the surface it will be composited into: the scale
    // starts at scale_for() and steps down until the page fits, and the columns
    // are clipped to what the width can hold. A page is copied into the surface
    // one pixel to one pixel and a copy that runs off the edge is dropped
    // whole, so a page too big for the frame is a page nobody sees - which is
    // indistinguishable from a handler that never fired. Returns false when even
    // one font pixel per pixel does not fit, in which case the page is built
    // anyway at scale 1 and the caller can say so.
    bool build_to_fit(const std::vector<panel_line>& lines, uint32_t columns,
                      uint32_t frame_width, uint32_t frame_height);

    uint32_t width() const noexcept { return m_width; }
    uint32_t height() const noexcept { return m_height; }
    bool empty() const noexcept { return m_rgba.empty(); }

    // Tightly packed RGBA8, width()*height()*4 bytes.
    const std::vector<uint8_t>& rgba() const noexcept { return m_rgba; }
    // The same bitmap with red and blue exchanged, for a B8G8R8A8 swapchain.
    std::vector<uint8_t> bgra() const;

    // The regions to copy. The panel is an opaque plaque, so this is one span
    // per row band rather than one per glyph - a blade covers the screen behind
    // it, exactly as the console's does.
    const std::vector<overlay_span>& spans() const noexcept { return m_spans; }

    // Where the panel's top-left goes in a frame of this size: centred. False
    // when the frame is too small to hold it, in which case it is not drawn at
    // all rather than drawn clipped.
    bool placement(uint32_t frame_width, uint32_t frame_height, int32_t& x,
                   int32_t& y) const;

    // Composites the panel into a tightly packed RGBA8 frame.
    void draw(uint8_t* frame, uint32_t frame_width,
              uint32_t frame_height) const;

    // Bitmap pixels per font pixel, as the last build used.
    uint32_t scale() const noexcept { return m_scale; }

private:
    void plot(uint32_t x, uint32_t y, uint8_t r, uint8_t g, uint8_t b);

    uint32_t m_scale{1};
    uint32_t m_width{0};
    uint32_t m_height{0};
    std::vector<uint8_t> m_rgba;
    std::vector<overlay_span> m_spans;
};

} // namespace whitty_xenon::gpu
