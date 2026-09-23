# hydrothunder

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
`HYDROTHUNDER_CONTENT_ZIP=/path/to/hydrothunder-content.zip`.

## Testing without a display

```sh
tools/headless_play.sh 150 "25:Return 100:e:35"   # capture frames, drive menus
tools/measure.sh 150 "25:Return"                  # per-frame cost breakdown
tools/measure.sh 150 "25:Return" --gpu_hot_page_frames=0   # A/B a setting
```

## Native input pilot

Set `HYDRO_NATIVE_INPUT=1` to use the native virtual gamepad instead of the
SDL/ReXGlue input driver. In this mode the window keyboard is mapped as follows:
arrow keys for the D-pad, `Return` for Start, `Tab` for Back, `Space`/`Z`/`X`/`C`
for A/B/X/Y, `WASD` for the left stick, and `Q`/`E` for the triggers. External
frontends can set the same controller state through the exported
`hydro_native_set_input` function.

The desktop profile keeps native 2x MSAA and 4x anisotropic filtering while
preserving the 1x internal resolution needed for full-speed play. Higher
resolution scaling can be tested with `resolution_scale = 2`, but it costs
substantial GPU performance.

## Standalone launcher

Run `tools/launch.sh` (or `tools/rexmenu.sh`) to open Hydro's launcher UI.
It uses Hydro's own root, icon, content checks, and runtime. The Import action
accepts an extracted XEX folder, archive, ISO, or XBLA package; DLC packages
can be installed with `tools/import_content.sh --dlc <LIVE|CON|PIRS file>`.
To intentionally empty imported game files, run
`tools/clear_content.sh --yes`, then import them again from the launcher.

## Configuration

`config/hydrothunder.toml` starts from the shared profile in the SDK
(`tools/port_profile.toml`) - every setting there carries the measurement that
justifies it. If something renders wrong, turn them off in this order:
`gpu_hot_page_frames`, `clear_memory_page_state`, `render_target_path_vulkan`.
