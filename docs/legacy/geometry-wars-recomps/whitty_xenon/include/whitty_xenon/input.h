// input.h - the controller, as the title sees it.
//
// A title asks for input through XamInputGetState, which fills an XInput
// gamepad structure. The kernel cannot read a real controller - that belongs to
// whatever is hosting the runtime, along with the window - so the host installs
// a provider and the handler asks it.
//
// The structure the title reads is big-endian and packed, and the button bits
// are the standard XInput ones. Both are transcribed rather than invented: a
// wrong bit means a button that does something else, which reads as a broken
// game rather than a wrong constant.
#pragma once

#include <cstdint>
#include <functional>

namespace whitty_xenon {

// Button bits, from Xenia's X_INPUT_GAMEPAD_BUTTON.
namespace pad_button {
inline constexpr uint16_t dpad_up = 0x0001;
inline constexpr uint16_t dpad_down = 0x0002;
inline constexpr uint16_t dpad_left = 0x0004;
inline constexpr uint16_t dpad_right = 0x0008;
inline constexpr uint16_t start = 0x0010;
inline constexpr uint16_t back = 0x0020;
inline constexpr uint16_t left_thumb = 0x0040;
inline constexpr uint16_t right_thumb = 0x0080;
inline constexpr uint16_t left_shoulder = 0x0100;
inline constexpr uint16_t right_shoulder = 0x0200;
inline constexpr uint16_t guide = 0x0400;
inline constexpr uint16_t a = 0x1000;
inline constexpr uint16_t b = 0x2000;
inline constexpr uint16_t x = 0x4000;
inline constexpr uint16_t y = 0x8000;
} // namespace pad_button

// One controller's state, in the console's own units: triggers 0..255 and
// thumbsticks -32768..32767 with +Y up.
struct gamepad_state {
    bool connected{false};
    uint16_t buttons{0};
    uint8_t left_trigger{0};
    uint8_t right_trigger{0};
    int16_t thumb_lx{0};
    int16_t thumb_ly{0};
    int16_t thumb_rx{0};
    int16_t thumb_ry{0};
};

// --- host axis conversions -------------------------------------------------
//
// These are the two places a host controller's values differ from the
// console's, and both are silent when wrong: a trigger that reads as garbage
// still looks like a number, and an inverted stick still moves. They live here
// rather than in the harness so they can be tested without a controller
// attached, which is the only way they ever get tested at all.

// A trigger as a host backend reports it, over the full signed range, to the
// console's unsigned byte.
uint8_t trigger_from_axis(int16_t axis) noexcept;

// A stick's vertical axis. Host backends point +Y DOWN; the console points it
// UP, so this negates - taking care that negating the most negative value does
// not overflow back to itself, which would leave full-down reading as full-up.
int16_t stick_y_from_axis(int16_t axis) noexcept;

// Asked for the state of controller `user`. Returning false means no
// controller is attached to that port, which is a different answer from an
// attached controller holding nothing.
using input_provider = std::function<bool(uint32_t user, gamepad_state& out)>;

// Sizes of the structures the title reads. X_INPUT_STATE is a packet number
// followed by the 12-byte gamepad; capabilities add a type, subtype and flags
// in front and a vibration pair behind.
inline constexpr uint32_t kInputGamepadSize = 12;
inline constexpr uint32_t kInputStateStructSize = 4 + kInputGamepadSize;
inline constexpr uint32_t kInputCapabilitiesStructSize =
    4 + kInputGamepadSize + 4;

// Device type and subtype for a wired controller.
inline constexpr uint8_t kInputDeviceTypeGamepad = 0x01;
inline constexpr uint8_t kInputDeviceSubtypeGamepad = 0x01;

} // namespace whitty_xenon
