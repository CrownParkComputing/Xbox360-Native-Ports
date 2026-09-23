// thread.h - guest threads, their local storage, and waiting.
//
// A guest thread is a host thread. The title's render, game and worker threads
// each become a real OS thread running recompiled code, and the synchronisation
// the title already does - events, semaphores, critical sections - is what keeps
// them in order, because those primitives are implemented here. The alternative,
// a cooperative scheduler, deadlocks the moment guest code spins waiting for
// another thread rather than blocking on a dispatcher object, and UE3 does that.
//
// Two things follow from that choice and live here:
//
//   * Thread-local storage. KeTlsAlloc hands out a slot index that is global to
//     the process; the value stored in it is per-thread. Slots are tracked here,
//     values in real host thread-local storage.
//
//   * Waiting. A wait on a dispatcher object is satisfied when the object is
//     signalled. When it is not, the calling thread blocks on a condition
//     variable until some other thread changes an object's state and wakes it.
//
// Behaviour follows Xenia (BSD 3-Clause).
#pragma once

#include <chrono>
#include <condition_variable>
#include <cstdint>
#include <functional>
#include <mutex>

namespace whitty_xenon {

// Dispatcher object kinds, from the type byte of a dispatcher header
// (X_DISPATCHER_FLAGS / KOBJECTS).
namespace x_dispatcher {
inline constexpr uint8_t event_notification = 0;   // manual reset
inline constexpr uint8_t event_synchronization = 1; // auto reset
inline constexpr uint8_t mutant = 2;
inline constexpr uint8_t semaphore = 5;
inline constexpr uint8_t timer_notification = 8;   // stays signalled
inline constexpr uint8_t timer_synchronization = 9; // one waiter consumes it
} // namespace x_dispatcher

// Wait results, as the guest sees them.
namespace x_wait {
inline constexpr uint32_t object_0 = 0x00000000u; // signalled
inline constexpr uint32_t timeout = 0x00000102u;  // the timeout expired
// A wait on several objects returns which one satisfied it, as object_0 plus
// its index in the array the caller passed.
inline constexpr uint32_t wait_all = 0;  // wait_type: every object
inline constexpr uint32_t wait_any = 1;  // wait_type: any one object
} // namespace x_wait

// A guest timeout is a pointer to a 64-bit count of 100ns ticks: negative means
// a duration from now, positive an absolute time, and a null pointer means wait
// forever.
inline constexpr int64_t ticks_per_second = 10'000'000;

// One guest thread the title asked for. The kernel owns the bookkeeping -
// stack, KPCR, handle, id - but running guest code needs the recompiled
// function table, which only the per-title harness has, so the actual launch
// goes through a callback (see kernel_state::set_guest_thread_launcher).
struct guest_thread {
    uint32_t handle{0};
    uint32_t thread_id{0};
    uint32_t start_address{0};
    uint32_t start_context{0};
    // The title's own thread trampoline, ExCreateThread's fourth argument.
    // When it is set, IT is what runs on the new thread - taking the start
    // address and context as its two arguments - and it is what establishes
    // the per-thread state the title's C runtime expects before calling the
    // real entry point. Calling start_address directly instead skips that
    // setup, and the thread faults a call or two in, on state that was never
    // initialised.
    uint32_t xapi_startup{0};
    uint32_t kpcr_address{0};
    // The guest KTHREAD this thread's handle names. Handles are recycled - the
    // object table reuses a slot as soon as its last reference goes - so a
    // handle on its own does not identify a thread for longer than the title
    // keeps it open. Recording the object the handle pointed at lets a
    // handle-keyed lookup tell "still this thread" from "this handle now names
    // something else", which is the difference between resuming the thread the
    // caller meant and resuming a thread that has already finished.
    uint32_t kthread_address{0};
    uint32_t stack_base{0};  // low address
    uint32_t stack_limit{0}; // high address (initial r1)
    bool launched{false};
    bool suspended{false};
    // How many times this thread has been suspended without being resumed, for
    // a thread that is already RUNNING - which is a different thing from
    // `suspended` above, meaning "created suspended and not yet launched". The
    // console counts suspensions rather than flagging them, and returns the
    // count before the call from both suspend and resume.
    uint32_t suspend_count{0};
};

// Runs the thread's entry as guest code on a new host thread, with r1 set from
// the thread's stack and r13 from its KPCR: `xapi_startup(start_address,
// start_context)` when the title supplied a trampoline, `start_address(
// start_context)` otherwise. Installed by the bring-up harness; the kernel
// calls it once a thread is ready to run.
using guest_thread_launcher = std::function<bool(const guest_thread&)>;

class thread_state {
public:
    // KeTlsAlloc returns this when every slot is taken.
    static constexpr uint32_t tls_out_of_indexes = 0xFFFFFFFFu;
    // The console allows a bounded number of TLS slots; this matches what
    // titles assume is available.
    static constexpr uint32_t max_tls_slots = 64;

