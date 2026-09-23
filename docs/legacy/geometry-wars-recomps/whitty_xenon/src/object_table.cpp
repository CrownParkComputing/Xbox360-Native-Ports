#include "whitty_xenon/object_table.h"

namespace whitty_xenon {

uint32_t object_table::add(object_type type, uint32_t guest_object,
                           uint32_t host_index) {
    const std::lock_guard<std::recursive_mutex> lock(m_mutex);
    const kernel_object entry{type, guest_object, 1, host_index};
    // Reuse a freed slot if one exists, so a title that churns handles does not
    // grow the table without bound.
    for (std::size_t slot = 0; slot < m_slots.size(); ++slot) {
        if (m_slots[slot].reference_count == 0) {
            m_slots[slot] = entry;
            return handle_for_slot(static_cast<uint32_t>(slot));
        }
    }
    m_slots.push_back(entry);
    return handle_for_slot(static_cast<uint32_t>(m_slots.size() - 1));
}

kernel_object* object_table::lookup(uint32_t handle) noexcept {
    const std::lock_guard<std::recursive_mutex> lock(m_mutex);
    if (!is_handle(handle)) return nullptr;
    const uint32_t slot = slot_for_handle(handle);
    if (slot >= m_slots.size()) return nullptr;
    kernel_object& object = m_slots[slot];
    return object.reference_count == 0 ? nullptr : &object;
}

const kernel_object* object_table::lookup(uint32_t handle) const noexcept {
    const std::lock_guard<std::recursive_mutex> lock(m_mutex);
    if (!is_handle(handle)) return nullptr;
    const uint32_t slot = slot_for_handle(handle);
    if (slot >= m_slots.size()) return nullptr;
    const kernel_object& object = m_slots[slot];
    return object.reference_count == 0 ? nullptr : &object;
}

kernel_object* object_table::lookup_by_guest_object(
    uint32_t guest_object) noexcept {
    const std::lock_guard<std::recursive_mutex> lock(m_mutex);
    if (guest_object == 0) return nullptr;
    for (kernel_object& object : m_slots) {
        if (object.reference_count != 0 && object.guest_object == guest_object)
            return &object;
    }
    return nullptr;
}

uint32_t object_table::duplicate(uint32_t handle) {
    const std::lock_guard<std::recursive_mutex> lock(m_mutex);
    const kernel_object* source = lookup(handle);
    if (!source) return kInvalidHandle;
    // A new handle to the same object; the object itself is unchanged, so a new
    // slot referencing the same guest object is exactly a second handle to it.
    // Read every field before add(), which may reallocate and invalidate it.
    const object_type type = source->type;
    const uint32_t guest_object = source->guest_object;
    const uint32_t host_index = source->host_index;
    return add(type, guest_object, host_index);
}

bool object_table::close(uint32_t handle) {
    const std::lock_guard<std::recursive_mutex> lock(m_mutex);
    kernel_object* object = lookup(handle);
    if (!object) return false;
    --object->reference_count; // frees the slot when it reaches zero
    return true;
}

bool object_table::dereference(uint32_t guest_object) {
    const std::lock_guard<std::recursive_mutex> lock(m_mutex);
    kernel_object* object = lookup_by_guest_object(guest_object);
    if (!object) return false;
    if (object->reference_count != 0) --object->reference_count;
    return true;
}

std::size_t object_table::live_objects() const noexcept {
    const std::lock_guard<std::recursive_mutex> lock(m_mutex);
    std::size_t count = 0;
    for (const kernel_object& object : m_slots)
        if (object.reference_count != 0) ++count;
    return count;
}

} // namespace whitty_xenon
