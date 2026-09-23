#!/usr/bin/env bash
set -u
ROOT="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
cd "$ROOT/out/build/linux"
exec env LD_LIBRARY_PATH=. ./soulcalibur4 --game_data_root "$ROOT/assets" --gpu_plugin xenos \
  --user_data_root "$ROOT/user-data" --mnk_mode "$@"
