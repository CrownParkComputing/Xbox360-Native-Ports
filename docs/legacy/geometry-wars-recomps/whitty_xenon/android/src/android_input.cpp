// android_input.cpp - the handheld's own buttons, as the console's gamepad.
//
// The runtime already abstracts input: the kernel asks a std::function for a
// gamepad_state and XamInputGetState packs whatever it gets into the structure
// the title reads. So there is no Android input path to design, only an Android
// source to write - this file fills a gamepad_state and nothing else knows
// where it came from.
//
// Events arrive on the Activity's looper thread and are read by the title's own
// threads at the title's own rate, so the state is taken under a lock exactly
// as the SDL harness takes its snapshot. That is not caution about Android; it
// is the same race on any host.
//
// TOUCH IS NOT HERE. Geometry Wars is a twin-stick shooter and a bad virtual
// stick is worse than no stick - that is a design job with a device in hand,
// not a mapping. This file is for the physical controls a handheld already has.
//
// An unmapped key is LOGGED, once, with its code and its source. Which physical
// button reports what is a fact about the device, not about Android, and the
// only way to learn it is to press it and read the log.
#include "whitty_android.h"

#include "whitty_xenon/input.h"

#include <android/input.h>
#include <android/keycodes.h>
#include <android/log.h>

#include <mutex>
#include <set>

