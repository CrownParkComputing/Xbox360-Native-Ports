#!/usr/bin/env bash
# build.sh - the Android arm64 build, from this machine, with nothing fetched.
#
# Produces three things in build-android/out:
#
#   whitty_<title>          a PIE executable to push and run over adb. THIS is
#                           the one to run first: it prints the whole harness
#                           report to a terminal, needs no install and no
#                           signing, and it answers the three questions a first
#                           device run exists to answer.
#   whitty-xenon.apk        the same code as a tappable app, signed with the
#                           debug key.
#   whitty_<title>_static   the same code linked statically with a Vulkan that
#                           refuses, so it runs under qemu-aarch64-static on
#                           this machine. Correctness only - qemu's 10-30x
#                           interpretation penalty makes any timing from it
#                           meaningless.
#
# Nothing here downloads anything. The NDK, SIMDe, the Vulkan headers, the SDK
# build tools and the debug keystore are all already on this machine, and if one
# is missing this says which rather than fetching gigabytes onto a disk that is
# 96% full.
set -euo pipefail

TITLE="${TITLE:-geometrywars}"
HERE="$(cd "$(dirname "$0")" && pwd)"
RUNTIME="$(cd "${HERE}/.." && pwd)"
BUILD="${BUILD:-${RUNTIME}/build-android}"
OUT="${BUILD}/out"

NDK="${NDK:-${HOME}/Android/Sdk/ndk/28.2.13676358}"
SDK="${SDK:-${HOME}/Android/Sdk}"
BUILD_TOOLS="${BUILD_TOOLS:-${SDK}/build-tools/36.0.0}"
PLATFORM_JAR="${PLATFORM_JAR:-${SDK}/platforms/android-34/android.jar}"
SIMDE="${SIMDE:-${HOME}/rexglue-sdk/thirdparty/simde}"
KEYSTORE="${KEYSTORE:-${HOME}/.android/debug.keystore}"
JOBS="${JOBS:-$(nproc)}"
QEMU_STATIC="${QEMU_STATIC:-ON}"

# One APK per title, not one APK that keeps replacing itself.
#
# The manifest in this directory is a TEMPLATE: its package name and its label
# are substituted per title below. Without that every recipe produces
# com.whittyxenon.player, and installing the second one uninstalls the first -
# which looks like a packaging success and is discovered on the device.
APP_PACKAGE="${APP_PACKAGE:-com.whittyxenon.${TITLE//[^a-z0-9]/}}"
APP_LABEL="${APP_LABEL:-${TITLE}}"
APK_NAME="${APK_NAME:-whitty-${TITLE}.apk}"

# The launcher icon, which is per TITLE and therefore not in this directory.
#
# A recipe puts three PNGs in <recipe>/icon/: ic_launcher.png (the legacy
# bitmap) and the two adaptive layers, ic_launcher_background.png and
# ic_launcher_foreground.png. No icon directory means no icon resource and the
# system default, which is what this produced before and is still a valid APK.
#
# ALL THREE ARE NEEDED, and that is not belt-and-braces. A launcher on Android
# 8 or later handed only the legacy bitmap applies the "legacy icon treatment":
# it shrinks the picture, centres it on a white plate and masks that, and there
# is no way to opt out. The artwork then reads as a stamp in a circle. The two
# layers are what make it fill the icon.
ICON_DIR="${ICON_DIR:-${RUNTIME}/../icon}"

# The arm64 FFmpeg that decodes XMA on the device. Without it the title's music
# is silent, because most of these titles store their soundtrack as XMA - see
# the long note in android/CMakeLists.txt. The two shared libraries travel in
# the APK beside libwhittyxenon.so; nothing derived from the game does.
FFMPEG_ANDROID="${FFMPEG_ANDROID:-${HOME}/src-thirdparty/ffmpeg-android-arm64}"
export FFMPEG_ANDROID

