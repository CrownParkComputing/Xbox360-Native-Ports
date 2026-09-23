# Split/Second — Static Recompilation (Xbox 360 → Linux, WIP)

Title 425607E7 (Disney/Black Rock, 2010). **Multi-module** recomp: DEFAULT.XEX
launcher + SKIPPER.DLL (DLC loader) + SPLITSECOND1.DLL (15.6MB engine),
recompiled with the rexglue-sdk-rru fork (branch rru-fixes).

**Next session:** [ordered next steps and verified defaults](docs/d3d/NEXT.md).
See [current status](docs/STATUS.md) and [DLC status](docs/DLC.md).

**Status (2026-09-12): boots, menus and renders a race.** World geometry is
substantially improved; selective compositor readback fixes the corrupted car
paint without copying every rendered surface. HUD placement and the power-play
bar remain incorrect.
Large scenery-changing power plays used to trigger long synchronous pipeline
compilations; a warm cache is now shipped with the title and first-use
compilation is measured per frame. Normal game pacing is 30 FPS *by design* -
the title presents every second vblank, so this is the Xbox 360 behaviour and
not a performance limit (docs/d3d/PACING.md). 60 FPS at correct simulation speed
remains open and is a guest-side problem, not a renderer one. See docs/STATUS.md for the current reach, the closed blockers
and the build traps, and docs/d3d/ for the renderer investigation.

## How much of this is native?

Measured by sampling the running process with `perf` over a race
(`bash tools/d3d/perf_race.sh`, user cycles, share of all samples):

| where the cycles go | share |
| --- | ---: |
| **the game's own code, recompiled to x86** (`libsplitsecond_SPLITSECOND1.so`) | **59.5%** |
| Xenos GPU command emulation (`librexgpu-xenos.so`) | 11.4% |
| runtime: kernel, threading, memory services (`librexruntime.so`) | 8.8% |
| host GPU driver (`libnvidia-glcore`) | 9.3% |
| libc, vdso, kernel, compositor, other | ~11% |

So roughly **60% of executed cycles are the title's own code running natively**,
with about **20% in the rexglue layer** (GPU emulation plus platform services)
and the rest in the host driver and system libraries. Nothing here is
interpreted: the PowerPC was translated to x86 ahead of time, and the middleware
the game ships with - Havok, FMOD, Bink, Scaleform - is recompiled guest code
like the rest of it.

Two caveats worth keeping in mind when quoting these numbers:

- 17.3% of the total is the guest's *own* spin-wait for the GPU
  (`sub_888E0A70`), which is the title idling rather than working. Excluding it,
  the split of real work is closer to 51% game code, 24% rexglue, 25% host
  driver and system.
- The share moves with the scene, and it moved a lot this week: before the
  runtime fixes below, a polling wait in the SDK alone accounted for a quarter of
  all cycles.

Whole-process CPU over a fixed 40 s of racing fell from **2.49 to 1.91 cores**
this week (docs/d3d/CPU_PROFILE.md), all of it in the shared SDK, so every other
title built on it gets the same saving.

## Build
Same shape as rru-recomp: build the SDK fork (`--target install`), then:
```sh
cmake -S . -B out/build/linux -G Ninja -DCMAKE_BUILD_TYPE=Release \
      -DCMAKE_CXX_COMPILER=clang++ \
      -Drexglue_DIR=$HOME/rexglue-vmx/out/install/linux-amd64/lib/cmake/rexglue
cmake --build out/build/linux -j$(nproc)   # builds splitsecond + 2 module .so
```
Copy `librexruntime.so`, `librexgpu-xenos.so` and `config/splitsecond.toml`
beside the binary; run with `--game_data_root <dump> --gpu_plugin xenos`.
`splitsecond.toml` carries the known-good run config, each setting documented
inline with its reason — including `unregistered_function_nonfatal = true` (the
DLC no-op path; recompiling those functions runs the real DLC logic against the
unmounted device and crashes — do not) and `readback_memexport = false` (without
it the in-race world draws as garbage geometry; see docs/d3d/FINDINGS.md).

The complete local disc dump lives in `assets/` (ignored by Git). The manifest
reads the XEX and DLLs there; it no longer depends on the Downloads folder.
Private content is packed into one stored zip, `content/ss-content.zip`, which
is never committed - only `content/content.sha256` is, recording the archive's
SHA-256 and every file's. Importing it is not part of the build: `./run.sh`
checks `assets/` against those checksums and, only when they do not match, asks
where the archive is (or takes `SS_CONTENT_ZIP=/path/to/ss-content.zip`).
Re-pack with `tools/content_zip.sh pack` after changing `assets/`.
Run `./run.sh` to launch with these assets and the existing local save/cache root.
For a new cache, the launcher seeds the portable shaders captured during our
tests, so known pipelines can compile at startup. Existing caches are preserved;
this is partial coverage, not a guarantee of stutter-free gameplay.
The redundant ZIP and original Downloads/ZTM folder were deleted at the user's
request after rechecking all 161 retained asset hashes. The private release parts
remain the backup; `assets/` remains the working copy.
Host overrides that must survive re-codegen go in `src/` and are linked
into the module targets from the top-level CMakeLists (see
`src/skipper_stubs.cpp`) — never as hand edits to `generated/`.

## Disc-free package
`tools/make_dist.sh assets <version>` is an optional manual ZIP packager.
It is not part of the normal build or private content restore workflow. The
previous ZIP was deleted as requested; cleanup does not regenerate one. Changes
to this packager have only been syntax-checked, not validated as a standalone
distribution. DLC and personal saves are not included by it.

## Headless renderer tests

On Linux with Gamescope, Xwayland and xdotool installed:

```sh
python3 tools/d3d/headless.py out/my-render-test -- \
  --readback_resolve=full --gpu_readback_ss_compositor=true
```

This renders on the real GPU in Gamescope's private headless display. It opens
no desktop window, sends input only to the private display and uses dummy audio.
Frame captures, CSV counters and logs go into the chosen fresh output directory.
The runner copies saves into that directory and shares the shader cache; test
progress does not overwrite live saves. It confirms menu choices and holds the
throttle for a bounded run. Inspect captures to confirm a race was reached.
Headless and desktop frame times are not matched benchmarks.

## Repos
- Game: github.com/CrownParkComputing/ss-recomp
- SDK: github.com/CrownParkComputing/rexglue-sdk-rru (branch rru-fixes)
