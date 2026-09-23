# Split/Second: investigate the engine renderer and move it to native Vulkan

## Context

The Xbox 360 recomp of Split/Second (`~/ss-recomp`, SDK `~/rexglue-vmx` branch `rru-fixes`) boots to menus and loads a race, but in-race rendering is unusable: track geometry draws as garbage. Today all rendering goes through the Xenos GPU emulation plugin (`librexgpu-xenos`), which parses the PM4 stream that the title's statically linked Direct3D 9 library writes. Jon wants the title's rendering moved to native Vulkan, and asked for workers to investigate the rendering engine and how to transpose it.

Decision taken (Jon, this session): route = **replace the D3D9 band inside the title with host Vulkan code** (game logic stays recompiled). The separate, still-open CPU-side corruption of streamed sector geometry is **parked** (renderer first). Its state is recorded at the end so it is not lost.

Findings this session that shape the plan (all verified read-only):

- **The D3D9 band is a clean seam.** Contiguous span `0x888D19C0`–`0x888FA000` (~163 KiB, 717 functions), **203 entry points** called from outside (349 distinct callers, 702 call sites), 220 functions reached only via vtables. 18 seed functions call the 20 `__imp__Vd*` kernel imports: present `sub_888EB588` (calls `__imp__VdSwap` at `generated/splitsecond1/splitsecond_recomp.28.cpp:20494`), ring-buffer init `sub_888E6D58` (`splitsecond_recomp.96.cpp`), device create `sub_888F5F68`, shutdown `sub_888F6358`, EDRAM retrain `sub_888F83F8`. Hot entry points: `0x888D9838` (37 callers, Release/refcount), `0x888DBC78` (20, state setter with 64-bit dirty mask at +16), `0x888D1AF8`, `0x888D63E8` (texture/fetch-constant setup), `0x888D3618`, `0x888DBE00`, `0x888D7388`, `0x888E4418`. Caveat: the hottest cross-band callers (`sub_888FB1C8` memset, `sub_888FC4E0` memcpy, `sub_888E69E0` ring write, `sub_888FB0E8`) sit just above the band end, so the boundary must be re-checked before hooking.
- **A second, separate band**: XGRAPHICS/D3DX/runtime shader compiler at `0x88903000`–`0x88B00000`, 4,414 functions behind only **61 entry points** (top `0x88AFC8C8`, 57 callers). The title compiles shaders at runtime; the cache `~/ss-recomp/content_root/cache/shaders/shareable/425607E7.xsh` holds 877 Xenos shaders (462 VS / 415 PS; 46 VS with vertex texture fetch; 4 with memexport).
- **Engine above D3D**: `cRenderableGeom2` (`0x887F9F58`) bakes per-model D3D command buffers at load and replays them per render target; data-driven frame graph with named passes (forward, GBuffer, global light, 3 shadow cascades, SSAO, water, 2 reflections, HUD, post chain), roughly 25–35 render-target passes per race frame, EDRAM tile allocator with MSAA aliasing, predicated tiling brackets, occlusion queries, deferred tiled lighting via memexport, engine-programmed fetch constants (slots 92/95), XPS write-combined streams and GPU DMA vertex-pool defrag. Vertex formats are ordinary (float3/half4 positions, half2 UVs, 2_10_10_10 normals, 8_8_8_8 colours; map at scratchpad `vs_fetch.json`).
- **Override mechanism exists and captures indirect calls**: generated `DEFINE_REX_FUNC(sub_X)` makes `sub_X` a weak alias of `__imp__sub_X`; a strong `extern "C" void sub_X(PPCContext&, uint8_t*)` in any TU linked into the same module replaces it and `__imp__sub_X` stays callable. The indirect-call registrar registers the weak symbol (`splitsecond_register.cpp:35254`), so vtable calls are captured too. API in `~/rexglue-vmx/include/rex/hook.h` (`REX_HOOK_RAW`, `REX_HOOK`, `REX_IMPORT`, `rex::CallFrame`). Example: `~/ports/daytona-xbla-upstream/project/src/stubs.cpp`. The engine is its own shared library `splitsecond_SPLITSECOND1` with hidden visibility (`generated/default/dll_targets.cmake`), so overrides must be compiled into that target.
- **Reusable pieces**: `SpirvShaderTranslator` in `~/rexglue-vmx/src/graphics/pipeline/shader/` (Xenos microcode to SPIR-V, in-shader vertex fetch, memexport); the older fork `~/development/xenon-native/repos/rexglue-sdk/src/graphics/native/` has a PM4-level native plugin with a verbatim-reusable texture cache (DXT/BC + GPU untiling), `phase_model.h`, `resolve_geometry.h`, `draw_classify.h`, `native_shared_memory.*` (note `rexgpu_native_engine.md` / `rexgpu_native_method.md` memories). The xenos plugin remains the oracle and already has a per-draw trace (`--gpu_draw_trace_trigger_file`, `--gpu_draw_trace_dump_dir`, added this session).
- **PC build as reference**: the PC data ships the same-named `.fxc` (vs_3_0/ps_3_0 bytecode with CTAB names) and `.shaders` (layered material declarations); `~/development/splitsecond-native` has verified readers for `.model`/`.shaderinst`/`.streamtex` but has never parsed `.fxc`/`.shaders`. Useful as a semantic reference for materials and constant names, not as the shader source (see shader strategy).
- **Tooling**: `~/XboxRecompv2/RetroRecomp/runtime/tools/d3d_surface.cpp` (+ built binary) does seed/region/entry-point/mnemonic-hash measurement for RetroRecomp-format ports (needs a text adapter for rexglue output); `~/ports/splitsecond/runtime/tools/make_d3d_trace.py`, `make_d3d_record.py` exist. Headless drive to the race in ~4–5 min: scratchpad `drive2.sh` (`PRESSES`, `THROTTLE` env; focuses the window via `hyprctl`; `YDOTOOL_SOCKET=/run/user/1000/.ydotool_socket`). The disc dump currently lives in `~/.local/share/Trash/files/Split.Second.USA.X360-ZTM/...` and is read in place.

