// android_activity.cpp - the harness, started by tapping an icon.
//
// This is the APK's entry point, and unlike the `adb shell` executable beside
// it, it has a window. That is the whole difference between the two and it is
// the reason both exist: the executable prints a report to a terminal and
// answers a throughput question with nothing rendered, and this one shows the
// game.
//
// What it does:
//
//   * finds the app's own directories, which is the only thing native code
//     cannot work out for itself;
//   * points the harness's environment at them, and reads whitty.env for
//     anything else, since a tapped icon has no command line;
//   * sends stdout to logcat, since a NativeActivity has no terminal;
//   * WAITS FOR THE WINDOW, hands it to the display module, and only then
//     synthesises the argv main() expects and calls it, on a thread of its own
//     so the Activity's own looper keeps answering;
//   * feeds the looper's input events to the pad mapping.
//
// The order matters. vulkan_backend creates its instance with the surface's
// extensions and creates the surface during initialize(), which the harness
// calls on the first frame that has anything in it - so the window has to exist
// before the title starts, not merely before it draws. Starting the title first
// and hoping is how a run ends up headless with a window nobody rendered into.
#include "whitty_android.h"

#include <android/configuration.h>
#include <android/log.h>
#include <android_native_app_glue.h>

#include <cstdlib>
#include <cstring>
#include <pthread.h>
#include <string>
#include <sys/stat.h>
#include <vector>

namespace {

constexpr const char* kTag = "whitty_xenon";

std::string g_xex;
std::string g_game;
bool g_have_title = false;
bool g_started = false;

// Where the title's data was put. `adb push`ed into the app's external files
// directory, which needs no permission and no MANAGE_EXTERNAL_STORAGE:
//
//   adb push extracted/. /sdcard/Android/data/<package>/files/game/
//
// A directory holding default.xex is the ordinary case; a single STFS package
// file also works, because file_system::mount_package reads one directly and
// the harness accepts it as its only argument.
bool locate_title(const char* external) {
    if (const char* named = std::getenv("WHITTY_GAME")) {
        g_game = named;
    } else if (external != nullptr && external[0] != 0) {
        g_game = std::string(external) + "/game";
    } else {
        return false;
    }
    struct stat info {};
    if (::stat(g_game.c_str(), &info) != 0) {
        __android_log_print(ANDROID_LOG_ERROR, kTag,
                            "no title data at %s - push the extracted game "
                            "directory there first",
                            g_game.c_str());
        return false;
    }
    // A file is a package and is passed alone; a directory needs its executable
    // named beside it, exactly as on the desktop.
    if (!S_ISDIR(info.st_mode)) {
        g_xex.clear();
        return true;
    }
    g_xex = g_game + "/default.xex";
    if (::stat(g_xex.c_str(), &info) != 0) {
        __android_log_print(ANDROID_LOG_ERROR, kTag, "no default.xex in %s",
                            g_game.c_str());
        return false;
    }
    return true;
}

void* run_title(void*) {
    std::vector<char*> argv;
    argv.push_back(const_cast<char*>("whitty_xenon"));
    if (g_xex.empty()) {
        argv.push_back(g_game.data());
    } else {
        argv.push_back(g_xex.data());
        argv.push_back(g_game.data());
    }
    __android_log_print(ANDROID_LOG_INFO, kTag, "starting %s", argv[1]);
    const int status =
        whitty_title_main(static_cast<int>(argv.size()), argv.data());
    __android_log_print(ANDROID_LOG_INFO, kTag, "title exited with %d", status);
    whitty_android_audio_stop();
    return nullptr;
}

void start_title_once() {
    if (!g_have_title || g_started) return;
    g_started = true;
    pthread_t thread;
    if (pthread_create(&thread, nullptr, run_title, nullptr) == 0)
        pthread_detach(thread);
}

void on_app_cmd(struct android_app* app, int32_t cmd) {
    switch (cmd) {
    case APP_CMD_INIT_WINDOW:
        if (app->window != nullptr) {
            whitty_android_set_window(app->window);
            start_title_once();
        }
        break;
    case APP_CMD_TERM_WINDOW:
        // The app was backgrounded or is finishing. This runs BEFORE the glue
        // lets Android proceed with destroying the window, and
        // release_window() blocks until any present in flight has finished -
        // so the driver never sees a present against a window that is gone.
        //
        // It also asks the run to stop, which is what closing a desktop window
        // does: the harness's window watchdog prints the report and exits, so
        // the run's numbers still reach logcat. Resuming a title into a
        // recreated surface is a different piece of work - the swapchain
        // rebuild is already there, but the guest's own state is not something
        // this milestone claims to suspend.
        whitty_android_release_window();
        break;
    default:
        break;
    }
}

int32_t on_input(struct android_app*, AInputEvent* event) {
    return whitty_android_input_event(event);
}

} // namespace

