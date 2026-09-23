# rez - ReXGlue Recompiled Project
#
# SDK boilerplate lives in generated/rexglue.cmake.

cmake_minimum_required(VERSION 3.25)
project(rez LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(generated/rexglue.cmake)

# Sources
set(REZ_SOURCES
    src/main.cpp
)

if(ANDROID)
    # SDLActivity loads "libmain.so" from the APK, so the title is a shared
    # library on Android rather than an executable.
    add_library(rez SHARED ${REZ_SOURCES})
    set_target_properties(rez PROPERTIES OUTPUT_NAME main)
elseif(WIN32)
    add_executable(rez WIN32 ${REZ_SOURCES})
else()
    add_executable(rez ${REZ_SOURCES})
endif()

rexglue_setup_target(rez)
