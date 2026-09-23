# Expensive paths — measured 2026-09-12

## Follow-up: selective readback removes the regression

Run 086 traced the compositor's actual CPU read locks to six complete RGBA
surfaces: pitch 1024, 512, 256, 128, 64 and 32, each with height twice its pitch.
The readback byte count equals pitch × height × 4. The 1024×2048 tiled shadow
resolve only writes 4 MiB rather than 8 MiB, so it does not match. No guest
addresses are hardcoded. The smaller packed levels seen in CPU locks did not
match a separate resolved range in the trace; inspect distant mip behavior in
future testing rather than claiming every car/LOD has been validated.

`gpu_readback_ss_compositor` now filters full readback to those six complete
surface shapes. It defaults OFF in the SDK and ON in this title's configuration.
Run 089 in Gamescope's private headless display retained coherent car stripes
and badges and recorded zero steady-state readbacks, with frames around 33 ms.
The preserved 120-frame racing sample (swaps 3781–3900) averages 33.344 ms/frame
and 14.999 ms draw CPU, with zero readback copies and 5.65 queue submissions.
See `evidence/bottlenecks/selective_race.csv` and `selective_car.png`.
This is not a matched desktop/headless benchmark, but the counter directly
confirms removal of the recurring copies. Correct-speed 60 FPS remains open.
The filter and mesh-copy tests pass 32 assertions across four test cases.

The existing `fast` readback mode also kept car paint correct in run 086, but
continued copying about 80 MiB per frame. It was a diagnostic, not the selected
configuration. The source notes and full-readback timings below describe the
regression and remaining optimization candidates.

The first measured optimization target was full resolve readback. The largest intermittent
stall is Vulkan pipeline creation. Neither finding requires replacing the whole
runtime. CPU compression and synchronous asset I/O are specific candidates,
but their individual costs have not been measured.

## Current race sample

Run 084, swaps 2161–2280, 120 consecutive frames during racing. FSI, full resolve
readback (correct car textures), normal 60 Hz video mode and an existing shader
cache. This is a live gameplay sample, not a matched before/after benchmark.
The full capture is in `out/path-profile/`; the selected raw counters and summary
are preserved in [evidence/bottlenecks](evidence/bottlenecks).

| Path or counter | Mean per frame | Implication |
| --- | ---: | --- |
| Whole frame | 84.73 ms | About 11.8 frames/second in this sample |
| Resolve/readback path | 59.69 ms | Largest measured recurring path |
| Submission/completion inside readback | 48.04 ms | Repeated waits prevent CPU/GPU overlap |
| CPU copying inside readback | 10.59 ms | Memory copying alone consumes much of a 16.67 ms budget |
| Readbacks | 76, totaling 84,246,528 bytes (80.34 MiB) | Full mode copies every successful resolve, not just CPU consumers |
| Queue submissions | 80.85 | Frequent synchronization; earlier no-readback racing averaged about six |
| Draw processing excluding resolve path | 19.41 ms | Another substantial cost even after targeting readback |
| Draw calls | 4,274 | Includes the engine's EDRAM tile replay work |
| Texture descriptor sets written / reused | 1,336 / 488 | State setup is still frequent; its isolated time is unmeasured |

**Do not add nested timings.** Draw CPU time includes resolve time. Readback
submission/completion and copying are inside resolve time. Fence wait (43.62 ms)
is also nested in submission/completion, not an extra cost or a GPU execution
timer. GPU work must still execute if readbacks are removed; the full 59.69 ms
is not a promised saving.

### 1. Full GPU-to-CPU resolve readback — confirmed recurring bottleneck

SDK `src/graphics/vulkan/command_processor.cpp`:
`IssueCopy` → `IssueCopy_ReadbackResolvePath` → transfer command →
`AwaitAllQueueOperationsCompletion` → invalidate mapped memory → `memcpy` into
guest physical memory. The current full mode forces completion for every copy.

