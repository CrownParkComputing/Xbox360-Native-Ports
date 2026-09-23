#include "whitty_xenon/gpu/texture_cache.h"

#include <cstring>

namespace whitty_xenon::gpu {

texture_cache::key texture_cache::key_of(
    const texture_fetch_constant& fetch) noexcept {
    key out;
    out.base_address = fetch.base_address;
    out.format = fetch.format;
    out.width = fetch.width;
    out.height = fetch.height;
    out.pitch_pixels = fetch.pitch_pixels;
    out.swizzle = fetch.swizzle;
    out.endianness = static_cast<uint8_t>(fetch.endianness);
    out.tiled = fetch.tiled;
    out.packed_mips = fetch.packed_mips;
    return out;
}

void texture_cache::set_enabled(bool enabled) noexcept {
    m_enabled = enabled;
    if (!enabled) clear();
}

void texture_cache::clear() noexcept {
    m_entries.clear();
    m_scratch.clear();
    m_bytes = 0;
}

void texture_cache::begin_frame() {
    ++m_frame;
    // The frame's own scratch, from a run with the cache off. Held until now
    // rather than released at the end of the frame because the draws pointed
    // into it right up to submission.
    m_scratch.clear();
    trim();
}

void texture_cache::trim() {
    if (m_bytes <= m_budget) return;
    for (auto it = m_entries.begin(); it != m_entries.end();) {
        if (it->second.last_used_frame + kGraceFrames <= m_frame) {
            m_bytes -= it->second.texture.rgba.size() + it->second.source.size();
            it = m_entries.erase(it);
        } else {
            ++it;
        }
    }
    // Still over: every entry is one a recent frame wanted, so the title's own
    // working set is larger than the budget and there is no unwanted entry to
    // drop. Starting again keeps the bound, and costs at worst what having no
    // cache at all would have cost.
    if (m_bytes > m_budget) clear();
}

const host_texture* texture_cache::decode(
    guest_memory& memory, const texture_fetch_constant& fetch) {
    if (!m_enabled) {
        m_scratch.push_back(read_texture(memory, fetch));
        if (!m_scratch.back().valid) {
            m_scratch.pop_back();
            return nullptr;
        }
        ++m_misses;
        m_decoded_texels += static_cast<uint64_t>(m_scratch.back().width) *
                            m_scratch.back().height;
        return &m_scratch.back();
    }

    const key wanted = key_of(fetch);
    const auto found = m_entries.find(wanted);
    if (found != m_entries.end()) {
        // Already served this frame. The draws of one frame are replayed
        // against one state of guest memory, so a second draw binding the same
        // texture is asking for the pixels the first one got. Re-reading guest
        // memory to confirm that would spend the whole saving on a title that
        // binds one atlas across ninety draws - and it would mean replacing the
        // entry mid-frame if the bytes differed, which would leave the earlier
        // draw pointing at freed pixels.
        if (found->second.last_used_frame == m_frame) {
            ++m_hits;
            return &found->second.texture;
        }
        // First use this frame: the guest may have written over the source
        // since, so the bytes it was decoded from have to still be there. Equal
        // bytes under an equal key is a guarantee the pixels are what unpacking
        // would produce, not an assumption that they probably are.
        const host_texture& held = found->second.texture;
        const void* host = memory.host(held.source_address, held.source_bytes);
        if (host != nullptr &&
            found->second.source.size() == held.source_bytes &&
            std::memcmp(host, found->second.source.data(),
                        found->second.source.size()) == 0) {
            found->second.last_used_frame = m_frame;
            ++m_hits;
            return &found->second.texture;
        }
        // The source changed. Nothing has been handed a pointer to this entry
        // this frame - this is its first use - so replacing it is safe.
        m_bytes -= found->second.texture.rgba.size() + found->second.source.size();
        m_entries.erase(found);
    }

    ++m_misses;
    host_texture texture = read_texture(memory, fetch);
    if (!texture.valid) return nullptr;
    m_decoded_texels +=
        static_cast<uint64_t>(texture.width) * texture.height;

    const void* host = memory.host(texture.source_address,
                                   texture.source_bytes);
    entry fresh;
    fresh.last_used_frame = m_frame;
    if (host != nullptr) {
        const auto* bytes = static_cast<const uint8_t*>(host);
        fresh.source.assign(bytes, bytes + texture.source_bytes);
    }
    // A texture whose source cannot be re-read cannot be validated later
    // either. It is still kept - so its pixels outlive this call - but with an
    // empty source, which never compares equal to the span and so is unpacked
    // again on the next frame that wants it rather than served unchecked.
    fresh.texture = std::move(texture);
    m_bytes += fresh.texture.rgba.size() + fresh.source.size();
    const auto placed = m_entries.emplace(wanted, std::move(fresh));
    return &placed.first->second.texture;
}

} // namespace whitty_xenon::gpu
