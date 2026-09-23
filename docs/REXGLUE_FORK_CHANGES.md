# ReXGlue fork changes — CrownParkComputing/rexglue-vmx

What the fork at `rexglue-vmx` (branch `rru-fixes`) changed relative to
upstream [rexglue/rexglue-sdk](https://github.com/rexglue/rexglue-sdk)
(`origin/main`).

## Version baseline

| | |
|---|---|
| Upstream base | **v0.10.0** release, commit `c94f5eb` ("Release v0.10.0", 2026-08-21) |
| Upstream state | `origin/main` has not moved since that release, so the fork is **0 behind** |
| Fork | branch `rru-fixes`, **97 commits ahead** of the base (as of 2026-09-23) |
| Diff | `git log --oneline c94f5eb..rru-fixes` (equivalently `origin/main..rru-fixes`) |

Upstream tags nightly snapshots (e.g. `nightly-20260826-f5337cdc`); the fork
tracks the tagged v0.10.0 release commit rather than a nightly.

Upstream ReXGlue is a runtime/SDK for running statically recompiled Xbox 360
(Xenon PPC) titles natively: a code generator that translates XEX binaries to
C++, a PPC runtime, Xenos GPU translation over Vulkan, XAM/kernel APIs, audio
and input. This fork exists to bring up ~25 retail/XBLA titles as native ports
— the racing line (Ridge Racer Unbounded, Split/Second, PGR4, Burnout Revenge,
Hydro Thunder, Shift 2, Midnight Club: LA, Daytona USA), XBLA titles (Geometry
Wars 1/2, Banjo-Kazooie/Tooie, Rez HD, After Burner Climax, Jetpac Refuelled,
SoulCalibur II HD), and retail titles like SoulCalibur IV. The work falls into
four buckets: correctness fixes individual titles needed to boot, a profiling
campaign against the Vulkan renderer and guest-memory hot paths, platform
support (Android arm64, Windows via clang+MinGW), and a tooling layer for
scaffolding, measuring, packaging and publishing ports.

Full commit list (97 commits at time of writing, 0 behind upstream), and every
claim below verified against commit diffs and current source rather than
commit messages alone:

    git -C rexglue-vmx log --oneline origin/main..rru-fixes

---

## GPU / Vulkan renderer (rexgpu-xenos)

CPU-side performance campaign, measured mostly on Midnight Club: LA and
Split/Second. Every cache has a kill switch and reports counters into the
per-frame stats CSV (`gpu_frame_stats_path` — the campaign's measurement
backbone: per-stage draw timings, fence waits, uploads, pipeline/bindings,
render passes and break reasons).

- **Pipeline state-input cache** — `ConfigurePipeline` rebuilt and re-hashed
  the full `PipelineDescription` from guest registers per draw; now matched
  against a 64-entry MRU keyed on the masked fields the description actually
  reads (~95% hit on MCLA). Switch: `vulkan_pipeline_state_hash_cache`.
- **Texture fetch-write memoization** — the write hook compares the raw
  24-byte fetch constant and only invalidates the slot on a real change
  (13–30% of MCLA's fetch writes are identical rewrites). Switch:
  `texture_fetch_write_memoization`.
- **Frame-local material descriptor cache** — texture descriptor sets reused
  for materials recurring non-adjacently in a frame (~850 fewer descriptor
  writes/frame). Switch: `vulkan_reuse_material_descriptor_sets`.
- **Stable-binding fast path** — `UpdateBindings` skips image-view resolution
  when shaders/fetch constants/binding epochs/samplers match a recent state
  (per-slot epochs so a stale `VkImageView` can never be cached). Switch:
  `vulkan_texture_binding_fast_path`.
- **`vulkan_dynamic_constant_buffers`** (new, default off) — the 5 guest
  constant-buffer bindings use `VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC`
  with one persistent descriptor set per uniform-pool page instead of a
  transient set plus 5 `vkUpdateDescriptorSets` per constant change. Latched
  at `SetupContext` (baked into pipeline layouts). MCLA: bindings 3.0→2.3 ms.
- **Bulk register writes** — type-0 PM4 packets wrote N registers through N
  virtual dispatches; sequential ranges now hit the `copy_and_swap` fast path
  plus a generic bulk path for side-effect-free ranges (`WriteRegister`
  5.9%→0.5% of CPU). A 3,443-case register-name table walked per write was
  replaced by a logger level check, then a once-resolved handle.
- **Run-length float constant copies** (one `memcpy` per dense run) and
  **barrier source tagging** (per-source counts so render-pass breaks are
  attributable).
- **Swapchain rebuild guard** — no rebuild when the surface extent is
  unchanged (compositors animating window-open sent a resize per frame; Hydro
  Thunder 19 rebuilds/session → 2).
- **Warm pipeline cache seeding** — `shader_storage_seed_root` ships shareable
  cache files with the port, copied into a fresh user cache before load
  (Split/Second: 377 mid-game creations, one 1,434 ms frame → 0). Never
  overwrites an existing cache; the device-specific driver cache isn't shipped.
- **SPIR-V texture-fetch fixes from xenia-canary** — `exp_adjust` from
  fetch-constant word 3 (not word 4 lod_bias), stacked-layer lerp base/clamp,
  cube auto-LOD implicit fetches, locked-mip unnormalized fetch size, per-axis
  gradient exponent biases, literal 0/1-swizzle textures no longer dropped,
  signed host variants for the 4:2:2 video formats. `kVersion` 13→14.
- **3D-as-2D wrapper rewrite** — a true 3D image with
  `VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT` viewed as a 2D array (volume
  textures sampled via a 2D fetch previously lost every slice but Z=0 —
  colour-grade LUTs lost their blue axis).
- **Geometry-shader builder split** out of `pipeline_cache.cpp` into
  `vulkan/geometry_shader_builder.cpp` so the native backend can compile it
  standalone.
- `vsync_fps_cap` actually registered now (the launcher always passed it;
  nothing consumed it, so caps silently returned 0). Overrides the guest
  vblank pacer's rate without lying about the video mode.

### Shared-memory residency (the MCLA 2.5→29 FPS arc)

- Page-validity bitmap made atomic; residency checks read it lock-free
  (45 µs → 3.7 µs per check). Draw residency requests deferred and flushed
  once (each upload ended the open render pass; four streams = four breaks).
  Write watches arm per uploaded range, not across the span.
- MMIO fault handler no longer parses `/proc/self/maps` under the global lock
  on every write-watch fault; the OS query only runs on the rare
  genuine-violation path, and the maps file is parsed by an allocation-free
  incremental `ProcMapsScanner` (~2.7% → 0.16% of cycles).
- **`gpu_hot_page_frames`** (default 0) — a 256 KB block dirtied N frames
  running is declared hot: write watch no longer armed, pages re-uploaded once
  per frame as one batch at frame open (render passes 701→106/frame on MCLA).
  Documented trade: later draws in a frame don't see writes made after that
  frame's first upload. First thing to disable if geometry flickers.
- **`clear_memory_page_state = false`** in port profiles — CPU-uploaded pages
  keep their valid bit across frames (on, it re-uploads ~190 MB/2s for ~1 MB
  of guest writes). Documented hazard: intermittent tile-pattern texture
  corruption on Hydro Thunder; the profile names the revert order.
- **`gpu_invalidation_widening_pages`** (default 64) bounds invalidation
  growth (1.7 MB/s of guest writes was becoming ~110 MB/s of re-uploads).

### GPU diagnostics (all default-off)

- Split/Second tiled-rendering forensics: `gpu_skip_draws="first:last"` plus
  an automatic bisection sweep (`gpu_skip_sweep_*`,
  `frame_dump_only_while_sweeping`), `gpu_ignore_bin_predication`,
  `gpu_skip_tile_replay`, `gpu_skip_nonfinite_draws`,
  `gpu_memexport_clamp_to_draw` (ships off — the over-broad GPU-written
  marking it removes is load-bearing), `gpu_log_memexport`, `gpu_draw_trace_*`.
- PM4 robustness: type-3 packets force the reader to the declared packet end
  (count honored unconditionally, as upstream Xenia) so a stubbed opcode can't
  desync the ring; indirect-buffer failures dump address/head words and a
  16-entry packet-history trail.
- Colour-fault hunting: `log_draw_texture`, `log_draw_shaders`,
  `trace_float_constant`, `scan_guest_u32`, `dump_textures` (untiles guest
  bytes), `log_texture_swizzles`, `texture_swizzle_override`,
  `texture_identity_swizzle`, `texture_exp_bias_ignore`. These pinned Burnout
  Revenge's wrong tint to one float constant arriving wrong from recompiled
  guest code — not the GPU layer.
- Headless frame dumping (`frame_dump_path`/`interval`/`count`, .ppm);
  present/submit failures now name the failing call and `VkResult`.

## Native GPU backend (rexgpu-native)

- Ported forward from the old 0.8 fork ("Bring the native GPU backend across
  to 0.10"): a game-agnostic plugin reusing the base PM4 parser that
  translates Xenos shaders/state to native Vulkan draws instead of emulating
  EDRAM. Selected with `--gpu_plugin native`. The port required the
  geometry-shader split, `ResolveInfo` carrying destination texture layout,
  `vkCmdBlitImage` in the device function loader, and removal of dead
  trace-player hooks.
- Own diagnostic cvars: `native_marker`, `native_log_draws`,
  `native_log_phases`, `native_present_frontbuffer`, `native_preserve_edram`,
  `native_rect_gs`, `native_expand_rects`. Usability status: see Known
  limitations.

## Code generator

- **PPC opcode gap fill** — ~30 integer VMX handlers (`vmsum*`, `vmule/vmulo*`,
  `vsum*`, `vmhaddshs`/`vmhraddshs`, `vmladduhm`, `vpkpx`, `vupk[hl]px`,
  `vaddcuw`, `vsubcuw`, `vavguw`, `vmaxuw`, `vrlb`), scalar `popcntb`,
  `lmw`/`lswi`/`stswi`, `fri[mnpz]`, `fre`, `frsqrtes`, `mtfsb0/1`, `mcrfs`,
  `dss`/`dst`/`icbi` as no-ops. Expectations generated on real PPC via
  qemu-user (`tools/ppc_oracle`); suite 1458→1567 cases.
- **`db16cyc` lowered to `std::this_thread::yield()`** — the Xenon delay hint
  was dropped entirely, leaving guest spin-wait loops burning a host core at
  full x86 speed (MCLA's streaming/frame-sync poll held 16.5% of all CPU;
  yielding cut total in-game CPU 26%, frame rate unchanged).
- **bctr fall-through fix** — an index outside a recovered switch table used
  to emit `__builtin_trap()`, aborting a legal control path; it now still
  branches on CTR (402 traps in Hydro Thunder's generated code → 0).
- **`vpkuhus`/`vpkuwus` alias fix** — packed straight into vD while later
  iterations still read vA/vB; with `vD == vA == vB` (the float→byte colour
  idiom) lanes packed their own packed bytes and saturated. Results built in
  `v_temp()`, assigned once. This was Burnout Revenge's blue UI;
  oracle-verified regression cases added.
- **GapFill rewrite** — linear sweep with block discovery for function extents
  (XenonRecomp's approach); fixes vtable thunks/shared epilogues swallowed by
  neighbours ("call to invalid or unregistered function" at runtime).
- **Out-of-line block branches** — blocks past a mid-function `blr` sit
  outside declared `base+size`, so intra-function branches emitted `REX_FATAL`
  (326 in Burnout Revenge). `getFunctionContaining` now falls back to the
  block list.
- **`non_volatile_as_local = true` is the scaffold default** — keeps
  non-volatile PPC registers in host locals, removing `__savegprlr_N`/
  `__restgprlr_N` (9% of samples on SoulCalibur II). Manifest comments say to
  disable it for titles that misbehave like stale register state.
- **Multi-module image snapshot** — 0x80000000/0x90000000 ranges alias the
  same physical backing; loading all modules before building BinaryViews let
  Split/Second's SKIPPER.DLL overwrite the engine RVA-for-RVA, and codegen
  scanned the wrong bytes for jump tables. Each module's view is snapshotted
  right after its own load.
- Generator binary added to the codegen fingerprint (a rebuilt tool no longer
  reports "up to date" over stale output). Windows: module DLLs get
  `PREFIX ""`; the `DEFINE_REX_FUNC` weak-alias attribute order fixed for
  clang/MinGW.

## CPU / memory / threading

- **FP exceptions stay masked on every thread running guest code** —
  `InitHost()` only ran via `XThread::Execute`; a host thread dispatching
  guest code kept a zero control word and the first flush-mode write unmasked
  every FP exception (Burnout Revenge SIGFPE'd on a plain divide). All
  control-word writes now reapply the host policy first.
- **Blocking `WaitMultiple`** — was try-lock/test/sleep-1ms polling (a quarter
  of all cycles on Split/Second). Waiters register per-handle and block on a
  condition variable; sub-millisecond deadlines no longer spin. 2.49→1.95
  cores. Unit tests cover wait-any/all, timeouts, wake latency.
- **Auto-reset events wake waiters in arrival order** (FIFO tickets) — an
  arbitrary wake handed the signal to a thread whose predicate wasn't
  satisfied and the wake was eaten (SoulCalibur IV's stall).
- **Timer queue dispatch blocks instead of spinning** (7.7% of cycles on
  MCLA); the vendored `disruptorplus` blocking wait strategy had
  predicate/deadline arguments swapped and had never been instantiated —
  fixed in thirdparty.
- Guest arena backing file unlinked from `/dev/shm` once mapped (crashes
  leaked 4.8 GB objects until SIGBUS). `std::vector<std::atomic<uint64_t>>`
  replaced with a flat `AtomicU64Array` (libc++ rejects it).

## Kernel / XAM

- **`KeInsertQueueDpc` actually runs the DPC** — it appended to `dpc_list` and
  nothing ever drained it (the `assert_always` compiled out in Release), so
  every DPC-driven signal was lost since the initial commit. Now runs inline
  under DPC impersonation (IRQL_DISPATCH, depth-guarded), matching
  xenia-canary.
- **Guest wait watchdog** (`guest_wait_report_seconds`) — records waits when
  they *start*, prints outstanding ones with guest return addresses, object
  addresses, per-handle signal counts (Nt and Ke routes), thread start
  addresses. Turns "title froze" into named guest functions.
- `unregistered_function_nonfatal` (default off) — logs `[UNREGFN]` with
  caller/r3/r4/r5 once and returns null instead of aborting; batch-collects
  missing functions during bring-up.
- `XamUserGetSigninState` answers `XUSER_INDEX_ANY`; usbcam exports re-enabled
  (Jetpac Refuelled imports them); `XamUserAreUsersFriends` answered locally.
- **`headless = true`** answers system prompts with their default and draws
  nothing (one profile, one storage device — no real choice); After Burner
  Climax went 11 → 68 pipelines with it set. **`keyboard_text`** answers the
  guest OSK from config. **`xbox_live`** (default off) starts sockets but
  reports no link, so online menus disable themselves.
- Writable `cache:` partition under user data (Shift 2 loops its attract movie
  forever without it); content creation/enumeration tracing; `NtCreateFile`
  path handling; `ReadScatter` fixes; `io_async_read_delay_us` test hook.
- **`--guest_watch=<addr>:<len>`** — diffs a guest range and protects its
  pages read-only so the faulting guest lr names the writer;
  `--guest_watch_find*` variants poll memory for a value and watch wherever it
  turns up (title-allocated addresses change every run).

## Audio

- **Paced guest render callback** (`audio_pace_callback`, default on) — the
  "slow and robotic" fix. Credits arrived in clumps (264 of 376 calls within
  0.5 ms of the previous); a mixer pacing itself on elapsed time advanced once
  per clump and repeated the rest. Now an even 187.5 Hz schedule with the
  credit kept as back-pressure. Hydro Thunder repeats at lag-1024: 69% → 0%.
- **Native XMP playlist playback** — EA titles (Burnout Revenge, the NFS line)
  hand the console's XMP a playlist of plain WMA files; the app accepted it,
  claimed playback (making the title mute its own music) and played nothing.
  New `music_player.cpp`: ASF container reader, the vendored FFmpeg's
  wmav1/wmav2/wmapro decoder, cubic resampling, one decode thread ahead of a
  ring, mixed onto the front pair by the SDL driver. NOREPEAT playlist end
  reported back so Burnout can shuffle its 41 single-song playlists.
- **`audio_channels`** — 0 follows the device (default), 2 does an ITU-R
  BS.775 fold here, 6 forces 5.1 passthrough (stereo HDMI endpoints still
  advertise 5.1; a naive host fold clips — Hydro's LFE is 27% of total
  energy). Explicitly an untested hypothesis kept behind the flag.
- **`audio_app_name`** — names the stream per run; PipeWire remembers
  mute/volume per app name and every port shared "rexglue", so a muted
  headless run silenced the next live run of any title.
- **XMA restores from xenia-canary** — starvation collapses the write offset
  and clears `output_buffer_valid`; `output_buffer_valid` only cleared when
  the ring is genuinely full; decode loop breaks when a Decode neither
  advances nor produces. `xma_continuous_decode` added (default off; measured
  not to help). `REX_XMA_STATS`/`REX_CLOCK_CHECK` exonerated the decoder and
  the guest timebase (49,997,146 Hz vs 50,000,000).
- **`audio_native_xma`** — mixes decoded XMA natively, bypassing the guest
  mixer. Kept in-tree, default off, with the failure written into the source:
  decoded audio without per-voice state (position/rate/gain live in FMOD
  inside the guest) is not playable — it produces static.
- Diagnostics: `REX_AUDIO_STATS` (callback spacing, queue depth, silence,
  repeat counts), `audio_dump_wav`/`audio_dump_out_wav` (guest submission vs
  device-bound output). `--skip_movies=<substring>` refuses matching `.bik`
  opens; every movie opened is logged as `[movie] <path>`.

## Input

- Device tables serialized behind a recursive mutex (`XamInput*` runs on
  arbitrary guest threads while the UI thread mutates the list; concurrent
  `RefreshDevices` corrupted the heap).
- **Guest input suppression** (`SetGuestInputSuppressed`/`GetStateRaw`) — a
  system overlay takes the pad with it; guest polls read "nothing pressed"
  while the overlay reads the real state. Free functions, not members, to
  avoid an `InputSystem` ABI break.
- The `XamInputGetState` log's eight-message cap removed under the trace flag
  (the cap spent itself on early presses and read as "input never arrives").

## UI / presentation

- **Side rails and FPS overlay for every title** — Split/Second's panels
  generalised into a shared `SidePanelsDialog` (RetroRecomp brand, per-title
  `side_panel_title`/`side_panel_info`; F8, `show_side_panels`). FPS counter
  (`show_fps`, F10) reads the real guest present rate via a per-`VdSwap`
  counter — the old provider was never wired and reported the host loop rate.
- **Achievements / high-scores overlays** — reworked achievements overlay
  (`achievements_ui`); leaderboards open a local high-score page
  (`high_scores_ui`) since the real screens need a live session.
- **GPU-direct frame streaming** (`REX_PRESENT_STREAM=<socket>`) — guest
  output copied GPU-side into fd-exported images (`VK_KHR_external_memory_fd`)
  handed to an external consumer (the rexmenu launcher), replacing readback +
  shared-memory ring. `REX_RAYLIB_DISPLAY` adds a raylib input endpoint
  feeding a uinput virtual pad, with the platform window moved off the main
  thread (NVIDIA proprietary driver deadlock workaround).
- `window_title` / `window_title_build_stamp` — bundles no longer say
  "rexglue" in the title bar.

## Android support

- Whole SDK cross-compiles for arm64: platform detection ordered before
  generic Linux (otherwise it configures as "linux-arm64" and links host
  X11/Wayland into an arm64 target), `AndroidNativeWindowSurface`, Bionic gaps
  (no ucontext → guest fiber entry points refuse with a clear message; no
  `PTHREAD_MUTEX_ROBUST`; libc++ shims; `-fexperimental-library` for
  `std::jthread`). Host-only codegen/CLI excluded from Android configures.
- **APK packaging without Gradle** (`tools/android/package_apk.sh`: aapt2, d8,
  zipalign, apksigner; verifies the archive holds its dex and libraries).
  Four launch blockers fixed: `SDL_main` export under hidden visibility,
  single-app model, log path (cwd is read-only `/system/bin`), GPU plugin
  lookup by name through the dynamic linker. Fullscreen activity theme;
  staging beside the output instead of `/tmp`.
- `files/rexglue.args` on-device appends per-line flags to the activity's
  arguments — cvars without rebuild/reinstall. Both GPU backends ship in one
  APK; `gpu_plugin` defaults to `native` on Android in the current tree
  (per-title `EXTRA_ARGS` carry the working choice). Thread-naming aborts
  avoided via runtime API-level checks (`rex/main_android.h`).
- **libadrenotools** backs custom Adreno Vulkan driver loading
  (`vulkan_custom_driver_dir`/`vulkan_hook_library_dir`). See submodules below.

## Windows cross-build (clang + MinGW)

- `cmake/toolchains/windows-mingw-clang.cmake` — MSVC no longer required;
  clang keeps the weak alias `DEFINE_REX_FUNC` relies on. Vulkan only
  (`REXGLUE_USE_VULKAN` must be requested explicitly; D3D12 needs Windows SDK
  headers MinGW lacks).
- PE quirks: `__imp__`-prefixed hooks need explicit `dllexport` (GNU ld's
  auto-export skips them as import thunks — 2,866 hook exports were missing),
  `--export-all-symbols` for the rest, `REX_WEAK_EXPORT` empty on `_WIN32`
  (PE has no weak symbols), `PREFIX ""` on plugins, `-municode` for wWinMain,
  no SEH/`dlfcn.h`/`endian.h`, `-mssse3 -msse4.1` baseline stated.
- Rez HD, Banjo-Kazooie, Banjo-Tooie build and run (smoke-tested under wine).

## Native-code replacement & static runtime

- **Kernel exports are weak definitions** (`REX_WEAK_EXPORT`) — a port defines
  `REX_NATIVE_HOOK(__imp__X)` and the strong definition wins at link time, no
  SDK edit. Geometry Wars answers `XGetLanguage`, `XGetGameRegion`,
  `ExGetXConfigSetting` natively as the proof.
- `REXGLUE_RUNTIME_STATIC` builds rexruntime static with function/data
  sections so `--gc-sections` drops unreached code; `REXGLUE_GPU_BUILTIN`
  links the Xenos backend in instead of dlopening it (required together — a
  plugin binds the runtime's symbols from the shared library). Geometry Wars:
  one 26.4 MB binary, 670 of 2,864 kernel hooks dropped.
- `REX_TRACE_IMPORTS=<file>` records each kernel import the first time it runs
  (appended live — titles hard-exit, so at-exit writes produced nothing).
  `tools/native_report.py` scores a port's linked binary against its trace
  into `NATIVE_COVERAGE.md`.

## Tooling / packaging / build

- `tools/new_port.sh` scaffolds a complete port; `tools/port_profile.toml` is
  the measured config template: `render_target_path_vulkan = "host"` (FSI was
  25% of MCLA's frame; Split/Second and RRU need `fsi` for their colour
  grade), `clear_memory_page_state = false`, `gpu_hot_page_frames = 3`,
  `async_shader_compilation = false` (reads as flashing; a warm seeded cache
  is the better answer), `headless = true`, `unregistered_function_nonfatal`.
- `tools/port_check.py` / `port_doctor.sh` — catch unresolved calls,
  undeclared labels and stale fall-through traps in generated code *before*
  building; doctor benchmarks each render path/page-coherency setting
  headlessly. `headless_play.sh.in`/`measure.sh.in`: gamescope + PipeWire
  capture + xdotool input, per-stage frame-cost medians.
- Content: one checksummed zip (`content_zip.sh`; `content/content.sha256`
  proves the tree without game data in git), requested at startup never by the
  build; `stfs_extract.py` (XBLA CON/LIVE/PIRS); `rexiso` (XDVDFS disc-image
  list/extract via the runtime's own DiscImageDevice) so importers take a
  plain .iso; optional DLC install in the shell and PowerShell importers.
- `tools/fsb_tool.py` (FMOD FSB4 list/find/extract), `pipeline.py`,
  `port_info.py`, `native_targets.py`, `rayview`.
- Publishing: `bundle_port.sh` — one archive with `windows/`, `linux/`,
  `android/` beside a single shared `assets/` (Rez: 163 MB vs 386 MB
  per-platform); `bundle_launcher.sh` ships a port *without* game data
  (importer + checksums); `port_gui.sh` is Import/Play/Close for players.
- CMake: SDK installable as a package consumed via `rexglue_DIR`; per-config
  plugin postfixes; GPU plugin staged next to the executable; imgui include
  path for source-tree builds; FFmpeg submodule pin bumped.

---

## Known limitations / work in progress

- **rexgpu-native is not usable yet**: renders loading screens (MCLA at a
  steady 30) and issues real textured 3D draws on Banjo/Rez, but dies
  `VK_ERROR_DEVICE_LOST` on Midnight Club: LA's first 3D frame and presents
  black on Banjo-Kazooie/Rez (`native_present_frontbuffer` stays default-off).
  Shipped and runtime-switchable for bisection; xenos is the backend that
  draws.
- **Split/Second**: menu/title text distortion (predates the perf campaign;
  suspected pitch/bytes-per-texel mismatch on a dynamically rendered text
  texture). Its 30 FPS is a guest-side design lock (presents every second
  vblank) — correct-speed 60 needs timestep decoupling in the title.
  `readback_memexport` stays on by default (RRU shares the backend) but its
  double-buffered readback can write results to wrong guest addresses; the
  title sets it false and the cvar help documents the hazard.
- **Android guest fibers refused**: Bionic has no ucontext and no arm64
  context switcher has been written. Banjo-Kazooie does import CreateFiber —
  non-fatal there, but real outstanding work.
- **`audio_native_xma` produces static** — kept in-tree, off, documented so
  the approach isn't tried a third time.
- **Scanner over-splitting**: the scanner defines functions that fall inside
  one function a known-good build keeps whole (396 in Hydro Thunder);
  `[entrypoint.functions]` hints are the current workaround.
- `gpu_memexport_clamp_to_draw` ships off (the over-broad GPU-written marking
  it removes is load-bearing; the real fix needs sub-page/exact-range
  tracking).
- XctdCompression query unimplemented; `BaseHeap::Dispose` calls
  `DeallocFixed(addr, 0, kRelease)` → `munmap(addr, 0)` always fails, so heap
  regions are never unmapped at teardown (noted, not fixed).

## Submodules

`thirdparty/libadrenotools` (https://github.com/bylaws/libadrenotools) was
added as a proper submodule — it backs the custom-Adreno-driver loading on
Android. Clone with `--recursive` (or `git submodule update --init`) or the
Android Vulkan setup will not build. The FFmpeg submodule pin was also bumped
relative to upstream.
