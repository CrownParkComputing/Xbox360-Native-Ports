// Unit tests for the synchronisation surface, driven from real host threads.
//
// Every guest thread in this runtime is a host thread, so a handler that only
// looks right on one thread is not right. These tests therefore run the calls
// the way the title does: several host threads, each with its own KPCR in r13,
// contending for the same guest objects.
//
// Two rules this file follows, because a concurrency test that cannot fail is
// worse than no test:
//
//   * Every exclusion or ordering claim is paired with a demonstration that the
//     same test DOES fail without the thing being tested - the same loop with
//     the lock removed, the same wait with a reset instead of a pulse, the same
//     release from the wrong thread.
//   * Nothing asserts what a helper produced by asking that same helper. State
//     the guest would read is read out of guest memory at the offsets the
//     console defines.
#include "whitty_xenon/host_function.h"
#include "whitty_xenon/kernel_handlers.h"
#include "whitty_xenon/kernel_state.h"
#include "whitty_xenon/thread.h"
#include "whitty_xenon/thread_environment.h"

#include <atomic>
#include <cassert>
#include <chrono>
#include <condition_variable>
#include <cstdint>
#include <cstdio>
#include <mutex>
#include <string>
#include <thread>
#include <vector>

using namespace whitty_xenon;

namespace {

union reg {
    uint64_t u64;
    uint32_t u32;
    double f64;
};

// Unlike the other kernel tests' stand-in context, this one has r13 - the
// register recompiled code keeps the running thread's KPCR in. It is how a
// handler knows which thread is calling, and every handler under test here
// needs to know.
struct test_ctx {
    reg r1, r3, r4, r5, r6, r7, r8, r9, r10, r13;
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
    ~fixture() {
        install_kernel(nullptr);
        // The thread-local r13 outlives the fixture otherwise, and the next
        // test's first call would resolve it against a dead kernel.
        set_current_guest_kpcr(0);
    }

    uint8_t* base() noexcept { return memory.host_unchecked(0); }

