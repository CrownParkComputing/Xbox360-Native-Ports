// window_stub.cpp - the no-window answers, for the static qemu build only.
//
// android_display.cpp calls into libandroid and libvulkan and android_input.cpp
// into libandroid, and neither has a static form - which is the same reason
// vulkan_stub.c exists. The qemu build has no window and no driver by
// construction, so the honest implementation of every one of these is "there is
// no window", and saying it here keeps the two real files free of a
// build-configuration #ifdef.
#include "whitty_android.h"

void whitty_android_set_window(void*) {}
void whitty_android_release_window(void) {}
void whitty_android_present_lock(void) {}
void whitty_android_present_unlock(void) {}
int whitty_android_window_alive(void) { return 0; }
void whitty_android_request_quit(void) {}
int whitty_android_quit_requested(void) { return 0; }
int whitty_android_input_event(struct AInputEvent*) { return 0; }

bool whitty_android_display(std::vector<std::string>&,
                            std::function<bool(void*, void**)>&, uint32_t&,
                            uint32_t&) {
    return false;
}

bool whitty_android_read_gamepad(uint32_t, whitty_xenon::gamepad_state&) {
    return false;
}
