# SEGA XBLA Collection

One launcher for six SEGA Xbox Live Arcade arcade ports, running natively on
Linux:

| Title | Default FPS cap |
|---|---|
| After Burner Climax | 240 |
| Crazy Taxi | 240 |
| Daytona USA | 60 |
| OutRun Online Arcade | 240 |
| Space Giraffe | 240 |
| Sega Bass Fishing | 240 |

**No game content is included or distributed.** Each port needs your own
legally-owned copy of the original game; nothing playable ships in this
repository.

## Launcher

`launcher` is a small native executable (`collection_launcher.cpp`) that opens
the collection in the shared RetroRecomp menu frontend:

- Per-game and collection-wide achievement tracking with Gamerscore totals.
- Per-game FPS cap setting: 30 / 60 / 120 / 240 / Off. Daytona USA stays at
  its native 60 - the title paces asset loads on vblank and flickers when
  uncapped; the other five free-run up to the cap.
- Game files / DLC import screen per title.
- Controller or keyboard; F8 toggles the info side panels, F10 the FPS readout.

The launcher expects the ports built next to it - this repository is the
collection layer: a manifest (`_shared/games.index`), the launcher entry point,
and the import drop folder. The port engines themselves are built from the
rexglue-based recomp tree.

## Importing your games

Drop the original `default.xex` from your own copy of each game into
`original-xex/`, then pick it through the launcher's **Game files / DLC**
screen for the matching title. The folder ships empty except for this note -
any files you add are local only (see `.gitignore`).

## Building

The launcher is one translation unit with no dependencies beyond libc:

```
g++ -O2 -std=c++17 -o launcher collection_launcher.cpp
./launcher
```

It locates the menu frontend relative to itself (the collection sits at
`collections/sega/` inside the recomp-family tree) and hands over immediately.
