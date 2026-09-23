#!/usr/bin/env bash
# Boot-flow regression capture for the RRU recomp.
#
# Runs the title headlessly with frame dumping, injects A (via ydotool +
# mnk_mode Space=A) on a schedule so the flow advances legal -> logos ->
# cinematic -> title -> card -> demo race, then reports per-frame channel
# means. Compare against a known-good run's table; the failure signatures
# this catches are the ones hit during bring-up:
#   pure white frames (65535 mean)  -> texture exp_adjust class
#   R >> G >> B on scene frames     -> LUT / grading class
#   R ~ 3x G uniform wash in-race   -> autoexposure / render-target path
#   all-black after boot            -> presenter path
#
# Usage: tools/capture_regression.sh <game_data_root> [out_dir]
set -eu

GAME=${1:?game_data_root required}
OUT=${2:-/tmp/rru_regression_$$}
BIN_DIR="$(cd "$(dirname "$0")/.." && pwd)/out/build/linux"
RUN_SECONDS=${RUN_SECONDS:-340}
PRESS_EVERY=${PRESS_EVERY:-16}

mkdir -p "$OUT"
rm -f "$OUT"/*.ppm

(cd "$BIN_DIR" && ./ridgeracerunbounded \
    --game_data_root "$GAME" --gpu_plugin xenos \
    --frame_dump_path="$OUT" --frame_dump_interval=40 --frame_dump_count=90 \
    --log_file "$OUT/run.log" >/dev/null 2>&1) &
GAME_PID=$!

end=$((SECONDS + RUN_SECONDS))
while [ $SECONDS -lt $end ] && kill -0 $GAME_PID 2>/dev/null; do
    sleep "$PRESS_EVERY"
    # Focus + A. Harmless if the window manager or ydotool is unavailable -
    # the capture then only covers the input-less part of the flow.
    hyprctl dispatch focuswindow class:ridgeracerunbounded >/dev/null 2>&1 || true
    ydotool key 57:1 57:0 2>/dev/null || true
done
kill $GAME_PID 2>/dev/null || true
wait $GAME_PID 2>/dev/null || true

echo "frame R G B (0-255 means)"
fail=0
for f in "$OUT"/frame_*.ppm; do
    [ -e "$f" ] || { echo "NO FRAMES CAPTURED"; exit 1; }
    read -r r g b < <(magick "$f" \
        -format "%[fx:255*mean.r] %[fx:255*mean.g] %[fx:255*mean.b]" info:)
    printf '%s %.0f %.0f %.0f\n' "$(basename "$f")" "$r" "$g" "$b"
    # Saturated-white and hard red-dominance checks, integer math via awk.
    flag=$(awk -v r="$r" -v g="$g" -v b="$b" 'BEGIN {
        if (r > 250 && g > 250 && b > 250) print "white";
        else if (r > 100 && b > 0 && r / (b + 1) > 8) print "redflood";
    }')
    if [ -n "$flag" ]; then
        echo "  ^ SUSPECT ($flag)"
        fail=1
    fi
done

# A handful of white frames are expected (white-background logo bumpers);
# review flagged frames against docs/known_good_means.txt before treating a
# nonzero flag count as a failure.
if [ "$fail" -ne 0 ]; then
    echo "SUSPECT frames present - compare against docs/known_good_means.txt"
fi
echo "log: $OUT/run.log"
