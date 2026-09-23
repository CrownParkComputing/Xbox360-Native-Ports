#include "whitty_xenon/apu/xma.h"

#include "whitty_xenon/kernel_handlers.h"
#include "whitty_xenon/kernel_state.h"

namespace whitty_xenon::apu {
namespace {

// The register file stores natural values; the guest reaches it with
// byte-reversed loads and stores, so both directions swap. See the header.
uint32_t swap32(uint32_t value) noexcept {
    return static_cast<uint32_t>(__builtin_bswap32(value));
}

bool in_group(uint32_t index, uint32_t first, uint32_t last) noexcept {
    return index >= first && index <= last;
}

} // namespace

xma_registers::xma_registers() noexcept {
    // The hardware always has a context queued up to process next. Xenia seeds
    // this the same way; leaving it at zero makes CurrentContextIndex read
    // back a context the title has not been handed.
    m_values[xma_reg::next_context_index] = 1;
}

uint32_t xma_registers::read(uint32_t address) noexcept {
    const uint32_t index = (address & 0xFFFFu) / 4;
    if (index >= kRegisterCount) return 0;

    if (index == xma_reg::current_context_index) {
        // The hardware rotates through contexts. A title that watches this
        // register to see the decoder making progress would spin forever on a
        // constant, so it advances on every read - the same answer Xenia
        // settled on for the same reason.
        uint32_t& current = m_values[xma_reg::current_context_index];
        uint32_t& next = m_values[xma_reg::next_context_index];
        current = next;
        next = (next + 1) % kXmaContextCount;
    }
    return swap32(m_values[index]);
}

void xma_registers::write(uint32_t address, uint32_t value) noexcept {
    const uint32_t index = (address & 0xFFFFu) / 4;
    if (index >= kRegisterCount) return;

    const uint32_t natural = swap32(value);
    m_values[index] = natural;

    // Each of the three groups is ten registers of 32 bits, one bit per
    // hardware context, so the context a bit names is
    // (register - group_first) * 32 + bit.
    if (in_group(index, xma_reg::context_kick_first, xma_reg::context_kick_last)) {
        if (natural != 0) ++m_kicks;
        apply_context_bits((index - xma_reg::context_kick_first) * 32, natural,
                           true);
    } else if (in_group(index, xma_reg::context_lock_first,
                        xma_reg::context_lock_last)) {
        // A lock request asks the hardware to stop touching the context so the
        // title can read or rewrite it - so the context stops being live.
        apply_context_bits((index - xma_reg::context_lock_first) * 32, natural,
                           false);
    } else if (in_group(index, xma_reg::context_clear_first,
                        xma_reg::context_clear_last)) {
        apply_context_bits((index - xma_reg::context_clear_first) * 32, natural,
                           false);
    }
}

void xma_registers::apply_context_bits(uint32_t first_context, uint32_t bits,
                                       bool enabled) noexcept {
    for (uint32_t bit = 0; bits != 0 && bit < 32; ++bit, bits >>= 1) {
        if ((bits & 1u) == 0) continue;
        const uint32_t context = first_context + bit;
        if (context >= kXmaContextCount) continue;
        const uint32_t word = context / 32;
        const uint32_t mask = 1u << (context % 32);
        if (enabled)
            m_enabled[word] |= mask;
        else
            m_enabled[word] &= ~mask;
    }
}

void xma_registers::set_context_array_address(uint32_t physical_address) noexcept {
    m_values[xma_reg::context_array_address] = physical_address;
}

uint32_t xma_registers::context_array_address() const noexcept {
    return m_values[xma_reg::context_array_address];
}

bool xma_registers::context_enabled(uint32_t context) const noexcept {
    if (context >= kXmaContextCount) return false;
    return (m_enabled[context / 32] & (1u << (context % 32))) != 0;
}

uint32_t xma_registers::enabled_context_count() const noexcept {
    uint32_t count = 0;
    for (uint32_t word : m_enabled)
        count += static_cast<uint32_t>(__builtin_popcount(word));
    return count;
}

bool initialize_xma_contexts(kernel_state& kernel, xma_registers& registers) {
    if (!kernel.has_physical_heap()) return false;
    const uint32_t address = kernel.physical_heap().allocate(
        kXmaContextArraySize, kXmaContextArrayAlignment);
    if (address == 0) return false;
    if (!kernel.memory().zero_block(address, kXmaContextArraySize)) return false;
    registers.set_context_array_address(MmGetPhysicalAddress(address));
    return true;
}

namespace {
xma_registers* g_registers = nullptr;
} // namespace

void install_xma_registers(xma_registers* registers) noexcept {
    install_mmio_device(kXmaRegisterBase, registers);
    g_registers = registers;
}

xma_registers* active_xma_registers() noexcept { return g_registers; }

uint32_t xma_registers::context_address(uint32_t index) const noexcept {
    const uint32_t physical = context_array_address();
    if (physical == 0 || index >= kXmaContextCount) return 0;
    return kPhysicalBase + physical + index * kXmaContextSize;
}

uint32_t xma_registers::context_index(uint32_t guest_address) const noexcept {
    const uint32_t base = context_address(0);
    if (base == 0 || guest_address < base) return kNoContext;
    const uint32_t offset = guest_address - base;
    if (offset % kXmaContextSize != 0) return kNoContext;
    const uint32_t index = offset / kXmaContextSize;
    return index < kXmaContextCount ? index : kNoContext;
}

uint32_t xma_registers::allocate_context() noexcept {
    for (uint32_t index = 0; index < kXmaContextCount; ++index) {
        const uint32_t word = index / 32;
        const uint32_t mask = 1u << (index % 32);
        if ((m_allocated[word] & mask) != 0) continue;
        const uint32_t address = context_address(index);
        if (address == 0) return 0; // no array: nothing to hand out
        m_allocated[word] |= mask;
        return address;
    }
    return 0; // all 320 in use
}

bool xma_registers::release_context(uint32_t guest_address) noexcept {
    const uint32_t index = context_index(guest_address);
    if (index == kNoContext) return false;
    m_allocated[index / 32] &= ~(1u << (index % 32));
    m_enabled[index / 32] &= ~(1u << (index % 32));
    return true;
}

void xma_registers::kick_context(uint32_t index) noexcept {
    if (index >= kXmaContextCount) return;
    const uint32_t reg = xma_reg::context_kick_first + (index >> 5);
    m_values[reg] |= 1u << (index & 0x1F);
    m_enabled[index / 32] |= 1u << (index % 32);
    ++m_kicks;
}

void xma_registers::clear_context(uint32_t index) noexcept {
    if (index >= kXmaContextCount) return;
    const uint32_t reg = xma_reg::context_clear_first + (index >> 5);
    m_values[reg] |= 1u << (index & 0x1F);
    m_enabled[index / 32] &= ~(1u << (index % 32));
}

bool xma_registers::context_allocated(uint32_t index) const noexcept {
    if (index >= kXmaContextCount) return false;
    return (m_allocated[index / 32] & (1u << (index % 32))) != 0;
}

uint32_t xma_registers::allocated_context_count() const noexcept {
    uint32_t count = 0;
    for (uint32_t word : m_allocated)
        count += static_cast<uint32_t>(__builtin_popcount(word));
    return count;
}

} // namespace whitty_xenon::apu
