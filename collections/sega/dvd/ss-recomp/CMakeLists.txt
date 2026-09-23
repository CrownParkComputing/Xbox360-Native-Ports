# splitsecond - ReXGlue Recompiled Project
#
# SDK boilerplate lives in generated/rexglue.cmake.

cmake_minimum_required(VERSION 3.25)
project(splitsecond LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(generated/rexglue.cmake)

# Sources
set(SPLITSECOND_SOURCES
    src/main.cpp
)

if(ANDROID)
    # SDLActivity loads "libmain.so" from the APK, so the title is a shared
    # library on Android rather than an executable. The output name is what
    # the Java side dlopens; the CMake target keeps the project's own name.
    add_library(splitsecond SHARED ${SPLITSECOND_SOURCES})
    set_target_properties(splitsecond PROPERTIES OUTPUT_NAME main)
elseif(WIN32)
    add_executable(splitsecond WIN32 ${SPLITSECOND_SOURCES})
else()
    add_executable(splitsecond ${SPLITSECOND_SOURCES})
endif()

rexglue_setup_target(splitsecond)

# Host overrides linked into the recompiled DLL modules. Strong definitions
# here replace the weak aliases in generated code, so fixes survive re-codegen
# (see src/skipper_stubs.cpp).
if(TARGET splitsecond_SKIPPER)
    target_sources(splitsecond_SKIPPER PRIVATE src/skipper_stubs.cpp)
endif()
if(TARGET splitsecond_SPLITSECOND1)
    target_sources(splitsecond_SPLITSECOND1 PRIVATE src/rendering_overrides.cpp)
endif()
