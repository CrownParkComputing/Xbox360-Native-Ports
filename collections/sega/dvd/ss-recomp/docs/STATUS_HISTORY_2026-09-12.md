> Historical snapshot. Superseded by the current STATUS.md and docs/d3d/NEXT.md; do not use the defaults below without checking the current handoff.

# Split/Second (X360, 425607E7) — recomp status

Multi-module title: DEFAULT.XEX launcher + SKIPPER.DLL (DLC loader) +
SPLITSECOND1.DLL (15.6MB engine). Recompiled with the rexglue-sdk-rru fork
(branch rru-fixes) which carries the multi-module + image-aliasing fixes.

## Current reach (2026-09-12)

**Latest test:** the large scenery-changing power play produced a measured
9.61-second frame, including 9.50 seconds of synchronous pipeline compilation.
HUD position and the power-play bar also render incorrectly. Normal speed is
restored after rejecting a 120 Hz experiment that accelerated simulation.
See [performance evidence](d3d/PERFORMANCE.md). Assets now live in `assets/`,
with a ZIP in `dist/`; `./run.sh` uses the local copy.

**Morning update:** a guarded mesh-copy destination-range fix now substantially
improves the world rendering and removes the wedge/magenta bands in inspected
captures. Car materials/textures remain wrong, and user testing reports severe
frame pacing problems and changing sharpness while driving (the user clarified
that power plays do not freeze). The current target is stable 60 FPS. See [COPY_RANGES.md](d3d/COPY_RANGES.md) and the
updated [handoff](d3d/NEXT.md). Earlier "all correct" descriptions below are
historical and do not describe these remaining defects.

**Boots, menus and renders a race.** The chain is: skipper DLC probe -> content
screen -> launcher/engine handoff -> "SPLIT/SECOND — PRESS START" title ->
main menu (pixel-correct, see below) -> track load -> in-race rendering with
car, road, kerbs, scenery, buildings and HUD all correct.

Two blockers that dominated earlier status entries are **closed**:

1. **The null-fault storm / content wall** (was: ~17,000 guest-0 faults per boot,
   hung before the engine handoff). Contained by no-oping skipper's
   content-processing thread entry `sub_980DDBD8` — the absent-DLC path, not
   needed to boot. Now a proper strong-symbol override in
   `src/skipper_stubs.cpp`, linked into `splitsecond_SKIPPER` from the top-level
   CMakeLists. It previously lived as a hand edit inside
   `generated/skipper/splitsecond_recomp.9.cpp` and was silently reverted by the
   regen in commit e056618, which would have regressed the boot on the next
   rebuild.
2. **In-race garbage geometry** (was: screen-spanning garbage triangles in every
   race while menus were pixel-perfect). Root cause was neither the renderer nor
   the streaming loader but the SDK's memexport readback overwriting the vertex
   pool. Fixed by `readback_memexport = false` in `config/splitsecond.toml`; the
   full mechanism is in `docs/d3d/FINDINGS.md` section 0.

### Known-good run config

`config/splitsecond.toml` is the source of truth and each setting carries its
reason inline: `unregistered_function_nonfatal`, `async_shader_compilation =
false`, `render_target_path_vulkan = "fsi"`, `query_occlusion_fake_sample_count
= 0`, `gpu_allow_invalid_fetch_constants`, `readback_memexport = false`.

Caveat carried over from the readback fix: with readback off, guest RAM is
deliberately not synced, so the CPU-side corruption metrics (`validate.py`, the
`[CORRUPT-VB]` counter) report false positives, and `gpu_skip_nonfinite_draws`
must stay OFF in normal use — it now drops good draws.

### Build notes

