#include "whitty_xenon/gpu/text_panel.h"

#include <cstring>

namespace whitty_xenon::gpu {
namespace {

// Spleen 8x16: sixteen rows a glyph, top row first, and within a row bit 7 is
// the leftmost pixel. See src/font8x16.inc for the licence and provenance.
constexpr uint8_t kFont[] = {
#include "../font8x16.inc"
};
constexpr uint32_t kGlyphWidth = text_panel::kGlyphWidth;
constexpr uint32_t kGlyphHeight = text_panel::kGlyphHeight;
constexpr uint8_t kFirstCode = 0x20;
constexpr uint8_t kLastCode = 0x7E;
static_assert(sizeof(kFont) ==
                  static_cast<std::size_t>(kLastCode - kFirstCode + 1) *
                      kGlyphHeight,
              "the font table is not one 16-row cell per printable ASCII code");

// The glyph's rows, or nullptr for a character the font does not draw.
//
// The cell already carries its own spacing, so the advance IS the cell: there
// is no gap added between glyphs or between lines.
constexpr uint32_t kAdvance = kGlyphWidth;
constexpr uint32_t kLineAdvance = kGlyphHeight;
constexpr uint32_t kPadding = text_panel::kPadding;

const uint8_t* glyph_rows(char character) noexcept {
    const uint8_t code = static_cast<uint8_t>(character);
    // Everything outside printable ASCII draws nothing and still advances the
    // pen. That covers the UTF-8 bytes an SPA string can carry - the title's
    // own text, which is not ours to transliterate - and keeps the columns of
    // every row after it where the layout put them.
    if (code < kFirstCode || code > kLastCode) return nullptr;
    return kFont + static_cast<std::size_t>(code - kFirstCode) * kGlyphHeight;
}

// The plaque: dark, but not black, so it reads as a panel laid over the game
// rather than as a hole in it. Opaque because a transfer copy cannot blend.
constexpr uint8_t kBackground[3] = {0x0C, 0x10, 0x14};
constexpr uint8_t kBorder[3] = {0x50, 0xC0, 0x60};

} // namespace

uint32_t text_pixel_height(uint32_t scale) {
    return kGlyphHeight * (scale == 0 ? 1 : scale);
}

uint32_t text_pixel_width(const std::string& text, uint32_t scale,
                          uint32_t tracking) {
    if (scale == 0) scale = 1;
    if (text.empty()) return 0;
    const uint32_t count = static_cast<uint32_t>(text.size());
    return (count * kAdvance + (count - 1) * tracking) * scale;
}

void draw_text(uint8_t* rgba, uint32_t width, uint32_t height, int32_t x,
               int32_t y, const std::string& text, uint32_t scale,
               const uint8_t colour[3], uint32_t tracking) {
    if (rgba == nullptr || colour == nullptr || width == 0 || height == 0)
        return;
    if (scale == 0) scale = 1;
    for (std::size_t index = 0; index < text.size(); ++index) {
        const uint8_t* rows_of = glyph_rows(text[index]);
        const int32_t cell_x =
            x + static_cast<int32_t>(index * (kAdvance + tracking) * scale);
        if (rows_of == nullptr) continue;
        for (uint32_t row = 0; row < kGlyphHeight; ++row) {
            const uint8_t bits = rows_of[row];
            if (bits == 0) continue;
            for (uint32_t column = 0; column < kGlyphWidth; ++column) {
                if (((bits >> (kGlyphWidth - 1 - column)) & 1u) == 0) continue;
                for (uint32_t sy = 0; sy < scale; ++sy) {
                    const int32_t py =
                        y + static_cast<int32_t>(row * scale + sy);
                    if (py < 0 || py >= static_cast<int32_t>(height)) continue;
                    for (uint32_t sx = 0; sx < scale; ++sx) {
                        const int32_t px =
                            cell_x + static_cast<int32_t>(column * scale + sx);
                        if (px < 0 || px >= static_cast<int32_t>(width))
                            continue;
                        const std::size_t at =
                            (static_cast<std::size_t>(py) * width + px) * 4;
                        rgba[at + 0] = colour[0];
                        rgba[at + 1] = colour[1];
                        rgba[at + 2] = colour[2];
                        rgba[at + 3] = 0xFF;
                    }
                }
            }
        }
    }
}

text_panel::text_panel(uint32_t scale) : m_scale(scale == 0 ? 1 : scale) {}

void text_panel::plot(uint32_t x, uint32_t y, uint8_t r, uint8_t g, uint8_t b) {
    if (x >= m_width || y >= m_height) return;
    const std::size_t at = (static_cast<std::size_t>(y) * m_width + x) * 4;
    m_rgba[at + 0] = r;
    m_rgba[at + 1] = g;
    m_rgba[at + 2] = b;
    m_rgba[at + 3] = 0xFF;
}

void text_panel::build(const std::vector<panel_line>& lines, uint32_t columns) {
    m_rgba.clear();
    m_spans.clear();
    m_width = 0;
    m_height = 0;
    if (lines.empty() || columns == 0) return;

    // Height in font pixels: the padding, then a line advance per line plus a
    // half advance wherever a gap was asked for.
    uint32_t rows = 0;
    for (const panel_line& line : lines)
        rows += kLineAdvance + (line.gap_before ? kLineAdvance / 2 : 0);

    const uint32_t cells_wide = columns * kAdvance + kPadding * 2;
    const uint32_t cells_high = rows + kPadding * 2;
    m_width = cells_wide * m_scale;
    m_height = cells_high * m_scale;
    m_rgba.assign(static_cast<std::size_t>(m_width) * m_height * 4, 0);

    // Fill the plaque, then a border two font pixels wide. One row is plotted
    // and the rest are copied from it rather than plotted pixel by pixel: a page
    // is a third of a megapixel, and filling it a pixel at a time cost a
    // millisecond every time the page changed.
    const uint32_t edge = 2 * m_scale;
    for (uint32_t x = 0; x < m_width; ++x) {
        const bool side = x < edge || x + edge >= m_width;
        if (side)
            plot(x, 0, kBorder[0], kBorder[1], kBorder[2]);
        else
            plot(x, 0, kBackground[0], kBackground[1], kBackground[2]);
    }
    const std::size_t row_bytes = static_cast<std::size_t>(m_width) * 4;
    for (uint32_t y = 1; y < m_height; ++y)
        std::memcpy(m_rgba.data() + static_cast<std::size_t>(y) * row_bytes,
                    m_rgba.data(), row_bytes);
    // The top and bottom bands, which are border all the way across.
    for (uint32_t y = 0; y < m_height; ++y) {
        if (y >= edge && y + edge < m_height) continue;
        for (uint32_t x = 0; x < m_width; ++x)
            plot(x, y, kBorder[0], kBorder[1], kBorder[2]);
    }

    uint32_t pen_row = kPadding;
    for (const panel_line& line : lines) {
        if (line.gap_before) pen_row += kLineAdvance / 2;
        for (std::size_t index = 0;
             index < line.text.size() && index < columns; ++index) {
            const uint8_t* rows_of = glyph_rows(line.text[index]);
            if (rows_of == nullptr) continue;
            const uint32_t cell_x =
                kPadding + static_cast<uint32_t>(index) * kAdvance;
            for (uint32_t row = 0; row < kGlyphHeight; ++row) {
                const uint8_t bits = rows_of[row];
                if (bits == 0) continue;
                for (uint32_t column = 0; column < kGlyphWidth; ++column) {
                    // Row 0 is the TOP of the glyph and bit 7 is its leftmost
                    // pixel. Reading either the other way round mirrors every
                    // character, which looks like a corrupt font rather than an
                    // inverted loop - so both are pinned by test.
                    if (((bits >> (kGlyphWidth - 1 - column)) & 1u) == 0)
                        continue;
                    const uint32_t pixel_y = (pen_row + row) * m_scale;
                    const uint32_t pixel_x = (cell_x + column) * m_scale;
                    for (uint32_t sy = 0; sy < m_scale; ++sy)
                        for (uint32_t sx = 0; sx < m_scale; ++sx)
                            plot(pixel_x + sx, pixel_y + sy, line.r, line.g,
                                 line.b);
                }
            }
        }
        pen_row += kLineAdvance;
    }

    // One span for the whole plaque: it is opaque, so there is nothing to be
    // gained by splitting it and a single region is the cheapest possible copy.
    m_spans.push_back(overlay_span{0, 0, m_width, m_height});
}

uint32_t text_panel::scale_for(uint32_t frame_height) noexcept {
    constexpr uint32_t kRowsPerFontPixel = 540;
    constexpr uint32_t kMaximumScale = 3;
    const uint32_t wanted = frame_height / kRowsPerFontPixel;
    if (wanted < 1) return 1;
    return wanted > kMaximumScale ? kMaximumScale : wanted;
}

bool text_panel::build_to_fit(const std::vector<panel_line>& lines,
                              uint32_t columns, uint32_t frame_width,
                              uint32_t frame_height) {
    uint32_t scale = scale_for(frame_height);
    for (;;) {
        m_scale = scale;
        // Clip the page to the columns this width can hold rather than build a
        // page too wide to copy. A row is laid out by counting characters, so a
        // narrower page loses the right-hand end of a line - which is the least
        // of the ways this can go wrong, and the only one that still shows the
        // player their scores.
        const uint32_t room = frame_width / scale;
        uint32_t fits = columns;
        if (room < kPadding * 2 + kGlyphWidth)
            fits = 1;
        else if ((room - kPadding * 2) / kGlyphWidth < columns)
            fits = (room - kPadding * 2) / kGlyphWidth;
        build(lines, fits);
        if (m_width <= frame_width && m_height <= frame_height) return true;
        if (scale == 1) return false;
        --scale;
    }
}

std::vector<uint8_t> text_panel::bgra() const {
    std::vector<uint8_t> swapped = m_rgba;
    for (std::size_t at = 0; at + 3 < swapped.size(); at += 4)
        std::swap(swapped[at + 0], swapped[at + 2]);
    return swapped;
}

bool text_panel::placement(uint32_t frame_width, uint32_t frame_height,
                           int32_t& x, int32_t& y) const {
    if (m_width == 0 || m_height == 0) return false;
    if (frame_width < m_width || frame_height < m_height) return false;
    x = static_cast<int32_t>((frame_width - m_width) / 2);
    y = static_cast<int32_t>((frame_height - m_height) / 2);
    return true;
}

void text_panel::draw(uint8_t* frame, uint32_t frame_width,
                      uint32_t frame_height) const {
    int32_t origin_x = 0;
    int32_t origin_y = 0;
    if (frame == nullptr) return;
    if (!placement(frame_width, frame_height, origin_x, origin_y)) return;
    for (const overlay_span& span : m_spans) {
        for (uint32_t row = 0; row < span.height; ++row) {
            const uint32_t source_y = span.y + row;
            const uint32_t target_y =
                static_cast<uint32_t>(origin_y) + source_y;
            if (target_y >= frame_height) break;
            const std::size_t source =
                (static_cast<std::size_t>(source_y) * m_width + span.x) * 4;
            const std::size_t target =
                (static_cast<std::size_t>(target_y) * frame_width +
                 static_cast<uint32_t>(origin_x) + span.x) * 4;
            std::memcpy(frame + target, m_rgba.data() + source,
                        static_cast<std::size_t>(span.width) * 4);
        }
    }
}

} // namespace whitty_xenon::gpu
