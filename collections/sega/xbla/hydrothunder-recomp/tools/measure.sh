#!/usr/bin/env bash
# Per-frame cost breakdown for one configuration, as medians over the last 80
# frames of a headless run. The numbers that matter are the per-stage ones:
# whole-frame timings vary with wherever the game happens to be.
#
#   tools/measure.sh 150 "25:Return" --some_cvar=value
set -u
SECS="${1:-150}"; SCRIPT="${2:-}"; shift 2 2>/dev/null || true
ROOT="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)"
OUT="$ROOT/out/headless"
mkdir -p "$OUT"
rm -f "$OUT/frames.csv"
GAME_ARGS="--gpu_frame_stats_path=$OUT/frames.csv $*" \
  "$ROOT/tools/headless_play.sh" "$SECS" "$SCRIPT" >/dev/null 2>&1
python3 - "$*" "$OUT/frames.csv" <<'PY'
import csv, statistics, sys
rows = [r for r in csv.DictReader(open(sys.argv[2]))]
tail = [r for r in rows if r.get('draws') and float(r['draws']) > 1000][-80:]
if not tail:
    print('no frames captured - did the run reach gameplay?')
    raise SystemExit
def md(key):
    values = [float(r[key]) for r in tail if r.get(key)]
    return statistics.median(values) if values else 0.0
print(f"config: {sys.argv[1] or '(default)'}")
print(f"  frame {md('frame_ms'):7.1f} ms ({1000 / md('frame_ms'):4.1f} FPS)   "
      f"draws {md('draws'):6.0f}   render passes {md('render_passes'):5.0f}")
print(f"  draw cpu {md('draw_cpu_ms'):6.1f}   residency {md('vfetch_ms'):6.1f}   "
      f"textures {md('texupload_ms'):5.1f}   bindings {md('bindings_ms'):5.1f}   "
      f"pipelines {md('pipeline_ms'):5.1f}")
print(f"  uploads {md('upload_events'):5.0f} events  {md('upload_pages'):7.0f} pages "
      f"({md('upload_pages') * 4 / 1024:6.1f} MB)   gpu wait {md('fence_wait_ms'):5.1f} ms")
PY
