// Unit tests for the first batch of kernel handlers.
//
// Each handler is driven exactly as the recompiled title will drive it - args
// placed in the guest registers, the handler wrapped in host_function and
// called - and its effect is checked in real guest memory and the real heap.
// The expected behaviour is Xenia's, so these double as the specification that
// a later Xenia diff is measured against: the pool header layout, the memory
// status codes, the 50 MHz timebase, the compare-ulong byte count.
#include "whitty_xenon/host_function.h"
#include "whitty_xenon/imports.h"
#include "whitty_xenon/kernel.h"
#include "whitty_xenon/kernel_handlers.h"
#include "whitty_xenon/kernel_state.h"

#include <atomic>
#include <cassert>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <thread>
#include <chrono>
#include <string>
#include <vector>

using namespace whitty_xenon;
namespace fs = std::filesystem;

namespace {

// The same register-file stand-in the calling-convention tests use.
union reg {
    uint64_t u64;
    uint32_t u32;
    double f64;
};
struct test_ctx {
    reg r1, r3, r4, r5, r6, r7, r8, r9, r10;
    reg f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13;
};

// A guest machine wired up the way bring-up will wire it: an address space, a
// heap over part of it, and a committed scratch region for planting inputs.
struct fixture {
    guest_memory memory;
    guest_heap heap;
    guest_heap small_heap;
    guest_heap phys_heap;
    kernel_state kernel;

    static constexpr uint32_t heap_base = 0x40000000;
    static constexpr uint32_t heap_size = 0x00400000; // 4 MiB
    // The console's 4 KiB-page virtual region, below 0x40000000.
    static constexpr uint32_t small_base = 0x00010000;
    static constexpr uint32_t small_size = 0x00400000;
    // The physical-alias region. It starts above physical 0 for the same reason
    // the runtime's does: the 4 KiB window begins one page into physical memory,
    // so physical memory's own first page has no address in it and cannot be
    // handed back for a 4 KiB-page request.
    static constexpr uint32_t phys_base = 0xA0010000;
    static constexpr uint32_t phys_size = 0x00400000;
    static constexpr uint32_t scratch = 0x30000000;
    static constexpr uint32_t scratch_size = 0x10000;

    fixture() : kernel(memory, heap) {
        std::string error;
        bool ok = memory.initialize(error);
        assert(ok && "guest memory");
        ok = heap.initialize(memory, heap_base, heap_size, error);
        assert(ok && "guest heap");
        ok = small_heap.initialize(memory, small_base, small_size, error);
        assert(ok && "small-page heap");
        kernel.set_small_page_heap(&small_heap);
        ok = phys_heap.initialize(memory, phys_base, phys_size, error);
        assert(ok && "physical heap");
        kernel.set_physical_heap(&phys_heap);
        ok = memory.commit(scratch, scratch_size, error);
        assert(ok && "scratch commit");
        install_kernel(&kernel);
    }
    ~fixture() { install_kernel(nullptr); }

