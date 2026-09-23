# Next session: one app that turns a XEX into a runnable native port

Paste the block below as the opening prompt.

---

Build a single application that takes a user's own Xbox 360 title — a signed
STFS package or a `default.xex` beside its data — and produces a native
executable that runs it, with **no game content bundled in anything it ships**.
One app is fine; it may emit several artefacts.

## What it has to do, end to end

1. **Identify** the copy: extract `default.xex`, decode the image, record title
   id, image base/size, entry point, and hashes. Refuse to continue if the copy
   does not match a recorded identity when one exists — a *different build of
   the same game* recompiles cleanly, links, boots, and then fails on data that
   moved, with nothing in the symptoms pointing at the executable.
2. **Scaffold** a per-title XenonRecomp config: helper addresses, setjmp/longjmp
   (or a reviewed statement that the title has none), initial jump tables.
3. **Recompile to convergence**: no undecodable or unknown instructions, no
   dropped switch cases, no functions running off their end, and an independent
   jump-table pass that agrees with what was emitted.
4. **Build** the translated code against the runtime into a native binary.
5. **Package** two things: a runnable local build, and a *redistributable*
   port kit that contains only the recipe — TOMLs, helper addresses, recovered
   switch tables, scripts, README — and **no** `ppc/`, assets, audio or built
   binary. The recompiled output is the game's own code in another form; that
   is the whole reason the kit is recipe-only.

## Reuse, do not reinvent

Every stage already exists as a script. The app is a front-end over them plus
the gating, not a new pipeline.

- `~/Downloads/Sonic4Recomp/runtime/tools/` — `title_probe`, `recompile_title.sh
  --converge`, `build_recompiled_cpu.sh`, `find_jump_tables.py`,
  `fix_function_boundaries.py`, `generate_import_stubs.py`, `stfs_extract_tree`
- `~/Downloads/XboxRecompWorkbench/xbox_workbench/` — `pipeline.py` is the gate
  machine and the stage contract; `release_bundle.py` builds the port kit and
  `validate_port_kit` enforces the no-content rule. `catalog/stages.json` lists
  the fifteen gates and what evidence each must retain.
- `~/DaytonaUSARecomp` and `~/ChoplifterHDRecomp` — the standalone output shape:
  `build.sh`, `play.sh`, `verify_dump.sh`, `identity.toml`, vendored runtime,
  no game data. This is what "distribute without assets" already looks like;
  make the app emit exactly this.
- XenonRecomp itself: `~/development/xenon-native/repos/XenonRecomp/build_new`.

## Facts that will cost a day each if rediscovered

- **Assets are not extracted.** The built binary mounts the retail package at
  run time; the package path is argv[1]. Some titles additionally need their
  extracted directory as argv[2] or they spin forever without saying why.
- **Jump tables:** when emitted-vs-recovered disagree only on register, the
  SCALING-instruction source register is the one that belongs in the TOML, not
  the bounds-check register — the bounds register may be clobbered before the
  `bctr`. A truncated-but-plausible table count is the silent kind of wrong.
- **A title with no setjmp/longjmp** is legitimate; it needs the reviewed-absence
  flag rather than invented addresses.
- **Titles quit for undramatic reasons.** Jetpac terminates immediately if every
  controller port answers DEVICE_NOT_CONNECTED, so a headless run with no pad
  looks like a crash and is not one.
- **The runtime is vendored per port repo and drifts.** `sync_runtime.sh` exists
  and re-applies two deliberate divergences by hand; the app should own this
  rather than leaving it to a human.

## Do this first, before any feature work

**Sonic 4 Episode I currently renders black.** It is the only title with a
passing oracle gate, so it is the reference every renderer change is validated
against — and while it is black, nothing can be validated. A validation run
against its retained frames produced a 26-38% pixel difference that read as a
regression from two in-flight renderer changes and was not; one of those changes
was reverted on that false signal. Establish why it is black and restore a
trustworthy baseline before touching anything else.

The two reverted renderer findings, with their measurements, are in this
repository's README. The pass-extent one has strong positive evidence
(SoulCalibur: scene pass 1440x224 to 1440x1080, four dead passes recovered, 32%
sharper, blur and trails gone) and no valid evidence against it.

## Ground rules

- Verify by measuring, not by reasoning about the code. Several confident
  diagnoses in this work were wrong and were only caught by looking at pixels:
  "the texture coordinates collapse" (they did not — the crop was
  unrepresentative), and "the pass fix broke Sonic" (it did not — Sonic was
  already black).
- **Mutation-test every test.** Two suites in this repository passed while
  checking nothing. Break the behaviour, rebuild, confirm the test fails.
- Tests must not rely on `assert()`; these projects build tests in Release where
  `-DNDEBUG` removes it.
- No AI attribution in commits or files.
- Never commit game content: no ROMs, packages, extracted textures, meshes,
  `ppc/`, or built title binaries.
