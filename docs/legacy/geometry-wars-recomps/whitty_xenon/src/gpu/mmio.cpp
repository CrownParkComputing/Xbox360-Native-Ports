#include "whitty_xenon/gpu/mmio.h"

namespace whitty_xenon::gpu {
namespace {

// Screen geometry the display registers report: 1280x720, matching what
// VdQueryVideoMode tells the title.
constexpr uint32_t kViewportSize = 0x050002D0; // (720-1)<<16 style packing
constexpr uint32_t kVCounter = 0x000002D0;

} // namespace

uint32_t mmio_registers::read(uint32_t address) noexcept {
    const uint32_t index = (address & 0xFFFFu) / 4;
    switch (index) {
        // Fixed hardware answers. A title reads these to size EDRAM and the
        // display, and polls the interrupt status for vblank - reporting a
        // vblank that never arrives would hang a frame loop, so it always
        // reads as raised.
        case mmio_reg::rb_edram_timing: return 0x08100748;
        case mmio_reg::rb_bc_control: return 0x0000200E;
        case mmio_reg::d1mode_v_counter: return kVCounter;
        case mmio_reg::interrupt_status: return 1; // vblank
        case mmio_reg::d1mode_viewport_size: return kViewportSize;
        default: break;
    }
    return index < kRegisterCount ? m_values[index] : 0;
}

void mmio_registers::write(uint32_t address, uint32_t value) noexcept {
    const uint32_t index = (address & 0xFFFFu) / 4;
    if (index < kRegisterCount) m_values[index] = value;

    if (index == mmio_reg::cp_rb_wptr) {
        // The title has queued PM4 commands up to `value` in the ring buffer
        // and is about to spin waiting for the read pointer to catch up, so
        // the ring is consumed here and now rather than handed to anything
        // else to get to later.
        m_write_pointer = value;
        ++m_wptr_updates;
        if (m_write_pointer_handler) m_write_pointer_handler(value);
    }
}

void install_mmio_registers(mmio_registers* registers) noexcept {
    install_mmio_device(kMmioRegisterBase, registers);
}

} // namespace whitty_xenon::gpu
