// mmio.h - the memory-mapped hardware region of the guest address space.
//
// The console reserves 0x7F000000..0x7FFFFFFF for hardware registers rather
// than RAM: its title heap stops one byte short of it (0x40000000 for
// 0x3F000000 bytes), which is why nothing a title allocates can ever land
// here. Two windows inside it matter to us - the Xenos register file at
// 0x7FC80000 and the XMA audio decoder at 0x7FEA0000 - and a title drives both
// by storing to them directly, with no kernel call in between.
//
// Devices are registered per 64 KiB window, which is the granularity the
// hardware itself uses and the granularity Xenia registers its MMIO ranges at.
// Lookup is a plain array index so the dispatch costs nothing measurable.
//
// The catch that makes this file necessary: XenonRecomp only emits its
// redirectable `PPC_MM_*` macros for *stores* that are followed by an `eieio`,
// and never for loads at all - so a guest `lwbrx` from a hardware register
// comes out as an ordinary `PPC_LOAD_U32`. `tools/ppc_mmio_hooks.h` therefore
// overrides the plain 32-bit load and store macros with a region test that
// routes hardware addresses here. Every other address keeps its original
// single-instruction path, so the cost is one compare-and-branch that predicts
// perfectly.
#pragma once

#include <cstdint>

namespace whitty_xenon {

// The region, and the window granularity devices are registered at.
inline constexpr uint32_t kMmioBase = 0x7F000000u;
inline constexpr uint32_t kMmioRegionMask = 0xFF000000u;
inline constexpr uint32_t kMmioWindowMask = 0xFFFF0000u;
inline constexpr uint32_t kMmioWindowCount = 256; // 16 MiB / 64 KiB

// Does this guest address name hardware rather than memory? Kept identical to
// the test `ppc_mmio_hooks.h` compiles into the recompiled code; the header
// cannot include this one (it is force-included ahead of everything), so the
// two are pinned together by a test instead.
inline bool is_mmio_address(uint32_t address) noexcept {
    return (address & kMmioRegionMask) == kMmioBase;
}

// One 64 KiB window of memory-mapped hardware. Reads and writes are 32-bit:
// that is the only width a title uses to reach a register, and the only width
// the register files behind these windows are defined in.
class mmio_device {
public:
    virtual ~mmio_device() = default;

    // Both take the full guest address, not a register index - the register
    // numbering `(address & 0xFFFF) / 4` belongs to the device, not the bus.
    virtual uint32_t read(uint32_t address) noexcept = 0;
    virtual void write(uint32_t address, uint32_t value) noexcept = 0;
};

// Puts a device behind the 64 KiB window containing `window_base`. Ownership
// stays with the caller; pass nullptr to remove one. Installed once before any
// guest code runs, so this is not synchronised.
void install_mmio_device(uint32_t window_base, mmio_device* device) noexcept;

// The device serving `address`, or nullptr if that window is not modelled.
mmio_device* mmio_device_for(uint32_t address) noexcept;

// Forgets every device. Tests call this so one test's window cannot leak into
// the next.
void clear_mmio_devices() noexcept;

// Accesses that reached a window with no device behind it. A non-zero count
// after a run names hardware the title uses that we do not model yet, and is
// worth reporting - reads returned zero and writes went nowhere.
uint64_t mmio_unclaimed_accesses() noexcept;
void reset_mmio_unclaimed_accesses() noexcept;
void note_unclaimed_mmio_access() noexcept;

// Prints every address an indirect call reached with no recompiled function
// behind it. Each such address is one XenonRecomp failed to discover as a
// function and needs declaring in its config. (Not MMIO, but it shares the
// hooks header the recompiled code is built against.)
void report_missing_function_summary();

} // namespace whitty_xenon

// The C entry points the recompiled code's overridden load/store macros call.
// Declared extern "C" so the hooks header can name them without including any
// C++ headers of ours.
extern "C" {
uint32_t whitty_xenon_mmio_read32(uint32_t address);
void whitty_xenon_mmio_write32(uint32_t address, uint32_t value);
void whitty_xenon_report_missing_function(uint32_t address);
}
