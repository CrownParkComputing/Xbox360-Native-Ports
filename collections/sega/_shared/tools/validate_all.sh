#!/usr/bin/env bash
# Batch boot+title+FPS validation for every port in the collection.
# For each port: run tools/headless_play.sh for SECS seconds with a generic
# title-screen script (Start at 35s, A at 55s), then compute median FPS from
# out/headless/frames.csv (post-warmup), count screenshots, and measure the
# brightness of the last shot (black-screen detection).
#
#   validate_all.sh [port-dir ...]        # default: the full remaining list
#
# Writes rows to _shared/validation_YYYYMMDD.csv:
#   port,exe_started,frames,fps_median,shots,last_shot_brightness,verdict
set -uo pipefail

SEGA="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/../.." && pwd)"
SECS="${SECS:-120}"
SCRIPT_KEYS="${SCRIPT_KEYS:-35:Return 55:space}"
REPORT="$SEGA/_shared/validation_$(date +%Y%m%d).csv"

PORTS=("$@")
if [ ${#PORTS[@]} -eq 0 ]; then
  PORTS=(
    xbla/afterburnerclimax-recomp xbla/alienbreed-recomp xbla/banjokazooie-recomp
    xbla/banjotooie-recomp xbla/crazytaxi-recomp xbla/geometrywars-recomp
    xbla/geometrywars2-recomp xbla/geometrywars3-recomp xbla/hydrothunder-recomp
    xbla/outrun-recomp xbla/rez-recomp xbla/segabass-recomp xbla/segarally-recomp
    xbla/soulcalibur2-recomp xbla/spacegiraffe-recomp
    dvd/rru-recomp dvd/sc4-recomp dvd/ss-recomp
  )
fi

[ -f "$REPORT" ] || echo "port,exe_started,frames,fps_median,shots,last_shot_brightness,verdict" > "$REPORT"

analyze() {  # analyze <port-dir> -> prints csv fields
  local p="$1"
  ( cd /tmp && python3 - "$SEGA/$p" <<'EOF'
import csv, statistics, sys, os
port = sys.argv[1]
hl = os.path.join(port, 'out', 'headless')
frames_csv = os.path.join(hl, 'frames.csv')
log = os.path.join(hl, 'run.log')
exe_started = os.path.exists(log) and os.path.getsize(log) > 0
frames, fps = 0, 0.0
if os.path.exists(frames_csv):
    with open(frames_csv) as f:
        rows = list(csv.reader(f))
    vals = []
    for r in rows[61:]:  # skip header + ~1s warmup
        try:
            vals.append(float(r[1]))
        except (ValueError, IndexError):
            pass
    frames = len(vals)
    if vals:
        fps = round(1000.0 / statistics.median(vals), 1)
shots_dir = os.path.join(hl, 'shots')
shots = sorted(f for f in os.listdir(shots_dir) if f.endswith('.png')) if os.path.isdir(shots_dir) else []
brightness = -1
if shots:
    try:
        from PIL import Image
        im = Image.open(os.path.join(shots_dir, shots[-1])).convert('L').resize((64, 36))
        brightness = round(sum(im.getdata()) / (64 * 36), 1)
    except Exception:
        pass
print(f'{"yes" if exe_started else "no"},{frames},{fps},{len(shots)},{brightness}')
EOF
  )
}

for p in "${PORTS[@]}"; do
  name="$(basename "$p")"
  echo "=== $name ($(date +%H:%M:%S)) ==="
  if [ ! -x "$SEGA/$p/tools/headless_play.sh" ]; then
    echo "$name,no,0,0,0,-1,NO_HEADLESS_SCRIPT" >> "$REPORT"
    echo "  no headless_play.sh, skipped"
    continue
  fi
  ( cd "$SEGA/$p" && rm -f out/headless/frames.csv && \
    GAME_ARGS="--gpu_frame_stats_path=$SEGA/$p/out/headless/frames.csv" \
    tools/headless_play.sh "$SECS" "$SCRIPT_KEYS" ) > "$SEGA/$p/out/headless_batch.log" 2>&1
  fields="$(analyze "$p")"
  fps="$(echo "$fields" | cut -d, -f3)"
  shots="$(echo "$fields" | cut -d, -f4)"
  bright="$(echo "$fields" | cut -d, -f5)"
  verdict="FAIL"
  if [ "$fps" != "0.0" ] && [ "$shots" -gt 0 ] 2>/dev/null; then
    if [ "$bright" != "-1" ] && [ "$(echo "$bright < 3" | bc)" = "1" ] 2>/dev/null; then
      verdict="BLACK_SCREEN"
    else
      verdict="OK"
    fi
  elif [ "$fps" != "0.0" ]; then
    verdict="RUNS_NO_SHOTS"
  fi
  echo "$name,$fields,$verdict" >> "$REPORT"
  echo "  $verdict  fps=$fps shots=$shots brightness=$bright"
done

echo
echo "report: $REPORT"
column -t -s, "$REPORT"
