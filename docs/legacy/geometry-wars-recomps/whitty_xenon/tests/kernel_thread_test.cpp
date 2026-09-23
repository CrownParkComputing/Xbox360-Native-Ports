// Unit tests for thread-local storage and the wait primitives.
//
// Guest threads are host threads, so these tests use real host threads: TLS
// isolation is checked by setting a slot from two threads, and the wait path is
// checked by blocking one thread in KeWaitForSingleObject until another signals
// the event. That last test is the one that says the threading model works -
// a wait really blocks and a signal from elsewhere really wakes it.
#include "whitty_xenon/host_function.h"
#include "whitty_xenon/kernel_handlers.h"
#include "whitty_xenon/kernel_state.h"
#include "whitty_xenon/thread.h"

#include <cassert>
#include <chrono>
#include <cstdint>
#include <cstdio>
#include <string>
#include <atomic>
#include <thread>

using namespace whitty_xenon;

namespace {

union reg {
    uint64_t u64;
    uint32_t u32;
    double f64;
};
struct test_ctx {
    reg r1, r3, r4, r5, r6, r7, r8, r9, r10;
    reg f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13;
};

struct fixture {
    guest_memory memory;
    guest_heap heap;
    kernel_state kernel;

    static constexpr uint32_t heap_base = 0x40000000;
    static constexpr uint32_t heap_size = 0x00400000;
    static constexpr uint32_t scratch = 0x30000000;
    static constexpr uint32_t scratch_size = 0x10000;
    static constexpr uint32_t stack = scratch + 0x8000;

    fixture() : kernel(memory, heap) {
        std::string error;
        bool ok = memory.initialize(error);
        assert(ok && "guest memory");
        ok = heap.initialize(memory, heap_base, heap_size, error);
        assert(ok && "guest heap");
        ok = memory.commit(scratch, scratch_size, error);
        assert(ok && "scratch commit");
        install_kernel(&kernel);
    }
    ~fixture() { install_kernel(nullptr); }

