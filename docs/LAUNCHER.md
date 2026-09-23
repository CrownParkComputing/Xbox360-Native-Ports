# rexmenu — the game launcher

## 1. Overview

`rexmenu` is the launcher's menu front-end for the Xbox360-Native-Ports
family: a single, title-agnostic binary built from `_menu/src/main.cpp` and
rendered entirely with raylib (window, menus, file browser, import log,
on-screen controller — no zenity, no ImGui, no second UI layer). It is given
one port root on the command line (`rexmenu <port-root>`), reads that port's
own facts (name from `config/<slug>.toml`, slug and SDK version from
`*_manifest.toml`, content checksums from `content/`), and discovers the
sibling ports listed in `_shared/games.index`.

Its defining feature is **embedded play**: the recompiled game runs inside a
`gamescope --backend headless` session and streams its presented frames into
the menu's own window, so raylib is the only thing that ever touches the real
display. Input reaches the game through a uinput virtual Xbox 360 pad that
the menu creates at startup; the game never needs window focus.

Supported platform: **Linux x86-64** (desktop OpenGL 3.3, X11, POSIX shm,
uinput). Android is not supported by this launcher path: `ANDROID_AUDIT.md`
documents that the embedded desktop path depends on gamescope-headless, X11,
POSIX shared memory, `SOCK_SEQPACKET`, and desktop-only GL extensions
(`GL_EXT_memory_object_fd` / `GL_EXT_semaphore_fd`), none of which carry to
Android's GLES raylib backend; a different architecture (ANativeWindow handed
directly to ReXGlue's Vulkan presenter) is recommended there.

## 2. Features

- **Game rail.** The Home screen is a horizontal rail of game tiles driven by
  `_shared/games.index` — one `<port-dir> | <display name>` line per game, in
  rail order. Only listed ports appear; entries resolve at the collection
  root or one tier down in grouping dirs (`xbla/`, `dvd/`). Without an index
  the launcher falls back to discovering `*-recomp` siblings. Tiles come from
  `<port>/icon.png`, `assets/game.png`, `game-info/icons/title.png`, or the
  `64_*.png`/`32_*.png` dashboard tiles in `assets/`; a failed load renders
  as a letter tile. Games without imported content are dimmed and badged
  "NO ASSETS".
- **Game list screen** with media filter (All / XBLA / Disc) and A–Z letter
  filter; XBLA-vs-Disc is inferred from `content/SOURCE.txt`.
- **Per-game Info pages** (Y): Overview, Achievements, Game files / DLC,
  Saves, Review tabs. Achievements are read from the catalog
  `game-info/achievements.toml` (written by `rexglue init achievements`)
  cross-referenced with the runtime's own unlock save
  `<user_root>/achievements/<title_id>.toml` — the same file the in-game
  overlay uses, not a second source of truth. Home shows per-game and
  collection-wide achievement/gamerscore totals.
- **Embedded play** with three frame transports, tried in order
  (`FrameBlitter` in main.cpp):
  1. **GPU-direct stream** (`REXMENU_STREAM`): the runtime copies each
     presented frame GPU-side into one of three device-local images and
     exports image memory + semaphores as opaque fds over a unix
     `SOCK_SEQPACKET` socket; the menu imports them via
     `GL_EXT_memory_object_fd` / `GL_EXT_semaphore_fd` straight into GL
     textures. Zero CPU pixel copies; requires driver support, else the
     launcher falls back.
  2. **CPU shared-memory ring** (`REXMENU_SHM`): the runtime memcpys frames
     into a `/dev/shm` ring; the menu maps it read-only and pushes the newest
     buffer into a texture with `UpdateTexture`.
  3. **PPM file dump** (`REXMENU_FRAMEDIR`): legacy debug fallback, opt-in
     via `REXMENU_FALLBACK_PPM`.
  An on-screen FPS counter is derived from the producer's sequence numbers,
  so it shows the game's true present rate.
