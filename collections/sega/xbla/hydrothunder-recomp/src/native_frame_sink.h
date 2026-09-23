#pragma once

#include <cstddef>
#include <cstdint>
#include <filesystem>
#include <mutex>
#include <vector>

namespace hydrothunder::native {

class FrameSink {
 public:
  struct Snapshot {
    std::vector<uint8_t> pixels;
    uint32_t width = 0;
    uint32_t height = 0;
    uint64_t serial = 0;
    uint64_t hash = 0;
  };

  void Publish(uint32_t width, uint32_t height, size_t stride,
               const uint8_t* rgba);
  bool SnapshotLatest(Snapshot& snapshot) const;
  bool WritePpm(const std::filesystem::path& path) const;
  uint64_t serial() const;
  uint64_t hash() const;

 private:
  static uint64_t Hash(const std::vector<uint8_t>& pixels);

  mutable std::mutex mutex_;
  std::vector<uint8_t> front_;
  std::vector<uint8_t> back_;
  uint32_t width_ = 0;
  uint32_t height_ = 0;
  uint64_t serial_ = 0;
  uint64_t hash_ = 0;
};

void SetGlobalFrameSink(FrameSink* sink);

}  // namespace hydrothunder::native

extern "C" {

struct HydroNativeFrameInfo {
  const uint8_t* pixels;
  uint32_t width;
  uint32_t height;
  uint64_t serial;
  uint64_t hash;
};

uint64_t hydro_native_frame_serial();
uint64_t hydro_native_frame_hash();

}