void android_main(struct android_app* app) {
    whitty_android_capture_output();
    whitty_android_prepare_environment(app->activity->internalDataPath,
                                       app->activity->externalDataPath);
    // A tapped icon has no command line and a NativeActivity's intent extras
    // are only reachable through JNI, so this file is how the harness's
    // twenty-eight variables are set on this path:
    //
    //   adb shell 'echo WHITTY_FPS=0 > \
    //     /sdcard/Android/data/com.whittyxenon.player/files/whitty.env'
    //
    // Read before every default below, and defaults never overwrite, so
    // anything named there wins.
    if (const char* external = app->activity->externalDataPath) {
        const std::string env = std::string(external) + "/whitty.env";
        whitty_android_read_env_file(env.c_str());
    }
    // Windowed, which is what this entry point is FOR. It makes the harness
    // render every frame rather than one, pace the title at 60, and present -
    // and it deliberately sets no capture and no run limit, because those two
    // end the run and a person holding the device wants it to keep going. A
    // capture from the app is still available by naming WHITTY_GPU_DUMP,
    // WHITTY_FRAME_PPM and WHITTY_EXIT_AFTER_DUMP in whitty.env; the `adb
    // shell` executable is the better place for it.
    ::setenv("WHITTY_WINDOW", "1", 0);
    // And sound, which the `adb shell` build leaves off because a capture has
    // nothing to listen to. A person holding the device does. Music is silent
    // either way - FFmpeg is not cross-compiled, so there is no XMA decoder -
    // and the effects are PCM and play. WHITTY_ANDROID_AUDIO=0 in whitty.env
    // turns it back off.
    ::setenv("WHITTY_ANDROID_AUDIO", "1", 0);
    whitty_android_audio_start();

    app->onAppCmd = on_app_cmd;
    app->onInputEvent = on_input;

    // The panel's density, for a margin asked for in centimetres. Taken from
    // the Activity's own configuration because nothing below the JNI boundary
    // can see it, and taken once because it does not change under this app -
    // the manifest pins the orientation.
    if (AConfiguration* config = AConfiguration_new()) {
        AConfiguration_fromAssetManager(config, app->activity->assetManager);
        const int32_t density = AConfiguration_getDensity(config);
        // ANY and NONE are "the system declines to say", not a number.
        if (density != ACONFIGURATION_DENSITY_ANY &&
            density != ACONFIGURATION_DENSITY_NONE && density > 0)
            whitty_android_set_display_density(density);
        AConfiguration_delete(config);
    }
    g_have_title = locate_title(app->activity->externalDataPath);
    if (!g_have_title) {
        // The looper is still pumped below, so the Activity does not become an
        // ANR while the message is read out of logcat.
        __android_log_print(ANDROID_LOG_ERROR, kTag,
                            "nothing to run; idling so the log can be read");
    }

    // The Activity's own loop. It pumps the window's commands and the input
    // queue; the title runs on the thread APP_CMD_INIT_WINDOW starts. There is
    // nothing to do here but keep answering, which is the whole job.
    for (;;) {
        int events = 0;
        struct android_poll_source* source = nullptr;
        while (ALooper_pollOnce(-1, nullptr, &events,
                                reinterpret_cast<void**>(&source)) >= 0) {
            if (source != nullptr) source->process(app, source);
            if (app->destroyRequested != 0) {
                whitty_android_release_window();
                whitty_android_audio_stop();
                return;
            }
        }
    }
}
