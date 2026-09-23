#include "whitty_xenon/gpu/ring_buffer.h"

#include <algorithm>
#include <vector>

namespace whitty_xenon::gpu {

void ring_buffer_consumer::configure(uint32_t physical_address,
                                     uint32_t size_log2) noexcept {
    m_physical_address = physical_address;
    // The console's size field counts quadwords, so the byte size is eight
    // times what the log2 alone would give. Getting this wrong makes the read
    // pointer wrap early and the title's free-space arithmetic go backwards.
    m_size_bytes = size_log2 < 29 ? (1u << (size_log2 + 3)) : 0u;
    m_read_pointer = 0;
}

void ring_buffer_consumer::set_read_pointer_writeback(
    uint32_t physical_address) noexcept {
    m_writeback_physical = physical_address;
    // Report the current position straight away: the title may already be
    // waiting on a value that has never been written.
    write_back_read_pointer();
}

void ring_buffer_consumer::set_scratch(uint32_t address,
                                       uint32_t size) noexcept {
    m_scratch_address = address;
    m_scratch_size = size;
}

uint32_t ring_buffer_consumer::virtual_address() const noexcept {
    return to_virtual(m_physical_address);
}

void ring_buffer_consumer::write_back_read_pointer() {
    if (m_writeback_physical == 0) return;
    m_memory->write_u32(to_virtual(m_writeback_physical), m_read_pointer);
}

bool ring_buffer_consumer::consume(uint32_t write_pointer, std::string& error) {
    if (m_size_bytes == 0) {
        error = "ring buffer not initialized";
        return false;
    }
    const uint32_t capacity_dwords = m_size_bytes / 4;
    if (write_pointer >= capacity_dwords) {
        error = "write pointer past the end of the ring";
        return false;
    }
    if (write_pointer == m_read_pointer) return true; // nothing new

    ++m_submissions;
    const uint32_t base = virtual_address();
    bool ok = true;
    // A trailing packet the title has not finished writing. It stays in the
    // ring: the read pointer is held short of it so the same packet is walked
    // again, whole, once the write pointer moves past it.
    pending_packet pending;

    if (write_pointer > m_read_pointer) {
        // The common case: one contiguous run.
        const uint32_t start = base + m_read_pointer * 4;
        const uint32_t bytes = (write_pointer - m_read_pointer) * 4;
        ok = m_processor->process(start, bytes, error, &pending);
        m_dwords_consumed += (bytes - pending.present_bytes) / 4;
    } else {
        // Wrapped: the run is the tail of the ring followed by its head. A
        // packet may straddle the join, so the two pieces have to be made
        // contiguous first.
        const uint32_t tail_dwords = capacity_dwords - m_read_pointer;
        const uint32_t total_dwords = tail_dwords + write_pointer;
        const uint32_t total_bytes = total_dwords * 4;
        if (m_scratch_address != 0 && m_scratch_size >= total_bytes) {
            std::vector<uint8_t> staging(total_bytes);
            m_memory->read_block(base + m_read_pointer * 4, staging.data(),
                                 tail_dwords * 4);
            m_memory->read_block(base, staging.data() + tail_dwords * 4,
                                 write_pointer * 4);
            m_memory->write_block(m_scratch_address, staging.data(),
                                  total_bytes);
            ok = m_processor->process(m_scratch_address, total_bytes, error,
                                     &pending);
        } else {
            // No scratch: walk the two pieces separately. A packet straddling
            // the join looks incomplete at the end of the tail and there is
            // nowhere to reassemble it, so the tail is walked strictly and the
            // straddle reported. Holding the read pointer back instead would
            // present the same span again with the same missing piece, forever.
            ok = m_processor->process(base + m_read_pointer * 4,
                                      tail_dwords * 4, error);
            std::string head_error;
            const bool head_ok = m_processor->process(
                base, write_pointer * 4, head_error, &pending);
            if (ok && !head_ok) {
                ok = false;
                error = std::move(head_error);
            }
        }
        m_dwords_consumed += (total_bytes - pending.present_bytes) / 4;
    }

    uint32_t pending_dwords = pending.present_bytes / 4;
    // Two things mark a trailing packet as never going to arrive rather than
    // merely late, and both have to be caught here, because a read pointer
    // parked forever is a ring the title watches fill up and never drain.
    //
    //   * A packet claiming more bytes than the whole ring holds. The rest of
    //     it has nowhere to be written, so the header is wrong.
    //   * The same write pointer offered twice. The title has added nothing,
    //     so it does not agree there is more of this packet to come.
    if (pending_dwords != 0 &&
        (pending.required_bytes > m_size_bytes ||
         (m_deferred && m_deferred_write_pointer == write_pointer))) {
        error = "packet runs past the end of the command buffer";
        ok = false;
        pending_dwords = 0;
    }

    // The read pointer stops short of a packet that has not all arrived, and
    // otherwise advances - even when the walk failed. Leaving it behind on a
    // packet that will never parse would tell the title the hardware has
    // stalled, and it would spin on a ring that never drains; that is a far
    // worse failure than a dropped packet.
    if (pending_dwords == 0) {
        m_read_pointer = write_pointer;
        m_deferred = false;
    } else {
        m_read_pointer =
            (write_pointer + capacity_dwords - pending_dwords) % capacity_dwords;
        m_deferred = true;
        m_deferred_write_pointer = write_pointer;
        ++m_deferred_packets;
    }
    write_back_read_pointer();
    return ok;
}

} // namespace whitty_xenon::gpu
