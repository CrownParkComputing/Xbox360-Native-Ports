# RetroRecomp

**Your own Xbox 360 title in. A native Linux or Android build out.**

RetroRecomp statically recompiles the PowerPC executable from a copy of a game
*you own* into native code, and links it against a runtime that supplies what
the recompiled CPU still needs: an Xbox 360 kernel, a Xenos GPU command
processor, a shader translator, texture decoding and audio. The result is an
ordinary Linux executable, or a signed APK, with no emulator underneath it.

**No game content is in this repository and none may be added** — no packages,
no `default.xex`, no extracted assets, no recompiler output, no built title
binaries. The recompiled output of a title is that title's own code in another
form. That is why this is a builder and not a download.

## Get the tool

**Download one file.** `xexport` is a Python zipapp: a single executable with
everything in it. No pip, no virtualenv, no install step — python3 is the only
requirement.

    chmod +x xexport
    ./xexport --help

**Or build it from source**, which is the same code either way:

    git clone <this repo> RetroRecomp && cd RetroRecomp
    bash tools/build_tool.sh          # writes dist/xexport
    ./dist/xexport --version

**Or run it straight out of the checkout**, with no build at all:

    ./xexport.sh --help

## Use it

    xexport identify <your-package-or-xex>       # what is this, and is it intact
    xexport new      <container> --slug mygame --out ~/ports/mygame
    xexport recompile ~/ports/mygame             # to convergence
    xexport build    ~/ports/mygame --target linux
    xexport build    ~/ports/mygame --target android
    xexport status   ~/ports/mygame              # which gates have passed

`xexport all` runs new → recompile → build → kit in order.

The Android target cross-compiles for arm64 and packages a debug-signed APK
using the Android SDK build tools directly — no Gradle, nothing fetched.

## What you need

* a copy of the game you own, as a signed STFS package or a `default.xex`
* Linux, clang or gcc with C++20, CMake 3.20+, Vulkan headers
* XenonRecomp and XenonAnalyse, built from the current source
* for Android: the NDK, the SDK build tools, and a debug keystore

`xexport identify` tells you what is missing and where it looked, rather than
failing later with the symptom.

## Layout

    xexport/      the tool
    runtime/      the Xbox 360 kernel + Xenos GPU the recompiled code links to
    titles/       per-title recompiler configuration (recipes, not content)
    docs/         bring-up playbook and the runtime's own documentation
    tools/        build_tool.sh, which produces the single-file xexport
    dist/         the built tool (git-ignored)

Built games do not live here. On the development machine they are in
`~/RetroRecompBuilds/`, split into `prebuilt/` (played, works) and `wip/`
(builds, something is wrong) — see that folder's README.

## Runtime tests

    cd runtime && bash tools/check.sh

`check.sh` rather than a bare `ctest`: ctest does not build, so running it after
an edit reports on the last successful compile. Tests are compiled `-UNDEBUG` so
their assertions survive a Release build.

## Harness variables

The runtime takes ~180 `RETRO_*` environment variables for looking at one frame,
one shader or one kernel call at a time; `docs/BRINGUP.md` lists them. The older
`WHITTY_*` spelling is still accepted and is copied over at startup, so existing
recipes keep working — a silently ignored setting is the worst failure available
here.
