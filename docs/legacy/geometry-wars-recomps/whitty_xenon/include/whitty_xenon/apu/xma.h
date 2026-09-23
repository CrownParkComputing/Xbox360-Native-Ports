// apu/xma.h - the memory-mapped XMA audio decoder register window.
//
// The 360 decodes XMA in hardware. The decoder exposes a register file at
// guest address 0x7FEA0000 (one window of the region `mmio.h` describes), and
// behind it an array of 320 64-byte "hardware contexts" living in physical
// memory - one per voice the hardware can decode. A title finds that array by
// reading register 0x0600, then kicks a context by setting its bit in the
// 0x0650 group; the hardware decodes and the title reads the results straight
// out of the context.
//
// Alien Breed's audio startup reads 0x0600 within its first few thousand guest
// instructions, so this window has to answer before anything else can happen -
// there is no kernel import in the path to stub.
//
// ENDIANNESS. Titles reach these registers with `lwbrx`/`stwbrx` - byte-
// reversed loads and stores - not the `lwz`/`stw` they use on the Xenos. The
// register file therefore stores natural values and swaps on the way in and
// out, so the title's own reversal cancels it and lands on the natural value.
// That is exactly what Xenia's XmaDecoder::ReadRegister/WriteRegister do, and
// the reason those two look byte-swapped where GraphicsSystem's do not.
#pragma once

#include "whitty_xenon/mmio.h"

#include <cstdint>

namespace whitty_xenon {
class kernel_state;
}

namespace whitty_xenon::apu {

// The register window: 0x7FEA0000 through 0x7FEAFFFF.
inline constexpr uint32_t kXmaRegisterBase = 0x7FEA0000u;

// The hardware context array. Sizes are the console's, as Xenia records them.
inline constexpr uint32_t kXmaContextCount = 320;
inline constexpr uint32_t kXmaContextSize = 64; // sizeof(XMA_CONTEXT_DATA)
inline constexpr uint32_t kXmaContextArraySize = kXmaContextCount * kXmaContextSize;
inline constexpr uint32_t kXmaContextArrayAlignment = 256;

// Register indices, i.e. (address & 0xFFFF) / 4. The named ones are the whole
// of what is understood; everything from 0x0600 to 0x06FF is XMA's.
namespace xma_reg {
inline constexpr uint32_t context_array_address = 0x0600;
inline constexpr uint32_t current_context_index = 0x0606;
inline constexpr uint32_t next_context_index = 0x0607;
// Ten registers each, one bit per context: 10 * 32 = 320 contexts.
inline constexpr uint32_t context_kick_first = 0x0650;
inline constexpr uint32_t context_kick_last = 0x0659;
inline constexpr uint32_t context_lock_first = 0x0690;
inline constexpr uint32_t context_lock_last = 0x0699;
inline constexpr uint32_t context_clear_first = 0x06A0;
inline constexpr uint32_t context_clear_last = 0x06A9;
} // namespace xma_reg

class xma_registers final : public mmio_device {
public:
    static constexpr uint32_t kRegisterCount = 0x4000;

    xma_registers() noexcept;

    uint32_t read(uint32_t address) noexcept override;
    void write(uint32_t address, uint32_t value) noexcept override;

    // Where the hardware context array lives, as a *physical* address - that
    // is what the register holds and what the title expects to read back.
    void set_context_array_address(uint32_t physical_address) noexcept;
    uint32_t context_array_address() const noexcept;

    // --- the hardware context array ---------------------------------------
    // A title asks the kernel for a context, fills it in, and hands it back by
    // address; the hardware knows it by its index in the array. These keep the
    // two views in step. Addresses in and out are ordinary guest addresses -
    // the physical form only ever appears inside the context itself, where the
    // hardware reads it.
    uint32_t allocate_context() noexcept;
    bool release_context(uint32_t guest_address) noexcept;
    bool context_allocated(uint32_t index) const noexcept;
    uint32_t allocated_context_count() const noexcept;
    // Guest address of a context by index, or 0 if the array is not set up.
    uint32_t context_address(uint32_t index) const noexcept;
    // Index of the context at a guest address, or kNoContext.
    static constexpr uint32_t kNoContext = 0xFFFFFFFFu;
    uint32_t context_index(uint32_t guest_address) const noexcept;

    // Starts or stops a context, exactly as writing its bit into the kick or
    // clear register group would. The XMA* kernel calls reach the hardware
    // this way rather than by faking a guest store, so the register file and
    // the live-context bitmap stay in step whichever route is taken.
    void kick_context(uint32_t index) noexcept;
    void clear_context(uint32_t index) noexcept;

    // Which contexts the title has kicked and not yet cleared. There is no
    // decoder behind them yet; this is what a decoder would consume, and what
    // a test can assert the register decode against.
    bool context_enabled(uint32_t context) const noexcept;
    uint32_t enabled_context_count() const noexcept;
    uint64_t kick_count() const noexcept { return m_kicks; }

    uint32_t value(uint32_t index) const noexcept {
        return index < kRegisterCount ? m_values[index] : 0;
    }

private:
    // Sets or clears one bit per set bit of `bits`, for the context group
    // starting at `first_context`.
    void apply_context_bits(uint32_t first_context, uint32_t bits,
                            bool enabled) noexcept;

    uint32_t m_values[kRegisterCount]{};
    uint32_t m_enabled[(kXmaContextCount + 31) / 32]{};
    uint32_t m_allocated[(kXmaContextCount + 31) / 32]{};
    uint64_t m_kicks{0};
};

// Allocates the hardware context array in physical memory, zeroes it, and
// points the ContextArrayAddress register at its physical address - the state
// the console's audio hardware is already in when a title starts. Needs the
// kernel's physical heap; returns false if there is none or it cannot serve
// the allocation.
bool initialize_xma_contexts(kernel_state& kernel, xma_registers& registers);

// Puts the register file behind the XMA window on the MMIO bus. Ownership
// stays with the caller; pass nullptr to remove it.
void install_xma_registers(xma_registers* registers) noexcept;

// The installed register file, or nullptr. The XMA* kernel calls reach the
// hardware through this, the same way the kernel handlers reach memory through
// active_kernel().
xma_registers* active_xma_registers() noexcept;

} // namespace whitty_xenon::apu
