#!/usr/bin/env bash
# Drive headless to a race and take a whole-process CPU profile while driving.
#
#   bash tools/d3d/profile_race.sh out/cpu-profile-1 [extra game args...]
#
# Phase A of the profile is undisturbed /proc sampling; phase B adds eu-stack
# backtraces (which stop the process briefly). Uses the game's own config
# defaults; pass overrides after the output directory.
set -euo pipefail
cd "$(dirname "$0")/../.."

OUT=$(realpath -m "${1:?usage: profile_race.sh <output-dir> [game args...]}")
shift || true
mkdir -p "$OUT"

DRIVE_SECONDS=${DRIVE_SECONDS:-90}
CLEAN_SECONDS=${CLEAN_SECONDS:-30}
STACK_SECONDS=${STACK_SECONDS:-30}

( python3 tools/d3d/headless.py "$OUT/run" --drive-seconds "$DRIVE_SECONDS" \
    -- "$@" >"$OUT/headless.log" 2>&1 & )

# Wait for the drive phase: headless.py logs each injected event.
echo "waiting for the drive phase (boot + menu presses take ~2 minutes)..."
for _ in $(seq 1 400); do
  if grep -qs 'keydown e' "$OUT/run/inputs.txt"; then break; fi
  sleep 1
done
if ! grep -qs 'keydown e' "$OUT/run/inputs.txt"; then
  echo "never reached the drive phase; inspect $OUT/run" >&2
  exit 1
fi

PID=$(pgrep -f 'splitsecon[d] --game_data_root' | head -1 || true)
if [ -z "$PID" ]; then echo "game process not found" >&2; exit 1; fi
echo "profiling pid $PID"
sleep 3   # let the car get moving before sampling

python3 tools/d3d/cpu_profile.py "$OUT" --pid "$PID" \
  --clean-seconds "$CLEAN_SECONDS" --stack-seconds "$STACK_SECONDS" \
  | tee "$OUT/summary_stdout.txt"

echo "captures and stats: $OUT/run"