## Recommended approach

Two tracks: an **investigation programme** (workers, no renderer code) that produces named entry points, verified layouts, typed frame traces and a replay harness; then a **staged implementation** whose first gate is a screenshot. The investigation is what Jon asked for now; implementation stages are laid out so the workers' outputs feed them directly.

### Shader strategy (decided)

Translate the engine's **Xenos microcode to SPIR-V with the SDK's `SpirvShaderTranslator`**, not the PC SM3 shaders. Reasons: the engine compiles shaders at runtime and hands microcode to `CreateVertexShader/CreatePixelShader`, so microcode is what the replacement receives; the translator already covers vfetch, vertex texture fetch, memexport and 2_10_10_10, and the xenos plugin gives a byte-level oracle; the PC `.fxc` set differs (different constant layout, no tiled-lighting memexport) and would add a second unverified translation plus a mapping problem. Consequence: the native device must honour the translator's ABI (shared-memory buffer for vfetch, float/bool/loop and fetch-constant UBOs laid out like the register file). PC `.fxc` CTAB names are used only to name constants and materials during investigation.

### Coexistence model (decided)

Switching granularity is the whole frame. Two mixed modes via a cvar `ssd3d_mode = guest|tee|native`:
- **tee**: every override forwards to `__imp__sub_X` and mirrors into the native device; the xenos plugin still owns the display and keeps supplying vblank interrupts; native renders offscreen for diffing.
- **native**: overrides do not forward; the guest ring is never written (assert ring bytes untouched at present); the xenos plugin stays loaded only as Vulkan provider, vblank source and presenter (present override calls `Presenter::RefreshGuestOutput` with the native image, pattern at `~/rexglue-vmx/src/graphics/vulkan/command_processor.cpp` ~2452). Full ring ownership (stubbing `VdInitializeRingBuffer` etc., host-signalled fences) comes later, not day one.

### Module layout (implementation stages)

```
~/ss-recomp/src/d3d9native/
  api_table.toml         # address -> XDK name, arity, mode (tee|native|fatal); source of truth, survives re-codegen
  gen/band_overrides.cpp # generated: one REX_HOOK_RAW per entry point (203) + REX_FATAL stubs for the 220 internal-only fns in native mode
  guest_structs.h        # pure header: D3DDevice/D3DResource/GPUTEXTURE_FETCH_CONSTANT/vertex-fetch decoders (big-endian), no SDK deps
  device.{h,cpp}         # NativeDevice: state shadow, constants, fetch constants, fences, mode switch
  resources.{h,cpp}      # VB/IB/texture/surface registry keyed by guest object address; lazy upload
  shaders.{h,cpp}        # microcode -> SPIR-V via SpirvShaderTranslator; pipeline cache keyed (vs, ps, state)
  rt_phase.{h,cpp}       # SetRenderTarget/Resolve/Clear/Tiling -> phase model (port of phase_model.h / resolve_geometry.h)
  cmdbuf.{h,cpp}         # Begin/End/RunCommandBuffer recorder + fixups
  queries.{h,cpp}        # occlusion queries -> VkQueryPool
  trace.{h,cpp}          # D3D call trace writer, same schema as --gpu_draw_trace_* for diffing
  present.cpp            # override of sub_888EB588
tests/d3d9native/        # ~1 s host tests + record/replay harness
```
Linking: in `~/ss-recomp/CMakeLists.txt` after `rexglue_setup_target(splitsecond)`, `target_sources(splitsecond_SPLITSECOND1 PRIVATE src/d3d9native/...)`; confirm the SDK install exports `SpirvShaderTranslator` and `ui::vulkan::*` (else build a small object lib in the fork). Vulkan device: the plugin's `VulkanProvider` obtained in `SplitsecondApp::OnPostSetup` and stored for the .so.

