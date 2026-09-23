// kernel_state.h - the one guest machine the kernel handlers act on.
//
// A statically recompiled title has exactly one guest address space and one
// system heap, and its kernel handlers are plain C++ functions - they have to
// be, so host_function can wrap them into the PPCFunc shape the recompiled code
// calls. That shape has no room for a "runtime" parameter, so a handler reaches
// the services it needs (memory, the heap, a place to log) through a single
// installed instance instead.
//
// The instance is installed explicitly rather than being a hidden singleton:
// bring-up installs the real one, and each test installs its own, so tests stay
// independent and nothing leaks between them.
#pragma once

#include "whitty_xenon/file_system.h"
#include "whitty_xenon/heap.h"
#include "whitty_xenon/kernel.h"
#include "whitty_xenon/memory.h"
#include "whitty_xenon/object_table.h"
#include "whitty_xenon/audio.h"
#include "whitty_xenon/input.h"
#include "whitty_xenon/media_player.h"
#include "whitty_xenon/notification.h"
#include "whitty_xenon/thread.h"
#include "whitty_xenon/user_profile.h"
#include "whitty_xenon/video.h"
#include "whitty_xenon/xdbf.h"
#include "whitty_xenon/xex.h"

#include <atomic>
#include <deque>
#include <map>
#include <mutex>
#include <string>
#include <unordered_map>
#include <vector>

namespace whitty_xenon {

// The console's KPROCESS, from Xenia's X_KPROCESS (kernel_state.h). One per
// process, and every KTHREAD points at it - so guest code reaches it as
// `[[r13 + KPCR::current_thread] + KTHREAD::process]` with no kernel call in
// the way, and a field left unwritten here is read as a zero the title has no
// reason to expect. Only what Xenia's InitializeProcess fills is filled.
namespace x_kprocess {
inline constexpr uint32_t size = 0x60;
inline constexpr uint32_t thread_list_spinlock = 0x00;
inline constexpr uint32_t thread_list = 0x04; // LIST_ENTRY, empty = self
inline constexpr uint32_t quantum = 0x0C;     // s32
inline constexpr uint32_t clrdataa_masked_ptr = 0x10;
inline constexpr uint32_t thread_count = 0x14;
inline constexpr uint32_t process_priority_class = 0x18;  // u8
inline constexpr uint32_t default_thread_priority = 0x19; // u8
inline constexpr uint32_t max_dynamic_priority = 0x1A;    // u8
inline constexpr uint32_t disable_quantum_decay = 0x1B;   // u8
inline constexpr uint32_t kernel_stack_size = 0x1C;
inline constexpr uint32_t tls_static_data_address = 0x20;
inline constexpr uint32_t tls_data_size = 0x24;
inline constexpr uint32_t tls_raw_data_size = 0x28;
inline constexpr uint32_t tls_slot_size = 0x2C; // u16
inline constexpr uint32_t is_terminating = 0x2E; // u8
inline constexpr uint32_t process_type = 0x2F;   // u8
inline constexpr uint32_t tls_slot_bitmap = 0x30; // 8 words
inline constexpr uint32_t unk_list = 0x54;        // LIST_ENTRY, empty = self
// X_PROCTYPE_*: 0 idle, 1 user (title), 2 system.
inline constexpr uint8_t type_idle = 0;
inline constexpr uint8_t type_title = 1;
inline constexpr uint8_t type_system = 2;
} // namespace x_kprocess

class kernel_state {
public:
    kernel_state(guest_memory& memory, guest_heap& heap) noexcept
        : m_memory(&memory), m_heap(&heap) {}

    guest_memory& memory() noexcept { return *m_memory; }
    // The 64 KiB-page virtual heap at 0x40000000. This is "the" heap for
    // anything that does not care which region it lands in.
    guest_heap& heap() noexcept { return *m_heap; }

