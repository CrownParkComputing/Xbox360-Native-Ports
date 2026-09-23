# Racing Recomps Launcher

Standalone launcher for:

- Split/Second
- Burnout Revenge
- Midnight Club: Los Angeles

Run `./launch.sh` from this directory. Each tile launches that port's existing
`run.sh`, preserving its own content checks, runtime configuration, fullscreen
settings, saves, and ReXGlue libraries. Headless validation remains available
through each port's `tools/headless_play.sh`.

The collection wrapper provides the same execution directly:

```sh
./headless.sh splitsecond 60 "25:Return"
./headless.sh burnoutrevenge 60 "25:Return"
./headless.sh mcla 60 "25:Return"
```

Game content is not included.
