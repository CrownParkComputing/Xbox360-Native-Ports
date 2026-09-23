# D3D9 band investigation — findings (2026-09-12)

## 0. FIXED: in-race rendering works — memexport readback was corrupting the vertex pool

**One flag: `readback_memexport = false`.** Now set in `config/splitsecond.toml`.
Evidence: `docs/d3d/evidence/race_rendering_fixed.png` — an in-race frame with the
car, road markings, kerbs, scenery, buildings and HUD all correct, where the same
drive previously produced screen-spanning garbage.

### The mechanism, end to end

1. **The engine uploads streamed mesh data to GPU memory with memexport draws.**
   `cGPUMemoryCopy` (ctor `sub_887C6678`, `AddMemory` `sub_887C5500`, copy
   `sub_887C5680`) issues a POINTLIST draw of one vertex per 64 bytes through the
   `gpu_memory_move` shader, which fetches 8x8B per vertex and memexports it to the
   destination. Requests are rounded up to 128 bytes at `sub_887C6178`
   (`addi r11,r4,127; rlwinm r4,r11,0,0,24`) — the source of the 128-byte-aligned
   corruption boundaries. There is no CPU copy on this path at all, which is why
   every CPU copy routine verified byte-exact and no loader destination ever
   intersected a corrupt buffer.
2. **The SDK then copied memexport results back into guest RAM.**
   `readback_memexport` defaults to `true` in this fork
   (`~/rexglue-vmx/src/graphics/command_processor.cpp:65`), as does
   `readback_memexport_fast`. **Upstream Xenia has neither.**
3. **The fast path scatters bytes to the wrong addresses.**
   `~/rexglue-vmx/src/graphics/vulkan/command_processor.cpp:4528-4645` keys its
   double-buffered slots on `(front range base, total size)` only (`:4538`), so
   draws with different range lists collide; and the writeback (`:4638-4642`)
   copies the **previous** slot's bytes while iterating the **current** draw's
   ranges, `memcpy`-ing into `TranslatePhysical(...)`. Mismatched bytes land at the
   wrong guest addresses — "correct prefix, then unrelated bytes".
4. **The blast radius is huge.** A tile-classification shader
   (`vs=C8302F90258AC60E`) declares memexport destinations of 63 MB
   (`0x15B10000-0x19A10000`) and 20 MB (`0x13A60000-0x14E60000`). Measured:
   **1176 of 1544 corrupt vertex buffers (76%) have their first bad byte inside a
   declared memexport destination.** In-race only, because tile classification does
   not run in menus.

### Caveats and follow-ups

- **CPU-side corruption metrics are no longer valid** with readback off: guest RAM
  is deliberately not synced, so `validate.py` and the `[CORRUPT-VB]` counter
  report false positives (1114 "corrupt" buffers in a run that renders correctly).
  Judge this by the picture, or add a GPU-side check. For the same reason
  `gpu_skip_nonfinite_draws` must be OFF in normal use — it now drops good draws.
- **The SDK default was left at `true`** to avoid regressing Ridge Racer Unbounded,
  which shares the backend and does not set the cvar. Flipping it to match upstream
  needs an RRU run first. The cvar's help text now documents the hazard.
- **The two fast-path defects are real bugs** and worth fixing regardless: key on a
  hash of all ranges, and store the range list with each slot. Mirror in the D3D12
  backend (`src/graphics/d3d12/command_processor.cpp:2714`).
- **The 63 MB export range is its own bug.** Even with readback off,
  `RangeWrittenByGpu` over 63 MB suppresses legitimate uploads for that span.
  Compare `AddMemExportRanges` against upstream for this shader's `eA` setup.
