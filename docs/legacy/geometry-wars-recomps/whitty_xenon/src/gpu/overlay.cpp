// overlay.cpp - the "WhittyArcade" credit.
//
// Twelve characters do not justify a font library, so the glyphs are here: a
// 5x9 cell per character, one byte per row, bit 4 the leftmost pixel. Only the
// letters the credit needs exist; anything else advances the pen and draws
// nothing, which is the right failure for a decoration.
//
// The interesting part is not the font, it is the span list. A credit that has
// to be composited every frame must not cost anything, and the cheapest thing a
// GPU can do with a picture is copy it - no pipeline, no shader, no blending.
// Copying the credit's bounding box would paint an opaque plaque over the game,
// so instead the bitmap is reduced to the maximal horizontal runs of pixels that
// are actually part of the credit. Each run becomes one transfer region: the
// glyphs and their halo land on the frame and nothing else is touched.
//
// The runs are found on the *font* grid and then multiplied by the scale, so
// doubling the size does not double the number of regions - a run of n font
// pixels at scale s is one region s*n wide and s tall, because the scaled
// bitmap repeats each font row s times and a copy can read them all at once.
#include "whitty_xenon/gpu/overlay.h"

#include "whitty_xenon/gpu/embedded/recomp_logo.h"

#include <algorithm>
#include <cstdlib>
#include <cstring>

