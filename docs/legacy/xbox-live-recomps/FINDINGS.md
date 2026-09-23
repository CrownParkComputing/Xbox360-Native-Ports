# Findings

Cross-title knowledge from converting these games. This is analysis, not game
code - the recompiled output is deliberately absent from this repository, and
always will be, because it is the title's own instructions in another syntax.
What is here is what we learned about how to convert them, which is ours.

## Consult the oracles first

Before any long diagnostic path, in this order - each step is minutes and any
of them can save a day:

1. **The title's xenia-project/game-compatibility issue** (search the title id,
   e.g. `58410B1D`). It says what a mature emulator achieves and what labels it
   earned (`gpu-drawing-corrupt`, `kernel-save-errors`, ...). A fault we share
   with Xenia is probably the title being hard; a fault Xenia does not have is
   probably ours.
2. **Xenia's source** for the subsystem in question - the behaviour oracle, read
   before implementing, not only when stuck.
3. **Ghidra on the guest XEX** for control-flow questions - who calls a
   handshake writer, what a flag byte means. The recompiled sources carry the
   original instructions as comments, but Ghidra answers "who references this
   address" in one query.
4. **Perf checks as bookends**: the kernel-import histogram
   (`RETRO_IMPORT_TOP=250`) and the presented-frame-gap stats at the START of a
   title's bring-up and again at the END of any fix. A pathological count names
   a hang; a gap regression names a pacing fault - and bookending catches them
   in the session that caused them.

What the oracle already told us (2026-08-06):

| title | Xenia's state | what it means for us |
|---|---|---|
| Daytona USA | corrupt graphics on tracks even in Xenia; paid mode freezes on main menu failing to create a save | our broken in-race textures are shared-hard territory, not necessarily a regression; the save path is a known freeze trigger |
| OutRun Online Arcade | reaches gameplay (garbled, slow) | our white-screen boot hang is OURS - Xenia proves the title can get there |
| Geometry Wars 2 | perfectly playable | our too-dark rendering is entirely our bug |
| Space Giraffe | cannot get past a gamer-profile error box, no background | our attract mode rendering is AHEAD of Xenia here |
| After Burner Climax | playable; game speed couples to vsync settings | pacing sensitivity is in the title, worth remembering for frame-gap work |

## Shared engines announce themselves in the switch tables

After Burner Climax and OutRun Online Arcade are both Sumo Digital / SEGA
titles, and the conversion found the *same two* mis-recovered jump tables in
each - same case counts, same guard forms, different addresses:

| | After Burner Climax | OutRun Online Arcade |
|---|---|---|
| table A | `0x82259D88`, 20 → **19** | `0x8229E700`, 20 → **19** |
| table B | `0x823C18A8`, 50 → **35** | `0x824094A0`, 50 → **35** |

Both A tables are guarded by `cmplwi crN,rX,18` + `bgt` (19 cases, 0..18); both
B tables by `cmplwi crN,rX,34` + `ble` (35 cases, 0..34). That is the same
engine code relocated by the linker.

**Use:** when a new title shows a table disagreement with a familiar case count,
check the sibling titles first. It is faster than reading the guard, and it
tells you which engine you are dealing with before you have booted anything.

## Jump-table recovery: the two failure directions

A PowerPC `switch` is a bounds check, a table read and an indirect branch, with
the table sitting in the code stream as data. Both ways of getting it wrong are
silent - the binary links, boots, and fails only on the specific case:

* **Over-read** (the common one). The recovered table runs past its real end
  into whatever follows, often the next table. Surplus entries decode as
  plausible in-range addresses. Every instance so far came from harvesting
  rexglue's codegen.
* **Under-read.** The scanner cannot find the bounds check and falls back to
  deriving the count from the table's contents. Seen in OutRun at `0x82152A2C`:
  the guard sat **36 instructions** before the `bctr` because the compiler
  hoisted twelve `lis`/`addi` pairs into the gap, past the scanner's window. It
  derived 108 entries for a 59-entry table and ran into the next table two bytes
  later. Fixed in the converter by widening the bounded search window.

