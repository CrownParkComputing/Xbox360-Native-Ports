#include "whitty_xenon/kernel_state.h"

namespace whitty_xenon {
namespace {

// One guest machine per process. A pointer rather than an owned object so the
// caller controls lifetime and a test can swap it out between cases.
kernel_state* g_active_kernel = nullptr;

} // namespace

void install_kernel(kernel_state* state) noexcept { g_active_kernel = state; }

kernel_state* active_kernel() noexcept { return g_active_kernel; }

uint32_t kernel_state::title_process_address() {
    const std::lock_guard<std::mutex> lock(m_title_process_mutex);
    if (m_title_process_address != 0) return m_title_process_address;

    const uint32_t address = heap().allocate(x_kprocess::size, 8);
    if (address == 0) return 0;
    memory().zero_block(address, x_kprocess::size);

    // The values Xenia's KernelState::InitializeProcess writes for a TITLE
    // process, which is the only kind that runs here.
    //
    // The two list heads matter: a list head on the console points at itself
    // when the list is empty, and guest code walks it. Left zeroed, a walk
    // starting from the head dereferences 0.
    memory().write_u32(address + x_kprocess::thread_list,
                       address + x_kprocess::thread_list);
    memory().write_u32(address + x_kprocess::thread_list + 4,
                       address + x_kprocess::thread_list);
    memory().write_u32(address + x_kprocess::unk_list,
                       address + x_kprocess::unk_list);
    memory().write_u32(address + x_kprocess::unk_list + 4,
                       address + x_kprocess::unk_list);
    memory().write_u32(address + x_kprocess::quantum, 60);
    memory().write_u32(address + x_kprocess::thread_count, 0);
    memory().write_u8(address + x_kprocess::process_priority_class, 10);
    memory().write_u8(address + x_kprocess::default_thread_priority, 13);
    memory().write_u8(address + x_kprocess::max_dynamic_priority, 17);
    memory().write_u8(address + x_kprocess::disable_quantum_decay, 0x06);
    memory().write_u32(address + x_kprocess::kernel_stack_size, 16 * 1024);
    memory().write_u16(address + x_kprocess::tls_slot_size, 0x80);
    memory().write_u8(address + x_kprocess::process_type,
                      x_kprocess::type_title);

    m_title_process_address = address;
    return address;
}

} // namespace whitty_xenon
