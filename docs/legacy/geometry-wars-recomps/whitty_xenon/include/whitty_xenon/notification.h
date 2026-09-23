// notification.h - how the system tells a title what changed.
//
// A title does not only poll for state; it also asks to be told when things
// change. It creates a listener with XamNotifyCreateListener and drains it with
// XNotifyGetNext, and the events it gets that way are how it learns a
// controller was plugged in or a profile signed in.
//
// This matters more than it looks: a title that never receives
// SystemInputDevicesChanged can poll XamInputGetState every frame, be handed
// perfectly good button data, and ignore all of it - because as far as it is
// concerned no controller has ever appeared. A listener that always answers
// "nothing queued" is indistinguishable from a console nobody has touched.
#pragma once

#include <cstdint>

namespace whitty_xenon {

// Notification ids, from Xenia's XNotificationID.
namespace notification_id {
inline constexpr uint32_t system_ui = 0x00000009;
inline constexpr uint32_t sign_in_changed = 0x0000000A;
inline constexpr uint32_t storage_devices_changed = 0x0000000B;
inline constexpr uint32_t profile_setting_changed = 0x0000000E;
inline constexpr uint32_t mute_list_changed = 0x00000011;
inline constexpr uint32_t input_devices_changed = 0x00000012;
inline constexpr uint32_t input_device_config_changed = 0x00010013;
// The music player's: a title is told when playback control or the shuffle /
// repeat behaviour changes, so it can update what it shows and whether it
// keeps playing its own soundtrack.
inline constexpr uint32_t xmp_playback_behavior_changed = 0x0A000002;
inline constexpr uint32_t xmp_playback_controller_changed = 0x0A000003;
} // namespace notification_id

// One queued event. `data` is the id's payload - for the sign-in and input
// notifications it is a bitmask of which of the four ports it applies to.
struct notification {
    uint32_t id{0};
    uint32_t data{0};
};

} // namespace whitty_xenon
