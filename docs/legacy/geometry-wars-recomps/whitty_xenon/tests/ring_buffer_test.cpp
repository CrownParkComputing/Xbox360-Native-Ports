// Unit tests for the PM4 ring-buffer consumer.
//
// The details worth pinning here are the ones the title can tell apart from
// the outside: the ring's byte size (a quadword count, so eight times the
// log2), pointers measured in DWORDs rather than bytes, and above all the read
// pointer being written back - the title spins on that word, so a consumer
// that runs the commands but never reports progress is indistinguishable from
// one that does nothing at all.
#include "whitty_xenon/gpu/command_processor.h"
#include "whitty_xenon/gpu/pm4.h"
#include "whitty_xenon/gpu/ring_buffer.h"
#include "whitty_xenon/memory.h"

#include <cassert>
#include <cstdint>
#include <cstdio>
#include <string>
#include <vector>

using namespace whitty_xenon;
using namespace whitty_xenon::gpu;

namespace {

// The ring lives in the physical-alias region, and the title hands over the
// physical address - the offset from that region's base.
constexpr uint32_t kRingPhysical = 0x00100000;
constexpr uint32_t kRingVirtual = kPhysicalBase + kRingPhysical;
constexpr uint32_t kWritebackPhysical = 0x00200000;
constexpr uint32_t kWritebackVirtual = kPhysicalBase + kWritebackPhysical;
constexpr uint32_t kScratchPhysical = 0x00300000;
constexpr uint32_t kScratchVirtual = kPhysicalBase + kScratchPhysical;
// log2 6 -> 1 << (6 + 3) = 512 bytes = 128 DWORDs.
constexpr uint32_t kSizeLog2 = 6;
constexpr uint32_t kRingBytes = 1u << (kSizeLog2 + 3);
constexpr uint32_t kRingDwords = kRingBytes / 4;

struct fixture {
    guest_memory memory;
    command_processor processor;
    ring_buffer_consumer ring;

    fixture() : processor(memory), ring(memory, processor) {
        std::string error;
        assert(memory.initialize(error));
        assert(memory.commit(kRingVirtual, 0x10000, error));
        assert(memory.commit(kWritebackVirtual, 0x1000, error));
        assert(memory.commit(kScratchVirtual, 0x10000, error));
        ring.configure(kRingPhysical, kSizeLog2);
        ring.set_read_pointer_writeback(kWritebackPhysical);
    }

    // Writes a type-3 packet at a DWORD index and returns the index past it.
    uint32_t put_nop(uint32_t index, uint32_t payload_dwords) {
        const uint32_t header = (3u << 30) | ((payload_dwords - 1) << 16) |
                                (pm4_op::nop << 8);
        memory.write_u32(kRingVirtual + index * 4, header);
        for (uint32_t i = 1; i <= payload_dwords; ++i)
            memory.write_u32(kRingVirtual + ((index + i) % kRingDwords) * 4, 0);
        return (index + 1 + payload_dwords) % kRingDwords;
    }

