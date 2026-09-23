// heap.h - the guest's dynamic memory.
//
// A title allocates through the kernel (ExAllocatePool, NtAllocateVirtualMemory
// and friends), and every one of those needs somewhere to allocate from. This
// is that somewhere: a first-fit allocator with coalescing over a region of the
// guest address space, handing back guest addresses.
//
// Pages are committed as they are handed out rather than up front, because a
// title's heap region is far larger than what it actually touches and
// committing it all would cost real host memory for nothing.
#pragma once

#include "whitty_xenon/memory.h"

#include <cstddef>
#include <cstdint>
#include <mutex>
#include <string>
#include <vector>

namespace whitty_xenon {

// The console hands out 4 KiB pages in the low region and 64 KiB pages in the
// title heap; allocations are aligned to at least this.
inline constexpr uint32_t kDefaultHeapAlignment = 16;

class guest_heap {
public:
    // Claims [base, base + size) of the address space. Nothing is committed
    // yet.
    bool initialize(guest_memory& memory, uint32_t base, uint32_t size,
                    std::string& error);
    void shutdown() noexcept;
    bool initialized() const noexcept { return m_memory != nullptr; }

    // Returns a guest address, or 0 on failure - 0 is never a valid allocation
    // because it is indistinguishable from a null guest pointer.
    // `alignment` must be a power of two.
    uint32_t allocate(uint32_t size, uint32_t alignment = kDefaultHeapAlignment);

    // Frees a previously returned address. Returns false for an address this
    // heap did not hand out, which is a bug worth surfacing rather than
    // ignoring.
    bool free(uint32_t address) noexcept;

    // Size of a live allocation, or 0 if the address is not one.
    uint32_t size_of(uint32_t address) const noexcept;

    uint32_t base() const noexcept { return m_base; }
    uint32_t size() const noexcept { return m_size; }
    uint32_t allocated_bytes() const noexcept;
    uint32_t free_bytes() const noexcept { return m_size - allocated_bytes(); }
    std::size_t live_allocations() const noexcept;
    // Number of free ranges; a rising count means fragmentation.
    std::size_t free_ranges() const noexcept {
        const std::lock_guard<std::mutex> lock(m_mutex);
        return m_free.size();
    }

private:
    // Every guest thread allocates from the same heap - the title runs its own
    // loader, audio and render threads and they all call into the kernel's
    // allocators. The console's heap is internally synchronised for the same
    // reason, so the free lists are guarded here rather than leaving each
    // caller to remember.
    mutable std::mutex m_mutex;

    struct range {
        uint32_t address{};
        uint32_t size{};
    };

    // Sorted by address so neighbours can be coalesced on free.
    std::vector<range> m_free;
    std::vector<range> m_used;

    guest_memory* m_memory{nullptr};
    uint32_t m_base{};
    uint32_t m_size{};
};

} // namespace whitty_xenon
