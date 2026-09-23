# whitty_xenon on Android (arm64-v8a).
#
# Builds the same runtime the desktop harness uses, plus XenonRecomp's generated
# C++ for one title, into two things:
#
#   whitty_<title>        a PIE executable, for `adb push` + `adb shell`
#   libwhittyxenon.so     the same code as a NativeActivity, for an APK
#
# The executable is the one that matters first. It gives a terminal with the
# harness's whole log in it, needs no Gradle, no signing and no install, and it
# can answer the three questions a first device run exists to answer - the page
# size, the 4 GiB reservation, and the frame rate - without a window ever being
# opened. The APK is the same binary in a form a person can tap.
#
# The parent CMakeLists is used as-is for the runtime libraries: 24,000 lines of
# src/ cross-compile for arm64-v8a with no source changes and no Android branch,
# which is why there is no second copy of that list here. Only the recompiled
# CPU and the harness need Android-specific flags, and both of those are
# compiled by tools/build_recompiled_cpu.sh on the desktop - a script this
# deliberately does not modify, because it is the thing every desktop build
# depends on.
#
# Configure with, e.g.:
#   cmake -S android -B build-android \
#     -DCMAKE_TOOLCHAIN_FILE=$NDK/build/cmake/android.toolchain.cmake \
#     -DANDROID_ABI=arm64-v8a -DANDROID_PLATFORM=android-30 \
#     -DCMAKE_BUILD_TYPE=Release \
#     -DWHITTY_TITLE=geometrywars -DWHITTY_SIMDE_DIR=/path/to/simde
cmake_minimum_required(VERSION 3.20)
project(whitty_xenon_android LANGUAGES C CXX)

if(NOT ANDROID)
    message(FATAL_ERROR
        "This tree is for the Android NDK toolchain. Pass "
        "-DCMAKE_TOOLCHAIN_FILE=$NDK/build/cmake/android.toolchain.cmake.")
endif()

set(WHITTY_TITLE "geometrywars" CACHE STRING "Which recompiled title to build")
set(WHITTY_RUNTIME_DIR "${CMAKE_CURRENT_SOURCE_DIR}/.." CACHE PATH
    "The whitty_xenon runtime tree")
set(WHITTY_PPC_DIR "${WHITTY_RUNTIME_DIR}/../${WHITTY_TITLE}/ppc" CACHE PATH
    "XenonRecomp's generated C++ for this title")
# SIMDe supplies the SSE/AVX intrinsics the generated CPU names directly. It is
# header-only, so this is a path and not a build.
set(WHITTY_SIMDE_DIR "$ENV{HOME}/rexglue-sdk/thirdparty/simde" CACHE PATH
    "SIMDe's include root (the directory CONTAINING simde/)")

if(NOT IS_DIRECTORY "${WHITTY_PPC_DIR}")
    message(FATAL_ERROR "no generated code at ${WHITTY_PPC_DIR}")
endif()
if(NOT EXISTS "${WHITTY_SIMDE_DIR}/simde/x86/sse.h")
    message(FATAL_ERROR
        "SIMDe not found under ${WHITTY_SIMDE_DIR}. Point -DWHITTY_SIMDE_DIR at "
        "the directory that CONTAINS simde/.")
endif()

# XMA decoding on the device.
#
# This used to be OFF with a note saying music would be silent, and that note
# was the whole problem: most of these titles keep their soundtrack as XMA, so
# "music is silent" meant the handheld build had no music at all, and the
# workaround people reached for was packaging decoded audio into the APK.
#
# The device can decode it. WHITTY_FFMPEG_ANDROID_DIR points at an FFmpeg
# cross-built for arm64 with ONLY the xma1, xma2 and wmapro decoders - about a
# megabyte for libavcodec and libavutil together - and build.sh copies those two
# .so files into the APK beside libwhittyxenon.so. Nothing derived from the
# game is packaged; the player's own copy is decoded where it sits.
#
# No directory, or one without the libraries, and this falls back to the old
# behaviour and says so, because a silent title is otherwise indistinguishable
# from a title with no music.
set(WHITTY_FFMPEG_ANDROID_DIR "$ENV{FFMPEG_ANDROID}" CACHE PATH
    "Prebuilt arm64 FFmpeg (include/ and lib/) for XMA decoding")
if(WHITTY_FFMPEG_ANDROID_DIR AND
   EXISTS "${WHITTY_FFMPEG_ANDROID_DIR}/lib/libavcodec.so")
    set(WHITTY_USE_FFMPEG ON CACHE BOOL "" FORCE)
    set(WHITTY_FFMPEG_DIR "${WHITTY_FFMPEG_ANDROID_DIR}" CACHE PATH "" FORCE)
    message(STATUS "whitty_xenon: XMA decoding on device from "
                   "${WHITTY_FFMPEG_ANDROID_DIR}")
else()
    set(WHITTY_USE_FFMPEG OFF CACHE BOOL "" FORCE)
    message(WARNING "whitty_xenon: no arm64 FFmpeg - XMA music will be SILENT "
                    "on the device. Set FFMPEG_ANDROID to a prebuilt one.")
