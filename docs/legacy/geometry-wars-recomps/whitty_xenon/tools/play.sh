#!/usr/bin/env bash
# play.sh - run a recompiled title in a window.
#
# The bring-up harness takes a pile of environment variables because bring-up
# wants them one at a time. This is the combination that means "just play it":
# a window, 60 frames a second, a controller.
#
#   tools/play.sh                 # Geometry Wars, from its extracted copy
#   tools/play.sh <xex> <dir>     # any other title
#   WHITTY_FPS=30 tools/play.sh   # anything below can still be overridden
set -euo pipefail

RUNTIME_DIR="$(cd "$(dirname "$0")/.." && pwd)"
TITLE="${TITLE:-geometrywars}"
BINARY="${RUNTIME_DIR}/build/recompiled/${TITLE}/${TITLE}"

DEFAULT_GAME="${HOME}/Downloads/xbla-recomp-suite/games/geometrywars/extracted"
XEX="${1:-${DEFAULT_GAME}/default.xex}"
DATA="${2:-${DEFAULT_GAME}}"

if [ ! -x "$BINARY" ]; then
    echo "no binary at $BINARY - build it with:" >&2
    echo "    TITLE=${TITLE} bash ${RUNTIME_DIR}/tools/build_recompiled_cpu.sh" >&2
    exit 1
fi
if [ ! -f "$XEX" ]; then
    echo "no title at $XEX" >&2
    exit 1
fi

echo "controls: pad if one is plugged in, otherwise"
echo "  arrows / WASD  move        Enter or Space  A"
echo "  Backspace  B               Tab  Back"
echo "  F11  windowed / fullscreen  Escape  quit"
echo "up to four pads are used: they take ports 1-4 in the order they are"
echo "  plugged in, and a pad added or removed while the game runs is picked up."
echo "  the keyboard stands in for port 1 only, when no pad is on it."
echo "close the window to stop."
echo "the 'WhittyArcade' credit in the corner says this is a native port;"
echo "  WHITTY_OVERLAY=0 turns it off."
echo "WHITTY_TWIN=1 splits the window into two side-by-side screens showing the"
echo "  same picture, for same-screen multiplayer on an ultrawide or on two"
echo "  monitors spanned as one desktop. Off by default."
echo "F11 switches between a window and borderless fullscreen, and the choice is"
echo "  remembered for the next run. WHITTY_FULLSCREEN=1 starts fullscreen and"
echo "  WHITTY_FULLSCREEN=0 starts windowed, either way overriding what was"
echo "  remembered; the setting itself is one line in"
echo "  \${XDG_DATA_HOME:-~/.local/share}/whitty_xenon/display.conf."
echo "  The window opens at the title's own resolution so the picture is not"
echo "  resampled; fullscreen letterboxes it rather than stretching it, and"
echo "  magnifies by a whole number where that is close to filling the screen."
echo

# Each is overridable from the environment - this only supplies defaults.
export WHITTY_WINDOW="${WHITTY_WINDOW:-1}"
export WHITTY_FPS="${WHITTY_FPS:-60}"
exec "$BINARY" "$XEX" "$DATA"