    // One guest thread's environment: the KPCR/KTHREAD pair a host thread must
    // point r13 at before it runs anything the kernel will be asked about.
    guest_thread_environment make_thread(uint32_t processor = 0) {
        const uint32_t stack_size = 0x2000;
        const uint32_t stack_base = heap.allocate(stack_size, 0x1000);
        assert(stack_base != 0);
        const guest_thread_environment env = make_guest_thread_environment(
            kernel, kernel.next_thread_id(), stack_base + stack_size,
            stack_base, 0, processor);
        assert(env.kpcr_address != 0);
        return env;
    }
};

// Dispatcher-header and lock field offsets, spelled out here rather than shared
// with the implementation: a test that imports the offsets it checks proves only
// that the file agrees with itself.
constexpr uint32_t kSignalState = 0x04;
constexpr uint32_t kMutantOwner = 0x18;
constexpr uint32_t kCsLockCount = 0x10;
constexpr uint32_t kCsRecursion = 0x14;
constexpr uint32_t kCsOwningThread = 0x18;
constexpr uint32_t kKpcrIrql = 0x18;
constexpr uint32_t kKpcrCurrentCpu = 0x10C;
constexpr uint32_t kKthreadApcDisable = 0xB0;
constexpr uint32_t kKthreadCurrentCpu = 0xBF;

// Writes a relative guest timeout - negative 100ns ticks - and returns where.
uint32_t relative_timeout(fixture& fx, uint32_t slot, int64_t ms) {
    const uint32_t address = fixture::scratch + 0x600 + slot * 8;
    fx.memory.write_u64(address, static_cast<uint64_t>(-(ms * 10'000LL)));
    (void)fx;
    return address;
}

// KeWaitForSingleObject on a guest pointer, as the fifth argument.
uint32_t wait_object(fixture& fx, uint32_t kpcr, uint32_t object,
                     uint32_t timeout_ptr) {
    test_ctx ctx{};
    ctx.r1.u32 = fixture::stack;
    ctx.r13.u32 = kpcr;
    ctx.r3.u32 = object;
    ctx.r7.u32 = timeout_ptr;
    host_function<test_ctx, KeWaitForSingleObject>(ctx, fx.base());
    return ctx.r3.u32;
}

// NtWaitForSingleObjectEx by handle, timeout as the fourth argument.
uint32_t wait_handle(fixture& fx, uint32_t kpcr, uint32_t handle,
                     uint32_t timeout_ptr) {
    test_ctx ctx{};
    ctx.r1.u32 = fixture::stack;
    ctx.r13.u32 = kpcr;
    ctx.r3.u32 = handle;
    ctx.r6.u32 = timeout_ptr;
    host_function<test_ctx, NtWaitForSingleObjectEx>(ctx, fx.base());
    return ctx.r3.u32;
}

void init_event(fixture& fx, uint32_t kpcr, uint32_t event, uint32_t type,
                uint32_t state) {
    test_ctx ctx{};
    ctx.r13.u32 = kpcr;
    ctx.r3.u32 = event;
    ctx.r4.u32 = type;
    ctx.r5.u32 = state;
    host_function<test_ctx, KeInitializeEvent>(ctx, fx.base());
}

void set_event(fixture& fx, uint32_t kpcr, uint32_t event) {
    test_ctx ctx{};
    ctx.r13.u32 = kpcr;
    ctx.r3.u32 = event;
    host_function<test_ctx, KeSetEvent>(ctx, fx.base());
}

// --- semaphores -----------------------------------------------------------
// KeReleaseSemaphore advanced the count and told nobody. A worker blocked on
// the semaphore stayed blocked: it only re-tests its object when something
// wakes it, and nothing did. Both Geometry Wars 2 and Space Giraffe hand work
// to a worker through exactly this call.

void init_semaphore(fixture& fx, uint32_t kpcr, uint32_t semaphore,
                    uint32_t count, uint32_t limit) {
    test_ctx ctx{};
    ctx.r13.u32 = kpcr;
    ctx.r3.u32 = semaphore;
    ctx.r4.u32 = count;
    ctx.r5.u32 = limit;
    host_function<test_ctx, KeInitializeSemaphore>(ctx, fx.base());
}

void test_semaphore_release_wakes_a_blocked_waiter() {
    fixture fx;
    const guest_thread_environment main_thread = fx.make_thread();
    const guest_thread_environment worker_thread = fx.make_thread();
    const uint32_t semaphore = fixture::scratch;
    init_semaphore(fx, main_thread.kpcr_address, semaphore, 0, 4);

    // A generous timeout so the assertion is about being woken, not about
    // waiting long enough: under the unwoken behaviour this returns `timeout`
    // two seconds later instead of `object_0` at once.
    std::atomic<uint32_t> result{0xFFFFFFFFu};
    std::atomic<int64_t> elapsed_ms{0};
    std::thread worker([&] {
        const uint32_t timeout = relative_timeout(fx, 0, 2000);
        const auto start = std::chrono::steady_clock::now();
        result = wait_object(fx, worker_thread.kpcr_address, semaphore, timeout);
        elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(
                         std::chrono::steady_clock::now() - start)
                         .count();
    });

    std::this_thread::sleep_for(std::chrono::milliseconds(40));
    test_ctx ctx{};
    ctx.r13.u32 = main_thread.kpcr_address;
    ctx.r3.u32 = semaphore;
    ctx.r4.u32 = 0; // priority increment
    ctx.r5.u32 = 1; // adjustment: one place
    host_function<test_ctx, KeReleaseSemaphore>(ctx, fx.base());
    worker.join();

    assert(result.load() == x_wait::object_0);
    // Woken by the release, not left to time out.
    assert(elapsed_ms.load() < 1000);
    // And the place it took is gone from the count.
    assert(fx.memory.read_u32(semaphore + kSignalState) == 0);
}

// The same wait, with the count advanced the way the broken handler advanced it
// - written straight into the object, with no wake. This is what the test above
// is distinguishing itself from: the waiter is still asleep afterwards, so the
// wake really is what releases it.
void test_semaphore_count_alone_does_not_wake_a_waiter() {
    fixture fx;
    const guest_thread_environment main_thread = fx.make_thread();
    const guest_thread_environment worker_thread = fx.make_thread();
    const uint32_t semaphore = fixture::scratch;
    init_semaphore(fx, main_thread.kpcr_address, semaphore, 0, 4);

    std::atomic<bool> returned{false};
    std::thread worker([&] {
        wait_object(fx, worker_thread.kpcr_address, semaphore, 0); // forever
        returned = true;
    });

    std::this_thread::sleep_for(std::chrono::milliseconds(40));
    fx.memory.write_u32(semaphore + kSignalState, 1); // the count, silently
    std::this_thread::sleep_for(std::chrono::milliseconds(250));
    assert(!returned.load() && "a count advanced without a wake wakes nobody");

    // Release it properly so the worker can finish.
    test_ctx ctx{};
    ctx.r13.u32 = main_thread.kpcr_address;
    ctx.r3.u32 = semaphore;
    ctx.r5.u32 = 1;
    host_function<test_ctx, KeReleaseSemaphore>(ctx, fx.base());
    worker.join();
    assert(returned.load());
}

// --- delays ---------------------------------------------------------------
// One condition variable serves every wait in the runtime, so a delay sleeping
// on it is woken by any signal anywhere. A wait_for without a deadline to
// return to therefore ends on the first such wake, having slept microseconds
// instead of milliseconds.

void test_delay_is_not_cut_short_by_unrelated_signals() {
    fixture fx;
    const guest_thread_environment sleeper_thread = fx.make_thread();
    const guest_thread_environment signaller_thread = fx.make_thread();
    const uint32_t event = fixture::scratch;
    init_event(fx, signaller_thread.kpcr_address, event,
               x_dispatcher::event_notification, 0);

    std::atomic<int64_t> slept_ms{0};
    std::atomic<bool> stop{false};
    std::thread sleeper([&] {
        const uint32_t interval = fixture::scratch + 0x700;
        fx.memory.write_u64(interval, static_cast<uint64_t>(-(150 * 10'000LL)));
        const auto start = std::chrono::steady_clock::now();
        test_ctx ctx{};
        ctx.r1.u32 = fixture::stack;
        ctx.r13.u32 = sleeper_thread.kpcr_address;
        ctx.r5.u32 = interval;
        host_function<test_ctx, KeDelayExecutionThread>(ctx, fx.base());
        slept_ms = std::chrono::duration_cast<std::chrono::milliseconds>(
                       std::chrono::steady_clock::now() - start)
                       .count();
        stop = true;
    });
    // Signal something unrelated, hard, for the whole of the delay. Each set
    // wakes every waiting thread so it can re-test its own condition.
    std::thread signaller([&] {
        while (!stop.load()) {
            set_event(fx, signaller_thread.kpcr_address, event);
            std::this_thread::sleep_for(std::chrono::microseconds(300));
        }
    });
    sleeper.join();
    signaller.join();

    // The title asked for 150ms and must get it.
    assert(slept_ms.load() >= 140);
}

// The failure this guards against, demonstrated on a condition variable of the
// test's own: hammered with notifications, a bare wait_for - the shape the
// delay used to have - comes back long before its duration. Nothing about the
// runtime is involved, which is the point: the mechanism is real, so a delay
// built that way cannot sleep.
void test_a_bare_wait_for_really_does_return_early() {
    std::mutex mutex;
    std::condition_variable wake;
    std::atomic<bool> stop{false};
    std::atomic<int64_t> waited_ms{-1};

    std::thread waiter([&] {
        const auto start = std::chrono::steady_clock::now();
        {
            std::unique_lock<std::mutex> lock(mutex);
            wake.wait_for(lock, std::chrono::milliseconds(150));
        }
        waited_ms = std::chrono::duration_cast<std::chrono::milliseconds>(
                        std::chrono::steady_clock::now() - start)
                        .count();
        stop = true;
    });
    std::thread notifier([&] {
        while (!stop.load()) {
            {
                const std::lock_guard<std::mutex> lock(mutex);
                wake.notify_all();
            }
            std::this_thread::sleep_for(std::chrono::microseconds(300));
        }
    });
    waiter.join();
    notifier.join();

    assert(waited_ms.load() >= 0);
    assert(waited_ms.load() < 100 &&
           "a bare wait_for on a notified condition variable returns early");
}

// --- mutants --------------------------------------------------------------
// A mutant is the one dispatcher object whose availability depends on who is
// asking: recursive for the thread holding it, closed to everyone else. Modelled
// as a bare signal state it is neither - the owner blocks against itself, and
// any thread can hand it away.

uint32_t create_mutant(fixture& fx, uint32_t kpcr, uint32_t initial_owner) {
    const uint32_t handle_out = fixture::scratch + 0x800;
    test_ctx ctx{};
    ctx.r13.u32 = kpcr;
    ctx.r3.u32 = handle_out;
    ctx.r5.u32 = initial_owner;
    host_function<test_ctx, NtCreateMutant>(ctx, fx.base());
    assert(ctx.r3.u32 == x_status::success);
    return fx.memory.read_u32(handle_out);
}

uint32_t release_mutant(fixture& fx, uint32_t kpcr, uint32_t handle) {
    test_ctx ctx{};
    ctx.r13.u32 = kpcr;
    ctx.r3.u32 = handle;
    host_function<test_ctx, NtReleaseMutant>(ctx, fx.base());
    return ctx.r3.u32;
}

void test_a_mutant_is_recursive_for_its_owner_and_closed_to_others() {
    fixture fx;
    const guest_thread_environment owner = fx.make_thread();
    const guest_thread_environment other = fx.make_thread();
    const uint32_t handle = create_mutant(fx, owner.kpcr_address, 0);
    const kernel_object* object = fx.kernel.objects().lookup(handle);
    assert(object != nullptr);
    const uint32_t mutant = object->guest_object;

    const uint32_t poll = relative_timeout(fx, 1, 100);
    // Taken once: the owner is recorded as the KTHREAD the guest would read out
    // of its own KPCR, which is what makes the next line work.
    assert(wait_handle(fx, owner.kpcr_address, handle, poll) == x_wait::object_0);
    assert(fx.memory.read_u32(mutant + kMutantOwner) == owner.kthread_address);

    // Taken twice by the same thread. This is the assertion that fails outright
    // without ownership: the count is already zero, so a state-only mutant
    // makes the holder wait for itself.
    assert(wait_handle(fx, owner.kpcr_address, handle, poll) == x_wait::object_0);

    // Meanwhile it is closed to anybody else - which is what says the two
    // successes above came from being the owner, not from the mutant being free.
    std::atomic<uint32_t> other_result{0};
    std::thread stranger([&] {
        other_result = wait_handle(fx, other.kpcr_address, handle,
                                   relative_timeout(fx, 2, 100));
    });
    stranger.join();
    assert(other_result.load() == x_wait::timeout);

    // One release for two acquires still leaves it held.
    assert(release_mutant(fx, owner.kpcr_address, handle) == x_status::success);
    std::thread stranger_again([&] {
        other_result = wait_handle(fx, other.kpcr_address, handle,
                                   relative_timeout(fx, 2, 100));
    });
    stranger_again.join();
    assert(other_result.load() == x_wait::timeout);

    // The second release frees it, and the owner field goes with it.
    assert(release_mutant(fx, owner.kpcr_address, handle) == x_status::success);
    assert(fx.memory.read_u32(mutant + kMutantOwner) == 0);
    std::thread stranger_finally([&] {
        other_result = wait_handle(fx, other.kpcr_address, handle,
                                   relative_timeout(fx, 2, 100));
    });
    stranger_finally.join();
    assert(other_result.load() == x_wait::object_0);
}

// The shape Geometry Wars 2 actually uses, and the one that made refusing a
// release on ownership grounds a title-stopping bug: the title's own runtime
// claims the mutant in GUEST code with an interlocked decrement on the
// dispatcher header, so the kernel never sees the acquire and has no owner to
// record - and then releases it through the kernel. Refuse that and the mutant
// stays held for ever.
void test_a_mutant_taken_in_guest_code_can_still_be_released() {
    fixture fx;
    const guest_thread_environment owner = fx.make_thread();
    const guest_thread_environment other = fx.make_thread();
    const uint32_t handle = create_mutant(fx, owner.kpcr_address, 0);
    const kernel_object* object = fx.kernel.objects().lookup(handle);
    assert(object != nullptr);
    const uint32_t mutant = object->guest_object;

    // The guest's own fast path: count 1 -> 0, owner untouched. Nothing about
    // this went through a handler, so the kernel knows only that it is held.
    fx.memory.write_u32(mutant + kSignalState, 0);
    assert(fx.memory.read_u32(mutant + kMutantOwner) == 0);

    // It really is held as far as a waiter is concerned, which is what makes the
    // release below matter rather than being a no-op on a free mutant.
    std::atomic<uint32_t> probe{0};
    std::thread prober([&] {
        probe = wait_handle(fx, other.kpcr_address, handle,
                            relative_timeout(fx, 1, 100));
    });
    prober.join();
    assert(probe.load() == x_wait::timeout);

    // Released through the kernel by a thread it has no ownership record for.
    assert(release_mutant(fx, other.kpcr_address, handle) == x_status::success);
    assert(fx.memory.read_u32(mutant + kSignalState) == 1);
    std::thread prober_again([&] {
        probe = wait_handle(fx, other.kpcr_address, handle,
                            relative_timeout(fx, 1, 100));
    });
    prober_again.join();
    assert(probe.load() == x_wait::object_0);
}

// A double release must not stack up into two permits: a mutant is available
// exactly once, and a count of two would let two threads hold it at once.
void test_releasing_a_free_mutant_twice_does_not_admit_two_holders() {
    fixture fx;
    const guest_thread_environment first = fx.make_thread();
    const guest_thread_environment second = fx.make_thread();
    const uint32_t handle = create_mutant(fx, first.kpcr_address, 0);
    const kernel_object* object = fx.kernel.objects().lookup(handle);
    assert(object != nullptr);

    assert(release_mutant(fx, first.kpcr_address, handle) == x_status::success);
    assert(release_mutant(fx, first.kpcr_address, handle) == x_status::success);
    assert(fx.memory.read_u32(object->guest_object + kSignalState) == 1);

    // One thread takes it; the second must then be shut out.
    assert(wait_handle(fx, first.kpcr_address, handle,
                       relative_timeout(fx, 1, 100)) == x_wait::object_0);
    std::atomic<uint32_t> probe{0};
    std::thread prober([&] {
        probe = wait_handle(fx, second.kpcr_address, handle,
                            relative_timeout(fx, 2, 100));
    });
    prober.join();
    assert(probe.load() == x_wait::timeout);
}

void test_a_mutant_created_owned_belongs_to_its_creator() {
    fixture fx;
    const guest_thread_environment creator = fx.make_thread();
    const guest_thread_environment stranger = fx.make_thread();
    const uint32_t handle = create_mutant(fx, creator.kpcr_address, 1);
    const kernel_object* object = fx.kernel.objects().lookup(handle);
    assert(object != nullptr);
    assert(fx.memory.read_u32(object->guest_object + kMutantOwner) ==
           creator.kthread_address);

    // Held, so closed to others...
    std::atomic<uint32_t> probe{0};
    std::thread prober([&] {
        probe = wait_handle(fx, stranger.kpcr_address, handle,
                            relative_timeout(fx, 1, 100));
    });
    prober.join();
    assert(probe.load() == x_wait::timeout);
    // ...but its creator can re-enter it and release it, which a mutant handed
    // out held-but-ownerless would refuse.
    assert(wait_handle(fx, creator.kpcr_address, handle,
                       relative_timeout(fx, 2, 100)) == x_wait::object_0);
    assert(release_mutant(fx, creator.kpcr_address, handle) == x_status::success);
    assert(release_mutant(fx, creator.kpcr_address, handle) == x_status::success);
}

// --- thread objects -------------------------------------------------------
// A KTHREAD is allocated zeroed, which reads as a manual-reset object that is
// not signalled: exactly the state a wait never returns from. Ending the thread
// has to signal it, or a title that joins its workers joins for ever.

void test_a_thread_object_is_signalled_when_the_thread_ends() {
    fixture fx;
    const guest_thread_environment thread = fx.make_thread();
    const uint32_t handle =
        fx.kernel.objects().add(object_type::thread, thread.kthread_address);
    assert(handle != 0);

    // While it is running, waiting on it times out. This is the state the
    // runtime left a FINISHED thread in as well.
    assert(wait_handle(fx, thread.kpcr_address, handle,
                       relative_timeout(fx, 1, 100)) == x_wait::timeout);

    test_ctx ctx{};
    ctx.r1.u32 = fixture::stack;
    ctx.r13.u32 = thread.kpcr_address;
    ctx.r3.u32 = 0; // exit code
    // The call unwinds rather than returning; see the test below.
    try {
        host_function<test_ctx, ExTerminateThread>(ctx, fx.base());
    } catch (const guest_thread_terminated&) {
    }

    // Now it is signalled, and being a notification object it stays that way -
    // every joiner is released, not one of them.
    assert(wait_handle(fx, thread.kpcr_address, handle,
                       relative_timeout(fx, 1, 100)) == x_wait::object_0);
    assert(wait_handle(fx, thread.kpcr_address, handle,
                       relative_timeout(fx, 1, 100)) == x_wait::object_0);
}

void test_a_blocked_join_is_released_when_the_thread_ends() {
    fixture fx;
    const guest_thread_environment worker = fx.make_thread();
    const guest_thread_environment joiner = fx.make_thread();
    const uint32_t handle =
        fx.kernel.objects().add(object_type::thread, worker.kthread_address);

    std::atomic<uint32_t> result{0xFFFFFFFFu};
    std::thread blocked([&] {
        result = wait_handle(fx, joiner.kpcr_address, handle, 0); // forever
    });
    std::this_thread::sleep_for(std::chrono::milliseconds(40));
    assert(result.load() == 0xFFFFFFFFu && "still waiting on a live thread");

    std::thread ending([&] {
        test_ctx ctx{};
        ctx.r1.u32 = fixture::stack;
        ctx.r13.u32 = worker.kpcr_address;
        try {
            host_function<test_ctx, ExTerminateThread>(ctx, fx.base());
        } catch (const guest_thread_terminated&) {
        }
    });
    ending.join();
    blocked.join();
    assert(result.load() == x_wait::object_0);
}

// ExTerminateThread ends the calling thread on the console, so it never comes
// back - and guest code is compiled on that promise. Space Giraffe's XAPI
// thread trampoline (sub_8219ED30) ends with
//
//     lwz  r3,80(r31)          ; the thread procedure's return value
//     bl   ExTerminateThread
//     <the next function starts here>
//
// with no instruction of its own after the call. Returning ran the CRT's
// unhandled-exception dispatcher with the exit code where an EXCEPTION_POINTERS
// belongs; the filter did `lwz r11,0(r3)` on a zero exit code and faulted at
// guest address 0, in a worker thread, with nothing in the log connecting it to
// a thread ending. So this asserts the one property the guest depends on:
// control does not come back.
void test_terminating_a_thread_does_not_return_to_the_guest() {
    fixture fx;
    const guest_thread_environment thread = fx.make_thread();

    test_ctx ctx{};
    ctx.r1.u32 = fixture::stack;
    ctx.r13.u32 = thread.kpcr_address;
    ctx.r3.u32 = 7; // exit code

    bool returned = false;
    uint32_t unwound_with = 0xFFFFFFFFu;
    try {
        host_function<test_ctx, ExTerminateThread>(ctx, fx.base());
        returned = true;
    } catch (const guest_thread_terminated& ended) {
        unwound_with = ended.exit_code;
    }
    assert(!returned &&
           "ExTerminateThread must not return into guest code: the title has "
           "nothing there to run");
    assert(unwound_with == 7 && "the exit code the guest passed comes with it");

    // Unwinding instead of returning must not cost the signal that releases
    // joiners - that is what the thread object is for.
    const uint32_t handle =
        fx.kernel.objects().add(object_type::thread, thread.kthread_address);
    assert(wait_handle(fx, thread.kpcr_address, handle,
                       relative_timeout(fx, 1, 100)) == x_wait::object_0);
}

// --- critical sections ----------------------------------------------------

void enter_cs(fixture& fx, uint32_t kpcr, uint32_t cs) {
    test_ctx ctx{};
    ctx.r1.u32 = fixture::stack;
    ctx.r13.u32 = kpcr;
    ctx.r3.u32 = cs;
    host_function<test_ctx, RtlEnterCriticalSection>(ctx, fx.base());
}

void leave_cs(fixture& fx, uint32_t kpcr, uint32_t cs) {
    test_ctx ctx{};
    ctx.r13.u32 = kpcr;
    ctx.r3.u32 = cs;
    host_function<test_ctx, RtlLeaveCriticalSection>(ctx, fx.base());
}

uint32_t try_enter_cs(fixture& fx, uint32_t kpcr, uint32_t cs) {
    test_ctx ctx{};
    ctx.r1.u32 = fixture::stack;
    ctx.r13.u32 = kpcr;
    ctx.r3.u32 = cs;
    host_function<test_ctx, RtlTryEnterCriticalSection>(ctx, fx.base());
    return ctx.r3.u32;
}

void test_a_critical_section_records_the_guest_thread_that_holds_it() {
    fixture fx;
    const guest_thread_environment holder = fx.make_thread();
    const guest_thread_environment other = fx.make_thread();
    const uint32_t cs = fixture::scratch;
    test_ctx init{};
    init.r13.u32 = holder.kpcr_address;
    init.r3.u32 = cs;
    host_function<test_ctx, RtlInitializeCriticalSection>(init, fx.base());

    enter_cs(fx, holder.kpcr_address, cs);
    // The owner field holds the KTHREAD, which is what guest code comparing it
    // against KeGetCurrentThread() reads out of its own KPCR. A host-side
    // token would leave that comparison permanently false.
    assert(fx.memory.read_u32(cs + kCsOwningThread) == holder.kthread_address);
    assert(fx.memory.read_u32(cs + kCsRecursion) == 1);
    assert(fx.memory.read_u32(cs + kCsLockCount) == 0);

    // Held, so closed to another thread...
    std::atomic<uint32_t> got{1};
    std::thread stranger(
        [&] { got = try_enter_cs(fx, other.kpcr_address, cs); });
    stranger.join();
    assert(got.load() == 0);

    // ...and re-entrant for the one holding it.
    enter_cs(fx, holder.kpcr_address, cs);
    assert(fx.memory.read_u32(cs + kCsRecursion) == 2);
    leave_cs(fx, holder.kpcr_address, cs);
    assert(fx.memory.read_u32(cs + kCsOwningThread) == holder.kthread_address);
    leave_cs(fx, holder.kpcr_address, cs);
    assert(fx.memory.read_u32(cs + kCsOwningThread) == 0);
    assert(fx.memory.read_u32(cs + kCsLockCount) == 0xFFFFFFFFu);

    // Free, so open again - which says the refusal above was the section being
    // held and not the call always refusing.
    std::thread stranger_again(
        [&] { got = try_enter_cs(fx, other.kpcr_address, cs); });
    stranger_again.join();
    assert(got.load() == 1);
}

// Four host threads, each with its own KPCR, incrementing one guest word inside
// the section. Serialised, the total is exact.
void test_a_critical_section_serialises_four_guest_threads() {
    fixture fx;
    const uint32_t cs = fixture::scratch;
    const uint32_t counter = fixture::scratch + 0x40;
    test_ctx init{};
    init.r3.u32 = cs;
    host_function<test_ctx, RtlInitializeCriticalSection>(init, fx.base());
    fx.memory.write_u32(counter, 0);

    constexpr int kThreads = 4;
    constexpr int kRounds = 2000;
    std::vector<guest_thread_environment> envs;
    for (int i = 0; i < kThreads; ++i) envs.push_back(fx.make_thread());

    std::vector<std::thread> threads;
    for (int i = 0; i < kThreads; ++i) {
        const uint32_t kpcr = envs[static_cast<std::size_t>(i)].kpcr_address;
        threads.emplace_back([&fx, kpcr, cs, counter] {
            for (int round = 0; round < kRounds; ++round) {
                enter_cs(fx, kpcr, cs);
                const uint32_t seen = fx.memory.read_u32(counter);
                // Widen the window a title would have anyway: without this a
                // lost update is rare enough to pass by luck.
                std::this_thread::yield();
                fx.memory.write_u32(counter, seen + 1);
                leave_cs(fx, kpcr, cs);
            }
        });
    }
    for (std::thread& thread : threads) thread.join();

    assert(fx.memory.read_u32(counter) ==
           static_cast<uint32_t>(kThreads * kRounds));
    assert(fx.memory.read_u32(cs + kCsOwningThread) == 0);
    assert(fx.memory.read_u32(cs + kCsRecursion) == 0);
}

// The same loop with the section taken out, to show the loop above can fail.
// Reported rather than asserted at an exact figure: how many updates are lost
// depends on the host, but that some are is what makes the test meaningful.
void test_the_same_loop_without_the_section_loses_updates() {
    fixture fx;
    const uint32_t counter = fixture::scratch + 0x40;
    fx.memory.write_u32(counter, 0);

    constexpr int kThreads = 4;
    constexpr int kRounds = 2000;
    std::vector<std::thread> threads;
    for (int i = 0; i < kThreads; ++i) {
        threads.emplace_back([&fx, counter] {
            for (int round = 0; round < kRounds; ++round) {
                const uint32_t seen = fx.memory.read_u32(counter);
                std::this_thread::yield();
                fx.memory.write_u32(counter, seen + 1);
            }
        });
    }
    for (std::thread& thread : threads) thread.join();

    const uint32_t total = fx.memory.read_u32(counter);
    const uint32_t expected = static_cast<uint32_t>(kThreads * kRounds);
    std::printf("  unserialised: %u of %u increments survived (%u lost)\n",
                total, expected, expected - total);
    assert(total < expected && "unserialised increments must lose updates");
}

// --- IRQL -----------------------------------------------------------------
// Raising the IRQL masks nothing here, but the level is per-thread state guest
// code reads, and the release protocol depends on the old level being reported
// truthfully: an inner acquire that claims the caller was at passive level makes
// the inner release drop all the way to passive with the outer lock still held.

uint32_t raise_to_dpc(fixture& fx, uint32_t kpcr) {
    test_ctx ctx{};
    ctx.r13.u32 = kpcr;
    host_function<test_ctx, KeRaiseIrqlToDpcLevel>(ctx, fx.base());
    return ctx.r3.u32;
}

void lower_irql(fixture& fx, uint32_t kpcr, uint32_t level) {
    test_ctx ctx{};
    ctx.r13.u32 = kpcr;
    ctx.r3.u32 = level;
    host_function<test_ctx, KfLowerIrql>(ctx, fx.base());
}

uint32_t acquire_kf(fixture& fx, uint32_t kpcr, uint32_t lock) {
    test_ctx ctx{};
    ctx.r13.u32 = kpcr;
    ctx.r3.u32 = lock;
    host_function<test_ctx, KfAcquireSpinLock>(ctx, fx.base());
    return ctx.r3.u32;
}

void release_kf(fixture& fx, uint32_t kpcr, uint32_t lock, uint32_t old_irql) {
    test_ctx ctx{};
    ctx.r13.u32 = kpcr;
    ctx.r3.u32 = lock;
    ctx.r4.u32 = old_irql;
    host_function<test_ctx, KfReleaseSpinLock>(ctx, fx.base());
}

void test_irql_is_per_thread_and_nests() {
    fixture fx;
    const guest_thread_environment first = fx.make_thread();
    const guest_thread_environment second = fx.make_thread();
    const uint32_t lock = fixture::scratch;
    fx.memory.write_u32(lock, 0);

    assert(fx.memory.read_u8(first.kpcr_address + kKpcrIrql) == 0);
    // The raise reports where it came from, and the level lands in the KPCR
    // where guest code reads it.
    assert(raise_to_dpc(fx, first.kpcr_address) == 0);
    assert(fx.memory.read_u8(first.kpcr_address + kKpcrIrql) == 2);

    // A spin lock taken while already raised reports DISPATCH, not PASSIVE.
    assert(acquire_kf(fx, first.kpcr_address, lock) == 2);
    release_kf(fx, first.kpcr_address, lock, 2);
    // Reported as already-raised, so the release leaves the level alone: the
    // outer raise is still in force.
    assert(fx.memory.read_u8(first.kpcr_address + kKpcrIrql) == 2);

    // Another thread is at its own level entirely.
    std::atomic<uint32_t> other_level{0xFF};
    std::thread worker([&] {
        other_level = fx.memory.read_u8(second.kpcr_address + kKpcrIrql);
        assert(raise_to_dpc(fx, second.kpcr_address) == 0);
        lower_irql(fx, second.kpcr_address, 0);
    });
    worker.join();
    assert(other_level.load() == 0);
    assert(fx.memory.read_u8(first.kpcr_address + kKpcrIrql) == 2);

    // The general raise reports the prior level too, so a raise-and-restore pair
    // built out of KfRaiseIrql/KfLowerIrql lands back where it started.
    assert(raise_to_dpc(fx, first.kpcr_address) == 2); // already at dispatch
    test_ctx raise{};
    raise.r13.u32 = first.kpcr_address;
    raise.r3.u32 = 1; // APC level, below dispatch
    host_function<test_ctx, KfRaiseIrql>(raise, fx.base());
    assert(raise.r3.u32 == 2);
    assert(fx.memory.read_u8(first.kpcr_address + kKpcrIrql) == 1);

    lower_irql(fx, first.kpcr_address, 0);
    assert(fx.memory.read_u8(first.kpcr_address + kKpcrIrql) == 0);

    // From passive, the acquire raises and the release restores.
    assert(acquire_kf(fx, first.kpcr_address, lock) == 0);
    assert(fx.memory.read_u8(first.kpcr_address + kKpcrIrql) == 2);
    release_kf(fx, first.kpcr_address, lock, 0);
    assert(fx.memory.read_u8(first.kpcr_address + kKpcrIrql) == 0);
    assert(fx.memory.read_u32(lock) == 0); // and the lock itself is free
}

// --- critical regions -----------------------------------------------------
// A critical region is not a lock: it holds off the delivery of kernel APCs to
// the calling thread, and nothing else. The count is per-thread and lives in the
// thread's own KTHREAD, so two threads inside their own regions do not see each
// other's - which is exactly why it excludes nothing.

void enter_region(fixture& fx, uint32_t kpcr) {
    test_ctx ctx{};
    ctx.r13.u32 = kpcr;
    host_function<test_ctx, KeEnterCriticalRegion>(ctx, fx.base());
}

void leave_region(fixture& fx, uint32_t kpcr) {
    test_ctx ctx{};
    ctx.r13.u32 = kpcr;
    host_function<test_ctx, KeLeaveCriticalRegion>(ctx, fx.base());
}

void test_critical_regions_count_down_in_the_calling_thread() {
    fixture fx;
    const guest_thread_environment first = fx.make_thread();
    const guest_thread_environment second = fx.make_thread();

    assert(fx.memory.read_u32(first.kthread_address + kKthreadApcDisable) == 0);
    enter_region(fx, first.kpcr_address);
    enter_region(fx, first.kpcr_address);
    assert(fx.memory.read_u32(first.kthread_address + kKthreadApcDisable) ==
           0xFFFFFFFEu); // -2: entries count down from zero
    leave_region(fx, first.kpcr_address);
    assert(fx.memory.read_u32(first.kthread_address + kKthreadApcDisable) ==
           0xFFFFFFFFu); // -1

    // Another thread's count is its own, and untouched.
    std::thread worker([&] { enter_region(fx, second.kpcr_address); });
    worker.join();
    assert(fx.memory.read_u32(second.kthread_address + kKthreadApcDisable) ==
           0xFFFFFFFFu);
    assert(fx.memory.read_u32(first.kthread_address + kKthreadApcDisable) ==
           0xFFFFFFFFu);

    leave_region(fx, first.kpcr_address);
    assert(fx.memory.read_u32(first.kthread_address + kKthreadApcDisable) == 0);
}

// --- pulses ---------------------------------------------------------------
// A pulse releases the threads already waiting and leaves the object clear. A
// pulse written as "clear the state" leaves the state where a waiter cannot see
// it and releases nobody.

void test_a_pulse_releases_a_waiting_thread_without_signalling_the_event() {
    fixture fx;
    const guest_thread_environment waiter_thread = fx.make_thread();
    const guest_thread_environment pulser_thread = fx.make_thread();
    const uint32_t event = fixture::scratch;
    init_event(fx, pulser_thread.kpcr_address, event,
               x_dispatcher::event_synchronization, 0);

    std::atomic<uint32_t> result{0xFFFFFFFFu};
    std::atomic<int64_t> elapsed_ms{0};
    std::thread waiter([&] {
        const auto start = std::chrono::steady_clock::now();
        result = wait_object(fx, waiter_thread.kpcr_address, event,
                            relative_timeout(fx, 1, 2000));
        elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(
                         std::chrono::steady_clock::now() - start)
                         .count();
    });
    std::this_thread::sleep_for(std::chrono::milliseconds(40));
    test_ctx ctx{};
    ctx.r13.u32 = pulser_thread.kpcr_address;
    ctx.r3.u32 = event;
    host_function<test_ctx, KePulseEvent>(ctx, fx.base());
    waiter.join();

    assert(result.load() == x_wait::object_0);
    assert(elapsed_ms.load() < 1000); // released by the pulse, not timed out
    // And the event is not left signalled behind it.
    assert(fx.memory.read_u32(event + kSignalState) == 0);
}

// The same wait against a reset instead of a pulse. Both leave the event
// unsignalled; only the pulse releases the waiter. Without this the test above
// would pass on any wake at all.
void test_a_reset_does_not_release_a_waiting_thread() {
    fixture fx;
    const guest_thread_environment waiter_thread = fx.make_thread();
    const guest_thread_environment other_thread = fx.make_thread();
    const uint32_t event = fixture::scratch;
    init_event(fx, other_thread.kpcr_address, event,
               x_dispatcher::event_synchronization, 0);

    std::atomic<uint32_t> result{0xFFFFFFFFu};
    std::thread waiter([&] {
        result = wait_object(fx, waiter_thread.kpcr_address, event,
                            relative_timeout(fx, 1, 400));
    });
    std::this_thread::sleep_for(std::chrono::milliseconds(40));
    test_ctx ctx{};
    ctx.r13.u32 = other_thread.kpcr_address;
    ctx.r3.u32 = event;
    host_function<test_ctx, KeResetEvent>(ctx, fx.base());
    waiter.join();
    assert(result.load() == x_wait::timeout);
}

void test_a_pulse_with_nobody_waiting_leaves_the_event_clear() {
    fixture fx;
    const guest_thread_environment thread = fx.make_thread();
    const uint32_t event = fixture::scratch;
    init_event(fx, thread.kpcr_address, event,
               x_dispatcher::event_synchronization, 0);

    test_ctx ctx{};
    ctx.r13.u32 = thread.kpcr_address;
    ctx.r3.u32 = event;
    host_function<test_ctx, KePulseEvent>(ctx, fx.base());
    // A pulse is not a signal held in reserve: a wait arriving afterwards
    // waits.
    assert(wait_object(fx, thread.kpcr_address, event,
                       relative_timeout(fx, 1, 100)) == x_wait::timeout);
    assert(fx.memory.read_u32(event + kSignalState) == 0);
}

// --- signal-and-wait ------------------------------------------------------

void test_signal_and_wait_adds_to_a_semaphore_rather_than_setting_it() {
    fixture fx;
    const guest_thread_environment thread = fx.make_thread();
    const uint32_t handles = fixture::scratch + 0x900;

    test_ctx ctx{};
    ctx.r13.u32 = thread.kpcr_address;
    ctx.r3.u32 = handles;
    ctx.r5.u32 = 2; // initial count
    ctx.r6.u32 = 8; // limit
    host_function<test_ctx, NtCreateSemaphore>(ctx, fx.base());
    assert(ctx.r3.u32 == x_status::success);
    const uint32_t semaphore_handle = fx.memory.read_u32(handles);

    ctx = test_ctx{};
    ctx.r13.u32 = thread.kpcr_address;
    ctx.r3.u32 = handles + 4;
    ctx.r5.u32 = x_dispatcher::event_notification;
    ctx.r6.u32 = 1; // already signalled, so the wait half returns at once
    host_function<test_ctx, NtCreateEvent>(ctx, fx.base());
    assert(ctx.r3.u32 == x_status::success);
    const uint32_t event_handle = fx.memory.read_u32(handles + 4);

    const kernel_object* semaphore = fx.kernel.objects().lookup(semaphore_handle);
    assert(semaphore != nullptr);

    ctx = test_ctx{};
    ctx.r1.u32 = fixture::stack;
    ctx.r13.u32 = thread.kpcr_address;
    ctx.r3.u32 = semaphore_handle;
    ctx.r4.u32 = event_handle;
    ctx.r7.u32 = relative_timeout(fx, 1, 500);
    host_function<test_ctx, NtSignalAndWaitForSingleObjectEx>(ctx, fx.base());
    assert(ctx.r3.u32 == x_wait::object_0);
    // Three, not one: setting it to one would throw away the two places that
    // were already in the queue.
    assert(fx.memory.read_u32(semaphore->guest_object + kSignalState) == 3);
}

// A blocked waiter is released by the signal half of another thread's
// signal-and-wait, which is the handoff the call exists for.
void test_signal_and_wait_releases_a_thread_blocked_on_the_signalled_object() {
    fixture fx;
    const guest_thread_environment waiter_thread = fx.make_thread();
    const guest_thread_environment handoff_thread = fx.make_thread();
    const uint32_t handles = fixture::scratch + 0x900;

    test_ctx ctx{};
    ctx.r13.u32 = handoff_thread.kpcr_address;
    ctx.r3.u32 = handles;
    ctx.r5.u32 = x_dispatcher::event_synchronization;
    ctx.r6.u32 = 0;
    host_function<test_ctx, NtCreateEvent>(ctx, fx.base());
    const uint32_t to_waiter = fx.memory.read_u32(handles);

    ctx = test_ctx{};
    ctx.r13.u32 = handoff_thread.kpcr_address;
    ctx.r3.u32 = handles + 4;
    ctx.r5.u32 = x_dispatcher::event_notification;
    ctx.r6.u32 = 1;
    host_function<test_ctx, NtCreateEvent>(ctx, fx.base());
    const uint32_t already_set = fx.memory.read_u32(handles + 4);

    std::atomic<uint32_t> result{0xFFFFFFFFu};
    std::thread waiter([&] {
        result = wait_handle(fx, waiter_thread.kpcr_address, to_waiter, 0);
    });
    std::this_thread::sleep_for(std::chrono::milliseconds(40));
    assert(result.load() == 0xFFFFFFFFu && "still blocked before the signal");

    ctx = test_ctx{};
    ctx.r1.u32 = fixture::stack;
    ctx.r13.u32 = handoff_thread.kpcr_address;
    ctx.r3.u32 = to_waiter;
    ctx.r4.u32 = already_set;
    ctx.r7.u32 = relative_timeout(fx, 1, 500);
    host_function<test_ctx, NtSignalAndWaitForSingleObjectEx>(ctx, fx.base());
    assert(ctx.r3.u32 == x_wait::object_0);
    waiter.join();
    assert(result.load() == x_wait::object_0);
}

// --- affinity -------------------------------------------------------------
// Placement is the host scheduler's business, but the processor NUMBER is not:
// guest code reads it out of its own KPCR and indexes per-processor state with
// it, so a thread moved by this call and left reporting its old processor reads
// another processor's slot.

void test_affinity_moves_the_processor_number_the_guest_reads() {
    fixture fx;
    const guest_thread_environment thread = fx.make_thread(/*processor=*/0);
    const uint32_t previous_ptr = fixture::scratch + 0xA00;

    test_ctx ctx{};
    ctx.r1.u32 = fixture::stack;
    ctx.r13.u32 = thread.kpcr_address;
    ctx.r3.u32 = thread.kthread_address;
    ctx.r4.u32 = 0x10; // hardware thread 4
    ctx.r5.u32 = previous_ptr;
    host_function<test_ctx, KeSetAffinityThread>(ctx, fx.base());
    assert(ctx.r3.u32 == x_status::success);
    // The previous affinity is the mask of where it WAS, not the mask asked
    // for: a title that saves and restores this has to get the old value back.
    assert(fx.memory.read_u32(previous_ptr) == 0x01);
    assert(fx.memory.read_u8(thread.kpcr_address + kKpcrCurrentCpu) == 4);
    assert(fx.memory.read_u8(thread.kthread_address + kKthreadCurrentCpu) == 4);

    // Moving it again reports 4 as the previous processor.
    ctx = test_ctx{};
    ctx.r1.u32 = fixture::stack;
    ctx.r13.u32 = thread.kpcr_address;
    ctx.r3.u32 = thread.kthread_address;
    ctx.r4.u32 = 0x04; // hardware thread 2
    ctx.r5.u32 = previous_ptr;
    host_function<test_ctx, KeSetAffinityThread>(ctx, fx.base());
    assert(fx.memory.read_u32(previous_ptr) == 0x10);
    assert(fx.memory.read_u8(thread.kpcr_address + kKpcrCurrentCpu) == 2);

    // An empty mask is not a move.
    ctx = test_ctx{};
    ctx.r1.u32 = fixture::stack;
    ctx.r13.u32 = thread.kpcr_address;
    ctx.r3.u32 = thread.kthread_address;
    ctx.r4.u32 = 0;
    host_function<test_ctx, KeSetAffinityThread>(ctx, fx.base());
    assert(ctx.r3.u32 == x_status::invalid_parameter);
    assert(fx.memory.read_u8(thread.kpcr_address + kKpcrCurrentCpu) == 2);
}

// A leave from the wrong thread unwinds a recursion count that is not its own,
// and the section it sets free is still in use.
void test_a_critical_section_cannot_be_left_by_another_thread() {
    fixture fx;
    const guest_thread_environment holder = fx.make_thread();
    const guest_thread_environment stranger = fx.make_thread();
    const uint32_t cs = fixture::scratch;
    test_ctx init{};
    init.r13.u32 = holder.kpcr_address;
    init.r3.u32 = cs;
    host_function<test_ctx, RtlInitializeCriticalSection>(init, fx.base());

    enter_cs(fx, holder.kpcr_address, cs);
    std::thread intruder([&] { leave_cs(fx, stranger.kpcr_address, cs); });
    intruder.join();
    // Untouched: still held, still once, still by the same thread.
    assert(fx.memory.read_u32(cs + kCsOwningThread) == holder.kthread_address);
    assert(fx.memory.read_u32(cs + kCsRecursion) == 1);
    std::atomic<uint32_t> got{1};
    std::thread probe([&] { got = try_enter_cs(fx, stranger.kpcr_address, cs); });
    probe.join();
    assert(got.load() == 0);

    // The holder's own leave does release it, which says the ignored leave was
    // about the thread and not about the call doing nothing.
    leave_cs(fx, holder.kpcr_address, cs);
    assert(fx.memory.read_u32(cs + kCsOwningThread) == 0);
}

// --- multi-object waits ---------------------------------------------------

void test_a_multi_object_wait_refuses_an_impossible_count() {
    fixture fx;
    const guest_thread_environment thread = fx.make_thread();
    const uint32_t array_ptr = fixture::scratch + 0x100;
    const uint32_t first = fixture::scratch + 0x200;
    const uint32_t second = fixture::scratch + 0x240;
    init_event(fx, thread.kpcr_address, first,
               x_dispatcher::event_notification, 1);
    init_event(fx, thread.kpcr_address, second,
               x_dispatcher::event_notification, 1);
    // Every slot holds a real, signalled object, so nothing but the count can
    // make the call refuse. Filling only the first two would end the walk at the
    // first zero entry and the call would refuse whatever the limit was - an
    // assertion that passes either way and proves nothing.
    for (uint32_t i = 0; i < 96; ++i)
        fx.memory.write_u32(array_ptr + i * 4, (i & 1) ? second : first);

    const auto wait_many = [&](uint32_t count) {
        test_ctx ctx{};
        ctx.r1.u32 = fixture::stack;
        ctx.r13.u32 = thread.kpcr_address;
        ctx.r3.u32 = count;
        ctx.r4.u32 = array_ptr;
        ctx.r5.u32 = x_wait::wait_all;
        ctx.r10.u32 = relative_timeout(fx, 1, 100); // the seventh argument
        host_function<test_ctx, KeWaitForMultipleObjects>(ctx, fx.base());
        return ctx.r3.u32;
    };

    // Two real objects, both signalled: the wait is satisfied. So is a wait on
    // sixty-four of them, which is the console's limit.
    assert(wait_many(2) == x_wait::object_0);
    assert(wait_many(64) == x_wait::object_0);
    // One past the limit is refused, and so is a count no title would pass -
    // the sort a register holding something else produces, which without the
    // limit walks the array off the end of the committed page.
    assert(wait_many(65) == x_status::invalid_parameter);
    assert(wait_many(96) == x_status::invalid_parameter);
    assert(wait_many(0x10000) == x_status::invalid_parameter);
    assert(wait_many(0) == x_status::invalid_parameter); // nothing to wait on
}

// --- interlocked singly-linked lists --------------------------------------
// A title reaches for these BECAUSE it has several threads on one list and does
// not want a lock; "Interlocked" is the whole contract. A plain read-then-write
// honours none of it: two pushes read the same old head and one entry vanishes.

uint32_t push_slist(fixture& fx, uint32_t list, uint32_t entry) {
    test_ctx ctx{};
    ctx.r3.u32 = list;
    ctx.r4.u32 = entry;
    host_function<test_ctx, InterlockedPushEntrySList>(ctx, fx.base());
    return ctx.r3.u32;
}

uint32_t pop_slist(fixture& fx, uint32_t list) {
    test_ctx ctx{};
    ctx.r3.u32 = list;
    host_function<test_ctx, InterlockedPopEntrySList>(ctx, fx.base());
    return ctx.r3.u32;
}

// Walks the list and counts what is actually reachable, which is the only
// measure that catches an entry whose link was overwritten.
uint32_t slist_length(fixture& fx, uint32_t list) {
    uint32_t count = 0;
    uint32_t entry = fx.memory.read_u32(list);
    while (entry != 0 && count < 100000) {
        ++count;
        entry = fx.memory.read_u32(entry);
    }
    return count;
}

void test_slist_pushes_from_four_threads_all_survive() {
    fixture fx;
    const uint32_t list = fixture::scratch;
    const uint32_t entries = fixture::scratch + 0x1000;
    fx.memory.write_u32(list, 0);
    fx.memory.write_u16(list + 4, 0);
    fx.memory.write_u16(list + 6, 0);

    constexpr uint32_t kThreads = 4;
    constexpr uint32_t kEach = 250;
    std::vector<std::thread> threads;
    for (uint32_t t = 0; t < kThreads; ++t) {
        threads.emplace_back([&fx, list, entries, t] {
            for (uint32_t i = 0; i < kEach; ++i) {
                const uint32_t entry = entries + (t * kEach + i) * 16;
                std::this_thread::yield();
                push_slist(fx, list, entry);
            }
        });
    }
    for (std::thread& thread : threads) thread.join();

    assert(slist_length(fx, list) == kThreads * kEach);
    assert(fx.memory.read_u16(list + 4) == kThreads * kEach); // the depth agrees

    // And popping gets every one of them back, once.
    uint32_t popped = 0;
    while (pop_slist(fx, list) != 0) ++popped;
    assert(popped == kThreads * kEach);
    assert(fx.memory.read_u32(list) == 0);
}

// The same pushes done the way an unguarded read-then-write does them, to show
// the test above can fail: entries are lost because two threads write the same
// head.
void test_the_same_pushes_unguarded_lose_entries() {
    fixture fx;
    const uint32_t list = fixture::scratch;
    const uint32_t entries = fixture::scratch + 0x1000;
    fx.memory.write_u32(list, 0);

    constexpr uint32_t kThreads = 4;
    constexpr uint32_t kEach = 250;
    std::vector<std::thread> threads;
    for (uint32_t t = 0; t < kThreads; ++t) {
        threads.emplace_back([&fx, list, entries, t] {
            for (uint32_t i = 0; i < kEach; ++i) {
                const uint32_t entry = entries + (t * kEach + i) * 16;
                const uint32_t head = fx.memory.read_u32(list);
                std::this_thread::yield();
                fx.memory.write_u32(entry, head);
                fx.memory.write_u32(list, entry);
            }
        });
    }
    for (std::thread& thread : threads) thread.join();

    const uint32_t reachable = slist_length(fx, list);
    std::printf("  unguarded slist: %u of %u pushed entries reachable\n",
                reachable, kThreads * kEach);
    assert(reachable < kThreads * kEach &&
           "unguarded pushes must lose entries");
}

// --- absolute timeouts ----------------------------------------------------
// A positive tick count is a deadline measured from 1601, not a duration. Read
// as a duration it is about thirteen thousand years, so a title that says "wait
// until this time" waited for ever.

void test_an_absolute_deadline_is_a_wait_until_not_a_wait_forever() {
    fixture fx;
    const guest_thread_environment thread = fx.make_thread();
    const uint32_t event = fixture::scratch;
    init_event(fx, thread.kpcr_address, event,
               x_dispatcher::event_synchronization, 0);

    // Ask the kernel what time it is, in the units a guest deadline uses, and
    // put the deadline 100ms past it.
    const uint32_t now_ptr = fixture::scratch + 0xB00;
    test_ctx ctx{};
    ctx.r13.u32 = thread.kpcr_address;
    ctx.r3.u32 = now_ptr;
    host_function<test_ctx, KeQuerySystemTime>(ctx, fx.base());
    const uint64_t deadline = fx.memory.read_u64(now_ptr) + 100 * 10'000ULL;
    const uint32_t timeout_ptr = fixture::scratch + 0xB08;
    fx.memory.write_u64(timeout_ptr, deadline); // positive: absolute

    const auto start = std::chrono::steady_clock::now();
    assert(wait_object(fx, thread.kpcr_address, event, timeout_ptr) ==
           x_wait::timeout);
    const auto elapsed = std::chrono::steady_clock::now() - start;
    // It waited, and it stopped waiting: both halves matter.
    assert(elapsed >= std::chrono::milliseconds(80));
    assert(elapsed < std::chrono::seconds(5));

    // A deadline already in the past is not a wait at all.
    fx.memory.write_u64(timeout_ptr, fx.memory.read_u64(now_ptr) - 10'000'000ULL);
    const auto second_start = std::chrono::steady_clock::now();
    assert(wait_object(fx, thread.kpcr_address, event, timeout_ptr) ==
           x_wait::timeout);
    assert(std::chrono::steady_clock::now() - second_start <
           std::chrono::milliseconds(50));
}

} // namespace

int main() {
    test_semaphore_release_wakes_a_blocked_waiter();
    test_semaphore_count_alone_does_not_wake_a_waiter();
    test_delay_is_not_cut_short_by_unrelated_signals();
    test_a_bare_wait_for_really_does_return_early();
    test_a_mutant_is_recursive_for_its_owner_and_closed_to_others();
    test_a_mutant_taken_in_guest_code_can_still_be_released();
    test_releasing_a_free_mutant_twice_does_not_admit_two_holders();
    test_a_mutant_created_owned_belongs_to_its_creator();
    test_a_thread_object_is_signalled_when_the_thread_ends();
    test_a_blocked_join_is_released_when_the_thread_ends();
    test_terminating_a_thread_does_not_return_to_the_guest();
    test_a_critical_section_records_the_guest_thread_that_holds_it();
    test_a_critical_section_serialises_four_guest_threads();
    test_the_same_loop_without_the_section_loses_updates();
    test_irql_is_per_thread_and_nests();
    test_critical_regions_count_down_in_the_calling_thread();
    test_a_pulse_releases_a_waiting_thread_without_signalling_the_event();
    test_a_reset_does_not_release_a_waiting_thread();
    test_a_pulse_with_nobody_waiting_leaves_the_event_clear();
    test_signal_and_wait_adds_to_a_semaphore_rather_than_setting_it();
    test_signal_and_wait_releases_a_thread_blocked_on_the_signalled_object();
    test_affinity_moves_the_processor_number_the_guest_reads();
    test_a_critical_section_cannot_be_left_by_another_thread();
    test_a_multi_object_wait_refuses_an_impossible_count();
    test_slist_pushes_from_four_threads_all_survive();
    test_the_same_pushes_unguarded_lose_entries();
    test_an_absolute_deadline_is_a_wait_until_not_a_wait_forever();
    std::printf("kernel_sync_test: all checks passed\n");
    return 0;
}
