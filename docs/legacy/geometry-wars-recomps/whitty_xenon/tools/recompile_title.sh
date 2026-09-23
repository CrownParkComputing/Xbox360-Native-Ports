#!/usr/bin/env bash
# recompile_title.sh - run XenonRecomp on a title, the way it has to be run.
#
# The invocation has three traps in it and every one of them has cost real time
# on this project, so nobody should be typing it by hand:
#
#   * two arguments, config THEN the ppc_context.h template. One argument makes
#     XenonRecomp treat the path as a test directory instead;
#   * run from the config's own directory with a BARE filename. Every path in
#     the config is resolved relative to the config file's directory, so an
#     absolute config path turns the absolute paths inside it into nonsense and
#     it segfaults on an empty file rather than saying so;
#   * use the build in repos/XenonRecomp. The copy under spike/ is old: it emits
#     a bare `// comment` for opcodes it cannot translate, so the instruction is
#     silently dropped and the recompile still looks clean. That is the single
#     most expensive mistake made on this project, and this script refuses to
#     use a binary from that tree.
#
# It then reports every diagnostic XenonRecomp gives, because they are printed
# among thousands of progress lines and are easy to scroll past.
#
#   tools/recompile_title.sh geometrywars2            # recompile and report
#   tools/recompile_title.sh geometrywars2 --converge # and drive the repairs to zero
#
# --converge runs the two repair passes that are purely mechanical, appending
# what they find to the title's configs and recompiling again until they find
# nothing:
#
#   * fix_function_boundaries.py, whose output is forced by the ERROR sites and
#     the next function boundary - there is no choice to make;
#   * find_jump_tables.py, which only reports a dispatch that XenonRecomp did
#     not already emit as a switch, and only when the table's contents are
#     addresses inside the enclosing function.
#
# Anything needing judgement is reported and stops the loop: a CLASH or an
# UNPLACED target from the boundary pass, an undecodable instruction, a table
# whose contents do not validate. See docs/BRINGUP.md.
set -euo pipefail

RUNTIME_DIR="$(cd "$(dirname "$0")/.." && pwd)"
PROJECTS_DIR="${PROJECTS_DIR:-$(cd "${RUNTIME_DIR}/.." && pwd)}"
XENON_ROOT="${XENON_ROOT:-$(cd "${PROJECTS_DIR}/.." && pwd)}"
XENONRECOMP="${XENONRECOMP:-${XENON_ROOT}/repos/XenonRecomp/build_new/XenonRecomp/XenonRecomp}"
PPC_CONTEXT="${PPC_CONTEXT:-${XENON_ROOT}/repos/XenonRecomp/XenonUtils/ppc_context.h}"
MAX_ROUNDS="${MAX_ROUNDS:-8}"

TITLE="${1:-${TITLE:-}}"
CONVERGE=0
for argument in "${@:2}"; do
    [ "$argument" = "--converge" ] && CONVERGE=1
done
if [ -z "$TITLE" ]; then
    echo "usage: recompile_title.sh <title> [--converge]" >&2
    exit 2
fi

PROJECT_DIR="${PROJECTS_DIR}/${TITLE}"
CONFIG="${PROJECT_DIR}/${TITLE}_recomp.toml"
JUMPTABLE="${PROJECT_DIR}/${TITLE}_jumptable.toml"
[ -f "$CONFIG" ] || { echo "no config at $CONFIG" >&2; exit 1; }

