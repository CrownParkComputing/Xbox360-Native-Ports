// object_table.h - handles for the kernel's dispatcher objects.
//
// Once a title creates events, semaphores, mutants, threads or files, it refers
// to them by 32-bit handles the kernel hands back. This is the table behind
// those handles: it maps a handle to the object it names, and it is the one
// piece of state that every one of those object types shares. Events are the
// first type to use it; the rest slot in without changing this table.
//
// The handle encoding matches the console (a value Xenia reproduces): a handle
// is `0xF8000000 + (slot << 2)`, so the low bits index a slot and the high bits
// mark the value as a kernel handle rather than a small integer a title might
// pass by mistake.
//
// An object here is deliberately thin. The object's live state - an event's
// signalled flag, a semaphore's count - lives in the guest dispatcher header in
// guest memory, where the recompiled code and the Ke* calls both reach it
// directly; the table only needs to know where that header is and how many
// references are outstanding, so it stores the guest pointer and a reference
// count and nothing more.
#pragma once

#include <cstddef>
#include <cstdint>
#include <deque>
#include <mutex>

namespace whitty_xenon {

// The kind of object a handle names. The table itself does not care which, but
// callers (ObReferenceObjectByHandle's type check, diagnostics) do.
enum class object_type : uint8_t {
    unknown,
    event,
    semaphore,
    mutant,
    thread,
    file,
    enumerator,
};

struct kernel_object {
    object_type type{object_type::unknown};
    uint32_t guest_object{0};    // guest address of the dispatcher header
    uint32_t reference_count{0}; // handles plus outstanding Ob references
    // A handle onto a host resource that has no guest dispatcher header - a
    // file's entry in the file system, for one. Zero for objects (events,
    // semaphores) whose whole state lives in guest memory.
    uint32_t host_index{0};
};

class object_table {
public:
    // Handles are 0xF8000000 + (slot << 2); slot 0 is a valid slot, so a null
    // (zero) handle is never produced.
    static constexpr uint32_t kHandleBase = 0xF8000000u;
    static constexpr uint32_t kInvalidHandle = 0xFFFFFFFFu;

    static bool is_handle(uint32_t handle) noexcept {
        return (handle & kHandleBase) == kHandleBase;
    }
    static uint32_t handle_for_slot(uint32_t slot) noexcept {
        return kHandleBase + (slot << 2);
    }
    static uint32_t slot_for_handle(uint32_t handle) noexcept {
        return (handle & ~kHandleBase) >> 2;
    }

    // Registers a new object with one reference, and returns its handle.
    // host_index links the object to a host resource (a file); it is zero for
    // objects whose state lives entirely in guest memory.
    uint32_t add(object_type type, uint32_t guest_object,
                 uint32_t host_index = 0);

    // The object a handle names, or nullptr if the handle is not live.
    kernel_object* lookup(uint32_t handle) noexcept;
    const kernel_object* lookup(uint32_t handle) const noexcept;

    // The object at a guest dispatcher-header address, or nullptr. Used by
    // ObDereferenceObject, which is handed the object pointer, not a handle.
    kernel_object* lookup_by_guest_object(uint32_t guest_object) noexcept;

    // Creates a second handle to the object `handle` names, taking a reference.
    // Returns kInvalidHandle if the source handle is not live.
    uint32_t duplicate(uint32_t handle);

    // Drops one reference from the object a handle names, freeing the slot at
    // zero. Returns false if the handle was not live.
    bool close(uint32_t handle);

    // Takes one reference without minting a handle (ObReferenceObjectByHandle).
    void reference(kernel_object& object) noexcept { ++object.reference_count; }

    // Drops one reference from the object at a guest address, freeing it at
    // zero. Returns false if no object lives there.
    bool dereference(uint32_t guest_object);

    std::size_t live_objects() const noexcept;

private:
    // Slot-indexed. A slot with reference_count 0 is free and reusable.
    //
    // A deque, not a vector, because lookup() hands out a pointer INTO this
    // container and the caller uses it after returning - while another guest
    // thread may be creating an object. A vector would move every element on
    // growth and turn that pointer into a dangling one, which shows up as an
    // intermittent crash in whichever thread was unlucky. A deque never moves
    // what it already holds.
    std::deque<kernel_object> m_slots;
    // Guards the slot list itself. The objects it holds are guest state, which
    // the guest synchronises as it would on hardware; this only has to keep
    // the container's own bookkeeping consistent. Recursive because some
    // operations are defined in terms of the others - dereference() looks the
    // object up first.
    mutable std::recursive_mutex m_mutex;
};

} // namespace whitty_xenon