- **FPS cap / vsync.** Settings row cycles 30 / 60 / 120 / 240 / Off. A cap
  forces `--vsync=true --vsync_fps_cap=N` (also forwarded to gamescope's
  swapchain rate); "Off" passes `--vsync=false`, so vblanks tick at 1000 Hz
  and the title free-runs — the "Max" mode (MCLA/Hydro reach 500+ fps; titles
  that pace game logic on present completion will over-speed). Settings are
  per-port in `<port>/user-data/rexmenu/settings.txt`.
- **Game import** from user-owned copies, all inside the raylib UI (d-pad
  file browser; X marks files, R1 imports every file in a folder, Y imports a
  folder itself; batch XEX imports are routed to the matching port by
  filename):
  - bare `.xex` (XEX2 header checked) → copied to `assets/default.xex`
  - a XEX with sibling files or an extracted folder → whole tree into `assets/`
  - `.rar` / `.zip` / `.7z` via `unrar` / `unzip` / `7z`
  - `.iso` (XDVDFS) via `rexiso` from the ReXGlue SDK
  - extensionless or packed **STFS/LIVE/PIRS/CON** packages via
    `stfs_extract.py`; `.ztm`, `.cab`, `.live`, `.con`, `.pirs` are accepted
    by the picker's `looks_importable` filter
  - **DLC packages** (LIVE/PIRS/CON, content type 2) are validated against
    the game's title ID read from the imported XEX and installed into the
    shared profile content folder (`user-data/0000000000000000/<title>/00000002/`).
- **Content verification.** `tools/content_zip.sh verify` sha256-hashes the
  whole asset tree against the checksums shipped in `content/`; a successful
  verify (or any import path) touches `assets/.recomp-content-verified`,
  which the menu trusts thereafter instead of re-hashing on every select.
  Presence of `assets/default.xex` (case-insensitive) also counts.
- **Save management.** All ports share one user-data root
  (`_shared/user-data`, namespaced `<xuid>/<title-id>/<content-type>/`), so
  titles see each other's saves as the console versions did (e.g.
  Stop 'N' Swop). The Info > Saves tab (`save_manager.h`) lists save-game
  content (type 00000001) across the library and can back up or delete
  saves; deletes always back up first into `save-backups/` and refuse
  symlinked trees.
- **Per-title config.** Each port ships `config/<slug>.toml`, copied next to
  the executable on launch; launcher state (FPS cap, pad layout, on-screen
  pad toggle) lives per-port under `user-data/rexmenu/`.
