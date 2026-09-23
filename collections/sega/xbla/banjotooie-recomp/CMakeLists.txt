# banjotooie - ReXGlue Recompiled Project
#
# SDK boilerplate lives in generated/rexglue.cmake.

cmake_minimum_required(VERSION 3.25)
project(banjotooie LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(generated/rexglue.cmake)

# Sources
set(BANJOTOOIE_SOURCES
    src/main.cpp
)

if(ANDROID)
    # SDLActivity loads "libmain.so" from the APK, so the title is a shared
    # library on Android rather than an executable.
    add_library(banjotooie SHARED ${BANJOTOOIE_SOURCES})
    set_target_properties(banjotooie PROPERTIES OUTPUT_NAME main)
elseif(WIN32)
    add_executable(banjotooie WIN32 ${BANJOTOOIE_SOURCES})
else()
    add_executable(banjotooie ${BANJOTOOIE_SOURCES})
endif()

rexglue_setup_target(banjotooie)