    // The console has TWO virtual heaps, and which one an allocation comes
    // from is visible to the guest: 4 KiB-page allocations live below
    // 0x40000000, 64 KiB-page ones (MEM_LARGE_PAGES) at 0x40000000 and above.
    // That is not cosmetic - a title's own allocator reads the top bits of a
    // pointer to decide which of its free paths owns it, so handing back an
    // address from the wrong region sends it down the wrong path with no way
    // to notice. Xenia models the same split (LookupHeapByType picks
    // v00000000 for page_size <= 4096, v40000000 otherwise).
    void set_small_page_heap(guest_heap* heap) noexcept {
        m_small_page_heap = heap;
    }
    guest_heap& small_page_heap() noexcept { return *m_small_page_heap; }
    bool has_small_page_heap() const noexcept {
        return m_small_page_heap != nullptr;
    }
    // The virtual heap serving allocations of the given page size, exactly as
    // the console picks one.
    guest_heap& heap_for_page_size(uint32_t page_size) noexcept {
        if (page_size <= 0x1000u && m_small_page_heap != nullptr)
            return *m_small_page_heap;
        return *m_heap;
    }
    // Which heap an address came from, or nullptr for an address none of them
    // handed out. A free has to go back to the right one.
    guest_heap* heap_for_address(uint32_t address) noexcept {
        for (guest_heap* heap : {m_small_page_heap, m_heap, m_physical_heap}) {
            if (heap == nullptr || !heap->initialized()) continue;
            if (address >= heap->base() &&
                address - heap->base() < heap->size())
                return heap;
        }
        return nullptr;
    }

    // The handles a title's dispatcher objects (events, semaphores, ...) live
    // behind.
    object_table& objects() noexcept { return m_objects; }

    // The title's files, and the device mounts that reach the host directories
    // behind them.
    file_system& files() noexcept { return m_files; }

    // What the title has told the graphics hardware: the PM4 ring buffer, the
    // graphics interrupt callback, and what it last presented. The Vd* handlers
    // write here and the GPU layer reads it.
    // Guest threads: TLS slots and the wait primitives they block on. Guest
    // threads are host threads, so waiting is real blocking.
    thread_state& threads() noexcept { return m_threads; }

    // How the runtime actually starts a guest thread. Running guest code needs
    // the recompiled function table, which only the per-title harness has, so
    // the harness installs this and the kernel calls it from ExCreateThread /
    // the resume paths. Unset means thread creation reports failure rather
    // than silently pretending to have started something.
    void set_guest_thread_launcher(guest_thread_launcher launcher) {
        m_guest_thread_launcher = std::move(launcher);
    }
    bool can_launch_guest_threads() const noexcept {
        return static_cast<bool>(m_guest_thread_launcher);
    }
    bool launch_guest_thread(const guest_thread& thread) const {
        return m_guest_thread_launcher ? m_guest_thread_launcher(thread) : false;
    }

    // The title's audio client, and where its samples go.
    //
    // The callback is stored rather than discarded because the console CALLS
    // it - a title submits nothing until asked, so a runtime that accepts the
    // registration and never calls back produces silence that looks like a
    // game with no sound.
    audio_client& audio() noexcept { return m_audio; }
    void set_audio_sink(audio_frame_sink sink) { m_audio_sink = std::move(sink); }
    void submit_audio(const float* samples, uint32_t count) const {
        if (m_audio_sink) m_audio_sink(samples, count);
    }
    uint64_t audio_frames_submitted() const noexcept {
        return m_audio_frames.load(std::memory_order_relaxed);
    }
    void count_audio_frame() noexcept {
        m_audio_frames.fetch_add(1, std::memory_order_relaxed);
    }
    // The loudest sample seen, and how many frames carried any signal at all.
    void note_audio_peak(float peak) noexcept {
        if (peak > 0.0f) m_audio_frames_with_signal.fetch_add(1, std::memory_order_relaxed);
        float current = m_audio_peak.load(std::memory_order_relaxed);
        while (peak > current &&
               !m_audio_peak.compare_exchange_weak(current, peak,
                                                   std::memory_order_relaxed)) {
        }
    }
    void note_channel_peak(uint32_t channel, float peak) noexcept {
        if (channel >= kAudioChannels) return;
        float current = m_channel_peak[channel].load(std::memory_order_relaxed);
        while (peak > current &&
               !m_channel_peak[channel].compare_exchange_weak(
                   current, peak, std::memory_order_relaxed)) {
        }
    }
    float channel_peak(uint32_t channel) const noexcept {
        return channel < kAudioChannels
                   ? m_channel_peak[channel].load(std::memory_order_relaxed)
                   : 0.0f;
    }
    float audio_peak() const noexcept {
        return m_audio_peak.load(std::memory_order_relaxed);
    }
    uint64_t audio_frames_with_signal() const noexcept {
        return m_audio_frames_with_signal.load(std::memory_order_relaxed);
    }