- Environment note: the host NVIDIA driver was updated mid-session and the loaded
  kernel module no longer matches (`NVML library version: 615.71`, "Failed to
  detect any valid GPUs"), so the game cannot start until the module is reloaded or
  the machine rebooted. Unrelated to these changes.


Status of the programme in `PLAN.md`. Wave 0 complete; Wave 1 a–d substantially
complete; W2-c (command buffers / surplus draws) complete.

## 1. RESOLVED: the surplus draws are tiling replay, not new work — the seam is clean

An in-race frame executes far more PM4 draws than the D3D draw API is called for
(first measurement: 4555 GPU draws vs 1619 API calls). **This was initially read
as pre-baked command buffers bypassing the API. That was wrong.** W2-c settled it
two ways, both independently re-verified:

**a. The baked command-buffer path is dead code.** The API exists and is now named
(`D3DDevice_BeginCommandBuffer` = `sub_888EC2F8`, `EndCommandBuffer` =
`sub_888EC100`, `RunCommandBuffer` = `sub_888ECC28`, engine bake `sub_88815130`,
per-RT replay `sub_888050E8`, gated in `sub_88816028` on cvar
`CommandBuffer/RuntimeEnabled` at `0x88E977B0`). Hooked all of them over a full
boot→menu→race capture: **`BeginCommandBuffer=0`, `EndCommandBuffer=0`,
`RunCommandBuffer=0` in every one of 4188 frames.** Nothing is ever baked or
replayed.

**b. The surplus is D3D's predicated-tiling replay of the same draws.**
`sub_888E8428` is a token-stream interpreter; token `0x87` loops back to `0x86`
while `ctx+52 < ctx+112` (tile count) and token `0x81` re-submits an indirect
buffer. The same recorded PM4 segment is written to the ring once per EDRAM tile.

Arithmetic for capture `w2c_race2` (CPU frame 4137 / GPU swap 4138), verified
directly against the oracle log `splitsecond_036.log`:

| quantity | value |
|---|---|
| GPU PM4 draws in the frame | 4194 |
| distinct draw packets | 1890 |
| **surplus from tile replay** | **2304** |
| `RunCommandBuffer` calls | 0 |
| INDIRECT_BUFFER submissions | 590 (588 distinct) |
| one buffer submitted 3× (`0x1F9EFE20`, 69507 dw) | 1110 draws each |

Independent check on the shader sequence: draws 116..1267 and 1268..2419 and
2420..3571 are **100% identical** as `(vs,ps)` pairs — a 1152-draw block repeated
three times — and `116 + 3×1152 + 622 = 4194` exactly. The original 4555-vs-1619
gap has the same shape (2936 = 2×1468).

**Consequence: the per-draw D3D API is the complete draw set.** The plan's
go/no-go criterion passes once tiling is accounted for; no command-buffer track is
needed on the critical path. A host renderer should **suppress the replay
entirely** — execute each recorded draw once and ignore `SET_BIN_MASK` /
`SET_BIN_SELECT` / per-tile `PA_SC_WINDOW_OFFSET` — which removes 2304 of 4194
draws per frame before any optimisation. EDRAM tiling is a Xenos artefact with no
host meaning.

Things the host must still handle: collapse the three per-tile resolves into one;
the 768 null AABB draws (`prim=1 count=1 ps=0`) become dead work, but
`sub_888E81F0` consumes their memexported screen-space AABBs, so keep them alive
while running in tee mode; occlusion-query predication (`sub_888E8110`) — RRU's
"always visible" fallback is compatible.

**In-place patching (important for any PM4-caching design).** Across the three
submissions of the replayed buffer, exactly 555 dwords of 69507 differ — precisely
the number of top-level `DRAW_INDX` packets. Each is a `SET_BIN_MASK_LO` payload
immediately before a draw, changing `FFFFFFFF → 8000003F`. Guest functions
`sub_888E81F0` / `sub_888E8330` compute these from the memexported AABBs and store
them **into the middle of the live PM4 stream** with a `dcbf`. This is a hard
argument against caching decoded PM4, and is moot for API-level interception.

Detail: `docs/d3d/cmdbuf_rerecord.md`, `docs/d3d/cmdbufs.json`, decoder
`tools/d3d/w2c_pm4.py`, accounting `tools/d3d/w2c_analyse.py`.

## 1b. BREAKTHROUGH: the in-race garbage is corrupt vertex data, not the renderer

Tested by dropping, at draw time, any draw whose position stream is mostly
non-finite. The filter uses the shader's own declared layout (binding stride plus
the `k_32_32_32_FLOAT` attribute at offset 0), so it never touches half4/packed
formats. Cvars `gpu_skip_nonfinite_draws` and `gpu_nonfinite_threshold_pct`
(default 25) in `src/graphics/vulkan/command_processor.cpp`.

Result: **248 draws per frame dropped out of ~1900, and the real world appears** —
`docs/d3d/evidence/nonfinite_suppressed_scene.png` shows the airport track with its
radar tower, floodlights, terminal structures, sky gradient and distant mountains,
correctly projected, depth-sorted and composited with the HUD. Compare
`baseline_garbage.png`.