require() {
    [ -e "$2" ] || { echo "missing $1: $2" >&2; exit 1; }
}
require "the NDK"            "${NDK}/build/cmake/android.toolchain.cmake"
require "SIMDe"              "${SIMDE}/simde/x86/sse.h"
require "the generated code" "${RUNTIME}/../${TITLE}/ppc"

echo "==> configuring (${TITLE}, arm64-v8a, android-30)"
cmake -S "${HERE}" -B "${BUILD}" \
      -DCMAKE_TOOLCHAIN_FILE="${NDK}/build/cmake/android.toolchain.cmake" \
      -DANDROID_ABI=arm64-v8a -DANDROID_PLATFORM=android-30 \
      -DCMAKE_BUILD_TYPE=Release \
      -DWHITTY_TITLE="${TITLE}" -DWHITTY_SIMDE_DIR="${SIMDE}" \
      -DWHITTY_PPC_DIR="${RUNTIME}/../${TITLE}/ppc" \
      -DWHITTY_QEMU_STATIC="${QEMU_STATIC}" >/dev/null

TARGETS=("whitty_${TITLE}" whittyxenon)
[ "${QEMU_STATIC}" = "ON" ] && TARGETS+=("whitty_${TITLE}_static")
echo "==> building ${TARGETS[*]} (-j${JOBS})"
cmake --build "${BUILD}" --target "${TARGETS[@]}" -j "${JOBS}"

mkdir -p "${OUT}"
STRIP="${NDK}/toolchains/llvm/prebuilt/linux-x86_64/bin/llvm-strip"
# Stripped copies for the device; the unstripped originals stay in the build
# tree, because addr2line against them is how a guest fault gets a name. See
# "Reading a guest fault" in docs/BRINGUP.md - the recompiled CPU is ordinary
# host functions named after the guest addresses they came from.
"${STRIP}" -o "${OUT}/whitty_${TITLE}" "${BUILD}/whitty_${TITLE}"
if [ "${QEMU_STATIC}" = "ON" ]; then
    cp -f "${BUILD}/whitty_${TITLE}_static" "${OUT}/whitty_${TITLE}_static"
fi

# ---------------------------------------------------------------------------
# The APK, built by hand from the SDK's own tools.
#
# Not Gradle, deliberately. A Gradle build resolves the Android Gradle Plugin
# and its dependencies from the network on first use, and this machine's /home
# is at 96%. aapt2, zipalign and apksigner are already here and do the whole
# job offline in four commands - and the result is a debug-signed APK that
# `adb install -r` accepts exactly like a Gradle one.
if [ -x "${BUILD_TOOLS}/aapt2" ] && [ -f "${PLATFORM_JAR}" ] && \
   [ -f "${KEYSTORE}" ]; then
    echo "==> packaging the APK"
    STAGE="${BUILD}/apk"
    rm -rf "${STAGE}"
    mkdir -p "${STAGE}/lib/arm64-v8a"
    cp -f "${BUILD}/libwhittyxenon.so" "${STAGE}/lib/arm64-v8a/"
    "${STRIP}" "${STAGE}/lib/arm64-v8a/libwhittyxenon.so"
    # The decoder, when there is one. libwhittyxenon.so has a DT_NEEDED on
    # these, so an APK missing them does not play silently - it fails to load,
    # which is the louder and better failure.
    if [ -f "${FFMPEG_ANDROID}/lib/libavcodec.so" ]; then
        cp -f "${FFMPEG_ANDROID}/lib/libavcodec.so" \
              "${FFMPEG_ANDROID}/lib/libavutil.so" "${STAGE}/lib/arm64-v8a/"
        echo "    XMA decoder: libavcodec + libavutil packaged"
    fi
    # The per-title manifest. Anchored substitutions on the attributes rather
    # than a token template, so the file in the tree stays a valid manifest a
    # person can read and aapt2 can be pointed at directly.
    MANIFEST="${STAGE}/AndroidManifest.xml"
    sed -e "s|package=\"com.whittyxenon.player\"|package=\"${APP_PACKAGE}\"|" \
        -e "s|android:label=\"Whitty Xenon\"|android:label=\"${APP_LABEL}\"|" \
        "${HERE}/AndroidManifest.xml" > "${MANIFEST}"
    grep -q "package=\"${APP_PACKAGE}\"" "${MANIFEST}" ||
        { echo "the manifest substitution did not take" >&2; exit 1; }

    # The icon resources, when the recipe supplied them. Compiled here rather
    # than kept as a compiled blob, so what is in the tree is three PNGs and
    # eight lines of XML that a person can read and replace.
    RES_FLAGS=()
    if [ -f "${ICON_DIR}/ic_launcher.png" ]; then
        RES="${STAGE}/res"
        mkdir -p "${RES}/drawable" "${RES}/drawable-anydpi-v26"
        cp -f "${ICON_DIR}/ic_launcher.png" "${RES}/drawable/"
        for layer in background foreground; do
            [ -f "${ICON_DIR}/ic_launcher_${layer}.png" ] &&
                cp -f "${ICON_DIR}/ic_launcher_${layer}.png" "${RES}/drawable/"
        done
        # Android resolves the same resource name to this XML from API 26 and
        # to the PNG below it, so the manifest names one icon either way.
        cat > "${RES}/drawable-anydpi-v26/ic_launcher.xml" <<'ICONXML'
