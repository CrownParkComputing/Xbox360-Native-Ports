// Unit tests for the indirect-call function table.
//
// The recompiler computes a slot as (address - code_base) * 2 bytes into a
// table placed immediately after the image. That arithmetic is reproduced here
// independently and checked against the implementation: if the two ever
// disagree, every indirect call in a title lands on the wrong function, which
// is close to undiagnosable from the symptoms.
#include "whitty_xenon/memory.h"
#include "whitty_xenon/ppc_runtime.h"

#include <cassert>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>

using namespace whitty_xenon;

namespace {

// Stand-ins for recompiled functions; only their addresses matter here.
void stub_a(ppc_context&, uint8_t*) {}
void stub_b(ppc_context&, uint8_t*) {}
void stub_c(ppc_context&, uint8_t*) {}

ppc_image_layout make_layout() {
    ppc_image_layout layout;
    layout.image_base = 0x82000000u;
    layout.image_size = 0x00100000u;
    layout.code_base = 0x82010000u;
    layout.code_size = 0x00001000u; // 1024 instructions
    return layout;
}

void test_layout_arithmetic() {
    const ppc_image_layout layout = make_layout();
    // The table sits directly after the image.
    assert(layout.table_base() == 0x82100000u);
    // One host pointer per instruction slot.
    assert(layout.table_bytes() == 0x1000ull * 2);
    assert(layout.table_bytes() ==
           (layout.code_size / 4) * sizeof(ppc_function));

    assert(layout.contains_code(0x82010000u));
    assert(layout.contains_code(0x82010FFCu));
    assert(!layout.contains_code(0x82011000u));
    assert(!layout.contains_code(0x8200FFFCu));
}

void test_initialize_commits_and_clears() {
    guest_memory memory;
    std::string error;
    assert(memory.initialize(error));
    const ppc_image_layout layout = make_layout();

    ppc_function_table table;
    assert(!table.initialized());
    assert(table.initialize(memory, layout, error));
    assert(table.initialized());
    assert(table.populated() == 0);
    // The whole table must be readable, and start empty so a call into an
    // address that was never recompiled is detectable.
    assert(memory.committed(layout.table_base(),
                            static_cast<uint32_t>(layout.table_bytes())));
    assert(table.get(0x82010000u) == nullptr);
    assert(table.get(0x82010FFCu) == nullptr);
}

void test_set_and_get_round_trip() {
    guest_memory memory;
    std::string error;
    assert(memory.initialize(error));
    ppc_function_table table;
    assert(table.initialize(memory, make_layout(), error));

    assert(table.set(0x82010000u, &stub_a, error));
    assert(table.set(0x82010004u, &stub_b, error));
    assert(table.set(0x82010FFCu, &stub_c, error));
    assert(table.populated() == 3);

    assert(table.get(0x82010000u) == &stub_a);
    assert(table.get(0x82010004u) == &stub_b);
    assert(table.get(0x82010FFCu) == &stub_c);
    // Slots in between stay empty.
    assert(table.get(0x82010008u) == nullptr);
}

void test_slot_offset_matches_the_recompiler_formula() {
    // Independently recompute where the recompiler will look, and confirm the
    // pointer really is at that address in guest memory.
    guest_memory memory;
    std::string error;
    assert(memory.initialize(error));
    const ppc_image_layout layout = make_layout();
    ppc_function_table table;
    assert(table.initialize(memory, layout, error));

    const uint32_t address = 0x82010040u;
    assert(table.set(address, &stub_a, error));

    const uint64_t expected_offset =
        (static_cast<uint64_t>(address) - layout.code_base) * 2;
    const uint32_t slot =
        static_cast<uint32_t>(layout.table_base() + expected_offset);
    const void* host = memory.host(slot, sizeof(ppc_function));
    assert(host);
    ppc_function stored = nullptr;
    std::memcpy(&stored, host, sizeof(stored));
    assert(stored == &stub_a);

    // Sanity: the 16th instruction slot is 16 pointers in.
    assert(expected_offset == 16 * sizeof(ppc_function));
}

void test_pointers_are_stored_native_not_byte_swapped() {
    // The recompiled code reads these back as host pointers, so they must not
    // go through the guest byte-swapping accessors.
    guest_memory memory;
    std::string error;
    assert(memory.initialize(error));
    const ppc_image_layout layout = make_layout();
    ppc_function_table table;
    assert(table.initialize(memory, layout, error));
    assert(table.set(0x82010000u, &stub_a, error));

    const void* host = memory.host(layout.table_base(), sizeof(ppc_function));
    uintptr_t raw = 0;
    std::memcpy(&raw, host, sizeof(raw));
    assert(raw == reinterpret_cast<uintptr_t>(&stub_a));
}

void test_rejects_addresses_outside_the_code_section() {
    guest_memory memory;
    std::string error;
    assert(memory.initialize(error));
    ppc_function_table table;
    assert(table.initialize(memory, make_layout(), error));

    // Below the code section.
    error.clear();
    assert(!table.set(0x8200FFFCu, &stub_a, error));
    assert(!error.empty());
    // Past the end of it.
    error.clear();
    assert(!table.set(0x82011000u, &stub_a, error));
    assert(!error.empty());
    // Misaligned: PowerPC instructions are 4 bytes, so this means the caller's
    // idea of the layout is wrong.
    error.clear();
    assert(!table.set(0x82010002u, &stub_a, error));
    assert(!error.empty());

    assert(table.get(0x82011000u) == nullptr);
    assert(table.get(0x82010002u) == nullptr);
}

void test_install_reports_how_far_it_got() {
    guest_memory memory;
    std::string error;
    assert(memory.initialize(error));
    ppc_function_table table;
    assert(table.initialize(memory, make_layout(), error));

    const std::vector<ppc_function_mapping> good{
        {0x82010000u, &stub_a}, {0x82010004u, &stub_b}, {0x82010008u, &stub_c}};
    assert(table.install(good, error) == 3);
    assert(table.populated() == 3);

    // A bad entry stops the walk and says how many made it, rather than
    // silently skipping the rest.
    const std::vector<ppc_function_mapping> mixed{
        {0x8201000Cu, &stub_a}, {0x99999999u, &stub_b}, {0x82010010u, &stub_c}};
    error.clear();
    assert(table.install(mixed, error) == 1);
    assert(!error.empty());
    assert(table.get(0x8201000Cu) == &stub_a);
    assert(table.get(0x82010010u) == nullptr);
}

void test_initialize_rejects_bad_layouts() {
    guest_memory memory;
    std::string error;
    assert(memory.initialize(error));

    ppc_image_layout layout = make_layout();
    layout.code_size = 0;
    ppc_function_table table;
    error.clear();
    assert(!table.initialize(memory, layout, error));
    assert(!error.empty());

    layout = make_layout();
    layout.code_size = 0x1002; // not a whole number of instructions
    error.clear();
    assert(!table.initialize(memory, layout, error));
    assert(!error.empty());

    layout = make_layout();
    layout.code_base = 0x82010002u; // misaligned
    error.clear();
    assert(!table.initialize(memory, layout, error));
    assert(!error.empty());

    // A table that would run off the end of the address space.
    layout = make_layout();
    layout.image_base = 0xFF000000u;
    layout.image_size = 0x00F00000u;
    layout.code_base = 0xFF000000u;
    layout.code_size = 0x00800000u;
    error.clear();
    assert(!table.initialize(memory, layout, error));
    assert(!error.empty());
}

// The memory macros exactly as XenonRecomp emits them. Reproducing them here
// rather than including the recompiler's header is deliberate: this checks that
// our address space agrees with what generated code will actually do, so a
// disagreement shows up as a failing assert instead of as a title that reads
// plausible-looking garbage.
#define PPC_LOAD_U8(x) *(volatile uint8_t*)(base + (x))
#define PPC_LOAD_U16(x) __builtin_bswap16(*(volatile uint16_t*)(base + (x)))
#define PPC_LOAD_U32(x) __builtin_bswap32(*(volatile uint32_t*)(base + (x)))
#define PPC_LOAD_U64(x) __builtin_bswap64(*(volatile uint64_t*)(base + (x)))
#define PPC_STORE_U8(x, y) *(volatile uint8_t*)(base + (x)) = (y)
#define PPC_STORE_U16(x, y) \
    *(volatile uint16_t*)(base + (x)) = __builtin_bswap16(y)
#define PPC_STORE_U32(x, y) \
    *(volatile uint32_t*)(base + (x)) = __builtin_bswap32(y)
#define PPC_STORE_U64(x, y) \
    *(volatile uint64_t*)(base + (x)) = __builtin_bswap64(y)

constexpr uint32_t kWorkAddress = 0x82020000u;

// Recompiled functions take a PPCContext by reference. These stand-ins never
// touch it, but forming the reference from a null pointer would be undefined,
// so it is backed by real storage.
alignas(16) unsigned char g_context_storage[512]{};
ppc_context& test_context() {
    return *reinterpret_cast<ppc_context*>(g_context_storage);
}

// A stand-in for a recompiled function: reads two guest words, writes their
// sum back, in exactly the way generated code would.
void recompiled_add(ppc_context&, uint8_t* base) {
    const uint32_t left = PPC_LOAD_U32(kWorkAddress);
    const uint32_t right = PPC_LOAD_U32(kWorkAddress + 4);
    PPC_STORE_U32(kWorkAddress + 8, left + right);
}

void recompiled_widths(ppc_context&, uint8_t* base) {
    PPC_STORE_U8(kWorkAddress + 0x20, 0x5Au);
    PPC_STORE_U16(kWorkAddress + 0x22, 0xABCDu);
    PPC_STORE_U32(kWorkAddress + 0x24, 0xDEADBEEFu);
    PPC_STORE_U64(kWorkAddress + 0x28, 0x0123456789ABCDEFull);
}

void test_recompiled_code_agrees_with_guest_memory() {
    guest_memory memory;
    std::string error;
    assert(memory.initialize(error));
    assert(memory.commit(kWorkAddress, kPageSize, error));

    // The base pointer generated code receives is the start of the address
    // space, so a guest address indexes it directly.
    uint8_t* base = memory.host_unchecked(0);

    // Write operands through our accessors...
    memory.write_u32(kWorkAddress, 2);
    memory.write_u32(kWorkAddress + 4, 40);
    // ...run recompiled-style code over them...
    recompiled_add(test_context(), base);
    // ...and read the result back through our accessors. Agreement here is the
    // whole compatibility contract: same addresses, same byte order.
    assert(memory.read_u32(kWorkAddress + 8) == 42);

    // Every width must agree, not just the 32-bit one.
    recompiled_widths(test_context(), base);
    assert(memory.read_u8(kWorkAddress + 0x20) == 0x5Au);
    assert(memory.read_u16(kWorkAddress + 0x22) == 0xABCDu);
    assert(memory.read_u32(kWorkAddress + 0x24) == 0xDEADBEEFu);
    assert(memory.read_u64(kWorkAddress + 0x28) == 0x0123456789ABCDEFull);

    // And in the other direction: values we write are what generated code sees.
    memory.write_u32(kWorkAddress + 0x40, 0x11223344u);
    assert(PPC_LOAD_U32(kWorkAddress + 0x40) == 0x11223344u);
    memory.write_u16(kWorkAddress + 0x44, 0x8899u);
    assert(PPC_LOAD_U16(kWorkAddress + 0x44) == 0x8899u);
}

void test_dispatch_through_the_table_runs_the_function() {
    // The end of the contract: look a function up by guest address the way an
    // indirect call does, then call it.
    guest_memory memory;
    std::string error;
    assert(memory.initialize(error));
    assert(memory.commit(kWorkAddress, kPageSize, error));
    ppc_function_table table;
    assert(table.initialize(memory, make_layout(), error));
    assert(table.set(0x82010100u, &recompiled_add, error));

    memory.write_u32(kWorkAddress, 1000);
    memory.write_u32(kWorkAddress + 4, 337);

    ppc_function target = table.get(0x82010100u);
    assert(target == &recompiled_add);
    target(test_context(), memory.host_unchecked(0));
    assert(memory.read_u32(kWorkAddress + 8) == 1337);
}

void test_uninitialized_table_is_safe() {
    ppc_function_table table;
    std::string error;
    assert(table.get(0x82010000u) == nullptr);
    assert(!table.set(0x82010000u, &stub_a, error));
    assert(!error.empty());
}

} // namespace

int main() {
    test_layout_arithmetic();
    test_initialize_commits_and_clears();
    test_set_and_get_round_trip();
    test_slot_offset_matches_the_recompiler_formula();
    test_pointers_are_stored_native_not_byte_swapped();
    test_rejects_addresses_outside_the_code_section();
    test_install_reports_how_far_it_got();
    test_initialize_rejects_bad_layouts();
    test_recompiled_code_agrees_with_guest_memory();
    test_dispatch_through_the_table_runs_the_function();
    test_uninitialized_table_is_safe();
    std::printf("ppc_runtime_test: all checks passed\n");
    return 0;
}
