// Tests for keeping decoded textures between draws and between frames.
//
// A texture cache is the one optimisation in the render path that can produce a
// WRONG PICTURE rather than merely a slow one, and it does it silently and
// late: the frame it goes stale on looks plausible, and nothing connects it back
// to the cache. So the tests here are almost all about when a hit must NOT
// happen - after the guest writes over the source, after any field of the fetch
// constant changes - rather than about when it may.
//
// The standard every one of them holds the cache to is that its output is
// indistinguishable from unpacking again. Where a test expects a hit, it also
// checks the pixels against a fresh read_texture; where it expects a miss, it
// checks that the pixels FOLLOWED the change.
#include "whitty_xenon/gpu/texture_cache.h"

#include "whitty_xenon/gpu/texture_format.h"

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
        assert(memory.commit(kBase, 0x80000, error));
        // Something with structure, so a wrong offset shows up as wrong pixels
        // rather than as the same flat colour everywhere.
        for (uint32_t i = 0; i < 0x8000; ++i)
            memory.write_u8(kBase + i, static_cast<uint8_t>(i * 7 + (i >> 5)));
    }
};

constexpr uint32_t kR = 0, kG = 1, kB = 2, kA = 3;
constexpr uint32_t swizzle_of(uint32_t x, uint32_t y, uint32_t z, uint32_t w) {
    return x | (y << 3) | (z << 6) | (w << 9);
}

texture_fetch_constant describe(uint32_t width, uint32_t height,
                                texture_format format = texture_format::k_8_8_8_8,
                                bool tiled = false) {
    texture_fetch_constant fetch;
    fetch.type = 2;
    fetch.base_address = kBase & 0x0FFFFFFF; // stored without the alias
    fetch.width = width;
    fetch.height = height;
    fetch.format = static_cast<uint32_t>(format);
    fetch.tiled = tiled;
    fetch.pitch_pixels = width;
    fetch.endianness = endian::swap_8in32;
    fetch.swizzle = swizzle_of(kB, kG, kR, kA);
    return fetch;
}

// What unpacking again would produce, which is the only thing a hit is allowed
// to be.
void assert_matches_fresh_decode(guest_memory& memory,
                                 const texture_fetch_constant& fetch,
                                 const host_texture& served) {
    const host_texture fresh = read_texture(memory, fetch);
    assert(fresh.valid);
    assert(fresh.width == served.width);
    assert(fresh.height == served.height);
    assert(fresh.rgba == served.rgba);
}

// The plain case: the same texture, twice, with nothing touched in between.
void test_unchanged_texture_is_served_from_the_cache() {
    fixture fx;
    texture_cache cache;
    const texture_fetch_constant fetch = describe(16, 16);

    cache.begin_frame();
    const host_texture* first = cache.decode(fx.memory, fetch);
    assert(first != nullptr);
    assert(cache.misses() == 1 && cache.hits() == 0);

    cache.begin_frame();
    const host_texture* second = cache.decode(fx.memory, fetch);
    assert(second != nullptr);
    assert(cache.hits() == 1 && cache.misses() == 1);
    assert_matches_fresh_decode(fx.memory, fetch, *second);
}

// THE test. A title that streams new content into a buffer it has used before
// must not be served the old content - and the address, format and size are all
// unchanged, so nothing but the bytes themselves can tell the difference.
void test_changed_source_is_decoded_again() {
    fixture fx;
    texture_cache cache;
    const texture_fetch_constant fetch = describe(16, 16);

    cache.begin_frame();
    const host_texture* first = cache.decode(fx.memory, fetch);
    assert(first != nullptr);
    const std::vector<uint8_t> before = first->rgba;

    // One byte, in the middle of the texture.
    fx.memory.write_u8(kBase + 400, 0x5A);
    fx.memory.write_u8(kBase + 401, 0xA5);

    cache.begin_frame();
    const host_texture* second = cache.decode(fx.memory, fetch);
    assert(second != nullptr);
    assert(cache.misses() == 2);
    assert(cache.hits() == 0);
    assert(second->rgba != before);
    assert_matches_fresh_decode(fx.memory, fetch, *second);
}