**Always settle a disagreement by reading the guest's own bounds check** -
`cmplwi crN,rX,LIMIT` gives exactly `LIMIT+1` cases. Never by counting entries
that "look like addresses", and never by capping at the next table's start
(OutRun proved that yields 60 where the guard says 59, because of padding).

## Audio: no Xbox 360 codec has been needed yet

| title | banks | codec |
|---|---|---|
| Geometry Wars 3 | FSB5 (FMOD) | Vorbis (music), PCM16 (sfx) |
| After Burner Climax | `.adx`, `.csb`, `.csh` | CRI ADX / Atom |
| OutRun Online Arcade | `.PAK` | XMA (decoded, works) |

Two of the three ship standard codecs inside middleware containers. The
instinct to reach for an XMA decoder is usually wrong - read the container
header first. An FSB5 header gives its codec in the `mode` field at offset
0x18 (15 = Vorbis, 2 = PCM16, 10 = XMA).

## Asset probing looks like failure and is not

Titles walk a fallback chain and only the misses are logged. Geometry Wars 3
produces ~1900 "cannot open" lines per run and is missing nothing: it probes
`Xbox360/` → `Console/` → `XBox360/` → `ARCHETYPE/` → `Common/`, and a `1080`
tier before the base tier. OutRun probes `.gpu` (uncompressed) before `.gpz`
(compressed) and every `.gpz` is present.

**Before believing an asset is missing, check whether the next candidate in the
chain exists.** Genuinely absent so far: only OutRun's `TRC.*` files, which are
Microsoft's Technical Requirements Checklist project - a certification artefact
that is not shipped in a retail package.

## Kernel behaviours titles depend on

Every hang met so far was one missing kernel behaviour, and each was found the
same way: **the kernel-call histogram printed at exit**. A pathological count
names the bug immediately. A healthy title does a few million kernel calls per
20 seconds in total; anything doing millions per *second* of one import is the
bug.

| symptom | count | cause |
|---|---|---|
| every blocking wait busy-polls | `NtWaitForSingleObjectEx` 308M/30 s | an inline fast path returned `STATUS_TIMEOUT` for infinite waits |
| workers never park | `NtSuspendThread` 2.5M/s, paired 1:1 with `RtlNtStatusToDosError` | the `-2` current-thread pseudo-handle was not translated, so the call answered `STATUS_INVALID_HANDLE` |
| title frozen, still rendering | (no pathological count) | a system-UI blade was opened but its *closing* notification never broadcast |
| task workers deadlock | main thread spinning, both workers parked with work queued | a resume that arrived before its park was dropped |

The third has no histogram signature, because nothing is being called too often
- the title is waiting correctly for something that never comes. For those,
sample the guest stack instead.

## Tooling that earns its place, in order

1. **Kernel-import histogram** (`RETRO_IMPORT_TOP=250`) - found every hang so far.
2. **Xenia's source** (not the binary) - says what the correct behaviour is. Its
   screenshot paths do not work on this machine; the source is the oracle.
3. **The recompiled sources' PPC comments** - every original instruction sits
   beside its translation, which settles any question about guest code without
   a disassembler.
4. **Core-dump sampling** - `ulimit -c unlimited`, `kill -ABRT`, `coredumpctl
   info`; guest frames appear as `__imp__sub_XXXXXXXX`. Needed when the bug has
   no histogram signature. `gdb -p` is blocked by yama `ptrace_scope=1`.

## Conversion order that saves passes

Run rexglue codegen and `xexport harvest` **before** the first recompile. The
first title converted without doing so and spent three passes clearing 428
unemitted jump tables that harvest supplies up front. With harvest first, both
later titles converged in two passes, the only manual work being the table
disagreements above.