    // Decoded compressed audio, sent straight to the host.
    //
    // A BYPASS, and worth being honest about: the console's path is for the
    // hardware to decode into the context's output buffer and the title's own
    // mixer to fold that into what it submits. That handshake is not working -
    // the title stops queueing input after its first buffer - so this hands the
    // decoded samples to the host directly instead. It sounds right, but the
    // title has no volume control over it and does not pause it, and none of
    // that is fixed until the handshake is.
    void set_xma_sink(std::function<void(const int16_t*, uint32_t, uint32_t,
                                        uint32_t)> sink) {
        m_xma_sink = std::move(sink);
    }
    void submit_xma(const int16_t* samples, uint32_t count, uint32_t rate,
                    uint32_t channels) const {
        if (m_xma_sink) m_xma_sink(samples, count, rate, channels);
    }
    bool has_xma_sink() const noexcept { return static_cast<bool>(m_xma_sink); }

    // Where controller state comes from. A real controller belongs to the host,
    // for the same reason the window does, so the handler asks rather than
    // reads. With no provider installed every port reports empty, which is what
    // a console with nothing plugged in reports.
    void set_input_provider(input_provider provider) {
        m_input_provider = std::move(provider);
    }
    bool read_gamepad(uint32_t user, gamepad_state& out) const {
        return m_input_provider ? m_input_provider(user, out) : false;
    }

    // Notification listeners. A title creates one and drains it; anything the
    // system wants it to know arrives this way.
    //
    // A new listener is seeded with the machine's CURRENT state rather than
    // starting empty, because the events it cares about - a controller being
    // present, a profile being signed in - happened before it asked. A console
    // that only reported changes from here on would never tell a title about
    // the pad that was already plugged in.
    void add_notification_listener(uint32_t handle) {
        const std::lock_guard<std::mutex> lock(m_notifications_mutex);
        auto& queue = m_notifications[handle];
        queue.push_back({notification_id::input_devices_changed,
                         m_connected_ports.load()});
        queue.push_back({notification_id::sign_in_changed,
                         m_signed_in_ports.load()});
    }
    // Queues an event on every listener, as the system broadcasts one.
    void broadcast_notification(uint32_t id, uint32_t data) {
        const std::lock_guard<std::mutex> lock(m_notifications_mutex);
        for (auto& entry : m_notifications) entry.second.push_back({id, data});
    }
    // Takes the next event for a listener, optionally only one matching id.
    // False means nothing queued, which is the common answer.
    bool next_notification(uint32_t handle, uint32_t match_id,
                           notification& out) {
        const std::lock_guard<std::mutex> lock(m_notifications_mutex);
        const auto found = m_notifications.find(handle);
        if (found == m_notifications.end()) return false;
        auto& queue = found->second;
        for (auto it = queue.begin(); it != queue.end(); ++it) {
            if (match_id != 0 && it->id != match_id) continue;
            out = *it;
            queue.erase(it);
            return true;
        }
        return false;
    }
    // Which ports have a controller, and which have a profile signed in. Used
    // to seed a new listener; both are bitmasks over the four ports.
    void set_connected_ports(uint32_t mask) noexcept {
        m_connected_ports.store(mask);
    }
    void set_signed_in_ports(uint32_t mask) noexcept {
        m_signed_in_ports.store(mask);
    }
    uint32_t connected_ports() const noexcept {
        return m_connected_ports.load();
    }
    uint32_t signed_in_ports() const noexcept {
        return m_signed_in_ports.load();
    }

