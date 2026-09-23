# Split/Second — next session

Updated 2026-09-12 after the selective-readback and headless tests. This is the
current handoff. Earlier hypotheses and run notes are preserved in
[NEXT_HISTORY_2026-09-12.md](NEXT_HISTORY_2026-09-12.md); they are not current defaults.

## Start here

- Game: `/home/jon/ss-recomp`, private `CrownParkComputing/ss-recomp`, branch `master`.
- SDK: `/home/jon/recomp-ports/recomp-family/_library/rexglue-vmx`, private `CrownParkComputing/rexglue-sdk-rru`, branch
  `rru-fixes`; renderer checkpoint **aefd268**. Never push this work to SDK `origin`
  (upstream); use the `private` remote.
- Game checkpoint before this documentation cleanup: **3c69e96**. Both trees were
  committed and pushed before cleanup; the cleanup commit is later in game history.
- Run `./run.sh` for interactive play. Prefer headless tests during development:
  the user explicitly requested no test windows or synthetic input on the desktop.
- [BOTTLENECKS.md](BOTTLENECKS.md) contains timings, source paths and preserved
  samples. [../DLC.md](../DLC.md) records the separately supplied DLC packages.

## What works now

Boot, menus, track loading and racing work. The mesh-copy destination-range fix
substantially improves geometry; the wedge/magenta tile artifacts were absent in
inspected captures. The car paint now has coherent stripes and correctly placed
badges. F8 toggles the approved Retro Recomp sidebars; F4 backend settings were
removed at the user's request.

Full resolve readback fixed car paint but caused a severe regression: run 084
copied 80.34 MiB in 76 readbacks per frame, spending 59.69 ms in that path inside
an 84.73 ms frame. CPU lock tracing identified six complete RGBA compositor
surfaces. The title-specific filter accepts power-of-two pitches 32–1024,
height = 2 × pitch, format 6, and length = pitch × height × 4. Partial shadow
resolves with similar dimensions do not match. No physical addresses are hardcoded.

Run 089, headless race swaps 3781–3900: **33.344 ms/frame**, **14.999 ms draw CPU**,
**zero readback copies**, 5.65 submissions/frame. Captures retain correct car paint.
This removes the bulk-readback regression; it does **not** establish correct-speed
60 FPS. The desktop and headless samples are not matched A/B benchmarks.

## Keep these defaults

`config/splitsecond.toml` is authoritative; copy it beside the executable after edits.

```toml
unregistered_function_nonfatal = true
async_shader_compilation = false
render_target_path_vulkan = "fsi"
query_occlusion_fake_sample_count = 0
gpu_allow_invalid_fetch_constants = true
readback_memexport = false
gpu_memexport_copy_ranges = true
readback_resolve = "full"
gpu_readback_ss_compositor = true
```

`full` now synchronizes only surfaces accepted by the filter. Turning the filter
off restores the expensive diagnostic baseline. Never confuse resolve readback
with memexport readback. Global memexport readback previously corrupted vertex pools.

Do not enable FBO: it produced blank frames. Keep experimental background pipeline
optimization off; one supposedly fast pipeline still took 1.22 seconds. Keep the
normal 60 Hz video setting: the 120 Hz experiment accelerated simulation.
Havok, FMOD, Bink and Scaleform remain recompiled guest code; do not reopen a
wholesale middleware replacement without a new measured reason.

## Ordered next steps

1. **Validate the narrower car fix beyond this race.** Test other cars/liveries,
   distant mip levels, damage, restarts and scenery-changing power plays. Inspect
   captures and readback counters together. Expected: correct paint and no recurring
   bulk readbacks. Smaller packed compositor levels did not match separate resolve
   ranges in the trace; distant mip correctness is not yet established. If a case
   fails, trace the actual CPU consumer before broadening the filter.
2. **Remove first-use pipeline stalls.** The large power play caused 9.50 seconds
   of pipeline compilation in a 9.61-second frame. Results/save transitions had
   4.79 and 2.06 seconds of compilation. Expand portable shader/pipeline coverage
   and prewarm before the corresponding scene is drawn. Repeat the same event with
   warm and fresh application caches; do not call an application cache reset a
   fully cold driver test. Never hide stalls by skipping real draws. These timings
   implicate graphics compilation, not save-file I/O.
