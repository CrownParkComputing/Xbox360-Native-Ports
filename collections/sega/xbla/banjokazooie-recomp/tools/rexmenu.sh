#!/usr/bin/env bash
# rexmenu - open this port's raylib start menu.
#
#   tools/rexmenu.sh
#
# The menu is the port's face: Play (no DLC), Import game files (a direct
# raylib file browser - pick an XEX, ISO, archive or folder from the pad),
# Info, Quit. Everything is rendered with raylib and drivable with a real or
# virtual gamepad, the on-screen retro_touch_pad overlay, a mouse or a
# keyboard. No zenity anywhere.
#
# The menu binary is built once from _menu/ and shared by the family.
set -euo pipefail
ROOT="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)"
MENU_SRC="${REXMENU_SRC:-$ROOT/../_menu}"
BIN="$MENU_SRC/build/rexmenu"

if [ ! -x "$BIN" ]; then
  echo "rexmenu: building the menu (first run)..."
  cmake -S "$MENU_SRC" -B "$MENU_SRC/build" >/dev/null
  cmake --build "$MENU_SRC/build" -j4 >/dev/null
fi

exec "$BIN" "$ROOT" "$@"
