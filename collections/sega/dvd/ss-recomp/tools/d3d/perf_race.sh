#!/usr/bin/env bash
# Sample the whole process tree with perf while the headless harness drives a race.
#
#   bash tools/d3d/perf_race.sh out/perf-1 [extra game args...]
#
# perf launches the harness, so the game is a descendant of perf and sampling
# works under kernel.yama.ptrace_scope=1 (attaching to an already-running game
# does not). Sampling starts after DELAY_MS so boot and menu navigation are not
# in the profile; the harness exits at the end of the drive and perf stops.
set -euo pipefail
cd "$(dirname "$0")/../.."

OUT=$(realpath -m "${1:?usage: perf_race.sh <output-dir> [game args...]}")
shift || true
mkdir -p "$OUT"

DRIVE_SECONDS=${DRIVE_SECONDS:-75}
DELAY_MS=${DELAY_MS:-130000}      # boot-wait 50 s + 14 menu presses ~= 122 s
FREQ=${FREQ:-299}
CALLGRAPH=${CALLGRAPH:-fp}

perf record -o "$OUT/perf.data" -F "$FREQ" -e cycles:u --call-graph "$CALLGRAPH" \
  -D "$DELAY_MS" -- \
  python3 tools/d3d/headless.py "$OUT/run" --drive-seconds "$DRIVE_SECONDS" -- "$@" \
  >"$OUT/perf.log" 2>&1 || true

echo "== samples per thread =="
perf report -i "$OUT/perf.data" --sort comm --stdio 2>/dev/null | head -25
echo
echo "== hottest symbols, whole process =="
perf report -i "$OUT/perf.data" --sort dso,symbol --stdio -g none 2>/dev/null | head -40