    // --- thread-local storage -------------------------------------------
    // Reserves a slot for the whole process. Returns tls_out_of_indexes when
    // none is free.
    uint32_t tls_alloc() noexcept;
    // Releases a slot. Returns false if it was not allocated.
    bool tls_free(uint32_t slot) noexcept;
    // The calling thread's value in `slot`; zero if never set.
    uint32_t tls_get(uint32_t slot) const noexcept;
    // Stores the calling thread's value. Returns false for an invalid slot.
    bool tls_set(uint32_t slot, uint32_t value) noexcept;
    // How many slots are currently reserved.
    uint32_t tls_slots_in_use() const noexcept;

    // --- waiting ---------------------------------------------------------
    // Blocks until `satisfied` returns true, or until `timeout_ns` elapses.
    // A null timeout waits forever. `satisfied` is evaluated under the wait
    // lock, so it may read and consume dispatcher state (an auto-reset event
    // clearing itself, a semaphore decrementing) without racing another waiter.
    // Returns true if it was satisfied, false on timeout.
    //
    // `before_waiting`, when set, runs under the same lock immediately before
    // the first test of `satisfied`, and every waiting thread is woken after it
    // returns. That is what makes "signal this object, then wait on that one"
    // one step rather than two - between a bare signal and the wait that
    // follows it, a third thread can answer the signal and take the object the
    // waiter was about to claim. It must not call back into thread_state: the
    // lock those calls take is already held.
    bool wait_until(const std::function<bool()>& satisfied,
                    const std::chrono::nanoseconds* timeout_ns,
                    const std::function<void()>& before_waiting = {});

    // Wakes every waiting thread so it can re-test its condition. Call after
    // changing any dispatcher object's signalled state.
    void wake_all() noexcept;

    // Sleeps the calling thread for a duration, and really does sleep it.
    //
    // Not on the condition variable above, deliberately: see the implementation
    // for what sharing it cost. A delay is not interruptible here, which matches
    // the console for everything short of an alert.
    void sleep_for(std::chrono::nanoseconds duration);

private:
    mutable std::mutex m_mutex;
    std::condition_variable m_wake;
    bool m_tls_used[max_tls_slots]{};
};

// Converts a guest timeout - a 100ns tick count - into a host duration.
// Negative is a duration from now. Positive is an absolute deadline measured
// from 1601, and is converted by subtracting the current time; zero is returned
// for one that has already passed, which the wait paths treat as a poll.
std::chrono::nanoseconds timeout_to_duration(int64_t ticks) noexcept;

// A nonzero token identifying the calling host thread, assigned on first use
// and stable for that thread's life.
//
// Every lock the console hands a title records WHO holds it - a critical
// section keeps an owning thread and a recursion count, a mutex an owner - and
// none of those calls take a thread argument, because on hardware the kernel
// reads the running thread out of the processor block. A runtime that answers
// "the one guest thread" instead makes every lock look already-owned by the
// caller, so a critical section stops excluding anything and a title with more
// than one thread quietly corrupts whatever the section protected.
uint32_t current_thread_token() noexcept;

// Which guest thread's handle this host thread is running, or 0 for a host
// thread that is not running guest code.
//
// A kernel handler is a plain function with no context parameter, so it cannot
// otherwise tell the caller from any other thread - and one call genuinely
// needs to. `NtSuspendThread` on the CALLING thread is a thread parking itself
// until somebody resumes it, which a runtime can honour exactly by blocking
// inside the call; the same call aimed at some other thread cannot be honoured
// at all, because a host thread running recompiled code has no point outside
// itself where it is safe to stop. Ridge Racer 6 does the first: two of its
// threads park themselves, and with the call returning immediately they spun
// through 7.4 million of them in 25 seconds.
void set_current_guest_thread(uint32_t handle) noexcept;
uint32_t current_guest_thread() noexcept;

} // namespace whitty_xenon
