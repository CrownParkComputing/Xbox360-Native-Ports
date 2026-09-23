# burnoutrevenge - ReXGlue Recompiled Project
#
# SDK boilerplate lives in generated/rexglue.cmake.

cmake_minimum_required(VERSION 3.25)
project(burnoutrevenge LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(generated/rexglue.cmake)

# Sources
set(BURNOUTREVENGE_SOURCES
    src/main.cpp
)

if(ANDROID)
    # SDLActivity loads "libmain.so" from the APK, so the title is a shared
    # library on Android rather than an executable. The output name is what
    # the Java side dlopens; the CMake target keeps the project's own name.
    add_library(burnoutrevenge SHARED ${BURNOUTREVENGE_SOURCES})
    set_target_properties(burnoutrevenge PROPERTIES OUTPUT_NAME main)
elseif(WIN32)
    add_executable(burnoutrevenge WIN32 ${BURNOUTREVENGE_SOURCES})
else()
    add_executable(burnoutrevenge ${BURNOUTREVENGE_SOURCES})
endif()

rexglue_setup_target(burnoutrevenge)

if(WIN32 AND MINGW)
    # The runtime's entry point is wWinMain; MinGW links it only with -municode.
    target_link_options(burnoutrevenge PRIVATE -municode)
endif()

# Native replacements for kernel imports (see src/native_kernel.cpp).
target_sources(burnoutrevenge PRIVATE src/native_kernel.cpp)
