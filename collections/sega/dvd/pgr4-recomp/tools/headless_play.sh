#!/usr/bin/env bash
# Run the title headlessly, capture frames, and drive the menus - no display and
# nobody at the keyboard. This is how every performance measurement and visual
# check on a port is made.
#
#   tools/headless_play.sh <seconds> "<t:key[:hold] ...>"
#   tools/headless_play.sh 150 "25:Return 100:e:35"   # start, then accelerate
#
# GAME_ARGS passes extra flags; HEADLESS_OUT moves the output directory.
#
# Three things about this are not obvious and each cost an hour:
#
#  - gamescope --backend headless publishes its composited output on PipeWire
#    and nothing else. grim does not work (gamescope has no wlr-screencopy) and
#    an X11 grab of its Xwayland is black, because the game presents through
#    Vulkan straight to the compositor. The node ID is in gamescope's stdout.
#  - xdotool must use XTEST (no --window): SDL ignores synthetic XSendEvent
#    keys, so the window has to be focused and the key delivered as a real one.
#  - The audio stream is named "rexglue-headless" (--audio_app_name), not
#    "rexglue". PipeWire remembers mute and volume per application name and
#    every port shares "rexglue", so a headless run muted from the desktop
#    silenced the NEXT live run of ANY title. Mute "rexglue-headless" once and
#    only headless runs stay quiet. (This SDL3 has no dummy audio driver.)
#  - Keys must be HELD. A default xdotool tap is ~12 ms and falls between the
#    guest's 30 Hz input polls, so it is simply never seen.
#
# mnk_mode keys: Return = Start, Space = A, Z/Tab = Back, W/A/S/D = left stick,
# E = right trigger (accelerate), Q = left trigger, F3 = debug overlay.
set -u
SECS="${1:-60}"; SCRIPT="${2:-}"
ROOT="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)"
OUT="${HEADLESS_OUT:-$ROOT/out/headless}"
mkdir -p "$OUT/shots"; rm -f "$OUT/shots"/*.png
# The per-title config is read from beside the executable, and only run.sh
# copies it there. Without this, every headless measurement and every A/B of a
# config change silently runs the config from whenever run.sh was last used -
# which looks exactly like the change having no effect.
cp "$ROOT/config/projectgotham4.toml" "$ROOT/out/build/linux/" 2>/dev/null || true
# Same reason run.sh does this: the SDK libraries live next to the executable
# and the project build never refreshes them. Without the sync a headless run
# on a freshly built port fails outright ("librexruntime.so: cannot open shared
# object file"), and on an older one it silently measures the SDK from whenever
# run.sh was last used. Both must move together - a mismatched pair links but
# misbehaves.
for lib in librexruntime.so librexgpu-xenos.so; do
  [ "/home/jon/recomp-ports/recomp-family/_library/rexglue-vmx/out/install/linux-amd64/lib/$lib" -nt "$ROOT/out/build/linux/$lib" ] \
    && cp "/home/jon/recomp-ports/recomp-family/_library/rexglue-vmx/out/install/linux-amd64/lib/$lib" "$ROOT/out/build/linux/" || true
done
cd "$ROOT/out/build/linux"

gamescope --backend headless -W "${REX_HEADLESS_W:-1280}" -H "${REX_HEADLESS_H:-720}" -r "${REX_HEADLESS_REFRESH:-60}" -- env LD_LIBRARY_PATH=. SDL_VIDEODRIVER=x11 \
  ${GAME_ENV:-} ./projectgotham4 --game_data_root="$ROOT/assets" --gpu_plugin xenos \
  --user_data_root="$ROOT/user-data" --license_mask=1 --mnk_mode --audio_app_name=rexglue-headless ${GAME_ARGS:-} \
  >"$OUT/run.log" 2>&1 &
GS=$!

NODE=""; XDISP=""
for i in $(seq 1 40); do
  sleep 1
  NODE=$(grep -oE "stream available on node ID: [0-9]+" "$OUT/run.log" | tail -1 | grep -oE "[0-9]+$")
  XDISP=$(grep -oE "Starting Xwayland on :[0-9]+" "$OUT/run.log" | tail -1 | grep -oE ":[0-9]+$")
  [ -n "$NODE" ] && [ -n "$XDISP" ] && break
done
echo "pipewire node ${NODE:-none}, xwayland ${XDISP:-none}"

START=$SECONDS
declare -A DONE
while [ $((SECONDS - START)) -lt "$SECS" ]; do
  T=$((SECONDS - START))
  for step in $SCRIPT; do
    WHEN=${step%%:*}; REST=${step#*:}; KEY=${REST%%:*}; HOLD=${REST#*:}
    [ "$HOLD" = "$KEY" ] && HOLD=0.4
    if [ "$T" -ge "$WHEN" ] && [ -z "${DONE[$step]:-}" ]; then
      DONE[$step]=1
      W=$(DISPLAY="$XDISP" xdotool search --onlyvisible --name . 2>/dev/null | tail -1)
      [ -n "$W" ] && DISPLAY="$XDISP" xdotool windowactivate --sync "$W" 2>/dev/null
      # No --clearmodifiers: it clears the active modifiers and RESTORES them
      # afterwards, and the restore is delivered to the focused window as a
      # modifier press with no matching release. The runtime's keybinds require
      # an exact modifier match, so one latched modifier silently kills every
      # unmodified binding for the rest of the run - the first key works and
      # nothing after it does.
      DISPLAY="$XDISP" xdotool keydown "$KEY" 2>/dev/null
      sleep "$HOLD"
      DISPLAY="$XDISP" xdotool keyup "$KEY" 2>/dev/null
      echo "t=$T sent $KEY"
    fi
  done
  # PROFILE_AT=<seconds> samples per-thread CPU from /proc for PROFILE_SECONDS,
  # which answers "is the guest busy or waiting?" - the first question whenever
  # a title stops making progress. Cheap: no ptrace, nothing stopped.
  if [ -n "${PROFILE_AT:-}" ] && [ "$T" -ge "$PROFILE_AT" ] && [ -z "${DONE[profile]:-}" ]; then
    DONE[profile]=1
    PID=$(pgrep -x projectgotham4 | head -1)
    ( python3 - "$PID" "${PROFILE_SECONDS:-20}" > "$OUT/threads.txt" 2>&1 <<'PROFILE'
import collections, os, sys, time
pid, seconds = sys.argv[1], float(sys.argv[2])
ticks = os.sysconf('SC_CLK_TCK')
def sample():
    out = {}
    task = f'/proc/{pid}/task'
    try:
        for tid in os.listdir(task):
            try:
                fields = open(f'{task}/{tid}/stat').read().rsplit(') ', 1)[1].split()
                name = open(f'{task}/{tid}/comm').read().strip()
                out[tid] = (name, int(fields[11]) + int(fields[12]))
            except OSError:
                pass
    except OSError:
        pass
    return out
first, start = sample(), time.time()
time.sleep(seconds)
last, wall = sample(), time.time() - start
totals = collections.Counter()
for tid, (name, value) in last.items():
    if tid in first:
        totals[name] += (value - first[tid][1]) / ticks
print(f'per-thread CPU over {wall:.0f}s (cores):')
for name, value in totals.most_common(12):
    print(f'  {name:24} {value / wall:5.2f}')
print(f'  {"TOTAL":24} {sum(totals.values()) / wall:5.2f}')
PROFILE
    ) &
  fi
  if [ -n "$NODE" ] && [ $((T % 5)) -eq 0 ]; then
    # Bounded: pipewiresrc blocks until the buffers arrive, so a title that has
    # stopped presenting would otherwise hang the whole loop - including the
    # input script, which is how a run ends up doing nothing at all.
    timeout 10 gst-launch-1.0 -q pipewiresrc path="$NODE" num-buffers=4 ! videoconvert ! pngenc \
      ! multifilesink location="$OUT/shots/t$(printf %03d $T)_%d.png" >/dev/null 2>&1 || true
  fi
  sleep 1
done

pkill -x projectgotham4 2>/dev/null
sleep 3
kill $GS 2>/dev/null
wait 2>/dev/null
echo "frames in $OUT/shots"
