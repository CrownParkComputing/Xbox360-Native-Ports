#include "whitty_xenon/kernel_handlers.h"

#include <algorithm>
#include <atomic>
#include <cstring>
#include "whitty_xenon/apu/xma_decoder.h"
#include "whitty_xenon/apu/xma_pcm_cache.h"
#include <memory>

#include "whitty_xenon/apu/xma.h"

#include "whitty_xenon/gpu/pm4.h"
#include "whitty_xenon/host_function.h"
#include "whitty_xenon/thread_environment.h"

#include <chrono>

#include "whitty_xenon/kernel_state.h"

#include <cstdint>
#include <cstdio>
#include <filesystem>
#include <fstream>
#include <set>
#include <mutex>
#include <map>
#include <thread>
#include <string>
#include <system_error>
#include <utility>
#include <vector>

namespace whitty_xenon {
namespace {

// Rounds `value` up to a multiple of `alignment`, which is always a power of
// two here (a page size).
uint32_t round_up(uint32_t value, uint32_t alignment) noexcept {
    return (value + alignment - 1) & ~(alignment - 1);
}

// The kernel pool header Xenia writes ahead of a small allocation: eight bytes,
// with a marker byte at offset 2 and a big-endian tag at offset 4. ExFreePool
// relies on its size to recover the allocation base.
constexpr uint32_t kPoolHeaderSize = 8;

// The largest allocation that still gets a header. Above it, the console hands
// back a page-aligned block with no header at all.
constexpr uint32_t kPoolHeaderLimit = 0xFD8;

constexpr uint32_t kSmallPageSize = 0x1000;  // 4 KiB
constexpr uint32_t kLargePageSize = 0x10000; // 64 KiB

} // namespace

uint32_t ExAllocatePoolTypeWithTag(uint32_t size, uint32_t tag,
                                   uint32_t pool_selector) {
    (void)pool_selector; // one heap here, so the pool selector does not matter
    kernel_state* kernel = active_kernel();
    if (size <= kPoolHeaderLimit) {
        const uint32_t address =
            kernel->heap().allocate(size + kPoolHeaderSize, 64);
        if (address == 0) return 0;
        // A 64-byte-aligned base plus 8 is never page-aligned, so the header's
        // presence is unambiguous to ExFreePool.
        kernel->memory().write_u8(address + 2, 170);
        kernel->memory().write_u32(address + 4, tag);
        return address + kPoolHeaderSize;
    }
    return kernel->heap().allocate(size, kSmallPageSize);
}

uint32_t ExAllocatePoolWithTag(uint32_t size, uint32_t tag) {
    return ExAllocatePoolTypeWithTag(size, tag, 0);
}

uint32_t ExAllocatePool(uint32_t size) {
    constexpr uint32_t none_tag = 0x656E6F4E; // 'None'
    return ExAllocatePoolTypeWithTag(size, none_tag, 0);
}

void ExFreePool(uint32_t base_address) {
    if (base_address == 0) return;
    kernel_state* kernel = active_kernel();
    // A page-aligned block was allocated without a header; anything else sits
    // one header-length past its real base.
    if ((base_address & (kSmallPageSize - 1)) == 0)
        kernel->heap().free(base_address);
    else
        kernel->heap().free(base_address - kPoolHeaderSize);
}

uint32_t NtAllocateVirtualMemory(uint32_t base_ptr, uint32_t size_ptr,
                                 uint32_t alloc_type, uint32_t protect,
                                 uint32_t debug_memory) {
    (void)protect;      // execute bits and page protection are not modelled yet
    (void)debug_memory; // no separate devkit memory region
    if (base_ptr == 0 || size_ptr == 0) return x_status::invalid_parameter;

    kernel_state* kernel = active_kernel();
    guest_memory& memory = kernel->memory();
    const uint32_t requested_base = memory.read_u32(base_ptr);
    const uint32_t requested_size = memory.read_u32(size_ptr);

    // A zero-length request, a request with none of the allocation bits, or a
    // RESET mixed with anything else are all rejected by the console.
    if (requested_size == 0) return x_status::invalid_parameter;
    if ((alloc_type & (x_mem::commit | x_mem::reset | x_mem::reserve)) == 0)
        return x_status::invalid_parameter;
    if ((alloc_type & x_mem::reset) && (alloc_type & ~x_mem::reset))
        return x_status::invalid_parameter;

    // Which region this belongs in. A specific base names its own heap and
    // that heap's page size; a fresh request picks the region from
    // MEM_LARGE_PAGES. This is not just about rounding: the two regions are at
    // different addresses, and a title's allocator reads the top bits of a
    // pointer to decide which of its free paths owns it - so a 4 KiB-page
    // allocation handed back from the 0x40000000 heap sends the title down the
    // wrong path later, with no way for it to notice. Xenia splits the same
    // way (LookupHeapByType).
    guest_heap* target_heap = nullptr;
    uint32_t page_size;
    if (requested_base != 0) {
        target_heap = kernel->heap_for_address(requested_base);
        page_size = (target_heap != nullptr &&
                     target_heap == &kernel->heap_for_page_size(kSmallPageSize))
                        ? kSmallPageSize
                        : kLargePageSize;
    } else {
        page_size =
            (alloc_type & x_mem::large_pages) ? kLargePageSize : kSmallPageSize;
        target_heap = &kernel->heap_for_page_size(page_size);
    }

    // Some titles pass a negative size; take its magnitude, as the console does.
    uint32_t adjusted_size =
        static_cast<int32_t>(requested_size) < 0
            ? static_cast<uint32_t>(-static_cast<int32_t>(requested_size))
            : requested_size;
    adjusted_size = round_up(adjusted_size, page_size);

    uint32_t address;
    if (requested_base != 0) {
        // A specific base is almost always a commit of a sub-range within an
        // earlier reservation - the title's own bookkeeping does pointer
        // arithmetic into that reservation, so it must get back the exact
        // address it asked for, not an unrelated block. The enclosing range
        // is already accounted for in the heap from the reserving call, so
        // this only needs to make the sub-range's pages resident.
        std::string commit_error;
        if (!memory.commit(requested_base, adjusted_size, commit_error))
            return x_status::no_memory;
        address = requested_base;
    } else {
        address = target_heap->allocate(adjusted_size, page_size);
        if (address == 0) return x_status::no_memory;
    }

    if ((alloc_type & x_mem::nozero) == 0)
        memory.zero_block(address, adjusted_size);

    memory.write_u32(base_ptr, address);
    memory.write_u32(size_ptr, adjusted_size);
    return x_status::success;
}

// NtFreeVirtualMemory(base_ptr, size_ptr, free_type, debug_memory)
//
// DECOMMIT and RELEASE are NOT the same operation, and treating them as one -
// which this did - refuses every decommit a title makes.
//
//   RELEASE  (0x8000) gives the whole reservation back. The address must be an
//                     allocation base, and the whole thing goes.
//   DECOMMIT (0x4000) releases the PAGES of a sub-range and keeps the
//                     reservation. The address is a page address inside an
//                     allocation, not necessarily its base.
//
// Because DECOMMIT went to `heap->free(base)`, which only accepts an
// allocation base, every decommit of a sub-range returned UNSUCCESSFUL - and a
// refusal rots exactly like a fake success (docs/BRINGUP.md, "The recurring bug
// class"). Measured on BUBBLE BOBBLE Neo!: 3 decommits, 0 succeeded; 2
// releases, both succeeded. Worse, a decommit that HAD matched an allocation
// base would have freed the entire reservation the title still meant to use.
//
// This runtime has no commit model to undo - `guest_memory` has commit() and no
// decommit() - so a decommit keeps the pages readable. That divergence is
// deliberate and it is the LENIENT direction: a title that reads decommitted
// memory sees its own stale bytes instead of faulting, where the alternative on
// offer was telling it the call failed. Nothing is freed, so nothing that is
// still in use can be pulled out from underneath it. If a title is ever seen to
// depend on a decommitted page faulting, this needs a real decommit rather than
// a wider lie. Semantics follow Xenia's xboxkrnl_memory.cc.
uint32_t NtFreeVirtualMemory(uint32_t base_ptr, uint32_t size_ptr,
                             uint32_t free_type, uint32_t debug_memory) {
    (void)debug_memory;
    if (base_ptr == 0 || size_ptr == 0) return x_status::invalid_parameter;

    kernel_state* kernel = active_kernel();
    guest_memory& memory = kernel->memory();
    const uint32_t base = memory.read_u32(base_ptr);
    if (base == 0) return x_status::memory_not_allocated;

    // Back to whichever region it came from, not always the 64 KiB one.
    guest_heap* heap = kernel->heap_for_address(base);
    if (heap == nullptr) return x_status::memory_not_allocated;

    if (free_type == x_mem::decommit) {
        // The reservation stays. Report the size rounded up to the page size of
        // whichever region this address came from - the two heaps differ, and
        // that size is what the caller reads back for its own accounting.
        const uint32_t page = kernel->has_small_page_heap() &&
                                      heap == &kernel->small_page_heap()
                                  ? kSmallPageSize
                                  : kLargePageSize;
        uint32_t size = memory.read_u32(size_ptr);
        if (size == 0) size = heap->size_of(base);
        const uint32_t rounded = ((size + page - 1) / page) * page;
        memory.write_u32(base_ptr, base);
        memory.write_u32(size_ptr, rounded);
        return x_status::success;
    }

    const uint32_t freed_size = heap->size_of(base);
    if (!heap->free(base)) return x_status::unsuccessful;

    memory.write_u32(base_ptr, base);
    memory.write_u32(size_ptr, freed_size);
    return x_status::success;
}

uint32_t RtlCompareMemoryUlong(uint32_t source, uint32_t length,
                               uint32_t pattern) {
    guest_memory& memory = active_kernel()->memory();
    uint32_t matched = 0;
    // read_u32 already returns host-order, so comparing against the host-order
    // pattern is equivalent to Xenia swapping the pattern to guest order and
    // comparing raw bytes.
    for (uint32_t remaining = length & ~3u; remaining != 0; remaining -= 4) {
        if (memory.read_u32(source + matched) != pattern) break;
        matched += 4;
    }
    return matched;
}

uint32_t KeQueryPerformanceFrequency() {
    return 50000000u; // Xbox 360 timebase; Clock::set_guest_tick_frequency
}

uint32_t DbgPrint(uint32_t format_ptr) {
    if (format_ptr == 0) return x_status::invalid_parameter;
    guest_memory& memory = active_kernel()->memory();

    std::string message;
    for (uint32_t address = format_ptr;; ++address) {
        const uint8_t character = memory.read_u8(address);
        if (character == 0) break;
        message.push_back(static_cast<char>(character));
        if (message.size() >= 4096) break; // guard a missing terminator
    }
    // Trim trailing whitespace, matching Xenia's DbgPrint.
    while (!message.empty()) {
        const char last = message.back();
        if (last != '\n' && last != '\r' && last != ' ' && last != '\t') break;
        message.pop_back();
    }
    active_kernel()->debug_print(std::move(message));
    return x_status::success;
}

namespace {

// Field offsets within a guest X_RTL_CRITICAL_SECTION (28 bytes total).
constexpr uint32_t kCsHeaderType = 0x00;   // u8, X_DISPATCHER_FLAGS
constexpr uint32_t kCsHeaderSpin = 0x01;   // u8, spin count / 256
constexpr uint32_t kCsSignalState = 0x04;  // u32
constexpr uint32_t kCsLockCount = 0x10;    // u32, -1 when unlocked
constexpr uint32_t kCsRecursion = 0x14;    // u32, 0 when unlocked
constexpr uint32_t kCsOwningThread = 0x18; // u32, 0 when unlocked

// X_DISPATCHER_FLAGS::DISPATCHER_AUTO_RESET_EVENT, what a fresh CS reports.
constexpr uint8_t kAutoResetEvent = 1;

// "Held by nobody", what a released critical section stores in its owner field.
constexpr uint32_t kUnowned = 0;

// Field offsets within a guest X_SLIST_HEADER (8 bytes total).
constexpr uint32_t kSListHead = 0x00;     // u32, first entry (guest address)
constexpr uint32_t kSListDepth = 0x04;    // u16
constexpr uint32_t kSListSequence = 0x06; // u16

// IRQL levels the kernel names. PASSIVE is where a title's threads run;
// DISPATCH is what raising to "DPC level" and taking a spin lock both reach.
constexpr uint32_t kPassiveLevel = 0;
constexpr uint32_t kDispatchLevel = 2;

// The calling thread's guest environment: the KPCR r13 held and the KTHREAD it
// names. Both zero when the caller is not running guest code - a unit test
// calling a handler directly, for instance - so every user of this has to keep
// working when it reads zero.
struct calling_thread {
    uint32_t kpcr{0};
    uint32_t kthread{0};
};

// Resolved once per host thread. The uncached path takes guest_memory's commit
// lock, and Geometry Wars enters a critical section eight hundred thousand times
// in thirty seconds - a global lock on that path is a global lock on every
// thread.
const calling_thread& resolve_calling_thread() {
    static thread_local calling_thread resolved;
    // What r13 held when the answer above was worked out. Kept separately from
    // the answer so that an r13 which fails validation is not re-validated on
    // every call: the commit check takes a lock shared by every thread.
    static thread_local uint32_t resolved_for = 0;
    static thread_local bool resolved_once = false;
    const uint32_t kpcr = current_guest_kpcr();
    if (resolved_once && kpcr == resolved_for) return resolved;
    resolved_for = kpcr;
    resolved_once = true;
    calling_thread found;
    if (kpcr != 0) {
        guest_memory& memory = active_kernel()->memory();
        // The commit check is what keeps a stale or bogus r13 from becoming a
        // fault inside the kernel: the address space is reserved but unmapped,
        // so reading an uncommitted page kills the process.
        if (memory.committed(kpcr, x_kpcr::size) &&
            memory.read_u32(kpcr + x_kpcr::current_thread) != 0) {
            found.kpcr = kpcr;
            found.kthread = memory.read_u32(kpcr + x_kpcr::current_thread);
        }
    }
    resolved = found;
    return resolved;
}

// Who is calling, as a value a lock can record as its owner.
//
// None of the console's locking calls take a thread argument - hardware reads
// the running thread out of the processor block - so a runtime with real host
// threads has to recover it. Recompiled code keeps the KPCR in r13 and the
// kernel-call shim stashes it (see host_function.h), which makes the KTHREAD
// behind it the natural identity: it is what Xenia stores in a critical
// section's owner field, so guest code comparing that field against
// KeGetCurrentThread() sees what it saw on hardware.
uint32_t current_thread_identity() {
    const calling_thread& self = resolve_calling_thread();
    if (self.kthread != 0) return self.kthread;
    // No KPCR: a unit test calling a handler directly, or a host thread that
    // has not been given a guest environment. The host-side token still
    // distinguishes threads from each other, which is what a lock needs.
    // Tokens count from one and a KTHREAD lives on the kernel heap, so the two
    // can never be mistaken for one another.
    return current_thread_token();
}

// Reads and writes the calling thread's IRQL. It lives in the guest KPCR when
// there is one, so guest code that loads it directly sees the same value; a
// host-side fallback keeps the raise/lower protocol self-consistent otherwise.
uint32_t& host_irql_slot() {
    static thread_local uint32_t irql = kPassiveLevel;
    return irql;
}

uint32_t read_current_irql() {
    const calling_thread& self = resolve_calling_thread();
    if (self.kpcr == 0) return host_irql_slot();
    return active_kernel()->memory().read_u8(self.kpcr + x_kpcr::current_irql);
}

void write_current_irql(uint32_t irql) {
    const calling_thread& self = resolve_calling_thread();
    if (self.kpcr == 0) {
        host_irql_slot() = irql;
        return;
    }
    active_kernel()->memory().write_u8(self.kpcr + x_kpcr::current_irql,
                                       static_cast<uint8_t>(irql));
}

} // namespace

void RtlInitializeCriticalSection(uint32_t cs) {
    guest_memory& memory = active_kernel()->memory();
    memory.write_u8(cs + kCsHeaderType, kAutoResetEvent);
    memory.write_u8(cs + kCsHeaderSpin, 0);
    memory.write_u32(cs + kCsSignalState, 0);
    memory.write_u32(cs + kCsLockCount, 0xFFFFFFFFu); // -1
    memory.write_u32(cs + kCsRecursion, 0);
    memory.write_u32(cs + kCsOwningThread, 0);
}

uint32_t RtlInitializeCriticalSectionAndSpinCount(uint32_t cs,
                                                  uint32_t spin_count) {
    RtlInitializeCriticalSection(cs);
    // The spin count is rounded up to 256-tick intervals and packed into the
    // header's spin byte, saturating at 255.
    uint32_t spin_div_256 = (spin_count + 255) >> 8;
    if (spin_div_256 > 255) spin_div_256 = 255;
    active_kernel()->memory().write_u8(cs + kCsHeaderSpin,
                                       static_cast<uint8_t>(spin_div_256));
    return x_status::success;
}

namespace {

// Claims a critical section for the calling thread, or reports that someone
// else holds it. Evaluated under the wait lock (thread_state::wait_until holds
// it), which is what makes "nobody owns it, so take it" one indivisible step
// rather than a test another thread can slip between.
bool try_enter_critical_section(uint32_t cs, uint32_t self) {
    guest_memory& memory = active_kernel()->memory();
    const uint32_t owner = memory.read_u32(cs + kCsOwningThread);
    if (owner != kUnowned && owner != self) return false;
    // Re-entering a section this thread already holds deepens the recursion;
    // a fresh acquire takes it from zero. lock_count trails recursion by one,
    // so an uncontended acquire reads back as 0 and a released section as -1.
    const uint32_t recursion = memory.read_u32(cs + kCsRecursion) + 1;
    memory.write_u32(cs + kCsRecursion, recursion);
    memory.write_u32(cs + kCsLockCount, recursion - 1);
    memory.write_u32(cs + kCsOwningThread, self);
    return true;
}

} // namespace

void RtlEnterCriticalSection(uint32_t cs) {
    if (cs == 0) return;
    const uint32_t self = current_thread_identity();
    // Blocks until the holder leaves. Returning without the section - which is
    // what a runtime with one thread token did, since every section looked
    // already-owned - lets two threads run the region at once, and the state it
    // guards is then only as consistent as the interleaving happened to be.
    active_kernel()->threads().wait_until(
        [cs, self] { return try_enter_critical_section(cs, self); }, nullptr);
}

void RtlLeaveCriticalSection(uint32_t cs) {
    if (cs == 0) return;
    guest_memory& memory = active_kernel()->memory();
    const uint32_t recursion = memory.read_u32(cs + kCsRecursion);
    // Leaving a section this thread does not hold is a title bug on hardware
    // too. Handing it to nobody would release a section still in use, so the
    // stray leave is ignored - and that has to include a leave from the wrong
    // THREAD, not just one with nothing held: unwinding another thread's
    // recursion count sets its section free underneath it.
    if (recursion == 0) return;
    if (memory.read_u32(cs + kCsOwningThread) != current_thread_identity()) {
        // Worth saying once. A title does not normally do this, so seeing it
        // means either the title really is unbalanced or this runtime is
        // answering "who is calling" inconsistently - and the second would look,
        // from the outside, exactly like a title that hangs sometimes.
        static std::atomic<bool> warned{false};
        if (!warned.exchange(true)) {
            std::printf("whitty_xenon: RtlLeaveCriticalSection on %08X from a "
                        "thread that does not hold it; ignored\n",
                        cs);
            std::fflush(stdout);
        }
        return;
    }
    if (recursion > 1) {
        // Still held by an outer enter: unwind one level.
        memory.write_u32(cs + kCsRecursion, recursion - 1);
        memory.write_u32(cs + kCsLockCount, recursion - 2);
        return;
    }
    memory.write_u32(cs + kCsRecursion, 0);
    memory.write_u32(cs + kCsLockCount, 0xFFFFFFFFu); // back to -1
    // The owner is cleared last: it is what a blocked thread tests, so no
    // waiter can see the section free while the rest of it still says held.
    memory.write_u32(cs + kCsOwningThread, kUnowned);
    active_kernel()->threads().wake_all();
}

uint32_t RtlTryEnterCriticalSection(uint32_t cs) {
    if (cs == 0) return 1; // a null section is treated as acquired
    const uint32_t self = current_thread_identity();
    // A zero timeout is a poll: the state is tested once, under the wait lock,
    // and the call reports what it found rather than blocking.
    const std::chrono::nanoseconds poll{};
    return active_kernel()->threads().wait_until(
               [cs, self] { return try_enter_critical_section(cs, self); },
               &poll)
               ? 1u
               : 0u;
}

// The three SList calls are named Interlocked because that is their entire
// contract: on hardware they are a lock-free compare-and-swap loop on the list
// header, and a title uses them precisely BECAUSE it has several threads on one
// list and does not want a lock. Implemented as a plain read-then-write they
// have no atomicity at all - two pushes read the same old head and one entry is
// simply lost, a pop and a push race the head against each other - which is the
// same lie the spin locks told before they became real.
//
// A mutex rather than a CAS loop: the header is two words (head, then depth and
// sequence packed together) that all have to move as one, the guest can point a
// list header anywhere including at an unaligned address, and nothing calls
// these often enough for the difference to matter. What matters is that a push
// and a pop cannot interleave.
namespace {
std::mutex& slist_mutex() {
    static std::mutex mutex;
    return mutex;
}
} // namespace

uint32_t InterlockedPushEntrySList(uint32_t list, uint32_t entry) {
    const std::lock_guard<std::mutex> lock(slist_mutex());
    guest_memory& memory = active_kernel()->memory();
    const uint32_t old_head = memory.read_u32(list + kSListHead);
    memory.write_u32(entry, old_head); // entry->next = old head
    memory.write_u32(list + kSListHead, entry);
    memory.write_u16(list + kSListDepth,
                     static_cast<uint16_t>(memory.read_u16(list + kSListDepth) + 1));
    memory.write_u16(list + kSListSequence,
                     static_cast<uint16_t>(memory.read_u16(list + kSListSequence) + 1));
    return old_head;
}

uint32_t InterlockedPopEntrySList(uint32_t list) {
    const std::lock_guard<std::mutex> lock(slist_mutex());
    guest_memory& memory = active_kernel()->memory();
    const uint32_t head = memory.read_u32(list + kSListHead);
    if (head == 0) return 0; // empty list
    memory.write_u32(list + kSListHead, memory.read_u32(head)); // head = head->next
    memory.write_u16(list + kSListDepth,
                     static_cast<uint16_t>(memory.read_u16(list + kSListDepth) - 1));
    // sequence is left unchanged on pop, matching the console.
    return head;
}

uint32_t InterlockedFlushSList(uint32_t list) {
    const std::lock_guard<std::mutex> lock(slist_mutex());
    guest_memory& memory = active_kernel()->memory();
    const uint32_t head = memory.read_u32(list + kSListHead);
    memory.write_u32(list + kSListHead, 0);
    memory.write_u16(list + kSListDepth, 0);
    memory.write_u16(list + kSListSequence, 0);
    return head;
}

namespace {

// A guest spin lock is one 32-bit word: zero when free, the owning thread
// otherwise. Guest threads are host threads here, so the word has to be
// operated on atomically and in place - a read followed by a write leaves a
// window in which two threads both see it free.
//
// Byte order does not enter into it. The word is only ever compared against
// zero and against a token this file chose, so swapping is unnecessary as long
// as it is consistent; the value a title would read out of the word directly is
// an opaque owner id on hardware too.
std::atomic<uint32_t>* guest_spin_lock(uint32_t lock) noexcept {
    if (lock == 0 || (lock & 3u) != 0) return nullptr; // must be word-aligned
    guest_memory& memory = active_kernel()->memory();
    if (!memory.committed(lock, sizeof(uint32_t))) return nullptr;
    // The word is plain guest memory; std::atomic_ref would say the same thing
    // and is not available on every toolchain this builds with.
    return reinterpret_cast<std::atomic<uint32_t>*>(memory.host_unchecked(lock));
}

void acquire_guest_spin_lock(uint32_t lock) {
    std::atomic<uint32_t>* word = guest_spin_lock(lock);
    if (word == nullptr) return;
    const uint32_t self = current_thread_identity();
    uint32_t expected = 0;
    while (!word->compare_exchange_weak(expected, self,
                                       std::memory_order_acquire,
                                       std::memory_order_relaxed)) {
        expected = 0;
        // A spin lock is held for a handful of instructions on hardware, and
        // the holder is a host thread that may not be running. Yielding is what
        // keeps a two-core host from starving it.
        std::this_thread::yield();
    }
}

void release_guest_spin_lock(uint32_t lock) {
    std::atomic<uint32_t>* word = guest_spin_lock(lock);
    if (word == nullptr) return;
    word->store(0, std::memory_order_release);
}

} // namespace

// The spin locks. These were no-ops while the runtime ran one guest thread, and
// stayed no-ops after it grew real ones - which is the worst of both: the title
// calls them, believes it is inside a critical region, and is not. Space
// Giraffe's audio worker threads showed it as a null vtable pointer read out of
// an object array whose element count had already been published: two threads
// in the same list walk, one of them mid-update.
//
// The Kf form also raises the caller's IRQL to dispatch level and hands back
// what it was, which is the value the matching release restores. The raise
// masks no interrupts here - see KeRaiseIrqlToDpcLevel - but the level itself
// is real per-thread state that guest code reads, and the nesting protocol
// depends on the old value being reported truthfully: an inner acquire that
// claims the caller was at passive level makes the inner release lower all the
// way to passive while the outer lock is still held.
uint32_t KfAcquireSpinLock(uint32_t lock) {
    const uint32_t old_irql = read_current_irql();
    write_current_irql(kDispatchLevel);
    acquire_guest_spin_lock(lock);
    return old_irql; // handed back to KfReleaseSpinLock
}

void KfReleaseSpinLock(uint32_t lock, uint32_t old_irql) {
    release_guest_spin_lock(lock);
    // Already at or above dispatch level before the acquire, so there is
    // nothing to restore: an outer lock still holds the level up.
    if (old_irql >= kDispatchLevel) return;
    write_current_irql(old_irql);
}

void KeAcquireSpinLockAtRaisedIrql(uint32_t lock) {
    // "AtRaisedIrql": the caller has already raised, so this only locks.
    acquire_guest_spin_lock(lock);
}

void KeReleaseSpinLockFromRaisedIrql(uint32_t lock) {
    release_guest_spin_lock(lock);
}

// A critical region disables the delivery of kernel APCs to the calling thread
// and nothing else. It is NOT a lock: it excludes no other thread, takes no
// object, and two threads can be inside their own critical regions at the same
// time. The console counts entries in the thread's own KTHREAD, downward from
// zero, and consults the count only when it is about to deliver an APC.
//
// So this is inert here - the runtime delivers no APCs, so there is nothing for
// the count to hold off - but it is inert in the same way it is on hardware,
// rather than by omission. The count is kept because it is the thing an APC
// implementation would have to honour, and because guest code can read it.
void KeEnterCriticalRegion() {
    const calling_thread& self = resolve_calling_thread();
    if (self.kthread == 0) return;
    guest_memory& memory = active_kernel()->memory();
    const uint32_t address = self.kthread + x_kthread::apc_disable_count;
    memory.write_u32(address, memory.read_u32(address) - 1);
}

void KeLeaveCriticalRegion() {
    const calling_thread& self = resolve_calling_thread();
    if (self.kthread == 0) return;
    guest_memory& memory = active_kernel()->memory();
    const uint32_t address = self.kthread + x_kthread::apc_disable_count;
    memory.write_u32(address, memory.read_u32(address) + 1);
}

// Raising the IRQL is how the console stops the running thread being preempted
// and masks interrupts at or below the new level, on the processor it is
// running on. Neither is reproducible here: host threads are preempted by the
// host scheduler, and the one interrupt the runtime raises - the GPU's vblank -
// runs guest code on a host thread of its own rather than on top of whichever
// guest thread was running. What IS real is the level itself, which is
// per-thread state guest code reads and the release protocol depends on, so it
// is recorded.
//
// The consequence of the part that cannot be modelled is worth stating plainly:
// guest code that raises to dispatch level and then touches per-processor state
// WITHOUT taking a spin lock is protected on hardware and unprotected here.
// Nothing observed so far does that - the titles brought up pair every raise
// with a spin lock, which is real - but it is the one hole left in this family.
uint32_t KeRaiseIrqlToDpcLevel() {
    const uint32_t old_irql = read_current_irql();
    write_current_irql(kDispatchLevel);
    return old_irql;
}

// The general form of the raise. Implemented alongside the DPC-level shorthand
// rather than left out of it: with the level now recorded, a title that raised
// through this one and lowered through KfLowerIrql would otherwise be lowering
// from a level nothing ever set.
uint32_t KfRaiseIrql(uint32_t new_irql) {
    const uint32_t old_irql = read_current_irql();
    write_current_irql(new_irql);
    return old_irql;
}

void KfLowerIrql(uint32_t new_irql) { write_current_irql(new_irql); }

namespace {

// Field offsets within a guest STRING / UNICODE_STRING (8 bytes total).
constexpr uint32_t kStringLength = 0x00;    // u16
constexpr uint32_t kStringMaxLength = 0x02; // u16
constexpr uint32_t kStringPointer = 0x04;   // u32

// X_PROCTYPE_TITLE: a title's threads run in the title process.
constexpr uint32_t kProcessTypeTitle = 1;

// A ceiling on how far a string scan walks a missing terminator.
constexpr uint32_t kMaxStringScan = 0xFFFE;

} // namespace

void RtlFillMemoryUlong(uint32_t dest, uint32_t length, uint32_t pattern) {
    guest_memory& memory = active_kernel()->memory();
    const uint32_t count = length >> 2; // whole 32-bit words only
    for (uint32_t index = 0; index < count; ++index)
        memory.write_u32(dest + index * 4, pattern);
}

void RtlInitAnsiString(uint32_t destination, uint32_t source) {
    guest_memory& memory = active_kernel()->memory();
    uint16_t length = 0;
    if (source != 0) {
        while (length < kMaxStringScan &&
               memory.read_u8(source + length) != 0)
            ++length;
    }
    memory.write_u16(destination + kStringLength, source ? length : 0);
    memory.write_u16(destination + kStringMaxLength,
                     source ? static_cast<uint16_t>(length + 1) : 0);
    memory.write_u32(destination + kStringPointer, source);
}

uint32_t RtlInitUnicodeString(uint32_t destination, uint32_t source) {
    guest_memory& memory = active_kernel()->memory();
    uint16_t units = 0; // 16-bit code units, not bytes
    if (source != 0) {
        while (units < kMaxStringScan &&
               memory.read_u16(source + units * 2) != 0)
            ++units;
    }
    memory.write_u16(destination + kStringLength,
                     source ? static_cast<uint16_t>(units * 2) : 0);
    memory.write_u16(destination + kStringMaxLength,
                     source ? static_cast<uint16_t>((units + 1) * 2) : 0);
    memory.write_u32(destination + kStringPointer, source);
    return destination;
}

uint32_t KeGetCurrentProcessType() { return kProcessTypeTitle; }

void KeBugCheckEx(uint32_t code, uint32_t p1, uint32_t p2, uint32_t p3,
                  uint32_t p4) {
    char buffer[96];
    std::snprintf(buffer, sizeof(buffer),
                  "bug check 0x%08X (0x%08X, 0x%08X, 0x%08X, 0x%08X)", code, p1,
                  p2, p3, p4);
    active_kernel()->request_terminate(buffer);
}

void KeBugCheck(uint32_t code) { KeBugCheckEx(code, 0, 0, 0, 0); }

void HalReturnToFirmware(uint32_t routine) {
    char buffer[64];
    std::snprintf(buffer, sizeof(buffer),
                  "return to firmware (routine %u)", routine);
    active_kernel()->request_terminate(buffer);
}

void KeEnableFpuExceptions(uint32_t enabled) { (void)enabled; }

void DbgBreakPoint() {}

uint32_t FscSetCacheElementCount(uint32_t unk0, uint32_t unk1) {
    (void)unk0;
    (void)unk1;
    return x_status::success;
}

namespace {

// Dispatcher-header field offsets, shared by every dispatcher object.
constexpr uint32_t kDispatchType = 0x00;        // u8, X_DISPATCHER_FLAGS
constexpr uint32_t kDispatchSignalState = 0x04; // u32
constexpr uint32_t kSemaphoreLimit = 0x10;      // u32, X_KSEMAPHORE only
// X_KMUTANT: the thread that holds it, 0 when free, and whether its owner died
// still holding it.
constexpr uint32_t kMutantOwner = 0x18;     // u32
constexpr uint32_t kMutantAbandoned = 0x1C; // u8

constexpr uint8_t kDispatcherSemaphore = 5; // X_DISPATCHER_FLAGS
constexpr uint32_t kEventSize = 0x10;       // X_KEVENT: just the header
// X_KSEMAPHORE: the header plus the limit that follows it.
constexpr uint32_t kSemaphoreSize = kSemaphoreLimit + 4;
constexpr uint32_t kMutantSize = 0x20; // X_KMUTANT

// Sets a dispatcher object's signalled state and returns the previous value.
uint32_t set_signal_state(uint32_t object_ptr, uint32_t value) {
    kernel_state* kernel = active_kernel();
    guest_memory& memory = kernel->memory();
    const uint32_t previous = memory.read_u32(object_ptr + kDispatchSignalState);
    memory.write_u32(object_ptr + kDispatchSignalState, value);
    // A thread blocked in KeWaitForSingleObject re-tests its object when woken.
    kernel->threads().wake_all();
    return previous;
}

// Pulse epochs. A pulse releases the threads ALREADY waiting on an object and
// leaves it unsignalled, so there is nothing in the object's own state for a
// waiter to find afterwards - which is why a pulse written as "set the state,
// then clear it" releases nobody, and why one written as "clear the state"
// releases nobody either. The count below is what a waiter compares against: it
// samples the object's epoch when it starts waiting and is released if the
// epoch moves, which is exactly "pulsed while I was waiting".
//
// Keyed by guest address, and read only once something has actually pulsed, so
// a title that never pulses pays one relaxed load per wait test for it.
std::atomic<bool> g_pulses_used{false};
std::mutex g_pulse_mutex;
std::map<uint32_t, uint64_t> g_pulse_epochs;

uint64_t pulse_epoch(uint32_t object_ptr) {
    if (!g_pulses_used.load(std::memory_order_acquire)) return 0;
    const std::lock_guard<std::mutex> lock(g_pulse_mutex);
    const auto it = g_pulse_epochs.find(object_ptr);
    return it == g_pulse_epochs.end() ? 0 : it->second;
}

void advance_pulse_epoch(uint32_t object_ptr) {
    const std::lock_guard<std::mutex> lock(g_pulse_mutex);
    ++g_pulse_epochs[object_ptr];
    g_pulses_used.store(true, std::memory_order_release);
}

// Releases whoever is waiting on an object without leaving it signalled, and
// reports the state it was in. The epoch moves before the wake, and the wake
// takes the same lock a waiter tests its condition under, so a thread already
// blocked cannot miss it.
uint32_t pulse_object(uint32_t object_ptr) {
    kernel_state* kernel = active_kernel();
    guest_memory& memory = kernel->memory();
    const uint32_t previous = memory.read_u32(object_ptr + kDispatchSignalState);
    memory.write_u32(object_ptr + kDispatchSignalState, 0);
    advance_pulse_epoch(object_ptr);
    kernel->threads().wake_all();
    return previous;
}

// Resolves an event handle to its guest X_KEVENT pointer, or 0 if not live.
uint32_t event_pointer_for_handle(uint32_t handle) {
    const kernel_object* object = active_kernel()->objects().lookup(handle);
    if (!object || object->type != object_type::event) return 0;
    return object->guest_object;
}

} // namespace

uint32_t NtCreateEvent(uint32_t handle_ptr, uint32_t object_attributes,
                       uint32_t event_type, uint32_t initial_state) {
    (void)object_attributes; // named events are not modelled yet
    kernel_state* kernel = active_kernel();
    const uint32_t event_ptr = kernel->heap().allocate(kEventSize, 16);
    if (event_ptr == 0) return x_status::no_memory;

    kernel->memory().zero_block(event_ptr, kEventSize);
    kernel->memory().write_u8(event_ptr + kDispatchType,
                              static_cast<uint8_t>(event_type));
    kernel->memory().write_u32(event_ptr + kDispatchSignalState, initial_state);

    const uint32_t handle = kernel->objects().add(object_type::event, event_ptr);
    if (handle_ptr != 0) kernel->memory().write_u32(handle_ptr, handle);
    return x_status::success;
}

void KeInitializeEvent(uint32_t event_ptr, uint32_t event_type,
                       uint32_t initial_state) {
    // An embedded event: initialised in place, referred to by pointer, so it
    // takes no handle.
    guest_memory& memory = active_kernel()->memory();
    memory.zero_block(event_ptr, kEventSize);
    memory.write_u8(event_ptr + kDispatchType, static_cast<uint8_t>(event_type));
    memory.write_u32(event_ptr + kDispatchSignalState, initial_state);
}

uint32_t KeSetEvent(uint32_t event_ptr, uint32_t increment, uint32_t wait) {
    (void)increment;
    (void)wait;
    return set_signal_state(event_ptr, 1);
}

uint32_t KeResetEvent(uint32_t event_ptr) {
    return set_signal_state(event_ptr, 0);
}

uint32_t KePulseEvent(uint32_t event_ptr, uint32_t increment, uint32_t wait) {
    (void)increment;
    (void)wait;
    // A pulse signals long enough to release the threads already waiting, then
    // clears. Clearing the state and calling that the whole job left every one
    // of those threads asleep: the state they would have to see signalled is
    // already back to zero by the time they get to look at it.
    return pulse_object(event_ptr);
}

uint32_t NtSetEvent(uint32_t handle, uint32_t previous_state_ptr) {
    const uint32_t event_ptr = event_pointer_for_handle(handle);
    if (event_ptr == 0) return x_status::invalid_handle;
    const uint32_t previous = set_signal_state(event_ptr, 1);
    if (previous_state_ptr != 0)
        active_kernel()->memory().write_u32(previous_state_ptr, previous);
    return x_status::success;
}

uint32_t NtClearEvent(uint32_t handle) {
    const uint32_t event_ptr = event_pointer_for_handle(handle);
    if (event_ptr == 0) return x_status::invalid_handle;
    set_signal_state(event_ptr, 0);
    return x_status::success;
}

uint32_t NtPulseEvent(uint32_t handle, uint32_t previous_state_ptr) {
    const uint32_t event_ptr = event_pointer_for_handle(handle);
    if (event_ptr == 0) return x_status::invalid_handle;
    const uint32_t previous = pulse_object(event_ptr);
    if (previous_state_ptr != 0)
        active_kernel()->memory().write_u32(previous_state_ptr, previous);
    return x_status::success;
}

void KeInitializeSemaphore(uint32_t semaphore_ptr, uint32_t count,
                           uint32_t limit) {
    guest_memory& memory = active_kernel()->memory();
    memory.write_u8(semaphore_ptr + kDispatchType, kDispatcherSemaphore);
    memory.write_u32(semaphore_ptr + kDispatchSignalState, count);
    memory.write_u32(semaphore_ptr + kSemaphoreLimit, limit);
}

uint32_t KeReleaseSemaphore(uint32_t semaphore_ptr, uint32_t increment,
                            uint32_t adjustment, uint32_t wait) {
    (void)increment;
    (void)wait;
    guest_memory& memory = active_kernel()->memory();
    const uint32_t previous =
        memory.read_u32(semaphore_ptr + kDispatchSignalState);
    // The console raises on overflow past the limit; titles stay within it, so
    // the count is simply advanced here.
    //
    // Going through set_signal_state rather than writing the count directly is
    // the whole point of this line: it wakes the threads blocked on the
    // semaphore. Advancing the count without waking them left a released
    // waiter asleep until some unrelated object happened to be signalled -
    // which, in a title whose only synchronisation is this semaphore, is
    // never. Both Geometry Wars 2 and Space Giraffe hand work to a worker
    // exactly this way.
    set_signal_state(semaphore_ptr, previous + adjustment);
    return previous;
}

// --- reader/writer locks -------------------------------------------------
// The X_ERWLOCK layout, which is what the guest allocated and what these four
// calls share with each other. Sizes and offsets are Xenia's, whose struct is
// static_assert'd at 0x38.
constexpr uint32_t kRwLockCount = 0x00;           // int32, starts at -1
constexpr uint32_t kRwWritersWaiting = 0x04;      // u32
constexpr uint32_t kRwReadersWaiting = 0x08;      // u32
constexpr uint32_t kRwReadersEntry = 0x0C;        // u32
constexpr uint32_t kRwWriterEvent = 0x10;         // X_KEVENT
constexpr uint32_t kRwReaderSemaphore = 0x20;     // X_KSEMAPHORE
constexpr uint32_t kRwSpinLock = 0x34;            // X_KSPINLOCK

int32_t read_lock_count(guest_memory& memory, uint32_t lock_ptr) {
    return static_cast<int32_t>(memory.read_u32(lock_ptr + kRwLockCount));
}

void ExInitializeReadWriteLock(uint32_t lock_ptr) {
    guest_memory& memory = active_kernel()->memory();
    // -1, not 0: the count is "how many holders are queued behind the first",
    // so the first acquirer increments it to 0 and takes the lock without
    // waiting. Initialising it to 0 would make every first acquire block.
    memory.write_u32(lock_ptr + kRwLockCount, static_cast<uint32_t>(-1));
    memory.write_u32(lock_ptr + kRwWritersWaiting, 0);
    memory.write_u32(lock_ptr + kRwReadersWaiting, 0);
    memory.write_u32(lock_ptr + kRwReadersEntry, 0);
    // A manual-reset event for the writer, and a semaphore for the readers so
    // one release can wake a whole read group at once.
    KeInitializeEvent(lock_ptr + kRwWriterEvent, 1, 0);
    KeInitializeSemaphore(lock_ptr + kRwReaderSemaphore, 0, 0x7FFFFFFF);
    memory.write_u32(lock_ptr + kRwSpinLock, 0);
}

void ExAcquireReadWriteLockExclusive(uint32_t lock_ptr) {
    guest_memory& memory = active_kernel()->memory();
    acquire_guest_spin_lock(lock_ptr + kRwSpinLock);
    const int32_t count = read_lock_count(memory, lock_ptr) + 1;
    memory.write_u32(lock_ptr + kRwLockCount, static_cast<uint32_t>(count));
    if (count == 0) {
        // Nobody held it: this thread is the writer and does not wait.
        release_guest_spin_lock(lock_ptr + kRwSpinLock);
        return;
    }
    memory.write_u32(lock_ptr + kRwWritersWaiting,
                     memory.read_u32(lock_ptr + kRwWritersWaiting) + 1);
    // Released before waiting, or the holder could never get in to release it.
    release_guest_spin_lock(lock_ptr + kRwSpinLock);
    KeWaitForSingleObject(lock_ptr + kRwWriterEvent, 7, 0, 0, 0);
}

void ExAcquireReadWriteLockShared(uint32_t lock_ptr) {
    guest_memory& memory = active_kernel()->memory();
    acquire_guest_spin_lock(lock_ptr + kRwSpinLock);
    const int32_t count = read_lock_count(memory, lock_ptr) + 1;
    memory.write_u32(lock_ptr + kRwLockCount, static_cast<uint32_t>(count));
    const uint32_t readers_in = memory.read_u32(lock_ptr + kRwReadersEntry);
    const uint32_t writers_waiting = memory.read_u32(lock_ptr + kRwWritersWaiting);
    // Free, or a read group is already inside and no writer is queued behind
    // it. The second half is what stops readers starving a waiting writer.
    if (count == 0 || (readers_in != 0 && writers_waiting == 0)) {
        memory.write_u32(lock_ptr + kRwReadersEntry, readers_in + 1);
        release_guest_spin_lock(lock_ptr + kRwSpinLock);
        return;
    }
    memory.write_u32(lock_ptr + kRwReadersWaiting,
                     memory.read_u32(lock_ptr + kRwReadersWaiting) + 1);
    release_guest_spin_lock(lock_ptr + kRwSpinLock);
    KeWaitForSingleObject(lock_ptr + kRwReaderSemaphore, 7, 0, 0, 0);
}

void ExReleaseReadWriteLock(uint32_t lock_ptr) {
    guest_memory& memory = active_kernel()->memory();
    acquire_guest_spin_lock(lock_ptr + kRwSpinLock);
    const int32_t count = read_lock_count(memory, lock_ptr) - 1;
    memory.write_u32(lock_ptr + kRwLockCount, static_cast<uint32_t>(count));
    if (count < 0) {
        // Back to nobody holding it.
        memory.write_u32(lock_ptr + kRwReadersEntry, 0);
        release_guest_spin_lock(lock_ptr + kRwSpinLock);
        return;
    }
    if (memory.read_u32(lock_ptr + kRwReadersEntry) == 0) {
        const uint32_t readers_waiting = memory.read_u32(lock_ptr + kRwReadersWaiting);
        if (readers_waiting != 0) {
            // Hand the lock to the whole waiting read group in one go, which is
            // why the readers wait on a semaphore rather than an event.
            memory.write_u32(lock_ptr + kRwReadersWaiting, 0);
            memory.write_u32(lock_ptr + kRwReadersEntry, readers_waiting);
            release_guest_spin_lock(lock_ptr + kRwSpinLock);
            KeReleaseSemaphore(lock_ptr + kRwReaderSemaphore, 1, readers_waiting, 0);
            return;
        }
    }
    const uint32_t readers_left = memory.read_u32(lock_ptr + kRwReadersEntry) - 1;
    memory.write_u32(lock_ptr + kRwReadersEntry, readers_left);
    if (readers_left != 0) {
        // Other readers are still inside; the lock stays held.
        release_guest_spin_lock(lock_ptr + kRwSpinLock);
        return;
    }
    memory.write_u32(lock_ptr + kRwWritersWaiting,
                     memory.read_u32(lock_ptr + kRwWritersWaiting) - 1);
    release_guest_spin_lock(lock_ptr + kRwSpinLock);
    KeSetEvent(lock_ptr + kRwWriterEvent, 1, 0);
}

// The session handle this runtime hands out, declared here because two
// unrelated places have to agree on it: XamSessionCreateHandle, which invents
// it (see the note there for why it is Xenia's literal), and NtClose, which is
// where the title gives it back.
constexpr uint32_t kSessionHandle = 0xCAFEDEAD;

uint32_t NtClose(uint32_t handle) {
    // A handle this runtime INVENTED is a handle it has to accept back.
    //
    // XamSessionCreateHandle answers with a literal rather than an entry in the
    // object table, so the table has never heard of it - and a title that closes
    // its session at the end of a game is then told INVALID_HANDLE for the one
    // handle we gave it. It is the recurring bug class from the refusing side,
    // and it is not cosmetic: Jetpac Refuelled closes the session when a game
    // ends, converts the status with RtlNtStatusToDosError, and every LATER
    // "create the game" runs the whole session sequence again - set property,
    // two set contexts, XamSessionCreateHandle, XamSessionRefObjByHandle,
    // XGI create (0x000B0010), XGI join (0x000B0012), all answered exactly as
    // the first time - and then stops dead instead of issuing XGI session start
    // (0x000B0014). What the player sees is "ERROR / Failed to create the
    // game." on the second and every subsequent game of a session, so a title
    // can be played once per launch and the other mode cannot be reached at all
    // without restarting.
    //
    // Closing it is a real operation, not a pretence: there is one session per
    // title here, and this is where it ends.
    if (handle == kSessionHandle) return x_status::success;
    object_table& objects = active_kernel()->objects();
    kernel_object* object = objects.lookup(handle);
    if (!object) return x_status::invalid_handle;
    // Remember what host resource this handle stood for before dropping it: a
    // file's stream has to be closed when its last handle goes.
    const object_type type = object->type;
    const uint32_t host_index = object->host_index;
    objects.close(handle);
    if (type == object_type::file && objects.lookup(handle) == nullptr)
        active_kernel()->files().close(host_index);
    return x_status::success;
}

uint32_t NtDuplicateObject(uint32_t handle, uint32_t new_handle_ptr,
                           uint32_t options) {
    object_table& objects = active_kernel()->objects();
    const uint32_t duplicate = objects.duplicate(handle);
    if (duplicate == object_table::kInvalidHandle)
        return x_status::invalid_handle;
    if (new_handle_ptr != 0)
        active_kernel()->memory().write_u32(new_handle_ptr, duplicate);
    if (options == 1) objects.close(handle); // DUPLICATE_CLOSE_SOURCE
    return x_status::success;
}

uint32_t ObReferenceObjectByHandle(uint32_t handle, uint32_t object_type_ptr,
                                   uint32_t out_object_ptr) {
    (void)object_type_ptr; // no guest object-type registry to check against yet
    guest_memory& memory = active_kernel()->memory();
    if (out_object_ptr != 0) memory.write_u32(out_object_ptr, 0);

    kernel_object* object = active_kernel()->objects().lookup(handle);
    if (!object) return x_status::invalid_handle;

    active_kernel()->objects().reference(*object);
    if (out_object_ptr != 0)
        memory.write_u32(out_object_ptr, object->guest_object);
    return x_status::success;
}

void ObDereferenceObject(uint32_t object_ptr) {
    // 0xDEADF00D is the sentinel ObReferenceObjectByHandle hands back for the
    // objects it does not track; both it and a null pointer are ignored.
    if (object_ptr == 0 || object_ptr == 0xDEADF00Du) return;
    active_kernel()->objects().dereference(object_ptr);
}

uint32_t ObReferenceObject(uint32_t object_ptr) {
    // The exact mirror of the call above, including which pointers it ignores -
    // they have to agree, or a title that references and dereferences the same
    // untracked sentinel drives the count negative on something real.
    if (object_ptr == 0 || object_ptr == 0xDEADF00Du) return x_status::success;
    object_table& objects = active_kernel()->objects();
    if (kernel_object* object = objects.lookup_by_guest_object(object_ptr)) {
        objects.reference(*object);
        return x_status::success;
    }
    // An object this table never registered. Reporting success would claim a
    // reference that does not exist, and the matching ObDereferenceObject will
    // find nothing to drop either - so the pair stays balanced, but say so.
    return x_status::invalid_handle;
}

namespace {

constexpr uint32_t k16MiBPage = 0x1000000;

// WHICH WINDOW a physical allocation is handed back in.
//
// The console maps the same physical memory three times and the windows differ
// only in the page size the MMU uses: 4 KiB at 0xE0000000, 64 KiB at
// 0xA0000000, 16 MiB at 0xC0000000. The tempting reading is that the page size
// a title asks for picks the window. **It does not**, and this is the second
// time that reading has to be talked out of: 4 KiB and 64 KiB both come back at
// 0xA0000000, and only a 16 MiB-page request moves. Xenia does the same, with
// the 4 KiB case marked as a deliberate deviation from the hardware.
//
// The evidence is Geometry Wars 1, and it is decisive. Its D3D ring set-up turns
// a CPU pointer into the GPU address it gives VdEnableRingBufferRPtrWriteBack
// like this (sub_82038B40, verbatim):
//
//     r9  = (ptr rotl 12) & 0xFFF     ; the top 12 bits: 0xA00, or 0xE00
//     r10 = ptr & 0x1FFFFFFF          ; the physical offset
//     r11 = (r9 + 0x200) & 0x1000     ; 0x1000 iff those bits were >= 0xE00
//     r3  = r11 + r10                 ; and it ADDS
//
// For an 0xE0000000 pointer that ADDS 0x1000 to the physical offset - it does
// not set a spare flag bit, it carries straight into an offset that already uses
// bit 12. Handing the ring's read-back dword back at 0xE001D000 instead of
// 0xA001D000 made the title ask for the write-back at physical 0x1E03C when the
// dword it then polls lives at 0x1D03C, so the read pointer was written one page
// away from where it was read, and the title spun in its own db16cyc wait with
// zero frames presented forever.
//
// So a title's own arithmetic can depend on getting the 64 KiB window, and there
// is nothing in the request to tell the two cases apart - Geometry Wars' ring
// (protect 0x404, align 0x20) and Alien Breed's first two allocations have
// byte-identical argument shapes, and `flags` is 0 in every call either title
// makes. Both titles therefore get the same answer, and Geometry Wars is the one
// that proves which answer is right.
uint32_t physical_window_for_page_size(uint32_t page_size) noexcept {
    if (page_size <= kSmallPageSize) return kSmallPageWindow;       // 0xE0000000
    if (page_size <= kLargePageSize) return kPhysicalAliasBases[0]; // 0xA0000000
    return kPhysicalAliasBases[1];                                  // 0xC0000000
}

// The same address in a different window. Every physical pointer the kernel
// hands out or is handed back is one of these three views of one offset, so
// moving between them is the only translation needed - and it is exact.
//
// It goes through the physical address rather than swapping the top bits,
// because the 4 KiB window starts 0x1000 into physical memory: 0xE0014000 and
// 0xA0015000 are the same byte, and 0xE0015000 is a different one. Rewriting
// only the top bits gets that wrong in silence.
uint32_t in_physical_window(uint32_t address, uint32_t window) noexcept {
    return physical_in_window(physical_address_of(address), window);
}

// X_MM_QUERY_STATISTICS_RESULT is 104 bytes; only a few fields matter to a
// title that is really just checking how much memory exists.
constexpr uint32_t kMmStatisticsSize = 104;
constexpr uint32_t kMmStatSizeField = 0x00;
constexpr uint32_t kMmStatTotalPhysicalPages = 0x04;
constexpr uint32_t kMmStatKernelPages = 0x08;
constexpr uint32_t kMmStatHighestPhysicalPage = 0x64;

} // namespace

// Titles do not check an allocation for failure, so a zero here becomes a null
// or stale pointer that faults somewhere unrelated. Naming the allocator, the
// size and what was left turns that into a one-line diagnosis. Reported once
// per allocator to stay readable when a title retries in a loop.
void report_allocation_failure(const char* what, uint32_t size,
                               uint32_t alignment, const guest_heap& heap) {
    static std::mutex reported_mutex;
    static std::set<std::string> reported;
    const std::lock_guard<std::mutex> lock(reported_mutex);
    if (!reported.insert(what).second) return;
    std::fprintf(stderr,
                 "  [%s] allocation of %u bytes (align %u) failed - %u of %u "
                 "bytes free in %zu range(s)\n",
                 what, size, alignment, heap.free_bytes(), heap.size(),
                 heap.free_ranges());
}

uint32_t MmAllocatePhysicalMemoryEx(uint32_t flags, uint32_t region_size,
                                    uint32_t protect_bits, uint32_t min_address,
                                    uint32_t max_address, uint32_t alignment) {
    (void)flags;
    (void)min_address; // physical address-range bounds are not honoured yet
    (void)max_address;
    // The console rejects an allocation with neither read nor write.
    if ((protect_bits & (x_page::readonly | x_page::readwrite)) == 0) return 0;

    kernel_state* kernel = active_kernel();
    if (!kernel->has_physical_heap()) return 0;

    uint32_t page_size = kSmallPageSize;
    if (protect_bits & x_mem::pages_16mb)
        page_size = k16MiBPage;
    else if (protect_bits & x_mem::large_pages)
        page_size = kLargePageSize;

    const uint32_t size = round_up(region_size, page_size);
    uint32_t align = round_up(alignment, page_size);
    if (align == 0) align = page_size;
    const uint32_t address = kernel->physical_heap().allocate(size, align);

    // Titles do not check this. On the console physical memory is a fixed
    // partition sized by the kernel, so an allocation this size either works
    // or the title was never going to run; here a zero is far more likely to
    // mean the heap is too small or too fragmented, and the title turns it
    // straight into a null dereference somewhere unrelated.
    if (address == 0) {
        report_allocation_failure("physical", size, align,
                                  kernel->physical_heap());
        return 0;
    }
    // Hand it back in the window that matches the page size asked for. The heap
    // itself lives in one window; which one is an implementation detail the
    // title must not see, because it reads the page size back off these bits.
    const uint32_t window = physical_window_for_page_size(page_size);
    const uint32_t physical = physical_address_of(address);
    // The 4 KiB window starts one page into physical memory, so physical memory's
    // first page has no address in that window: naming it there would wrap round
    // to an unmapped address at the top of the window instead. Refuse rather than
    // hand back a pointer that looks valid and faults on first use - the heap
    // this runtime configures never reaches down there, so this is a guard
    // against a future layout, not a case titles hit.
    if (!physical_has_window(physical, window)) {
        kernel->physical_heap().free(address);
        report_allocation_failure("physical (no address in the page-size window)",
                                  size, align, kernel->physical_heap());
        return 0;
    }
    return physical_in_window(physical, window);
}

void MmFreePhysicalMemory(uint32_t type, uint32_t base_address) {
    (void)type;
    if (base_address == 0) return;
    // The title frees through whichever window it was given, so the address has
    // to come back to the heap's own window before the heap can recognise it.
    // Without this a free of a 4 KiB-page allocation reaches the heap as an
    // 0xE0000000 address it never handed out and is silently ignored - a leak,
    // and worse, a block that is never reusable.
    guest_heap& heap = active_kernel()->physical_heap();
    if (is_physical_alias(base_address))
        base_address = in_physical_window(base_address, heap.base() &
                                                            ~kPhysicalOffsetMask);
    heap.free(base_address);
}

uint32_t MmGetPhysicalAddress(uint32_t base_address) {
    // The raw physical address is the offset within the alias region: the
    // pointer's offset in its window, plus wherever that window starts in
    // physical memory. That last term is zero for the 64 KiB and 16 MiB windows
    // and 0x1000 for the 4 KiB one, so masking alone was right for the first two
    // and a page too low for the third - and Direct3D, which does this same
    // arithmetic itself, then disagreed with us about where its buffers were.
    if (is_physical_alias(base_address))
        return physical_address_of(base_address);
    return base_address;
}

uint32_t MmQueryAddressProtect(uint32_t base_address) {
    (void)base_address; // protection is not tracked; report read/write
    return x_page::readwrite;
}

void MmSetAddressProtect(uint32_t base_address, uint32_t region_size,
                         uint32_t protect_bits) {
    (void)base_address;
    (void)region_size;
    (void)protect_bits;
}

uint32_t MmQueryAllocationSize(uint32_t base_address) {
    if (base_address == 0) return 0;
    // The same base recovery ExFreePool does, and for the same reason: a small
    // pool allocation hands the caller a pointer one header past the block the
    // heap knows about, so asking the heap about the caller's pointer would miss.
    // Getting this wrong is not a crash, it is a size that is plausible and
    // short - which surfaces later as a truncated copy nowhere near here.
    guest_heap& heap = active_kernel()->heap();
    if (const uint32_t size = heap.size_of(base_address); size != 0) return size;
    if ((base_address & (kSmallPageSize - 1)) != 0) {
        const uint32_t headered = heap.size_of(base_address - kPoolHeaderSize);
        if (headered > kPoolHeaderSize) return headered - kPoolHeaderSize;
    }
    return 0;
}

uint32_t MmMapIoSpace(uint32_t unknown, uint32_t physical_address,
                      uint32_t region_size, uint32_t flags) {
    (void)unknown;
    (void)physical_address;
    (void)region_size;
    (void)flags;
    // No MMIO device is mapped into this runtime. A null mapping is a failure
    // the caller can test; any non-null address here would be a pointer into
    // memory that models nothing, and a title writing device registers through
    // it would be silently writing to its own heap.
    return 0;
}

uint32_t MmQueryStatistics(uint32_t stats_ptr) {
    if (stats_ptr == 0) return x_status::invalid_parameter;
    guest_memory& memory = active_kernel()->memory();
    // The caller sets the size field; a mismatch means it expected a different
    // layout than the one we fill.
    if (memory.read_u32(stats_ptr + kMmStatSizeField) != kMmStatisticsSize)
        return x_status::buffer_too_small;

    memory.zero_block(stats_ptr, kMmStatisticsSize);
    memory.write_u32(stats_ptr + kMmStatSizeField, kMmStatisticsSize);
    // 512 MiB of 4 KiB pages, matching the retail console.
    memory.write_u32(stats_ptr + kMmStatTotalPhysicalPages, 0x00020000);
    memory.write_u32(stats_ptr + kMmStatKernelPages, 0x00000100);
    memory.write_u32(stats_ptr + kMmStatHighestPhysicalPage, 0x0001FFFF);
    return x_status::success;
}

namespace {

// X_OBJECT_ATTRIBUTES: root_directory (0x0), name_ptr (0x4, a guest
// X_ANSI_STRING pointer). X_IO_STATUS_BLOCK: status (0x0), information (0x4).
constexpr uint32_t kObjectAttrsRootDirectory = 0x00;
constexpr uint32_t kObjectAttrsNamePtr = 0x04;
constexpr uint32_t kIoStatusStatus = 0x00;
constexpr uint32_t kIoStatusInformation = 0x04;

// NtCreateFile's create_options bits that change what is opened.
constexpr uint32_t kCreateOptionDirectoryFile = 0x00000001;
constexpr uint32_t kCreateOptionNonDirectoryFile = 0x00000040;

// desired_access bits that mean "I intend to write".
constexpr uint32_t kFileWriteData = 0x00000002;
constexpr uint32_t kFileAppendData = 0x00000004;
constexpr uint32_t kGenericWrite = 0x40000000;
constexpr uint32_t kGenericAll = 0x10000000;

// X_FILE_NETWORK_OPEN_INFORMATION, 56 bytes.
constexpr uint32_t kNetworkOpenInfoSize = 56;
constexpr uint32_t kNoiCreationTime = 0x00;
constexpr uint32_t kNoiLastAccessTime = 0x08;
constexpr uint32_t kNoiLastWriteTime = 0x10;
constexpr uint32_t kNoiChangeTime = 0x18;
constexpr uint32_t kNoiAllocationSize = 0x20;
constexpr uint32_t kNoiEndOfFile = 0x28;
constexpr uint32_t kNoiAttributes = 0x30;

// X_FILE_DIRECTORY_INFORMATION. Everything up to the name is fixed; the name
// follows inline at 0x40, which is why a scan needs at least 72 bytes.
constexpr uint32_t kDirInfoHeaderSize = 0x40;
constexpr uint32_t kDirInfoMinimumLength = 72;
constexpr uint32_t kDirNextEntryOffset = 0x00;
constexpr uint32_t kDirFileIndex = 0x04;
constexpr uint32_t kDirCreationTime = 0x08;
constexpr uint32_t kDirLastAccessTime = 0x10;
constexpr uint32_t kDirLastWriteTime = 0x18;
constexpr uint32_t kDirChangeTime = 0x20;
constexpr uint32_t kDirEndOfFile = 0x28;
constexpr uint32_t kDirAllocationSize = 0x30;
constexpr uint32_t kDirAttributes = 0x38;
constexpr uint32_t kDirFileNameLength = 0x3C;

// Volume geometry reported for the mounted device. These are the numbers
// Xenia's host-path device reports; the sector size in particular is checked
// by the console's own XCTD code, so it has to be 0x200.
constexpr uint32_t kVolumeTotalAllocationUnits = 128 * 1024;
constexpr uint32_t kVolumeAvailableAllocationUnits = 128 * 1024;
constexpr uint32_t kVolumeSectorsPerAllocationUnit = 1;
constexpr uint32_t kVolumeBytesPerSector = 0x200;
constexpr uint32_t kVolumeComponentNameMaxLength = 255;

// Reads a guest X_ANSI_STRING into a std::string.
//
// An X_ANSI_STRING is a LENGTH AND A POINTER, not text: `length` at +0,
// `maximum_length` at +2, `buffer` at +4. That is what NtCreateFile's
// OBJECT_ATTRIBUTES carries and it is what this reads.
//
// It is NOT how every kernel call names a string, and using it on a plain
// `char*` is a wild read rather than a wrong answer. XamContentCreate is handed
// the literal "save" at 0x82372DC0 in Ridge Racer 6; read as an ANSI_STRING
// that is length 0x7361 ("sa") and buffer 0, so it walked 29,537 bytes from
// guest address 0 and took the process down with `SIGSEGV at 00000000` before
// the handler ran a line of its own logic. Use read_c_string below for a
// pointer to characters.
std::string read_ansi_string(uint32_t string_ptr) {
    guest_memory& memory = active_kernel()->memory();
    const uint16_t length = memory.read_u16(string_ptr + 0);
    const uint32_t buffer = memory.read_u32(string_ptr + 4);
    std::string text;
    text.reserve(length);
    for (uint16_t i = 0; i < length; ++i)
        text.push_back(static_cast<char>(memory.read_u8(buffer + i)));
    return text;
}

// Reads a NUL-terminated guest string - a plain `char*` argument.
//
// Bounded, deliberately. A guest pointer is whatever the title put in the
// register, and a handler that walks it until it happens to find a zero is one
// bad pointer away from taking the whole process down; the caller gets a
// truncated name it can refuse, which is a result rather than a crash.
std::string read_c_string(uint32_t string_ptr, uint32_t max_length = 260) {
    std::string text;
    if (string_ptr == 0) return text;
    guest_memory& memory = active_kernel()->memory();
    text.reserve(16);
    for (uint32_t i = 0; i < max_length; ++i) {
        const uint8_t byte = memory.read_u8(string_ptr + i);
        if (byte == 0) break;
        text.push_back(static_cast<char>(byte));
    }
    return text;
}

void write_io_status(uint32_t io_status_block, uint32_t status,
                     uint32_t information) {
    if (io_status_block == 0) return;
    guest_memory& memory = active_kernel()->memory();
    memory.write_u32(io_status_block + kIoStatusStatus, status);
    memory.write_u32(io_status_block + kIoStatusInformation, information);
}

// A name opened RELATIVE to a directory handle, made absolute.
//
// The object attributes carry a root_directory handle beside the name, and a
// name given with one is relative to it. Ignoring the field looks harmless
// until a title opens its data directory once and then opens everything inside
// it by bare name: every one of those is then looked up at the mount root, the
// title cannot find its own files, and it exits. After Burner Climax opens
// "shader_hlsl.farc" against a handle on media\x360 and throws when it is not
// there.
//
// A name that already names a device, or that starts at a root, is absolute
// and is left alone - the field is only consulted when it can matter.
std::string resolve_against_root(uint32_t object_attributes,
                                 const std::string& name) {
    if (name.empty() || name.find(':') != std::string::npos) return name;
    if (name[0] == '\\' || name[0] == '/') return name;
    guest_memory& memory = active_kernel()->memory();
    const uint32_t root =
        memory.read_u32(object_attributes + kObjectAttrsRootDirectory);
    if (root == 0) return name;
    const kernel_object* object = active_kernel()->objects().lookup(root);
    if (object == nullptr || object->type != object_type::file) return name;
    const std::string& parent =
        active_kernel()->files().guest_path_of(object->host_index);
    // A handle opened by host path has no guest path to hang this off, and a
    // handle on the device root already resolves the same way.
    if (parent.empty()) return name;
    std::string joined = parent;
    if (joined.back() != '\\' && joined.back() != '/') joined += '\\';
    return joined + name;
}

// The open file behind a handle, or nullptr if the handle names anything else.
kernel_object* file_object(uint32_t handle) {
    kernel_object* object = active_kernel()->objects().lookup(handle);
    if (!object || object->type != object_type::file) return nullptr;
    return object;
}

// I/O completes before these handlers return, so an event the caller passed is
// already satisfied by the time it waits on it.
void signal_io_event(uint32_t event_handle) {
    if (event_handle == 0) return;
    kernel_object* event = active_kernel()->objects().lookup(event_handle);
    if (event && event->type == object_type::event) NtSetEvent(event_handle, 0);
}

uint32_t status_for_open(file_error error) {
    switch (error) {
        case file_error::ok: return x_status::success;
        case file_error::not_found: return x_status::no_such_file;
        case file_error::already_exists: return x_status::object_name_collision;
        case file_error::is_a_directory: return x_status::file_is_a_directory;
        case file_error::not_a_directory: return x_status::not_a_directory;
        default: return x_status::unsuccessful;
    }
}

// The open path shared by NtCreateFile and NtOpenFile.

uint32_t open_guest_file(uint32_t handle_out, uint32_t desired_access,
                         uint32_t object_attributes, uint32_t io_status_block,
                         uint32_t creation_disposition,
                         uint32_t create_options) {
    guest_memory& memory = active_kernel()->memory();
    if (object_attributes == 0) return x_status::invalid_parameter;
    const uint32_t name_ptr =
        memory.read_u32(object_attributes + kObjectAttrsNamePtr);
    if (name_ptr == 0) return x_status::invalid_parameter;

    const std::string guest_path =
        resolve_against_root(object_attributes, read_ansi_string(name_ptr));
    const resolved_path path = active_kernel()->files().resolve_path(guest_path);

    const bool writable = (desired_access & (kFileWriteData | kFileAppendData |
                                             kGenericWrite | kGenericAll)) != 0;
    const open_result opened = active_kernel()->files().open(
        path, static_cast<file_disposition>(creation_disposition), writable,
        (create_options & kCreateOptionDirectoryFile) != 0,
        (create_options & kCreateOptionNonDirectoryFile) != 0);

    const uint32_t status = status_for_open(opened.error);

    // A failed open is reported once per distinct path. Titles ask for files
    // that genuinely are not there (probing for save data, optional content),
    // so this is not an error - but when a title fails to boot, the file it
    // could not find is almost always the reason, and the failure otherwise
    // surfaces a long way away as a dirty-disc screen or a zero-length read.
    if (status != x_status::success) {
        static std::mutex missed_mutex;
        static std::set<std::string> missed;
        std::lock_guard<std::mutex> lock(missed_mutex);
        if (missed.insert(guest_path).second)
            std::fprintf(stderr,
                         "  [file] cannot open \"%s\" (tried \"%s\")"
                         " root_directory %08X\n",
                         guest_path.c_str(),
                         path.from_package() ? "inside the package"
                                             : path.host_path.c_str(),
                         memory.read_u32(object_attributes));
    }

    uint32_t handle = 0;
    if (status == x_status::success)
        handle = active_kernel()->objects().add(object_type::file, 0,
                                                opened.file_id);

    // The handle is written whether or not the open succeeded - a title reads
    // it back unconditionally, so leaving stale contents there is worse than
    // writing the invalid handle.
    if (handle_out != 0) memory.write_u32(handle_out, handle);
    write_io_status(io_status_block, status,
                    static_cast<uint32_t>(opened.action));
    return status;
}

// Shared by NtReadFile and the scatter form: one contiguous run of the file
// into one guest buffer. Returns the byte count and the status separately
// because the scatter loop needs both per segment.
uint32_t read_into_guest(uint32_t file_id, uint32_t buffer,
                         uint32_t buffer_length, uint64_t offset,
                         uint32_t& out_read) {
    out_read = 0;
    if (buffer_length == 0) return x_status::success; // a valid no-op

    std::vector<uint8_t> host_buffer(buffer_length);
    out_read = active_kernel()->files().read(file_id, host_buffer.data(),
                                             buffer_length, offset);
    if (out_read != 0)
        active_kernel()->memory().write_block(buffer, host_buffer.data(),
                                              out_read);
    return out_read == 0 ? x_status::end_of_file : x_status::success;
}

} // namespace

uint32_t NtCreateFile(uint32_t handle_out, uint32_t desired_access,
                      uint32_t object_attributes, uint32_t io_status_block,
                      uint32_t allocation_size_ptr, uint32_t file_attributes,
                      uint32_t share_access, uint32_t creation_disposition,
                      uint32_t create_options) {
    (void)allocation_size_ptr; // a size hint; the host file grows as written
    (void)file_attributes;     // no attribute is settable on the host side
    (void)share_access;        // nothing else has the file open
    return open_guest_file(handle_out, desired_access, object_attributes,
                           io_status_block, creation_disposition,
                           create_options);
}

uint32_t NtOpenFile(uint32_t handle_out, uint32_t desired_access,
                    uint32_t object_attributes, uint32_t io_status_block,
                    uint32_t open_options) {
    return open_guest_file(handle_out, desired_access, object_attributes,
                           io_status_block,
                           static_cast<uint32_t>(file_disposition::open_existing),
                           open_options);
}

uint32_t NtReadFile(uint32_t file_handle, uint32_t event_handle,
                    uint32_t apc_routine, uint32_t apc_context,
                    uint32_t io_status_block, uint32_t buffer,
                    uint32_t buffer_length, uint32_t byte_offset_ptr) {
    // The read completes here, so there is no APC to queue: the console would
    // deliver one only because it finished the I/O later.
    (void)apc_routine;
    (void)apc_context;
    guest_memory& memory = active_kernel()->memory();

    kernel_object* file = file_object(file_handle);
    if (!file) {
        write_io_status(io_status_block, x_status::invalid_handle, 0);
        return x_status::invalid_handle;
    }

    // A byte-offset pointer holds a 64-bit offset; the console also spells "read
    // from the current position" as an all-ones offset, which the file system
    // already reads as kCurrentOffset.
    const uint64_t offset = byte_offset_ptr != 0
                                ? memory.read_u64(byte_offset_ptr)
                                : file_system::kCurrentOffset;

    uint32_t read = 0;
    const uint32_t status =
        read_into_guest(file->host_index, buffer, buffer_length, offset, read);
    write_io_status(io_status_block, status, read);
    signal_io_event(event_handle);
    return status;
}

uint32_t NtReadFileScatter(uint32_t file_handle, uint32_t event_handle,
                           uint32_t apc_routine, uint32_t apc_context,
                           uint32_t io_status_block, uint32_t segment_array,
                           uint32_t length, uint32_t byte_offset_ptr) {
    (void)apc_routine;
    (void)apc_context;
    guest_memory& memory = active_kernel()->memory();

    kernel_object* file = file_object(file_handle);
    if (!file) {
        write_io_status(io_status_block, x_status::invalid_handle, 0);
        return x_status::invalid_handle;
    }

    // The segment array is a list of FILE_SEGMENT_ELEMENTs, which on this
    // platform are just guest pointers - one 4 KiB page each. The file is read
    // contiguously; only the destination is scattered.
    constexpr uint32_t kSegmentPageSize = 4096;
    const uint64_t base_offset = byte_offset_ptr != 0
                                     ? memory.read_u64(byte_offset_ptr)
                                     : file_system::kCurrentOffset;

    uint32_t status = x_status::success;
    uint32_t total = 0;
    uint32_t remaining = length;
    uint32_t segment = 0;
    while (remaining != 0) {
        const uint32_t chunk = std::min(remaining, kSegmentPageSize);
        const uint32_t buffer =
            memory.read_u32(segment_array + segment * sizeof(uint32_t));
        // A run continuing from the current position must not restart at it for
        // every segment, so only an absolute offset is advanced.
        const uint64_t offset = base_offset == file_system::kCurrentOffset
                                    ? file_system::kCurrentOffset
                                    : base_offset + total;

        uint32_t read = 0;
        status = read_into_guest(file->host_index, buffer, chunk, offset, read);
        total += read;
        if (status != x_status::success || read != chunk) break;
        remaining -= chunk;
        ++segment;
    }

    write_io_status(io_status_block, status, total);
    signal_io_event(event_handle);
    return status;
}

uint32_t NtWriteFile(uint32_t file_handle, uint32_t event_handle,
                     uint32_t apc_routine, uint32_t apc_context,
                     uint32_t io_status_block, uint32_t buffer,
                     uint32_t buffer_length, uint32_t byte_offset_ptr) {
    (void)apc_routine;
    (void)apc_context;
    guest_memory& memory = active_kernel()->memory();

    kernel_object* file = file_object(file_handle);
    if (!file) {
        write_io_status(io_status_block, x_status::invalid_handle, 0);
        return x_status::invalid_handle;
    }
    if (!active_kernel()->files().is_writable(file->host_index)) {
        // The handle was opened read-only, or the host file is not writable.
        // Saying so is what lets the title fall back rather than believe it
        // has persisted something.
        write_io_status(io_status_block, x_status::access_denied, 0);
        signal_io_event(event_handle);
        return x_status::access_denied;
    }

    const uint64_t offset = byte_offset_ptr != 0
                                ? memory.read_u64(byte_offset_ptr)
                                : file_system::kCurrentOffset;

    std::vector<uint8_t> host_buffer(buffer_length);
    if (buffer_length != 0)
        memory.read_block(buffer, host_buffer.data(), buffer_length);
    const uint32_t written = active_kernel()->files().write(
        file->host_index, host_buffer.data(), buffer_length, offset);

    const uint32_t status = (written == buffer_length) ? x_status::success
                                                       : x_status::unsuccessful;
    write_io_status(io_status_block, status, written);
    signal_io_event(event_handle);
    return status;
}

uint32_t NtFlushBuffersFile(uint32_t file_handle, uint32_t io_status_block) {
    kernel_object* file = file_object(file_handle);
    if (file) active_kernel()->files().flush(file->host_index);
    // Xenia reports success unconditionally here, including for a handle it
    // does not know; a title only ever checks that the flush did not fail.
    write_io_status(io_status_block, x_status::success, 0);
    return x_status::success;
}

namespace {

// Fills an X_FILE_NETWORK_OPEN_INFORMATION from a stat. Shared by the by-path
// query and the by-handle one, which answer with the same block.
void write_network_open_info(uint32_t info_ptr, const file_stat& info) {
    guest_memory& memory = active_kernel()->memory();
    memory.write_u64(info_ptr + kNoiCreationTime, info.creation_time);
    memory.write_u64(info_ptr + kNoiLastAccessTime, info.access_time);
    memory.write_u64(info_ptr + kNoiLastWriteTime, info.write_time);
    // The console has no separate change time; Xenia reports the write time
    // for both, which is what a title compares against.
    memory.write_u64(info_ptr + kNoiChangeTime, info.write_time);
    memory.write_u64(info_ptr + kNoiAllocationSize, info.allocation_size);
    memory.write_u64(info_ptr + kNoiEndOfFile, info.size);
    memory.write_u32(info_ptr + kNoiAttributes, info.attributes);
}

// The smallest buffer each query class can be answered into. Zero means the
// class is one we do not answer at all.
uint32_t query_file_info_minimum_length(uint32_t info_class) {
    switch (info_class) {
        case x_file_info_class::internal: return 8;
        case x_file_info_class::position: return 8;
        case x_file_info_class::xctd_compression: return 4;
        case x_file_info_class::network_open: return kNetworkOpenInfoSize;
        case x_file_info_class::mode:
        case x_file_info_class::alignment:
        case x_file_info_class::sector:
        case x_file_info_class::io_priority: return 4;
        case x_file_info_class::name:
        case x_file_info_class::allocation: return 8;
        case x_file_info_class::basic: return 40;
        default: return 0;
    }
}

uint32_t set_file_info_minimum_length(uint32_t info_class) {
    switch (info_class) {
        case x_file_info_class::disposition: return 1;
        case x_file_info_class::position: return 8;
        case x_file_info_class::completion: return 8;
        case x_file_info_class::mode:
        case x_file_info_class::io_priority: return 4;
        case x_file_info_class::allocation:
        case x_file_info_class::end_of_file: return 8;
        case x_file_info_class::basic: return 40;
        default: return 0;
    }
}

uint32_t query_volume_info_minimum_length(uint32_t info_class) {
    switch (info_class) {
        case x_volume_info_class::volume: return 24;
        case x_volume_info_class::size: return 24;
        case x_volume_info_class::attribute: return 16;
        case x_volume_info_class::device: return 8;
        default: return 0;
    }
}

} // namespace

uint32_t NtQueryFullAttributesFile(uint32_t object_attributes,
                                   uint32_t file_info_ptr) {
    guest_memory& memory = active_kernel()->memory();
    if (object_attributes == 0 || file_info_ptr == 0)
        return x_status::invalid_parameter;
    const uint32_t name_ptr =
        memory.read_u32(object_attributes + kObjectAttrsNamePtr);
    if (name_ptr == 0) return x_status::invalid_parameter;

    const std::string guest_path =
        resolve_against_root(object_attributes, read_ansi_string(name_ptr));
    const resolved_path path = active_kernel()->files().resolve_path(guest_path);
    const file_stat info = active_kernel()->files().stat(path);
    if (!info.exists) return x_status::no_such_file;

    memory.zero_block(file_info_ptr, kNetworkOpenInfoSize);
    write_network_open_info(file_info_ptr, info);
    return x_status::success;
}

uint32_t NtQueryInformationFile(uint32_t file_handle, uint32_t io_status_block,
                                uint32_t info_ptr, uint32_t info_length,
                                uint32_t info_class) {
    const uint32_t minimum = query_file_info_minimum_length(info_class);
    if (minimum == 0) return x_status::invalid_info_class;
    if (info_length < minimum) return x_status::info_length_mismatch;

    kernel_object* file = file_object(file_handle);
    if (!file) return x_status::invalid_handle;

    guest_memory& memory = active_kernel()->memory();
    file_system& files = active_kernel()->files();
    memory.zero_block(info_ptr, info_length);

    uint32_t status = x_status::success;
    uint32_t out_length = 0;
    switch (info_class) {
        case x_file_info_class::internal: {
            // A unique-per-file number. The path's hash serves: it is stable
            // for the same file and distinct between files, which is all a
            // title compares it for.
            const std::string& path = files.host_path_of(file->host_index);
            uint64_t hash = 1469598103934665603ull; // FNV-1a
            for (char c : path) {
                hash ^= static_cast<uint8_t>(c);
                hash *= 1099511628211ull;
            }
            memory.write_u64(info_ptr, hash);
            out_length = 8;
            break;
        }
        case x_file_info_class::position:
            memory.write_u64(info_ptr, files.position(file->host_index));
            out_length = 8;
            break;
        case x_file_info_class::network_open: {
            const file_stat info = files.stat_of(file->host_index);
            write_network_open_info(info_ptr, info);
            out_length = kNetworkOpenInfoSize;
            break;
        }
        case x_file_info_class::alignment:
            memory.write_u32(info_ptr, 0); // FILE_BYTE_ALIGNMENT
            out_length = 4;
            break;
        default:
            // A class whose minimum length is known but whose contents are
            // not. Refused rather than answered with the zeroes already
            // written, since zero is a plausible-looking value here.
            status = x_status::invalid_parameter;
            break;
    }

    write_io_status(io_status_block, status, out_length);
    return status;
}

uint32_t NtSetInformationFile(uint32_t file_handle, uint32_t io_status_block,
                              uint32_t info_ptr, uint32_t info_length,
                              uint32_t info_class) {
    const uint32_t minimum = set_file_info_minimum_length(info_class);
    if (minimum == 0) return x_status::invalid_info_class;
    if (info_length < minimum) return x_status::info_length_mismatch;

    kernel_object* file = file_object(file_handle);
    if (!file) return x_status::invalid_handle;

    guest_memory& memory = active_kernel()->memory();
    file_system& files = active_kernel()->files();

    uint32_t status = x_status::success;
    uint32_t out_length = 0;
    switch (info_class) {
        case x_file_info_class::position:
            files.set_position(file->host_index, memory.read_u64(info_ptr));
            out_length = 8;
            break;
        case x_file_info_class::end_of_file:
            if (!files.set_length(file->host_index, memory.read_u64(info_ptr)))
                status = x_status::access_denied;
            out_length = 8;
            break;
        case x_file_info_class::allocation:
            // A hint about how much space to reserve. The host file grows as
            // it is written, so there is nothing to do - but the call did
            // succeed, and a title checks that.
            out_length = 8;
            break;
        case x_file_info_class::disposition:
            // Delete-on-close. Not modelled: the title's assets are read-only
            // and nothing it writes is ours to remove behind its back.
            out_length = 0;
            break;
        default:
            status = x_status::invalid_parameter;
            break;
    }

    write_io_status(io_status_block, status, out_length);
    return status;
}

uint32_t NtQueryVolumeInformationFile(uint32_t file_handle,
                                      uint32_t io_status_block,
                                      uint32_t info_ptr, uint32_t info_length,
                                      uint32_t info_class) {
    const uint32_t minimum = query_volume_info_minimum_length(info_class);
    if (minimum == 0) return x_status::invalid_info_class;
    if (info_length < minimum) return x_status::info_length_mismatch;

    kernel_object* file = file_object(file_handle);
    if (!file) return x_status::invalid_handle;

    guest_memory& memory = active_kernel()->memory();
    memory.zero_block(info_ptr, info_length);

    uint32_t status = x_status::success;
    uint32_t out_length = 0;
    switch (info_class) {
        case x_volume_info_class::volume:
            // creation_time (0x00), serial_number (0x08), label_length (0x0C),
            // supports_objects (0x10), then the label. All zero: the host
            // directory behind the mount has no volume identity, and the
            // reported length stops short of the label to say it is empty.
            out_length = 0x11;
            break;
        case x_volume_info_class::size:
            memory.write_u64(info_ptr + 0x00, kVolumeTotalAllocationUnits);
            memory.write_u64(info_ptr + 0x08, kVolumeAvailableAllocationUnits);
            memory.write_u32(info_ptr + 0x10, kVolumeSectorsPerAllocationUnit);
            memory.write_u32(info_ptr + 0x14, kVolumeBytesPerSector);
            out_length = 24;
            break;
        case x_volume_info_class::attribute: {
            // attributes (0x00), component_name_max_length (0x04),
            // name_length (0x08), then the name inline.
            static const std::string name = "GAME";
            memory.write_u32(info_ptr + 0x00, 0);
            memory.write_u32(info_ptr + 0x04, kVolumeComponentNameMaxLength);
            memory.write_u32(info_ptr + 0x08,
                             static_cast<uint32_t>(name.size()));
            if (info_length >= 12 + name.size()) {
                memory.write_block(info_ptr + 0x0C, name.data(),
                                   static_cast<uint32_t>(name.size()));
                out_length = 12 + static_cast<uint32_t>(name.size());
            } else {
                status = x_status::buffer_overflow;
                out_length = 12;
            }
            break;
        }
        default:
            status = x_status::invalid_parameter;
            break;
    }

    write_io_status(io_status_block, status, out_length);
    return status;
}

uint32_t NtQueryDirectoryFile(uint32_t file_handle, uint32_t event_handle,
                              uint32_t apc_routine, uint32_t apc_context,
                              uint32_t io_status_block, uint32_t file_info_ptr,
                              uint32_t length, uint32_t file_name_ptr,
                              uint32_t restart_scan) {
    (void)apc_routine;
    (void)apc_context;
    // The name is written inline after a fixed 0x40-byte header, so a buffer
    // that cannot hold a header plus a short name is not worth starting on.
    if (length < kDirInfoMinimumLength) return x_status::info_length_mismatch;

    kernel_object* file = file_object(file_handle);
    if (!file) {
        write_io_status(io_status_block, x_status::no_such_file, 0);
        return x_status::no_such_file;
    }

    const std::string pattern =
        file_name_ptr != 0 ? read_ansi_string(file_name_ptr) : std::string();

    directory_entry entry;
    if (!active_kernel()->files().next_directory_entry(
            file->host_index, pattern, restart_scan != 0, entry)) {
        // A filtered scan that matches nothing is "no such file"; running off
        // the end of an unfiltered one is "no more files". A title tells the
        // two apart to decide whether to stop looking or to report an error.
        const uint32_t status = pattern.empty() ? x_status::no_more_files
                                                : x_status::no_such_file;
        write_io_status(io_status_block, status, 0);
        return status;
    }

    guest_memory& memory = active_kernel()->memory();
    const uint32_t name_length = static_cast<uint32_t>(entry.name.size());
    if (kDirInfoHeaderSize + name_length > length) {
        write_io_status(io_status_block, x_status::buffer_overflow, 0);
        return x_status::buffer_overflow;
    }

    memory.zero_block(file_info_ptr, kDirInfoHeaderSize);
    // One entry per call, so there is never a next one to point at.
    memory.write_u32(file_info_ptr + kDirNextEntryOffset, 0);
    memory.write_u32(file_info_ptr + kDirFileIndex, entry.index);
    memory.write_u64(file_info_ptr + kDirCreationTime, entry.info.creation_time);
    memory.write_u64(file_info_ptr + kDirLastAccessTime, entry.info.access_time);
    memory.write_u64(file_info_ptr + kDirLastWriteTime, entry.info.write_time);
    memory.write_u64(file_info_ptr + kDirChangeTime, entry.info.write_time);
    memory.write_u64(file_info_ptr + kDirEndOfFile, entry.info.size);
    memory.write_u64(file_info_ptr + kDirAllocationSize,
                     entry.info.allocation_size);
    memory.write_u32(file_info_ptr + kDirAttributes, entry.info.attributes);
    memory.write_u32(file_info_ptr + kDirFileNameLength, name_length);
    memory.write_block(file_info_ptr + kDirInfoHeaderSize, entry.name.data(),
                       name_length);

    write_io_status(io_status_block, x_status::success, length);
    signal_io_event(event_handle);
    return x_status::success;
}


// --- structured exception handling ----------------------------------------

namespace {
// X_EXCEPTION_RECORD: code (0x00), flags (0x04), record (0x08), address
// (0x0C), parameter count (0x10), then the parameters.
constexpr uint32_t kExceptionCode = 0x00;
constexpr uint32_t kExceptionParameterCount = 0x10;
constexpr uint32_t kExceptionParameters = 0x14;
} // namespace

void RtlRaiseException(uint32_t record_ptr) {
    if (record_ptr == 0) return;
    guest_memory& memory = active_kernel()->memory();
    const uint32_t code = memory.read_u32(record_ptr + kExceptionCode);
    const uint32_t count = memory.read_u32(record_ptr + kExceptionParameterCount);

    if (code == x_exception::set_thread_name && count >= 2) {
        // A debugger convention rather than a real exception: parameter 1 is a
        // pointer to the name. Recording it makes a thread dump readable.
        const uint32_t name_ptr =
            memory.read_u32(record_ptr + kExceptionParameters + 4);
        std::string name;
        for (uint32_t i = 0; i < 64; ++i) {
            const uint8_t c = memory.read_u8(name_ptr + i);
            if (c == 0) break;
            name.push_back(static_cast<char>(c));
        }
        active_kernel()->debug_print("thread name: " + name);
        return;
    }

    char message[128];
    std::snprintf(message, sizeof(message),
                  "unhandled exception %08X with %u parameter(s)", code, count);
    active_kernel()->debug_print(message);
    if (code == x_exception::cpp_exception) {
        // A C++ throw that reaches here has nowhere to go: without unwinding,
        // returning would resume the throwing code as though it had succeeded.
        active_kernel()->request_terminate("unhandled C++ exception");
    }
}

void RtlUnwind(uint32_t target_frame, uint32_t target_ip, uint32_t record_ptr,
               uint32_t return_value) {
    (void)target_frame;
    (void)target_ip;
    (void)record_ptr;
    (void)return_value;
    // Unwinding native frames from the guest's unwind data is not modelled.
    // Returning normally is wrong, but it is wrong in a way the caller can
    // survive; the alternative is jumping to an address in a frame that does
    // not exist on the host stack.
    active_kernel()->debug_print("RtlUnwind: unwinding is not modelled");
}

void RtlCaptureContext(uint32_t context_ptr) {
    if (context_ptr == 0) return;
    // An X_CONTEXT on this architecture: the 32-bit control words, then 32 GPRs
    // and 32 FPRs as 64-bit values, then the vector state. 0x5F0 bytes covers
    // the whole of it, which is what matters here - the block is zeroed, so a
    // caller walking it finds a terminated chain rather than stale bytes.
    constexpr uint32_t kContextSize = 0x5F0;
    active_kernel()->memory().zero_block(context_ptr, kContextSize);
    // Why not fill it in: the recompiled CPU holds guest register state in a
    // PPCContext belonging to whichever host function is executing, and this
    // handler is reached through the import bridge with no access to its
    // caller's. A partial fill would be worse than an empty one - a title's
    // crash reporter would walk a frame chain built from zeros mixed with
    // whatever it could read, and report a stack that never existed.
    active_kernel()->debug_print(
        "RtlCaptureContext: no register snapshot available; context zeroed");
}

uint32_t __C_specific_handler(uint32_t record_ptr, uint32_t frame,
                              uint32_t context_ptr, uint32_t dispatch_ptr) {
    (void)record_ptr;
    (void)frame;
    (void)context_ptr;
    (void)dispatch_ptr;
    // ExceptionContinueSearch: this frame does not claim the exception.
    return 1;
}


// --- XMA audio ------------------------------------------------------------

namespace {

// XMA_CONTEXT_DATA is 64 bytes of packed bitfields, sixteen big-endian dwords.
// The fields are laid out from the least significant bit of each dword up, so
// a field is (dword, shift, width). Only the ones a title reaches through the
// XMA* calls are named; the rest are the hardware's own working state and are
// left alone.
struct xma_field {
    uint32_t dword;
    uint32_t shift;
    uint32_t width;
};

// DWORD 0
constexpr xma_field kInputBuffer0PacketCount{0, 0, 12};
constexpr xma_field kLoopCount{0, 12, 8};
constexpr xma_field kInputBuffer0Valid{0, 20, 1};
constexpr xma_field kInputBuffer1Valid{0, 21, 1};
constexpr xma_field kOutputBufferBlockCount{0, 22, 5};
constexpr xma_field kOutputBufferWriteOffset{0, 27, 5};
// DWORD 1
constexpr xma_field kInputBuffer1PacketCount{1, 0, 12};
constexpr xma_field kLoopSubframeEnd{1, 14, 3};
constexpr xma_field kLoopSubframeSkip{1, 17, 3};
constexpr xma_field kSubframeDecodeCount{1, 20, 4};
constexpr xma_field kSampleRate{1, 27, 2};
constexpr xma_field kIsStereo{1, 29, 1};
constexpr xma_field kOutputBufferValid{1, 31, 1};
// DWORD 2..4
constexpr xma_field kInputBufferReadOffset{2, 0, 26};
constexpr xma_field kLoopStart{3, 0, 26};
constexpr xma_field kLoopEnd{4, 0, 26};
constexpr xma_field kPacketMetadata{4, 26, 5};
// Which input buffer the hardware is reading. The title never looks at it; it
// is how the decoder remembers where it was between passes, and zeroing it on
// initialise is what makes a fresh context start on buffer 0.
constexpr xma_field kCurrentBuffer{4, 31, 1};
// DWORD 5..8 are whole dwords.
constexpr uint32_t kInputBuffer0PtrDword = 5;
constexpr uint32_t kInputBuffer1PtrDword = 6;
constexpr uint32_t kOutputBufferPtrDword = 7;
// DWORD 9
constexpr xma_field kOutputBufferReadOffset{9, 0, 5};

uint32_t read_xma_field(uint32_t context_ptr, const xma_field& field) {
    const uint32_t word =
        active_kernel()->memory().read_u32(context_ptr + field.dword * 4);
    const uint32_t mask =
        field.width >= 32 ? 0xFFFFFFFFu : ((1u << field.width) - 1u);
    return (word >> field.shift) & mask;
}

void write_xma_field(uint32_t context_ptr, const xma_field& field,
                     uint32_t value) {
    guest_memory& memory = active_kernel()->memory();
    const uint32_t address = context_ptr + field.dword * 4;
    const uint32_t mask =
        field.width >= 32 ? 0xFFFFFFFFu : ((1u << field.width) - 1u);
    const uint32_t word = memory.read_u32(address);
    memory.write_u32(address,
                     (word & ~(mask << field.shift)) |
                         ((value & mask) << field.shift));
}

// X_XMA_CONTEXT_INIT, 56 bytes of big-endian words followed by the loop data.
constexpr uint32_t kInitInputBuffer0Ptr = 0x00;
constexpr uint32_t kInitInputBuffer0PacketCount = 0x04;
constexpr uint32_t kInitInputBuffer1Ptr = 0x08;
constexpr uint32_t kInitInputBuffer1PacketCount = 0x0C;
constexpr uint32_t kInitInputBufferReadOffset = 0x10;
constexpr uint32_t kInitOutputBufferPtr = 0x14;
constexpr uint32_t kInitOutputBufferBlockCount = 0x18;
constexpr uint32_t kInitSubframeDecodeCount = 0x20;
constexpr uint32_t kInitChannelCount = 0x24;
constexpr uint32_t kInitSampleRate = 0x28;
constexpr uint32_t kInitLoopStart = 0x2C;
constexpr uint32_t kInitLoopEnd = 0x30;
constexpr uint32_t kInitLoopCount = 0x34;        // u8
constexpr uint32_t kInitLoopSubframeEnd = 0x35;  // u8
constexpr uint32_t kInitLoopSubframeSkip = 0x36; // u8

bool xma_context_is_valid(uint32_t context_ptr) {
    apu::xma_registers* registers = apu::active_xma_registers();
    return registers != nullptr && context_ptr != 0 &&
           registers->context_index(context_ptr) !=
               apu::xma_registers::kNoContext;
}

// Throws away the host-side decoding state for a context. Defined further down
// with the decoder; declared here because a context being initialised or
// released is a new stream, and carrying a half-decoded frame across that
// boundary is audible.
void forget_xma_stream(uint32_t context_ptr);

} // namespace

uint32_t XMACreateContext(uint32_t context_out_ptr) {
    apu::xma_registers* registers = apu::active_xma_registers();
    if (registers == nullptr) return x_status::no_memory;
    const uint32_t context_ptr = registers->allocate_context();
    if (context_out_ptr != 0)
        active_kernel()->memory().write_u32(context_out_ptr, context_ptr);
    if (context_ptr == 0) return x_status::no_memory;
    active_kernel()->memory().zero_block(context_ptr, apu::kXmaContextSize);
    return x_status::success;
}

uint32_t XMAReleaseContext(uint32_t context_ptr) {
    apu::xma_registers* registers = apu::active_xma_registers();
    if (registers != nullptr) registers->release_context(context_ptr);
    forget_xma_stream(context_ptr);
    return 0;
}

uint32_t XMAInitializeContext(uint32_t context_ptr, uint32_t init_ptr) {
    if (!xma_context_is_valid(context_ptr) || init_ptr == 0)
        return x_error::function_failed;
    // A different stream from here on, however the slot was used before.
    forget_xma_stream(context_ptr);
    guest_memory& memory = active_kernel()->memory();

    // The buffers arrive as ordinary guest pointers and are stored as physical
    // addresses: the decoder reads them, and it has no view of the CPU's
    // virtual mapping.
    const uint32_t input0 = memory.read_u32(init_ptr + kInitInputBuffer0Ptr);
    const uint32_t input1 = memory.read_u32(init_ptr + kInitInputBuffer1Ptr);
    const uint32_t output = memory.read_u32(init_ptr + kInitOutputBufferPtr);

    memory.zero_block(context_ptr, apu::kXmaContextSize);
    memory.write_u32(context_ptr + kInputBuffer0PtrDword * 4,
                     input0 != 0 ? MmGetPhysicalAddress(input0) : 0);
    memory.write_u32(context_ptr + kInputBuffer1PtrDword * 4,
                     input1 != 0 ? MmGetPhysicalAddress(input1) : 0);
    memory.write_u32(context_ptr + kOutputBufferPtrDword * 4,
                     output != 0 ? MmGetPhysicalAddress(output) : 0);

    write_xma_field(context_ptr, kInputBuffer0PacketCount,
                    memory.read_u32(init_ptr + kInitInputBuffer0PacketCount));
    write_xma_field(context_ptr, kInputBuffer1PacketCount,
                    memory.read_u32(init_ptr + kInitInputBuffer1PacketCount));
    write_xma_field(context_ptr, kInputBufferReadOffset,
                    memory.read_u32(init_ptr + kInitInputBufferReadOffset));
    write_xma_field(context_ptr, kOutputBufferBlockCount,
                    memory.read_u32(init_ptr + kInitOutputBufferBlockCount));
    write_xma_field(context_ptr, kSubframeDecodeCount,
                    memory.read_u32(init_ptr + kInitSubframeDecodeCount));
    write_xma_field(context_ptr, kIsStereo,
                    memory.read_u32(init_ptr + kInitChannelCount) >= 1 ? 1 : 0);
    write_xma_field(context_ptr, kSampleRate,
                    memory.read_u32(init_ptr + kInitSampleRate));
    write_xma_field(context_ptr, kLoopStart,
                    memory.read_u32(init_ptr + kInitLoopStart));
    write_xma_field(context_ptr, kLoopEnd,
                    memory.read_u32(init_ptr + kInitLoopEnd));
    write_xma_field(context_ptr, kLoopCount,
                    memory.read_u8(init_ptr + kInitLoopCount));
    write_xma_field(context_ptr, kLoopSubframeEnd,
                    memory.read_u8(init_ptr + kInitLoopSubframeEnd));
    write_xma_field(context_ptr, kLoopSubframeSkip,
                    memory.read_u8(init_ptr + kInitLoopSubframeSkip));
    return 0;
}

uint32_t XMASetLoopData(uint32_t context_ptr, uint32_t loop_data_ptr) {
    if (!xma_context_is_valid(context_ptr) || loop_data_ptr == 0) return 0;
    // The loop block the title passes has the same shape as the context, so
    // the fields are read from the same offsets - which is what Xenia does.
    write_xma_field(context_ptr, kLoopStart,
                    read_xma_field(loop_data_ptr, kLoopStart));
    write_xma_field(context_ptr, kLoopEnd,
                    read_xma_field(loop_data_ptr, kLoopEnd));
    write_xma_field(context_ptr, kLoopCount,
                    read_xma_field(loop_data_ptr, kLoopCount));
    write_xma_field(context_ptr, kLoopSubframeEnd,
                    read_xma_field(loop_data_ptr, kLoopSubframeEnd));
    write_xma_field(context_ptr, kLoopSubframeSkip,
                    read_xma_field(loop_data_ptr, kLoopSubframeSkip));
    return 0;
}

uint32_t XMAGetInputBufferReadOffset(uint32_t context_ptr) {
    if (!xma_context_is_valid(context_ptr)) return 0;
    return read_xma_field(context_ptr, kInputBufferReadOffset);
}

uint32_t XMASetInputBufferReadOffset(uint32_t context_ptr, uint32_t value) {
    if (xma_context_is_valid(context_ptr))
        write_xma_field(context_ptr, kInputBufferReadOffset, value);
    return 0;
}

uint32_t XMASetInputBuffer0(uint32_t context_ptr, uint32_t buffer,
                            uint32_t packet_count) {
    if (!xma_context_is_valid(context_ptr)) return x_error::function_failed;
    active_kernel()->memory().write_u32(context_ptr + kInputBuffer0PtrDword * 4,
                                        MmGetPhysicalAddress(buffer));
    write_xma_field(context_ptr, kInputBuffer0PacketCount, packet_count);
    return 0;
}

uint32_t XMAIsInputBuffer0Valid(uint32_t context_ptr) {
    if (!xma_context_is_valid(context_ptr)) return 0;
    return read_xma_field(context_ptr, kInputBuffer0Valid);
}

uint32_t XMASetInputBuffer0Valid(uint32_t context_ptr) {
    if (xma_context_is_valid(context_ptr))
        write_xma_field(context_ptr, kInputBuffer0Valid, 1);
    return 0;
}

uint32_t XMASetInputBuffer1(uint32_t context_ptr, uint32_t buffer,
                            uint32_t packet_count) {
    if (!xma_context_is_valid(context_ptr)) return x_error::function_failed;
    active_kernel()->memory().write_u32(context_ptr + kInputBuffer1PtrDword * 4,
                                        MmGetPhysicalAddress(buffer));
    write_xma_field(context_ptr, kInputBuffer1PacketCount, packet_count);
    return 0;
}

uint32_t XMAIsInputBuffer1Valid(uint32_t context_ptr) {
    if (!xma_context_is_valid(context_ptr)) return 0;
    return read_xma_field(context_ptr, kInputBuffer1Valid);
}

uint32_t XMASetInputBuffer1Valid(uint32_t context_ptr) {
    if (xma_context_is_valid(context_ptr))
        write_xma_field(context_ptr, kInputBuffer1Valid, 1);
    return 0;
}

uint32_t XMAIsOutputBufferValid(uint32_t context_ptr) {
    if (!xma_context_is_valid(context_ptr)) return 0;
    return read_xma_field(context_ptr, kOutputBufferValid);
}

uint32_t XMASetOutputBufferValid(uint32_t context_ptr) {
    if (xma_context_is_valid(context_ptr))
        write_xma_field(context_ptr, kOutputBufferValid, 1);
    return 0;
}

uint32_t XMAGetOutputBufferReadOffset(uint32_t context_ptr) {
    if (!xma_context_is_valid(context_ptr)) return 0;
    return read_xma_field(context_ptr, kOutputBufferReadOffset);
}

uint32_t XMASetOutputBufferReadOffset(uint32_t context_ptr, uint32_t value) {
    if (xma_context_is_valid(context_ptr))
        write_xma_field(context_ptr, kOutputBufferReadOffset, value);
    return 0;
}

uint32_t XMAGetOutputBufferWriteOffset(uint32_t context_ptr) {
    if (!xma_context_is_valid(context_ptr)) return 0;
    return read_xma_field(context_ptr, kOutputBufferWriteOffset);
}

uint32_t XMAGetPacketMetadata(uint32_t context_ptr) {
    if (!xma_context_is_valid(context_ptr)) return 0;
    return read_xma_field(context_ptr, kPacketMetadata);
}

namespace {

// One decoding stream per context, kept alive across kicks: a codec frame
// depends on the ones before it, so a decoder rebuilt each time would produce
// a click at every buffer boundary. Leftover samples carry over too, because a
// packet decodes to far more audio than the output ring can hold at once - and
// carrying them is what lets the input buffer be retired at the rate the title
// drains the ring rather than all at once.
struct xma_stream {
    apu::xma_decoder decoder;
    std::vector<int16_t> pending;
    // The format the decoder was last opened for - tracked here so a fresh
    // session is detectable even when there is no live decoder to ask (a
    // cache-only build has none).
    uint32_t sample_rate{0};
    uint32_t channels{0};
};
std::mutex g_xma_streams_mutex;
std::map<uint32_t, std::unique_ptr<xma_stream>> g_xma_streams;
std::atomic<uint64_t> g_xma_blocks{0};

void forget_xma_stream(uint32_t context_ptr) {
    const std::lock_guard<std::mutex> lock(g_xma_streams_mutex);
    g_xma_streams.erase(context_ptr);
}

// The console's four sample rates, by the context's two-bit field.
uint32_t xma_sample_rate(uint32_t code) {
    switch (code) {
        case 0: return 24000;
        case 1: return 32000;
        case 2: return 44100;
        default: return 48000;
    }
}

// The compressed side: packets of a fixed 2048 bytes, addressed by a BIT
// offset into the buffer - the field is a bit position, not a byte one - whose
// first 32 bits are a header rather than audio.
constexpr uint32_t kXmaPacketBytes = 2048;
constexpr uint32_t kXmaPacketBits = kXmaPacketBytes * 8;
constexpr uint32_t kXmaPacketHeaderBits = 32;
// The decoded side: a ring of 256-byte blocks of interleaved 16-bit samples,
// at most 31 of them because the offsets are five-bit fields.
constexpr uint32_t kXmaBlockBytes = 256;
constexpr uint32_t kXmaBlockSamples = kXmaBlockBytes / sizeof(int16_t);

// A packet header's low byte says how many packets to step over to reach the
// next one belonging to this stream: several streams can be interleaved in one
// buffer, which is also why a context starts reading at its own index. Zero -
// the single-stream case - means simply the next packet.
uint32_t xma_packet_skip_count(const uint8_t* packet) { return packet[3]; }

// Hands the buffer back to the title and moves to the other one. This is the
// only thing that clears a valid bit, and it happens after the last packet has
// been read - not when the buffer is queued, and not when the context is
// kicked. A title watches these bits to decide whether its voice is still
// playing, so retiring one early reads as a stream that has ended.
void xma_retire_input_buffer(uint32_t context_ptr, uint32_t buffer) {
    write_xma_field(context_ptr,
                    buffer == 0 ? kInputBuffer0Valid : kInputBuffer1Valid, 0);
    write_xma_field(context_ptr, kCurrentBuffer, buffer ^ 1);
    write_xma_field(context_ptr, kInputBufferReadOffset, kXmaPacketHeaderBits);
}

// The hardware loops INSIDE the input buffer rather than handing it back, and
// that is the whole mechanism behind a piece of music that repeats: the title
// queues the track once, sets a loop over it, and never touches the buffer
// again. Ignoring the loop fields plays the track through exactly once and
// then retires the buffer - and a retired buffer is how the title is told its
// voice has ended, so the music stops partway into play and never returns
// while every uncompressed effect keeps going. Geometry Wars 2 sets
// `loop 32..2513312 x255` on its music context, which is the entire buffer,
// forever.
//
// The three conditions are Xenia's TrySetupNextLoop: a count that has not run
// out, and a loop that is a real span. 255 is the console's "forever" and is
// the one value that does not count down.
//
// Sub-packet precision is deliberately not attempted. loop_start and loop_end
// are bit offsets to a FRAME, and this decoder walks whole packets, so the
// loop point lands on the packet containing it. A frame is well under a
// packet, so what that costs is a fraction of a packet of audio at the seam
// once per repeat, against silence for the rest of the session.
bool xma_try_loop(uint32_t context_ptr) {
    const uint32_t count = read_xma_field(context_ptr, kLoopCount);
    const uint32_t start = read_xma_field(context_ptr, kLoopStart);
    const uint32_t end = read_xma_field(context_ptr, kLoopEnd);
    if (count == 0 || start >= end) return false;
    write_xma_field(
        context_ptr, kInputBufferReadOffset,
        start < kXmaPacketHeaderBits ? kXmaPacketHeaderBits : start);
    if (count < 255) write_xma_field(context_ptr, kLoopCount, count - 1);
    return true;
}

// Whether caching the WHOLE buffer as one unit is safe for this voice: either
// there is no loop at all (an ordinary one-shot effect - one full pass is
// everything it will ever play), or the loop spans the entire buffer (Geometry
// Wars 2's music: `loop 32..2513312 x255`, the whole buffer, forever). A loop
// that covers only PART of a buffer must keep decoding packet by packet, or
// the cache would capture audio the voice would never actually reach on a
// real replay.
bool xma_loop_spans_whole_buffer(uint32_t context_ptr, uint32_t packets) {
    const uint32_t count = read_xma_field(context_ptr, kLoopCount);
    if (count == 0) return true;
    const uint32_t start = read_xma_field(context_ptr, kLoopStart);
    const uint32_t end = read_xma_field(context_ptr, kLoopEnd);
    return start <= kXmaPacketHeaderBits && end >= packets * kXmaPacketBits;
}

// Tries to satisfy a WHOLE input buffer from the pre-baked PCM cache, or (in
// bake mode) decodes it once up front and stores it. See
// apu/xma_pcm_cache.h for why "the whole buffer, from a fresh decoder" is the
// unit that is safe to cache. Returns true if it fully handled the buffer -
// stream.pending has the audio and the caller can retire (or loop) it without
// falling into the ordinary per-packet path.
bool try_whole_buffer_cache(xma_stream& stream, const uint8_t* whole,
                            uint32_t bytes) {
    if (apu::xma_pcm_cache* cache = apu::active_xma_pcm_cache()) {
        std::vector<int16_t> cached;
        if (cache->lookup(whole, bytes, stream.sample_rate, stream.channels,
                          cached)) {
            stream.pending.insert(stream.pending.end(), cached.begin(),
                                  cached.end());
            return true;
        }
    }
    apu::xma_pcm_bake_writer* bake = apu::active_xma_pcm_bake_writer();
    if (bake == nullptr || !apu::xma_decoder::available()) return false;

    // A decoder of its own, isolated from `stream.decoder`: baking must not
    // disturb whatever state the title's own live playback is relying on.
    apu::xma_decoder fresh;
    std::string error;
    if (!fresh.open(stream.sample_rate, stream.channels, error)) return false;
    std::vector<int16_t> decoded;
    for (uint32_t offset = 0; offset < bytes; offset += kXmaPacketBytes) {
        if (bytes - offset < kXmaPacketBytes) break; // partial trailing packet
        if (!fresh.decode(whole + offset, kXmaPacketBytes, decoded, error))
            break;
    }
    if (decoded.empty()) return false;
    bake->store(whole, bytes, stream.sample_rate, stream.channels, decoded);
    stream.pending.insert(stream.pending.end(), decoded.begin(), decoded.end());
    return true;
}

// Decodes one packet into `stream.pending`, or retires a spent buffer. Returns
// false only when there is no more input to read at all - the caller's signal
// to stop rather than spin.
bool decode_next_xma_packet(uint32_t context_ptr, xma_stream& stream) {
    guest_memory& memory = active_kernel()->memory();
    uint32_t buffer = read_xma_field(context_ptr, kCurrentBuffer);
    const auto valid = [&](uint32_t which) {
        return read_xma_field(
                   context_ptr,
                   which == 0 ? kInputBuffer0Valid : kInputBuffer1Valid) != 0;
    };
    if (!valid(buffer)) {
        if (!valid(buffer ^ 1)) return false;
        // Whichever buffer the title filled is the one to read next, and it
        // starts at its first packet.
        buffer ^= 1;
        write_xma_field(context_ptr, kCurrentBuffer, buffer);
        write_xma_field(context_ptr, kInputBufferReadOffset,
                        kXmaPacketHeaderBits);
    }

    const uint32_t input = memory.read_u32(
        context_ptr +
        (buffer == 0 ? kInputBuffer0PtrDword : kInputBuffer1PtrDword) * 4);
    const uint32_t packets = read_xma_field(
        context_ptr,
        buffer == 0 ? kInputBuffer0PacketCount : kInputBuffer1PacketCount);
    if (input == 0 || packets == 0) {
        // Marked valid with nothing in it. Retiring it is what lets the title
        // move on; leaving it would stall the voice on a buffer with no audio.
        xma_retire_input_buffer(context_ptr, buffer);
        return true;
    }

    uint32_t offset_bits = read_xma_field(context_ptr, kInputBufferReadOffset);
    if (offset_bits < kXmaPacketHeaderBits) offset_bits = kXmaPacketHeaderBits;
    // A loop whose end is short of the last packet comes round here rather
    // than at the end of the buffer.
    const uint32_t loop_end = read_xma_field(context_ptr, kLoopEnd);
    if (loop_end != 0 && offset_bits >= loop_end &&
        xma_try_loop(context_ptr)) {
        offset_bits = read_xma_field(context_ptr, kInputBufferReadOffset);
        if (offset_bits < kXmaPacketHeaderBits)
            offset_bits = kXmaPacketHeaderBits;
    }
    const uint32_t index = offset_bits / kXmaPacketBits;
    const uint32_t address = (input | kPhysicalBase) + index * kXmaPacketBytes;
    if (index >= packets) {
        // Ran off the end without the packet walk noticing - a skip count
        // pointing past the buffer, or an offset the title moved itself.
        if (!xma_try_loop(context_ptr))
            xma_retire_input_buffer(context_ptr, buffer);
        return true;
    }
    if (!memory.committed(address, kXmaPacketBytes)) {
        // Nothing to read and no reason to think looping would find any.
        xma_retire_input_buffer(context_ptr, buffer);
        return true;
    }

    // The whole-buffer fast path: at the first packet of every pass through
    // this buffer, including a loop restart (index resets to 0 there too) -
    // see xma_loop_spans_whole_buffer for why a partial-buffer loop excludes
    // itself. The whole buffer is always resident by this point: the guest
    // fills it, then marks it valid, before any of this runs.
    if (index == 0 && xma_loop_spans_whole_buffer(context_ptr, packets)) {
        const uint32_t whole_bytes = packets * kXmaPacketBytes;
        if (memory.committed(input | kPhysicalBase, whole_bytes)) {
            const auto* whole = static_cast<const uint8_t*>(
                memory.host(input | kPhysicalBase, whole_bytes));
            if (try_whole_buffer_cache(stream, whole, whole_bytes)) {
                if (!xma_try_loop(context_ptr))
                    xma_retire_input_buffer(context_ptr, buffer);
                return true;
            }
        }
    }

    const auto* host =
        static_cast<const uint8_t*>(memory.host(address, kXmaPacketBytes));
    if (apu::xma_decoder::available()) {
        std::string error;
        stream.decoder.decode(host, kXmaPacketBytes, stream.pending, error);
    }

    const uint32_t next = index + 1 + xma_packet_skip_count(host);
    if (next >= packets) {
        // The buffer is read. A looping voice goes back round it and keeps it;
        // anything else hands it back. Either way the audio just decoded is
        // still in `pending` and goes out over the passes that follow.
        if (!xma_try_loop(context_ptr))
            xma_retire_input_buffer(context_ptr, buffer);
    } else {
        write_xma_field(context_ptr, kInputBufferReadOffset,
                        next * kXmaPacketBits + kXmaPacketHeaderBits);
    }
    return true;
}

} // namespace

uint32_t xma_output_free_blocks(uint32_t read_offset, uint32_t write_offset,
                                uint32_t blocks) {
    if (blocks <= 1) return 0;
    if (read_offset >= blocks) read_offset = 0;
    if (write_offset >= blocks) write_offset = 0;
    const uint32_t used = write_offset >= read_offset
                              ? write_offset - read_offset
                              : blocks - read_offset + write_offset;
    return blocks - used - 1;
}

// One work pass, which is what a kick buys: decode as far as the output ring
// has room and no further.
//
// The ring is the rate limiter for the whole handshake. Deciding by how much
// input is queued instead - decoding a whole buffer the moment it arrives -
// hands the title back an empty voice within one service pass, and it stops
// the voice as finished. That is why this stops at the ring and keeps the
// leftover samples: the input buffer then retires at the speed the title
// actually plays the audio.
uint32_t xma_work_context(uint32_t context_ptr) {
    // A cache-only build (no FFmpeg, e.g. Android without libavcodec) still
    // has work to do as long as a baked cache is loaded - it just cannot
    // handle a cache MISS, which falls through silently inside
    // decode_next_xma_packet/try_whole_buffer_cache rather than aborting the
    // whole pass.
    const bool has_decoder = apu::xma_decoder::available();
    const bool has_cache = apu::active_xma_pcm_cache() != nullptr;
    if (!has_decoder && !has_cache) return 0;
    kernel_state* kernel = active_kernel();
    guest_memory& memory = kernel->memory();

    // Nowhere to put the result means there is no work to do - and writing
    // anyway would overwrite audio the title has not read.
    if (read_xma_field(context_ptr, kOutputBufferValid) == 0) return 0;
    const uint32_t output_ptr =
        memory.read_u32(context_ptr + kOutputBufferPtrDword * 4);
    if (output_ptr == 0) return 0;
    const uint32_t blocks = read_xma_field(context_ptr, kOutputBufferBlockCount);
    if (blocks == 0) return 0;

    const std::lock_guard<std::mutex> lock(g_xma_streams_mutex);
    std::unique_ptr<xma_stream>& stream = g_xma_streams[context_ptr];
    if (!stream) stream = std::make_unique<xma_stream>();

    const uint32_t rate =
        xma_sample_rate(read_xma_field(context_ptr, kSampleRate));
    const uint32_t channels =
        read_xma_field(context_ptr, kIsStereo) != 0 ? 2u : 1u;
    if (stream->sample_rate != rate || stream->channels != channels) {
        stream->sample_rate = rate;
        stream->channels = channels;
        stream->pending.clear();
        if (has_decoder) {
            std::string error;
            if (!stream->decoder.open(rate, channels, error) && !has_cache)
                return 0;
        }
    }

    uint32_t write_offset =
        read_xma_field(context_ptr, kOutputBufferWriteOffset);
    const uint32_t read_offset =
        read_xma_field(context_ptr, kOutputBufferReadOffset);
    uint32_t free_blocks = xma_output_free_blocks(read_offset, write_offset, blocks);
    if (write_offset >= blocks) write_offset = 0;

    // Kept only for the host bypass below, so it sees exactly what the ring
    // got rather than a second guess at it.
    std::vector<int16_t> played;
    uint32_t written = 0;
    std::size_t taken = 0;
    // A pass runs inside the title's own audio service, at DPC level, so it
    // cannot be allowed to run long: a packet that decodes to nothing (they
    // exist - a frame can start in a later packet) would otherwise walk a
    // whole 4095-packet buffer in one call. The next kick carries on where
    // this one stopped, and one packet already holds several rings of audio.
    uint32_t packets_left = 16;
    while (free_blocks != 0) {
        if (stream->pending.size() - taken < kXmaBlockSamples) {
            if (taken != 0) {
                stream->pending.erase(
                    stream->pending.begin(),
                    stream->pending.begin() + static_cast<std::ptrdiff_t>(taken));
                taken = 0;
            }
            if (packets_left-- == 0) break;
            if (!decode_next_xma_packet(context_ptr, *stream)) break;
            continue;
        }
        const uint32_t at =
            (output_ptr | kPhysicalBase) + write_offset * kXmaBlockBytes;
        if (!memory.committed(at, kXmaBlockBytes)) break;
        for (uint32_t i = 0; i < kXmaBlockSamples; ++i)
            memory.write_u16(at + i * 2,
                             static_cast<uint16_t>(stream->pending[taken + i]));
        if (kernel->has_xma_sink())
            played.insert(played.end(), stream->pending.begin() + taken,
                          stream->pending.begin() + taken + kXmaBlockSamples);
        taken += kXmaBlockSamples;
        write_offset = (write_offset + 1) % blocks;
        --free_blocks;
        ++written;
    }
    if (taken != 0)
        stream->pending.erase(
            stream->pending.begin(),
            stream->pending.begin() + static_cast<std::ptrdiff_t>(taken));
    // WHITTY_XMA_DEBUG=1 traces the handshake: this is a rate loop between the
    // title and the hardware, and what it looks like when it stalls - which
    // offset stopped moving - is the only thing that says where the fault is.
    static const bool debug = [] {
        const char* value = std::getenv("WHITTY_XMA_DEBUG");
        return value != nullptr && value[0] == '1';
    }();
    if (debug) {
        static std::atomic<uint64_t> passes{0};
        const uint64_t pass = passes.fetch_add(1, std::memory_order_relaxed);
        if (pass < 24 || pass % 500 == 0)
            std::printf("  [xma] pass %llu ctx %08X out %08X %uHz %uch valid "
                        "%u%u buf %u packet "
                        "%u/%u ring %u->%u of %u free %u wrote %u pending %zu"
                        " loop %u..%u x%u\n",
                        static_cast<unsigned long long>(pass), context_ptr,
                        output_ptr, rate, channels,
                        read_xma_field(context_ptr, kInputBuffer0Valid),
                        read_xma_field(context_ptr, kInputBuffer1Valid),
                        read_xma_field(context_ptr, kCurrentBuffer),
                        read_xma_field(context_ptr, kInputBufferReadOffset) /
                            kXmaPacketBits,
                        read_xma_field(context_ptr,
                                       read_xma_field(context_ptr,
                                                      kCurrentBuffer) == 0
                                           ? kInputBuffer0PacketCount
                                           : kInputBuffer1PacketCount),
                        read_offset, write_offset, blocks,
                        xma_output_free_blocks(read_offset, write_offset, blocks),
                        written, stream->pending.size(),
                        read_xma_field(context_ptr, kLoopStart),
                        read_xma_field(context_ptr, kLoopEnd),
                        read_xma_field(context_ptr, kLoopCount));
    }

    if (written != 0) {
        write_xma_field(context_ptr, kOutputBufferWriteOffset, write_offset);
        g_xma_blocks.fetch_add(written, std::memory_order_relaxed);
        // The bypass that made the music audible before the handshake worked:
        // hand the samples straight to the host as well. Off unless asked for,
        // because the title mixes the ring itself and would then play both.
        if (kernel->has_xma_sink())
            kernel->submit_xma(played.data(),
                               static_cast<uint32_t>(played.size()), rate,
                               channels);
    }
    return written;
}

uint64_t xma_blocks_written() {
    return g_xma_blocks.load(std::memory_order_relaxed);
}

// The hardware's own worker, for a title that kicks a context by writing the
// register directly rather than through XMAEnableContext. One kick is one work
// pass either way, so this services the contexts that are still marked live
// and clears them as it goes.
uint32_t xma_pump() {
    apu::xma_registers* registers = apu::active_xma_registers();
    if (registers == nullptr) return 0;
    const uint32_t array = registers->context_array_address();
    if (array == 0) return 0;
    guest_memory& memory = active_kernel()->memory();

    uint32_t blocks = 0;
    for (uint32_t index = 0; index < apu::kXmaContextCount; ++index) {
        if (!registers->context_allocated(index)) continue;
        if (!registers->context_enabled(index)) continue;
        const uint32_t context_ptr =
            (array | kPhysicalBase) + index * apu::kXmaContextSize;
        if (!memory.committed(context_ptr, apu::kXmaContextSize)) continue;
        registers->clear_context(index);
        blocks += xma_work_context(context_ptr);
    }
    return blocks;
}

uint32_t XMAEnableContext(uint32_t context_ptr) {
    apu::xma_registers* registers = apu::active_xma_registers();
    if (registers == nullptr) return 0;
    const uint32_t index = registers->context_index(context_ptr);
    if (index == apu::xma_registers::kNoContext) return 0;

    // Starting the context goes through the register file, so the
    // live-context bitmap is correct for whatever eventually consumes it.
    registers->kick_context(index);

    // WHITTY_XMA_DUMP=path appends the compressed packets a title hands the
    // decoder. Whether a host decoder can read them at all is the question
    // that decides how XMA gets implemented, and it is answerable from a file
    // long before any decoder is written.
    if (const char* dump_path = std::getenv("WHITTY_XMA_DUMP")) {
        guest_memory& memory = active_kernel()->memory();
        const uint32_t packets =
            read_xma_field(context_ptr, kInputBuffer0PacketCount);
        const uint32_t buffer =
            memory.read_u32(context_ptr + kInputBuffer0PtrDword * 4);
        // The pointer is physical, like every address the hardware is given.
        const uint32_t address = buffer != 0 ? (buffer | kPhysicalBase) : 0;
        if (address != 0 && packets != 0) {
            const uint32_t bytes = packets * 2048;
            if (memory.committed(address, bytes)) {
                if (std::FILE* file = std::fopen(dump_path, "ab")) {
                    std::fwrite(memory.host(address, bytes), 1, bytes, file);
                    std::fclose(file);
                }
            }
        }
    }

    // The work happens here, before the call returns: the title reads the
    // offsets it kicked for on its very next service pass, and if nothing has
    // moved by then it decides the voice has finished. Leaving it to a worker
    // thread is a race the title loses.
    xma_work_context(context_ptr);
    // A kick buys one pass. The context goes quiet again until the title kicks
    // it, which it does every pass for as long as an input buffer is valid.
    registers->clear_context(index);
    return 0;
}

uint32_t XMADisableContext(uint32_t context_ptr, uint32_t wait) {
    (void)wait; // waiting is what the mutex below does
    apu::xma_registers* registers = apu::active_xma_registers();
    if (registers == nullptr) return x_error::success;
    const uint32_t index = registers->context_index(context_ptr);
    if (index == apu::xma_registers::kNoContext) return x_error::success;
    registers->clear_context(index);
    // The title disables a context before it rewrites the offsets, and means
    // "stop touching this". Taking the decoder's lock is that promise.
    const std::lock_guard<std::mutex> lock(g_xma_streams_mutex);
    return x_error::success;
}

uint32_t XMABlockWhileInUse(uint32_t context_ptr) {
    // The console spins here while the decoder still holds an input buffer -
    // but only if the context has a work buffer, and a context set up through
    // XMAInitializeContext has none, so it returns at once. It must NOT retire
    // the buffers: they are the title's, still queued, and dropping them here
    // silences everything the title had lined up.
    (void)context_ptr;
    const std::lock_guard<std::mutex> lock(g_xma_streams_mutex);
    return 0;
}

// --- odds and ends --------------------------------------------------------

uint32_t VdGetGraphicsAsicID() {
    // Titles compare this against 0x10: below it they initialise EDRAM
    // themselves, at or above they leave it to the newer silicon.
    return 0x11;
}

void VdInitializeEDRAM() {
    // EDRAM is the GPU's own memory and is not modelled; a title that gets
    // here has already been told it is running on silicon that does not need
    // this call.
}

uint32_t KeTryToAcquireSpinLockAtRaisedIrql(uint32_t lock_ptr) {
    // Guest threads are host threads, so this really can be contended, and the
    // compare-and-swap has to happen on the guest word itself rather than on a
    // host-side copy - a read followed by a write hands the lock to both
    // callers. It also has to write the same owner value the blocking acquire
    // writes, or a lock taken by one and released by the other is left held.
    std::atomic<uint32_t>* word = guest_spin_lock(lock_ptr);
    if (word == nullptr) return 0;
    uint32_t expected = 0;
    return word->compare_exchange_strong(expected, current_thread_token(),
                                         std::memory_order_acquire,
                                         std::memory_order_relaxed)
               ? 1u
               : 0u;
}


// --- video / GPU bridge --------------------------------------------------

namespace {

// X_VIDEO_MODE: 48 bytes of big-endian words.
constexpr uint32_t kVmDisplayWidth = 0x00;
constexpr uint32_t kVmDisplayHeight = 0x04;
constexpr uint32_t kVmIsInterlaced = 0x08;
constexpr uint32_t kVmIsWidescreen = 0x0C;
constexpr uint32_t kVmIsHiDef = 0x10;
constexpr uint32_t kVmRefreshRate = 0x14;
constexpr uint32_t kVmVideoStandard = 0x18;
constexpr uint32_t kVmUnknown8a = 0x1C;
constexpr uint32_t kVmUnknown01 = 0x20;

// X_DISPLAY_INFO: 0x58 bytes. Only the fields titles read are named.
constexpr uint32_t kDiSize = 0x58;
constexpr uint32_t kDiFrontBufferWidth = 0x00;  // u16
constexpr uint32_t kDiFrontBufferHeight = 0x02; // u16
constexpr uint32_t kDiScalerSourceX2 = 0x08 + 0x08;
constexpr uint32_t kDiScalerSourceY2 = 0x08 + 0x0C;
constexpr uint32_t kDiScaledOutputWidth = 0x08 + 0x10;
constexpr uint32_t kDiScaledOutputHeight = 0x08 + 0x14;
constexpr uint32_t kDiVerticalFilterType = 0x08 + 0x18;
constexpr uint32_t kDiHorizontalFilterType = 0x08 + 0x28;
constexpr uint32_t kDiOverscanLeft = 0x40;   // u16
constexpr uint32_t kDiOverscanTop = 0x42;    // u16
constexpr uint32_t kDiOverscanRight = 0x44;  // u16
constexpr uint32_t kDiOverscanBottom = 0x46; // u16
constexpr uint32_t kDiDisplayWidth = 0x48;   // u16
constexpr uint32_t kDiDisplayHeight = 0x4A;  // u16
constexpr uint32_t kDiRefreshRate = 0x4C;    // float
constexpr uint32_t kDiActualDisplayWidth = 0x56; // u16

// Display gamma: BT.709, which matches an HDTV most closely.
constexpr uint32_t kGammaTypeBt709 = 2;

// The title reserves 64 words of its ring for VdSwap to fill.
constexpr uint32_t kSwapReservedWords = 64;
// A texture fetch constant is six words.
constexpr uint32_t kFetchConstantWords = 6;
// Shader fetch constant 0, where the front buffer's fetch is written.
constexpr uint32_t kRegShaderConstantFetch00 = 0x4800;
// The two identifiers VdGetSystemCommandBuffer hands back.
constexpr uint32_t kSystemCommandBufferId0 = 0xBEEF0000;
constexpr uint32_t kSystemCommandBufferId1 = 0xBEEF0001;
constexpr uint32_t kSystemCommandBufferSize = 0x94;
// A PM4 type-0 packet writing `count` consecutive registers from `reg`.
constexpr uint32_t make_packet_type0(uint32_t reg, uint32_t count) {
    return ((count - 1) << 16) | (reg & 0x7FFFu);
}
// A PM4 type-3 packet: an opcode and `count` payload dwords behind it.
constexpr uint32_t make_packet_type3(uint32_t opcode, uint32_t count) {
    return (3u << 30) | ((count - 1) << 16) | ((opcode & 0x7Fu) << 8);
}
// A PM4 type-2 packet: one word, no payload, skipped by the command processor.
// This - not zero - is what unused command-buffer space has to hold.
constexpr uint32_t kPacketType2 = 0x80000000u;

} // namespace

void VdQueryVideoMode(uint32_t video_mode_ptr) {
    if (video_mode_ptr == 0) return;
    guest_memory& memory = active_kernel()->memory();
    memory.zero_block(video_mode_ptr, x_video::video_mode_size);
    memory.write_u32(video_mode_ptr + kVmDisplayWidth, x_video::display_width);
    memory.write_u32(video_mode_ptr + kVmDisplayHeight, x_video::display_height);
    memory.write_u32(video_mode_ptr + kVmIsInterlaced, 0);
    memory.write_u32(video_mode_ptr + kVmIsWidescreen, 1);
    memory.write_u32(video_mode_ptr + kVmIsHiDef, 1);
    memory.write_f32(video_mode_ptr + kVmRefreshRate, x_video::refresh_rate);
    memory.write_u32(video_mode_ptr + kVmVideoStandard,
                     x_video::video_standard_ntsc);
    memory.write_u32(video_mode_ptr + kVmUnknown8a, x_video::unknown_0x8a);
    memory.write_u32(video_mode_ptr + kVmUnknown01, x_video::unknown_0x01);
}

uint32_t VdQueryVideoFlags() {
    uint32_t flags = x_video::flag_widescreen; // the reported mode is 16:9
    if (x_video::display_width >= 1024) flags |= x_video::flag_1024_wide;
    if (x_video::display_width >= 1920) flags |= x_video::flag_1920_wide;
    return flags;
}

void VdGetCurrentDisplayInformation(uint32_t display_info_ptr) {
    if (display_info_ptr == 0) return;
    guest_memory& memory = active_kernel()->memory();
    memory.zero_block(display_info_ptr, kDiSize);
    const uint16_t width = static_cast<uint16_t>(x_video::display_width);
    const uint16_t height = static_cast<uint16_t>(x_video::display_height);
    memory.write_u16(display_info_ptr + kDiFrontBufferWidth, width);
    memory.write_u16(display_info_ptr + kDiFrontBufferHeight, height);
    memory.write_u32(display_info_ptr + kDiScalerSourceX2, width);
    memory.write_u32(display_info_ptr + kDiScalerSourceY2, height);
    memory.write_u32(display_info_ptr + kDiScaledOutputWidth, width);
    memory.write_u32(display_info_ptr + kDiScaledOutputHeight, height);
    memory.write_u32(display_info_ptr + kDiVerticalFilterType, 1);
    memory.write_u32(display_info_ptr + kDiHorizontalFilterType, 1);
    // A title-safe area inset, as the console reports.
    memory.write_u16(display_info_ptr + kDiOverscanLeft, 320);
    memory.write_u16(display_info_ptr + kDiOverscanTop, 180);
    memory.write_u16(display_info_ptr + kDiOverscanRight, 320);
    memory.write_u16(display_info_ptr + kDiOverscanBottom, 180);
    memory.write_u16(display_info_ptr + kDiDisplayWidth, width);
    memory.write_u16(display_info_ptr + kDiDisplayHeight, height);
    memory.write_f32(display_info_ptr + kDiRefreshRate, x_video::refresh_rate);
    memory.write_u16(display_info_ptr + kDiActualDisplayWidth, width);
}

void VdGetCurrentDisplayGamma(uint32_t type_ptr, uint32_t power_ptr) {
    guest_memory& memory = active_kernel()->memory();
    if (type_ptr) memory.write_u32(type_ptr, kGammaTypeBt709);
    if (power_ptr) memory.write_f32(power_ptr, 2.22222233f);
}

uint32_t VdInitializeEngines(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) {
    // The microcode pointers describe the real command processor's PFP/ME
    // firmware, which a native GPU does not run. Report success.
    active_kernel()->video().engines_initialized = true;
    return 1;
}

void VdShutdownEngines() {
    // Titles initialise, query, shut down and re-initialise; nothing is torn
    // down here, but the state tracks whether the title thinks it is running.
    active_kernel()->video().engines_initialized = false;
}

uint32_t VdEnableDisableClockGating(uint32_t enabled) {
    active_kernel()->video().clock_gating_enabled = enabled != 0;
    return 0;
}

uint32_t VdIsHSIOTrainingSucceeded() { return 1; }

uint32_t VdSetDisplayMode(uint32_t flags) {
    active_kernel()->video().display_mode_flags = flags;
    return 0;
}

void VdInitializeRingBuffer(uint32_t ptr, uint32_t size_log2) {
    video_state& video = active_kernel()->video();
    video.ring_buffer_address = ptr;
    video.ring_buffer_size_log2 = size_log2;
    video.ring_buffer_initialized = true;
}

void VdEnableRingBufferRPtrWriteBack(uint32_t ptr, uint32_t block_size_log2) {
    video_state& video = active_kernel()->video();
    video.read_pointer_writeback_address = ptr;
    video.read_pointer_writeback_block_log2 = block_size_log2;
    video.read_pointer_writeback_enabled = true;
}

void VdSetGraphicsInterruptCallback(uint32_t callback, uint32_t user_data) {
    video_state& video = active_kernel()->video();
    video.interrupt_callback = callback;
    video.interrupt_callback_data = user_data;
}

void VdCallGraphicsNotificationRoutines(uint32_t) {
    // Notification routines are driven by the host frame loop, not from here.
}

void VdGetSystemCommandBuffer(uint32_t p0_ptr, uint32_t p1_ptr) {
    guest_memory& memory = active_kernel()->memory();
    if (p0_ptr) {
        memory.zero_block(p0_ptr, kSystemCommandBufferSize);
        memory.write_u32(p0_ptr, kSystemCommandBufferId0);
    }
    if (p1_ptr) memory.write_u32(p1_ptr, kSystemCommandBufferId1);
}

void VdSetSystemCommandBufferGpuIdentifierAddress(uint32_t address) {
    active_kernel()->video().system_command_buffer_identifier = address;
}

uint32_t VdInitializeScalerCommandBuffer(uint32_t, uint32_t, uint32_t, uint32_t,
                                         uint32_t, uint32_t, uint32_t, uint32_t,
                                         uint32_t, uint32_t, uint32_t dest_ptr,
                                         uint32_t dest_count) {
    // The real call builds scaler commands. Nothing downstream reads them, and
    // the title only checks the returned word count, so fill with PM4 NOPs.
    if (dest_ptr == 0) return 0;
    guest_memory& memory = active_kernel()->memory();
    for (uint32_t i = 0; i < dest_count; ++i)
        memory.write_u32(dest_ptr + i * 4, 0x80000000u);
    return dest_count;
}

uint32_t VdPersistDisplay(uint32_t, uint32_t unk1_ptr) {
    // No display is persisted across a title switch; report that there is no
    // buffer to hand back.
    if (unk1_ptr) active_kernel()->memory().write_u32(unk1_ptr, 0);
    return 0;
}

uint32_t VdRetrainEDRAM(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t,
                        uint32_t) {
    return 0; // no EDRAM to retrain
}

uint32_t VdRetrainEDRAMWorker(uint32_t) { return 0; }

void VdSwap(uint32_t buffer_ptr, uint32_t fetch_ptr, uint32_t, uint32_t,
            uint32_t, uint32_t frontbuffer_ptr, uint32_t texture_format_ptr,
            uint32_t color_space_ptr, uint32_t width_ptr, uint32_t height_ptr) {
    kernel_state* kernel = active_kernel();
    guest_memory& memory = kernel->memory();
    video_state& video = kernel->video();

    // What is being presented. The front buffer address also appears in the
    // fetch constant's base address, in 4 KiB pages.
    if (frontbuffer_ptr) video.front_buffer_address = memory.read_u32(frontbuffer_ptr);
    if (texture_format_ptr)
        video.front_buffer_format = memory.read_u32(texture_format_ptr);
    if (width_ptr) video.front_buffer_width = memory.read_u32(width_ptr);
    if (height_ptr) video.front_buffer_height = memory.read_u32(height_ptr);
    (void)color_space_ptr; // always RGB

    // Which surface the scaler will actually read. The fetch constant's second
    // word carries the base address as a 4 KiB page number, the same encoding
    // every texture fetch uses - so decoding it here gives the renderer the one
    // address that identifies the presented picture, in the units a resolve
    // destination is written in.
    //
    // Read from the fetch rather than from `frontbuffer_ptr`: that argument is
    // the title's own handle for the surface, and dereferencing it gives a
    // number in no particular units. The fetch is what the hardware obeys.
    if (fetch_ptr) {
        for (uint32_t i = 0; i < kFetchConstantWords; ++i)
            video.front_buffer_fetch[i] = memory.read_u32(fetch_ptr + i * 4);
        const uint32_t dword1 = video.front_buffer_fetch[1];
        // Direct3D fills this field in from the pointer it holds, which for the
        // front buffer is a 4 KiB-window one - so the number here is
        // 0xE0000000-based, not a physical address. That window begins 0x1000
        // INTO physical memory (see memory.h), so dropping the base alone
        // leaves the address one page short of where the GPU resolves to, and
        // a comparison against RB_COPY_DEST_BASE misses by exactly that page
        // while looking entirely reasonable.
        video.front_buffer_fetch_base =
            physical_address_of(((dword1 >> 12) & 0xFFFFF) << 12);
    }

    // The title reserves 64 words in its ring for this call. Write the front
    // buffer's fetch constant there as a PM4 type-0 register write, which is
    // what the command processor picks up when it walks the ring.
    bool boundary_submitted = false;
    if (buffer_ptr) {
        uint32_t offset = 0;
        if (fetch_ptr) {
            memory.write_u32(buffer_ptr + offset * 4,
                             make_packet_type0(kRegShaderConstantFetch00,
                                               kFetchConstantWords));
            ++offset;
            for (uint32_t i = 0; i < kFetchConstantWords; ++i, ++offset)
                memory.write_u32(buffer_ptr + offset * 4,
                                 memory.read_u32(fetch_ptr + i * 4));
        }
        // And behind it, the frame boundary itself. This call is NOT where the
        // frame ends: Direct3D has already written the frame's last resolve
        // into the ring and is holding the write pointer back until this
        // reserve is filled, so the picture the title is asking to show has not
        // been submitted yet. Ending the frame here cuts it off from its own
        // composite. See pm4_op::xe_swap - the boundary belongs at this
        // position in the stream, and this is how it gets there.
        if (video.ring_buffer_initialized) {
            memory.write_u32(buffer_ptr + offset * 4,
                             make_packet_type3(gpu::pm4_op::xe_swap, 4));
            ++offset;
            memory.write_u32(buffer_ptr + offset * 4, gpu::kSwapSignature);
            ++offset;
            memory.write_u32(buffer_ptr + offset * 4,
                             video.front_buffer_fetch_base);
            ++offset;
            memory.write_u32(buffer_ptr + offset * 4, video.front_buffer_width);
            ++offset;
            memory.write_u32(buffer_ptr + offset * 4,
                             video.front_buffer_height);
            ++offset;
            boundary_submitted = true;
        }
        // The remainder is padded with filler words rather than zeroed. A zero
        // dword is not "nothing" to the command processor: it decodes as a
        // type-0 packet two words long that writes register 0. Zeroing the 57
        // words left over here therefore both scribbled on the register file
        // and, because 57 is odd, left a two-word packet with one word of
        // buffer behind it - which is the "packet runs past the end of the
        // command buffer" the ring walk reported once per presented frame.
        for (; offset < kSwapReservedWords; ++offset)
            memory.write_u32(buffer_ptr + offset * 4, kPacketType2);
    }

    // One swap is one presented frame - the boundary the host loop keys off.
    ++video.swap_count;
    // With the boundary in the ring, the host loop hears about it when the
    // command processor reaches it, which is after the guest advances the write
    // pointer past everything this frame drew. A title with no ring - or one
    // that asked to present without giving us anywhere to put the packet - has
    // no such moment, so for that one the call itself is still the boundary.
    // Without the fallback such a title would render nothing at all, which is a
    // worse failure than the frame being cut in the wrong place.
    if (!boundary_submitted && video.swap_handler) video.swap_handler();
}


// --- threads: local storage and waiting ---------------------------------

namespace {

// Ticks between 1601-01-01 (the Windows epoch) and 1970-01-01, in 100ns units.
constexpr int64_t kWindowsEpochOffsetTicks = 116444736000000000LL;

// Tries to satisfy a wait on a dispatcher object, consuming the signal where
// the object type says to. Must be called with the wait lock held, which
// thread_state::wait_until guarantees.
bool try_take_signal(uint32_t object_ptr) {
    guest_memory& memory = active_kernel()->memory();
    const uint8_t type = memory.read_u8(object_ptr + kDispatchType);
    const uint32_t state = memory.read_u32(object_ptr + kDispatchSignalState);
    // A mutant is the one dispatcher object whose availability depends on WHO
    // is asking: it is recursive for the thread that holds it. Its count runs
    // 1 when free, 0 held once, -1 held twice, and the owner is recorded
    // beside it, so this has to be decided before the "unsignalled means wait"
    // rule the other kinds follow.
    if (type == x_dispatcher::mutant) {
        const int32_t count = static_cast<int32_t>(state);
        const uint32_t self = current_thread_identity();
        const uint32_t owner = memory.read_u32(object_ptr + kMutantOwner);
        if (count <= 0 && owner != self) return false; // held by someone else
        memory.write_u32(object_ptr + kDispatchSignalState,
                         static_cast<uint32_t>(count - 1));
        memory.write_u32(object_ptr + kMutantOwner, self);
        return true;
    }
    if (state == 0) return false;
    switch (type) {
        case x_dispatcher::event_synchronization: // auto-reset: consume it
            memory.write_u32(object_ptr + kDispatchSignalState, 0);
            return true;
        case x_dispatcher::semaphore: // one unit of the count
            memory.write_u32(object_ptr + kDispatchSignalState, state - 1);
            return true;
        case x_dispatcher::event_notification: // manual-reset: stays signalled
        default:
            return true;
    }
}

// Reads a guest timeout pointer into a host duration. Returns false when the
// pointer is null, meaning wait forever.
bool read_timeout(uint32_t timeout_ptr, std::chrono::nanoseconds& out) {
    if (timeout_ptr == 0) return false;
    const int64_t ticks =
        static_cast<int64_t>(active_kernel()->memory().read_u64(timeout_ptr));
    out = timeout_to_duration(ticks);
    return true;
}

// One thread's view of an object it is waiting on: satisfied when the object
// itself can be taken, or when a pulse went past while it was waiting.
struct wait_view {
    uint32_t object{0};
    uint64_t epoch{0};
    bool sampled{false};

    bool satisfied() {
        if (!sampled) {
            // The first test happens before the thread blocks, so the epoch
            // read here is the one it started waiting at.
            sampled = true;
            epoch = pulse_epoch(object);
        } else if (pulse_epoch(object) != epoch) {
            return true; // released by a pulse
        }
        return try_take_signal(object);
    }
};

// The shared body of the wait calls. `before_waiting` is threaded through for
// the one call that must signal something else first; see thread_state.
uint32_t wait_on_object(uint32_t object_ptr, uint32_t timeout_ptr,
                        const std::function<void()>& before_waiting = {}) {
    if (object_ptr == 0) return x_status::invalid_parameter;
    thread_state& threads = active_kernel()->threads();
    std::chrono::nanoseconds timeout{};
    const bool finite = read_timeout(timeout_ptr, timeout);
    wait_view view{object_ptr, 0, false};
    const bool signalled =
        threads.wait_until([&view] { return view.satisfied(); },
                           finite ? &timeout : nullptr, before_waiting);
    return signalled ? x_wait::object_0 : x_wait::timeout;
}

} // namespace

uint32_t KeTlsAlloc() { return active_kernel()->threads().tls_alloc(); }

uint32_t KeTlsFree(uint32_t slot) {
    return active_kernel()->threads().tls_free(slot) ? 1u : 0u;
}

uint32_t KeTlsGetValue(uint32_t slot) {
    return active_kernel()->threads().tls_get(slot);
}

uint32_t KeTlsSetValue(uint32_t slot, uint32_t value) {
    return active_kernel()->threads().tls_set(slot, value) ? 1u : 0u;
}

void KeQuerySystemTime(uint32_t time_ptr) {
    if (time_ptr == 0) return;
    const auto now = std::chrono::system_clock::now().time_since_epoch();
    const int64_t since_1970_ticks =
        std::chrono::duration_cast<std::chrono::nanoseconds>(now).count() / 100;
    active_kernel()->memory().write_u64(
        time_ptr, static_cast<uint64_t>(kWindowsEpochOffsetTicks +
                                        since_1970_ticks));
}

uint32_t KeDelayExecutionThread(uint32_t, uint32_t, uint32_t interval_ptr) {
    std::chrono::nanoseconds duration{};
    if (!read_timeout(interval_ptr, duration)) return x_status::success;
    if (duration <= std::chrono::nanoseconds::zero()) {
        // A zero interval is not "do nothing": it is the title giving up the
        // rest of its turn so another thread can have one. Geometry Wars asks
        // for this twenty-four thousand times a second, and answering it by
        // returning immediately hands the processor straight back to the thread
        // that was trying to stand aside.
        std::this_thread::yield();
        return x_status::success;
    }
    active_kernel()->threads().sleep_for(duration);
    return x_status::success;
}

uint32_t KeWaitForSingleObject(uint32_t object_ptr, uint32_t, uint32_t,
                               uint32_t, uint32_t timeout_ptr) {
    return wait_on_object(object_ptr, timeout_ptr);
}

uint32_t NtWaitForSingleObjectEx(uint32_t handle, uint32_t, uint32_t,
                                 uint32_t timeout_ptr) {
    kernel_object* object = active_kernel()->objects().lookup(handle);
    if (object == nullptr) return x_status::invalid_handle;
    return wait_on_object(object->guest_object, timeout_ptr);
}

namespace {

// Reads the array of guest pointers (or handles) a multi-object wait names.
// Returns false if any entry does not resolve, which the console reports as an
// invalid parameter rather than waiting on a short list.
bool collect_wait_objects(uint32_t count, uint32_t array_ptr, bool by_handle,
                          std::vector<uint32_t>& out) {
    // MAXIMUM_WAIT_OBJECTS. The console refuses more, and refusing here keeps a
    // wrong count - a register that held something else - from walking the array
    // off the end of the committed page and killing the process.
    constexpr uint32_t kMaxWaitObjects = 64;
    if (count == 0 || count > kMaxWaitObjects || array_ptr == 0) return false;
    guest_memory& memory = active_kernel()->memory();
    if (!memory.committed(array_ptr, count * 4)) return false;
    out.clear();
    out.reserve(count);
    for (uint32_t i = 0; i < count; ++i) {
        uint32_t object = memory.read_u32(array_ptr + i * 4);
        if (by_handle) {
            const kernel_object* found = active_kernel()->objects().lookup(object);
            if (found == nullptr) return false;
            object = found->guest_object;
        }
        if (object == 0) return false;
        out.push_back(object);
    }
    return true;
}

// Is this object signalled, without consuming anything? A "wait all" has to
// know every object is ready before it takes any of them, or it would consume
// some signals and then block holding them.
bool is_signalled(uint32_t object_ptr) {
    guest_memory& memory = active_kernel()->memory();
    const uint32_t state = memory.read_u32(object_ptr + kDispatchSignalState);
    // A mutant the caller already holds is available to it however far its
    // count has gone negative; asking whether the count is nonzero would say
    // "not ready" and block the thread against itself.
    if (memory.read_u8(object_ptr + kDispatchType) == x_dispatcher::mutant &&
        static_cast<int32_t>(state) <= 0)
        return memory.read_u32(object_ptr + kMutantOwner) ==
               current_thread_identity();
    return state != 0;
}

// The shared body of the multi-object waits. Everything happens under the wait
// lock, which is what makes "all are ready, take them all" atomic against
// another thread claiming one in between.
uint32_t wait_on_objects(const std::vector<uint32_t>& objects,
                         uint32_t wait_type, uint32_t timeout_ptr) {
    thread_state& threads = active_kernel()->threads();
    std::chrono::nanoseconds timeout{};
    const bool finite = read_timeout(timeout_ptr, timeout);

    // Each object gets its own view, so a pulse on any one of them releases a
    // "wait any" naming it, the same as a signal would. A "wait all" does not
    // consult pulses: it is only satisfied when every object is signalled at
    // once, and a pulse leaves nothing signalled for the others to be joined
    // with - which is how the console behaves too.
    std::vector<wait_view> views;
    views.reserve(objects.size());
    for (uint32_t object : objects) views.push_back(wait_view{object, 0, false});

    uint32_t satisfied_index = 0;
    const bool signalled = threads.wait_until(
        [&objects, &views, wait_type, &satisfied_index] {
            if (wait_type == x_wait::wait_all) {
                for (uint32_t object : objects)
                    if (!is_signalled(object)) return false;
                for (uint32_t object : objects) try_take_signal(object);
                return true;
            }
            for (std::size_t i = 0; i < views.size(); ++i) {
                if (!views[i].satisfied()) continue;
                satisfied_index = static_cast<uint32_t>(i);
                return true;
            }
            return false;
        },
        finite ? &timeout : nullptr);
    if (!signalled) return x_wait::timeout;
    // An "any" wait reports which object released it; the index is what a
    // title switches on to decide what work to do.
    return wait_type == x_wait::wait_all ? x_wait::object_0
                                         : x_wait::object_0 + satisfied_index;
}

} // namespace

uint32_t KeWaitForMultipleObjects(uint32_t count, uint32_t objects_ptr,
                                  uint32_t wait_type, uint32_t,
                                  uint32_t, uint32_t,
                                  uint32_t timeout_ptr, uint32_t) {
    std::vector<uint32_t> objects;
    if (!collect_wait_objects(count, objects_ptr, /*by_handle=*/false, objects))
        return x_status::invalid_parameter;
    return wait_on_objects(objects, wait_type, timeout_ptr);
}

uint32_t NtWaitForMultipleObjectsEx(uint32_t count, uint32_t handles_ptr,
                                    uint32_t wait_type, uint32_t,
                                    uint32_t, uint32_t timeout_ptr) {
    std::vector<uint32_t> objects;
    if (!collect_wait_objects(count, handles_ptr, /*by_handle=*/true, objects))
        return x_status::invalid_handle;
    return wait_on_objects(objects, wait_type, timeout_ptr);
}

uint32_t NtCreateMutant(uint32_t handle_ptr, uint32_t object_attributes,
                        uint32_t initial_owner) {
    (void)object_attributes; // named objects are not modelled yet
    kernel_state* kernel = active_kernel();
    const uint32_t mutant_ptr = kernel->heap().allocate(kMutantSize, 16);
    if (mutant_ptr == 0) return x_status::no_memory;

    guest_memory& memory = kernel->memory();
    memory.zero_block(mutant_ptr, kMutantSize);
    memory.write_u8(mutant_ptr + kDispatchType, x_dispatcher::mutant);
    // Created owned means created unsignalled AND owned by the creator: the
    // count is what a waiter tests, the owner is what makes a second acquire by
    // the same thread succeed rather than deadlock, and a mutant handed out
    // held-but-ownerless is one its own creator cannot re-enter or release.
    memory.write_u32(mutant_ptr + kDispatchSignalState,
                     initial_owner != 0 ? 0u : 1u);
    if (initial_owner != 0)
        memory.write_u32(mutant_ptr + kMutantOwner, current_thread_identity());
    const uint32_t handle = kernel->objects().add(object_type::mutant, mutant_ptr);
    if (handle_ptr != 0) memory.write_u32(handle_ptr, handle);
    return x_status::success;
}

uint32_t NtReleaseMutant(uint32_t handle, uint32_t) {
    kernel_state* kernel = active_kernel();
    const kernel_object* object = kernel->objects().lookup(handle);
    if (object == nullptr || object->type != object_type::mutant)
        return x_status::invalid_handle;

    guest_memory& memory = kernel->memory();
    const uint32_t mutant_ptr = object->guest_object;
    const int32_t count =
        static_cast<int32_t>(memory.read_u32(mutant_ptr + kDispatchSignalState));
    const uint32_t owner = memory.read_u32(mutant_ptr + kMutantOwner);
    const uint32_t self = current_thread_identity();

    // The kernel is not the only thing that takes these. A mutant's dispatcher
    // header is guest memory, and the title's own runtime claims an uncontended
    // one in guest code with an interlocked decrement, entering the kernel only
    // to release it. Geometry Wars 2 does exactly that: six thousand releases in
    // half a minute against no kernel-side acquires at all.
    //
    // So "the kernel did not see you take this" is not evidence that the caller
    // does not hold it, and refusing the release on that basis leaves the mutant
    // held for ever - which is what it did, and what stopped the title dead.
    // Ownership is therefore used for what it can be trusted for, which is
    // unwinding a recursion the kernel itself recorded; anything else releases.
    if (count < 0 && owner == self) {
        // Held more than once by this thread: unwind one level and stay held.
        memory.write_u32(mutant_ptr + kDispatchSignalState,
                         static_cast<uint32_t>(count + 1));
        return x_status::success;
    }
    if (count <= 0 && owner != 0 && owner != self) {
        // A recorded owner that is not the caller. Still released - see above -
        // but worth saying once, because if it is not the title being unbalanced
        // then it is this runtime confusing two threads for each other.
        static std::atomic<bool> warned{false};
        if (!warned.exchange(true)) {
            std::printf("whitty_xenon: NtReleaseMutant on %08X released by %08X "
                        "while %08X held it\n",
                        mutant_ptr, self, owner);
            std::fflush(stdout);
        }
    }
    // Free. One, never more: a mutant is available exactly once, and letting a
    // double release push the count to two would admit two holders.
    memory.write_u32(mutant_ptr + kDispatchSignalState, 1);
    memory.write_u32(mutant_ptr + kMutantOwner, 0);
    kernel->threads().wake_all();
    return x_status::success;
}

// A semaphore's dispatcher header carries the count in its signal state and the
// ceiling four words in, which is the layout KeInitializeSemaphore writes and
// try_take_signal reads - so a semaphore made here is waitable through exactly
// the same paths as a guest-allocated one.
uint32_t NtCreateSemaphore(uint32_t handle_ptr, uint32_t object_attributes,
                           uint32_t initial_count, uint32_t maximum_count) {
    (void)object_attributes; // named objects are not modelled yet
    kernel_state* kernel = active_kernel();
    const uint32_t semaphore_ptr = kernel->heap().allocate(kSemaphoreSize, 16);
    if (semaphore_ptr == 0) return x_status::no_memory;

    guest_memory& memory = kernel->memory();
    memory.zero_block(semaphore_ptr, kSemaphoreSize);
    memory.write_u8(semaphore_ptr + kDispatchType, kDispatcherSemaphore);
    memory.write_u32(semaphore_ptr + kDispatchSignalState, initial_count);
    memory.write_u32(semaphore_ptr + kSemaphoreLimit, maximum_count);

    const uint32_t handle =
        kernel->objects().add(object_type::semaphore, semaphore_ptr);
    if (handle_ptr != 0) memory.write_u32(handle_ptr, handle);
    return x_status::success;
}

uint32_t NtReleaseSemaphore(uint32_t handle, uint32_t release_count,
                            uint32_t previous_count_ptr) {
    kernel_state* kernel = active_kernel();
    const kernel_object* object = kernel->objects().lookup(handle);
    if (object == nullptr || object->type != object_type::semaphore)
        return x_status::invalid_handle;
    guest_memory& memory = kernel->memory();
    const uint32_t previous =
        memory.read_u32(object->guest_object + kDispatchSignalState);
    // Adding rather than setting is the whole point: two releases must admit
    // two waiters, and each waiter takes one unit of the count.
    set_signal_state(object->guest_object, previous + release_count);
    if (previous_count_ptr != 0)
        memory.write_u32(previous_count_ptr, previous);
    return x_status::success;
}

uint32_t NtSignalAndWaitForSingleObjectEx(uint32_t signal_handle,
                                          uint32_t wait_handle, uint32_t,
                                          uint32_t, uint32_t timeout_ptr) {
    kernel_state* kernel = active_kernel();
    const kernel_object* signal = kernel->objects().lookup(signal_handle);
    const kernel_object* wait = kernel->objects().lookup(wait_handle);
    if (signal == nullptr || wait == nullptr) return x_status::invalid_handle;

    // What "signal" means depends on the object: an event becomes signalled, a
    // semaphore gains one unit of its count. Setting a semaphore to 1 instead
    // would silently discard the places already in its queue.
    //
    // The signal is handed to the wait rather than done first, so that it
    // happens with this thread already registered on the object it is about to
    // wait for. Signalling and then waiting leaves a gap: a third thread woken
    // by the signal can run, satisfy the wait object, and have its signal taken
    // by yet another waiter before this thread arrives - and this thread then
    // blocks on a handoff that has already gone past it. That is the whole
    // reason the console offers this call instead of the two separately.
    guest_memory& memory = kernel->memory();
    const uint32_t object_ptr = signal->guest_object;
    const uint8_t type = memory.read_u8(object_ptr + kDispatchType);
    return wait_on_object(wait->guest_object, timeout_ptr, [&memory, object_ptr,
                                                            type] {
        // Runs under the wait lock, so it must not signal through
        // set_signal_state - the wake that would do is already arranged.
        const uint32_t state = memory.read_u32(object_ptr + kDispatchSignalState);
        memory.write_u32(object_ptr + kDispatchSignalState,
                         type == x_dispatcher::semaphore ? state + 1 : 1u);
    });
}

uint32_t NtCreateTimer(uint32_t handle_ptr, uint32_t object_attributes,
                       uint32_t timer_type) {
    (void)object_attributes;
    kernel_state* kernel = active_kernel();
    const uint32_t timer_ptr = kernel->heap().allocate(kEventSize, 16);
    if (timer_ptr == 0) return x_status::no_memory;

    kernel->memory().zero_block(timer_ptr, kEventSize);
    // A notification timer stays signalled once it fires; a synchronization
    // timer releases one waiter and clears, which is the event semantics the
    // dispatcher already implements for each kind.
    kernel->memory().write_u8(timer_ptr + kDispatchType,
                              timer_type == 0 ? x_dispatcher::event_notification
                                              : x_dispatcher::event_synchronization);
    kernel->memory().write_u32(timer_ptr + kDispatchSignalState, 0);

    const uint32_t handle = kernel->objects().add(object_type::event, timer_ptr);
    if (handle_ptr != 0) kernel->memory().write_u32(handle_ptr, handle);
    return x_status::success;
}

namespace {

// Armed timers, by the guest address of their dispatcher object. The
// generation count is how a cancel or a re-arm invalidates a firing thread
// that is already asleep: it wakes, sees the count has moved on, and retires
// without signalling anything.
std::mutex& timer_mutex() {
    static std::mutex mutex;
    return mutex;
}
std::map<uint32_t, uint64_t>& timer_generations() {
    static std::map<uint32_t, uint64_t> generations;
    return generations;
}

void run_timer(uint32_t timer_ptr, std::chrono::nanoseconds due,
               uint32_t period_ms, uint64_t generation) {
    std::thread([timer_ptr, due, period_ms, generation] {
        std::chrono::nanoseconds delay = due;
        for (;;) {
            std::this_thread::sleep_for(delay);
            {
                const std::lock_guard<std::mutex> lock(timer_mutex());
                const auto it = timer_generations().find(timer_ptr);
                // Cancelled, or re-armed by someone else since this thread
                // went to sleep.
                if (it == timer_generations().end() || it->second != generation)
                    return;
            }
            set_signal_state(timer_ptr, 1);
            if (period_ms == 0) return;
            delay = std::chrono::milliseconds(period_ms);
        }
    }).detach();
}

} // namespace

uint32_t NtSetTimerEx(uint32_t handle, uint32_t due_time_ptr, uint32_t,
                      uint32_t, uint32_t, uint32_t, uint32_t period_ms,
                      uint32_t) {
    kernel_state* kernel = active_kernel();
    const kernel_object* object = kernel->objects().lookup(handle);
    if (object == nullptr) return x_status::invalid_handle;

    // The APC routine a title can pass is not delivered: there is no APC
    // machinery yet, and a title that only waits on the timer - which is the
    // common use - is unaffected.
    std::chrono::nanoseconds due{};
    if (due_time_ptr != 0)
        due = timeout_to_duration(
            static_cast<int64_t>(kernel->memory().read_u64(due_time_ptr)));

    uint64_t generation = 0;
    {
        const std::lock_guard<std::mutex> lock(timer_mutex());
        generation = ++timer_generations()[object->guest_object];
    }
    // Arming clears the timer: it has not come due yet.
    set_signal_state(object->guest_object, 0);
    run_timer(object->guest_object, due, period_ms, generation);
    return x_status::success;
}

uint32_t NtCancelTimer(uint32_t handle, uint32_t current_state_ptr) {
    kernel_state* kernel = active_kernel();
    const kernel_object* object = kernel->objects().lookup(handle);
    if (object == nullptr) return x_status::invalid_handle;
    {
        const std::lock_guard<std::mutex> lock(timer_mutex());
        timer_generations().erase(object->guest_object);
    }
    if (current_state_ptr != 0)
        kernel->memory().write_u32(current_state_ptr, 0);
    return x_status::success;
}

// Moving a thread to another hardware thread. The host scheduler decides where
// a host thread actually runs, so the placement itself is not honoured - but the
// PROCESSOR NUMBER is not just placement. Guest code reads it out of its own
// KPCR and indexes per-processor state with it, which is what made
// ExCreateThread's affinity handling load-bearing; a thread moved by this call
// and left reporting its old processor reads another processor's slot, and the
// number it finds there is whatever that thread was given.
//
// The previous affinity goes back through the pointer, not the return value:
// unlike Windows NT, this call returns a status. Reporting the request back as
// the "previous" affinity - which is what this did - is the one answer that is
// wrong whatever the truth was, because a title that saves and restores it
// restores the value it was already setting.
uint32_t KeSetAffinityThread(uint32_t thread_ptr, uint32_t affinity,
                             uint32_t previous_affinity_ptr) {
    if (affinity == 0) return x_status::invalid_parameter;
    kernel_state* kernel = active_kernel();
    guest_memory& memory = kernel->memory();

    // A null thread pointer means the calling thread.
    const calling_thread& self = resolve_calling_thread();
    const uint32_t kthread = thread_ptr != 0 ? thread_ptr : self.kthread;
    if (kthread == 0 || !memory.committed(kthread + x_kthread::current_cpu, 1))
        return x_status::invalid_handle;

    const uint32_t previous_cpu = memory.read_u8(kthread + x_kthread::current_cpu);
    if (previous_affinity_ptr != 0)
        memory.write_u32(previous_affinity_ptr, 1u << previous_cpu);

    const uint32_t cpu = processor_number_from_affinity(affinity, previous_cpu);
    memory.write_u8(kthread + x_kthread::current_cpu, static_cast<uint8_t>(cpu));
    // And in the KPCR, which is where guest code actually reads it: r13 points
    // at the KPCR, not at the KTHREAD, so the two have to agree.
    uint32_t kpcr = 0;
    if (kthread == self.kthread) {
        kpcr = self.kpcr;
    } else {
        for (guest_thread& thread : kernel->guest_threads())
            if (thread.kthread_address == kthread) kpcr = thread.kpcr_address;
    }
    if (kpcr != 0)
        memory.write_u8(kpcr + x_kpcr::current_cpu, static_cast<uint8_t>(cpu));
    return x_status::success;
}

uint32_t KeSetBasePriorityThread(uint32_t, uint32_t) {
    // Inert, and safe to be: priority is a hint to a scheduler this runtime does
    // not have, and a title cannot observe its effect except as timing. The
    // previous priority reported is normal, which is what every thread here is.
    // A title that saves this and restores it therefore restores the truth.
    return 0;
}

uint32_t KeQueryBasePriorityThread(uint32_t thread_ptr) {
    (void)thread_ptr;
    // Has to give the same answer the setter reports as the previous priority,
    // or a title that queries, sets and restores watches its own value change
    // under it. Both say normal.
    return 0;
}

// --- APCs and DPCs --------------------------------------------------------
// There is no IRQL model here, so nothing dequeues an APC or a DPC. The two
// initialisers still do their real work - writing the structure the caller
// handed us - because the alternative is that a later read finds whatever the
// buffer held before, and the queue call refuses rather than claiming to have
// queued something that will never run.
namespace {
// X_KAPC, in the layout guest code and the console's own KeInsertQueueApc agree
// on. Only the fields a caller can read back matter here.
namespace x_kapc {
constexpr uint32_t type = 0x00;             // 18 = ApcObject
constexpr uint32_t apc_mode = 0x01;
constexpr uint32_t inserted = 0x02;         // BOOLEAN: is it on a queue
constexpr uint32_t thread = 0x04;
constexpr uint32_t kernel_routine = 0x10;
constexpr uint32_t rundown_routine = 0x14;
constexpr uint32_t normal_routine = 0x18;
constexpr uint32_t normal_context = 0x1C;
constexpr uint32_t system_argument1 = 0x20;
constexpr uint32_t system_argument2 = 0x24;
constexpr uint32_t size = 0x28;
} // namespace x_kapc

namespace x_kdpc {
constexpr uint32_t type_and_number = 0x00;
constexpr uint32_t routine = 0x0C;
constexpr uint32_t context = 0x10;
// The two arguments KeInsertQueueDpc records before the routine is called.
constexpr uint32_t argument1 = 0x14;
constexpr uint32_t argument2 = 0x18;
constexpr uint32_t size = 0x1C;
} // namespace x_kdpc

constexpr uint8_t kApcObjectType = 18;
constexpr uint8_t kDpcObjectType = 19;
} // namespace

void KeInitializeApc(uint32_t apc_ptr, uint32_t thread_ptr, uint32_t kernel_routine,
                     uint32_t rundown_routine, uint32_t normal_routine,
                     uint32_t apc_mode, uint32_t normal_context) {
    if (apc_ptr == 0) return;
    guest_memory& memory = active_kernel()->memory();
    memory.zero_block(apc_ptr, x_kapc::size);
    memory.write_u8(apc_ptr + x_kapc::type, kApcObjectType);
    memory.write_u8(apc_ptr + x_kapc::apc_mode, static_cast<uint8_t>(apc_mode));
    memory.write_u8(apc_ptr + x_kapc::inserted, 0);
    memory.write_u32(apc_ptr + x_kapc::thread, thread_ptr);
    memory.write_u32(apc_ptr + x_kapc::kernel_routine, kernel_routine);
    memory.write_u32(apc_ptr + x_kapc::rundown_routine, rundown_routine);
    memory.write_u32(apc_ptr + x_kapc::normal_routine, normal_routine);
    memory.write_u32(apc_ptr + x_kapc::normal_context, normal_context);
}

uint32_t KeInsertQueueApc(uint32_t apc_ptr, uint32_t system_argument1,
                          uint32_t system_argument2, uint32_t priority_increment) {
    (void)priority_increment;
    if (apc_ptr == 0) return 0;
    guest_memory& memory = active_kernel()->memory();
    // The arguments are recorded because the console records them before it
    // decides whether to insert, and a caller may read them back.
    memory.write_u32(apc_ptr + x_kapc::system_argument1, system_argument1);
    memory.write_u32(apc_ptr + x_kapc::system_argument2, system_argument2);
    memory.write_u8(apc_ptr + x_kapc::inserted, 0);
    // FALSE, and deliberately. Nothing here drains an APC queue, so reporting
    // TRUE would promise a callback that never arrives - and a caller waiting on
    // it would wait forever. The console refuses in exactly this way when the
    // target thread has APCs disabled, so every caller already handles it.
    return 0;
}

void KeInitializeDpc(uint32_t dpc_ptr, uint32_t routine, uint32_t context) {
    if (dpc_ptr == 0) return;
    guest_memory& memory = active_kernel()->memory();
    memory.zero_block(dpc_ptr, x_kdpc::size);
    // Type in the high byte, importance/number in the low - as the console packs
    // it, so a title reading the type back finds a DPC.
    memory.write_u32(dpc_ptr + x_kdpc::type_and_number,
                     static_cast<uint32_t>(kDpcObjectType) << 24);
    memory.write_u32(dpc_ptr + x_kdpc::routine, routine);
    memory.write_u32(dpc_ptr + x_kdpc::context, context);
}


// --- module / privilege ---------------------------------------------------

uint32_t XexCheckExecutablePrivilege(uint32_t privilege) {
    const uint32_t mask = 1u << privilege;
    return (active_kernel()->xex_system_flags() & mask) != 0 ? 1u : 0u;
}


uint32_t XexLoadImage(uint32_t module_name_ptr, uint32_t, uint32_t,
                      uint32_t hmodule_ptr) {
    if (module_name_ptr == 0 || hmodule_ptr == 0) return x_status::invalid_parameter;
    guest_memory& memory = active_kernel()->memory();

    std::string name;
    for (uint32_t address = module_name_ptr; memory.read_u8(address) != 0; ++address) {
        name.push_back(static_cast<char>(memory.read_u8(address)));
        if (name.size() >= 256) break; // guard a missing terminator
    }

    const kernel_library library = kernel_library_from_import_name(name);
    if (library == kernel_library::unknown) return x_status::no_such_file;

    kernel_state* kernel = active_kernel();
    uint32_t& handle = kernel->module_handle(library);
    if (handle == 0) handle = kernel->heap().allocate(4, 8);
    if (handle == 0) return x_status::no_memory;

    memory.write_u32(hmodule_ptr, handle);
    return x_status::success;
}


uint32_t XexGetProcedureAddress(uint32_t hmodule, uint32_t ordinal,
                                uint32_t out_function_ptr) {
    if (ordinal == 0 || out_function_ptr == 0) return x_status::invalid_parameter;
    kernel_state* kernel = active_kernel();
    guest_memory& memory = kernel->memory();

    const bool is_name = (ordinal & 0xFFFF0000u) != 0;
    uint32_t thunk = 0;
    if (!is_name) {
        const kernel_library library = kernel->library_for_module_handle(hmodule);
        if (library != kernel_library::unknown)
            thunk = kernel->import_thunk(library, static_cast<uint16_t>(ordinal));
    }
    // A name lookup, or an ordinal the title never references statically
    // itself, has no address this runtime can offer that an indirect call
    // could actually reach.
    if (thunk == 0) {
        memory.write_u32(out_function_ptr, 0);
        return x_status::driver_entrypoint_not_found;
    }
    memory.write_u32(out_function_ptr, thunk);
    return x_status::success;
}


uint32_t RtlNtStatusToDosError(uint32_t status) {
    if (status == 0 || (status & 0x20000000u) != 0) return status;
    switch (status) {
        case x_status::unsuccessful: return 31;               // ERROR_GEN_FAILURE
        case x_status::invalid_handle: return 6;               // ERROR_INVALID_HANDLE
        case x_status::invalid_parameter: return 87;           // ERROR_INVALID_PARAMETER
        case x_status::no_such_file: return 2;                 // ERROR_FILE_NOT_FOUND
        case x_status::end_of_file: return 38;                 // ERROR_HANDLE_EOF
        case x_status::no_memory: return 8;                    // ERROR_NOT_ENOUGH_MEMORY
        case x_status::buffer_too_small: return 122;           // ERROR_INSUFFICIENT_BUFFER
        case x_status::driver_entrypoint_not_found: return 127; // ERROR_PROC_NOT_FOUND
        default: return 317;                                    // ERROR_MR_MID_NOT_FOUND
    }
}


uint32_t XexUnloadImage(uint32_t hmodule) {
    if (active_kernel()->library_for_module_handle(hmodule) == kernel_library::unknown)
        return x_status::invalid_handle;
    return x_status::success;
}


uint32_t RtlMultiByteToUnicodeN(uint32_t destination_ptr, uint32_t destination_len,
                                uint32_t written_ptr, uint32_t source_ptr,
                                uint32_t source_len) {
    guest_memory& memory = active_kernel()->memory();
    uint32_t copy_len = destination_len / 2;
    if (source_len < copy_len) copy_len = source_len;

    for (uint32_t i = 0; i < copy_len; ++i)
        memory.write_u16(destination_ptr + i * 2, memory.read_u8(source_ptr + i));
    if (written_ptr != 0) memory.write_u32(written_ptr, copy_len * 2);
    return x_status::success;
}

uint32_t RtlUnicodeToMultiByteN(uint32_t destination_ptr, uint32_t destination_len,
                                uint32_t written_ptr, uint32_t source_ptr,
                                uint32_t source_len) {
    guest_memory& memory = active_kernel()->memory();
    uint32_t copy_len = source_len / 2;
    if (destination_len < copy_len) copy_len = destination_len;

    for (uint32_t i = 0; i < copy_len; ++i) {
        const uint16_t c = memory.read_u16(source_ptr + i * 2);
        memory.write_u8(destination_ptr + i, c < 256 ? static_cast<uint8_t>(c) : '?');
    }
    if (written_ptr != 0) memory.write_u32(written_ptr, copy_len);
    return x_status::success;
}


// --- xam.xex ---------------------------------------------------------------

namespace {

// A gamertag is reported as absent; a signed-in user would be state 1 (local)
// or 2 (live). Nothing is signed in on a standalone runtime.
constexpr uint32_t kSigninStateNotSignedIn = 0;
// Signed in locally - a profile on the console, with no Live connection. A
// title that finds nobody signed in will not let anyone touch its menus, which
// presents as a game that renders perfectly and ignores the controller.
constexpr uint32_t kSigninStateSignedInLocally = 1;
// Signed in to Xbox Live. See XamUserGetSigninState for what this state is
// for, what it costs and why it is not the default.
constexpr uint32_t kSigninStateSignedInToLive = 2;

// The titles told that port 0 is signed in to LIVE rather than locally.
//
// This is the ONLY per-title behaviour switch in the runtime, and it is a list
// rather than a default because of what it is claiming. There is no Live
// service here, so state 2 is untrue about the machine; what makes it
// acceptable for a title is that every message the title then sends has been
// run and is either genuinely served or honestly refused. That evidence is
// gathered per title. A global default would be asserting it for titles nobody
// has run, which is the "luck holding, not a design" this file warns about
// everywhere else.
//
// The bar for adding one, which Space Giraffe met and which is what the long
// note on XamUserGetSigninState records:
//   * trace a full run under state 2 and read every Live message it adds;
//   * every one of them must be served or refused - never left unanswered,
//     which is the failure that neither completes nor fails;
//   * it must open no socket it did not already open under state 1;
//   * it must run to completion, and to its own game over, without a fault;
//   * and state 2 must buy something real, not only remove a sentence.
constexpr uint32_t kLiveSigninTitles[] = {
    // Space Giraffe (5841080C). Under state 1 it warns before every game that
    // the score will not be saved and then saves nothing at all; under state 2
    // the warning is gone and its scores reach the local table on the boards
    // its own SPA names. See XamUserGetSigninState.
    0x5841080Cu,
};

// Whether THIS title is one of them. WHITTY_LIVE_SIGNIN overrides the list
// either way - `1` to try a title that is not on it, `0` to take one off it -
// because the way a title gets onto the list is by being measured under both,
// and a knob that only turns one way cannot make that comparison.
bool live_signin_for_this_title() {
    if (const char* forced = std::getenv("WHITTY_LIVE_SIGNIN"))
        return forced[0] == '1';
    const kernel_state* kernel = active_kernel();
    if (kernel == nullptr) return false;
    const uint32_t title = kernel->title_id();
    for (const uint32_t known : kLiveSigninTitles)
        if (known == title) return true;
    return false;
}

// An offline profile's XUID. The E0 prefix is what marks it offline; the value
// is Xenia's default, so a title that has seen one before sees the same one.
constexpr uint64_t kOfflineXuid = 0xE000BABEBABEBABEull;
// Every content licence bit set: the title takes its full-game path rather
// than a trial-mode one.
constexpr uint32_t kFullLicenseMask = 0xFFFFFFFFu;
// X_INPUT_CAPABILITIES / X_INPUT_STATE are zeroed on a "not connected"
// answer so a title that ignores the result still reads neutral input.
//
// THESE SIZES ARE THE STRUCTURES' TRUE SIZES AND MUST STAY THAT WAY. A title
// passes a buffer of exactly this size and nothing more, so a size that is too
// large here is a write past the end of the caller's buffer - and the caller is
// usually a stack frame:
//
//   X_INPUT_CAPABILITIES = BYTE Type + BYTE SubType + WORD Flags   (4)
//                        + X_INPUT_GAMEPAD Gamepad                (12)
//                        + X_INPUT_VIBRATION Vibration             (4)  = 0x14
//   X_INPUT_STATE        = DWORD PacketNumber + X_INPUT_GAMEPAD         = 0x10
//
// This was 0x1C, eight bytes too many, and Hydro Thunder Hurricane is where it
// finally showed: it calls XamInputGetCapabilities with a 20-byte buffer at the
// top of a GS-protected frame, so the extra eight bytes landed exactly on the
// stack cookie. The title's own __security_check_cookie then failed and it
// bug-checked 0xC0000409 (STATUS_STACK_BUFFER_OVERRUN) before drawing anything -
// three frames from the handler, with nothing pointing at input at all. The
// three earlier titles pass buffers with slack after them and never noticed.
constexpr uint32_t kInputCapabilitiesSize = 0x14;
constexpr uint32_t kInputStateSize = 0x10;

// How many controller ports the console has. Xenia's XUserMaxUserCount
// (xbox.h). An index at or past it is not an empty port, it is not a port, and
// both input calls say so rather than folding it onto port 0.
constexpr uint32_t kMaxUserCount = 4;
// X_INPUT_FLAG_ANY_USER, from Xenia's hid/input.h: the caller does not care
// which port answers.
constexpr uint32_t kInputFlagAnyUser = 1u << 30;

} // namespace

uint32_t XamLoaderGetLaunchDataSize(uint32_t size_ptr) {
    if (size_ptr == 0) return x_error::invalid_parameter;
    // Launched standalone, so no dashboard handed this title any data.
    active_kernel()->memory().write_u32(size_ptr, 0);
    return x_error::not_found;
}

uint32_t XamLoaderGetLaunchData(uint32_t, uint32_t) {
    return x_error::not_found;
}

namespace {
// What the title last handed to XamLoaderSetLaunchData. Deliberately not fed
// back to the two calls above: they answer for data an inbound launch supplied,
// which is a different direction, and there is still none.
std::vector<uint8_t> g_outbound_launch_data;
std::mutex g_outbound_launch_data_mutex;
} // namespace

uint32_t XamLoaderSetLaunchData(uint32_t buffer_ptr, uint32_t buffer_size) {
    // Copying the bytes out of guest memory is the whole of this call's
    // contract; whether anything is ever launched to read them is not its
    // business. So it does the copy - and then success is a true statement about
    // what happened, rather than a claim about a relaunch that will not occur.
    std::lock_guard<std::mutex> lock(g_outbound_launch_data_mutex);
    if (buffer_ptr == 0 || buffer_size == 0) {
        g_outbound_launch_data.clear();
        return x_error::success;
    }
    guest_memory& memory = active_kernel()->memory();
    if (!memory.committed(buffer_ptr, buffer_size))
        return x_error::invalid_parameter;
    g_outbound_launch_data.resize(buffer_size);
    for (uint32_t i = 0; i < buffer_size; ++i)
        g_outbound_launch_data[i] = memory.read_u8(buffer_ptr + i);
    return x_error::success;
}

uint32_t launch_data_recorded_size() {
    std::lock_guard<std::mutex> lock(g_outbound_launch_data_mutex);
    return static_cast<uint32_t>(g_outbound_launch_data.size());
}

void XamLoaderTerminateTitle() {
    active_kernel()->request_terminate("XamLoaderTerminateTitle");
}

uint32_t XamGetSystemVersion() {
    // Xenia reports 0 here: claiming an old system version means fewer
    // conditionally-loaded symbols for a title to ask about.
    return 0;
}

uint32_t XGetAVPack() { return 6; }        // VGA
uint32_t XGetGameRegion() { return 0xFFFFu; } // all regions
uint32_t XGetLanguage() { return 1; }      // English

uint32_t XamGetExecutionId(uint32_t info_ptr) {
    if (info_ptr == 0) return x_error::invalid_parameter;
    const uint32_t block = active_kernel()->execution_info_address();
    if (block == 0) return x_error::not_found;
    active_kernel()->memory().write_u32(info_ptr, block);
    return x_error::success;
}

uint32_t XamAlloc(uint32_t, uint32_t size, uint32_t out_pointer_ptr) {
    if (out_pointer_ptr == 0 || size == 0) return x_error::invalid_parameter;
    kernel_state* kernel = active_kernel();
    const uint32_t address = kernel->heap().allocate(size, 8);
    if (address == 0) {
        kernel->memory().write_u32(out_pointer_ptr, 0);
        return x_status::no_memory;
    }
    kernel->memory().zero_block(address, size);
    kernel->memory().write_u32(out_pointer_ptr, address);
    return x_error::success;
}

uint32_t XamFree(uint32_t address) {
    if (address == 0) return x_error::invalid_parameter;
    active_kernel()->heap().free(address);
    return x_error::success;
}

namespace {

// Writes a gamepad into guest memory in the console's layout: a big-endian
// button mask, two byte triggers, then four big-endian signed thumb axes.
void write_gamepad(guest_memory& memory, uint32_t address,
                   const gamepad_state& pad) {
    memory.write_u16(address + 0, pad.buttons);
    memory.write_u8(address + 2, pad.left_trigger);
    memory.write_u8(address + 3, pad.right_trigger);
    memory.write_u16(address + 4, static_cast<uint16_t>(pad.thumb_lx));
    memory.write_u16(address + 6, static_cast<uint16_t>(pad.thumb_ly));
    memory.write_u16(address + 8, static_cast<uint16_t>(pad.thumb_rx));
    memory.write_u16(address + 10, static_cast<uint16_t>(pad.thumb_ry));
}

} // namespace

uint32_t XamInputGetCapabilities(uint32_t user, uint32_t flags,
                                 uint32_t caps_ptr) {
    if (caps_ptr == 0) return x_error::invalid_parameter;
    kernel_state* kernel = active_kernel();
    guest_memory& memory = kernel->memory();
    memory.zero_block(caps_ptr, kInputCapabilitiesSize);

    // XUSER_INDEX_ANY, and the ANY_USER flag, mean "whichever controller" rather
    // than a port. Xenia answers both by pinning them to port 0
    // (xam_input.cc: `if ((actual_user_index & XUserIndexAny) == XUserIndexAny
    // || (flags & X_INPUT_FLAG_ANY_USER)) actual_user_index = 0;`), and the mask
    // is on the low byte, so 0xFFFFFFFF is ANY too. Refusing it instead would
    // tell a title that asked "is there a pad at all" that there is none.
    if ((user & 0xFFu) == 0xFFu || (flags & kInputFlagAnyUser) != 0) user = 0;

    gamepad_state pad;
    if (!kernel->read_gamepad(user, pad) || !pad.connected)
        return x_error::device_not_connected;

    // A wired controller, and the capability gamepad reports which inputs
    // exist rather than their current values: every bit set means every button
    // is present.
    memory.write_u8(caps_ptr + 0, kInputDeviceTypeGamepad);
    memory.write_u8(caps_ptr + 1, kInputDeviceSubtypeGamepad);
    memory.write_u16(caps_ptr + 2, 0);
    gamepad_state available;
    available.buttons = 0xFFFF;
    available.left_trigger = 0xFF;
    available.right_trigger = 0xFF;
    available.thumb_lx = available.thumb_ly = static_cast<int16_t>(0xFFC0);
    available.thumb_rx = available.thumb_ry = static_cast<int16_t>(0xFFC0);
    write_gamepad(memory, caps_ptr + 4, available);
    return x_error::success;
}

uint32_t XamInputGetState(uint32_t user, uint32_t, uint32_t state_ptr) {
    kernel_state* kernel = active_kernel();
    guest_memory& memory = kernel->memory();
    // A title may pass null purely as a "is anything attached?" query.
    if (state_ptr != 0) memory.zero_block(state_ptr, kInputStateSize);

    // An index past the four ports. Xenia guards this first and answers
    // DEVICE_NOT_CONNECTED (xam_input.cc: `if (user_index >= XUserMaxUserCount)
    // return X_ERROR_DEVICE_NOT_CONNECTED;`), which is also what it answers for
    // XUSER_INDEX_ANY here - unlike GetCapabilities above, this call does not
    // resolve ANY, because the guard fires before the pinning does.
    if (user >= kMaxUserCount) return x_error::device_not_connected;

    gamepad_state pad;
    if (!kernel->read_gamepad(user, pad) || !pad.connected)
        return x_error::device_not_connected;
    if (state_ptr == 0) return x_error::success;

    // The packet number tells a title whether anything changed since it last
    // asked, so it has to advance only when the state actually differs -
    // incrementing every call makes a held button look like a stream of fresh
    // presses, and never incrementing makes a title that polls on it see
    // nothing at all.
    // One counter per port, indexed by the port itself. Every port keeps its own
    // because two players press buttons independently: a shared counter would
    // advance for player two's press and tell player one their held button had
    // been pressed again. The index is safe because the guard above has already
    // refused anything past the four ports.
    static std::atomic<uint32_t> packet_numbers[kMaxUserCount]{};
    static gamepad_state previous[kMaxUserCount]{};
    const uint32_t port = user;
    const bool changed =
        pad.buttons != previous[port].buttons ||
        pad.left_trigger != previous[port].left_trigger ||
        pad.right_trigger != previous[port].right_trigger ||
        pad.thumb_lx != previous[port].thumb_lx ||
        pad.thumb_ly != previous[port].thumb_ly ||
        pad.thumb_rx != previous[port].thumb_rx ||
        pad.thumb_ry != previous[port].thumb_ry;
    if (changed) {
        previous[port] = pad;
        ++packet_numbers[port];
    }

    memory.write_u32(state_ptr, packet_numbers[port].load());
    write_gamepad(memory, state_ptr + 4, pad);
    return x_error::success;
}

uint32_t XamInputGetKeystrokeEx(uint32_t user_index_ptr, uint32_t flags,
                                uint32_t keystroke_ptr) {
    (void)user_index_ptr;
    (void)flags;
    if (keystroke_ptr == 0) return 0x000000A0u; // X_ERROR_BAD_ARGUMENTS
    // X_INPUT_KEYSTROKE is 8 bytes (Xenia static_asserts it). Zero it first,
    // as Xenia does, then answer for a device that is not there: no keyboard
    // or chatpad is attached, so the queue can never have a keystroke.
    //
    // The return value is load-bearing in the DANGEROUS direction: Midnight
    // Club LA's startup drains this in a loop that exits only on a NON-ZERO
    // return (sub_82614C70, spinning at 800% CPU with every worker parked).
    // A stub answering success is a hang that no log line points at.
    active_kernel()->memory().zero_block(keystroke_ptr, 8);
    return x_error::device_not_connected;
}

uint32_t XamUserGetSigninState(uint32_t user) {
    // Only the first port has a profile on it. That is not a limit on how many
    // controllers there are - there are four ports and local multiplayer uses
    // them - it is a statement about accounts: this runtime has exactly ONE
    // local profile, and it is port 0's.
    //
    // Grounded in Xenia, which treats every slot identically and answers purely
    // from whether a profile is logged into it (xam_user.cc: `if
    // (IsUserSignedIn(user_index)) signin_state = user_profile->signin_state();`
    // and 0 otherwise; the defaults leave slots 1-3 empty). Guests do not exist
    // in Xenia at all - no guest state, no guest XUID, `guest_num` is never
    // written - so a guest is not a thing that can be reported here either.
    //
    // The consequence, stated rather than discovered: a title that requires a
    // signed-in profile per player will not start a second one. A title that
    // only requires a second CONTROLLER will, because the pad is real and
    // XamInputGetState answers for it. Saying port 1 is signed in would be a
    // claim about a profile with no save data, no gamertag and no achievement
    // list behind it, and the first thing that reads any of those gets a lie.
    //
    // Signed in LOCALLY, which is the default and stays the default. State 2
    // means signed in to Xbox Live, and it is reachable only for the titles in
    // kLiveSigninTitles above - never as a global default, because there is no
    // Live service and the claim has to be paid for title by title.
    //
    // It used to CRASH. It no longer does: this state was measured again after
    // XLiveBaseGetLogonId (0x00058004) started answering the way Xenia does,
    // writing a big-endian 1 and reporting success. That was the handle the
    // title fell over on. With it answered, reporting state 2 to Geometry Wars
    // takes its Leaderboards screen from "please sign in to Xbox Live" to "you
    // are not yet ranked on this leaderboard" - the screen's own working, empty
    // state - and it survives every control on it (change leaderboard, friends
    // filter, view gamercard, both pages). All four titles run to completion
    // under it.
    //
    // The three arguments that kept it unreachable, and what became of them:
    //
    // 1. STILL STANDS, and it is why this is a list and not a switch. There is
    //    no service, so state 2 is a claim about something that does not exist,
    //    and every message it unlocks has to be answerable or the title walks
    //    off a cliff we opened. That a title tolerates a refusal is a fact
    //    about that title, measured on that title. It does not generalise, and
    //    a global default would be asserting it for titles nobody has run.
    // 2. WAS WRONG FOR SPACE GIRAFFE, measured. It said state 2 buys a screen
    //    implying a leaderboard this player could appear on, in exchange for
    //    one that is "at least true about the machine". For this title the
    //    trade is the other way round. Under state 1 it puts up "You are not
    //    signed in to Xbox Live / You can continue but your score will not be
    //    saved" before every game - and then it submits NOTHING: no session,
    //    no stats write, no score anywhere, in a 240 s run to game over. Its
    //    warning is accurate and the runtime's local table stays empty. Under
    //    state 2 the warning is gone and the title runs its whole score path -
    //    0x000B0010 create, 0x000B0012 join, 0x000B0007 property, 0x000B0025
    //    write, 0x000B0015 end, all granted - and a score lands on three of
    //    the four boards its own SPA declares, by name ("Space Giraffe All
    //    Time Hall of Fame", "Weekly Hall of Fame", "Hardcore Wall"). So state
    //    2 is the state in which section 7's promise of a per-title score table
    //    is kept for this title at all, and the removed sentence was the true
    //    one only while we were the reason it was true.
    // 3. STILL STANDS. Filling the title's own Live leaderboard screen in would
    //    mean implementing XUserReadStats (0x000B0021). Its REQUEST is known -
    //    Xenia's XUserReadStats struct matches what the title passes, and the
    //    stats spec's view id is the board the player is looking at. Its REPLY
    //    is not: Xenia never writes one (it returns
    //    X_ONLINE_E_LOGON_NOT_LOGGED_ON unconditionally), and the row and
    //    results structures appear nowhere in it. The reply is a nest of guest
    //    pointers the title then dereferences, so a guessed layout is not a
    //    wrong number on a screen, it is a wild read. It is therefore still
    //    refused under state 2, and Space Giraffe's Leaderboards screen says
    //    "Leaderboard Error - Can't read the leaderboard" and returns to the
    //    menu on A. That is the title reporting our refusal accurately. It is
    //    the cost of state 2 here and it is not hidden.
    //
    // What state 2 does NOT do, measured rather than assumed: it opens no
    // socket. A full traced run under state 2 adds exactly XamUserGetXUID,
    // XLiveBaseGetLogonId (answered as Xenia answers it), XLiveFriends
    // Enumerate (0x00058020, refused X_E_FAIL), XUserReadStats (refused) and
    // the session messages above. NetDll_WSAStartup is called once, the same
    // once it is called under state 1, and nothing follows it. No fault, no
    // hang, no unimplemented import, in 240 s runs under both states.
    if (user != 0) return kSigninStateNotSignedIn;
    return live_signin_for_this_title() ? kSigninStateSignedInToLive
                                        : kSigninStateSignedInLocally;
}

// XamUserGetXUID(user_index, type_mask, xuid_ptr) - who is on this port.
//
// This one returns an HRESULT, not a raw error code, and that distinction is the
// whole of the bug that was here. Xenia declares it `X_HRESULT_result_t` and
// returns X_E_NO_SUCH_USER (0x80070525) and X_E_INVALIDARG (0x80070057)
// (xam_user.cc), while the raw X_ERROR_* forms are 0x525 and 0x57. A title that
// does the ordinary thing - `if (FAILED(XamUserGetXUID(1, 1, &xuid)))` - reads
// the raw 0x525 as SUCCEEDED, because its top bit is clear, and then uses the
// zero XUID this call just wrote as if it named a player. That is the "reported
// success for something that never happened" shape, produced by a constant that
// looks right in a debugger.
//
// Port 0 gets the offline XUID. Xenia generates per-profile offline XUIDs of the
// form 0xE03..., and the E0 prefix is what marks a XUID as offline
// (X_PROFILEENUMRESULT::xuid_offline, "// E0....."); ours is a fixed one of that
// class. Ports 1-3 get no XUID at all rather than a derived one: Xenia has no
// per-slot formula - a XUID belongs to a profile, not to a port - so inventing
// 0xE000BABEBABEBABF for port 1 would name an account that does not exist.
uint32_t XamUserGetXUID(uint32_t user, uint32_t, uint32_t xuid_ptr) {
    if (xuid_ptr == 0) return x_hresult::invalid_argument;
    guest_memory& memory = active_kernel()->memory();
    // Cleared first, as Xenia does, so a caller that ignores the result reads a
    // zero rather than whatever was in its buffer.
    memory.write_u64(xuid_ptr, 0);
    if (user >= kMaxUserCount) return x_hresult::invalid_argument;
    if (user != 0) return x_hresult::no_such_user;
    memory.write_u64(xuid_ptr, kOfflineXuid);
    return x_error::success;
}

uint32_t XamNotifyCreateListener(uint32_t, uint32_t) {
    kernel_state* kernel = active_kernel();
    const uint32_t handle = kernel->objects().add(object_type::event, 0);
    // Seeded with the machine's current state: a title learns a controller is
    // attached from the notification, not from polling, so a listener that
    // starts empty leaves it believing nothing is plugged in no matter what
    // XamInputGetState returns.
    kernel->add_notification_listener(handle);
    return handle;
}

uint32_t XNotifyGetNext(uint32_t handle, uint32_t match_id, uint32_t id_ptr,
                        uint32_t param_ptr) {
    kernel_state* kernel = active_kernel();
    guest_memory& memory = kernel->memory();
    if (id_ptr != 0) memory.write_u32(id_ptr, 0);
    if (param_ptr != 0) memory.write_u32(param_ptr, 0);

    notification next;
    if (!kernel->next_notification(handle, match_id, next)) return 0;
    if (id_ptr != 0) memory.write_u32(id_ptr, next.id);
    if (param_ptr != 0) memory.write_u32(param_ptr, next.data);
    return 1; // one dequeued
}

uint32_t XamContentGetLicenseMask(uint32_t mask_ptr, uint32_t) {
    if (mask_ptr == 0) return x_error::invalid_parameter;
    active_kernel()->memory().write_u32(mask_ptr, kFullLicenseMask);
    return x_error::success;
}


// --- thread creation -------------------------------------------------------

namespace {

// A title that asks for no particular stack gets this; the console rounds
// every thread stack up to a 16 KiB page.
constexpr uint32_t kDefaultGuestStackSize = 0x10000;
constexpr uint32_t kMinimumGuestStackSize = 0x4000;
// Creation flags the title passes (from Xenia's kernel).
constexpr uint32_t kCreateSuspended = 0x00000001u;

} // namespace

uint32_t ExCreateThread(uint32_t handle_ptr, uint32_t stack_size,
                        uint32_t thread_id_ptr, uint32_t xapi_thread_startup,
                        uint32_t start_address, uint32_t start_context,
                        uint32_t creation_flags) {
    kernel_state* kernel = active_kernel();
    guest_memory& memory = kernel->memory();
    if (start_address == 0) return x_status::invalid_parameter;
    // Without a launcher the runtime cannot actually run guest code on a new
    // thread; report failure rather than hand back a handle to a thread that
    // will never start.
    if (!kernel->can_launch_guest_threads()) return x_status::unsuccessful;

    // A zero means "the executable's own default", which the XEX header
    // carries; kDefaultGuestStackSize is only the fallback for an executable
    // that does not declare one.
    uint32_t actual_stack =
        stack_size == 0 ? kernel->default_stack_size() : stack_size;
    actual_stack = round_up(actual_stack, 0x1000);
    if (actual_stack < kMinimumGuestStackSize) actual_stack = kMinimumGuestStackSize;

    const uint32_t stack_base = kernel->heap().allocate(actual_stack, 0x1000);
    if (stack_base == 0) return x_status::no_memory;
    memory.zero_block(stack_base, actual_stack);

    guest_thread thread;
    thread.thread_id = kernel->next_thread_id();
    thread.start_address = start_address;
    thread.start_context = start_context;
    thread.xapi_startup = xapi_thread_startup;
    thread.stack_base = stack_base;
    thread.stack_limit = stack_base + actual_stack;
    thread.suspended = (creation_flags & kCreateSuspended) != 0;

    // Which hardware thread this one runs on. The title states it as a
    // processor mask in the top byte of the creation flags, and guest code
    // reads the number back out of its own KPCR to index per-processor state -
    // so leaving it at zero hands the thread created for one processor another
    // processor's data. A mask of zero is left on processor 0: the console
    // would keep such a thread with its creator, and following that needs a
    // notion of "the thread this call is running on" that the kernel does not
    // have yet.
    const uint32_t processor =
        processor_number_from_affinity(creation_flags >> 24);

    const guest_thread_environment env = make_guest_thread_environment(
        *kernel, thread.thread_id, thread.stack_limit, thread.stack_base,
        start_address, processor);
    if (env.kpcr_address == 0) return x_status::no_memory;
    thread.kpcr_address = env.kpcr_address;

    // The thread object is what a handle names and what a wait blocks on.
    thread.kthread_address = env.kthread_address;
    thread.handle = kernel->objects().add(object_type::thread,
                                          env.kthread_address);
    // Keep the entry the kernel stored, rather than looking the thread up again
    // by the handle just handed out. The object table recycles a slot the
    // moment its last reference goes, so a handle the title has already closed
    // names the NEXT object created - and a lookup by that handle finds the
    // first thread entry recorded under it, which is a thread that has already
    // run. Geometry Wars creates and closes three worker threads before its
    // audio engine's, so the audio worker was launched as a duplicate of an
    // earlier one: its update loop never ran, its per-update tick never
    // advanced, and every cached gain in the title's mixer stayed at the zero
    // it was initialised with - silence, from one wrong pointer.
    guest_thread* stored = kernel->add_guest_thread(thread);

    if (handle_ptr != 0) memory.write_u32(handle_ptr, thread.handle);
    if (thread_id_ptr != 0) memory.write_u32(thread_id_ptr, thread.thread_id);

    if (!thread.suspended) {
        stored->launched = true;
        if (!kernel->launch_guest_thread(*stored)) {
            stored->launched = false;
            return x_status::unsuccessful;
        }
    }
    return x_status::success;
}

void ExTerminateThread(uint32_t exit_code) {
    // The thread OBJECT has to become signalled, because that is what releases
    // anyone waiting on the thread's handle. A KTHREAD is allocated zeroed, so
    // its dispatcher header reads as a manual-reset object that is not
    // signalled: exactly the state a wait never returns from. A title that
    // hands work to a worker and then waits for it to finish waited for ever.
    signal_guest_thread_exit(current_thread_identity());
    // And then do not go back. This call ends the calling thread on the
    // console, so guest code has nothing after it to return to - see the
    // header. Unwinding is the only way out of a recompiled call stack; the
    // harness catches this wherever it enters guest code.
    throw guest_thread_terminated{exit_code};
}

void signal_guest_thread_exit(uint32_t kthread_address) {
    if (kthread_address == 0) return;
    kernel_state* kernel = active_kernel();
    if (kernel == nullptr) return;
    guest_memory& memory = kernel->memory();
    if (!memory.committed(kthread_address + kDispatchSignalState, 4)) return;
    // A thread object is a notification object: it stays signalled once the
    // thread has ended, and every waiter is released rather than one.
    memory.write_u32(kthread_address + kDispatchSignalState, 1);
    kernel->threads().wake_all();
}

namespace {

// Shared by the resume paths: starts a thread that was created suspended.
uint32_t resume_guest_thread(uint32_t handle, uint32_t previous_count_ptr) {
    kernel_state* kernel = active_kernel();
    guest_thread* thread = kernel->find_guest_thread(handle);
    if (thread == nullptr) return x_status::invalid_handle;

    const uint32_t previous =
        thread->suspended ? 1u : thread->suspend_count;
    if (previous_count_ptr != 0)
        kernel->memory().write_u32(previous_count_ptr, previous);

    // A running thread that parked itself inside NtSuspendThread is waiting on
    // exactly this count reaching zero. Waking every waiter is what the rest of
    // this kernel does after changing dispatcher state, and the parked thread
    // re-tests its own condition.
    if (thread->suspend_count != 0) {
        --thread->suspend_count;
        kernel->threads().wake_all();
    }

    if (thread->suspended && !thread->launched) {
        thread->suspended = false;
        thread->launched = true;
        if (!kernel->launch_guest_thread(*thread)) {
            thread->launched = false;
            return x_status::unsuccessful;
        }
    }
    return x_status::success;
}

} // namespace

uint32_t NtResumeThread(uint32_t handle, uint32_t suspend_count_ptr) {
    return resume_guest_thread(handle, suspend_count_ptr);
}

uint32_t KeResumeThread(uint32_t thread_ptr) {
    // The Ke form takes the guest KTHREAD pointer; map it back to its handle.
    kernel_state* kernel = active_kernel();
    for (guest_thread& thread : kernel->guest_threads()) {
        kernel_object* object = kernel->objects().lookup(thread.handle);
        if (object != nullptr && object->guest_object == thread_ptr)
            return resume_guest_thread(thread.handle, 0);
    }
    return x_status::invalid_handle;
}

// Stopping a thread that is already running. This is the one call in this family
// that is still a lie, and it is a lie on purpose, so it says so.
//
// Honouring it needs somewhere the target thread can be stopped: on hardware the
// kernel parks it at an instruction boundary, and a host thread running
// recompiled code has no such point - it cannot be stopped from outside without
// risking a stop inside a guarded region, holding a lock nobody else can
// release. The correct implementation is a suspension check the recompiler emits,
// which is a recompiler change, not a kernel one.
//
// So the count is reported and nothing is stopped. What that breaks: a title
// that suspends a worker and then edits state the worker reads, expecting the
// worker to be parked, races it instead. None of the titles brought up so far
// call this - Geometry Wars 2 imports it but never reached it in thirty seconds
// of play - and the report below is how the next one to try will be noticed
// rather than debugged from the symptom.
uint32_t NtSuspendThread(uint32_t handle, uint32_t suspend_count_ptr) {
    kernel_state* kernel = active_kernel();
    guest_thread* thread = kernel->find_guest_thread(handle);
    if (thread == nullptr) return x_status::invalid_handle;
    const uint32_t previous =
        thread->suspended ? 1u : thread->suspend_count;
    if (suspend_count_ptr != 0)
        kernel->memory().write_u32(suspend_count_ptr, previous);
    if (thread->suspended) return x_status::success;

    // The calling thread parking itself. This one IS honourable: the thread is
    // already stopped - it is inside this call - so blocking here is exactly
    // what the console does, and it is the only place a host thread running
    // recompiled code can be stopped safely.
    if (current_guest_thread() == handle) {
        ++thread->suspend_count;
        const uint32_t thread_id = thread->thread_id;
        static std::atomic<bool> announced{false};
        if (!announced.exchange(true)) {
            std::printf("whitty_xenon: thread %u parked itself with "
                        "NtSuspendThread; it waits here until resumed\n",
                        thread_id);
            std::fflush(stdout);
        }
        // Looked up by handle each time round rather than held as a pointer:
        // guest_threads() is a vector and a thread created while this one is
        // parked would move it.
        kernel->threads().wait_until(
            [kernel, handle]() {
                guest_thread* self = kernel->find_guest_thread(handle);
                return self == nullptr || self->suspend_count == 0;
            },
            nullptr);
        return x_status::success;
    }

    // Some other thread. Still not honourable: on hardware the kernel parks the
    // target at an instruction boundary, and a host thread running recompiled
    // code has no such point outside itself - stopping it from here risks
    // stopping it inside a guarded region, holding a lock nobody can release.
    // So it keeps running, and this says so.
    static std::atomic<bool> warned{false};
    if (!warned.exchange(true)) {
        std::printf("whitty_xenon: NtSuspendThread on OTHER running thread %u; "
                    "suspending a thread from outside is not implemented - "
                    "it keeps running\n",
                    thread->thread_id);
        std::fflush(stdout);
    }
    return x_status::success;
}


void XGetVideoMode(uint32_t video_mode_ptr) {
    // xam exposes the same display description the graphics kernel does.
    VdQueryVideoMode(video_mode_ptr);
}


// --- deliberately unavailable subsystems ----------------------------------
// See kernel_handlers.h for why these report specific failures rather than
// zero. Constants live here so the header stays declaration-only.

namespace {
constexpr uint32_t kInvalidSocket = x_net::invalid_socket;
constexpr uint32_t kSocketError = x_net::socket_error;
constexpr uint32_t kWsaeNetDown = x_net::wsae_net_down;
constexpr uint32_t kXnaddrNone = x_net::xnaddr_none;
constexpr uint32_t kXnaddrStatic = x_net::xnaddr_static;
constexpr uint32_t kXnaddrSize = x_net::xnaddr_size;
constexpr uint32_t kXNetConnectStatusLost = x_net::xnet_connect_status_lost;
// Any non-zero id: the title only ever hands it back to us.
constexpr uint32_t kAudioDriverId = 0xA0D10001u;
} // namespace

// NetDll_WSAStartup(caller, version_requested, wsadata_ptr) - winsock
// initialisation. The leading `caller` argument is the NetDll client slot,
// not part of the Win32 signature.
//
// The version is requested and REPORTED: the caller reads wVersion back out of
// the WSADATA it handed over and rejects anything that is not what it asked
// for - Midnight Club LA's InitWinSock fatal-errors ("Couldn't find a usable
// WinSock DLL (version=%x)") unless wVersion comes back exactly 0x0002, which
// a bare success return never writes. Xenia/RexGlue fill the same struct
// (xnet.cc): the requested version round-tripped, a description string, and
// the socket limits.
uint32_t NetDll_WSAStartup(uint32_t caller, uint32_t version_requested,
                           uint32_t wsadata_ptr) {
    (void)caller;
    if ((version_requested & 0xFF) != 2)
        return 0x0000276C; // WSAVERNOTSUPPORTED
    if (wsadata_ptr != 0) {
        guest_memory& memory = active_kernel()->memory();
        // X_WSADATA: be16 wVersion, be16 wHighVersion, char szDescription[],
        // char szSystemStatus[], be16 iMaxSockets, be16 iMaxUdpDg,
        // be32 lpVendorInfo.
        // The struct is 0x190 bytes exactly (Xenia static_asserts it), and the
        // zero MUST stop there: titles stack-allocate it with nothing to spare.
        // Midnight Club LA puts it 80 bytes into a frame whose register-save
        // area starts 400 later - zeroing 0x19A reached 8 bytes into the saved
        // registers and the epilogue restored r31 as zero, which surfaced as a
        // memcpy to guest address 4 several calls later.
        memory.zero_block(wsadata_ptr, 0x190);
        memory.write_u16(wsadata_ptr + 0x00,
                         static_cast<uint16_t>(version_requested));
        memory.write_u16(wsadata_ptr + 0x02,
                         static_cast<uint16_t>(version_requested));
        memory.write_block(wsadata_ptr + 0x04, "Xbox 360 WinSock 2.2", 21);
        memory.write_block(wsadata_ptr + 0x105, "Running", 8);
        memory.write_u16(wsadata_ptr + 0x186, 32767);
        memory.write_u16(wsadata_ptr + 0x188, 0xFFFF);
    }
    return x_error::success;
}

uint32_t NetDll_WSACleanup(uint32_t a, uint32_t b, uint32_t c) {
    (void)a; (void)b; (void)c;
    return x_error::success;
}

uint32_t NetDll_XNetStartup(uint32_t a, uint32_t b, uint32_t c) {
    (void)a; (void)b; (void)c;
    return x_error::success;
}

uint32_t NetDll_XNetCleanup(uint32_t a, uint32_t b, uint32_t c) {
    (void)a; (void)b; (void)c;
    return x_error::success;
}

uint32_t NetDll_XNetGetTitleXnAddr(uint32_t caller, uint32_t addr_ptr) {
    (void)caller;
    if (addr_ptr == 0) return kXnaddrNone;
    guest_memory& memory = active_kernel()->memory();
    memory.zero_block(addr_ptr, kXnaddrSize);
    // Loopback, and a NON-ZERO MAC: some middleware (RakNet) derives its
    // random seed from these bytes and fails to start on an all-zero MAC.
    memory.write_u32(addr_ptr + 0x00, 0x7F000001u); // 127.0.0.1
    for (uint32_t i = 0; i < 6; ++i)
        memory.write_u8(addr_ptr + 0x0C + i, static_cast<uint8_t>(0x02 + i));
    return kXnaddrStatic;
}

uint32_t NetDll_XNetGetEthernetLinkStatus(uint32_t caller) {
    (void)caller;
    return 0; // no link: the cable is unplugged
}

uint32_t NetDll_XNetRandom(uint32_t caller, uint32_t buffer, uint32_t length) {
    (void)caller;
    // Deterministic filler; nothing here is used for anything security-bearing.
    guest_memory& memory = active_kernel()->memory();
    for (uint32_t i = 0; i < length; ++i)
        memory.write_u8(buffer + i, static_cast<uint8_t>(0xA5u ^ i));
    return x_error::success;
}

uint32_t NetDll_WSAGetLastError() {
    return kWsaeNetDown;
}

void NetDll_WSASetLastError(uint32_t error) {
    (void)error;
}

uint32_t NetDll_socket(uint32_t a, uint32_t b, uint32_t c, uint32_t d) {
    (void)a; (void)b; (void)c; (void)d;
    return kInvalidSocket;
}

uint32_t NetDll_accept(uint32_t a, uint32_t b, uint32_t c, uint32_t d) {
    (void)a; (void)b; (void)c; (void)d;
    return kInvalidSocket;
}

uint32_t NetDll_WSACreateEvent(uint32_t a, uint32_t b, uint32_t c, uint32_t d) {
    (void)a; (void)b; (void)c; (void)d;
    return kInvalidSocket;
}

uint32_t NetDll_XNetDnsLookup(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

uint32_t NetDll_XNetDnsRelease(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

uint32_t NetDll_XNetQosListen(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

uint32_t NetDll_XNetQosLookup(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

uint32_t NetDll_XNetQosRelease(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

uint32_t NetDll_XNetRegisterKey(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

uint32_t NetDll_XNetServerToInAddr(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

uint32_t NetDll_XNetUnregisterKey(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

uint32_t NetDll_XNetXnAddrToInAddr(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

uint32_t NetDll_bind(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

uint32_t NetDll_closesocket(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

uint32_t NetDll_connect(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

uint32_t NetDll_getsockname(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

uint32_t NetDll_getsockopt(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

uint32_t NetDll_inet_addr(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

uint32_t NetDll_ioctlsocket(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

uint32_t NetDll_listen(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

uint32_t NetDll_recv(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

uint32_t NetDll_recvfrom(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

uint32_t NetDll_select(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

uint32_t NetDll_send(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

uint32_t NetDll_sendto(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

uint32_t NetDll_setsockopt(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

// The overlapped and XNet surface, reached by a title with online multiplayer
// after the plain socket calls have already failed. All of it fails; the two
// that do not spell failure as SOCKET_ERROR are called out where they are.
uint32_t NetDll_WSARecvFrom(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

uint32_t NetDll_WSASendTo(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

uint32_t NetDll_WSAGetOverlappedResult(uint32_t a, uint32_t b, uint32_t c, uint32_t d,
                                       uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    // ZERO IS THE FAILURE HERE, unlike every other call in this group: this one
    // returns a BOOL, so FALSE is 0 and SOCKET_ERROR (0xFFFFFFFF) would be read
    // as TRUE - a success report for a transfer that never happened, on a
    // buffer this call never wrote.
    return 0;
}

uint32_t NetDll_XNetConnect(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

uint32_t NetDll_XNetGetConnectStatus(uint32_t a, uint32_t b, uint32_t c, uint32_t d,
                                     uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    // A STATE, not a status code, and the choice of state is the whole point.
    // 0 is IDLE and 1 is PENDING; either leaves a title polling for a transition
    // that cannot come, which is the "neither completes nor fails" failure this
    // runtime keeps rediscovering. LOST is terminal, so the poll terminates.
    return kXNetConnectStatusLost;
}

uint32_t NetDll_XNetGetOpt(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

uint32_t NetDll_XNetInAddrToXnAddr(uint32_t a, uint32_t b, uint32_t c, uint32_t d,
                                   uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

uint32_t NetDll_XNetUnregisterInAddr(uint32_t a, uint32_t b, uint32_t c, uint32_t d,
                                     uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

uint32_t NetDll_XNetQosServiceLookup(uint32_t a, uint32_t b, uint32_t c, uint32_t d,
                                     uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

uint32_t NetDll_XNetReplaceKey(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

uint32_t XNotifyPositionUI(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return x_error::function_failed;
}

// XamShowAchievementsUI(user_index, title_id) - the achievement blade.
//
// This is the whole of Geometry Wars' Achievements screen: the title makes this
// one call and draws nothing itself, because on a console the dashboard takes
// the screen over. It does not import an achievement enumerator at all, so
// there is no title-side list to feed - measured, statically and at runtime.
// Xenia answers the same call by drawing the list itself; so do we, from the
// title's own SPA metadata and the local unlock store.
//
// Returns SUCCESS after raising the blade, matching Xenia's async dialog
// dispatch, and broadcasts SystemUI so a title that watches for the guide
// appearing sees it. The old answer here was FUNCTION_FAILED, which was honest
// while there was no blade to show and would be a lie now.
uint32_t XamShowAchievementsUI(uint32_t user, uint32_t title, uint32_t c,
                               uint32_t d, uint32_t e) {
    (void)title; (void)c; (void)d; (void)e;
    kernel_state* kernel = active_kernel();
    // Only port 0 has a profile, matching XamUserGetSigninState.
    if (user != 0) return x_error::no_such_user;
    kernel->open_system_blade(kernel_state::blade_page_achievements);
    return x_error::success;
}

uint32_t XamShowCustomPlayerListUI(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return x_error::function_failed;
}

// XamShowDeviceSelectorUI is with the storage device it selects, further down.

uint32_t XamShowDirtyDiscErrorUI(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return x_error::function_failed;
}

uint32_t XamShowFriendRequestUI(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return x_error::function_failed;
}

uint32_t XamShowFriendsUI(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return x_error::function_failed;
}

uint32_t XamShowGameInviteUI(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return x_error::function_failed;
}

uint32_t XamShowGamerCardUIForXUID(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return x_error::function_failed;
}

uint32_t XamShowKeyboardUI(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return x_error::function_failed;
}

uint32_t XamShowMarketplaceUI(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return x_error::function_failed;
}

uint32_t XamShowMessageBoxUIEx(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return x_error::function_failed;
}

uint32_t XamShowMessageBoxUI(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    // Same answer as the Ex form above, and they have to agree: there is no
    // system dialog to raise, so no button can be pressed. Reporting success
    // would hand the title a button index nobody chose.
    return x_error::function_failed;
}

uint32_t XamUserGetDeviceContext(uint32_t user_index, uint32_t unknown,
                                 uint32_t out_context_ptr) {
    (void)unknown;
    // Agrees with XamContentGetDeviceName, which reports DEVICE_NOT_CONNECTED:
    // a context handed back here would name a device that call says is absent,
    // and the title would then open content on it.
    if (out_context_ptr != 0)
        active_kernel()->memory().write_u32(out_context_ptr, 0);
    if (user_index != 0) return x_error::no_such_user;
    return x_error::device_not_connected;
}

// --- attached devices -----------------------------------------------------
uint32_t RmcDeviceRequest(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    // No remote control attached. DEVICE_NOT_CONNECTED rather than success,
    // because a caller that reads SUCCESS goes on to read a reply buffer this
    // call never wrote.
    return x_error::device_not_connected;
}

uint32_t MicDeviceRequest(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    // No microphone attached; same reasoning as the remote control above, and
    // consistent with XamVoiceHeadsetPresent.
    return x_error::device_not_connected;
}

uint32_t XamShowMessageComposeUI(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return x_error::function_failed;
}

uint32_t XamShowMessagesUI(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return x_error::function_failed;
}

uint32_t XamShowPlayerReviewUI(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return x_error::function_failed;
}

uint32_t XamShowPlayersUI(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return x_error::function_failed;
}

uint32_t XamShowQuickChatUI(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return x_error::function_failed;
}

uint32_t XamShowSigninUI(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return x_error::function_failed;
}

uint32_t XamUserAreUsersFriends(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return x_error::no_such_user;
}

uint32_t XamUserCheckPrivilege(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return x_error::no_such_user;
}

// XamUserCreateStatsEnumerator(title_id, user_index, count, flags, size,
//                              stats_ptr, buffer_size_ptr, handle_ptr)
//
// This one was the same bug as XamUserGetXUID, twice over. It took five
// anonymous arguments, read none of them, and returned the RAW 0x525 - which a
// caller doing `if (FAILED(...))` reads as SUCCEEDED, because its top bit is
// clear - while writing neither the buffer size nor the handle. So a title that
// asked for a stats enumerator was told it had one and then used whatever dword
// happened to be in its handle variable. All four titles here import it.
//
// Answered as Xenia answers it (xam_user.cc): the arguments are validated, the
// buffer size is written as zero, and a real, EMPTY enumerator is handed back.
// Empty is the honest answer - there are no remote players' stats to enumerate
// without Live - and an empty enumerator drains cleanly, which a bad handle
// does not. The open/close message ids are Xenia's 0xB0023 / 0xB0024, which are
// this enumerator's, not the achievement one's.
uint32_t XamUserCreateStatsEnumerator(uint32_t title_id, uint32_t user_index,
                                      uint32_t count, uint32_t flags,
                                      uint32_t size, uint32_t stats_ptr,
                                      uint32_t buffer_size_ptr,
                                      uint32_t handle_ptr) {
    (void)title_id;
    kernel_state* kernel = active_kernel();
    guest_memory& memory = kernel->memory();

    if (count == 0 || buffer_size_ptr == 0 || handle_ptr == 0 ||
        stats_ptr == 0)
        return x_error::invalid_parameter;
    if (user_index >= kMaxUserCount) return x_error::invalid_parameter;
    if (flags == 0 || flags > 0x64) return x_error::invalid_parameter;
    if (size == 0) return x_error::invalid_parameter;

    memory.write_u32(buffer_size_ptr, 0);

    constexpr uint32_t kEnumeratorObjectSize = 0x18;
    const uint32_t guest_object =
        kernel->heap().allocate(kEnumeratorObjectSize, 8);
    if (guest_object == 0) return x_status::no_memory;
    memory.zero_block(guest_object, kEnumeratorObjectSize);
    memory.write_u32(guest_object + 0x00, 0xFB);     // app id: XGI
    memory.write_u32(guest_object + 0x04, 0xB0023);  // open message
    memory.write_u32(guest_object + 0x08, 0xB0024);  // close message
    memory.write_u32(guest_object + 0x0C, user_index);
    memory.write_u32(guest_object + 0x10, count);
    memory.write_u32(guest_object + 0x14, flags);

    kernel_state::guest_enumerator enumerator;
    enumerator.item_size = size;
    enumerator.items_per_enumerate = count;
    enumerator.next_item = 0;
    enumerator.item_count = 0;
    const uint32_t host_index = kernel->add_enumerator(enumerator);
    memory.write_u32(handle_ptr,
                     kernel->objects().add(object_type::enumerator,
                                           guest_object, host_index));
    return x_error::success;
}

// XamUserGetName(user_index, buffer, buffer_length) - the local player's
// gamertag, in ASCII.
//
// This refused unconditionally, and that refusal contradicted every other
// answer the runtime gives about the local player: XamUserGetSigninState
// reports signed in, XamUserGetXUID hands out an offline XUID for port 0, and
// the score table and the achievement blade already record and display a name.
// There is nothing missing behind this call; it was simply not answering.
//
// It cost Jetpac Refuelled its whole game-start path. The title builds a
// session - XGI set-property, two set-contexts, XamSessionCreateHandle,
// XamSessionRefObjByHandle, XGI session create, all of which succeed - then
// asks who the player is, and abandons the session when it cannot be told:
// "ERROR / Failed to create the game." That is bug class 9 in docs/BRINGUP.md
// exactly, a refusal rotting the same way a fake success does, and it looked
// like a Live problem because an unanswered XLiveBase message (the NAT type,
// below) was logged a few calls earlier. Answering the NAT type changes
// nothing; answering this is the fix.
//
// Shape from Xenia's xam_user.cc: an out-of-range index is INVALID_PARAMETER,
// an absent user gets the first byte of the buffer cleared and NO_SUCH_USER
// (so a caller ignoring the result reads an empty string rather than whatever
// was in its buffer), and a present user gets the name copied with the length
// counting the terminator.
uint32_t XamUserGetName(uint32_t user, uint32_t buffer_ptr,
                        uint32_t buffer_length) {
    if (user >= kMaxUserCount) return x_error::invalid_parameter;
    guest_memory& memory = active_kernel()->memory();
    // Ports 1-3 have no profile behind them - the same answer XamUserGetXUID
    // gives them, for the same reason: a name belongs to a profile and there
    // is one profile on this machine.
    if (user != 0) {
        if (buffer_ptr != 0 && buffer_length != 0)
            memory.write_u8(buffer_ptr, 0);
        return x_error::no_such_user;
    }
    if (buffer_ptr == 0 || buffer_length == 0)
        return x_error::invalid_parameter;
    const std::string name = kLocalPlayerName;
    const uint32_t copied =
        std::min<uint32_t>(buffer_length - 1, static_cast<uint32_t>(name.size()));
    for (uint32_t i = 0; i < copied; ++i)
        memory.write_u8(buffer_ptr + i, static_cast<uint8_t>(name[i]));
    memory.write_u8(buffer_ptr + copied, 0);
    return x_error::success;
}

uint32_t XamUserGetSigninInfo(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return x_error::no_such_user;
}

// --- profile settings: the XBLA save path -----------------------------------
//
// An XBLA title stores its progress in the signed-in profile, under a
// title-specific setting key, and reads it back with the two-pass protocol
// below. There is no content package and no save device involved: for Geometry
// Wars these two calls are the entire save system.
//
// Layouts, from Xenia (X_USER_READ_PROFILE_SETTINGS, X_USER_PROFILE_SETTING,
// X_USER_DATA). The buffer the title hands over is laid out as an eight-byte
// header, then one forty-byte record per setting, then - for the settings whose
// values do not fit in a record - a data area the records point into.
namespace {

// X_USER_READ_PROFILE_SETTINGS, 8 bytes.
constexpr uint32_t kReadSettingsHeaderSize = 8;
constexpr uint32_t kReadSettingsCount = 0x00;       // u32
constexpr uint32_t kReadSettingsSettingsPtr = 0x04; // u32

// X_USER_PROFILE_SETTING, 40 bytes. The user-index and xuid fields overlap:
// the eight bytes at 0x08 are a xuid, and the first four of them are the user
// index for the non-xuid form of the call.
constexpr uint32_t kProfileSettingSize = 40;
constexpr uint32_t kProfileSettingSource = 0x00;    // u32
constexpr uint32_t kProfileSettingXuid = 0x08;      // u64
constexpr uint32_t kProfileSettingUserIndex = 0x08; // u32
constexpr uint32_t kProfileSettingId = 0x10;        // u32
constexpr uint32_t kProfileSettingData = 0x18;      // X_USER_DATA

// X_USER_DATA, 16 bytes: a type byte then, at offset 8, the eight-byte union.
constexpr uint32_t kUserDataType = 0x00;  // u8
constexpr uint32_t kUserDataUnion = 0x08; // 8 bytes
// For a wstring or binary setting the union is {size, pointer}.
constexpr uint32_t kUserDataPayloadSize = kUserDataUnion + 0;
constexpr uint32_t kUserDataPayloadPtr = kUserDataUnion + 4;

// The console caps one setting's data at 1000 bytes (kMaxUserDataSize).
constexpr uint32_t kMaxSettingPayload = 0x3E8;

// The XAM_OVERLAPPED a title passes to make one of these calls asynchronous.
constexpr uint32_t kOverlappedResult = 0x00;
constexpr uint32_t kOverlappedLength = 0x04;
constexpr uint32_t kOverlappedContext = 0x08;
constexpr uint32_t kOverlappedEvent = 0x0C;
constexpr uint32_t kOverlappedCompletionRoutine = 0x10;
constexpr uint32_t kOverlappedExtendedError = 0x18;

// Finishes an overlapped operation that has already run to completion, exactly
// as the console does for a call it can answer without waiting: the result and
// length are written into the structure and the title's event, if it supplied
// one, is signalled. The title then reads the result out of the structure -
// which is why the call itself returns IO_PENDING and not the result.
//
// Xenia's CompleteOverlappedImmediate stores 0xFFFFFFFF as the length when the
// operation failed, because some titles read the length rather than the result
// to decide whether it worked.
void complete_overlapped(uint32_t overlapped_ptr, uint32_t result,
                         uint32_t extended_error, uint32_t length) {
    if (overlapped_ptr == 0) return;
    kernel_state* kernel = active_kernel();
    guest_memory& memory = kernel->memory();
    memory.write_u32(overlapped_ptr + kOverlappedResult, result);
    memory.write_u32(overlapped_ptr + kOverlappedExtendedError, extended_error);
    memory.write_u32(overlapped_ptr + kOverlappedLength, length);

    const uint32_t event_handle = memory.read_u32(overlapped_ptr + kOverlappedEvent);
    if (event_handle != 0) {
        const uint32_t event_ptr = event_pointer_for_handle(event_handle);
        if (event_ptr != 0) set_signal_state(event_ptr, 1);
    }
    // A completion routine would be delivered as an APC on the requesting
    // thread. There is no APC queue here, so say so rather than drop it: a
    // title waiting for that callback would otherwise wait forever with no
    // trace of why.
    const uint32_t routine = memory.read_u32(overlapped_ptr + kOverlappedCompletionRoutine);
    if (routine != 0) {
        static bool warned = false;
        if (!warned) {
            warned = true;
            std::printf(
                "whitty_xenon: overlapped completion routine %08X requested; "
                "APC delivery is not implemented\n",
                routine);
            std::fflush(stdout);
        }
    }
    (void)kOverlappedContext;
}

void complete_overlapped(uint32_t overlapped_ptr, uint32_t result) {
    complete_overlapped(overlapped_ptr, result, result,
                        result == x_error::success ? 0u : 0xFFFFFFFFu);
}

// Reads the eight-byte union out of a guest X_USER_DATA.
uint64_t read_setting_union(guest_memory& memory, uint32_t data_ptr) {
    return memory.read_u64(data_ptr + kUserDataUnion);
}

// WHITTY_PROFILE_DEBUG traces every profile-setting call with the setting keys
// it names. Which keys a title asks for, and whether it got a value, is the
// only way to see what its save actually consists of - the argument registers
// alone stop at the fourth argument, and the keys are behind a pointer in the
// sixth.
bool profile_debug() {
    static const bool on = std::getenv("WHITTY_PROFILE_DEBUG") != nullptr;
    return on;
}

} // namespace

uint32_t XamUserReadProfileSettingsEx(uint32_t title_id, uint32_t user_index,
                                      uint32_t xuid_count, uint32_t xuids_ptr,
                                      uint32_t setting_count,
                                      uint32_t setting_ids_ptr,
                                      uint32_t buffer_size_ptr,
                                      uint32_t unknown_buffer_size_ptr,
                                      uint32_t buffer_ptr,
                                      uint32_t overlapped_ptr) {
    // The Ex form splits the size pointer across two arguments; whichever one
    // the title filled in is the one to use.
    if (buffer_size_ptr == 0) buffer_size_ptr = unknown_buffer_size_ptr;

    kernel_state* kernel = active_kernel();
    guest_memory& memory = kernel->memory();

    // One to thirty-two settings, and a size pointer, or there is nothing to
    // answer. These are argument checks, so they fail the call outright rather
    // than completing an overlapped with an error.
    if (setting_count < 1 || setting_count > 32 || setting_ids_ptr == 0)
        return x_error::invalid_parameter;
    if (buffer_size_ptr == 0) return x_error::invalid_parameter;

    const uint32_t buffer_size = memory.read_u32(buffer_size_ptr);
    if (buffer_size != 0 && buffer_ptr == 0) return x_error::invalid_parameter;

    if (profile_debug()) {
        std::printf("  [profile] read title=%08X user=%u count=%u size=%u "
                    "buffer=%08X overlapped=%08X keys:",
                    title_id, user_index, setting_count, buffer_size, buffer_ptr,
                    overlapped_ptr);
        for (uint32_t i = 0; i < setting_count && i < 32; ++i)
            std::printf(" %08X", memory.read_u32(setting_ids_ptr + i * 4));
        std::printf("\n");
        std::fflush(stdout);
    }

    // How large a buffer this request needs: the header, a record per setting,
    // and the maximum payload of every setting whose value lives outside its
    // record.
    uint32_t header_size = setting_count * kProfileSettingSize;
    uint32_t data_size = 0;
    for (uint32_t i = 0; i < setting_count; ++i) {
        const setting_key key{memory.read_u32(setting_ids_ptr + i * 4)};
        if (key.has_payload()) data_size += key.max_size();
    }
    if (xuids_ptr != 0 && xuid_count != 0) {
        header_size *= xuid_count;
        data_size *= xuid_count;
    }
    header_size += kReadSettingsHeaderSize;
    const uint32_t needed = header_size + data_size;

    // Pass one: the title asks how much room to set aside.
    if (buffer_ptr == 0 || buffer_size < needed) {
        if (buffer_size == 0) memory.write_u32(buffer_size_ptr, needed);
        return x_error::insufficient_buffer;
    }

    // Only the first port has a profile on it, matching XamUserGetSigninState.
    if (xuids_ptr == 0 && user_index != 0) {
        if (overlapped_ptr != 0) {
            complete_overlapped(overlapped_ptr, x_error::no_such_user);
            return x_error::io_pending;
        }
        return x_error::no_such_user;
    }

    // Title id 0 means "the running title", which is the scope a
    // title-specific setting belongs to.
    const uint32_t scope = title_id != 0 ? title_id : kernel->title_id();
    const profile_store& profile = kernel->profile();

    memory.write_u32(buffer_ptr + kReadSettingsCount, setting_count);
    const uint32_t settings_base = buffer_ptr + kReadSettingsHeaderSize;
    memory.write_u32(buffer_ptr + kReadSettingsSettingsPtr, settings_base);

    uint32_t payload_cursor = buffer_ptr + header_size;
    for (uint32_t i = 0; i < setting_count; ++i) {
        const uint32_t record = settings_base + i * kProfileSettingSize;
        const setting_key key{memory.read_u32(setting_ids_ptr + i * 4)};
        memory.zero_block(record, kProfileSettingSize);
        memory.write_u32(record + kProfileSettingId, key.value);
        if (xuids_ptr != 0 && xuid_count != 0)
            memory.write_u64(record + kProfileSettingXuid,
                             memory.read_u64(xuids_ptr));
        else
            memory.write_u32(record + kProfileSettingUserIndex, user_index);

        // A title-specific key is scoped to this title - one title's save must
        // never be handed to another - while the XPROFILE_* gamer settings are
        // profile-wide and every title sees the same ones.
        const bool title_scoped = key.id() >= 0x3FFD && key.id() <= 0x3FFF;
        const user_setting* stored =
            profile.find(title_scoped ? scope : 0u, key.value);
        const uint32_t data = record + kProfileSettingData;
        if (stored == nullptr) {
            // Nothing stored. The console does NOT report "no value" here: it
            // falls back to the setting's default - a zero of the setting's own
            // declared type - and says so with source = DEFAULT. Xenia does the
            // same (UserTracker::GetSetting falls through to
            // UserSetting::GetDefaultSetting, whose source is DEFAULT).
            //
            // The distinction is the whole bug this fixed. Geometry Wars 2
            // branches on source: 2 means "here is your save", 1 means "there
            // is no save, start a new one". Answering 0 matches neither branch,
            // so the title never learned it was a first run and re-queued the
            // load forever behind its "Saving content" banner. NO_VALUE is for
            // a setting with no value AND no default, which is not this.
            memory.write_u32(record + kProfileSettingSource,
                             setting_source::from_default);
            memory.write_u8(data + kUserDataType,
                            static_cast<uint8_t>(key.type()));
            // The union stays zeroed: a zero scalar, or an empty payload whose
            // size and pointer are both zero.
            continue;
        }

        memory.write_u32(record + kProfileSettingSource,
                         setting_source::from_title);
        memory.write_u8(data + kUserDataType, static_cast<uint8_t>(key.type()));
        if (profile_debug()) {
            std::printf("  [profile]   %08X: stored, %u byte(s) of payload\n",
                        key.value,
                        static_cast<unsigned>(stored->payload.size()));
            std::fflush(stdout);
        }
        if (!key.has_payload()) {
            memory.write_u64(data + kUserDataUnion, stored->scalar);
            continue;
        }
        // The record cannot hold the bytes, so they go in the data area and the
        // record points at them.
        uint32_t length = static_cast<uint32_t>(stored->payload.size());
        if (length > key.max_size()) length = key.max_size();
        for (uint32_t byte = 0; byte < length; ++byte)
            memory.write_u8(payload_cursor + byte, stored->payload[byte]);
        memory.write_u32(data + kUserDataPayloadSize, length);
        memory.write_u32(data + kUserDataPayloadPtr, payload_cursor);
        payload_cursor += key.max_size();
    }

    if (overlapped_ptr != 0) {
        complete_overlapped(overlapped_ptr, x_error::success);
        return x_error::io_pending;
    }
    return x_error::success;
}

uint32_t XamUserReadProfileSettings(uint32_t title_id, uint32_t user_index,
                                    uint32_t xuid_count, uint32_t xuids_ptr,
                                    uint32_t setting_count,
                                    uint32_t setting_ids_ptr,
                                    uint32_t buffer_size_ptr,
                                    uint32_t buffer_ptr,
                                    uint32_t overlapped_ptr) {
    return XamUserReadProfileSettingsEx(title_id, user_index, xuid_count,
                                        xuids_ptr, setting_count,
                                        setting_ids_ptr, buffer_size_ptr, 0,
                                        buffer_ptr, overlapped_ptr);
}

uint32_t XamUserWriteProfileSettings(uint32_t title_id, uint32_t user_index,
                                     uint32_t setting_count,
                                     uint32_t settings_ptr,
                                     uint32_t overlapped_ptr) {
    kernel_state* kernel = active_kernel();
    guest_memory& memory = kernel->memory();

    if (setting_count == 0 || settings_ptr == 0)
        return x_error::invalid_parameter;
    if (user_index != 0) {
        if (overlapped_ptr != 0) {
            complete_overlapped(overlapped_ptr, x_error::no_such_user);
            return x_error::io_pending;
        }
        return x_error::no_such_user;
    }

    const uint32_t scope = title_id != 0 ? title_id : kernel->title_id();
    profile_store& profile = kernel->profile();

    if (profile_debug()) {
        std::printf("  [profile] write title=%08X user=%u count=%u "
                    "overlapped=%08X keys:",
                    title_id, user_index, setting_count, overlapped_ptr);
        for (uint32_t i = 0; i < setting_count && i < 32; ++i)
            std::printf(" %08X",
                        memory.read_u32(settings_ptr + i * kProfileSettingSize +
                                        kProfileSettingId));
        std::printf("\n");
        std::fflush(stdout);
    }

    for (uint32_t i = 0; i < setting_count; ++i) {
        const uint32_t record = settings_ptr + i * kProfileSettingSize;
        const setting_key key{memory.read_u32(record + kProfileSettingId)};
        const uint32_t data = record + kProfileSettingData;

        user_setting value;
        value.key = key.value;
        if (!key.has_payload()) {
            value.scalar = read_setting_union(memory, data);
        } else {
            uint32_t length = memory.read_u32(data + kUserDataPayloadSize);
            const uint32_t source = memory.read_u32(data + kUserDataPayloadPtr);
            if (length > kMaxSettingPayload) length = kMaxSettingPayload;
            if (key.max_size() != 0 && length > key.max_size())
                length = key.max_size();
            value.payload.resize(length);
            for (uint32_t byte = 0; byte < length; ++byte)
                value.payload[byte] = memory.read_u8(source + byte);
            if (profile_debug()) {
                std::printf("  [profile]   %08X: %u byte(s) from %08X:",
                            key.value, length, source);
                for (uint32_t byte = 0; byte < length && byte < 32; ++byte)
                    std::printf(" %02X", value.payload[byte]);
                std::printf("\n");
                std::fflush(stdout);
            }
        }
        const bool title_scoped = key.id() >= 0x3FFD && key.id() <= 0x3FFF;
        profile.store(title_scoped ? scope : 0u, value);
    }

    // Persist immediately. A title puts a "saving, do not turn off your
    // console" banner up around this call precisely because the bytes are
    // expected to survive the power going off - so reporting success without
    // writing them would lose the player's progress silently.
    uint32_t result = x_error::success;
    if (!profile.save()) {
        // Nowhere to write. DEVICE_NOT_CONNECTED is the console's answer when
        // the storage holding the profile has gone, and titles have a path for
        // it; a title told SUCCESS here would believe a save it does not have.
        result = x_error::device_not_connected;
        std::printf(
            "whitty_xenon: profile save FAILED (%s) - the title has been told "
            "the storage device is not connected\n",
            profile.path().empty() ? "no profile path configured"
                                   : profile.path().c_str());
        std::fflush(stdout);
    }

    // The dashboard tells every listener a profile setting moved.
    if (result == x_error::success)
        kernel->broadcast_notification(notification_id::profile_setting_changed,
                                       1u << user_index);

    if (overlapped_ptr != 0) {
        complete_overlapped(overlapped_ptr, result);
        return x_error::io_pending;
    }
    return result;
}

// --- earning an achievement -------------------------------------------------
//
// A title does not unlock an achievement through an export. XUserWriteAchievements
// is a stub in the title's own xam library that posts a message to the XGI
// system app: XMsgStartIORequest(app 0xFB, message 0x000B0008, overlapped,
// buffer, 8). Measured on Geometry Wars - its only import for this is
// XMsgStartIORequest, and sub_82029238 builds exactly that call.
//
// So the unlock itself lives here, reachable by name, and the XMsg dispatcher
// routes 0x000B0008 to it with the message's buffer. It is deliberately NOT
// inside XMsgStartIORequest: that dispatcher is being written separately, and
// two hands in one switch statement is how a merge loses a case.
//
// Layouts from Xenia's xgi_app.cc. XGI_WRITEACHIEVEMENT is
// { be32 num_achievements; be32 achievements_ptr; } and each X_USER_ACHIEVEMENT
// is { be32 user_index; be32 achievement_id; }.
uint32_t xgi_user_write_achievements(uint32_t buffer_ptr,
                                     uint32_t buffer_length) {
    kernel_state* kernel = active_kernel();
    guest_memory& memory = kernel->memory();

    // The console's own buffer is exactly eight bytes. A shorter one cannot be
    // read, and reporting success for it would claim an unlock that never
    // happened - the failure mode this whole store exists to avoid.
    if (buffer_ptr == 0 || (buffer_length != 0 && buffer_length < 8))
        return x_error::invalid_parameter;

    const uint32_t count = memory.read_u32(buffer_ptr + 0x00);
    const uint32_t records = memory.read_u32(buffer_ptr + 0x04);
    if (count == 0) return x_error::success; // nothing asked for
    if (records == 0) return x_error::invalid_parameter;
    // A count that would run off the end of guest memory is refused rather than
    // walked. Real titles write one or two at a time.
    constexpr uint32_t kMaxAchievementsPerWrite = 64;
    if (count > kMaxAchievementsPerWrite) return x_error::invalid_parameter;
    if (memory.host(records, count * 8) == nullptr)
        return x_error::invalid_parameter;

    bool all_stored = true;
    for (uint32_t i = 0; i < count; ++i) {
        const uint32_t user = memory.read_u32(records + i * 8 + 0);
        const uint32_t id = memory.read_u32(records + i * 8 + 4);
        // Whose achievement this is. The record names the port, and it is
        // honoured rather than ignored: port 0 has the local profile, ports 1-3
        // have a controller and no account (XamUserGetSigninState says so), so
        // an unlock for a second player is dropped rather than credited to
        // player one. A guest earning somebody else's achievements is a worse
        // outcome than a guest earning none.
        //
        // Dropped, and still SUCCESS - deliberately, and it is the one place in
        // this file where "nothing happened" and "success" are both right. Xenia
        // does the same: AchievementManager::EarnAchievement looks the slot's
        // profile up and returns silently when there is none
        // (achievement_manager.cc: `if (!user) { return; }`), while the XGI
        // message handler that called it reports success regardless. Nobody
        // lost an achievement, because nobody was there to earn one; the title
        // asked the console to file something for a player who does not exist,
        // and the console has nowhere to file it. The failure path below is for
        // an unlock that WAS earned and did not reach the disk, which is the
        // case where silence would cost the player something.
        if (user != 0) {
            if (profile_debug()) {
                std::printf("  [profile] achievement %u for port %u dropped: "
                            "no profile on that port\n", id, user);
                std::fflush(stdout);
            }
            continue;
        }
        bool already = false;
        const bool stored = kernel->profile().unlock_achievement(
            kernel->title_id(), static_cast<uint16_t>(id), current_filetime(),
            &already);
        // Already earned is a success: a title fires the same unlock every time
        // its condition triggers, and the console keeps the first time.
        if (!stored && !already) all_stored = false;
    }
    // A write that did not reach the disk must not report success, or the
    // player loses the achievement at exit and nothing said so.
    return all_stored ? x_error::success : x_error::function_failed;
}

// XGIUserSetContext / XGIUserSetPropertyEx - the title asking the console to
// remember a value about this session.
//
// On a real console these feed matchmaking and the dashboard's presence string
// ("Playing Space Giraffe - Level 12"), neither of which exists here, so there
// is nothing for us to do with the value itself. What matters is the ANSWER: the
// console accepts these unconditionally, and a title told "failed" when it says
// "remember this" reasonably concludes its own session setup did not take.
//
// Layouts from Xenia's xgi_app.cc:
//   XGI_XUSER_SET_CONTEXT  { be32 user_index; be32 unused; be64 xuid;
//                            be32 context_id; be32 value; }        - 0x18
//   XGI_XUSER_SET_PROPERTY { be32 user_index; be32 unused; be64 xuid;
//                            be32 property_id; be32 data_size;
//                            be32 data_address; }                  - 0x20
//
// The buffer is read rather than ignored so a malformed call is still refused -
// accepting a buffer we could not read would be the same lie in the other
// direction.
uint64_t read_user_data_value(guest_memory& memory, uint32_t data_ptr);

uint32_t xgi_user_set_context(uint32_t buffer_ptr, uint32_t buffer_length) {
    if (buffer_ptr == 0 || (buffer_length != 0 && buffer_length < 0x18))
        return x_error::invalid_parameter;
    guest_memory& memory = active_kernel()->memory();
    if (memory.host(buffer_ptr, 0x18) == nullptr)
        return x_error::invalid_parameter;
    // Only port 0 has a profile, matching XamUserGetSigninState. A context set
    // for a port with nobody on it is still success: the console has simply
    // nowhere to file it, which is not the caller's error.
    (void)memory.read_u32(buffer_ptr + 0x00); // user_index
    const uint32_t context_id = memory.read_u32(buffer_ptr + 0x10);
    const uint32_t context_value = memory.read_u32(buffer_ptr + 0x14);
    if (profile_debug()) {
        std::printf("  [stats] context %08X = %08X\n", context_id,
                    context_value);
        std::fflush(stdout);
    }
    return x_error::success;
}

uint32_t xgi_user_set_property(uint32_t buffer_ptr, uint32_t buffer_length) {
    if (buffer_ptr == 0 || (buffer_length != 0 && buffer_length < 0x20))
        return x_error::invalid_parameter;
    guest_memory& memory = active_kernel()->memory();
    if (memory.host(buffer_ptr, 0x20) == nullptr)
        return x_error::invalid_parameter;
    const uint32_t data_size = memory.read_u32(buffer_ptr + 0x14);
    const uint32_t data_address = memory.read_u32(buffer_ptr + 0x18);
    // A property that names data must name data we could actually read, or the
    // call is malformed however willing we are to accept it.
    if (data_size != 0 && data_address != 0 &&
        memory.host(data_address, data_size) == nullptr)
        return x_error::invalid_parameter;
    const uint32_t property_id = memory.read_u32(buffer_ptr + 0x10);
    // The value the title is asking the console to remember. It is an
    // X_USER_DATA - a type byte and, eight bytes in, the union - which is the
    // same shape a profile setting's data has, so it is read the same way.
    // Held rather than dropped: this is one half of the pair a leaderboard is
    // built from, and the other half is the submission that commits it.
    if (data_size >= kUserDataUnion + 8 && data_address != 0) {
        active_kernel()->set_session_property(
            property_id, read_user_data_value(memory, data_address));
    }
    if (profile_debug()) {
        std::printf("  [stats] property %08X, %u byte(s):", property_id,
                    data_size);
        for (uint32_t byte = 0; byte < data_size && byte < 24; ++byte)
            std::printf(" %02X", memory.read_u8(data_address + byte));
        std::printf("\n");
        std::fflush(stdout);
    }
    return x_error::success;
}

// --- the local high-score table ---------------------------------------------
//
// Reads one X_USER_DATA out of guest memory as a number. A leaderboard column
// is whatever type the title declared it, and a board that ranks on a float
// must not be read as if the bits were an integer.
uint64_t read_user_data_value(guest_memory& memory, uint32_t data_ptr) {
    const auto type = static_cast<user_data_type>(
        memory.read_u8(data_ptr + kUserDataType));
    const uint64_t raw = read_setting_union(memory, data_ptr);
    switch (type) {
        case user_data_type::real32: {
            // The float sits in the top half of the union, as the union's first
            // four bytes.
            const uint32_t bits = static_cast<uint32_t>(raw >> 32);
            float value = 0.0f;
            std::memcpy(&value, &bits, sizeof(value));
            return value > 0.0f ? static_cast<uint64_t>(value) : 0;
        }
        case user_data_type::real64: {
            double value = 0.0;
            std::memcpy(&value, &raw, sizeof(value));
            return value > 0.0 ? static_cast<uint64_t>(value) : 0;
        }
        case user_data_type::int32:
        case user_data_type::context:
            return static_cast<uint32_t>(raw >> 32);
        default:
            return raw;
    }
}

// Puts one board's score on the local table, named by what the title's own SPA
// calls that board. A board id the SPA does not declare is refused: the title
// would never submit one, so an id that is not there means the buffer was not
// what it was taken for, and recording it would put a made-up row in front of
// the player.
bool record_local_score(uint32_t leaderboard_id, uint64_t value) {
    kernel_state* kernel = active_kernel();
    const xdbf_leaderboard* board = kernel->title_leaderboard(leaderboard_id);
    if (board == nullptr || !board->is_leaderboard()) return false;
    if (value == 0) return false; // a zero score is not a run worth keeping

    bool placed = false;
    const bool stored = kernel->profile().add_score(
        kernel->title_id(), leaderboard_id, value, current_filetime(),
        kLocalPlayerName, &placed);
    if (placed) {
        std::printf("whitty_xenon: score %llu recorded on \"%s\" (board %u)%s\n",
                    static_cast<unsigned long long>(value),
                    board->name.empty() ? "leaderboard" : board->name.c_str(),
                    leaderboard_id, stored ? "" : " - NOT saved");
        std::fflush(stdout);
    }
    return placed;
}

// A score is recorded ONLY for a board the title names in a submission, and
// there is deliberately no fallback that sweeps every board at the end of a
// session. That fallback existed for one afternoon and was wrong, in a way
// worth leaving written down: two of a title's boards can rank on the SAME
// property. Geometry Wars declares "Evolved" (board 0) and "Retro" (board 1)
// and both take their score from property 0x20000003, so a sweep that recorded
// every board whose property had been set put an Evolved score onto the Retro
// table as well - a row for a mode the player had not played. Measured, in a
// real profile: one submission produced three rows.
//
// The title says which board it means. Nothing else knows.

// --- enumerators -----------------------------------------------------------

uint32_t XamUserCreateAchievementEnumerator(uint32_t title_id,
                                            uint32_t user_index, uint64_t xuid,
                                            uint32_t flags, uint32_t offset,
                                            uint32_t count,
                                            uint32_t buffer_size_ptr,
                                            uint32_t handle_ptr) {
    (void)title_id;
    (void)xuid;
    kernel_state* kernel = active_kernel();
    guest_memory& memory = kernel->memory();

    if (count == 0 || buffer_size_ptr == 0 || handle_ptr == 0)
        return x_error::invalid_parameter;
    if (user_index >= 4) return x_error::invalid_parameter;

    // X_ACHIEVEMENT_DETAILS is 36 bytes; the low three flag bits ask for the
    // name, description and locked-description strings, which are appended
    // after the records in a per-item string buffer of 464 bytes.
    constexpr uint32_t kAchievementDetailsSize = 36;
    constexpr uint32_t kAchievementStringBuffer = 464;
    uint32_t item_size = kAchievementDetailsSize;
    if ((flags & 7) != 0) item_size += kAchievementStringBuffer;
    memory.write_u32(buffer_size_ptr, item_size * count);

    // Every achievement the title defines, unlocked or not, with the local
    // unlock state joined onto it. The list comes out of the title's own SPA
    // resource, so it cannot disagree with what the title unlocks by; the
    // unlock flag and time come from the local store.
    //
    // The three string pointers must be guest addresses the title can read.
    // Xenia points them into the caller's own buffer, which is only known at
    // XamEnumerate time; here the strings are laid into one guest block owned by
    // the enumerator instead. A title only dereferences the pointer, so this is
    // the same thing from its side, and it keeps the records buildable up front.
    const std::vector<xdbf_achievement>& defined = kernel->title_achievements();
    const uint32_t wanted =
        static_cast<uint32_t>(defined.size()) > offset
            ? static_cast<uint32_t>(defined.size()) - offset
            : 0;

    // How much string space the requested flags need. Each string is UTF-16
    // big-endian with a terminator, as the console's are.
    uint32_t string_bytes = 0;
    const auto utf16_size = [](const std::string& text) {
        return static_cast<uint32_t>((text.size() + 1) * 2);
    };
    for (const xdbf_achievement& achievement : defined) {
        if ((flags & 1) != 0) string_bytes += utf16_size(achievement.name);
        if ((flags & 2) != 0)
            string_bytes += utf16_size(achievement.description);
        if ((flags & 4) != 0)
            string_bytes += utf16_size(achievement.locked_description);
    }
    uint32_t strings_block = 0;
    if (string_bytes != 0) {
        strings_block = kernel->heap().allocate(string_bytes, 4);
        if (strings_block == 0) return x_status::no_memory;
        memory.zero_block(strings_block, string_bytes);
    }
    uint32_t string_at = strings_block;
    const auto put_string = [&](const std::string& text) -> uint32_t {
        if (strings_block == 0) return 0;
        const uint32_t address = string_at;
        for (std::size_t i = 0; i < text.size(); ++i)
            memory.write_u16(address + static_cast<uint32_t>(i) * 2,
                             static_cast<uint16_t>(
                                 static_cast<unsigned char>(text[i])));
        memory.write_u16(address + static_cast<uint32_t>(text.size()) * 2, 0);
        string_at += utf16_size(text);
        return address;
    };

    kernel_state::guest_enumerator enumerator;
    enumerator.item_size = item_size;
    enumerator.items_per_enumerate = count;
    enumerator.next_item = 0; // the offset is applied by skipping below
    enumerator.item_count = wanted;
    enumerator.items.assign(static_cast<std::size_t>(wanted) * item_size, 0);
    for (uint32_t i = 0; i < wanted; ++i) {
        const xdbf_achievement& achievement = defined[offset + i];
        uint8_t* record = enumerator.items.data() +
                          static_cast<std::size_t>(i) * item_size;
        const auto put_be32 = [record](std::size_t at, uint32_t value) {
            record[at + 0] = static_cast<uint8_t>(value >> 24);
            record[at + 1] = static_cast<uint8_t>(value >> 16);
            record[at + 2] = static_cast<uint8_t>(value >> 8);
            record[at + 3] = static_cast<uint8_t>(value);
        };
        const bool unlocked =
            kernel->profile().is_unlocked(kernel->title_id(), achievement.id);
        const uint64_t when =
            unlocked ? kernel->profile().unlock_time(kernel->title_id(),
                                                     achievement.id)
                     : 0;
        // X_ACHIEVEMENT_DETAILS, 36 bytes: id, three string pointers, image id,
        // gamerscore, an 8-byte FILETIME as two big-endian halves, flags.
        put_be32(0x00, achievement.id);
        put_be32(0x04, (flags & 1) != 0 ? put_string(achievement.name) : 0);
        put_be32(0x08,
                 (flags & 2) != 0 ? put_string(achievement.description) : 0);
        put_be32(0x0C, (flags & 4) != 0
                           ? put_string(achievement.locked_description)
                           : 0);
        put_be32(0x10, achievement.image_id);
        put_be32(0x14, achievement.gamerscore);
        put_be32(0x18, static_cast<uint32_t>(when >> 32));
        put_be32(0x1C, static_cast<uint32_t>(when & 0xFFFFFFFFu));
        // The title's own flags, plus the earned bit when it is unlocked. This
        // is the field a dashboard reads to decide which description to show.
        uint32_t record_flags = achievement.flags;
        if (unlocked) record_flags |= xdbf_achievement_flag::achieved;
        put_be32(0x20, record_flags);
    }

    // Every handle in the table names a guest object, and an enumerator's is an
    // X_KENUMERATOR: the app and message ids XAM would route its open and close
    // through, plus how many items one XamEnumerate call returns.
    constexpr uint32_t kEnumeratorObjectSize = 0x18;
    const uint32_t guest_object = kernel->heap().allocate(kEnumeratorObjectSize, 8);
    if (guest_object == 0) return x_status::no_memory;
    memory.zero_block(guest_object, kEnumeratorObjectSize);
    memory.write_u32(guest_object + 0x00, 0xFB);     // app id: XGI
    memory.write_u32(guest_object + 0x04, 0xB000A);  // open message
    memory.write_u32(guest_object + 0x08, 0xB000B);  // close message
    memory.write_u32(guest_object + 0x0C, user_index);
    memory.write_u32(guest_object + 0x10, count);
    memory.write_u32(guest_object + 0x14, flags);

    const uint32_t host_index = kernel->add_enumerator(enumerator);
    const uint32_t handle =
        kernel->objects().add(object_type::enumerator, guest_object, host_index);
    memory.write_u32(handle_ptr, handle);
    return x_error::success;
}

uint32_t XamEnumerate(uint32_t handle, uint32_t flags, uint32_t buffer_ptr,
                      uint32_t buffer_length, uint32_t items_returned_ptr,
                      uint32_t overlapped_ptr) {
    (void)flags;
    kernel_state* kernel = active_kernel();
    guest_memory& memory = kernel->memory();

    const kernel_object* object = kernel->objects().lookup(handle);
    if (object == nullptr || object->type != object_type::enumerator)
        return x_error::invalid_handle;
    kernel_state::guest_enumerator* enumerator =
        kernel->find_enumerator(object->host_index);
    if (enumerator == nullptr) return x_error::invalid_handle;

    uint32_t written = 0;
    uint32_t result = x_error::success;
    if (buffer_ptr == 0) {
        result = x_error::invalid_parameter;
    } else {
        uint32_t remaining = enumerator->item_count > enumerator->next_item
                                 ? enumerator->item_count - enumerator->next_item
                                 : 0;
        if (remaining > enumerator->items_per_enumerate)
            remaining = enumerator->items_per_enumerate;
        if (enumerator->item_size != 0 &&
            remaining > buffer_length / enumerator->item_size)
            remaining = buffer_length / enumerator->item_size;
        if (remaining == 0) {
            // Drained. NO_MORE_FILES is how the console ends an enumeration,
            // and it is what a title loops until.
            result = x_error::no_more_files;
        } else {
            const uint32_t bytes = remaining * enumerator->item_size;
            const uint32_t from = enumerator->next_item * enumerator->item_size;
            for (uint32_t byte = 0; byte < bytes; ++byte)
                memory.write_u8(buffer_ptr + byte,
                                enumerator->items[from + byte]);
            enumerator->next_item += remaining;
            written = remaining;
        }
    }

    if (items_returned_ptr != 0)
        memory.write_u32(items_returned_ptr,
                         result == x_error::success ? written : 0);
    if (overlapped_ptr != 0) {
        complete_overlapped(overlapped_ptr,
                            result == x_error::success ? x_error::success
                                                       : x_error::function_failed,
                            result, written);
        return x_error::io_pending;
    }
    return result;
}

uint32_t XamWriteGamerTile(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return x_error::no_such_user;
}

uint32_t XamVoiceClose(uint32_t a, uint32_t b, uint32_t c) {
    (void)a; (void)b; (void)c;
    return x_error::device_not_connected;
}

uint32_t XamVoiceCreate(uint32_t a, uint32_t b, uint32_t c) {
    (void)a; (void)b; (void)c;
    return x_error::device_not_connected;
}

uint32_t XamVoiceSubmitPacket(uint32_t a, uint32_t b, uint32_t c) {
    (void)a; (void)b; (void)c;
    return x_error::device_not_connected;
}

uint32_t XamVoiceHeadsetPresent(uint32_t a) {
    (void)a;
    return 0; // no headset
}

// XamSessionCreateHandle(handle_ptr) / XamSessionRefObjByHandle(handle, obj_ptr)
//
// The first two steps of the sequence a title uses to record a score. Both of
// these used to return FUNCTION_FAILED and write nothing, and that refusal was
// the whole reason the local high-score table could never fill: a title that
// cannot get a session handle never reaches the stats write, so the earlier
// finding that "Geometry Wars called neither XamSessionRefObjByHandle nor
// XSessionWriteStats" was measured downstream of our own refusal and said
// nothing about the title.
//
// A session is not a Live thing. Xenia grants one for any flags that are not
// Live features (xsession.h: `IsOfflineSession(flags)` is `!flags`, and only
// `IsXboxLiveSession` is refused) and notes that title 584107FB "expects
// offline session creation using flags 0 to succeed while offline". So does the
// console: a single-player session with stats is how a title's own score
// reaches its own leaderboards, and the upload to Live is a later, separate
// step that does not exist here.
//
// Xenia writes the literals 0xCAFEDEAD and 0xDEADF00D. The handle matches; the
// object does NOT, deliberately. 0xDEADF00D is not mapped, and Xenia's own
// comment says it is there to "prevent crashing" rather than to be used - a
// title that dereferenced it would fault. A real allocation is the same thing
// from the title's side (it round-trips the pointer into the XGI buffer) and
// survives being read.
//
// kSessionHandle is declared beside NtClose, which is the other end of this:
// the handle invented here is the handle a title closes when its game ends.

uint32_t XamSessionCreateHandle(uint32_t handle_ptr, uint32_t, uint32_t,
                                uint32_t) {
    if (handle_ptr == 0) return x_error::invalid_parameter;
    active_kernel()->memory().write_u32(handle_ptr, kSessionHandle);
    return x_error::success;
}

uint32_t XamSessionRefObjByHandle(uint32_t handle, uint32_t object_ptr,
                                  uint32_t, uint32_t) {
    if (object_ptr == 0) return x_error::invalid_parameter;
    kernel_state* kernel = active_kernel();
    // Only the handle this runtime hands out. A handle from somewhere else
    // names a session that does not exist, and answering for it would be a
    // claim about state we never created.
    if (handle != kSessionHandle) return x_error::invalid_parameter;
    // One session object per title, allocated once. The title keeps the
    // pointer and passes it back in the XGI buffers below, so it has to stay
    // the same across calls.
    static std::mutex mutex;
    static uint32_t session_object = 0;
    {
        const std::lock_guard<std::mutex> lock(mutex);
        if (session_object == 0) {
            constexpr uint32_t kSessionObjectSize = 0x10;
            session_object = kernel->heap().allocate(kSessionObjectSize, 8);
            if (session_object == 0) return x_status::no_memory;
            kernel->memory().zero_block(session_object, kSessionObjectSize);
        }
    }
    kernel->memory().write_u32(object_ptr, session_object);
    return x_error::success;
}

// --- the storage device ---------------------------------------------------
//
// A console keeps a title's saves on a storage device, and a title asks which
// device to use before it writes anything. Everything here used to answer "no
// device": DEVICE_NOT_CONNECTED from the name and the state, NOT_FOUND from the
// data, FUNCTION_FAILED from the selector.
//
// That was the refusal half of docs/BRINGUP.md's recurring bug class - a
// refusal rots exactly like a fake success - and it was a refusal of something
// TRUE. There is storage here. The profile store already writes a host file, so
// "this console has somewhere to keep a save" is a fact about this machine, not
// a claim about a service that does not exist. Saying no to it is not the
// cautious answer; it is a wrong answer, and Ridge Racer 6 is what it costs:
// measured over a 260 s run it called XamShowDeviceSelectorUI **12,338 times**,
// once every six presented frames, and never got past its loading screen. It
// was not ignoring the pad and it was not stuck in the movie - it was asking for
// somewhere to save, being told there was nowhere, and asking again. Neither
// completing nor failing, from the title's side.
//
// So there is one device: the hard disk this runtime is already writing to.
// Xenia's dummy table is the model (xam_content_device.cc) and its ids are used
// unchanged, because they are what a title's own code compares against.
constexpr uint32_t kHardDiskDeviceId = 1;   // Xenia's DummyDeviceId::HDD
constexpr uint32_t kHardDiskDeviceType = 1; // DeviceType::HDD

// The name the title shows in its own "saving to ..." line. It is cosmetic to
// us and visible to a player, so it says what it is.
constexpr char16_t kHardDiskName[] = u"Hard Drive";

bool is_known_content_device(uint32_t device_id) {
    return device_id == kHardDiskDeviceId;
}

// How big the device is, and how much of it is free.
//
// Xenia invents 20 GB and 10 GB, and notes that some titles read only the low
// 32 bits of these 64-bit fields. Both numbers here are measured off the host
// filesystem the profile lives on and then CLAMPED to Xenia's, which keeps them
// true in the direction that matters: a title told there is less room than
// there is may refuse to save, but a title told there is more than there is
// writes and fails. When the host cannot be measured, Xenia's numbers stand.
constexpr uint64_t kOneGiB = 1024ull * 1024ull * 1024ull;

std::pair<uint64_t, uint64_t> content_device_space() {
    uint64_t total = 20ull * kOneGiB;
    uint64_t free_bytes = 10ull * kOneGiB;
    kernel_state* kernel = active_kernel();
    if (kernel == nullptr) return {total, free_bytes};
    const std::string& profile = kernel->profile().path();
    if (profile.empty()) return {total, free_bytes};
    std::error_code error;
    const std::filesystem::space_info space =
        std::filesystem::space(std::filesystem::path(profile).parent_path(), error);
    if (error) return {total, free_bytes};
    if (space.capacity < total) total = space.capacity;
    if (space.available < free_bytes) free_bytes = space.available;
    return {total, free_bytes};
}

// --- opening a content package ------------------------------------------
// The console's XCONTENT_DATA, from Xenia's content_manager.h. Only the three
// fields that identify a package are read: a title asks for a package by
// device, type and file name, and the display name is for a UI that is not
// here.
constexpr uint32_t kContentDataDeviceId = 0x00;
constexpr uint32_t kContentDataContentType = 0x04;
constexpr uint32_t kContentDataDisplayName = 0x08; // 128 UTF-16 code units
constexpr uint32_t kContentDataFileName = 0x108;
constexpr uint32_t kContentDataFileNameCapacity = 42;
// The whole record, which is what one item of a content enumeration is.
constexpr uint32_t kContentDataSize = 0x134;

std::string read_content_file_name(guest_memory& memory, uint32_t data_ptr) {
    std::string name;
    for (uint32_t i = 0; i < kContentDataFileNameCapacity; ++i) {
        const uint8_t byte = memory.read_u8(data_ptr + kContentDataFileName + i);
        if (byte == 0) break;
        name.push_back(static_cast<char>(byte));
    }
    return name;
}

// --- the content store ----------------------------------------------------
//
// A package is a DIRECTORY on this machine, and opening one mounts it under the
// root name the title asked for, so the title's own NtCreateFile("save:\\...")
// resolves into it through the ordinary file system. Nothing else is needed:
// the console's packages are containers of files and this runtime already has a
// device-to-directory mapping.
//
// The layout is Xenia's, minus the per-user level this runtime does not have
// (one profile, one player):
//
//     <content root>/<title id>/<content type>/<file name>/
//
// Keyed by title id for the same reason the profile is - two titles must not
// see or overwrite each other's saves - and by content type because a title
// legitimately keeps a save and downloadable content under the same name.
//
// WHITTY_CONTENT points it somewhere else; WHITTY_PROFILE moves it beside the
// profile, so a test run that redirects the profile does not write into the
// real store. That mirrors how display.conf follows the profile.
std::string content_root() {
    if (const char* value = std::getenv("WHITTY_CONTENT")) return value;
    if (const char* value = std::getenv("WHITTY_PROFILE")) {
        const std::string profile = value;
        const std::size_t slash = profile.find_last_of('/');
        if (slash == std::string::npos) return "content";
        return profile.substr(0, slash) + "/content";
    }
    if (const char* value = std::getenv("XDG_DATA_HOME"))
        if (*value != 0) return std::string(value) + "/whitty_xenon/content";
    if (const char* value = std::getenv("HOME"))
        if (*value != 0)
            return std::string(value) + "/.local/share/whitty_xenon/content";
    return "content";
}

// Where every package of one type for one title lives - the directory an
// enumeration walks.
std::string content_type_directory(uint32_t title_id, uint32_t content_type) {
    char suffix[32];
    std::snprintf(suffix, sizeof(suffix), "/%08X/%08X", title_id, content_type);
    return content_root() + suffix;
}

// A package's directory. The file name comes out of guest memory, so it is
// sanitised: a component of it is a directory name on this host, and "../" in
// one would climb out of the store.
std::string content_package_path(uint32_t title_id, uint32_t content_type,
                                 const std::string& file_name) {
    std::string safe;
    safe.reserve(file_name.size());
    for (const char c : file_name) {
        const unsigned char byte = static_cast<unsigned char>(c);
        safe.push_back(byte < 0x20 || c == '/' || c == '\\' || c == ':' ? '_' : c);
    }
    if (safe.empty() || safe == "." || safe == "..") return std::string();
    char prefix[32];
    std::snprintf(prefix, sizeof(prefix), "/%08X/%08X/", title_id, content_type);
    return content_root() + prefix + safe;
}

bool content_package_exists(const std::string& path) {
    if (path.empty()) return false;
    std::error_code error;
    return std::filesystem::is_directory(path, error);
}

// WHITTY_CONTENT_DEBUG traces the content calls with their arguments. Which
// package a title asks for, in which order, with which disposition, is the
// whole of what a save-blocked title is doing, and a call count cannot show it:
// the import census says XamContentCreate was called, not that it asked to
// OPEN_EXISTING a type-1 package called "Game Data".
bool content_debug() {
    static const bool on = std::getenv("WHITTY_CONTENT_DEBUG") != nullptr;
    return on;
}

uint32_t XamContentClose(uint32_t root_name_ptr, uint32_t overlapped_ptr,
                         uint32_t c, uint32_t d, uint32_t e) {
    (void)c; (void)d; (void)e;
    if (content_debug()) {
        std::printf("  [content] close root='%s' overlapped=%08X\n",
                    read_c_string(root_name_ptr, 64).c_str(), overlapped_ptr);
        std::fflush(stdout);
    }
    // Unmounts the package the root names. NOT_FOUND for a root that was never
    // opened, which is Xenia's answer (CloseContent fails on an unknown root)
    // and is what a title uses to notice a double close.
    const std::string root_name = read_c_string(root_name_ptr, 64);
    const uint32_t result = !root_name.empty() &&
                                    active_kernel()->files().unmount(root_name)
                                ? x_error::success
                                : x_error::not_found;
    if (overlapped_ptr != 0) {
        complete_overlapped(overlapped_ptr, result);
        return x_error::io_pending;
    }
    return result;
}

uint32_t XamContentCreateEnumerator(uint32_t user_index, uint32_t device_id,
                                    uint32_t content_type,
                                    uint32_t content_flags,
                                    uint32_t items_per_enumerate,
                                    uint32_t buffer_size_ptr,
                                    uint32_t handle_out_ptr) {
    (void)content_flags;
    kernel_state* kernel = active_kernel();
    guest_memory& memory = kernel->memory();

    // Xenia's checks: no output handle, or a device id that is not a device, is
    // an argument error - and the buffer size is zeroed so a title that sizes a
    // buffer from it does not allocate from a stale word.
    if (handle_out_ptr == 0 ||
        (device_id != 0 && !is_known_content_device(device_id))) {
        if (buffer_size_ptr != 0) memory.write_u32(buffer_size_ptr, 0);
        if (content_debug()) {
            std::printf("  [content] create enumerator user=%u device=%u "
                        "type=%u -> INVALID\n",
                        user_index, device_id, content_type);
            std::fflush(stdout);
        }
        return x_error::invalid_parameter;
    }
    if (items_per_enumerate == 0) items_per_enumerate = 1;
    if (buffer_size_ptr != 0)
        memory.write_u32(buffer_size_ptr,
                         kContentDataSize * items_per_enumerate);

    // Every package of this type in the store, as XCONTENT_DATA records. An
    // EMPTY enumeration is a real answer and the common one - a title with no
    // downloadable content installed gets a handle that immediately says
    // NO_MORE_FILES, which is what it is written to expect. Refusing the call
    // instead is what left Ridge Racer 6 with no answer at all.
    kernel_state::guest_enumerator enumerator;
    enumerator.item_size = kContentDataSize;
    enumerator.items_per_enumerate = items_per_enumerate;
    const std::string directory = content_type_directory(kernel->title_id(),
                                                         content_type);
    std::vector<std::string> names;
    if (!directory.empty()) {
        std::error_code error;
        for (const auto& entry :
             std::filesystem::directory_iterator(directory, error)) {
            std::error_code is_dir_error;
            if (!entry.is_directory(is_dir_error)) continue;
            names.push_back(entry.path().filename().string());
        }
    }
    std::sort(names.begin(), names.end());
    enumerator.item_count = static_cast<uint32_t>(names.size());
    enumerator.items.assign(names.size() * kContentDataSize, 0);
    for (std::size_t i = 0; i < names.size(); ++i) {
        uint8_t* record = enumerator.items.data() + i * kContentDataSize;
        const auto put_be32 = [&](uint32_t at, uint32_t value) {
            record[at + 0] = static_cast<uint8_t>(value >> 24);
            record[at + 1] = static_cast<uint8_t>(value >> 16);
            record[at + 2] = static_cast<uint8_t>(value >> 8);
            record[at + 3] = static_cast<uint8_t>(value);
        };
        put_be32(kContentDataDeviceId, kHardDiskDeviceId);
        put_be32(kContentDataContentType, content_type);
        // The display name is UTF-16 big-endian, and the file name is the ANSI
        // one the title will hand back to XamContentCreate.
        const std::string& name = names[i];
        for (std::size_t c = 0; c < name.size() && c < 127; ++c)
            record[kContentDataDisplayName + c * 2 + 1] =
                static_cast<uint8_t>(name[c]);
        for (std::size_t c = 0;
             c < name.size() && c < kContentDataFileNameCapacity - 1; ++c)
            record[kContentDataFileName + c] = static_cast<uint8_t>(name[c]);
    }

    // The guest object behind the handle, as the achievement enumerator builds
    // one: the app and message ids XAM would route open and close through.
    // Xenia's content enumerator uses app 0xFE with 0x20005 / 0x20007.
    constexpr uint32_t kEnumeratorObjectSize = 0x18;
    const uint32_t guest_object =
        kernel->heap().allocate(kEnumeratorObjectSize, 8);
    if (guest_object == 0) return x_error::function_failed;
    memory.zero_block(guest_object, kEnumeratorObjectSize);
    memory.write_u32(guest_object + 0x00, 0xFE);
    memory.write_u32(guest_object + 0x04, 0x20005);
    memory.write_u32(guest_object + 0x08, 0x20007);
    memory.write_u32(guest_object + 0x0C, user_index);
    memory.write_u32(guest_object + 0x10, items_per_enumerate);

    const uint32_t host_index = kernel->add_enumerator(enumerator);
    const uint32_t handle =
        kernel->objects().add(object_type::enumerator, guest_object, host_index);
    memory.write_u32(handle_out_ptr, handle);

    if (content_debug()) {
        std::printf("  [content] create enumerator user=%u device=%u type=%u "
                    "flags=%08X per-enumerate=%u -> handle %08X, %u package(s)"
                    " in %s\n",
                    user_index, device_id, content_type, content_flags,
                    items_per_enumerate, handle, enumerator.item_count,
                    directory.c_str());
        std::fflush(stdout);
    }
    return x_error::success;
}

// The same call with two more arguments - a cache size and the size the title
// expects the package to be - both of which a directory-backed store has no use
// for. Xenia forwards it to XamContentCreate for exactly that reason, and the
// overlapped moves to the ninth argument, which the calling convention spills
// to the caller's stack.
uint32_t XamContentCreateEx(uint32_t user_index, uint32_t root_name_ptr,
                            uint32_t content_data_ptr, uint32_t flags,
                            uint32_t disposition_ptr, uint32_t license_mask_ptr,
                            uint32_t cache_size, uint32_t content_size,
                            uint32_t overlapped_ptr) {
    (void)cache_size;
    (void)content_size;
    return XamContentCreate(user_index, root_name_ptr, content_data_ptr, flags,
                            disposition_ptr, license_mask_ptr, overlapped_ptr);
}

uint32_t XamContentCreate(uint32_t user_index, uint32_t root_name_ptr,
                          uint32_t content_data_ptr, uint32_t flags,
                          uint32_t disposition_ptr, uint32_t license_mask_ptr,
                          uint32_t overlapped_ptr) {
    (void)user_index;
    (void)license_mask_ptr;
    kernel_state* kernel = active_kernel();
    guest_memory& memory = kernel->memory();

    // Xenia checks the name before anything else, and so does the console: a
    // package is mounted under this root, so an empty one names nothing.
    //
    // The root name is a plain `char*` - Xenia's `lpstring_t` - and reading it
    // as an X_ANSI_STRING is what used to crash this handler outright; see
    // read_c_string.
    const std::string root_name = read_c_string(root_name_ptr, 64);
    if (root_name.empty()) return x_error::invalid_parameter;

    // The disposition is the whole answer for a title that branches on "was it
    // opened or created", and Xenia zeroes it up front on the overlapped path
    // so a title reading it before the operation finishes sees Unknown rather
    // than a stale value.
    if (disposition_ptr != 0) memory.write_u32(disposition_ptr, 0);

    const uint32_t content_type =
        content_data_ptr != 0
            ? memory.read_u32(content_data_ptr + kContentDataContentType)
            : 0;
    const std::string file_name =
        content_data_ptr != 0 ? read_content_file_name(memory, content_data_ptr)
                              : std::string();

    // The package is a directory in the local store, and opening one MOUNTS it
    // under the root name: everything the title does with it afterwards goes
    // through the ordinary file calls. Which is why every disposition below
    // either mounts something that is really there or refuses - a success
    // without a mount hands the title a root whose every open then fails, one
    // call further from the mistake.
    const std::string path =
        content_package_path(kernel->title_id(), content_type, file_name);
    const bool exists = content_package_exists(path);
    // Disposition, as the title reads it back: 1 = created, 2 = opened.
    uint32_t disposition = 0;
    uint32_t result = x_error::path_not_found;
    bool mount_it = false;
    std::error_code error;
    switch (flags & 0xF) {
        case 1: // CREATE_NEW - refuse if one is already there
            if (exists) {
                result = x_error::already_exists;
                break;
            }
            [[fallthrough]];
        case 2: // CREATE_ALWAYS
        case 4: // OPEN_ALWAYS
            if (exists && (flags & 0xF) == 4) {
                result = x_error::success;
                disposition = 2;
                mount_it = true;
                break;
            }
            // CREATE_ALWAYS replaces what is there. Emptying it is the whole
            // difference between a new save and a new save with the old one's
            // files still in it.
            if (exists && (flags & 0xF) == 2)
                std::filesystem::remove_all(path, error);
            error.clear();
            if (path.empty() ||
                (!std::filesystem::create_directories(path, error) && error)) {
                result = x_error::path_not_found;
                break;
            }
            result = x_error::success;
            disposition = 1;
            mount_it = true;
            break;
        case 3: // OPEN_EXISTING
            if (!exists) break; // PATH_NOT_FOUND: what a first run gets
            result = x_error::success;
            disposition = 2;
            mount_it = true;
            break;
        case 5: // TRUNCATE_EXISTING
            if (!exists) break;
            std::filesystem::remove_all(path, error);
            if (!std::filesystem::create_directories(path, error) && error) {
                result = x_error::path_not_found;
                break;
            }
            result = x_error::success;
            disposition = 1;
            mount_it = true;
            break;
        default:
            result = x_error::invalid_parameter;
            break;
    }

    if (mount_it) {
        // The root name is a device from here on. Any previous mount of it is
        // removed first: resolution takes the first match, so a root the title
        // opened, closed and opened again would otherwise still resolve into
        // the package it closed.
        kernel->files().unmount(root_name);
        kernel->files().mount(root_name, path);
        if (disposition_ptr != 0) memory.write_u32(disposition_ptr, disposition);
        // The licence mask a title reads alongside the package. Full, matching
        // XamContentGetLicenseMask, so no trial-mode path is taken.
        if (license_mask_ptr != 0) memory.write_u32(license_mask_ptr, 0xFFFFFFFFu);
    }

    if (content_debug()) {
        std::printf("  [content] create root='%s' flags=%08X (disposition %u) "
                    "type=%u name='%s' overlapped=%08X -> %08X %s%s\n",
                    root_name.c_str(), flags, flags & 0xF, content_type,
                    file_name.c_str(), overlapped_ptr, result,
                    mount_it ? "mounted " : "", mount_it ? path.c_str() : "");
        std::fflush(stdout);
    }

    if (overlapped_ptr != 0) {
        // Xenia turns a failure into FUNCTION_FAILED on the overlapped path,
        // because the real result is the one it writes into the structure.
        complete_overlapped(overlapped_ptr, result,
                            x_hresult::from_win32(result), 0);
        return x_error::io_pending;
    }
    return result;
}

uint32_t XamContentSetThumbnail(uint32_t user_index, uint32_t content_data_ptr,
                                uint32_t buffer_ptr, uint32_t buffer_size,
                                uint32_t overlapped_ptr) {
    (void)user_index;
    // The PNG the console shows for a save. It belongs to the package, so it is
    // written into the package's directory under the name Xenia's content
    // manager uses - and only if the package is really there. Reporting success
    // without writing it would claim a file exists that nothing can read back.
    kernel_state* kernel = active_kernel();
    guest_memory& memory = kernel->memory();
    uint32_t result = x_error::path_not_found;
    if (content_data_ptr != 0 && buffer_ptr != 0 && buffer_size != 0) {
        const uint32_t content_type =
            memory.read_u32(content_data_ptr + kContentDataContentType);
        const std::string path = content_package_path(
            kernel->title_id(), content_type,
            read_content_file_name(memory, content_data_ptr));
        if (content_package_exists(path)) {
            std::ofstream out(path + "/__thumbnail.png", std::ios::binary);
            for (uint32_t i = 0; i < buffer_size && out; ++i)
                out.put(static_cast<char>(memory.read_u8(buffer_ptr + i)));
            if (out) result = x_error::success;
        }
    }
    if (overlapped_ptr != 0) {
        complete_overlapped(overlapped_ptr, result,
                            x_hresult::from_win32(result), 0);
        return x_error::io_pending;
    }
    return result;
}

// Removes a package from the store. Xenia deletes the content directory; so
// does this, and it says whether there was one - a title that deletes a save
// and is told it worked when nothing was removed will find it again.
uint32_t XamContentDelete(uint32_t user_index, uint32_t content_data_ptr,
                          uint32_t overlapped_ptr, uint32_t d, uint32_t e) {
    (void)user_index; (void)d; (void)e;
    kernel_state* kernel = active_kernel();
    guest_memory& memory = kernel->memory();
    uint32_t result = x_error::path_not_found;
    if (content_data_ptr != 0) {
        const uint32_t content_type =
            memory.read_u32(content_data_ptr + kContentDataContentType);
        const std::string path = content_package_path(
            kernel->title_id(), content_type,
            read_content_file_name(memory, content_data_ptr));
        std::error_code error;
        if (content_package_exists(path)) {
            std::filesystem::remove_all(path, error);
            if (!error) result = x_error::success;
        }
        // Said out loud, every time, because a delete that does not happen is
        // invisible from inside the game: the title shows its "are you sure",
        // takes the answer, and the save is still there. Which of the two
        // reasons it failed - the package was not where the title said, or the
        // removal itself was refused - cannot be told apart without this, and
        // one of them is a path bug while the other is a permissions one.
        std::fprintf(stderr,
                     "  [content] delete \"%s\" type %08X: %s\n", path.c_str(),
                     content_type,
                     result == x_error::success
                         ? "removed"
                         : (error ? error.message().c_str() : "no such package"));
    }
    if (overlapped_ptr != 0) {
        complete_overlapped(overlapped_ptr, result,
                            x_hresult::from_win32(result), 0);
        return x_error::io_pending;
    }
    return result;
}

uint32_t XamContentInstall(uint32_t a, uint32_t b, uint32_t c, uint32_t d,
                           uint32_t e, uint32_t f) {
    (void)a; (void)b; (void)c; (void)d; (void)e; (void)f;
    // No storage device, so nothing to install onto. Saying so is the point:
    // reporting success would leave the title believing a copy of its content
    // exists somewhere it will later try to open.
    return x_error::device_not_connected;
}

// --- the Xbox Live Vision camera ----------------------------------------
uint32_t XUsbcamCreate(uint32_t buffer, uint32_t buffer_size,
                       uint32_t handle_out) {
    (void)buffer; (void)buffer_size; (void)handle_out;
    // Allocating the driver's buffer, which genuinely succeeds - see the header
    // for why failing here is the more dangerous answer.
    return x_status::success;
}

uint32_t XUsbcamDestroy() { return x_status::success; }

uint32_t XUsbcamGetState() {
    // 0 = not connected. This is the whole model: there is no camera.
    return 0;
}

uint32_t XamContentGetDeviceName(uint32_t device_id, uint32_t name_buffer_ptr,
                                 uint32_t name_capacity) {
    // Xenia answers this from its table of devices and returns
    // DEVICE_NOT_CONNECTED for an id that is not in it. The same, over a table
    // holding the one device this machine has.
    if (!is_known_content_device(device_id)) return x_error::device_not_connected;
    const uint32_t length =
        static_cast<uint32_t>(std::char_traits<char16_t>::length(kHardDiskName));
    if (name_buffer_ptr == 0) return x_error::invalid_parameter;
    // Room for the terminator as well, which is Xenia's check exactly: a
    // truncated name is not a name.
    if (name_capacity < length + 1) return x_error::insufficient_buffer;
    guest_memory& memory = active_kernel()->memory();
    for (uint32_t i = 0; i < length; ++i)
        memory.write_u16(name_buffer_ptr + i * 2,
                         static_cast<uint16_t>(kHardDiskName[i]));
    memory.write_u16(name_buffer_ptr + length * 2, 0);
    return x_error::success;
}

// X_CONTENT_DEVICE_DATA, 0x50 bytes, from Xenia's xam_content_device.cc.
constexpr uint32_t kDeviceDataSize = 0x50;
constexpr uint32_t kDeviceDataId = 0x00;
constexpr uint32_t kDeviceDataType = 0x04;
constexpr uint32_t kDeviceDataTotalBytes = 0x08;
constexpr uint32_t kDeviceDataFreeBytes = 0x10;
constexpr uint32_t kDeviceDataName = 0x18; // 28 UTF-16 code units

uint32_t XamContentGetDeviceState(uint32_t device_id, uint32_t overlapped_ptr,
                                  uint32_t, uint32_t, uint32_t) {
    // Xenia's answer, both halves: an unknown id is DEVICE_NOT_CONNECTED, and
    // on the overlapped path the call itself reports FUNCTION_FAILED with the
    // device error as the extended error, because the overlapped is where the
    // real result of an asynchronous call lives.
    if (!is_known_content_device(device_id)) {
        if (overlapped_ptr != 0) {
            complete_overlapped(overlapped_ptr, x_error::function_failed,
                                x_error::device_not_connected, 0);
            return x_error::io_pending;
        }
        return x_error::device_not_connected;
    }
    if (overlapped_ptr != 0) {
        complete_overlapped(overlapped_ptr, x_error::success);
        return x_error::io_pending;
    }
    return x_error::success;
}

uint32_t XamContentGetDeviceData(uint32_t device_id, uint32_t device_data_ptr,
                                 uint32_t, uint32_t, uint32_t) {
    if (!is_known_content_device(device_id)) return x_error::device_not_connected;
    if (device_data_ptr == 0) return x_error::invalid_parameter;
    guest_memory& memory = active_kernel()->memory();
    memory.zero_block(device_data_ptr, kDeviceDataSize);
    memory.write_u32(device_data_ptr + kDeviceDataId, kHardDiskDeviceId);
    memory.write_u32(device_data_ptr + kDeviceDataType, kHardDiskDeviceType);
    const auto [total, free_bytes] = content_device_space();
    memory.write_u64(device_data_ptr + kDeviceDataTotalBytes, total);
    memory.write_u64(device_data_ptr + kDeviceDataFreeBytes, free_bytes);
    const uint32_t length =
        static_cast<uint32_t>(std::char_traits<char16_t>::length(kHardDiskName));
    for (uint32_t i = 0; i < length && i < 27; ++i)
        memory.write_u16(device_data_ptr + kDeviceDataName + i * 2,
                         static_cast<uint16_t>(kHardDiskName[i]));
    return x_error::success;
}

// XamContentGetCreator(user_index, content_data, is_creator_ptr,
//                      creator_xuid_ptr, overlapped) - whether the profile
// that owns `user_index` is also the one that created this save.
//
// Everything on this console is the one offline profile, so it is always the
// creator: a title that gates "continue" or "delete" behind this check would
// otherwise read the previously-unimplemented stub's zeroed r3 as a hard
// failure and refuse the save outright rather than treating it as "not mine,"
// which is what an unimplemented import usually reads as here. Xenia's shape:
// *is_creator is a BOOL and *creator_xuid is only written when it is true.
uint32_t XamContentGetCreator(uint32_t user_index, uint32_t content_data_ptr,
                              uint32_t is_creator_ptr,
                              uint32_t creator_xuid_ptr,
                              uint32_t overlapped_ptr) {
    (void)content_data_ptr;
    guest_memory& memory = active_kernel()->memory();
    const bool valid_user = user_index < kMaxUserCount && user_index == 0;
    if (is_creator_ptr != 0)
        memory.write_u32(is_creator_ptr, valid_user ? 1u : 0u);
    if (valid_user && creator_xuid_ptr != 0)
        memory.write_u64(creator_xuid_ptr, kOfflineXuid);
    const uint32_t result =
        valid_user ? x_error::success : x_error::no_such_user;
    if (overlapped_ptr != 0) {
        complete_overlapped(overlapped_ptr, result);
        return x_error::io_pending;
    }
    return result;
}

// XamShowDeviceSelectorUI(user_index, content_type, content_flags,
//                         total_requested, device_id_ptr, overlapped)
//
// The console puts up "choose a storage device". There is one device and no
// blade to choose it on, so this is exactly Xenia's headless path: pick the
// first device and complete the overlapped with it. Xenia's argument checks are
// kept - they are what tells a title it passed nonsense - and the one that
// looks arbitrary, `content_flags & 0x83F00008`, is the set of XCONTENTFLAG
// bits that are not valid here.
uint32_t XamShowDeviceSelectorUI(uint32_t user_index, uint32_t content_type,
                                 uint32_t content_flags,
                                 uint32_t total_requested,
                                 uint32_t device_id_ptr,
                                 uint32_t overlapped_ptr) {
    (void)content_type;
    (void)total_requested;
    // Xenia refuses outright without one: the answer is written into the
    // overlapped, so there is nowhere to put it.
    if (overlapped_ptr == 0) return x_error::invalid_parameter;
    constexpr uint32_t kAnyUser = 0xFF;
    if ((user_index >= 4 && user_index != kAnyUser) ||
        (content_flags & 0x83F00008u) != 0 || device_id_ptr == 0) {
        complete_overlapped(overlapped_ptr, x_error::invalid_parameter);
        return x_error::invalid_parameter;
    }
    active_kernel()->memory().write_u32(device_id_ptr, kHardDiskDeviceId);
    complete_overlapped(overlapped_ptr, x_error::success);
    return x_error::io_pending;
}

uint32_t XamCreateEnumeratorHandle(uint32_t a, uint32_t b, uint32_t c, uint32_t d) {
    (void)a; (void)b; (void)c; (void)d;
    return x_error::not_found;
}

uint32_t XamGetPrivateEnumStructureFromHandle(uint32_t a, uint32_t b, uint32_t c, uint32_t d) {
    (void)a; (void)b; (void)c; (void)d;
    return x_error::not_found;
}

// --- the XMsg app dispatcher -------------------------------------------------
//
// XAM's sub-applications are not reached through named imports: a title hands
// XMsg an app id and a message id, and XAM routes the pair. So the whole music
// player, and parts of the gaming and Live interfaces, sit behind these three
// calls - which is why a title can make four hundred thousand XMsg calls a
// minute while importing not one XMP function.
//
// Both Geometry Wars titles poll app 0xFA (XMP) message 0x0007001B,
// XMPGetPlaybackController, from a worker thread. Answering FUNCTION_FAILED and
// leaving the output pointers untouched - which is what this used to do - means
// the title never gets an answer it can act on and keeps asking. App and
// message semantics follow Xenia's xam_msg.cc and apps/xmp_app.cc.
namespace {

// App ids, from Xenia's App constructors.
constexpr uint32_t kAppMessenger = 0xF7;
constexpr uint32_t kAppXmp = 0xFA;      // music player
constexpr uint32_t kAppXgi = 0xFB;      // gaming interface
constexpr uint32_t kAppXLiveBase = 0xFC;

// The one XLiveBase message an offline console still answers. Everything else
// XLiveBase offers needs a service that is not here, and is refused.
constexpr uint32_t kXLiveBaseGetLogonId = 0x00058004;
// XLiveBaseGetNatType. Refused, but it writes its output dword first - see the
// case itself.
constexpr uint32_t kXLiveBaseGetNatType = 0x00058006;
constexpr uint32_t kAppXam = 0xFE;

// XamApp messages, from Xenia's xam_app.cc.
//
// XEnableGuestSignin's buffer is INPUT, not output: one dword saying whether
// guest sign-in should be allowed. So refusing it was not the usual
// "failed without writing the buffer" bug - there is nothing to write - it was
// the other half of that bug class: a legitimate call answered with a refusal.
// The console has no reason to fail it, and Xenia returns success after reading
// the flag. Hydro Thunder Hurricane sends it during startup.
constexpr uint32_t kXamEnableGuestSignin = 0x00021012;
// XTitleGetDeploymentType. This one DOES have an output field, and it is the
// bug class exactly: the title passes a pointer to write the deployment type
// into and reads it straight back, so failing without writing hands it whatever
// was in that dword. { deployment_type_ptr, overlapped_ptr }.
constexpr uint32_t kXamTitleGetDeploymentType = 0x00022005;

// XMP message ids.
constexpr uint32_t kXmpContinue = 0x00070003;
constexpr uint32_t kXmpStop = 0x00070004;
constexpr uint32_t kXmpPause = 0x00070005;
constexpr uint32_t kXmpNext = 0x00070006;
constexpr uint32_t kXmpPrevious = 0x00070007;
constexpr uint32_t kXmpSetPlaybackBehavior = 0x00070008;
constexpr uint32_t kXmpGetStatus = 0x00070009;
constexpr uint32_t kXmpGetVolume = 0x0007000B;
constexpr uint32_t kXmpSetVolume = 0x0007000C;
constexpr uint32_t kXmpSetPlaybackController = 0x0007001A;
constexpr uint32_t kXmpGetPlaybackController = 0x0007001B;
constexpr uint32_t kXmpGetPlaybackBehavior = 0x00070029;
// The title-playlist trio is left UNHANDLED on purpose. Answering the buffer-size
// query leads the title into a playlist handshake it then cannot finish here, and
// Space Giraffe drops from ~20000 presented frames to 2 - it stops rendering
// entirely. It decodes its own music through XMA either way, so refusing the
// playlist is both honest and what worked. Ids kept so the next attempt starts
// from the right place rather than rediscovering them:
//   0x00070002 XMPPlayTitlePlaylist
//   0x0007000D XMPCreateTitlePlaylist
//   0x0007002E XMPGetTitlePlaylistBufferSize
constexpr uint32_t kXmpPlayTitlePlaylistDisabled = 0xFFFFFF02;
constexpr uint32_t kXmpCreateTitlePlaylistDisabled = 0xFFFFFF0D;
constexpr uint32_t kXmpGetTitlePlaylistBufferSizeDisabled = 0xFFFFFF2E;
constexpr uint32_t kXmpCaptureOutput = 0x0007003D;

// XGI message ids.
//
// The achievement write is how a title unlocks an achievement, since
// XUserWriteAchievements is not an export but a stub that posts this message.
//
// The context and property writes are the title telling the console to remember
// a value about the session - game mode, difficulty, a custom property. They
// exist to be read back by matchmaking and by the dashboard's presence string,
// neither of which we have; but the CALL still has to succeed, because a title
// that is told "no" when it says "remember this" has no reason to believe the
// rest of its own setup worked. Space Giraffe refuses to start a level when
// these fail, which is what made them worth implementing.
constexpr uint32_t kXgiUserSetContext = 0x000B0006;
constexpr uint32_t kXgiUserSetProperty = 0x000B0007;
constexpr uint32_t kXgiUserWriteAchievements = 0x000B0008;

// The session a title records a score through. Ids and semantics from Xenia's
// xgi_app.cc; the write is the one message Xenia does not have a case for, and
// the comment on the handler says where its layout comes from instead.
constexpr uint32_t kXgiSessionCreate = 0x000B0010;
constexpr uint32_t kXgiSessionDelete = 0x000B0011;
constexpr uint32_t kXgiSessionJoinLocal = 0x000B0012;
constexpr uint32_t kXgiSessionStart = 0x000B0014;
constexpr uint32_t kXgiSessionEnd = 0x000B0015;
constexpr uint32_t kXgiUserReadStats = 0x000B0021;
constexpr uint32_t kXgiSessionWriteStats = 0x000B0025;

// Xenia's X_ONLINE_E_SESSION_NOT_LOGGED_ON: what the console answers when a
// title asks for a session that needs Live.
constexpr uint32_t kSessionNotLoggedOn = 0x80155209u;
// Xenia's X_ONLINE_E_LOGON_NOT_LOGGED_ON, which is what it returns for
// XUserReadStats unconditionally.
constexpr uint32_t kLogonNotLoggedOn = 0x80151802u;

// SessionFlags, from Xenia's xsession.h. Only the Live features matter here:
// a session that asks for none of them is an offline session, which the console
// creates with no connection at all.
constexpr uint32_t kSessionFlagPresence = 0x02;
constexpr uint32_t kSessionFlagStats = 0x04;
constexpr uint32_t kSessionFlagMatchmaking = 0x08;
constexpr uint32_t kSessionFlagArbitration = 0x10;
constexpr uint32_t kSessionLiveFeatures = kSessionFlagPresence |
                                          kSessionFlagStats |
                                          kSessionFlagMatchmaking |
                                          kSessionFlagArbitration;

// Xenia's X_E_FAIL / X_E_NOTFOUND: HRESULTs, not Win32 error codes, because
// these are what the message dispatcher itself returns.
constexpr uint32_t kMessageFail = 0x80004005u;
constexpr uint32_t kMessageNotFound = 0x80070490u;

// --- the session messages ---------------------------------------------------
//
// XGISessionCreate. The buffer is Xenia's, field for field (xgi_app.cc case
// 0x000B0010): { session_ptr, flags, public slots, private slots, user xuid,
// session info ptr, nonce ptr }, 28 bytes.
//
// What is granted diverges from Xenia deliberately, and this is the one place
// in the file where that is true, so the reason is written down rather than
// implied.
//
// Xenia refuses any session carrying a Live feature bit - PRESENCE, STATS,
// MATCHMAKING or ARBITRATION - with X_ONLINE_E_SESSION_NOT_LOGGED_ON, which is
// what a real console does when it is not signed in to Live. It is right to,
// because it has nowhere for a stat to go: there is no leaderboard behind it.
//
// This runtime does. The local high-score table IS the leaderboard, and a
// single-player session that asks only for PRESENCE and STATS is asking for
// exactly the two things it can have here - somewhere to put a score, and
// somewhere to say what the player is doing. Granting it is not a claim about
// Live: the sign-in state stays local, friends and the marketplace still
// refuse, and the score is written to this machine's own file.
//
// MATCHMAKING and ARBITRATION are refused as Xenia refuses them. Those are
// about other consoles, and there is no answer to give about a console that is
// not there. That line - grant what can actually be honoured, refuse what
// cannot - is the whole rule.
uint32_t xgi_session_create(uint32_t buffer_ptr, uint32_t buffer_length) {
    if (buffer_ptr == 0 || (buffer_length != 0 && buffer_length < 28))
        return kMessageFail;
    guest_memory& memory = active_kernel()->memory();
    if (memory.host(buffer_ptr, 28) == nullptr) return kMessageFail;
    const uint32_t flags = memory.read_u32(buffer_ptr + 0x04);
    if ((flags & (kSessionFlagMatchmaking | kSessionFlagArbitration)) != 0)
        return kSessionNotLoggedOn;
    if (profile_debug()) {
        std::printf("  [stats] session created, flags %08X%s\n", flags,
                    (flags & kSessionFlagStats) != 0 ? " (stats)" : "");
        std::fflush(stdout);
    }
    // A new session starts with nothing set. Carrying the last run's
    // properties into it would let a game over record the previous score.
    active_kernel()->clear_session_properties();
    return x_error::success;
}

// XGISessionWriteStats - the title handing the console its score.
//
// Xenia has no case for this message, so there is no layout to copy and this is
// the only structure here that is not taken from it. It comes from the XDK
// signature the message carries -
//
//   XSessionWriteStats(HANDLE, XUID, DWORD dwNumViews,
//                      const XSESSION_VIEW_PROPERTIES*, PXOVERLAPPED)
//
// - laid out the way every other XGI message in Xenia lays the same arguments
// out: the object, four bytes of padding before the 64-bit XUID (exactly as
// XGI_XUSER_SET_CONTEXT and XGI_XUSER_SET_PROPERTY do), then the count and the
// array. XSESSION_VIEW_PROPERTIES { view id, property count, properties } and
// XUSER_PROPERTY { id, X_USER_DATA } are public XDK structures, and Xenia's own
// XUSER_PROPERTY is 0x18 bytes with X_USER_DATA at 8, which is what pins the
// stride.
//
// A derived layout is a guess until something checks it, so this one checks
// itself before it is believed:
//
//   * every pointer must be mapped for the length it claims;
//   * the counts must be small enough to be real;
//   * and the view id must be a board the title's own SPA declares.
//
// The last one is the strong check. If the layout were wrong the view ids would
// be arbitrary words out of the middle of some other structure, and the chance
// of one of those matching a board id out of XVC2 is negligible - so a wrong
// reading records nothing rather than a wrong number. That is why this refuses
// unknown board ids instead of inventing rows for them.
uint32_t xgi_session_write_stats(uint32_t buffer_ptr, uint32_t buffer_length) {
    constexpr uint32_t kWriteStatsSize = 0x18;
    constexpr uint32_t kViewPropertiesSize = 0x0C;
    constexpr uint32_t kUserPropertySize = 0x18;
    constexpr uint32_t kUserPropertyData = 0x08;
    // A title submits a handful of boards with a handful of columns each.
    // Anything past these is a count that was not a count.
    constexpr uint32_t kMaxViews = 64;
    constexpr uint32_t kMaxProperties = 64;

    if (buffer_ptr == 0 || (buffer_length != 0 && buffer_length < kWriteStatsSize))
        return kMessageFail;
    kernel_state* kernel = active_kernel();
    guest_memory& memory = kernel->memory();
    if (memory.host(buffer_ptr, kWriteStatsSize) == nullptr)
        return kMessageFail;

    const uint32_t view_count = memory.read_u32(buffer_ptr + 0x10);
    const uint32_t views_ptr = memory.read_u32(buffer_ptr + 0x14);
    if (view_count == 0 || view_count > kMaxViews) return x_error::success;
    if (views_ptr == 0 ||
        memory.host(views_ptr, view_count * kViewPropertiesSize) == nullptr)
        return kMessageFail;

    for (uint32_t i = 0; i < view_count; ++i) {
        const uint32_t view = views_ptr + i * kViewPropertiesSize;
        const uint32_t board_id = memory.read_u32(view + 0x00);
        const uint32_t property_count = memory.read_u32(view + 0x04);
        const uint32_t properties_ptr = memory.read_u32(view + 0x08);

        const xdbf_leaderboard* board = kernel->title_leaderboard(board_id);
        if (board == nullptr) continue; // not a board this title declares
        if (property_count > kMaxProperties) continue;
        if (properties_ptr != 0 && property_count != 0 &&
            memory.host(properties_ptr, property_count * kUserPropertySize) ==
                nullptr)
            continue;

        // The properties this submission carries are the freshest statement of
        // what the run scored, so they take precedence over anything set
        // earlier through XUserSetProperty - and they are held the same way, so
        // a board whose column is filled by one call and submitted by another
        // still lines up.
        for (uint32_t p = 0; p < property_count; ++p) {
            const uint32_t property = properties_ptr + p * kUserPropertySize;
            kernel->set_session_property(
                memory.read_u32(property + 0x00),
                read_user_data_value(memory, property + kUserPropertyData));
        }

        const xdbf_view_field* column = board->ranked_column();
        if (column == nullptr || column->property_id == 0) continue;
        uint64_t value = 0;
        if (!kernel->session_property(column->property_id, value)) continue;
        record_local_score(board_id, value);
    }
    return x_error::success;
}

// Names an app/message pair the first time it turns up, once each. A title
// that polls an unimplemented message does it hundreds of thousands of times,
// so logging every call would bury the one line that matters.
void report_unhandled_message(uint32_t app, uint32_t message) {
    static std::mutex mutex;
    static std::set<uint64_t> seen;
    const uint64_t key = (static_cast<uint64_t>(app) << 32) | message;
    const std::lock_guard<std::mutex> lock(mutex);
    if (!seen.insert(key).second) return;
    std::printf("whitty_xenon: unhandled XAM message app=%02X message=%08X\n",
                app, message);
    std::fflush(stdout);
}

uint32_t dispatch_app_message_impl(uint32_t app, uint32_t message,
                                   uint32_t buffer_ptr, uint32_t buffer_length);

// Runs one message. Returns the HRESULT the console's dispatcher would.
uint32_t dispatch_app_message(uint32_t app, uint32_t message,
                              uint32_t buffer_ptr, uint32_t buffer_length) {
    static const bool trace = std::getenv("WHITTY_TRACE_XMSG") != nullptr;
    const uint32_t r =
        dispatch_app_message_impl(app, message, buffer_ptr, buffer_length);
    if (trace && app != kAppXmp) {
        std::printf("  [xmsg] app=%02X msg=%08X buf=%08X len=%08X -> %08X\n",
                    app, message, buffer_ptr, buffer_length, r);
        std::fflush(stdout);
    }
    return r;
}

uint32_t dispatch_app_message_impl(uint32_t app, uint32_t message,
                                   uint32_t buffer_ptr, uint32_t buffer_length) {
    kernel_state* kernel = active_kernel();
    guest_memory& memory = kernel->memory();

    switch (app) {
        case kAppXmp:
            break;
        case kAppXgi:
            // The gaming interface. Earning an achievement is persisted by the
            // store; the context and property writes are accepted because the
            // console accepts them and a title reads a refusal as its own setup
            // having failed.
            if (message == kXgiUserWriteAchievements)
                return xgi_user_write_achievements(buffer_ptr, buffer_length);
            if (message == kXgiUserSetContext)
                return xgi_user_set_context(buffer_ptr, buffer_length);
            if (message == kXgiUserSetProperty)
                return xgi_user_set_property(buffer_ptr, buffer_length);
            // The session a score is recorded through. Every one of these used
            // to be refused, and the refusal at the first step is what stopped
            // any title ever reaching the last one.
            if (message == kXgiSessionCreate)
                return xgi_session_create(buffer_ptr, buffer_length);
            if (message == kXgiSessionWriteStats)
                return xgi_session_write_stats(buffer_ptr, buffer_length);
            if (message == kXgiSessionStart) {
                // The run is beginning. Xenia accepts this ("implemented in
                // netplay") and there is nothing to set up beyond the
                // properties the title is about to write.
                return x_error::success;
            }
            if (message == kXgiSessionEnd) {
                // The run is over. Anything it scored was recorded when the
                // title submitted it; what is left here is only to make sure
                // the next run cannot inherit this one's properties.
                active_kernel()->clear_session_properties();
                return x_error::success;
            }
            if (message == kXgiSessionDelete) {
                active_kernel()->clear_session_properties();
                return x_error::success;
            }
            if (message == kXgiSessionJoinLocal) {
                // Local players joining the session. There is one profile on
                // this machine and it is already in it.
                return x_error::success;
            }
            if (message == kXgiUserReadStats) {
                // Reading a leaderboard BACK is a different question from
                // writing one, and it stays refused, exactly as Xenia refuses
                // it. The reply is a nest of guest pointers whose layout is
                // written down nowhere - not in Xenia, which never fills one
                // in, and not in its history - so a guessed one is not a wrong
                // number on a screen but a wild read. The local table is shown
                // on the system blade instead, where it needs no guest layout.
                return kLogonNotLoggedOn;
            }
            report_unhandled_message(app, message);
            return kMessageFail;
        case kAppXLiveBase:
            // XLiveBaseGetLogonId. The console answers this one even with no
            // Live connection, because the logon id it reports is the LOCAL
            // profile's - the same profile XamUserGetSigninState already says is
            // signed in locally. Refusing it was the mirror of the usual bug:
            // the title reads the buffer back unconditionally, so failing while
            // writing nothing handed it whatever was already there. Alien Breed:
            // Evolution asks for this during startup and then immediately tries
            // to enumerate friends. Semantics and value follow Xenia's
            // xlivebase_app.cc.
            //
            // This is not a fake success. It does not claim a Live session:
            // 0x00058020 below (CXLiveFriends::Enumerate) still refuses, as do
            // XLiveBase logon, XUserReadStats and every XSession call.
            if (message == kXLiveBaseGetLogonId) {
                if (buffer_ptr != 0 &&
                    (buffer_length == 0 || buffer_length == 4))
                    memory.write_u32(buffer_ptr, 1);
                return x_error::success;
            }
            // XLiveBaseGetNatType. One dword out: how permissive the router in
            // front of this console is, 1 OPEN / 2 MODERATE / 3 STRICT. Xenia
            // refuses it with X_ONLINE_E_LOGON_NOT_LOGGED_ON and notes the
            // buffer is "only set when online".
            //
            // Refusing it is honest and it is also what this runtime does
            // everywhere else, so it stays a refusal - but it stops handing
            // back a buffer nobody wrote. Jetpac Refuelled passes a stack
            // local holding 0xFFFFFFFF and reads it back whatever the call
            // returns; on a measured run, writing nothing left it that value.
            // Zero is not a NAT type, which is the point: it says "no answer"
            // in a field whose three valid values all mean an answer.
            //
            // Do not read this as the cause of a failed game start. Both
            // halves were measured on Jetpac - success with NAT_OPEN, and the
            // refusal below - and the title reaches the same error screen
            // either way. What it actually wanted was XamUserGetName.
            if (message == kXLiveBaseGetNatType) {
                if (buffer_ptr != 0 &&
                    (buffer_length == 0 || buffer_length == 4))
                    memory.write_u32(buffer_ptr, 0);
                return kLogonNotLoggedOn;
            }
            report_unhandled_message(app, message);
            return kMessageFail;
        case kAppXam:
            // Guest sign-in is allowed or not by the console, not by the title;
            // the buffer is the title telling us which, so there is nothing to
            // write back and nothing to refuse. Semantics from Xenia's
            // xam_app.cc.
            if (message == kXamEnableGuestSignin) return x_error::success;
            // Deployment type. These titles are Xbox Live Arcade downloads, so
            // that is what they are told (Xenia's XDeploymentType::kDownload).
            // The value matters less than writing one at all: the title reads
            // the dword back whatever this returns.
            if (message == kXamTitleGetDeploymentType) {
                if (buffer_ptr == 0) return kMessageFail;
                const uint32_t type_ptr = memory.read_u32(buffer_ptr);
                if (type_ptr == 0) return kMessageFail;
                memory.write_u32(type_ptr, 2u); // kDownload
                return x_error::success;
            }
            report_unhandled_message(app, message);
            return kMessageFail;
        case kAppMessenger:
            // A real app, but none of its messages are implemented here.
            report_unhandled_message(app, message);
            return kMessageFail;
        default:
            // No such app. The console tells the title this rather than
            // failing, and XMsgStartIORequest turns it into INVALID_ARG.
            report_unhandled_message(app, message);
            return kMessageNotFound;
    }

    const std::lock_guard<std::mutex> lock(kernel->media_player_mutex());
    media_player_state& player = kernel->media_player();
    switch (message) {
        case kXmpGetPlaybackController: {
            // XMP_GET_PLAYBACK_CONTROLLER { client, controller_ptr,
            // locked_ptr }. The title is asking whether it still owns playback;
            // with nothing else playing, it does.
            if (buffer_ptr == 0) return kMessageFail;
            const uint32_t controller_ptr = memory.read_u32(buffer_ptr + 4);
            const uint32_t locked_ptr = memory.read_u32(buffer_ptr + 8);
            if (controller_ptr != 0)
                memory.write_u32(controller_ptr, player.playback_controller);
            if (locked_ptr != 0)
                memory.write_u32(locked_ptr,
                                 player.title_in_playback_control() ? 0u : 1u);
            return x_error::success;
        }
        case kXmpSetPlaybackController: {
            // XMP_SET_PLAYBACK_CONTROLLER { client, request, locked }.
            if (buffer_ptr == 0) return kMessageFail;
            const uint32_t client = memory.read_u32(buffer_ptr + 0);
            const uint32_t request = memory.read_u32(buffer_ptr + 4);
            const uint32_t locked = memory.read_u32(buffer_ptr + 8);
            if (request == xmp_playback_controller::restore) {
                player.client = xmp_client::game;
                player.playback_controller = xmp_playback_controller::game;
            } else {
                player.client = client;
                player.playback_controller = request;
            }
            player.override_enabled = locked != 0;
            kernel->broadcast_notification(
                notification_id::xmp_playback_controller_changed,
                player.override_enabled
                    ? 0u
                    : (player.title_in_playback_control() ? 1u : 0u));
            return x_error::success;
        }
        case kXmpGetStatus: {
            // XMP_GET_STATUS { client, state_ptr }.
            if (buffer_ptr == 0) return kMessageFail;
            const uint32_t state_ptr = memory.read_u32(buffer_ptr + 4);
            if (state_ptr != 0) memory.write_u32(state_ptr, player.state);
            return x_error::success;
        }
        case kXmpGetVolume: {
            if (buffer_ptr == 0) return kMessageFail;
            const uint32_t volume_ptr = memory.read_u32(buffer_ptr + 4);
            if (volume_ptr != 0) {
                uint32_t bits = 0;
                std::memcpy(&bits, &player.volume, sizeof(bits));
                memory.write_u32(volume_ptr, bits);
            }
            return x_error::success;
        }
        case kXmpSetVolume: {
            if (buffer_ptr == 0) return kMessageFail;
            const uint32_t bits = memory.read_u32(buffer_ptr + 4);
            std::memcpy(&player.volume, &bits, sizeof(player.volume));
            return x_error::success;
        }
        case kXmpSetPlaybackBehavior: {
            // XMP_SET_PLAYBACK_BEHAVIOR { client, mode, repeat, flags }.
            if (buffer_ptr == 0) return kMessageFail;
            player.playback_mode = memory.read_u32(buffer_ptr + 4);
            player.repeat_mode = memory.read_u32(buffer_ptr + 8);
            player.playback_flags = memory.read_u32(buffer_ptr + 12);
            kernel->broadcast_notification(
                notification_id::xmp_playback_behavior_changed, 0);
            return x_error::success;
        }
        case kXmpGetPlaybackBehavior: {
            // XMP_GET_PLAYBACK_BEHAVIOR { client, mode_ptr, repeat_ptr,
            // flags_ptr }.
            if (buffer_ptr == 0) return kMessageFail;
            const uint32_t mode_ptr = memory.read_u32(buffer_ptr + 4);
            const uint32_t repeat_ptr = memory.read_u32(buffer_ptr + 8);
            const uint32_t flags_ptr = memory.read_u32(buffer_ptr + 12);
            if (mode_ptr != 0) memory.write_u32(mode_ptr, player.playback_mode);
            if (repeat_ptr != 0)
                memory.write_u32(repeat_ptr, player.repeat_mode);
            if (flags_ptr != 0)
                memory.write_u32(flags_ptr, player.playback_flags);
            return x_error::success;
        }
        case kXmpGetTitlePlaylistBufferSizeDisabled: {
            // XMP_GET_TITLE_PLAYLIST_BUFFER_SIZE { client, song_count,
            // size_ptr }. The title is sizing a buffer it will XamAlloc and hand
            // back with the playlist. We do not use the storage, so the size only
            // has to be the size the console would have asked for - Xenia's
            // formula, which is what titles are built against.
            if (buffer_ptr == 0) return kMessageFail;
            const uint32_t client = memory.read_u32(buffer_ptr + 0);
            const uint32_t song_count = memory.read_u32(buffer_ptr + 4);
            const uint32_t size_ptr = memory.read_u32(buffer_ptr + 8);
            // The HUD client gets no playlist storage, and a zero count or a
            // null destination is malformed.
            if (client == xmp_client::hud || size_ptr == 0 || song_count == 0)
                return x_error::invalid_parameter;
            memory.write_u32(size_ptr, song_count * 0x3E8 + 0x88);
            return x_error::success;
        }
        case kXmpCreateTitlePlaylistDisabled: {
            // XMP_CREATE_TITLE_PLAYLIST { client, storage_ptr, storage_size,
            // songs_ptr, song_count, playlist_name_ptr, flags,
            // song_handles_ptr, playlist_handle_ptr } - 0x24 bytes. The title
            // registers its own soundtrack; it decodes the audio itself through
            // the XMA hardware, so there is nothing here to load.
            //
            // What the title KEEPS is the handles, and it plays by handing them
            // back. Xenia uses the storage the title allocated as the playlist
            // handle and numbers the songs from one; a handle of zero would read
            // as "no playlist" and stop the music silently, so the song handles
            // start at one for the same reason.
            if (buffer_ptr == 0) return kMessageFail;
            if (memory.host(buffer_ptr, 0x24) == nullptr)
                return x_error::invalid_parameter;
            const uint32_t storage_ptr = memory.read_u32(buffer_ptr + 0x04);
            const uint32_t song_count = memory.read_u32(buffer_ptr + 0x10);
            const uint32_t song_handles_ptr = memory.read_u32(buffer_ptr + 0x1C);
            const uint32_t playlist_handle_ptr =
                memory.read_u32(buffer_ptr + 0x20);
            // A count that would run off the end of guest memory is refused
            // rather than walked.
            constexpr uint32_t kMaxSongsPerPlaylist = 4096;
            if (song_count > kMaxSongsPerPlaylist)
                return x_error::invalid_parameter;
            if (song_handles_ptr != 0) {
                if (memory.host(song_handles_ptr, song_count * 4) == nullptr)
                    return x_error::invalid_parameter;
                for (uint32_t i = 0; i < song_count; ++i)
                    memory.write_u32(song_handles_ptr + i * 4, i + 1);
            }
            if (playlist_handle_ptr != 0)
                memory.write_u32(playlist_handle_ptr, storage_ptr);
            return x_error::success;
        }
        case kXmpPlayTitlePlaylistDisabled: {
            // XMP_PLAY_TITLE_PLAYLIST { client, storage_ptr, song_handle }.
            // The title's own music, which it decodes itself through the XMA
            // hardware - so there is no playlist for us to load, only state to
            // keep consistent with what the title will read back.
            // Deliberately does NOT touch player.client or player.state:
            // overwriting client breaks title_in_playback_control(), and
            // claiming "playing" made Space Giraffe present 2 frames and stop.
            // The title decodes its own audio through XMA regardless.
            if (buffer_ptr == 0) return kMessageFail;
            return x_error::success;
        }
        case kXmpContinue:
        case kXmpNext:
        case kXmpPrevious:
            // Nothing is playing, so there is nothing to advance. The console
            // accepts these and stays idle.
            return x_error::success;
        case kXmpStop:
        case kXmpPause:
            player.state = xmp_state::idle;
            return x_error::success;
        case kXmpCaptureOutput:
            // The title is offering to render the music player's output itself.
            // There is no music source here, so there is never a buffer to hand
            // it - which is also what a console with no soundtrack playing
            // does. Accepting is honest; inventing samples would not be.
            return x_error::success;
        default:
            report_unhandled_message(app, message);
            return kMessageFail;
    }
}

} // namespace

uint32_t XMsgInProcessCall(uint32_t app, uint32_t message, uint32_t arg1,
                           uint32_t arg2) {
    return dispatch_app_message(app, message, arg1, arg2);
}

uint32_t XMsgStartIORequestEx(uint32_t app, uint32_t message,
                              uint32_t overlapped_ptr, uint32_t buffer_ptr,
                              uint32_t buffer_length, uint32_t unknown_ptr) {
    (void)unknown_ptr;
    uint32_t result = dispatch_app_message(app, message, buffer_ptr, buffer_length);
    if (result == kMessageNotFound) result = x_status::invalid_parameter;
    if (overlapped_ptr != 0) {
        complete_overlapped(overlapped_ptr, result);
        return x_error::io_pending;
    }
    return result;
}

uint32_t XMsgStartIORequest(uint32_t app, uint32_t message,
                            uint32_t overlapped_ptr, uint32_t buffer_ptr,
                            uint32_t buffer_length) {
    return XMsgStartIORequestEx(app, message, overlapped_ptr, buffer_ptr,
                                buffer_length, 0);
}

uint32_t XMsgCancelIORequest(uint32_t overlapped_ptr, uint32_t wait) {
    // The request has already completed by the time the title could cancel it,
    // so there is nothing to stop. If the title asked to wait, its event has
    // been signalled already.
    (void)overlapped_ptr;
    (void)wait;
    return x_error::success;
}

uint32_t XMsgCompleteIORequest(uint32_t overlapped_ptr, uint32_t result,
                               uint32_t extended_error, uint32_t length) {
    complete_overlapped(overlapped_ptr, result, extended_error, length);
    return x_error::success;
}

uint32_t XamGetOverlappedResult(uint32_t overlapped_ptr, uint32_t length_ptr,
                                uint32_t wait) {
    if (overlapped_ptr == 0) return x_error::invalid_parameter;
    guest_memory& memory = active_kernel()->memory();
    const uint32_t result = memory.read_u32(overlapped_ptr + 0x00);
    // Every operation here completes before returning, so an overlapped that
    // still reads IO_PENDING is one nothing ever finished - report that rather
    // than blocking forever on an event that will not be signalled.
    if (result == x_error::io_pending) {
        (void)wait;
        return x_error::io_incomplete;
    }
    if (length_ptr != 0)
        memory.write_u32(length_ptr, memory.read_u32(overlapped_ptr + 0x04));
    return result;
}

uint32_t XamInputSetState(uint32_t user, uint32_t flags, uint32_t vibration) {
    (void)user; (void)flags; (void)vibration;
    return x_error::device_not_connected; // no pad to rumble
}

uint32_t XamLoaderLaunchTitle(uint32_t path_ptr, uint32_t flags) {
    (void)path_ptr; (void)flags;
    // Launching another title means leaving this one; record the request.
    active_kernel()->request_terminate("XamLoaderLaunchTitle");
    // And then DO NOT RETURN. This is the same contract ExTerminateThread has,
    // for the same reason: on the console the loader tears this title down
    // inside the call, so the compiler emits nothing after it that is meant to
    // run, and returning executes whatever the linker happened to place next.
    //
    // Jetpac Refuelled (584107FB) is where this showed up. Its CRT exit path
    // ends with the shutdown routine at 0x820838B4, which stores NULL over the
    // global at 0x8235EBA0 and then runs off its own end into the function at
    // 0x820838F0 - and that function's first act is to load that same global
    // and dereference it. On hardware nothing ever reaches it, because this
    // call does not come back. Here it did, and the result was SIGSEGV at
    // guest address 0x34 (the global's offset 52) in a function with no visible
    // connection to the loader at all.
    throw guest_thread_terminated{0};
}

uint32_t XAudioRegisterRenderDriverClient(uint32_t callback_ptr, uint32_t driver_ptr) {
    if (callback_ptr == 0) return x_error::invalid_parameter;
    kernel_state* kernel = active_kernel();
    guest_memory& memory = kernel->memory();
    // The argument points at two dwords: the routine to call when audio is
    // wanted, and the argument to call it with. Storing them is the whole
    // difference between a title that plays sound and one that never submits.
    const uint32_t callback = memory.read_u32(callback_ptr);
    if (callback == 0) return x_error::invalid_parameter;
    const uint32_t callback_arg = memory.read_u32(callback_ptr + 4);
    // The callback takes its argument BY REFERENCE: it is invoked with r3
    // pointing at a dword that holds the argument, and the title's thunk does
    // `lwz r3,0(r3)` to unwrap it before tail-calling the real routine. So the
    // argument needs a cell in guest memory to live in - Xenia's
    // AudioSystem::RegisterClient allocates four bytes and stores it there for
    // this reason. Passing the value directly makes the title's unwrap read one
    // level too far, and the fault surfaces inside the title's own mixer.
    audio_client& client = kernel->audio();
    if (client.wrapped_callback_arg != 0) {
        // Re-registering without unregistering: reuse the cell rather than
        // leaking one per registration.
        memory.write_u32(client.wrapped_callback_arg, callback_arg);
    } else {
        const uint32_t cell = kernel->heap().allocate(4, 4);
        // Xenia returns RegisterClient's X_STATUS straight out of this shim, so
        // a failure to make room reports as one rather than as a bad argument.
        if (cell == 0) return x_status::no_memory;
        memory.write_u32(cell, callback_arg);
        client.wrapped_callback_arg = cell;
    }
    client.callback = callback;
    client.callback_arg = callback_arg;
    client.registered = true;
    // Client 0. The handle's top half is fixed ('AU'); a title passes the
    // whole thing back to identify itself when submitting.
    if (driver_ptr != 0)
        memory.write_u32(driver_ptr, kAudioDriverHandleBase | 0);
    return x_error::success;
}

uint32_t XAudioUnregisterRenderDriverClient(uint32_t driver) {
    (void)driver;
    kernel_state* kernel = active_kernel();
    audio_client& client = kernel->audio();
    // Clear `registered` before releasing the cell: the audio worker reads the
    // client to decide whether to call, and a freed cell it still had the
    // address of would be handed to guest code as its argument.
    client.registered = false;
    client.callback = 0;
    if (client.wrapped_callback_arg != 0) {
        kernel->heap().free(client.wrapped_callback_arg);
        client.wrapped_callback_arg = 0;
    }
    return x_error::success;
}

uint32_t XAudioSubmitRenderDriverFrame(uint32_t driver, uint32_t samples_ptr) {
    (void)driver;
    if (samples_ptr == 0) return x_error::success;
    kernel_state* kernel = active_kernel();
    guest_memory& memory = kernel->memory();
    // The frame is CHANNEL-MAJOR: every sample of channel 0, then every sample
    // of channel 1, and so on - not one interleaved sample per channel. That is
    // what the title's mixer writes (it fills each output channel as one
    // contiguous run) and what Xenia's driver transposes on the way out.
    //
    // Reading it as interleaved instead is silent about being wrong: the peak
    // and "frames with signal" counts come out the same, because they only ask
    // how loud the frame is. What changes is the sound - channel 0's whole
    // 256-sample run gets played as 42 six-channel samples, so the mix arrives
    // six times too fast and smeared across every speaker.
    //
    // Big-endian like everything else the guest wrote; read_u32 undoes the byte
    // order and the bits are reinterpreted rather than converted, since they
    // already ARE a float. The host sink wants them interleaved, so the copy
    // transposes as it goes.
    float samples[kAudioSamplesPerFrame];
    // The loudest sample in the frame. "Frames are arriving" and "sound is
    // being produced" are different claims: a title whose mixer has nothing to
    // play submits perfectly good frames of silence at exactly the right rate,
    // which counts identically and sounds like a broken runtime.
    // Per channel, because a 5.1 frame can carry its whole signal in channels
    // a stereo downmix discards - which is silence for a reason that has
    // nothing to do with the samples being wrong.
    float peak = 0.0f;
    float channel_peaks[kAudioChannels] = {};
    for (uint32_t channel = 0; channel < kAudioChannels; ++channel) {
        const uint32_t run = samples_ptr + channel * kAudioSamplesPerChannel * 4;
        for (uint32_t index = 0; index < kAudioSamplesPerChannel; ++index) {
            const uint32_t bits = memory.read_u32(run + index * 4);
            float value;
            std::memcpy(&value, &bits, sizeof(value));
            samples[index * kAudioChannels + channel] = value;
            const float magnitude = value < 0 ? -value : value;
            if (magnitude > peak) peak = magnitude;
            if (magnitude > channel_peaks[channel])
                channel_peaks[channel] = magnitude;
        }
    }
    kernel->count_audio_frame();
    kernel->note_audio_peak(peak);
    for (uint32_t c = 0; c < kAudioChannels; ++c)
        kernel->note_channel_peak(c, channel_peaks[c]);
    kernel->submit_audio(samples, kAudioSamplesPerFrame);
    return x_error::success;
}

uint32_t XAudioGetVoiceCategoryVolume(uint32_t category, uint32_t volume_ptr) {
    (void)category;
    // 1.0f as raw IEEE-754 bits: full volume.
    if (volume_ptr != 0) active_kernel()->memory().write_u32(volume_ptr, 0x3F800000u);
    return x_error::success;
}

uint32_t XAudioGetVoiceCategoryVolumeChangeMask(uint32_t driver, uint32_t mask_ptr) {
    (void)driver;
    if (mask_ptr != 0) active_kernel()->memory().write_u32(mask_ptr, 0);
    return x_error::success; // no category volume has changed
}

uint32_t XAudioGetSpeakerConfig(uint32_t config_ptr) {
    // Report 5.1-channel output: 6 speakers with the standard FL/FR/FC/LFE/BL/BR
    // mask. The title's XAudio2 library builds its submix -> mastering send
    // matrix based on this mask; reporting anything smaller zeros out the
    // coefficients for every speaker bit not set, leaving most channels in
    // the 6-channel render-driver frame buffer silent.
    if (config_ptr != 0) active_kernel()->memory().write_u32(config_ptr, 0x0006003Fu);
    return x_error::success;
}


// --- assorted kernel services ---------------------------------------------

namespace {

// X_MEMORY_BASIC_INFORMATION, as the guest sees it.
constexpr uint32_t kMbiBaseAddress = 0x00;
constexpr uint32_t kMbiAllocationBase = 0x04;
constexpr uint32_t kMbiAllocationProtect = 0x08;
constexpr uint32_t kMbiRegionSize = 0x0C;
constexpr uint32_t kMbiState = 0x10;
constexpr uint32_t kMbiProtect = 0x14;
constexpr uint32_t kMbiType = 0x18;
constexpr uint32_t kMbiSize = 0x1C;
constexpr uint32_t kMemStateCommit = 0x1000;
constexpr uint32_t kMemStateFree = 0x10000;
constexpr uint32_t kMemTypePrivate = 0x20000;

// TIME_FIELDS: year, month, day, hour, minute, second, milliseconds, weekday.
constexpr uint32_t kTimeFieldsYear = 0x00;
constexpr uint32_t kTimeFieldsMonth = 0x02;
constexpr uint32_t kTimeFieldsDay = 0x04;
constexpr uint32_t kTimeFieldsHour = 0x06;
constexpr uint32_t kTimeFieldsMinute = 0x08;
constexpr uint32_t kTimeFieldsSecond = 0x0A;
constexpr uint32_t kTimeFieldsMilliseconds = 0x0C;
constexpr uint32_t kTimeFieldsWeekday = 0x0E;

// Days from 1601-01-01 to the start of `year`, proleptic Gregorian.
int64_t days_before_year(int64_t year) {
    const int64_t y = year - 1601;
    return y * 365 + y / 4 - y / 100 + y / 400;
}
bool is_leap(int64_t year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}
const int kDaysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

} // namespace

void ExRegisterTitleTerminateNotification(uint32_t, uint32_t) {
    // Accepted; the host loop decides when the title ends, and nothing here
    // needs to call back into the guest yet.
}

// The console language, read by ExGetXConfigSetting below and by
// XamGetLanguage further down. ONE constant, because a title that asks both and
// is told two different things localises half of itself into each. 1 is
// English, the same default Xenia's user_language carries.
constexpr uint32_t kConsoleLanguage = 1;

namespace {

// Names an XConfig setting the first time it is asked for, with the answer.
//
// Once each, not once a call: a title reads these in its frame loop. Space
// Giraffe asks for XCONFIG_USER_LANGUAGE (category 3, setting 9) about once
// per presented frame - tens of thousands of times in a minute - which as a
// per-call line buried every other message in the log and read like a spin.
// It is not one: the value, the size and the status are all what the console
// returns, and the title is simply polling.
void report_xconfig_setting(uint32_t category, uint32_t setting,
                            uint32_t value, uint16_t value_size,
                            uint32_t status) {
    static std::mutex mutex;
    static std::set<uint32_t> seen;
    const uint32_t key = (category << 16) | (setting & 0xFFFF);
    const std::lock_guard<std::mutex> lock(mutex);
    if (!seen.insert(key).second) return;
    std::fprintf(stderr,
                 "  [xconfig] category %04X setting %04X -> %08X (%u byte(s)),"
                 " status %08X\n",
                 category, setting, value, value_size, status);
}

} // namespace

uint32_t ExGetXConfigSetting(uint32_t category, uint32_t setting,
                             uint32_t buffer_ptr, uint32_t buffer_size,
                             uint32_t required_size_ptr) {
    uint32_t value = 0;
    uint16_t value_size = 4;
    switch (category) {
        case 0x0002: // secured
            if (setting == 0x0002) {
                value = 0x00001000; // AV region: USA/Canada
            } else {
                return x_status::invalid_parameter;
            }
            break;
        case 0x0003: // XCONFIG_USER_CATEGORY
            // Setting numbers and sizes are Xenia's (kernel/xconfig.h,
            // XCONFIG_USER_CATEGORY_ENTRIES); every one here is a 4-byte value
            // except the country, which the console stores as one byte.
            switch (setting) {
                case 0x0001: case 0x0002: case 0x0003: case 0x0004:
                case 0x0005: case 0x0006: case 0x0007:
                    value = 0; // time zone: UTC, no daylight saving
                    break;
                // LANGUAGE. The number lives in kConsoleLanguage, which
                // XamGetLanguage answers out of as well. Titles poll this
                // every frame.
                case 0x0009: value = kConsoleLanguage; break;
                case 0x000A: value = 0x00040000; break; // VIDEO_FLAGS
                case 0x000C: value = 0; break;          // RETAIL_FLAGS
                case 0x000E: value = 103; value_size = 1; break; // COUNTRY: US
                default: return x_status::invalid_parameter;
            }
            break;
        case 0x0004: // audio
            // Older Xbox 360 titles (like Geometry Wars 1, which predates
            // XAudioGetSpeakerConfig ordinal 511) query the speaker layout
            // through XConfig instead. Same packing: (SpeakerCount<<16)|Mask.
            switch (setting) {
                case 0x0001: value = 0x00000000; break; // audio flags (none)
                case 0x0002: value = 0x00000000; break; // headset flags (none)
                case 0x0003: value = 0x0006003Fu; break;// speaker config: 6ch, 5.1 mask
                case 0x0004: value = 0x00000000; break; // headset count
                case 0x0005: value = 0x00000000; break; // playback / headphone
                case 0x0006: value = 0x00000000; break; // HRTF enable
                default: return x_status::invalid_parameter;
            }
            break;
        default:
            return x_status::invalid_parameter;
    }

    guest_memory& memory = active_kernel()->memory();
    if (required_size_ptr != 0) memory.write_u16(required_size_ptr, value_size);
    uint32_t status = x_status::success;
    if (buffer_ptr == 0)
        status = x_status::invalid_parameter;
    else if (buffer_size < value_size)
        status = x_status::buffer_too_small;
    else if (value_size == 1)
        memory.write_u8(buffer_ptr, static_cast<uint8_t>(value));
    else
        memory.write_u32(buffer_ptr, value);
    report_xconfig_setting(category, setting, value, value_size, status);
    return status;
}

void KeLockL2() {}
void KeUnlockL2() {}
void KiApcNormalRoutineNop() {}

uint32_t ObCreateSymbolicLink(uint32_t link_name_ptr, uint32_t target_name_ptr) {
    // The file system resolves device names directly, so a link only needs to
    // be accepted for the title's own bookkeeping to line up.
    (void)link_name_ptr;
    (void)target_name_ptr;
    return x_status::success;
}

uint32_t ObDeleteSymbolicLink(uint32_t) { return x_status::success; }

void RtlFreeAnsiString(uint32_t string_ptr) {
    if (string_ptr == 0) return;
    guest_memory& memory = active_kernel()->memory();
    const uint32_t buffer = memory.read_u32(string_ptr + 4);
    if (buffer != 0) active_kernel()->heap().free(buffer);
    memory.write_u16(string_ptr + 0, 0); // length
    memory.write_u16(string_ptr + 2, 0); // maximum length
    memory.write_u32(string_ptr + 4, 0); // buffer
}

uint32_t RtlUnicodeStringToAnsiString(uint32_t destination_ptr,
                                      uint32_t source_ptr,
                                      uint32_t allocate_destination) {
    if (destination_ptr == 0 || source_ptr == 0)
        return x_status::invalid_parameter;
    guest_memory& memory = active_kernel()->memory();
    const uint16_t source_bytes = memory.read_u16(source_ptr + 0);
    const uint32_t source_buffer = memory.read_u32(source_ptr + 4);
    const uint16_t characters = static_cast<uint16_t>(source_bytes / 2);

    uint32_t destination_buffer;
    if (allocate_destination != 0) {
        destination_buffer =
            active_kernel()->heap().allocate(characters + 1u, 8);
        if (destination_buffer == 0) return x_status::no_memory;
        memory.write_u16(destination_ptr + 2,
                         static_cast<uint16_t>(characters + 1));
        memory.write_u32(destination_ptr + 4, destination_buffer);
    } else {
        destination_buffer = memory.read_u32(destination_ptr + 4);
        const uint16_t capacity = memory.read_u16(destination_ptr + 2);
        if (capacity < characters) return x_status::buffer_too_small;
    }

    for (uint16_t i = 0; i < characters; ++i) {
        const uint16_t unit = memory.read_u16(source_buffer + i * 2);
        memory.write_u8(destination_buffer + i,
                        unit < 256 ? static_cast<uint8_t>(unit) : '?');
    }
    memory.write_u8(destination_buffer + characters, 0);
    memory.write_u16(destination_ptr + 0, characters);
    return x_status::success;
}

uint32_t RtlTimeFieldsToTime(uint32_t fields_ptr, uint32_t time_ptr) {
    if (fields_ptr == 0 || time_ptr == 0) return 0;
    guest_memory& memory = active_kernel()->memory();
    const int64_t year = memory.read_u16(fields_ptr + kTimeFieldsYear);
    const int64_t month = memory.read_u16(fields_ptr + kTimeFieldsMonth);
    const int64_t day = memory.read_u16(fields_ptr + kTimeFieldsDay);
    const int64_t hour = memory.read_u16(fields_ptr + kTimeFieldsHour);
    const int64_t minute = memory.read_u16(fields_ptr + kTimeFieldsMinute);
    const int64_t second = memory.read_u16(fields_ptr + kTimeFieldsSecond);
    const int64_t millis = memory.read_u16(fields_ptr + kTimeFieldsMilliseconds);
    if (month < 1 || month > 12 || day < 1) return 0;

    int64_t days = days_before_year(year);
    for (int64_t m = 1; m < month; ++m) {
        days += kDaysInMonth[m - 1];
        if (m == 2 && is_leap(year)) days += 1;
    }
    days += day - 1;
    const int64_t seconds = ((days * 24 + hour) * 60 + minute) * 60 + second;
    memory.write_u64(time_ptr,
                     static_cast<uint64_t>(seconds * 10000000LL + millis * 10000LL));
    return 1;
}

uint32_t RtlTimeToTimeFields(uint32_t time_ptr, uint32_t fields_ptr) {
    if (fields_ptr == 0 || time_ptr == 0) return 0;
    guest_memory& memory = active_kernel()->memory();
    int64_t ticks = static_cast<int64_t>(memory.read_u64(time_ptr));
    const int64_t millis = (ticks / 10000) % 1000;
    int64_t seconds = ticks / 10000000LL;
    const int64_t second = seconds % 60; seconds /= 60;
    const int64_t minute = seconds % 60; seconds /= 60;
    const int64_t hour = seconds % 24;
    int64_t days = seconds / 24;

    const int64_t weekday = (days + 1) % 7; // 1601-01-01 was a Monday
    int64_t year = 1601;
    for (;;) {
        const int64_t in_year = is_leap(year) ? 366 : 365;
        if (days < in_year) break;
        days -= in_year;
        ++year;
    }
    int64_t month = 1;
    for (; month <= 12; ++month) {
        int64_t in_month = kDaysInMonth[month - 1];
        if (month == 2 && is_leap(year)) in_month += 1;
        if (days < in_month) break;
        days -= in_month;
    }

    memory.write_u16(fields_ptr + kTimeFieldsYear, static_cast<uint16_t>(year));
    memory.write_u16(fields_ptr + kTimeFieldsMonth, static_cast<uint16_t>(month));
    memory.write_u16(fields_ptr + kTimeFieldsDay, static_cast<uint16_t>(days + 1));
    memory.write_u16(fields_ptr + kTimeFieldsHour, static_cast<uint16_t>(hour));
    memory.write_u16(fields_ptr + kTimeFieldsMinute, static_cast<uint16_t>(minute));
    memory.write_u16(fields_ptr + kTimeFieldsSecond, static_cast<uint16_t>(second));
    memory.write_u16(fields_ptr + kTimeFieldsMilliseconds,
                     static_cast<uint16_t>(millis));
    memory.write_u16(fields_ptr + kTimeFieldsWeekday,
                     static_cast<uint16_t>(weekday));
    return 1;
}

uint32_t RtlImageXexHeaderField(uint32_t, uint32_t field) {
    // The loader parsed these already; answer the ones it knows from the
    // running title rather than re-walking a guest header the runtime does
    // not map. Anything else reports absent, which callers handle.
    kernel_state* kernel = active_kernel();
    switch (field) {
        case 0x00030000: return kernel->xex_system_flags();
        case 0x00040006: return kernel->execution_info_address();
        default: return 0;
    }
}

uint32_t NtQueryVirtualMemory(uint32_t base_address, uint32_t info_ptr) {
    if (info_ptr == 0) return x_status::invalid_parameter;
    kernel_state* kernel = active_kernel();
    guest_memory& memory = kernel->memory();
    memory.zero_block(info_ptr, kMbiSize);

    const uint32_t page = base_address & ~0xFFFu;
    const bool committed = memory.committed(page, 1);
    // Walk forward while the state stays the same, so the title sees a real
    // region size rather than a single page.
    uint32_t size = 0;
    while (size < 0x01000000u) { // cap the walk; titles only need a bound
        const uint32_t probe = page + size;
        if (probe < page) break; // wrapped
        if (memory.committed(probe, 1) != committed) break;
        size += 0x1000u;
    }

    memory.write_u32(info_ptr + kMbiBaseAddress, page);
    memory.write_u32(info_ptr + kMbiAllocationBase, page);
    memory.write_u32(info_ptr + kMbiAllocationProtect, x_page::readwrite);
    memory.write_u32(info_ptr + kMbiRegionSize, size);
    memory.write_u32(info_ptr + kMbiState,
                     committed ? kMemStateCommit : kMemStateFree);
    memory.write_u32(info_ptr + kMbiProtect,
                     committed ? x_page::readwrite : x_page::noaccess);
    memory.write_u32(info_ptr + kMbiType, kMemTypePrivate);
    return x_status::success;
}

uint32_t XNetLogonGetTitleID() {
    const uint32_t block = active_kernel()->execution_info_address();
    if (block == 0) return 0;
    return active_kernel()->memory().read_u32(block + 0x0C); // title id
}

uint32_t XexGetModuleHandle(uint32_t module_name_ptr, uint32_t hmodule_ptr) {
    if (hmodule_ptr == 0) return x_error::invalid_parameter;
    kernel_state* kernel = active_kernel();
    guest_memory& memory = kernel->memory();

    if (module_name_ptr == 0) {
        // The running executable itself.
        memory.write_u32(hmodule_ptr, kernel->execution_info_address());
        return x_error::success;
    }
    std::string name;
    for (uint32_t a = module_name_ptr; memory.read_u8(a) != 0; ++a) {
        name.push_back(static_cast<char>(memory.read_u8(a)));
        if (name.size() >= 256) break;
    }
    const kernel_library library = kernel_library_from_import_name(name);
    if (library == kernel_library::unknown) {
        memory.write_u32(hmodule_ptr, 0);
        return x_error::not_found;
    }
    uint32_t& handle = kernel->module_handle(library);
    if (handle == 0) handle = kernel->heap().allocate(4, 8);
    memory.write_u32(hmodule_ptr, handle);
    return x_error::success;
}

uint32_t XexGetModuleSection(uint32_t hmodule, uint32_t name_ptr,
                             uint32_t data_ptr, uint32_t size_ptr) {
    kernel_state* kernel = active_kernel();
    guest_memory& memory = kernel->memory();
    if (data_ptr != 0) memory.write_u32(data_ptr, 0);
    if (size_ptr != 0) memory.write_u32(size_ptr, 0);

    // This returns an NTSTATUS, and the sign bit is the whole answer: the CRT
    // wrapper around it tests `>= 0`, so a Win32-style positive error code such
    // as ERROR_NOT_FOUND (0x490) reads as SUCCESS and the title then uses the
    // pointer this call did not write. Space Giraffe crashed on exactly that,
    // dereferencing 0x00000003 inside strstr several frames later.
    if (hmodule != 0 && hmodule != kernel->execution_info_address())
        return x_status::invalid_handle;
    if (name_ptr == 0) return x_status::invalid_parameter;

    std::string name;
    for (uint32_t address = name_ptr; memory.read_u8(address) != 0; ++address) {
        name.push_back(static_cast<char>(memory.read_u8(address)));
        if (name.size() >= 256) break;
    }
    const xex_resource* resource = kernel->find_module_resource(name);
    if (resource == nullptr) return x_status::not_found;
    if (data_ptr != 0) memory.write_u32(data_ptr, resource->address);
    if (size_ptr != 0) memory.write_u32(size_ptr, resource->size);
    return x_status::success;
}

// --- added for Geometry Wars 3: Dimensions ---------------------------------

// The console language, and the ONE place the number lives. ExGetXConfigSetting
// answers XCONFIG_USER_LANGUAGE out of this too, so the two calls cannot drift
// apart and localise half a title into a different language from the other.
uint32_t XamGetLanguage() { return kConsoleLanguage; }

// --- ducking ---------------------------------------------------------------
//
// These are REAL answers, not stubs. Ducking exists to drop the game mix while
// somebody is talking over Live; there is no voice chat in this runtime, so
// there is nothing to duck and "no ducking in effect" is simply true. Enabling
// it therefore succeeds and does nothing, and each getter reports the neutral
// setting - which is what a console with ducking switched off reports as well.
//
// A null out-pointer is refused rather than ignored: the caller asked for a
// value and would otherwise read whatever was in its buffer and believe it.
namespace {
uint32_t report_ducker_value(uint32_t out_ptr, float value) {
    if (out_ptr == 0) return x_error::invalid_parameter;
    active_kernel()->memory().write_f32(out_ptr, value);
    return x_error::success;
}
} // namespace

uint32_t XAudioEnableDucker(uint32_t enable) {
    (void)enable;
    return x_error::success;
}
// Full level: the mix is not being attenuated.
uint32_t XAudioGetDuckerLevel(uint32_t level_ptr) {
    return report_ducker_value(level_ptr, 1.0f);
}
// A threshold nothing reaches, since nothing is talking.
uint32_t XAudioGetDuckerThreshold(uint32_t threshold_ptr) {
    return report_ducker_value(threshold_ptr, 0.0f);
}
uint32_t XAudioGetDuckerAttackTime(uint32_t milliseconds_ptr) {
    return report_ducker_value(milliseconds_ptr, 0.0f);
}
uint32_t XAudioGetDuckerReleaseTime(uint32_t milliseconds_ptr) {
    return report_ducker_value(milliseconds_ptr, 0.0f);
}
uint32_t XAudioGetDuckerHoldTime(uint32_t milliseconds_ptr) {
    return report_ducker_value(milliseconds_ptr, 0.0f);
}

// No process here is doing voice, so FALSE is the fact rather than a refusal.
uint32_t XamVoiceIsActiveProcess() { return 0; }

// --- marketplace and Live profile ------------------------------------------
//
// Refused, all of them, and refused the same way XamShowMarketplaceUI already
// is. There is no marketplace to show and no Live profile to read a membership
// tier or a country out of. A title told so takes its offline path; a title
// told SUCCESS with an invented tier takes the online one and then fails
// somewhere further in, where the cause is no longer visible.
uint32_t XamShowMarketplaceDownloadItemsUI(uint32_t user_index, uint32_t offer_type,
                                           uint32_t offers_ptr, uint32_t offer_count,
                                           uint32_t result_ptr, uint32_t overlapped_ptr) {
    (void)user_index; (void)offer_type; (void)offers_ptr;
    (void)offer_count; (void)result_ptr; (void)overlapped_ptr;
    return x_error::function_failed;
}

uint32_t XamMarketplaceAcquireFreeContent(uint32_t a, uint32_t b, uint32_t c,
                                          uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return x_error::function_failed;
}

uint32_t XamUserGetMembershipTierFromXUID(uint32_t xuid_low, uint32_t xuid_high,
                                          uint32_t tier_ptr) {
    (void)xuid_low; (void)xuid_high; (void)tier_ptr;
    return x_error::no_such_user;
}

uint32_t XamUserGetOnlineCountryFromXUID(uint32_t xuid_low, uint32_t xuid_high,
                                         uint32_t country_ptr) {
    (void)xuid_low; (void)xuid_high; (void)country_ptr;
    return x_error::no_such_user;
}

uint32_t XamParseGamerTileKey(uint32_t key_ptr, uint32_t a, uint32_t b, uint32_t c) {
    (void)key_ptr; (void)a; (void)b; (void)c;
    return x_error::function_failed;
}

// --- the rest of the socket surface ----------------------------------------
//
// Same answer as every other NetDll_* handler in this file, for the same
// reason: there is no socket layer here, and these six are not the exception.
uint32_t NetDll_shutdown(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

uint32_t NetDll_WSACloseEvent(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

uint32_t NetDll_WSAResetEvent(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

// "Is this socket in that set" - with no sockets, it is not in any set. Zero is
// the answer FD_ISSET gives for a socket that is not signalled, so a caller
// looping over a select() result simply finds nothing ready.
uint32_t NetDll___WSAFDIsSet(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return 0;
}

uint32_t NetDll_XNetInAddrToString(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

uint32_t NetDll_XNetTsAddrToInAddr(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    (void)a; (void)b; (void)c; (void)d; (void)e;
    return kSocketError;
}

// --- the one with no honest answer -----------------------------------------
//
// KeInsertQueueDpc returns TRUE when it queued the DPC and FALSE when the DPC
// was already queued. BOTH answers promise the routine will run, and nothing in
// this runtime drains a DPC queue - there is no mechanism here for calling back
// into guest code at all - so neither one can be kept.
//
// FALSE is returned because it is the answer that claims least: the caller is
// told this call did not put anything on a queue. And it is SAID OUT LOUD, once
// per DPC routine, because a title whose deferred work never happens fails in a
// way that looks like anything but a missing callback - see the note in
// KeInsertQueueApc above, which refuses for the same reason and where the same
// silence cost time.
//
// The arguments are still written into the DPC object in the layout
// KeInitializeDpc established, so a drain added later finds a complete one
// rather than a half-filled one.
uint32_t KeInsertQueueDpc(uint32_t dpc_ptr, uint32_t argument1, uint32_t argument2) {
    if (dpc_ptr == 0) return 0;
    guest_memory& memory = active_kernel()->memory();
    memory.write_u32(dpc_ptr + x_kdpc::argument1, argument1);
    memory.write_u32(dpc_ptr + x_kdpc::argument2, argument2);
    static std::mutex mutex;
    static std::set<uint32_t> seen;
    const uint32_t routine = memory.read_u32(dpc_ptr + x_kdpc::routine);
    bool first = false;
    {
        const std::lock_guard<std::mutex> lock(mutex);
        first = seen.insert(routine).second;
    }
    if (first)
        std::fprintf(stderr,
                     "  [kernel] KeInsertQueueDpc refused: routine %08X will "
                     "NOT run - nothing drains a DPC queue here\n",
                     routine);
    return 0;
}

// --- added for Banjo-Kazooie XBLA -----------------------------------------

uint32_t MmLockAndMapSegmentArray(uint32_t a, uint32_t b, uint32_t c,
                                  uint32_t d, uint32_t e, uint32_t f) {
    (void)a; (void)b; (void)c; (void)d; (void)e; (void)f;
    // Already mapped, and never moved. See the header: this succeeds because
    // the guarantee the caller is asking for is one this runtime gives for
    // free, not because succeeding is convenient.
    return x_status::success;
}

uint32_t MmUnlockAndUnmapSegmentArray(uint32_t a, uint32_t b) {
    (void)a; (void)b;
    return x_status::success;
}

uint32_t NtQueueApcThread(uint32_t thread_handle, uint32_t apc_routine,
                          uint32_t apc_argument1, uint32_t apc_argument2,
                          uint32_t apc_argument3) {
    (void)thread_handle; (void)apc_argument1; (void)apc_argument2;
    (void)apc_argument3;
    // Said once per routine, for the same reason KeInsertQueueDpc says it: a
    // title whose deferred work silently never happens fails somewhere a long
    // way from here, and looking like anything but a missing callback.
    static std::mutex mutex;
    static std::set<uint32_t> seen;
    bool first = false;
    {
        const std::lock_guard<std::mutex> lock(mutex);
        first = seen.insert(apc_routine).second;
    }
    if (first)
        std::fprintf(stderr,
                     "  [kernel] NtQueueApcThread refused: routine %08X will "
                     "NOT run - nothing drains an APC queue here\n",
                     apc_routine);
    // Not "no memory" and not "success": the console's own answer when a
    // thread will not take an APC, which every caller already handles.
    return x_status::unsuccessful;
}

void register_kernel_handlers(kernel_registry& registry) {
    // added for Banjo-Kazooie XBLA
    registry.implement(kernel_library::xboxkrnl, 192); // MmLockAndMapSegmentArray
    registry.implement(kernel_library::xboxkrnl, 201); // MmUnlockAndUnmapSegmentArray
    registry.implement(kernel_library::xboxkrnl, 227); // NtQueueApcThread
    // added for Geometry Wars 3: Dimensions
    registry.implement(kernel_library::xam, 978); // XamGetLanguage
    registry.implement(kernel_library::xboxkrnl, 845); // XAudioEnableDucker
    registry.implement(kernel_library::xboxkrnl, 848); // XAudioGetDuckerLevel
    registry.implement(kernel_library::xboxkrnl, 849); // XAudioGetDuckerThreshold
    registry.implement(kernel_library::xboxkrnl, 851); // XAudioGetDuckerAttackTime
    registry.implement(kernel_library::xboxkrnl, 853); // XAudioGetDuckerReleaseTime
    registry.implement(kernel_library::xboxkrnl, 855); // XAudioGetDuckerHoldTime
    registry.implement(kernel_library::xam, 1175); // XamVoiceIsActiveProcess
    registry.implement(kernel_library::xam, 743); // XamShowMarketplaceDownloadItemsUI
    registry.implement(kernel_library::xam, 1324); // XamMarketplaceAcquireFreeContent
    registry.implement(kernel_library::xam, 535); // XamUserGetMembershipTierFromXUID
    registry.implement(kernel_library::xam, 536); // XamUserGetOnlineCountryFromXUID
    registry.implement(kernel_library::xam, 778); // XamParseGamerTileKey
    registry.implement(kernel_library::xam, 5); // NetDll_shutdown
    registry.implement(kernel_library::xam, 30); // NetDll_WSACloseEvent
    registry.implement(kernel_library::xam, 32); // NetDll_WSAResetEvent
    registry.implement(kernel_library::xam, 34); // NetDll___WSAFDIsSet
    registry.implement(kernel_library::xam, 62); // NetDll_XNetInAddrToString
    registry.implement(kernel_library::xam, 59); // NetDll_XNetTsAddrToInAddr
    registry.implement(kernel_library::xboxkrnl, 123); // KeInsertQueueDpc
    // Added for Jetpac Refuelled. The reader/writer locks exclude for real;
    // the camera is present with nothing plugged into it, which is what
    // XUsbcamGetState reports. The four XUsbcam calls that would drive a
    // camera are deliberately NOT registered, because they are not
    // implemented, and a worklist that overstates what is here is worth less
    // than no worklist.
    registry.implement(kernel_library::xboxkrnl, 7);   // ExAcquireReadWriteLockExclusive
    registry.implement(kernel_library::xboxkrnl, 8);   // ExAcquireReadWriteLockShared
    registry.implement(kernel_library::xboxkrnl, 17);  // ExInitializeReadWriteLock
    registry.implement(kernel_library::xboxkrnl, 22);  // ExReleaseReadWriteLock
    registry.implement(kernel_library::xboxkrnl, 541); // XUsbcamGetState
    registry.implement(kernel_library::xboxkrnl, 546); // XUsbcamCreate
    registry.implement(kernel_library::xboxkrnl, 547); // XUsbcamDestroy
    registry.implement(kernel_library::xam, 618);      // XamContentInstall
    // Assorted kernel services.
    registry.implement(kernel_library::xboxkrnl, 16);  // ExGetXConfigSetting
    registry.implement(kernel_library::xboxkrnl, 21);  // ExRegisterTitleTerminateNotification
    registry.implement(kernel_library::xboxkrnl, 107); // KeLockL2
    registry.implement(kernel_library::xboxkrnl, 108); // KeUnlockL2
    registry.implement(kernel_library::xboxkrnl, 238); // NtQueryVirtualMemory
    registry.implement(kernel_library::xboxkrnl, 259); // ObCreateSymbolicLink
    registry.implement(kernel_library::xboxkrnl, 260); // ObDeleteSymbolicLink
    registry.implement(kernel_library::xboxkrnl, 295); // RtlFreeAnsiString
    registry.implement(kernel_library::xboxkrnl, 299); // RtlImageXexHeaderField
    registry.implement(kernel_library::xboxkrnl, 319); // RtlTimeFieldsToTime
    registry.implement(kernel_library::xboxkrnl, 320); // RtlTimeToTimeFields
    registry.implement(kernel_library::xboxkrnl, 322); // RtlUnicodeStringToAnsiString
    registry.implement(kernel_library::xboxkrnl, 405); // XexGetModuleHandle
    registry.implement(kernel_library::xboxkrnl, 406); // XexGetModuleSection
    registry.implement(kernel_library::xboxkrnl, 479); // KiApcNormalRoutineNop
    registry.implement(kernel_library::xam, 310);      // XNetLogonGetTitleID
    // Network, dashboard and audio: reported unavailable (see header).
    registry.implement(kernel_library::xam, 1); // NetDll_WSAStartup
    registry.implement(kernel_library::xam, 2); // NetDll_WSACleanup
    registry.implement(kernel_library::xam, 51); // NetDll_XNetStartup
    registry.implement(kernel_library::xam, 52); // NetDll_XNetCleanup
    registry.implement(kernel_library::xam, 73); // NetDll_XNetGetTitleXnAddr
    registry.implement(kernel_library::xam, 75); // NetDll_XNetGetEthernetLinkStatus
    registry.implement(kernel_library::xam, 53); // NetDll_XNetRandom
    registry.implement(kernel_library::xam, 27); // NetDll_WSAGetLastError
    registry.implement(kernel_library::xam, 28); // NetDll_WSASetLastError
    registry.implement(kernel_library::xam, 3); // NetDll_socket
    registry.implement(kernel_library::xam, 14); // NetDll_accept
    registry.implement(kernel_library::xam, 29); // NetDll_WSACreateEvent
    registry.implement(kernel_library::xam, 67); // NetDll_XNetDnsLookup
    registry.implement(kernel_library::xam, 68); // NetDll_XNetDnsRelease
    registry.implement(kernel_library::xam, 69); // NetDll_XNetQosListen
    registry.implement(kernel_library::xam, 70); // NetDll_XNetQosLookup
    registry.implement(kernel_library::xam, 72); // NetDll_XNetQosRelease
    registry.implement(kernel_library::xam, 55); // NetDll_XNetRegisterKey
    registry.implement(kernel_library::xam, 58); // NetDll_XNetServerToInAddr
    registry.implement(kernel_library::xam, 56); // NetDll_XNetUnregisterKey
    registry.implement(kernel_library::xam, 57); // NetDll_XNetXnAddrToInAddr
    registry.implement(kernel_library::xam, 11); // NetDll_bind
    registry.implement(kernel_library::xam, 4); // NetDll_closesocket
    registry.implement(kernel_library::xam, 12); // NetDll_connect
    registry.implement(kernel_library::xam, 9); // NetDll_getsockname
    registry.implement(kernel_library::xam, 8); // NetDll_getsockopt
    registry.implement(kernel_library::xam, 26); // NetDll_inet_addr
    registry.implement(kernel_library::xam, 6); // NetDll_ioctlsocket
    registry.implement(kernel_library::xam, 13); // NetDll_listen
    registry.implement(kernel_library::xam, 18); // NetDll_recv
    registry.implement(kernel_library::xam, 20); // NetDll_recvfrom
    registry.implement(kernel_library::xam, 15); // NetDll_select
    registry.implement(kernel_library::xam, 22); // NetDll_send
    registry.implement(kernel_library::xam, 24); // NetDll_sendto
    registry.implement(kernel_library::xam, 7); // NetDll_setsockopt
    registry.implement(kernel_library::xam, 652); // XNotifyPositionUI
    registry.implement(kernel_library::xam, 709); // XamShowAchievementsUI
    registry.implement(kernel_library::xam, 742); // XamShowCustomPlayerListUI
    registry.implement(kernel_library::xam, 715); // XamShowDeviceSelectorUI
    registry.implement(kernel_library::xam, 729); // XamShowDirtyDiscErrorUI
    registry.implement(kernel_library::xam, 718); // XamShowFriendRequestUI
    registry.implement(kernel_library::xam, 703); // XamShowFriendsUI
    registry.implement(kernel_library::xam, 717); // XamShowGameInviteUI
    registry.implement(kernel_library::xam, 725); // XamShowGamerCardUIForXUID
    registry.implement(kernel_library::xam, 705); // XamShowKeyboardUI
    registry.implement(kernel_library::xam, 711); // XamShowMarketplaceUI
    registry.implement(kernel_library::xam, 732); // XamShowMessageBoxUIEx
    registry.implement(kernel_library::xam, 716); // XamShowMessageComposeUI
    registry.implement(kernel_library::xam, 704); // XamShowMessagesUI
    registry.implement(kernel_library::xam, 710); // XamShowPlayerReviewUI
    registry.implement(kernel_library::xam, 712); // XamShowPlayersUI
    registry.implement(kernel_library::xam, 706); // XamShowQuickChatUI
    registry.implement(kernel_library::xam, 700); // XamShowSigninUI
    registry.implement(kernel_library::xam, 531); // XamUserAreUsersFriends
    registry.implement(kernel_library::xam, 530); // XamUserCheckPrivilege
    registry.implement(kernel_library::xam, 750); // XamUserCreateAchievementEnumerator
    registry.implement(kernel_library::xam, 759); // XamUserCreateStatsEnumerator
    registry.implement(kernel_library::xam, 526); // XamUserGetName
    registry.implement(kernel_library::xam, 551); // XamUserGetSigninInfo
    registry.implement(kernel_library::xam, 537); // XamUserReadProfileSettings
    registry.implement(kernel_library::xam, 538); // XamUserWriteProfileSettings
    registry.implement(kernel_library::xam, 554); // XamUserReadProfileSettingsEx
    registry.implement(kernel_library::xam, 752); // XamWriteGamerTile
    registry.implement(kernel_library::xam, 783); // XamVoiceClose
    registry.implement(kernel_library::xam, 780); // XamVoiceCreate
    registry.implement(kernel_library::xam, 782); // XamVoiceSubmitPacket
    registry.implement(kernel_library::xam, 781); // XamVoiceHeadsetPresent
    registry.implement(kernel_library::xam, 790); // XamSessionCreateHandle
    registry.implement(kernel_library::xam, 791); // XamSessionRefObjByHandle
    registry.implement(kernel_library::xam, 602); // XamContentClose
    registry.implement(kernel_library::xam, 604); // XamContentCreateEnumerator
    registry.implement(kernel_library::xam, 600); // XamContentCreate
    registry.implement(kernel_library::xam, 601); // XamContentCreateEx
    registry.implement(kernel_library::xam, 608); // XamContentSetThumbnail
    registry.implement(kernel_library::xam, 603); // XamContentDelete
    registry.implement(kernel_library::xam, 606); // XamContentGetDeviceData
    registry.implement(kernel_library::xam, 607); // XamContentGetDeviceName
    registry.implement(kernel_library::xam, 610); // XamContentGetCreator
    registry.implement(kernel_library::xam, 613); // XamContentGetDeviceState
    registry.implement(kernel_library::xam, 590); // XamCreateEnumeratorHandle
    registry.implement(kernel_library::xam, 592); // XamEnumerate
    registry.implement(kernel_library::xam, 591); // XamGetPrivateEnumStructureFromHandle
    registry.implement(kernel_library::xam, 504); // XMsgCancelIORequest
    registry.implement(kernel_library::xam, 500); // XMsgInProcessCall
    registry.implement(kernel_library::xam, 503); // XMsgStartIORequest
    registry.implement(kernel_library::xam, 508); // XMsgStartIORequestEx
    registry.implement(kernel_library::xam, 501); // XMsgCompleteIORequest
    registry.implement(kernel_library::xam, 507); // XamGetOverlappedResult
    registry.implement(kernel_library::xam, 402); // XamInputSetState
    registry.implement(kernel_library::xam, 420); // XamLoaderLaunchTitle
    registry.implement(kernel_library::xboxkrnl, 499); // XAudioRegisterRenderDriverClient
    registry.implement(kernel_library::xboxkrnl, 500); // XAudioUnregisterRenderDriverClient
    registry.implement(kernel_library::xboxkrnl, 501); // XAudioSubmitRenderDriverFrame
    registry.implement(kernel_library::xboxkrnl, 504); // XAudioGetVoiceCategoryVolume
    registry.implement(kernel_library::xboxkrnl, 503); // XAudioGetVoiceCategoryVolumeChangeMask
    registry.implement(kernel_library::xboxkrnl, 511); // XAudioGetSpeakerConfig
    registry.implement(kernel_library::xboxkrnl, 548); // XMACreateContext
    registry.implement(kernel_library::xboxkrnl, 550); // XMAReleaseContext
    registry.implement(kernel_library::xam, 977); // XGetVideoMode
    registry.implement(kernel_library::xboxkrnl, 13);  // ExCreateThread
    registry.implement(kernel_library::xboxkrnl, 25);  // ExTerminateThread
    registry.implement(kernel_library::xboxkrnl, 175); // KeWaitForMultipleObjects
    registry.implement(kernel_library::xboxkrnl, 254); // NtWaitForMultipleObjectsEx
    registry.implement(kernel_library::xboxkrnl, 212); // NtCreateMutant
    registry.implement(kernel_library::xboxkrnl, 242); // NtReleaseMutant
    registry.implement(kernel_library::xboxkrnl, 213); // NtCreateSemaphore
    registry.implement(kernel_library::xboxkrnl, 243); // NtReleaseSemaphore
    registry.implement(kernel_library::xboxkrnl, 251); // NtSignalAndWaitForSingleObjectEx
    registry.implement(kernel_library::xboxkrnl, 215); // NtCreateTimer
    registry.implement(kernel_library::xboxkrnl, 250); // NtSetTimerEx
    registry.implement(kernel_library::xboxkrnl, 205); // NtCancelTimer
    registry.implement(kernel_library::xboxkrnl, 146); // KeResumeThread
    registry.implement(kernel_library::xboxkrnl, 245); // NtResumeThread
    registry.implement(kernel_library::xboxkrnl, 252); // NtSuspendThread
    // xam.xex: launch data, system identity, allocator, input, profiles.
    registry.implement(kernel_library::xam, 400); // XamInputGetCapabilities
    registry.implement(kernel_library::xam, 401); // XamInputGetState
    registry.implement(kernel_library::xam, 408); // XamInputGetKeystrokeEx
    registry.implement(kernel_library::xam, 423); // XamLoaderGetLaunchDataSize
    registry.implement(kernel_library::xam, 424); // XamLoaderGetLaunchData
    registry.implement(kernel_library::xam, 425); // XamLoaderTerminateTitle
    registry.implement(kernel_library::xam, 490); // XamAlloc
    registry.implement(kernel_library::xam, 492); // XamFree
    registry.implement(kernel_library::xam, 522); // XamUserGetXUID
    registry.implement(kernel_library::xam, 528); // XamUserGetSigninState
    registry.implement(kernel_library::xam, 614); // XamContentGetLicenseMask
    registry.implement(kernel_library::xam, 640); // XamGetExecutionId
    registry.implement(kernel_library::xam, 642); // XamGetSystemVersion
    registry.implement(kernel_library::xam, 650); // XamNotifyCreateListener
    registry.implement(kernel_library::xam, 651); // XNotifyGetNext
    registry.implement(kernel_library::xam, 971); // XGetAVPack
    registry.implement(kernel_library::xam, 972); // XGetGameRegion
    registry.implement(kernel_library::xam, 973); // XGetLanguage
    registry.implement(kernel_library::xboxkrnl, 307); // RtlMultiByteToUnicodeN
    registry.implement(kernel_library::xboxkrnl, 323); // RtlUnicodeToMultiByteN
    registry.implement(kernel_library::xboxkrnl, 417); // XexUnloadImage
    registry.implement(kernel_library::xboxkrnl, 309); // RtlNtStatusToDosError
    registry.implement(kernel_library::xboxkrnl, 407); // XexGetProcedureAddress
    registry.implement(kernel_library::xboxkrnl, 409); // XexLoadImage
    registry.implement(kernel_library::xboxkrnl, 404); // XexCheckExecutablePrivilege
    // Threads: local storage, system time and the wait primitives.
    registry.implement(kernel_library::xboxkrnl, 90);  // KeDelayExecutionThread
    registry.implement(kernel_library::xboxkrnl, 132); // KeQuerySystemTime
    registry.implement(kernel_library::xboxkrnl, 151); // KeSetAffinityThread
    registry.implement(kernel_library::xboxkrnl, 153); // KeSetBasePriorityThread
    registry.implement(kernel_library::xboxkrnl, 176); // KeWaitForSingleObject
    registry.implement(kernel_library::xboxkrnl, 253); // NtWaitForSingleObjectEx
    registry.implement(kernel_library::xboxkrnl, 338); // KeTlsAlloc
    registry.implement(kernel_library::xboxkrnl, 339); // KeTlsFree
    registry.implement(kernel_library::xboxkrnl, 340); // KeTlsGetValue
    registry.implement(kernel_library::xboxkrnl, 341); // KeTlsSetValue
    // (ordinal -> name is checked against the export table in the tests).
    // Video / GPU bridge: the ring buffer, the interrupt callback and the
    // frame boundary the title drives the GPU through.
    registry.implement(kernel_library::xboxkrnl, 433); // VdCallGraphicsNotificationRoutines
    registry.implement(kernel_library::xboxkrnl, 436); // VdEnableDisableClockGating
    registry.implement(kernel_library::xboxkrnl, 438); // VdEnableRingBufferRPtrWriteBack
    registry.implement(kernel_library::xboxkrnl, 441); // VdGetCurrentDisplayGamma
    registry.implement(kernel_library::xboxkrnl, 442); // VdGetCurrentDisplayInformation
    registry.implement(kernel_library::xboxkrnl, 445); // VdGetSystemCommandBuffer
    registry.implement(kernel_library::xboxkrnl, 450); // VdInitializeEngines
    registry.implement(kernel_library::xboxkrnl, 451); // VdInitializeRingBuffer
    registry.implement(kernel_library::xboxkrnl, 453); // VdInitializeScalerCommandBuffer
    registry.implement(kernel_library::xboxkrnl, 454); // VdIsHSIOTrainingSucceeded
    registry.implement(kernel_library::xboxkrnl, 455); // VdPersistDisplay
    registry.implement(kernel_library::xboxkrnl, 457); // VdQueryVideoFlags
    registry.implement(kernel_library::xboxkrnl, 458); // VdQueryVideoMode
    registry.implement(kernel_library::xboxkrnl, 467); // VdSetDisplayMode
    registry.implement(kernel_library::xboxkrnl, 469); // VdSetGraphicsInterruptCallback
    registry.implement(kernel_library::xboxkrnl, 473); // VdSetSystemCommandBufferGpuIdentifierAddress
    registry.implement(kernel_library::xboxkrnl, 476); // VdShutdownEngines
    registry.implement(kernel_library::xboxkrnl, 603); // VdSwap
    registry.implement(kernel_library::xboxkrnl, 617); // VdRetrainEDRAM
    registry.implement(kernel_library::xboxkrnl, 618); // VdRetrainEDRAMWorker
    registry.implement(kernel_library::xboxkrnl, 3);   // DbgPrint
    registry.implement(kernel_library::xboxkrnl, 9);   // ExAllocatePool
    registry.implement(kernel_library::xboxkrnl, 10);  // ExAllocatePoolWithTag
    registry.implement(kernel_library::xboxkrnl, 11);  // ExAllocatePoolTypeWithTag
    registry.implement(kernel_library::xboxkrnl, 15);  // ExFreePool
    registry.implement(kernel_library::xboxkrnl, 131); // KeQueryPerformanceFrequency
    registry.implement(kernel_library::xboxkrnl, 204); // NtAllocateVirtualMemory
    registry.implement(kernel_library::xboxkrnl, 220); // NtFreeVirtualMemory
    registry.implement(kernel_library::xboxkrnl, 283); // RtlCompareMemoryUlong
    // Synchronization primitives.
    registry.implement(kernel_library::xboxkrnl, 43);  // InterlockedFlushSList
    registry.implement(kernel_library::xboxkrnl, 44);  // InterlockedPopEntrySList
    registry.implement(kernel_library::xboxkrnl, 45);  // InterlockedPushEntrySList
    registry.implement(kernel_library::xboxkrnl, 77);  // KeAcquireSpinLockAtRaisedIrql
    registry.implement(kernel_library::xboxkrnl, 95);  // KeEnterCriticalRegion
    registry.implement(kernel_library::xboxkrnl, 125); // KeLeaveCriticalRegion
    registry.implement(kernel_library::xboxkrnl, 133); // KeRaiseIrqlToDpcLevel
    registry.implement(kernel_library::xboxkrnl, 137); // KeReleaseSpinLockFromRaisedIrql
    registry.implement(kernel_library::xboxkrnl, 177); // KfAcquireSpinLock
    registry.implement(kernel_library::xboxkrnl, 178); // KfRaiseIrql
    registry.implement(kernel_library::xboxkrnl, 179); // KfLowerIrql
    registry.implement(kernel_library::xboxkrnl, 180); // KfReleaseSpinLock
    registry.implement(kernel_library::xboxkrnl, 293); // RtlEnterCriticalSection
    registry.implement(kernel_library::xboxkrnl, 302); // RtlInitializeCriticalSection
    registry.implement(kernel_library::xboxkrnl, 303); // RtlInitializeCriticalSectionAndSpinCount
    registry.implement(kernel_library::xboxkrnl, 304); // RtlLeaveCriticalSection
    registry.implement(kernel_library::xboxkrnl, 321); // RtlTryEnterCriticalSection
    // RTL utilities, process/debug/firmware leaf calls.
    registry.implement(kernel_library::xboxkrnl, 1);   // DbgBreakPoint
    registry.implement(kernel_library::xboxkrnl, 33);  // FscSetCacheElementCount
    registry.implement(kernel_library::xboxkrnl, 40);  // HalReturnToFirmware
    registry.implement(kernel_library::xboxkrnl, 82);  // KeBugCheck
    registry.implement(kernel_library::xboxkrnl, 83);  // KeBugCheckEx
    registry.implement(kernel_library::xboxkrnl, 93);  // KeEnableFpuExceptions
    registry.implement(kernel_library::xboxkrnl, 102); // KeGetCurrentProcessType
    registry.implement(kernel_library::xboxkrnl, 294); // RtlFillMemoryUlong
    registry.implement(kernel_library::xboxkrnl, 300); // RtlInitAnsiString
    registry.implement(kernel_library::xboxkrnl, 301); // RtlInitUnicodeString
    // Dispatcher objects (events, semaphores) and handle lifetime.
    registry.implement(kernel_library::xboxkrnl, 112); // KeInitializeEvent
    registry.implement(kernel_library::xboxkrnl, 116); // KeInitializeSemaphore
    registry.implement(kernel_library::xboxkrnl, 127); // KePulseEvent
    registry.implement(kernel_library::xboxkrnl, 136); // KeReleaseSemaphore
    registry.implement(kernel_library::xboxkrnl, 143); // KeResetEvent
    registry.implement(kernel_library::xboxkrnl, 157); // KeSetEvent
    registry.implement(kernel_library::xboxkrnl, 206); // NtClearEvent
    registry.implement(kernel_library::xboxkrnl, 207); // NtClose
    registry.implement(kernel_library::xboxkrnl, 209); // NtCreateEvent
    registry.implement(kernel_library::xboxkrnl, 218); // NtDuplicateObject
    registry.implement(kernel_library::xboxkrnl, 226); // NtPulseEvent
    registry.implement(kernel_library::xboxkrnl, 246); // NtSetEvent
    registry.implement(kernel_library::xboxkrnl, 261); // ObDereferenceObject
    registry.implement(kernel_library::xboxkrnl, 272); // ObReferenceObjectByHandle
    // Physical memory.
    registry.implement(kernel_library::xboxkrnl, 186); // MmAllocatePhysicalMemoryEx
    registry.implement(kernel_library::xboxkrnl, 189); // MmFreePhysicalMemory
    registry.implement(kernel_library::xboxkrnl, 190); // MmGetPhysicalAddress
    registry.implement(kernel_library::xboxkrnl, 196); // MmQueryAddressProtect
    registry.implement(kernel_library::xboxkrnl, 198); // MmQueryStatistics
    registry.implement(kernel_library::xboxkrnl, 199); // MmSetAddressProtect
    // Files.
    // XMA audio hardware contexts.
    registry.implement(kernel_library::xboxkrnl, 549); // XMAInitializeContext
    registry.implement(kernel_library::xboxkrnl, 551); // XMAEnableContext
    registry.implement(kernel_library::xboxkrnl, 552); // XMADisableContext
    registry.implement(kernel_library::xboxkrnl, 553); // XMAGetOutputBufferWriteOffset
    registry.implement(kernel_library::xboxkrnl, 554); // XMASetOutputBufferReadOffset
    registry.implement(kernel_library::xboxkrnl, 555); // XMAGetOutputBufferReadOffset
    registry.implement(kernel_library::xboxkrnl, 556); // XMASetOutputBufferValid
    registry.implement(kernel_library::xboxkrnl, 557); // XMAIsOutputBufferValid
    registry.implement(kernel_library::xboxkrnl, 558); // XMASetInputBuffer0Valid
    registry.implement(kernel_library::xboxkrnl, 559); // XMAIsInputBuffer0Valid
    registry.implement(kernel_library::xboxkrnl, 560); // XMASetInputBuffer1Valid
    registry.implement(kernel_library::xboxkrnl, 561); // XMAIsInputBuffer1Valid
    registry.implement(kernel_library::xboxkrnl, 562); // XMASetInputBuffer0
    registry.implement(kernel_library::xboxkrnl, 563); // XMASetInputBuffer1
    registry.implement(kernel_library::xboxkrnl, 564); // XMAGetPacketMetadata
    registry.implement(kernel_library::xboxkrnl, 565); // XMABlockWhileInUse
    registry.implement(kernel_library::xboxkrnl, 566); // XMASetLoopData
    registry.implement(kernel_library::xboxkrnl, 567); // XMASetInputBufferReadOffset
    registry.implement(kernel_library::xboxkrnl, 568); // XMAGetInputBufferReadOffset
    registry.implement(kernel_library::xboxkrnl, 444); // VdGetGraphicsAsicID
    registry.implement(kernel_library::xboxkrnl, 616); // VdInitializeEDRAM
    registry.implement(kernel_library::xboxkrnl, 174); // KeTryToAcquireSpinLockAtRaisedIrql
    // Structured exception handling and the printf family.
    registry.implement(kernel_library::xboxkrnl, 310); // RtlRaiseException
    registry.implement(kernel_library::xboxkrnl, 327); // RtlUnwind
    registry.implement(kernel_library::xboxkrnl, 421); // __C_specific_handler
    registry.implement(kernel_library::xboxkrnl, 315); // sprintf
    registry.implement(kernel_library::xboxkrnl, 333); // _vsnprintf
    registry.implement(kernel_library::xboxkrnl, 334); // vsprintf
    // The wide family, which lives in ppc_bridge.cpp with the rest of the
    // variadic calls. They were written and never declared here, so a title
    // importing one was told at startup that it was MISSING - and this
    // document's own rule is that a missing import is a crash, which sends the
    // next person hunting a fault that cannot happen. Ridge Racer 6 imports
    // vswprintf and calls it; the run says "1 missing" and then counts two
    // successful calls to it.
    registry.implement(kernel_library::xboxkrnl, 314); // _snprintf
    registry.implement(kernel_library::xboxkrnl, 317); // _snwprintf
    registry.implement(kernel_library::xboxkrnl, 318); // swprintf
    registry.implement(kernel_library::xboxkrnl, 337); // vswprintf
    registry.implement(kernel_library::xboxkrnl, 210); // NtCreateFile
    registry.implement(kernel_library::xboxkrnl, 219); // NtFlushBuffersFile
    registry.implement(kernel_library::xboxkrnl, 223); // NtOpenFile
    registry.implement(kernel_library::xboxkrnl, 228); // NtQueryDirectoryFile
    registry.implement(kernel_library::xboxkrnl, 231); // NtQueryFullAttributesFile
    registry.implement(kernel_library::xboxkrnl, 232); // NtQueryInformationFile
    registry.implement(kernel_library::xboxkrnl, 239); // NtQueryVolumeInformationFile
    registry.implement(kernel_library::xboxkrnl, 240); // NtReadFile
    registry.implement(kernel_library::xboxkrnl, 241); // NtReadFileScatter
    registry.implement(kernel_library::xboxkrnl, 247); // NtSetInformationFile
    registry.implement(kernel_library::xboxkrnl, 255); // NtWriteFile

    // Added for Hydro Thunder Hurricane. Registering here is what makes the
    // startup report tell the truth: the report is derived from this list, not
    // from what the bridge actually resolves, so an implemented handler that is
    // missing from here is announced as missing on every run - a false negative
    // that sends the next person looking for a handler that already exists.
    registry.implement(kernel_library::xboxkrnl, 109); // KeInitializeApc
    registry.implement(kernel_library::xboxkrnl, 111); // KeInitializeDpc
    registry.implement(kernel_library::xboxkrnl, 122); // KeInsertQueueApc
    registry.implement(kernel_library::xboxkrnl, 129); // KeQueryBasePriorityThread
    registry.implement(kernel_library::xboxkrnl, 194); // MmMapIoSpace
    registry.implement(kernel_library::xboxkrnl, 197); // MmQueryAllocationSize
    registry.implement(kernel_library::xboxkrnl, 271); // ObReferenceObject
    registry.implement(kernel_library::xboxkrnl, 281); // RtlCaptureContext
    registry.implement(kernel_library::xboxkrnl, 689); // MicDeviceRequest
    registry.implement(kernel_library::xboxkrnl, 737); // RmcDeviceRequest
    registry.implement(kernel_library::xam, 16);       // NetDll_WSAGetOverlappedResult
    registry.implement(kernel_library::xam, 21);       // NetDll_WSARecvFrom
    registry.implement(kernel_library::xam, 25);       // NetDll_WSASendTo
    registry.implement(kernel_library::xam, 60);       // NetDll_XNetInAddrToXnAddr
    registry.implement(kernel_library::xam, 63);       // NetDll_XNetUnregisterInAddr
    registry.implement(kernel_library::xam, 65);       // NetDll_XNetConnect
    registry.implement(kernel_library::xam, 66);       // NetDll_XNetGetConnectStatus
    registry.implement(kernel_library::xam, 71);       // NetDll_XNetQosServiceLookup
    registry.implement(kernel_library::xam, 78);       // NetDll_XNetGetOpt
    registry.implement(kernel_library::xam, 81);       // NetDll_XNetReplaceKey
    registry.implement(kernel_library::xam, 422);      // XamLoaderSetLaunchData
    registry.implement(kernel_library::xam, 520);      // XamUserGetDeviceContext
    registry.implement(kernel_library::xam, 714);      // XamShowMessageBoxUI
}

} // namespace whitty_xenon
