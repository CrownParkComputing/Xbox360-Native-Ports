# banjokazooie

Recompiled Xbox 360 title on the ReXGlue SDK at `/home/jon/recomp-ports/recomp-family/_library/rexglue-vmx`.

## Build

Configure with **clang**. With g++ the `DEFINE_REX_FUNC` weak alias
(`sub_X` -> `__imp__sub_X`) is not emitted and the link fails with tens of
thousands of undefined `sub_XXXXXXXX` references from the register table.

```sh
cmake -S . -B out/build/linux -G Ninja -DCMAKE_BUILD_TYPE=Release \
  -DCMAKE_C_COMPILER=/usr/bin/clang -DCMAKE_CXX_COMPILER=/usr/bin/clang++
cmake --build out/build/linux -j$(nproc)
./run.sh
```

## Content

`assets/` holds the disc files and is never in Git. `tools/content_zip.sh
pack` packs it into one stored zip under `content/` - also never committed -
with `content/content.sha256` (which IS committed) recording the archive
checksum and every file's.

Importing the content is not part of the build: a rebuild must not depend on
having the game to hand. `./run.sh` checks `assets/` against those checksums
and, only when they do not match, asks where the archive is - or takes
`BANJOKAZOOIE_CONTENT_ZIP=/path/to/banjokazooie-content.zip`.

## First run: let the doctor pick the settings

```sh
tools/port_doctor.sh .        # ~6 minutes, no display, nobody at the keyboard
```

Checks the generated code, then runs the title on each render path and each
page-coherency setting and reports what each one costs. Every check exists
because a title failed it and the cause took hours to find by hand: Shift 2
loses its text on the `host` path, Hydro Thunder renders blocky tile-pattern
garbage with `clear_memory_page_state=false`, MCLA is 25% faster on `host`.
Nothing about the symptom says which - compare the frames it captures.

## Testing without a display

```sh
tools/headless_play.sh 150 "25:Return 100:e:35"   # capture frames, drive menus
tools/measure.sh 150 "25:Return"                  # per-frame cost breakdown
tools/measure.sh 150 "25:Return" --gpu_hot_page_frames=0   # A/B a setting
```

## Watching and driving it live: raylib

`tools/rayplay.sh` runs the title in its usual gamescope-headless session and
puts a **raylib** window (the SDK's `rayview`, built from `~/raylib-src`) on
your screen in its place. The title streams its presented frames over
`REX_DUMP_FRAME`; rayview tails the dump and shows each new one, and injects a
virtual Xbox 360 pad over uinput that SDL sees regardless of window focus - so
you watch and drive the game without anything in the runtime changing.

```sh
tools/rayplay.sh          # 5 minutes; Escape to quit
tools/rayplay.sh 120      # 2 minutes
RAYVIEW_ARGS=--press-test tools/rayplay.sh 60   # self-proving input chain
```

Keys: arrows/WASD left stick, IJKL right stick, Enter Start, Space A,
LeftShift B, Tab Back, Q/R LT/RT, F/G LB/RB; a real pad is forwarded 1:1.
`REX_DUMP_FRAME_EVERY=3` (the default here) keeps the readback cost tolerable;
raise it for timing-sensitive work.

## Start menu: importing a game, rendered in raylib

`tools/rexmenu.sh` opens the port's face: a raylib-rendered start menu with
**Play (no DLC)**, **Import game files**, **Info** and **Quit**. Import is a
direct raylib file browser (d-pad to navigate, A opens/chooses, B goes up, Y
imports the folder you are standing in) that hands what you picked to this
port's own `tools/import_content.sh` and streams its output into a log pane;
DLC stays optional and skipped unless asked for. The on-screen
retro_touch_pad overlay is drawn on the menu itself, and a real or virtual
gamepad drives everything - no zenity dialog anywhere. When you press Play,
the game opens in its own window and that same on-screen pad is forwarded
through a uinput virtual Xbox 360 pad: touch the buttons on the menu window
and the game obeys, no focus needed.

```sh
tools/rexmenu.sh            # Play once content is imported; Import if not
```

The menu binary is shared by the family and built once from `../_menu` on
first run (`REXMENU_SRC` overrides where it lives).

## Replacing guest code with native code

Any recompiled function can be replaced with a native C++ one. `DEFINE_REX_FUNC`
emits the body as `__imp__<name>` and `<name>` as a weak alias, so a strong
definition in `src/` wins at link time and the original stays callable:

```cpp
#include <rex/hook.h>
extern "C" void __imp__sub_82345678(PPCContext& ctx, uint8_t* base);

REX_HOOK_RAW(sub_82345678) {
  // measure, replace, or skip - then optionally run the original
  __imp__sub_82345678(ctx, base);
}
```

Add the file with `target_sources(<title>_recomp PRIVATE ...)` AFTER
`rexglue_setup_target`, which is what creates that target. This survives a
re-codegen, which a hand edit to `generated/` does not - that is the whole
reason the mechanism exists. `REX_HOOK(name, fn)` marshals PPC registers into
plain C++ arguments; `[[midasm_hook]]` in the manifest injects a native call at
one instruction inside a function.

Worth knowing what this is NOT for: replacing a title's audio or physics
middleware wholesale has been tried and does not work, because the state that
matters (voice position, gain, pan) lives inside the guest and is not visible
from outside it. Use it to measure, to skip a path that cannot work, or to fix
one function - not to reimplement a subsystem.

## Configuration

`config/banjokazooie.toml` starts from the shared profile in the SDK
(`tools/port_profile.toml`) - every setting there carries the measurement that
justifies it. If something renders wrong, turn them off in this order:
`gpu_hot_page_frames`, `clear_memory_page_state`, `render_target_path_vulkan`.
