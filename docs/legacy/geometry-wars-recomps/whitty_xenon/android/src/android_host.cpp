// android_host.cpp - the environment a phone gives the harness.
//
// The harness is configured entirely through the environment - 28 variables -
// and reads and writes ordinary paths. Neither of those needs changing for
// Android; what needs supplying is the paths themselves, because an app has no
// $HOME, no /tmp and no working directory it may write to. This sets the four
// that matter and does nothing else.
//
// The rule throughout: never overwrite something already set. `adb shell env
// WHITTY_FPS=60 ...` and the Activity's own defaults have to compose, and a
// default that wins over an explicit value is not a default.
#include "whitty_android.h"

#include <android/log.h>
#include <pthread.h>
#include <sys/stat.h>
#include <unistd.h>

#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>

namespace {

constexpr const char* kTag = "whitty_xenon";

void set_default(const char* name, const std::string& value) {
    ::setenv(name, value.c_str(), /*overwrite=*/0);
}

// One pipe end read on a thread of its own, line by line, into logcat.
void* pump(void* argument) {
    const int fd = static_cast<int>(reinterpret_cast<intptr_t>(argument));
    std::string line;
    char buffer[512];
    for (;;) {
        const ssize_t got = ::read(fd, buffer, sizeof(buffer));
        if (got <= 0) break;
        for (ssize_t i = 0; i < got; ++i) {
            if (buffer[i] == '\n') {
                __android_log_write(ANDROID_LOG_INFO, kTag, line.c_str());
                line.clear();
            } else if (line.size() < 4000) {
                line.push_back(buffer[i]);
            }
        }
    }
    if (!line.empty()) __android_log_write(ANDROID_LOG_INFO, kTag, line.c_str());
    return nullptr;
}

} // namespace

void whitty_android_prepare_environment(const char* files,
                                        const char* external) {
    if (files == nullptr || files[0] == 0) return;
    const std::string home = files;
    // $HOME and $XDG_* are what the runtime already uses to find the profile
    // and the pipeline cache. Pointing them at the app's own directory needs no
    // Android branch anywhere else in the tree, which is the whole reason to do
    // it this way rather than adding one.
    set_default("HOME", home);
    set_default("XDG_DATA_HOME", home + "/data");
    set_default("XDG_CACHE_HOME", home + "/cache");
    set_default("TMPDIR", home + "/tmp");
    // The profile - achievements, high scores, saves - is one file keyed by
    // title id. Named explicitly so it does not depend on the XDG lookup
    // order.
    set_default("WHITTY_PROFILE", home + "/data/whitty_xenon/profile.bin");
    if (external != nullptr && external[0] != 0) {
        // Where a capture goes. getExternalFilesDir() is app-private, needs no
        // permission and survives an uninstall long enough to be pulled, which
        // is what `adb pull` wants.
        set_default("WHITTY_ANDROID_EXTERNAL", external);
    }
    ::mkdir((home + "/data").c_str(), 0700);
    ::mkdir((home + "/cache").c_str(), 0700);
    ::mkdir((home + "/tmp").c_str(), 0700);
    ::mkdir((home + "/data/whitty_xenon").c_str(), 0700);
}

void whitty_android_read_env_file(const char* path) {
    if (path == nullptr) return;
    std::FILE* file = std::fopen(path, "r");
    if (file == nullptr) return;
    char line[512];
    unsigned applied = 0;
    while (std::fgets(line, sizeof(line), file) != nullptr) {
        // Trim both ends: a file written with `echo` ends in a newline, and a
        // value with a trailing space is a value nothing matches.
        char* text = line;
        while (*text == ' ' || *text == '\t') ++text;
        std::size_t length = std::strlen(text);
        while (length != 0 && (text[length - 1] == '\n' ||
                               text[length - 1] == '\r' ||
                               text[length - 1] == ' ' ||
                               text[length - 1] == '\t'))
            text[--length] = 0;
        if (length == 0 || text[0] == '#') continue;
        char* equals = std::strchr(text, '=');
        if (equals == nullptr) continue;
        *equals = 0;
        // A default, like everything else here: a variable already in the
        // environment - set by `adb shell env` on the executable path - wins.
        ::setenv(text, equals + 1, /*overwrite=*/0);
        ++applied;
    }
    std::fclose(file);
    __android_log_print(ANDROID_LOG_INFO, kTag, "%u setting(s) from %s", applied,
                        path);
}

void whitty_android_capture_output(void) {
    // A process launched from `adb shell` already has a terminal, and its
    // output is the thing being read - redirecting it into logcat would take it
    // away. isatty is the exact question.
    if (::isatty(STDOUT_FILENO)) return;
    static bool done = false;
    if (done) return;
    done = true;
    int fds[2];
    if (::pipe(fds) != 0) return;
    ::dup2(fds[1], STDOUT_FILENO);
    ::dup2(fds[1], STDERR_FILENO);
    ::close(fds[1]);
    // Line-buffered, so a report line reaches logcat when it is written rather
    // than when a 4 KiB buffer fills - which for a run that ends at frame 100
    // is the difference between a log and nothing.
    ::setvbuf(stdout, nullptr, _IOLBF, 0);
    ::setvbuf(stderr, nullptr, _IONBF, 0);
    pthread_t thread;
    if (pthread_create(&thread, nullptr, pump,
                       reinterpret_cast<void*>(static_cast<intptr_t>(fds[0]))) == 0)
        pthread_detach(thread);
}