    // The guest threads the title has created, keyed by handle. A deque, not a
    // vector, because find_guest_thread() hands out a pointer into it that the
    // caller uses after returning - and another guest thread may be creating a
    // thread of its own at the same time. A vector would move what it already
    // holds and leave that pointer dangling.
    std::deque<guest_thread>& guest_threads() noexcept { return m_guest_threads; }
    // The thread a handle names, or null. Entries are never removed - a
    // finished thread's stack and KPCR stay described - so a handle alone is
    // ambiguous once the title closes it and the object table hands the same
    // slot to something else. An entry only answers to its handle while that
    // handle still names its KTHREAD; otherwise a recycled handle finds the
    // FIRST stale match and the caller acts on the wrong thread entirely.
    guest_thread* find_guest_thread(uint32_t handle) noexcept {
        const std::lock_guard<std::mutex> lock(m_threads_mutex);
        for (guest_thread& thread : m_guest_threads) {
            if (thread.handle != handle) continue;
            if (thread.kthread_address != 0) {
                const kernel_object* object = m_objects.lookup(handle);
                if (object == nullptr ||
                    object->guest_object != thread.kthread_address)
                    continue;
            }
            return &thread;
        }
        return nullptr;
    }
    // Returns the stored entry, which is what a caller needs to launch the
    // thread it just described. A deque, so the pointer stays valid however
    // many threads are added afterwards. Handing back the entry is also the
    // only way to reach it that cannot pick the wrong one: looking it up again
    // by handle is exactly the ambiguity above.
    guest_thread* add_guest_thread(const guest_thread& thread) {
        const std::lock_guard<std::mutex> lock(m_threads_mutex);
        m_guest_threads.push_back(thread);
        return &m_guest_threads.back();
    }
    // Thread ids are handed out in order, starting past the main thread's.
    // Atomic: every thread creation asks for one, and the title creates
    // threads from threads.
    uint32_t next_thread_id() noexcept { return ++m_last_thread_id; }

    // The running title's XEX system-flags bitmask (XexCheckExecutablePrivilege
    // tests bits of it). Zero - no privileges granted - until the loader sets
    // it from the title's own header.
    void set_xex_system_flags(uint32_t flags) noexcept {
        m_xex_system_flags = flags;
    }
    uint32_t xex_system_flags() const noexcept { return m_xex_system_flags; }

    // Guest address of a 24-byte copy of the title's XEX execution-info block
    // (media id, version, title id, disc numbering). The block lives in the
    // XEX header, which the loader does not map, so the runtime materialises
    // one in guest memory for XamGetExecutionId to hand back. Zero if unset.
    void set_execution_info_address(uint32_t address) noexcept {
        m_execution_info_address = address;
    }
    uint32_t execution_info_address() const noexcept {
        return m_execution_info_address;
    }

    // The title's TLS template, from the XEX TLS-info header. Every thread
    // gets its own tls_data_size-byte block: tls_raw_data_size bytes copied
    // from the template at tls_raw_data_address (a guest address inside the
    // mapped image), the rest zero-filled. The block's address goes into the
    // thread's KPCR at [r13+0] - which is how the CRT reaches its per-thread
    // state, so a title whose CRT reads it (Midnight Club LA's startup does)
    // stores through a null pointer when this was never set. All zero for a
    // title with no TLS directory.
    void set_tls_info(uint32_t raw_data_address, uint32_t data_size,
                      uint32_t raw_data_size) noexcept {
        m_tls_raw_data_address = raw_data_address;
        m_tls_data_size = data_size;
        m_tls_raw_data_size = raw_data_size;
    }
    uint32_t tls_raw_data_address() const noexcept {
        return m_tls_raw_data_address;
    }
    uint32_t tls_data_size() const noexcept { return m_tls_data_size; }
    uint32_t tls_raw_data_size() const noexcept {
        return m_tls_raw_data_size;
    }

