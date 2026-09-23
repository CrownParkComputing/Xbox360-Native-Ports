#!/usr/bin/env bash
# Build a self-contained, unzip-and-play distribution of the RRU recomp
# (the Ridge Racer 6 packaging model: git source builds the binary; the
# assets zip carries everything the title needs; no disc folder required).
#
# Usage: tools/make_dist.sh <game_dir> [version]
#   <game_dir> = folder containing default.xex, 00__ridge_racer__,
#                01___unbounded___ and data/ (your own dump)
# Produces: dist/rru-native-<version>.zip
set -eu

GAME=${1:?path to the game dump folder required}
VER=${2:-$(date +%Y%m%d)}
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
BUILD="$ROOT/out/build/linux"
STAGE="$ROOT/dist/rru-native-$VER"

for f in "$GAME/default.xex" "$GAME/00__ridge_racer__" "$GAME/01___unbounded___"; do
    [ -f "$f" ] || { echo "missing: $f"; exit 1; }
done
[ -x "$BUILD/ridgeracerunbounded" ] || { echo "build first (see README)"; exit 1; }

rm -rf "$STAGE"
mkdir -p "$STAGE/assets"

# Binary + runtime (RUNPATH is $ORIGIN, so libs sit beside the exe).
cp "$BUILD/ridgeracerunbounded" "$STAGE/"
cp "$BUILD/librexruntime.so" "$BUILD/librexgpu-xenos.so" "$STAGE/"
cp "$ROOT/config/ridgeracerunbounded.toml" "$STAGE/"

# The title's runtime needs: the XEX (kernel loads it), the two archives
# (streamed), and the loose Scaleform menus.
cp "$GAME/default.xex" "$GAME/00__ridge_racer__" "$GAME/01___unbounded___" "$STAGE/assets/"
cp -r "$GAME/data" "$STAGE/assets/data"

cat > "$STAGE/run.sh" <<'RUN'
#!/usr/bin/env bash
cd "$(dirname "$0")"
exec ./ridgeracerunbounded --game_data_root "$PWD/assets" --gpu_plugin xenos "$@"
RUN
chmod +x "$STAGE/run.sh"

cat > "$STAGE/README.txt" <<TXT
Ridge Racer Unbounded - native Linux build (static recompilation)
=================================================================
Run:            ./run.sh
Controls:       any SDL game controller; keyboard fallback (Space = A).
Requirements:   x86-64 Linux, Vulkan driver (tested: NVIDIA), glibc 2.38+.
Config:         ridgeracerunbounded.toml beside the binary.
Logs/shader     ~/.local/share/ridgeracerunbounded/
cache:

Built from https://github.com/CrownParkComputing/rru-recomp
(SDK: https://github.com/CrownParkComputing/rexglue-sdk-rru)
Game content is the owner's own dump; do not redistribute the zip.
TXT

( cd "$ROOT/dist" && rm -f "rru-native-$VER.zip" && zip -qr "rru-native-$VER.zip" "rru-native-$VER" )
du -sh "$ROOT/dist/rru-native-$VER.zip"
echo "dist ready: dist/rru-native-$VER.zip"
