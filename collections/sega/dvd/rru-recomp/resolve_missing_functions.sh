#!/usr/bin/env bash
# Iteratively resolve "call to invalid or unregistered function" fatals.
#
# Each of these is a guest address only reachable through a vtable or function
# pointer, so static discovery never claims it. The runtime reports one per run,
# so the loop is: run -> read the fatal address -> declare it -> regenerate ->
# rebuild -> run again.
set -u

ROOT=/home/jon/rru-recomp
GAME="/home/jon/Downloads/Ridge.Racer.Unbounded.USA.X360-ZTM/Ridge.Racer.Unbounded.USA.X360-ZTM"
REXGLUE=/home/jon/recomp-ports/recomp-family/_library/rexglue-vmx/out/linux-amd64/Debug/rexglued
BIN=$ROOT/out/build/linux
MANIFEST=$ROOT/ridgeracerunbounded_manifest.toml
MAX_ITER=${1:-40}
RUN_SECONDS=${2:-40}

cd "$ROOT" || exit 1
seen=""

for i in $(seq 1 "$MAX_ITER"); do
    echo "=== iteration $i ==="

    # Kill any straggler first: a leftover process keeps writing to its own
    # log and would otherwise win the "newest log" race.
    pkill -f 'ridgeracerunboun[d]ed'; sleep 1
    log=$BIN/iter_$i.log
    rm -f "$log"

    (cd "$BIN" && ./ridgeracerunbounded --game_data_root "$GAME" --gpu_plugin xenos \
        --log_file "$log" >/dev/null 2>&1 &)
    sleep "$RUN_SECONDS"
    pkill -f 'ridgeracerunboun[d]ed'
    sleep 2

    addr=$(grep -o 'unregistered function at guest address 0x[0-9A-Fa-f]*' "$log" \
           | tail -1 | grep -o '0x[0-9A-Fa-f]*')

    if [ -z "$addr" ]; then
        echo "no unregistered-function fatal this run; log: $log"
        tail -5 "$log"
        exit 0
    fi

    case " $seen " in
        *" $addr "*)
            echo "address $addr repeated - declaring it did not help, stopping"
            exit 2
            ;;
    esac
    seen="$seen $addr"
    echo "missing function: $addr"

    upper=$(printf '0x%08X' "$addr")
    printf '%s = { name = "sub_%s" }\n' "$upper" "${upper#0x}" >> "$MANIFEST"

    "$REXGLUE" codegen >/dev/null 2>&1 || { echo "codegen failed"; exit 3; }
    cmake --build out/build/linux -j "$(nproc)" >/dev/null 2>&1 || { echo "build failed"; exit 4; }
done

echo "hit iteration cap ($MAX_ITER); addresses declared:$seen"
