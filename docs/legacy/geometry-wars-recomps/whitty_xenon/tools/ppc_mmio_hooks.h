// ppc_mmio_hooks.h - route the recompiled code's hardware accesses.
//
// The console reserves 0x7F000000..0x7FFFFFFF for memory-mapped hardware - the
// Xenos register file at 0x7FC80000, the XMA audio decoder at 0x7FEA0000 - and
// a title drives both by loading and storing there directly, with no kernel
// call in between. `include/whitty_xenon/mmio.h` owns the device side; this
// header is the CPU side, force-included ahead of the generated ppc_context.h
// (which supplies the plain-memory fallbacks) so these definitions win.
//
// It has to override the *plain* load and store macros, not just the
// `PPC_MM_*` family XenonRecomp provides for exactly this purpose, because
// that family is not enough on its own: the recompiler emits `PPC_MM_STORE_*`
// only for a store immediately followed by `eieio`, and never emits
// `PPC_MM_LOAD_*` at all. A title's register reads are ordinary `lwz`/`lwbrx`,
// so without this they read unmapped memory and fault. (Alien Breed's audio
// startup reads 0x7FEA1800 with `lwbrx` a few thousand instructions in.)
//
// Only the 32-bit forms are redirected: that is the only width the register
// files behind these windows are defined in, and the only width a title uses
// to reach them. An address outside the hardware region falls through to the
// ordinary single-instruction path, so the cost on everything else is one
// compare-and-branch that predicts perfectly. The `PPC_MM_*` family then picks
// these up through ppc_context.h's own `#ifndef` fallbacks, so both spellings
// end up at the same place.
#pragma once

#include <cstdint>

extern "C" {
uint32_t whitty_xenon_mmio_read32(uint32_t address);
void whitty_xenon_mmio_write32(uint32_t address, uint32_t value);
// Called when an indirect call targets an address with no recompiled
// function. See the PPC_CALL_INDIRECT_FUNC override below.
void whitty_xenon_report_missing_function(uint32_t address);
}

// Indirect calls (vtables, callbacks, computed branches) resolve through
// XenonRecomp's function table. An address the recompiler never emitted a
// function for reads back as a null pointer, and the default macro calls it
// straight away - so a gap in the recompiler's function discovery shows up as
// a jump to address zero with no clue which target was missing.
//
// This override reports the guest address instead and keeps running, which
// turns "crashed at 0" into a list of exactly which functions need declaring
// (XenonRecomp's config takes explicit `[[main.functions]]` entries for
// precisely this). Skipping the call leaves the guest's expectations violated,
// so execution afterwards is only useful for collecting further reports.
// The range check comes FIRST and is not optional. PPC_LOOKUP_FUNC indexes the
// table by `(address - PPC_CODE_BASE) * 2`, so an address outside the title's
// code reads a slot far outside the table - which faults inside the lookup
// itself, before there is any pointer to null-check. A wild function pointer
// (an uninitialised vtable slot, a corrupted callback) then presents as a
// segfault in whichever function happened to make the call, with the actual
// bad address nowhere in sight. Checking first turns that into a report
// naming the address, which is the one piece of information needed to find
// where it came from.
#define WHITTY_IS_GUEST_CODE(x)                                                \
    ((uint64_t)(uint32_t)(x) - PPC_CODE_BASE < PPC_CODE_SIZE)

#define PPC_CALL_INDIRECT_FUNC(x)                                              \
    do {                                                                       \
        const uint32_t whitty_target = (x);                                    \
        if (!WHITTY_IS_GUEST_CODE(whitty_target)) {                            \
            whitty_xenon_report_missing_function(whitty_target);               \
            break;                                                             \
        }                                                                      \
        PPCFunc* const whitty_fn = PPC_LOOKUP_FUNC(base, whitty_target);       \
        if (whitty_fn == nullptr) {                                            \
            whitty_xenon_report_missing_function(whitty_target);               \
        } else {                                                               \
            whitty_fn(ctx, base);                                              \
        }                                                                      \
    } while (0)

// The hardware region, 0x7F000000..0x7FFFFFFF. Kept identical to
// whitty_xenon::is_mmio_address; a test pins the two together, since this
// header cannot include ours.
#define WHITTY_MMIO_IS_HARDWARE(x) (((x) & 0xFF000000u) == 0x7F000000u)

// Written as inline functions rather than macros so the address expression is
// evaluated exactly once, as the macros they replace do.
static inline uint32_t whitty_ppc_load_u32(const uint8_t* whitty_base,
                                           uint32_t whitty_address) {
    if (__builtin_expect(WHITTY_MMIO_IS_HARDWARE(whitty_address), 0))
        return whitty_xenon_mmio_read32(whitty_address);
    return __builtin_bswap32(
        *(const volatile uint32_t*)(whitty_base + whitty_address));
}

static inline void whitty_ppc_store_u32(uint8_t* whitty_base,
                                        uint32_t whitty_address,
                                        uint32_t whitty_value) {
    if (__builtin_expect(WHITTY_MMIO_IS_HARDWARE(whitty_address), 0)) {
        whitty_xenon_mmio_write32(whitty_address, whitty_value);
        return;
    }
    *(volatile uint32_t*)(whitty_base + whitty_address) =
        __builtin_bswap32(whitty_value);
}

// `base` is the guest memory base every PPC_FUNC takes as its second argument,
// which is what the macros these replace already relied on.
#define PPC_LOAD_U32(x) whitty_ppc_load_u32(base, (x))
#define PPC_STORE_U32(x, y) whitty_ppc_store_u32(base, (x), (y))
