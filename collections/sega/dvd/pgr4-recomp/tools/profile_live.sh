#!/usr/bin/env bash
# Launch PGR4 LIVE with FPS + shared-memory stats logged, and continuously sample
# per-thread CPU (cores) every 5s with timestamps. Drive into a REAL race; then the
# 20fps period in the FPS log can be correlated with the per-thread split (guest
# Main thread vs GPU Commands) to find the in-race bottleneck.
#   tools/profile_live.sh            # logs to /tmp/.../pgr4-live-*.{log,threads}
set -u
ROOT="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)"
OUT="${1:-/tmp/pgr4-liveprof}"; mkdir -p "$OUT"
LOG="$OUT/fps_shmem.log"; TH="$OUT/threads.csv"
echo "logging FPS+SHMEM -> $LOG ; per-thread cores -> $TH"
REX_FPS_LOG=1 REX_SHMEM_STATS=1 REX_WAIT_STATS=1 \
  "$ROOT/run.sh" --log_file="$LOG" --log_max_file_size_mb=300 &
GAME_WRAP=$!
# continuous per-thread sampler
python3 - "$TH" <<'PY' &
import os,sys,time
th=open(sys.argv[1],"w"); ticks=os.sysconf('SC_CLK_TCK')
def pid():
    for p in os.listdir('/proc'):
        if p.isdigit():
            try:
                if open(f'/proc/{p}/comm').read().strip()=='projectgotham4': return p
            except OSError: pass
    return None
def snap(pid):
    out={}
    try:
        for tid in os.listdir(f'/proc/{pid}/task'):
            try:
                f=open(f'/proc/{pid}/task/{tid}/stat').read().rsplit(') ',1)[1].split()
                n=open(f'/proc/{pid}/task/{tid}/comm').read().strip()
                out[tid]=(n,int(f[11])+int(f[12]))
            except OSError: pass
    except OSError: pass
    return out
th.write("time,thread,cores\n"); th.flush()
P=None
while P is None: P=pid(); time.sleep(1)
prev=snap(P); t0=time.time()
while True:
    time.sleep(5)
    if not os.path.exists(f'/proc/{P}'): P=pid()
    if P is None: break
    cur=snap(P); dt=5.0; ts=time.strftime('%H:%M:%S')
    for tid,(n,v) in cur.items():
        if tid in prev: 
            c=(v-prev[tid][1])/ticks/dt
            if c>0.03: th.write(f"{ts},{n},{c:.2f}\n")
    th.write(f"{ts},---,---\n"); th.flush(); prev=cur
PY
SAMP=$!
wait $GAME_WRAP
kill $SAMP 2>/dev/null || true
echo "done; read $LOG and $TH"
