// whitty_arm64_x86_prelude.h - what XenonRecomp's output needs on aarch64.
//
// The recompiled CPU names raw SSE/AVX intrinsics directly - measured over all
// 513,238 lines of Geometry Wars' generated code: 52 distinct `_mm_*` names and
// ZERO `simde_*` ones, which is why the generated ppc_simde_shim.h is two lines
// long. So the aarch64 problem is not "restore SIMDe under the simde_ names",
// it is "make _mm_* resolve to something", and that is exactly what SIMDe's
// SIMDE_ENABLE_NATIVE_ALIASES mode is for.
//
// Six things it does NOT give, each found by compiling and reading the error.
// Every one of them is a REPLACEMENT for something the x86 build got for free,
// and two of them - the FPCR pair and __rdtsc - are reimplementations rather
// than renames. Those two are the ones to reach for first if a physics or
// timing value goes strange on a device.
//
// The four sibling headers beside this one (x86intrin.h and friends) exist
// because <xmmintrin.h> does not exist on aarch64 at all; they go on the
// include path AHEAD of the sysroot so an include of one lands here.
#pragma once
#define SIMDE_ENABLE_NATIVE_ALIASES
#include <simde/x86/avx.h>
#include <simde/x86/sse4.1.h>
#include <simde/x86/sse4.2.h>

// (1) MXCSR rounding-mode constants. SIMDe exposes these only as
//     SIMDE_MM_ROUND_* enumerators and does not alias them.
#ifndef _MM_ROUND_NEAREST
#define _MM_ROUND_NEAREST     SIMDE_MM_ROUND_NEAREST
#define _MM_ROUND_DOWN        SIMDE_MM_ROUND_DOWN
#define _MM_ROUND_UP          SIMDE_MM_ROUND_UP
#define _MM_ROUND_TOWARD_ZERO SIMDE_MM_ROUND_TOWARD_ZERO
#endif

// (2) Denormals-are-zero. An SSE3 (pmmintrin.h) constant; SIMDe has no
//     equivalent at all, and its _MM_SET_FLUSH_ZERO_MODE is `(void) a;`
//     off x86 -- i.e. flush-to-zero is silently NOT implemented.
#ifndef _MM_DENORMALS_ZERO_MASK
#define _MM_DENORMALS_ZERO_MASK 0x0040
#endif

// (3) getcsr/setcsr over the real aarch64 FPCR. SIMDe's versions go through
//     fesetround() and drop flush-to-zero entirely. The guest's FPSCR needs
//     both, so this is a genuine reimplementation, not a rename.
#if defined(__aarch64__)
#undef _mm_getcsr
#undef _mm_setcsr
static inline unsigned int whitty_fpcr_read(void) {
    unsigned long v; __asm__ __volatile__("mrs %0, fpcr" : "=r"(v)); return (unsigned int)v;
}
static inline void whitty_fpcr_write(unsigned int v) {
    unsigned long x = v; __asm__ __volatile__("msr fpcr, %0" :: "r"(x));
}
// FPCR: RMode = bits[23:22] (00 RN, 01 RP, 10 RM, 11 RZ), FZ = bit 24.
// MXCSR: RC = bits[14:13] (00 RN, 01 RD, 10 RU, 11 RZ), FZ = bit 15, DAZ = bit 6.
static inline unsigned int _mm_getcsr(void) {
    unsigned int f = whitty_fpcr_read();
    static const unsigned int rc[4] = { 0x0000u, 0x4000u, 0x2000u, 0x6000u };
    unsigned int csr = rc[(f >> 22) & 3u];
    if (f & (1u << 24)) csr |= 0x8000u | 0x0040u;
    return csr;
}
static inline void _mm_setcsr(unsigned int csr) {
    static const unsigned int rm[4] = { 0u, 2u, 1u, 3u };   // RN, RD->RM, RU->RP, RZ
    unsigned int f = whitty_fpcr_read();
    f &= ~((3u << 22) | (1u << 24));
    f |= rm[(csr >> 13) & 3u] << 22;
    if (csr & (0x8000u | 0x0040u)) f |= (1u << 24);
    whitty_fpcr_write(f);
}
#endif

// (4) SIMDe 0.8.2 aliases every _MM_FROUND_* except NO_EXC. Upstream gap.
#ifndef _MM_FROUND_NO_EXC
#define _MM_FROUND_NO_EXC SIMDE_MM_FROUND_NO_EXC
#endif

// (5) `mftb` is emitted as __rdtsc(). aarch64 equivalent is the virtual counter.
//     NOT a rename: CNTVCT_EL0 ticks at CNTFRQ_EL0 (19.2 MHz on Qualcomm,
//     24 MHz elsewhere), but the Xbox 360 timebase - and the answer
//     KeQueryPerformanceFrequency gives - is 50 MHz. Guest code spins on
//     mftb deadlines expressed in 50 MHz ticks (Geometry Wars 2 does this at
//     loc_820A1F38); a raw CNTVCT makes every such wait last 50/19.2 = 2.6x
//     too long, which presents as "about half speed" on Android while the
//     same code on x86 (TSC ~3-4 GHz, waits expire instantly) runs full
//     speed. Scale the counter to the guest's 50 MHz timebase so the two
//     agree. CNTFRQ is read once; v*50e6 stays inside 64 bits for ~500
//     years of uptime.
#if defined(__aarch64__)
static inline unsigned long long __rdtsc(void) {
    unsigned long long v;
    static unsigned long long freq = 0;
    __asm__ __volatile__("mrs %0, cntvct_el0" : "=r"(v));
    if (__builtin_expect(freq == 0, 0))
        __asm__ __volatile__("mrs %0, cntfrq_el0" : "=r"(freq));
    return v * 50000000ull / freq;
}
#endif
