// Unit tests for XexLoadImage.
#include "whitty_xenon/host_function.h"
#include "whitty_xenon/kernel_handlers.h"
#include "whitty_xenon/kernel_state.h"

#include <cassert>
#include <cstdint>
#include <cstdio>
#include <cstring>
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

    void write_name(uint32_t address, const char* text) {
        for (std::size_t i = 0; text[i] != '\0'; ++i)
            memory.write_u8(address + static_cast<uint32_t>(i),
                            static_cast<uint8_t>(text[i]));
        memory.write_u8(address + static_cast<uint32_t>(std::strlen(text)), 0);
    }
};

void test_system_library_gets_stable_handle() {
    fixture fx;
    const uint32_t name = fixture::scratch;
    const uint32_t hmodule = fixture::scratch + 0x100;
    fx.write_name(name, "xam.xex");

    test_ctx ctx{};
    ctx.r3.u32 = name;
    ctx.r6.u32 = hmodule;
    host_function<test_ctx, XexLoadImage>(ctx, fx.memory.host_unchecked(0));
    assert(ctx.r3.u32 == x_status::success);
    const uint32_t handle = fx.memory.read_u32(hmodule);
    assert(handle != 0);

    // A second load of the same module returns the SAME handle.
    fx.memory.write_u32(hmodule, 0xDEADBEEF);
    ctx = test_ctx{};
    ctx.r3.u32 = name;
    ctx.r6.u32 = hmodule;
    host_function<test_ctx, XexLoadImage>(ctx, fx.memory.host_unchecked(0));
    assert(fx.memory.read_u32(hmodule) == handle);
}

void test_unload_known_module_succeeds_as_a_noop() {
    fixture fx;
    const uint32_t name = fixture::scratch;
    const uint32_t hmodule = fixture::scratch + 0x100;
    fx.write_name(name, "xam.xex");

    test_ctx ctx{};
    ctx.r3.u32 = name;
    ctx.r6.u32 = hmodule;
    host_function<test_ctx, XexLoadImage>(ctx, fx.memory.host_unchecked(0));
    const uint32_t handle = fx.memory.read_u32(hmodule);

    ctx = test_ctx{};
    ctx.r3.u32 = handle;
    host_function<test_ctx, XexUnloadImage>(ctx, fx.memory.host_unchecked(0));
    assert(ctx.r3.u32 == x_status::success);
}

void test_unload_unknown_handle_fails() {
    fixture fx;
    test_ctx ctx{};
    ctx.r3.u32 = 0xDEADBEEF;
    host_function<test_ctx, XexUnloadImage>(ctx, fx.memory.host_unchecked(0));
    assert(ctx.r3.u32 == x_status::invalid_handle);
}

void test_unknown_module_fails() {
    fixture fx;
    const uint32_t name = fixture::scratch;
    const uint32_t hmodule = fixture::scratch + 0x100;
    fx.write_name(name, "some_other.xex");

    test_ctx ctx{};
    ctx.r3.u32 = name;
    ctx.r6.u32 = hmodule;
    host_function<test_ctx, XexLoadImage>(ctx, fx.memory.host_unchecked(0));
    assert(ctx.r3.u32 == x_status::no_such_file);
}

} // namespace

int main() {
    test_system_library_gets_stable_handle();
    test_unload_known_module_succeeds_as_a_noop();
    test_unload_unknown_handle_fails();
    test_unknown_module_fails();
    std::printf("kernel_xex_load_test: all checks passed\n");
    return 0;
}
