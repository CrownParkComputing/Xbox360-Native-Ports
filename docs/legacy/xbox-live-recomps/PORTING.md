# Porting a new title: the runbook

Distilled from Geometry Wars: Retro Evolved, Geometry Wars: Retro Evolved 2
(both on the whitty_xenon recipe pipeline in this repository) and Sonic 4
Episode I (on the rexglue-vmx standalone pipeline at `~/sonic4ep1-recomp`).
Written so the next title — Banjo-Kazooie, `58410954`, recipe already at
`games/banjokazooie` — does not re-pay for what these three cost.

Companion documents: `FINDINGS.md` (cross-title conversion knowledge),
`ANDROID_SPEED_COOKBOOK.md` (the Android performance procedure). This file is
the *sequence*; those are the reference.

## 0. Know which pipeline you are in

Two pipeline generations exist and they are not interchangeable:

* **whitty_xenon recipes** (this repository, `games/<slug>/`): XenonRecomp
  codegen, per-title `<slug>_recomp.toml` + `<slug>_jumptable.toml`, vendored
  runtime, `build.sh` / `play.sh` / `verify_dump.sh`. GW1, GW2, and Banjo are
  this shape.
* **rexglue-vmx standalone** (`~/sonic4ep1-recomp`, SDK at `~/rexglue-vmx`):
  ReXGlue manifest (`sonic4ep1_manifest.toml`), `generated/` tree, CMake +
  clang. Do not carry conventions from one into the other. In particular see
  section 2: a boundary list from one project is *wrong* for another, even
  between titles on the same pipeline.

## 1. Extracting the title from its STFS package

The signed package (the single file under `<titleid>/000D0000/`) is the shape
these titles actually ship in, and the runtime mounts it directly at run time.
The trap: **a package is a bundle, and the Geometry Wars packages carry more
than one game's worth of content** (`geometry-wars-collection.toml` records
the same pattern for GW3 Dimensions: `evolved_assets_embedded_in_owned_package
= true`). Extracting the bundle and pointing the port at the wrong embedded
executable produced a crash whose symptoms never said "wrong binary" — the
ported code was simply not the title it claimed to be.

The defence already exists and is not optional:

1. Extract, then run `title_probe` on the result and check it against
   `<slug>/identity.toml` — title id, image base, entry point, image size,
   and the FNV hashes of both the `default.xex` and the decoded image.
   `verify_dump.sh <copy>` does exactly this; run it before anything is built.
2. Treat any mismatch as *stop*, not as a note. A different build of the same
   game recompiles cleanly, links, boots, and fails on data that moved. That
   evening has been spent; it does not need spending again.

Banjo note: `games/banjokazooie/banjokazooie/identity.toml` records
`container_kind = "loose"` and `needs_extracted_tree = "true"` — this port was
built against an extracted tree, so the tree layout is part of the identity.

## 2. Recompiling

Common to both pipelines:

* Run codegen and harvest **before** the first recompile. Harvest supplies
  jump tables up front; skipping it cost three passes clearing 428 unemitted
  tables on the first title converted. With harvest first, later titles
  converged in two passes.
* Settle any jump-table case-count disagreement by reading the guest's own
  bounds check (`cmplwi crN,rX,LIMIT` → LIMIT+1 cases). Never count plausible
  addresses; never cap at the next table's start (padding lies).
* Name setjmp/longjmp in the config. Undeclared, the longjmp is emitted as an
  ordinary call, control never unwinds, and the title renders nothing. Both
  Geometry Wars titles were black for exactly this reason; the fix was two
  lines. Identify the pair by register set (longjmp restores f14-f31, r13-r31,
  LR, CR, r1 from a buffer and returns; setjmp saves the same fields).

whitty_xenon specifics: helper addresses (`savegprlr`/`restgprlr`,
`savefpr`/`restfpr`, `savevmx`/`restvmx` 14/64), setjmp/longjmp and the
function tables live in `<slug>/<slug>_recomp.toml`; recovered switch tables
in `<slug>_jumptable.toml`. GW2 found its setjmp/longjmp by matching GW1's CRT
copies byte for byte — a sibling title's *helpers* transfer when the CRT
matches; its *function boundaries* do not.