    bool in_heap(uint32_t address) const {
        return address >= heap_base && address < heap_base + heap_size;
    }
    // A physical allocation comes back in the alias window matching the page
    // size asked for, so what identifies one is the PHYSICAL ADDRESS it names,
    // not which of the three windows it is in. Not its offset within the window
    // either: the 4 KiB window starts 0x1000 into physical memory, so the same
    // byte sits at a lower offset there than in the other two.
    bool in_physical(uint32_t address) const {
        return is_physical_alias(address) &&
               physical_address_of(address) >= physical_address_of(phys_base) &&
               physical_address_of(address) <
                   physical_address_of(phys_base) + phys_size;
    }
};

void test_ex_allocate_pool_small_has_header() {
    fixture fx;
    test_ctx ctx{};
    ctx.r3.u32 = 0x100; // <= 0xFD8, so a header is prepended
    host_function<test_ctx, ExAllocatePool>(ctx, nullptr);
    const uint32_t address = ctx.r3.u32;
    assert(fx.in_heap(address));
    // The returned address is past an 8-byte header and is not page-aligned.
    assert((address & 0xFFF) != 0);
    // Header marker at offset 2 and the 'None' tag at offset 4, big-endian.
    assert(fx.memory.read_u8(address - 8 + 2) == 170);
    assert(fx.memory.read_u32(address - 8 + 4) == 0x656E6F4Eu);
    assert(fx.heap.live_allocations() == 1);

    ctx = test_ctx{};
    ctx.r3.u32 = address;
    host_function<test_ctx, ExFreePool>(ctx, nullptr);
    assert(fx.heap.live_allocations() == 0);
}

void test_ex_allocate_pool_large_is_page_aligned() {
    fixture fx;
    test_ctx ctx{};
    ctx.r3.u32 = 0x2000; // > 0xFD8, so page-aligned with no header
    host_function<test_ctx, ExAllocatePool>(ctx, nullptr);
    const uint32_t address = ctx.r3.u32;
    assert(fx.in_heap(address));
    assert((address & 0xFFF) == 0);
    assert(fx.heap.live_allocations() == 1);

    // A page-aligned free must locate the block without a header.
    ctx = test_ctx{};
    ctx.r3.u32 = address;
    host_function<test_ctx, ExFreePool>(ctx, nullptr);
    assert(fx.heap.live_allocations() == 0);
}

void test_ex_allocate_pool_with_tag_stores_tag() {
    fixture fx;
    test_ctx ctx{};
    ctx.r3.u32 = 0x40;       // size
    ctx.r4.u32 = 0x11223344; // tag
    host_function<test_ctx, ExAllocatePoolWithTag>(ctx, nullptr);
    const uint32_t address = ctx.r3.u32;
    assert(fx.memory.read_u32(address - 8 + 4) == 0x11223344u);
}

void test_two_allocations_do_not_overlap() {
    fixture fx;
    test_ctx a{};
    a.r3.u32 = 0x200;
    host_function<test_ctx, ExAllocatePool>(a, nullptr);
    test_ctx b{};
    b.r3.u32 = 0x200;
    host_function<test_ctx, ExAllocatePool>(b, nullptr);
    const uint32_t first = a.r3.u32, second = b.r3.u32;
    assert(first != 0 && second != 0 && first != second);
    // Distinct 0x200-byte allocations must not intersect.
    assert(second >= first + 0x200 || first >= second + 0x200);
}

void test_rtl_compare_memory_ulong_counts_matching_bytes() {
    fixture fx;
    const uint32_t base = fixture::scratch;
    const uint32_t pattern = 0xAABBCCDD;
    for (int i = 0; i < 4; ++i) fx.memory.write_u32(base + i * 4, pattern);
    fx.memory.write_u32(base + 16, 0x00000001); // first mismatch

    test_ctx ctx{};
    ctx.r3.u32 = base;
    ctx.r4.u32 = 64; // more than the 4 matching words; still stops at mismatch
    ctx.r5.u32 = pattern;
    host_function<test_ctx, RtlCompareMemoryUlong>(ctx, nullptr);
    assert(ctx.r3.u32 == 16); // four matching words -> sixteen bytes
}

void test_rtl_compare_memory_ulong_truncates_length() {
    fixture fx;
    const uint32_t base = fixture::scratch;
    const uint32_t pattern = 0x55555555;
    fx.memory.write_u32(base, pattern);
    fx.memory.write_u32(base + 4, pattern);

    test_ctx ctx{};
    ctx.r3.u32 = base;
    ctx.r4.u32 = 7; // truncated to 4: only the first word is compared
    ctx.r5.u32 = pattern;
    host_function<test_ctx, RtlCompareMemoryUlong>(ctx, nullptr);
    assert(ctx.r3.u32 == 4);
}

void test_rtl_compare_memory_ulong_immediate_mismatch() {
    fixture fx;
    const uint32_t base = fixture::scratch;
    fx.memory.write_u32(base, 0xDEADBEEF);

    test_ctx ctx{};
    ctx.r3.u32 = base;
    ctx.r4.u32 = 16;
    ctx.r5.u32 = 0x00000000; // does not match the first word
    host_function<test_ctx, RtlCompareMemoryUlong>(ctx, nullptr);
    assert(ctx.r3.u32 == 0);
}

void test_ke_query_performance_frequency() {
    fixture fx;
    test_ctx ctx{};
    host_function<test_ctx, KeQueryPerformanceFrequency>(ctx, nullptr);
    assert(ctx.r3.u32 == 50000000u);
}

void test_dbg_print_records_trimmed_string() {
    fixture fx;
    const uint32_t base = fixture::scratch;
    const char* text = "loading level\r\n";
    for (uint32_t i = 0;; ++i) {
        fx.memory.write_u8(base + i, static_cast<uint8_t>(text[i]));
        if (text[i] == 0) break;
    }
    test_ctx ctx{};
    ctx.r3.u32 = base;
    host_function<test_ctx, DbgPrint>(ctx, nullptr);
    assert(ctx.r3.u32 == x_status::success);
    assert(fx.kernel.debug_log().size() == 1);
    assert(fx.kernel.debug_log()[0] == "loading level"); // trailing CRLF gone
}

void test_dbg_print_null_format_is_rejected() {
    fixture fx;
    test_ctx ctx{};
    ctx.r3.u32 = 0;
    host_function<test_ctx, DbgPrint>(ctx, nullptr);
    assert(ctx.r3.u32 == x_status::invalid_parameter);
    assert(fx.kernel.debug_log().empty());
}

void test_nt_allocate_virtual_memory_success() {
    fixture fx;
    const uint32_t base_ptr = fixture::scratch;
    const uint32_t size_ptr = fixture::scratch + 8;
    fx.memory.write_u32(base_ptr, 0);      // let the allocator choose
    fx.memory.write_u32(size_ptr, 0x1234); // rounds up to 0x2000

    test_ctx ctx{};
    ctx.r3.u32 = base_ptr;
    ctx.r4.u32 = size_ptr;
    ctx.r5.u32 = x_mem::commit | x_mem::reserve;
    ctx.r6.u32 = 0; // protect
    ctx.r7.u32 = 0; // debug_memory
    host_function<test_ctx, NtAllocateVirtualMemory>(ctx, nullptr);

    assert(ctx.r3.u32 == x_status::success);
    const uint32_t address = fx.memory.read_u32(base_ptr);
    // No MEM_LARGE_PAGES, so this is a 4 KiB-page allocation and it comes from
    // the region below 0x40000000 - see the region test below for why that
    // distinction is load-bearing rather than cosmetic.
    assert(!fx.in_heap(address));
    assert((address & 0xC0000000u) == 0);
    assert(fx.memory.read_u32(size_ptr) == 0x2000u); // rounded to 4 KiB pages
    // Committed and zeroed.
    assert(fx.memory.read_u32(address) == 0);
    assert(fx.small_heap.live_allocations() == 1);
}

void test_nt_allocate_virtual_memory_commit_honours_reserved_base() {
    fixture fx;
    const uint32_t base_ptr = fixture::scratch;
    const uint32_t size_ptr = fixture::scratch + 8;

    // Reserve a 1 MiB region, as a title's own arena allocator does - with
    // MEM_LARGE_PAGES, which is what Alien Breed's actually passes, so this
    // lands in the 64 KiB-page region at 0x40000000.
    fx.memory.write_u32(base_ptr, 0);
    fx.memory.write_u32(size_ptr, 0x100000);
    test_ctx reserve{};
    reserve.r3.u32 = base_ptr;
    reserve.r4.u32 = size_ptr;
    reserve.r5.u32 = x_mem::reserve | x_mem::large_pages;
    host_function<test_ctx, NtAllocateVirtualMemory>(reserve, nullptr);
    assert(reserve.r3.u32 == x_status::success);
    const uint32_t reserved_base = fx.memory.read_u32(base_ptr);
    assert(fx.in_heap(reserved_base));

    // Committing a sub-range at a specific offset within that reservation
    // must get back that EXACT address, not an unrelated block - the title's
    // own pointer arithmetic into the reservation depends on it.
    const uint32_t sub_range = reserved_base + 0x10000;
    fx.memory.write_u32(base_ptr, sub_range);
    fx.memory.write_u32(size_ptr, 0x10000);
    test_ctx commit{};
    commit.r3.u32 = base_ptr;
    commit.r4.u32 = size_ptr;
    commit.r5.u32 = x_mem::commit;
    host_function<test_ctx, NtAllocateVirtualMemory>(commit, nullptr);

    assert(commit.r3.u32 == x_status::success);
    assert(fx.memory.read_u32(base_ptr) == sub_range); // same address, not a new one
    assert(fx.memory.committed(sub_range, 0x10000));
}

void test_nt_allocate_virtual_memory_picks_the_region_by_page_size() {
    fixture fx;
    const uint32_t base_ptr = fixture::scratch;
    const uint32_t size_ptr = fixture::scratch + 8;

    // The console has two virtual regions and a title's own allocator reads
    // the top bits of a pointer to decide which of its free paths owns it -
    // Alien Breed's does exactly that (`ptr & 0xC0000000`, zero meaning the
    // small-page region). So an allocation without MEM_LARGE_PAGES has to come
    // back from below 0x40000000, and one with it from 0x40000000 or above.
    fx.memory.write_u32(base_ptr, 0);
    fx.memory.write_u32(size_ptr, 0x1000);
    test_ctx small{};
    small.r3.u32 = base_ptr;
    small.r4.u32 = size_ptr;
    small.r5.u32 = x_mem::commit;
    host_function<test_ctx, NtAllocateVirtualMemory>(small, nullptr);
    assert(small.r3.u32 == x_status::success);
    const uint32_t small_address = fx.memory.read_u32(base_ptr);
    assert((small_address & 0xC0000000u) == 0);
    assert(!fx.in_heap(small_address));
    // ...and it rounds to 4 KiB, not to the 64 KiB granularity.
    assert(fx.memory.read_u32(size_ptr) == 0x1000);

    fx.memory.write_u32(base_ptr, 0);
    fx.memory.write_u32(size_ptr, 0x1000);
    test_ctx large{};
    large.r3.u32 = base_ptr;
    large.r4.u32 = size_ptr;
    large.r5.u32 = x_mem::commit | x_mem::large_pages;
    host_function<test_ctx, NtAllocateVirtualMemory>(large, nullptr);
    assert(large.r3.u32 == x_status::success);
    assert(fx.in_heap(fx.memory.read_u32(base_ptr)));
    assert(fx.memory.read_u32(size_ptr) == 0x10000); // rounded to 64 KiB

    // A negative size - which titles really do pass - takes its magnitude and
    // still lands in the region its page size names. This is the exact call
    // that used to hand Alien Breed a 0x40000000-region pointer for a
    // small-page request and send its allocator down the wrong free path.
    fx.memory.write_u32(base_ptr, 0);
    fx.memory.write_u32(size_ptr, 0xFFFFFFFF);
    test_ctx negative{};
    negative.r3.u32 = base_ptr;
    negative.r4.u32 = size_ptr;
    negative.r5.u32 = x_mem::commit;
    host_function<test_ctx, NtAllocateVirtualMemory>(negative, nullptr);
    assert(negative.r3.u32 == x_status::success);
    assert((fx.memory.read_u32(base_ptr) & 0xC0000000u) == 0);
    assert(fx.memory.read_u32(size_ptr) == 0x1000);
}

void test_nt_free_virtual_memory_returns_to_the_right_region() {
    fixture fx;
    const uint32_t base_ptr = fixture::scratch;
    const uint32_t size_ptr = fixture::scratch + 8;

    // Allocate one of each, then free both. A free that always went to the
    // 64 KiB heap would fail on the small-page pointer - or worse, corrupt the
    // wrong heap's free list.
    fx.memory.write_u32(base_ptr, 0);
    fx.memory.write_u32(size_ptr, 0x2000);
    test_ctx small{};
    small.r3.u32 = base_ptr;
    small.r4.u32 = size_ptr;
    small.r5.u32 = x_mem::commit;
    host_function<test_ctx, NtAllocateVirtualMemory>(small, nullptr);
    const uint32_t small_address = fx.memory.read_u32(base_ptr);
    assert(fx.small_heap.live_allocations() == 1);

    fx.memory.write_u32(base_ptr, 0);
    fx.memory.write_u32(size_ptr, 0x2000);
    test_ctx large{};
    large.r3.u32 = base_ptr;
    large.r4.u32 = size_ptr;
    large.r5.u32 = x_mem::commit | x_mem::large_pages;
    host_function<test_ctx, NtAllocateVirtualMemory>(large, nullptr);
    const uint32_t large_address = fx.memory.read_u32(base_ptr);

    fx.memory.write_u32(base_ptr, small_address);
    test_ctx free_small{};
    free_small.r3.u32 = base_ptr;
    free_small.r4.u32 = size_ptr;
    free_small.r5.u32 = x_mem::release;
    host_function<test_ctx, NtFreeVirtualMemory>(free_small, nullptr);
    assert(free_small.r3.u32 == x_status::success);
    assert(fx.small_heap.live_allocations() == 0);

    fx.memory.write_u32(base_ptr, large_address);
    test_ctx free_large{};
    free_large.r3.u32 = base_ptr;
    free_large.r4.u32 = size_ptr;
    free_large.r5.u32 = x_mem::release;
    host_function<test_ctx, NtFreeVirtualMemory>(free_large, nullptr);
    assert(free_large.r3.u32 == x_status::success);

    // An address no region handed out is reported, not silently accepted.
    fx.memory.write_u32(base_ptr, 0x7F000000);
    test_ctx bogus{};
    bogus.r3.u32 = base_ptr;
    bogus.r4.u32 = size_ptr;
    bogus.r5.u32 = x_mem::release;
    host_function<test_ctx, NtFreeVirtualMemory>(bogus, nullptr);
    assert(bogus.r3.u32 == x_status::memory_not_allocated);
}

void test_nt_allocate_virtual_memory_rejects_bad_input() {
    fixture fx;
    const uint32_t base_ptr = fixture::scratch;
    const uint32_t size_ptr = fixture::scratch + 8;

    // Zero size.
    fx.memory.write_u32(base_ptr, 0);
    fx.memory.write_u32(size_ptr, 0);
    test_ctx z{};
    z.r3.u32 = base_ptr; z.r4.u32 = size_ptr;
    z.r5.u32 = x_mem::commit | x_mem::reserve;
    host_function<test_ctx, NtAllocateVirtualMemory>(z, nullptr);
    assert(z.r3.u32 == x_status::invalid_parameter);

    // No allocation-type bits.
    fx.memory.write_u32(size_ptr, 0x1000);
    test_ctx n{};
    n.r3.u32 = base_ptr; n.r4.u32 = size_ptr; n.r5.u32 = 0;
    host_function<test_ctx, NtAllocateVirtualMemory>(n, nullptr);
    assert(n.r3.u32 == x_status::invalid_parameter);

    // RESET may not be combined with anything else.
    test_ctx r{};
    r.r3.u32 = base_ptr; r.r4.u32 = size_ptr;
    r.r5.u32 = x_mem::reset | x_mem::commit;
    host_function<test_ctx, NtAllocateVirtualMemory>(r, nullptr);
    assert(r.r3.u32 == x_status::invalid_parameter);

    assert(fx.heap.live_allocations() == 0); // nothing allocated on any reject
}

void test_nt_free_virtual_memory_round_trip() {
    fixture fx;
    const uint32_t base_ptr = fixture::scratch;
    const uint32_t size_ptr = fixture::scratch + 8;
    fx.memory.write_u32(base_ptr, 0);
    fx.memory.write_u32(size_ptr, 0x8000);

    test_ctx alloc{};
    alloc.r3.u32 = base_ptr; alloc.r4.u32 = size_ptr;
    alloc.r5.u32 = x_mem::commit | x_mem::reserve;
    host_function<test_ctx, NtAllocateVirtualMemory>(alloc, nullptr);
    const uint32_t address = fx.memory.read_u32(base_ptr);
    assert(fx.small_heap.live_allocations() == 1); // 4 KiB-page region

    test_ctx free{};
    free.r3.u32 = base_ptr; free.r4.u32 = size_ptr;
    free.r5.u32 = x_mem::release;
    host_function<test_ctx, NtFreeVirtualMemory>(free, nullptr);
    assert(free.r3.u32 == x_status::success);
    assert(fx.memory.read_u32(base_ptr) == address);
    assert(fx.small_heap.live_allocations() == 0);
}

void test_nt_free_virtual_memory_unallocated() {
    fixture fx;
    const uint32_t base_ptr = fixture::scratch;
    const uint32_t size_ptr = fixture::scratch + 8;
    fx.memory.write_u32(base_ptr, 0); // null base -> nothing to free
    fx.memory.write_u32(size_ptr, 0);

    test_ctx ctx{};
    ctx.r3.u32 = base_ptr; ctx.r4.u32 = size_ptr; ctx.r5.u32 = x_mem::release;
    host_function<test_ctx, NtFreeVirtualMemory>(ctx, nullptr);
    assert(ctx.r3.u32 == x_status::memory_not_allocated);
}

// --- critical sections ---------------------------------------------------
// Field offsets within a guest X_RTL_CRITICAL_SECTION.
constexpr uint32_t kCsLockCount = 0x10;
constexpr uint32_t kCsRecursion = 0x14;
constexpr uint32_t kCsOwningThread = 0x18;

void test_critical_section_init() {
    fixture fx;
    const uint32_t cs = fixture::scratch;
    test_ctx ctx{};
    ctx.r3.u32 = cs;
    host_function<test_ctx, RtlInitializeCriticalSection>(ctx, nullptr);
    assert(fx.memory.read_u8(cs + 0) == 1);   // DISPATCHER_AUTO_RESET_EVENT
    assert(fx.memory.read_u8(cs + 1) == 0);   // spin count / 256
    assert(fx.memory.read_u32(cs + kCsLockCount) == 0xFFFFFFFFu); // -1
    assert(fx.memory.read_u32(cs + kCsRecursion) == 0);
    assert(fx.memory.read_u32(cs + kCsOwningThread) == 0);
}

void test_critical_section_init_spin_count() {
    fixture fx;
    const uint32_t cs = fixture::scratch;
    test_ctx ctx{};
    ctx.r3.u32 = cs;
    ctx.r4.u32 = 1000; // (1000 + 255) >> 8 == 4
    host_function<test_ctx, RtlInitializeCriticalSectionAndSpinCount>(ctx,
                                                                      nullptr);
    assert(ctx.r3.u32 == x_status::success);
    assert(fx.memory.read_u8(cs + 1) == 4);

    // A large spin count saturates the single byte at 255.
    test_ctx big{};
    big.r3.u32 = cs;
    big.r4.u32 = 0x40000;
    host_function<test_ctx, RtlInitializeCriticalSectionAndSpinCount>(big,
                                                                      nullptr);
    assert(fx.memory.read_u8(cs + 1) == 255);
}

// The active kernel is installed globally by the fixture, so these need no
// handle to it.
void enter(uint32_t cs) {
    test_ctx ctx{};
    ctx.r3.u32 = cs;
    host_function<test_ctx, RtlEnterCriticalSection>(ctx, nullptr);
}
void leave(uint32_t cs) {
    test_ctx ctx{};
    ctx.r3.u32 = cs;
    host_function<test_ctx, RtlLeaveCriticalSection>(ctx, nullptr);
}

void test_critical_section_enter_leave() {
    fixture fx;
    const uint32_t cs = fixture::scratch;
    test_ctx init{};
    init.r3.u32 = cs;
    host_function<test_ctx, RtlInitializeCriticalSection>(init, nullptr);

    enter(cs);
    assert(fx.memory.read_u32(cs + kCsOwningThread) != 0); // owned
    assert(fx.memory.read_u32(cs + kCsRecursion) == 1);
    assert(fx.memory.read_u32(cs + kCsLockCount) == 0); // -1 -> 0

    leave(cs);
    assert(fx.memory.read_u32(cs + kCsOwningThread) == 0); // released
    assert(fx.memory.read_u32(cs + kCsRecursion) == 0);
    assert(fx.memory.read_u32(cs + kCsLockCount) == 0xFFFFFFFFu);
}

void test_critical_section_recursive() {
    fixture fx;
    const uint32_t cs = fixture::scratch;
    test_ctx init{};
    init.r3.u32 = cs;
    host_function<test_ctx, RtlInitializeCriticalSection>(init, nullptr);

    enter(cs);
    enter(cs); // re-entered by the same (sole) thread
    assert(fx.memory.read_u32(cs + kCsRecursion) == 2);
    assert(fx.memory.read_u32(cs + kCsLockCount) == 1);

    leave(cs);
    assert(fx.memory.read_u32(cs + kCsRecursion) == 1); // still held
    assert(fx.memory.read_u32(cs + kCsOwningThread) != 0);
    assert(fx.memory.read_u32(cs + kCsLockCount) == 0);

    leave(cs);
    assert(fx.memory.read_u32(cs + kCsRecursion) == 0); // fully released
    assert(fx.memory.read_u32(cs + kCsOwningThread) == 0);
}

void test_critical_section_try_enter() {
    fixture fx;
    const uint32_t cs = fixture::scratch;
    test_ctx init{};
    init.r3.u32 = cs;
    host_function<test_ctx, RtlInitializeCriticalSection>(init, nullptr);

    test_ctx ctx{};
    ctx.r3.u32 = cs;
    host_function<test_ctx, RtlTryEnterCriticalSection>(ctx, nullptr);
    assert(ctx.r3.u32 == 1); // acquired
    assert(fx.memory.read_u32(cs + kCsRecursion) == 1);

    test_ctx again{};
    again.r3.u32 = cs;
    host_function<test_ctx, RtlTryEnterCriticalSection>(again, nullptr);
    assert(again.r3.u32 == 1);
    assert(fx.memory.read_u32(cs + kCsRecursion) == 2); // recursive
}

// The whole point of a critical section: a second thread does not get in. This
// is what "the one guest thread" cost - every thread looked like the owner, so
// every enter succeeded and the section excluded nothing.
void test_critical_section_excludes_another_thread() {
    fixture fx;
    const uint32_t cs = fixture::scratch;
    test_ctx init{};
    init.r3.u32 = cs;
    host_function<test_ctx, RtlInitializeCriticalSection>(init, nullptr);

    enter(cs);
    // Another thread must fail to take it while this one holds it...
    std::atomic<uint32_t> tried{2}; // 2 = not yet run
    std::thread([&] {
        test_ctx ctx{};
        ctx.r3.u32 = cs;
        host_function<test_ctx, RtlTryEnterCriticalSection>(ctx, nullptr);
        tried.store(ctx.r3.u32);
    }).join();
    assert(tried.load() == 0);
    assert(fx.memory.read_u32(cs + kCsRecursion) == 1); // untouched

    // ...and a blocking enter on that thread must wait for the leave rather
    // than walk straight in.
    std::atomic<bool> inside{false};
    std::thread waiter([&] {
        enter(cs);
        inside.store(true);
        leave(cs);
    });
    std::this_thread::sleep_for(std::chrono::milliseconds(30));
    assert(!inside.load()); // still blocked
    leave(cs);
    waiter.join();
    assert(inside.load());
    assert(fx.memory.read_u32(cs + kCsOwningThread) == 0);
    assert(fx.memory.read_u32(cs + kCsRecursion) == 0);
}

// --- interlocked singly-linked lists -------------------------------------
uint32_t push(uint32_t list, uint32_t entry) {
    test_ctx ctx{};
    ctx.r3.u32 = list;
    ctx.r4.u32 = entry;
    host_function<test_ctx, InterlockedPushEntrySList>(ctx, nullptr);
    return ctx.r3.u32;
}
uint32_t pop(uint32_t list) {
    test_ctx ctx{};
    ctx.r3.u32 = list;
    host_function<test_ctx, InterlockedPopEntrySList>(ctx, nullptr);
    return ctx.r3.u32;
}

void test_slist_push_and_pop() {
    fixture fx;
    const uint32_t list = fixture::scratch;
    const uint32_t e1 = fixture::scratch + 0x40;
    const uint32_t e2 = fixture::scratch + 0x44;
    // Zeroed header: empty list.
    fx.memory.write_u32(list + 0, 0);
    fx.memory.write_u16(list + 4, 0);
    fx.memory.write_u16(list + 6, 0);

    assert(push(list, e1) == 0); // old head was null
    assert(fx.memory.read_u32(list + 0) == e1);
    assert(fx.memory.read_u32(e1) == 0); // e1->next
    assert(fx.memory.read_u16(list + 4) == 1); // depth
    assert(fx.memory.read_u16(list + 6) == 1); // sequence

    assert(push(list, e2) == e1); // old head was e1
    assert(fx.memory.read_u32(list + 0) == e2);
    assert(fx.memory.read_u32(e2) == e1); // e2->next == e1
    assert(fx.memory.read_u16(list + 4) == 2);
    assert(fx.memory.read_u16(list + 6) == 2);

    assert(pop(list) == e2); // LIFO
    assert(fx.memory.read_u32(list + 0) == e1);
    assert(fx.memory.read_u16(list + 4) == 1);
    assert(pop(list) == e1);
    assert(fx.memory.read_u32(list + 0) == 0);
    assert(fx.memory.read_u16(list + 4) == 0);
}

void test_slist_pop_empty_returns_zero() {
    fixture fx;
    const uint32_t list = fixture::scratch;
    fx.memory.write_u32(list + 0, 0);
    fx.memory.write_u16(list + 4, 0);
    fx.memory.write_u16(list + 6, 0);
    assert(pop(list) == 0);
}

void test_slist_flush() {
    fixture fx;
    const uint32_t list = fixture::scratch;
    const uint32_t e1 = fixture::scratch + 0x40;
    const uint32_t e2 = fixture::scratch + 0x44;
    fx.memory.write_u32(list + 0, 0);
    fx.memory.write_u16(list + 4, 0);
    fx.memory.write_u16(list + 6, 0);
    push(list, e1);
    push(list, e2);

    test_ctx ctx{};
    ctx.r3.u32 = list;
    host_function<test_ctx, InterlockedFlushSList>(ctx, nullptr);
    assert(ctx.r3.u32 == e2); // returns the old head
    assert(fx.memory.read_u32(list + 0) == 0);
    assert(fx.memory.read_u16(list + 4) == 0);
    assert(fx.memory.read_u16(list + 6) == 0);
}

// --- spin locks / IRQL ---------------------------------------------------
// A spin lock has to actually exclude. It used to be a no-op, which was
// defensible while there was one guest thread and became wrong the moment there
// were several - a title calls it, believes it is inside a critical region, and
// is not. The state it protects is then corrupted by a second thread with
// nothing in the call sequence to say so.
void test_spinlock_records_its_owner_and_releases() {
    fixture fx;
    const uint32_t lock = fixture::scratch;
    fx.memory.write_u32(lock, 0); // free, as a title initialises it

    test_ctx acquire{};
    acquire.r3.u32 = lock;
    host_function<test_ctx, KfAcquireSpinLock>(acquire, nullptr);
    assert(acquire.r3.u32 == 0); // prior IRQL reported as passive
    // Held: the word names an owner. Which value is opaque - on hardware it is
    // the processor block of the holder - so only "not free" is asserted.
    assert(fx.memory.read_u32(lock) != 0);

    test_ctx release{};
    release.r3.u32 = lock;
    release.r4.u32 = 0;
    host_function<test_ctx, KfReleaseSpinLock>(release, nullptr);
    assert(fx.memory.read_u32(lock) == 0);

    // The raised-IRQL pair shares the word and the convention, so a lock taken
    // by one form must be releasable by the other - a title mixes them.
    test_ctx a{}; a.r3.u32 = lock;
    host_function<test_ctx, KeAcquireSpinLockAtRaisedIrql>(a, nullptr);
    assert(fx.memory.read_u32(lock) != 0);
    test_ctx r{}; r.r3.u32 = lock;
    host_function<test_ctx, KfReleaseSpinLock>(r, nullptr);
    assert(fx.memory.read_u32(lock) == 0);

    // Try succeeds on a free lock, fails on one already held, and what it took
    // is released by the ordinary release.
    const auto try_lock = [&] {
        test_ctx attempt{};
        attempt.r3.u32 = lock;
        host_function<test_ctx, KeTryToAcquireSpinLockAtRaisedIrql>(attempt,
                                                                   nullptr);
        return attempt.r3.u32;
    };
    assert(try_lock() == 1);
    assert(fx.memory.read_u32(lock) != 0);
    assert(try_lock() == 0); // still held, even by this same thread
    test_ctx r2{}; r2.r3.u32 = lock;
    host_function<test_ctx, KeReleaseSpinLockFromRaisedIrql>(r2, nullptr);
    assert(fx.memory.read_u32(lock) == 0);
    assert(try_lock() == 1);
    test_ctx r3{}; r3.r3.u32 = lock;
    host_function<test_ctx, KeReleaseSpinLockFromRaisedIrql>(r3, nullptr);

    // IRQL is not modelled - there are no interrupts to mask - so the raise
    // reports the passive level the matching lower expects handed back.
    test_ctx raise{};
    host_function<test_ctx, KeRaiseIrqlToDpcLevel>(raise, nullptr);
    assert(raise.r3.u32 == 0);
    test_ctx enter_cr{};
    host_function<test_ctx, KeEnterCriticalRegion>(enter_cr, nullptr);
    test_ctx leave_cr{};
    host_function<test_ctx, KeLeaveCriticalRegion>(leave_cr, nullptr);
    test_ctx lower{}; lower.r3.u32 = 0;
    host_function<test_ctx, KfLowerIrql>(lower, nullptr);

    // An unaligned or null lock word cannot be operated on atomically, and must
    // not hang: reporting the acquire done is wrong but hanging is worse, and a
    // title never passes one.
    test_ctx bad{}; bad.r3.u32 = 0;
    host_function<test_ctx, KfAcquireSpinLock>(bad, nullptr);
    test_ctx odd{}; odd.r3.u32 = lock + 1;
    host_function<test_ctx, KfAcquireSpinLock>(odd, nullptr);
    test_ctx odd_try{}; odd_try.r3.u32 = lock + 1;
    host_function<test_ctx, KeTryToAcquireSpinLockAtRaisedIrql>(odd_try, nullptr);
    assert(odd_try.r3.u32 == 0);
}

// The property that matters: two threads contending for one lock must not both
// be inside it. The counter is deliberately updated through a plain guest
// read-modify-write, so a lock that does not exclude loses increments - which is
// exactly the shape of the corruption a no-op spin lock caused.
void test_spinlock_excludes_two_threads() {
    fixture fx;
    const uint32_t lock = fixture::scratch;
    const uint32_t counter = fixture::scratch + 0x40;
    fx.memory.write_u32(lock, 0);
    fx.memory.write_u32(counter, 0);

    constexpr int kThreads = 4;
    constexpr int kRounds = 2000;
    const auto worker = [&] {
        for (int round = 0; round < kRounds; ++round) {
            test_ctx acquire{};
            acquire.r3.u32 = lock;
            host_function<test_ctx, KeAcquireSpinLockAtRaisedIrql>(acquire,
                                                                   nullptr);
            const uint32_t seen = fx.memory.read_u32(counter);
            // Widen the window a real title would have: the increment is a few
            // instructions, and without this a lost update is rare enough to
            // pass by luck.
            std::this_thread::yield();
            fx.memory.write_u32(counter, seen + 1);
            test_ctx release{};
            release.r3.u32 = lock;
            host_function<test_ctx, KeReleaseSpinLockFromRaisedIrql>(release,
                                                                     nullptr);
        }
    };
    std::vector<std::thread> threads;
    for (int i = 0; i < kThreads; ++i) threads.emplace_back(worker);
    for (std::thread& thread : threads) thread.join();

    assert(fx.memory.read_u32(counter) ==
           static_cast<uint32_t>(kThreads * kRounds));
    assert(fx.memory.read_u32(lock) == 0); // every acquire was released
}

// --- RTL utilities / process / firmware ---------------------------------
void test_rtl_fill_memory_ulong() {
    fixture fx;
    const uint32_t dest = fixture::scratch;
    const uint32_t pattern = 0x0A0B0C0D;
    // A sentinel just past the fill must be left untouched.
    fx.memory.write_u32(dest + 12, 0xFFFFFFFFu);

    test_ctx ctx{};
    ctx.r3.u32 = dest;
    ctx.r4.u32 = 11; // 11 >> 2 == 2 whole words
    ctx.r5.u32 = pattern;
    host_function<test_ctx, RtlFillMemoryUlong>(ctx, nullptr);
    assert(fx.memory.read_u32(dest + 0) == pattern);
    assert(fx.memory.read_u32(dest + 4) == pattern);
    assert(fx.memory.read_u32(dest + 8) == 0);          // third word untouched
    assert(fx.memory.read_u32(dest + 12) == 0xFFFFFFFFu); // sentinel intact
}

void test_rtl_init_ansi_string() {
    fixture fx;
    const uint32_t str_struct = fixture::scratch;
    const uint32_t text = fixture::scratch + 0x40;
    const char* s = "config";
    for (uint32_t i = 0;; ++i) {
        fx.memory.write_u8(text + i, static_cast<uint8_t>(s[i]));
        if (s[i] == 0) break;
    }
    test_ctx ctx{};
    ctx.r3.u32 = str_struct;
    ctx.r4.u32 = text;
    host_function<test_ctx, RtlInitAnsiString>(ctx, nullptr);
    assert(fx.memory.read_u16(str_struct + 0) == 6); // "config"
    assert(fx.memory.read_u16(str_struct + 2) == 7); // includes the terminator
    assert(fx.memory.read_u32(str_struct + 4) == text);

    // A null source zeroes length and max but still records the pointer.
    test_ctx null_ctx{};
    null_ctx.r3.u32 = str_struct;
    null_ctx.r4.u32 = 0;
    host_function<test_ctx, RtlInitAnsiString>(null_ctx, nullptr);
    assert(fx.memory.read_u16(str_struct + 0) == 0);
    assert(fx.memory.read_u16(str_struct + 2) == 0);
    assert(fx.memory.read_u32(str_struct + 4) == 0);
}

void test_rtl_init_unicode_string() {
    fixture fx;
    const uint32_t str_struct = fixture::scratch;
    const uint32_t text = fixture::scratch + 0x40;
    // UTF-16 "Hi" then a NUL code unit.
    fx.memory.write_u16(text + 0, u'H');
    fx.memory.write_u16(text + 2, u'i');
    fx.memory.write_u16(text + 4, 0);

    test_ctx ctx{};
    ctx.r3.u32 = str_struct;
    ctx.r4.u32 = text;
    host_function<test_ctx, RtlInitUnicodeString>(ctx, nullptr);
    assert(ctx.r3.u32 == str_struct);              // returns the destination
    assert(fx.memory.read_u16(str_struct + 0) == 4); // 2 units * 2 bytes
    assert(fx.memory.read_u16(str_struct + 2) == 6); // (2 + 1) * 2 bytes
    assert(fx.memory.read_u32(str_struct + 4) == text);
}

void test_ke_get_current_process_type() {
    fixture fx;
    test_ctx ctx{};
    host_function<test_ctx, KeGetCurrentProcessType>(ctx, nullptr);
    assert(ctx.r3.u32 == 1); // X_PROCTYPE_TITLE
}

void test_bug_check_records_termination() {
    fixture fx;
    assert(!fx.kernel.terminated());
    test_ctx ctx{};
    ctx.r3.u32 = 0x1234;
    ctx.r4.u32 = 0xAA;
    ctx.r5.u32 = 0xBB;
    ctx.r6.u32 = 0xCC;
    ctx.r7.u32 = 0xDD;
    host_function<test_ctx, KeBugCheckEx>(ctx, nullptr);
    assert(fx.kernel.terminated());
    assert(fx.kernel.terminate_reason().find("0x00001234") != std::string::npos);

    // A second stop must not overwrite the first reason.
    test_ctx again{};
    again.r3.u32 = 0x9999;
    host_function<test_ctx, KeBugCheck>(again, nullptr);
    assert(fx.kernel.terminate_reason().find("0x00001234") != std::string::npos);
}

void test_hal_return_to_firmware_records_termination() {
    fixture fx;
    test_ctx ctx{};
    ctx.r3.u32 = 1; // routine
    host_function<test_ctx, HalReturnToFirmware>(ctx, nullptr);
    assert(fx.kernel.terminated());
    assert(fx.kernel.terminate_reason().find("firmware") != std::string::npos);
}

void test_trivial_stubs_are_safe() {
    fixture fx;
    test_ctx fpu{};
    fpu.r3.u32 = 1;
    host_function<test_ctx, KeEnableFpuExceptions>(fpu, nullptr);

    test_ctx brk{};
    host_function<test_ctx, DbgBreakPoint>(brk, nullptr);

    test_ctx fsc{};
    fsc.r3.u32 = 0;
    fsc.r4.u32 = 256;
    host_function<test_ctx, FscSetCacheElementCount>(fsc, nullptr);
    assert(fsc.r3.u32 == x_status::success);

    assert(!fx.kernel.terminated()); // none of these stop the guest
}

// --- dispatcher objects: events -----------------------------------------
// Dispatcher-header offsets shared by every object.
constexpr uint32_t kSignalState = 0x04;

uint32_t create_event(fixture& fx, uint32_t handle_slot, uint32_t type,
                      uint32_t initial) {
    test_ctx ctx{};
    ctx.r3.u32 = handle_slot; // guest address to receive the handle
    ctx.r4.u32 = 0;           // object attributes
    ctx.r5.u32 = type;
    ctx.r6.u32 = initial;
    host_function<test_ctx, NtCreateEvent>(ctx, nullptr);
    assert(ctx.r3.u32 == x_status::success);
    return fx.memory.read_u32(handle_slot);
}

void test_nt_create_event_and_signal_by_handle() {
    fixture fx;
    const uint32_t handle_slot = fixture::scratch;
    const uint32_t handle = create_event(fx, handle_slot, 1, 0); // auto, unset
    assert(object_table::is_handle(handle));
    assert(fx.kernel.objects().lookup(handle) != nullptr);
    const uint32_t event_ptr = fx.kernel.objects().lookup(handle)->guest_object;
    assert(fx.in_heap(event_ptr));
    assert(fx.memory.read_u8(event_ptr + 0) == 1);   // auto-reset type
    assert(fx.memory.read_u32(event_ptr + kSignalState) == 0);

    // NtSetEvent reports the previous state and signals.
    const uint32_t prev_slot = fixture::scratch + 0x40;
    test_ctx set{};
    set.r3.u32 = handle;
    set.r4.u32 = prev_slot;
    host_function<test_ctx, NtSetEvent>(set, nullptr);
    assert(set.r3.u32 == x_status::success);
    assert(fx.memory.read_u32(prev_slot) == 0);              // was unsignalled
    assert(fx.memory.read_u32(event_ptr + kSignalState) == 1); // now signalled

    // NtClearEvent resets it.
    test_ctx clear{};
    clear.r3.u32 = handle;
    host_function<test_ctx, NtClearEvent>(clear, nullptr);
    assert(fx.memory.read_u32(event_ptr + kSignalState) == 0);

    // A set on a missing handle is rejected.
    test_ctx bad{};
    bad.r3.u32 = 0xF8000FFC; // never issued
    bad.r4.u32 = 0;
    host_function<test_ctx, NtSetEvent>(bad, nullptr);
    assert(bad.r3.u32 == x_status::invalid_handle);
}

void test_ke_event_by_pointer() {
    fixture fx;
    const uint32_t event_ptr = fixture::scratch;
    test_ctx init{};
    init.r3.u32 = event_ptr;
    init.r4.u32 = 0; // manual reset
    init.r5.u32 = 1; // initially signalled
    host_function<test_ctx, KeInitializeEvent>(init, nullptr);
    assert(fx.memory.read_u8(event_ptr + 0) == 0);
    assert(fx.memory.read_u32(event_ptr + kSignalState) == 1);

    // Set returns the previous (signalled) state and leaves it signalled.
    test_ctx set{};
    set.r3.u32 = event_ptr;
    host_function<test_ctx, KeSetEvent>(set, nullptr);
    assert(set.r3.u32 == 1);
    assert(fx.memory.read_u32(event_ptr + kSignalState) == 1);

    // Reset returns the previous state and clears it.
    test_ctx reset{};
    reset.r3.u32 = event_ptr;
    host_function<test_ctx, KeResetEvent>(reset, nullptr);
    assert(reset.r3.u32 == 1);
    assert(fx.memory.read_u32(event_ptr + kSignalState) == 0);

    // Pulse leaves the event unsignalled, reporting the prior state.
    test_ctx resignal{};
    resignal.r3.u32 = event_ptr;
    host_function<test_ctx, KeSetEvent>(resignal, nullptr);
    test_ctx pulse{};
    pulse.r3.u32 = event_ptr;
    host_function<test_ctx, KePulseEvent>(pulse, nullptr);
    assert(pulse.r3.u32 == 1);
    assert(fx.memory.read_u32(event_ptr + kSignalState) == 0);
}

// --- dispatcher objects: semaphores -------------------------------------
void test_semaphore_init_and_release() {
    fixture fx;
    const uint32_t sem_ptr = fixture::scratch;
    test_ctx init{};
    init.r3.u32 = sem_ptr;
    init.r4.u32 = 2;   // initial count
    init.r5.u32 = 10;  // limit
    host_function<test_ctx, KeInitializeSemaphore>(init, nullptr);
    assert(fx.memory.read_u8(sem_ptr + 0) == 5); // DISPATCHER_SEMAPHORE
    assert(fx.memory.read_u32(sem_ptr + kSignalState) == 2);
    assert(fx.memory.read_u32(sem_ptr + 0x10) == 10); // limit

    // Release adds to the count and returns the previous value.
    test_ctx rel{};
    rel.r3.u32 = sem_ptr;
    rel.r4.u32 = 0; // priority increment
    rel.r5.u32 = 3; // adjustment
    rel.r6.u32 = 0; // wait
    host_function<test_ctx, KeReleaseSemaphore>(rel, nullptr);
    assert(rel.r3.u32 == 2);                             // previous count
    assert(fx.memory.read_u32(sem_ptr + kSignalState) == 5); // 2 + 3
}

// --- handle lifetime -----------------------------------------------------
void test_nt_close_and_ob_reference() {
    fixture fx;
    const uint32_t handle_slot = fixture::scratch;
    const uint32_t handle = create_event(fx, handle_slot, 1, 0);
    const uint32_t event_ptr = fx.kernel.objects().lookup(handle)->guest_object;

    // ObReferenceObjectByHandle yields the object pointer and takes a reference.
    const uint32_t out_slot = fixture::scratch + 0x40;
    test_ctx ref{};
    ref.r3.u32 = handle;
    ref.r4.u32 = 0;        // object type
    ref.r5.u32 = out_slot; // out pointer
    host_function<test_ctx, ObReferenceObjectByHandle>(ref, nullptr);
    assert(ref.r3.u32 == x_status::success);
    assert(fx.memory.read_u32(out_slot) == event_ptr);
    assert(fx.kernel.objects().lookup(handle)->reference_count == 2);

    // NtClose drops the handle reference; the Ob reference keeps it alive.
    test_ctx close{};
    close.r3.u32 = handle;
    host_function<test_ctx, NtClose>(close, nullptr);
    assert(close.r3.u32 == x_status::success);
    assert(fx.kernel.objects().lookup(handle) != nullptr);

    // ObDereferenceObject on the pointer releases the last reference.
    test_ctx deref{};
    deref.r3.u32 = event_ptr;
    host_function<test_ctx, ObDereferenceObject>(deref, nullptr);
    assert(fx.kernel.objects().lookup(handle) == nullptr);

    // Closing an unknown handle is rejected.
    test_ctx bad{};
    bad.r3.u32 = 0xF8000FFC;
    host_function<test_ctx, NtClose>(bad, nullptr);
    assert(bad.r3.u32 == x_status::invalid_handle);
}

void test_ob_dereference_ignores_sentinel() {
    fixture fx;
    // The 0xDEADF00D sentinel and a null pointer must be no-ops, not lookups.
    test_ctx sentinel{};
    sentinel.r3.u32 = 0xDEADF00Du;
    host_function<test_ctx, ObDereferenceObject>(sentinel, nullptr);
    test_ctx null_ptr{};
    null_ptr.r3.u32 = 0;
    host_function<test_ctx, ObDereferenceObject>(null_ptr, nullptr);
}

void test_nt_duplicate_object() {
    fixture fx;
    const uint32_t handle_slot = fixture::scratch;
    const uint32_t handle = create_event(fx, handle_slot, 1, 0);
    const uint32_t event_ptr = fx.kernel.objects().lookup(handle)->guest_object;

    const uint32_t new_slot = fixture::scratch + 0x40;
    test_ctx dup{};
    dup.r3.u32 = handle;
    dup.r4.u32 = new_slot;
    dup.r5.u32 = 0; // options: keep source
    host_function<test_ctx, NtDuplicateObject>(dup, nullptr);
    assert(dup.r3.u32 == x_status::success);
    const uint32_t new_handle = fx.memory.read_u32(new_slot);
    assert(new_handle != handle);
    assert(fx.kernel.objects().lookup(new_handle)->guest_object == event_ptr);
    // Both handles resolve to the same object.
    assert(fx.kernel.objects().lookup(handle) != nullptr);
}

// --- physical memory -----------------------------------------------------
uint32_t alloc_physical(uint32_t size, uint32_t protect, uint32_t alignment) {
    test_ctx ctx{};
    ctx.r3.u32 = 0;         // flags
    ctx.r4.u32 = size;
    ctx.r5.u32 = protect;
    ctx.r6.u32 = 0;         // min address
    ctx.r7.u32 = 0;         // max address
    ctx.r8.u32 = alignment;
    host_function<test_ctx, MmAllocatePhysicalMemoryEx>(ctx, nullptr);
    return ctx.r3.u32;
}

void test_mm_allocate_and_physical_address() {
    fixture fx;
    const uint32_t address = alloc_physical(0x1000, x_page::readwrite, 0);
    assert(fx.in_physical(address));
    assert(fx.phys_heap.live_allocations() == 1);

    // The raw physical address is the offset WITHIN the alias region: the
    // pointer's offset in its window plus where that window starts in physical
    // memory (0 for 64 KiB and 16 MiB, 0x1000 for 4 KiB).
    test_ctx phys{};
    phys.r3.u32 = address;
    host_function<test_ctx, MmGetPhysicalAddress>(phys, nullptr);
    assert(phys.r3.u32 == physical_address_of(address));

    // An address already below the alias region is treated as physical.
    test_ctx already{};
    already.r3.u32 = 0x1000;
    host_function<test_ctx, MmGetPhysicalAddress>(already, nullptr);
    assert(already.r3.u32 == 0x1000);

    // Free it - through the same window it was handed out in, which is the only
    // one the title knows about.
    test_ctx free{};
    free.r3.u32 = 0; // type
    free.r4.u32 = address;
    host_function<test_ctx, MmFreePhysicalMemory>(free, nullptr);
    assert(fx.phys_heap.live_allocations() == 0);
}

// What a physical allocation's ADDRESS has to satisfy, whichever alias window it
// comes back in. Which window a 4 KiB-page request lands in is under active
// investigation and is deliberately NOT pinned here, so this test passes either
// way; what is pinned is the part that has to hold regardless - every pointer is
// in a window, the physical<->pointer round trip is exact, a free through a
// different window than the allocation still works, and the windows are the same
// bytes.
//
// The evidence for the window question, recorded so it is not re-derived:
// Geometry Wars 1's D3D ring set-up converts a CPU pointer to the GPU address it
// passes VdEnableRingBufferRPtrWriteBack with (sub_82038B40, verbatim)
//
//     r9  = (ptr rotl 12) & 0xFFF     ; top 12 bits: 0xA00, or 0xE00
//     r10 = ptr & 0x1FFFFFFF          ; offset within the window
//     r11 = (r9 + 0x200) & 0x1000     ; 0x1000 iff those bits were >= 0xE00
//     r3  = r11 + r10                 ; and it ADDS
//
// so the title itself believes the 4 KiB window sits 0x1000 further into physical
// memory - which is what kSmallPageWindowOffset says. The two have to agree: with
// the window moved to 0xE0000000 but the offset not applied, Geometry Wars asked
// for its read pointer at physical 0x1E03C while polling the dword at 0x1D03C and
// presented ZERO frames, spinning in its own db16cyc wait. Alien Breed:
// Evolution needs the 4 KiB window for the opposite reason - its allocator routes
// free() on `(ptr & 0xE0000000) == 0xE0000000` and sends anything else to a
// per-64 KiB-page descriptor table that a 4 KiB allocation never fills in, then
// unlinks the zeroed entry through a null `prev`. Neither title's request
// distinguishes it from the other's: `flags` is 0 in every call both make, and
// Geometry Wars' ring (protect 0x404, align 0x20) has the same argument shape as
// Alien Breed's first two allocations.
void test_mm_allocate_physical_addresses_round_trip() {
    fixture fx;

    // 4 KiB pages: no large-page flag. It comes back in the 4 KiB WINDOW, which
    // is load-bearing rather than cosmetic - Alien Breed: Evolution routes its
    // own free() on `(ptr & 0xE0000000) == 0xE0000000`, so a 4 KiB allocation
    // handed back at 0xA0000000 went down its 64 KiB free path and unlinked a
    // descriptor that no allocation had filled in, through a null `prev`.
    const uint32_t small = alloc_physical(0xA640, x_page::readwrite, 0x1000);
    assert(small != 0);
    assert(is_physical_alias(small));
    assert((small & ~kPhysicalOffsetMask) == 0xE0000000u);

    // 64 KiB pages, and really 64 KiB-aligned - which is what a title's own
    // per-page bookkeeping is indexed by.
    const uint32_t large =
        alloc_physical(0xF000, x_page::readwrite | x_mem::large_pages, 0x10000);
    assert(large != 0);
    assert(is_physical_alias(large));
    assert((large & ~kPhysicalOffsetMask) == 0xA0000000u);
    assert((large & 0xFFFFu) == 0);

    // The round trip through the physical address is exact for both, in their own
    // window. This is what every pointer the kernel hands out or takes back
    // depends on.
    for (uint32_t address : {small, large}) {
        const uint32_t window = address & ~kPhysicalOffsetMask;
        assert(physical_in_window(physical_address_of(address), window) ==
               address);
    }

    // The 16 MiB window (0xC0000000) is not exercised here: a 16 MiB-page
    // request rounds up to a 16 MiB block and this fixture's physical heap is
    // 4 MiB, so the allocation legitimately fails and there would be no address
    // to check. The mapping is the same one line of code as the other two.

    // Both blocks are freeable through the window they were handed out in - the
    // heap has to translate back to its own window to recognise them.
    assert(fx.phys_heap.live_allocations() == 2);
    for (uint32_t address : {small, large}) {
        test_ctx free{};
        free.r3.u32 = 0;
        free.r4.u32 = address;
        host_function<test_ctx, MmFreePhysicalMemory>(free, nullptr);
    }
    assert(fx.phys_heap.live_allocations() == 0);

    // A write through the 4 KiB window is visible through the other two, which is
    // why re-basing a pointer is exact rather than a guess. It is re-based through
    // the PHYSICAL ADDRESS, not by swapping the top bits: the 4 KiB window starts
    // one page into physical memory, so the same offset in it is a different byte.
    const uint32_t again = alloc_physical(0x1000, x_page::readwrite, 0x1000);
    assert(again != 0);
    const uint32_t physical = physical_address_of(again);
    fx.memory.write_u32(again, 0x5A5AA5A5u);
    assert(fx.memory.read_u32(physical_in_window(physical, 0xA0000000u)) ==
           0x5A5AA5A5u);
    assert(fx.memory.read_u32(physical_in_window(physical, 0xC0000000u)) ==
           0x5A5AA5A5u);
    // Where a window is BIASED within physical memory, re-basing by swapping the
    // top bits lands on the neighbouring page instead - a mistake that is silent
    // unless it is looked for. Only checkable when the pointer is in a biased
    // window, which is exactly the case the bias exists for.
    if (physical_window_offset(again) != 0) {
        assert(physical_in_window(physical, 0xA0000000u) !=
               (0xA0000000u | (again & kPhysicalOffsetMask)));
    }

    // A free through a DIFFERENT window than the allocation still has to be
    // recognised: the three windows are one memory and a title may hold whichever
    // it likes. This is what the translation in MmFreePhysicalMemory is for.
    test_ctx other{};
    other.r3.u32 = 0;
    other.r4.u32 = physical_in_window(physical, 0xC0000000u);
    host_function<test_ctx, MmFreePhysicalMemory>(other, nullptr);
    assert(fx.phys_heap.live_allocations() == 0);
}

void test_mm_allocate_rejects_bad_protection() {
    fixture fx;
    // Neither read nor write set.
    assert(alloc_physical(0x1000, 0, 0) == 0);
    assert(fx.phys_heap.live_allocations() == 0);
}

void test_mm_allocate_large_page_rounding() {
    fixture fx;
    // A 64 KiB-page request rounds the size up to the page.
    const uint32_t address =
        alloc_physical(0x1234, x_page::readwrite | x_mem::large_pages, 0);
    assert(fx.in_physical(address));
    assert((address & 0xFFFF) == 0); // aligned to the 64 KiB page
    assert(fx.phys_heap.size_of(address) == 0x10000);
}

void test_mm_protection_stubs() {
    fixture fx;
    test_ctx query{};
    query.r3.u32 = fixture::phys_base;
    host_function<test_ctx, MmQueryAddressProtect>(query, nullptr);
    assert(query.r3.u32 == x_page::readwrite);

    test_ctx set{};
    set.r3.u32 = fixture::phys_base;
    set.r4.u32 = 0x1000;
    set.r5.u32 = x_page::readonly;
    host_function<test_ctx, MmSetAddressProtect>(set, nullptr); // no-op, no crash
}

void test_mm_query_statistics() {
    fixture fx;
    const uint32_t stats = fixture::scratch;
    fx.memory.write_u32(stats + 0, 104); // caller sets the expected size

    test_ctx ctx{};
    ctx.r3.u32 = stats;
    host_function<test_ctx, MmQueryStatistics>(ctx, nullptr);
    assert(ctx.r3.u32 == x_status::success);
    assert(fx.memory.read_u32(stats + 0) == 104);
    assert(fx.memory.read_u32(stats + 4) == 0x00020000); // 512 MiB / 4 KiB

    // A wrong size field is rejected rather than filled.
    fx.memory.write_u32(stats + 0, 64);
    test_ctx bad{};
    bad.r3.u32 = stats;
    host_function<test_ctx, MmQueryStatistics>(bad, nullptr);
    assert(bad.r3.u32 == x_status::buffer_too_small);
}

// --- files ---------------------------------------------------------------
// A self-cleaning temp directory with a known file to open.
struct temp_game_dir {
    fs::path path;
    temp_game_dir() {
        path = fs::temp_directory_path() / "whitty_xenon_handlers_fs";
        fs::remove_all(path);
        fs::create_directories(path);
    }
    ~temp_game_dir() {
        std::error_code ec;
        fs::remove_all(path, ec);
    }
    void write(const std::string& name, const std::string& contents) {
        std::ofstream out(path / name, std::ios::binary);
        out.write(contents.data(), static_cast<std::streamsize>(contents.size()));
    }
};

// Plants an X_OBJECT_ATTRIBUTES + X_ANSI_STRING + path in guest scratch and
// returns the object-attributes address. io_status and handle-out addresses are
// returned by reference.
uint32_t plant_open_request(fixture& fx, const std::string& guest_path,
                            uint32_t& io_status, uint32_t& handle_out) {
    const uint32_t oa = fixture::scratch + 0x100;
    const uint32_t name = fixture::scratch + 0x120;
    const uint32_t text = fixture::scratch + 0x140;
    io_status = fixture::scratch + 0x1C0;
    handle_out = fixture::scratch + 0x1D0;

    for (std::size_t i = 0; i < guest_path.size(); ++i)
        fx.memory.write_u8(text + static_cast<uint32_t>(i),
                           static_cast<uint8_t>(guest_path[i]));
    fx.memory.write_u16(name + 0, static_cast<uint16_t>(guest_path.size()));
    fx.memory.write_u16(name + 2, static_cast<uint16_t>(guest_path.size() + 1));
    fx.memory.write_u32(name + 4, text);
    fx.memory.write_u32(oa + 0, 0);    // root_directory
    fx.memory.write_u32(oa + 4, name); // name_ptr
    return oa;
}

// Drives NtCreateFile, whose ninth argument spills to the stack - so a real
// base pointer and stack pointer are set up, exercising that path end to end.
uint32_t create_file(fixture& fx, uint32_t handle_out, uint32_t oa,
                     uint32_t io_status) {
    test_ctx ctx{};
    ctx.r1.u32 = fixture::scratch + 0x2000; // committed stack for the 9th arg
    ctx.r3.u32 = handle_out;
    ctx.r4.u32 = 0;         // desired_access
    ctx.r5.u32 = oa;        // object_attributes
    ctx.r6.u32 = io_status; // io_status_block
    ctx.r7.u32 = 0;         // allocation_size_ptr
    ctx.r8.u32 = 0;         // file_attributes
    ctx.r9.u32 = 0;         // share_access
    ctx.r10.u32 = 1;        // creation_disposition (open)
    host_function<test_ctx, NtCreateFile>(ctx, fx.memory.host_unchecked(0));
    return ctx.r3.u32;
}

uint32_t read_file(uint32_t handle, uint32_t buffer, uint32_t length,
                   uint32_t io_status, uint32_t byte_offset_ptr) {
    test_ctx ctx{};
    ctx.r3.u32 = handle;
    ctx.r4.u32 = 0; // event handle
    ctx.r5.u32 = 0; // apc routine
    ctx.r6.u32 = 0; // apc context
    ctx.r7.u32 = io_status;
    ctx.r8.u32 = buffer;
    ctx.r9.u32 = length;
    ctx.r10.u32 = byte_offset_ptr;
    host_function<test_ctx, NtReadFile>(ctx, nullptr);
    return ctx.r3.u32;
}

std::string read_guest_bytes(fixture& fx, uint32_t address, uint32_t length) {
    std::string out;
    for (uint32_t i = 0; i < length; ++i)
        out.push_back(static_cast<char>(fx.memory.read_u8(address + i)));
    return out;
}

void test_create_read_close_file() {
    fixture fx;
    temp_game_dir dir;
    dir.write("data.bin", "HELLO WORLD"); // 11 bytes
    fx.kernel.files().mount("game", dir.path.string());

    uint32_t io_status = 0, handle_out = 0;
    const uint32_t oa =
        plant_open_request(fx, "game:\\data.bin", io_status, handle_out);
    const uint32_t status = create_file(fx, handle_out, oa, io_status);
    assert(status == x_status::success);
    assert(fx.memory.read_u32(io_status + 0) == x_status::success);
    assert(fx.memory.read_u32(io_status + 4) == 1); // FILE_OPENED
    const uint32_t handle = fx.memory.read_u32(handle_out);
    assert(fx.kernel.objects().lookup(handle)->type == object_type::file);
    assert(fx.kernel.files().open_count() == 1);

    // Read the first five bytes into a guest buffer.
    const uint32_t buffer = fixture::scratch + 0x400;
    uint32_t rs = read_file(handle, buffer, 5, io_status, 0);
    assert(rs == x_status::success);
    assert(fx.memory.read_u32(io_status + 4) == 5); // bytes read
    assert(read_guest_bytes(fx, buffer, 5) == "HELLO");

    // A second read from the current position continues where it left off.
    rs = read_file(handle, buffer, 6, io_status, 0);
    assert(rs == x_status::success);
    assert(fx.memory.read_u32(io_status + 4) == 6);
    assert(read_guest_bytes(fx, buffer, 6) == " WORLD");

    // Closing the handle closes the host file.
    test_ctx close{};
    close.r3.u32 = handle;
    host_function<test_ctx, NtClose>(close, nullptr);
    assert(close.r3.u32 == x_status::success);
    assert(fx.kernel.files().open_count() == 0);
    assert(fx.kernel.objects().lookup(handle) == nullptr);
}

void test_read_file_at_explicit_offset() {
    fixture fx;
    temp_game_dir dir;
    dir.write("data.bin", "0123456789");
    fx.kernel.files().mount("game", dir.path.string());
    uint32_t io_status = 0, handle_out = 0;
    const uint32_t oa =
        plant_open_request(fx, "game:\\data.bin", io_status, handle_out);
    create_file(fx, handle_out, oa, io_status);
    const uint32_t handle = fx.memory.read_u32(handle_out);

    // A LARGE_INTEGER byte offset of 4.
    const uint32_t offset_ptr = fixture::scratch + 0x300;
    fx.memory.write_u64(offset_ptr, 4);
    const uint32_t buffer = fixture::scratch + 0x400;
    read_file(handle, buffer, 3, io_status, offset_ptr);
    assert(fx.memory.read_u32(io_status + 4) == 3);
    assert(read_guest_bytes(fx, buffer, 3) == "456");
}

void test_open_missing_file_reports_not_found() {
    fixture fx;
    temp_game_dir dir;
    fx.kernel.files().mount("game", dir.path.string());
    uint32_t io_status = 0, handle_out = 0;
    const uint32_t oa =
        plant_open_request(fx, "game:\\nope.bin", io_status, handle_out);
    const uint32_t status = create_file(fx, handle_out, oa, io_status);
    assert(status == x_status::no_such_file);
    assert(fx.memory.read_u32(io_status + 0) == x_status::no_such_file);
    assert(fx.kernel.files().open_count() == 0);
}

void test_read_file_rejects_non_file_handle() {
    fixture fx;
    // An event handle is not a file handle.
    const uint32_t handle_slot = fixture::scratch;
    const uint32_t event_handle = create_event(fx, handle_slot, 1, 0);
    const uint32_t io_status = fixture::scratch + 0x1C0;
    const uint32_t buffer = fixture::scratch + 0x400;
    const uint32_t status = read_file(event_handle, buffer, 4, io_status, 0);
    assert(status == x_status::invalid_handle);
    assert(fx.memory.read_u32(io_status + 0) == x_status::invalid_handle);
}

// The audio callback takes its argument BY REFERENCE. Registration hands the
// kernel {routine, argument}; the callback is then invoked with r3 pointing at a
// dword holding the argument, and the title's own thunk begins `lwz r3,0(r3)` to
// unwrap it before tail-calling the real routine.
//
// This test IS that thunk: it does the one load the title does, and checks what
// comes out. Passing the argument by value instead makes the title's unwrap read
// one level too far, and the failure surfaces as a fault inside the title's
// mixer with nothing to connect it back to the calling convention - which is
// exactly what it did on Hydro Thunder Hurricane.
void test_audio_callback_argument_is_passed_by_reference() {
    fixture fx;
    const uint32_t registration = fixture::scratch;
    std::string error;
    assert(fx.memory.commit(registration, 0x20, error));

    // What the title registers: its routine, and a pointer to its mixer.
    constexpr uint32_t routine = 0x82001234;
    constexpr uint32_t mixer = 0x40501000;
    fx.memory.write_u32(registration + 0, routine);
    fx.memory.write_u32(registration + 4, mixer);
    const uint32_t driver_out = registration + 0x10;

    test_ctx ctx{};
    ctx.r3.u32 = registration;
    ctx.r4.u32 = driver_out;
    host_function<test_ctx, XAudioRegisterRenderDriverClient>(ctx, nullptr);
    assert(ctx.r3.u32 == x_error::success);
    // The handle is 'AU' | client index, which the title passes back to submit.
    assert(fx.memory.read_u32(driver_out) == kAudioDriverHandleBase);

    const audio_client client = fx.kernel.audio();
    assert(client.registered);
    assert(client.callback == routine);
    assert(client.callback_arg == mixer);

    // The argument the callback is actually invoked with must be a guest
    // address, and NOT the argument itself.
    assert(client.wrapped_callback_arg != 0);
    assert(client.wrapped_callback_arg != client.callback_arg);
    // `lwz r3,0(r3)` - the title's thunk. It has to yield the mixer pointer.
    assert(fx.memory.read_u32(client.wrapped_callback_arg) == mixer);

    // Registering again reuses the cell rather than leaking one per call: a
    // title that re-registers does so on every soft reset.
    constexpr uint32_t other_mixer = 0x40502000;
    fx.memory.write_u32(registration + 4, other_mixer);
    const uint32_t first_cell = client.wrapped_callback_arg;
    ctx.r3.u32 = registration;
    ctx.r4.u32 = driver_out;
    host_function<test_ctx, XAudioRegisterRenderDriverClient>(ctx, nullptr);
    assert(ctx.r3.u32 == x_error::success);
    assert(fx.kernel.audio().wrapped_callback_arg == first_cell);
    assert(fx.memory.read_u32(first_cell) == other_mixer);

    // Unregistering releases it, and leaves nothing for the audio worker to
    // hand to guest code as an argument.
    ctx.r3.u32 = kAudioDriverHandleBase;
    host_function<test_ctx, XAudioUnregisterRenderDriverClient>(ctx, nullptr);
    assert(ctx.r3.u32 == x_error::success);
    assert(!fx.kernel.audio().registered);
    assert(fx.kernel.audio().wrapped_callback_arg == 0);
    assert(fx.kernel.audio().callback == 0);
}

// The registered ordinals must name the functions we think they do; otherwise a
// handler is silently bound to the wrong entry point.
// The frame a title submits is channel-major: every sample of channel 0, then
// every sample of channel 1. Host audio is interleaved, so the submit path has
// to transpose - and getting this backwards is invisible in the counters, which
// only measure how loud the frame is. Only the sound changes, and it changes
// completely: one channel's whole run played as 42 six-channel samples.
//
// The frame here carries a different constant in each channel, which is the
// cheapest input that tells a transpose from a straight copy.
void test_audio_frame_is_transposed_from_channel_major() {
    fixture fx;
    std::vector<float> received;
    fx.kernel.set_audio_sink([&](const float* samples, uint32_t count) {
        received.assign(samples, samples + count);
    });

    const uint32_t frame = fixture::scratch;
    std::string error;
    assert(fx.memory.commit(frame, kAudioFrameBytes, error));
    for (uint32_t channel = 0; channel < kAudioChannels; ++channel) {
        const float value = 0.1f * static_cast<float>(channel + 1);
        uint32_t bits;
        std::memcpy(&bits, &value, sizeof(bits));
        for (uint32_t index = 0; index < kAudioSamplesPerChannel; ++index)
            fx.memory.write_u32(
                frame + (channel * kAudioSamplesPerChannel + index) * 4, bits);
    }

    test_ctx ctx{};
    ctx.r3.u32 = kAudioDriverHandleBase;
    ctx.r4.u32 = frame;
    host_function<test_ctx, XAudioSubmitRenderDriverFrame>(ctx, nullptr);
    assert(ctx.r3.u32 == x_error::success);

    assert(received.size() == kAudioSamplesPerFrame);
    // Interleaved: each group of kAudioChannels holds one sample of every
    // channel, in channel order.
    for (uint32_t index = 0; index < kAudioSamplesPerChannel; ++index) {
        for (uint32_t channel = 0; channel < kAudioChannels; ++channel) {
            const float expected = 0.1f * static_cast<float>(channel + 1);
            const float got = received[index * kAudioChannels + channel];
            assert(got > expected - 1e-6f && got < expected + 1e-6f);
        }
    }

    // Per-channel peaks are attributed by channel, not by position in the
    // frame: channel 5 is the loudest here precisely because it is last.
    for (uint32_t channel = 0; channel < kAudioChannels; ++channel) {
        const float expected = 0.1f * static_cast<float>(channel + 1);
        const float got = fx.kernel.channel_peak(channel);
        assert(got > expected - 1e-6f && got < expected + 1e-6f);
    }
    assert(fx.kernel.audio_frames_submitted() == 1);
    assert(fx.kernel.audio_frames_with_signal() == 1);

    // A frame of silence still counts as submitted, and still as silent - the
    // distinction the counters exist to make.
    fx.memory.zero_block(frame, kAudioFrameBytes);
    host_function<test_ctx, XAudioSubmitRenderDriverFrame>(ctx, nullptr);
    assert(fx.kernel.audio_frames_submitted() == 2);
    assert(fx.kernel.audio_frames_with_signal() == 1);
}

void test_registered_ordinals_match_export_table() {
    struct entry { uint16_t ordinal; const char* name; };
    const entry expected[] = {
        {3, "DbgPrint"},
        {9, "ExAllocatePool"},
        {10, "ExAllocatePoolWithTag"},
        {11, "ExAllocatePoolTypeWithTag"},
        {15, "ExFreePool"},
        {131, "KeQueryPerformanceFrequency"},
        {204, "NtAllocateVirtualMemory"},
        {220, "NtFreeVirtualMemory"},
        {283, "RtlCompareMemoryUlong"},
        {43, "InterlockedFlushSList"},
        {44, "InterlockedPopEntrySList"},
        {45, "InterlockedPushEntrySList"},
        {77, "KeAcquireSpinLockAtRaisedIrql"},
        {95, "KeEnterCriticalRegion"},
        {125, "KeLeaveCriticalRegion"},
        {133, "KeRaiseIrqlToDpcLevel"},
        {137, "KeReleaseSpinLockFromRaisedIrql"},
        {177, "KfAcquireSpinLock"},
        {179, "KfLowerIrql"},
        {180, "KfReleaseSpinLock"},
        {293, "RtlEnterCriticalSection"},
        {302, "RtlInitializeCriticalSection"},
        {303, "RtlInitializeCriticalSectionAndSpinCount"},
        {304, "RtlLeaveCriticalSection"},
        {321, "RtlTryEnterCriticalSection"},
        {1, "DbgBreakPoint"},
        {33, "FscSetCacheElementCount"},
        {40, "HalReturnToFirmware"},
        {82, "KeBugCheck"},
        {83, "KeBugCheckEx"},
        {93, "KeEnableFpuExceptions"},
        {102, "KeGetCurrentProcessType"},
        {294, "RtlFillMemoryUlong"},
        {300, "RtlInitAnsiString"},
        {301, "RtlInitUnicodeString"},
        {112, "KeInitializeEvent"},
        {116, "KeInitializeSemaphore"},
        {127, "KePulseEvent"},
        {136, "KeReleaseSemaphore"},
        {143, "KeResetEvent"},
        {157, "KeSetEvent"},
        {206, "NtClearEvent"},
        {207, "NtClose"},
        {209, "NtCreateEvent"},
        {218, "NtDuplicateObject"},
        {226, "NtPulseEvent"},
        {246, "NtSetEvent"},
        {261, "ObDereferenceObject"},
        {272, "ObReferenceObjectByHandle"},
        {186, "MmAllocatePhysicalMemoryEx"},
        {189, "MmFreePhysicalMemory"},
        {190, "MmGetPhysicalAddress"},
        {196, "MmQueryAddressProtect"},
        {198, "MmQueryStatistics"},
        {199, "MmSetAddressProtect"},
        {210, "NtCreateFile"},
        {223, "NtOpenFile"},
        {240, "NtReadFile"},
    };
    for (const entry& e : expected) {
        const kernel_export* found =
            find_kernel_export(kernel_library::xboxkrnl, e.ordinal);
        assert(found != nullptr);
        assert(std::string(found->name) == e.name);
    }
}

// Registration must move exactly these imports from missing to implemented.
void test_registration_marks_imports_implemented() {
    xex_import_library library;
    library.name = "xboxkrnl.exe";
    for (uint16_t ordinal : {3, 9, 10, 11, 15, 131, 204, 220, 283}) {
        xex_import import;
        import.ordinal = ordinal;
        import.record_type = 1;
        library.imports.push_back(import);
    }
    kernel_registry registry;
    register_kernel_handlers(registry);

    // One entry point we have not implemented, to prove it stays missing.
    // Found by scanning rather than hardcoded, so implementing more handlers
    // cannot silently invalidate this test (it previously named ExCreateThread,
    // which later became implemented).
    uint16_t unimplemented_ordinal = 0;
    for (uint16_t ordinal = 1; ordinal < 1000; ++ordinal) {
        const kernel_export* exported =
            find_kernel_export(kernel_library::xboxkrnl, ordinal);
        if (exported != nullptr && exported->is_function &&
            !registry.is_implemented(kernel_library::xboxkrnl, ordinal)) {
            unimplemented_ordinal = ordinal;
            break;
        }
    }
    assert(unimplemented_ordinal != 0 && "expected some ordinal to be missing");
    const kernel_export* missing_export =
        find_kernel_export(kernel_library::xboxkrnl, unimplemented_ordinal);

    xex_import unimplemented;
    unimplemented.ordinal = unimplemented_ordinal;
    unimplemented.record_type = 1;
    library.imports.push_back(unimplemented);

    const kernel_requirements requirements = registry.resolve({library});
    assert(requirements.total() == 10);
    assert(requirements.implemented_count() == 9);
    assert(requirements.missing_count() == 1);
    assert(requirements.missing_names().size() == 1);
    assert(requirements.missing_names()[0] ==
           std::string("xboxkrnl.exe!") + missing_export->name);
}

// ExCreateThread's fourth argument is the title's own thread trampoline. When
// it is set, that is what runs on the new thread, taking the entry point and
// its context as arguments - it establishes the per-thread state the title's
// runtime needs before the entry point sees it. Calling the entry point
// directly instead leaves that state uninitialised, and the thread faults a
// call or two in, a long way from anything that names the cause.
// ExCreateThread takes seven arguments, so it needs the full register set
// rather than the three-argument shorthand the other tests use.
uint32_t create_thread(uint32_t handle_out, uint32_t stack_size,
                       uint32_t id_out, uint32_t xapi_startup,
                       uint32_t entry, uint32_t context, uint32_t flags) {
    test_ctx ctx{};
    ctx.r3.u32 = handle_out;
    ctx.r4.u32 = stack_size;
    ctx.r5.u32 = id_out;
    ctx.r6.u32 = xapi_startup;
    ctx.r7.u32 = entry;
    ctx.r8.u32 = context;
    ctx.r9.u32 = flags;
    host_function<test_ctx, ExCreateThread>(ctx, nullptr);
    return ctx.r3.u32;
}

void test_thread_creation_honours_the_title_trampoline() {
    fixture fx;
    guest_thread launched;
    int launches = 0;
    fx.kernel.set_guest_thread_launcher([&](const guest_thread& thread) {
        launched = thread;
        ++launches;
        return true;
    });

    const uint32_t handle_out = fixture::scratch;
    const uint32_t id_out = fixture::scratch + 8;
    const uint32_t trampoline = 0x8202A8A0;
    const uint32_t entry = 0x82340000;
    const uint32_t context = 0x40001234;

    assert(create_thread(handle_out, 0, id_out, trampoline, entry,
                                   context, 0) == x_status::success);
    assert(launches == 1);
    assert(launched.xapi_startup == trampoline);
    // The entry point and its context are carried through untouched: the
    // trampoline needs both to make the call itself.
    assert(launched.start_address == entry);
    assert(launched.start_context == context);

    // A title that supplies no trampoline gets its entry point called direct.
    assert(create_thread(handle_out, 0, id_out, 0, entry, context,
                                   0) == x_status::success);
    assert(launches == 2);
    assert(launched.xapi_startup == 0);
    assert(launched.start_address == entry);
}

// A title that closes a thread handle frees the object-table slot, and the next
// object created gets that slot - so the same handle value names a different
// thread. The thread table never forgets an entry, so a lookup by handle finds
// the FIRST one recorded under it: the thread that has already finished. Create
// must therefore launch the entry it just made rather than look it up again.
//
// Geometry Wars does exactly this. It creates and closes three workers, then
// creates its audio engine's; before this was fixed the audio worker launched
// as a duplicate of an earlier thread, so the engine's update loop never ran,
// its per-update tick never advanced, every cached gain in its mixer stayed at
// the zero it was initialised with, and the title submitted 5.1 frames of
// perfect silence at exactly the right rate.
void test_thread_creation_launches_the_thread_it_created() {
    fixture fx;
    std::vector<uint32_t> launched;
    fx.kernel.set_guest_thread_launcher([&](const guest_thread& thread) {
        launched.push_back(thread.start_address);
        return true;
    });

    const uint32_t handle_out = fixture::scratch;
    const uint32_t first_entry = 0x82340000;
    const uint32_t second_entry = 0x82350000;

    assert(create_thread(handle_out, 0, 0, 0, first_entry, 0, 0) ==
           x_status::success);
    const uint32_t first_handle = fx.memory.read_u32(handle_out);

    // The title closes the handle it was given, freeing the slot.
    assert(fx.kernel.objects().close(first_handle));

    assert(create_thread(handle_out, 0, 0, 0, second_entry, 0, 0) ==
           x_status::success);
    // The recycled slot hands out the same handle value again - which is the
    // whole point of the test, so assert it rather than assume it.
    assert(fx.memory.read_u32(handle_out) == first_handle);

    assert(launched.size() == 2);
    assert(launched[0] == first_entry);
    assert(launched[1] == second_entry); // not first_entry a second time
}

// The same recycling makes a handle-keyed lookup ambiguous, so resuming by
// handle has to reject an entry whose handle no longer names it. Otherwise
// NtResumeThread on a recycled handle starts a thread that already ran instead
// of the suspended one the caller meant.
void test_resume_ignores_a_thread_whose_handle_was_recycled() {
    fixture fx;
    std::vector<uint32_t> launched;
    fx.kernel.set_guest_thread_launcher([&](const guest_thread& thread) {
        launched.push_back(thread.start_address);
        return true;
    });

    const uint32_t handle_out = fixture::scratch;
    const uint32_t first_entry = 0x82340000;
    assert(create_thread(handle_out, 0, 0, 0, first_entry, 0, 0) ==
           x_status::success);
    const uint32_t handle = fx.memory.read_u32(handle_out);
    assert(launched.size() == 1);

    // Close it, then take the slot with an object that is not a thread at all.
    assert(fx.kernel.objects().close(handle));
    const uint32_t reused = fx.kernel.objects().add(object_type::event, 0x30001000);
    assert(reused == handle);

    // The handle now names the event, so no thread answers to it.
    assert(fx.kernel.find_guest_thread(handle) == nullptr);
    test_ctx ctx{};
    ctx.r3.u32 = handle;
    ctx.r4.u32 = 0;
    host_function<test_ctx, NtResumeThread>(ctx, nullptr);
    assert(ctx.r3.u32 == x_status::invalid_handle);
    assert(launched.size() == 1); // nothing was started a second time
}

// A thread asking for no particular stack size gets the executable's declared
// default, not a fixed one. Alien Breed's threads want 256 KiB and would
// otherwise run on a quarter of that, overrunning into whatever the heap
// handed out below them.
void test_thread_stack_defaults_to_the_executable_size() {
    fixture fx;
    guest_thread launched;
    fx.kernel.set_guest_thread_launcher([&](const guest_thread& thread) {
        launched = thread;
        return true;
    });
    fx.kernel.set_default_stack_size(0x40000);

    const uint32_t handle_out = fixture::scratch;
    assert(create_thread(handle_out, 0, 0, 0, 0x82340000, 0, 0) ==
           x_status::success);
    assert(launched.stack_limit - launched.stack_base == 0x40000);

    // An explicit size still wins over the default.
    assert(create_thread(handle_out, 0x8000, 0, 0, 0x82340000, 0,
                                   0) == x_status::success);
    assert(launched.stack_limit - launched.stack_base == 0x8000);
}

// Mutants are the console's mutexes. Two properties matter and both are easy
// to get backwards: creating one "owned" leaves it UNsignalled (the creator
// holds it, so nobody else may take it), and releasing it signals it so
// exactly one waiter can.
void test_mutants_signal_on_release() {
    fixture fx;
    const uint32_t handle_out = fixture::scratch;

    test_ctx ctx{};
    ctx.r3.u32 = handle_out;
    ctx.r4.u32 = 0;
    ctx.r5.u32 = 1; // created owned
    host_function<test_ctx, NtCreateMutant>(ctx, nullptr);
    assert(ctx.r3.u32 == x_status::success);
    const uint32_t owned = fx.memory.read_u32(handle_out);
    assert(owned != 0);
    const kernel_object* object = fx.kernel.objects().lookup(owned);
    assert(object != nullptr && object->type == object_type::mutant);
    assert(fx.memory.read_u32(object->guest_object + 4) == 0);

    // Releasing it makes it available.
    ctx = {};
    ctx.r3.u32 = owned;
    host_function<test_ctx, NtReleaseMutant>(ctx, nullptr);
    assert(ctx.r3.u32 == x_status::success);
    assert(fx.memory.read_u32(object->guest_object + 4) == 1);

    // Created unowned, it is available immediately.
    ctx = {};
    ctx.r3.u32 = handle_out;
    ctx.r5.u32 = 0;
    host_function<test_ctx, NtCreateMutant>(ctx, nullptr);
    const kernel_object* free_mutant =
        fx.kernel.objects().lookup(fx.memory.read_u32(handle_out));
    assert(fx.memory.read_u32(free_mutant->guest_object + 4) == 1);

    // A release on something that is not a mutant is refused rather than
    // signalling whatever happens to live there.
    ctx = {};
    ctx.r3.u32 = 0xF8000000u + 0x400;
    host_function<test_ctx, NtReleaseMutant>(ctx, nullptr);
    assert(ctx.r3.u32 == x_status::invalid_handle);
}

// A worker thread blocks on "work available" and "shut down" together, and
// acts on which one fired. Reporting the wrong index sends it down the wrong
// branch; consuming an auto-reset event that did not fire loses a wakeup.
void test_waiting_on_several_objects() {
    fixture fx;
    const uint32_t array_ptr = fixture::scratch + 0x100;
    const uint32_t zero_timeout = fixture::scratch + 0x200;
    fx.memory.write_u64(zero_timeout, 0); // poll: do not block

    // Two auto-reset events, the second signalled.
    const uint32_t first = fx.kernel.heap().allocate(0x18, 16);
    const uint32_t second = fx.kernel.heap().allocate(0x18, 16);
    for (uint32_t event : {first, second}) {
        fx.memory.zero_block(event, 0x18);
        fx.memory.write_u8(event, x_dispatcher::event_synchronization);
    }
    fx.memory.write_u32(second + 4, 1);
    fx.memory.write_u32(array_ptr + 0, first);
    fx.memory.write_u32(array_ptr + 4, second);

    // "Any" returns the index of the object that satisfied it, and consumes
    // only that one.
    test_ctx ctx{};
    ctx.r3.u32 = 2;
    ctx.r4.u32 = array_ptr;
    ctx.r5.u32 = x_wait::wait_any;
    ctx.r9.u32 = zero_timeout;
    host_function<test_ctx, KeWaitForMultipleObjects>(ctx, nullptr);
    assert(ctx.r3.u32 == x_wait::object_0 + 1);
    assert(fx.memory.read_u32(second + 4) == 0);

    // With neither signalled, a zero timeout times out rather than blocking.
    ctx = {};
    ctx.r3.u32 = 2;
    ctx.r4.u32 = array_ptr;
    ctx.r5.u32 = x_wait::wait_any;
    ctx.r9.u32 = zero_timeout;
    host_function<test_ctx, KeWaitForMultipleObjects>(ctx, nullptr);
    assert(ctx.r3.u32 == x_wait::timeout);

    // "All" must not consume anything unless every object is ready - taking
    // the ready ones and then blocking would lose them for good.
    fx.memory.write_u32(second + 4, 1);
    ctx = {};
    ctx.r3.u32 = 2;
    ctx.r4.u32 = array_ptr;
    ctx.r5.u32 = x_wait::wait_all;
    ctx.r9.u32 = zero_timeout;
    host_function<test_ctx, KeWaitForMultipleObjects>(ctx, nullptr);
    assert(ctx.r3.u32 == x_wait::timeout);
    assert(fx.memory.read_u32(second + 4) == 1 && "signal must survive");

    // Both ready: it succeeds and takes both.
    fx.memory.write_u32(first + 4, 1);
    ctx = {};
    ctx.r3.u32 = 2;
    ctx.r4.u32 = array_ptr;
    ctx.r5.u32 = x_wait::wait_all;
    ctx.r9.u32 = zero_timeout;
    host_function<test_ctx, KeWaitForMultipleObjects>(ctx, nullptr);
    assert(ctx.r3.u32 == x_wait::object_0);
    assert(fx.memory.read_u32(first + 4) == 0);
    assert(fx.memory.read_u32(second + 4) == 0);
}

void test_timers_signal_when_due() {
    fixture fx;
    const uint32_t handle_out = fixture::scratch;
    const uint32_t due_ptr = fixture::scratch + 0x100;

    test_ctx ctx{};
    ctx.r3.u32 = handle_out;
    ctx.r5.u32 = 0; // notification timer: stays signalled once it fires
    host_function<test_ctx, NtCreateTimer>(ctx, nullptr);
    assert(ctx.r3.u32 == x_status::success);
    const uint32_t handle = fx.memory.read_u32(handle_out);
    const kernel_object* timer = fx.kernel.objects().lookup(handle);
    assert(timer != nullptr);
    // A timer starts unsignalled: it has not come due.
    assert(fx.memory.read_u32(timer->guest_object + 4) == 0);

    // Due in 10ms, expressed the way the console does: negative 100ns ticks.
    fx.memory.write_u64(due_ptr, static_cast<uint64_t>(-100000ll));
    ctx = {};
    ctx.r3.u32 = handle;
    ctx.r4.u32 = due_ptr;
    host_function<test_ctx, NtSetTimerEx>(ctx, nullptr);
    assert(ctx.r3.u32 == x_status::success);

    for (int i = 0; i < 200 && fx.memory.read_u32(timer->guest_object + 4) == 0; ++i)
        std::this_thread::sleep_for(std::chrono::milliseconds(5));
    assert(fx.memory.read_u32(timer->guest_object + 4) == 1);

    // Cancelling a timer that has already been re-armed must stop it firing
    // again, which is what the generation count is for.
    ctx = {};
    ctx.r3.u32 = handle;
    ctx.r4.u32 = due_ptr;
    host_function<test_ctx, NtSetTimerEx>(ctx, nullptr);
    assert(fx.memory.read_u32(timer->guest_object + 4) == 0);
    ctx = {};
    ctx.r3.u32 = handle;
    host_function<test_ctx, NtCancelTimer>(ctx, nullptr);
    assert(ctx.r3.u32 == x_status::success);
    std::this_thread::sleep_for(std::chrono::milliseconds(60));
    assert(fx.memory.read_u32(timer->guest_object + 4) == 0);
}

// A semaphore counts places, and that is the property a "signalled or not"
// implementation gets wrong: releasing two must admit exactly two waiters and
// then block the third. Geometry Wars 2 creates its semaphores by handle, so
// the count has to live in the same dispatcher field the waits already read.
void test_semaphores_count_their_releases() {
    fixture fx;
    const uint32_t handle_out = fixture::scratch;
    const uint32_t previous_out = fixture::scratch + 0x10;
    const uint32_t poll = fixture::scratch + 0x20;
    fx.memory.write_u64(poll, 0); // a zero timeout: never block

    test_ctx ctx{};
    ctx.r3.u32 = handle_out;
    ctx.r4.u32 = 0;
    ctx.r5.u32 = 0; // empty to begin with
    ctx.r6.u32 = 4; // ceiling
    host_function<test_ctx, NtCreateSemaphore>(ctx, nullptr);
    assert(ctx.r3.u32 == x_status::success);
    const uint32_t handle = fx.memory.read_u32(handle_out);
    const kernel_object* object = fx.kernel.objects().lookup(handle);
    assert(object != nullptr && object->type == object_type::semaphore);
    assert(fx.memory.read_u32(object->guest_object + 4) == 0);
    assert(fx.memory.read_u32(object->guest_object + 0x10) == 4);

    // Two releases, so two waits may pass.
    ctx = {};
    ctx.r3.u32 = handle;
    ctx.r4.u32 = 2;
    ctx.r5.u32 = previous_out;
    host_function<test_ctx, NtReleaseSemaphore>(ctx, nullptr);
    assert(ctx.r3.u32 == x_status::success);
    assert(fx.memory.read_u32(previous_out) == 0);
    assert(fx.memory.read_u32(object->guest_object + 4) == 2);

    for (int i = 0; i < 2; ++i) {
        ctx = {};
        ctx.r3.u32 = handle;
        ctx.r6.u32 = poll;
        host_function<test_ctx, NtWaitForSingleObjectEx>(ctx, nullptr);
        assert(ctx.r3.u32 == x_wait::object_0);
    }
    assert(fx.memory.read_u32(object->guest_object + 4) == 0);
    ctx = {};
    ctx.r3.u32 = handle;
    ctx.r6.u32 = poll;
    host_function<test_ctx, NtWaitForSingleObjectEx>(ctx, nullptr);
    assert(ctx.r3.u32 == x_wait::timeout);

    // Signal-and-wait is one step: the semaphore gains a place and the event it
    // waits on is already signalled, so it returns satisfied. Signalling by
    // assignment rather than increment would be invisible here but would lose a
    // place whenever the queue was not empty, so the count is checked too.
    ctx = {};
    ctx.r3.u32 = handle;
    ctx.r4.u32 = 2;
    ctx.r5.u32 = 0;
    host_function<test_ctx, NtReleaseSemaphore>(ctx, nullptr);

    const uint32_t event = fx.kernel.heap().allocate(0x18, 16);
    fx.memory.zero_block(event, 0x18);
    fx.memory.write_u8(event, x_dispatcher::event_notification);
    fx.memory.write_u32(event + 4, 1); // already signalled
    const uint32_t event_handle = fx.kernel.objects().add(object_type::event, event);

    ctx = {};
    ctx.r3.u32 = handle;        // signal this
    ctx.r4.u32 = event_handle;  // wait on this
    ctx.r7.u32 = poll;
    host_function<test_ctx, NtSignalAndWaitForSingleObjectEx>(ctx, nullptr);
    assert(ctx.r3.u32 == x_wait::object_0);
    assert(fx.memory.read_u32(object->guest_object + 4) == 3);

    // An unknown handle is refused rather than signalling whatever is there.
    ctx = {};
    ctx.r3.u32 = 0xF8000000u + 0x400;
    host_function<test_ctx, NtReleaseSemaphore>(ctx, nullptr);
    assert(ctx.r3.u32 == x_status::invalid_handle);
}

} // namespace

