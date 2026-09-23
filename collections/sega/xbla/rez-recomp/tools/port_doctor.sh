#!/usr/bin/env bash
# Run a new port through the settings that have ever mattered, and report which
# one it needs - instead of bisecting them by hand over several days.
#
#   tools/port_doctor.sh <project-dir> [seconds-per-run]
#
# Every check here exists because a title failed it and the cause took hours to
# find:
#
#   render path      Shift 2 loses most of its text and grows a blob of another
#                    render target on "host"; RRU and Split/Second need "fsi"
#                    for their colour grade; MCLA is 25% faster on "host".
#                    Nothing about the symptom says which - compare the frames.
#   page coherency   Hydro Thunder rendered intermittent blocky tile-pattern
#                    garbage with clear_memory_page_state=false. Reported as
#                    "red flashing"; it is corruption, and it is intermittent,
#                    so a single screenshot will not catch it.
#   audio            a mixer called in clumps repeats every 4th frame and sounds
#                    slow and robotic. REX_AUDIO_STATS reports it directly.
#
# Captures frames headlessly, so it needs no display and nobody at the keyboard.
set -u
PROJECT="$(cd -- "${1:?usage: port_doctor.sh <project-dir> [seconds]}" && pwd)"
SECS="${2:-45}"
NAME="$(basename "$PROJECT" | sed 's/-recomp$//')"
BIN="$(find "$PROJECT/out/build/linux" -maxdepth 1 -type f -perm -u+x ! -name '*.so*' | head -1)"
[ -x "$BIN" ] || { echo "no built executable in $PROJECT/out/build/linux" >&2; exit 2; }
OUT="$PROJECT/out/doctor"; mkdir -p "$OUT"

echo "== $NAME: generated code"
"$PROJECT/tools/port_check.py" "$PROJECT" 2>/dev/null || \
  "$(dirname "$0")/port_check.py" "$PROJECT" || true

run_one() {  # name, extra args
  local tag="$1"; shift
  rm -rf "$OUT/$tag"; mkdir -p "$OUT/$tag"
  REX_AUDIO_STATS=1 HEADLESS_OUT="$OUT/$tag" \
    GAME_ARGS="$* --log_file=$OUT/$tag.log --log_max_file_size_mb=200" \
    timeout $((SECS * 3 + 90)) "$PROJECT/tools/headless_play.sh" "$SECS" "" >/dev/null 2>&1
  python3 - "$OUT/$tag" "$OUT/$tag.log" "$tag" <<'PY'
import sys, os, glob
tag_dir, log, tag = sys.argv[1], sys.argv[2], sys.argv[3]
shots = sorted(glob.glob(os.path.join(tag_dir, "shots", "*.png")))
line = f"  {tag:14}"
try:
    from PIL import Image
    import numpy as np
    worst, frames = 0.0, 0
    for s in shots[-24:]:
        a = np.asarray(Image.open(s).convert("RGB").resize((240, 135))).astype(float)
        r, b = a[:, :, 0].mean(), a[:, :, 2].mean()
        worst = max(worst, r / max(b, 0.01)); frames += 1
    line += f" {frames:3} frames, worst red:blue {worst:4.2f}"
    if worst > 1.6:
        line += "  <-- CORRUPTION/TINT"
except Exception as e:
    line += f" (no frames: {e})"
if os.path.exists(log):
    text = open(log, errors="ignore").read()
    swap = text.count("swapchain with format")
    import re
    m = re.findall(r"matched one of the previous 8 \((\d+) of them exactly 4", text)
    n = re.findall(r"audio repeats: \d+ of (\d+)", text)
    if m and n:
        line += f", audio repeat-at-4 {int(m[-1])}/{int(n[-1])}"
    line += f", {swap} swapchain rebuild(s)"
print(line)
PY
}

echo "== $NAME: render path (compare the frames, they differ in what they LOSE)"
run_one "rt-host" "--render_target_path_vulkan=host"
run_one "rt-fsi"  "--render_target_path_vulkan=fsi"

echo "== $NAME: page coherency (intermittent - needs the frame sweep, not one shot)"
run_one "coherent"   "--clear_memory_page_state=true  --gpu_hot_page_frames=0"
run_one "fast-pages" "--clear_memory_page_state=false --gpu_hot_page_frames=3"

echo
echo "Frames for eyeballing are under $OUT/<tag>/shots."
echo "A red:blue above ~1.6 is corruption or a colour-grade fault, not art."
