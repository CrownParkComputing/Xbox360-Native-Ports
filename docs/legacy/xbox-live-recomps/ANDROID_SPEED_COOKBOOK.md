# Android Speed Cookbook

How to get a RexGlue/whitty_xenon recomp from "about half speed" to full speed
on an Android device, in the order to do it. Written after comparing the GW2 /
GW3 builds against the older *-xenon builds that hold ~60 fps on the Retroid
Pocket Flip 2. Every claim has a file:line behind it; the short version is:

**The runtime, the Android build files, and the generated PPC code are
byte-identical between the fast old builds and the slow new ones. The code is
not the gap. The gap is a small number of host-side behaviours that only cost
on arm64/Android. Fix those and there is no reason the new pipeline cannot
match the old frame rates — it is literally the same binary shape.**

Old vs new, verified by diff:
- `runtime/src`, `runtime/android/CMakeLists.txt`, `android/build.sh`,
  `android/prelude/*`: identical (runtime/ is a vendored whitty_xenon;
  sync_runtime.sh re-applies the three deliberate divergences).
- Generated PPC differs only in naming the compiler's save/restore helpers
  (`sub_8212E894` -> `__savefpr_27`): 9045 vs 8928 functions, 13 vs 13
  `__rdtsc` sites, 1758 vs 1760 indirect calls. Perf-neutral.
- Conclusion: do NOT rewrite codegen to chase this gap. Measure on device,
  fix the host side.

## 1. The half-speed smoking gun: mftb (FIXED — verify first)

`mftb` is emitted as `__rdtsc()`. The arm64 prelude mapped it raw to
`cntvct_el0`, which ticks at 19.2 MHz on the Flip 2's Snapdragon 865, while
`KeQueryPerformanceFrequency` reports the Xbox's 50 MHz timebase
(kernel_handlers.cpp:244-246). GW2's timed-wait spin at
`ppc_recomp.10.cpp loc_820A1F38` waits in 50 MHz units, so on Android every
such wait lasted 50/19.2 = 2.6x too long -> ~0.48x speed. Exactly the
reported symptom. On Linux the TSC runs at GHz rates, the same waits expire
instantly, and the bug is invisible — which is why Linux was always full
speed and the codegen was never the problem.

Fix applied: `android/prelude/whitty_arm64_x86_prelude.h` now scales CNTVCT
to 50 MHz (`v * 50000000 / CNTFRQ_EL0`, frequency cached). Patched upstream
in `~/development/xenon-native/projects/whitty_xenon` and copied into every
vendored `runtime/android/prelude/` that exists; `sync_runtime.sh` carries
it to the rest.

Verify on device (10 min): rebuild `whitty_geometrywars2`, push, run with
`WHITTY_FPS=0` and read the presented-frames counter. Expect ~2x. If the
gain is less, the spin sites are cold and the gap is elsewhere — go to 2.

## 2. big.LITTLE: nothing pins a thread to a core

`KeSetAffinityThread` rewrites only the guest-visible CPU number and the
runtime's own README admits the consequence: "A guest thread scheduled onto
a little core roughly halves the frame rate, and it looks exactly like an
emulation bug" (android/README.md:236-238; kernel_handlers.cpp:3646-3696).
SCHED_FIFO requests EPERM on Android and silently degrade
(rexglue threading_posix.cpp:1034-1052).

Cookbook step: at guest-thread create (ExCreateThread handler), call
`sched_setaffinity` onto the big cluster (read `/sys/devices/system/cpu/cpuN/
cpufreq/cpuinfo_max_freq`, pin to the top group). No root needed for
affinity. Do this before touching anything else if fix 1 does not land 2x.

## 3. Optimization flags: the -O1 decision was never measured on arm64

The PPC units build at `-O1` with the comment "at -O2 these units get very
expensive to compile for no measured gain" — measured on x86, where SIMD is
native. On Android those same units additionally carry
`-fstack-protector-strong -D_FORTIFY_SOURCE=2` (NDK Release defaults) and
baseline `armv8-a` (no LSE atomics) — all three on the hottest code in the
process. Meanwhile every guest register access is a memory load/store
through a volatile pointer (ppc_context.h:38-87), which is exactly the code
-O2 cleans up.

Cookbook steps, in order, each one A/B'd on device with `WHITTY_FPS=0`:
1. `-O2` for `whitty_ppc` only (runtime stays as-is).
2. Strip stack-protector/fortify from the PPC units
   (`-fno-stack-protector -U_FORTIFY_SOURCE`). They are generated code with
   fixed-size guest buffers; the protector buys nothing there.
3. `-march=armv8.2-a+lse` for `whitty_ppc` (Flip 2 / SD865 supports it) —
   turns the per-import-call atomic counters and guest spin-lock CAS from
   LDXR/STXR retry loops into single instructions.
