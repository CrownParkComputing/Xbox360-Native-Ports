// Unit tests for RtlMultiByteToUnicodeN and RtlUnicodeToMultiByteN.
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
};

void test_widen_ascii() {
    fixture fx;
    const uint32_t src = fixture::scratch;
    const uint32_t dst = fixture::scratch + 0x100;
    const uint32_t written = fixture::scratch + 0x200;
    const char text[] = "abc";
    for (std::size_t i = 0; i < std::strlen(text); ++i)
        fx.memory.write_u8(src + static_cast<uint32_t>(i),
                           static_cast<uint8_t>(text[i]));

    test_ctx ctx{};
    ctx.r3.u32 = dst;
    ctx.r4.u32 = 8; // 4 code units of room
    ctx.r5.u32 = written;
    ctx.r6.u32 = src;
    ctx.r7.u32 = 3;
    host_function<test_ctx, RtlMultiByteToUnicodeN>(ctx, fx.memory.host_unchecked(0));

    assert(ctx.r3.u32 == x_status::success);
    assert(fx.memory.read_u16(dst + 0) == 'a');
    assert(fx.memory.read_u16(dst + 2) == 'b');
    assert(fx.memory.read_u16(dst + 4) == 'c');
    assert(fx.memory.read_u32(written) == 6); // 3 code units * 2 bytes
}

void test_widen_truncates_to_destination_room() {
    fixture fx;
    const uint32_t src = fixture::scratch;
    const uint32_t dst = fixture::scratch + 0x100;
    for (uint32_t i = 0; i < 5; ++i) fx.memory.write_u8(src + i, 'x');

    test_ctx ctx{};
    ctx.r3.u32 = dst;
    ctx.r4.u32 = 4; // room for only 2 code units
    ctx.r5.u32 = 0;
    ctx.r6.u32 = src;
    ctx.r7.u32 = 5;
    host_function<test_ctx, RtlMultiByteToUnicodeN>(ctx, fx.memory.host_unchecked(0));
    assert(ctx.r3.u32 == x_status::success);
}

void test_narrow_substitutes_out_of_range() {
    fixture fx;
    const uint32_t src = fixture::scratch;
    const uint32_t dst = fixture::scratch + 0x100;
    const uint32_t written = fixture::scratch + 0x200;
    fx.memory.write_u16(src + 0, 'A');
    fx.memory.write_u16(src + 2, 0x1234); // out of Latin-1 range

    test_ctx ctx{};
    ctx.r3.u32 = dst;
    ctx.r4.u32 = 2;
    ctx.r5.u32 = written;
    ctx.r6.u32 = src;
    ctx.r7.u32 = 4; // 2 code units, 4 bytes
    host_function<test_ctx, RtlUnicodeToMultiByteN>(ctx, fx.memory.host_unchecked(0));

    assert(ctx.r3.u32 == x_status::success);
    assert(fx.memory.read_u8(dst + 0) == 'A');
    assert(fx.memory.read_u8(dst + 1) == '?');
    assert(fx.memory.read_u32(written) == 2);
}

} // namespace

int main() {
    test_widen_ascii();
    test_widen_truncates_to_destination_room();
    test_narrow_substitutes_out_of_range();
    std::printf("kernel_string_test: all checks passed\n");
    return 0;
}