case "$XENONRECOMP" in
    */spike/*)
        echo "refusing to use the stale recompiler at $XENONRECOMP" >&2
        echo "it drops instructions it cannot translate; build repos/XenonRecomp" >&2
        exit 1;;
esac
[ -x "$XENONRECOMP" ] || { echo "no recompiler at $XENONRECOMP" >&2; exit 1; }
[ -f "$PPC_CONTEXT" ] || { echo "no context header at $PPC_CONTEXT" >&2; exit 1; }

# Everything else is read out of the config, so the script cannot disagree with
# the recompiler about which files this title uses.
read_config() { sed -n "s/^[[:space:]]*$1[[:space:]]*=[[:space:]]*\"\\(.*\\)\"/\\1/p" "$CONFIG" | head -1; }
XEX="$(read_config file_path)"
PPC_DIR="$(read_config out_directory_path)"
[ -n "$PPC_DIR" ] || { echo "config has no out_directory_path" >&2; exit 1; }
# These paths belong to the config directory, just as they do for XenonRecomp.
# New ReXGlue exports use relative paths; checking runtime/ppc instead can
# report or repair a completely different output tree.
case "$XEX" in /*|"") ;; *) XEX="${PROJECT_DIR}/${XEX}";; esac
case "$PPC_DIR" in /*) ;; *) PPC_DIR="${PROJECT_DIR}/${PPC_DIR}";; esac
IMAGE="${IMAGE:-${PROJECT_DIR}/assets/image.bin}"
IMAGE_BASE="${IMAGE_BASE:-0x82000000}"

STAMP="$(date +%Y%m%d-%H%M%S)"
BACKED_UP=0
back_up_configs() {
    [ "$BACKED_UP" = "1" ] && return 0
    cp "$CONFIG" "${CONFIG}.bak-${STAMP}"
    [ -f "$JUMPTABLE" ] && cp "$JUMPTABLE" "${JUMPTABLE}.bak-${STAMP}"
    echo "    configs backed up as *.bak-${STAMP}"
    BACKED_UP=1
}

LOG="${LOG:-/tmp/${TITLE}_recomp.log}"

recompile() {
    echo "==> recompiling ${TITLE} (log: ${LOG})"
    # XenonRecomp does not create its own output directory, and every metric
    # below is a grep over that directory or over the log - so if either is
    # absent or empty, all eight counts read zero and this script reports a
    # PERFECT clean bill for work it never did. That is the same lie the runtime
    # keeps finding in kernel handlers, wearing a build-script hat, and it cost
    # a bring-up session. Make the directory, then insist there is real output.
    mkdir -p "$PPC_DIR"
    (cd "$(dirname "$CONFIG")" && "$XENONRECOMP" "$(basename "$CONFIG")" \
        "$PPC_CONTEXT") > "$LOG" 2>&1
    local status=$?
    if [ "$status" != "0" ]; then
        echo "    recompiler exited ${status} - see ${LOG}" >&2
        return 1
    fi
    # With one argument XenonRecomp prints usage and exits 0, so a zero status
    # is not evidence it ran. Real output is.
    local produced
    produced=$(ls "$PPC_DIR"/ppc_recomp.*.cpp 2>/dev/null | wc -l)
    if [ "$produced" = "0" ]; then
        echo "    NO OUTPUT: ${PPC_DIR} has no ppc_recomp.*.cpp." >&2
        echo "    The counts below would all read zero and mean nothing." >&2
        echo "    Check ${LOG} - a usage message there means the arguments" >&2
        echo "    were wrong (it takes <config.toml> <ppc_context.h>)." >&2
        return 1
    fi
    if [ ! -s "$LOG" ]; then
        echo "    EMPTY LOG at ${LOG} despite ${produced} output file(s)." >&2
        echo "    The log-derived counts below cannot be trusted." >&2
        return 1
    fi
    echo "    translation units produced:    ${produced}"
    report
}

# The diagnostics, in the order they matter. The first two mean the output is
# wrong rather than incomplete.
report() {
    local decode unrecognized untabled cases runoff rc errors switch_errors
    decode=$(grep -c '^Unable to decode instruction' "$LOG" || true)
    unrecognized=$(grep -c '^Unrecognized instruction at' "$LOG" || true)
    untabled=$(grep -c '^Found a switch jump table' "$LOG" || true)
    cases=$(grep -c '^ERROR: Switch case at' "$LOG" || true)
    runoff=$(grep -c 'runs off its end' "$LOG" || true)
    rc=$(grep -c 'RC bit enabled but no comparison' "$LOG" || true)
    errors=$(grep -rhc '^\s*// ERROR [0-9A-F]' "$PPC_DIR"/ppc_recomp.*.cpp 2>/dev/null |
             awk '{n+=$1} END {print n+0}')
    switch_errors=$(grep -rhc '^\s*// ERROR: 0x' "$PPC_DIR"/ppc_recomp.*.cpp 2>/dev/null |
                    awk '{n+=$1} END {print n+0}')
    echo "    undecodable instructions:      ${decode}"
    echo "    unrecognized instructions:     ${unrecognized}"
    echo "    dispatches with no switch table: ${untabled}"
    echo "    switch cases outside function: ${cases}"
    echo "    functions running off the end: ${runoff}"
    echo "    RC bits with no comparison:    ${rc}"
    echo "    dropped branches in output:    ${errors}"
    echo "    dropped switch cases in output: ${switch_errors}"
    if [ "$decode" != "0" ] || [ "$unrecognized" != "0" ]; then
        echo "    ^ an instruction was NOT TRANSLATED. Check the recompiler build" >&2
        echo "      before anything else - this is the stale-spike-copy symptom." >&2
        return 1
    fi
    return 0
}