## Investigation programme (the worker dispatch)

Conventions: artefacts under `~/ss-recomp/docs/d3d/` (JSON/MD) and `~/ss-recomp/tools/d3d/` (scripts, hook sources). Runtime captures use `drive2.sh` + hooks compiled as strong overrides that print then call `__imp__sub_X`, tagged `D3DTRACE <frame> <lr> <fn> <args>` so one parser serves all waves; the xenos draw trace is the oracle. Rule: nothing is "identified" until a static and a runtime line of evidence agree, and a body hash matches a second 2010 title (Hydro Thunder / Sonic 4 ports in `~/ports` or `~/Downloads/xbla-recomp-suite`).

**Wave 0 (1 worker, ~1 day): instruments.**
- `tools/d3d/mnhash.py`: mnemonic-only hash per `DEFINE_REX_FUNC` (adapter for rexglue text; port the method from `d3d_surface.cpp`); run on SS + Hydro + Sonic 4.
- `tools/d3d/hookgen.py`: from a list of VAs + arity emit a hooks .cpp printing r3..r10 + lr, optional struct dump at r3.
- `tools/d3d/tracecat.py`: merge hook stdout with xenos draw-trace files into a typed JSON event stream.
- Baseline captures: one menu frame, one race frame under `docs/d3d/captures/`.
- Done: hookgen hooks build and print for `sub_888EB588`; tracecat matches per-draw shader hashes to `xsh.py` hashes.

**Wave 1 (4 workers, parallel): naming and layouts.**
- W1-a Name all 203 entry points to XDK API names (cross-title hash, seed propagation, D3D assert strings, vtable walk from device create). Output `docs/d3d/entrypoints.json` with confidence tiers A/B/C and evidence; done when ≥60% tier A and a disputed list exists. Also re-derive the band boundary (the wrappers at `0x888FAxxx`–`0x888FDxxx`).
- W1-b Object layouts: field-access census on every band function (offsets off r3 etc.), cluster by object, compare to XDK layouts; list every engine-band function touching D3D objects directly (slot 92/95 writers first). Output `docs/d3d/layouts.json`, `docs/d3d/layout_leaks.json`.
- W1-c Shader inventory: extend `xsh.py` to emit per shader type, hash, vfetch slots/formats/stride, tfetch, memexport, constant ranges; parse PC `.fxc` CTAB and `.shaders` layers; score matches. Output `docs/d3d/shaders.json`, `docs/d3d/shader_pc_match.json`; done when all 877 decode and unmatched are listed with reasons.
- W1-d XGRAPHICS surface: name the 61 entry points, hook them, record hits at menu and race; verdict "cache-only stub viable" or a list of runtime-compiled shaders missing from the cache. Output `docs/d3d/xgraphics.json`.

**Wave 2 (4 workers): runtime confirmation.**
- W2-a Hook all 203 entries with argument capture; confirm semantics from the next draw-trace deltas (ALU constant writes, fetch slot changes, DRAW_INDX). Output: `entrypoints.json` gains `runtime_evidence` + per-frame call counts; `unreached.json`. Done: no tier C among functions reached in menu or race.
- W2-b Frame graph to call sequence: hook pass begin/end, tiling brackets, Resolve, queries, memexport setup, draws; record menu and race frames as ordered typed events with lr chains. Output `docs/d3d/frames/{menu,race}.json`, `passes.md`. Done: every oracle PM4 draw maps to exactly one hooked draw and one pass; resolve/tiling counts agree.
- W2-c Command buffers: hook create/begin/end/run, dump bytes, decode PM4 (reuse the xenos parser read-only), diff across frames to separate static words from fixups. Output `docs/d3d/cmdbufs.json`, `cmdbuf_rerecord.md` verdict.
- W2-d Layout verification: dump object headers at each named entry and compare with the oracle's fetch constants for that draw; verify slot 92/95 writes reach the GPU unchanged. Promote fields to `verified`; list mismatches.

**Wave 3 (2 workers): harness and consolidation.**
- W3-a Replay harness: `tools/d3d/trace_schema.json`; host tests that load a frame trace, feed an abstract `IHostD3D` (recorder first), assert invariants (draw count per pass, RT/resolve sequence, fetch constants, shader hash per draw); golden-image test scaffold. Done when a deliberate mutation (drop one resolve) fails.
- W3-b `docs/d3d/README.md`: API surface by tier, layout table, pass table, cmdbuf verdict, XGRAPHICS verdict, unknowns ranked by risk with owners.

