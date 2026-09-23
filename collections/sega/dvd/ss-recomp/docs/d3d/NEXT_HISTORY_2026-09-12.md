> Historical snapshot. Superseded by the current STATUS.md and docs/d3d/NEXT.md; do not use the defaults below without checking the current handoff.

# Split/Second — start here (handoff, 2026-09-12)

Read this first, then `FINDINGS.md` for the renderer detail and `../STATUS.md` for
the overall port state.

Expensive paths are now ranked with measurements in [BOTTLENECKS.md](BOTTLENECKS.md).
Run 084: 76 readbacks / 80.34 MiB each frame; mean resolve time 59.69 ms inside an
84.73 ms race frame. **Run 089 removes that regression:** selective compositor
readback keeps the car stripes/badges correct with zero steady-state copies and
roughly 33 ms headless race frames. Title config now enables
`gpu_readback_ss_compositor`; full readback is still used for matching surfaces.
Next priorities are first-use pipeline work and repeated draw preparation.
Synchronous asset reads and CPU texture
compression are identified candidates with no isolated timings yet.

Use `python3 tools/d3d/headless.py out/<fresh-name> -- <game flags>` for tests.
Gamescope's headless backend uses the RTX 3060 with a private Xwayland display;
the runner never sends keys to the desktop. Held confirm keys avoid missed guest
input polls. Frames/CSV/logs are saved; newer runner versions isolate test saves.
Headless and desktop frame times are not matched A/B measurements.
SDK checkpoint for selective readback and counters: `aefd268` on private
`rexglue-sdk-rru/rru-fixes`. Both range helpers pass 32 assertions.
For the separately supplied DLC packages, see [../DLC.md](../DLC.md): all six
are copied locally, but loading is still blocked and they are not in the base
asset release.

## Private checkpoint and content restoration

Cleanup: the user authorized deletion of `dist/splitsecond-assets.zip` and
`~/Downloads/Split.Second.USA.X360-ZTM`. Both were removed after all 161 working
asset files were rehashed against the private-release manifest. Keep using
`assets/`; the verified private release parts remain available for restoration.
Historical references below to retaining the original dump/ZIP are superseded.

**Run 082 resolved the car-texture investigation:** `readback_resolve=full`
restores coherent paint/stripes and correctly placed badges; user confirmed
"cars good". Clouds also appeared in the sky. The vehicle compositor reads
resolved textures on the CPU before compressing them. Keep memexport readback
OFF; resolve readback is a different operation. Full resolve readback is now
the correctness baseline, but it is expensive (captured race intervals were
roughly 8–9 seconds per 120 frames). Selective readback is the next optimization,
not a completed fix. Run 083 added `gpu_log_resolve_readbacks` but the window
closed before the race; only presentation targets were logged. Do not infer
the compositor's required address/size filter from those startup targets.

The user requested removal of the backend settings UI: the app unregisters
`bind_settings` and the sidebar no longer advertises F4. The runtime and Vulkan
backend remain required. Generated guest CPU code is native C++; GPU commands
and shaders still pass through the Xenia-derived renderer. These are different
layers, not measurable percentages of native versus emulated code.

Renderer SDK checkpoint: `CrownParkComputing/rexglue-sdk-rru`, branch `rru-fixes`,
commit `26d35ed`. The game and SDK repositories were verified private before
uploading. Content is represented by `content/manifest.json` and 27 numbered
256 MiB-or-smaller private release attachments under `assets-ztm-v1`; the ZIP
stays local. `splitsecond_content` restores and checks the parts before codegen.
The complete round trip verified all 161 files; corruption/path rejection tests,
17 mesh-copy assertions and the game build passed. Manifest paths are relative.

`resources/shaders/` carries the portable FSI shader/pipeline descriptions from
run 081. The launcher seeds only an empty cache, allowing startup prewarming of
known shaders. Hardware-specific driver caches and personal saves stay local.

## Latest renderer experiments (09:05)

Run 081 completed at 09:14. The user reported no slowdown until the end-of-race
save/results transition. CSV swap 12801 took 4,849 ms, with 4,789 ms of logged
pipeline compilation; swap 12804 took 2,089 ms, with 2,056 ms of compilation.
Do not diagnose this as save-file I/O from its timing in the game alone.

Car investigation: the CPU-side DXT1 mip bound to body draw 169, texture slot 10
(base 1DEBF000, mip base 1DE8F000), decodes to achievement badges and padlocks.
This is evidence about CPU source memory, not a GPU texture capture. Vehicle
compositor strings identify a CPU compressor thread; test whether its input
needs resolve readback before concluding the binding is wrong. Global
`readback_memexport` must remain disabled. No car-texture fix is established yet.

