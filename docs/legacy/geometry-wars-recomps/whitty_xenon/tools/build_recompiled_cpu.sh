#!/usr/bin/env bash
# build_recompiled_cpu.sh - build XenonRecomp's output and link it to the runtime.
#
# XenonRecomp emits ~240 C++ translation units that call every SIMD helper as
# simde_*, but the generated ppc_context.h defines the non-standard helpers
# (adds_epu32, perm_epi8_, cmpgt_epu8, vctsxs, ...) under their native _mm_*
# names. Targeting x86-64 there is no need for SIMDe at all: each simde_X /
# SIMDE_X is just X with the prefix removed, which lands on a real SSE/AVX
# intrinsic or on ppc_context.h's own helper. That mapping is generated here.
#
# The recompiled CPU's only external dependency is the kernel: it references one
# `__imp__<Name>(PPCContext&, uint8_t*)` per import and nothing else besides
# libm. ppc_bridge.cpp satisfies those - host_function for the handlers we have,
# a self-naming stub for the rest.
set -euo pipefail

# Which title to build. Everything below is title-agnostic - the harness, the
# bridge and the function table all come from the generated ppc_config.h - so a
# second title is just a different PPC_DIR and TITLE.
TITLE="${TITLE:-alienbreed}"
RUNTIME_DIR="${RUNTIME_DIR:-$(cd "$(dirname "$0")/.." && pwd)}"
# A title's project directory is a sibling of whitty_xenon/ itself - the same
# convention recompile_title.sh uses - not a path this machine happens to use,
# so this has to be derived rather than hardcoded to work anywhere else.
PPC_DIR="${PPC_DIR:-$(cd "${RUNTIME_DIR}/.." && pwd)/${TITLE}/ppc}"
OUT_DIR="${OUT_DIR:-${RUNTIME_DIR}/build/recompiled/${TITLE}}"
CXX="${CXX:-clang++}"

# DEBUG=1 builds <title>_dbg with line tables, into its own object directory.
# Two rules learned the hard way: the debug objects must be built by this same
# script (a hand-built one silently goes stale and then contradicts the release
# binary), and the optimisation level stays at -O1. At -O0 the recompiled CPU is
# slow enough to change the timing of everything, so races stop reproducing -
# and -O1 with -g is enough to name a function and a line.
DEBUG="${DEBUG:-0}"
if [ "$DEBUG" = "1" ]; then
    BINARY="${TITLE}_dbg"
    OBJ_DIR="${OUT_DIR}/obj_dbg"
    OPT_FLAGS="-O1 -g -fno-omit-frame-pointer"
else
    BINARY="${TITLE}"
    OBJ_DIR="${OUT_DIR}/obj"
    OPT_FLAGS="-O1"
fi
# SSE4.1 for blendv/dp_ps/round_ps, AVX for permute_ps.
ARCH_FLAGS="-mavx -msse4.1"

mkdir -p "${OBJ_DIR}"

# ---------------------------------------------------------------------------
# Two locks, because there are two different shared things and they are not the
# same size.
#
# There used to be ONE lock, taken by the caller around this whole script
# (`flock ~/.cache/whitty_build.lock -c '...'` in run_gui.py). It was there for
# a real reason - two builds writing one directory produce duplicate-symbol
# link errors that read exactly like generated-code bugs - but it serialised
# EVERY build on the machine, so on sixteen cores fifteen sat idle while one
# title linked. Relinking nine titles after a shared-code change is the routine
# operation here, and that lock made it nine times slower than it had to be.
#
# What is actually shared is much smaller than the script:
#
#   * ${RUNTIME_DIR}/build - the CMake tree and the two runtime libraries.
#     Genuinely shared, genuinely unsafe concurrently, and NOT worth giving
#     each title its own copy: that would build the same core nine times and
#     cost nine times the disk. It gets a short exclusive lock around the CMake
#     step alone, and the two archives are then SNAPSHOT into this title's own
#     output directory (1.8 MB) so the link cannot read one while another
#     build's `ar` is rewriting it.
#   * ${PPC_DIR}, ${OBJ_DIR}, ${OUT_DIR} - already per title, and the only way
#     two builds collide in them is if they are two builds of the SAME title
#     (a release and a debug run, or two agents). That gets a per-title lock,
#     held for the whole script, which by construction never blocks a different
#     title.
#
# The lock is taken HERE rather than by the caller so that everything gets it:
# run_gui.py, recompile_title.sh, play.sh and a person typing the command.
LOCK_DIR="${WHITTY_LOCK_DIR:-${HOME}/.cache/whitty_build}"
mkdir -p "${LOCK_DIR}"
exec 9>"${LOCK_DIR}/title-${TITLE}.lock"
if ! flock -n 9; then
    echo "==> another build of ${TITLE} holds this title's lock - waiting"
    flock 9
