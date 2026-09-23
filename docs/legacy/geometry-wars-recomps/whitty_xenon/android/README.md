# whitty_xenon on Android (arm64)

Geometry Wars: Retro Evolved, on a phone.

**Milestone 1 is done and proven on a Retroid Pocket Flip2** (Snapdragon 865,
Adreno 650): the 4 GiB reservation succeeds, 144 of 144 kernel imports resolve,
the geometry stage is present, and frame 100 came back over `adb` as a clean
Bizarre Creations splash. That run was headless by design and showed nothing on
the handheld.

**Milestone 2 is the picture on the screen.** The APK now creates a real Vulkan
surface from its `ANativeWindow`, renders every frame, presents at 60, and reads
the machine's own buttons. Nothing under `src/gpu` changed to make that happen —
see `android/src/android_display.cpp` for why that was the whole of it.

Nothing here downloads anything. The NDK, SIMDe, the Vulkan headers, the SDK
build tools and the debug keystore are all already on this machine.

## Build

```
cd projects/whitty_xenon
TITLE=geometrywars ./android/build.sh
```

Three artefacts land in `build-android/out`:

| | what it is |
|---|---|
| `whitty_geometrywars` | a PIE executable to push and run over `adb shell`. **Run this first.** |
| `whitty-xenon.apk` | the same code as a tappable app, debug-signed |
| `whitty_geometrywars_static` | statically linked with a Vulkan that refuses, for `qemu-aarch64-static` on the desktop |

`TITLE=<name>` builds a different recompiled title; everything below is
title-agnostic.

## Run it — the executable

This is the one that answers the questions. It prints the harness's whole report
to your terminal, needs no install and no signing, and it can be re-run in a
second.

```sh
# 1. the game data (15 MB) and the binary
adb push ~/Downloads/xbla-recomp-suite/games/geometrywars/extracted /data/local/tmp/gw
adb push build-android/out/whitty_geometrywars /data/local/tmp/
adb shell chmod 755 /data/local/tmp/whitty_geometrywars

# 2. frame 100, captured, and stop
adb shell 'cd /data/local/tmp && \
  HOME=/data/local/tmp \
  XDG_CACHE_HOME=/data/local/tmp/cache \
  WHITTY_PROFILE=/data/local/tmp/profile.bin \
  WHITTY_GPU_DUMP=100 \
  WHITTY_FRAME_PPM=/data/local/tmp/frame100.ppm \
  WHITTY_EXIT_AFTER_DUMP=1 \
  WHITTY_RUN_SECONDS=120 \
  ./whitty_geometrywars gw/default.xex gw' 2>&1 | tee frame100.log

# 3. the picture
adb pull /data/local/tmp/frame100.ppm
```

And the frame rate, which is the number that matters most — a paced run of pure
CPU, kernel and GPU-command work with nothing rendered:

```sh
adb shell 'cd /data/local/tmp && HOME=/data/local/tmp \
  WHITTY_PROFILE=/data/local/tmp/profile.bin WHITTY_RUN_SECONDS=60 \
  ./whitty_geometrywars gw/default.xex gw' | tail -40
```

`frames presented (VdSwap): N` over 60 seconds is the guest frame rate. Leave
`WHITTY_FPS` unset for that: unset means *unlimited* headless, which is what a
throughput measurement wants. Set `WHITTY_FPS=60` to see whether it *holds* 60
rather than how fast it can go.

Continuous rendering, which is what a player would get:

```sh
adb shell 'cd /data/local/tmp && HOME=/data/local/tmp \
  XDG_CACHE_HOME=/data/local/tmp/cache \
  WHITTY_PROFILE=/data/local/tmp/profile.bin \
  WHITTY_RENDER_ALL=1 WHITTY_SUBMIT_PROFILE=1 WHITTY_RUN_SECONDS=60 \
  ./whitty_geometrywars gw/default.xex gw' | tail -40
```

Sound, if you want it (off by default — a capture has nothing to listen to):
add `WHITTY_ANDROID_AUDIO=1`.

## Run it — the app, which is the one with a picture in it

```sh
adb install -r build-android/out/whitty-xenon.apk
adb shell mkdir -p /sdcard/Android/data/com.whittyxenon.player/files/game
adb push ~/Downloads/xbla-recomp-suite/games/geometrywars/extracted/. \
         /sdcard/Android/data/com.whittyxenon.player/files/game/
adb logcat -c
adb shell am start -n com.whittyxenon.player/android.app.NativeActivity
adb logcat -s whitty_xenon
```

