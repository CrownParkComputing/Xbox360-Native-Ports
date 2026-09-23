#!/usr/bin/env bash
# Run the recompiled title against the content in assets/.
set -euo pipefail
ROOT="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
BUILD="$ROOT/out/build/linux"
GAME="${BANJOTOOIE_GAME_DATA:-$ROOT/assets}"
SDK_LIB="/home/jon/rexglue-vmx/out/install/linux-amd64/lib"

# The disc content is not in the repository, and importing it is not part of
# the build: a rebuild should not depend on having the game to hand. If assets/
# is missing or does not match content/content.sha256, ask for the archive -
# once - and import it.
if ! "$ROOT/tools/content_zip.sh" verify >/dev/null 2>&1 && [ ! -f "$GAME/default.xex" ]; then
  ZIP="${BANJOTOOIE_CONTENT_ZIP:-}"
  DEFAULT="$ROOT/content/banjotooie-content.zip"
  if [ -z "$ZIP" ] && [ -f "$DEFAULT" ]; then
    ZIP="$DEFAULT"
  fi
  if [ -z "$ZIP" ]; then
    if [ -t 0 ]; then
      echo "Game content for banjotooie is not installed."
      read -r -p "Path to the content zip: " ZIP
    else
      echo "game content missing; set BANJOTOOIE_CONTENT_ZIP to the archive" >&2
      exit 1
    fi
  fi
  ZIP="${ZIP/#\~/$HOME}"
  [ -f "$ZIP" ] || { echo "no archive at $ZIP" >&2; exit 1; }
  "$ROOT/tools/content_zip.sh" restore "$ZIP"
fi
[ -x "$BUILD/banjotooie" ] || { echo "build first: cmake --build out/build/linux" >&2; exit 1; }

# The SDK libraries sit next to the executable and are NOT refreshed by the
# project build: a rebuilt SDK with no copy here runs the old code and every
# diagnostic you just added is silently missing. Sync whatever is newer.
for lib in librexruntime.so librexruntimed.so librexruntimerd.so librexgpu-xenos.so librexgpu-xenosd.so librexgpu-xenosrd.so; do
  ([ ! -f "$BUILD/$lib" ] || [ "$SDK_LIB/$lib" -nt "$BUILD/$lib" ]) && cp "$SDK_LIB/$lib" "$BUILD/" || true
done
cp "$ROOT/config/banjotooie.toml" "$BUILD/" 2>/dev/null || true

# Saves, profile and DLC live under the FAMILY user-data root shared with the
# other ports in this tree (../_shared/user-data). The runtime namespaces by
# profile xuid and title id beneath it, so this title sees the same player and
# the other titles' saves exactly as the console did (this title reads the
# Kazooie save for Stop 'N' Swop). Shader caches under it are keyed by title
# id, so the titles do not fight over one cache.
FAMILY_DATA="${BANJOTOOIE_USER_DATA:-$ROOT/../_shared/user-data}"
if [ ! -d "$FAMILY_DATA" ]; then FAMILY_DATA="$ROOT/user-data"; fi

cd "$BUILD"
exec env LD_LIBRARY_PATH=. ./banjotooie --game_data_root="$GAME" --gpu_plugin xenos \
  --user_data_root="$FAMILY_DATA" --license_mask=1 --mnk_mode \
  --vsync_fps_cap="${REX_VSYNC_FPS_CAP:-30}" "$@"
