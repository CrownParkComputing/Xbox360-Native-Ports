#!/usr/bin/env bash
# backup_save.sh <game-slug>
#
# Snapshot the current save file(s) for a game into
# _shared/saves/<game-slug>/<timestamp>/ before launching.
#
# Each backup is a fresh directory containing whatever save-state files the
# runtime wrote on the previous play. Old backups are kept indefinitely
# (rotate manually with `find _shared/saves/<slug> -mindepth 1 -maxdepth 1
# -type d -mtime +30 -exec rm -rf {} +` if you want them aged out).
set -euo pipefail

COLLECTION="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)"
SLUG="${1:?usage: backup_save.sh <game-slug>}"
SAVE_ROOT="$COLLECTION/_shared/saves/$SLUG"

if [ ! -d "$SAVE_ROOT" ]; then
  echo "backup_save: no save dir at $SAVE_ROOT (game has not been played yet)" >&2
  exit 0
fi

STAMP="$(date +%Y%m%d-%H%M%S)"
DEST="$SAVE_ROOT/$STAMP"
mkdir -p "$DEST"

# Save files are written under user_data_root. Each port's run.sh points
# user_data_root at a per-game dir; the runtime namespaces by title id and
# profile xuid beneath it. Copy the whole per-game user-data tree across.
USER_DATA_ROOT="$COLLECTION/../_shared/user-data"
TITLE_ID=$(printf '%X' "$(stat -c '%t' "$0" 2>/dev/null || echo 0)" 2>/dev/null || true)
# Look for save-shaped files: anything matching common Xbox 360 save patterns.
found=0
for src in \
  "$USER_DATA_ROOT"/*/58410* \
  "$USER_DATA_ROOT"/*/53450* \
  "$USER_DATA_ROOT"/*/54540* \
  "$USER_DATA_ROOT"/*/42560* \
  "$USER_DATA_ROOT"/*/save.bin"; do
  if [ -e "$src" ]; then
    rel="${src#$USER_DATA_ROOT/}"
    mkdir -p "$DEST/$(dirname "$rel")"
    cp -a "$src" "$DEST/$rel"
    found=$((found+1))
  fi
done

if [ "$found" -eq 0 ]; then
  echo "backup_save: no save files under $USER_DATA_ROOT to copy (first run?)"
  rmdir "$DEST" 2>/dev/null || true
  exit 0
fi
echo "backup_save: $SLUG -> $(basename "$DEST") ($found files)"