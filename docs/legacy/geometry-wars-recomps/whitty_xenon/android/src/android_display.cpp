// android_display.cpp - the screen.
//
// This is the whole of "put it on the handheld's display", and it is small for
// a reason that was measured before it was written: vulkan_backend does no
// windowing of its own. It asks the host for two things - the instance
// extensions its windowing needs, and a callback that turns the created
// VkInstance into a VkSurfaceKHR - and everything after that is ordinary
// Vulkan. So an Android surface is vkCreateAndroidSurfaceKHR plus
// VK_KHR_android_surface, and NOTHING under src/gpu changes: not the swapchain,
// not the present blit, not the letterbox arithmetic, not the border.
//
// How the frame is fitted to the panel is NOT decided here, and that is the
// point. The backend's present() lays the finished frame out with
// layout_present_panes / fit_frame_in_pane, the same arithmetic a fullscreen
// desktop run goes through, and its rule is: a REDUCTION is always by a whole
// number, because a blit that shrinks by a fraction throws away most of the
// detail; a MAGNIFICATION prefers a whole number and takes the letterbox when
// the whole factor would leave more than a quarter of the screen empty.
//
// Measured on the device this was written for: the Retroid Pocket Flip2's panel
// is 1920x1080, NOT smaller than the title. So a 1280x720 Geometry Wars frame
// magnifies - and 1:1 would fill 1280 of 1920, two thirds, which is under that
// three-quarter threshold, so the layout fills the screen at 1.5x instead of
// leaving a 3.7-inch picture in the middle of a 5.5-inch display. That is the
// desktop's own answer to the same size pair, arrived at by the same code, and
// it is a decision rather than an accident: the threshold is one comparison in
// present_panes.h's fit_frame_in_pane, and moving it changes both platforms.
//
// The one genuinely Android-shaped problem here is lifetime. The window is
// created and destroyed on the Activity's looper thread while the title renders
// on a thread of its own, and Android expects the window to be releasable as
// soon as APP_CMD_TERM_WINDOW has been handled. A present in flight against a
// released window is a use-after-free in the driver, so the two are serialised
// by one lock: presents take it, and releasing the window takes it too and
// therefore waits for the present to finish. Coarse, and it costs nothing -
// a present is a blit and a submit, and the Activity's thread is idle.
#include "whitty_android.h"

#define VK_USE_PLATFORM_ANDROID_KHR
#include <vulkan/vulkan.h>

#include <android/log.h>
#include <android/native_window.h>

#include <atomic>
#include <chrono>
#include <mutex>

namespace {

constexpr const char* kTag = "whitty_xenon";

// Guards the window pointer AND serialises it against presenting. One lock for
// both because they are the same question: may the render thread touch this
// window right now.
//
// TIMED, and that is not caution for its own sake. The present inside it can
// block in vkAcquireNextImageKHR - FIFO waits for the display - and the thread
// asking to release the window is the very thread Android needs an answer from
// before it will let the compositor move on. An untimed lock is therefore a
// deadlock with a plausible-looking call stack. The bound is generous compared
// with a frame and short compared with an ANR.
std::timed_mutex g_window_mutex;
ANativeWindow* g_window = nullptr;
std::atomic<bool> g_quit{false};

} // namespace

void whitty_android_set_window(void* native_window) {
    const std::lock_guard<std::timed_mutex> lock(g_window_mutex);
    g_window = static_cast<ANativeWindow*>(native_window);
    if (g_window == nullptr) return;
    // A reference of our own, never released. The Activity drops its reference
    // when the window is torn down, and the swapchain and any present already
    // recorded still name this object - so holding one turns "the driver is
    // reading freed memory" into "the driver is reading a window nobody is
    // showing", which is a failed present rather than a crash. The process
    // exits immediately afterwards, so nothing leaks that outlives it.
    ANativeWindow_acquire(g_window);
    __android_log_print(ANDROID_LOG_INFO, kTag, "window %dx%d",
                        ANativeWindow_getWidth(g_window),
                        ANativeWindow_getHeight(g_window));
}

void whitty_android_release_window(void) {
    // Taking the lock is the wait: a present that is running holds it, so this
    // returns only once nothing is using the window. Called from the Activity's
    // handler for APP_CMD_TERM_WINDOW, which runs BEFORE native_app_glue lets
    // Android proceed with destroying it.
    //
    // A present that has not finished within the bound is left to finish on its
    // own. It cannot fault - see the reference taken above - and holding the
    // Activity's thread any longer would be an ANR for the sake of a frame
    // nobody is going to see.
    const bool held = g_window_mutex.try_lock_for(std::chrono::seconds(1));
    g_window = nullptr;
    g_quit.store(true, std::memory_order_release);
    if (held) g_window_mutex.unlock();
}

void whitty_android_present_lock(void) { g_window_mutex.lock(); }
void whitty_android_present_unlock(void) { g_window_mutex.unlock(); }

int whitty_android_window_alive(void) { return g_window != nullptr ? 1 : 0; }

void whitty_android_request_quit(void) {
    g_quit.store(true, std::memory_order_release);
}

int whitty_android_quit_requested(void) {
    return g_quit.load(std::memory_order_acquire) ? 1 : 0;
}

// Recorded when the Activity hands the window over. Read from a different
// thread than it is written on, so it is atomic; a torn read of a density would
// be a torn margin.
std::atomic<int32_t> g_density{0};

void whitty_android_set_display_density(int32_t dpi) {
    g_density.store(dpi, std::memory_order_relaxed);
}

int32_t whitty_android_display_density(void) {
    return g_density.load(std::memory_order_relaxed);
}

bool whitty_android_display(std::vector<std::string>& instance_extensions,
                            std::function<bool(void*, void**)>& create_surface,
                            uint32_t& width, uint32_t& height) {
    ANativeWindow* window = nullptr;
    {
        const std::lock_guard<std::timed_mutex> lock(g_window_mutex);
        window = g_window;
    }
    // No window: the `adb shell` executable, which renders headless and is the
    // build that answers a throughput question. Saying so plainly here is why
    // one binary serves both.
    if (window == nullptr) return false;

    instance_extensions.push_back(VK_KHR_SURFACE_EXTENSION_NAME);
    instance_extensions.push_back(VK_KHR_ANDROID_SURFACE_EXTENSION_NAME);
    // Only read where the surface declines to state its own extent, which
    // Android never does - it always reports currentExtent. Supplied anyway,
    // because wrong-here would be as wrong as wrong-anywhere.
    const int32_t reported_width = ANativeWindow_getWidth(window);
    const int32_t reported_height = ANativeWindow_getHeight(window);
    if (reported_width > 0) width = static_cast<uint32_t>(reported_width);
    if (reported_height > 0) height = static_cast<uint32_t>(reported_height);

    create_surface = [](void* instance, void** out) {
        const std::lock_guard<std::timed_mutex> lock(g_window_mutex);
        if (g_window == nullptr) return false;
        VkAndroidSurfaceCreateInfoKHR info{
            VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR};
        info.window = g_window;
        VkSurfaceKHR surface = VK_NULL_HANDLE;
        if (vkCreateAndroidSurfaceKHR(static_cast<VkInstance>(instance), &info,
                                      nullptr, &surface) != VK_SUCCESS)
            return false;
        *out = surface;
        return true;
    };
    return true;
}
