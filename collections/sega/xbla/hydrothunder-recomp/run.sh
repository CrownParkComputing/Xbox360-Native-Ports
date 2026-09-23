#!/usr/bin/env bash
# Run the recompiled title against the content in assets/.
set -euo pipefail
ROOT="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
BUILD="$ROOT/out/build/linux"
GAME="${HYDROTHUNDER_GAME_DATA:-$ROOT/assets}"
SDK_LIB="/home/jon/recomp-ports/recomp-family/_library/rexglue-vmx/out/install/linux-amd64/lib"

# The disc content is not in the repository, and importing it is not part of
# the build: a rebuild should not depend on having the game to hand. If assets/
# is missing or does not match content/content.sha256, ask for the archive -
# once - and import it.
if ! "$ROOT/tools/content_zip.sh" verify >/dev/null 2>&1; then
  ZIP="${HYDROTHUNDER_CONTENT_ZIP:-}"
  DEFAULT="$ROOT/content/hydrothunder-content.zip"
  if [ -z "$ZIP" ] && [ -f "$DEFAULT" ]; then
    ZIP="$DEFAULT"
  fi
  if [ -z "$ZIP" ]; then
    if [ -t 0 ]; then
      echo "Game content for hydrothunder is not installed."
      read -r -p "Path to the content zip: " ZIP
    else
      echo "game content missing; set HYDROTHUNDER_CONTENT_ZIP to the archive" >&2
      exit 1
    fi
  fi
  ZIP="${ZIP/#\~/$HOME}"
  [ -f "$ZIP" ] || { echo "no archive at $ZIP" >&2; exit 1; }
  "$ROOT/tools/content_zip.sh" restore "$ZIP"
fi
[ -x "$BUILD/hydrothunder" ] || { echo "build first: cmake --build out/build/linux" >&2; exit 1; }

# The SDK libraries sit next to the executable and are NOT refreshed by the
# project build: a rebuilt SDK with no copy here runs the old code and every
# diagnostic you just added is silently missing. Sync whatever is newer.
for lib in librexruntime.so librexgpu-xenos.so; do
  [ "$SDK_LIB/$lib" -nt "$BUILD/$lib" ] && cp "$SDK_LIB/$lib" "$BUILD/" || true
done
cp "$ROOT/config/hydrothunder.toml" "$BUILD/" 2>/dev/null || true

# Pass presentation settings explicitly as runtime cvars as well as through the
# TOML. This makes launcher changes unambiguous even when an older build
# contains a stale copied config.
VSYNC="$(sed -n 's/^[[:space:]]*vsync[[:space:]]*=[[:space:]]*//p' "$ROOT/config/hydrothunder.toml" | tail -1)"
FPS_CAP="$(sed -n 's/^[[:space:]]*vsync_fps_cap[[:space:]]*=[[:space:]]*//p' "$ROOT/config/hydrothunder.toml" | tail -1)"
mkdir -p "$ROOT/user-data"
{
  printf 'launch settings: vsync=%s vsync_fps_cap=%s\n' "$VSYNC" "$FPS_CAP"
  printf 'config copied to: %s\n' "$BUILD/hydrothunder.toml"
} >> "$ROOT/user-data/launcher-runtime.log"

cd "$BUILD"
exec env LD_LIBRARY_PATH=. REX_VSYNC="$VSYNC" REX_VSYNC_FPS_CAP="$FPS_CAP" ./hydrothunder \
  --vsync="$VSYNC" --vsync_fps_cap="$FPS_CAP" \
  --game_data_root="$GAME" --gpu_plugin xenos \
  --user_data_root="$ROOT/user-data" --license_mask=1 --mnk_mode "$@"