rexglue-vmx specifics: configure with **clang** (with g++ the `DEFINE_REX_FUNC`
weak alias is not emitted and the link fails with tens of thousands of
undefined `sub_XXXXXXXX` references). After codegen, run
`tools/port_check.py <project-dir>` — it finds unresolved calls, undeclared
labels and switch fall-through traps in the generated sources, and prints the
`[entrypoint.functions]` lines to paste into the manifest. That paste is the
supported fix; a hand edit to `generated/` does not survive re-codegen.

### The boundary-list trap (cost real time — do not repeat)

**Never carry over another project's `functions = [...]` boundary list.** The
list declares where functions begin; a foreign list declares boundaries that
do not exist in this title. The failure this caused presented as link errors
for `__restvmx_89` — and the natural misreading is "the runtime is missing a
helper symbol". It is not. `__restvmx_89` is a *generated* per-range VMX
restore variant (the siblings `__savevmx_89` / `__restvmx_89` are declared in
the generated funcs header, e.g. `generated/default/sonic4ep1_funcs.h`);
codegen only emits the helper bodies that fall inside declared function
boundaries. A copied boundary list cuts the CRT helper region in the wrong
places, so calls to a mid-helper entry point are generated while the body
behind them is never emitted. The link failure is the *symptom*; the copied
list is the cause. Fix: derive the boundary list for this title
(`port_check.py` prints it), or leave it empty and let analysis find the
functions. Do not treat it as a missing-symbol problem and go hunting in the
runtime — that hunt is the time sink.

## 3. Building and running: patience vs. genuine stall

Order of operations when a run appears to hang:

1. **Kernel-import histogram first** (`RETRO_IMPORT_TOP=250`). A pathological
   count names the bug: a healthy title does a few million kernel calls per
   20 s in total; millions per *second* of one import is the hang. Every
   histogram-signed hang so far was one missing kernel behaviour (the table in
   `FINDINGS.md`).
2. **No histogram signature is not proof of a stall.** It can mean the title
   is waiting correctly for something that never comes — or that it is simply
   slow and progressing. GW1 was diagnosed "hung" and was not; the technique
   that settled it is stack sampling over time:
   * `gdb -p` is blocked on this machine by yama `ptrace_scope=1`. Use
     core-dump sampling instead: `ulimit -c unlimited`, `kill -ABRT <pid>`,
     `coredumpctl info` / gdb on the core. Guest frames appear as
     `__imp__sub_XXXXXXXX`.
   * Take samples **seconds apart, more than once**. Stacks that move between
     samples mean the guest is making progress — the correct response is
     patience, not a fix. Stacks identical across samples are the genuine
     stall, and the top guest frame names where it is waiting.
