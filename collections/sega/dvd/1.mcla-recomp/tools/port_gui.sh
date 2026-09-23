#!/usr/bin/env bash
# The face of a port: what it is, and the buttons to play it.
#
#   tools/port_gui.sh            (this is what a desktop entry should launch)
#   tools/port_gui.sh --dev      adds the conversion-pipeline buttons
#
# The port ships without the game, so the first thing a player meets is
# "where is your copy?" - the importer, with the release the port was made
# from recommended. After that it is one page (what the game is, how native
# it is, what was done to it) and Play. The pipeline stages (build, verify,
# trace, native) belong to the person converting it: --dev, or the SDK GUI.
set -uo pipefail
ROOT="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)/.."
ROOT="$(cd -- "$ROOT" && pwd)"
TITLE="$(basename "$ROOT" | sed 's/-recomp$//')"
SDK="${REXSDK_DIR:-/home/jon/recomp-ports/recomp-family/_library/rexglue-vmx}"
DEV=0
[ "${1:-}" = "--dev" ] && DEV=1

have_gui() { [ -n "${DISPLAY:-}${WAYLAND_DISPLAY:-}" ] && command -v zenity >/dev/null 2>&1; }
if ! have_gui; then
  echo "No display (or zenity is not installed). Use ./run.sh instead." >&2
  exec "$ROOT/run.sh" "$@"
fi

NAME="$(sed -n 's/^window_title = "\(.*\)"$/\1/p' "$ROOT/config/$TITLE.toml" 2>/dev/null | head -1)"
[ -n "$NAME" ] || NAME="$TITLE"
INFO="$(command -v python3 >/dev/null && [ -f "$SDK/tools/port_info.py" ] && echo "$SDK/tools/port_info.py" || echo "$ROOT/tools/port_info.py")"
REPORT="$(mktemp "${TMPDIR:-/tmp}/rexglue-info.XXXXXX")"
LOG="$ROOT/out/pipeline.log"
trap 'rm -f "$REPORT"' EXIT

build_report() {
  if [ "$DEV" = 1 ]; then
    { python3 "$SDK/tools/pipeline.py" "$ROOT" status 2>/dev/null; echo; echo "----"; echo
      python3 "$INFO" "$ROOT" 2>/dev/null; } > "$REPORT"
  else
    python3 "$INFO" "$ROOT" --player > "$REPORT" 2>/dev/null
  fi
}

content_ok() { "$ROOT/tools/content_zip.sh" verify >/dev/null 2>&1 || [ -f "$ROOT/assets/default.xex" ]; }

# First run: no game files yet - go straight to the importer.
if ! content_ok; then
  "$ROOT/tools/import_content.sh" || true
fi

run_stage() {  # $1 = stage name or "next" (dev only)
  mkdir -p "$(dirname "$LOG")"
  ( python3 "$SDK/tools/pipeline.py" "$ROOT" "$1" ${2:-} >"$LOG" 2>&1; echo $? >"$LOG.rc" ) &
  local pid=$!
  zenity --progress --pulsate --auto-close --no-cancel --width=460 \
    --title="$NAME" --text="Running: $1\n\nThis can take a long time - a build or a\nverification run is minutes, not seconds." 2>/dev/null &
  local bar=$!
  wait $pid
  kill $bar 2>/dev/null
  local rc; rc="$(cat "$LOG.rc" 2>/dev/null || echo 1)"
  if [ "$rc" = "0" ]; then
    zenity --info --no-wrap --title="$NAME" --text="$(tail -3 "$LOG")" 2>/dev/null
  else
    zenity --error --no-wrap --title="$NAME" --text="$(tail -4 "$LOG")\n\nFull log:\n$LOG" 2>/dev/null
  fi
}

while :; do
  build_report
  if [ "$DEV" = 1 ]; then
    OUT="$(zenity --text-info --title="$NAME (developer)" --filename="$REPORT" \
          --width=860 --height=680 --font="monospace 10" \
          --ok-label="Play" --cancel-label="Close" \
          --extra-button="Import game files" \
          --extra-button="Run next stage" --extra-button="Run all stages" \
          --extra-button="Verify (drives the game)" --extra-button="Measure native" 2>/dev/null)"
  else
    OUT="$(zenity --text-info --title="$NAME" --filename="$REPORT" \
          --width=780 --height=640 --font="monospace 10" \
          --ok-label="Play" --cancel-label="Close" \
          --extra-button="Import game files" 2>/dev/null)"
  fi
  RC=$?
  case "$OUT" in
    *"Import game files"*) "$ROOT/tools/import_content.sh" || true; continue ;;
    *"Run all stages"*)    run_stage all; continue ;;
    *"Run next stage"*)    run_stage next; continue ;;
    *"Verify"*)            run_stage run verify; continue ;;
    *"Measure native"*)    run_stage run trace && run_stage run native; continue ;;
  esac
  [ "$RC" -eq 0 ] || exit 0
  if ! content_ok; then
    zenity --error --no-wrap --title="$NAME" \
      --text="There are no game files to play yet.\n\nUse 'Import game files'." 2>/dev/null
    continue
  fi
  exec "$ROOT/run.sh"
done
