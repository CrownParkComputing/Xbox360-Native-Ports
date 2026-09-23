// Unit tests for the guest r13 (KPCR/KTHREAD) thread environment.
#include "whitty_xenon/thread_environment.h"

#include <cassert>
#include <chrono>
#include <cstdio>
#include <string>
#include <thread>

using namespace whitty_xenon;

namespace {

struct fixture {
    guest_memory memory;
    guest_heap heap;
    kernel_state kernel;

    fixture() : kernel(memory, heap) {
        std::string error;
        assert(memory.initialize(error));
        assert(heap.initialize(memory, 0x40000000, 0x00400000, error));
    }
    // This guest machine is going away, and the clock list is process-wide: a
    // later fixture gets the same stack address for its guest_memory, so an
    // entry left here would be ticked against a machine that never allocated
    // it. See forget_guest_thread_environments.
    ~fixture() { forget_guest_thread_environments(memory); }
};

void test_kpcr_points_at_kthread_and_thread_id_is_readable() {
    fixture fx;
    const guest_thread_environment env = make_guest_thread_environment(
        fx.kernel, /*thread_id=*/0x1234, /*stack_base=*/0x70100000,
        /*stack_limit=*/0x70000000, /*start_address=*/0x827F2030);

    assert(env.kpcr_address != 0);
    assert(env.kthread_address != 0);

    // The exact read sequence Alien Breed's startup performs:
    //   r11 = [r13 + 0x100]        (KPCR::current_thread)
    //   r3  = [r11 + 0x14C]        (KTHREAD::thread_id)
    const uint32_t current_thread =
        fx.memory.read_u32(env.kpcr_address + x_kpcr::current_thread);
    assert(current_thread == env.kthread_address);
    const uint32_t thread_id =
        fx.memory.read_u32(current_thread + x_kthread::thread_id);
    assert(thread_id == 0x1234);
}

void test_stack_bounds_are_set_on_both_structures() {
    fixture fx;
    const guest_thread_environment env = make_guest_thread_environment(
        fx.kernel, 1, 0x70100000, 0x70000000, 0x827F2030);

    assert(fx.memory.read_u32(env.kpcr_address + x_kpcr::stack_base_ptr) ==
          0x70100000);
    assert(fx.memory.read_u32(env.kpcr_address + x_kpcr::stack_end_ptr) ==
          0x70000000);
    assert(fx.memory.read_u32(env.kthread_address + x_kthread::stack_base) ==
          0x70100000);
    assert(fx.memory.read_u32(env.kthread_address + x_kthread::stack_limit) ==
          0x70000000);
}

// A title asks for a hardware thread by bit, and guest code reads the number
// back out of the KPCR to index per-processor state. Geometry Wars 2's audio
// engine creates one thread per processor and stores each one's buffers in the
// slot for its processor; a thread that reports the wrong number reads a slot it
// was never given and dereferences the null in it.
void test_processor_number_comes_from_the_affinity_mask() {
    // One bit set: its index, as ExCreateThread's callers pass it.
    assert(processor_number_from_affinity(0x01) == 0);
    assert(processor_number_from_affinity(0x02) == 1);
    assert(processor_number_from_affinity(0x10) == 4); // Geometry Wars 2's
    assert(processor_number_from_affinity(0x20) == 5);
    // No request: the fallback, which is the creator's processor.
    assert(processor_number_from_affinity(0x00) == 0);
    assert(processor_number_from_affinity(0x00, 3) == 3);
    // Six hardware threads, so nothing may report a seventh - a mask with a
    // bit above them is not an affinity, and answering 6 or 7 would send the
    // guest past the end of every per-processor array it has.
    assert(processor_number_from_affinity(0x40) == 5);
    assert(processor_number_from_affinity(0x80) == 5);
    assert(processor_number_from_affinity(0x00, 99) == 0);
    // Only the low byte is the mask; the flags above it are not affinity.
    assert(processor_number_from_affinity(0xFFFFFF01u) == 0);
}

void test_processor_number_is_readable_from_both_structures() {
    fixture fx;
    const guest_thread_environment env = make_guest_thread_environment(
        fx.kernel, 1, 0x70100000, 0x70000000, 0x827F2030,
        /*processor_number=*/4);
    // The read guest code performs: lbz rX,0x10C(r13).
    assert(fx.memory.read_u8(env.kpcr_address + x_kpcr::current_cpu) == 4);
    assert(fx.memory.read_u8(env.kthread_address + x_kthread::current_cpu) == 4);

    // And the default is processor 0, not whatever was on the heap.
    const guest_thread_environment other = make_guest_thread_environment(
        fx.kernel, 2, 0x71100000, 0x71000000, 0);
    assert(fx.memory.read_u8(other.kpcr_address + x_kpcr::current_cpu) == 0);
}

void test_two_threads_get_distinct_environments() {
    fixture fx;
    const guest_thread_environment a =
        make_guest_thread_environment(fx.kernel, 1, 0x70100000, 0x70000000, 0);
    const guest_thread_environment b =
        make_guest_thread_environment(fx.kernel, 2, 0x71100000, 0x71000000, 0);
    assert(a.kpcr_address != b.kpcr_address);
    assert(a.kthread_address != b.kthread_address);
}

// KTHREAD::kernel_time is a clock, and guest code reads it straight out of the
// structure. Direct3D's GPU watchdog takes two readings of it and gives up when
// they differ by five thousand, so a field that never changes is a five-second
// timeout that never expires - the title spins instead of recovering.
//
// The read sequence is the one sub_822C5318 performs:
//   r10 = [r13 + 0x100]     (KPCR::current_thread)
//   r30 = [r10 + 0x58]      (KTHREAD::kernel_time)
void test_kernel_time_advances_with_the_clock() {
    fixture fx;
    const guest_thread_environment env =
        make_guest_thread_environment(fx.kernel, 1, 0x70100000, 0x70000000, 0);
    const uint32_t current_thread =
        fx.memory.read_u32(env.kpcr_address + x_kpcr::current_thread);

    tick_guest_clock(fx.memory);
    const uint32_t first =
        fx.memory.read_u32(current_thread + x_kthread::kernel_time);
    // Long enough that the millisecond reading has to have moved on.
    std::this_thread::sleep_for(std::chrono::milliseconds(12));
    tick_guest_clock(fx.memory);
    const uint32_t second =
        fx.memory.read_u32(current_thread + x_kthread::kernel_time);

    assert(second > first);
    // A millisecond count, not a microsecond or a tick one: twelve milliseconds
    // of sleep is a handful of units, not thousands.
    assert(second - first >= 10 && second - first < 1000);
}

// A thread created part-way through a run must not read zero once and the live
// clock the next time: code that subtracts the two would see the whole run as
// one interval with no progress in it.
void test_a_new_thread_starts_from_the_current_clock() {
    fixture fx;
    tick_guest_clock(fx.memory);
    std::this_thread::sleep_for(std::chrono::milliseconds(12));
    const guest_thread_environment env =
        make_guest_thread_environment(fx.kernel, 1, 0x70100000, 0x70000000, 0);
    const uint32_t seeded =
        fx.memory.read_u32(env.kthread_address + x_kthread::kernel_time);
    tick_guest_clock(fx.memory);
    const uint32_t now =
        fx.memory.read_u32(env.kthread_address + x_kthread::kernel_time);
    assert(seeded != 0);
    assert(now >= seeded);
    assert(now - seeded < 1000);
}

// Ridge Racer 6 sets the process quantum from its own start-up code, with no
// kernel call anywhere in it:
//   r10 = [r13 + 0x100]      KPCR::current_thread
//   r10 = [r10 + 0x84]       KTHREAD::process
//   [r10 + 0x0C] = r3 * 3    KPROCESS::quantum
// With the process pointer left zeroed that last store goes to 0x0000000C, and
// what the fault report names is the field's own offset rather than anything to
// do with processes. So the chain is walked here exactly as the title walks it.
void test_every_thread_reaches_an_initialised_process() {
    fixture fx;
    const guest_thread_environment first =
        make_guest_thread_environment(fx.kernel, 1, 0x70100000, 0x70000000, 0);
    const guest_thread_environment second =
        make_guest_thread_environment(fx.kernel, 2, 0x71100000, 0x71000000, 0);

    const uint32_t thread =
        fx.memory.read_u32(first.kpcr_address + x_kpcr::current_thread);
    const uint32_t process =
        fx.memory.read_u32(thread + x_kthread::process);
    assert(process != 0);
    fx.memory.write_u32(process + x_kprocess::quantum, 3 * 21);
    assert(fx.memory.read_u32(process + x_kprocess::quantum) == 63);

    // One process per title, not one per thread: a title that sets the quantum
    // on one thread expects every other thread to see it.
    const uint32_t other = fx.memory.read_u32(
        fx.memory.read_u32(second.kpcr_address + x_kpcr::current_thread) +
        x_kthread::process);
    assert(other == process);

    // The fields Xenia's InitializeProcess writes, including the two list heads
    // that point at themselves when empty - a zeroed head is a list walk into
    // address zero.
    assert(fx.memory.read_u32(process + x_kprocess::thread_list) ==
           process + x_kprocess::thread_list);
    assert(fx.memory.read_u32(process + x_kprocess::unk_list) ==
           process + x_kprocess::unk_list);
    assert(fx.memory.read_u8(process + x_kprocess::process_type) ==
           x_kprocess::type_title);
    assert(fx.memory.read_u32(process + x_kprocess::kernel_stack_size) ==
           16 * 1024);
}

} // namespace

int main() {
    test_kpcr_points_at_kthread_and_thread_id_is_readable();
    test_every_thread_reaches_an_initialised_process();
    test_stack_bounds_are_set_on_both_structures();
    test_processor_number_comes_from_the_affinity_mask();
    test_processor_number_is_readable_from_both_structures();
    test_two_threads_get_distinct_environments();
    test_kernel_time_advances_with_the_clock();
    test_a_new_thread_starts_from_the_current_clock();
    std::printf("thread_environment_test: all checks passed\n");
    return 0;
}
