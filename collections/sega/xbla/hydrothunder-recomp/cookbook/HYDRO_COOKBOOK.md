# Hydro Thunder Hurricane: end-to-end recomp cookbook

## 2026-08-14 current-ReXGlue review

The canonical recipe was rechecked against current ReXGlue SDK commit
`3a098bb1c419c5042509bdc9f99edde6f0d26518`. It generated 19,573 registered
functions in 61 sources, linked a 35,744,632-byte standalone, and reconciled
209 semantic, 15 stubbed and zero missing imports. Three direct targets remain
explicit blockers (`0x823248CC`, `0x823249E4`, `0x82308D6C`); the integration
test retains that exact set so a change cannot be mistaken for closure.

This is the title-specific tracked route for `5841096A`. A checkbox is not
evidence: retain the command log, input hash and output artifact for each gate.
Do not claim 100% because a game boots or because generated C++ compiles.

This title pins the centralized policy and builders in
`.recomp-cookbook.toml`. The measured static baseline is 1,777,021 translated
of 1,777,021 decoded instructions (100% of the discovered translation set),
19,091 ReXGlue functions versus 29,366 XenonRecomp function splits, and 208
semantic plus 16 stubbed imports out of 224. Exact stub names and unresolved
release issues are retained in the title status and central known-issue DB.
`build.sh` triggers the centralized review after a successful local rebuild.

## 0. Legal and repository boundary

- Use a lawfully obtained retail/Marketplace copy.
- Keep the retail STFS/XEX, decoded image, XenonRecomp output, extracted assets,
  DLC and final executable outside Git. Run `python3 scripts/check_repo.py`.
- Record tool revisions and immutable input identity. The known executable
  identity is in `recipe/identity.toml`; reject mismatches rather than applying
  addresses to a different revision.

## 1. Inventory and identity

1. Inventory every container/member with relative name, byte size and SHA-256.
2. Probe title ID `5841096A`, image base `0x82000000`, entry
   `0x823EC9F8`, image size `0x009C0000`.
3. Compare extracted `default.xex` byte-for-byte with the package member.
4. Decode locally and verify the image identity before Ghidra or recompilation.

Hard stop on any mismatch. Never transplant generated code, addresses or switch
tables from another title/revision.

## 2. Static CPU translation

1. Use `recipe/hydrothunder_recomp.toml` for helper and setjmp/longjmp anchors.
2. Use `recipe/hydrothunder_jumptable.toml` as the known indirect-dispatch
   oracle, then independently regenerate/verify it from the owned image.
3. Run XenonRecomp to convergence. Fatal diagnostics, invalid instructions,
   missing blocks, unresolved indirect targets, overlapping functions and
   unregistered native targets must all be zero. Record-form instructions that
   fail to emit their required CR update (reported as `RC bit enabled but no
   comparison`) are also a hard stop; stale CR state can make a compiled title
   spin while every link and graphics check appears healthy.
4. Compare function/byte coverage against executable sections, exception
   metadata, direct-call discovery, recovered jump tables, runtime indirect
   targets, Xenia traces and Ghidra. Unreachable padding/data are classified,
   not counted as native code.
5. Preserve a machine-readable exception list for anything excluded and why.

## 3. ReXGlue runtime and boot

- Generate from `recipe/hydrothunder_rexglue_manifest.toml`; local paths are
  intentionally relative/ignored.
- Apply `integration/hydrothunder_app.h`: local DLC install, startup status and
  human-readable shutdown name.
- Port or compare `integration/rexglue-sdk/` against the exact SDK revision in
  use; it is the tested source snapshot for startup identity and responsive
  closing, not permission to overwrite newer shared-runtime work blindly.
- Package runtime libraries from the exact SDK output used at link time. Record
  and compare their hashes; a binary linked against one checkout and shipped
  with another is a hard stop even when both carry the same filenames.
- Resolve imports by correct semantics, not success-return stubs. Keep offline
  behavior deterministic: one local licensed user, local saves/achievements,
  network unavailable.
- Require boot through logos, main menu, event selection, race, finish/exit and
  return to menu. Closing the app is a separate host action.

## 4. Owned data, audio and DLC

- Mount base game data without committing or redistributing it.
- Preserve format metadata for textures, geometry, video, FSB/XMA audio,
  localization and archives. Conversion must be reproducible from owned input.
- Treat Tempest Pack as separate Marketplace content type `00000002`. Validate
  `manifests/dlc.toml`, install through ContentManager into the standalone's
  explicit user-data root, retain the XAM header, and record an idempotency
  marker. Never flatten it over `game:`.
- Run `scripts/patch_dlc_menu.py <game-tree>/Strings`: all shipped locales must
  report `DLC Installed` and installed help text; selection must not download.
