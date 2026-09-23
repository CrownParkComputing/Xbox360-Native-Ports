# Android and direct-GPU audit

The game runtime and launcher have different readiness levels.

ReXGlue already contains an Android native-window Vulkan presenter, Android
filesystem/content-URI support, SDL Android window integration and arm64 build
outputs for many ports. raylib also supports Android, but its Android backend
uses OpenGL ES rather than the desktop OpenGL 3.3 API used by `rexmenu`.

The current embedded desktop path is not Android-compatible. It depends on
Gamescope headless, X11, POSIX shared memory, a Unix `SOCK_SEQPACKET` channel,
desktop `GL_EXT_memory_object_fd` / `GL_EXT_semaphore_fd`, and desktop DSA calls
such as `glCreateTextures`. Android raylib targets GLES2, and support for those
desktop entry points cannot be assumed on phone drivers.

## Recommended Android architecture

1. Package the selected ReXGlue title and launcher UI in one Android app.
2. Use raylib/GLES for launcher screens and Android input handling.
3. When Play starts, release or hide the raylib surface and give the Android
   `ANativeWindow` directly to ReXGlue's Vulkan presenter. This is the fastest
   path: one Vulkan swapchain, no compositor, readback or cross-API copy.
4. Return to the raylib launcher surface when the title exits. Persist saves
   in app storage and import game data through Android's Storage Access
   Framework.
5. If an overlaid raylib UI during play is mandatory, implement an Android
   interop path based on `AHardwareBuffer` / EGL images and native-fence sync,
   with per-device capability checks and a copied-frame fallback. Do not carry
   the desktop opaque-FD protocol across unchanged.

## Readiness classes

- **APK exists:** Banjo-Kazooie, Banjo-Tooie, Geometry Wars 1/2/3, Hydro
  Thunder Hurricane, Rez HD and SoulCalibur II HD Online.
- **arm64 native library exists, packaging required:** MCLA, Daytona, OutRun,
  After Burner Climax, Burnout Revenge, Ridge Racer Unbounded, Space Giraffe
  and Split/Second.
- **Android project not yet present:** Alien Breed, Crazy Taxi, PGR4,
  SoulCalibur IV, SEGA Bass Fishing and SEGA Rally Online Arcade.

An existing APK or `.so` proves compilation only. Each title still needs an
arm64 device run covering Vulkan feature support, controller/touch input,
audio, storage permissions, suspend/resume, memory pressure and thermal frame
pacing.
