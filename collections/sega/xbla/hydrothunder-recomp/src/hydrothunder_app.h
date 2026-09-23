// hydrothunder - ReXGlue Recompiled Project
//
// Customize your app by overriding virtual hooks from rex::ReXApp.

#pragma once

#include <atomic>
#include <thread>

#include <rex/rex_app.h>
#include <rex/ui/presenter.h>

#include "native_frame_sink.h"
#include "native_input.h"

class HydrothunderApp : public rex::ReXApp {
 public:
  ~HydrothunderApp() override {
    StopFrameCapture();
  }

  using rex::ReXApp::ReXApp;

  static std::unique_ptr<rex::ui::WindowedApp> Create(
      rex::ui::WindowedAppContext& ctx) {
    return std::unique_ptr<HydrothunderApp>(new HydrothunderApp(ctx, "hydrothunder",
        PPCImageConfig));
  }

  void OnPreSetup(rex::RuntimeConfig& config) override {
    if (std::getenv("HYDRO_NATIVE_INPUT")) {
      config.input_factory = [](bool tool_mode) {
        return hydrothunder::native::CreateNativeInputSystem(tool_mode);
      };
      REXLOG_INFO("native input driver enabled");
    }
  }

  void OnPostSetup() override {
    hydrothunder::native::SetGlobalFrameSink(&frame_sink_);
    const char* directory = std::getenv("HYDRO_NATIVE_FRAME_DIR");
    if (!directory || !*directory) {
      return;
    }
    frame_directory_ = directory;
    std::error_code error;
    std::filesystem::create_directories(frame_directory_, error);
    if (error) {
      REXLOG_ERROR("native frame output directory failed: {}", error.message());
      frame_directory_.clear();
      return;
    }
    frame_every_ = ReadUnsigned("HYDRO_NATIVE_FRAME_EVERY", 1);
    frame_max_ = ReadUnsigned("HYDRO_NATIVE_FRAME_MAX", 0);
    print_hashes_ = std::getenv("HYDRO_NATIVE_FRAME_HASHES") != nullptr;
    capture_thread_ = std::thread([this] { CaptureFrames(); });
  }

  void OnShutdown() override {
    StopFrameCapture();
  }

 private:
  void StopFrameCapture() {
    capture_stop_.store(true, std::memory_order_release);
    if (capture_thread_.joinable()) {
      capture_thread_.join();
    }
    hydrothunder::native::SetGlobalFrameSink(nullptr);
  }

  static uint32_t ReadUnsigned(const char* name, uint32_t fallback) {
    const char* value = std::getenv(name);
    if (!value || !*value) {
      return fallback;
    }
    char* end = nullptr;
    const unsigned long parsed = std::strtoul(value, &end, 10);
    return end != value && *end == '\0' && parsed <= UINT32_MAX
               ? static_cast<uint32_t>(parsed)
               : fallback;
  }

  void CaptureFrames() {
    uint32_t observed_serial = 0;
    uint32_t captured = 0;
    while (!capture_stop_.load(std::memory_order_acquire)) {
      std::this_thread::sleep_for(std::chrono::milliseconds(16));
      auto* runtime_instance = runtime();
      if (!runtime_instance || !runtime_instance->graphics_system()) {
        continue;
      }
      auto* presenter = runtime_instance->graphics_system()->presenter();
      if (!presenter) {
        continue;
      }
      rex::ui::RawImage image;
      if (!presenter->CaptureGuestOutput(image) || image.data.empty()) {
        continue;
      }
      frame_sink_.Publish(image.width, image.height, image.stride, image.data.data());
      const uint32_t serial = static_cast<uint32_t>(frame_sink_.serial());
      if (serial == observed_serial || frame_every_ == 0 ||
          serial % frame_every_ != 0 ||
          (frame_max_ != 0 && captured >= frame_max_)) {
        continue;
      }
      observed_serial = serial;
      const auto path = frame_directory_ /
                        ("frame_" + std::to_string(serial) + ".ppm");
      if (frame_sink_.WritePpm(path)) {
        ++captured;
        if (print_hashes_) {
          REXLOG_INFO("native frame {} hash {:016x}", serial, frame_sink_.hash());
        }
      }
    }
  }

  std::atomic<bool> capture_stop_{false};
  std::thread capture_thread_;
  std::filesystem::path frame_directory_;
  uint32_t frame_every_ = 1;
  uint32_t frame_max_ = 0;
  bool print_hashes_ = false;
  hydrothunder::native::FrameSink frame_sink_;
};