fi

# How many compiler processes this build may use. Each clang on a generated
# translation unit peaks around 390 MB, so sixteen of them is ~6 GB - fine for
# one build and not fine for nine at once on a 31 GB machine. A caller starting
# several builds together divides the budget and passes it in; a person running
# one build gets the whole machine, which is what they want.
JOBS="${JOBS:-$(nproc)}"

# ---------------------------------------------------------------------------
# The three passes below all READ every generated translation unit, and on a
# big title that is not cheap: Choplifter's 306 units are 230 MB of text, and
# scanning them costs 9.0 s, 1.8 s and 0.1 s respectively - eleven seconds of a
# thirteen-second build in which nothing had changed. Now that this script runs
# for every title whenever the runtime moves, that was the largest single cost
# in the whole relink-everything pass.
#
# All three are pure functions of the generated directory's contents, so they
# are skipped when that directory has not moved. The stamp is the same rule the
# rest of this project uses for derived state: the file count and the newest
# mtime, plus the directory's own mtime so that a file ADDED or REMOVED counts.
# It is taken AFTER the passes run, because two of them write into that same
# directory. Anything that regenerates the code changes the stamp, so a skip
# can never hide new output.
PPC_STAMP_FILE="${OUT_DIR}/.ppc_scanned"
mkdir -p "${OUT_DIR}"
ppc_stamp() {
    python3 -c '
import glob, os, sys
d = sys.argv[1]
files = sorted(glob.glob(os.path.join(d, "*.cpp"))) + \
        [os.path.join(d, "ppc_context.h"), os.path.join(d, "ppc_config.h")]
newest = 0.0
count = 0
for f in files:
    try:
        newest = max(newest, os.path.getmtime(f))
        count += 1
    except OSError:
        pass
try:
    here = os.path.getmtime(d)
except OSError:
    here = 0.0
print("%d %.6f %.6f" % (count, newest, here))
' "$PPC_DIR"
}
SCAN_PPC=1
if [ -e "$PPC_STAMP_FILE" ] && [ "$(cat "$PPC_STAMP_FILE")" = "$(ppc_stamp)" ]; then
    SCAN_PPC=0
    echo "==> generated code unchanged - shim, bctr and stale-unit passes skipped"
fi

if [ "$SCAN_PPC" = "1" ]; then
echo "==> generating the simde -> native intrinsic shim"
python3 - "$PPC_DIR" <<'PY'
import re, glob, os, sys
d = sys.argv[1]
names = set()
for f in glob.glob(os.path.join(d, "*.cpp")) + [os.path.join(d, "ppc_context.h")]:
    t = open(f, encoding="utf-8", errors="ignore").read()
    names |= set(re.findall(r"\bsimde[A-Za-z0-9_]+", t))
    names |= set(re.findall(r"\bSIMDE_[A-Za-z0-9_]+", t))
lines = [
    "// ppc_simde_shim.h - generated; maps simde_*/SIMDE_* onto native x86.",
    "#pragma once", "",
]
for n in sorted(names):
    lines.append("#define %s %s" % (n, n[5:]))  # drop 'simde' / 'SIMDE'
text = "\n".join(lines) + "\n"
path = os.path.join(d, "ppc_simde_shim.h")
# Rewriting an identical file would bump its mtime and force a full rebuild.
if not os.path.exists(path) or open(path).read() != text:
    open(path, "w").write(text)
print("    %d mappings" % len(names))
PY

