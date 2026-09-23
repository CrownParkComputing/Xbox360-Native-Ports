#include "whitty_xenon/thread_environment.h"

#include <algorithm>
#include <chrono>
#include <mutex>
#include <vector>

namespace whitty_xenon {

namespace {
// The console has six hardware threads, so a processor number above five is
// not one - it is a mask the title did not intend as an affinity.
constexpr uint32_t kHardwareThreads = 6;

// Every KTHREAD handed out, so the clock interrupt can charge them all. A
// KTHREAD is never freed - a guest thread that ends leaves its object behind
// for anything still holding a handle to it - so this only ever grows, and an
// address in it stays valid for as long as the memory it lives in does. Which
// memory that is has to be recorded with it: a run has one, but a test process
// builds several, and an address from one names nothing in another.
struct clocked_thread {
    guest_memory* memory;
    uint32_t kthread;
};
std::mutex& thread_list_mutex() {
    static std::mutex mutex;
    return mutex;
}
std::vector<clocked_thread>& thread_list() {
    static std::vector<clocked_thread> list;
    return list;
}

std::chrono::steady_clock::time_point start_time() {
    static const std::chrono::steady_clock::time_point start =
        std::chrono::steady_clock::now();
    return start;
}
} // namespace

uint32_t guest_uptime_milliseconds() noexcept {
    const auto elapsed = std::chrono::steady_clock::now() - start_time();
    return static_cast<uint32_t>(
        std::chrono::duration_cast<std::chrono::milliseconds>(elapsed).count());
}

void tick_guest_clock(guest_memory& memory) {
    const uint32_t now = guest_uptime_milliseconds();
    const std::lock_guard<std::mutex> lock(thread_list_mutex());
    for (const clocked_thread& thread : thread_list())
        if (thread.memory == &memory)
            memory.write_u32(thread.kthread + x_kthread::kernel_time, now);
}

void forget_guest_thread_environments(guest_memory& memory) {
    const std::lock_guard<std::mutex> lock(thread_list_mutex());
    std::vector<clocked_thread>& list = thread_list();
    list.erase(std::remove_if(list.begin(), list.end(),
                              [&](const clocked_thread& thread) {
                                  return thread.memory == &memory;
                              }),
               list.end());
}

uint32_t processor_number_from_affinity(uint32_t affinity_mask,
                                       uint32_t fallback) noexcept {
    const uint32_t mask = affinity_mask & 0xFFu;
    if (mask == 0)
        return fallback < kHardwareThreads ? fallback : 0;
    // The highest set bit, which for a single-bit mask is simply its index.
    // Titles pass one bit; taking the highest keeps a multi-bit mask on a real
    // processor rather than on a number no thread ever reports.
    uint32_t number = 0;
    for (uint32_t bit = 0; bit < 8; ++bit)
        if (mask & (1u << bit)) number = bit;
    return number < kHardwareThreads ? number : kHardwareThreads - 1;
}

guest_thread_environment make_guest_thread_environment(
    kernel_state& kernel, uint32_t thread_id, uint32_t stack_base,
    uint32_t stack_limit, uint32_t start_address, uint32_t processor_number) {
    guest_memory& memory = kernel.memory();
    guest_heap& heap = kernel.heap();

    guest_thread_environment env;
    env.kthread_address = heap.allocate(x_kthread::size, 8);
    env.kpcr_address = heap.allocate(x_kpcr::size, 8);
    if (env.kthread_address == 0 || env.kpcr_address == 0) return env;

    memory.zero_block(env.kthread_address, x_kthread::size);
    memory.write_u32(env.kthread_address + x_kthread::thread_id, thread_id);
    memory.write_u32(env.kthread_address + x_kthread::stack_base, stack_base);
    memory.write_u32(env.kthread_address + x_kthread::stack_limit, stack_limit);

    // This thread's TLS block: a per-thread copy of the template the XEX's
    // TLS-info header names. Guest code reaches it as [r13+0] (KPCR::tls_ptr)
    // with no kernel call - the CRT does so during start-up, so the field has
    // to be filled before the thread's first instruction, not lazily. Left
    // zero it reads as a null TLS base and the first CRT store through it
    // faults at the field's own offset (Midnight Club LA: SIGSEGV at 0x1C).
    uint32_t tls_block = 0;
    if (kernel.tls_data_size() != 0) {
        tls_block = heap.allocate(kernel.tls_data_size(), 8);
        if (tls_block != 0) {
            memory.zero_block(tls_block, kernel.tls_data_size());
            if (kernel.tls_raw_data_size() != 0) {
                std::vector<uint8_t> raw(kernel.tls_raw_data_size());
                if (memory.read_block(kernel.tls_raw_data_address(),
                                      raw.data(), raw.size()))
                    memory.write_block(tls_block, raw.data(), raw.size());
            }
            memory.write_u32(env.kthread_address + x_kthread::tls_address,
                             tls_block);
        }
    }
    memory.write_u32(env.kthread_address + x_kthread::start_address,
                     start_address);
    memory.write_u8(env.kthread_address + x_kthread::current_cpu,
                    static_cast<uint8_t>(processor_number));
    // Seeded with the clock rather than left at zero. A thread created twenty
    // seconds in whose first read of this field was 0 and whose second was the
    // clock's 20000 looks, to code that subtracts the two, like twenty seconds
    // of no progress - which for D3D's watchdog is an instant GPU hang on a
    // thread that has only just started.
    memory.write_u32(env.kthread_address + x_kthread::kernel_time,
                     guest_uptime_milliseconds());
    // Every thread belongs to the title's one process, and guest code reaches
    // the process only through this field.
    memory.write_u32(env.kthread_address + x_kthread::process,
                     kernel.title_process_address());
    {
        const std::lock_guard<std::mutex> lock(thread_list_mutex());
        thread_list().push_back(clocked_thread{&memory, env.kthread_address});
    }

    memory.zero_block(env.kpcr_address, x_kpcr::size);
    memory.write_u32(env.kpcr_address + x_kpcr::pcr_ptr, env.kpcr_address);
    memory.write_u32(env.kpcr_address + x_kpcr::tls_ptr, tls_block);
    memory.write_u32(env.kpcr_address + x_kpcr::current_thread,
                     env.kthread_address);
    memory.write_u32(env.kpcr_address + x_kpcr::stack_base_ptr, stack_base);
    memory.write_u32(env.kpcr_address + x_kpcr::stack_end_ptr, stack_limit);
    memory.write_u8(env.kpcr_address + x_kpcr::current_cpu,
                    static_cast<uint8_t>(processor_number));
    return env;
}

} // namespace whitty_xenon