- **Quiet mode / failure handling.** Child jobs (play/import) run with
  `REX_MENU_QUIET=1`, their stdout/stderr streamed into the menu's log pane.
  Play jobs run in their own process group so quit TERMs script + gamescope +
  guest together. A non-zero game exit shows a "GAME FAILED TO START" screen
  with the runtime log; Escape is treated as a clean user quit. If no desktop
  window can be opened the launcher prints an error ("set DISPLAY or run
  inside a graphical session") and exits 2.
- **Headless validation tooling** (per port, under `tools/`):
  `headless_play.sh <seconds> "<t:key...>"` runs the title under
  gamescope-headless, captures frames via PipeWire and drives menus with held
  xdotool XTEST keys; `collections/sega/_shared/tools/validate_all.sh` batch
  runs it over the collection and writes a CSV (exe started, median FPS,
  screenshot count, last-shot brightness for black-screen detection).
  `REXMENU_SMOKE=<frames>` runs the menu itself for N frames and exits.
- **Standalone launchers.** `collections/collection_launcher.cpp` (built by
  `collections/Makefile` into each collection dir) is a tiny native entry
  point that finds the first port in its collection and execs
  `_menu/build/rexmenu` on it. `racing-recomps-launcher/` is a separate
  SDL3-based launcher (`hydro_launcher.cpp`) for Split/Second, Burnout
  Revenge and MCLA, driven by `racing_launcher_titles.cfg`, with a
  `headless.sh` wrapper around each port's `tools/headless_play.sh`.

## 3. Building and running

The menu (from `_menu/CMakeLists.txt`; C++20, needs a raylib 6.0 static build
at `$HOME/raylib-src/build-linux`):

```sh
cmake -S _menu -B _menu/build
cmake --build _menu/build
_menu/build/rexmenu collections/sega/xbla/geometrywars-recomp   # any port root
_menu/build/rexmenu <port-root> --selftest                      # pad-layout codec test
```

Collection entry point: `make -C collections` builds `launcher` binaries for
each collection (alien-breed, alien-breed-1, banjo-kazooie, geometry-wars,
sega); running one execs `_menu/build/rexmenu` on the collection's first
port. Racing launcher: `racing-recomps-launcher/launch.sh` (builds the SDL3
launcher on demand; needs `sdl3`, `SDL3_image`, `SDL3_ttf`).

Runtime dependencies for play/import: `gamescope`, a Vulkan driver,
`python3`, and optionally `unrar`/`unzip`/`7z` plus the SDK's `rexiso`.

## 4. Games wired in `_shared/games.index`

23 titles, in rail order:

| Port dir | Display name | | Port dir | Display name |
|---|---|---|---|---|
| banjokazooie-recomp | Banjo-Kazooie | | hydrothunder-recomp | Hydro Thunder Hurricane |
| banjotooie-recomp | Banjo-Tooie | | pgr4-recomp | Project Gotham Racing 4 |
| 1.mcla-recomp | Midnight Club: Los Angeles | | rez-recomp | Rez HD |
| daytona-recomp | Daytona USA | | rru-recomp | Ridge Racer Unbounded |
| outrun-recomp | OutRun Online Arcade | | sc4-recomp | SoulCalibur IV |
| afterburnerclimax-recomp | After Burner Climax | | segabass-recomp | SEGA Bass Fishing |
| alienbreed-recomp | Alien Breed: Evolution | | segarally-recomp | SEGA Rally Online Arcade |
| alienbreed1-recomp | Alien Breed 1 | | soulcalibur2-recomp | SoulCalibur II HD Online |
| burnoutrevenge-recomp | Burnout Revenge | | spacegiraffe-recomp | Space Giraffe |
| crazytaxi-recomp | Crazy Taxi | | ss-recomp | Split/Second |
| geometrywars-recomp | Geometry Wars: Retro Evolved | | | |
| geometrywars2-recomp | Geometry Wars: Retro Evolved 2 | | | |
| geometrywars3-recomp | Geometry Wars 3: Dimensions | | | |

## 5. Directory map

- `_menu/` — the rexmenu front-end: `src/main.cpp` (menu, jobs, GPU/shm frame
  blitters, importers), `src/touch_pad.*` (on-screen pad overlay),
  `src/virt_pad.h` (uinput virtual Xbox 360 pad), `src/save_manager.h`,
  `CMakeLists.txt`.
- `_shared/` — family-wide data: `games.index` (rail manifest),
  `embedded_play.sh` (gamescope-headless runner used by embedded Play),
  `user-data/` (the single shared save/DLC root), `import_dlc.py`,
  `migrate_saves.py`, `update_library_metadata.py`, `update_reviews.py`.
- `collections/` — `collection_launcher.cpp` + `Makefile` (per-collection
  entry points); `collections/sega/` is the big collection with ports grouped
  under `xbla/` (XBLA titles) and `dvd/` (disc titles), its own
  `_shared/games.index`, branding, and `_shared/tools/validate_all.sh`.
- `_library/rexglue-vmx/` — the ReXGlue SDK checkout (runtime libs
  `librexruntime.so` / `librexgpu-xenos.so`, `rexiso`, `stfs_extract.py`).
  Not shipped in this repository; it lives in a separate private repo.
- `racing-recomps-launcher/` — standalone SDL3 racing launcher
  (`launch.sh`, `headless.sh`) for the three racing ports.
- `_testing/` — importer-path test fixtures and `run_tests.sh` exercising
  XEX / STFS / RAR / ISO import flows.

Note: several scripts in this staging tree carry absolute paths from the
original checkout (`/home/jon/recomp-ports/recomp-family`,
`/home/jon/rexglue-vmx`) — e.g. `embedded_play.sh`'s SDK lib dir and the
DLC/STFS unpacker path in `main.cpp`. These need adjusting (or symlinks) when
the tree lives elsewhere.
