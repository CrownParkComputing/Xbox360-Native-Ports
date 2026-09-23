# geometrywars3

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
`GEOMETRYWARS3_CONTENT_ZIP=/path/to/geometrywars3-content.zip`.

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

`config/geometrywars3.toml` starts from the shared profile in the SDK
(`tools/port_profile.toml`) - every setting there carries the measurement that
justifies it. If something renders wrong, turn them off in this order:
`gpu_hot_page_frames`, `clear_memory_page_state`, `render_target_path_vulkan`.
