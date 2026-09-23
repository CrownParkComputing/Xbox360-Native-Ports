// Unit tests for import value-record patching.
//
// A XEX import gets a "value" record (record_type 0), and a callable one also
// gets a "thunk" record (record_type 1) right after it. XenonRecomp resolves
// thunks to direct calls at compile time, so they are left alone; the value
// records are what these tests check, since they are the ones guest code
// dereferences - and Alien Breed's startup code crashes doing exactly that for
// an unpatched XexExecutableModuleHandle (see kernel_worklist / run_title
// bring-up notes).
#include "whitty_xenon/import_patcher.h"

#include <cassert>
#include <cstdio>
#include <string>

using namespace whitty_xenon;

namespace {

struct fixture {
    guest_memory memory;
    guest_heap heap;
    kernel_state kernel;

    static constexpr uint32_t heap_base = 0x40000000;
    static constexpr uint32_t heap_size = 0x00400000;
    static constexpr uint32_t image_base = 0x82000000;

    fixture() : kernel(memory, heap) {
        std::string error;
        bool ok = memory.initialize(error);
        assert(ok && "guest memory");
        ok = heap.initialize(memory, heap_base, heap_size, error);
        assert(ok && "guest heap");
        ok = memory.commit(image_base, 0x1000, error);
        assert(ok && "image commit");
    }
};

xex_import_library make_library(const char* name,
                                std::vector<uint32_t> addresses) {
    xex_import_library library;
    library.name = name;
    library.record_addresses = std::move(addresses);
    return library;
}

void test_function_value_record_gets_sentinel() {
    fixture fx;
    // KeSetEvent (ordinal 157) is a function: its value record should become
    // the same inert sentinel a real loader leaves, never a valid address.
    const uint32_t address = fixture::image_base;
    fx.memory.write_u32(address, 157); // unpatched: type 0, ordinal 157

    std::vector<xex_import_library> libraries;
    libraries.push_back(make_library("xboxkrnl.exe", {address}));
    patch_import_variables(fx.kernel, libraries);

    assert(fx.memory.read_u32(address) == 0xDEADC0DEu);
}

void test_thunk_record_is_left_untouched() {
    fixture fx;
    // A record_type 1 word (the thunk half of a pair) must not be rewritten -
    // XenonRecomp resolved its call directly at compile time.
    const uint32_t address = fixture::image_base;
    const uint32_t original = 0x01000157u; // type 1, ordinal 157
    fx.memory.write_u32(address, original);

    std::vector<xex_import_library> libraries;
    libraries.push_back(make_library("xboxkrnl.exe", {address}));
    patch_import_variables(fx.kernel, libraries);

    assert(fx.memory.read_u32(address) == original);
}

void test_variable_value_record_gets_real_backing_address() {
    fixture fx;
    // XexExecutableModuleHandle (403) is a variable: its value record must
    // become the guest address of real storage, not the raw ordinal - the
    // exact bug that crashed Alien Breed's startup.
    const uint32_t address = fixture::image_base;
    fx.memory.write_u32(address, 403);

    std::vector<xex_import_library> libraries;
    libraries.push_back(make_library("xboxkrnl.exe", {address}));
    patch_import_variables(fx.kernel, libraries);

    const uint32_t backing = fx.memory.read_u32(address);
    assert(backing != 403);      // no longer the raw ordinal
    assert(backing != 0);        // a real address
    assert(fx.memory.committed(backing, 4)); // dereferencing it is now safe
}

void test_same_variable_shares_one_backing_cell() {
    fixture fx;
    // Two value records for the same ordinal (unusual, but must not allocate
    // twice) resolve to the same backing address.
    const uint32_t a = fixture::image_base;
    const uint32_t b = fixture::image_base + 4;
    fx.memory.write_u32(a, 403);
    fx.memory.write_u32(b, 403);

    std::vector<xex_import_library> libraries;
    libraries.push_back(make_library("xboxkrnl.exe", {a, b}));
    patch_import_variables(fx.kernel, libraries);

    assert(fx.memory.read_u32(a) == fx.memory.read_u32(b));
}

void test_hardware_info_has_known_fields() {
    fixture fx;
    // XboxHardwareInfo (342): flags at +0, cpu count at +4 - matching Xenia,
    // the behavioural oracle.
    const uint32_t address = fixture::image_base;
    fx.memory.write_u32(address, 342);

    std::vector<xex_import_library> libraries;
    libraries.push_back(make_library("xboxkrnl.exe", {address}));
    patch_import_variables(fx.kernel, libraries);

    const uint32_t backing = fx.memory.read_u32(address);
    assert(fx.memory.read_u32(backing + 0) == 0x20);
    assert(fx.memory.read_u8(backing + 4) == 6);
}

void test_unresolved_ordinal_gets_inert_sentinel() {
    fixture fx;
    // An ordinal we have no catalogue entry for at all: still patched to
    // something that is not a plausible address, matching Xenia's own value.
    const uint32_t address = fixture::image_base;
    fx.memory.write_u32(address, 0xFFFF); // no such ordinal in either library

    std::vector<xex_import_library> libraries;
    libraries.push_back(make_library("xboxkrnl.exe", {address}));
    patch_import_variables(fx.kernel, libraries);

    assert(fx.memory.read_u32(address) == 0xF00DF00Du);
}

} // namespace

int main() {
    test_function_value_record_gets_sentinel();
    test_thunk_record_is_left_untouched();
    test_variable_value_record_gets_real_backing_address();
    test_same_variable_shares_one_backing_cell();
    test_hardware_info_has_known_fields();
    test_unresolved_ordinal_gets_inert_sentinel();
    std::printf("import_patcher_test: all checks passed\n");
    return 0;
}