The Activity waits for its window, hands it to the backend as a `VkSurfaceKHR`,
and then renders and presents **every** frame at 60 — no capture, no run limit,
because a person holding the device wants it to keep going. The log says how the
picture is being shown:

```
  [gpu] surface 1920x1080 for a 1280x720 frame (resampled to 1920x1080)
```

That line is the one to read, and it is the same layout a fullscreen desktop run
goes through. `present_panes.h`'s rule: a **reduction** is always by a whole
number, because a shrinking blit throws detail away; a **magnification** prefers
a whole number and takes the letterbox when the whole factor would leave more
than a quarter of the screen empty. The Flip2's panel is 1920x1080, which is
*bigger* than the title — 1:1 would fill two thirds of the width, so the layout
fills the screen at 1.5x rather than leaving a 3.7-inch picture in the middle of
a 5.5-inch display. Change it, for both platforms at once, at the three-quarter
comparison in `fit_frame_in_pane`.

### Controls

The handheld's own buttons, mapped to the console's pad: face buttons, both
shoulders, both triggers (as buttons or as axes, whichever the device sends),
both sticks, the d-pad as keys or as a hat, Start and Select. Port 0 is reported
connected before anything is pressed, because the buttons are part of the
machine.

**BACK is deliberately not consumed** — it is the way out of a fullscreen
activity that has no navigation bar.

A button that does nothing prints its code, once:

```
  [input] unmapped key 108 from source 0x501 - say which button this is ...
```

Say which physical button that was and it is one line in
`android/src/android_input.cpp`. **Touch is not implemented**, on purpose: a
twin-stick shooter with a bad virtual stick is worse than one with no stick at
all, and that is a design job with the device in hand rather than a mapping.

### Settings, with no command line

A tapped icon has no argv and a NativeActivity's intent extras are only reachable
through JNI, so the app reads `whitty.env` beside the game:

```sh
adb shell 'printf "WHITTY_FPS=0\nWHITTY_BORDER=0\n" > \
  /sdcard/Android/data/com.whittyxenon.player/files/whitty.env'
```

One `KEY=VALUE` per line, `#` comments, and every one is a **default**, so it
never overrides something already in the environment. All twenty-eight harness
variables work there, including a capture from the app:

```
WHITTY_GPU_DUMP=100
WHITTY_FRAME_PPM=/sdcard/Android/data/com.whittyxenon.player/files/frame100.ppm
WHITTY_EXIT_AFTER_DUMP=1
```

Sound is **on** in the app, and off in the `adb shell` build, which has nothing
to listen to. `WHITTY_ANDROID_AUDIO=0` turns it off.

### What backgrounding does

It ends the run. `APP_CMD_TERM_WINDOW` releases the window and asks the harness
to stop, exactly as closing a desktop window does, so the end-of-run report still
reaches logcat. Suspending the guest and resuming into a recreated surface is a
different piece of work: the swapchain rebuild is already there, and handles a
rotation; the guest's own state is not.

## What the log answers

The first lines settle the two questions that could have killed this:

```
  host pages are 4096 bytes; reserving 4.0 GiB of guest address space
  guest address space reserved at 0x...
```

**If the page size is 16384 the runtime stops, on purpose, and says why.** The
console maps the same physical memory three times and starts the 4 KiB window
`0x1000` into it — see `guest_memory::initialize`. All three windows sit at
guest addresses that are congruent modulo any page size of 8 KiB or more, and
`mmap` requires the address and the file offset to be aligned alike, so the
0x1000 skew has no expression at a 16 KiB page size. That is arithmetic, not a
missing feature. No shipping Pixel boots 16 KiB by default today (it is a
wipe-gated developer toggle), so this should not be hit — but if it is, that is
the reason, and the fix is a change to how the 0xE0000000 window is *reached*,
not a rounding.

Then the GPU says what it is, from the driver rather than from a table:

```
  [gpu] <device>, Vulkan x.y.z, driver N
  [gpu] geometryShader yes, textureCompressionBC no, samplerAnisotropy yes
  [gpu] maxPerStageDescriptorSampledImages 32, maxUniformBufferRange 65536
  [gpu] pipeline cache: /data/local/tmp/cache/whitty_xenon/pipeline_cache_....bin, 0 byte(s) seeded
```