Supporting measurements, same frame (capture `race_all`, 1903 draws validated
against the disc data with each shader's real stride):

| observation | value |
|---|---|
| draws with non-finite / out-of-range vertices | 347 (18%) |
| of those, draws using `32_32_32_F` positions | **324 of 324 — all of them** |
| draws using any other position format with bad vertices | 0 |
| truncated world-geometry buffers in the frame | 599 |

`32_32_32_F` is precisely the world/track streamed-sector format; vehicles use
half4 and are unaffected. For a clean single case (draw 327) there are **zero** bad
vertices before the truncation point and **9060** after it.

**Consequence: the renderer is substantially working, and the parked
streamed-geometry corruption is the headline bug.** A native Vulkan renderer would
faithfully draw the same corrupt vertices and produce the same garbage. The
priority order set earlier ("renderer first") was based on the assumption that the
renderer was at fault; that assumption is now falsified.

Residual after suppression: black striping/tearing across some structures, from
corrupt draws below the 25% threshold plus the geometry legitimately missing
because its draw was dropped. Both disappear if the source corruption is fixed.

## 2. The draw family (new, tier A)

Found by scanning the band for `VGT_DRAW_INITIATOR` (0x2205) and PM4 `DRAW_INDX`:

| va | name | evidence | cadence |
|---|---|---|---|
| `0x888E4E08` | `D3DDevice_DrawIndexedVertices` | `DRAW_INDX[4]`, 5 args, 8 renderer-band callers | per-draw (max 1541/frame) |
| `0x888E4A18` | `D3DDevice_DrawVertices` | `DRAW_INDX[2]`, 4 args, 6 renderer-band callers | per-draw |
| `0x888E4460` | `D3DDevice_DrawIndexedVerticesUP` | `DRAW_INDX[4]`, 8 args | per-pass |
| `0x888E3F80` | `D3DDevice_DrawVerticesUP` | `DRAW_INDX[2]`, 4 args | per-pass |
| `0x888E4418` | draw wrapper → `888E3F80` | 18 instr, 12 callers | per-pass |

**None of these was in Wave 0's baseline hook list**, which is why that capture
saw no function with a draw-like count. All five are now hooked in
`tools/d3d/hooks/all_entrypoints.json`.

## 3. Entry-point table

`entrypoints.json` — all 200 entry points, produced by `tools/d3d/w1a_name.py`
from static evidence (PM4 packets emitted, registers written, dirty-mask stores,
refcount atomics, `Vd*` imports, arity, caller counts) merged with runtime call
counts from three captures.

- Tiers: **A 10, B 156, C 34**.
- Classes: state 45, load-time 51, unknown 35, accessor 25, setter 18, sync 8,
  draw 5, lifetime 5, constants 4, tiling 3, dispatch 1.
- Cadence (from runtime counts): **per-draw 57, per-pass 57, per-frame 16,
  load-time (or never called) 70**.

Cadence is the strongest classifier available without argument capture: a
per-draw function with a dirty-mask store is a `SetRenderState`-family setter; a
load-time function that writes a resource header is a `Create*`. The 34 tier-C
entries are listed in `entrypoints_disputed.md` with the runtime evidence each
needs.

## 4. Other Wave 1 artefacts (complete)

- `layouts.json` / `layouts.md` / `layout_leaks.json` (W1-b): 19 object layouts;
  device 459 fields, size ~24224; **29 engine-side leaks** where engine code
  touches D3D objects directly instead of going through the API — these bypass
  any hook and must be handled by keeping the guest structures real.
- `shaders.json` + `shader_pc_match.json` (W1-c): **902 shaders** decoded from the
  runtime cache (more than the 877 first counted), with control flow, ALU counts,
  vertex-fetch formats, texture fetches, memexport and export sets; matched
  against PC `.fxc` combos (`pc_fxc.json`, `pc_shaders_layers.json`).
- `xgraphics.json` (W1-d): band re-derived to `0x88903530`–`0x88AFBF00` (4304
  functions); entry points named, e.g. `0x88904188` = `XGCompileShaderEx`
  (tier A, 11 args, caller `0x88647C48`).
- `mnhash_*.json` (Wave 0): 58,113 SS functions hashed by mnemonic sequence;
  **7,208 bodies identical to Hydro Thunder, 184 of them inside the D3D band**,
  confirming the shared XDK. Sonic 4 has no recompiled tree locally.

## 5. Immediate consequences for the plan

1. **No command-buffer track is needed.** The baked path is dead code; the
   per-draw API is the complete draw set. W2-c is closed.
2. **Suppress tiling in the host renderer from the start.** Ignore bin
   mask/select and per-tile window offsets; execute each draw once; collapse the
   per-tile resolves. This is a ~55% draw reduction in-race, and it removes the
   EDRAM phase reasoning from the critical path.
3. **Keep memexport on the M-list.** The tiling AABB pass depends on it, and the
   deferred tiled lighting does too, so it cannot be deferred to the end.
4. Go/no-go stands as originally written once tile replay is discounted.

## 6. Reproduction

```sh
# hook every entry point and capture a race frame (~6 min, runs the game)
python3 tools/d3d/hookgen.py tools/d3d/hooks/all_entrypoints.json
bash tools/d3d/build_hooks.sh
setsid nohup bash tools/d3d/capture.sh race_all 320 >/dev/null 2>&1 & disown
python3 tools/d3d/tracecat.py ~/ss-scratch/captures/race_all race_all
python3 tools/d3d/w1a_name.py          # regenerates entrypoints.json
```
Raw captures (hundreds of MB of buffer dumps) stay under `~/ss-scratch/captures/`;
only the merged JSON lands in `docs/d3d/captures/`.

## 7. Bulk artefacts

Large intermediate JSON (whole-band function dumps, the PC `.fxc`/`.shaders`
corpus, the XG call graph — ~400 MB) lives in `~/ss-scratch/d3d_bulk/`, not in the
repo. Regenerate with the `w1*` scripts in `tools/d3d/`.
