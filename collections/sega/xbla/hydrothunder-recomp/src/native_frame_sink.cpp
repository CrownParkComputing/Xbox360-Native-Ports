#include "native_frame_sink.h"

#include <algorithm>
#include <fstream>

namespace hydrothunder::native {

void FrameSink::Publish(uint32_t width, uint32_t height, size_t stride,
                        const uint8_t* rgba) {
  if (!rgba || width == 0 || height == 0 || stride < width * 4) {
    return;
  }

  std::lock_guard lock(mutex_);
  back_.resize(static_cast<size_t>(width) * height * 4);
  for (uint32_t y = 0; y < height; ++y) {
    const auto* source = rgba + static_cast<size_t>(y) * stride;
    auto* destination = back_.data() + static_cast<size_t>(y) * width * 4;
    std::copy_n(source, static_cast<size_t>(width) * 4, destination);
  }
  const uint64_t next_hash = Hash(back_);
  if (width == width_ && height == height_ && next_hash == hash_ &&
      back_ == front_) {
    return;
  }
  front_.swap(back_);
  width_ = width;
  height_ = height;
  hash_ = next_hash;
  ++serial_;
}

bool FrameSink::SnapshotLatest(Snapshot& snapshot) const {
  std::lock_guard lock(mutex_);
  if (front_.empty()) {
    return false;
  }
  snapshot.pixels = front_;
  snapshot.width = width_;
  snapshot.height = height_;
  snapshot.serial = serial_;
  snapshot.hash = hash_;
  return true;
}

bool FrameSink::WritePpm(const std::filesystem::path& path) const {
  Snapshot snapshot;
  if (!SnapshotLatest(snapshot)) {
    return false;
  }

  std::ofstream output(path, std::ios::binary);
  if (!output) {
    return false;
  }
  output << "P6\n" << snapshot.width << ' ' << snapshot.height << "\n255\n";
  for (uint32_t y = 0; y < snapshot.height; ++y) {
    const auto* row =
        snapshot.pixels.data() + static_cast<size_t>(y) * snapshot.width * 4;
    for (uint32_t x = 0; x < snapshot.width; ++x) {
      output.write(reinterpret_cast<const char*>(row + x * 4), 3);
    }
  }
  return static_cast<bool>(output);
}

uint64_t FrameSink::serial() const {
  std::lock_guard lock(mutex_);
  return serial_;
}

uint64_t FrameSink::hash() const {
  std::lock_guard lock(mutex_);
  return hash_;
}

uint64_t FrameSink::Hash(const std::vector<uint8_t>& pixels) {
  uint64_t hash = 1469598103934665603ull;
  for (uint8_t byte : pixels) {
    hash ^= byte;
    hash *= 1099511628211ull;
  }
  return hash;
}

}  // namespace hydrothunder::native

namespace {
hydrothunder::native::FrameSink* g_frame_sink = nullptr;
}

extern "C" uint64_t hydro_native_frame_serial() {
  return g_frame_sink ? g_frame_sink->serial() : 0;
}

extern "C" uint64_t hydro_native_frame_hash() {
  return g_frame_sink ? g_frame_sink->hash() : 0;
}

namespace hydrothunder::native {
void SetGlobalFrameSink(FrameSink* sink) {
  g_frame_sink = sink;
}
}  // namespace hydrothunder::native
