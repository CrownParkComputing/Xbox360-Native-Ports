# What actually sets the frame rate — measured 2026-09-12

First whole-process CPU attribution for this title, plus a direct measurement of
where the guest's main thread spends a frame. Earlier documents measured only
GPU-side counters from the command-processor thread, so the guest side of the
frame had never been observed.

Tools added with this work:

- `tools/d3d/cpu_profile.py` — per-thread CPU time from `/proc`, no root needed.
  (Its `eu-stack` sampling phase is inert on this machine: `kernel.yama.ptrace_scope`
  is 1, so the backtraces come back "Operation not permitted". Per-thread CPU
  attribution is unaffected.)
- `tools/d3d/timehooks.py` — generates `tools/d3d/hooks/timing_hooks.cpp`, a strong
  override per D3D entry point that times the outermost band call on each thread
  and reports per-frame totals from the present override (`D3DTIME` lines).
- `tools/d3d/profile_race.sh` — drives headless to a race and profiles while driving.
- `SS_GAMESCOPE_REFRESH` in `tools/d3d/headless.py` sets the host compositor's rate.

Build the timing hooks with `bash tools/d3d/build_hooks.sh
/home/jon/ss-recomp/tools/d3d/hooks/timing_hooks.cpp` (absolute path; the script
changes directory). Relink without the extra object afterwards — a build with
hooks linked in must never be mistaken for a shipping build.

## 1. The 33.3 ms frame is a presentation interval of two, not a workload

`--video_mode_refresh_rate` drives the runtime's emulated vblank
(`graphics_system.cpp:149-170`). Boot-screen frames, 200 samples each:

| host (gamescope) | guest vblank | frame | inside present |
| --- | --- | ---: | ---: |
| 60 Hz | 60 Hz | 33.08 ms | 27.78 ms |
| 120 Hz | 60 Hz | 33.07 ms | 28.15 ms |
| 60 Hz | 120 Hz | **16.67 ms** | 14.86 ms |
| 120 Hz | 120 Hz | **16.68 ms** | 14.07 ms |

The frame tracks the *guest* vblank at exactly two ticks per present and ignores
the host compositor entirely. The title presents with a presentation interval of
two — a deliberate 30 FPS lock, which matches the Xbox 360 release. A boot frame
draws almost nothing (40 band calls) and still takes 33.3 ms, so this is a wait,
not work.

Confirmation from the other direction: a race run with **every GPU draw skipped**
(`--gpu_skip_draws=0:999999`) still produced 33.26 ms frames with 16.97 ms inside
present. Rendering work does not set the frame rate at 30 FPS. Optimising the
renderer cannot raise the frame rate while the interval is two; its value is
fidelity, correctness and headroom on weaker hardware.

## 2. Where the guest frame goes

Race frames, timing hooks on all 200 D3D entry points, medians of 390 frames
(`out/d3dtime-1`):

| part of the main thread's frame | ms |
| --- | ---: |
| inside present (`sub_888EB588`, waiting) | 15.4 |
| rest of the D3D band (~9,800 calls/frame) | 5.6 |
| everything else — guest game code | ~12–18 |

The whole rest of the band is small: `DrawIndexedVertices` is 0.29 ms across ~895
calls per frame, all state setting together is about 1 ms. Per-thread CPU over 40
undisturbed seconds of racing:

| thread | cores |
| --- | ---: |
| Main XThread | 0.82 |
| Audio Worker | 0.49 |
| GPU Commands (PM4 + Vulkan) | 0.36 |
| splitsecond (host/presenter) | 0.34 |
| TileClassification | 0.14 |
| everything else | ~0.25 |
| **total** | **2.40** |

The main thread is near-saturated, but roughly half of it is burnt spinning
inside present, so actual main-thread work is around 12–17 ms.

## 3. What 60 FPS would take

With the guest vblank at 120 Hz *in a race* the frame did **not** halve: it stayed
at 33.3 ms with 16 ms still inside present. At 120 Hz an interval of two means a
16.67 ms deadline; the main thread's ~22 ms of pre-present frame work misses it,
so the wait quantises to the next pair of vblanks. That is the real 60 FPS
budget: **main-thread frame work must come down from ~22 ms to under 16.7 ms**,
and the guest's fixed timestep must be decoupled from the present cadence or the
simulation simply runs at double speed (as run 074 found).

So 60 FPS is a guest-side project — timestep plus main-thread cost — not a
renderer project. The D3D band is only ~5 ms of it; most of the rest is
recompiled game code (Havok, streaming, Scaleform, AI) that has never been
profiled at function level.

## 4. Blocked on

Function-level attribution inside the main thread needs sampling:

```sh
sudo pacman -S perf
sudo sysctl -w kernel.yama.ptrace_scope=0   # or 1 with a descendant tracer
```

Until then `cpu_profile.py` gives thread-level attribution only. `perf record -g`
on a race would name the recompiled functions that make up the ~12–17 ms, which
is the input needed before any guest-side optimisation is attempted.