// A change in the very last byte of the span, which a source comparison that
// measured the span short would miss - and would then serve stale pixels for
// the whole bottom row.
void test_change_at_the_end_of_the_span_is_noticed() {
    fixture fx;
    texture_cache cache;
    const texture_fetch_constant fetch = describe(16, 16);

    cache.begin_frame();
    const host_texture* first = cache.decode(fx.memory, fetch);
    assert(first != nullptr);
    const uint32_t span = first->source_bytes;
    assert(span == 16u * 16u * 4u);
    const std::vector<uint8_t> before = first->rgba;

    fx.memory.write_u8(kBase + span - 1,
                       static_cast<uint8_t>(
                           fx.memory.read_u8(kBase + span - 1) ^ 0xFF));

    cache.begin_frame();
    const host_texture* second = cache.decode(fx.memory, fetch);
    assert(second != nullptr);
    assert(second->rgba != before);
    assert_matches_fresh_decode(fx.memory, fetch, *second);
}

// Every field the unpacking reads is part of the identity. A key that left one
// out would serve the first texture's pixels for the second, and each of these
// is a field it would be easy to leave out.
void test_every_field_of_the_identity_is_distinguished() {
    fixture fx;
    texture_cache cache;
    const texture_fetch_constant base = describe(16, 16);

    cache.begin_frame();
    assert(cache.decode(fx.memory, base) != nullptr);
    const uint64_t after_first = cache.misses();
    assert(after_first == 1);

    // Each of these describes a DIFFERENT unpacking of the same memory, so each
    // must miss rather than be served what came before.
    const auto expect_distinct = [&](texture_fetch_constant fetch,
                                     const char* what) {
        const uint64_t misses = cache.misses();
        const host_texture* served = cache.decode(fx.memory, fetch);
        assert(served != nullptr);
        if (cache.misses() != misses + 1) {
            std::printf("cache did not distinguish %s\n", what);
            assert(false);
        }
        assert_matches_fresh_decode(fx.memory, fetch, *served);
    };

    texture_fetch_constant other = base;
    other.swizzle = swizzle_of(kR, kG, kB, kA);
    expect_distinct(other, "the swizzle");

    other = base;
    other.endianness = endian::none;
    expect_distinct(other, "the endianness");

    other = base;
    other.width = 8;
    expect_distinct(other, "the width");

    other = base;
    other.height = 8;
    expect_distinct(other, "the height");

    other = base;
    other.format = static_cast<uint32_t>(texture_format::k_2_10_10_10);
    expect_distinct(other, "the format");

    other = base;
    other.base_address = (kBase & 0x0FFFFFFF) + 0x100;
    expect_distinct(other, "the base address");

    // The pitch is a MEMORY stride, not the width: two textures of the same
    // size at the same address with different pitches read different pixels.
    other = base;
    other.pitch_pixels = 32;
    expect_distinct(other, "the pitch");

    // Tiling changes where every texel comes from and nothing else about the
    // fetch.
    other = base;
    other.tiled = true;
    expect_distinct(other, "the tiling");

    // Packed mips move the base level to the far side of its tile, so the same
    // fetch with and without reads two different parts of memory.
    other = base;
    other.width = 8;
    other.height = 8;
    other.pitch_pixels = 32;
    cache.decode(fx.memory, other);
    texture_fetch_constant packed = other;
    packed.packed_mips = true;
    expect_distinct(packed, "the packed-mip flag");
}

// A texture bound by many draws of one frame is checked against guest memory
// once, not once per draw - and every draw gets the same pixels, at the same
// address, so a draw assembled earlier is not left pointing at freed memory.
void test_repeated_binds_within_a_frame_are_one_check() {
    fixture fx;
    texture_cache cache;
    const texture_fetch_constant fetch = describe(16, 16);

    cache.begin_frame();
    const host_texture* first = cache.decode(fx.memory, fetch);
    assert(first != nullptr);
    for (int i = 0; i < 20; ++i) {
        const host_texture* again = cache.decode(fx.memory, fetch);
        assert(again == first); // the identical entry, not merely equal pixels
    }
    assert(cache.misses() == 1);
    assert(cache.hits() == 20);
}

