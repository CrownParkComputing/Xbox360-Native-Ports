#!/usr/bin/env bash
# embedded_play.sh - run this title fully headless so the launcher can BE the
# display.
#
#   tools/embedded_play.sh [seconds]        (default: run until killed)
#
# The title runs inside the usual gamescope-headless session, but instead of
# rayview watching the dump directory, the launcher (rexmenu) tails it and
# paints each new frame onto ITS OWN window - raylib is the only thing that
# ever touches the real screen surface, so the guest's Vulkan swapchain lives
# entirely inside the headless compositor and never fights the menu for the
# display. The launcher drives the game through the uinput pad it already
# owns, exactly as rayplay does.
#
# The dump directory is printed as "REXMENU_FRAMEDIR=<path>" on stdout: the
# one contract the launcher needs. stderr keeps the run's chatter.
#
# Process model: the launcher starts this script as its own process group
# leader (setpgid in Job::start), so gamescope, the guest and the reaper all
# sit in ONE group and a TERM to the group from the launcher takes everything
# down at once. No setsid here - a second session leader orphans the
# compositor, and an orphaned gamescope kept dumping frames to a directory
# nobody was reaping (1.4 GB in under a minute).
set -uo pipefail
ROOT="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)"
SECS="${1:-0}"   # 0 = run until killed
OUT="${HEADLESS_OUT:-$ROOT/out/embedded}"
rm -rf "$OUT"; mkdir -p "$OUT/frames" "$OUT/shots"

cp "$ROOT/config/banjokazooie.toml" "$ROOT/out/build/linux/" 2>/dev/null || true
for lib in librexruntime.so librexruntimed.so librexruntimerd.so librexgpu-xenos.so librexgpu-xenosd.so librexgpu-xenosrd.so; do
  ([ ! -f "$ROOT/out/build/linux/$lib" ] || [ "/home/jon/rexglue-vmx/out/install/linux-amd64/lib/$lib" -nt "$ROOT/out/build/linux/$lib" ]) && cp "/home/jon/rexglue-vmx/out/install/linux-amd64/lib/$lib" "$ROOT/out/build/linux/" || true
done
cd "$ROOT/out/build/linux"

FAMILY_DATA="${BANJOKAZOOIE_USER_DATA:-$ROOT/../_shared/user-data}"
[ -d "$FAMILY_DATA" ] || FAMILY_DATA="$ROOT/user-data"

# The whole point: hand every presented frame to the launcher. Three transports:
#
# - REX_PRESENT_STREAM (default on; opt-out via REXMENU_GPU_STREAM=0):
#   GPU-direct - every refreshed guest output is copied device-local-to-
#   device-local and handed to the launcher as an opaque memory+semaphore fd
#   pair (GL_EXT_memory_object_fd/GL_EXT_semaphore_fd import on the launcher
#   side, see presenter_streamer.cpp). No CPU pixel traffic at all, not even
#   the one memcpy the shm ring does. The launcher falls back to shm on its
#   own if the GL context can't import, so this is safe to leave on.
# - REX_DUMP_SHM (default): the runtime publishes each frame into a POSIX
#   shared-memory ring - one memcpy, no encoding, no disk, no polling of a
#   directory. The launcher maps the ring and uploads the newest buffer
#   straight to a texture. This is the fast path when GPU streaming is off.
# - REX_DUMP_FRAME (opt-in via REXMENU_FALLBACK_PPM=1): the older PPM file
#   stream, kept for debugging/rayview. ~2.7 MB of encode+disk per frame, so
#   it is OFF unless asked for.
SHM_NAME="/rexmenu-frames-banjokazooie"
rm -f "/dev/shm$SHM_NAME"   # never read a stale ring from a previous run
STREAM_SOCK="$OUT/gpu-stream.sock"
rm -f "$STREAM_SOCK"
# The FPS cap arrives as an env var because the script's only positional
# argument is a runtime limit; empty/0 means the guest runs uncapped.
CAPARG=""
if [ -n "${REX_VSYNC_FPS_CAP:-}" ] && [ "$REX_VSYNC_FPS_CAP" != "0" ]; then
  CAPARG="--vsync_fps_cap=$REX_VSYNC_FPS_CAP"
fi
# Env assignments ride on `env` - a plain array can't misparse the way an
# assignment-prefix with expansions can (bash once ran "REX_DUMP_FRAME=..."
# as a COMMAND because of that).
CMD_ENV=(env REX_DUMP_SHM="$SHM_NAME")
if [ "${REXMENU_GPU_STREAM:-1}" != "0" ]; then
  CMD_ENV+=(REX_PRESENT_STREAM="$STREAM_SOCK")
fi
if [ -n "${REXMENU_FALLBACK_PPM:-}" ]; then
  CMD_ENV+=(REX_DUMP_FRAME="$OUT/frames/f"
            REX_DUMP_FRAME_EVERY="${REX_DUMP_FRAME_EVERY:-1}"
            REX_DUMP_FRAME_MAX=999999)
fi
"${CMD_ENV[@]}" \
gamescope --backend headless -W 1280 -H 720 -- env LD_LIBRARY_PATH=. SDL_VIDEODRIVER=x11 \
  ./banjokazooie --game_data_root="$ROOT/assets" --gpu_plugin xenos \
  --user_data_root="$FAMILY_DATA" --license_mask=1 --mnk_mode --audio_app_name=rexglue-headless $CAPARG \
  >"$OUT/run.log" 2>&1 &
GS=$!
trap 'kill -TERM "$GS" 2>/dev/null; pkill -TERM -P "$GS" 2>/dev/null' EXIT INT TERM

echo "REXMENU_FRAMEDIR=$OUT/frames"
echo "REXMENU_SHM=$SHM_NAME"
if [ "${REXMENU_GPU_STREAM:-1}" != "0" ]; then
  echo "REXMENU_STREAM=$STREAM_SOCK"
fi
exec 1>&-   # the contract is printed; keep nothing else on stdout

# The PPM fallback is a stream the launcher consumes newest-first, not an
# archive: 720p PPMs at dump rate would eat ~80 MB/s of disk on a long
# session. A reaper keeps only the newest frames; shm mode writes no files.
REAPER=""
if [ -n "${REXMENU_FALLBACK_PPM:-}" ]; then
(
  while kill -0 "$GS" 2>/dev/null; do
    ls -1t "$OUT/frames"/f_*.ppm 2>/dev/null | tail -n +25 | xargs -r rm -f
    sleep 2
  done
) &
REAPER=$!
fi

# Wait for the first frame (shm ring created on first present, or a PPM in
# fallback mode) so the launcher does not open on nothing, then babysit until
# the guest dies or the (optional) timer runs out.
for _ in $(seq 1 150); do
  [ -e "/dev/shm$SHM_NAME" ] && break
  [ -S "$STREAM_SOCK" ] && break
  compgen -G "$OUT/frames/f_*.ppm" >/dev/null && break
  kill -0 "$GS" 2>/dev/null || break
  sleep 0.2
done
START=$SECONDS
while kill -0 "$GS" 2>/dev/null; do
  [ "$SECS" -gt 0 ] && [ $((SECONDS - START)) -ge "$SECS" ] && break
  sleep 1
done

kill -TERM "$GS" 2>/dev/null
for _ in $(seq 1 30); do kill -0 "$GS" 2>/dev/null || break; sleep 0.2; done
[ -n "$REAPER" ] && kill "$REAPER" 2>/dev/null
rm -f "/dev/shm$SHM_NAME" "$STREAM_SOCK"
exit 0
