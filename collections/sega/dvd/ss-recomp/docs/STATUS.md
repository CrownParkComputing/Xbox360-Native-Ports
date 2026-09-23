# Split/Second recomp status

Updated 2026-09-12. Start the next session with [d3d/NEXT.md](d3d/NEXT.md).
Detailed historical investigation is preserved in
[STATUS_HISTORY_2026-09-12.md](STATUS_HISTORY_2026-09-12.md).

## Current state

The recompiled launcher, SKIPPER.DLL and engine boot into menus and racing.
A guarded mesh-copy range fix improves world geometry. Selective compositor
readback fixes the corrupted car paint without copying every rendered surface.
The headless race sample averaged 33.344 ms/frame (about 30 game FPS), 14.999 ms
draw CPU and zero recurring readback copies. Correct-speed 60 FPS remains open.

F8 toggles the Retro Recomp sidebars. The backend F4 settings entry is removed.
The runtime and Xenia-derived Vulkan renderer remain required; game CPU code and
middleware execute as compiled native code.

## Remaining work

- Broader car/damage/distant-mip validation of the selective readback filter.
- First-use pipeline compilation stalls during major power plays and results.
- Correct-speed 60 FPS, HUD/power-play bar positioning, blur/sky/panel checks.
- DLC activation: six matching local packages are present, but the loader is still
  bypassed and DLC paths fail to open. DLC is not in the private base-asset release.
  See [DLC.md](DLC.md).

See [measured bottlenecks](d3d/BOTTLENECKS.md) and the ordered acceptance steps in
[NEXT.md](d3d/NEXT.md). Input/audio/runtime rewrites are not measured priorities.

## Run and build rules

`./run.sh` uses the local `assets/` and live `content_root/`. Prefer
`python3 tools/d3d/headless.py out/<fresh-name>` for isolated automated tests.
Inspect saved frames before accepting a performance sample as racing.

Use `config/splitsecond.toml`: FSI, synchronous pipelines, memexport readback OFF,
exact mesh-copy ranges ON, full resolve readback restricted by
`gpu_readback_ss_compositor=true`. FBO blanked the screen; 120 Hz accelerated the
simulation. Neither is a valid default.

Overrides belong in `src/` so regeneration preserves them. In particular, keep
`src/skipper_stubs.cpp` until DLC initialization is fixed. Generated C++ is
tracked; local codegen stamps/depfiles and Python bytecode are ignored.

The latest builds pass; range helper tests pass 32 assertions. The base-game
backup restores 161 hash-verified files from the private content zip. The
redundant ZIP and original ZTM folder were deleted; working assets, saves,
shader caches and the separate DLC Downloads folder are retained.