endif()
add_subdirectory("${WHITTY_RUNTIME_DIR}" whitty_runtime EXCLUDE_FROM_ALL)

find_package(Vulkan REQUIRED)

# ---------------------------------------------------------------------------
# The recompiled CPU.
file(GLOB WHITTY_PPC_SOURCES "${WHITTY_PPC_DIR}/ppc_recomp.*.cpp")
list(APPEND WHITTY_PPC_SOURCES "${WHITTY_PPC_DIR}/ppc_func_mapping.cpp")
list(LENGTH WHITTY_PPC_SOURCES WHITTY_PPC_COUNT)
message(STATUS "whitty_xenon: ${WHITTY_PPC_COUNT} generated translation unit(s) "
               "for ${WHITTY_TITLE}")

add_library(whitty_ppc STATIC ${WHITTY_PPC_SOURCES})
# The prelude directory goes FIRST, ahead of the sysroot: the generated
# ppc_context.h includes <x86intrin.h>, <xmmintrin.h> and <smmintrin.h>, none of
# which exist on aarch64, and the headers there redirect all three at the
# aarch64 replacements. See android/prelude/whitty_arm64_x86_prelude.h.
target_include_directories(whitty_ppc BEFORE PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/prelude"
    "${WHITTY_PPC_DIR}"
    "${WHITTY_RUNTIME_DIR}/tools"
    "${WHITTY_SIMDE_DIR}")
# Two things about these three lines, both learned the hard way.
#
# Absolute paths, because a bare `-include name.h` is resolved against the
# include path as the driver sees it at that point on the command line, and
# CMake emits its -I flags after the options - so the short form finds nothing.
#
# And "SHELL:", because CMake de-duplicates compile options: three separate
# `-include` flags collapse into one flag with three paths after it, which
# clang reads as one -include and two extra INPUT FILES. The symptom is
# "cannot specify -o when generating multiple output files", which says nothing
# about include handling at all.
target_compile_options(whitty_ppc PRIVATE
    "SHELL:-include ${CMAKE_CURRENT_SOURCE_DIR}/prelude/whitty_arm64_x86_prelude.h"
    "SHELL:-include ${WHITTY_PPC_DIR}/ppc_simde_shim.h"
    "SHELL:-include ${WHITTY_RUNTIME_DIR}/tools/ppc_mmio_hooks.h"
    # -O1, exactly as the desktop build uses. At -O0 the recompiled CPU is slow
    # enough to change the timing of everything, and at -O2 these units get very
    # expensive to compile for no measured gain.
    -O1)
set_target_properties(whitty_ppc PROPERTIES CXX_STANDARD 20)

# ---------------------------------------------------------------------------
# The harness, the bridge and the dispatch table: per-title, because all three
# compile against this title's generated ppc_config.h.
set(WHITTY_HARNESS_SOURCES
    "${WHITTY_RUNTIME_DIR}/tools/ppc_bridge.cpp"
    "${WHITTY_RUNTIME_DIR}/tools/ppc_function_table.cpp"
    "${WHITTY_RUNTIME_DIR}/tools/run_title.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/android_audio.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/android_display.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/android_input.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/android_host.cpp")

function(whitty_configure_harness target)
    target_include_directories(${target} BEFORE PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/prelude"
        "${WHITTY_PPC_DIR}"
        "${WHITTY_RUNTIME_DIR}/tools"
        "${WHITTY_RUNTIME_DIR}/include"
        "${CMAKE_CURRENT_SOURCE_DIR}/src"
        "${WHITTY_SIMDE_DIR}")
    target_compile_options(${target} PRIVATE
        "SHELL:-include ${CMAKE_CURRENT_SOURCE_DIR}/prelude/whitty_arm64_x86_prelude.h"
        "SHELL:-include ${WHITTY_PPC_DIR}/ppc_simde_shim.h"
        "SHELL:-include ${WHITTY_RUNTIME_DIR}/tools/ppc_mmio_hooks.h"
        -O1)
    # WHITTY_HAVE_VULKAN, and deliberately not WHITTY_HAVE_SDL: there is no SDL
    # here, so the harness takes its own no-window path. That path did not
    # compile on any platform until this milestone - see the m_wav and
    # read_gamepad notes in run_title.cpp.
    target_compile_definitions(${target} PRIVATE WHITTY_HAVE_VULKAN WHITTY_ANDROID)
    target_link_libraries(${target} PRIVATE
        whitty_xenon_gpu_vulkan whitty_xenon_core whitty_ppc)
    set_target_properties(${target} PROPERTIES CXX_STANDARD 20)
    # 16 KiB max page size on every output. Google Play requires a 64-bit
    # binary to be loadable on a 16 KiB-page kernel, and this flag is the whole
    # of that requirement for the ELF itself. It does NOT make the runtime work
    # on such a kernel - see guest_memory::initialize, where the console's
    # physical-window layout is shown to be unrepresentable at that page size -
    # but it does mean the failure is our own message rather than the loader's.
    target_link_options(${target} PRIVATE -Wl,-z,max-page-size=16384)
