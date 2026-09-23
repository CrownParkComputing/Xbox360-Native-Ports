# ReXGlue Recomp Collection

One launcher for **25 Xbox 360 recomp ports** running natively on Linux, built
against `~/rexglue-vmx` against today's SDK HEAD.

Every port lives as a real directory inside this collection. None are symlinks
— the collection is self-contained. A manifest (`_shared/games.index`) names
each one and controls what the rail shows.

| Title | Title ID |
|---|---|
| After Burner Climax | 58410A06 |
| Alien Breed: Evolution | 5841093C |
| Banjo-Kazooie | 58410954 |
| Banjo-Tooie | 58410955 |
| Burnout Revenge | 534507D3 |
| Choplifter HD | 584109F0 |
| Crazy Taxi | 534507B3 |
| Daytona USA | 58410B1D |
| Geometry Wars 3: Dimensions | 58411453 |
| Geometry Wars: Retro Evolved | 584107ED |
| Geometry Wars: Retro Evolved 2 | 584108FF |
| Hydro Thunder Hurricane | 584108B6 |
| Jetpac Refuelled | 5841094F |
| Midnight Club: Los Angeles | 545407F8 |
| OutRun Online Arcade | 58410968 |
| Project Gotham Racing 4 | 58410865 |
| Rez HD | 58410861 |
| Ridge Racer Unbounded | 58410991 |
| SEGA Bass Fishing | 58410970 |
| SEGA Rally Online Arcade | 5841096B |
| Sonic the Hedgehog 4: Episode I | 58410807 |
| SoulCalibur II HD Online | 58410892 |
| SoulCalibur IV | 534507C8 |
| Space Giraffe | 5841080C |
| Split/Second | 425607E7 |

(No game content is included or distributed. Each port needs your own
legally-owned copy of the original.)

## Launcher

`launcher` is a small native executable (`collection_launcher.cpp`) that opens
the collection in the shared RetroRecomp menu frontend:

- Per-game and collection-wide achievement tracking with Gamerscore totals.
- Per-game FPS cap setting: 30 / 60 / 120 / 240 / Off. Daytona USA stays at
  its native 60 - the title paces asset loads on vblank and flickers when
  uncapped; the other 24 free-run up to the cap. **Why this matters:** the
  cap is encoded in each game's `config/<title>.toml` as `vsync_fps_cap`; the
  runtime reads it next to the executable and the launcher's FPS-cap menu
  defaults to it on first launch. Override per-launch from the menu; the cap
  resets to the default on next launch.
- Game files / DLC import screen per title.
- Controller or keyboard; F8 toggles the info side panels, F10 the FPS readout.

The launcher expects the ports built next to it - this directory is the
collection layer: a manifest (`_shared/games.index`), the launcher entry
point, and the bundled SDK libs (`librexruntime.so`, `librexgpu-xenos.so`)
the runtime loads. Each port's engine is built in its own `out/build/linux/`.

## Building

The launcher is one translation unit with no dependencies beyond libc:

```
g++ -O2 -std=c++17 -o launcher collection_launcher.cpp
./launcher
```

It locates the menu frontend relative to itself and hands over immediately.