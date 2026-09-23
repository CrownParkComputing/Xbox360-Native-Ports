// overlay.h - the "WhittyArcade" credit drawn over a finished frame.
//
// A native port should say who made it. This draws a small line of text into
// the corner of the frame after the title has finished with it, so nothing the
// game renders can cover it and nothing it does is disturbed by it.
//
// The credit is deliberately built as a *bitmap plus a list of opaque spans*
// rather than as geometry. That shape is what makes it free at both ends of the
// pipeline: the presenting backend copies the spans straight into the swapchain
// image with one transfer command - no pipeline, no shader, no render pass, no
// readback - and a host-side capture composites the same spans into the pixels
// it already has. Both draw the identical thing from the identical data, so
// what a screenshot shows is what the window shows.
//
// Legibility comes from a one-pixel halo around every glyph rather than from
// translucency: a transfer copy cannot blend, and a dark outline reads on a
// bright background as well as on a dark one, which matters over a game whose
// palette is mostly neon on black.
#pragma once

#include <cstdint>
#include <string>
#include <vector>

namespace whitty_xenon::gpu {

// A rectangle of the credit's bitmap that is fully opaque. Coordinates are in
// bitmap pixels, relative to the bitmap's top-left. Spans never overlap and
// together they cover every non-transparent pixel, so a consumer that copies
// each span touches the credit and nothing else.
struct overlay_span {
    uint32_t x{0};
    uint32_t y{0};
    uint32_t width{0};
    uint32_t height{0};
};

class credit_overlay {
public:
    // WHITTY_OVERLAY=0 suppresses the credit; anything else, including the
    // variable being absent, leaves it on.
    static bool enabled_by_environment();

    // `scale` is bitmap pixels per font pixel. The font is 5x9, so scale 2
    // gives an 18-pixel-tall line - small on a 720p frame, still legible.
    //
    // An empty `text` (the default) draws the baked Retro Recompilation
    // marquee bitmap instead of any font text - the same artwork the side
    // panel's marquee uses (see embedded/recomp_logo.h) - so the in-frame
    // credit and the panel agree without a font ever having to spell out a
    // wordmark this stylised. `scale` still governs its size, in font-pixel
    // units, so callers that always pass a scale keep working unchanged.
    explicit credit_overlay(const std::string& text = "", uint32_t scale = 2);

    uint32_t width() const noexcept { return m_width; }
    uint32_t height() const noexcept { return m_height; }

    // Tightly packed RGBA8, width()*height()*4 bytes. Transparent pixels are
    // all-zero and are not covered by any span.
    const std::vector<uint8_t>& rgba() const noexcept { return m_rgba; }
    // The same bitmap with red and blue exchanged, for a B8G8R8A8 swapchain.
    std::vector<uint8_t> bgra() const;

    const std::vector<overlay_span>& spans() const noexcept { return m_spans; }

    // Where the credit's top-left goes in a frame of this size: the bottom
    // right corner, inset by a margin that grows with the scale. A frame too
    // small to hold it reports false and is left alone.
    bool placement(uint32_t frame_width, uint32_t frame_height, int32_t& x,
                   int32_t& y) const;

    // Composites the credit into a tightly packed RGBA8 frame. The same
    // pixels a presenting backend would copy, so a capture matches the window.
    void draw(uint8_t* frame, uint32_t frame_width,
              uint32_t frame_height) const;

private:
    void build(const std::string& text);
    void build_from_logo();

    uint32_t m_scale{2};
    uint32_t m_cells_wide{0};
    uint32_t m_cells_high{0};
    uint32_t m_width{0};
    uint32_t m_height{0};
    std::vector<uint8_t> m_rgba;
    std::vector<overlay_span> m_spans;
};

} // namespace whitty_xenon::gpu
