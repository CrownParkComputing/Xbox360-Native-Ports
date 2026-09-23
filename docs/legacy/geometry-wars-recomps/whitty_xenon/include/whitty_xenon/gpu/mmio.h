// gpu/mmio.h - the memory-mapped Xenos register window.
//
// The Xenos exposes its register file to the CPU at guest address 0x7FC80000,
// one 64 KiB window of the hardware region `mmio.h` describes. A title drives
// the GPU by storing to it directly, not through a kernel call: the register
// index is `(address & 0xFFFF) / 4`. The one that matters most is CP_RB_WPTR
// (0x01C5) - writing it says "I have queued PM4 commands up to this point in
// the ring buffer, go run them", which is exactly the seam into the command
// processor.
//
// Register semantics follow Xenia, which is the behavioural oracle: the few
// registers with fixed hardware answers (EDRAM timing, display size, the
// vblank status bit) are hard-answered, and everything else reads back
// whatever was last written.
#pragma once

#include "whitty_xenon/mmio.h"

#include <cstdint>
#include <functional>

namespace whitty_xenon::gpu {

// The register window: 0x7FC80000 through 0x7FC8FFFF.
inline constexpr uint32_t kMmioRegisterBase = 0x7FC80000u;
inline constexpr uint32_t kMmioRegisterSize = 0x00010000u;

inline bool is_mmio_address(uint32_t address) noexcept {
    return (address & kMmioWindowMask) == kMmioRegisterBase;
}

// Registers a title reads or writes during bring-up. Indices are the Xenos
// register numbers, i.e. (address & 0xFFFF) / 4.
namespace mmio_reg {
inline constexpr uint32_t cp_rb_wptr = 0x01C5;   // ring buffer write pointer
inline constexpr uint32_t rb_edram_timing = 0x0F00;
inline constexpr uint32_t rb_bc_control = 0x0F01;
inline constexpr uint32_t d1mode_v_counter = 0x194C;
inline constexpr uint32_t interrupt_status = 0x1951;
inline constexpr uint32_t d1mode_viewport_size = 0x1961;
inline constexpr uint32_t d1grph_primary_surface = 0x1844;
} // namespace mmio_reg

// The GPU-side register file behind the window, plus a record of what the
// title has asked the command processor to do. Kept deliberately small: this
// is the CPU-visible face of the GPU, not the GPU itself.
class mmio_registers final : public mmio_device {
public:
    static constexpr uint32_t kRegisterCount = 0x4000;

    uint32_t read(uint32_t address) noexcept override;
    void write(uint32_t address, uint32_t value) noexcept override;

    // How many times the title has advanced the ring buffer write pointer,
    // and its latest value. The command processor consumes from here.
    uint64_t write_pointer_updates() const noexcept { return m_wptr_updates; }
    uint32_t write_pointer() const noexcept { return m_write_pointer; }

    // What to run when the title advances the write pointer. Called from the
    // guest thread that wrote the register, before the store returns, because
    // the title goes straight into a spin waiting for the read pointer to
    // move - deferring the work to some other thread would leave it spinning
    // until that thread happened to get around to it.
    void set_write_pointer_handler(std::function<void(uint32_t)> handler) {
        m_write_pointer_handler = std::move(handler);
    }

    uint32_t value(uint32_t index) const noexcept {
        return index < kRegisterCount ? m_values[index] : 0;
    }

private:
    uint32_t m_values[kRegisterCount]{};
    uint64_t m_wptr_updates{0};
    uint32_t m_write_pointer{0};
    std::function<void(uint32_t)> m_write_pointer_handler;
};

// Puts the register file behind the Xenos window on the MMIO bus. Ownership
// stays with the caller; pass nullptr to remove it.
void install_mmio_registers(mmio_registers* registers) noexcept;

} // namespace whitty_xenon::gpu