    // Guest address of the title's KPROCESS, allocated and initialised on first
    // use. Every KTHREAD's `process` field (offset 0x84) points at it, and guest
    // code follows that chain without a kernel call - Ridge Racer 6's start-up
    // writes the process quantum as
    // `[[r13+0x100]+0x84]+0x0C = quantum`, which with a null process pointer is
    // a store to 0x0000000C. Returns 0 only if the allocation failed.
    uint32_t title_process_address();

    // The running title's XEX resource table: named blobs inside the mapped
    // image, which is what XexGetModuleSection resolves. Empty until the loader
    // sets it, and empty is a legitimate answer for a title with no resources -
    // the lookup then reports "not found" rather than claiming success.
    void set_module_resources(std::vector<xex_resource> resources) {
        m_module_resources = std::move(resources);
    }
    const std::vector<xex_resource>& module_resources() const noexcept {
        return m_module_resources;
    }
    // The named resource, or nullptr. The console stores an 8-character name
    // with no terminator, so a longer request cannot match one.
    const xex_resource* find_module_resource(const std::string& name) const noexcept {
        for (const xex_resource& resource : m_module_resources)
            if (resource.name == name) return &resource;
        return nullptr;
    }

    // The running title's id, from its XEX execution-info block. Profile
    // settings are scoped by it - a title-specific save belongs to one title
    // and no other - so a runtime that leaves this zero would hand every
    // title the same save slot.
    void set_title_id(uint32_t title_id) noexcept { m_title_id = title_id; }
    uint32_t title_id() const noexcept { return m_title_id; }

    // The signed-in profile's settings. For an XBLA title this is the save
    // game: it writes its progress here and reads it back on the next launch.
    profile_store& profile() noexcept { return m_profile; }
    const profile_store& profile() const noexcept { return m_profile; }

    // --- achievements ------------------------------------------------------
    //
    // Two halves that must not be confused. `title_achievements()` is the
    // running title's own DEFINITION of every achievement it has, read out of
    // the SPA resource inside its XEX - the only authoritative list of what
    // exists, and empty for a title that defines none. What has been EARNED
    // against that list lives in profile(), keyed by title id, so it survives
    // the process and cannot be confused with another title's.
    void set_title_achievements(std::vector<xdbf_achievement> list) {
        m_title_achievements = std::move(list);
    }
    const std::vector<xdbf_achievement>& title_achievements() const noexcept {
        return m_title_achievements;
    }

    // --- leaderboards ------------------------------------------------------
    //
    // The same split as achievements, for the same reason. This is the title's
    // own DEFINITION of its leaderboards, out of the SPA's XVC2 section: the
    // board ids, their names, and which property each column is filled from.
    // The scores recorded against them live in profile(), keyed by title id.
    //
    // Nothing else knows what a board id means. A score submitted for board 3
    // is "Space Giraffe All Time Hall of Fame" only because the title says so
    // here, and a board this list does not contain is one the title never
    // declared - which is a reason to refuse a submission, not to invent a row.
    void set_title_leaderboards(std::vector<xdbf_leaderboard> list) {
        m_title_leaderboards = std::move(list);
    }
    const std::vector<xdbf_leaderboard>& title_leaderboards() const noexcept {
        return m_title_leaderboards;
    }
    const xdbf_leaderboard* title_leaderboard(uint32_t id) const noexcept {
        for (const xdbf_leaderboard& board : m_title_leaderboards)
            if (board.id == id) return &board;
        return nullptr;
    }

