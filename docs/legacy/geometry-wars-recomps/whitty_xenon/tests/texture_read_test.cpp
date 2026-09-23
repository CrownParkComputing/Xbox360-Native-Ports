// Tests for reading a title's textures out of guest memory.
//
// Every conversion this does is silent when wrong - a mis-swizzled or
// channel-swapped texture still uploads and still draws - so the expected
// pixels are written out by hand rather than compared against another run of
// the same code.
//
// The byte order and channel order below are not guesses: they are what
// Geometry Wars' fetch constants actually hold (8in32, swizzle bgra for its
// 8:8:8:8 textures), so a texel is built here as the console stores one.
#include "whitty_xenon/gpu/texture_read.h"

#include "whitty_xenon/gpu/texture_format.h"
#include "whitty_xenon/gpu/texture_tile.h"

#include <algorithm>
#include <cassert>
#include <cstdint>
#include <cstdio>
#include <string>

using namespace whitty_xenon;
using namespace whitty_xenon::gpu;

namespace {

constexpr uint32_t kBase = 0xA0100000; // physical alias, as a title's would be

struct fixture {
    guest_memory memory;
    fixture() {
        std::string error;
        assert(memory.initialize(error));
        assert(memory.commit(kBase, 0x100000, error));
    }
};

// Which source component a sampled channel takes, as the fetch constant spells
// it: three bits per channel, the x channel in the lowest.
constexpr uint32_t kR = 0, kG = 1, kB = 2, kA = 3, kZero = 4, kOne = 5;
constexpr uint32_t swizzle_of(uint32_t x, uint32_t y, uint32_t z, uint32_t w) {
    return x | (y << 3) | (z << 6) | (w << 9);
}

texture_fetch_constant describe(
    uint32_t width, uint32_t height, texture_format format, bool tiled,
    endian swap = endian::swap_8in32,
    uint32_t swizzle = swizzle_of(kB, kG, kR, kA)) {
    texture_fetch_constant fetch;
    fetch.type = 2;
    fetch.base_address = kBase & 0x0FFFFFFF; // stored without the alias
    fetch.width = width;
    fetch.height = height;
    fetch.format = static_cast<uint32_t>(format);
    fetch.tiled = tiled;
    fetch.pitch_pixels = width;
    fetch.endianness = swap;
    fetch.swizzle = swizzle;
    return fetch;
}

// A title's 8:8:8:8 texture arrives as an 8in32 word with a bgra swizzle, which
// together mean the bytes in memory run A, R, G, B. Reading them the other way
// round gives a channel swap that looks plausible in a screenshot and is wrong
// everywhere.
void test_argb_channel_order() {
    fixture fx;
    fx.memory.write_u8(kBase + 0, 0x11); // A
    fx.memory.write_u8(kBase + 1, 0x22); // R
    fx.memory.write_u8(kBase + 2, 0x33); // G
    fx.memory.write_u8(kBase + 3, 0x44); // B
    const host_texture texture = read_texture(
        fx.memory, describe(1, 1, texture_format::k_8_8_8_8, false));
    assert(texture.valid);
    assert(texture.rgba[0] == 0x22); // R
    assert(texture.rgba[1] == 0x33); // G
    assert(texture.rgba[2] == 0x44); // B
    assert(texture.rgba[3] == 0x11); // A
}

// The swizzle is not cosmetic: the same bytes under a different one are a
// different picture, and two of its selectors are constants rather than
// components at all.
void test_swizzle_selects_the_channels() {
    fixture fx;
    fx.memory.write_u8(kBase + 0, 0x11);
    fx.memory.write_u8(kBase + 1, 0x22);
    fx.memory.write_u8(kBase + 2, 0x33);
    fx.memory.write_u8(kBase + 3, 0x44);
    // An rgba swizzle takes the components in the order the word holds them:
    // after the 8in32 swap the first component is the LOW byte, which is the
    // last byte in memory.
    const host_texture straight =
        read_texture(fx.memory,
                     describe(1, 1, texture_format::k_8_8_8_8, false,
                              endian::swap_8in32,
                              swizzle_of(kR, kG, kB, kA)));
    assert(straight.valid);
    assert(straight.rgba[0] == 0x44 && straight.rgba[1] == 0x33 &&
           straight.rgba[2] == 0x22 && straight.rgba[3] == 0x11);
    // Selectors past the components are constants, which is how a title asks
    // for an opaque texture out of one that carries no alpha.
    const host_texture constants =
        read_texture(fx.memory,
                     describe(1, 1, texture_format::k_8_8_8_8, false,
                              endian::swap_8in32,
                              swizzle_of(kR, kZero, kOne, kOne)));
    assert(constants.valid);
    assert(constants.rgba[0] == 0x44 && constants.rgba[1] == 0x00 &&
           constants.rgba[2] == 0xFF && constants.rgba[3] == 0xFF);
}

// The byte order comes from the fetch constant, not from the format - so the
// same bytes with no swap requested land in the opposite channels.
void test_endianness_is_honoured() {
    fixture fx;
    fx.memory.write_u8(kBase + 0, 0x11);
    fx.memory.write_u8(kBase + 1, 0x22);
    fx.memory.write_u8(kBase + 2, 0x33);
    fx.memory.write_u8(kBase + 3, 0x44);
    const host_texture texture =
        read_texture(fx.memory,
                     describe(1, 1, texture_format::k_8_8_8_8, false,
                              endian::none, swizzle_of(kR, kG, kB, kA)));
    assert(texture.valid);
    // Unswapped, the first component is the first byte in memory.
    assert(texture.rgba[0] == 0x11 && texture.rgba[1] == 0x22 &&
           texture.rgba[2] == 0x33 && texture.rgba[3] == 0x44);
}

// A format with fewer than four components replicates its last one into the
// rest before the swizzle, so a one-channel texture samples as opaque grey
// rather than as red with no alpha.
void test_missing_components_are_replicated() {
    fixture fx;
    fx.memory.write_u8(kBase + 0, 0x80);
    const host_texture texture =
        read_texture(fx.memory, describe(1, 1, texture_format::k_8, false,
                                        endian::none,
                                        swizzle_of(kR, kG, kB, kA)));
    assert(texture.valid);
    assert(texture.rgba[0] == 0x80 && texture.rgba[1] == 0x80 &&
           texture.rgba[2] == 0x80 && texture.rgba[3] == 0x80);
}

// An untiled texture is row-major at its pitch.
void test_untiled_layout() {
    fixture fx;
    const uint32_t w = 4, h = 2;
    // Written as explicit bytes, not through write_u32: what a big-endian
    // dword looks like in memory is the very thing under test, so using it to
    // build the fixture would make the test agree with itself.
    for (uint32_t y = 0; y < h; ++y)
        for (uint32_t x = 0; x < w; ++x) {
            const uint32_t at = kBase + (y * w + x) * 4;
            fx.memory.write_u8(at + 0, 0xFF);                            // A
            fx.memory.write_u8(at + 1, 0);                               // R
            fx.memory.write_u8(at + 2, 0);                               // G
            fx.memory.write_u8(at + 3, static_cast<uint8_t>(y * w + x)); // B
        }
    const host_texture texture = read_texture(
        fx.memory, describe(w, h, texture_format::k_8_8_8_8, false));
    assert(texture.valid);
    // Texel (2,1) is index 6, whose blue byte carries the index.
    assert(texture.rgba[((1 * w) + 2) * 4 + 2] == 6);
}

// A tiled texture's address is a swizzle of its coordinates, so reading it
// row-major scrambles the image. The expected offset comes from the tiling
// function directly, which is the independent description of the layout.
void test_tiled_layout_follows_the_swizzle() {
    fixture fx;
    const uint32_t w = 64, h = 64;
    const uint32_t pitch = 64; // already a multiple of the macro tile
    const uint32_t x = 5, y = 9;
    const uint32_t offset = tiled_offset_2d(x, y, pitch, 2); // 4-byte blocks
    fx.memory.write_u8(kBase + offset + 3, 0xAB); // B, the last byte of a texel
    const host_texture texture = read_texture(
        fx.memory, describe(w, h, texture_format::k_8_8_8_8, true));
    assert(texture.valid);
    assert(texture.rgba[(static_cast<std::size_t>(y) * w + x) * 4 + 2] == 0xAB);
    // The same coordinate read row-major would land elsewhere, which is the
    // mistake this guards against.
    assert(offset != (y * pitch + x) * 4);
}

// A tiled texture whose height is not a whole number of macro tiles still
// reaches addresses belonging to the rows that pad the last band out to 32.
// The tiled address function scatters a band's texels across the band's entire
// byte range, so a 40-row texture reads bytes that a 40-row measurement of its
// size does not contain. Measuring the span by the unaligned height leaves
// those reads outside it, and every texel above the cut decodes as zero - a
// rectangle missing from the bottom of the picture, which is what Space
// Giraffe's 300x300 Llamasoft logo lost the bottom of its wordmark to.
//
// The pitch is aligned for exactly the same reason two lines away in the
// decoder; only the rows were not.
void test_tiled_partial_last_band_is_still_read() {
    fixture fx;
    const uint32_t w = 64, h = 40; // 40 rows: one full band and eight more
    const uint32_t pitch = 64;
    // The far corner of the partial band, whose tiled offset (13308) is past
    // the 64x40x4 = 10240 bytes an unaligned measurement would allow.
    const uint32_t x = 63, y = 39;
    const uint32_t offset = tiled_offset_2d(x, y, pitch, 2);
    assert(offset >= pitch * h * 4);
    fx.memory.write_u8(kBase + offset + 3, 0xCD);
    const host_texture texture = read_texture(
        fx.memory, describe(w, h, texture_format::k_8_8_8_8, true));
    assert(texture.valid);
    assert(texture.rgba[(static_cast<std::size_t>(y) * w + x) * 4 + 2] == 0xCD);
    // And the span reported is the whole tiled footprint, so the cache checks
    // every byte the decode read rather than the ones a row count implies.
    assert(texture.source_bytes == pitch * 64u * 4u);
}

// A 16-bit format's first component is still the one in the low bits, so a
// 5:6:5 texel's red is the bottom five bits of the swapped word - the opposite
// end from where the format's name reads it.
void test_565_expands_to_full_range() {
    fixture fx;
    // Red at full 5-bit scale: 0x001F once the 8in16 swap is undone.
    fx.memory.write_u8(kBase + 0, 0x00);
    fx.memory.write_u8(kBase + 1, 0x1F);
    const host_texture texture =
        read_texture(fx.memory,
                     describe(1, 1, texture_format::k_5_6_5, false,
                              endian::swap_8in16,
                              swizzle_of(kR, kG, kB, kOne)));
    assert(texture.valid);
    assert(texture.rgba[0] == 255 && texture.rgba[1] == 0 &&
           texture.rgba[2] == 0 && texture.rgba[3] == 255);
}

// A 64-bit texel: four 16-bit channels, so the packed word does not fit in 32
// bits. Geometry Wars 2 resolves every stage of its bloom chain into one of
// these and samples it five times per draw, so a reader that rejects the format
// drops the whole glow.
void test_16_16_16_16_reads_all_four_channels() {
    fixture fx;
    // Components run from the low end of the word up: r, g, b, a. Written here
    // byte-swapped within each 32-bit half, which is what 8in32 asks for.
    // Low word:  r = 0xFFFF, g = 0x0000  ->  bytes FF FF 00 00, swapped
    // High word: b = 0x8000, a = 0xFFFF  ->  bytes 00 80 FF FF, swapped
    const uint8_t low[4] = {0x00, 0x00, 0xFF, 0xFF};
    const uint8_t high[4] = {0xFF, 0xFF, 0x80, 0x00};
    for (uint32_t i = 0; i < 4; ++i) {
        fx.memory.write_u8(kBase + i, low[i]);
        fx.memory.write_u8(kBase + 4 + i, high[i]);
    }
    const host_texture texture =
        read_texture(fx.memory,
                     describe(1, 1, texture_format::k_16_16_16_16, false,
                              endian::swap_8in32,
                              swizzle_of(kR, kG, kB, kA)));
    assert(texture.valid);
    assert(texture.rgba[0] == 255); // r: full scale
    assert(texture.rgba[1] == 0);   // g: none
    assert(texture.rgba[2] == 127); // b: 0x8000 of 0xFFFF, so just under half
    assert(texture.rgba[3] == 255); // a: full scale
}

// A component narrower than eight bits is expanded to the full range by
// `value * 255 / max`, and that arithmetic TRUNCATES.
//
// This matters far more than it looks. The obvious fast expansion is bit
// replication - a 5-bit value becomes `(v << 3) | (v >> 2)` - and it agrees with
// the division at both ends of the range and for most values in between, which
// is exactly why it passes a test that only checks 0 and full scale. It differs
// at v=4 (33 against 32), v=9, v=13 and so on: a handful of least-significant
// bits, spread over every texel of every texture, invisible by eye and fatal to
// a frame compared by hash.
//
// So this checks the whole range of every width a format uses, against the
// expression itself. It is the test that stands between the decoder and any
// future attempt to make it faster by rounding differently.
void test_narrow_components_expand_by_truncating_division() {
    fixture fx;
    // Each width, with a format that carries it in its lowest component.
    struct {
        texture_format format;
        uint32_t width;
        endian swap;
        uint32_t bytes;
    } cases[] = {
        {texture_format::k_4_4_4_4, 4, endian::swap_8in16, 2},
        {texture_format::k_5_6_5, 5, endian::swap_8in16, 2},
        {texture_format::k_1_5_5_5, 5, endian::swap_8in16, 2},
        {texture_format::k_2_10_10_10, 10, endian::swap_8in32, 4},
        {texture_format::k_16_16_16_16, 16, endian::swap_8in32, 8},
    };
    for (const auto& c : cases) {
        const uint64_t max = (uint64_t{1} << c.width) - 1u;
        // Every value for the narrow widths; a spread for the wide ones, where
        // checking all 65,536 would mean 65,536 decodes.
        const uint64_t step = max > 1024 ? 251 : 1;
        for (uint64_t value = 0; value <= max; value += step) {
            // The component sits in the LOW bits of the word, and the word is
            // written to memory in the byte order the swap will undo.
            uint64_t word = value;
            uint8_t bytes[8] = {0, 0, 0, 0, 0, 0, 0, 0};
            for (uint32_t i = 0; i < c.bytes; ++i)
                bytes[i] = static_cast<uint8_t>(word >> (8 * i));
            // Undo, on paper, what the reader's swap will do: write the bytes
            // so that after the swap the word reads back as `value`.
            if (c.swap == endian::swap_8in16) {
                for (uint32_t i = 0; i + 1 < c.bytes; i += 2)
                    std::swap(bytes[i], bytes[i + 1]);
            } else if (c.swap == endian::swap_8in32) {
                for (uint32_t half = 0; half < c.bytes; half += 4)
                    for (uint32_t i = 0; i < 2; ++i)
                        std::swap(bytes[half + i], bytes[half + 3 - i]);
            }
            for (uint32_t i = 0; i < c.bytes; ++i)
                fx.memory.write_u8(kBase + i, bytes[i]);

            const host_texture texture = read_texture(
                fx.memory, describe(1, 1, c.format, false, c.swap,
                                    swizzle_of(kR, kZero, kZero, kOne)));
            assert(texture.valid);
            const uint8_t expected = static_cast<uint8_t>(value * 255 / max);
            if (texture.rgba[0] != expected) {
                std::printf("width %u value %llu: expected %u, got %u\n",
                            c.width, static_cast<unsigned long long>(value),
                            expected, texture.rgba[0]);
                assert(false);
            }
        }
    }
}

// The span a decode read, reported so a caller can establish later that the
// bytes behind a texture have not changed. The texture cache is built on this:
// a span reported short would leave the last rows unchecked, and a texture
// whose bottom edge changed would be served stale.
void test_the_source_span_covers_what_was_read() {
    fixture fx;
    // Pitch wider than the width, so the span is the PITCH's worth of rows and
    // not the width's - taking the width would under-report by a quarter here.
    texture_fetch_constant fetch = describe(8, 4, texture_format::k_8_8_8_8,
                                            false);
    fetch.pitch_pixels = 16;
    const host_texture texture = read_texture(fx.memory, fetch);
    assert(texture.valid);
    assert(texture.source_address == kBase);
    assert(texture.source_bytes == 16u * 4u * 4u);
}

// The "_AS_" formats are the same texel as the plain format they wrap. Reading
// one must give the same pixels as the other, or a title that names the wide
// variant loses a texture for the sake of a number.
void test_2_10_10_10_as_16_16_16_16_matches_the_plain_format() {
    fixture fx;
    // a = 3 (full), b = 1023 (full), g = 0, r = 512 (half), as one 32-bit word
    // 0xFFF00200, stored with its bytes swapped for 8in32.
    fx.memory.write_u8(kBase + 0, 0xFF);
    fx.memory.write_u8(kBase + 1, 0xF0);
    fx.memory.write_u8(kBase + 2, 0x02);
    fx.memory.write_u8(kBase + 3, 0x00);
    const uint32_t swizzle = swizzle_of(kR, kG, kB, kA);
    const host_texture plain =
        read_texture(fx.memory, describe(1, 1, texture_format::k_2_10_10_10,
                                         false, endian::swap_8in32, swizzle));
    const host_texture wide = read_texture(
        fx.memory,
        describe(1, 1, texture_format::k_2_10_10_10_as_16_16_16_16, false,
                 endian::swap_8in32, swizzle));
    assert(plain.valid && wide.valid);
    assert(plain.rgba == wide.rgba);
    assert(plain.rgba[0] == 127); // r: 512 of 1023
    assert(plain.rgba[1] == 0);
    assert(plain.rgba[2] == 255);
    assert(plain.rgba[3] == 255);
}

// A slot that was never set up is not a texture, whatever its address says.
void test_non_texture_slot_is_rejected() {
    fixture fx;
    texture_fetch_constant fetch =
        describe(4, 4, texture_format::k_8_8_8_8, false);
    fetch.type = 0;
    assert(!read_texture(fx.memory, fetch).valid);
}

// Uncommitted memory is rejected up front rather than read until it faults.
void test_uncommitted_texture_is_rejected() {
    fixture fx;
    texture_fetch_constant fetch =
        describe(64, 64, texture_format::k_8_8_8_8, false);
    fetch.base_address = 0x0E000000; // never committed
    assert(!read_texture(fx.memory, fetch).valid);
}

// A texture whose shorter side is 16 blocks or fewer shares one tile with its
// own mip levels, and the base level is pushed to the far side of it. So its
// pixels do NOT start at its base address: reading from there lands on the mip
// chain, which decodes into a plausible-looking picture that is the wrong part
// of one - the failure Geometry Wars' sprite atlas showed as an empty middle.
void test_packed_base_level_is_offset() {
    fixture fx;
    const uint32_t w = 16, h = 64, pitch = 64;
    // The marker goes where the BASE level's texel (0, 0) really is: sixteen
    // blocks into the first row, past the packed mip levels.
    const uint32_t at = kBase + (0 * pitch + 16) * 4;
    fx.memory.write_u8(at + 0, 0x11); // A
    fx.memory.write_u8(at + 1, 0x22); // R
    fx.memory.write_u8(at + 2, 0x33); // G
    fx.memory.write_u8(at + 3, 0x44); // B
    // And a decoy at offset zero, where the mip chain lives.
    fx.memory.write_u8(kBase + 1, 0x99);

    texture_fetch_constant fetch =
        describe(w, h, texture_format::k_8_8_8_8, false);
    fetch.pitch_pixels = pitch;
    fetch.packed_mips = true;
    const host_texture texture = read_texture(fx.memory, fetch);
    assert(texture.valid);
    assert(texture.rgba[0] == 0x22 && texture.rgba[1] == 0x33 &&
           texture.rgba[2] == 0x44 && texture.rgba[3] == 0x11);

    // Without the packed-levels flag the base level has the tile to itself and
    // starts where its address says - the decoy.
    fetch.packed_mips = false;
    const host_texture unpacked = read_texture(fx.memory, fetch);
    assert(unpacked.valid && unpacked.rgba[0] == 0x99);
}

// A wider-than-tall packed texture is offset down the tile rather than across
// it, so the span read has to cover the rows before it.
void test_packed_wide_texture_is_offset_vertically() {
    fixture fx;
    const uint32_t w = 64, h = 16, pitch = 64;
    const uint32_t at = kBase + (16 * pitch + 0) * 4;
    fx.memory.write_u8(at + 1, 0x77); // R of the base level's first texel
    texture_fetch_constant fetch =
        describe(w, h, texture_format::k_8_8_8_8, false);
    fetch.pitch_pixels = pitch;
    fetch.packed_mips = true;
    const host_texture texture = read_texture(fx.memory, fetch);
    assert(texture.valid);
    assert(texture.rgba[0] == 0x77);
}

// --- block-compressed formats -------------------------------------------
//
// A DXT block is defined little-endian and the console stores it byte-swapped
// within each 16-bit unit, so every block below is written the way the hardware
// holds one - high byte first - and the expected colours are worked out by hand
// from the format, not from another run of the decoder.

// Writes a 16-bit field of a DXT block as the console stores it.
void write_block_u16(fixture& fx, uint32_t offset, uint16_t value) {
    fx.memory.write_u8(kBase + offset + 0, static_cast<uint8_t>(value >> 8));
    fx.memory.write_u8(kBase + offset + 1, static_cast<uint8_t>(value & 0xFF));
}

// The rgba-passthrough swizzle, so these tests see the decoder's own channels.
constexpr uint32_t kPassthrough = swizzle_of(kR, kG, kB, kA);

// A DXT1 block's four colours: the two endpoints and the two thirds between
// them. Getting the interpolation backwards, or expanding 5:6:5 by shifting
// without repeating the top bits, both give a picture of the right SHAPE - so
// the two-thirds colour is checked to the exact value the format defines.
void test_dxt1_interpolates_between_its_endpoints() {
    fixture fx;
    // c0 = pure red (31,0,0), c1 = pure blue (0,0,31). c0 > c1, so the block is
    // the four-colour kind and every texel is opaque.
    write_block_u16(fx, 0, 0xF800);
    write_block_u16(fx, 2, 0x001F);
    // Indices, two bits per texel, texel 0 in the low bits: 0, 1, 2, 3 then
    // zeroes. Low 16 bits of the index word are the first two rows.
    write_block_u16(fx, 4, 0xE4); // 0b11100100 -> 0,1,2,3
    write_block_u16(fx, 6, 0x0000);
    const host_texture texture = read_texture(
        fx.memory, describe(4, 4, texture_format::k_DXT1, false,
                            endian::swap_8in16, kPassthrough));
    assert(texture.valid);
    assert(texture.width == 4 && texture.height == 4);
    // texel 0: c0, pure red at full range (31 -> 255, not 248).
    assert(texture.rgba[0] == 0xFF && texture.rgba[1] == 0x00 &&
           texture.rgba[2] == 0x00 && texture.rgba[3] == 0xFF);
    // texel 1: c1, pure blue.
    assert(texture.rgba[4] == 0x00 && texture.rgba[6] == 0xFF);
    // texel 2 is (2*c0 + c1)/3, per channel: red two thirds, blue one third.
    assert(texture.rgba[8] == static_cast<uint8_t>((2 * 255 + 0 + 1) / 3));
    assert(texture.rgba[10] == static_cast<uint8_t>((2 * 0 + 255 + 1) / 3));
    // texel 3 is (c0 + 2*c1)/3: red one third, blue two thirds.
    assert(texture.rgba[12] == static_cast<uint8_t>((255 + 2 * 0 + 1) / 3));
    assert(texture.rgba[14] == static_cast<uint8_t>((0 + 2 * 255 + 1) / 3));
    // Every texel of a four-colour block is opaque.
    for (uint32_t i = 0; i < 16; ++i) assert(texture.rgba[i * 4 + 3] == 0xFF);
}

// The other DXT1 block kind: c0 <= c1 spends the fourth slot on transparency.
// Applying the four-colour rule here leaves a cut-out sprite with a solid
// rectangle around it, which reads as a texture bound wrongly rather than as a
// block decoded wrongly.
void test_dxt1_punch_through_alpha() {
    fixture fx;
    write_block_u16(fx, 0, 0x001F); // c0 = blue
    write_block_u16(fx, 2, 0xF800); // c1 = red, so c0 < c1
    write_block_u16(fx, 4, 0xE4);   // 0,1,2,3
    write_block_u16(fx, 6, 0x0000);
    const host_texture texture = read_texture(
        fx.memory, describe(4, 4, texture_format::k_DXT1, false,
                            endian::swap_8in16, kPassthrough));
    assert(texture.valid);
    assert(texture.rgba[3] == 0xFF);  // texel 0, an endpoint
    assert(texture.rgba[7] == 0xFF);  // texel 1, an endpoint
    assert(texture.rgba[11] == 0xFF); // texel 2, the midpoint
    assert(texture.rgba[15] == 0x00); // texel 3, the transparent slot
    // The midpoint is the average, not a third.
    assert(texture.rgba[8] == 127 && texture.rgba[10] == 127);
}

// DXT4/5 carries alpha as two endpoints and 3-bit indices in its first half,
// with an ordinary colour block in its second. The colour half must NOT apply
// DXT1's punch-through rule: it has no say in alpha here, and taking it would
// make every texel of the fourth colour invisible.
void test_dxt4_5_alpha_and_color_halves() {
    fixture fx;
    // Alpha endpoints a0 = 255, a1 = 0. a0 > a1, so eight interpolated values.
    // They are the low and high byte of the first 16-bit unit.
    write_block_u16(fx, 0, 0x00FF); // a0 = 0xFF (low byte), a1 = 0x00
    write_block_u16(fx, 2, 0x0008); // indices: texel 0 -> 0, texel 1 -> 1
    write_block_u16(fx, 4, 0x0000);
    write_block_u16(fx, 6, 0x0000);
    // Colour half: c0 = red, c1 = blue, but stored so that c0 < c1 - which in a
    // DXT1 block would mean punch-through and here must not.
    write_block_u16(fx, 8, 0x001F);  // c0 = blue
    write_block_u16(fx, 10, 0xF800); // c1 = red
    write_block_u16(fx, 12, 0xE4);   // 0,1,2,3
    write_block_u16(fx, 14, 0x0000);
    const host_texture texture = read_texture(
        fx.memory, describe(4, 4, texture_format::k_DXT4_5, false,
                            endian::swap_8in16, kPassthrough));
    assert(texture.valid);
    assert(texture.rgba[3] == 0xFF); // texel 0 takes alpha index 0 = a0
    assert(texture.rgba[7] == 0x00); // texel 1 takes alpha index 1 = a1
    // Texel 3 is the colour block's fourth slot; with the colour half's own
    // rule suppressed it is a real colour, not a hole.
    assert(texture.rgba[12 + 0] == static_cast<uint8_t>((0 + 2 * 255 + 1) / 3));
    // And its alpha comes from the alpha half (index 0 here), not from being
    // the fourth colour.
    assert(texture.rgba[15] == 0xFF);
}

// DXT2/3's alpha is four explicit bits per texel, low nibble first.
void test_dxt2_3_explicit_alpha() {
    fixture fx;
    // First 16-bit unit covers texels 0-3: nibbles 0xF, 0x0, 0x8, 0x0.
    write_block_u16(fx, 0, 0x080F);
    write_block_u16(fx, 2, 0x0000);
    write_block_u16(fx, 4, 0x0000);
    write_block_u16(fx, 6, 0x0000);
    write_block_u16(fx, 8, 0xF800);
    write_block_u16(fx, 10, 0x001F);
    write_block_u16(fx, 12, 0x0000);
    write_block_u16(fx, 14, 0x0000);
    const host_texture texture = read_texture(
        fx.memory, describe(4, 4, texture_format::k_DXT2_3, false,
                            endian::swap_8in16, kPassthrough));
    assert(texture.valid);
    assert(texture.rgba[3] == 0xFF);  // 0xF -> 0xFF, repeated not shifted
    assert(texture.rgba[7] == 0x00);  // 0x0
    assert(texture.rgba[11] == 0x88); // 0x8 -> 0x88
}

// A texture whose size is not a whole number of blocks. The last block is
// decoded and its outside texels dropped; writing them would run past the row.
void test_partial_block_is_clipped() {
    fixture fx;
    write_block_u16(fx, 0, 0xF800);
    write_block_u16(fx, 2, 0xF800);
    write_block_u16(fx, 4, 0x0000);
    write_block_u16(fx, 6, 0x0000);
    const host_texture texture = read_texture(
        fx.memory, describe(2, 2, texture_format::k_DXT1, false,
                            endian::swap_8in16, kPassthrough));
    assert(texture.valid);
    assert(texture.rgba.size() == 2u * 2u * 4u);
    assert(texture.rgba[0] == 0xFF); // still the block's colour
}

// The swizzle applies to a decompressed texel exactly as it does to an unpacked
// one - the two paths must not disagree about what a selector means.
void test_compressed_honours_the_swizzle() {
    fixture fx;
    write_block_u16(fx, 0, 0xF800); // c0 = red
    write_block_u16(fx, 2, 0xF800);
    write_block_u16(fx, 4, 0x0000);
    write_block_u16(fx, 6, 0x0000);
    const host_texture texture = read_texture(
        fx.memory, describe(4, 4, texture_format::k_DXT1, false,
                            endian::swap_8in16, swizzle_of(kB, kG, kR, kOne)));
    assert(texture.valid);
    // Red arrives in the output's third channel, and the fourth is the
    // constant one the selector named.
    assert(texture.rgba[0] == 0x00 && texture.rgba[2] == 0xFF);
    assert(texture.rgba[3] == 0xFF);
}

// A tiled compressed texture is addressed in BLOCKS. Taking its pitch as texels
// aligns to a macro tile four times too wide, which reads every row from
// somewhere else in the image - a scrambled texture, not a missing one.
void test_tiled_compressed_is_addressed_in_blocks() {
    fixture fx;
    // 256x256 texels = 64x64 blocks, so the pitch is 64 blocks and NOT the 256
    // a texel reading would give. The two only diverge once a block crosses a
    // macro tile - the outer term is (y/32) * (pitch/32) - so the block read
    // back below is on the second row of macro tiles. A texture small enough to
    // sit in one macro tile decodes identically either way and proves nothing.
    texture_fetch_constant fetch =
        describe(256, 256, texture_format::k_DXT1, true, endian::swap_8in16,
                 kPassthrough);
    fetch.pitch_pixels = 256;
    const uint32_t offset = tiled_offset_2d(0, 32, 64, 3);
    write_block_u16(fx, offset + 0, 0x07E0); // pure green
    write_block_u16(fx, offset + 2, 0x07E0);
    write_block_u16(fx, offset + 4, 0x0000);
    write_block_u16(fx, offset + 6, 0x0000);
    const host_texture texture = read_texture(fx.memory, fetch);
    assert(texture.valid);
    // Block (0, 32) holds texel (0, 128).
    const std::size_t texel = (static_cast<std::size_t>(128) * 256 + 0) * 4;
    assert(texture.rgba[texel + 0] == 0x00);
    assert(texture.rgba[texel + 1] == 0xFF);
    assert(texture.rgba[texel + 2] == 0x00);
}

// An unknown format is still refused. Deciding to decode the DXT ones must not
// turn into decoding anything whose size happens to fit.
void test_unknown_format_is_still_rejected() {
    fixture fx;
    texture_fetch_constant fetch =
        describe(4, 4, texture_format::k_DXT1, false);
    fetch.format = 22; // k_24_8, a depth format with no reader here
    assert(!read_texture(fx.memory, fetch).valid);
}

// --- the swap is over WORDS, not over fields ------------------------------
//
// Every block below is written as the literal bytes the console holds, and the
// expected pixels are derived from the format by hand. Deriving the stored bytes
// with the same helper the decoder uses would only prove the two agree.
void store(fixture& fx, uint32_t offset, const uint8_t* bytes, uint32_t count) {
    for (uint32_t i = 0; i < count; ++i)
        fx.memory.write_u8(kBase + offset + i, bytes[i]);
}

// A DXT4/5 block's alpha indices are two 24-bit groups, and the second starts
// at byte 5 - so it is not a 16-bit field and cannot be un-swapped as one. The
// hardware swaps whole 32-bit words; undoing it field by field gathers bytes
// 6,5,4 where the hardware has 4,7,6, and the alpha of texels 8-15 comes out
// scrambled. Colour is unaffected, so the failure is a texture whose shape and
// hue are right and whose transparency is noise over half of every block.
void test_dxt4_5_alpha_indices_cross_the_16_bit_units() {
    fixture fx;
    // Canonical little-endian block: a0 = 255, a1 = 0 (so eight interpolated
    // steps), texels 0-7 all index 0, texels 8-15 indices 0,1,2,3,4,5,6,7.
    // That index group packs to 1<<3 | 2<<6 | 3<<9 | 4<<12 | 5<<15 | 6<<18 |
    // 7<<21 = 16434824 = 0xFAC688, so bytes 5,6,7 are 88 C6 FA. The colour half
    // is c0 = 0xF800 (pure red) with every index 0.
    //
    // Held with the bytes of each 16-bit unit exchanged, as the 8in16 swap says.
    const uint8_t stored[16] = {0x00, 0xFF, 0x00, 0x00, 0x88, 0x00, 0xFA, 0xC6,
                                0xF8, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00};
    store(fx, 0, stored, 16);
    const host_texture texture = read_texture(
        fx.memory, describe(4, 4, texture_format::k_DXT4_5, false,
                            endian::swap_8in16, kPassthrough));
    assert(texture.valid);
    // ((7 - i) * 255 + i * 0) / 7 for i = 1..6, either side of the endpoints.
    const uint8_t expected[8] = {255, 0, 218, 182, 145, 109, 72, 36};
    for (uint32_t i = 0; i < 8; ++i)
        assert(texture.rgba[(8 + i) * 4 + 3] == expected[i]);
    // And the colour half still lands: every texel is c0, pure red.
    assert(texture.rgba[8 * 4 + 0] == 0xFF && texture.rgba[8 * 4 + 2] == 0x00);
}

// The two swaps that reach across a whole 32-bit word cannot be expressed as a
// swap of 16-bit fields at all. 16in32 exchanges the halves and leaves the bytes
// within them; 8in32 does both.
void test_dxt1_word_wide_swaps() {
    // Canonical: c0 = 0xF800 (red), c1 = 0x001F (blue), indices 0,1,2,3. That
    // is dword0 = 0x001FF800 and dword1 = 0x000000E4.
    {
        fixture fx;
        // 16in32: 0xF800001F and 0x00E40000.
        const uint8_t stored[8] = {0x1F, 0x00, 0x00, 0xF8,
                                   0x00, 0x00, 0xE4, 0x00};
        store(fx, 0, stored, 8);
        const host_texture texture = read_texture(
            fx.memory, describe(4, 4, texture_format::k_DXT1, false,
                                endian::swap_16in32, kPassthrough));
        assert(texture.valid);
        assert(texture.rgba[0] == 0xFF && texture.rgba[2] == 0x00); // c0, red
        assert(texture.rgba[4] == 0x00 && texture.rgba[6] == 0xFF); // c1, blue
    }
    {
        fixture fx;
        // 8in32, a whole-word byte reversal: 0x00F81F00 and 0xE4000000.
        const uint8_t stored[8] = {0x00, 0x1F, 0xF8, 0x00,
                                   0x00, 0x00, 0x00, 0xE4};
        store(fx, 0, stored, 8);
        const host_texture texture = read_texture(
            fx.memory, describe(4, 4, texture_format::k_DXT1, false,
                                endian::swap_8in32, kPassthrough));
        assert(texture.valid);
        assert(texture.rgba[0] == 0xFF && texture.rgba[2] == 0x00);
        assert(texture.rgba[4] == 0x00 && texture.rgba[6] == 0xFF);
    }
}

// Where a compressed texture's base level sits inside its packed mip tail. The
// 16 the hardware packs by is a count of TEXELS: a 16x16 DXT1 base level starts
// sixteen texels along, which is FOUR blocks, not sixteen. Reading it as sixteen
// blocks lands 48 texels further on - inside the neighbouring texture.
void test_compressed_packed_base_offset_is_in_blocks() {
    fixture fx;
    // Two blocks, each a flat colour, at the two candidate positions.
    const auto store_flat = [&](uint32_t byte_offset, uint16_t c0) {
        // Canonical: c0, c1 = 0, every index 0. Held 8in16-swapped.
        const uint8_t stored[8] = {static_cast<uint8_t>(c0 >> 8),
                                   static_cast<uint8_t>(c0 & 0xFF),
                                   0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
        store(fx, byte_offset, stored, 8);
    };
    const uint32_t pitch_blocks = 32; // tiled, so aligned to the macro tile
    store_flat(tiled_offset_2d(4, 0, pitch_blocks, 3), 0x07E0);  // green
    store_flat(tiled_offset_2d(16, 0, pitch_blocks, 3), 0xF800); // red
    texture_fetch_constant fetch = describe(
        16, 16, texture_format::k_DXT1, true, endian::swap_8in16, kPassthrough);
    fetch.packed_mips = true;
    const host_texture texture = read_texture(fx.memory, fetch);
    assert(texture.valid);
    assert(texture.rgba[0] == 0x00 && texture.rgba[1] == 0xFF);
}

// DXN is two interpolated-value halves, read as red and green - not a colour
// half and an alpha half. Taking it for a DXT4/5 block would decode its red as
// alpha and its green as a 5:6:5 colour.
void test_dxn_reads_two_interpolated_halves() {
    fixture fx;
    // Canonical first half: a0 = 255, a1 = 0, every index 0 -> red 255.
    // Canonical second half: a0 = 0, a1 = 255 (so the six-step rule), indices
    // 0, 1, 2 for the first three texels -> 0, 255, then (1 * 255) / 5 = 51.
    // That index group is 1<<3 | 2<<6 = 0x88.
    const uint8_t stored[16] = {0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                0xFF, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00};
    store(fx, 0, stored, 16);
    const host_texture texture = read_texture(
        fx.memory, describe(4, 4, texture_format::k_DXN, false,
                            endian::swap_8in16, kPassthrough));
    assert(texture.valid);
    // Two components, so the second is repeated into the channels after it.
    assert(texture.rgba[0] == 0xFF && texture.rgba[1] == 0x00 &&
           texture.rgba[2] == 0x00 && texture.rgba[3] == 0x00);
    assert(texture.rgba[4] == 0xFF && texture.rgba[5] == 0xFF &&
           texture.rgba[7] == 0xFF);
    assert(texture.rgba[8] == 0xFF && texture.rgba[9] == 51);
}

// CTX1 is DXT1-sized but is not a 5:6:5 format: it is two 8-bit endpoints per
// channel, red in the high byte of each 16-bit unit, with DXT1's four-code
// weighting and no punch-through mode.
void test_ctx1_reads_two_eight_bit_endpoints() {
    fixture fx;
    // Canonical: g0 = 0, r0 = 255, g1 = 255, r1 = 0, indices 0,1,2,3.
    const uint8_t stored[8] = {0xFF, 0x00, 0x00, 0xFF,
                               0x00, 0xE4, 0x00, 0x00};
    store(fx, 0, stored, 8);
    const host_texture texture = read_texture(
        fx.memory, describe(4, 4, texture_format::k_CTX1, false,
                            endian::swap_8in16, kPassthrough));
    assert(texture.valid);
    assert(texture.rgba[0] == 255 && texture.rgba[1] == 0);   // endpoint 0
    assert(texture.rgba[4] == 0 && texture.rgba[5] == 255);   // endpoint 1
    // Two thirds and one third, rounded the way the format defines.
    assert(texture.rgba[8] == static_cast<uint8_t>((2 * 255 + 0 + 1) / 3));
    assert(texture.rgba[9] == static_cast<uint8_t>((0 + 255 + 1) / 3));
    assert(texture.rgba[12] == static_cast<uint8_t>((255 + 0 + 1) / 3));
    assert(texture.rgba[13] == static_cast<uint8_t>((0 + 2 * 255 + 1) / 3));
}

// The _AS_16_16_16_16 DXT formats are the same blocks with a note to the sampler
// about what it expands them to. Refusing them because the number is not the
// plain format's is a texture dropped for nothing.
void test_dxt_as_16_16_16_16_matches_its_base_format() {
    const auto decode = [](texture_format format) {
        fixture fx;
        const uint8_t stored[8] = {0xF8, 0x00, 0x00, 0x1F,
                                   0x00, 0xE4, 0x00, 0x00};
        store(fx, 0, stored, 8);
        return read_texture(fx.memory,
                            describe(4, 4, format, false, endian::swap_8in16,
                                     kPassthrough));
    };
    const host_texture plain = decode(texture_format::k_DXT1);
    const host_texture aliased = decode(texture_format::k_DXT1_as_16_16_16_16);
    assert(plain.valid && aliased.valid);
    assert(plain.rgba == aliased.rgba);
    // And the one that is decoded, rather than merely equal to another decode.
    assert(plain.rgba[0] == 0xFF && plain.rgba[2] == 0x00);
}

} // namespace

int main() {
    test_argb_channel_order();
    test_swizzle_selects_the_channels();
    test_endianness_is_honoured();
    test_missing_components_are_replicated();
    test_untiled_layout();
    test_tiled_layout_follows_the_swizzle();
    test_tiled_partial_last_band_is_still_read();
    test_packed_base_level_is_offset();
    test_packed_wide_texture_is_offset_vertically();
    test_565_expands_to_full_range();
    test_16_16_16_16_reads_all_four_channels();
    test_narrow_components_expand_by_truncating_division();
    test_the_source_span_covers_what_was_read();
    test_2_10_10_10_as_16_16_16_16_matches_the_plain_format();
    test_non_texture_slot_is_rejected();
    test_uncommitted_texture_is_rejected();
    test_dxt1_interpolates_between_its_endpoints();
    test_dxt1_punch_through_alpha();
    test_dxt4_5_alpha_and_color_halves();
    test_dxt2_3_explicit_alpha();
    test_partial_block_is_clipped();
    test_compressed_honours_the_swizzle();
    test_tiled_compressed_is_addressed_in_blocks();
    test_dxt4_5_alpha_indices_cross_the_16_bit_units();
    test_dxt1_word_wide_swaps();
    test_compressed_packed_base_offset_is_in_blocks();
    test_dxn_reads_two_interpolated_halves();
    test_ctx1_reads_two_eight_bit_endpoints();
    test_dxt_as_16_16_16_16_matches_its_base_format();
    test_unknown_format_is_still_rejected();
    std::printf("texture_read_test: all checks passed\n");
    return 0;
}