recompile || exit 1

[ "$CONVERGE" = "1" ] || exit 0

# The decoded image, which the jump-table pass reads table contents out of. It is
# derived from the same XEX the config names, so it cannot be a copy of a
# different build - and title_probe cross-checks the generated ppc_config.h
# against it on the way past.
if [ -n "$XEX" ] && [ -x "${RUNTIME_DIR}/build/title_probe" ]; then
    echo "==> decoding the image and cross-checking ppc_config.h"
    mkdir -p "$(dirname "$IMAGE")"
    "${RUNTIME_DIR}/build/title_probe" "$XEX" --image "$IMAGE" \
        --config "${PPC_DIR}/ppc_config.h" | sed -n '/^xex:/,$p' | sed 's/^/    /'
elif [ ! -f "$IMAGE" ]; then
    echo "no decoded image at $IMAGE and no title_probe to make one" >&2
    echo "build it:  cmake --build build --target title_probe" >&2
    exit 1
fi

# How many cores the two repair passes get. They run TOGETHER now (see the
# round below), so each takes half the machine by default rather than both
# claiming all of it and fighting.
HALF_JOBS="${WHITTY_JOBS:-$(( $(nproc) / 2 ))}"
[ "$HALF_JOBS" -ge 1 ] || HALF_JOBS=1