    // --- the session a title records its score through ----------------------
    //
    // A title does not hand the console a score directly. It opens a session,
    // sets the properties its leaderboards are built from, and submits them.
    // Offline that session is a real thing on the console - Xenia grants one
    // for any flags that are not Live features (xsession.h: IsOfflineSession is
    // `!flags`, and only IsXboxLiveSession is refused) - so the properties a
    // title sets have somewhere to live between being set and being submitted.
    //
    // That gap is exactly what this holds: property id -> the value the title
    // last set. Nothing is recorded from here on its own; a submission commits
    // it, which is the console's own order of events and not a guess about when
    // a run ended.
    void set_session_property(uint32_t property_id, uint64_t value) {
        const std::lock_guard<std::mutex> lock(m_session_mutex);
        m_session_properties[property_id] = value;
    }
    bool session_property(uint32_t property_id, uint64_t& value) const {
        const std::lock_guard<std::mutex> lock(m_session_mutex);
        const auto found = m_session_properties.find(property_id);
        if (found == m_session_properties.end()) return false;
        value = found->second;
        return true;
    }
    std::size_t session_property_count() const noexcept {
        const std::lock_guard<std::mutex> lock(m_session_mutex);
        return m_session_properties.size();
    }
    // A session closing takes its properties with it: the next run's score must
    // not be able to inherit the last one's.
    void clear_session_properties() {
        const std::lock_guard<std::mutex> lock(m_session_mutex);
        m_session_properties.clear();
    }

    // --- the system blade --------------------------------------------------
    //
    // Some screens belong to the system, not to the title. Selecting
    // Achievements in Geometry Wars calls XamShowAchievementsUI and then draws
    // NOTHING: on a console the dashboard takes the screen over. So the handler
    // raises this flag and the presenting side draws the page - which is what
    // Xenia does for the same call.
    //
    // Read from the render and input threads, raised from a guest thread, so
    // the fields are atomic rather than a struct behind a lock: each is read on
    // its own and a page changing a frame before the scroll does is harmless.
    enum : uint32_t {
        blade_page_achievements = 0,
        blade_page_scores = 1,
        blade_page_count = 2,
    };
    void open_system_blade(uint32_t page) noexcept {
        m_blade_page.store(page, std::memory_order_relaxed);
        m_blade_scroll.store(0, std::memory_order_relaxed);
        m_blade_open.store(true, std::memory_order_release);
        // The title learns the guide is up from this, not by polling - the same
        // notification Xenia broadcasts when it opens a dialog.
        broadcast_notification(notification_id::system_ui, 1);
    }
    void close_system_blade() noexcept {
        if (!m_blade_open.exchange(false, std::memory_order_acq_rel)) return;
        broadcast_notification(notification_id::system_ui, 0);
    }
    bool system_blade_open() const noexcept {
        return m_blade_open.load(std::memory_order_acquire);
    }
    uint32_t system_blade_page() const noexcept {
        return m_blade_page.load(std::memory_order_relaxed);
    }
    void set_system_blade_page(uint32_t page) noexcept {
        m_blade_page.store(page, std::memory_order_relaxed);
        m_blade_scroll.store(0, std::memory_order_relaxed);
    }
    uint32_t system_blade_scroll() const noexcept {
        return m_blade_scroll.load(std::memory_order_relaxed);
    }
    void set_system_blade_scroll(uint32_t scroll) noexcept {
        m_blade_scroll.store(scroll, std::memory_order_relaxed);
    }

    // The console's music player, as the XMsg app messages see it. Guarded
    // because a title polls it from a worker thread while its main thread reads
    // it too.
    media_player_state& media_player() noexcept { return m_media_player; }
    std::mutex& media_player_mutex() noexcept { return m_media_player_mutex; }