namespace whitty_xenon::gpu {

namespace {

constexpr uint32_t kCellWidth = 5;
constexpr uint32_t kCellHeight = 9;
// One pixel of margin all round, so the halo of a glyph on the edge has
// somewhere to go.
constexpr uint32_t kBorder = 1;

struct font_glyph {
    char code;
    uint8_t rows[kCellHeight];
};

// Rows run top to bottom. Capitals occupy rows 0-6, x-height letters rows 2-6,
// and 'y' reaches rows 7-8 for its descender - which is why the cell is nine
// rows rather than seven.
constexpr font_glyph kFont[] = {
    {'W', {0b10001, 0b10001, 0b10001, 0b10101, 0b10101, 0b10101, 0b01010,
           0b00000, 0b00000}},
    {'A', {0b00100, 0b01010, 0b10001, 0b10001, 0b11111, 0b10001, 0b10001,
           0b00000, 0b00000}},
    {'h', {0b10000, 0b10000, 0b11110, 0b10001, 0b10001, 0b10001, 0b10001,
           0b00000, 0b00000}},
    {'i', {0b00100, 0b00000, 0b00100, 0b00100, 0b00100, 0b00100, 0b00100,
           0b00000, 0b00000}},
    {'t', {0b00100, 0b00100, 0b01110, 0b00100, 0b00100, 0b00100, 0b00110,
           0b00000, 0b00000}},
    {'y', {0b00000, 0b00000, 0b10001, 0b10001, 0b10001, 0b01111, 0b00001,
           0b00001, 0b01110}},
    {'r', {0b00000, 0b00000, 0b10110, 0b11001, 0b10000, 0b10000, 0b10000,
           0b00000, 0b00000}},
    {'c', {0b00000, 0b00000, 0b01110, 0b10001, 0b10000, 0b10001, 0b01110,
           0b00000, 0b00000}},
    {'a', {0b00000, 0b00000, 0b01110, 0b00001, 0b01111, 0b10001, 0b01111,
           0b00000, 0b00000}},
    {'d', {0b00001, 0b00001, 0b01111, 0b10001, 0b10001, 0b10001, 0b01111,
           0b00000, 0b00000}},
    {'e', {0b00000, 0b00000, 0b01110, 0b10001, 0b11111, 0b10000, 0b01110,
           0b00000, 0b00000}},
    // Digits and "FPS", for the frame-rate readout. Same 5x7-in-a-9-row cell as
    // the capitals above, so they sit on the credit's baseline.
    {'0', {0b01110, 0b10001, 0b10011, 0b10101, 0b11001, 0b10001, 0b01110,
           0b00000, 0b00000}},
    {'1', {0b00100, 0b01100, 0b00100, 0b00100, 0b00100, 0b00100, 0b01110,
           0b00000, 0b00000}},
    {'2', {0b01110, 0b10001, 0b00001, 0b00010, 0b00100, 0b01000, 0b11111,
           0b00000, 0b00000}},
    {'3', {0b11111, 0b00010, 0b00100, 0b00010, 0b00001, 0b10001, 0b01110,
           0b00000, 0b00000}},
    {'4', {0b00010, 0b00110, 0b01010, 0b10010, 0b11111, 0b00010, 0b00010,
           0b00000, 0b00000}},
    {'5', {0b11111, 0b10000, 0b11110, 0b00001, 0b00001, 0b10001, 0b01110,
           0b00000, 0b00000}},
    {'6', {0b00110, 0b01000, 0b10000, 0b11110, 0b10001, 0b10001, 0b01110,
           0b00000, 0b00000}},
    {'7', {0b11111, 0b00001, 0b00010, 0b00100, 0b01000, 0b01000, 0b01000,
           0b00000, 0b00000}},
    {'8', {0b01110, 0b10001, 0b10001, 0b01110, 0b10001, 0b10001, 0b01110,
           0b00000, 0b00000}},
    {'9', {0b01110, 0b10001, 0b10001, 0b01111, 0b00001, 0b00010, 0b01100,
           0b00000, 0b00000}},
    {'F', {0b11111, 0b10000, 0b10000, 0b11110, 0b10000, 0b10000, 0b10000,
           0b00000, 0b00000}},
    {'P', {0b11110, 0b10001, 0b10001, 0b11110, 0b10000, 0b10000, 0b10000,
           0b00000, 0b00000}},
    {'S', {0b01111, 0b10000, 0b10000, 0b01110, 0b00001, 0b00001, 0b11110,
           0b00000, 0b00000}},
};

const font_glyph* find_glyph(char code) {
    for (const font_glyph& candidate : kFont)
        if (candidate.code == code) return &candidate;
    return nullptr;
}

// The credit's own colours. Light enough to read over the black a vector game
// mostly is, dim enough not to compete with its neon; the halo is near-black so
// the text also survives a bright explosion filling the corner.
constexpr uint8_t kInk[4] = {0xC8, 0xD4, 0xE0, 0xFF};
constexpr uint8_t kHalo[4] = {0x08, 0x0A, 0x10, 0xFF};

// What the credit is inset from the corner by, in font pixels. Far enough in
// that a display which crops its edges does not cut the credit off.
constexpr uint32_t kMarginCells = 7;

} // namespace

bool credit_overlay::enabled_by_environment() {
    const char* value = std::getenv("WHITTY_OVERLAY");
    return value == nullptr || value[0] != '0';
}

credit_overlay::credit_overlay(const std::string& text, uint32_t scale)
    : m_scale(scale == 0 ? 1 : scale) {
    if (text.empty())
        build_from_logo();
    else
        build(text);
}

// The marquee bitmap, downsampled to a corner-watermark size and alpha-keyed
// on brightness - the artwork is ink on black (see embedded/recomp_logo.h),
// so a dark source pixel becomes a transparent one here exactly as it does on
// the side panel. Box-filtered rather than nearest-neighbour: the source is
// stroke art at 512x136 shrunk roughly 4-6x for a frame corner, and nearest-
// neighbour on strokes that thin either drops them between samples or aliases
// them, both of which read as a broken logo rather than a small one.
void credit_overlay::build_from_logo() {
    // `m_scale` here is a font-pixel-equivalent size knob for API
    // compatibility with the text path; the logo has no font grid, so it is
    // reinterpreted directly as the marquee's height in output pixels, held
    // to a legible floor - the same halo-scale callers use for the credit
    // (2) would be illegibly small for artwork this detailed.
    const uint32_t target_height = std::max(m_scale * 9u, 28u);
    const uint32_t target_width = static_cast<uint32_t>(
        (static_cast<uint64_t>(target_height) * kRecompLogoWidth) /
        kRecompLogoHeight);
    m_width = std::max(target_width, 1u);
    m_height = std::max(target_height, 1u);
    m_cells_wide = m_width;
    m_cells_high = m_height;

    m_rgba.assign(static_cast<std::size_t>(m_width) * m_height * 4, 0);
    for (uint32_t y = 0; y < m_height; ++y) {
        // The source box this output row covers, in source rows.
        const uint32_t src_y0 = (y * kRecompLogoHeight) / m_height;
        uint32_t src_y1 = ((y + 1) * kRecompLogoHeight) / m_height;
        if (src_y1 <= src_y0) src_y1 = src_y0 + 1;
        for (uint32_t x = 0; x < m_width; ++x) {
            const uint32_t src_x0 = (x * kRecompLogoWidth) / m_width;
            uint32_t src_x1 = ((x + 1) * kRecompLogoWidth) / m_width;
            if (src_x1 <= src_x0) src_x1 = src_x0 + 1;
            uint32_t sum_r = 0, sum_g = 0, sum_b = 0, count = 0;
            for (uint32_t sy = src_y0; sy < src_y1 && sy < kRecompLogoHeight;
                 ++sy) {
                for (uint32_t sx = src_x0;
                     sx < src_x1 && sx < kRecompLogoWidth; ++sx) {
                    const std::size_t at =
                        (static_cast<std::size_t>(sy) * kRecompLogoWidth +
                         sx) *
                        3;
                    sum_r += kRecompLogoRgb[at + 0];
                    sum_g += kRecompLogoRgb[at + 1];
                    sum_b += kRecompLogoRgb[at + 2];
                    ++count;
                }
            }
            if (count == 0) continue;
            const uint8_t r = static_cast<uint8_t>(sum_r / count);
            const uint8_t g = static_cast<uint8_t>(sum_g / count);
            const uint8_t b = static_cast<uint8_t>(sum_b / count);
            const uint8_t coverage = std::max({r, g, b});
            if (coverage == 0) continue; // background: stays transparent
            uint8_t* pixel =
                m_rgba.data() +
                (static_cast<std::size_t>(y) * m_width + x) * 4;
            pixel[0] = r;
            pixel[1] = g;
            pixel[2] = b;
            pixel[3] = coverage;
        }
    }

    // Spans: maximal opaque horizontal runs, one row of source resolution
    // each (no scale-block repetition here, unlike the font path, because
    // every output row can differ - it is downsampled art, not a stamp).
    m_spans.clear();
    for (uint32_t y = 0; y < m_height; ++y) {
        uint32_t run_start = 0;
        uint32_t run_length = 0;
        for (uint32_t x = 0; x <= m_width; ++x) {
            const bool filled =
                x < m_width &&
                m_rgba[(static_cast<std::size_t>(y) * m_width + x) * 4 + 3] !=
                    0;
            if (filled) {
                if (run_length == 0) run_start = x;
                ++run_length;
                continue;
            }
            if (run_length != 0) {
                m_spans.push_back({run_start, y, run_length, 1});
                run_length = 0;
            }
        }
    }
}

void credit_overlay::build(const std::string& text) {
    // Lay the glyphs out on the font grid first. Each one is trimmed to its own
    // ink and given a single pixel of gap, so 'i' takes the space of one column
    // rather than five and the line reads as text rather than as a grid.
    std::vector<uint8_t> ink_cells;
    uint32_t pen = kBorder;
    struct placed {
        const font_glyph* glyph;
        uint32_t x;
        uint32_t low;
        uint32_t span;
    };
    std::vector<placed> placements;
    for (char character : text) {
        const font_glyph* glyph = find_glyph(character);
        uint32_t low = kCellWidth;
        uint32_t high = 0;
        if (glyph != nullptr) {
            for (uint32_t row = 0; row < kCellHeight; ++row) {
                for (uint32_t column = 0; column < kCellWidth; ++column) {
                    if ((glyph->rows[row] >> (kCellWidth - 1 - column)) & 1u) {
                        if (column < low) low = column;
                        if (column > high) high = column;
                    }
                }
            }
        }
        if (low > high) {
            // A space, or a character the font does not have: leave a gap the
            // width of a narrow letter and move on.
            pen += 3;
            continue;
        }
        const uint32_t span = high - low + 1;
        placements.push_back({glyph, pen, low, span});
        pen += span + 1;
    }
    // The trailing gap after the last glyph is not part of the credit.
    if (!placements.empty()) pen -= 1;

    m_cells_wide = pen + kBorder;
    m_cells_high = kCellHeight + 2 * kBorder;
    ink_cells.assign(static_cast<std::size_t>(m_cells_wide) * m_cells_high, 0);
    for (const placed& item : placements) {
        for (uint32_t row = 0; row < kCellHeight; ++row) {
            for (uint32_t column = item.low;
                 column < item.low + item.span; ++column) {
                if (!((item.glyph->rows[row] >> (kCellWidth - 1 - column)) & 1u))
                    continue;
                const uint32_t x = item.x + (column - item.low);
                const uint32_t y = row + kBorder;
                ink_cells[static_cast<std::size_t>(y) * m_cells_wide + x] = 1;
            }
        }
    }

    // The halo is the glyphs grown by one pixel in every direction, minus the
    // glyphs themselves. Drawn under nothing and over nothing: it and the ink
    // are disjoint, so the two never fight over a pixel.
    std::vector<uint8_t> halo_cells(ink_cells.size(), 0);
    for (uint32_t y = 0; y < m_cells_high; ++y) {
        for (uint32_t x = 0; x < m_cells_wide; ++x) {
            const std::size_t index =
                static_cast<std::size_t>(y) * m_cells_wide + x;
            if (ink_cells[index]) continue;
            bool touching = false;
            for (int dy = -1; dy <= 1 && !touching; ++dy) {
                for (int dx = -1; dx <= 1 && !touching; ++dx) {
                    if (dx == 0 && dy == 0) continue;
                    const int nx = static_cast<int>(x) + dx;
                    const int ny = static_cast<int>(y) + dy;
                    if (nx < 0 || ny < 0 ||
                        nx >= static_cast<int>(m_cells_wide) ||
                        ny >= static_cast<int>(m_cells_high))
                        continue;
                    touching = ink_cells[static_cast<std::size_t>(ny) *
                                             m_cells_wide + nx] != 0;
                }
            }
            if (touching) halo_cells[index] = 1;
        }
    }

    // The bitmap, at the size it will be drawn: every font pixel becomes a
    // scale x scale block, which is what lets a span of font pixels be copied
    // as one region.
    m_width = m_cells_wide * m_scale;
    m_height = m_cells_high * m_scale;
    m_rgba.assign(static_cast<std::size_t>(m_width) * m_height * 4, 0);
    for (uint32_t y = 0; y < m_cells_high; ++y) {
        for (uint32_t x = 0; x < m_cells_wide; ++x) {
            const std::size_t cell =
                static_cast<std::size_t>(y) * m_cells_wide + x;
            const uint8_t* colour = ink_cells[cell]  ? kInk
                                    : halo_cells[cell] ? kHalo
                                                       : nullptr;
            if (colour == nullptr) continue;
            for (uint32_t row = 0; row < m_scale; ++row) {
                uint8_t* line = m_rgba.data() +
                    ((static_cast<std::size_t>(y * m_scale + row) * m_width) +
                     x * m_scale) * 4;
                for (uint32_t column = 0; column < m_scale; ++column)
                    std::memcpy(line + column * 4, colour, 4);
            }
        }
    }

    // The spans: maximal runs of "part of the credit" on the font grid, scaled
    // up. One region each, and nothing outside them is ever written.
    m_spans.clear();
    for (uint32_t y = 0; y < m_cells_high; ++y) {
        uint32_t run_start = 0;
        uint32_t run_length = 0;
        for (uint32_t x = 0; x <= m_cells_wide; ++x) {
            const bool filled =
                x < m_cells_wide &&
                (ink_cells[static_cast<std::size_t>(y) * m_cells_wide + x] ||
                 halo_cells[static_cast<std::size_t>(y) * m_cells_wide + x]);
            if (filled) {
                if (run_length == 0) run_start = x;
                ++run_length;
                continue;
            }
            if (run_length != 0) {
                m_spans.push_back({run_start * m_scale, y * m_scale,
                                   run_length * m_scale, m_scale});
                run_length = 0;
            }
        }
    }
}

std::vector<uint8_t> credit_overlay::bgra() const {
    std::vector<uint8_t> swapped = m_rgba;
    for (std::size_t index = 0; index + 3 < swapped.size(); index += 4) {
        const uint8_t red = swapped[index];
        swapped[index] = swapped[index + 2];
        swapped[index + 2] = red;
    }
    return swapped;
}

bool credit_overlay::placement(uint32_t frame_width, uint32_t frame_height,
                               int32_t& x, int32_t& y) const {
    const uint32_t margin = kMarginCells * m_scale;
    if (frame_width < m_width + 2 * margin ||
        frame_height < m_height + 2 * margin)
        return false;
    x = static_cast<int32_t>(frame_width - m_width - margin);
    y = static_cast<int32_t>(frame_height - m_height - margin);
    return true;
}

void credit_overlay::draw(uint8_t* frame, uint32_t frame_width,
                          uint32_t frame_height) const {
    if (frame == nullptr) return;
    int32_t origin_x = 0;
    int32_t origin_y = 0;
    if (!placement(frame_width, frame_height, origin_x, origin_y)) return;
    for (const overlay_span& span : m_spans) {
        for (uint32_t row = 0; row < span.height; ++row) {
            const uint32_t destination_y =
                static_cast<uint32_t>(origin_y) + span.y + row;
            if (destination_y >= frame_height) continue;
            const uint8_t* source =
                m_rgba.data() +
                ((static_cast<std::size_t>(span.y + row) * m_width) + span.x) *
                    4;
            uint8_t* destination =
                frame + ((static_cast<std::size_t>(destination_y) *
                          frame_width) +
                         static_cast<uint32_t>(origin_x) + span.x) * 4;
            const uint32_t left = static_cast<uint32_t>(origin_x) + span.x;
            const uint32_t width =
                left + span.width > frame_width ? frame_width - left
                                                : span.width;
            std::memcpy(destination, source,
                        static_cast<std::size_t>(width) * 4);
        }
    }
}

} // namespace whitty_xenon::gpu