4. Only if a title needs more: `PPC_CONFIG_NON_VOLATILE_AS_LOCAL` (RexGlue
   SDK defaults it ON for new ports; ~9% of profile samples,
   rexglue commit 8b08e21). Recheck for stale-register bugs per title.

## 4. VMX via SIMDe: fine in bulk, hand-fix the hot five

VMX lowers to `_mm_*` intrinsics, translated to NEON by SIMDe through the
prelude. That is sound, but GW2's generated code has 19.4k `_mm_load_si128`,
7.0k `_mm_shuffle_epi8` (every lvx/stvx byteswaps through a mask), 234
`_mm_dp_ps`, and 7.4k `fpscr.disableFlushMode` sites. The SDK only
hand-writes NEON for three helpers (vsl/vslo/vsro).

Cookbook step: profile first (`perf` on the Linux build, or simple
per-instruction counters), then hand-NEON only the hot helpers inside the
prelude. Do not chase -ffp-model: the SDK is `-ffp-model=strict` globally
and relaxing it enables NEON FMA contraction — free speed, but it changes
results, and Banjo is the reminder of what accumulated FP drift does
(section 6). Take it per title, last.

## 5. Frame pacing and per-swap overhead

- The vblank thread uses a relative `sleep_for(16ms)` with no drift
  compensation (run_title.cpp:4521-4533); the clock thread beside it already
  does deadline-chased `sleep_until`. Make vblank deadline-chased too.
  Android timer slack makes relative sleeps measurably late.
- `blade.refresh()` + full achievement/high-score table rebuild run EVERY
  swap (run_title.cpp:4286-4323). Dirty-flag them.
- All guest object waits share ONE global mutex+condvar (thread.cpp:61-86);
  a title with heavy worker traffic convoys on it. Shard by object when a
  title needs it.
- Keep the on-disk VkPipelineCache warm and ship it — Android has no driver
  blob cache; a cold Geometry Wars frame spends 52 of 63 ms compiling
  pipelines (android/README.md:207-210).
- RexGlue cvars worth porting into whitty per title: `gpu_hot_page_frames=3`
  (12->20 fps on MCLA upstream), `render_target_path_vulkan="host"` where
  FSI isn't needed (~25% of frame on MCLA). These trade correctness — gate
  them per title behind gates.json.

## 6. The Banjo lesson: speed corners are per-title, never global

The old route was fast partly because it cuts: sync/eieio/lwsync decode to
zero instructions, lwarx is a plain load, `vmaddfp` is mul+add (1 ulp/op,
not fused), `vpkd3d128` pack-mode 3 falls through to the pack-mode 2 emitter
(which is why Banjo's vertex data shattered — 4J's engine is built on it),
and XMA goes to FFmpeg with zeroed loop points (which is why the audio
crackled). The new pipeline keeps the same codegen family, so:

- Any "fast" flag that changes numerics or ordering is a per-title opt-in
  with a regression gate, never a global default.
- vpkd3d128 pack-mode 3 was NOT Banjo's corruption cause (verified
  2026-09-18): the "Unexpected float16_4 pack instruction" warnings are
  cosmetic - pack=3/shift=0 has the same Xenia permute mask as pack=2/shift=0,
  and the emitter writes the same words either way. Banjo's real bug is in
  the vertex path (positions land in the wrong space: tiny Banjo floating,
  terrain collapsed to a strip, textures intact) and reproduces identically
  on Linux x86-64, so it is platform-independent - not SIMDe, not Android.
- Banjo needs its FULL asset tree on device (RAWFiles/X360_strings.dat etc.,
  the 48 MB set), not just default.xex + image.bin - without it the title
  bails out through XamLoaderLaunchTitle after one frame and looks like a
  crash.
- Banjo also imports guest fibers, which are UNSUPPORTED on Android (Bionic
  has no ucontext; rexglue src/core/fiber_posix.cpp:21-59). That is a
  hard blocker for Banjo on device regardless of speed.

## 7. Rollout checklist per title

1. Rebuild with the mftb fix; measure `WHITTY_FPS=0` presented frames.
2. Pin guest threads to big cores; measure.
3. `-O2` + no-stack-protector + armv8.2-a for whitty_ppc; measure.
4. If still short: profile, hand-NEON the top SIMDe helpers for that title.
5. If still short: pacing fixes (vblank deadline, per-swap dirty flags).
6. Bookend with `WHITTY_IMPORT_TOP=250` and the swap-interval histogram —
   a pathological count means a kernel bug, not a slow CPU.
7. Never tune against the qemu-static build (10-30x interpretation penalty)
   and never trust a cold pipeline cache run.

Measurement discipline: same device, same thermal state, screen on, APK
windowed path (WHITTY_WINDOW=1), warm pipeline cache, 60-second runs.