- User approved the Retro Recomp sidebars. F8 toggles both; hidden panels detach
  from the UI draw loop. Controls left, game information right. Presenter insets
  reserve 16% of window width on each side without changing guest HUD coordinates.
- The driver pipeline cache works and persisted ~58 MiB; a subsequent launch
  loaded 60,312,663 bytes. Shader-description flush requests no longer sleep
  indefinitely, and normal shutdown drains pending writes.
- `vulkan_pipeline_background_optimization` is an **experimental, default-off**
  path: complete unoptimized first-use pipeline, two background optimization
  workers, publish replacements on the command thread and retire after GPU use.
  It never substitutes discard shaders. Run 078 nevertheless had a **1,217.70 ms
  fast creation**, so it does not solve first-use stalls on this NVIDIA driver.
  The later build probes for an already-cached optimized pipeline without allowing
  compilation (Vulkan 1.3 feature-gated). That addition still needs a dedicated
  background-mode run. Do not turn the experiment on by default.
- **FBO is rejected again.** Run 079 was faster but captured multiple completely
  black race frames, also reported by the user. Restore `fsi`, not `fbo`.
- User clarified car textures have random imagery painted over them. This is a
  binding/UV/data correctness investigation, not a request for less shiny paint.
  Run 081 restores FSI and adds source texture dumps to the existing one-frame
  draw trace. Trigger file `/tmp/ss-car-textures/trace.trigger`, output directory
  `/tmp/ss-car-textures/draws`. These are CPU source bytes, not GPU readback.

`tools/d3d/frame_stats.py <stats.csv> --log <log>` reports quantiles and correlates
slow draw stages to the correct following CSV swap. Live runs are not matched
A/B benchmarks. Stable 60 FPS and zero power-play stalls are still unachieved.

## Latest: scenery-change stall captured; assets local

User testing now distinguishes ordinary power plays from the **large power play
that changes the scenery**, which produced a massive stall. Log 075 and
`/tmp/ss-perf-normal60/stats.csv` identify a 9,614 ms frame, of which 9,501 ms
is accounted for by logged synchronous pipeline compilations. A later frame
took 1,528 ms with 1,481 ms of compilation. This is measured CPU pipeline work,
not a permanent hang. Investigate prewarming first-use pipelines; the existing
async placeholder path has rendering correctness problems.

The HUD position and power-play bar are also visibly wrong, alongside the car
materials. Check the new auto-squeeze override against `SS_AUTO_SQUEEZE=1`
before attributing HUD regressions to the renderer.

The 120 Hz experiment was rejected: it speeds up simulation. Launches are back
at the normal 60 Hz video mode / approximately 30 guest frames per second.
Correct-speed 60 FPS remains open. Descriptor reuse and shared-memory request
optimizations are built into the local GPU plugin. A 120-frame race sample at
normal speed averaged 33.34 ms/frame and 19.36 ms draw CPU time; this is not an
A/B measurement of optimization gains. See [PERFORMANCE.md](PERFORMANCE.md).

The complete ZTM game tree is now `assets/`, with an assets-only ZIP and SHA-256
manifest in `dist/`. The codegen manifest and driving script use this local copy.
`./run.sh` launches it with the existing content/save/cache root. Original
Downloads files are retained.

## Update: copy-range fix and remaining defects (2026-09-12, morning)

The earlier "one-file sub-page fix" diagnosis below is superseded. See
[COPY_RANGES.md](COPY_RANGES.md) for the shader disassembly, implementation and
capture evidence. The large ranges belong to the **mesh-copy shader**, not the
tile-classification shader. Its actual destination includes a runtime offset;
clamping the length at the pool base protected the wrong bytes and also omitted
one of its two exports per vertex.

`gpu_memexport_copy_ranges = true` is now enabled in the title config. The SDK
option defaults OFF and only recognizes the verified shader and constants.
Driving captures show a substantial improvement: the stray world geometry and
wedge/magenta bands are absent in the inspected frames, with tile replay still
enabled. This is a **partial rendering fix**, not a claim of full correctness.

User testing identifies the priorities now:

1. **Frame pacing and rendering performance.** The user clarified that power
   plays do not freeze: the image changes / becomes blurry while driving. The
   target is a stable 60 FPS. Profile the backend and guest frame pacing;
   investigate the game's auto-squeeze dynamic-resolution controller.
2. **Car details/materials/textures still wrong.** The world is much clearer,
   but the car is not a valid "all correct" reference.
3. **Front-end panels** still need a controlled check against the exact movie.
   New draw-trace dumps include the register file and sampled linear 8-bit
   planes. Full-screen Bink draws have nonconstant YUV planes and the expected
   conversion constants, so a blanket claim that all linear k_8 sampling is
   broken is too broad.

