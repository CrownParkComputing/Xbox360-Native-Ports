// Unit tests for the XMA decoder's register window.
//
// The endianness convention is the whole point of these tests. A title reaches
// this window with byte-reversed loads and stores, which XenonRecomp emits as
// `bswap32(PPC_LOAD_U32(ea))` and `PPC_STORE_U32(ea, bswap32(rS))` - so the
// register file has to swap in both directions for the title to see a natural
// value. Getting that backwards is silent: the title reads 0x90000040 where it
// wanted 0x40000090 and wanders off into unmapped memory later. Every read and
// write below therefore goes through helpers shaped exactly like the guest
// instructions, not through the device interface directly.
#include "whitty_xenon/apu/xma.h"
#include "whitty_xenon/kernel_state.h"
#include "whitty_xenon/mmio.h"

#include <cassert>
#include <cstdint>
#include <cstdio>
#include <string>

using namespace whitty_xenon;

namespace {

// What the recompiled code does for `lwbrx rD,0,rA` / `stwbrx rS,0,rA`.
uint32_t guest_lwbrx(uint32_t address) {
    return __builtin_bswap32(whitty_xenon_mmio_read32(address));
}
void guest_stwbrx(uint32_t address, uint32_t value) {
    whitty_xenon_mmio_write32(address, __builtin_bswap32(value));
}

uint32_t reg_address(uint32_t index) {
    return apu::kXmaRegisterBase + index * 4;
}

struct fixture {
    guest_memory memory;
    guest_heap heap;
    guest_heap physical;
    kernel_state kernel;
    apu::xma_registers registers;

