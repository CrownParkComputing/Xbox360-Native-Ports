// Unit tests for the kernel object handle table.
//
// This table is the spine every dispatcher object hangs off, so the ways it can
// go wrong are checked directly: a handle that decodes to the wrong slot, a
// closed handle that still resolves, a duplicate that is not independent, and
// the handle encoding itself, which has to match the console so a title's own
// handle arithmetic lands on the right slot.
#include "whitty_xenon/object_table.h"

#include <cassert>
#include <cstdio>

using namespace whitty_xenon;

namespace {

void test_handle_encoding() {
    // 0xF8000000 + (slot << 2), and back.
    assert(object_table::handle_for_slot(0) == 0xF8000000u);
    assert(object_table::handle_for_slot(1) == 0xF8000004u);
    assert(object_table::handle_for_slot(7) == 0xF800001Cu);
    assert(object_table::slot_for_handle(0xF8000004u) == 1);
    assert(object_table::slot_for_handle(0xF800001Cu) == 7);
    // A small integer is not a kernel handle.
    assert(!object_table::is_handle(4));
    assert(object_table::is_handle(0xF8000000u));
}

void test_add_and_lookup() {
    object_table table;
    const uint32_t h1 = table.add(object_type::event, 0x40000000);
    const uint32_t h2 = table.add(object_type::semaphore, 0x40000100);
    assert(object_table::is_handle(h1) && object_table::is_handle(h2));
    assert(h1 != h2);
    assert(table.live_objects() == 2);

    kernel_object* o1 = table.lookup(h1);
    assert(o1 && o1->type == object_type::event && o1->guest_object == 0x40000000);
    kernel_object* o2 = table.lookup(h2);
    assert(o2 && o2->type == object_type::semaphore &&
           o2->guest_object == 0x40000100);

    // A handle that was never issued does not resolve.
    assert(table.lookup(0xF8000FFCu) == nullptr);
    // A non-handle integer never resolves.
    assert(table.lookup(0x40000000) == nullptr);
}

void test_close_frees_and_reuses_slot() {
    object_table table;
    const uint32_t h1 = table.add(object_type::event, 0x1000);
    assert(table.close(h1));
    assert(table.lookup(h1) == nullptr); // no longer live
    assert(table.live_objects() == 0);
    // Closing a dead handle is reported, not silently accepted.
    assert(!table.close(h1));

    // The freed slot is reused, so the table does not grow unbounded.
    const uint32_t h2 = table.add(object_type::event, 0x2000);
    assert(h2 == h1); // same slot -> same handle value
    assert(table.lookup(h2)->guest_object == 0x2000);
}

void test_reference_counts_hold_object_open() {
    object_table table;
    const uint32_t h = table.add(object_type::event, 0x3000);
    kernel_object* object = table.lookup(h);
    table.reference(*object); // an Ob reference beyond the handle
    assert(object->reference_count == 2);

    // Closing the handle drops one reference but the object stays live.
    assert(table.close(h));
    assert(table.lookup(h) != nullptr);
    assert(table.lookup(h)->reference_count == 1);

    // Dropping the Ob reference by guest pointer frees it.
    assert(table.dereference(0x3000));
    assert(table.lookup(h) == nullptr);
    assert(table.live_objects() == 0);
}

void test_lookup_by_guest_object() {
    object_table table;
    table.add(object_type::event, 0xAAAA);
    table.add(object_type::event, 0xBBBB);
    kernel_object* found = table.lookup_by_guest_object(0xBBBB);
    assert(found && found->guest_object == 0xBBBB);
    assert(table.lookup_by_guest_object(0xCCCC) == nullptr);
    assert(table.lookup_by_guest_object(0) == nullptr);
}

void test_duplicate_is_an_independent_handle() {
    object_table table;
    const uint32_t h1 = table.add(object_type::event, 0x5000);
    const uint32_t h2 = table.duplicate(h1);
    assert(object_table::is_handle(h2) && h2 != h1);
    assert(table.lookup(h2)->guest_object == 0x5000); // same object

    // Closing one handle leaves the other resolving.
    assert(table.close(h1));
    assert(table.lookup(h1) == nullptr);
    assert(table.lookup(h2) != nullptr);
    assert(table.lookup(h2)->guest_object == 0x5000);

    // Duplicating a dead handle fails.
    assert(table.duplicate(h1) == object_table::kInvalidHandle);
}

} // namespace

int main() {
    test_handle_encoding();
    test_add_and_lookup();
    test_close_frees_and_reuses_slot();
    test_reference_counts_hold_object_open();
    test_lookup_by_guest_object();
    test_duplicate_is_an_independent_handle();
    std::printf("object_table_test: all checks passed\n");
    return 0;
}
