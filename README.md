# Xbox 360 Native Ports

Xbox 360 titles recompiled to run natively on Linux. Each release on this page
is a **launcher**: the recompiled game code, a native Vulkan renderer, a native
audio path and a small GUI. It contains no game data. You point it at your own
copy of the game and it imports that, verifies it against the checksums the
port was built from, and plays.

## Using a launcher

1. Download the title's `*-launcher-linux-x86_64.tar.zst` from
   [Releases](../../releases) and unpack it:
   `tar --zstd -xf burnoutrevenge-launcher-linux-x86_64.tar.zst`
2. Run `tools/port_gui.sh` (or `./run.sh`). The first thing it asks is where
   your copy of the game is. Each launcher names the release it was built
   from - the same rip gives a byte-for-byte verified import; another region
   usually runs but will not match the checksums.
3. Play. Saves and settings stay in `user-data/` next to the launcher.

Needs: Linux x86-64, a Vulkan-capable GPU driver, `zenity` for the GUI,
`7z` or `unrar` if your copy is an archive, `python3`.

Keyboard: Return = Start, Space = A, W/A/S/D = left stick, E = accelerate,
Q = brake, Tab = Back. A game controller works as expected.

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

Every port's `CONVERSION.md` records what had to be done to it.

## Legal

No game files, discs, packages or assets are distributed here or downloaded by
the launchers. `content/content.sha256` holds only checksums, so an import can
be verified. You need to own the game.

The runtime is built on [rexglue-sdk](https://github.com/CrownParkComputing/rexglue-sdk)
(portions derived from the Xenia project).
