#include "whitty_xenon/heap.h"

#include <algorithm>

namespace whitty_xenon {
namespace {

bool is_power_of_two(uint32_t value) noexcept {
    return value != 0 && (value & (value - 1)) == 0;
}

uint32_t align_up(uint32_t value, uint32_t alignment) noexcept {
    return (value + alignment - 1) & ~(alignment - 1);
}

} // namespace

bool guest_heap::initialize(guest_memory& memory, uint32_t base, uint32_t size,
                            std::string& error) {
    if (!memory.initialized()) {
        error = "guest memory is not initialized";
        return false;
    }
    if (size == 0) {
        error = "heap size is zero";
        return false;
    }
    if (base == 0) {
        // Address 0 must stay invalid so a null guest pointer is never a
        // legitimate allocation.
        error = "heap cannot start at address zero";
        return false;
    }
    if (static_cast<uint64_t>(base) + size > kAddressSpaceSize) {
        error = "heap does not fit in the guest address space";
        return false;
    }

    m_memory = &memory;
    m_base = base;
    m_size = size;
    m_free.clear();
    m_used.clear();
    m_free.push_back(range{base, size});
    return true;
}

void guest_heap::shutdown() noexcept {
    m_memory = nullptr;
    m_base = 0;
    m_size = 0;
    m_free.clear();
    m_used.clear();
}

uint32_t guest_heap::allocate(uint32_t size, uint32_t alignment) {
    const std::lock_guard<std::mutex> lock(m_mutex);

    if (!m_memory || size == 0) return 0;
    if (!is_power_of_two(alignment)) return 0;
    if (alignment < kDefaultHeapAlignment) alignment = kDefaultHeapAlignment;

    for (std::size_t index = 0; index < m_free.size(); ++index) {
        const range block = m_free[index];
        const uint32_t start = align_up(block.address, alignment);
        // Alignment can push the usable start past the end of this block.
        if (start < block.address) continue; // overflow
        const uint64_t needed =
            static_cast<uint64_t>(start - block.address) + size;
        if (needed > block.size) continue;

        // Commit only the pages this allocation actually spans.
        std::string error;
        if (!m_memory->commit(start, size, error)) return 0;

        // Split the block: keep any leading gap the alignment created, and any
        // trailing remainder.
        m_free.erase(m_free.begin() + static_cast<std::ptrdiff_t>(index));
        const uint32_t lead = start - block.address;
        const uint32_t tail = block.size - lead - size;
        std::size_t insert_at = index;
        if (tail > 0) {
            m_free.insert(m_free.begin() + static_cast<std::ptrdiff_t>(insert_at),
                          range{start + size, tail});
        }
        if (lead > 0) {
            m_free.insert(m_free.begin() + static_cast<std::ptrdiff_t>(insert_at),
                          range{block.address, lead});
        }

        // Keep the used list sorted so lookups and frees are predictable.
        const range allocation{start, size};
        const auto position = std::lower_bound(
            m_used.begin(), m_used.end(), allocation,
            [](const range& left, const range& right) {
                return left.address < right.address;
            });
        m_used.insert(position, allocation);
        return start;
    }
    return 0;
}

bool guest_heap::free(uint32_t address) noexcept {
    const std::lock_guard<std::mutex> lock(m_mutex);

    if (!m_memory || address == 0) return false;
    const auto position = std::lower_bound(
        m_used.begin(), m_used.end(), range{address, 0},
        [](const range& left, const range& right) {
            return left.address < right.address;
        });
    if (position == m_used.end() || position->address != address) return false;

    const range released = *position;
    m_used.erase(position);

    // Insert into the free list in address order, then merge with whichever
    // neighbours it now touches. Without coalescing a long run of alloc/free
    // pairs would fragment the heap into unusable slivers.
    const auto slot = std::lower_bound(
        m_free.begin(), m_free.end(), released,
        [](const range& left, const range& right) {
            return left.address < right.address;
        });
    const auto inserted = m_free.insert(slot, released);
    const std::size_t index =
        static_cast<std::size_t>(inserted - m_free.begin());

    // Merge with the following block first so the index stays valid.
    if (index + 1 < m_free.size()) {
        range& current = m_free[index];
        const range& next = m_free[index + 1];
        if (current.address + current.size == next.address) {
            current.size += next.size;
            m_free.erase(m_free.begin() +
                         static_cast<std::ptrdiff_t>(index + 1));
        }
    }
    if (index > 0) {
        range& previous = m_free[index - 1];
        const range& current = m_free[index];
        if (previous.address + previous.size == current.address) {
            previous.size += current.size;
            m_free.erase(m_free.begin() + static_cast<std::ptrdiff_t>(index));
        }
    }
    return true;
}

uint32_t guest_heap::size_of(uint32_t address) const noexcept {
    const std::lock_guard<std::mutex> lock(m_mutex);

    const auto position = std::lower_bound(
        m_used.begin(), m_used.end(), range{address, 0},
        [](const range& left, const range& right) {
            return left.address < right.address;
        });
    if (position == m_used.end() || position->address != address) return 0;
    return position->size;
}

uint32_t guest_heap::allocated_bytes() const noexcept {
    const std::lock_guard<std::mutex> lock(m_mutex);

    uint32_t total = 0;
    for (const range& entry : m_used) total += entry.size;
    return total;
}

std::size_t guest_heap::live_allocations() const noexcept {
    const std::lock_guard<std::mutex> lock(m_mutex);

    return m_used.size();
}

} // namespace whitty_xenon
