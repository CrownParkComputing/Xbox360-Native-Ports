#!/bin/bash
# usage: capture.sh <name> <trigger_seconds> [extra game flags]
# Drives the game via drive2.sh (env PRESSES/THROTTLE honoured), and at
# <trigger_seconds> after launch touches both the xenos draw-trace trigger and
# the hook-TU trigger so one frame is traced by both. Raw output (stdout, dumps,
# ppm frames) goes to ~/ss-scratch/captures/<name>; run tracecat.py afterwards
# to produce docs/d3d/captures/<name>/. Detach with:
#   setsid nohup tools/d3d/capture.sh menu_baseline 150 > /dev/null 2>&1 & disown
NAME=$1; TRIG=$2; shift 2
OUT=$HOME/ss-scratch/captures/$NAME; rm -rf "$OUT"; mkdir -p "$OUT/dump"
export D3DTRACE_TRIGGER=$OUT/trig_hook D3DTRACE_FRAMES=${D3DTRACE_FRAMES:-1}
# ALIGN=1 (default): the hook TU touches the GPU trigger itself, D3DTRACE_GPU_LAG presents later
if [ "${ALIGN:-1}" = 1 ]; then export D3DTRACE_GPU_TRIGGER=$OUT/trig_gpu D3DTRACE_GPU_LAG=${D3DTRACE_GPU_LAG:-2}; fi
export PRESSES=${PRESSES:-40} THROTTLE=${THROTTLE:-100}
date +%s > $OUT/t0
bash $HOME/recomp-ports/ss-recomp/tools/d3d/drive2.sh "$OUT" --gpu_draw_trace_trigger_file=$OUT/trig_gpu \
  --gpu_draw_trace_frames=1 --gpu_draw_trace_dump_dir=$OUT/dump "$@" &
DP=$!
sleep "$TRIG"
if [ "${ALIGN:-1}" = 1 ]; then touch $OUT/trig_hook; else touch $OUT/trig_gpu $OUT/trig_hook; fi; date +%s > $OUT/t_trig
wait $DP
