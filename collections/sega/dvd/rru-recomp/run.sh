#!/usr/bin/env bash
# Run the recompiled title against the content restored into assets/.
set -euo pipefail
ROOT="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
BUILD="$ROOT/out/build/linux"

# The disc content is not in the repository, and importing it is not part of
# the build: a rebuild should not depend on having the game to hand. If assets/
# is missing or does not match content/content.sha256, ask for the archive -
# once - and import it.
if ! "$ROOT/tools/content_zip.sh" verify >/dev/null 2>&1; then
  ZIP="${RRU_CONTENT_ZIP:-}"
  DEFAULT="$ROOT/content/rru-content.zip"
  if [ -z "$ZIP" ] && [ -f "$DEFAULT" ]; then
    ZIP="$DEFAULT"
  fi
  if [ -z "$ZIP" ]; then
    if [ -t 0 ]; then
      echo "Game content for rru is not installed."
      read -r -p "Path to the content zip: " ZIP
    else
      echo "game content missing; set RRU_CONTENT_ZIP to the archive" >&2
      exit 1
    fi
  fi
  ZIP="${ZIP/#\~/$HOME}"
  [ -f "$ZIP" ] || { echo "no archive at $ZIP" >&2; exit 1; }
  "$ROOT/tools/content_zip.sh" restore "$ZIP"
fi
[ -x "$BUILD/ridgeracerunbounded" ] || { echo "build first (see README)" >&2; exit 1; }

cd "$BUILD"
exec ./ridgeracerunbounded --game_data_root "$ROOT/assets" --gpu_plugin xenos "$@"
