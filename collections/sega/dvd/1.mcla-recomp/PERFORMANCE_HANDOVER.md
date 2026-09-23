# MCLA / ReXGlue performance handover

**Status:** MCLA native rendering improvements are built, deployed, and
smoke-tested. Cross-title validation with Burnout Revenge is pending an
isolated display server in the shared development environment.

## Scope and terminology

MCLA is generated **native C++**, not a conventional CPU emulator. ReXGlue's
shared Xenos Vulkan runtime still performs CPU-side graphics preparation:
Xenos state translation, shared-memory coherency, texture upload and
conversion, descriptor construction, pipeline lookup, and Vulkan submission.

The GPU already performs vertex fetch, texture sampling, shaders,
rasterization, and rendering. The completed work reduces CPU-side Vulkan
driver and renderer preparation cost. It does not move game-specific traffic
AI, vehicle physics, or gameplay code to GPU compute.

## Deployed shared-runtime improvements

### Exact vertex-range residency

Files:

- `rexglue-vmx/src/graphics/vulkan/command_processor.cpp`
- `rexglue-vmx/src/graphics/shared_memory.cpp`
- `rexglue-vmx/include/rex/graphics/shared_memory.h`

Hot streaming-pool invalidations no longer force unrelated static vertex
ranges back through the deferred upload path. ReXGlue checks whether the exact
range remains GPU-resident before requesting it again.

Deferred vertex ranges are sorted and merged before resident-range checks,
avoiding duplicate bitmap scans and a redundant later sort/merge.

### Frame-local material descriptor cache

Files:

- `rexglue-vmx/include/rex/graphics/vulkan/command_processor.h`
- `rexglue-vmx/src/graphics/vulkan/command_processor.cpp`

Texture descriptor sets are keyed by descriptor layout plus image views,
samplers, and layouts. Matching materials that recur non-adjacently in one
frame reuse an immutable Vulkan descriptor set instead of allocating and
updating another one.

The cache is cleared at frame open. Sets remain in the existing transient
in-flight lifetime queue, so they are never rewritten while GPU submissions
may reference them.

Diagnostic switch:

```text
--vulkan_reuse_material_descriptor_sets=false
```

The existing consecutive-draw descriptor reuse remains independent and enabled
in both modes. Frame-stat CSVs append:

```text
texture_sets_material_reused
```

This new column is appended so existing column order remains compatible.

### Stable-binding fast path

Files:

- `rexglue-vmx/include/rex/graphics/vulkan/command_processor.h`
- `rexglue-vmx/include/rex/graphics/vulkan/texture_cache.h`
- `rexglue-vmx/src/graphics/vulkan/command_processor.cpp`
- `rexglue-vmx/src/graphics/vulkan/texture_cache.cpp`

When the shader translations, the fetch constants of the slots those
translations actually read, the per-slot texture binding epochs, the texture
set layouts, and the resolved sampler handles all match a recently seen state,
`UpdateBindings` skips texture image-view resolution. A 16-entry MRU cache
covers alternating materials (a single-entry cache only helped strictly
consecutive repeats). The previous draw's entry is deep-compared directly
(pointer checks plus per-slot memcmp); the FNV key hash is computed only when
that fails and the rest of the MRU is scanned, where it prefilters the deep
compare - hashing every draw cost more than it saved. A hit on the
immediately previous draw's entry additionally skips the descriptor vector
comparison, because the descriptor sets provably still hold its contents.

Per-slot epochs (`texture_binding_epochs_[32]`) are bumped by
`UpdateTextureBindingsImpl` and by texture destruction, so an upload,
invalidation, or recreated view forces a re-resolve only for draws touching
the affected slot.

Keyed on used slots only: keying on all 32 fetch constants missed constantly
because unrelated streaming slots churn every frame.

Diagnostic switch (also disabled by `--vulkan_reuse_texture_descriptors=false`):

```text
--vulkan_texture_binding_fast_path=false
```

Frame-stat CSVs append `texture_sets_binding_fast_path` (count of hits).
Measured on the city route: about 1,800-1,900 hits per frame, and
`UpdateBindings` drops from ~3.2% to ~1.9% of all CPU in perf. Scene
non-determinism makes the frame-stat CSVs unreliable for A/B (draw counts
vary by 30% between identical scripted runs) - judge binding work by perf
sample share, not by bindings_ms across runs.

### Run-length float constant copies

The float constant upload loops in `UpdateBindings` copied one 16-byte
constant per `bit_scan_forward` iteration. Shader constant maps are mostly
dense runs, so runs of consecutive set bits are now copied with a single
`memcpy` apiece. `bit_scan_forward` was about 1.8% of all CPU in city
profiles.