The historical handoff follows; its claims about range arithmetic and the
specific offending shader must be read with the correction above.


## Where it stands

The game boots, menus, and drives a race. Three defects are open, and by the end
of today all three had a named mechanism rather than a guess:

| Defect | Status |
| --- | --- |
| In-race "random shapes" appearing from all over while driving | **Mechanism found.** Stale geometry from over-broad GPU-written page marking. Fix identified, not written. |
| In-race dark wedge + magenta sky | **Localised** to the per-EDRAM-tile replay. Not fixed. |
| Front end: title / car-select / event-select panels flat teal | **Localised** to Bink playback, downstream of decode. Not fixed. |

Nothing shipped today changes rendering behaviour: every new cvar defaults to a
no-op. Today's commits are `ss-recomp` `fa99220`, `d7ad247` and `rexglue-vmx`
`460cb0e`.

## 1. The random shapes — do this first

**Mechanism (evidenced).** The engine uploads streamed mesh data straight into
GPU memory with memexport draws (`cGPUMemoryCopy`); there is no CPU copy on that
path. The backend protects those writes by marking the pages "GPU-written" so
they are not re-uploaded from guest RAM. Measured in-race, the ranges it marks
are four sensible 26,880-byte ones **plus one of 66,060,288 bytes (63 MB) and one
of 20,971,520 (20 MB)**. So ~83 MB gets flagged GPU-owned every frame, and any
geometry the game legitimately streams into that span afterwards never reaches
the GPU — the GPU keeps drawing whatever was there before. That is the random
shapes.

**What was already tried, and why it is not the fix.** `gpu_memexport_clamp_to_draw`
(added today, ships OFF) bounds a range by what the draw can actually write —
vertices x eM# exports x element size. The tile-classification pass declares 63 MB
while drawing 384 vertices, so the clamp works arithmetically: largest range drops
to ~1.8 MB. **But most of the world then disappears.** That marking is
load-bearing — it is what stops the memexported vertex pool being re-uploaded
from stale guest RAM. Evidence frame: a clean car and HUD on an almost entirely
black track.

**The actual fix.** `~/rexglue-vmx/src/graphics/shared_memory.cpp`:
`RangeWrittenByGpu` -> `MakeRangeValid` rounds **outward** to whole pages
(`valid_page_first = start >> page_size_log2_`, `valid_page_last = last >> ...`,
every page between marked fully valid). So a 128-byte GPU write marks a whole
4 KB page valid and suppresses CPU uploads for everything else in that page.
Both failure directions are page-granularity artefacts:

- over-marking (today) -> legitimate CPU uploads suppressed -> stale shapes;
- under-marking (the clamp) -> GPU-written pool re-uploaded from guest RAM ->
  world vanishes.

So neither a bigger nor a smaller range fixes it — it needs **exact-range
(sub-page) GPU-written tracking**, so a GPU write protects exactly the bytes it
wrote. That is a contained change in one file, and it is upstream of the tiling
work.

## 2. The wedge and magenta sky — tiling

The frame is **three 1280x256 EDRAM tiles**, the same recorded command buffer
replayed once per tile. Corroborated three ways: measured band boundary at y=255;
Xenia documents 1280x256 tiles at 4x MSAA; `FINDINGS.md` already measured a
1152-draw block replayed exactly 3x.

`--gpu_skip_tile_replay=true` renders the **top band correctly** — black sky, no
wedge, no magenta — and leaves the rest black. So tile 0 is right and the per-tile
replays paint the garbage. The artifact appears on **both** render-target paths
(`fsi` -> flat (30,30,1), `fbo` -> orange), so it is not EDRAM format decode.

Next step when you get here: extend the `gpu_skip_tile_replay` filter to "keep
only replay N" and render each tile alone. That says whether each tile is
individually correct (so the bug is the resolve destinations / ordering) or not
(so it is per-tile state — window offset, EDRAM base). Note this may well be
downstream of item 1: the guest computes its `SET_BIN_MASK_LO` values from
memexported AABBs, and those live in the same memory whose coherency is broken.

## 3. The front end — Bink

**The panels are Bink movies and the video layer is dead.** 88 `.BIK` files back
`MAINMENU`, `EPISODESELECT`, `EVENTSELECT`, `QUICKPLAY` — exactly the screens that
look broken.

Already ruled out, with trace evidence:

- the files are found and opened (`D:\Deferred\Movies\Screens\EventSelect\FE_EVS_Track1.bik`,
  `NtCreateFile -> 0x0`); the VFS resolves case-insensitively
  (`src/filesystem/entry.cpp:59`, `utf8_equal_case`), so the UPPERCASE disc dump is fine;