3. **Profile repeated draw setup and correct-speed 60 FPS separately.** Aggregate
   time in texture requests, bindings/constants, pipeline lookup, shared-memory
   requests and command recording, including short calls. Around 3–4K draws/frame
   remain common. Avoid redoing unchanged work where measurements justify it.
   Investigate the guest simulation/render pacing relationship before changing
   refresh rate. Acceptance requires both game speed and frame-time distributions;
   a presentation counter reading 60 is insufficient.
4. **Resolve the remaining visual issues.** HUD placement/power-play bar, changing
   sharpness and sky correctness still need focused checks. Compare the current
   auto-squeeze override against `SS_AUTO_SQUEEZE=1`. Bink was confirmed decoding;
   front-end panel drawing has not had a complete reference-image acceptance pass.
   Keep the approved sidebars out of unrelated renderer changes.
5. **Enable DLC safely and back it up separately.** All six raw LIVE packages in
   the supplied Downloads folder match copies in `content_root/.../00000002`.
   They are not active: skipper's content thread is bypassed and the game reports
   missing `DLC:\DLC\Unlock\Unlock.params`. Investigate raw STFS mounting versus
   extracted-content directories, enumeration and initialization. Preserve the boot
   override until an isolated-save test succeeds. Add a separate checksummed private
   DLC release/restore manifest; the existing base-game release excludes DLC.
6. **Only then pursue other native replacements.** `NtReadFile_entry` currently
   forces synchronous host reads even for asynchronous guest requests. Measure
   latency and caller stalls during streaming before changing APC/event semantics.
   Time the CPU compositor's copy/resize/packing stages before considering GPU
   replacements. No current measurements justify rewriting input, audio or general
   thread/memory services.

## Headless workflow and evidence

```sh
python3 tools/d3d/headless.py out/test-name -- \
  --readback_resolve=full --gpu_readback_ss_compositor=true
python3 tools/d3d/frame_stats.py out/test-name/stats.csv
```

Use a fresh output directory. Gamescope runs the real GPU on a private headless
Xwayland display; input is confined there, audio is dummy, and captures/logs/CSV
are saved. Held menu keys avoid missed guest polls. The final runner copies
non-cache content into isolated test user data and shares the shader cache.
A separate smoke test verified this isolation branch; earlier run 089 predates it.
Menu automation is not proof of reaching a race: inspect captures. Extend it with
explicit power-play scenarios rather than inferring coverage from elapsed time.

`gpu_log_resolve_readbacks=true` logs accepted surfaces; `SS_TRACE_COMPOSITOR=1`
logs CPU texture locks. High-volume logs rotate, so preserve relevant entries
before they roll out. Trace helpers stay in `src/rendering_overrides.cpp` and
survive regeneration. Per-frame timing counters default off. Resolve timing is
nested in draw CPU time; synchronization/copy timings are nested in resolve time.
Do not sum them or treat fence waits as GPU execution timestamps.

Permanent evidence: `docs/d3d/evidence/bottlenecks/`, `COPY_RANGES.md`,
`BOTTLENECKS.md`. Local ignored captures remain under `out/`; older diagnostic
captures under `/tmp` are not durable. The duplicate full asset restore and an
isolated test-content copy were removed during cleanup after verification.

## Build, backup and verification

Use the existing CMake build directories. After SDK edits, build `rexgpu-xenos`
and any affected runtime targets, then sync the libraries to the game and SDK
install tree while the game is closed. Keep SDK headers and runtime/plugin ABI
changes in sync. The latest game/module builds passed; both range helpers passed
32 assertions in four test cases. Content round-trip validation checked all 161
files; corrupted-part and unsafe-path tests passed.

Generated C++ remains tracked. Codegen stamps, depfiles and Python bytecode are
local build products and now ignored. Put durable overrides in `src/`, never in
`generated/`. A system-header update can invalidate the PCH; rebuild it rather
than changing guest code. The known `BaseHeap::Release ... region start` message
accompanies successful codegen and is not itself a build failure.

`assets/` is the working base-game copy. `content/content.sha256` describes 161
files, packed into `content/ss-content.zip`; `./run.sh` restores them when they
are missing. The ZIP and old ZTM Downloads dump were deleted as requested.
Keep the separate DLC Downloads folder, live saves and shader caches. Private
content releases, working assets and personal saves stay outside Git history.