# A switch dispatched from a `bctr` is indexed by the LOW 32 BITS of a register,
# and XenonRecomp emits the switch on all 64.
#
# The guest form is a 32-bit one throughout: `cmplwi rIDX,LIMIT` bounds-checks
# the low half, and `rlwinm r0,rIDX,2,0,29` scales the low half into the table.
# So a register whose upper half still holds whatever a previous 64-bit
# operation left there is perfectly valid to the guest and dispatches correctly
# on hardware. The generated
#
#     switch (ctx.r11.u64) { case 0: ... case 3: ... default: __builtin_unreachable(); }
#
# is a different function: the upper bits make the value fall outside every
# case, and `__builtin_unreachable()` licenses the compiler to index its jump
# table with no bounds check at all. The result is a wild read and a SIGSEGV
# inside a function that looks entirely innocent - which is what Geometry Wars 2
# hit in sub_82044330 the moment it reached gameplay, with r11 = 0x4D4600000000
# and its low half a valid case value of 0.
#
# Narrowing the switch to the low half is what the guest instruction does. It
# changes nothing where the upper half is already zero, which is the usual case.
#
# The recompiler in repos/XenonRecomp now emits `.u32` itself (recompiler.cpp,
# `println("\tswitch ({}.u32) {{", ...)`), so on a current tree this pass finds
# nothing and prints "none". It is kept as the backstop for output generated by
# an older build - including the stale copy under spike/, which this project has
# been bitten by before - because the failure it prevents is a wild jump inside a
# function that looks entirely innocent.
echo "==> narrowing bctr switch indices to 32 bits"
python3 - "$PPC_DIR" <<'PY'
import glob, os, re, sys
d = sys.argv[1]
pattern = re.compile(r"^(\tswitch \(ctx\.r\d+\.)u64(\) \{)$", re.MULTILINE)
files = 0
sites = 0
for path in sorted(glob.glob(os.path.join(d, "ppc_recomp.*.cpp"))):
    text = open(path, encoding="utf-8", errors="ignore").read()
    fixed, count = pattern.subn(r"\1u32\2", text)
    if count == 0:
        continue
    # Only rewrite a file that still needs it: touching one that is already
    # correct would bump its mtime and force a pointless recompile.
    open(path, "w", encoding="utf-8").write(fixed)
    files += 1
    sites += count
print("    %d site(s) in %d file(s)" % (sites, files) if sites else "    none")
PY

# Translation units left over from a previous generation. XenonRecomp names its
# output ppc_recomp.0.cpp upwards and never deletes anything, so a run that
# discovers fewer functions than the last one leaves the tail files behind -
# still holding the functions that have since moved earlier. Nothing says so:
# the recompile looks clean and the link fails with hundreds of duplicate
# symbols, which reads like a bug in the generated code.
#
# A leftover unit is one whose every function is also defined somewhere else,
# so it can be identified exactly rather than guessed at from timestamps (an
# unchanged unit keeps its old mtime by design, to avoid pointless rebuilds).
echo "==> checking for translation units left by an earlier generation"
python3 - "$PPC_DIR" <<'PY'
import collections, glob, os, re, sys
d = sys.argv[1]
owners = collections.defaultdict(set)
defines = {}
for path in glob.glob(os.path.join(d, "ppc_recomp.*.cpp")):
    found = set(re.findall(r"PPC_FUNC_IMPL\(__imp__sub_([0-9A-F]+)\)",
                           open(path, encoding="utf-8", errors="ignore").read()))
    defines[path] = found
    for name in found:
        owners[name].add(path)
# Oldest first: where two units overlap entirely, the earlier generation's is
# the one to drop.
stale = []
for path in sorted(defines, key=os.path.getmtime):
    if defines[path] and all(len(owners[n]) > 1 for n in defines[path]):
        stale.append(path)
        for n in defines[path]:
            owners[n].discard(path)
for path in stale:
    print("    stale: %s (%d functions, all defined elsewhere)" %
          (os.path.basename(path), len(defines[path])))
    os.remove(path)
left = {n for n, o in owners.items() if len(o) > 1}
if left:
    print("    %d function(s) still defined twice, e.g. sub_%s in %s" %
          (len(left), sorted(left)[0],
           ", ".join(os.path.basename(p) for p in owners[sorted(left)[0]])))
    sys.exit(1)
