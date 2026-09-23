# Rendering performance — 2026-09-12

Latest measurements: [BOTTLENECKS.md](BOTTLENECKS.md). Full resolve readback now
fixes the car textures, but a 120-frame race sample spent 59.69 ms/frame in the
resolve/readback path, including 48.04 ms submission/completion and 10.59 ms
copying. Historical no-readback results below are not current performance.

## Later experiments

Run 077 persisted a Vulkan driver pipeline cache (about 58 MiB) alongside the
shareable shader descriptions. A writer bug could defer the final flush until
another request arrived; flush-only work now runs immediately and orderly
shutdown drains the queues. Cache snapshots happen on the storage thread after
an idle timeout and are written via a temporary file. Header device IDs and UUID
are checked before loading; cache failures fall back to ordinary creation.

Run 078 used a separate empty application cache and
`vulkan_pipeline_background_optimization=true`. The full real shaders were used
for both versions: `DISABLE_OPTIMIZATION` on first creation, ordinary creation on
two background workers, with replacements published at submission boundaries.
This avoids the existing discard-placeholder path, but **did not eliminate the
stall**: VS `27A5C961413F0350` / PS `9ED8B78A4EE188F8` still took 1,217.70 ms in
the fast creation call. The driver may ignore the optimization hint. Its global
shader cache was not cleared, so this was not a fully cold driver benchmark.

Across 4,278 frames with at least 1,000 draws, mean frame time was 36.375 ms,
median 33.434 ms, p95 49.567 ms; two frames exceeded one second. This includes
first-load work and is not a matched comparison to previous races. Keep the
experimental mode OFF by default. A later feature-gated Vulkan 1.3 cache probe
avoids recompiling known optimized pipelines; background-mode validation of
that additional branch remains outstanding.

Run 079 tested FBO with background optimization OFF. It loaded 60,312,663 driver
cache bytes and prewarmed 586 pipelines. However, captures 21–24 were completely
black and the user confirmed blanking. **FBO is not a usable default.** FSI was
restored. The random imagery on car bodywork remains present with either path.

Vulkan specifies that disabling optimization *may* reduce creation time; it is
not a latency guarantee. See the [pipeline flags specification](https://docs.vulkan.org/refpages/latest/refpages/source/VkPipelineCreateFlagBits.html).

## Normal speed and the scenery-change stall

Run 075, `/tmp/ss-perf-normal60`, used video refresh 60 Hz, synchronous shader
compilation, the guarded mesh-copy range fix, descriptor reuse, shared-memory
fast paths and disabled guest auto squeeze. The game still presents about 30
frames per second. Setting video refresh to 120 Hz (run 074) sped up simulation;
it is not a valid 60 FPS fix and was never persisted in the config.

User triggered a large power play that changed the scenery. CSV swap 3923
lasted **9,613.953 ms**, with **9,610.159 ms draw CPU time**, zero measured fence
wait and 3,013 draws. Slow-draw logs labelled swap 3922 account for **9,500.92 ms
of pipeline compilation** (draw labels precede the increment at IssueSwap).
CSV swap 4149 later took 1,527.654 ms, including 1,480.78 ms of logged pipeline
compilation. Ordinary driving had no comparable long individual calls.

Existing shader/pipeline storage is loaded on startup. Next investigation:
verify these new pipeline descriptions are persisted and prewarmed on a repeat
run, then move first-use creation ahead of the scenery transition. Blindly
enabling async compilation can skip or corrupt draws and is not a verified fix.

A recent 120-frame normal-speed race sample before the transition:

| Metric | Mean | Median | p95 |
| --- | ---: | ---: | ---: |
| Frame ms | 33.340 | 33.356 | 34.249 |
| Draw CPU ms | 19.356 | 18.788 | 25.659 |
| Fence wait ms | 0 | 0 | 0 |
| Draw count | 3,438 | 3,424 | 3,691 |
| Texture descriptor sets written | 928 | 924 | 1,098 |
| Texture descriptor sets reused | 243 | 236 | 294 |

These are live gameplay samples, not matched A/B captures. Fence wait is not a
GPU execution timer. Draw CPU already exceeds the 16.67 ms budget in this sample.

## Implemented changes and remaining validation

- Vulkan reuses texture descriptor sets when actual image views, samplers and
  descriptor layouts match. Existing per-frame validity reset guards pool reuse.
  Pipeline-layout changes now apply the computed descriptor compatibility mask.
- Single already-valid shared-memory requests avoid temporary range sorting and
  allocation. Repeated validity marking skips rearming CPU write callbacks when
  every page was already valid; CPU invalidation clears validity. Sparse allocation,
  ownership bits and watch notifications retain their existing contracts.
- `src/rendering_overrides.cpp` calls the guest auto-squeeze registration routine
  then disables its enable byte. `SS_AUTO_SQUEEZE=1` restores guest behavior for
  comparison. This candidate addresses changing resolution, not all blur. The
  newly reported HUD position / power-play bar defect needs an A/B check.
- `gpu_frame_stats_path` enables CSV counters. `gpu_log_slow_draw_ms` enables
  thresholded phase timing. Both default off.

Release plugin and engine builds pass. Mesh-copy helper tests pass all 17
assertions. Normal-speed gameplay runs with these changes, but shared-memory
fast paths still need dedicated coherency regression coverage. Car materials,
HUD placement and the power-play bar remain incorrect. Stable 60 FPS at correct
simulation speed is not achieved.
