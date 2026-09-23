#!/usr/bin/env bash
# Shared embedded runner for family ports that do not need title-specific hooks.
#
#   tools/embedded_play.sh [seconds]            (default 0: run until killed)
#
# The title runs inside a gamescope-headless session and the launcher
# (rexmenu) tails a shared-memory frame ring and paints each new frame onto
# ITS OWN window - raylib is the only thing that ever touches the real
# display, so the guest's Vulkan swapchain lives entirely inside the headless
# compositor and never fights the menu for the screen. The menu drives the
# game through its uinput pad.
#
# Environment contract:
#   REX_VSYNC_FPS_CAP   vblank pacing target when vsync is on (default 60).
#                       0 = the title's own reported refresh rate.
#   REX_VSYNC           "0" passes --vsync=false: vblanks tick at 1000Hz and
#                       present never waits, so a vblank-paced game free-runs
#                       (the "Max" FPS choice in the menu). Unset = the
#                       title's own toml decides.
#   REXMENU_GPU_STREAM  1 (default): REX_PRESENT_STREAM GPU-direct fd pair;
#                       0: CPU shm ring only.
#   REXMENU_FALLBACK_PPM 1: also dump PPM frames to $OUT/frames (debug).
#   REX_GPU_FRAME_STATS path: per-frame CSV stats (the diagnostic that cannot
#                       be starved like a screen capture - see the
#                       present-mode-immediate memory note).
set -uo pipefail
ROOT="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)"
SECS="${1:-0}"
SLUG="$(sed -n 's/^name = "\([^"]*\)"/\1/p' "$ROOT"/*_manifest.toml | head -1)"
BUILD="$ROOT/out/build/linux"
OUT="${HEADLESS_OUT:-$ROOT/out/embedded}"
SHARED="/home/jon/recomp-ports/recomp-family/_shared/user-data"
SDK_LIB="/home/jon/rexglue-vmx/out/install/linux-amd64/lib"
GPU_PLUGIN="${REX_GPU_PLUGIN:-xenos}"

[ -n "$SLUG" ] && [ -x "$BUILD/$SLUG" ] || {
  echo "build missing for $ROOT" >&2
  exit 1
}
mkdir -p "$OUT/frames" "$OUT/shots"
for lib in librexruntime.so "librexgpu-$GPU_PLUGIN.so"; do
  [ "$SDK_LIB/$lib" -nt "$BUILD/$lib" ] && cp "$SDK_LIB/$lib" "$BUILD/" || true
done
cp "$ROOT/config/$SLUG.toml" "$BUILD/" 2>/dev/null || true

SAFE_SLUG="${SLUG//[^A-Za-z0-9]/-}"
SHM_NAME="/rexmenu-frames-$SAFE_SLUG"
STREAM_SOCK="$OUT/gpu-stream.sock"
rm -f "/dev/shm$SHM_NAME" "$STREAM_SOCK"   # never read a stale ring

CMD_ENV=(env REX_DUMP_SHM="$SHM_NAME")
[ "${REXMENU_GPU_STREAM:-1}" = "0" ] || CMD_ENV+=(REX_PRESENT_STREAM="$STREAM_SOCK")
[ -n "${REXMENU_FALLBACK_PPM:-}" ] && CMD_ENV+=(REX_DUMP_FRAME="$OUT/frames/f" REX_DUMP_FRAME_EVERY=1 REX_DUMP_FRAME_MAX=999999)

# Per-frame stats: each row is one guest-present with present_time_us,
# game_tick_us, draw_count, etc. Opt-in via env so we don't write a CSV every
# launch. Read with `awk -F, 'NR>1 {sum+=$NF; n++} END {print sum/n}'` for the
# average, or open in a spreadsheet to spot stalls.
[ -n "${REX_GPU_FRAME_STATS:-}" ] && EXTRA_ARGS+=("--gpu_frame_stats_path=$REX_GPU_FRAME_STATS" --gpu_pass_timing=true)

CAP="${REX_VSYNC_FPS_CAP:-60}"
EXTRA_ARGS=("--vsync_fps_cap=$CAP")
# Unset: the toml rules. 0/1 (menu passes it): be explicit either way so the
# launcher's choice always beats the title config.
case "${REX_VSYNC:-}" in
  0) EXTRA_ARGS+=(--vsync=false) ;;
  1) EXTRA_ARGS+=(--vsync=true) ;;
esac

cd "$BUILD"
# gamescope's headless backend defaults to a 60Hz swapchain regardless of the
# host display refresh. Without --framerate, --vsync_fps_cap=120 still paces
# the runtime's vblank counter at 120, but the actual swapchain only takes a
# present every 16.67ms, so the FPS counter sits at ~60. Forward the cap
# (when vsync is on) to gamescope so the swapchain runs at the requested rate.
GS_FRAMERATE=()
if [ "${REX_VSYNC:-1}" != "0" ] && [ "${REX_VSYNC_FPS_CAP:-0}" != "0" ]; then
    GS_FRAMERATE=(-r "${REX_VSYNC_FPS_CAP}")
fi

"${CMD_ENV[@]}" gamescope "${GS_FRAMERATE[@]}" --backend headless -W "${REX_HEADLESS_W:-1280}" -H "${REX_HEADLESS_H:-720}" -- \
  env LD_LIBRARY_PATH=. SDL_VIDEODRIVER=x11 \
  "./$SLUG" --game_data_root="$ROOT/assets" --gpu_plugin "$GPU_PLUGIN" \
  --user_data_root="$SHARED" --license_mask=1 --mnk_mode \
  --audio_app_name=rexglue-headless "${EXTRA_ARGS[@]}" \
  >"$OUT/run.log" 2>&1 &
GS=$!
trap 'kill -TERM "$GS" 2>/dev/null; pkill -TERM -P "$GS" 2>/dev/null' EXIT INT TERM

echo "REXMENU_FRAMEDIR=$OUT/frames"
echo "REXMENU_SHM=$SHM_NAME"
[ "${REXMENU_GPU_STREAM:-1}" = "0" ] || echo "REXMENU_STREAM=$STREAM_SOCK"
exec 1>&-   # the contract is printed; keep nothing else on stdout

# Trim the debug PPM stream while the game runs.
REAPER=""
if [ -n "${REXMENU_FALLBACK_PPM:-}" ]; then
( while kill -0 "$GS" 2>/dev/null; do
    ls -1t "$OUT/frames"/f_*.ppm 2>/dev/null | tail -n +25 | xargs -r rm -f
    sleep 2
  done ) &
REAPER=$!
fi

for _ in $(seq 1 300); do
  [ -e "/dev/shm$SHM_NAME" ] && break
  [ -S "$STREAM_SOCK" ] && break
  kill -0 "$GS" 2>/dev/null || break
  sleep 0.2
done
START=$SECONDS
while kill -0 "$GS" 2>/dev/null; do
  [ "$SECS" -gt 0 ] && [ $((SECONDS-START)) -ge "$SECS" ] && break
  sleep 1
done
kill -TERM "$GS" 2>/dev/null
for _ in $(seq 1 30); do kill -0 "$GS" 2>/dev/null || break; sleep 0.2; done
[ -n "$REAPER" ] && kill "$REAPER" 2>/dev/null
rm -f "/dev/shm$SHM_NAME" "$STREAM_SOCK"
exit 0