    // Enumerators handed out by XamUserCreateAchievementEnumerator and
    // friends: a fixed list of fixed-size records the title drains with
    // XamEnumerate. The list is built once when the enumerator is created, so
    // the object only has to remember how far the title has read.
    //
    // A deque for the same reason the thread list is one: a handle's lookup
    // hands out a pointer into it that outlives the call, while another guest
    // thread may be creating an enumerator of its own.
    struct guest_enumerator {
        uint32_t item_size{0};
        uint32_t items_per_enumerate{0};
        uint32_t next_item{0};
        uint32_t item_count{0};
        std::vector<uint8_t> items; // item_count records of item_size bytes
    };
    // Returns the index the object table stores, which is one past the entry's
    // position so that zero keeps meaning "no host resource".
    uint32_t add_enumerator(const guest_enumerator& enumerator) {
        const std::lock_guard<std::mutex> lock(m_enumerators_mutex);
        m_enumerators.push_back(enumerator);
        return static_cast<uint32_t>(m_enumerators.size());
    }
    guest_enumerator* find_enumerator(uint32_t host_index) noexcept {
        const std::lock_guard<std::mutex> lock(m_enumerators_mutex);
        if (host_index == 0 || host_index > m_enumerators.size()) return nullptr;
        return &m_enumerators[host_index - 1];
    }

    // A synthetic module handle for XexLoadImage's system-library case
    // ("xboxkrnl.exe", "xam.xex" are not loaded as real images, so this is
    // just a stable non-zero handle a title can hold and later pass to
    // XexGetProcedureAddress). Zero until first requested.
    uint32_t& module_handle(kernel_library library) noexcept {
        return m_module_handles[static_cast<std::size_t>(library)];
    }
    // The reverse of module_handle(): which library a handle names, or
    // kernel_library::unknown if it names none of them.
    kernel_library library_for_module_handle(uint32_t handle) const noexcept {
        if (handle == 0) return kernel_library::unknown;
        for (std::size_t i = 0; i < 3; ++i)
            if (m_module_handles[i] == handle)
                return static_cast<kernel_library>(i);
        return kernel_library::unknown;
    }

    // The guest address of the callable thunk the loader resolved for one of
    // the title's own imports - what XexGetProcedureAddress hands back for an
    // ordinal the title also imports statically. Zero if the title never
    // referenced that ordinal (see import_patcher.h's register_import_thunks,
    // which populates this from the loaded image's own import table).
    void set_import_thunk(kernel_library library, uint16_t ordinal,
                          uint32_t thunk_address) {
        m_import_thunks[thunk_key(library, ordinal)] = thunk_address;
    }
    uint32_t import_thunk(kernel_library library, uint16_t ordinal) const noexcept {
        auto it = m_import_thunks.find(thunk_key(library, ordinal));
        return it != m_import_thunks.end() ? it->second : 0;
    }

    video_state& video() noexcept { return m_video; }
    const video_state& video() const noexcept { return m_video; }

    // Physical memory (MmAllocatePhysicalMemoryEx and friends) comes from a
    // separate heap in the physical-alias region, installed by the runtime.
    // Optional: a title that never allocates physical memory needs none.
    // The stack size a thread gets when the title asks for zero. The console
    // takes it from the executable's own header rather than using a fixed
    // default, and a title that relies on that gets a stack several times
    // smaller than it expects if the header is ignored - which corrupts
    // whatever the runtime happened to allocate below it.
    void set_default_stack_size(uint32_t size) noexcept {
        if (size != 0) m_default_stack_size = size;
    }
    uint32_t default_stack_size() const noexcept { return m_default_stack_size; }

    void set_physical_heap(guest_heap* heap) noexcept {
        m_physical_heap = heap;
    }
    guest_heap& physical_heap() noexcept { return *m_physical_heap; }
    bool has_physical_heap() const noexcept { return m_physical_heap != nullptr; }

    // DbgPrint and friends record here instead of writing to stdout, so a test
    // can read back exactly what the guest asked to print - and so bring-up can
    // route these wherever it wants without the handlers knowing.
    void debug_print(std::string line) {
        const std::lock_guard<std::mutex> lock(m_debug_mutex);
        m_debug_log.push_back(std::move(line));
    }
    const std::vector<std::string>& debug_log() const noexcept {
        return m_debug_log;
    }