namespace {

constexpr const char* kTag = "whitty_xenon";

std::mutex g_mutex;
whitty_xenon::gamepad_state g_pad;
// Which keycodes have already been reported as unmapped, so pressing an unknown
// button fills the log with one line rather than one per frame it is held.
std::set<int32_t> g_reported;
// Which input devices have been seen, so the log names the hardware once.
std::set<int32_t> g_devices;

// A key's button bit, or 0 if this port does not carry it.
uint16_t button_for_key(int32_t key) {
    using namespace whitty_xenon::pad_button;
    switch (key) {
    case AKEYCODE_BUTTON_A: return a;
    case AKEYCODE_BUTTON_B: return b;
    case AKEYCODE_BUTTON_X: return x;
    case AKEYCODE_BUTTON_Y: return y;
    case AKEYCODE_BUTTON_L1: return left_shoulder;
    case AKEYCODE_BUTTON_R1: return right_shoulder;
    case AKEYCODE_BUTTON_THUMBL: return left_thumb;
    case AKEYCODE_BUTTON_THUMBR: return right_thumb;
    // MENU as well as BUTTON_START: several handhelds route their start button
    // through the system's menu key rather than through the gamepad one.
    case AKEYCODE_BUTTON_START:
    case AKEYCODE_MENU: return start;
    case AKEYCODE_BUTTON_SELECT: return back;
    case AKEYCODE_BUTTON_MODE: return guide;
    case AKEYCODE_DPAD_UP: return dpad_up;
    case AKEYCODE_DPAD_DOWN: return dpad_down;
    case AKEYCODE_DPAD_LEFT: return dpad_left;
    case AKEYCODE_DPAD_RIGHT: return dpad_right;
    default: return 0;
    }
}

// A float axis in -1..1 to the console's signed 16-bit stick range.
int16_t stick(float value) {
    if (value > 1.0f) value = 1.0f;
    if (value < -1.0f) value = -1.0f;
    const float scaled = value * 32767.0f;
    return static_cast<int16_t>(scaled < 0.0f ? scaled - 0.5f : scaled + 0.5f);
}

// A trigger in 0..1 to the console's 0..255.
uint8_t trigger(float value) {
    if (value > 1.0f) value = 1.0f;
    if (value < 0.0f) value = 0.0f;
    return static_cast<uint8_t>(value * 255.0f + 0.5f);
}

// Whether an event came from something being held rather than from the system.
bool from_a_pad(int32_t source) {
    return (source & AINPUT_SOURCE_GAMEPAD) == AINPUT_SOURCE_GAMEPAD ||
           (source & AINPUT_SOURCE_JOYSTICK) == AINPUT_SOURCE_JOYSTICK ||
           (source & AINPUT_SOURCE_DPAD) == AINPUT_SOURCE_DPAD;
}

void note_device(const AInputEvent* event) {
    const int32_t id = AInputEvent_getDeviceId(event);
    if (g_devices.count(id) != 0) return;
    g_devices.insert(id);
    __android_log_print(ANDROID_LOG_INFO, kTag,
                        "  [input] device %d, source 0x%x", id,
                        AInputEvent_getSource(event));
}

int handle_key(AInputEvent* event) {
    const int32_t action = AKeyEvent_getAction(event);
    if (action != AKEY_EVENT_ACTION_DOWN && action != AKEY_EVENT_ACTION_UP)
        return 0;
    const int32_t key = AKeyEvent_getKeyCode(event);
    const bool down = action == AKEY_EVENT_ACTION_DOWN;

    // The shoulder triggers, where the device reports them as buttons rather
    // than as axes. A device that reports both sends the axis too, and the
    // larger of the two is what the title sees - which is the right answer
    // either way round.
    if (key == AKEYCODE_BUTTON_L2 || key == AKEYCODE_BUTTON_R2) {
        const std::lock_guard<std::mutex> lock(g_mutex);
        if (key == AKEYCODE_BUTTON_L2)
            g_pad.left_trigger = down ? 255 : 0;
        else
            g_pad.right_trigger = down ? 255 : 0;
        return 1;
    }

    const uint16_t bit = button_for_key(key);
    if (bit == 0) {
        // BACK is deliberately NOT consumed. It is the only way out of a
        // fullscreen NativeActivity with no navigation bar, and a game that
        // swallowed it would have to be killed from a cable.
        if (key != AKEYCODE_BACK && down && g_reported.count(key) == 0) {
            g_reported.insert(key);
            __android_log_print(ANDROID_LOG_INFO, kTag,
                                "  [input] unmapped key %d from source 0x%x - "
                                "say which button this is and it can be mapped",
                                key, AInputEvent_getSource(event));
        }
        return 0;
    }
    const std::lock_guard<std::mutex> lock(g_mutex);
    if (down)
        g_pad.buttons |= bit;
    else
        g_pad.buttons = static_cast<uint16_t>(g_pad.buttons & ~bit);
    return 1;
}

int handle_motion(AInputEvent* event) {
    // Only a stick or a trigger. A finger on the screen is a MOTION event too,
    // and there is nothing here for it to mean.
    if (!from_a_pad(AInputEvent_getSource(event))) return 0;

    const auto axis = [event](int32_t which) {
        return AMotionEvent_getAxisValue(event, which, 0);
    };
    const std::lock_guard<std::mutex> lock(g_mutex);
    g_pad.thumb_lx = stick(axis(AMOTION_EVENT_AXIS_X));
    // The console points +Y UP and every host backend points it down. The
    // conversion lives in input.h so it is tested without a controller
    // attached, which is the only way it ever gets tested at all.
    g_pad.thumb_ly =
        whitty_xenon::stick_y_from_axis(stick(axis(AMOTION_EVENT_AXIS_Y)));
    g_pad.thumb_rx = stick(axis(AMOTION_EVENT_AXIS_Z));
    g_pad.thumb_ry =
        whitty_xenon::stick_y_from_axis(stick(axis(AMOTION_EVENT_AXIS_RZ)));

    // Two names for each trigger, because devices disagree about which they
    // report - LTRIGGER/RTRIGGER on a gamepad profile, BRAKE/GAS on one that
    // presents itself as a wheel. The larger wins, so a device sending only one
    // of the pair is read correctly and one sending both is not halved.
    const float left = axis(AMOTION_EVENT_AXIS_LTRIGGER) >
                               axis(AMOTION_EVENT_AXIS_BRAKE)
                           ? axis(AMOTION_EVENT_AXIS_LTRIGGER)
                           : axis(AMOTION_EVENT_AXIS_BRAKE);
    const float right = axis(AMOTION_EVENT_AXIS_RTRIGGER) >
                                axis(AMOTION_EVENT_AXIS_GAS)
                            ? axis(AMOTION_EVENT_AXIS_RTRIGGER)
                            : axis(AMOTION_EVENT_AXIS_GAS);
    if (left > 0.0f) g_pad.left_trigger = trigger(left);
    if (right > 0.0f) g_pad.right_trigger = trigger(right);

    // The d-pad, where the device reports it as a hat rather than as four keys.
    // Written only when the hat moves off centre in that direction, so a device
    // that sends d-pad KEYS and a centred hat does not have them cleared again
    // on the next stick sample.
    using namespace whitty_xenon::pad_button;
    const float hat_x = axis(AMOTION_EVENT_AXIS_HAT_X);
    const float hat_y = axis(AMOTION_EVENT_AXIS_HAT_Y);
    const auto hat = [&](float value, uint16_t low, uint16_t high) {
        if (value < -0.5f) {
            g_pad.buttons |= low;
            g_pad.buttons = static_cast<uint16_t>(g_pad.buttons & ~high);
        } else if (value > 0.5f) {
            g_pad.buttons |= high;
            g_pad.buttons = static_cast<uint16_t>(g_pad.buttons & ~low);
        } else {
            g_pad.buttons =
                static_cast<uint16_t>(g_pad.buttons & ~(low | high));
        }
    };
    if (hat_x != 0.0f || hat_y != 0.0f ||
        (g_pad.buttons & (dpad_left | dpad_right | dpad_up | dpad_down)) != 0) {
        hat(hat_x, dpad_left, dpad_right);
        hat(hat_y, dpad_up, dpad_down);
    }
    return 1;
}

} // namespace

int whitty_android_input_event(struct AInputEvent* event) {
    AInputEvent* input = event; // the same opaque struct the header declares
    if (input == nullptr) return 0;
    note_device(input);
    switch (AInputEvent_getType(input)) {
    case AINPUT_EVENT_TYPE_KEY: return handle_key(input);
    case AINPUT_EVENT_TYPE_MOTION: return handle_motion(input);
    default: return 0;
    }
}

bool whitty_android_read_gamepad(uint32_t user,
                                 whitty_xenon::gamepad_state& out) {
    // Port 0 is the handheld. The buttons are part of the machine, so it is
    // connected whether or not anything has been pressed yet - and saying
    // otherwise is the failure this runtime keeps finding elsewhere: an answer
    // about US rather than about the hardware. Geometry Wars polls all four
    // ports, and Jetpac quits silently if every one says DEVICE_NOT_CONNECTED.
    if (user != 0) return false;
    const std::lock_guard<std::mutex> lock(g_mutex);
    out = g_pad;
    out.connected = true;
    return true;
}