`geometryShader` is the interesting one. Published reports say all four target
devices have it, which would mean the geometry stage that completes a Xenos
rectangle list works unchanged — but that is somebody's table and this is the
hardware. **Run it twice.** The second run's `pipeline cache: ... N byte(s)
seeded` with N non-zero is the persistent cache working; on Android there is no
driver-side pipeline blob cache at all, so without it every launch rebuilds
every pipeline, which on Geometry Wars' cold frame is 52 of 63 ms.

Then the frame report:

```
  3 rectangle list draw(s) completed (3 by the geometry stage, 0 on the CPU)
  frames rendered: N in Ts (X fps)
  frames presented (VdSwap): N
```

The rectangle line says which path ran. Force the CPU one with
`WHITTY_CPU_RECTANGLES=1` — on this desktop both paths produce Geometry Wars
frame 100 byte for byte (`7302da28097539870858be91b82386f4`), so a difference on
the device is a device fact, not an expansion bug.

## Things to expect, so they are not mistaken for faults

* **Music is silent.** FFmpeg is not cross-compiled, so the XMA decoder is
  absent. Sound effects are PCM and do play.
* **`WHITTY_FPS` unset means unlimited**, which drives the title several times
  too fast. Any timing-sensitive observation from a bare run is
  unrepresentative.
* **A guest fault prints no host backtrace** below API 33: bionic grew
  `<execinfo.h>` only then. The address and whether the page was committed still
  print, and `llvm-addr2line -Cfe build-android/whitty_geometrywars <offset>`
  against the *unstripped* binary in the build tree turns an offset into a name.
* **big.LITTLE.** Nothing here pins a thread to a core. A guest thread scheduled
  onto a little core roughly halves the frame rate, and it looks exactly like an
  emulation bug. If the number is bad, run it twice before believing it.
* **A sideways picture is a swapchain setting, not the renderer.** This device's
  panel is natively 1080x1920 and the whole system runs at ROTATION_90, so its
  Vulkan surface reports a rotated `currentTransform`. `preTransform` says what
  the *application already did*, and this one does nothing — it blits the frame
  the same way up whatever the surface says — so identity is requested and the
  compositor is left to rotate. When the surface is not upright the swapchain
  prints what it saw:

  ```
    [gpu] surface transform 0x4 (supported 0xF), presenting with 0x1 into 1920x1080
  ```

  This is the one thing in the port that could not be checked without the device
  in hand. **If the picture is on its side, that line is the whole diagnosis** —
  the transform, what the surface would have accepted, what was asked for, and
  the extent it built. It is set in `build_swapchain` in
  `src/gpu/vulkan/vulkan_backend.cpp`; on a desktop, where `currentTransform` is
  always identity, the choice makes no difference at all and the line never
  prints.

## The qemu check, on the desktop

```
qemu-aarch64-static build-android/whitty_geometrywars_static \
    <game>/default.xex <game>
```

This exercises the instruction semantics of the recompiled CPU, the memory
model, the threading and the syscall surface — most of what a first device run
would tell you about *correctness*. It says nothing at all about speed: qemu's
interpretation penalty is 10–30x and swamps everything.

## What is Android-specific

Six files, `android/src/`, and seven small `#ifdef WHITTY_ANDROID` hunks in
`tools/run_title.cpp`. Everything else — the kernel, the memory model, the STFS
reader, the GPU command processor, the shader translator, the texture decoders,
the APU and **the whole Vulkan backend**, 24,000 lines — cross-compiles for
arm64-v8a out of the stock `CMakeLists.txt` with no source changes and no
Android branch.

| file | what it is |
|---|---|
| `android_host.cpp` | `$HOME`/XDG paths for an app, `whitty.env`, and stdout into logcat |
| `android_audio.cpp` | AAudio, with the 5.1 fold done here rather than by the driver |
| `android_display.cpp` | the `ANativeWindow` as a `VkSurfaceKHR`, and its lifetime |
| `android_input.cpp` | the machine's own buttons as the console's pad |
| `android_activity.cpp` | `android_main`: find the data, wait for the window, call `main` |
| `vulkan_stub.c`, `log_stub.c`, `window_stub.cpp` | for the static qemu build only |

The reason the display file is 140 lines rather than a port is worth stating:
`vulkan_backend::display_config` already takes its surface as a
`std::function<bool(void*, void**)>` and its instance extensions as a list of
strings, so a host supplies a window without the GPU stack ever depending on a
windowing library. The Android side of "put it on the screen" is
`vkCreateAndroidSurfaceKHR` and two extension names.

plus `android/prelude/`, which is the aarch64 replacement for the x86
intrinsics XenonRecomp's output names directly.
