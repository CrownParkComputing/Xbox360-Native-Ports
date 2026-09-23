# Xbox 360 Native Ports

Xbox 360 titles recompiled to run natively. Each release on this page is a
**launcher**: the recompiled game code, a native Vulkan renderer, a native
audio path and a small GUI. It contains no game data. You point it at your own
copy of the game - an archive, a disc image (`.iso`) or an extracted folder -
and it imports that, verifies it against the checksums the port was built
from, and plays.

Every title has a Linux launcher and a Windows launcher; see each release's
notes for what has been tested. No Android builds of these disc titles yet:
they are too slow until the console layer is fully native.

## Using a launcher

### Linux

1. Download the title's `*-launcher-linux-x86_64.tar.zst` from
   [Releases](../../releases) and unpack it:
   `tar --zstd -xf burnoutrevenge-launcher-linux-x86_64.tar.zst`
2. Run `tools/port_gui.sh` (or `./run.sh`). The first thing it asks is where
   your copy of the game is: a `.rar`/`.zip`/`.7z`, a `.iso` disc image, or
   the extracted folder. Each launcher names the disc (region and title ID)
   its checksums came from - the same disc gives a byte-for-byte verified
   import; another region usually runs but will not match the checksums.
3. Play. Saves and settings stay in `user-data/` next to the launcher.

Needs: Linux x86-64, a Vulkan-capable GPU driver, `zenity` for the GUI,
`7z` or `unrar` if your copy is an archive, `python3`.

### Windows

1. Download `*-launcher-windows-x86_64.zip` and unzip it.
2. Run `Launcher.bat` (Import game files / Play / Close) or `Play.bat`, which
   imports on first run. The importer takes a `.zip`, a `.iso` (read by the
   bundled `rexiso.exe`), an extracted folder, or a `.7z`/`.rar` if 7-Zip is
   installed.
3. Play. Saves and settings stay in `user-data\`.

Needs: Windows 10/11 x64 with a Vulkan GPU driver. The Windows builds are
cross-compiled from the same sources; the release notes say how far each has
been tested.

Keyboard (Linux and Windows): Return = Start, Space = A, W/A/S/D = left
stick, E = accelerate, Q = brake, Tab = Back. A game controller works as
expected.

## What is native and what is not

The launcher page shows it per title, but the layers are the same for all:

| layer | what runs |
|---|---|
| CPU | the game's PowerPC code, recompiled ahead of time to native x86-64 - no interpreter, no JIT |
| Graphics | a native Vulkan renderer; the console's command stream and shaders run as Vulkan |
| Audio | a native mixer; XMA effects and WMA soundtracks are decoded natively |
| Console OS calls | the one layer still moving: each port answers a growing share of the console's kernel calls itself, the rest go through the runtime's console layer - the percentage in the titles table below is measured from the console calls each game actually makes. CPU, graphics and audio are native on every title; the native / ReXGlue split is only this console-OS-call layer |

## Titles

| title | type | console calls native | via ReXGlue |
|---|---|---|---|
| Burnout Revenge (USA) | Disc | 24% | 76% |
| Ridge Racer Unbounded (USA) | Disc | 0% | 100% |
| Midnight Club: Los Angeles - Complete Edition (USA) | Disc | 0% | 100% |
| Split/Second (USA) | Disc | 0% | 100% |
| Banjo-Kazooie | XBLA | 0% | 100% |
| Banjo-Tooie | XBLA | 0% | 100% |
| Geometry Wars: Retro Evolved | XBLA | 13% | 87% |
| Geometry Wars: Retro Evolved 2 | XBLA | 0% | 100% |
| Rez HD | XBLA | 0% | 100% |
| SoulCalibur II HD Online | XBLA | 0% | 100% |
| After Burner Climax | XBLA | 0% | 100% |
| Hydro Thunder Hurricane | XBLA | 0% | 100% |
| Space Giraffe | XBLA | 0% | 100% |
| OutRun Online Arcade | XBLA | 0% | 100% |
| Daytona USA | XBLA | 0% | 100% |
| Geometry Wars 3: Dimensions | XBLA | 0% | 100% |

Every title is playable. Each port's `CONVERSION.md` records what was done to
it, and its release page has the launcher downloads.

## Building from source

This repository is the full source drop behind the releases: the launcher
and the port trees. Game data is not here - each port imports your own copy
at first run, exactly like the prebuilt launchers.

| path | what it is |
|---|---|
| `_menu/` | rexmenu, the raylib game launcher every title boots into |
| `_shared/` | shared launch scripts (`embedded_play.sh`), import/validation tooling, the game list (`games.index`) |
| `collections/sega/xbla/`, `collections/sega/dvd/` | one directory per port: hand-written glue (`src/`), generated recompiled code (`generated/`), per-title config (`config/`), import/headless tools (`tools/`), bring-up notes (`CONVERSION.md`) |
| `racing-recomps-launcher/` | standalone launcher for the racing titles |
| `_testing/` | import-path test fixtures and harness (synthetic, no game data) |
| `docs/` | [what the launcher offers](docs/LAUNCHER.md) and [what our rexglue fork changes vs upstream](docs/REXGLUE_FORK_CHANGES.md) |

The runtime SDK (our fork of [rexglue-sdk](https://github.com/rexglue/rexglue-sdk))
is **not** in this repository — it lives in a separate private repo and is
fetched at build time. [docs/REXGLUE_FORK_CHANGES.md](docs/REXGLUE_FORK_CHANGES.md)
summarizes what the fork changes vs upstream.

Note: this is a working source drop, not a relocatable build tree. Some
scripts still carry absolute paths from the development checkout
(`/home/jon/recomp-ports/recomp-family`, `/home/jon/rexglue-vmx`) — adjust
those (or symlink) when building from a fresh clone.

## Legal

No game files, discs, packages or assets are distributed here or downloaded by
the launchers. `content/content.sha256` holds only checksums, so an import can
be verified. You need to own the game.

The runtime is built on [rexglue-sdk](https://github.com/CrownParkComputing/rexglue-sdk)
(portions derived from the Xenia project).
