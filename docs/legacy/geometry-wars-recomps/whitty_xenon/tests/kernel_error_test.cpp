// Unit tests for RtlNtStatusToDosError.
#include "whitty_xenon/host_function.h"
#include "whitty_xenon/kernel_handlers.h"

#include <cassert>
#include <cstdint>
#include <cstdio>

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

uint32_t call(uint32_t status) {
    test_ctx ctx{};
    ctx.r3.u32 = status;
    host_function<test_ctx, RtlNtStatusToDosError>(ctx, nullptr);
    return ctx.r3.u32;
}

void test_success_and_customer_bit_pass_through() {
    assert(call(0) == 0);
    assert(call(0x20000001u) == 0x20000001u);
}

void test_known_statuses_map_to_win32_codes() {
    assert(call(x_status::invalid_parameter) == 87);
    assert(call(x_status::invalid_handle) == 6);
    assert(call(x_status::no_such_file) == 2);
    assert(call(x_status::no_memory) == 8);
}

void test_unknown_status_falls_back() {
    assert(call(0xC0000999u) == 317);
}

} // namespace

int main() {
    test_success_and_customer_bit_pass_through();
    test_known_statuses_map_to_win32_codes();
    test_unknown_status_falls_back();
    std::printf("kernel_error_test: all checks passed\n");
    return 0;
}
