#include "native_input.h"

#include <mutex>

#include <SDL3/SDL.h>
#include <rex/input/input_driver.h>
#include <rex/input/input_system.h>

namespace {
std::mutex g_input_mutex;
hydrothunder::native::InputState g_input_state;
}

namespace hydrothunder::native {

using rex::X_RESULT;
using rex::X_STATUS;

void SetInputState(const InputState& state) {
  std::lock_guard lock(g_input_mutex);
  g_input_state = state;
}

InputState GetInputState() {
  std::lock_guard lock(g_input_mutex);
  return g_input_state;
}

}  // namespace hydrothunder::native

extern "C" void hydro_native_set_input(
    uint16_t buttons, uint8_t left_trigger, uint8_t right_trigger,
    int16_t left_x, int16_t left_y, int16_t right_x, int16_t right_y) {
  hydrothunder::native::SetInputState({
      buttons, left_trigger, right_trigger, left_x, left_y, right_x, right_y});
}

namespace hydrothunder::native {

class NativeInputDriver final : public rex::input::InputDriver {
 public:
  NativeInputDriver() : InputDriver(nullptr, 0) {}

  X_STATUS Setup() override { return X_STATUS_SUCCESS; }

  void EnumerateDevices(std::vector<rex::input::DeviceInfo>& out) override {
    out.push_back({rex::input::DeviceId(1), 0, "Hydro Native Pad",
                   "hydro-native-pad", true});
  }

  rex::X_RESULT GetDeviceState(rex::input::DeviceId id,
                          rex::input::X_INPUT_STATE* out_state) override {
    if (id != rex::input::DeviceId(1) || !out_state) {
      return X_ERROR_BAD_ARGUMENTS;
    }
    PollKeyboard();
    const InputState state = GetInputState();
    out_state->packet_number = packet_number_;
    out_state->gamepad.buttons = state.buttons;
    out_state->gamepad.left_trigger = state.left_trigger;
    out_state->gamepad.right_trigger = state.right_trigger;
    out_state->gamepad.thumb_lx = state.left_x;
    out_state->gamepad.thumb_ly = state.left_y;
    out_state->gamepad.thumb_rx = state.right_x;
    out_state->gamepad.thumb_ry = state.right_y;
    ++packet_number_;
    return X_ERROR_SUCCESS;
  }

  rex::X_RESULT GetDeviceCapabilities(
      rex::input::DeviceId id, uint32_t,
      rex::input::X_INPUT_CAPABILITIES* out_caps) override {
    if (id != rex::input::DeviceId(1) || !out_caps) {
      return X_ERROR_BAD_ARGUMENTS;
    }
    *out_caps = {};
    out_caps->type = rex::input::XINPUT_DEVTYPE_GAMEPAD;
    out_caps->sub_type = 1;
    return X_ERROR_SUCCESS;
  }

  rex::X_RESULT SetDeviceVibration(
      rex::input::DeviceId id, rex::input::X_INPUT_VIBRATION*) override {
    return id == rex::input::DeviceId(1) ? X_ERROR_SUCCESS
                                         : X_ERROR_DEVICE_NOT_CONNECTED;
  }

  rex::X_RESULT GetDeviceKeystroke(
      rex::input::DeviceId, uint32_t,
      rex::input::X_INPUT_KEYSTROKE*) override {
    return X_ERROR_EMPTY;
  }

 private:
  void PollKeyboard() {
    int key_count = 0;
    const bool* keys = SDL_GetKeyboardState(&key_count);
    if (!keys || key_count <= SDL_SCANCODE_Z) return;
    InputState state = GetInputState();
    state.buttons = 0;
    const auto pressed = [&](SDL_Scancode key) {
      return key < key_count && keys[key];
    };
    if (pressed(SDL_SCANCODE_UP)) state.buttons |= rex::input::X_INPUT_GAMEPAD_DPAD_UP;
    if (pressed(SDL_SCANCODE_DOWN)) state.buttons |= rex::input::X_INPUT_GAMEPAD_DPAD_DOWN;
    if (pressed(SDL_SCANCODE_LEFT)) state.buttons |= rex::input::X_INPUT_GAMEPAD_DPAD_LEFT;
    if (pressed(SDL_SCANCODE_RIGHT)) state.buttons |= rex::input::X_INPUT_GAMEPAD_DPAD_RIGHT;
    if (pressed(SDL_SCANCODE_RETURN)) state.buttons |= rex::input::X_INPUT_GAMEPAD_START;
    if (pressed(SDL_SCANCODE_TAB)) state.buttons |= rex::input::X_INPUT_GAMEPAD_BACK;
    if (pressed(SDL_SCANCODE_SPACE)) state.buttons |= rex::input::X_INPUT_GAMEPAD_A;
    if (pressed(SDL_SCANCODE_Z)) state.buttons |= rex::input::X_INPUT_GAMEPAD_B;
    if (pressed(SDL_SCANCODE_X)) state.buttons |= rex::input::X_INPUT_GAMEPAD_X;
    if (pressed(SDL_SCANCODE_C)) state.buttons |= rex::input::X_INPUT_GAMEPAD_Y;
    state.left_x = 0;
    state.left_y = 0;
    if (pressed(SDL_SCANCODE_A)) state.left_x = -32767;
    if (pressed(SDL_SCANCODE_D)) state.left_x = 32767;
    if (pressed(SDL_SCANCODE_W)) state.left_y = 32767;
    if (pressed(SDL_SCANCODE_S)) state.left_y = -32767;
    state.left_trigger = pressed(SDL_SCANCODE_Q) ? 255 : 0;
    state.right_trigger = pressed(SDL_SCANCODE_E) ? 255 : 0;
    SetInputState(state);
  }

  uint32_t packet_number_ = 1;
};

std::unique_ptr<rex::input::InputSystem> CreateNativeInputSystem(
    bool tool_mode) {
  auto system = std::make_unique<rex::input::InputSystem>(nullptr);
  if (!tool_mode) {
    system->AddDriver(std::make_unique<NativeInputDriver>());
  }
  return system;
}

}  // namespace hydrothunder::native