### Pipeline state-input cache

Files:

- `rexglue-vmx/include/rex/graphics/vulkan/pipeline_cache.h`
- `rexglue-vmx/src/graphics/vulkan/pipeline_cache.cpp`

`ConfigurePipeline` used to rebuild the whole `PipelineDescription` from
guest registers and re-hash it into the pipelines hashtable on every draw.
Now the exact inputs `GetCurrentStateDescription` consumes are matched
against a 64-entry MRU of recent draws (deep `memcmp` decides, FNV hash only
prefilters the non-most-recent entries - a collision must never bind the
wrong pipeline). On a hit the register walk and the hashtable lookup are
skipped entirely; the atomic reload still observes async placeholder-to-real
hot-swaps, and async-in-flight pipelines fall through to the full path.

The key is masked to the fields the description actually reads. Hashing whole
registers missed almost every draw (15-17% hits) because of per-draw garbage
in `VGT_DRAW_INITIATOR::num_indices` and in blend controls of render targets
absent from the render pass; with masking, the city route hits ~95-97%.
`GetCurrentStateDescription` self-time drops to ~0.02% of CPU (from ~0.3%),
the description hashtable lookup roughly halves, and the remaining cost is
the input fill itself inside `ConfigurePipeline`.

WARNING: `PipelineStateInput` must stay in sync with
`GetCurrentStateDescription` - if that function starts consuming more guest
state, the key must grow to match, or the cache reuses a pipeline built for a
different description.

Diagnostic switch:

```text
--vulkan_pipeline_state_hash_cache=false
```

Frame-stat CSVs append `pipeline_state_hits` and `pipeline_state_lookups`.

### Texture fetch-write memoization

Files:

- `rexglue-vmx/include/rex/graphics/pipeline/texture/cache.h`
- `rexglue-vmx/src/graphics/pipeline/texture/cache.cpp`

Fetch constant writes used to mark the affected slots out of sync
unconditionally, so a game re-poking a whole fetch block per material made
`RequestTextures` re-parse constants, reconvert swizzles and redo the
`TextureKey` lookup for values it already holds. The write hook now compares
the raw 24-byte fetch constant against the last walked value and only drops
the slot out of sync on a real change. On the city route 13-24% of fetch
writes are identical rewrites (the rate varies with traffic density); the
skip is cheap and exact, and real changes invalidate as before.

Diagnostic switch:

```text
--texture_fetch_write_memoization=false
```

Frame-stat CSVs append `tex_fetch_writes` and `tex_fetch_unchanged`.

NOTE: `TextureFetchConstantsWritten` moved out-of-line from the header into
`cache.cpp`, which compiles into each GPU plugin - rebuilding only
`rexgpu-xenos` against a stale header mix produced a plugin that fails to
dlopen (undefined symbol). Rebuild the plugin after touching this header.

## Remaining known CPU costs (city scene profile, 2026-09-23)

- `UpdateBindings` is down to ~1.7% of all CPU (from ~3.2%) after the binding
  fast path, MRU cache with lazy key hash, and run-length constant copies.
  What remains inside it: the hash on MRU scans and the deep compares - both
  inherent to detecting changes - plus the per-draw uniform pool requests and
  the dynamic-offset re-bind of the constants set.
- `TextureKey` hashtable lookups (~1.0%) and `VulkanTexture::GetView` (~0.8%)
  - the per-draw texture request/binding path, not the descriptor path. These
  are real texture churn (streaming city), not rewrites.
- `RenderTargetCache::Update` (~0.9%) and `UpdateSystemConstantValues`
  (~0.9%).
- `submit_ms` + `ownership_ms` together measure ~0.6-0.7 ms per frame with no
  memexport draws - mostly stage-timer overhead, not batchable work.
- Guest code is ~31% of CPU, spread thin - out of scope for shared runtime
  work.

## Build and deployment

Built successfully:

```bash
cmake --build /home/jon/recomp-ports/recomp-family/_library/rexglue-vmx/out/build/linux-amd64 \
  --config Release --target rexgpu-xenos -j4
```

The active MCLA plugin was deployed to:

```text
/home/jon/recomp-ports/recomp-family/1.mcla-recomp/out/build/linux/librexgpu-xenos.so
```

The MCLA headless runner also copies a newer installed plugin automatically
before a run.

## MCLA validation

The current city workload is:

```bash
cd /home/jon/recomp-ports/recomp-family/1.mcla-recomp
HEADLESS_OUT=/tmp/mcla-city-material-cache-on \
GAME_ARGS='--vulkan_reuse_material_descriptor_sets=true \
--gpu_frame_stats_path=/tmp/mcla-city-material-cache-on.csv \
--gpu_pass_timing=true' \
PROFILE_AT=90 PROFILE_SECONDS=20 \
./tools/headless_play.sh 130 '35:Return:1 80:e:35'
```

