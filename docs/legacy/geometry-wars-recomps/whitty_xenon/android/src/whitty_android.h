// whitty_android.h - the small Android-only surface, in one place.
//
// Everything Android-specific in this port is here and in the three files
// beside it. That is deliberate and it is also the measured truth: the runtime
// core, the GPU command processor, the shader translator, the texture decoders
// and the APU all cross-compile for arm64-v8a out of the stock CMakeLists with
// no source changes at all.
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

// Opens the AAudio output and registers it as the runtime's audio device, if
// WHITTY_ANDROID_AUDIO=1. Safe to call twice.
void whitty_android_audio_start(void);
void whitty_android_audio_stop(void);

// Everything the harness reads out of the environment, set up for a phone:
// where the profile goes, where the pipeline cache goes, and stdout redirected
// into logcat. `files` is the app's own private directory (getFilesDir()) or a
// writable directory on the shell path; null leaves the environment alone.
//
// Called before main(). It never OVERWRITES a variable that is already set, so
// a value passed on the command line, or by `adb shell env`, always wins - the
// point of a default is to be a default.
void whitty_android_prepare_environment(const char* files, const char* external);

// Sends stdout and stderr to logcat, so the harness's own report - which is
// where the frame rate, the reservation and the draw counts are - reaches
// `adb logcat` from a process with no terminal. Harmless and skipped when the
// process already has one, which is the `adb shell` case.
void whitty_android_capture_output(void);

// Applies `KEY=VALUE` lines from `path` as DEFAULTS, in the same
// never-overwrite sense as everything else here. The APK has no command line -
// a NativeActivity is started by a tap, and its intent extras are only
// reachable through JNI - so this file is the only way to hand the harness any
// of its twenty-eight variables without a rebuild. Blank lines and lines
// starting with '#' are skipped. Missing file: nothing happens.
void whitty_android_read_env_file(const char* path);

// --- the window ------------------------------------------------------------
//
// A NativeActivity owns an ANativeWindow, and that is the ONLY thing this port
// needs from Android in order to show a picture: vulkan_backend takes its
// surface from a std::function the host supplies, so the whole of src/gpu is
// untouched by there being a screen.
//
// The window arrives and leaves on the Activity's own thread while the title
// renders on another, so these are all guarded. `release_window` blocks until
// any present in flight has finished, which is what makes it safe for the
// Activity to let Android destroy the window immediately afterwards.
void whitty_android_set_window(void* native_window);
void whitty_android_release_window(void);

// Held around a present, so the Activity's thread cannot pull the window out
// from under one. Coarse on purpose: a present is a blit and a queue submit,
// and taking the lock costs nothing beside them.
void whitty_android_present_lock(void);
void whitty_android_present_unlock(void);
int whitty_android_window_alive(void);

// Set when the window went away - the app was backgrounded, or the Activity is
// finishing. The harness's own window watchdog reads it and ends the run the
// same way closing a desktop window does, so the report still reaches logcat.
void whitty_android_request_quit(void);
int whitty_android_quit_requested(void);

// One input event from the Activity's queue. Returns 1 when it was consumed.
// Declared with an opaque AInputEvent so this header pulls in no Android input
// headers for the files that do not need them.
struct AInputEvent;
int whitty_android_input_event(struct AInputEvent* event);

#ifdef __cplusplus
}

#include <cstdint>
#include <functional>
#include <string>
#include <vector>

namespace whitty_xenon {
struct gamepad_state;
}

// What the harness needs in order to ask vulkan_backend for a swapchain: the
// two instance extensions an Android surface is created from, the factory that
// creates it, and the window's size for the one case where the surface declines
// to state its own extent. False when there is no window - which is the
// `adb shell` executable's ordinary state, and is why the same binary serves
// both entry points.
bool whitty_android_display(std::vector<std::string>& instance_extensions,
                            std::function<bool(void*, void**)>& create_surface,
                            uint32_t& width, uint32_t& height);

// The panel's density in dots per inch, for a margin asked for in real units.
// Zero when the Activity has not reported one yet.
//
// This is Android's own DENSITY BUCKET, not a measurement: this device reports
// 360 where its panel measures 319, so a centimetre derived from it is about a
// tenth of a centimetre out. Good enough to keep a picture off the bezel, and
// WHITTY_BORDER_PX overrides it where somebody has used a ruler.
int32_t whitty_android_display_density(void);

// Told to the above by the Activity, which is the only thing that can see the
// configuration the window was created under.
void whitty_android_set_display_density(int32_t dpi);

// The device's physical controls, as the console's own gamepad. False for a
// port with nothing on it; port 0 is the handheld itself and is always
// connected, because the buttons are part of the machine.
bool whitty_android_read_gamepad(uint32_t user, whitty_xenon::gamepad_state& out);

// The harness's main(), renamed by -Dmain=whitty_title_main when this is built
// as a shared library so the Activity can call it.
//
// Outside the extern "C" block above, deliberately: the rename happens to a C++
// definition, so the symbol carries C++ linkage. Declaring it extern "C" here
// compiles and then fails to link, naming a symbol nothing defines.
int whitty_title_main(int argc, char** argv);
#endif
