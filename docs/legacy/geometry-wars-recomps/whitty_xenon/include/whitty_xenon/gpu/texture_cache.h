// texture_cache.h - decoded textures, kept between draws and between frames.
//
// Unpacking a texture out of guest memory is the most expensive thing the
// render path does. A 512x512 texture is a quarter of a million texels, and
// each one is a load, an endian swap and four masked shifts through the fetch
// constant's swizzle. A title binds the same handful of textures across every
// draw of every frame, so nearly all of that is the same work on the same bytes
// producing the same pixels: measured on Space Giraffe, fourteen of a frame's
// sixteen milliseconds went on it, against two for building and submitting all
// the drawing.
//
// What makes keeping them SAFE rather than merely fast is that unpacking is a
// pure function of two things: the fields of the fetch constant, and the guest
// bytes it reads. Two calls with the same fields over the same bytes must
// produce the same pixels. So this keeps both, and compares both:
//
//   - the fields are compared WHOLE, not hashed. A hash collision here would
//     hand one texture's pixels back for another and draw the wrong picture
//     with nothing to say so. (The backend's upload key next door may safely
//     hash, because it compares the pixels before reusing an image; a collision
//     there costs an upload.)
//   - the source bytes are compared with memcmp. Keying on the address alone
//     would serve stale pixels the moment a title streamed new content into a
//     buffer it had used before - which titles do constantly, and which would
//     show up as the wrong texture some frames later with nothing connecting it
//     to the cache.
//
// So a hit is a proof that unpacking again would have produced what is already
// held, not a guess that it probably would have. That matters more than the
// speed: a stale texture is a far worse outcome than a slow frame.
#pragma once

#include "whitty_xenon/gpu/register_file.h"
#include "whitty_xenon/gpu/texture_read.h"
#include "whitty_xenon/memory.h"

#include <cstdint>
#include <deque>
#include <map>
#include <tuple>
#include <vector>

namespace whitty_xenon::gpu {

class texture_cache {
public:
    // How much decoded texture may be kept, and how long an entry may go
    // unwanted before the budget may drop it. The budget is generous because
    // the titles this runs bind a few megabytes and never evicting is the fast
    // case; it exists so a title that streams through addresses without
    // repeating cannot grow the cache without limit. The grace period exists
    // because a title that alternates between two sets of textures must not
    // lose one set every frame, which a same-frame rule would do.
    static constexpr uint64_t kDefaultBudgetBytes = 192ull << 20;
    static constexpr uint64_t kGraceFrames = 16;

    // Starts a frame: the one moment nothing holds a pointer into the cache,
    // and so the only moment an entry may be dropped.
    //
    // Calling this is not optional. Without it every texture is revalidated
    // against guest memory on every draw that binds it, and nothing is ever
    // evicted.
    void begin_frame();

    // The decoded pixels for a fetch constant, unpacking them only if what is
    // held cannot be shown to still be correct. Null where the fetch describes
    // nothing that can be converted, exactly as read_texture returns.
    //
    // The pointer is valid until the next begin_frame().
    const host_texture* decode(guest_memory& memory,
                               const texture_fetch_constant& fetch);

    // Whether anything may be kept. Off unpacks every texture on every call,
    // exactly as the render path did before this existed - which is what proves
    // a wrong picture is not the cache's doing, since the two must otherwise
    // produce identical pixels.
    void set_enabled(bool enabled) noexcept;
    bool enabled() const noexcept { return m_enabled; }

    void set_budget_bytes(uint64_t bytes) noexcept { m_budget = bytes; }

    void clear() noexcept;

    // Textures served from what was already held, and textures that had to be
    // unpacked. A cache that is not hitting looks exactly like no cache at all
    // from the timings alone, so these are the difference between "this is
    // working" and "this is present".
    uint64_t hits() const noexcept { return m_hits; }
    uint64_t misses() const noexcept { return m_misses; }
    std::size_t entries() const noexcept { return m_entries.size(); }
    // Texels actually unpacked. The work a cache exists to avoid is measured in
    // texels, not in calls: a hit on a 512x512 atlas and a hit on a 4x4 icon
    // count the same and are worth a quarter of a million times as much.
    uint64_t decoded_texels() const noexcept { return m_decoded_texels; }
    uint64_t bytes() const noexcept { return m_bytes; }

private:
    // Every field read_texture reads. Nothing else belongs here, and nothing
    // read_texture reads may be left out: the pitch and the packed-mip flag are
    // easy to forget and both change where the pixels come from, so a key
    // without them would call two different unpackings of the same memory the
    // same texture.
    struct key {
        uint32_t base_address{0};
        uint32_t format{0};
        uint32_t width{0};
        uint32_t height{0};
        uint32_t pitch_pixels{0};
        uint32_t swizzle{0};
        uint8_t endianness{0};
        bool tiled{false};
        bool packed_mips{false};
        bool operator<(const key& other) const noexcept {
            return std::tie(base_address, format, width, height, pitch_pixels,
                            swizzle, endianness, tiled, packed_mips) <
                   std::tie(other.base_address, other.format, other.width,
                            other.height, other.pitch_pixels, other.swizzle,
                            other.endianness, other.tiled, other.packed_mips);
        }
    };
    struct entry {
        host_texture texture;
        // The guest bytes these pixels were decoded from, so a later frame can
        // establish that they still are what they were.
        std::vector<uint8_t> source;
        uint64_t last_used_frame{0};
    };
    static key key_of(const texture_fetch_constant& fetch) noexcept;
    void trim();

    std::map<key, entry> m_entries;
    // Where results go when the cache is off. A deque so that adding one never
    // moves the ones already handed out, and cleared at each frame so it cannot
    // grow without bound.
    std::deque<host_texture> m_scratch;
    uint64_t m_frame{0};
    uint64_t m_bytes{0};
    uint64_t m_budget{kDefaultBudgetBytes};
    uint64_t m_hits{0};
    uint64_t m_misses{0};
    uint64_t m_decoded_texels{0};
    bool m_enabled{true};
};

} // namespace whitty_xenon::gpu
