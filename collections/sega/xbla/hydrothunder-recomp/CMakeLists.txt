# hydrothunder - ReXGlue Recompiled Project
#
# SDK boilerplate lives in generated/rexglue.cmake.

cmake_minimum_required(VERSION 3.25)
project(hydrothunder LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(generated/rexglue.cmake)

# Sources
set(HYDROTHUNDER_SOURCES
    src/main.cpp
    src/native_input.cpp
    src/native_frame_sink.cpp
)

if(ANDROID)
    # SDLActivity loads "libmain.so" from the APK, so the title is a shared
    # library on Android rather than an executable.
    add_library(hydrothunder SHARED ${HYDROTHUNDER_SOURCES})
    set_target_properties(hydrothunder PROPERTIES OUTPUT_NAME main)
elseif(WIN32)
    add_executable(hydrothunder WIN32 ${HYDROTHUNDER_SOURCES})
else()
    add_executable(hydrothunder ${HYDROTHUNDER_SOURCES})
endif()

rexglue_setup_target(hydrothunder)