endfunction()

# The platform libraries, named separately from the flags above so the static
# qemu variant below can leave every one of them out - none has a static form.
set(WHITTY_PLATFORM_LIBS Vulkan::Vulkan android log aaudio)

# The executable. `main` stays `main`.
add_executable(whitty_${WHITTY_TITLE} ${WHITTY_HARNESS_SOURCES})
whitty_configure_harness(whitty_${WHITTY_TITLE})
target_link_libraries(whitty_${WHITTY_TITLE} PRIVATE ${WHITTY_PLATFORM_LIBS})

# The shared library an Activity loads. Same sources, with the harness's `main`
# renamed so android_main can call it on a thread of its own.
# The NDK's glue is C, and it is in a target of its own so the harness's C++
# force-includes do not land on it - a .c file given -include <cstdint> fails to
# find a header that is not there for it.
add_library(whitty_app_glue STATIC
    "${ANDROID_NDK}/sources/android/native_app_glue/android_native_app_glue.c")
target_include_directories(whitty_app_glue PUBLIC
    "${ANDROID_NDK}/sources/android/native_app_glue")
target_link_libraries(whitty_app_glue PUBLIC android log)

add_library(whittyxenon SHARED
    ${WHITTY_HARNESS_SOURCES}
    "${CMAKE_CURRENT_SOURCE_DIR}/src/android_activity.cpp")
whitty_configure_harness(whittyxenon)
target_link_libraries(whittyxenon PRIVATE whitty_app_glue ${WHITTY_PLATFORM_LIBS})
target_compile_definitions(whittyxenon PRIVATE main=whitty_title_main)
# NativeActivity looks up ANativeActivity_onCreate by name, and the glue's
# definition is only reachable if the linker is told not to drop it.
target_link_options(whittyxenon PRIVATE -u ANativeActivity_onCreate)

# ---------------------------------------------------------------------------
# A statically linked variant, for qemu-user.
#
# qemu-aarch64-static cannot run a dynamically linked Android binary at all -
# there is no /system/bin/linker64 on this machine - and it cannot run a GPU
# driver either. Both are solved the same way: link everything statically
# against bionic and give it a Vulkan that refuses, so the runtime takes its own
# documented headless path.
#
# What this proves and what it does not. It proves the aarch64 code is CORRECT:
# the recompiled CPU's NEON lowering, the memory model, the threading and the
# syscall surface all run for as long as you leave it. It says NOTHING about
# speed - qemu's interpretation penalty is 10-30x and swamps everything - and it
# does not exercise bionic's real allocator, ART, or any Vulkan driver. Treat a
# clean qemu run as "this will not fall over on a phone", never as a frame rate.
option(WHITTY_QEMU_STATIC "Also build a static binary for qemu-user" OFF)
if(WHITTY_QEMU_STATIC)
    add_library(whitty_platform_stub STATIC
        "${CMAKE_CURRENT_SOURCE_DIR}/src/vulkan_stub.c"
        "${CMAKE_CURRENT_SOURCE_DIR}/src/log_stub.c")
    # Without android_audio.cpp: AAudio has no static library either, and a
    # headless qemu run has nothing to play to. Without the window and the pad
    # for the same reason - both call into libandroid - and window_stub.cpp
    # answers for them: there is no window, which is the truth here.
    set(WHITTY_STATIC_SOURCES ${WHITTY_HARNESS_SOURCES})
    list(REMOVE_ITEM WHITTY_STATIC_SOURCES
         "${CMAKE_CURRENT_SOURCE_DIR}/src/android_audio.cpp"
         "${CMAKE_CURRENT_SOURCE_DIR}/src/android_display.cpp"
         "${CMAKE_CURRENT_SOURCE_DIR}/src/android_input.cpp")
    list(APPEND WHITTY_STATIC_SOURCES
         "${CMAKE_CURRENT_SOURCE_DIR}/src/window_stub.cpp")
    add_executable(whitty_${WHITTY_TITLE}_static ${WHITTY_STATIC_SOURCES})
    whitty_configure_harness(whitty_${WHITTY_TITLE}_static)
    # The archives by PATH, not by target name. whitty_xenon_gpu_vulkan links
    # Vulkan::Vulkan publicly, and a static link that inherits that usage
    # requirement drags in libvulkan.so - "attempted static link of dynamic
    # object", which reads like a toolchain problem and is a dependency one.
    set_target_properties(whitty_${WHITTY_TITLE}_static PROPERTIES
        LINK_LIBRARIES "")
    target_link_options(whitty_${WHITTY_TITLE}_static PRIVATE -static)
    target_link_libraries(whitty_${WHITTY_TITLE}_static PRIVATE
        $<TARGET_FILE:whitty_xenon_gpu_vulkan>
        $<TARGET_FILE:whitty_xenon_core>
        $<TARGET_FILE:whitty_ppc>
        whitty_platform_stub)
    add_dependencies(whitty_${WHITTY_TITLE}_static
        whitty_xenon_gpu_vulkan whitty_xenon_core whitty_ppc)
endif()