if not stale:
    print("    none")
PY
# Taken here, after the two passes that write into the generated directory, so
# the stamp describes the tree the NEXT build will find rather than the one
# this build started from.
ppc_stamp > "$PPC_STAMP_FILE"
fi     # SCAN_PPC

# Dropped branches are executable failures, even if the C++ compiles. GW1's
# shared controller tails once shipped this way: Y and buttons returned the
# previous floating-point result. Check even when the scan stamp is unchanged.
if grep -nE '^[[:space:]]*// ERROR' "${PPC_DIR}"/ppc_recomp.*.cpp \
        > "${OUT_DIR}/dropped_code.txt"; then
    echo "generated code contains dropped branches or switch cases:" >&2
    head -8 "${OUT_DIR}/dropped_code.txt" >&2
    echo "run tools/recompile_title.sh ${TITLE} --converge before building" >&2
    exit 1
fi

# Objects left over from a previous generation. XenonRecomp's translation-unit
# count changes whenever function discovery does, and a stale object still
# defines functions that have since moved to a different unit - which surfaces
# as a duplicate-symbol link error with nothing to suggest it is staleness.
for obj in "${OBJ_DIR}"/*.o; do
    [ -e "$obj" ] || continue
    [ -e "${PPC_DIR}/$(basename "${obj%.o}")" ] || { rm -f "$obj"; }
done

# Only recompile a unit whose object is older than its source or than any of
# the headers every unit includes. The recompiled CPU is hundreds of units and
# nothing in it changes unless XenonRecomp reran, so a full rebuild to pick up a
# one-line kernel change costs many minutes for nothing. The header list is
# deliberately the whole force-included set: miss one and a stale object
# silently contradicts the rest of the build, which is far more expensive than
# recompiling.
DEPS=("${PPC_DIR}/ppc_context.h" "${PPC_DIR}/ppc_config.h"
      "${PPC_DIR}/ppc_simde_shim.h" "${RUNTIME_DIR}/tools/ppc_mmio_hooks.h")
needs_build() {
    local source="$1" object="${OBJ_DIR}/$1.o"
    [ -e "$object" ] || return 0
    [ "$object" -nt "$source" ] || return 0
    for dep in "${DEPS[@]}"; do
        [ -e "$dep" ] || continue
        [ "$object" -nt "$dep" ] || return 0
    done
    return 1
}
STALE=()
for source in $(cd "$PPC_DIR" && ls ppc_recomp.*.cpp ppc_func_mapping.cpp); do
    (cd "$PPC_DIR" && needs_build "$source") && STALE+=("$source")
done
TOTAL=$(ls "$PPC_DIR"/ppc_recomp.*.cpp "$PPC_DIR"/ppc_func_mapping.cpp | wc -l)
echo "==> compiling ${#STALE[@]} of ${TOTAL} translation units (-j${JOBS})"
if [ "${#STALE[@]}" -gt 0 ]; then
    (cd "$PPC_DIR" && printf '%s\n' "${STALE[@]}" | \
      xargs -P "$JOBS" -I{} "$CXX" -std=c++20 -c {} -o "${OBJ_DIR}/{}.o" \
            -I. -I"${RUNTIME_DIR}/tools" -include ppc_simde_shim.h \
            -include ppc_mmio_hooks.h ${ARCH_FLAGS} ${OPT_FLAGS})
fi

# Only when something changed. `ld -r` over Choplifter's 306 objects (142 MB)
# costs 1.9 s and produces a byte-identical result if no object moved, and this
# script now runs for every title whenever the runtime changes - which is a
# link, not a compile. Two things make an object stale and both are checked:
# a rewritten object is newer than the combined file, and an object ADDED or
# REMOVED changes the directory's own mtime (a removal moves nothing else).
COMBINED="${OUT_DIR}/ppc_combined_${BINARY}.o"
RELINK=1
if [ -e "$COMBINED" ] && [ ! "${OBJ_DIR}" -nt "$COMBINED" ] && \
   [ -z "$(find "${OBJ_DIR}" -name '*.o' -newer "$COMBINED" -print -quit)" ]; then
    RELINK=0
fi
if [ "$RELINK" = "1" ]; then
    echo "==> partial-linking the CPU"
    ld -r -o "$COMBINED" "${OBJ_DIR}"/*.o
    echo "==> external surface (should be only __imp__ kernel thunks + libm)"
    nm -C --undefined-only "$COMBINED" | awk '{$1="";print}' | \
      sed 's/^ *//' | sort -u > "${OUT_DIR}/undefined.txt"
