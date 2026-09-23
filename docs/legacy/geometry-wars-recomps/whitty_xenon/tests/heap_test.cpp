// Unit tests for the guest heap.
//
// Allocator bugs are quiet: a missing coalesce only shows up as an allocation
// failing much later under fragmentation, and a bad alignment only shows up
// when a title happens to need an aligned buffer. Both are checked directly
// here rather than left to be discovered during bring-up.
#include "whitty_xenon/heap.h"
#include "whitty_xenon/memory.h"

#include <cassert>
#include <cstdio>
#include <string>
#include <vector>

using namespace whitty_xenon;

namespace {

constexpr uint32_t kHeapBase = kTitleHeapBase; // 0x40000000
constexpr uint32_t kHeapSize = 0x00100000;     // 1 MiB

struct fixture {
    guest_memory memory;
    guest_heap heap;
    std::string error;

    fixture() {
        assert(memory.initialize(error));
        assert(heap.initialize(memory, kHeapBase, kHeapSize, error));
    }
};

void test_initialize() {
    fixture f;
    assert(f.heap.initialized());
    assert(f.heap.base() == kHeapBase);
    assert(f.heap.size() == kHeapSize);
    assert(f.heap.free_bytes() == kHeapSize);
    assert(f.heap.allocated_bytes() == 0);
    assert(f.heap.live_allocations() == 0);
    assert(f.heap.free_ranges() == 1);

    // A heap at address zero would make a null guest pointer a valid
    // allocation, so it is refused.
    guest_memory memory;
    std::string error;
    assert(memory.initialize(error));
    guest_heap heap;
    assert(!heap.initialize(memory, 0, kHeapSize, error));
    assert(!error.empty());
    // As is a zero-sized heap, or one that runs off the address space.
    error.clear();
    assert(!heap.initialize(memory, kHeapBase, 0, error));
    assert(!error.empty());
    error.clear();
    assert(!heap.initialize(memory, 0xFFFF0000u, 0x20000, error));
    assert(!error.empty());
}

void test_allocation_returns_usable_guest_memory() {
    fixture f;
    const uint32_t address = f.heap.allocate(256);
    assert(address != 0);
    assert(address >= kHeapBase && address < kHeapBase + kHeapSize);
    assert(f.heap.size_of(address) == 256);
    assert(f.heap.allocated_bytes() == 256);
    assert(f.heap.live_allocations() == 1);

    // The returned memory must actually be committed and writable, otherwise
    // the first store from a title faults.
    assert(f.memory.committed(address, 256));
    f.memory.write_u32(address, 0xDEADBEEFu);
    assert(f.memory.read_u32(address) == 0xDEADBEEFu);
}

void test_allocations_do_not_overlap() {
    fixture f;
    std::vector<uint32_t> addresses;
    for (int index = 0; index < 16; ++index) {
        const uint32_t address = f.heap.allocate(1024);
        assert(address != 0);
        addresses.push_back(address);
    }
    // Write a distinct value into each and read them all back: any overlap
    // would corrupt a neighbour.
    for (std::size_t index = 0; index < addresses.size(); ++index)
        f.memory.write_u32(addresses[index], static_cast<uint32_t>(index + 1));
    for (std::size_t index = 0; index < addresses.size(); ++index)
        assert(f.memory.read_u32(addresses[index]) ==
               static_cast<uint32_t>(index + 1));
    assert(f.heap.allocated_bytes() == 16 * 1024);
}

void test_alignment_is_honoured() {
    fixture f;
    // Waste a few bytes so the next block is not already aligned.
    assert(f.heap.allocate(1) != 0);
    for (uint32_t alignment : {16u, 64u, 256u, 4096u, 65536u}) {
        const uint32_t address = f.heap.allocate(64, alignment);
        assert(address != 0);
        assert(address % alignment == 0);
    }
    // Everything is at least minimally aligned even when not asked for.
    const uint32_t address = f.heap.allocate(3, 1);
    assert(address != 0);
    assert(address % kDefaultHeapAlignment == 0);
    // A non-power-of-two alignment is a caller error.
    assert(f.heap.allocate(64, 24) == 0);
}

void test_free_returns_space_and_coalesces() {
    fixture f;
    const uint32_t a = f.heap.allocate(1024);
    const uint32_t b = f.heap.allocate(1024);
    const uint32_t c = f.heap.allocate(1024);
    assert(a && b && c);
    assert(f.heap.allocated_bytes() == 3072);

    assert(f.heap.free(b));
    assert(f.heap.allocated_bytes() == 2048);
    assert(f.heap.size_of(b) == 0);
    // A double free is reported rather than corrupting the free list.
    assert(!f.heap.free(b));
    // So is an address the heap never handed out.
    assert(!f.heap.free(a + 4));
    assert(!f.heap.free(0));

    // Freeing the neighbours must merge the three holes back into one, or the
    // heap slowly fragments into slivers.
    assert(f.heap.free(a));
    assert(f.heap.free(c));
    assert(f.heap.allocated_bytes() == 0);
    assert(f.heap.free_bytes() == kHeapSize);
    assert(f.heap.free_ranges() == 1);
}

void test_repeated_alloc_free_does_not_fragment() {
    // The failure this guards against is a heap that works fine for a while and
    // then cannot satisfy a large request despite being mostly empty.
    fixture f;
    for (int round = 0; round < 500; ++round) {
        const uint32_t a = f.heap.allocate(4096);
        const uint32_t b = f.heap.allocate(8192);
        assert(a && b);
        assert(f.heap.free(a));
        assert(f.heap.free(b));
    }
    assert(f.heap.free_ranges() == 1);
    assert(f.heap.free_bytes() == kHeapSize);
    // The whole heap is available again as one block.
    const uint32_t whole = f.heap.allocate(kHeapSize);
    assert(whole == kHeapBase);
}

void test_exhaustion_is_reported() {
    fixture f;
    // Larger than the heap.
    assert(f.heap.allocate(kHeapSize + 1) == 0);
    // Exactly the heap is fine.
    const uint32_t whole = f.heap.allocate(kHeapSize);
    assert(whole != 0);
    // And now nothing more fits.
    assert(f.heap.allocate(1) == 0);
    assert(f.heap.free_bytes() == 0);
    assert(f.heap.free(whole));
    assert(f.heap.allocate(1) != 0);
}

void test_zero_size_and_uninitialized() {
    fixture f;
    // A zero-byte allocation has no sensible address to return.
    assert(f.heap.allocate(0) == 0);

    guest_heap heap;
    assert(!heap.initialized());
    assert(heap.allocate(16) == 0);
    assert(!heap.free(kHeapBase));
    assert(heap.size_of(kHeapBase) == 0);
}

void test_reuses_freed_space() {
    fixture f;
    const uint32_t first = f.heap.allocate(4096);
    assert(f.heap.free(first));
    // First fit should hand the same block back rather than growing into fresh
    // space, otherwise the heap only ever moves forwards.
    const uint32_t second = f.heap.allocate(4096);
    assert(second == first);
}

} // namespace

int main() {
    test_initialize();
    test_allocation_returns_usable_guest_memory();
    test_allocations_do_not_overlap();
    test_alignment_is_honoured();
    test_free_returns_space_and_coalesces();
    test_repeated_alloc_free_does_not_fragment();
    test_exhaustion_is_reported();
    test_zero_size_and_uninitialized();
    test_reuses_freed_space();
    std::printf("heap_test: all checks passed\n");
    return 0;
}
