# Ridge Racer Unbounded — Static Recompilation (Xbox 360 → Linux native)

Title ID `4E4D083E` (USA, v0.0.0.2), recompiled from `default.xex` to x86-64
with the ReXGlue SDK. Boots to gameplay: logos → intro cinematic → title →
menu → playable demo race, correct colours, audio, controller + keyboard input.

The game's own files are **not** in Git. They are attached to a private release
as numbered parts and restored into `assets/` by the build, so a fresh clone of
this repository compiles and runs without hunting for a disc dump — see
[Game content](#game-content).

## Build

```sh
# 1. SDK (pinned fork with the RRU bring-up fixes - branch rru-fixes)
git clone https://github.com/CrownParkComputing/rexglue-sdk-rru.git ~/rexglue-vmx
cd ~/rexglue-vmx
cmake --preset linux-amd64
cmake --build --preset linux-amd64-release --target install   # installs to out/install/linux-amd64

# 2. Game project (this repo, includes the generated recomp sources)
git clone https://github.com/CrownParkComputing/rru-recomp.git ~/rru-recomp
cd ~/rru-recomp
cmake -S . -B out/build/linux -G Ninja -DCMAKE_BUILD_TYPE=Release \
      -DCMAKE_CXX_COMPILER=clang++ \
      -Drexglue_DIR=$HOME/rexglue-vmx/out/install/linux-amd64/lib/cmake/rexglue
cmake --build out/build/linux -j$(nproc)

# 3. Deploy runtime libs beside the binary (RUNPATH is $ORIGIN)
cd out/build/linux
cp ~/rexglue-vmx/out/install/linux-amd64/lib/librexruntime.so .
cp ~/rexglue-vmx/out/install/linux-amd64/lib/librexgpu-xenos.so .
cp ../../config/ridgeracerunbounded.toml .    # per-title rendering config

# 4. Run (asks for the content zip if assets/ is not there yet)
cd ~/rru-recomp && ./run.sh
```

## Game content

86 files, 1,711,755,013 bytes.

`assets/` holds the disc files and is never in Git. It is packed into one
stored zip, `content/rru-content.zip`, which is also never committed -
only `content/content.sha256` is, recording the archive's SHA-256 and every
file's.

Importing the content is *not* part of the build: a rebuild must not depend on
having the game to hand. `./run.sh` checks `assets/` against the recorded
checksums and, only if they do not match, asks where the archive is:

```sh
./run.sh                                  # prompts for the zip path if needed
RRU_CONTENT_ZIP=/path/to/rru-content.zip ./run.sh   # or answer up front
tools/content_zip.sh pack                 # re-pack after changing assets/
tools/content_zip.sh verify               # check assets/ against content.sha256
```

This is the owner's own dump and is not redistributable.

### Regenerating the recomp sources (optional)

`generated/` is committed, so the build above needs no code generation. The
manifest now points at the repo-relative `assets/`, so regeneration works
wherever the clone lives. To regenerate (e.g. after SDK codegen changes), check
that `rexglue init` has not rewritten the paths in
`ridgeracerunbounded_manifest.toml`, then:

```sh
~/rexglue-vmx/out/linux-amd64/Debug/rexglued codegen
```

The manifest's `[entrypoint.functions]` carries the only two hand-declared
functions (import thunks at 0x82913650/0x82913658); everything else is found
by the SDK's GapFill sweep.

## Per-title config (config/ridgeracerunbounded.toml)

| key | value | why |
|---|---|---|
| `query_occlusion_fake_sample_count` | `0` | Sun lens-flare intensity is occlusion-query driven; default (1000 = fully visible) renders a screen-filling flare. `-1` crashes (game resolves uncommitted memory). |
| `render_target_path_vulkan` | `"fsi"` | Auto-exposure and the colour grade misbehave on the host-render-target path (red wash / blue-crushed LUT). The fragment-shader-interlock EDRAM path fixes both (matches upstream xenia compat notes for this title). |
| `mnk_mode` | `true` | Keyboard as pad (Space = A) alongside a physical controller. |

## Debug tooling

- `--frame_dump_path=DIR --frame_dump_interval=N --frame_dump_count=M` — dump
  guest output frames as .ppm headlessly (added to the SDK for this port).
- `resolve_missing_functions.sh` — iterates "call to invalid or unregistered
  function" fatals into manifest declarations (superseded by the GapFill sweep,
  kept for reference).
- Logs go to `out/build/linux/logs/` (or `--log_file`); `--log_noisy` +
  `[log.levels] krnl = "trace"` traces kernel imports.

## Asset extraction (Phase 2)

The archive pair is fully reversed - see `docs/BFS_FORMAT.md`. Both
`00__ridge_racer__` (273 boot files) and `01___unbounded___` (9,223 files) are
Bugbear `bfs1` archives under two cipher layers (chained-XTEA whole-file pass +
XXTEA-schedule pass over the table; both keys recovered from the recomp).

```sh
tools/bfs_extract.py <game_dir> list --filter .usm
tools/bfs_extract.py <game_dir> extract data/menu/overlay/intro.usm --out extracted/
```

The 13 USMs (intro, outro, logos, episode01-09) are Sofdec mpeg1video 1280x720
that ffmpeg reads directly. Audio is Wwise: 28 streamed `.wem` (XWMA music) and
48 `.bnk` banks embedding 1,522 XMA2 SFX - `tools/wwise_audio_dump.py` decodes
all 1,550 to .ogg via `tools/wem_xwma_to_riff.py` (big-endian RIFX -> RIFF
container conversion; ffmpeg does the codec work). The banks' HIRC chunks (the
Wwise event graph mapping game events to wem ids) are untouched - that's the
input for a future native mixer. Extracted assets stay out of git.

## Known issues

- Intro/attract FMVs (CRI Sofdec2 via Scaleform NetStream) do not play in the
  recompiled build; the attract card loops the stream until A. The movies
  themselves extract cleanly (see above) - native playback is Phase 3/4 work.
- Occasional long shader-compile stalls on first boot (cache warms up under
  `~/.local/share/ridgeracerunbounded/`).

## Distribution (unzip-and-play)

`tools/make_dist.sh <game_dir> [version]` builds `dist/rru-native-*.zip`
(~1.7GB): binary + runtime libs + config + `run.sh` + an `assets/` folder
holding the XEX, both archives and the loose menus. Unzip anywhere, `./run.sh`
- no disc folder, no install. Verified end-to-end from a scratch directory.
The zip contains the owner's game content; keep it private.

`tools/capture_regression.sh <game_data_root>` captures the whole boot flow
headlessly and flags white-out/red-flood signatures; compare against
`docs/known_good_means.txt`.

See `docs/NEXT_STEPS.md` for the roadmap to a fully native port.
