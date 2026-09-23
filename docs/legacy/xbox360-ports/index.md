---
title: Xbox 360 → Native Linux Ports
description: Statically recompiling Xbox 360 titles into native Linux executables with the ReXGlue SDK
---

# Xbox 360 games, running as native Linux binaries

This project **statically recompiles Xbox 360 titles into ordinary Linux
executables** — no emulator process, no JIT. Each game's PowerPC code is
translated ahead-of-time to C++ by the
[ReXGlue SDK](https://github.com/CrownParkComputing/rexglue-sdk) (an
ahead-of-time recompiler rooted in the foundations of the BSD-licensed
[Xenia](https://github.com/xenia-project) emulator), compiled with Clang, and
linked against a runtime that provides an HLE Xbox kernel and a Vulkan GPU
backend. The binary then plays the game from your own legally-dumped data.

Several XBLA and retail-disc titles boot, render, and play this way today.

## Downloads

| What | Link |
|---|---|
| **ReXGlue toolchain, prebuilt (Linux x86_64)** — recompiler CLI + runtime + Vulkan GPU plugin, no SDK build needed | [rexglue-linux-x86_64.tar.gz](https://github.com/CrownParkComputing/rexglue-sdk/releases/latest) |
| ReXGlue SDK source | [github.com/CrownParkComputing/rexglue-sdk](https://github.com/CrownParkComputing/rexglue-sdk) |
| Ports suite (configs, scaffolds, tooling — this site's repo) | [github.com/CrownParkComputing/xbox360-ports](https://github.com/CrownParkComputing/xbox360-ports) · [zip](https://github.com/CrownParkComputing/xbox360-ports/archive/refs/heads/master.zip) |

No game downloads are offered, ever — the downloads above contain zero game
content. You bring your own legally-dumped games and the toolchain turns them
into native binaries on your machine (quickstart below).

**Nothing copyrighted is hosted here.** The
[repository](https://github.com/CrownParkComputing/xbox360-ports) contains only
recompiler configuration, host-shell scaffolding, tooling, and engineering
notes. You must supply your own game dumps to build anything runnable.

---

## What's playable

| Title | Status | Notes |
|---|---|---|
| SoulCalibur | ✅ Playable | "Perfect" — guest setjmp/longjmp redirection was the key fix |
| SoulCalibur II HD | ✅ Playable | SPIR-V shader resync + load-shader pitch contract fix |
| Bubble Bobble Neo | ✅ Playable | setjmp/longjmp fix |
| Space Giraffe | ✅ Playable | setjmp/longjmp fix + thunk-cluster batch |
| Hydro Thunder Hurricane | ✅ Playable | White-surface bug fixed (texture `exp_adjust` fetch-constant) |
| OutRun Online Arcade | ✅ Playable | Gear-change SFX loops (XMA one-shot completion bug) |
| Choplifter HD | ✅ Playable | Needs the pixel-shader-interlock render-target path for correct colours |
| Project Gotham Racing 3 (disc) | ✅ Plays | 30 fps pacing; known glass/reflection artifacts |
| Ridge Racer 6 (disc) | 🟡 Runs | FSI render-target path + fuzzy alpha epsilon |
| Ridge Racer (disc) | 🟡 Runs | FSI render-target path for correct colours |
| Split/Second (disc) | 🟡 Boots | Multi-module title; renders past where Xenia crashes |
| Raiden Fighters Aces (disc) | 🟡 Menu | Menu renders at 64 fps; game modules in bring-up |
| Bionic Commando Rearmed | 🟡 Frozen | Renders, but game logic never advances |
| Jetpac Refuelled | 🟡 Impaired | Plays, some sprites invisible |
| SoulCalibur IV (disc) | ❌ Stalled | At parity with upstream Xenia's known stall |
| Daytona USA | ❌ Not working | Never presents a frame |
| Geometry Wars Evolved | ❌ Not working | Silent no-present stall |
| Trials HD | ❌ Not working | XUI menus never load |
| Rainbow Islands | ❌ Not working | Bring-up incomplete |
| Bionic Commando Rearmed 2 | ❌ Not started | Scaffolded only |

See [STATUS.md](https://github.com/CrownParkComputing/xbox360-ports/blob/master/STATUS.md)
for the full engineering detail behind every line of this table.

---

## How it works

1. **Extract** — `tools/extract_game.py` unpacks your game package (XBLA STFS
   or disc dump) into the executable (`default.xex`) and its data files.
2. **Recompile** — the ReXGlue SDK analyzes the XEX, discovers function
   boundaries (recorded in each title's `config/*.toml`), and emits C++ for
   every guest function.
3. **Build** — a small per-title host-shell project compiles that C++ and links
   it with the ReXGlue runtime (HLE kernel, Vulkan renderer, XMA audio).
4. **Play** — `./play.sh <game>` runs the native binary against your extracted
   game data, applying each title's documented workaround flags.

Bring-up of a new title is iterative: `tools/bringup.sh` runs the binary,
harvests unresolved-function faults and codegen's unresolved branch targets,
feeds them back into the recompiler config, and repeats until the title
converges.

## Getting started

```sh
git clone https://github.com/CrownParkComputing/xbox360-ports.git
git clone -b development https://github.com/CrownParkComputing/rexglue-sdk.git

cd rexglue-sdk
cmake --preset linux-amd64
cmake --build --preset linux-amd64-release

cd ../xbox360-ports
export SDK_SRC=/absolute/path/to/rexglue-sdk
tools/newgame.sh mygame mg "/path/to/YOUR GAME/.../000D0000"
tools/bringup.sh mygame mg
./play.sh mygame
```

Requirements: Linux x86-64, Clang, CMake ≥ 3.21, Ninja, a Vulkan-capable GPU,
your own legally-dumped games, and roughly 10 GB of disk per large title.

### Single-game quickstart (minimal download)

The repository is tiny (~160 KB — no game content is ever committed), but if
you only want one title's recipe plus the shared tooling, sparse-checkout it
and skip building the SDK by using the
[prebuilt toolchain](https://github.com/CrownParkComputing/rexglue-sdk/releases/latest):

```sh
git clone --filter=blob:none --sparse https://github.com/CrownParkComputing/xbox360-ports.git
cd xbox360-ports
git sparse-checkout set games/pgr3 tools docs        # pick your game dir

# prebuilt toolchain instead of compiling the SDK:
curl -LO https://github.com/CrownParkComputing/rexglue-sdk/releases/latest/download/rexglue-linux-x86_64.tar.gz
tar xzf rexglue-linux-x86_64.tar.gz
```

Point the game's build at the extracted toolchain, supply your own dump under
`games/<name>/extracted`, and build/play as above. The GPU plugin
(`librexgpu-xenos.so`) must sit next to the built game binary — the tooling
stages it automatically.

Full instructions, layout, and troubleshooting live in the
[repository README](https://github.com/CrownParkComputing/xbox360-ports#readme).

---

## Legal

This project ships no copyrighted material — no game executables, assets,
extracted data, or recompiler output derived from game binaries. You must dump
games you own, with your own console. Recompiled binaries embed copyrighted
game code and must never be redistributed.

Not affiliated with, nor endorsed by, Microsoft or Xbox. Educational,
preservation, and interoperability purposes. All trademarks and copyrights
belong to their respective owners.
