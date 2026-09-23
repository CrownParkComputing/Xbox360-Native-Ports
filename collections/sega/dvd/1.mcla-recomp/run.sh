#!/usr/bin/env bash
# Midnight Club: Los Angeles on ReXGlue, run against the content in assets/.
set -euo pipefail
ROOT="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
BUILD="$ROOT/out/build/linux"
GAME="${MCLA_GAME_DATA:-$ROOT/assets}"

# The disc content is not in the repository, and importing it is not part of
# the build: a rebuild should not depend on having the game to hand. If assets/
# is missing or does not match content/content.sha256, ask for the archive -
# once - and import it.
if ! "$ROOT/tools/content_zip.sh" verify >/dev/null 2>&1; then
  ZIP="${MCLA_CONTENT_ZIP:-}"
  DEFAULT="$ROOT/content/mcla-content.zip"
  if [ -z "$ZIP" ] && [ -f "$DEFAULT" ]; then
    ZIP="$DEFAULT"
  fi
  if [ -z "$ZIP" ]; then
    if [ -t 0 ]; then
      echo "Game content for mcla is not installed."
      read -r -p "Path to the content zip: " ZIP
    else
      echo "game content missing; set MCLA_CONTENT_ZIP to the archive" >&2
      exit 1
    fi
  fi
  ZIP="${ZIP/#\~/$HOME}"
  [ -f "$ZIP" ] || { echo "no archive at $ZIP" >&2; exit 1; }
  "$ROOT/tools/content_zip.sh" restore "$ZIP"
fi
[ -x "$BUILD/midnightclubla" ] || { echo "build first: cmake --build out/build/linux" >&2; exit 1; }

cp "$ROOT/config/midnightclubla.toml" "$BUILD/"
FPS_CAP="$(awk -F= '/^[[:space:]]*vsync_fps_cap[[:space:]]*=/{gsub(/[[:space:]]/, "", $2); print $2; exit}' "$BUILD/midnightclubla.toml")"
VSync="$(awk -F= '/^[[:space:]]*vsync[[:space:]]*=/{gsub(/[[:space:]]/, "", $2); print $2; exit}' "$BUILD/midnightclubla.toml")"
: "${FPS_CAP:=60}"
: "${VSync:=true}"

# Family-wide saves: prefer the shared user-data root the whole tree uses
# (overridable with MCLA_USER_DATA), falling back to this port's own when
# _shared is absent.
FAMILY_DATA="${MCLA_USER_DATA:-$ROOT/../_shared/user-data}"
[ -d "$FAMILY_DATA" ] || FAMILY_DATA="$ROOT/user-data"
cd "$BUILD"
exec env LD_LIBRARY_PATH=. REX_VSYNC="$VSync" REX_VSYNC_FPS_CAP="$FPS_CAP" REX_FPS_LOG=1 \
  ./midnightclubla --vsync="$VSync" --vsync_fps_cap="$FPS_CAP" \
  --game_data_root="$GAME" --gpu_plugin xenos \
  --user_data_root="$FAMILY_DATA" --license_mask=1 --mnk_mode "$@"
