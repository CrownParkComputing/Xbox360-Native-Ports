#!/usr/bin/env bash
# Run the recompiled title against the content in assets/.
set -euo pipefail
ROOT="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
BUILD="$ROOT/out/build/linux"
GAME="${CHOPLIFTER_GAME_DATA:-$ROOT/assets}"
SDK_LIB="/home/jon/rexglue-vmx/out/install/linux-amd64/lib"

[ -f "$GAME/default.xex" ] || { echo "game content missing: no $GAME/default.xex" >&2; exit 1; }
[ -x "$BUILD/choplifter" ] || { echo "build first: cmake --build out/build/linux" >&2; exit 1; }

# The SDK libraries sit next to the executable and are NOT refreshed by the
# project build: a rebuilt SDK with no copy here runs the old code and every
# diagnostic you just added is silently missing. Sync whatever is newer.
for lib in librexruntime.so librexgpu-xenos.so; do
  [ "$SDK_LIB/$lib" -nt "$BUILD/$lib" ] && cp "$SDK_LIB/$lib" "$BUILD/" || true
done
cp "$ROOT/config/choplifter.toml" "$BUILD/" 2>/dev/null || true

cd "$BUILD"
exec env LD_LIBRARY_PATH=. ./choplifter --game_data_root="$GAME" --gpu_plugin xenos \
  --user_data_root="$ROOT/user-data" --license_mask=1 --mnk_mode "$@"
