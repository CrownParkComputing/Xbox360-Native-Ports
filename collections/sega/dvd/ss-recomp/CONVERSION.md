# Split/Second - conversion notes

Converted from the USA disc (Disney/Black Rock 2010, title
425607E7) on ReXGlue 0.10. The first multi-module title: a small launcher XEX,
the engine as a 15.6 MB DLL and a DLC loader DLL, each recompiled into its own
module library loaded beside the launcher.

## Done in this conversion

- **Multi-module support** in the SDK: module manifests, per-module libraries,
  case-insensitive entry-point resolution for the uppercase disc, and loading a
  recompiled module when the title asks for it.
- **Reaching the title screen.** A storm of null stores traced to the DLC
  content thread (a content-resource lock returning success with no buffer);
  contained with a native override that survives regeneration.
- **In-race rendering fixed.** The engine streams mesh data through GPU
  memory-export draws; the runtime's read-back of those results was writing
  the previous slot's bytes over the current vertex pool. Read-back off
  (`readback_memexport = false`) - car, road, kerbs, scenery and HUD render.
- **Warm pipeline cache shipped** (`shader_seed/`): 377 first-use shader
  compilations - the live freezes - become none.
- **CPU overhead cut** in the runtime: whole-process load 2.49 -> 1.91 cores
  from the wait and memory-map fixes found here.
- **Presentation** pinned to strict vsync (FIFO) for VRR panels.

## Still open

- Frame rate is set by a presentation interval of two (the title's own pacing);
  documented, not yet changed.
- DLC content stays disabled (the loader thread is contained, not implemented).
- The remaining renderer defects are listed in `docs/d3d/` inside the port tree.
- Native replacements for the console OS calls (none yet).
