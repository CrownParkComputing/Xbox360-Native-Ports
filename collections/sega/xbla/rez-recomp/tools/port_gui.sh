#!/usr/bin/env bash
# The face of a port: what it is, how far through the pipeline it is, and the
# buttons to push it further.
#
#   tools/port_gui.sh            (this is what a desktop entry should launch)
#
# Two jobs. For someone who just wants to play it, the port ships without the
# game, so the first thing they meet is "where is your copy?". For the person
# converting it, a first boot is stage three of six - the stages after it
# (verify, trace, native) are where a port stops being a demo, and they are
# visible here rather than living in someone's head.
set -uo pipefail

ROOT="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)/.."
ROOT="$(cd -- "$ROOT" && pwd)"
TITLE="$(basename "$ROOT" | sed 's/-recomp$//')"
SDK="${REXSDK_DIR:-/home/jon/rexglue-vmx}"

have_gui() { [ -n "${DISPLAY:-}${WAYLAND_DISPLAY:-}" ] && command -v zenity >/dev/null 2>&1; }
if ! have_gui; then
  echo "No display (or zenity is not installed). Use ./run.sh instead." >&2
  exec "$ROOT/run.sh" "$@"
fi

NAME="$(sed -n 's/^window_title = "\(.*\)"$/\1/p' "$ROOT/config/$TITLE.toml" 2>/dev/null | head -1)"
[ -n "$NAME" ] || NAME="$TITLE"

REPORT="$(mktemp "${TMPDIR:-/tmp}/rexglue-info.XXXXXX")"
LOG="$ROOT/out/pipeline.log"
trap 'rm -f "$REPORT"' EXIT

build_report() {
  {
    python3 "$SDK/tools/pipeline.py" "$ROOT" status 2>/dev/null
    echo
    echo "-------------------------------------------------------------"
    echo
    python3 "$SDK/tools/port_info.py" "$ROOT" 2>/dev/null
    echo
    echo "This port contains no game data. You supply your own copy; nothing is"
    echo "downloaded and nothing leaves this machine."
  } > "$REPORT"
}

# The import is the only useful action when there is nothing to play, so offer
# it straight away rather than making someone find it in a menu.
if ! "$ROOT/tools/content_zip.sh" verify >/dev/null 2>&1; then
  "$ROOT/tools/import_content.sh" || true
fi

run_stage() {  # $1 = stage name or "next"
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
    # A failure is where a human is worth calling: hand over the log path
    # rather than a spinner that stopped.
    zenity --error --no-wrap --title="$NAME" \
      --text="$(tail -4 "$LOG")\n\nFull log:\n$LOG" 2>/dev/null
  fi
}

while :; do
  build_report
  OUT="$(zenity --text-info --title="$NAME" --filename="$REPORT" \
        --width=820 --height=620 --font="monospace 10" \
        --ok-label="Play" --cancel-label="Close" \
        --extra-button="Run all stages" \
        --extra-button="Run next stage" \
        --extra-button="Import game files" \
        --extra-button="Verify (drives the game)" \
        --extra-button="Measure native" 2>/dev/null)"
  RC=$?
  case "$OUT" in
    *"Run all stages"*)   run_stage all; continue ;;
    *"Run next stage"*)   run_stage next; continue ;;
    *"Import game files"*) "$ROOT/tools/import_content.sh" || true; continue ;;
    *"Verify"*)           run_stage run verify; continue ;;
    *"Measure native"*)   run_stage run trace && run_stage run native; continue ;;
  esac
  [ "$RC" -eq 0 ] || exit 0
  if ! "$ROOT/tools/content_zip.sh" verify >/dev/null 2>&1 && [ ! -f "$ROOT/assets/default.xex" ]; then
    zenity --error --no-wrap --title="$NAME" \
      --text="There are no game files to play yet.\n\nUse 'Import game files'." 2>/dev/null
    continue
  fi
  exec "$ROOT/run.sh"
done