Validation completed:

- Xenos plugin build succeeded.
- MCLA headless smoke and 130-second city runs completed.
- Captures continued changing through runs.
- No MCLA or Vulkan runtime errors were found. Only known nonfatal XKB messages
  appeared.

### Measured cache behavior

In the enabled city run, the material cache produced approximately:

- 713 non-adjacent material descriptor-set reuse hits per frame.
- 404 descriptor writes per frame.
- 2,046 total descriptor reuse hits per frame.

The cache-off counterpart reported zero material-cache hits and approximately
1,253 descriptor writes per frame. This directly verifies that the cache
removes around 850 descriptor writes per frame.

Do **not** claim a precise FPS increase from that comparison: the scripted
city route was not deterministic.

| Metric | Cache off | Cache on |
| --- | ---: | ---: |
| Draws/frame | 4,243 | 3,273 |
| Frame time | 21.60 ms | 21.83 ms |
| GPU pass time | 1.08 ms | 1.11 ms |
| CPU binding time | 3.94 ms | 4.26 ms |

Different draw counts make the frame-time and stage-time columns unsuitable
for a direct speedup claim, even though the avoided descriptor updates are
real and measured.

Relevant outputs:

- `/tmp/mcla-city-material-cache-off.csv`
- `/tmp/mcla-city-material-cache-on.csv`
- `/tmp/mcla-city-material-cache-off/`
- `/tmp/mcla-city-material-cache-on/`

## What the data says

MCLA is CPU-bound in the tested city scenes, not GPU-bound. GPU pass time is
about 1.1 ms while total frames are around 22 ms. The next generic ReXGlue
work should therefore target shared CPU-side rendering preparation, not
indiscriminate GPU compute.

Priority candidates, after cross-title confirmation:

1. Avoid image-view resolution and descriptor-vector comparisons before the
   descriptor cache lookup for stable bindings.
2. Batch or cache repeated pipeline/state lookup work across compatible draws.
3. Reduce texture upload/transition preparation where the same pattern appears
   in more than one title.
4. Continue shared-memory upload/residency batching only when exact-range
   correctness remains proven.

Do not move arbitrary game simulation to GPU in ReXGlue: traffic AI, physics,
and title gameplay are generated native title code, and changing them would
not be a safe generic runtime optimization.

## Cross-title validation status

### Split/Second

The port has a race-driving profiler:

```bash
cd /home/jon/recomp-ports/recomp-family/ss-recomp
DRIVE_SECONDS=90 CLEAN_SECONDS=25 STACK_SECONDS=25 \
bash tools/d3d/profile_race.sh /tmp/ss-shared-profile \
  --gpu_frame_stats_path=/tmp/ss-shared-frame-stats.csv \
  --gpu_pass_timing=true
```

The harness did not reach its drive phase in this environment. Treat that as a
title/harness navigation issue, not a performance conclusion.

### Burnout Revenge

Burnout has a documented race path:

```bash
cd /home/jon/recomp-ports/recomp-family/burnoutrevenge-recomp
HEADLESS_OUT=/tmp/burnout-shared-profile PROFILE_AT=110 PROFILE_SECONDS=20 \
GAME_ARGS='--gpu_frame_stats_path=/tmp/burnout-shared-frame-stats.csv \
--gpu_pass_timing=true --vulkan_reuse_material_descriptor_sets=true' \
./tools/headless_play.sh 150 '25:Return:1 100:e:35'
```

It could not be run here because gamescope faulted before launching the game.
A direct gamescope probe showed every display socket it probes is occupied;
only shared `:1` is active. Do not remove or alter those sockets.

The safe solution is to install or provide an isolated display server, then
run Burnout on a private display. `Xvfb`, `Xephyr`, `weston`, and `cage` are not
installed. System package installation requires sudo credentials unavailable
to this session, and `apt-get` is also not available.

## Next actions

1. Provide an isolated X server/compositor, or free a test-only gamescope
   display allocation outside this shared session.
2. Run the documented Burnout route with GPU frame stats and cache enabled.
3. Repeat it with only `--vulkan_reuse_material_descriptor_sets=false`.
4. Compare equal scene windows only: draws, render passes, GPU pass time,
   CPU binding time, texture upload, pipeline work, and material-cache hits.
5. If the same CPU-side binding/descriptor pattern appears in both titles,
   retain the cache as a shared ReXGlue optimization and proceed to the next
   shared CPU preparation bottleneck.