**Risk experiments folded into the waves (cheap, early):** count hooked draws vs CP draws in one race frame (replay goes through entry points or writes PM4 directly); classify writers of fetch-constant shadow / ring region by return address (engine bypass); diff the ~886 band-address constants in `splitsecond_init.cpp` against the 203 entry points (vtable-only liveness); hash every shader passed to CreateVertexShader/CreatePixelShader over a run against the 877 cached (compiler band stub viability); run the 4 memexport VS through the translator in a unit test; measure page churn of XPS streams per frame.

## Implementation stages (after the investigation)

- **M0 Instrument**: generated tee overrides that log/count/record; first `api_table.toml`.
- **M1 Present native**: hook `sub_888F5F68`, `sub_888EB588`, `sub_888F6358`; native device on the borrowed VkDevice; present a test image while the guest still renders (proves plumbing, fence signalling, interrupt cadence).
- **M2 Resources, state, draws in tee**: creates/lock/unlock, SetRenderState/SamplerState/StreamSource/Indices/VertexDeclaration/constants, shaders, DrawIndexedVertices/DrawVertices/DrawPrimitiveUP; native offscreen frame compared to the xenos frame for HUD/menu passes.
- **M3 Render targets, Clear, Resolve, tiling, gamma/mode**: title and menus fully native. **First gate**: the title frame plus the garage/car-select scene (2D and 3D) rendered by host Vulkan with the CP showing zero draws in `native` mode; Jon judges the screenshots.
- **M4 Command buffers, fences, occlusion queries (start as always-visible, as RRU does), memexport, gpu_memory_move**: race native.
- **M5 Decouple/perf**: optional `rexgpu-ssnative` plugin (provider + vblank, no CP), vertex-input pipelines from `vs_fetch.json`, persisted pipeline cache.

Go/no-go after the first gate: screenshots match the oracle; ≥95% of race-frame draws are visible at entry points and no engine-side ring writers; host unit tests exist for fetch-constant decode, shader-hash-to-cache mapping and phase-model output on a recorded race frame; no main-thread GPU-wait spin with the CP not presenting. Fail on the first two → stop and pivot to rebasing the PM4-level native plugin.

Effort (one worker-equivalent): investigation waves ~3–4 weeks; M0–M1 2 weeks; M2 3 weeks; M3 2 weeks; M4 3 weeks; M5 2 weeks. Gate at roughly week 8.

## Verification

- Wave outputs are JSON with "done" criteria above; each wave's hooks are built by compiling the hook TU with the recorded compile flags (`ninja -t commands libsplitsecond_SPLITSECOND1.so`) and relinking, or properly via `target_sources` on `splitsecond_SPLITSECOND1`. Note: the game CMake's codegen pre-step currently aborts (`BaseHeap::Release`); the PCH must be regenerated after system header updates (both hit this session).
- Trace diff before image compare: native trace in the xenos `--gpu_draw_trace_*` schema, diffed per frame (draw count, shader hashes, RT/viewport, constant hashes); zero diff first.
- Golden images from `drive2.sh` frame dumps at fixed intervals; PSNR/SSIM per pass, Jon judges the residual. Always check a 2D and a 3D scene.
- Host tests run in ~1 s; game runs are regression only.

## Parked: streamed-geometry corruption (state as of this session)

Not a GPU problem: guest memory already holds truncated sector buffers at draw time (verified through physical and both virtual views). Ruled out with evidence: vertex-buffer residency cache (fixed to upstream behaviour anyway in `~/rexglue-vmx/src/graphics/vulkan/command_processor.cpp`), invalid fetch constants, file reads (all 16KB chunk reads succeed, no EFAULT), async-read timing (1.5 ms injected latency changes nothing; cvar `io_async_read_delay_us` added), stream error paths (engine error setter instrumented: no code-2 errors), the consumer read loop (never short), the CRT memcpy and all four VMX128 copy routines (verified byte-exact on every call via strong overrides in `generated/splitsecond1/zz_memcpy_probe.cpp`). Truncation points are 256-byte-aligned absolute addresses; bytes past them are previous occupants of the pool (other entries). Next lead: the loader's requested size/destination versus the mesh pointers (loader asks for less, or the sector is freed/reused while still drawn). Instrumentation currently in the tree (temporary, in generated code and must be reverted before shipping): `[SSERR]` prints in `sub_888AA220`/`sub_888AD3C8`/`sub_888B0080`, `[SSREAD]`/`[SSREAD-SHORT]` in `sub_888AA5D0`, `zz_memcpy_probe.cpp`; originals saved in `~/ss-scratch/*.orig`. SDK additions this session (keep): draw trace cvars, view-aliasing check, wait tracing, NtReadFile lr logging, `io_async_read_delay_us`.
