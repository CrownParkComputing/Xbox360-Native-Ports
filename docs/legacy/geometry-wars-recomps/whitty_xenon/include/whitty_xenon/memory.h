// memory.h - Xbox 360 guest address space for the lean Xenon runtime.
//
// The guest is a 32-bit big-endian PowerPC; the host is 64-bit little-endian.
// Guest memory is one contiguous host reservation, so a guest address maps to a
// host pointer by simple base addition. Every typed accessor byte-swaps, which
// keeps the swap in exactly one place instead of smeared through recompiled
// code and kernel stubs.
#pragma once

#include <cstddef>
#include <cstdint>
#include <mutex>
#include <string>

namespace whitty_xenon {

// Xbox 360 address-space layout. The console maps the same physical memory
// several times with different page sizes; a title's virtual allocations and
// its image live in the low half, and the "physical" aliases sit above 0xA0000000.
inline constexpr uint32_t kVirtualBase = 0x00000000u;   // 4 KiB pages
inline constexpr uint32_t kTitleHeapBase = 0x40000000u; // 64 KiB pages, title heap
inline constexpr uint32_t kImageBase = 0x80000000u;     // XEX image is loaded here
inline constexpr uint32_t kPhysicalBase = 0xA0000000u;  // physical aliases

// The console maps the SAME physical memory three times, differing in the page
// size the MMU uses for each window - 64 KiB at 0xA0000000, 16 MiB at
// 0xC0000000, 4 KiB at 0xE0000000 - and, for the 4 KiB window only, in where in
// physical memory the window starts (see kSmallPageWindowOffset below). A title
// takes a physical address and adds whichever base suits the pages it wants,
// so a buffer allocated through one window is routinely read back through
// another - Geometry Wars hands out 0xA0000000 pointers and reads them at
// 0xC0000000. Modelling only one window leaves the others unmapped, which
// surfaces as a load from a perfectly valid buffer faulting.
inline constexpr uint32_t kPhysicalAliasSize = 0x20000000u; // 512 MiB
inline constexpr uint32_t kPhysicalAliasBases[3] = {0xA0000000u, 0xC0000000u,
                                                    0xE0000000u};
inline constexpr uint32_t kPhysicalOffsetMask = kPhysicalAliasSize - 1u;

// Is this address one of the three views of physical memory?
inline bool is_physical_alias(uint32_t address) noexcept {
    const uint32_t window = address >> 29;
    return window == 5 || window == 6 || window == 7;
}

// The 4 KiB window is NOT a plain alias of the other two: the console starts it
// 0x1000 into physical memory, so 0xE0000000 is physical 0x1000 and not physical
// 0. Xenia maps it that way too - memory.cc's view table sends 0xA0000000 and
// 0xC0000000 to physical offset 0 and 0xE0000000 to offset 0x1000, and
// PhysicalHeap::GetPhysicalAddress adds 0x1000 back for any heap based at or
// above 0xE0000000.
//
// This is not a detail only the kernel sees. Direct3D computes physical
// addresses itself rather than calling MmGetPhysicalAddress for every buffer,
// and it applies this same 0x1000 when the pointer it holds is a 4 KiB-window
// one. Model the window as a plain alias and the title's physical address and
// ours disagree by exactly one page - which is invisible until something reads
// through one and writes through the other. Geometry Wars' ring read-pointer
// write-back is exactly that: the title asked for progress to be reported at
// physical 0x1E03C and polled its buffer at 0xE001D03C, so a write-back that
// "succeeded" landed one page away from the only address anyone was reading.
inline constexpr uint32_t kSmallPageWindow = 0xE0000000u;
inline constexpr uint32_t kSmallPageWindowOffset = 0x1000u;

// Where a window's first byte sits within physical memory. Takes any address in
// the window, or the window base itself.
inline constexpr uint32_t physical_window_offset(uint32_t address) noexcept {
    return (address & ~kPhysicalOffsetMask) == kSmallPageWindow
               ? kSmallPageWindowOffset
               : 0u;
}

// The physical address a pointer in one of the three windows refers to. This is
// the offset into physical memory, so it is also what the GPU is given and what
// kPhysicalBase + it names.
inline constexpr uint32_t physical_address_of(uint32_t address) noexcept {
    return (address & kPhysicalOffsetMask) + physical_window_offset(address);
}

// The pointer in `window` that names physical address `physical`. The inverse of
// physical_address_of, and exact - every physical pointer the kernel hands out
// or is handed back is one of these three views of one offset.
inline constexpr uint32_t physical_in_window(uint32_t physical,
                                             uint32_t window) noexcept {
    return (window & ~kPhysicalOffsetMask) |
           ((physical - physical_window_offset(window)) & kPhysicalOffsetMask);
}

// Whether `physical` has a pointer in `window` at all. The 4 KiB window begins
// 0x1000 into physical memory, so physical memory's first page is reachable
// through the other two windows only.
inline constexpr bool physical_has_window(uint32_t physical,
                                          uint32_t window) noexcept {
    return physical >= physical_window_offset(window) &&
           physical < kPhysicalAliasSize;
}

// The guest address space is 4 GiB. Reserving it all up front costs nothing
// until pages are committed, and it makes guest->host translation a single add
// with no range table.
inline constexpr uint64_t kAddressSpaceSize = 0x100000000ull;

// Commit granularity. The console's small-page size; large-page regions are
// simply committed as a run of these.
inline constexpr uint32_t kPageSize = 0x1000u;

// The HOST's page size, which is a different thing and is not always 4 KiB.
//
// Worth having as a public function rather than a detail of memory.cpp because
// it is the first thing a bring-up log on a new machine should print: an arm64
// Android device with a 16 KiB-page kernel cannot express the console's
// physical-window layout at all (see the comment at initialize()), so knowing
// the number turns an unexplained startup failure into a one-line answer.
std::size_t host_page_size() noexcept;

class guest_memory {
public:
    guest_memory() = default;
    ~guest_memory();