for round in $(seq 1 "$MAX_ROUNDS"); do
    echo "==> round ${round}: repairing"
    changed=0

    # The two repair passes run CONCURRENTLY. The rounds themselves are
    # sequential by nature - each one reads the output the previous recompile
    # produced - but within a round these two are independent: the boundary
    # pass reads the generated code and writes the recompiler config, the
    # jump-table pass reads the generated code and the decoded image and writes
    # nothing (its output is appended by this script afterwards). Neither reads
    # what the other writes.
    #
    # Measured on Choplifter's 306 translation units: 7.1 s and 18.4 s, so a
    # round spent 25.5 s doing 18.4 s of work, every round, up to eight rounds.
    back_up_configs
    python3 "${RUNTIME_DIR}/tools/fix_function_boundaries.py" \
            "$PPC_DIR" "$CONFIG" --apply \
            >/tmp/${TITLE}_boundaries.out 2>/tmp/${TITLE}_boundaries.err &
    boundaries_pid=$!
    WHITTY_JOBS="$HALF_JOBS" python3 "${RUNTIME_DIR}/tools/find_jump_tables.py" \
            "$PPC_DIR" "$IMAGE" "$IMAGE_BASE" \
            >/tmp/${TITLE}_tables.out 2>/tmp/${TITLE}_tables.err &
    tables_pid=$!
    # Waited on by pid, and each result checked: a bare `wait` returns success
    # whatever its children did, and a repair pass that died would then look
    # exactly like a repair pass that found nothing - which is the signal this
    # loop terminates on.
    wait "$boundaries_pid" || {
        echo "    the function-boundary pass failed:" >&2
        sed 's/^/      /' /tmp/${TITLE}_boundaries.err >&2; exit 1; }
    wait "$tables_pid" || {
        echo "    the jump-table pass failed:" >&2
        sed 's/^/      /' /tmp/${TITLE}_tables.err >&2; exit 1; }
    boundaries=$(cat /tmp/${TITLE}_boundaries.out)
    # An UNPLACED target is a switch case below its own function's base, which
    # extending the function cannot reach - there is nothing mechanical to do.
    if grep -q '^# UNPLACED' /tmp/${TITLE}_boundaries.err; then
        echo "    boundary pass needs a decision:" >&2
        sed 's/^/      /' /tmp/${TITLE}_boundaries.err >&2
        exit 1
    fi
    # A CLASH is one declared range running into the next. It is reported
    # because it is worth seeing, but it does NOT stop the loop: XenonRecomp
    # honours overlapping ranges, and the alternative - stopping - is refusing
    # something legitimate, which costs more than the overlap does.
    if grep -q '^# CLASH' /tmp/${TITLE}_boundaries.err; then
        echo "    overlapping ranges (honoured, reported for the record):"
        sed 's/^/      /' /tmp/${TITLE}_boundaries.err
    fi
    added=$(echo "$boundaries" | sed -n 's/^# applied: \([0-9]*\) added.*/\1/p')
    enlarged=$(echo "$boundaries" | sed -n 's/^# applied: [0-9]* added, \([0-9]*\) enlarged.*/\1/p')
    if [ "${added:-0}" != "0" ] || [ "${enlarged:-0}" != "0" ]; then
        echo "    function boundaries: ${added} added, ${enlarged} enlarged"
        changed=1
    else
        echo "    function boundaries: nothing to fix"
    fi

    # Jump tables. Only dispatches XenonRecomp did not already emit as a switch,
    # and only where the table's contents validate as addresses in the enclosing
    # function, so appending is again mechanical. Already computed above,
    # alongside the boundary pass.
    tables=$(cat /tmp/${TITLE}_tables.out)
    # What the pass actually produced, said out loud. "nothing new" and "the
    # pass produced nothing" are the same sentence from outside and completely
    # different faults: one is a converged title, the other is a result being
    # dropped between being computed and being written.
    # GREP THE FILE, NOT A PIPE FROM echo, and this is not a style preference.
    #
    # `echo "$tables" | grep -q` under `set -o pipefail` reports FAILURE on a
    # successful match once the data is larger than the pipe buffer: grep -q
    # exits the moment it matches, echo is still writing, echo takes EPIPE and
    # returns non-zero, and pipefail hands the pipeline echo's status. The test
    # then says "no tables" precisely when there are the most of them.
    #
    # It needs about 64 KB to show itself, so every title converted before this
    # one was under the threshold and the bug sat here looking correct.
    # Banjo-Kazooie's 173 tables are 98,601 bytes, and all 173 were silently
    # discarded four rounds running while the gate reported them as missing.
    if grep -q '^\[\[switch\]\]' /tmp/${TITLE}_tables.out; then
        added=$(grep -c '^\[\[switch\]\]' /tmp/${TITLE}_tables.out)
        echo "    ${added} jump table(s) appended"
        back_up_configs
        {
            printf '\n# Appended by recompile_title.sh --converge, round %d:\n' "$round"
            printf '# dispatches XenonRecomp did not emit as switches.\n'
            echo "$tables"
        } >> "$JUMPTABLE"
        changed=1
    else
        echo "    jump tables: nothing new"
    fi

    if [ "$changed" = "0" ]; then
        echo "==> converged after ${round} round(s)"
        # The last word is the cross-check between the two independent decoders.
        python3 "${RUNTIME_DIR}/tools/find_jump_tables.py" "$PPC_DIR" "$IMAGE" \
                "$IMAGE_BASE" --verify | sed 's/^/    /'
        exit 0
    fi
    recompile || exit 1
done

echo "still finding repairs after ${MAX_ROUNDS} rounds - look at the last output" >&2
exit 1
