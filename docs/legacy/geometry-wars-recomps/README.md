# Geometry Wars Recomps

Geometry Wars: Retro Evolved, Retro Evolved 2 and 3: Dimensions, statically
recompiled from their original Xbox 360 PowerPC code to native x86-64. No
interpreter, no JIT: the CPU is native, the GPU command stream and shaders run
as native Vulkan, and audio is a native mixer. This repository contains the
recompiled game code and the runtime it runs on - it contains **no game
data**. A launcher is included that imports your own legally-owned copy of
each game (an archive, an extracted folder, or an Xbox Live Arcade content
package) and verifies + builds from it.

## What's here

```
whitty_xenon/       the runtime: kernel, GPU backend, audio, the launcher
geometrywars/        Geometry Wars: Retro Evolved - recompiled PPC source
geometrywars2/       Geometry Wars: Retro Evolved 2 - recompiled PPC source
geometrywars3/       Geometry Wars 3: Dimensions - recompiled PPC source
```

Each game directory holds its recompiled `ppc/*.cpp` (the title's own code,
translated instruction-for-instruction from the original PowerPC binary to
C++), its `_recomp.toml` (the addresses and paths the recompile was built
from) and its `_jumptable.toml` (manually-recovered computed-jump tables the
recompiler could not resolve on its own). None of it is playable without the
original game's own asset files (textures, audio, levels), which this
repository does not and will not include - you need to own the game.

## Building

You need:

- a C++20 compiler (clang or gcc), CMake, Vulkan headers and a Vulkan driver
- SDL3, SDL3_image, SDL3_ttf
- [XenonRecomp](https://github.com/CrownParkComputing/XenonRecomp/tree/geometry-wars-opcodes)
  built once (see below) - the actual recompiler; already-recompiled output
  is committed here, but XenonRecomp is what a converge pass (fixing a jump
  table by hand, or importing a new title) drives. This is a fork of
  [hedge-dev/XenonRecomp](https://github.com/hedge-dev/XenonRecomp): the
  `geometry-wars-opcodes` branch carries the instruction and recompiler
  fixes these titles' code actually needs, upstream at the time of writing
  does not have them, and vanilla upstream silently drops the instructions
  it does not recognise rather than failing loudly - see its own
  `tools/recompile_title.sh` header comment.

```sh
# 1. the runtime
cd whitty_xenon
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j

# 2. each game, against its already-recompiled ppc/ source
TITLE=geometrywars  ./tools/build_recompiled_cpu.sh
TITLE=geometrywars2 ./tools/build_recompiled_cpu.sh
TITLE=geometrywars3 ./tools/build_recompiled_cpu.sh

# 3. the launcher
g++ -std=c++20 -O2 -pthread -Iinclude tools/gw_launcher.cpp -o build/gw_launcher \
  $(pkg-config --cflags --libs sdl3) -lSDL3_image -lSDL3_ttf
```

`build_recompiled_cpu.sh` looks for each game's project directory as a
**sibling** of `whitty_xenon/` - which is exactly this repository's layout,
so building from a fresh clone needs nothing rearranged.

If you need to re-run a recompile (say, a title needs a new jump table
entry), see `whitty_xenon/docs/BRINGUP.md` and `tools/recompile_title.sh` -
it needs XenonRecomp built and on the path the script's own header comment
names.

## Running

```sh
whitty_xenon/build/gw_launcher
```

The three titles this repository ships already have their recompiled source
committed, so they only need the build steps above - not XenonRecomp - to go
from "needs install" to playable. Press **Y** on one and the launcher's file
picker takes:

- an archive (`.rar`/`.zip`/`.7z`) - it extracts it and finds the real content
  inside on its own;
- an Xbox Live Arcade content package - these ship with **no file
  extension** (their name is a content hash), which the picker allows for;
- a loose `.xex`.

Once a title is ready, **A** plays it, **X** opens its save-data manager,
**B** shows its achievements.

### Importing a title NOT already in this repository

That same **Y** import flow also works for a title this repository has never
seen before - it creates a new project directory, writes its config and
recompiles it from scratch. That last step needs the actual recompiler,
which the three bundled titles do not (their output is already committed):

```sh
cd ..                      # the directory holding whitty_xenon/, i.e. this repo's root
mkdir -p repos && cd repos
git clone --recurse-submodules --branch geometry-wars-opcodes \
  https://github.com/CrownParkComputing/XenonRecomp
cmake -S XenonRecomp -B XenonRecomp/build_new -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_C_COMPILER=clang
cmake --build XenonRecomp/build_new -j
```

`--recurse-submodules` matters - without it the configure step fails looking
for `thirdparty/xxHash`. So does building with clang specifically: XenonRecomp
uses an anonymous-struct pattern GCC rejects as invalid and clang accepts. The
launcher checks for exactly this path (`repos/XenonRecomp/build_new/...`)
before attempting an import and tells you these same steps if it is missing.

The launcher checks for this itself and tells you the same thing if it is
missing, rather than failing partway through with a bare path.

A gamepad works throughout - d-pad/stick to move, the same four face buttons
the on-screen hints show. Keyboard also works: arrows, Return/Space for A,
Backspace for B, Tab for X, I for Y, Escape to quit.

## Legal

No game files, discs, packages or assets are distributed in this repository
or downloaded by the launcher. You need to own the game; the launcher only
imports a copy you already have.

## License

MIT - see `LICENSE.md`. Built against
[XenonRecomp](https://github.com/hedge-dev/XenonRecomp) (MIT), not vendored
here.
