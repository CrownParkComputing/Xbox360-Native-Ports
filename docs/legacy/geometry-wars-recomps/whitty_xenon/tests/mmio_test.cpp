// Unit tests for the memory-mapped hardware bus.
//
// The bus itself is small, but two things about it are easy to get wrong and
// expensive to debug: which addresses count as hardware (get it wrong one way
// and a title's register read faults, the other way and ordinary memory
// traffic disappears into a device), and whether the region test compiled into
// the recompiled CPU still agrees with the one the runtime uses. The last test
// here pins those two together by compiling the recompiled code's own header.
#include "whitty_xenon/gpu/mmio.h"
#include "whitty_xenon/mmio.h"

#include <cassert>
#include <cstdint>
#include <cstdio>
#include <vector>

// The header the 240 recompiled translation units are built against. Included
// for its WHITTY_MMIO_IS_HARDWARE macro; the PPC_* macros it also defines are
// harmless here because nothing in this file uses them.
#include "../tools/ppc_mmio_hooks.h"

using namespace whitty_xenon;

namespace {

// A device that records everything, so a test can see exactly which accesses
// reached it and with which address.
struct recording_device final : mmio_device {
    struct access {
        uint32_t address;
        uint32_t value;
        bool is_write;
    };
    std::vector<access> accesses;
    uint32_t next_read_value{0};

    uint32_t read(uint32_t address) noexcept override {
        accesses.push_back({address, next_read_value, false});
        return next_read_value;
    }
    void write(uint32_t address, uint32_t value) noexcept override {
        accesses.push_back({address, value, true});
    }
};

void test_region_covers_the_hardware_range_only() {
    // The console's title heap runs 0x40000000..0x7EFFFFFF, so the first
    // hardware address is the one immediately past it.
    assert(!is_mmio_address(0x7EFFFFFF));
    assert(is_mmio_address(0x7F000000));
    assert(is_mmio_address(0x7FFFFFFF));
    assert(!is_mmio_address(0x80000000)); // the XEX image
    assert(!is_mmio_address(0x40000000)); // the title heap
    assert(!is_mmio_address(0x00000000));
    assert(!is_mmio_address(0xA0000000)); // physical aliases
}

void test_recompiled_code_agrees_on_the_region() {
    // WHITTY_MMIO_IS_HARDWARE is what the recompiled CPU actually tests on
    // every 32-bit load and store. If it ever drifts from is_mmio_address the
    // runtime and the CPU disagree about what hardware is, which shows up as a
    // fault deep in guest code rather than as a build error - so check the
    // whole 64 KiB window grid, both edges included.
    for (uint64_t address = 0; address < 0x100000000ull; address += 0x10000) {
        const uint32_t a = static_cast<uint32_t>(address);
        assert(is_mmio_address(a) == (WHITTY_MMIO_IS_HARDWARE(a) != 0));
        assert(is_mmio_address(a + 0xFFFF) ==
               (WHITTY_MMIO_IS_HARDWARE(a + 0xFFFF) != 0));
    }
}

void test_device_serves_only_its_own_window() {
    clear_mmio_devices();
    recording_device device;
    install_mmio_device(0x7FC80000, &device);

    assert(mmio_device_for(0x7FC80000) == &device);
    assert(mmio_device_for(0x7FC8FFFF) == &device);
    // The neighbouring windows are somebody else's.
    assert(mmio_device_for(0x7FC70000) == nullptr);
    assert(mmio_device_for(0x7FC90000) == nullptr);
    // And an address outside the region never reaches a device at all, even
    // one whose low 16 bits look like a register.
    assert(mmio_device_for(0x40C80000) == nullptr);

    clear_mmio_devices();
    assert(mmio_device_for(0x7FC80000) == nullptr);
}

void test_two_devices_coexist() {
    clear_mmio_devices();
    recording_device gpu;
    recording_device xma;
    install_mmio_device(0x7FC80000, &gpu);
    install_mmio_device(0x7FEA0000, &xma);

    whitty_xenon_mmio_write32(0x7FC80714, 0x1234);
    whitty_xenon_mmio_write32(0x7FEA1800, 0x5678);

    assert(gpu.accesses.size() == 1);
    assert(gpu.accesses[0].address == 0x7FC80714);
    assert(gpu.accesses[0].value == 0x1234);
    assert(xma.accesses.size() == 1);
    assert(xma.accesses[0].address == 0x7FEA1800);
    assert(xma.accesses[0].value == 0x5678);
    clear_mmio_devices();
}

void test_c_entry_points_pass_the_full_address() {
    clear_mmio_devices();
    recording_device device;
    install_mmio_device(0x7FEA0000, &device);
    device.next_read_value = 0xDEADBEEF;

    // The device is handed the whole guest address, not a register index: the
    // (address & 0xFFFF) / 4 numbering belongs to the device.
    assert(whitty_xenon_mmio_read32(0x7FEA1800) == 0xDEADBEEF);
    assert(device.accesses.size() == 1);
    assert(device.accesses[0].address == 0x7FEA1800);
    assert(!device.accesses[0].is_write);
    clear_mmio_devices();
}

void test_unclaimed_window_reads_zero_and_is_counted() {
    clear_mmio_devices();
    reset_mmio_unclaimed_accesses();
    // A window we do not model yet: reads must answer zero rather than fault,
    // so bring-up gets a report instead of a crash.
    assert(whitty_xenon_mmio_read32(0x7FD00000) == 0);
    whitty_xenon_mmio_write32(0x7FD00004, 1);
    assert(mmio_unclaimed_accesses() == 2);
    reset_mmio_unclaimed_accesses();
    assert(mmio_unclaimed_accesses() == 0);
}

void test_gpu_registers_install_on_the_bus() {
    clear_mmio_devices();
    gpu::mmio_registers registers;
    gpu::install_mmio_registers(&registers);
    assert(mmio_device_for(gpu::kMmioRegisterBase) == &registers);

    // Writing CP_RB_WPTR through the bus is the seam the title uses: register
    // 0x01C5 is byte offset 0x714.
    whitty_xenon_mmio_write32(gpu::kMmioRegisterBase + 0x714, 0x00000080);
    assert(registers.write_pointer_updates() == 1);
    assert(registers.write_pointer() == 0x00000080);

    // The fixed hardware answers must survive the trip through the bus - the
    // vblank bit especially, since a frame loop waits on it.
    assert(whitty_xenon_mmio_read32(gpu::kMmioRegisterBase + 0x1951 * 4) == 1);
    assert(whitty_xenon_mmio_read32(gpu::kMmioRegisterBase + 0x0F00 * 4) ==
           0x08100748);
    // And anything without a fixed answer reads back what was written.
    assert(whitty_xenon_mmio_read32(gpu::kMmioRegisterBase + 0x714) ==
           0x00000080);

    gpu::install_mmio_registers(nullptr);
    assert(mmio_device_for(gpu::kMmioRegisterBase) == nullptr);
    clear_mmio_devices();
}

} // namespace

int main() {
    test_region_covers_the_hardware_range_only();
    test_recompiled_code_agrees_on_the_region();
    test_device_serves_only_its_own_window();
    test_two_devices_coexist();
    test_c_entry_points_pass_the_full_address();
    test_unclaimed_window_reads_zero_and_is_counted();
    test_gpu_registers_install_on_the_bus();
    std::printf("mmio_test: all tests passed\n");
    return 0;
}
