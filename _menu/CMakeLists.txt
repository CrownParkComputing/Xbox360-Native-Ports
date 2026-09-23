# rexmenu - the raylib-direct start menu for a recompiled port.
#
# One binary, title-agnostic: it is told the port root and reads the port's own
# facts (name, manifest slug, content checksums, importer). Rendered entirely
# with raylib - window, menus, file browser, import log and the retro_touch_pad
# on-screen controller. No zenity, no ImGui, no second UI layer.
cmake_minimum_required(VERSION 3.25)
project(rexmenu LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# raylib: built once from ~/raylib-src into build-linux (the same rule rayview
# uses). 6.0, static, no examples.
set(RAYLIB_SRC "$ENV{HOME}/raylib-src" CACHE PATH "raylib source checkout")
add_library(raylib STATIC IMPORTED)
set_target_properties(raylib PROPERTIES
  IMPORTED_LOCATION "${RAYLIB_SRC}/build-linux/raylib/libraylib.a"
  INTERFACE_INCLUDE_DIRECTORIES "${RAYLIB_SRC}/src")

add_executable(rexmenu
  src/main.cpp
  src/touch_pad.cpp)
target_include_directories(rexmenu PRIVATE src)
# The same link set rayview needs: raylib's Linux deps, named explicitly
# because the archive is imported rather than found.
target_link_libraries(rexmenu PRIVATE raylib m pthread dl rt GL X11 Xrandr
  Xinerama Xi Xcursor Xext)
target_compile_options(rexmenu PRIVATE -Wall -Wextra)
