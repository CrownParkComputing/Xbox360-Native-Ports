#!/usr/bin/env bash
set -euo pipefail
FAMILY="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)"
HYDRO="$FAMILY/hydrothunder-recomp"
BIN="$HYDRO/out/hydro_launcher"
if [ ! -x "$BIN" ] || [ "$HYDRO/tools/hydro_launcher.cpp" -nt "$BIN" ]; then
  c++ -std=c++20 -O2 -pthread "$HYDRO/tools/hydro_launcher.cpp" \
    $(pkg-config --cflags --libs sdl3) -lSDL3_image -lSDL3_ttf -o "$BIN"
fi
exec env \
  HYDRO_ROOT="$FAMILY" \
  REX_LAUNCHER_ROOT="$FAMILY" \
  REX_LAUNCHER_PROJECTS="$FAMILY" \
  "$HYDRO/tools/rexmenu.sh" racing_launcher_titles.cfg "Racing Recomps"
