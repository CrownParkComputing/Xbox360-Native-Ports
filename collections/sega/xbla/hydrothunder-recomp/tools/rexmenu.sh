#!/usr/bin/env bash
set -euo pipefail
ROOT="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)"
BIN="$ROOT/out/hydro_launcher"
if [ ! -x "$BIN" ] || [ "$ROOT/tools/hydro_launcher.cpp" -nt "$BIN" ]; then
  c++ -std=c++20 -O2 -pthread "$ROOT/tools/hydro_launcher.cpp" \
    $(pkg-config --cflags --libs sdl3) -lSDL3_image -lSDL3_ttf -o "$BIN"
fi
exec env HYDRO_ROOT="${HYDRO_ROOT:-$ROOT}" "$BIN" "$@"
