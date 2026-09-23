# Midnight Club: Los Angeles - conversion notes

Converted from the USA disc of the Complete Edition (title 545407F8) on
ReXGlue 0.10, bring-up 2026-09-13.

## Done in this conversion

- **Boots, renders and presents on the first build**; no unregistered functions.
  The only logged failures are the title's own dev-time `t:\mc4\art\city\*.loc`
  probes, which fall back to its RPF archives as designed.
- **Build requirement recorded**: clang. With g++ the weak-alias mechanism the
  recompiled code relies on is not emitted and the link fails with ~30,000
  undefined references.
- **Playable**: title, attract mode, free roam - the car drives, HUD, minimap
  and radio are correct.
- **Performance work in the SDK**: four runtime fixes took free roam from 2.5 to
  about 11 frames per second on the reference machine; the host render-target
  path is 25% faster here than the interlock path, and hot-page uploads are on.
- **Presentation** pinned to strict vsync (FIFO) for VRR panels.
- Xbox Live is stripped: the title runs offline.

## Still open

- Frame rate: around 11 fps in free roam on the reference RTX 3060 - playable,
  slow. The profile shows where the time goes; this is the next job.
- Native replacements for the console OS calls (none yet).
