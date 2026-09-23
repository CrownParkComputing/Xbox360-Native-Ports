#!/usr/bin/env bash
# Optional standalone Split/Second package; separate from the private content zip.
#
# Usage: tools/make_dist.sh <game_dir> [version]
#   <game_dir> = folder containing DEFAULT.XEX, SKIPPER.DLL, SPLITSECOND1.DLL
#                and the rest of the disc assets (normally ./assets)
# Produces: dist/splitsecond-native-<version>.zip
set -eu

GAME=${1:?path to the game dump folder required}
VER=${2:-$(date +%Y%m%d)}
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
BUILD="$ROOT/out/build/linux"
STAGE="$ROOT/dist/splitsecond-native-$VER"

for f in "$GAME/DEFAULT.XEX" "$GAME/SKIPPER.DLL" "$GAME/SPLITSECOND1.DLL"; do
    [ -f "$f" ] || { echo "missing: $f"; exit 1; }
done
[ -x "$BUILD/splitsecond" ] || { echo "build first (see README)"; exit 1; }

rm -rf "$STAGE"
mkdir -p "$STAGE/assets"

# Binary + runtime (RUNPATH is $ORIGIN, so libs sit beside the exe).
cp "$BUILD/splitsecond" "$STAGE/"
cp "$BUILD"/libsplitsecond_*.so "$STAGE/"
cp "$BUILD/librexruntime.so" "$BUILD/librexgpu-xenos.so" "$STAGE/"
cp "$ROOT/config/splitsecond.toml" "$STAGE/"
cp "$ROOT/resources/retro_recompilation_logo.png" "$STAGE/"

# Whole disc dump (XEX + DLLs + .ark data files + loose assets).
cp -r "$GAME"/* "$STAGE/assets/"

cat > "$STAGE/run.sh" <<'RUN'
#!/usr/bin/env bash
cd "$(dirname "$0")"
exec ./splitsecond --game_data_root "$PWD/assets" --gpu_plugin xenos \
  --user_data_root "$PWD/content_root" --mnk_mode "$@"
RUN
chmod +x "$STAGE/run.sh"

cat > "$STAGE/README.txt" <<TXT
Split/Second - native Linux build (WIP - menus and racing) (static recompilation)
=================================================================
Run:            ./run.sh
Controls:       any SDL game controller; keyboard fallback (Space = A).
Requirements:   x86-64 Linux, Vulkan driver (tested: NVIDIA), glibc 2.38+.
Config:         splitsecond.toml beside the binary.
Saves/cache:    content_root/ inside this package.
Panels:         F8 toggles controls and game information.
Limitations:    60 FPS, pipeline stalls, HUD issues and DLC remain unfinished.

Built from https://github.com/CrownParkComputing/ss-recomp
(SDK: https://github.com/CrownParkComputing/rexglue-sdk-rru)
Game content is the owner's own dump; do not redistribute the zip.
TXT

( cd "$ROOT/dist" && rm -f "splitsecond-native-$VER.zip" && zip -qr "splitsecond-native-$VER.zip" "splitsecond-native-$VER" )
du -sh "$ROOT/dist/splitsecond-native-$VER.zip"
echo "dist ready: dist/splitsecond-native-$VER.zip"
