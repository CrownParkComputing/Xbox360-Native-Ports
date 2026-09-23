#!/usr/bin/env bash
# Refresh the tracked warm-start shader cache from the live one.
#
#   bash tools/d3d/update_shader_seed.sh [--install]
#
# The seed only covers content that has actually been rendered, so play (or
# drive headlessly) through anything new first - a track, an event, a power
# play, the results screen - then run this. --install also copies the result
# next to the executable, where the running game reads it.
#
# A user cache that already exists is never overwritten by the seed, so to test
# a seeded first run use a fresh --cache_root (SS_CACHE_ROOT in headless.py).
set -euo pipefail
cd "$(dirname "$0")/../.."

LIVE=content_root/cache/shaders/shareable
TRACKED=resources/shaders
EXE_DIR=out/build/linux/shader_seed

if [ ! -d "$LIVE" ]; then
  echo "no live shader cache at $LIVE" >&2
  exit 1
fi

mkdir -p "$TRACKED"
for name in 425607E7.xsh 425607E7.fsi.vk.xpso; do
  if [ ! -s "$LIVE/$name" ]; then
    echo "missing or empty: $LIVE/$name" >&2
    exit 1
  fi
  cp "$LIVE/$name" "$TRACKED/$name"
done

# The .xpso is a 12-byte header followed by fixed-size stored descriptions.
python3 - "$TRACKED/425607E7.fsi.vk.xpso" <<'PY'
import os, sys
size = os.path.getsize(sys.argv[1])
print(f"pipeline description file: {size} bytes")
PY
ls -la "$TRACKED"

if [ "${1:-}" = "--install" ]; then
  mkdir -p "$EXE_DIR"
  cp "$TRACKED"/* "$EXE_DIR/"
  echo "installed to $EXE_DIR"
fi