    uint8_t* base() noexcept { return memory.host_unchecked(0); }
};

// Calls a 1-arg handler and returns r3.
template <auto Fn>
uint32_t call1(fixture& fx, uint32_t a0) {
    test_ctx ctx{};
    ctx.r1.u32 = fixture::stack;
    ctx.r3.u32 = a0;
    host_function<test_ctx, Fn>(ctx, fx.base());
    return ctx.r3.u32;
}

void test_tls_slots_are_distinct_and_reusable() {
    fixture fx;
    test_ctx ctx{};
    host_function<test_ctx, KeTlsAlloc>(ctx, fx.base());
    const uint32_t first = ctx.r3.u32;
    ctx = test_ctx{};
    host_function<test_ctx, KeTlsAlloc>(ctx, fx.base());
    const uint32_t second = ctx.r3.u32;
    assert(first != thread_state::tls_out_of_indexes);
    assert(second != thread_state::tls_out_of_indexes);
    assert(first != second);
    assert(fx.kernel.threads().tls_slots_in_use() == 2);

    // Freeing returns the slot to the pool; freeing twice fails.
    assert(call1<KeTlsFree>(fx, first) == 1);
    assert(call1<KeTlsFree>(fx, first) == 0);
    assert(fx.kernel.threads().tls_slots_in_use() == 1);
}

void test_tls_values_are_per_thread() {
    fixture fx;
    test_ctx ctx{};
    host_function<test_ctx, KeTlsAlloc>(ctx, fx.base());
    const uint32_t slot = ctx.r3.u32;

    // This thread stores one value...
    ctx = test_ctx{};
    ctx.r3.u32 = slot;
    ctx.r4.u32 = 0x11111111;
    host_function<test_ctx, KeTlsSetValue>(ctx, fx.base());
    assert(call1<KeTlsGetValue>(fx, slot) == 0x11111111);

    // ...and a second host thread, sharing the slot, has its own value.
    uint32_t other_before = 0xFFFFFFFF;
    uint32_t other_after = 0;
    std::thread worker([&] {
        other_before = call1<KeTlsGetValue>(fx, slot); // unset here
        test_ctx c{};
        c.r3.u32 = slot;
        c.r4.u32 = 0x22222222;
        host_function<test_ctx, KeTlsSetValue>(c, fx.base());
        other_after = call1<KeTlsGetValue>(fx, slot);
    });
    worker.join();
    assert(other_before == 0);          // a fresh thread starts at zero
    assert(other_after == 0x22222222);  // and keeps its own value
    assert(call1<KeTlsGetValue>(fx, slot) == 0x11111111); // ours is untouched
}

// Waits on `object` with a timeout of `ms` (0 polls, negative means forever).
uint32_t wait_for(fixture& fx, uint32_t object, int64_t ms, bool forever = false) {
    const uint32_t timeout_ptr = fixture::scratch + 0x200;
    if (!forever) {
        // A guest timeout is negative 100ns ticks for a relative wait.
        fx.memory.write_u64(timeout_ptr,
                            static_cast<uint64_t>(-(ms * 10'000LL)));
    }
    test_ctx ctx{};
    ctx.r1.u32 = fixture::stack;
    ctx.r3.u32 = object;
    ctx.r4.u32 = 0;
    ctx.r5.u32 = 0;
    ctx.r6.u32 = 0;
    // The fifth argument (index 4) is still in a register: r3..r10 cover 0..7.
    ctx.r7.u32 = forever ? 0 : timeout_ptr;
    host_function<test_ctx, KeWaitForSingleObject>(ctx, fx.base());
    return ctx.r3.u32;
}

void test_manual_event_stays_signalled() {
    fixture fx;
    const uint32_t event = fixture::scratch;
    test_ctx ctx{};
    ctx.r3.u32 = event;
    ctx.r4.u32 = x_dispatcher::event_notification; // manual reset
    ctx.r5.u32 = 1;                                // initially signalled
    host_function<test_ctx, KeInitializeEvent>(ctx, fx.base());

    assert(wait_for(fx, event, 10) == x_wait::object_0);
    // A manual-reset event is not consumed, so a second wait also succeeds.
    assert(wait_for(fx, event, 10) == x_wait::object_0);
}

void test_auto_event_is_consumed() {
    fixture fx;
    const uint32_t event = fixture::scratch;
    test_ctx ctx{};
    ctx.r3.u32 = event;
    ctx.r4.u32 = x_dispatcher::event_synchronization; // auto reset
    ctx.r5.u32 = 1;
    host_function<test_ctx, KeInitializeEvent>(ctx, fx.base());

    assert(wait_for(fx, event, 10) == x_wait::object_0);
    // The signal was taken, so the next wait times out.
    assert(wait_for(fx, event, 10) == x_wait::timeout);
}

void test_semaphore_count_is_decremented() {
    fixture fx;
    const uint32_t semaphore = fixture::scratch;
    test_ctx ctx{};
    ctx.r3.u32 = semaphore;
    ctx.r4.u32 = 2; // count
    ctx.r5.u32 = 4; // limit
    host_function<test_ctx, KeInitializeSemaphore>(ctx, fx.base());

    assert(wait_for(fx, semaphore, 10) == x_wait::object_0);
    assert(wait_for(fx, semaphore, 10) == x_wait::object_0);
    assert(wait_for(fx, semaphore, 10) == x_wait::timeout); // exhausted
}

void test_wait_times_out_when_never_signalled() {
    fixture fx;
    const uint32_t event = fixture::scratch;
    test_ctx ctx{};
    ctx.r3.u32 = event;
    ctx.r4.u32 = x_dispatcher::event_synchronization;
    ctx.r5.u32 = 0; // unsignalled
    host_function<test_ctx, KeInitializeEvent>(ctx, fx.base());

    const auto start = std::chrono::steady_clock::now();
    assert(wait_for(fx, event, 40) == x_wait::timeout);
    const auto elapsed = std::chrono::steady_clock::now() - start;
    // It really blocked rather than returning at once.
    assert(elapsed >= std::chrono::milliseconds(30));
}

// The model test: one thread blocks forever, another signals, the first wakes.
void test_blocked_wait_is_woken_by_another_thread() {
    fixture fx;
    const uint32_t event = fixture::scratch;
    test_ctx ctx{};
    ctx.r3.u32 = event;
    ctx.r4.u32 = x_dispatcher::event_synchronization;
    ctx.r5.u32 = 0; // starts unsignalled, so the waiter must block
    host_function<test_ctx, KeInitializeEvent>(ctx, fx.base());

    std::thread signaller([&] {
        std::this_thread::sleep_for(std::chrono::milliseconds(30));
        test_ctx c{};
        c.r3.u32 = event;
        c.r4.u32 = 0;
        c.r5.u32 = 0;
        host_function<test_ctx, KeSetEvent>(c, fx.base());
    });

    const auto start = std::chrono::steady_clock::now();
    const uint32_t result = wait_for(fx, event, 0, /*forever=*/true);
    const auto elapsed = std::chrono::steady_clock::now() - start;
    signaller.join();

    assert(result == x_wait::object_0);                    // woken, not timed out
    assert(elapsed >= std::chrono::milliseconds(20));      // it genuinely blocked
    assert(elapsed < std::chrono::seconds(5));             // and was woken promptly
}

void test_wait_by_handle() {
    fixture fx;
    const uint32_t handle_out = fixture::scratch + 0x300;
    test_ctx ctx{};
    ctx.r3.u32 = handle_out;
    ctx.r4.u32 = 0;
    ctx.r5.u32 = x_dispatcher::event_notification;
    ctx.r6.u32 = 1; // signalled
    host_function<test_ctx, NtCreateEvent>(ctx, fx.base());
    assert(ctx.r3.u32 == x_status::success);
    const uint32_t handle = fx.memory.read_u32(handle_out);

    const uint32_t timeout_ptr = fixture::scratch + 0x200;
    fx.memory.write_u64(timeout_ptr, static_cast<uint64_t>(-100000LL));
    ctx = test_ctx{};
    ctx.r1.u32 = fixture::stack;
    ctx.r3.u32 = handle;
    ctx.r4.u32 = 0;
    ctx.r5.u32 = 0;
    ctx.r6.u32 = timeout_ptr;
    host_function<test_ctx, NtWaitForSingleObjectEx>(ctx, fx.base());
    assert(ctx.r3.u32 == x_wait::object_0);

    // An unknown handle is rejected rather than hanging.
    ctx = test_ctx{};
    ctx.r1.u32 = fixture::stack;
    ctx.r3.u32 = 0xF8FF0000;
    ctx.r6.u32 = timeout_ptr;
    host_function<test_ctx, NtWaitForSingleObjectEx>(ctx, fx.base());
    assert(ctx.r3.u32 == x_status::invalid_handle);
}

void test_system_time_and_delay() {
    fixture fx;
    const uint32_t time_ptr = fixture::scratch + 0x400;
    test_ctx ctx{};
    ctx.r3.u32 = time_ptr;
    host_function<test_ctx, KeQuerySystemTime>(ctx, fx.base());
    const uint64_t ticks = fx.memory.read_u64(time_ptr);
    // Later than 2020 and well before 2200, in 100ns units since 1601.
    assert(ticks > 132000000000000000ull);
    assert(ticks < 190000000000000000ull);

    // A 30ms delay really sleeps.
    const uint32_t interval = fixture::scratch + 0x420;
    fx.memory.write_u64(interval, static_cast<uint64_t>(-(30 * 10'000LL)));
    const auto start = std::chrono::steady_clock::now();
    ctx = test_ctx{};
    ctx.r1.u32 = fixture::stack;
    ctx.r3.u32 = 0;
    ctx.r4.u32 = 0;
    ctx.r5.u32 = interval;
    host_function<test_ctx, KeDelayExecutionThread>(ctx, fx.base());
    assert(std::chrono::steady_clock::now() - start >=
           std::chrono::milliseconds(20));
}

} // namespace

// A thread parking itself with NtSuspendThread has to BLOCK there, and a resume
// from another thread has to wake it.
//
// Ridge Racer 6 is the title that found this: two of its threads park
// themselves in a loop, and while the call returned immediately they spun
// through 7.4 million suspends in 25 seconds against 2,740 resumes - the
// "neither completes nor fails" shape, where nothing errors and no progress is
// made either. Aimed at any OTHER thread the call still cannot be honoured, and
// the second half of this test pins that difference rather than leaving it to a
// comment: it must return promptly, not block.
void test_a_thread_parks_itself_and_a_resume_wakes_it() {
    fixture fx;
    guest_thread record;
    record.handle = 0xF8000010;
    record.thread_id = 7;
    record.launched = true;
    fx.kernel.add_guest_thread(record);

    std::atomic<bool> parked{false};
    std::atomic<uint32_t> result{0xFFFFFFFFu};
    const auto start = std::chrono::steady_clock::now();
    std::thread worker([&] {
        set_current_guest_thread(0xF8000010);
        test_ctx ctx{};
        ctx.r3.u32 = 0xF8000010;
        ctx.r4.u32 = 0;
        parked = true;
        host_function<test_ctx, NtSuspendThread>(ctx, fx.base());
        result = ctx.r3.u32;
    });
    while (!parked) std::this_thread::sleep_for(std::chrono::milliseconds(1));
    std::this_thread::sleep_for(std::chrono::milliseconds(40));
    // Still parked: nothing has resumed it.
    assert(result.load() == 0xFFFFFFFFu);

    test_ctx resume{};
    resume.r3.u32 = 0xF8000010;
    resume.r4.u32 = 0;
    host_function<test_ctx, NtResumeThread>(resume, fx.base());
    worker.join();
    const auto elapsed = std::chrono::steady_clock::now() - start;
    assert(result.load() == x_status::success);
    assert(elapsed >= std::chrono::milliseconds(30));
    assert(elapsed < std::chrono::seconds(5));

    // Aimed at a thread that is not the caller, it must NOT block - there is
    // nowhere safe to stop a host thread from outside.
    set_current_guest_thread(0);
    const auto before = std::chrono::steady_clock::now();
    test_ctx other{};
    other.r3.u32 = 0xF8000010;
    other.r4.u32 = 0;
    host_function<test_ctx, NtSuspendThread>(other, fx.base());
    assert(other.r3.u32 == x_status::success);
    assert(std::chrono::steady_clock::now() - before <
           std::chrono::milliseconds(500));
}

int main() {
    test_tls_slots_are_distinct_and_reusable();
    test_a_thread_parks_itself_and_a_resume_wakes_it();
    test_tls_values_are_per_thread();
    test_manual_event_stays_signalled();
    test_auto_event_is_consumed();
    test_semaphore_count_is_decremented();
    test_wait_times_out_when_never_signalled();
    test_blocked_wait_is_woken_by_another_thread();
    test_wait_by_handle();
    test_system_time_and_delay();
    std::printf("kernel_thread_test: all checks passed\n");
    return 0;
}