else
    echo "==> partial-linking the CPU: unchanged, kept"
fi
if [ -s "${OUT_DIR}/undefined.txt" ]; then
    echo "    $(grep -c '^__imp__' "${OUT_DIR}/undefined.txt") kernel thunks, \
$(grep -vc '^__imp__' "${OUT_DIR}/undefined.txt") other"
fi

# ---------------------------------------------------------------------------
# The one genuinely shared step, under the one shared lock. Everything above
# and below this block is this title's own files and runs concurrently with
# every other title's build.
echo "==> building the runtime core"
exec 8>"${LOCK_DIR}/core.lock"
if ! flock -n 8; then
    echo "    another build is in the shared CMake tree - waiting"
    flock 8
fi
cmake -S "${RUNTIME_DIR}" -B "${RUNTIME_DIR}/build" \
      -DCMAKE_BUILD_TYPE=Release >/dev/null
cmake --build "${RUNTIME_DIR}/build" --target whitty_xenon_core \
      -j "${JOBS}" >/dev/null

# The rendering backend, where Vulkan is available. The harness can produce a
# picture of a frame only with this; without it, it still runs the title and
# reports counters, so a machine with no Vulkan loses the picture rather than
# the ability to build.
RENDER_FLAGS=()
RENDER_LIBS=()
# The compressed-audio decoder, if the core was built against it. The core
# library is linked by hand here rather than by CMake, so its dependencies have
# to be named too.
AUDIO_LIBS=()
if pkg-config --exists libavcodec libavutil; then
    AUDIO_LIBS=($(pkg-config --libs libavcodec libavutil))
    echo "    XMA audio: FFmpeg $(pkg-config --modversion libavcodec)"
else
    echo "    XMA audio: none (music will be silent)"
fi
if cmake --build "${RUNTIME_DIR}/build" --target whitty_xenon_gpu_vulkan \
        -j "${JOBS}" >/dev/null 2>&1; then
    RENDER_FLAGS=(-DWHITTY_HAVE_VULKAN)
    cp -f "${RUNTIME_DIR}/build/libwhitty_xenon_gpu_vulkan.a" \
          "${OUT_DIR}/gpu_vulkan_${BINARY}.a"
    RENDER_LIBS=("${OUT_DIR}/gpu_vulkan_${BINARY}.a" -lvulkan)
    echo "    rendering backend: enabled"
    # A window, where SDL3 is present. Without it the runtime still renders
    # every frame, it just has nowhere to show them.
    if pkg-config --exists sdl3; then
        RENDER_FLAGS+=(-DWHITTY_HAVE_SDL $(pkg-config --cflags sdl3))
        RENDER_LIBS+=($(pkg-config --libs sdl3))
        echo "    window: SDL3 $(pkg-config --modversion sdl3)"
    else
        echo "    window: none (no SDL3)"
    fi
else
    echo "    rendering backend: not available (no Vulkan)"
fi

# The two runtime archives, copied into this title's own directory while the
# shared lock is still held. The link below reads THESE, never the shared ones:
# CMake rebuilds an archive by rewriting it, so a link that read the shared copy
# while another title's build was in that step would get a torn archive - which
# surfaces as missing symbols and reads like a runtime bug. 1.8 MB per title.
cp -f "${RUNTIME_DIR}/build/libwhitty_xenon_core.a" "${OUT_DIR}/core_${BINARY}.a"
flock -u 8
exec 8>&-