3. Only then reach for the oracles (`FINDINGS.md`, "Consult the oracles
   first"): the title's xenia-project/game-compatibility issue, Xenia source
   as the behaviour oracle, Ghidra on the guest XEX.

## 4. The native audio cache: proven, and deliberately not shipped

There is a native decoded-audio cache. On desktop it is **proven bit-exact**
against the direct decode. It is **not currently shipped**, and that is a
decision, not an oversight: the same cache that is bit-exact on desktop
behaves differently on device, and the discrepancy is **unexplained**. Nothing
about the cause has been established — not timing, not endianness, not the
cache format.

Do not re-enable it blind. Re-enabling requires first reproducing the
device/desktop divergence under controlled conditions (same input bank, same
run length, captured output on both sides) and root-causing it. Until then the
runtime decodes in place on both platforms.

## 5. Android packaging

`runtime/android/build.sh` (NDK 28.2.13676358, arm64-v8a, android-30).
Outputs in `build-android/out/`: the `whitty_<title>` PIE executable — push it
and run it under `adb shell` **first** (full harness log, no install/signing
in the way) — then `whitty-<title>.apk`, plus a static qemu-aarch64 build for
correctness only (qemu timing is meaningless).

Machine-specific override that is easy to miss: the script defaults
`SIMDE` to `${HOME}/rexglue-sdk/thirdparty/simde`, **which does not exist on
this machine**. The SDK checkout here is `~/development/xenon-native/repos/
rexglue-sdk`, so:

```sh
SIMDE=$HOME/development/xenon-native/repos/rexglue-sdk/thirdparty/simde \
  runtime/android/build.sh
```

(`simde/x86/sse.h` verified present at that path.) The failure without the
override is the script's own `require` check, so it fails fast — but the
default path will never be right here.

Standing Android rules: one APK package name per title
(`com.whittyxenon.<title>`) — reusing one makes installing title B silently
uninstall title A. All targets link `-Wl,-z,max-page-size=16384`; the guest
4 GiB reservation layout is not representable on 16 KiB-page kernels, so
expect the runtime's own error there, not the loader's. Music needs
`FFMPEG_ANDROID` pointing at the arm64 FFmpeg built with only xma1/xma2/wmapro
decoders; without it music is silently absent. Port 0 is reported connected
before anything is pressed, because the handheld's buttons are part of the
machine; BACK is deliberately not consumed — it is the way out.

If a run exits immediately with no message, check a controller is connected
before assuming a crash — some titles terminate when every port answers
`DEVICE_NOT_CONNECTED`, and a pad-less run looks exactly like a crash.

## 6. What done looks like

Both Geometry Wars titles hit every row below; anything less is not done.
The per-title cookbooks (`games/<slug>/cookbook/`) carry the full runtime
matrix with the retained evidence requirements; this is the gate-level
version:

* `verify_dump.sh` passes against the copy being built from (identity gate:
  title id, image geometry, both hashes).
* Recompile gate: every codegen diagnostic counter at zero (undecodable,
  unrecognized, switch cases outside function, functions running off the end,
  dropped branches, dropped switch cases, dispatches with no table), and jump
  tables emitted == recovered == agreed (GW2: 149/149/149).
* Native binary links and builds clean.
* Plays: startup/title/menu, gameplay through death/result and menu return,
  picture correct (GW1: "plays; picture correct"; GW2: "plays at full
  brightness since the exp_adjust fix" — repo README title table).
* Audio continuous and non-zero in menu and gameplay, with mute/volume/focus
  transitions behaved.
* Controller: both sticks, pause/resume, disconnect/hot-plug, focus changes.
* Guest-created settings/progress survive a second process; a corrupt save is
  rejected deterministically without silent replacement.
* Branded close (`Closing <title>` … `Please wait for it to close.`), guest
  termination off the UI thread, exit status zero, no residual process.

## 7. Open issues carried forward

Three, carried honestly. Each has what is known and what a fresh
investigation would need.

1. **Audio cache device/desktop discrepancy.** Known: the native cache is
   bit-exact on desktop; on device it diverges; the cause is entirely open.
   Needs: controlled reproduction — same bank, same run length, captured PCM
   on both sides, diffed — before the cache is re-enabled (see section 4).
2. **Device-side controller interception.** Known: on the handheld, something
   outside the port intercepts controller input. The runtime's contract is
   otherwise settled (port 0 always connected, BACK deliberately passed
   through), so the interception sits between the device and that contract.
   Needs: an on-device input-capture session on the Retroid Pocket Flip 2 —
   log what the runtime's input path actually receives per physical control —
   to name which layer takes the events.
3. **Run-to-run audio non-determinism.** Known: audio output differs between
   otherwise-identical runs. Not root-caused; no histogram signature
   associated. Needs: deterministic capture of two same-input runs and a diff
   to localise where the streams first diverge, then section 3's sampling
   technique on that site.

## Banjo-Kazooie: state at time of writing (2026-09-18)

`games/banjokazooie/` is scaffolded on the whitty_xenon pipeline: `build.sh`,
`play.sh`, `verify_dump.sh`, vendored `runtime/`, `identity.toml` (title
`58410954`, entry `8242FB58`, image `0x540000` bytes, `container_kind =
"loose"`, `needs_extracted_tree = "true"`). Jump-table recovery was actively
converging through 2026-09-17/18 (the `*.bak-*` trail in
`banjokazooie/banjokazooie/`). There is no `cookbook/` or `gates.json` yet —
those are created as the gates in section 6 are passed.