    guest_memory(const guest_memory&) = delete;
    guest_memory& operator=(const guest_memory&) = delete;

    // Reserve the address space. No guest page is readable until commit().
    bool initialize(std::string& error);
    void shutdown();
    bool initialized() const noexcept { return m_base != nullptr; }

    // Make [address, address+size) readable/writable. Rounded out to whole
    // pages, and idempotent so callers can commit overlapping regions freely.
    bool commit(uint32_t address, uint32_t size, std::string& error);
    bool committed(uint32_t address, uint32_t size) const noexcept;

    // Guest -> host translation. Returns nullptr when the range is not
    // committed, so a bad guest pointer surfaces here instead of as a segfault
    // inside recompiled code.
    void* host(uint32_t address, uint32_t size = 1) noexcept;
    const void* host(uint32_t address, uint32_t size = 1) const noexcept;

    // Unchecked translation for hot paths that have already validated.
    uint8_t* host_unchecked(uint32_t address) noexcept {
        return m_base + address;
    }

    // Typed access. Big-endian on the wire, host-endian in the returned value.
    // Unaligned addresses are allowed: PowerPC permits them and titles use them.
    uint8_t read_u8(uint32_t address) const noexcept;
    uint16_t read_u16(uint32_t address) const noexcept;
    uint32_t read_u32(uint32_t address) const noexcept;
    uint64_t read_u64(uint32_t address) const noexcept;
    float read_f32(uint32_t address) const noexcept;
    double read_f64(uint32_t address) const noexcept;

    void write_u8(uint32_t address, uint8_t value) noexcept;
    void write_u16(uint32_t address, uint16_t value) noexcept;
    void write_u32(uint32_t address, uint32_t value) noexcept;
    void write_u64(uint32_t address, uint64_t value) noexcept;
    void write_f32(uint32_t address, float value) noexcept;
    void write_f64(uint32_t address, double value) noexcept;

    // Bulk copies in guest byte order (no swapping - callers move opaque bytes).
    bool read_block(uint32_t address, void* destination, uint32_t size) const noexcept;
    bool write_block(uint32_t address, const void* source, uint32_t size) noexcept;
    bool zero_block(uint32_t address, uint32_t size) noexcept;

    // Total committed bytes; useful for tests and for reporting.
    uint64_t committed_bytes() const noexcept;

private:
    // mprotect over a guest byte range, rounded out to whatever this host's
    // page size demands. See the definition for what the rounding costs.
    bool protect_committed(uint64_t offset, uint64_t length) noexcept;

    uint8_t* m_base{nullptr};
    // Backing for the physical region. It has to be a shared object rather
    // than part of the anonymous reservation, because the same pages are
    // mapped at all three alias bases and a write through one must be visible
    // through the others.
    int m_physical_fd{-1};
    // One bit per page. A commit bitmap is enough because the address space is
    // flat: 4 GiB / 4 KiB = 1M pages = 128 KiB of bitmap.
    //
    // Guarded, because guest threads are real host threads and several of them
    // allocate at once - the title runs its own loader, audio and render
    // threads. Only the bitmap and the mapping call need it; the typed
    // accessors above are plain reads and writes of guest memory, which the
    // guest is responsible for synchronising exactly as it would on hardware.
    mutable std::mutex m_commit_mutex;
    std::string m_commit_bits;
};

} // namespace whitty_xenon
