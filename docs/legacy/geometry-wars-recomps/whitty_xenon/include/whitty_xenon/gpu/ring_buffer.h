// gpu/ring_buffer.h - consuming the title's PM4 command ring.
//
// This is the piece that makes the GPU actually run. The title allocates a
// ring in physical memory, hands it over with VdInitializeRingBuffer, writes
// PM4 packets into it, and advances CP_RB_WPTR to say how far it has written.
// It then SPINS - a `db16cyc` delay loop - comparing its write pointer against
// the read pointer the hardware writes back, waiting for room. Nothing else in
// the title happens until that read pointer moves.
//
// So a runtime that records the write pointer but never consumes the ring does
// not look like a missing feature; it looks like a hang, with the title
// burning a core in a wait loop. Consuming the ring and reporting progress is
// what lets it carry on to the next frame.
//
// Semantics follow Xenia's CommandProcessor:
//   - the ring's byte size is `1 << (size_log2 + 3)`, not `1 << size_log2`;
//   - read and write pointers are DWORD indices into the ring, not byte
//     offsets or addresses;
//   - both the ring and the write-back address are PHYSICAL addresses (the
//     title passes what MmGetPhysicalAddress gave it).
#pragma once

#include "whitty_xenon/gpu/command_processor.h"
#include "whitty_xenon/memory.h"

#include <cstdint>
#include <string>

namespace whitty_xenon::gpu {

class ring_buffer_consumer {
public:
    ring_buffer_consumer(guest_memory& memory,
                         command_processor& processor) noexcept
        : m_memory(&memory), m_processor(&processor) {}

    // VdInitializeRingBuffer: where the ring is (physical) and how big.
    void configure(uint32_t physical_address, uint32_t size_log2) noexcept;
    // VdEnableRingBufferRPtrWriteBack: where to report progress (physical).
    void set_read_pointer_writeback(uint32_t physical_address) noexcept;
    // A scratch region big enough to hold the whole ring, used only when a
    // span wraps past the end - the packets either side of the wrap have to be
    // made contiguous before they can be walked, and a packet is free to
    // straddle the join. Without one, a wrapped span is consumed as two pieces
    // and a straddling packet is reported rather than silently mis-parsed.
    void set_scratch(uint32_t address, uint32_t size) noexcept;

    bool configured() const noexcept { return m_size_bytes != 0; }
    uint32_t size_bytes() const noexcept { return m_size_bytes; }
    // In DWORDs, matching the register the title reads and writes.
    uint32_t read_pointer() const noexcept { return m_read_pointer; }
    uint64_t dwords_consumed() const noexcept { return m_dwords_consumed; }
    uint64_t submissions() const noexcept { return m_submissions; }
    // Submissions that ended part-way through a packet and were held for the
    // next one. Expected in small numbers on a live ring and worth watching:
    // a title that keeps deferring is a title whose packets are being read as
    // longer than they are.
    uint64_t deferred_packets() const noexcept { return m_deferred_packets; }
    // Whether the read pointer is currently held short of the write pointer,
    // waiting for the rest of a packet.
    bool deferring() const noexcept { return m_deferred; }

    // Runs everything between the read pointer and `write_pointer`, then
    // reports the new read pointer back to the title.
    //
    // A span that ends part-way through a packet is normal: the title advances
    // its write pointer as it writes, so the last packet of a span may not all
    // be there yet. The whole packets are run and the read pointer is left
    // short of the remainder, which is walked again - whole - next time. Should
    // the same write pointer be offered again with the packet still short, it
    // is taken as malformed rather than unfinished and skipped, because a read
    // pointer parked forever tells the title the ring never drains.
    //
    // Returns false and sets `error` if the command stream could not be walked.
    // The read pointer still advances in that case, for the same reason.
    bool consume(uint32_t write_pointer, std::string& error);

    // Where the ring lives in the guest's ordinary address space.
    uint32_t virtual_address() const noexcept;

private:
    // Physical addresses are the physical-alias region's offsets, so the
    // inverse of MmGetPhysicalAddress is a single add.
    static uint32_t to_virtual(uint32_t physical) noexcept {
        return kPhysicalBase + physical;
    }

    void write_back_read_pointer();

    guest_memory* m_memory;
    command_processor* m_processor;
    uint32_t m_physical_address{0};
    uint32_t m_size_bytes{0};
    uint32_t m_writeback_physical{0};
    uint32_t m_scratch_address{0};
    uint32_t m_scratch_size{0};
    uint32_t m_read_pointer{0};
    uint64_t m_dwords_consumed{0};
    uint64_t m_submissions{0};
    // The write pointer a partial packet was last held back at, so that being
    // offered the same one again can be told from the title making progress.
    bool m_deferred{false};
    uint32_t m_deferred_write_pointer{0};
    uint64_t m_deferred_packets{0};
};

} // namespace whitty_xenon::gpu
