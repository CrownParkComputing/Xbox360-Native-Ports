#!/bin/bash
# Compile tools/d3d/hooks/generated_hooks.cpp (or $1) with the recorded compile
# flags of one engine object and relink libsplitsecond_SPLITSECOND1.so with the
# extra objects (hooks + the existing zz_memcpy_probe.cpp.o). Never runs the
# game's cmake/ninja build (its codegen pre-step aborts).
set -e
SRC=${1:-$HOME/recomp-ports/ss-recomp/tools/d3d/hooks/generated_hooks.cpp}
B=$HOME/recomp-ports/ss-recomp/out/build/linux
D=CMakeFiles/splitsecond_SPLITSECOND1.dir
REF=$D/generated/splitsecond1/splitsecond_recomp.55.cpp.o
OBJ=$D/generated/splitsecond1/generated_hooks.cpp.o
PROBE=$D/generated/splitsecond1/zz_memcpy_probe.cpp.o
cd "$B"
CMDS=$(ninja -t commands libsplitsecond_SPLITSECOND1.so)
CC=$(echo "$CMDS" | grep -F "$REF" | grep -v '^: ' | head -1)
[ -n "$CC" ] || { echo "no recorded compile command for $REF"; exit 1; }
# substitute the object/depfile/source paths
CC=${CC//$REF.d/$OBJ.d}
CC=${CC//$REF/$OBJ}
CC=${CC//\/home\/jon\/ss-recomp\/generated\/splitsecond1\/splitsecond_recomp.55.cpp/$SRC}
echo "compile: $SRC"
if ! OUT=$(eval "$CC" 2>&1); then
  if echo "$OUT" | grep -q "has been modified since the precompiled header"; then
    echo "PCH stale, rebuilding"
    PCHCMD=$(echo "$CMDS" | grep -F -- '-o CMakeFiles/splitsecond_SPLITSECOND1.dir/cmake_pch.hxx.pch' | head -1)
    eval "$PCHCMD"
    eval "$CC"
  else
    echo "$OUT"; exit 1
  fi
fi
LINK=$(echo "$CMDS" | tail -1)
LINK=${LINK#: && }
LINK=${LINK% && :}
EXTRA="$OBJ"
[ -f "$PROBE" ] && EXTRA="$EXTRA $PROBE"
echo "link: + $EXTRA"
eval "$LINK $EXTRA"
echo "verify:"
nm libsplitsecond_SPLITSECOND1.so | grep -E ' (__imp__)?sub_888EB588$'
S=$(nm libsplitsecond_SPLITSECOND1.so | awk '$3=="sub_888EB588"{print $1}')
I=$(nm libsplitsecond_SPLITSECOND1.so | awk '$3=="__imp__sub_888EB588"{print $1}')
[ -n "$S" ] && [ "$S" != "$I" ] && echo "OK: sub_888EB588 strong override ($S) distinct from __imp__ ($I)" || { echo "FAIL: override not distinct"; exit 1; }