- Test without DLC, cold install, warm boot, Tempest event, DLC-derived save
  reload, DLC removal/recovery and corrupt-package rejection.

## 5. Vulkan/Xenos rendering

For each defect, capture the preceding good frame, first wrong frame, relevant
register/command state and a replayable native scene. Verify upload addressing,
endianness, tiling, pitch, formats, resolve source/destination rectangles,
EDRAM aliasing, depth/stencil, predication/occlusion queries, barriers, layout
transitions and presentation ownership.

Hydro regression routes must cover:

- race start, normal water and shore transition;
- jumps from high surfaces (no white plane/triangle, water plane in air or
  black frame);
- underwater transition and return;
- red-tree/start-area regression;
- sustained panning/frame pacing and shader-cache cold/warm runs;
- lights behind walls (currently open).

Never hide a guest rendering error with a host overlay or title-specific screen
patch. Fix the shared semantic layer and replay all earlier scenes.

## 6. Timing, input and audio

- Verify the Xbox 360 50 MHz timebase contract, 60 Hz presentation, bounded
  pacing and no pause/start oscillation. Capture 1% lows, not only an FPS label.
- Exercise connected/disconnected controller, keyboard fallback if offered,
  menu navigation, steering/throttle, pause/resume and hot-plug.
- Capture continuous audio through logos/menu/gameplay. Verify no underrun,
  stuck loop or missing music and test volume/mute/focus transitions.

## 7. Required product UI

- Mandatory RetroRecomp identity: 520x134 logo, startup only, 2.5 seconds, no
  supported bypass. Guest execution begins after its dialog/texture is gone.
- Hydro status reads `TEMPEST PACK DLC INSTALLED` at 2x normal UI font size.
- No fake controller, cabinet, equalizer or per-frame branding in normal play.
- Host close immediately replaces the frozen final game frame with a large
  `Closing Hydro Thunder` / safe-cleanup status and animated activity. Guest
  termination runs off the UI thread, logs completion and exits automatically.
- In-game `Exit Event` returns to title flow and must not terminate the app.

## 8. 100% test gates

All applicable rows need retained evidence:

| Gate | Required proof |
|---|---|
| Provenance | owned-input inventory; Git boundary scan |
| Identity | package/XEX/image match and title fields |
| CPU | zero fatal convergence diagnostics; classified byte/function coverage |
| Control flow | independent jump-table/indirect-target agreement |
| Link/boot | imports named; deterministic bounded boot |
| Timing | 50 MHz unit test; stable 60 Hz route and frame-time capture |
| Offline/XAM | user, licence, save, achievement and network policy tests |
| Persistence | first/existing/corrupt save and two-process reload |
| Input/UI | deterministic route through title/system dialogs |
| Graphics | startup, moving race and every regression route above |
| Audio | non-zero continuous captured signal and runtime counters |
| DLC | cold/warm/absent/corrupt/event/save-reload evidence |
| Shutdown | visible status, responsive frames, completion log, no residual PID |
| Regression | unit/CTest suite plus owned-copy deep smoke |

### Unit and integration test discipline

- Put each shared semantic fix behind a small unit test before replaying Hydro.
  Content dispositions must distinguish missing, existing and corrupt state;
  audio accounting must distinguish submitted silence from real signal; observed
  registers must be classified without pretending unknown hardware side effects
  are understood.
- Use an isolated explicit user-data root for persistence tests. A cold run and
  a second-process warm run are separate gates; reopening only a package header
  is not proof that a guest payload was written or reloaded.
- Integration harnesses own the exact launched PID and its visible window.
  Close through the host UI path, require status zero and a completion log, and
  fail if any same-title PID remains. Cleanup may kill only the owned test PID.
- Prefer bounded normal-volume evidence logs. Verbose graphics traces can rotate
  away startup/audio evidence and produce a false negative even when the route
  worked; use a dedicated trace run only for the defect it is diagnosing.
- Rebuild the final standalone after every shared-runtime edit, compare packaged
  library hashes with the link-time SDK output, then repeat the complete
  integration route. A pass from the preceding binary is not release evidence.
- Keep visual proof and machine proof complementary: retain screenshots for
  guest rendering, while logs/assertions prove input, non-zero audio, content
  decisions, shutdown completion and process residue.

## 9. Current status and release decision

`manifests/test-status.toml` is the concise live record. As of 2026-08-12 the
bundle is a local native test candidate, not release-complete. Two blockers
remain explicitly open: retained Tempest Pack gameplay/save-reload proof, and
lights visible through walls. Do not label it perfect, 100%, pure rewrite or
redistributable; it is a native static recompilation linked to a host runtime.