The codegen pre-step works. The earlier "`BaseHeap::Release failed because
address is not a region start`" line is benign noise printed alongside a
successful codegen summary, not an abort. Two real build traps:

- **The manifest reads the disc dump in place.** It was found in
  `~/.local/share/Trash/` on 2026-09-12 and restored to
  `~/Downloads/Split.Second.USA.X360-ZTM/` (the path
  `splitsecond_manifest.toml` expects). Codegen fails with "Entrypoint XEX not
  found" if it moves again.
- **The PCH goes stale after system header updates** ("file '/usr/include/…'
  has been modified since the precompiled header"). Rebuild it:
  `ninja -t clean CMakeFiles/splitsecond_SKIPPER.dir/cmake_pch.hxx.pch &&
  ninja CMakeFiles/splitsecond_SKIPPER.dir/cmake_pch.hxx.pch`.

### Open work

**Start at `docs/d3d/NEXT.md`** — the 2026-09-12 handoff: the three open
rendering defects, each with its mechanism, what was ruled out, the exact next
step, and the reproduce commands.

- **Playability beyond rendering**: a full race has not been driven to the
  finish; audio, input mapping and performance are uncharacterised.
- **Native Vulkan D3D9 replacement** — the investigation programme (Waves 0–2)
  is complete and the seam is proven clean; implementation stages M0–M5 have not
  started. Plan and findings: `docs/d3d/PLAN.md`, `docs/d3d/FINDINGS.md`.
  Note the priority reversal recorded there is now itself superseded: the
  streamed-geometry corruption it told you to fix first *was* the memexport
  readback bug, and it is fixed.
- Two real SDK defects in the memexport readback fast path are still unfixed
  upstream (it keys slots on `(front range base, total size)` and writes the
  previous slot's bytes); the SDK default was left at `true` to avoid regressing
  Ridge Racer Unbounded. See `docs/d3d/FINDINGS.md`.

## Run (disc-free package)
`tools/make_dist.sh <game_dir>` builds a self-contained zip: unzip, ./run.sh.

---

# History

The sections below are the bring-up record and are kept for their evidence.
They describe blockers that are now closed — read "Current reach" above first.

## Root cause localized (2026-09-04 deep-dive session)

Two parallel workers + gdb tracing converged on a single verdict: **the GPU
command processor is correct; the guest CPU feeds it half-written buffers.**

- Of ~812 PM4 indirect buffers per boot, ~38 fail — NOT wholesale garbage.
  Both failure classes (a real-PM4 buffer desyncing at a stale tail; small
  all-float buffers) are the SAME scratch-buffer pool submitted with correct,
  stable pointers but incoherent contents. Confirmed NOT a CP parser bug
  (every handler matches xenia-canary word-for-word) and NOT runtime image
  aliasing (skipper phys 0x18000000 vs engine phys 0x08000000 — 0x10000000
  apart, no collision; the July aliasing bug was codegen-view-only and is
  fixed in the SDK).
- Upstream cause: a `read/write of guest 0x00000000` fault storm (50k+ in 30s,
  present from the first log line) from skipper threads. gdb backtrace pins it:
  chain root `sub_980DDBD8` (skipper thread) -> sub_9803C340 -> sub_9803B730 ->
  sub_9806CDC8 -> sub_9806CAF8 -> ... -> sub_98076140 -> sub_980C6040 (a
  constant-fill/memset). At sub_98076140 (recomp.16.cpp:8256):
  `r30 = *(obj+4)` is NULL (a content buffer never allocated), yet the code
  fills it with a nonzero count from `*(obj+36)` -> null-destination memset ->
  fault. Skipper's content-object subsystem is walking an object graph whose
  buffers were never allocated (DLC device absent).
- This is NOT July's DLC-probe path (0x9806FDC8/0x980E1568 are not in the
  chain) - a different skipper content subsystem, newly reachable because the
  SDK's GapFill sweep now discovers/emits functions the old config left out.

### Next-session entry point
Trace why `*(obj+4)` is null at sub_98076140: which earlier skipper call was
supposed to allocate that buffer (candidate: an allocator whose result is
dropped by a store miscompile, or a content-count that should be 0 computed
nonzero). Alternatively, July's containment approach: stub the subsystem entry
(sub_9806CDC8 or sub_9803B730) to report "no content" so the null-graph walk
never runs — but verify the engine doesn't need its output first. The SDK now
has IB-failure forensics (phys addr, head words, 16-entry packet trail) and a
type-3 resync to help.

### Experiment result: null propagation is systemic (not one function)
Guarding the sub_980C6040 fill against a null destination dropped indirect-
buffer failures 38 -> 0 (PROVES the null-fill storm is what corrupts the GPU
command stream) but 17,712 guest-0x0 faults remained from OTHER skipper sites
and the game still did not progress past the content screen. So the blocker is
systemic null propagation inside skipper's content subsystem, seeded by ONE
foundational null upstream (in the sub_980DDBD8 thread subtree) that every
downstream deref inherits - not a per-function miscompile. Next session: find
that single upstream null source (a failed/dropped allocation, a null `this`,
or a content-count/enumerate that returns a bad base), rather than guarding
individual derefs. (Experimental guard was reverted.)

### Kernel content-API ruled out (xboxrecompv2 + Xenia oracle cross-check)
Both RetroRecomp (xboxrecompv2 lineage; scar-comment "returning NOT_FOUND from
enumerator creation makes the storage device look failed - creation must
succeed") and current xenia-canary (which now PASSES this screen into gameplay)
agree the contract is: XamContentCreateEnumerator returns success + non-zero
buffer_size even for 0 items; XamEnumerate returns NO_MORE_FILES / 0 items.
VERIFIED our rexglue runtime already complies: trace shows
"XamContentCreateEnumerator: added 0 items to enumerator" (success, twice) - no
INVALIDARG, valid handle. So the 17k null-fault storm is NOT from the kernel
content API. The null buffers (0xFF6xxxxx physical-window allocations, some
null) are built by SKIPPER's OWN package parser/allocator, not XamContent -
narrowing the upstream-null hunt to skipper's internal content-object code.

### Root pinned to a content-resource Lock returning null-with-success (source-trace worker)
The fill (sub_98076140, recomp.16.cpp:8222) is a strided memset over a
descriptor built on-stack in sub_980765C8 (recomp.11.cpp:8627). At
recomp.11.cpp:8878-8884 skipper makes a VIRTUAL Lock call (method at
vtable+236) on content resource `r20`; the Lock returns **status >= 0
(success) but writes a NULL buffer pointer** to r1+92, which becomes
descriptor+4. The element count (descriptor+28) and element size
(descriptor+36) come from unrelated non-zero args, so the fill runs
count>0 iterations into a null buffer -> the guest-0 storm.

Ruled healthy (so the fix isn't misdirected): the content-manager singleton
(sub_9803C340 -> global 0x9822D5EC) and the allocator (sub_9804B4F8 ->
0x9822EBAC) both init and allocate fine. It is ONE per-content resource whose
backing buffer create was skipped because the content data is absent; every
downstream walk Locks that same never-created resource.

Fix options (next session), in order:
1. Make the content provider report ZERO elements when its buffer is absent -
   descriptor+28 (element count, from sub_9806CDC8 LOAD(r28+0),
   recomp.8.cpp:6889) must be 0 when the resource has no backing store; then
   the fill's `ble` guard (recomp.16.cpp:8245) skips entirely.
2. Ensure the resource's backing buffer is created for the absent-content case
   so the Lock (vtable+236) returns a real pointer.

To finalize: identify the Lock method (vtable+236 on r20's class) and its
Create/backing-store site. Note the storm reaches the fill via a DIFFERENT,
faster path than sub_980765C8:8907 (a probe there did not catch the storming
faults), so enumerate ALL callers of sub_98076140 / sub_980C6040 and the
resource classes they Lock. Runtime probing works with the manual-background
launch pattern (`(cmd &); sleep N; pkill`); avoid foreground/gdb-run which the
sandbox SIGKILLs ~8s in.

### Session 2 (2026-09-04 later): systemic null-store storm; many causes eliminated
Caught 4 simultaneous fault chains under gdb - all UNRELATED skipper functions,
all STORES through a null destination register (stwu/stfs/std to r4/r11 = 0) in
different serialize/copy loops. So it is systemic: skipper repeatedly writes to
null output buffers across the content subsystem, not one resource.

Eliminated this session (each verified, so next session doesn't retread):
- Kernel content API: our XamContentCreateEnumerator returns success/0-items
  (traced live) - matches the xboxrecompv2 + Xenia contract. Not the source.
- Bogus file open: skipper opens only the module DLLs + default.xex, no DLC/
  content package files (fs trace). Not a wrong-success file read.
- Module init: no DllMain-skipped warning; storm starts during content
  processing, not at load.
- Allocator getter sub_9804B4F8: probed - NEVER CALLED (0 hits) yet storm
  continues. The null buffers do NOT come from that allocator path.

Still open: the single upstream that makes so many unrelated serializers get a
null output buffer. Leading remaining hypothesis: the faulting worker thread
(0xF8000018, start routine ~sub_980DDBD8) runs with a null/garbage context, so
its whole workload derefs null; OR a miscompiled pervasive helper (prologue/
epilogue save-restore, or a common pointer-returning util) yields null. Next
probe: log ExCreateThread start/context pairs and identify thread 0xF8000018's
context arg; if null, trace its creation.

BUILD NOTE: the game CMake re-runs `rexglued codegen` as a pre-build step and it
currently aborts with "BaseHeap::Release failed because address is not a region
start", blocking relink (binary stale). Fix the codegen re-run (or build the
exe target directly bypassing the codegen dependency) before the next runtime
iteration.

## BREAKTHROUGH (2026-09-04): content thread was the blocker — now at TITLE SCREEN
No-op'ing the skipper content-processing thread entry sub_980DDBD8
(recomp.9.cpp; reached indirectly, it is that thread's start routine) took the
guest-0 fault storm from ~17,000 to ZERO and the game progressed past the
content screen through the launcher->engine handoff to the real
"SPLIT/SECOND - PRESS START - (C) 2010 Disney" title screen (frame means now
vary 0..54 = live rendering, not frozen).

So the entire content subsystem was DLC/content processing that (a) is not
needed to boot and (b) walked null buffers because there is no DLC. Stubbing
its thread entry is the containment fix (equivalent to "no downloadable
content"). This is a TEMP stub in generated code - reverts on regen; make it a
proper hook (strong-symbol override in the skipper module, or a manifest
mechanism) before shipping.

NEXT: render/graphics bring-up from the title screen inward (the "heavy duty"
work) - drive PRESS START, reach the menu/gameplay, then the GPU pass work.