    // The guest can ask to stop - a bug check, or a return to firmware (reboot
    // or shutdown). The runtime must not take the host process down with it, so
    // these calls record the request here and the host loop decides what to do.
    // The first request wins; later ones do not overwrite the reason.
    void request_terminate(std::string reason) {
        if (m_terminated) return;
        m_terminated = true;
        m_terminate_reason = std::move(reason);
    }
    bool terminated() const noexcept { return m_terminated; }
    const std::string& terminate_reason() const noexcept {
        return m_terminate_reason;
    }

private:
    guest_memory* m_memory;
    guest_heap* m_heap;
    guest_heap* m_small_page_heap{nullptr};
    uint32_t m_default_stack_size{0x10000};
    guest_heap* m_physical_heap{nullptr};
    object_table m_objects;
    file_system m_files;
    video_state m_video;
    uint32_t m_xex_system_flags{0};
    uint32_t m_execution_info_address{0};
    uint32_t m_tls_raw_data_address{0};
    uint32_t m_tls_data_size{0};
    uint32_t m_tls_raw_data_size{0};
    std::mutex m_title_process_mutex;
    uint32_t m_title_process_address{0};
    std::vector<xex_resource> m_module_resources;
    uint32_t m_title_id{0};
    profile_store m_profile;
    std::vector<xdbf_achievement> m_title_achievements;
    std::vector<xdbf_leaderboard> m_title_leaderboards;
    mutable std::mutex m_session_mutex;
    std::map<uint32_t, uint64_t> m_session_properties;
    std::atomic<bool> m_blade_open{false};
    std::atomic<uint32_t> m_blade_page{0};
    std::atomic<uint32_t> m_blade_scroll{0};
    media_player_state m_media_player;
    mutable std::mutex m_media_player_mutex;
    std::deque<guest_enumerator> m_enumerators;
    mutable std::mutex m_enumerators_mutex;
    guest_thread_launcher m_guest_thread_launcher;
    input_provider m_input_provider;
    audio_client m_audio;
    audio_frame_sink m_audio_sink;
    std::function<void(const int16_t*, uint32_t, uint32_t, uint32_t)>
        m_xma_sink;
    std::atomic<uint64_t> m_audio_frames{0};
    std::atomic<uint64_t> m_audio_frames_with_signal{0};
    std::atomic<float> m_audio_peak{0.0f};
    std::atomic<float> m_channel_peak[kAudioChannels]{};
    std::mutex m_notifications_mutex;
    std::unordered_map<uint32_t, std::deque<notification>> m_notifications;
    // Atomic because a controller is plugged in on the host's own thread while
    // guest threads are creating listeners and reading these. A plain uint32_t
    // read torn against that write is a race the compiler is entitled to assume
    // cannot happen - and the mask it produced would name the wrong ports.
    std::atomic<uint32_t> m_connected_ports{0};
    std::atomic<uint32_t> m_signed_in_ports{0};
    std::deque<guest_thread> m_guest_threads;
    mutable std::mutex m_threads_mutex;
    std::atomic<uint32_t> m_last_thread_id{1}; // 1 is the main thread
    uint32_t m_module_handles[3]{}; // indexed by kernel_library
    std::unordered_map<uint32_t, uint32_t> m_import_thunks;

    static uint32_t thunk_key(kernel_library library, uint16_t ordinal) noexcept {
        return (static_cast<uint32_t>(library) << 16) | ordinal;
    }
    thread_state m_threads;
    mutable std::mutex m_debug_mutex;
    std::vector<std::string> m_debug_log;
    bool m_terminated{false};
    std::string m_terminate_reason;
};

// Installs the kernel the free-function handlers act on; pass nullptr to clear
// it. Ownership stays with the caller. Not thread-safe: a title's threads all
// share one kernel, installed once before any guest code runs.
void install_kernel(kernel_state* state) noexcept;

// The installed kernel, or nullptr if none is installed.
kernel_state* active_kernel() noexcept;

} // namespace whitty_xenon
