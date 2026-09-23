# Roadmap: recompilation → fully native port

**Effort key** (working sessions like the bring-up ones — you + Claude, with
the oracle build and headless verification already in place):
S = under a day · M = 1–3 days · L = ~1 week · XL = multi-week sustained.
Estimates assume nothing upstream shifts underneath us; per-phase totals are
for a usable result, not perfection.

Current state: the recompiled title is playable under GPU **emulation**
(rexglue's Xenos PM4/EDRAM pipeline on Vulkan). "Fully native" means the same
recompiled game logic driving a bespoke renderer/audio/IO layer directly, with
assets extracted and, over time, hot code rewritten as idiomatic C++. The
sequencing below follows what worked on the other ports (Choplifter, GW,
SoulCalibur): keep a working oracle build at every step and replace one
subsystem at a time.

## Phase 1 — Harden the emulated build (the oracle) — **total ≈ 3–5 days**

The emulated build becomes the reference every native change is diffed against.
- [ ] **[M]** Proper 3D-as-2D wrapper fix: build the wrapper as a 2D-array with one
      layer per depth slice (or an unwrapped strip), using the currently-dead
      `SetForceLoad3DTiling` plumbing — design already written up (see the
      agent report summarised in README Known issues). Removes the out-of-spec
      `gpu_3d_to_2d_texture=false` dependency.
- [ ] **[S]** Re-attribute: does FSI alone fix the LUT case (test FSI + wrapper default)?
      One headless A/B run; the harness for it already exists.
- [ ] **[M]** Sync the small upstream canary texture fixes flagged in the audit:
      `947075f88`, `0f2980de4`, `3254ac20f`, `8486e97a0`, `ec5e0f40e`, and the
      ZPD occlusion-query scheme (`fbd620c22` + follow-ons) — the ZPD port is
      its own **[L]**: it replaces the fake-sample-count workaround with real
      query results and is the one Phase-1 item safe to defer (the workaround
      holds for this title).
- [ ] **[S]** Wire the frame-dump hook into a scripted per-scene capture (legal
      → logo → cinematic → title → menu → race) as a regression suite — the
      ydotool A-injection loop plus channel-stat checks from the bring-up,
      turned into one script.

## Phase 2 — Asset extraction (the native port's raw material) — **total ≈ 1 week**

All assets live in the encrypted pair `00__ridge_racer__` (TOC) +
`01___unbounded___` (1.6 GB data). The game decrypts in guest code, so:
- [ ] **[M]** Hook the archive read/decrypt at runtime: instrument the recomp build to
      dump each (path, offset, plaintext) triple as the game streams — the
      NtReadFile sites and the decrypt routine are all in our own generated C++,
      so this is a printf-level change, not RE. The work is locating the
      post-decrypt buffer among the candidate functions (the NtReadFile call
      sites are already mapped from the streaming traces); harvesting is then
      just playing. The demo loop alone streams ~360 MB.
- [ ] **[S]** Alternative/complement: the engine probes `game:\filesystem` (loose-file
      dev override) before the pack — once formats are dumped, native assets can
      be injected without touching the crypto.
- [ ] **[M]** Extract `intro.usm` / `gamescom_attraction.usm` (CRI Sofdec2): demux with
      ffmpeg/vgmstream tooling, re-encode, play natively (raylib/SDL video or
      pre-decoded frames) — removes the Scaleform NetStream dependency.
- [ ] **[M, spread out]** Compare formats against the Steam PC release (app 202310): same Bugbear
      engine generation; its unencrypted files are a Rosetta stone for texture,
      model and track formats (and licensed-track data). Worth owning a copy
      purely as documentation.

## Phase 3 — Audio native — **total ≈ 1 week** (gated on Phase 2's dump)

- [ ] **[L]** The runtime already routes XAudio frames; RRU's music/SFX are XMA2.
      Decode XMA banks offline (ffmpeg has XMA2) to OGG/WAV during extraction,
      then swap the guest audio path for a native mixer fed by the extracted
      banks (the Android ports proved the all-XMA-silence trap — native decode
      sidesteps it entirely).

## Phase 4 — Replace GPU emulation with a native renderer — **total ≈ 1–3
months sustained; the dominant cost of the whole port**

**GATE CHECK DONE - PASS (see D3D9_HLE_GATE.md): route 1 wins.** The D3D9
layer is discrete (6 draw entries, ~78 setters, flat device struct with a
Xenos register shadow); first light needs ~20 hooks, not 50-100. Revised
estimate: renderer ~4-6 weeks instead of 6-8. Route 2 remains the fallback.

Two viable routes; pick after measuring where RRU's frame time goes:
1. **HLE at the D3D9 layer** (UnleashedRecomp-style): trap the game's D3D9-ish
   calls above the push buffer and reimplement on Vulkan. Gate: Bugbear's 2012
   engine must call D3D9 as discrete functions (check the recomp for a
   recognisable device vtable — the `sub_821B22D8` PM4-building cluster is
   where to look). Gate check itself is **[M]**; if it passes, the renderer is
   **XL** (~6–8 weeks — UnleashedRecomp's equivalent layer is ~8k hand-fit
   lines); if it fails, route 2 is the only option.
2. **Capture-and-rewrite per pass** (rexgpu-native method used on the Amiga/
   arcade ports): dump PM4 per frame from the emulated oracle, name each pass
   (shadow, scene, bloom chain, LUT grade, UI), and implement them natively
   one at a time, diffing frames against the oracle after each.
   The three bugs fixed during bring-up (flare occlusion, LUT, auto-exposure)
   already map the interesting passes. **XL** (~2–3 months) but incremental —
   each pass lands and ships independently behind the oracle diff.
- [ ] **[M]** Either way: translate the ~1,400 guest shaders offline (the SDK's
      translator already emits SPIR-V; snapshot the shader storage as the
      starting library).

## Phase 5 — Native runtime slimming + hot-path rewrite — **total: rolling
background work, ~1–2 days per rewritten function**

- [ ] **[M]** Strip the Xbox kernel surface to what RRU actually calls (the krnl trace
      logs enumerate it — small: file IO, threads, XAudio, XamInput/Content).
- [ ] **[S to start, then per-function]** Profile the recomp (Tracy is already
      integrated in the SDK); take the
      hottest guest functions (physics tick, streaming decompressor) and
      rewrite them as idiomatic C++ against entry/exit RAM snapshot pairs from
      the oracle build — the snapshot-pair method, function by function, never
      trusting a whole-decomp translation.
- [ ] **[XL, optional]** Replace Scaleform-driven menus last (they work fine recompiled; native
      UI is polish, not a blocker).

## Phase 6 — Package — **total ≈ 2–3 days** (desktop; Android is its own L–XL
after Phase 4)

- [ ] **[M]** Single-binary target: static-link runtime + GPU plugin, embed the
      per-title config, first-run prompt for the game folder (per the
      WhittyArcade packaging pattern). Android becomes plausible once Phase 4
      lands (the Vulkan renderer is the portable half; the emulated EDRAM path
      is what's heavy on mobile today).

## Order of attack (recommended) and cumulative effort

1. Phase 1 wrapper fix + regression captures — 3–5 days (protects everything)
2. Phase 2 extraction hook — ~1 week (unblocks FMV, audio, format RE at once)
3. Phase 3 audio — ~1 week (short, self-contained win)
4. Phase 4 gate check + route decision — a few days, then the 1–3 month build
5. Phases 5–6 iteratively behind the oracle diff — rolling + 2–3 days to package

**Rough overall shape: ~3 weeks to a fully-featured recomp with native assets,
audio and FMV; then 1–3 months of renderer work is the distance to "fully
native".** Everything before Phase 4 ships value on its own; Phase 4 is where
the port stops being an emulator with extra steps and becomes a native game.
