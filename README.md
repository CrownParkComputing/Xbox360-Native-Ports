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
| Console OS calls | the one layer still moving: each port answers a growing share of the console's kernel calls itself, the rest go through the runtime's console layer - the percentage on the page is measured from what the game actually calls |

## Titles

| title | type |
|---|---|
| Burnout Revenge (USA) | Disc |
| Ridge Racer Unbounded (USA) | Disc |
| Midnight Club: Los Angeles - Complete Edition (USA) | Disc |
| Split/Second (USA) | Disc |
| Banjo-Kazooie | XBLA |
| Banjo-Tooie | XBLA |
| Geometry Wars: Retro Evolved | XBLA |
| Geometry Wars: Retro Evolved 2 | XBLA |
| Rez HD | XBLA |
| SoulCalibur II HD Online | XBLA |
| After Burner Climax | XBLA |
| Hydro Thunder Hurricane | XBLA |
| Space Giraffe | XBLA |

Every title is playable. Each port's `CONVERSION.md` records what was done to
it, and its release page has the launcher downloads.

## Legal

No game files, discs, packages or assets are distributed here or downloaded by
the launchers. `content/content.sha256` holds only checksums, so an import can
be verified. You need to own the game.

The runtime is built on [rexglue-sdk](https://github.com/CrownParkComputing/rexglue-sdk)
(portions derived from the Xenia project).
