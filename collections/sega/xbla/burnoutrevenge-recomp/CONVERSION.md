# Burnout Revenge - conversion notes

Fresh conversion on 2026-09-16 from `Burnout.Revenge.USA.X360` with
ReXGlue 0.10 (`~/rexglue-vmx`, branch rru-fixes). 15,047 PowerPC functions in
89 translation units.

## Done in this conversion

- **Boots and plays.** setjmp/longjmp declared in the manifest (0x8259F6C0 /
  0x8259FA00) so a longjmp unwinds instead of returning into stale registers.
- **`non_volatile_as_local` turned off.** With the codegen default on, every
  frame renders as green/magenta stripes; off, pixel-perfect. First title known
  to be broken by that option.
- **Blue UI fixed at the source.** Logo, dialog boxes and the intro letterbox
  were blue because the SDK's `vpkuhus`/`vpkuwus` packed in place and the
  title packs its UI colours with `vpkuhus v13,v13,v13`. Fixed in the SDK
  codegen with regression tests; every port that regenerates gets it. The
  `texture_swizzle_override` band-aid from the first attempt was removed.
- **Soundtrack.** The EA Trax play through the 360's XMP title-playlist API,
  which the SDK accepted and never played. The SDK now has a native player
  (ASF + WMA) mixed into the output; the game shuffles its 41 tracks itself.
- **Presentation.** Strict FIFO (the VRR panel flickered under immediate
  present), page-state clears on and hot pages off after residual flicker.
- **Native kernel: 28 of the 118 imports it actually calls (24%).** Time and
  console facts, RTL helpers, TLS, spinlocks and IRQL, critical regions,
  futex critical sections, XAM constants - `src/native_kernel.cpp`. Events,
  threads, files, memory and networking still go through ReXGlue.
- **Verified headlessly**: 110 s drive from boot into a race, zero errors, red
  logo, music playing.

## Still open

- `ExGetXConfigSetting` natively (needs the settings the title asks logged).
- The remaining kernel groups (sync/events, threads, file I/O, memory).