    fixture() : kernel(memory, heap) {
        std::string error;
        assert(memory.initialize(error));
        assert(heap.initialize(memory, 0x40000000, 0x00400000, error));
        // One page above the alias base, as the harness does: a physical
        // address of zero is handed to hardware and null-checked by guest
        // code, so nothing should ever be allocated there.
        assert(physical.initialize(memory, kPhysicalBase + 0x10000, 0x00400000,
                                   error));
        kernel.set_physical_heap(&physical);
        install_kernel(&kernel);
        clear_mmio_devices();
        apu::install_xma_registers(&registers);
    }
    ~fixture() {
        clear_mmio_devices();
        install_kernel(nullptr);
    }
};

// This is the exact access Alien Breed's audio startup makes - `lis r11,32746
// / ori r9,r11,6144 / lwbrx r11,0,r9` - and reading it was what faulted before
// the window existed.
void test_context_array_address_reads_back_natural() {
    fixture fx;
    fx.registers.set_context_array_address(0x00040000);

    assert(guest_lwbrx(0x7FEA1800) == 0x00040000);
    // Explicitly: the raw device read is byte-reversed, and the guest's own
    // reversal is what undoes it. If both were natural the title would see
    // garbage.
    assert(whitty_xenon_mmio_read32(0x7FEA1800) == 0x00000400);
    assert(reg_address(apu::xma_reg::context_array_address) == 0x7FEA1800);
}

void test_context_array_lives_in_physical_memory() {
    fixture fx;
    assert(apu::initialize_xma_contexts(fx.kernel, fx.registers));

    const uint32_t physical_address = fx.registers.context_array_address();
    assert(physical_address != 0);
    // The register holds a *physical* address; the title turns it back into
    // something addressable itself. A virtual one would be above 0xA0000000.
    assert(physical_address < kPhysicalBase);

    const uint32_t virtual_address = kPhysicalBase + physical_address;
    assert(virtual_address % apu::kXmaContextArrayAlignment == 0);
    assert(fx.memory.committed(virtual_address, apu::kXmaContextArraySize));
    // 320 contexts of 64 bytes, all zeroed - the state the hardware is in
    // before a title kicks anything.
    assert(apu::kXmaContextArraySize == 320 * 64);
    for (uint32_t offset = 0; offset < apu::kXmaContextArraySize; offset += 4)
        assert(fx.memory.read_u32(virtual_address + offset) == 0);

    assert(guest_lwbrx(0x7FEA1800) == physical_address);
}

void test_context_array_needs_a_physical_heap() {
    guest_memory memory;
    guest_heap heap;
    std::string error;
    assert(memory.initialize(error));
    assert(heap.initialize(memory, 0x40000000, 0x00400000, error));
    kernel_state kernel(memory, heap); // no physical heap installed
    apu::xma_registers registers;
    assert(!apu::initialize_xma_contexts(kernel, registers));
    assert(registers.context_array_address() == 0);
}

void test_current_context_index_rotates() {
    fixture fx;
    const uint32_t current = reg_address(apu::xma_reg::current_context_index);

    // The hardware is always mid-way through the context array. A title that
    // polls this register to watch the decoder make progress must never see it
    // stuck, so each read advances it.
    assert(guest_lwbrx(current) == 1);
    assert(guest_lwbrx(current) == 2);
    assert(guest_lwbrx(current) == 3);
    // NextContextIndex tracks one ahead and wraps at the context count.
    assert(guest_lwbrx(reg_address(apu::xma_reg::next_context_index)) == 4);
}

void test_current_context_index_wraps_at_the_context_count() {
    fixture fx;
    const uint32_t current = reg_address(apu::xma_reg::current_context_index);
    uint32_t last = 0;
    for (uint32_t i = 0; i < apu::kXmaContextCount + 4; ++i) {
        last = guest_lwbrx(current);
        assert(last < apu::kXmaContextCount);
    }
    // Having gone right round, it is back near the beginning rather than off
    // the end of the array.
    assert(last < 8);
}

void test_kick_enables_the_contexts_its_bits_name() {
    fixture fx;
    // Ten registers of 32 bits cover all 320 contexts. Bit 0 of the first kick
    // register is context 0; bit 3 of the third is context 67.
    guest_stwbrx(reg_address(apu::xma_reg::context_kick_first), 0x00000005u);
    assert(fx.registers.context_enabled(0));
    assert(!fx.registers.context_enabled(1));
    assert(fx.registers.context_enabled(2));
    assert(fx.registers.enabled_context_count() == 2);

    guest_stwbrx(reg_address(apu::xma_reg::context_kick_first + 2), 1u << 3);
    assert(fx.registers.context_enabled(67));
    assert(fx.registers.enabled_context_count() == 3);
    assert(fx.registers.kick_count() == 2);

    // The last bit of the last kick register is the last context; nothing past
    // it exists.
    guest_stwbrx(reg_address(apu::xma_reg::context_kick_last), 0x80000000u);
    assert(fx.registers.context_enabled(apu::kXmaContextCount - 1));
    assert(fx.registers.enabled_context_count() == 4);
}

void test_clear_and_lock_release_contexts() {
    fixture fx;
    guest_stwbrx(reg_address(apu::xma_reg::context_kick_first), 0x0000000Fu);
    assert(fx.registers.enabled_context_count() == 4);

    // A clear takes the named contexts back off the hardware...
    guest_stwbrx(reg_address(apu::xma_reg::context_clear_first), 0x00000003u);
    assert(!fx.registers.context_enabled(0));
    assert(!fx.registers.context_enabled(1));
    assert(fx.registers.context_enabled(2));
    assert(fx.registers.enabled_context_count() == 2);

    // ...and so does a lock, which is the title asking the hardware to stop
    // touching a context so it can rewrite it.
    guest_stwbrx(reg_address(apu::xma_reg::context_lock_first), 0x0000000Cu);
    assert(fx.registers.enabled_context_count() == 0);
    // Locking is not a kick, so the kick counter is untouched.
    assert(fx.registers.kick_count() == 1);
}

void test_unknown_registers_read_back_what_was_written() {
    fixture fx;
    // Most of this window is undocumented. Remembering writes is the only
    // honest answer, and it is what the hardware appears to do.
    guest_stwbrx(reg_address(0x0642), 0xAABBCCDDu);
    assert(guest_lwbrx(reg_address(0x0642)) == 0xAABBCCDDu);
    // An untouched register is zero, not garbage.
    assert(guest_lwbrx(reg_address(0x0643)) == 0);
}

void test_window_covers_the_whole_64k_without_running_off_the_file() {
    fixture fx;
    // (address & 0xFFFF) / 4 tops out at 0x3FFF, exactly the register count -
    // so no address in the window can index past the end.
    assert(guest_lwbrx(apu::kXmaRegisterBase + 0xFFFC) == 0);
    guest_stwbrx(apu::kXmaRegisterBase + 0xFFFC, 0x12345678u);
    assert(guest_lwbrx(apu::kXmaRegisterBase + 0xFFFC) == 0x12345678u);
    assert(apu::xma_registers::kRegisterCount == 0x10000 / 4);
}

} // namespace

int main() {
    test_context_array_address_reads_back_natural();
    test_context_array_lives_in_physical_memory();
    test_context_array_needs_a_physical_heap();
    test_current_context_index_rotates();
    test_current_context_index_wraps_at_the_context_count();
    test_kick_enables_the_contexts_its_bits_name();
    test_clear_and_lock_release_contexts();
    test_unknown_registers_read_back_what_was_written();
    test_window_covers_the_whole_64k_without_running_off_the_file();
    std::printf("xma_registers_test: all tests passed\n");
    return 0;
}
