#!/usr/bin/env bash
# rayplay.sh - run this port with the SDK's raylib live viewer.
#
#   tools/rayplay.sh [seconds]
#
# The title runs its usual gamescope-headless session and streams its presented
# frames (REX_DUMP_FRAME). rayview - the raylib viewer in the SDK tree
# (rexglue-vmx/tools/rayview) - tails the dump directory and is the window you
# watch and drive: it injects a virtual Xbox 360 pad over uinput, which SDL
# sees regardless of window focus, so no xdotool focus juggling. Nothing in the
# runtime or this port changes; it is the same seam the other ports use.
#
# rayview is built from ~/raylib-src; the wrapper builds it on demand.
#
# Keys: arrows/WASD left stick, IJKL right stick, Enter Start, Space A,
# LeftShift B, Tab Back, Q/R LT/RT, F/G LB/RB. A real pad is forwarded 1:1.
# Escape quits rayview, which ends the run.
#
# REX_DUMP_FRAME_EVERY=3 keeps the readback cost tolerable; raise it for
# timing-sensitive work. Pass RAYVIEW_ARGS="--press-test" to prove the input
# chain without a person at the keyboard.
set -euo pipefail

ROOT="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)"
SECS="${1:-300}"
TITLE="$(basename "$ROOT" -recomp)"
RAYVIEW_DIR="/home/jon/recomp-ports/recomp-family/_library/rexglue-vmx/tools/rayview"
RAYVIEW="$RAYVIEW_DIR/build/rayview"

if [ ! -x "$RAYVIEW" ]; then
  echo "==> building rayview (once; from $RAYVIEW_DIR)"
  cmake -S "$RAYVIEW_DIR" -B "$RAYVIEW_DIR/build" >/dev/null
  cmake --build "$RAYVIEW_DIR/build" >/dev/null
fi

DUMP_DIR="/tmp/rayview-${TITLE}"
rm -rf "$DUMP_DIR" 2>/dev/null || true
mkdir -p "$DUMP_DIR"

REX_DUMP_FRAME="${DUMP_DIR}/f" \
REX_DUMP_FRAME_EVERY="${REX_DUMP_FRAME_EVERY:-3}" \
REX_DUMP_FRAME_MAX=99999 \
  "$ROOT/tools/headless_play.sh" "$SECS" "" &
GAME_RUNNER=$!

cleanup() {
  kill "$GAME_RUNNER" 2>/dev/null || true
  pkill -x "$TITLE" 2>/dev/null || true
}
trap cleanup EXIT

# Wait for the first frame so rayview does not open on an empty directory.
for _ in $(seq 1 100); do
  compgen -G "${DUMP_DIR}/f_*.ppm" >/dev/null && break
  sleep 0.3
done

"$RAYVIEW" "$DUMP_DIR" ${RAYVIEW_ARGS:-}
