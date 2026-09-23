#include "whitty_xenon/thread.h"

#include <atomic>
#include <thread>
#include <vector>

namespace whitty_xenon {

namespace {

// TLS values are per-thread by definition, so they live in real host
// thread-local storage. Slot *reservation* is process-wide and lives in
// thread_state; only the stored values are per-thread.
std::vector<uint32_t>& tls_values() {
    static thread_local std::vector<uint32_t> values;
    return values;
}

} // namespace

uint32_t thread_state::tls_alloc() noexcept {
    std::lock_guard<std::mutex> lock(m_mutex);
    for (uint32_t slot = 0; slot < max_tls_slots; ++slot) {
        if (!m_tls_used[slot]) {
            m_tls_used[slot] = true;
            return slot;
        }
    }
    return tls_out_of_indexes;
}

bool thread_state::tls_free(uint32_t slot) noexcept {
    std::lock_guard<std::mutex> lock(m_mutex);
    if (slot >= max_tls_slots || !m_tls_used[slot]) return false;
    m_tls_used[slot] = false;
    return true;
}

uint32_t thread_state::tls_get(uint32_t slot) const noexcept {
    if (slot >= max_tls_slots) return 0;
    const std::vector<uint32_t>& values = tls_values();
    return slot < values.size() ? values[slot] : 0;
}

bool thread_state::tls_set(uint32_t slot, uint32_t value) noexcept {
    if (slot >= max_tls_slots) return false;
    std::vector<uint32_t>& values = tls_values();
    if (values.size() <= slot) values.resize(slot + 1, 0);
    values[slot] = value;
    return true;
}

uint32_t thread_state::tls_slots_in_use() const noexcept {
    std::lock_guard<std::mutex> lock(m_mutex);
    uint32_t count = 0;
    for (uint32_t slot = 0; slot < max_tls_slots; ++slot)
        if (m_tls_used[slot]) ++count;
    return count;
}

bool thread_state::wait_until(const std::function<bool()>& satisfied,
                              const std::chrono::nanoseconds* timeout_ns,
                              const std::function<void()>& before_waiting) {
    std::unique_lock<std::mutex> lock(m_mutex);
    if (before_waiting) {
        // Still under the lock, so no other thread has run between this and the
        // test below - which is the whole point of it.
        before_waiting();
        m_wake.notify_all();
    }
    // Testing the condition under the lock is what makes consuming waits safe:
    // an auto-reset event or a semaphore is claimed by exactly one waiter.
    if (satisfied()) return true;
    if (timeout_ns == nullptr) {
        m_wake.wait(lock, satisfied);
        return true;
    }
    // A zero or negative timeout is a poll: the state was already tested above.
    if (*timeout_ns <= std::chrono::nanoseconds::zero()) return false;
    return m_wake.wait_for(lock, *timeout_ns, satisfied);
}

void thread_state::wake_all() noexcept {
    std::lock_guard<std::mutex> lock(m_mutex);
    m_wake.notify_all();
}

void thread_state::sleep_for(std::chrono::nanoseconds duration) {
    if (duration <= std::chrono::nanoseconds::zero()) return;
    // A plain host sleep, deliberately not on the condition variable every wait
    // in this runtime shares.
    //
    // Sleeping on that condition variable was the original implementation, and
    // it did not sleep: a bare wait_for returns on the first wake it is given,
    // and with a signal on some object arriving constantly a delay came back in
    // microseconds however long it asked for. Geometry Wars asked to be left
    // alone 717,000 times in thirty seconds and was handed the processor back
    // every time - a busy-wait wearing a sleep's clothes, and five times the
    // kernel traffic to show for it.
    //
    // Nothing needs a delay to be interruptible: the console's is not, beyond an
    // alert this runtime does not deliver. Staying off the shared lock also
    // keeps a sleeping thread from contending with every thread that is waiting
    // on something real.
    std::this_thread::sleep_for(duration);
}

uint32_t current_thread_token() noexcept {
    // Numbered from one so that zero stays available as "held by nobody",
    // which is what a released critical section and an unowned mutex store.
    static std::atomic<uint32_t> next{1};
    static thread_local uint32_t token =
        next.fetch_add(1, std::memory_order_relaxed);
    return token;
}

namespace {
uint32_t& current_guest_thread_slot() noexcept {
    static thread_local uint32_t handle = 0;
    return handle;
}
} // namespace

void set_current_guest_thread(uint32_t handle) noexcept {
    current_guest_thread_slot() = handle;
}

uint32_t current_guest_thread() noexcept { return current_guest_thread_slot(); }

std::chrono::nanoseconds timeout_to_duration(int64_t ticks) noexcept {
    // One tick is 100ns. Negative is a duration from now, which is what nearly
    // every title passes.
    if (ticks <= 0) return std::chrono::nanoseconds(-ticks * 100);

    // Positive is an absolute deadline, counted in 100ns units from 1601. Taking
    // its magnitude as a duration - which is what this used to do - asks for a
    // wait of about thirteen thousand years: an "until 9am" deadline became a
    // wait that never ends, and a timer armed with one never fired. What the
    // caller asked for is the time from now until then, and nothing if it has
    // already passed.
    constexpr int64_t windows_epoch_offset_ticks = 116444736000000000LL;
    const auto since_1970 = std::chrono::system_clock::now().time_since_epoch();
    const int64_t now_ticks =
        windows_epoch_offset_ticks +
        std::chrono::duration_cast<std::chrono::nanoseconds>(since_1970).count() /
            100;
    const int64_t remaining = ticks - now_ticks;
    if (remaining <= 0) return std::chrono::nanoseconds::zero();
    return std::chrono::nanoseconds(remaining * 100);
}

} // namespace whitty_xenon
