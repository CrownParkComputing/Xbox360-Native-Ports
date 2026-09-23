#include "whitty_xenon/input.h"

namespace whitty_xenon {

uint8_t trigger_from_axis(int16_t axis) noexcept {
    // A resting trigger can report at or below zero depending on the backend;
    // either way the console's floor is 0. Above that, the host's 15-bit pull
    // maps onto the console's 8 bits.
    if (axis <= 0) return 0;
    return static_cast<uint8_t>(axis >> 7);
}

int16_t stick_y_from_axis(int16_t axis) noexcept {
    // -32768 has no positive counterpart in an int16: negating it overflows
    // straight back to -32768, so a fully pushed stick would read as fully
    // pushed the other way. Clamp it to the largest value that does exist.
    if (axis == -32768) return 32767;
    return static_cast<int16_t>(-axis);
}

} // namespace whitty_xenon
