#!/bin/bash
# usage: drive.sh <outdir> [extra game flags...]  -- detached; writes <outdir>/done when finished
OUT=$1; shift; mkdir -p "$OUT"
export YDOTOOL_SOCKET=/run/user/1000/.ydotool_socket
cd ~/recomp-ports/ss-recomp/out/build/linux
D=${SS_GAME_DATA_ROOT:-$HOME/recomp-ports/ss-recomp/assets}
$WRAP ./splitsecond --game_data_root "$D" --gpu_plugin xenos --user_data_root=$HOME/recomp-ports/ss-recomp/content_root --mnk_mode \
  --frame_dump_path=$OUT --frame_dump_interval=${DUMP_INTERVAL:-60} --frame_dump_count=${DUMP_COUNT:-400} "$@" > $OUT/stdout.txt 2>&1 &
GP=$!
key() {
  if ! kill -0 "$GP" 2>/dev/null; then touch "$OUT/done"; exit 0; fi
  A=$(hyprctl clients -j | jq -r ".[] | select(.pid==$GP) | .address" | head -1)
  # Never send diagnostic keys to the desktop after the game closes.
  [ -n "$A" ] || return 1
  hyprctl dispatch focuswindow address:$A >/dev/null
  sleep 0.2
  kill -0 "$GP" 2>/dev/null || return 1
  ydotool key "$@"
  echo "key $* focus=$A" >> "$OUT/keys.txt"
}
sleep 50
for i in $(seq 1 ${PRESSES:-24}); do key 57:1 57:0; sleep 5; done
key 18:1; sleep ${THROTTLE:-40}; key 18:0; sleep 3
kill $GP; sleep 3; kill -9 $GP 2>/dev/null
ls -t logs | head -1 > $OUT/logname; touch $OUT/done
