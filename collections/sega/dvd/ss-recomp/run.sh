#!/usr/bin/env bash
set -euo pipefail
ROOT="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
# The warm shader cache is seeded by the runtime itself now
# (shader_storage_seed_root in config/splitsecond.toml reads shader_seed/ next
# to the executable), so a packaged build gets it too, not just this script.
# The disc content is not in the repository, and importing it is not part of
# the build: a rebuild should not depend on having the game to hand. If assets/
# is missing or does not match content/content.sha256, ask for the archive -
# once - and import it.
if ! "$ROOT/tools/content_zip.sh" verify >/dev/null 2>&1; then
  ZIP="${SS_CONTENT_ZIP:-}"
  DEFAULT="$ROOT/content/ss-content.zip"
  if [ -z "$ZIP" ] && [ -f "$DEFAULT" ]; then
    ZIP="$DEFAULT"
  fi
  if [ -z "$ZIP" ]; then
    if [ -t 0 ]; then
      echo "Game content for ss is not installed."
      read -r -p "Path to the content zip: " ZIP
    else
      echo "game content missing; set SS_CONTENT_ZIP to the archive" >&2
      exit 1
    fi
  fi
  ZIP="${ZIP/#\~/$HOME}"
  [ -f "$ZIP" ] || { echo "no archive at $ZIP" >&2; exit 1; }
  "$ROOT/tools/content_zip.sh" restore "$ZIP"
fi

# The SDK libraries sit next to the executable and are NOT refreshed by the
# project build. Copying one without the other pairs a new runtime with an old
# GPU plugin, which is its own class of bug; sync whichever is newer, together.
SDK_LIB="/home/jon/rexglue-vmx/out/install/linux-amd64/lib"
GPU_PLUGIN="${REX_GPU_PLUGIN:-xenos}"
for lib in librexruntime.so librexruntimed.so librexruntimerd.so "librexgpu-$GPU_PLUGIN.so" "librexgpu-${GPU_PLUGIN}d.so" "librexgpu-${GPU_PLUGIN}rd.so"; do
  ([ ! -f "$ROOT/out/build/linux/$lib" ] || [ "$SDK_LIB/$lib" -nt "$ROOT/out/build/linux/$lib" ]) && cp "$SDK_LIB/$lib" "$ROOT/out/build/linux/" || true
done
cp "$ROOT/config/splitsecond.toml" "$ROOT/out/build/linux/" 2>/dev/null || true

cd "$ROOT/out/build/linux"
exec ./splitsecond --game_data_root "$ROOT/assets" --gpu_plugin "$GPU_PLUGIN" \
  --user_data_root "$ROOT/content_root" --mnk_mode "$@"
