// Unit tests for XexGetProcedureAddress.
#include "whitty_xenon/host_function.h"
#include "whitty_xenon/kernel_handlers.h"
#include "whitty_xenon/kernel_state.h"

#include <cassert>
#include <cstdint>
#include <cstdio>
#include <string>

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

struct fixture {
    guest_memory memory;
    guest_heap heap;
    kernel_state kernel;
    static constexpr uint32_t scratch = 0x30000000;

    fixture() : kernel(memory, heap) {
        std::string error;
        assert(memory.initialize(error));
        assert(heap.initialize(memory, 0x40000000, 0x00400000, error));
        assert(memory.commit(scratch, 0x1000, error));
        install_kernel(&kernel);
    }
    ~fixture() { install_kernel(nullptr); }
};

void test_resolves_a_statically_imported_ordinal() {
    fixture fx;
    const uint32_t handle = fx.kernel.heap().allocate(4, 8);
    fx.kernel.module_handle(kernel_library::xam) = handle;
    fx.kernel.set_import_thunk(kernel_library::xam, 400, 0x82D34000);

    const uint32_t out = fixture::scratch;
    test_ctx ctx{};
    ctx.r3.u32 = handle;
    ctx.r4.u32 = 400;
    ctx.r5.u32 = out;
    host_function<test_ctx, XexGetProcedureAddress>(ctx, fx.memory.host_unchecked(0));

    assert(ctx.r3.u32 == x_status::success);
    assert(fx.memory.read_u32(out) == 0x82D34000u);
}

void test_ordinal_the_title_never_references_fails() {
    fixture fx;
    const uint32_t handle = fx.kernel.heap().allocate(4, 8);
    fx.kernel.module_handle(kernel_library::xam) = handle;
    // No thunk registered for ordinal 2815.

    const uint32_t out = fixture::scratch;
    fx.memory.write_u32(out, 0xDEADBEEF);
    test_ctx ctx{};
    ctx.r3.u32 = handle;
    ctx.r4.u32 = 2815;
    ctx.r5.u32 = out;
    host_function<test_ctx, XexGetProcedureAddress>(ctx, fx.memory.host_unchecked(0));

    assert(ctx.r3.u32 == x_status::driver_entrypoint_not_found);
    assert(fx.memory.read_u32(out) == 0); // cleared, not left dangling
}

void test_name_lookup_is_not_modelled() {
    fixture fx;
    const uint32_t handle = fx.kernel.heap().allocate(4, 8);
    fx.kernel.module_handle(kernel_library::xam) = handle;

    const uint32_t out = fixture::scratch;
    test_ctx ctx{};
    ctx.r3.u32 = handle;
    ctx.r4.u32 = 0x82000600u; // a "name" ordinal: high bits set
    ctx.r5.u32 = out;
    host_function<test_ctx, XexGetProcedureAddress>(ctx, fx.memory.host_unchecked(0));

    assert(ctx.r3.u32 == x_status::driver_entrypoint_not_found);
}

} // namespace

int main() {
    test_resolves_a_statically_imported_ordinal();
    test_ordinal_the_title_never_references_fails();
    test_name_lookup_is_not_modelled();
    std::printf("kernel_xex_proc_test: all checks passed\n");
    return 0;
}