Next change: identify actual CPU consumers and read back only their results,
preserving completion before CPU access. Keep ordinary GPU-only targets on the
GPU. Do not blindly exclude a destination based on size or use delayed previous
frame data: the compositor needs current contents. Global memexport readback
must remain disabled; it is a separate, previously corrupting mechanism.

### 2. First-use Vulkan pipeline creation — confirmed intermittent bottleneck

SDK `src/graphics/vulkan/pipeline_cache.cpp`, `vkCreateGraphicsPipelines`, reached
from draw-time pipeline configuration:

- Run 075, swap 3923: 9,613.95 ms frame, 9,500.92 ms logged pipeline compilation.
- Run 081, swap 12801: 4,849.40 ms frame, 4,789.06 ms compilation.
- Run 081, swap 12804: 2,089.09 ms frame, 2,055.57 ms compilation.

The last two occurred at the save/results transition. The measured stall was
graphics compilation, not evidence that save-file writing was slow.

Next change: expand portable pipeline coverage and schedule compilation before
the relevant scene is drawn. Driver caching and bundled warmup seeds already
help known shaders. The experimental unoptimized-first/background mode still
blocked for 1.22 seconds in one driver call; it is not a solved replacement.

### 3. Repeated draw preparation — confirmed aggregate, subcosts not isolated

`VulkanCommandProcessor::IssueDraw` repeatedly performs shader/state checks,
`RequestTextures`, pipeline lookup, `UpdateBindings`, shared-memory requests
and command recording. The current sample's non-resolve draw work is 19.41 ms.
Run 081 before full readback had median draw CPU time 20.46 ms across 11,869
draw-count-filtered frames. Different scenes prevent treating these as an A/B test.

Next measurement: aggregate each draw stage (including short calls), then avoid
rebuilding unchanged bindings/constants and rechecking unchanged texture state.
Descriptor counts alone do not prove that descriptor updates dominate. Tile
replays are real rendering work; suppressing them is not a valid optimization.

### 4. Asset reads that execute synchronously — source-confirmed candidate

SDK `src/kernel/xboxkrnl/xboxkrnl_io.cpp`, `NtReadFile_entry`, uses
`if (true || file->is_synchronous())` and calls `file->Read` on the calling thread.
Thus even an asynchronous guest request can block that thread on host I/O.
The optional artificial delay defaults to zero and is not the identified issue.

Next measurement: read latency, bytes and caller-thread stalls during scenery
changes, including guest decompression separately. A proper asynchronous path
must preserve completion events/APCs and buffer lifetime. No evidence currently
attributes the measured 9.6-second power-play stall to this path.

### 5. Vehicle texture composition/compression — specific unmeasured candidate

Guest compositor dispatch `sub_8842C250` starts work on its compressor thread;
`sub_884139A8` performs texture copy/resize/packing through `sub_887FED40`,
`sub_88457CE0` and `sub_887FEE70`. The last calls `sub_889D95C0` with surface
format/layout arguments. These guest routines are already compiled native code.

Next measurement: time the compositor's CPU stages and establish when they run.
A GPU implementation could keep the complete chain on-device, but no isolated
compression cost or guaranteed saving is established yet. Correct car textures
with resolve readback prove a data-coherency dependency, not that compression
itself is the largest CPU hotspot.

No measurements yet justify prioritizing replacement of input, saves, audio,
general memory allocation or thread primitives. Profile those before rewriting
them. Correct-speed 60 FPS also requires resolving the game's pacing dependency;
raising the video rate to 120 Hz sped up simulation and was rejected.

## Reproducing the counters

Run with a fresh `--gpu_frame_stats_path=<file.csv>` and optionally
`--gpu_log_slow_draw_ms=20`. The counters are disabled by default. Analyze with
`python3 tools/d3d/frame_stats.py <file.csv> --log <game.log>`; the script accepts
both the older CSV layout and the new readback columns. Draw-count filtering
alone can include cinematics: check captures and select a race interval.
