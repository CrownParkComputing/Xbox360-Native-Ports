#!/usr/bin/env bash
# Play a port headlessly and judge EVERY frame. Nothing here is a screenshot to
# eyeball - the point is that "it renders" has to be earned across a run, not
# claimed from one good frame.
#
#   tools/verify_port.sh [seconds] ["<input script>"]
#
# Written because a port was called working off a single frame of its intro
# while the actual game was a flat red screen. The checks are the failures that
# have actually happened on this estate:
#
#   FLAT      - one colour fills the frame (a clear with nothing drawn on it).
#               This is the "all red" / "all black" failure, and a run can be
#               entirely flat while the log has no errors at all. This is the
#               only check that is SAFE to assert automatically.
#   NO-DRAWS  - the guest issued no draws for that frame.
#
# Everything else is REPORTED, not judged. A brightness or channel-balance rule
# cannot tell a broken frame from deliberate art: Alien Breed's menus are dark
# blue on black and tripped both a "too dark" and a "one channel dominates"
# test while rendering perfectly. Frames are listed with their numbers so a
# human decides; the tool only claims what a solid-colour frame proves.
set -uo pipefail

ROOT="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)"
TITLE="$(basename "$ROOT" | sed 's/-recomp$//')"
SECS="${1:-70}"
SCRIPT="${2:-20:Return 26:Return 32:Return 38:space 44:space 50:space 56:space 62:space}"
OUT="${VERIFY_OUT:-$ROOT/out/verify}"

rm -rf "$OUT"; mkdir -p "$OUT"
# Which runtime this run will actually execute - say so up front, next to what
# the SDK currently ships. A mismatch here is the whole result being about the
# wrong binary, and it is much cheaper to see now than to reason about later.
SDK_LIB="${REXSDK_DIR:-/home/jon/rexglue-vmx}/out/install/linux-amd64/lib/librexruntime.so"
for lib in librexruntime.so librexruntimed.so librexruntimerd.so librexgpu-xenos.so librexgpu-xenosd.so librexgpu-xenosrd.so; do
  [ "$(dirname "$SDK_LIB")/$lib" -nt "$ROOT/out/build/linux/$lib" ] && cp "$(dirname "$SDK_LIB")/$lib" "$ROOT/out/build/linux/" || true
done
echo "runtime: $(sha256sum "$ROOT/out/build/linux/librexruntime.so" 2>/dev/null | cut -c1-12)  (sdk install: $(sha256sum "$SDK_LIB" 2>/dev/null | cut -c1-12))" | tee "$OUT/runtime.txt"
HEADLESS_OUT="$OUT" \
  GAME_ARGS="--gpu_frame_stats_path=$OUT/frames.csv --log_file=$OUT/run.log --log_max_file_size_mb=200" \
  timeout $((SECS * 4 + 120)) "$ROOT/tools/headless_play.sh" "$SECS" "$SCRIPT" >"$OUT/play.log" 2>&1

python3 - "$OUT" "$TITLE" <<'PY'
import csv, glob, os, sys, statistics
out, title = sys.argv[1], sys.argv[2]

shots = sorted(glob.glob(os.path.join(out, "shots", "*.png")))
verdicts, good = [], 0
try:
    from PIL import Image
    import numpy as np
    for s in shots:
        a = np.asarray(Image.open(s).convert("RGB")).astype(float)
        small = a[::4, ::4]
        lum = small.mean(2)
        r, g, b = small[:, :, 0].mean(), small[:, :, 1].mean(), small[:, :, 2].mean()
        spread = float(lum.std())
        lit = float((lum > 16).mean())
        mx, mn = max(r, g, b), max(min(r, g, b), 0.01)
        tag = "scene"
        if spread < 4.0:
            tag = "FLAT"           # a clear with nothing on it - broken, provably
        elif spread < 8.0:
            tag = "faint"          # little variation; report, do not judge
        if tag == "scene":
            good += 1
        verdicts.append((os.path.basename(s), tag, r, g, b, spread, lit * 100))
except Exception as e:
    print(f"frame analysis unavailable: {e}")

rows = []
csvp = os.path.join(out, "frames.csv")
if os.path.exists(csvp):
    rows = list(csv.DictReader(open(csvp)))
def f(r, k):
    try: return float(r[k])
    except Exception: return 0.0

print(f"== {title}: headless verification")
if rows:
    draws = [f(r, "draws") for r in rows]
    ms = [f(r, "frame_ms") for r in rows]
    zero = sum(1 for d in draws if d == 0)
    nz = [d for d in draws if d > 0]
    print(f"   frames {len(rows)}   zero-draw {zero} ({100*zero/len(rows):.1f}%)"
          f"   draws median {statistics.median(nz) if nz else 0:.0f}"
          f"   frame_ms median {statistics.median(ms):.1f}")
errs = 0
logp = os.path.join(out, "run.log")
if os.path.exists(logp):
    text = open(logp, errors="ignore").read()
    errs = text.count("[error]") + text.count("[critical]")
    unreg = text.count("[UNREGFN]")
    print(f"   log errors {errs}   unregistered dispatches {unreg}")

if verdicts:
    print(f"   captured frames {len(verdicts)}   GOOD {good}   suspect {len(verdicts)-good}")
    print()
    print("   frame          state      R    G    B   spread  lit%")
    for n, tag, r, g, b, sp, lit in verdicts:
        mark = "   " if tag == "good" else " <-"
        print(f"   {n:<14} {tag:<8} {r:4.0f} {g:4.0f} {b:4.0f} {sp:7.1f} {lit:5.1f}{mark}")
    print()
    flat = sum(1 for v in verdicts if v[1] == "FLAT")
    if flat == len(verdicts):
        print("   VERDICT: FAIL - every frame is a solid colour. Nothing rendered.")
    elif flat:
        print(f"   VERDICT: {flat}/{len(verdicts)} frames are solid colour (broken);"
              f" the rest have detail - EYEBALL THEM, the numbers cannot tell art from a fault.")
    else:
        print(f"   VERDICT: no solid-colour frames. {good}/{len(verdicts)} have strong detail."
              f" This is NOT proof the game looks right - check the frames.")
PY