// With the cache off nothing is kept, and the pixels are what unpacking
// produces - which is what makes running with it off a way to prove a wrong
// picture is not the cache's doing.
void test_disabled_cache_decodes_every_time() {
    fixture fx;
    texture_cache cache;
    cache.set_enabled(false);
    const texture_fetch_constant fetch = describe(16, 16);

    cache.begin_frame();
    const host_texture* first = cache.decode(fx.memory, fetch);
    assert(first != nullptr);
    const host_texture* second = cache.decode(fx.memory, fetch);
    assert(second != nullptr);
    assert(first != second); // separate results, nothing reused
    assert(cache.hits() == 0);
    assert(cache.misses() == 2);
    assert(first->rgba == second->rgba);
    assert(cache.entries() == 0);
    assert_matches_fresh_decode(fx.memory, fetch, *second);
}

// A fetch describing something that cannot be converted is rejected, and stays
// rejected - a null must not be cached as though it were a texture.
void test_unconvertible_fetch_is_not_cached() {
    fixture fx;
    texture_cache cache;
    texture_fetch_constant fetch = describe(16, 16);
    fetch.type = 3; // a vertex fetch, not a texture

    cache.begin_frame();
    assert(cache.decode(fx.memory, fetch) == nullptr);
    cache.begin_frame();
    assert(cache.decode(fx.memory, fetch) == nullptr);
    assert(cache.entries() == 0);
    assert(cache.hits() == 0);
}

// The budget bounds what is kept. A title that streams through addresses
// without repeating must not grow the cache without limit.
void test_budget_bounds_what_is_kept() {
    fixture fx;
    texture_cache cache;
    cache.set_budget_bytes(64 * 1024);

    // Enough distinct textures, over enough frames, that the grace period has
    // expired for the early ones by the time the budget is exceeded.
    for (uint32_t i = 0; i < 200; ++i) {
        cache.begin_frame();
        texture_fetch_constant fetch = describe(16, 16);
        fetch.base_address = (kBase & 0x0FFFFFFF) + i * 64;
        assert(cache.decode(fx.memory, fetch) != nullptr);
    }
    // 200 entries of 16x16 RGBA plus their sources would be 400KB; the budget
    // is 64KB, and it held.
    assert(cache.bytes() <= 64 * 1024);
    assert(cache.entries() < 200);
}

// A texture wanted every frame survives the budget: eviction takes what recent
// frames have not asked for, and evicting the working set every frame would
// leave the cache doing the work of no cache while paying for one.
void test_the_working_set_survives_eviction() {
    fixture fx;
    texture_cache cache;
    cache.set_budget_bytes(64 * 1024);
    const texture_fetch_constant kept = describe(16, 16);

    for (uint32_t i = 0; i < 200; ++i) {
        cache.begin_frame();
        assert(cache.decode(fx.memory, kept) != nullptr);
        texture_fetch_constant churn = describe(16, 16);
        churn.base_address = (kBase & 0x0FFFFFFF) + 0x1000 + i * 64;
        assert(cache.decode(fx.memory, churn) != nullptr);
    }
    // The texture asked for every frame was served from the cache nearly every
    // time, rather than being thrown out with the churn.
    assert(cache.hits() > 150);
}

} // namespace

int main() {
    test_unchanged_texture_is_served_from_the_cache();
    test_changed_source_is_decoded_again();
    test_change_at_the_end_of_the_span_is_noticed();
    test_every_field_of_the_identity_is_distinguished();
    test_repeated_binds_within_a_frame_are_one_check();
    test_disabled_cache_decodes_every_time();
    test_unconvertible_fetch_is_not_cached();
    test_budget_bounds_what_is_kept();
    test_the_working_set_survives_eviction();
    std::printf("texture_cache_test: all passed\n");
    return 0;
}
