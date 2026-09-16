# Xbox 360 Native Ports

Xbox 360 titles recompiled to run natively. Each release on this page is a
**launcher**: the recompiled game code, a native Vulkan renderer, a native
audio path and a small GUI. It contains no game data. You point it at your own
copy of the game - an archive, a disc image (`.iso`) or an extracted folder -
and it imports that, verifies it against the checksums the port was built
from, and plays.

Every title has a Linux launcher. Windows launchers and an Android build are
attached where they exist; see each release's notes for what has been tested.

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

### Android (arm64)

An `*-android-arm64-v8a.apk` is the game code only. Install it, then copy
the game files to the app's own folder on the device -
`Android/data/<package>/files/game/` (the package name is in the release
notes) - for example with `adb push assets/. /sdcard/Android/data/<package>/files/game/`.
The title starts and says it has no `default.xex` if the game files are not
there yet. Needs Android 11+ with a Vulkan GPU.

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

| title | status | notes |
|---|---|---|
| Burnout Revenge (USA) | playable | full soundtrack, menus and races; 24% of console calls native |
| Ridge Racer Unbounded (USA) | playable | menus and races in full colour; ~35 fps when last measured; offline only |
| Midnight Club: Los Angeles - Complete Edition (USA) | playable, slow | free roam, HUD, minimap, radio; ~11 fps on the reference GPU; offline only |
| Split/Second (USA) | playable | title, menus and races; DLC loader disabled; frame rate follows the host |

Every port's `CONVERSION.md` records what had to be done to it.

## Legal

No game files, discs, packages or assets are distributed here or downloaded by
the launchers. `content/content.sha256` holds only checksums, so an import can
be verified. You need to own the game.

The runtime is built on [rexglue-sdk](https://github.com/CrownParkComputing/rexglue-sdk)
(portions derived from the Xenia project).