<?xml version="1.0" encoding="utf-8"?>
<adaptive-icon xmlns:android="http://schemas.android.com/apk/res/android">
    <background android:drawable="@drawable/ic_launcher_background" />
    <foreground android:drawable="@drawable/ic_launcher_foreground" />
</adaptive-icon>
ICONXML
        if [ ! -f "${RES}/drawable/ic_launcher_background.png" ] ||
           [ ! -f "${RES}/drawable/ic_launcher_foreground.png" ]; then
            # Legacy bitmap only. Say so: the icon will be a small picture on a
            # white plate and that looks like a broken build rather than a
            # missing file.
            echo "    icon: legacy bitmap only - no adaptive layers in ${ICON_DIR}" >&2
            rm -f "${RES}/drawable-anydpi-v26/ic_launcher.xml"
        fi
        "${BUILD_TOOLS}/aapt2" compile --dir "${RES}" -o "${STAGE}/res.zip"
        RES_FLAGS=(-R "${STAGE}/res.zip")
        # Named only once the resource exists, so a build with no icon cannot
        # link a manifest that references one.
        sed -i -e "s|android:label=\"${APP_LABEL}\"|android:label=\"${APP_LABEL}\"\n                 android:icon=\"@drawable/ic_launcher\"\n                 android:roundIcon=\"@drawable/ic_launcher\"|" \
            "${MANIFEST}"
        grep -q 'android:icon=' "${MANIFEST}" ||
            { echo "the icon substitution did not take" >&2; exit 1; }
    fi

    "${BUILD_TOOLS}/aapt2" link -o "${STAGE}/base.apk" \
        -I "${PLATFORM_JAR}" --manifest "${MANIFEST}" \
        "${RES_FLAGS[@]}" \
        --min-sdk-version 30 --target-sdk-version 34
    ( cd "${STAGE}" && zip -q -r base.apk lib )
    "${BUILD_TOOLS}/zipalign" -f 4 "${STAGE}/base.apk" "${STAGE}/aligned.apk"
    "${BUILD_TOOLS}/apksigner" sign \
        --ks "${KEYSTORE}" --ks-pass pass:android --key-pass pass:android \
        --ks-key-alias androiddebugkey \
        --out "${OUT}/${APK_NAME}" "${STAGE}/aligned.apk"
    echo "    ${OUT}/${APK_NAME}  (${APP_PACKAGE})"
else
    echo "==> APK skipped: no build-tools at ${BUILD_TOOLS}, no ${PLATFORM_JAR}," \
         "or no ${KEYSTORE}"
fi

echo
echo "==> done"
ls -la "${OUT}"