int main() {
    test_mutants_signal_on_release();
    test_semaphores_count_their_releases();
    test_waiting_on_several_objects();
    test_timers_signal_when_due();
    test_thread_creation_honours_the_title_trampoline();
    test_thread_creation_launches_the_thread_it_created();
    test_resume_ignores_a_thread_whose_handle_was_recycled();
    test_audio_callback_argument_is_passed_by_reference();
    test_audio_frame_is_transposed_from_channel_major();
    test_thread_stack_defaults_to_the_executable_size();
    test_ex_allocate_pool_small_has_header();
    test_ex_allocate_pool_large_is_page_aligned();
    test_ex_allocate_pool_with_tag_stores_tag();
    test_two_allocations_do_not_overlap();
    test_rtl_compare_memory_ulong_counts_matching_bytes();
    test_rtl_compare_memory_ulong_truncates_length();
    test_rtl_compare_memory_ulong_immediate_mismatch();
    test_ke_query_performance_frequency();
    test_dbg_print_records_trimmed_string();
    test_dbg_print_null_format_is_rejected();
    test_nt_allocate_virtual_memory_success();
    test_nt_allocate_virtual_memory_commit_honours_reserved_base();
    test_nt_allocate_virtual_memory_picks_the_region_by_page_size();
    test_nt_free_virtual_memory_returns_to_the_right_region();
    test_nt_allocate_virtual_memory_rejects_bad_input();
    test_nt_free_virtual_memory_round_trip();
    test_nt_free_virtual_memory_unallocated();
    test_critical_section_init();
    test_critical_section_init_spin_count();
    test_critical_section_enter_leave();
    test_critical_section_recursive();
    test_critical_section_try_enter();
    test_critical_section_excludes_another_thread();
    test_slist_push_and_pop();
    test_slist_pop_empty_returns_zero();
    test_slist_flush();
    test_spinlock_records_its_owner_and_releases();
    test_spinlock_excludes_two_threads();
    test_rtl_fill_memory_ulong();
    test_rtl_init_ansi_string();
    test_rtl_init_unicode_string();
    test_ke_get_current_process_type();
    test_bug_check_records_termination();
    test_hal_return_to_firmware_records_termination();
    test_trivial_stubs_are_safe();
    test_nt_create_event_and_signal_by_handle();
    test_ke_event_by_pointer();
    test_semaphore_init_and_release();
    test_nt_close_and_ob_reference();
    test_ob_dereference_ignores_sentinel();
    test_nt_duplicate_object();
    test_mm_allocate_and_physical_address();
    test_mm_allocate_physical_addresses_round_trip();
    test_mm_allocate_rejects_bad_protection();
    test_mm_allocate_large_page_rounding();
    test_mm_protection_stubs();
    test_mm_query_statistics();
    test_create_read_close_file();
    test_read_file_at_explicit_offset();
    test_open_missing_file_reports_not_found();
    test_read_file_rejects_non_file_handle();
    test_registered_ordinals_match_export_table();
    test_registration_marks_imports_implemented();
    std::printf("kernel_handlers_test: all checks passed\n");
    return 0;
}
