#include "whitty_xenon/gpu/texture_read.h"

#include "whitty_xenon/gpu/command_processor.h"
#include "whitty_xenon/gpu/texture_format.h"
#include "whitty_xenon/gpu/texture_tile.h"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <mutex>
#include <set>
#include <type_traits>
#include <vector>

namespace whitty_xenon::gpu {
namespace {

// log2 of a block size, for the tiled address function. Only exact powers of
// two occur; anything else means the format was decoded wrongly.
bool block_size_log2(uint32_t bytes, uint32_t& out) {
    for (uint32_t shift = 0; shift < 8; ++shift) {
        if ((1u << shift) == bytes) {
            out = shift;
            return true;
        }
    }
    return false;
}

// The endian swap a fetch constant asks for, over one texel's word.
//
// Follows the hardware's own widths (Xenia's XeEndianSwap16/XeEndianSwap32): a
// 16-bit texel only ever has its two bytes exchanged, and only for k8in16 -
// the swaps that reach across a 32-bit word mean nothing to it.
uint32_t swap_texel(uint32_t value, uint32_t bytes, endian how) noexcept {
    if (bytes <= 1) return value;
    if (bytes == 2) {
        if (how != endian::swap_8in16) return value;
        return ((value & 0x00FFu) << 8) | ((value >> 8) & 0x00FFu);
    }
    switch (how) {
        case endian::swap_8in16:
            return ((value & 0x00FF00FFu) << 8) | ((value >> 8) & 0x00FF00FFu);
        case endian::swap_8in32:
            return __builtin_bswap32(value);
        case endian::swap_16in32:
            return (value << 16) | (value >> 16);
        case endian::none:
            break;
    }
    return value;
}

// A texel's components, in bit order from the BOTTOM of the word up.
//
// A format's name lists its field widths from the top of the word down, while
// its components run from the bottom up - so k_1_5_5_5 is three 5-bit
// components followed by a 1-bit one, and the first component of every format
// is the one in the low bits. Reading it the other way round reverses every
// channel, which still looks like a plausible picture and is wrong everywhere.
struct component_layout {
    uint8_t bits[4]{0, 0, 0, 0};
    uint8_t count{0};
};

component_layout components_of(texture_format format) noexcept {
    switch (format) {
        case texture_format::k_8: return {{8, 0, 0, 0}, 1};
        case texture_format::k_8_8: return {{8, 8, 0, 0}, 2};
        case texture_format::k_8_8_8_8: return {{8, 8, 8, 8}, 4};
        case texture_format::k_1_5_5_5: return {{5, 5, 5, 1}, 4};
        case texture_format::k_5_6_5: return {{5, 6, 5, 0}, 3};
        case texture_format::k_4_4_4_4: return {{4, 4, 4, 4}, 4};
        case texture_format::k_2_10_10_10:
        // Same texel in memory as k_2_10_10_10; the suffix is about what the
        // sampler expands it to, not about how it is stored.
        case texture_format::k_2_10_10_10_as_16_16_16_16:
            return {{10, 10, 10, 2}, 4};
        case texture_format::k_16: return {{16, 0, 0, 0}, 1};
        case texture_format::k_16_16: return {{16, 16, 0, 0}, 2};
        case texture_format::k_16_16_16_16: return {{16, 16, 16, 16}, 4};
        default: return {};
    }
}

// Where a texture's base level starts inside the tile its mip levels share.
//
// Xenos packs the levels of a small texture into a single 32x32-block tile, and
// this is the part that catches a reader out: once the SHORTER side is 16 blocks
// or fewer, the BASE level is packed into that tile as well - pushed to the far
// side of it, with the 8x, 4x, 2x and 1x levels laid out in the space before it.
// So such a texture's pixels do not begin at its base address. A 16x64 texture's
// begin sixteen blocks in; reading from the base address instead lands on the
// mip chain, which decodes into something that looks like a plausible texture
// and is the wrong part of one - a sprite atlas whose middle is empty.
//
// From Xenia's texture_util::GetPackedMipOffset, for the base level.
//
// Both the test and the offset are in TEXELS, and only the answer is converted
// to blocks - which is the order Xenia does it in, and the only order that can
// be right, because the 16 is a count of texels the hardware packs the smaller
// levels into rather than a count of blocks. Working in blocks throughout would
// ask whether a DXT texture's BLOCK count exceeds 16 - true only above 64 texels
// - and then offset the base level by 16 blocks, which is 64 texels: a texture
// declared unpacked when it is packed, and when it is packed, read from four
// times too far along. Uncompressed formats cannot tell the difference, because
// their block IS a texel; every DXT texture small enough to have packed mips
// can.
void packed_base_offset(uint32_t width, uint32_t height, uint32_t block_width,
                        uint32_t block_height, uint32_t& x_blocks,
                        uint32_t& y_blocks) noexcept {
    x_blocks = 0;
    y_blocks = 0;
    const auto log2_ceil = [](uint32_t value) {
        uint32_t bits = 0;
        while ((1u << bits) < value) ++bits;
        return bits;
    };
    const uint32_t log2_width = log2_ceil(width);
    const uint32_t log2_height = log2_ceil(height);
    // Both sides over 16 blocks: the base level has the tile to itself and
    // starts where its address says.
    if (log2_width > 4 && log2_height > 4) return;
    // The smaller levels run along the longer side, so the base sits at the far
    // end of the shorter one. Sixteen TEXELS along it.
    if (log2_width > log2_height)
        y_blocks = 16;
    else
        x_blocks = 16;
    x_blocks /= block_width;
    y_blocks /= block_height;
}

// A `width`-bit field expanded to the full 8-bit range, for every value such a
// field can hold: table[v] == v * 255 / ((1 << width) - 1).
//
// That expression, evaluated per component per texel, is a 64-bit integer
// division - four of them for the four-component formats a title uses most.
// Measured, it was over ninety per cent of the whole renderer's frame time:
// unpacking textures cost fifteen milliseconds a frame where submitting the
// drawing cost two. The division is the reason.
//
// The table holds exactly what the division produced, computed with the same
// expression, so every texel comes out bit-identical - this trades memory for
// time and changes no pixel. Only widths a real format uses are built; the rest
// are left null so a width that should never occur faults a test rather than
// quietly decoding as something else.
const uint8_t* expansion_table(uint32_t width) noexcept {
    // Indexed by width, 1..16. Widths above 8 are the 10- and 16-bit formats;
    // the largest table is 64KB, which is a one-off cost against a per-texel
    // division.
    struct tables {
        std::vector<uint8_t> data[17];
        tables() {
            // Every width that components_of can return.
            for (uint32_t width : {1u, 2u, 4u, 5u, 6u, 8u, 10u, 16u}) {
                const uint64_t max = (uint64_t{1} << width) - 1u;
                data[width].resize(static_cast<std::size_t>(max) + 1);
                for (uint64_t v = 0; v <= max; ++v)
                    data[width][static_cast<std::size_t>(v)] =
                        static_cast<uint8_t>(v * 255 / max);
            }
        }
    };
    static const tables built;
    if (width == 0 || width > 16 || built.data[width].empty()) return nullptr;
    return built.data[width].data();
}

// A constant output channel, as a one-entry expansion table. The swizzle can
// name a constant 0 or 1 for any of the four outputs, and expressing that as a
// table read at index 0 keeps the per-texel loop free of branches: every
// channel is the same three operations whether it comes from the texel or not.
const uint8_t kConstantZero[1] = {0x00};
const uint8_t kConstantOne[1] = {0xFF};

// Everything about a format that does not change from texel to texel, resolved
// once for the whole texture.
//
// The per-texel work was previously re-deriving all of this for every texel:
// the component widths, the shifts, the divisor, and the three-bit swizzle
// selectors. None of it varies within a texture.
struct texel_decoder {
    uint32_t bytes{0};
    endian how{endian::none};
    // Per OUTPUT channel: where in the word its bits are, how many, and the
    // table that expands them. A channel the swizzle set to a constant has
    // mask 0 and a one-entry table, so it reads that constant.
    uint32_t shift[4]{0, 0, 0, 0};
    uint64_t mask[4]{0, 0, 0, 0};
    const uint8_t* expand[4]{nullptr, nullptr, nullptr, nullptr};
};

// Resolves a format's layout and a swizzle into one. Returns false where a
// component width has no expansion table, which is the same rejection the
// per-texel division would have made unrepresentable.
bool build_decoder(uint32_t bytes, const component_layout& layout, endian how,
                   uint32_t swizzle, texel_decoder& out) noexcept {
    out.bytes = bytes;
    out.how = how;
    // Where each SOURCE component sits, in bit order from the bottom up.
    uint32_t shift[4]{0, 0, 0, 0};
    uint32_t width[4]{0, 0, 0, 0};
    uint32_t bit = 0;
    for (uint32_t i = 0; i < layout.count; ++i) {
        shift[i] = bit;
        width[i] = layout.bits[i];
        bit += layout.bits[i];
    }
    for (uint32_t i = 0; i < 4; ++i) {
        // Three bits per output channel: 0-3 pick a source component, and
        // anything above that is a constant - even for zero, odd for one.
        const uint32_t selector = (swizzle >> (3 * i)) & 0x7;
        if (selector >= 4) {
            out.shift[i] = 0;
            out.mask[i] = 0;
            out.expand[i] =
                (selector & 1) != 0 ? kConstantOne : kConstantZero;
            continue;
        }
        // A format with fewer than four components replicates its LAST one into
        // the rest, which is what the hardware does before the swizzle is
        // applied - so a single-channel texture samples as grey rather than as
        // red with no alpha. Folding that into the selector here means the
        // per-texel loop never has to know how many components the format had.
        const uint32_t source =
            selector < layout.count ? selector : layout.count - 1u;
        out.shift[i] = shift[source];
        out.mask[i] = (uint64_t{1} << width[source]) - 1u;
        out.expand[i] = expansion_table(width[source]);
        if (out.expand[i] == nullptr) return false;
    }
    return true;
}

// One texel, from the console's packed word into RGBA.
//
// The block size is a template parameter, and `out` is restrict-qualified, for
// two reasons that together cost a factor of four if missed:
//
//   - a memcpy whose LENGTH is a runtime value compiles to `rep movsb`, whose
//     startup alone is tens of cycles. For a four-byte texel that one
//     instruction was most of the cost of unpacking a texture. As a constant it
//     is a single load.
//   - a `uint8_t*` may alias anything at all under the strict-aliasing rules,
//     so writing the channels straight through `out` forces the compiler to
//     re-read the decoder's shifts, masks and table pointers - and the table
//     entries themselves - after every single channel.
template <uint32_t Bytes>
inline void write_texel(const uint8_t* __restrict source,
                        const texel_decoder& decoder,
                        uint8_t* __restrict out) noexcept {
    uint64_t word = 0;
    std::memcpy(&word, source, Bytes);
    if constexpr (Bytes > 4) {
        // A 64-bit texel is swapped as the two 32-bit words it is made of. The
        // swaps the hardware defines reach across 16 or 32 bits and no further,
        // so treating the whole eight bytes as one unit would exchange the
        // halves as well and put the components in the wrong channels.
        const uint32_t low =
            swap_texel(static_cast<uint32_t>(word), 4, decoder.how);
        const uint32_t high =
            swap_texel(static_cast<uint32_t>(word >> 32), 4, decoder.how);
        word = (static_cast<uint64_t>(high) << 32) | low;
    } else {
        word = swap_texel(static_cast<uint32_t>(word), Bytes, decoder.how);
    }
    uint8_t rgba[4];
    for (uint32_t i = 0; i < 4; ++i)
        rgba[i] = decoder.expand[i][(word >> decoder.shift[i]) &
                                    decoder.mask[i]];
    std::memcpy(out, rgba, 4);
}

// Every texel of one texture, with the block size and the tiling both compile
// time. Both are the same for every texel of a texture and neither is cheap
// left in the loop: the tiling decides which of two address expressions runs,
// and a branch on a loop-invariant is a branch the address computation has to
// wait for.
template <uint32_t Bytes, bool Tiled>
void decode_texels(const uint8_t* __restrict source, uint64_t span,
                   uint8_t* __restrict destination,
                   const texel_decoder& decoder, uint32_t width,
                   uint32_t height, uint32_t pitch, uint32_t offset_x,
                   uint32_t offset_y, uint32_t block_log2) noexcept {
    for (uint32_t y = 0; y < height; ++y) {
        const uint32_t sy = y + offset_y;
        uint8_t* __restrict row =
            destination + static_cast<std::size_t>(y) * width * 4;
        for (uint32_t x = 0; x < width; ++x) {
            const uint32_t sx = x + offset_x;
            const uint32_t offset =
                Tiled ? tiled_offset_2d(sx, sy, pitch, block_log2)
                      : (sy * pitch + sx) * Bytes;
            // A texel whose block would run past the span is left as it was -
            // the fetch constant described a texture partly outside what the
            // pitch covers, and reading on would take the next row's pixels.
            if (offset + Bytes > span) continue;
            write_texel<Bytes>(source + offset, decoder, row + x * 4);
        }
    }
}

// Picks the specialisation. The block sizes are the ones components_of accepts;
// anything else was rejected before this point.
bool decode_all(uint32_t bytes, bool tiled, const uint8_t* source,
                uint64_t span, uint8_t* destination,
                const texel_decoder& decoder, uint32_t width, uint32_t height,
                uint32_t pitch, uint32_t offset_x, uint32_t offset_y,
                uint32_t block_log2) noexcept {
    const auto run = [&](auto size) {
        constexpr uint32_t kBytes = decltype(size)::value;
        if (tiled)
            decode_texels<kBytes, true>(source, span, destination, decoder,
                                        width, height, pitch, offset_x,
                                        offset_y, block_log2);
        else
            decode_texels<kBytes, false>(source, span, destination, decoder,
                                         width, height, pitch, offset_x,
                                         offset_y, block_log2);
    };
    switch (bytes) {
        case 1: run(std::integral_constant<uint32_t, 1>{}); return true;
        case 2: run(std::integral_constant<uint32_t, 2>{}); return true;
        case 4: run(std::integral_constant<uint32_t, 4>{}); return true;
        case 8: run(std::integral_constant<uint32_t, 8>{}); return true;
        default: return false;
    }
}

// --- block-compressed formats -------------------------------------------
//
// A UE3 title stores essentially every surface texture as DXT, so a reader that
// declines them binds nothing: Alien Breed's frame asks for 25 textures and all
// 25 are DXT, which the renderer draws as its flat white placeholder. The
// result is a full-screen white wash that looks like a shading fault and is a
// missing decoder.
//
// These are decompressed here rather than handed to the host still compressed.
// Uploading them compressed would be less work per frame, but it makes the
// pixels depend on the host supporting BC1/2/3 AND on the tiled layout being
// undone at block granularity anyway - and the cache above this stores RGBA8.
// Decoding here keeps one representation and one place where a texture can be
// wrong.

// A 16-bit colour endpoint, expanded the way the hardware does: the top bits
// repeated into the bottom, so 31/31 becomes 255 and not 248.
void rgb565(uint16_t value, uint8_t out[3]) noexcept {
    const uint32_t r = (value >> 11) & 0x1F;
    const uint32_t g = (value >> 5) & 0x3F;
    const uint32_t b = value & 0x1F;
    out[0] = static_cast<uint8_t>((r << 3) | (r >> 2));
    out[1] = static_cast<uint8_t>((g << 2) | (g >> 4));
    out[2] = static_cast<uint8_t>((b << 3) | (b >> 2));
}

// The swap a fetch constant asks for, over one 32-bit word.
//
// The hardware applies the swap to whole 32-BIT WORDS, not to the fields of
// whatever format happens to lie in them - so a block is a sequence of two or
// four swapped words, and the way to read one is to undo the swap across the
// block and then decode a block laid out exactly as the format defines it,
// little-endian.
//
// Undoing it field by field instead agrees with the hardware only for fields
// that are 16 bits wide AND 16-bit aligned. A DXT4/5 block's alpha indices are
// neither: they are two 24-bit groups and the second starts at byte 5. Read as
// 16-bit fields under the 8in16 swap that group gathers bytes 6,5,4 where the
// hardware has 4,7,6 - so the alpha of texels 8-15 of every DXT4/5 and DXT5A
// block comes out scrambled, giving a texture whose colours are right and whose
// transparency is noise over half of every block. Neither of the swaps that
// reach across a whole word (8in32, 16in32) can be expressed field-wise at all.
//
// From Xenia's XeEndianSwap32 (gpu/shaders/endian.xesli), which every one of its
// texture-load shaders applies per word - the ones that hand blocks straight to
// a host BC format as much as the ones that decompress.
uint32_t swap_word(uint32_t value, endian how) noexcept {
    if (how == endian::swap_8in16 || how == endian::swap_8in32)
        value = ((value & 0x00FF00FFu) << 8) | ((value & 0xFF00FF00u) >> 8);
    if (how == endian::swap_8in32 || how == endian::swap_16in32)
        value = (value << 16) | (value >> 16);
    return value;
}

// One block with the swap undone: `bytes` bytes, in the order the format is
// defined in. Eight or sixteen, so always a whole number of words.
void unswap_block(const uint8_t* __restrict source, uint32_t bytes, endian how,
                  uint8_t* __restrict out) noexcept {
    for (uint32_t i = 0; i < bytes; i += 4) {
        uint32_t word;
        std::memcpy(&word, source + i, 4);
        word = swap_word(word, how);
        std::memcpy(out + i, &word, 4);
    }
}

// Reads out of an already-unswapped block, which is little-endian by
// definition.
uint16_t le_u16(const uint8_t* p) noexcept {
    return static_cast<uint16_t>(p[0] | (p[1] << 8));
}

uint32_t le_u32(const uint8_t* p) noexcept {
    return static_cast<uint32_t>(p[0]) | (static_cast<uint32_t>(p[1]) << 8) |
           (static_cast<uint32_t>(p[2]) << 16) |
           (static_cast<uint32_t>(p[3]) << 24);
}

// The colour half of a DXT1/2-3/4-5 block: two endpoints and sixteen 2-bit
// indices. `punch_through` is DXT1's one-bit alpha, which the DXT2-3 and DXT4-5
// blocks do not have - their alpha comes from their own half, and taking
// DXT1's rule there would make every texel of the fourth colour transparent.
void decode_color_block(const uint8_t* block, bool punch_through,
                        uint8_t out[16][4]) noexcept {
    const uint16_t c0 = le_u16(block + 0);
    const uint16_t c1 = le_u16(block + 2);
    const uint32_t indices = le_u32(block + 4);
    uint8_t colors[4][4];
    rgb565(c0, colors[0]);
    rgb565(c1, colors[1]);
    colors[0][3] = colors[1][3] = 0xFF;
    // Which of the two interpolation rules applies is decided by comparing the
    // endpoints AS STORED. In DXT1 the c0 <= c1 case spends one slot on
    // transparency and has only one intermediate colour.
    if (!punch_through || c0 > c1) {
        for (int i = 0; i < 3; ++i) {
            colors[2][i] = static_cast<uint8_t>((2 * colors[0][i] +
                                                 colors[1][i] + 1) / 3);
            colors[3][i] = static_cast<uint8_t>((colors[0][i] +
                                                 2 * colors[1][i] + 1) / 3);
        }
        colors[2][3] = colors[3][3] = 0xFF;
    } else {
        for (int i = 0; i < 3; ++i) {
            colors[2][i] =
                static_cast<uint8_t>((colors[0][i] + colors[1][i]) / 2);
            colors[3][i] = 0;
        }
        colors[2][3] = 0xFF;
        colors[3][3] = 0x00;
    }
    for (uint32_t i = 0; i < 16; ++i)
        std::memcpy(out[i], colors[(indices >> (i * 2)) & 0x3], 4);
}

// The explicit-alpha half of a DXT2-3 block: sixteen 4-bit values, low nibble
// first, expanded to eight bits by repeating.
void decode_alpha4_block(const uint8_t* block, uint8_t out[16]) noexcept {
    for (uint32_t i = 0; i < 16; ++i) {
        const uint32_t value = (block[i >> 1] >> ((i & 1) * 4)) & 0xF;
        out[i] = static_cast<uint8_t>((value << 4) | value);
    }
}

// The same four bits, read as a 1:1:1:1 TEXEL rather than as one alpha value -
// which is all k_DXT3A_AS_1_1_1_1 is. Following Xenia (gpu/shaders/
// pixel_formats.xesli): alpha in the least significant bit and red in the most,
// consistent with how the Doggett Xenos slides order every other Xenos format's
// components. Xenia records this as unverified - one known title uses it - so if
// a title ever shows this format's channels transposed, this is the line.
void decode_alpha4_as_1111_block(const uint8_t* block,
                                 uint8_t out[16][4]) noexcept {
    for (uint32_t i = 0; i < 16; ++i) {
        const uint32_t value = (block[i >> 1] >> ((i & 1) * 4)) & 0xF;
        for (uint32_t c = 0; c < 4; ++c)
            out[i][c] =
                ((value >> (3 - c)) & 1) != 0 ? uint8_t{0xFF} : uint8_t{0x00};
    }
}

// The interpolated-alpha half of a DXT4-5 block: two endpoints and sixteen
// 3-bit indices. As with the colour half, which interpolation rule applies is
// decided by comparing the endpoints.
void decode_alpha8_block(const uint8_t* block, uint8_t out[16]) noexcept {
    const uint8_t a0 = block[0];
    const uint8_t a1 = block[1];
    uint8_t alpha[8];
    alpha[0] = a0;
    alpha[1] = a1;
    if (a0 > a1) {
        for (uint32_t i = 1; i < 7; ++i)
            alpha[i + 1] = static_cast<uint8_t>(((7 - i) * a0 + i * a1) / 7);
    } else {
        for (uint32_t i = 1; i < 5; ++i)
            alpha[i + 1] = static_cast<uint8_t>(((5 - i) * a0 + i * a1) / 5);
        alpha[6] = 0x00;
        alpha[7] = 0xFF;
    }
    // Six bytes of 3-bit indices, as two 24-bit little-endian groups of eight
    // texels each. The second group starts at byte 5, which is why the swap has
    // to have been undone across the whole block before this runs: there is no
    // 16-bit field here to undo it within.
    for (uint32_t group = 0; group < 2; ++group) {
        const uint8_t* p = block + 2 + group * 3;
        const uint32_t bits = static_cast<uint32_t>(p[0]) |
                              (static_cast<uint32_t>(p[1]) << 8) |
                              (static_cast<uint32_t>(p[2]) << 16);
        for (uint32_t i = 0; i < 8; ++i)
            out[group * 8 + i] = alpha[(bits >> (i * 3)) & 0x7];
    }
}

// A CTX1 block: two 8-bit endpoints per channel and DXT1's four-code weighting,
// read as red and green. It is DXT1-sized but is not a 5:6:5 format - the
// endpoint pair sits in a 16-bit unit with red in the HIGH byte, the same way
// round as DXT1's red sits in the high bits of its 565 word (Xenia's
// texture_load_ctx1.cs.xesl). There is no punch-through mode: the codes are
// always the four interpolated levels.
void decode_ctx1_block(const uint8_t* block, uint8_t out[16][4]) noexcept {
    const uint8_t r[2] = {block[1], block[3]};
    const uint8_t g[2] = {block[0], block[2]};
    uint8_t red[4], green[4];
    red[0] = r[0];
    red[1] = r[1];
    green[0] = g[0];
    green[1] = g[1];
    red[2] = static_cast<uint8_t>((2 * r[0] + r[1] + 1) / 3);
    red[3] = static_cast<uint8_t>((r[0] + 2 * r[1] + 1) / 3);
    green[2] = static_cast<uint8_t>((2 * g[0] + g[1] + 1) / 3);
    green[3] = static_cast<uint8_t>((g[0] + 2 * g[1] + 1) / 3);
    const uint32_t indices = le_u32(block + 4);
    for (uint32_t i = 0; i < 16; ++i) {
        const uint32_t code = (indices >> (i * 2)) & 0x3;
        out[i][0] = red[code];
        // The second channel is replicated into the rest, which is what the
        // swizzle then selects from. compressed_components says two, so
        // apply_swizzle repeats green - these are only a defined starting
        // point.
        out[i][1] = out[i][2] = out[i][3] = green[code];
    }
}

// One 4x4 block, whatever kind, as sixteen RGBA texels in row-major order.
//
// The single-channel formats (DXT3A, DXT5A) carry only an alpha half. They are
// a value, not a colour, so the value is written to every channel - which is
// what the swizzle then selects from, and what a shader sampling .r or .a of one
// expects to find there.
void decode_block(const uint8_t* block, texture_format format,
                  uint8_t out[16][4]) noexcept {
    uint8_t alpha[16];
    switch (format) {
        case texture_format::k_DXT1:
        case texture_format::k_DXT1_as_16_16_16_16:
            decode_color_block(block, true, out);
            return;
        case texture_format::k_DXT2_3:
        case texture_format::k_DXT2_3_as_16_16_16_16:
            decode_alpha4_block(block, alpha);
            decode_color_block(block + 8, false, out);
            for (uint32_t i = 0; i < 16; ++i) out[i][3] = alpha[i];
            return;
        case texture_format::k_DXT4_5:
        case texture_format::k_DXT4_5_as_16_16_16_16:
            decode_alpha8_block(block, alpha);
            decode_color_block(block + 8, false, out);
            for (uint32_t i = 0; i < 16; ++i) out[i][3] = alpha[i];
            return;
        // DXN is two interpolated-value halves rather than a colour and an
        // alpha: the first is red, the second green. Which channels a title
        // then reads them as is not settled - Xenia records one title reading
        // them as RG and another as RA - so they are left where the hardware
        // puts them and the fetch constant's own swizzle decides.
        case texture_format::k_DXN: {
            uint8_t green[16];
            decode_alpha8_block(block, alpha);
            decode_alpha8_block(block + 8, green);
            for (uint32_t i = 0; i < 16; ++i) {
                out[i][0] = alpha[i];
                out[i][1] = out[i][2] = out[i][3] = green[i];
            }
            return;
        }
        case texture_format::k_CTX1:
            decode_ctx1_block(block, out);
            return;
        case texture_format::k_DXT3A_as_1_1_1_1:
            decode_alpha4_as_1111_block(block, out);
            return;
        case texture_format::k_DXT3A:
            decode_alpha4_block(block, alpha);
            break;
        case texture_format::k_DXT5A:
            decode_alpha8_block(block, alpha);
            break;
        default:
            return;
    }
    for (uint32_t i = 0; i < 16; ++i)
        for (uint32_t c = 0; c < 4; ++c) out[i][c] = alpha[i];
}

// Every texel of a compressed texture. Walks BLOCKS, not texels: the tiled
// address function is defined in blocks, and a block decodes sixteen texels at
// once, so the per-texel loop the uncompressed path uses would recompute the
// same block sixteen times.
void decode_compressed(const uint8_t* source, uint64_t span, uint8_t* out,
                       const texture_fetch_constant& fetch,
                       texture_format format, uint32_t bytes_per_block,
                       uint32_t block_log2, bool tiled, uint32_t pitch_blocks,
                       uint32_t offset_x_blocks,
                       uint32_t offset_y_blocks) noexcept {
    const uint32_t width_blocks = (fetch.width + 3) / 4;
    const uint32_t height_blocks = (fetch.height + 3) / 4;
    for (uint32_t by = 0; by < height_blocks; ++by) {
        for (uint32_t bx = 0; bx < width_blocks; ++bx) {
            const uint32_t sx = bx + offset_x_blocks;
            const uint32_t sy = by + offset_y_blocks;
            const uint32_t offset =
                tiled ? tiled_offset_2d(sx, sy, pitch_blocks, block_log2)
                      : (sy * pitch_blocks + sx) * bytes_per_block;
            if (offset + bytes_per_block > span) continue;
            // The swap is undone across the whole block first, so every decoder
            // below reads a block laid out the way its format defines one. The
            // largest is sixteen bytes.
            uint8_t block[16];
            unswap_block(source + offset, bytes_per_block, fetch.endianness,
                         block);
            uint8_t texels[16][4];
            decode_block(block, format, texels);
            // A texture whose size is not a whole number of blocks has its last
            // block partly outside the image; those texels are decoded and
            // discarded rather than written past the end of the row.
            for (uint32_t y = 0; y < 4; ++y) {
                const uint32_t py = by * 4 + y;
                if (py >= fetch.height) break;
                for (uint32_t x = 0; x < 4; ++x) {
                    const uint32_t px = bx * 4 + x;
                    if (px >= fetch.width) break;
                    std::memcpy(
                        out + (static_cast<std::size_t>(py) * fetch.width + px) *
                                  4,
                        texels[y * 4 + x], 4);
                }
            }
        }
    }
}

// Applies the fetch's channel swizzle to already-decompressed RGBA texels.
//
// The uncompressed path folds the swizzle into the per-texel decoder, which
// works on a packed word and cannot be reached from here. Doing it as a second
// pass costs one pass over the image and keeps one statement of what a swizzle
// selector means.
void apply_swizzle(uint8_t* rgba, std::size_t texels, uint32_t swizzle,
                   uint32_t components) noexcept {
    for (std::size_t i = 0; i < texels; ++i) {
        uint8_t* texel = rgba + i * 4;
        const uint8_t source[4] = {texel[0], texel[1], texel[2], texel[3]};
        for (uint32_t c = 0; c < 4; ++c) {
            const uint32_t selector = (swizzle >> (3 * c)) & 0x7;
            if (selector >= 4) {
                texel[c] = (selector & 1) != 0 ? 0xFF : 0x00;
                continue;
            }
            // The same replication the uncompressed path applies: a format with
            // fewer than four components repeats its last one.
            texel[c] = source[selector < components ? selector
                                                    : components - 1];
        }
    }
}

// How many channels a compressed format actually carries, for that replication.
uint32_t compressed_components(texture_format format) noexcept {
    switch (format) {
        // One value, replicated into all four - the rrrr the Xenos
        // documentation gives for these, and what a shader sampling .r or .a of
        // one expects to find.
        case texture_format::k_DXT3A:
        case texture_format::k_DXT5A: return 1;
        // Two, with the second repeated into the rest.
        case texture_format::k_DXN:
        case texture_format::k_CTX1: return 2;
        default: return 4;
    }
}

// WHITTY_TEXTURE_PPM=<dir> writes every distinct decoded texture out as a PPM.
//
// A texture that decodes to the wrong pixels is the quietest fault in the
// whole pipeline: it binds, it draws, and the only evidence is a picture that
// looks off. Counting how many decoded, which this already reports, cannot
// tell a correct decode from a smeared one - so this makes the intermediate
// itself visible, which is the difference between "the texture path is
// suspect" and "here is the texture, and here is what is wrong with it".
//
// Distinct by address and shape, once each, because a title rebinds the same
// atlas across many draws and a file per bind is thousands of files.
void dump_texture(const host_texture& texture,
                  const texture_fetch_constant& fetch) {
    static const char* const dir = std::getenv("WHITTY_TEXTURE_PPM");
    if (dir == nullptr || *dir == 0 || !texture.valid) return;
    static std::mutex mutex;
    static std::set<uint64_t> seen;
    const uint64_t key = (static_cast<uint64_t>(fetch.base_address) << 24) ^
                         (static_cast<uint64_t>(fetch.format) << 16) ^
                         (static_cast<uint64_t>(texture.width) << 8) ^
                         texture.height;
    {
        const std::lock_guard<std::mutex> lock(mutex);
        if (!seen.insert(key).second) return;
    }
    char path[512];
    std::snprintf(path, sizeof(path), "%s/tex_%08X_fmt%02u_%ux%u.ppm", dir,
                  fetch.base_address, fetch.format, texture.width,
                  texture.height);
    std::FILE* file = std::fopen(path, "wb");
    if (file == nullptr) return;
    std::fprintf(file, "P6\n%u %u\n255\n", texture.width, texture.height);
    // RGBA to RGB. The alpha is dropped rather than composited: a texture with
    // meaningful alpha viewed over black hides exactly the detail worth
    // seeing, and the question here is what the colour channels hold.
    std::vector<uint8_t> row(static_cast<std::size_t>(texture.width) * 3);
    for (uint32_t y = 0; y < texture.height; ++y) {
        const uint8_t* src =
            texture.rgba.data() + static_cast<std::size_t>(y) * texture.width * 4;
        for (uint32_t x = 0; x < texture.width; ++x) {
            row[x * 3 + 0] = src[x * 4 + 0];
            row[x * 3 + 1] = src[x * 4 + 1];
            row[x * 3 + 2] = src[x * 4 + 2];
        }
        std::fwrite(row.data(), 1, row.size(), file);
    }
    std::fclose(file);
}

} // namespace

host_texture read_texture(guest_memory& memory,
                          const texture_fetch_constant& fetch) {
    host_texture texture;
    // Type 2 is a texture; anything else is a slot that was never set up, and
    // the address that comes with it points at unrelated memory.
    if (fetch.type != 2) return texture;
    if (fetch.width == 0 || fetch.height == 0) return texture;

    const auto format = static_cast<texture_format>(fetch.format);
    const texture_format_info info = decode_texture_format(format);
    if (info.bytes_per_block == 0) return texture;
    // A format whose component layout is not known is rejected rather than
    // unpacked as whatever happens to be the same size. The compressed formats
    // have no packed layout at all - their texels are computed from a block -
    // so they are exempt from this and decoded further down.
    const component_layout layout = components_of(format);
    if (!info.compressed && layout.count == 0) return texture;

    uint32_t log2 = 0;
    if (!block_size_log2(info.bytes_per_block, log2)) return texture;

    // Everything the unpacking needs that is the same for every texel: the
    // shifts, the masks and the expansion tables, with the swizzle already
    // folded in. Built once here rather than re-derived 262,144 times.
    // Not for a compressed format: its texels are computed from a block rather
    // than unpacked from a word, so there are no shifts to fold a swizzle into.
    texel_decoder decoder;
    if (!info.compressed &&
        !build_decoder(info.bytes_per_block, layout, fetch.endianness,
                       fetch.swizzle, decoder))
        return texture;

    // The address is physical, like everything else the hardware is given.
    const uint32_t base = command_processor::physical_to_virtual(
        fetch.base_address);
    // Everything below is in BLOCKS, because that is what the tiled address
    // function and the macro tile are defined in. For an uncompressed format a
    // block is one texel and every count here is unchanged; for a DXT one a
    // block is 4x4, and treating its pitch as texels would align to a macro tile
    // four times too wide and read every row from the wrong place.
    const uint32_t width_blocks =
        (fetch.width + info.block_width - 1) / info.block_width;
    const uint32_t height_blocks =
        (fetch.height + info.block_height - 1) / info.block_height;
    const uint32_t pitch_texels =
        fetch.pitch_pixels != 0 ? fetch.pitch_pixels : fetch.width;
    uint32_t pitch_blocks =
        (pitch_texels + info.block_width - 1) / info.block_width;
    // A tiled texture's pitch is aligned up to the macro tile; an untiled one
    // uses the pitch as given.
    if (fetch.tiled) {
        const uint32_t align = kTextureMacroTileBlocks;
        pitch_blocks = ((pitch_blocks + align - 1) / align) * align;
    }

    // Where the base level sits inside the tile it may share with its own mip
    // levels. Only when the fetch constant says the levels are packed: without
    // that the base level has the tile to itself.
    uint32_t offset_x = 0, offset_y = 0;
    if (fetch.packed_mips)
        packed_base_offset(fetch.width, fetch.height, info.block_width,
                           info.block_height, offset_x, offset_y);
    // An offset that pushes the texture past the end of a row would read the
    // next row's pixels as this one's, which is a scrambled picture rather than
    // an error - so it is refused instead.
    if (offset_x + width_blocks > pitch_blocks) return texture;

    // Enough memory to cover the whole span the reads will touch. Checking up
    // front means a texture partly outside committed memory is rejected rather
    // than read a row at a time until it faults.
    //
    // A tiled texture's ROWS are aligned to the macro tile exactly as its pitch
    // is, and for the same reason: the tiled address function scrambles a
    // 32-row band's texels across the whole band's byte range, so a texture 300
    // rows tall still reaches addresses belonging to row 319. Measuring the span
    // by the unaligned height leaves the tail of that last band outside it, and
    // every texel the untiler finds there decodes as zero - not the whole band,
    // but the part of it above the cut, which lands as a rectangle missing from
    // the bottom of the picture. Space Giraffe's 300x300 Llamasoft logo lost
    // rows 288-299 beyond x=127: the bottom of the wordmark.
    uint32_t rows_blocks = height_blocks + offset_y;
    if (fetch.tiled) {
        const uint32_t align = kTextureMacroTileBlocks;
        rows_blocks = ((rows_blocks + align - 1) / align) * align;
    }
    const uint64_t span =
        static_cast<uint64_t>(pitch_blocks) * rows_blocks * info.bytes_per_block;
    if (span == 0 || span > 0x4000000ull) return texture;
    if (!memory.committed(base, static_cast<uint32_t>(span))) return texture;
    const auto* source =
        static_cast<const uint8_t*>(memory.host(base, static_cast<uint32_t>(span)));
    if (source == nullptr) return texture;

    texture.width = fetch.width;
    texture.height = fetch.height;
    texture.source_address = base;
    texture.source_bytes = static_cast<uint32_t>(span);
    texture.rgba.resize(static_cast<std::size_t>(fetch.width) * fetch.height * 4);
    if (info.compressed) {
        decode_compressed(source, span, texture.rgba.data(), fetch, format,
                          info.bytes_per_block, log2, fetch.tiled, pitch_blocks,
                          offset_x, offset_y);
        apply_swizzle(texture.rgba.data(),
                      static_cast<std::size_t>(fetch.width) * fetch.height,
                      fetch.swizzle, compressed_components(format));
        texture.valid = true;
        dump_texture(texture, fetch);
        return texture;
    }
    // The fetch's fields are read into arguments rather than out of the
    // reference inside the loop: a `uint8_t*` store aliases anything, so left
    // as member reads they are reloaded from memory on every texel.
    if (!decode_all(info.bytes_per_block, fetch.tiled, source, span,
                    texture.rgba.data(), decoder, fetch.width, fetch.height,
                    pitch_blocks, offset_x, offset_y, log2)) {
        texture.rgba.clear();
        return texture;
    }
    texture.valid = true;
    dump_texture(texture, fetch);
    return texture;
}

} // namespace whitty_xenon::gpu
