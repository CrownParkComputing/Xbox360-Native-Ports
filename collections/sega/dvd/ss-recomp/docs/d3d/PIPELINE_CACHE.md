# First-use pipeline compilation — measured and fixed, 2026-09-12

The largest stalls in this title were Vulkan pipeline creation on the draw path:
a 9,613 ms frame with 9,500 ms of compilation at a power play, and 4,789 ms and
2,055 ms at the results/save transition (`PERFORMANCE.md`). Nothing else in the
evidence costs a player whole seconds.

## What it actually was

Not a speed problem — a coverage problem. The SDK already stores pipeline
descriptions and shader microcode per title and rebuilds them at startup; it
simply had nothing stored for content the machine had never rendered.

Per-frame counters were added for it (`pipelines_created`, `pipeline_create_ms`
in the frame-stats CSV, reported by `frame_stats.py`), counting only creations
outside the startup preload — that is, first use inside a frame. Three runs of
the same headless drive:

| run | first-use pipelines | compile time | worst frame |
| --- | ---: | ---: | ---: |
| fresh cache, no seed | 377 | 2,269 ms | 1,434 ms (886 ms compiling) |
| second run, same cache | 19 | 33 ms | 141 ms |
| **fresh cache + shipped seed** | **0** | **0 ms** | **97 ms** |

So the storage and preload path works; the gap was that a cache only ever
existed on the machine that had already hit the stall.

## The fix

`shader_storage_seed_root` (SDK, default empty) names a directory of shareable
cache files shipped with a title. When the user's cache does not have them yet,
they are copied in before the normal load, so a fresh install starts with its
pipelines already built. A relative path resolves against the executable's
folder.

Deliberate limits:

- A user cache that already exists is **never** overwritten or merged into. The
  storage formats are append-only, so merging would need duplicate handling, and
  an existing cache already has its owner's coverage. To test a seeded first run,
  point `--cache_root` somewhere fresh (`SS_CACHE_ROOT` in `headless.py`).
- The pair is seeded together or not at all: the pipeline descriptions reference
  shaders in the `.xsh`, and half a cache is worse than none.
- The Vulkan **driver** cache is not shipped — it is device- and driver-specific
  and rebuilds itself locally.

For this title: `shader_storage_seed_root = "shader_seed"` in
`config/splitsecond.toml`, tracked files in `resources/shaders`, and the
game reads them from `shader_seed/` next to the executable. Both the config and
the seed directory have to be copied next to the executable, the same way the
config already was.

## Refreshing the seed

The seed covers what has actually been rendered. After playing (or driving)
through anything new — another track, an event, a power play, the results screen:

```sh
bash tools/d3d/update_shader_seed.sh --install
```

It copies the live cache from `content_root/cache/shaders/shareable` into
`resources/shaders`, and `--install` also puts it next to the executable.
Commit the result. Content nobody has ever rendered still compiles on first use;
there is no way to know a pipeline's state before the game asks for it.

## First run on a new machine

With a cold driver cache the seeded preload took **3.7 s** at startup —
740 pipelines, translated and created across the creation threads before the
first frame. With a warm driver cache the same preload is **55 ms**. That cost
sits at a loading screen instead of arriving as a 1.4 s hitch mid-race, which is
the point of the change.

## Verifying

```sh
rm -rf out/cache-test && mkdir -p out/cache-test
SS_CACHE_ROOT=$PWD/out/cache-test python3 tools/d3d/headless.py out/pipe-test --drive-seconds 60
python3 tools/d3d/frame_stats.py out/pipe-test/stats.csv
```

The summary line to read is `First-use pipeline creation: N pipelines, M ms
total`. Zero is the goal for content the seed covers. The game log also records
`seeded <file> from <dir>` and `Created N graphics pipelines from Vulkan
storage`.

## Caught in a live session, 2026-09-12

The first two interactive runs on the desktop both stalled, and the new counters
identified them without a debugger. Raw CSVs in
`evidence/live_session/`.

**Session 1** — reported as "audio broke and we are frozen". 6,468 frames, of
which **71 first-use pipelines cost 58.9 s**, including a single frame of
**31,861 ms** that compiled 39 pipelines. The renderer was healthy throughout:
frames kept presenting at 33 ms, redrawing one static scene, while the guest
waited on compilation and the audio thread starved. A freeze reported by a
player and a multi-second compile look identical from the outside.

**Session 2** — "odd freeze on a trigger power play". 13,217 frames, one frame of
**2,242 ms** that compiled **4 pipelines**. Every other frame in the session was
at or under 66 ms. Four shaders, 2.2 seconds.

Both were content this machine had never rendered. Refreshing the seed from that
session's cache takes those pipelines into the shipped cache
(`425607E7.xsh` 645 KB → 692 KB), so they are built at startup from then on.

Two things follow. First, the counters are the diagnosis: without them this was
going to be blamed on a threading change made the same day, which the data
cleared. Second, a warm cache only ever covers content somebody has already
played — a first-ever power play on a first-ever track will still stall until the
seed is refreshed. Removing that last case needs compilation off the draw path
altogether, which the `async_shader_compilation` experiments have not yet made
safe (they skipped presents and drew untextured placeholders).
