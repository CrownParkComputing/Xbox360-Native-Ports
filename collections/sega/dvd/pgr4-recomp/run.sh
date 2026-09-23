#!/usr/bin/env bash
# Project Gotham Racing 4 on ReXGlue, run live against the content in assets/.
# Renders at 1080p (config resolution="1080p") fullscreen. Pass extra flags via "$@".
set -euo pipefail
ROOT="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
BUILD="$ROOT/out/build/linux"
SDKLIB="/home/jon/recomp-ports/recomp-family/_library/rexglue-vmx/out/install/linux-amd64/lib"
[ -x "$BUILD/projectgotham4" ] || { echo "build first: cmake --build out/build/linux -j4" >&2; exit 1; }
# Keep the SDK libraries beside the exe current (they are not refreshed by the
# project build); a stale pair links but crashes at load on changed SDK symbols.
for lib in librexruntime.so librexgpu-xenos.so; do
  [ "$SDKLIB/$lib" -nt "$BUILD/$lib" ] && cp "$SDKLIB/$lib" "$BUILD/" || true
done
# The per-title config is read from beside the executable; copy the current one in
# (without this, edits to config/projectgotham4.toml silently do nothing at runtime).
cp "$ROOT/config/projectgotham4.toml" "$BUILD/" 2>/dev/null || true
cd "$BUILD"
exec env LD_LIBRARY_PATH=. ./projectgotham4 --game_data_root="$ROOT/assets" --gpu_plugin xenos \
  --user_data_root="$ROOT/user-data" --license_mask=1 --mnk_mode "$@"
