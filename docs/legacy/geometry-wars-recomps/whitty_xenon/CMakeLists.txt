# whitty_xenon - a lean Xbox 360 runtime for statically recompiled titles.
#
# Produces a static core library plus tests. The C-ABI shared object that
# WhittyArcade loads is built on top of this core once the pieces below land.
cmake_minimum_required(VERSION 3.20)
project(whitty_xenon LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    set(CMAKE_BUILD_TYPE Release CACHE STRING "" FORCE)
endif()

find_package(Threads REQUIRED)

# The compressed-audio decoder. Optional, because FFmpeg is LGPL and this
# project has hand-rolled its other decoders (AES, LZX) rather than take that
# dependency. Building without it costs the title's music, not its ability to
# run - so the choice stays open.
option(WHITTY_USE_FFMPEG "Decode XMA audio with FFmpeg (LGPL)" ON)

# A CROSS BUILD HAS NO USABLE pkg-config, and that cost the Android ports their
# music: FFmpeg was switched off there because nothing looked for it, so every
# title storing its soundtrack as XMA - which is most of them - was silent on a
# handheld, and the fix people reached for was shipping decoded audio inside the
# APK. It does not need decoding. Point this at a prebuilt FFmpeg and the device
# decodes the player's own copy, which is both smaller and the right thing:
# nothing derived from the game is packaged at all.
#
# Only libavcodec and libavutil are wanted - see xma_decoder.cpp - and an FFmpeg
# configured with just the xma1, xma2 and wmapro decoders is about a megabyte
# for the pair.
set(WHITTY_FFMPEG_DIR "" CACHE PATH
    "A prebuilt FFmpeg (include/ and lib/) to use instead of pkg-config")

find_package(PkgConfig QUIET)
if(WHITTY_USE_FFMPEG AND WHITTY_FFMPEG_DIR)
    # NO_CMAKE_FIND_ROOT_PATH matters and is not boilerplate: an Android
    # toolchain sets CMAKE_FIND_ROOT_PATH_MODE_LIBRARY to ONLY, which re-roots
    # these PATHS inside the NDK sysroot and then reports the library missing
    # while naming the path it never looked in.
    find_library(WHITTY_AVCODEC avcodec PATHS "${WHITTY_FFMPEG_DIR}/lib"
                 NO_DEFAULT_PATH NO_CMAKE_FIND_ROOT_PATH REQUIRED)
    find_library(WHITTY_AVUTIL avutil PATHS "${WHITTY_FFMPEG_DIR}/lib"
                 NO_DEFAULT_PATH NO_CMAKE_FIND_ROOT_PATH REQUIRED)
    add_library(whitty_ffmpeg INTERFACE)
    target_include_directories(whitty_ffmpeg INTERFACE
                               "${WHITTY_FFMPEG_DIR}/include")
    target_link_libraries(whitty_ffmpeg INTERFACE
                          "${WHITTY_AVCODEC}" "${WHITTY_AVUTIL}")
    set(FFMPEG_FOUND TRUE)
    set(WHITTY_FFMPEG_TARGET whitty_ffmpeg)
elseif(WHITTY_USE_FFMPEG AND PkgConfig_FOUND)
    pkg_check_modules(FFMPEG IMPORTED_TARGET libavcodec libavutil)
    set(WHITTY_FFMPEG_TARGET PkgConfig::FFMPEG)
endif()

add_library(whitty_xenon_core STATIC
    src/memory.cpp
    src/xex.cpp
    src/xdbf.cpp
    src/aes.cpp
    src/image.cpp
    src/lzx.cpp
    src/imports.cpp
    src/kernel.cpp
    src/ppc_runtime.cpp
    src/pe.cpp
    src/heap.cpp
    src/ppc_helpers.cpp
    src/kernel_state.cpp
    src/kernel_handlers.cpp
    src/kernel_printf.cpp
    src/object_table.cpp
    src/file_system.cpp
    src/user_profile.cpp
    src/stfs.cpp
    src/gpu/pm4.cpp
    src/gpu/register_file.cpp
    src/gpu/draw.cpp
    src/gpu/shader.cpp
    src/gpu/alu.cpp
    src/gpu/fetch.cpp
    src/gpu/shader_program.cpp
    src/gpu/spirv_builder.cpp
    src/gpu/shader_translator.cpp
    src/gpu/command_processor.cpp
    src/gpu/render_target.cpp
    src/gpu/texture_tile.cpp
    src/gpu/vertex_format.cpp
    src/gpu/texture_format.cpp
    src/gpu/texture_read.cpp
    src/gpu/texture_cache.cpp
    src/gpu/primitive_conversion.cpp
    src/gpu/rectangle_expansion.cpp
    src/gpu/overlay.cpp
    src/gpu/text_panel.cpp
    src/gpu/cabinet.cpp
    src/gpu/spectrum.cpp
    src/system_ui.cpp
    src/input.cpp
    src/gpu/mmio.cpp
    src/gpu/ring_buffer.cpp
    src/mmio.cpp
    src/apu/xma.cpp
    src/apu/xma_decoder.cpp
    src/apu/xma_pcm_cache.cpp
    src/thread.cpp
    src/import_patcher.cpp
    src/thread_environment.cpp)
target_include_directories(whitty_xenon_core PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_compile_options(whitty_xenon_core PRIVATE -Wall -Wextra -Wpedantic)
target_link_libraries(whitty_xenon_core PUBLIC Threads::Threads)
if(FFMPEG_FOUND)
    target_link_libraries(whitty_xenon_core PUBLIC ${WHITTY_FFMPEG_TARGET})
    target_compile_definitions(whitty_xenon_core PUBLIC WHITTY_HAVE_FFMPEG)
    message(STATUS "XMA audio: FFmpeg present")
else()
    message(STATUS "XMA audio: no decoder (music will be silent)")
endif()
# Built into a shared library as well as the test binaries, so it must be PIC.
set_target_properties(whitty_xenon_core PROPERTIES POSITION_INDEPENDENT_CODE ON)

enable_testing()

# Tests are plain int main() with assert. Compiled -UNDEBUG so the assertions
# survive a Release build, matching the sibling native-renderer project.
function(whitty_xenon_test name)
    add_executable(${name} tests/${name}.cpp)
    target_link_libraries(${name} PRIVATE whitty_xenon_core)
    target_compile_options(${name} PRIVATE -Wall -Wextra -Wpedantic -UNDEBUG)
    add_test(NAME ${name} COMMAND ${name})
endfunction()

whitty_xenon_test(memory_test)
whitty_xenon_test(xex_test)
whitty_xenon_test(aes_test)
whitty_xenon_test(image_test)
whitty_xenon_test(lzx_test)
whitty_xenon_test(imports_test)
whitty_xenon_test(kernel_test)
whitty_xenon_test(ppc_runtime_test)
whitty_xenon_test(pe_test)
whitty_xenon_test(heap_test)
whitty_xenon_test(ppc_helpers_test)
whitty_xenon_test(ppc_vector_test)
whitty_xenon_test(host_function_test)
whitty_xenon_test(object_table_test)
whitty_xenon_test(file_system_test)
whitty_xenon_test(kernel_handlers_test)
whitty_xenon_test(pm4_test)
whitty_xenon_test(register_file_test)
whitty_xenon_test(draw_test)
whitty_xenon_test(shader_test)
whitty_xenon_test(alu_test)
whitty_xenon_test(fetch_test)
whitty_xenon_test(shader_program_test)
whitty_xenon_test(spirv_builder_test)
whitty_xenon_test(shader_translator_test)
whitty_xenon_test(command_processor_test)
whitty_xenon_test(render_target_test)
whitty_xenon_test(texture_tile_test)
whitty_xenon_test(texture_cache_test)
whitty_xenon_test(vertex_format_test)
whitty_xenon_test(texture_format_test)
whitty_xenon_test(texture_read_test)
whitty_xenon_test(primitive_conversion_test)
whitty_xenon_test(overlay_test)
whitty_xenon_test(real_shader_test)
whitty_xenon_test(kernel_video_test)
whitty_xenon_test(kernel_thread_test)
whitty_xenon_test(kernel_sync_test)
whitty_xenon_test(import_patcher_test)
whitty_xenon_test(kernel_module_test)
whitty_xenon_test(thread_environment_test)
whitty_xenon_test(kernel_xex_load_test)
whitty_xenon_test(kernel_xex_proc_test)
whitty_xenon_test(kernel_error_test)
whitty_xenon_test(kernel_string_test)
whitty_xenon_test(kernel_xam_test)
whitty_xenon_test(kernel_profile_test)
whitty_xenon_test(kernel_xmsg_test)
whitty_xenon_test(input_test)
whitty_xenon_test(kernel_services_test)
whitty_xenon_test(kernel_file_test)
whitty_xenon_test(mmio_test)
whitty_xenon_test(ring_buffer_test)
whitty_xenon_test(kernel_printf_test)
whitty_xenon_test(stfs_test)
whitty_xenon_test(kernel_xma_test)
whitty_xenon_test(audio_mix_test)
whitty_xenon_test(xma_registers_test)
whitty_xenon_test(xma_decoder_test)
whitty_xenon_test(xdbf_test)
whitty_xenon_test(kernel_achievement_test)
whitty_xenon_test(kernel_score_test)
whitty_xenon_test(text_panel_test)
whitty_xenon_test(present_panes_test)
whitty_xenon_test(cabinet_test)
whitty_xenon_test(spectrum_test)
whitty_xenon_test(system_ui_test)

# Command-line tools. Not tests, so they are not registered with ctest; they are
# built with the rest so a tool cannot quietly stop compiling.
add_executable(xdbf_dump tools/xdbf_dump.cpp)
target_link_libraries(xdbf_dump PRIVATE whitty_xenon_core)
target_compile_options(xdbf_dump PRIVATE -Wall -Wextra -Wpedantic)

add_executable(kernel_worklist tools/kernel_worklist.cpp)
target_link_libraries(kernel_worklist PRIVATE whitty_xenon_core)
target_compile_options(kernel_worklist PRIVATE -Wall -Wextra -Wpedantic)

# Step one and two of a new title's bring-up: extract and verify the XEX, then
# report the identity, layout and helper addresses its recompiler config needs.
# See docs/BRINGUP.md.
add_executable(title_probe tools/title_probe.cpp)
target_link_libraries(title_probe PRIVATE whitty_xenon_core)
target_compile_options(title_probe PRIVATE -Wall -Wextra -Wpedantic)

# Integration test over real retail containers. The paths are cache variables so
# a machine without the games still configures and builds; the test reports the
# titles it skipped rather than failing.
set(WHITTY_XEX_ALIENBREED "" CACHE FILEPATH "Alien Breed: Evolution default.xex")
set(WHITTY_XEX_GEOMETRYWARS "" CACHE FILEPATH "Geometry Wars default.xex")
set(WHITTY_XEX_SPACEGIRAFFE "" CACHE FILEPATH "Space Giraffe default.xex")
# Whole downloaded packages, as the console stores them - the container file
# inside <title id>/000D0000/, not an extracted directory.
set(WHITTY_PKG_ALIENBREED "" CACHE FILEPATH "Alien Breed: Evolution STFS package")
set(WHITTY_PKG_GEOMETRYWARS2 "" CACHE FILEPATH "Geometry Wars 2 STFS package")

foreach(real_test xex_real_files_test image_real_files_test stfs_real_files_test)
    whitty_xenon_test(${real_test})
    set_tests_properties(${real_test} PROPERTIES ENVIRONMENT
            "WHITTY_XEX_ALIENBREED=${WHITTY_XEX_ALIENBREED};WHITTY_XEX_GEOMETRYWARS=${WHITTY_XEX_GEOMETRYWARS};WHITTY_XEX_SPACEGIRAFFE=${WHITTY_XEX_SPACEGIRAFFE};WHITTY_PKG_ALIENBREED=${WHITTY_PKG_ALIENBREED};WHITTY_PKG_GEOMETRYWARS2=${WHITTY_PKG_GEOMETRYWARS2}")
endforeach()

# The Vulkan rendering backend. Optional: built only where Vulkan is present,
# since it is the one part that needs a real GPU. Its own warning flags are
# relaxed because Vulkan's struct-init idiom leaves fields zero-initialized.
find_package(Vulkan)
if(Vulkan_FOUND)
    add_library(whitty_xenon_gpu_vulkan STATIC
        src/gpu/vulkan/vulkan_backend.cpp
        src/gpu/vulkan/scene_renderer.cpp
        src/gpu/vulkan/frame_renderer.cpp)
    target_include_directories(whitty_xenon_gpu_vulkan PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include)
    target_link_libraries(whitty_xenon_gpu_vulkan
        PUBLIC whitty_xenon_core Vulkan::Vulkan)
    target_compile_options(whitty_xenon_gpu_vulkan PRIVATE
        -Wall -Wno-missing-field-initializers)
    set_target_properties(whitty_xenon_gpu_vulkan PROPERTIES
        POSITION_INDEPENDENT_CODE ON)

    add_executable(vulkan_backend_test tests/vulkan_backend_test.cpp)
    target_link_libraries(vulkan_backend_test PRIVATE whitty_xenon_gpu_vulkan)
    target_compile_options(vulkan_backend_test PRIVATE -Wall -UNDEBUG)
    add_test(NAME vulkan_backend_test COMMAND vulkan_backend_test)

    add_executable(scene_renderer_test tests/scene_renderer_test.cpp)
    target_link_libraries(scene_renderer_test PRIVATE whitty_xenon_gpu_vulkan)
    target_compile_options(scene_renderer_test PRIVATE -Wall -UNDEBUG)
    add_test(NAME scene_renderer_test COMMAND scene_renderer_test)

    add_executable(frame_renderer_test tests/frame_renderer_test.cpp)
    target_link_libraries(frame_renderer_test PRIVATE whitty_xenon_gpu_vulkan)
    target_compile_options(frame_renderer_test PRIVATE -Wall -UNDEBUG)
    add_test(NAME frame_renderer_test COMMAND frame_renderer_test)
else()
    message(STATUS "Vulkan not found; rendering backend skipped")
endif()

# The shared library WhittyArcade loads. Needs the host's ABI header; point
# WHITTY_ARCADE_INCLUDE_DIR at a WhittyArcade checkout to build it.
set(WHITTY_ARCADE_INCLUDE_DIR "" CACHE PATH "WhittyArcade include directory")
if(WHITTY_ARCADE_INCLUDE_DIR AND
   EXISTS "${WHITTY_ARCADE_INCLUDE_DIR}/xbox360_runtime_api.h")
    add_library(whitty_robotron_runtime SHARED src/runtime_abi.cpp)
    target_link_libraries(whitty_robotron_runtime PRIVATE whitty_xenon_core)
    target_include_directories(whitty_robotron_runtime PRIVATE
        ${WHITTY_ARCADE_INCLUDE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/src)
    target_compile_options(whitty_robotron_runtime PRIVATE
        -Wall -Wextra -Wpedantic)
    set_target_properties(whitty_robotron_runtime PROPERTIES PREFIX "lib")

    # The ABI test dlopens the built library exactly as the host does.
    add_executable(runtime_abi_test tests/runtime_abi_test.cpp)
    target_include_directories(runtime_abi_test PRIVATE
        ${WHITTY_ARCADE_INCLUDE_DIR})
    target_link_libraries(runtime_abi_test PRIVATE ${CMAKE_DL_LIBS})
    target_compile_options(runtime_abi_test PRIVATE
        -Wall -Wextra -Wpedantic -UNDEBUG)
    add_dependencies(runtime_abi_test whitty_robotron_runtime)
    add_test(NAME runtime_abi_test COMMAND runtime_abi_test
             $<TARGET_FILE:whitty_robotron_runtime>)
    set_tests_properties(runtime_abi_test PROPERTIES ENVIRONMENT
        "WHITTY_XEX_ALIENBREED=${WHITTY_XEX_ALIENBREED}")
else()
    message(STATUS "WhittyArcade ABI header not found; runtime library skipped")
endif()