# The three per-title translation units. They are not part of the core library:
# ppc_bridge.cpp and ppc_function_table.cpp are compiled against this title's
# generated ppc_config.h/ppc_context.h, and run_title.cpp calls its entry point
# by name.
#
# These used to be rebuilt unconditionally, for a good reason: a stale one of
# them against a changed kernel_state layout produces garbage member offsets
# that look like a runtime bug rather than a build problem. Unconditional is
# the safe answer only while nobody knows what they include - so now the
# compiler is asked. `-MD` writes the exact prerequisite list, every header it
# really opened, and a rebuild happens if ANY of them is newer, is missing, or
# if the compiler or the flags changed. That is strictly more precise than a
# timestamp rule someone maintains by hand, and it turns a relink-everything
# pass from 3 s of compiling per title into nothing.
echo "==> compiling the harness"
TOOL_FLAGS=(-std=c++20 -I"$PPC_DIR" -I"${RUNTIME_DIR}/tools"
            -I"${RUNTIME_DIR}/include" -include ppc_simde_shim.h
            -include ppc_mmio_hooks.h ${ARCH_FLAGS} ${OPT_FLAGS}
            "${RENDER_FLAGS[@]}")
TOOL_SIGNATURE="$("$CXX" --version | head -1) ${TOOL_FLAGS[*]}"
harness_stale() {
    local tool="$1"
    local object="${OUT_DIR}/${tool}_${BINARY}.o"
    local depfile="${OUT_DIR}/${tool}_${BINARY}.d"
    local signature="${OUT_DIR}/${tool}_${BINARY}.flags"
    [ -e "$object" ] && [ -e "$depfile" ] && [ -e "$signature" ] || return 0
    [ "$(cat "$signature")" = "$TOOL_SIGNATURE" ] || return 0
    OBJECT="$object" DEPFILE="$depfile" python3 -c '
import os, sys
# A make depfile: "target: a b c \" with escaped spaces. Anything this cannot
# parse means REBUILD, never "assume fresh".
try:
    text = open(os.environ["DEPFILE"], encoding="utf-8").read()
    age = os.path.getmtime(os.environ["OBJECT"])
except OSError:
    sys.exit(1)
text = text.replace("\\\n", " ")
if ":" not in text:
    sys.exit(1)
for token in text.split(":", 1)[1].replace("\\ ", "\x00").split():
    path = token.replace("\x00", " ")
    try:
        if os.path.getmtime(path) > age:
            sys.exit(1)
    except OSError:
        sys.exit(1)
sys.exit(0)
' || return 0
    return 1
}
BUILT=0
PIDS=()
for tool in ppc_bridge ppc_function_table run_title; do
    if harness_stale "$tool"; then
        BUILT=$((BUILT + 1))
        # The signature is written only after a SUCCESSFUL compile, so a failed
        # one is stale again next time rather than being taken for done.
        (
          "$CXX" "${TOOL_FLAGS[@]}" -MD -MF "${OUT_DIR}/${tool}_${BINARY}.d" \
                 -c "${RUNTIME_DIR}/tools/${tool}.cpp" \
                 -o "${OUT_DIR}/${tool}_${BINARY}.o" &&
          printf '%s' "$TOOL_SIGNATURE" > "${OUT_DIR}/${tool}_${BINARY}.flags"
        ) &
        PIDS+=($!)
    fi
done
# Waited on BY PID. A bare `wait` reports success whatever its children did, so
# a harness unit that failed to compile would be skipped over and the link
# would quietly use the previous object - the exact class of bug this project
# keeps finding: something reporting success for work that never happened.
FAILED=0
for pid in ${PIDS[@]+"${PIDS[@]}"}; do
    wait "$pid" || FAILED=1
done
[ "$FAILED" = "0" ] || { echo "    a harness unit failed to compile" >&2; exit 1; }
echo "    ${BUILT} of 3 recompiled"

echo "==> linking"
"$CXX" ${OPT_FLAGS} -o "${OUT_DIR}/${BINARY}" \
    "${OUT_DIR}/ppc_combined_${BINARY}.o" "${OUT_DIR}/ppc_bridge_${BINARY}.o" \
    "${OUT_DIR}/ppc_function_table_${BINARY}.o" "${OUT_DIR}/run_title_${BINARY}.o" \
    "${RENDER_LIBS[@]}" \
    "${OUT_DIR}/core_${BINARY}.a" \
    "${AUDIO_LIBS[@]}" -lm -lpthread

echo "==> done: ${OUT_DIR}/${BINARY}"
