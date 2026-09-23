// Unit tests for the guest address space.
//
// The byte-order tests are the important ones: every recompiled instruction and
// every kernel stub depends on this layer presenting big-endian guest memory as
// host-endian values, and a swap bug here would look like corrupt game data
// somewhere far away.
#include "whitty_xenon/memory.h"

#include <cassert>
#include <cstdio>
#include <cstring>
#include <string>

using namespace whitty_xenon;

namespace {

constexpr uint32_t kTestAddress = 0x82000000u; // inside the image region

void test_initialize_and_shutdown() {
    guest_memory memory;
    assert(!memory.initialized());
    std::string error;
    assert(memory.initialize(error));
    assert(error.empty());
    assert(memory.initialized());
    // Reserving must not commit anything.
    assert(memory.committed_bytes() == 0);
    // initialize() is idempotent.
    assert(memory.initialize(error));
    memory.shutdown();
    assert(!memory.initialized());
}

void test_commit_marks_pages_and_rounds_out() {
    guest_memory memory;
    std::string error;
    assert(memory.initialize(error));

    assert(!memory.committed(kTestAddress, 1));
    // A one-byte commit still commits the whole containing page.
    assert(memory.commit(kTestAddress, 1, error));
    assert(memory.committed(kTestAddress, 1));
    assert(memory.committed(kTestAddress, kPageSize));
    assert(memory.committed_bytes() == kPageSize);
    // The next page is untouched.
    assert(!memory.committed(kTestAddress + kPageSize, 1));

    // A range spanning a page boundary commits both pages.
    assert(memory.commit(kTestAddress + kPageSize - 2, 4, error));
    assert(memory.committed(kTestAddress + kPageSize, 1));
    assert(memory.committed_bytes() == kPageSize * 2);

    // Committing twice is allowed and does not double-count.
    assert(memory.commit(kTestAddress, kPageSize, error));
    assert(memory.committed_bytes() == kPageSize * 2);
}

void test_commit_rejects_bad_ranges() {
    guest_memory memory;
    std::string error;
    assert(memory.initialize(error));
    // Empty range.
    assert(!memory.commit(kTestAddress, 0, error));
    assert(!error.empty());
    // Runs past the end of the 32-bit address space.
    error.clear();
    assert(!memory.commit(0xFFFFFF00u, 0x200, error));
    assert(!error.empty());
    // The 4 KiB window starts 0x1000 into physical memory, so it runs out of
    // physical memory 0x1000 before it runs out of address space: 0xFFFFF000 is
    // physical 0x20000000, one page past the end of the 512 MiB region.
    error.clear();
    assert(!memory.commit(0xFFFFF000u, kPageSize, error));
    assert(!error.empty());
    // The last page that does have physical memory behind it.
    assert(memory.commit(0xFFFFE000u, kPageSize, error));
}

void test_host_translation_is_checked() {
    guest_memory memory;
    std::string error;
    assert(memory.initialize(error));
    // Uncommitted memory has no host pointer, so a stray guest pointer is
    // reported rather than faulting inside recompiled code.
    assert(memory.host(kTestAddress) == nullptr);
    assert(memory.commit(kTestAddress, kPageSize, error));
    assert(memory.host(kTestAddress) != nullptr);
    // A range that starts committed but runs into uncommitted memory fails.
    assert(memory.host(kTestAddress + kPageSize - 2, 4) == nullptr);
}

void test_big_endian_byte_order() {
    guest_memory memory;
    std::string error;
    assert(memory.initialize(error));
    assert(memory.commit(kTestAddress, kPageSize, error));

    // A 32-bit store must land most-significant byte first: this is the whole
    // contract between the guest and the host.
    memory.write_u32(kTestAddress, 0x12345678u);
    const uint8_t* raw = static_cast<const uint8_t*>(memory.host(kTestAddress, 4));
    assert(raw[0] == 0x12);
    assert(raw[1] == 0x34);
    assert(raw[2] == 0x56);
    assert(raw[3] == 0x78);

    memory.write_u16(kTestAddress + 8, 0xABCDu);
    raw = static_cast<const uint8_t*>(memory.host(kTestAddress + 8, 2));
    assert(raw[0] == 0xAB);
    assert(raw[1] == 0xCD);

    memory.write_u64(kTestAddress + 16, 0x0123456789ABCDEFull);
    raw = static_cast<const uint8_t*>(memory.host(kTestAddress + 16, 8));
    assert(raw[0] == 0x01);
    assert(raw[7] == 0xEF);

    // Bytes have no order to get wrong, but check the trivial case anyway.
    memory.write_u8(kTestAddress + 32, 0x5A);
    assert(memory.read_u8(kTestAddress + 32) == 0x5A);
}

void test_read_write_roundtrip() {
    guest_memory memory;
    std::string error;
    assert(memory.initialize(error));
    assert(memory.commit(kTestAddress, kPageSize, error));

    memory.write_u8(kTestAddress + 0, 0xFF);
    memory.write_u16(kTestAddress + 2, 0xFFFEu);
    memory.write_u32(kTestAddress + 4, 0xDEADBEEFu);
    memory.write_u64(kTestAddress + 8, 0xFEEDFACECAFEBEEFull);
    assert(memory.read_u8(kTestAddress + 0) == 0xFF);
    assert(memory.read_u16(kTestAddress + 2) == 0xFFFEu);
    assert(memory.read_u32(kTestAddress + 4) == 0xDEADBEEFu);
    assert(memory.read_u64(kTestAddress + 8) == 0xFEEDFACECAFEBEEFull);

    // Floating point travels as its bit pattern; check an exact binary value.
    memory.write_f32(kTestAddress + 16, 1.5f);
    assert(memory.read_f32(kTestAddress + 16) == 1.5f);
    assert(memory.read_u32(kTestAddress + 16) == 0x3FC00000u);
    memory.write_f64(kTestAddress + 24, -2.25);
    assert(memory.read_f64(kTestAddress + 24) == -2.25);
    assert(memory.read_u64(kTestAddress + 24) == 0xC002000000000000ull);
}

void test_unaligned_access() {
    guest_memory memory;
    std::string error;
    assert(memory.initialize(error));
    assert(memory.commit(kTestAddress, kPageSize, error));
    // PowerPC permits unaligned loads and stores and titles do use them, so
    // these must be well defined rather than UB.
    memory.write_u32(kTestAddress + 1, 0x11223344u);
    assert(memory.read_u32(kTestAddress + 1) == 0x11223344u);
    memory.write_u64(kTestAddress + 3, 0x0102030405060708ull);
    assert(memory.read_u64(kTestAddress + 3) == 0x0102030405060708ull);
}

void test_access_across_a_page_boundary() {
    guest_memory memory;
    std::string error;
    assert(memory.initialize(error));
    // Two adjacent committed pages behave as one flat range.
    assert(memory.commit(kTestAddress, kPageSize * 2, error));
    const uint32_t straddle = kTestAddress + kPageSize - 2;
    memory.write_u32(straddle, 0xA1B2C3D4u);
    assert(memory.read_u32(straddle) == 0xA1B2C3D4u);
}

void test_block_operations() {
    guest_memory memory;
    std::string error;
    assert(memory.initialize(error));
    assert(memory.commit(kTestAddress, kPageSize, error));

    const char payload[] = "XEX2";
    assert(memory.write_block(kTestAddress, payload, 4));
    char read_back[5]{};
    assert(memory.read_block(kTestAddress, read_back, 4));
    assert(std::memcmp(read_back, payload, 4) == 0);

    assert(memory.zero_block(kTestAddress, 4));
    assert(memory.read_u32(kTestAddress) == 0);

    // Block operations refuse uncommitted memory instead of faulting.
    assert(!memory.write_block(kTestAddress + kPageSize, payload, 4));
    assert(!memory.read_block(kTestAddress + kPageSize, read_back, 4));
    assert(!memory.zero_block(kTestAddress + kPageSize, 4));
    assert(!memory.write_block(kTestAddress, nullptr, 4));
}

void test_regions_are_independent() {
    guest_memory memory;
    std::string error;
    assert(memory.initialize(error));
    // The layout constants must address distinct places; committing the title
    // heap must not make the image region readable.
    assert(memory.commit(kTitleHeapBase, kPageSize, error));
    assert(memory.committed(kTitleHeapBase, 1));
    assert(!memory.committed(kImageBase, 1));
    memory.write_u32(kTitleHeapBase, 0x40000000u);
    assert(memory.read_u32(kTitleHeapBase) == 0x40000000u);
}

// The console maps physical memory three times over, at 0xA0000000 (64 KiB
// pages), 0xC0000000 (16 MiB) and 0xE0000000 (4 KiB). A title allocates through
// whichever window suits the page size it wants and then hands the address to
// something that adds a different base - Geometry Wars allocates at 0xA0000000
// and reads the same buffer back at 0xC0000000. If the windows are separate
// memory, that read returns garbage or faults on a buffer that is perfectly
// valid, and the fault lands nowhere near the code that caused it.
void test_physical_aliases_are_the_same_memory() {
    guest_memory memory;
    std::string error;
    assert(memory.initialize(error));

    const uint32_t physical = 0x00120000;
    assert(memory.commit(kPhysicalBase + physical, kPageSize, error));

    // Committing through one window commits all three: they are one set of
    // pages, so there is no state in which one is readable and another is not.
    for (uint32_t alias : kPhysicalAliasBases)
        assert(memory.committed(physical_in_window(physical, alias), kPageSize));

    // A write through any window is visible through the others.
    memory.write_u32(physical_in_window(physical, 0xA0000000u), 0xFEEDFACEu);
    assert(memory.read_u32(physical_in_window(physical, 0xC0000000u)) ==
           0xFEEDFACEu);
    assert(memory.read_u32(physical_in_window(physical, 0xE0000000u)) ==
           0xFEEDFACEu);
    memory.write_u32(physical_in_window(physical, 0xC0000000u), 0x0BADC0DEu);
    assert(memory.read_u32(physical_in_window(physical, 0xA0000000u)) ==
           0x0BADC0DEu);
    assert(memory.read_u32(physical_in_window(physical, 0xE0000000u)) ==
           0x0BADC0DEu);

    // Aliasing is confined to the physical windows - virtual memory at the same
    // offset is unrelated, and must not have been dragged along.
    assert(!memory.committed(physical, kPageSize));
    assert(is_physical_alias(0xA0000000u) && is_physical_alias(0xC0000000u) &&
           is_physical_alias(0xE0000000u));
    assert(!is_physical_alias(kImageBase) && !is_physical_alias(0x40000000u));
}

// The 4 KiB window is offset by one page. The 64 KiB and 16 MiB windows start at
// physical 0, but 0xE0000000 is physical 0x1000, so the SAME OFFSET in the 4 KiB
// window is a different byte from the same offset in the other two.
//
// This is what Direct3D's ring read-pointer write-back turns on. The title is
// handed a 4 KiB-page buffer, works out its physical address itself - offset plus
// 0x1000, exactly as the console does - and asks for progress to be reported
// there. Translate that physical address back without the 0x1000 and the report
// lands one page from the only address the title is polling: every write
// succeeds, nothing is ever read, and the title waits on the GPU forever.
void test_the_small_page_window_is_offset_by_a_page() {
    guest_memory memory;
    std::string error;
    assert(memory.initialize(error));

    // The relation, both directions, for each window.
    assert(physical_address_of(0xA0015000u) == 0x15000u);
    assert(physical_address_of(0xC0015000u) == 0x15000u);
    assert(physical_address_of(0xE0015000u) == 0x16000u);
    assert(physical_in_window(0x15000u, 0xA0000000u) == 0xA0015000u);
    assert(physical_in_window(0x15000u, 0xC0000000u) == 0xC0015000u);
    assert(physical_in_window(0x15000u, 0xE0000000u) == 0xE0014000u);

    // And it is what the mapping actually does, not just what the arithmetic
    // says: a write through the 64 KiB window is visible at the 4 KiB window's
    // address for the same PHYSICAL page, and not at the same offset.
    const uint32_t physical = 0x00015000;
    assert(memory.commit(kPhysicalBase + physical, kPageSize, error));
    memory.write_u32(kPhysicalBase + physical, 0xC0FFEE00u);
    assert(memory.read_u32(0xE0014000u) == 0xC0FFEE00u);
    // The same OFFSET in the 4 KiB window is a different physical page, and
    // committing this one did not commit it - which is what makes a write-back
    // sent there invisible rather than merely wrong.
    assert(!memory.committed(0xE0015000u, sizeof(uint32_t)));

    // Physical memory's first page has no 4 KiB-window address at all, and its
    // last page has no physical memory behind it. Both are reported rather than
    // wrapping round to some other page.
    assert(!physical_has_window(0x0000u, 0xE0000000u));
    assert(physical_has_window(0x1000u, 0xE0000000u));
    assert(physical_has_window(0x0000u, 0xA0000000u));
    error.clear();
    assert(!memory.commit(0xFFFFF000u, kPageSize, error));
    assert(!error.empty());
}

} // namespace

int main() {
    test_initialize_and_shutdown();
    test_commit_marks_pages_and_rounds_out();
    test_commit_rejects_bad_ranges();
    test_host_translation_is_checked();
    test_big_endian_byte_order();
    test_read_write_roundtrip();
    test_unaligned_access();
    test_access_across_a_page_boundary();
    test_block_operations();
    test_regions_are_independent();
    test_physical_aliases_are_the_same_memory();
    test_the_small_page_window_is_offset_by_a_page();
    std::printf("memory_test: all checks passed\n");
    return 0;
}
