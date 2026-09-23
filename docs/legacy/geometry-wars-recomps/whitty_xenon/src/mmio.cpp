#include "whitty_xenon/mmio.h"

#include <atomic>
#include <cstdio>
#include <mutex>
#include <set>

namespace whitty_xenon {
namespace {

// One slot per 64 KiB window of the region. A flat array rather than a map so
// the dispatch a guest load pays for is an index, not a hash.
mmio_device* g_devices[kMmioWindowCount]{};
std::atomic<uint64_t> g_unclaimed{0};

uint32_t window_index(uint32_t address) noexcept {
    return (address >> 16) & 0xFFu;
}

} // namespace

void install_mmio_device(uint32_t window_base, mmio_device* device) noexcept {
    if (!is_mmio_address(window_base)) return;
    g_devices[window_index(window_base)] = device;
}

mmio_device* mmio_device_for(uint32_t address) noexcept {
    if (!is_mmio_address(address)) return nullptr;
    return g_devices[window_index(address)];
}

void clear_mmio_devices() noexcept {
    for (mmio_device*& device : g_devices) device = nullptr;
    g_unclaimed.store(0, std::memory_order_relaxed);
}

uint64_t mmio_unclaimed_accesses() noexcept {
    return g_unclaimed.load(std::memory_order_relaxed);
}

void reset_mmio_unclaimed_accesses() noexcept {
    g_unclaimed.store(0, std::memory_order_relaxed);
}

void note_unclaimed_mmio_access() noexcept {
    g_unclaimed.fetch_add(1, std::memory_order_relaxed);
}

} // namespace whitty_xenon

extern "C" {

uint32_t whitty_xenon_mmio_read32(uint32_t address) {
    whitty_xenon::mmio_device* device = whitty_xenon::mmio_device_for(address);
    if (device == nullptr) {
        whitty_xenon::note_unclaimed_mmio_access();
        return 0;
    }
    return device->read(address);
}

void whitty_xenon_mmio_write32(uint32_t address, uint32_t value) {
    whitty_xenon::mmio_device* device = whitty_xenon::mmio_device_for(address);
    if (device == nullptr) {
        whitty_xenon::note_unclaimed_mmio_access();
        return;
    }
    device->write(address, value);
}

} // extern "C"

namespace {
// Guest addresses an indirect call reached but the recompiler emitted no
// function for. Collected rather than fatal so one run reports every gap.
std::mutex g_missing_mutex;
std::set<uint32_t> g_missing_functions;
} // namespace

extern "C" void whitty_xenon_report_missing_function(uint32_t address) {
    std::lock_guard<std::mutex> lock(g_missing_mutex);
    if (g_missing_functions.insert(address).second) {
        std::printf("  [missing function] indirect call to %08X has no "
                    "recompiled body\n", address);
        std::fflush(stdout);
    }
}

namespace whitty_xenon {
void report_missing_function_summary() {
    std::lock_guard<std::mutex> lock(g_missing_mutex);
    if (g_missing_functions.empty()) return;
    std::printf("  %zu distinct missing function(s):\n",
                g_missing_functions.size());
    for (uint32_t address : g_missing_functions)
        std::printf("    0x%08X\n", address);
}
} // namespace whitty_xenon
