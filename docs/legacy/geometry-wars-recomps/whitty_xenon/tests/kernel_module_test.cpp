// Unit tests for the Xex* module handlers.
#include "whitty_xenon/host_function.h"
#include "whitty_xenon/kernel_handlers.h"
#include "whitty_xenon/kernel_state.h"

#include <cassert>
#include <cstdint>
#include <cstdio>
#include <string>
#include <vector>

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

void test_privilege_bit_matches_system_flags() {
    guest_memory memory;
    guest_heap heap;
    kernel_state kernel(memory, heap);
    std::string error;
    assert(memory.initialize(error));
    assert(heap.initialize(memory, 0x40000000, 0x100000, error));
    install_kernel(&kernel);

    // Privilege 6 is XEX_SYSTEM_INSECURE_SOCKETS (bit 0x40).
    kernel.set_xex_system_flags(0x00000040u);

    test_ctx ctx{};
    ctx.r3.u32 = 6;
    host_function<test_ctx, XexCheckExecutablePrivilege>(ctx, memory.host_unchecked(0));
    assert(ctx.r3.u32 == 1);

    ctx = test_ctx{};
    ctx.r3.u32 = 7; // a bit that is not set
    host_function<test_ctx, XexCheckExecutablePrivilege>(ctx, memory.host_unchecked(0));
    assert(ctx.r3.u32 == 0);

    install_kernel(nullptr);
}

// XexGetModuleSection resolves a XEX *resource* by name. It returns an
// NTSTATUS, and the sign bit is the whole answer: the CRT wrapper titles call
// it through tests `>= 0`, so a positive Win32-style error code reads as
// success and the title goes on to use the pointer the call never wrote. That
// is what this test is really for - a failure must be negative.
void test_module_section_resolves_resources_by_name() {
    guest_memory memory;
    guest_heap heap;
    kernel_state kernel(memory, heap);
    std::string error;
    assert(memory.initialize(error));
    assert(heap.initialize(memory, 0x40000000, 0x100000, error));
    assert(memory.commit(0x30000000, 0x1000, error));
    install_kernel(&kernel);

    // The handle a title gets for its own module, and the resources the loader
    // read out of its XEX header.
    const uint32_t hmodule = heap.allocate(4, 8);
    kernel.set_execution_info_address(hmodule);
    std::vector<xex_resource> resources;
    resources.push_back({"Eng_UTF8", 0x82433E00u, 0x000009FBu});
    resources.push_back({"5841080C", 0x82400000u, 0x000223EDu});
    kernel.set_module_resources(resources);

    // A guest-side name string, and the two out-parameters.
    const uint32_t name_ptr = 0x30000000;
    const uint32_t data_ptr = 0x30000100;
    const uint32_t size_ptr = 0x30000200;
    const char* name = "Eng_UTF8";
    for (uint32_t i = 0; i <= 8; ++i)
        memory.write_u8(name_ptr + i, static_cast<uint8_t>(name[i]));

    const auto call = [&](uint32_t module, uint32_t names) {
        memory.write_u32(data_ptr, 0xDEADBEEFu);
        memory.write_u32(size_ptr, 0xDEADBEEFu);
        test_ctx ctx{};
        ctx.r3.u32 = module;
        ctx.r4.u32 = names;
        ctx.r5.u32 = data_ptr;
        ctx.r6.u32 = size_ptr;
        host_function<test_ctx, XexGetModuleSection>(ctx,
                                                    memory.host_unchecked(0));
        return ctx.r3.u32;
    };

    assert(call(hmodule, name_ptr) == x_status::success);
    assert(memory.read_u32(data_ptr) == 0x82433E00u);
    assert(memory.read_u32(size_ptr) == 0x000009FBu);

    // A handle of zero is the running module too, which is what a title that
    // never called XexGetModuleHandle passes.
    assert(call(0, name_ptr) == x_status::success);
    assert(memory.read_u32(data_ptr) == 0x82433E00u);

    // A name that is not there: the status must have its top bit set, and both
    // out-parameters must be cleared rather than left holding the caller's
    // stale value - a caller that ignores the status then reads zero and null,
    // not the previous lookup's answer.
    const char* missing = "Fra_UTF8";
    for (uint32_t i = 0; i <= 8; ++i)
        memory.write_u8(name_ptr + i, static_cast<uint8_t>(missing[i]));
    const uint32_t not_found = call(hmodule, name_ptr);
    assert(not_found == x_status::not_found);
    assert((not_found & 0x80000000u) != 0);
    assert(memory.read_u32(data_ptr) == 0);
    assert(memory.read_u32(size_ptr) == 0);

    // A prefix of a real name is not that name.
    const char* prefix = "Eng";
    for (uint32_t i = 0; i <= 3; ++i)
        memory.write_u8(name_ptr + i, static_cast<uint8_t>(prefix[i]));
    assert((call(hmodule, name_ptr) & 0x80000000u) != 0);

    // A handle that names some other module, and a null name pointer, are both
    // failures - and negative ones.
    assert(call(hmodule + 0x1000, name_ptr) == x_status::invalid_handle);
    assert(call(hmodule, 0) == x_status::invalid_parameter);

    // A title with no resources at all gets "not found", never success.
    kernel.set_module_resources({});
    for (uint32_t i = 0; i <= 8; ++i)
        memory.write_u8(name_ptr + i, static_cast<uint8_t>(name[i]));
    assert(call(hmodule, name_ptr) == x_status::not_found);

    install_kernel(nullptr);
}

} // namespace

int main() {
    test_privilege_bit_matches_system_flags();
    test_module_section_resolves_resources_by_name();
    std::printf("kernel_module_test: all checks passed\n");
    return 0;
}