- the file streams (128 KB chunk reads);
- **Bink decodes**: the Y plane (640x352) and U/V planes (320x176) show up as
  **linear k_8** textures, uploaded 120-240 times.

So the break is downstream of decode, in drawing/sampling those planes. Suspect
the linear (untiled) 8-bit texture path — every other texture in this title is
tiled. A flat constant panel is what you get if those samples return a constant.

**Oracle:** FFmpeg decodes these exact files, so every panel has a reference
image — `ffmpeg -i <file>.BIK -frames:v 1 out.png`. Objective pass/fail, no
judgement call. `FE_EVS_TRACK1.BIK` should be a bridge/city shot; it renders as
flat teal (35,76,88).

## Middleware question — settled, do not re-open

Binary links **Havok 5.5.0-r1, FMOD, Bink (RAD), Scaleform GFx (GFX v2.x)**
(strings in `engine_strings.txt`). For a static recomp **none of these need
decompiling or replacing** — they are guest code and are recompiled with the game.
Checked against every comparable 360 recomp (XenonRecomp, Unleashed Recompiled,
Marathon Recomp, Silent Hill: Downpour Recompiled, the ReXGlue SDK): nobody
replaces middleware; native code is written only at the platform seam. Downpour
is UE3 with *both* Bink and Scaleform and contains zero Bink/Scaleform code. The
only middleware-shaped work anyone did anywhere was XMA decode via MMIO and shader
microcode translation. No public Split/Second port exists — this is the first.

Keep for reference only: Ruffle accepts Scaleform GFX headers (inspection),
FFmpeg decodes Bink 1 (the oracle above, and a fallback if the guest path ever
proves unsalvageable), leaked Havok 5.1 headers would help symbolise functions.

## Tools available (new today, all default no-op)

In `rexglue-vmx` (`460cb0e`):

- `--gpu_skip_draws=first:last` — suppress an inclusive per-frame draw range.
- `--gpu_skip_sweep_chunk=N [--gpu_skip_sweep_base --gpu_skip_sweep_start]` —
  automatic bisection: each successive swap suppresses the next chunk, so **one
  run over a static scene tests every chunk** instead of one run per range. Read
  the `[SKIPSWEEP]` line for each dumped frame. Arm it with the draw-trace
  trigger file to start at a chosen moment.
- `--frame_dump_only_while_sweeping=true` — dump N == chunk N.
- `--gpu_ignore_bin_predication=true` — correctness-only check; bin masks are
  just per-tile culling so ignoring them cannot remove geometry. Runs ~6 fps and
  crashed after a while — diagnostic only.
- `--gpu_memexport_clamp_to_draw=true` — see item 1. Ships off.
- `--gpu_log_memexport=true` — `[MEMEXPORT]` ranges, deduplicated.
- Resolve logging is deduplicated by register value now, not per occurrence.

## Reproduce

```sh
# static start-line scene, good for A/B (~5 min)
cd ~/ss-recomp && PRESSES=40 THROTTLE=60 bash tools/d3d/drive2.sh /tmp/out [flags...]

# front-end screens only (~3.5 min): presses N times, then stops and dumps
bash <scratchpad>/probe.sh /tmp/out 22 [flags...]

# trace every guest file open
--log_noisy=true --log_level=trace --log_max_file_size_mb=400 --log_max_files=3
```

Frames are `frame_*.ppm`; `magick frame_0088.ppm out.png` to view.

## Traps (cost time today)

- The manifest reads the disc dump **in place**; it had been sitting in
  `~/.local/share/Trash` and codegen failed with "Entrypoint XEX not found". It
  now lives at `~/Downloads/Split.Second.USA.X360-ZTM/`. `drive2.sh` honours
  `SS_GAME_DATA_ROOT`.
- "`BaseHeap::Release failed because address is not a region start`" from codegen
  is **benign noise** printed next to a successful summary, not the abort the old
  notes claim.
- The PCH goes stale after system header updates; rebuild just that target's
  `cmake_pch.hxx.pch`.
- Never park a fix in `generated/` — a regen silently reverted the skipper DLC
  stub while the built `.so` kept it, so the tree looked fine and the next
  rebuild would have regressed the boot. Host overrides go in `src/` and are
  linked with `target_sources` (see `src/skipper_stubs.cpp`).
- Cross-library symbols between the runtime and the GPU plugin do not resolve
  (hidden visibility) — a diagnostic counter defined in
  `src/graphics/command_processor.cpp` and used from the vulkan one made the
  plugin fail to load. Keep plugin diagnostics inside the plugin.
- Don't edit a running shell script, and don't `pgrep`/`pkill` your own pattern.
