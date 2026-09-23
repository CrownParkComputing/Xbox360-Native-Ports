# _shared/

Cross-port assets and per-port bookkeeping that the launcher and the
25 recomp ports in this collection all share.

## Layout

```
_shared/
├── brand.png             banner used by the launcher rail
├── games.index           manifest of every port in this collection
├── saves/                per-port save-game snapshots (one dir per port)
│   ├── daytona-recomp/
│   │   ├── 20260923-141002/    timestamped backups (one folder per play)
│   │   ├── 20260923-181517/
│   │   └── ...
│   ├── burnoutrevenge-recomp/
│   └── ...
└── achievements/         per-port achievement records (one dir per port)
    ├── daytona-recomp/
    │   └── earned.toml
    ├── burnoutrevenge-recomp/
    │   └── earned.toml
    └── ...
```

## Saves

Each port's `run.sh` points `--user_data_root` at the collection-wide
`../_shared/user-data/` (which lives at the recomp-family tree level so the
same profile namespace is shared with `spacegiraffe-recomp`, `geometrywars3-recomp`,
etc.). When a save is written to that user-data root, the next backup
captures it here.

`tools/backup_save.sh <slug>` snapshots the current save files into
`_shared/saves/<slug>/<timestamp>/`. The launcher can call this before each
launch; or you can run it manually. Old backups are kept indefinitely — age
them out manually with:

```sh
find _shared/saves -mindepth 2 -maxdepth 2 -type d -mtime +30 \
  -exec rm -rf {} +
```

## Achievements

Each port ships its own `game-info/achievements.toml` listing the
achievements that game exposes (12 per XBLA title on Xbox 360). The runtime
tracks earned-vs-locked per profile xuid internally.

`tools/record_achievements.sh <slug>` reads the per-port definition plus
any recent unlock events, and writes
`_shared/achievements/<slug>/earned.toml` as a flat record. The launcher
uses this for collection-wide Gamerscore totals (sum across all 25 ports)
and per-port progress in the rail.