#pragma once

#include <cstdint>
#include <memory>

#include <rex/input/input.h>
#include <rex/input/input_system.h>

namespace hydrothunder::native {

struct InputState {
  uint16_t buttons = 0;
  uint8_t left_trigger = 0;
  uint8_t right_trigger = 0;
  int16_t left_x = 0;
  int16_t left_y = 0;
  int16_t right_x = 0;
  int16_t right_y = 0;
};

void SetInputState(const InputState& state);
InputState GetInputState();
std::unique_ptr<rex::input::InputSystem> CreateNativeInputSystem(bool tool_mode);

}  // namespace hydrothunder::native

extern "C" {

void hydro_native_set_input(uint16_t buttons, uint8_t left_trigger,
                            uint8_t right_trigger, int16_t left_x,
                            int16_t left_y, int16_t right_x, int16_t right_y);

}
