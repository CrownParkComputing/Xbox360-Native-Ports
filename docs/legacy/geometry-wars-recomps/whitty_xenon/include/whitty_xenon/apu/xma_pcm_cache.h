// apu/xma_pcm_cache.h - a content-addressed cache of already-decoded XMA
// audio, so a title's own sounds ship as data instead of being decoded live.
//
// WHY THIS EXISTS: xma_decoder.cpp wraps FFmpeg to decode the console's
// compressed audio on every playback. That is correct but has two costs -
// FFmpeg (LGPL) has to be linked into the shipped binary, and the decode runs
// every single time a sound plays, on every platform, forever. Neither cost
// is necessary: XMA2 decode is deterministic, so the same compressed bytes
// always produce the same PCM. Decode each distinct sound ONCE, offline, on a
// machine that has FFmpeg, and ship the PCM instead - the same idea already
// proven for GW1/GW2's BAF music banks on Android, generalised and wired into
// the pipeline instead of being a hand-run, per-title, Android-only step.
//
// SCOPE, STATED PLAINLY: XMA2 is a stateful stream codec - a frame can span a
// packet boundary, so the decoder's output for packet N can depend on what
// came before it in THIS stream. Caching isolated packets out of that context
// would not be safe in general. What IS safe: the very FIRST input buffer of
// a freshly (re)opened decode session has no prior state to diverge from, so
// decoding it alone - which is exactly what happens once, here, to build the
// cache - reproduces bit-for-bit what the live decoder would have produced in
// place. That is the only case this cache participates in; kernel_handlers.cpp
// only calls it when `!stream.session_started`. A voice whose sound spans more
// than one input buffer (long streamed music, not one-shot SFX) falls through
// to the live decoder for its second buffer onward, same as it does today
// without this cache at all. For Geometry Wars' short one-shot effects and
// any music whose loop restarts on a fresh context, this covers everything.
#pragma once

#include <cstdint>
#include <cstddef>
#include <string>
#include <unordered_map>
#include <vector>

namespace whitty_xenon::apu {

// FNV-1a 64-bit over the whole compressed buffer, mixed with the sample rate
// and channel count so the same bytes decoded under a different format never
// collide with each other. Not cryptographic - collision risk over a title's
// whole sound corpus (at most a few thousand distinct buffers) is negligible,
// and a wrong hit would still be caught by ordinary playtesting (a wrong or
// missing sound is obvious; this is not security-sensitive data).
uint64_t xma_pcm_hash(const uint8_t* data, std::size_t size,
                      uint32_t sample_rate, uint32_t channels) noexcept;

// Read-only side: loaded once from a directory baked by xma_pcm_bake_writer
// (or by tools/xma_pcm_bake, the standalone offline tool). Cheap to hold in
// memory - a title's whole sound corpus is at most a few MB of PCM.
class xma_pcm_cache {
public:
    // Loads `<dir>/manifest.tsv` + `<dir>/pcm.blob`. Returns false (and the
    // cache stays empty, `lookup` always misses) if the directory does not
    // exist or holds no cache - that is a normal, silent state, not an error:
    // a title with no cache yet just falls back to the live decoder.
    bool load(const std::string& dir, std::string& error);

    // `data`/`size` is the WHOLE compressed input buffer as the guest laid it
    // out (all of its packets, contiguous) - not one packet. On a hit,
    // appends interleaved 16-bit PCM to `out` and returns true.
    bool lookup(const uint8_t* data, std::size_t size, uint32_t sample_rate,
               uint32_t channels, std::vector<int16_t>& out) const;

    std::size_t entry_count() const noexcept { return m_entries.size(); }

private:
    struct entry {
        std::size_t offset;
        std::size_t sample_count; // interleaved int16 count, all channels
    };
    std::unordered_map<uint64_t, entry> m_entries;
    std::vector<int16_t> m_blob;
};

// Write side: used both by the runtime itself (RETRO_XMA_BAKE_DIR, growing
// the cache the first time each sound is heard during ordinary play) and by
// the standalone offline tool. Appends are additive and idempotent - baking
// twice over the same sounds does not duplicate blob data.
class xma_pcm_bake_writer {
public:
    // Opens (creating if needed) `dir`, reading any existing manifest so
    // repeat runs do not re-store what is already cached.
    bool open(const std::string& dir, std::string& error);

    // No-op (returns false) if this exact buffer+format is already cached.
    // `pcm` is the decode of the WHOLE buffer, in order, from a freshly
    // opened decoder - see the scope note at the top of this file for why
    // that precondition matters.
    bool store(const uint8_t* data, std::size_t size, uint32_t sample_rate,
              uint32_t channels, const std::vector<int16_t>& pcm);

    std::size_t entry_count() const noexcept { return m_known.size(); }

private:
    std::string m_dir;
    std::string m_manifest_path;
    std::string m_blob_path;
    std::size_t m_blob_bytes{0};
    std::unordered_map<uint64_t, bool> m_known; // hash -> already on disk
};

// Process-wide instances, installed once by the harness (tools/run_title.cpp)
// from RETRO_XMA_CACHE_DIR / RETRO_XMA_BAKE_DIR, read by kernel_handlers.cpp.
// Null when the corresponding env var is unset - both are optional and
// independent (a build can read a shipped cache, grow one, both, or neither).
void install_xma_pcm_cache(xma_pcm_cache* cache) noexcept;
xma_pcm_cache* active_xma_pcm_cache() noexcept;
void install_xma_pcm_bake_writer(xma_pcm_bake_writer* writer) noexcept;
xma_pcm_bake_writer* active_xma_pcm_bake_writer() noexcept;

} // namespace whitty_xenon::apu