    uint32_t reported_read_pointer() {
        return memory.read_u32(kWritebackVirtual);
    }
};

void test_size_is_a_quadword_count() {
    fixture fx;
    // The console's size field counts quadwords: 1 << (log2 + 3) bytes, not
    // 1 << log2. Getting this wrong wraps the read pointer early and the
    // title's free-space arithmetic goes negative.
    assert(fx.ring.size_bytes() == kRingBytes);
    assert(fx.ring.size_bytes() == 512);
    assert(fx.ring.configured());
}

void test_read_pointer_is_reported_immediately() {
    fixture fx;
    // The title may already be spinning on this word before a single packet
    // is submitted, so enabling write-back has to publish a value at once
    // rather than waiting for the first submission.
    assert(fx.reported_read_pointer() == 0);
}

void test_consume_advances_and_reports() {
    fixture fx;
    std::string error;
    const uint32_t next = fx.put_nop(0, 3); // 4 DWORDs

    assert(fx.ring.consume(next, error));
    assert(fx.ring.read_pointer() == next);
    assert(fx.ring.dwords_consumed() == 4);
    assert(fx.ring.submissions() == 1);
    // The value the title spins on must equal where the hardware has got to.
    assert(fx.reported_read_pointer() == next);

    // Submitting nothing new is not a submission and changes nothing.
    assert(fx.ring.consume(next, error));
    assert(fx.ring.submissions() == 1);
    assert(fx.ring.read_pointer() == next);
}

void test_consume_handles_a_wrapped_span() {
    fixture fx;
    std::string error;
    fx.ring.set_scratch(kScratchVirtual, kRingBytes);

    // Park the read pointer near the end, then submit a run that wraps past
    // it - with a packet straddling the join, which is exactly what the
    // scratch region exists for.
    const uint32_t start = kRingDwords - 2;
    fx.ring.consume(start, error);
    const uint32_t consumed_before = static_cast<uint32_t>(fx.ring.dwords_consumed());

    fx.put_nop(start, 3); // header at kRingDwords-2, payload wraps to 0,1,2
    const uint32_t next = (start + 4) % kRingDwords;
    assert(next < start); // really wrapped

    assert(fx.ring.consume(next, error));
    assert(fx.ring.read_pointer() == next);
    assert(fx.ring.dwords_consumed() == consumed_before + 4);
    assert(fx.reported_read_pointer() == next);
}

// The contract that matters on a live ring. The title advances its write
// pointer as it writes, so a submission routinely ends part-way through a
// packet. The whole packets in front of it must run, and the read pointer must
// stop at the partial one - not skip it, which loses the packet, and not
// re-run what has already been done when the rest of it turns up.
void test_submission_ending_mid_packet_leaves_the_remainder() {
    fixture fx;
    std::string error;

    // Two whole 2-dword NOPs, then the header of a third whose payload has not
    // been written yet.
    fx.put_nop(0, 1);
    fx.put_nop(2, 1);
    const uint32_t partial_header =
        (3u << 30) | ((3u - 1) << 16) | (pm4_op::nop << 8); // needs 4 dwords
    fx.memory.write_u32(kRingVirtual + 4 * 4, partial_header);
    fx.memory.write_u32(kRingVirtual + 5 * 4, 0); // one of its three payloads

    // The title says it has written six dwords: four whole packets' worth plus
    // two of the four the third needs.
    assert(fx.ring.consume(6, error));
    assert(fx.ring.dwords_consumed() == 4);   // only the two whole packets
    assert(fx.ring.read_pointer() == 4);      // parked on the partial header
    assert(fx.reported_read_pointer() == 4);  // and the title is told so
    assert(fx.ring.deferring());
    assert(fx.ring.deferred_packets() == 1);

    // The rest of it arrives. Now the packet is whole and is consumed once.
    fx.memory.write_u32(kRingVirtual + 6 * 4, 0);
    fx.memory.write_u32(kRingVirtual + 7 * 4, 0);
    assert(fx.ring.consume(8, error));
    assert(fx.ring.dwords_consumed() == 8);
    assert(fx.ring.read_pointer() == 8);
    assert(fx.reported_read_pointer() == 8);
    assert(!fx.ring.deferring());
}

// Deferring cannot become a way to wedge the ring. A packet re-offered with
// nothing added is not late, it is wrong, and the ring has to move past it.
void test_a_packet_the_title_never_finishes_is_skipped() {
    fixture fx;
    std::string error;
    const uint32_t partial_header =
        (3u << 30) | ((3u - 1) << 16) | (pm4_op::nop << 8); // needs 4 dwords
    fx.memory.write_u32(kRingVirtual + 0, partial_header);
    fx.memory.write_u32(kRingVirtual + 4, 0);

    // First offer: held back, waiting for the rest.
    assert(fx.ring.consume(2, error));
    assert(fx.ring.read_pointer() == 0);
    assert(fx.ring.deferring());

    // The same write pointer again, so the title has added nothing.
    assert(!fx.ring.consume(2, error));
    assert(!error.empty());
    assert(fx.ring.read_pointer() == 2);
    assert(fx.reported_read_pointer() == 2);
    assert(!fx.ring.deferring());
}

// A packet claiming more than the ring can hold could never be completed, so it
// is a bad header and is reported at once rather than waited on.
void test_a_packet_larger_than_the_ring_is_not_waited_for() {
    fixture fx;
    std::string error;
    // A type-3 claiming 0x4000 payload dwords - far more than 128.
    fx.memory.write_u32(kRingVirtual + 0,
                        (3u << 30) | ((0x4000u - 1) << 16) | (pm4_op::nop << 8));
    assert(!fx.ring.consume(4, error));
    assert(!error.empty());
    assert(fx.ring.read_pointer() == 4); // moved on, first time
    assert(!fx.ring.deferring());
    assert(fx.ring.deferred_packets() == 0);
}

void test_read_pointer_advances_even_when_a_packet_is_bad() {
    fixture fx;
    std::string error;
    // A packet the walker cannot make sense of must not stall the ring:
    // leaving the read pointer behind tells the title the hardware has
    // wedged, and it spins forever on a ring that never drains. Reporting the
    // failure and moving on is the lesser evil.
    fx.memory.write_u32(kRingVirtual + 0, (3u << 30) | (0xFFFFu << 16) | 0xFF00);
    const bool ok = fx.ring.consume(4, error);
    (void)ok; // may or may not parse; what matters is what happens next
    assert(fx.ring.read_pointer() == 4);
    assert(fx.reported_read_pointer() == 4);
}

void test_bad_configuration_is_refused() {
    guest_memory memory;
    std::string error;
    assert(memory.initialize(error));
    command_processor processor(memory);
    ring_buffer_consumer ring(memory, processor);

    // Consuming before VdInitializeRingBuffer has said where the ring is.
    assert(!ring.configured());
    assert(!ring.consume(4, error));
    assert(!error.empty());

    // A write pointer past the end of the ring is the title's bug, not
    // something to read arbitrary memory over.
    ring.configure(kRingPhysical, kSizeLog2);
    assert(!ring.consume(kRingDwords, error));
    assert(!ring.consume(0xFFFFFFFF, error));
}

} // namespace

int main() {
    test_size_is_a_quadword_count();
    test_read_pointer_is_reported_immediately();
    test_consume_advances_and_reports();
    test_consume_handles_a_wrapped_span();
    test_submission_ending_mid_packet_leaves_the_remainder();
    test_a_packet_the_title_never_finishes_is_skipped();
    test_a_packet_larger_than_the_ring_is_not_waited_for();
    test_read_pointer_advances_even_when_a_packet_is_bad();
    test_bad_configuration_is_refused();
    std::printf("ring_buffer_test: all tests passed\n");
    return 0;
}
