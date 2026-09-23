// Unit tests for the assorted kernel services batch.
//
// Only the ones with real logic are worth pinning: the calendar conversion
// (which is hand-rolled arithmetic relative to 1601), the config-setting
// table, the memory query's region walk, and the ANSI/Unicode narrowing.
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
        assert(memory.commit(scratch, 0x2000, error));
        install_kernel(&kernel);
    }
    ~fixture() { install_kernel(nullptr); }
    uint8_t* base() noexcept { return memory.host_unchecked(0); }
};

// Writes a TIME_FIELDS block and returns its address.
uint32_t put_fields(fixture& fx, uint32_t at, uint16_t year, uint16_t month,
                    uint16_t day, uint16_t hour, uint16_t minute,
                    uint16_t second, uint16_t millis) {
    fx.memory.write_u16(at + 0x00, year);
    fx.memory.write_u16(at + 0x02, month);
    fx.memory.write_u16(at + 0x04, day);
    fx.memory.write_u16(at + 0x06, hour);
    fx.memory.write_u16(at + 0x08, minute);
    fx.memory.write_u16(at + 0x0A, second);
    fx.memory.write_u16(at + 0x0C, millis);
    return at;
}

void test_time_epoch_is_zero() {
    fixture fx;
    const uint32_t fields = put_fields(fx, fixture::scratch, 1601, 1, 1, 0, 0, 0, 0);
    const uint32_t time = fixture::scratch + 0x100;

    test_ctx ctx{};
    ctx.r3.u32 = fields;
    ctx.r4.u32 = time;
    host_function<test_ctx, RtlTimeFieldsToTime>(ctx, fx.base());
    assert(ctx.r3.u32 == 1);
    // 1601-01-01T00:00:00 is tick zero by definition.
    assert(fx.memory.read_u64(time) == 0);
}

void test_time_round_trip() {
    fixture fx;
    // A leap-year date past several century rules, to exercise the arithmetic.
    const uint32_t fields = put_fields(fx, fixture::scratch, 2024, 2, 29,
                                       13, 45, 30, 500);
    const uint32_t time = fixture::scratch + 0x100;
    test_ctx ctx{};
    ctx.r3.u32 = fields;
    ctx.r4.u32 = time;
    host_function<test_ctx, RtlTimeFieldsToTime>(ctx, fx.base());
    assert(ctx.r3.u32 == 1);

    const uint32_t back = fixture::scratch + 0x200;
    ctx = test_ctx{};
    ctx.r3.u32 = time;
    ctx.r4.u32 = back;
    host_function<test_ctx, RtlTimeToTimeFields>(ctx, fx.base());
    assert(ctx.r3.u32 == 1);

    assert(fx.memory.read_u16(back + 0x00) == 2024);
    assert(fx.memory.read_u16(back + 0x02) == 2);
    assert(fx.memory.read_u16(back + 0x04) == 29);
    assert(fx.memory.read_u16(back + 0x06) == 13);
    assert(fx.memory.read_u16(back + 0x08) == 45);
    assert(fx.memory.read_u16(back + 0x0A) == 30);
    assert(fx.memory.read_u16(back + 0x0C) == 500);
    // 2024-02-29 was a Thursday; weekday 0 is Sunday.
    assert(fx.memory.read_u16(back + 0x0E) == 4);
}

void test_xconfig_known_and_unknown() {
    fixture fx;
    const uint32_t buffer = fixture::scratch;
    const uint32_t required = fixture::scratch + 0x100;

    // User language: a 4-byte setting.
    test_ctx ctx{};
    ctx.r3.u32 = 0x0003;
    ctx.r4.u32 = 0x0009;
    ctx.r5.u32 = buffer;
    ctx.r6.u32 = 4;
    ctx.r7.u32 = required;
    host_function<test_ctx, ExGetXConfigSetting>(ctx, fx.base());
    assert(ctx.r3.u32 == x_status::success);
    assert(fx.memory.read_u32(buffer) == 1); // English
    assert(fx.memory.read_u16(required) == 4);

    // Country is a single byte - the size must be reported, not assumed.
    ctx = test_ctx{};
    ctx.r3.u32 = 0x0003;
    ctx.r4.u32 = 0x000E;
    ctx.r5.u32 = buffer;
    ctx.r6.u32 = 4;
    ctx.r7.u32 = required;
    host_function<test_ctx, ExGetXConfigSetting>(ctx, fx.base());
    assert(ctx.r3.u32 == x_status::success);
    assert(fx.memory.read_u16(required) == 1);

    // An unknown setting is refused rather than answered with zero.
    ctx = test_ctx{};
    ctx.r3.u32 = 0x0003;
    ctx.r4.u32 = 0x7777;
    ctx.r5.u32 = buffer;
    ctx.r6.u32 = 4;
    host_function<test_ctx, ExGetXConfigSetting>(ctx, fx.base());
    assert(ctx.r3.u32 == x_status::invalid_parameter);

    // Too small a buffer is reported as such.
    ctx = test_ctx{};
    ctx.r3.u32 = 0x0003;
    ctx.r4.u32 = 0x0009;
    ctx.r5.u32 = buffer;
    ctx.r6.u32 = 2;
    host_function<test_ctx, ExGetXConfigSetting>(ctx, fx.base());
    assert(ctx.r3.u32 == x_status::buffer_too_small);
}

void test_query_virtual_memory_reports_committed_region() {
    fixture fx;
    const uint32_t info = fixture::scratch + 0x400;
    test_ctx ctx{};
    ctx.r3.u32 = fixture::scratch; // committed in the fixture
    ctx.r4.u32 = info;
    host_function<test_ctx, NtQueryVirtualMemory>(ctx, fx.base());
    assert(ctx.r3.u32 == x_status::success);
    assert(fx.memory.read_u32(info + 0x00) == fixture::scratch); // base
    assert(fx.memory.read_u32(info + 0x10) == 0x1000);           // committed
    assert(fx.memory.read_u32(info + 0x0C) >= 0x1000);           // region size

    // An address with nothing mapped reports free.
    ctx = test_ctx{};
    ctx.r3.u32 = 0x50000000;
    ctx.r4.u32 = info;
    host_function<test_ctx, NtQueryVirtualMemory>(ctx, fx.base());
    assert(ctx.r3.u32 == x_status::success);
    assert(fx.memory.read_u32(info + 0x10) == 0x10000); // free
}

void test_unicode_to_ansi_allocates() {
    fixture fx;
    const uint32_t source_buffer = fixture::scratch;
    const uint32_t source = fixture::scratch + 0x100;
    const uint32_t destination = fixture::scratch + 0x200;
    const char text[] = "hello";
    for (uint32_t i = 0; i < 5; ++i)
        fx.memory.write_u16(source_buffer + i * 2, static_cast<uint16_t>(text[i]));
    fx.memory.write_u16(source + 0, 10); // bytes
    fx.memory.write_u16(source + 2, 10);
    fx.memory.write_u32(source + 4, source_buffer);

    test_ctx ctx{};
    ctx.r3.u32 = destination;
    ctx.r4.u32 = source;
    ctx.r5.u32 = 1; // allocate
    host_function<test_ctx, RtlUnicodeStringToAnsiString>(ctx, fx.base());
    assert(ctx.r3.u32 == x_status::success);
    assert(fx.memory.read_u16(destination + 0) == 5);
    const uint32_t out = fx.memory.read_u32(destination + 4);
    assert(out != 0);
    for (uint32_t i = 0; i < 5; ++i)
        assert(fx.memory.read_u8(out + i) == static_cast<uint8_t>(text[i]));
    assert(fx.memory.read_u8(out + 5) == 0); // NUL terminated

    // Freeing releases the buffer and clears the descriptor.
    ctx = test_ctx{};
    ctx.r3.u32 = destination;
    host_function<test_ctx, RtlFreeAnsiString>(ctx, fx.base());
    assert(fx.memory.read_u32(destination + 4) == 0);
    assert(fx.memory.read_u16(destination + 0) == 0);
}

void test_module_handle_lookup() {
    fixture fx;
    const uint32_t name = fixture::scratch;
    const uint32_t out = fixture::scratch + 0x100;
    const char text[] = "xam.xex";
    for (uint32_t i = 0; i < sizeof(text); ++i)
        fx.memory.write_u8(name + i, static_cast<uint8_t>(text[i]));

    test_ctx ctx{};
    ctx.r3.u32 = name;
    ctx.r4.u32 = out;
    host_function<test_ctx, XexGetModuleHandle>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::success);
    const uint32_t handle = fx.memory.read_u32(out);
    assert(handle != 0);

    // The same module must resolve to the same handle.
    ctx = test_ctx{};
    ctx.r3.u32 = name;
    ctx.r4.u32 = out;
    host_function<test_ctx, XexGetModuleHandle>(ctx, fx.base());
    assert(fx.memory.read_u32(out) == handle);

    // An unknown module is reported absent.
    const char other[] = "nope.xex";
    for (uint32_t i = 0; i < sizeof(other); ++i)
        fx.memory.write_u8(name + i, static_cast<uint8_t>(other[i]));
    ctx = test_ctx{};
    ctx.r3.u32 = name;
    ctx.r4.u32 = out;
    host_function<test_ctx, XexGetModuleHandle>(ctx, fx.base());
    assert(ctx.r3.u32 == x_error::not_found);
    assert(fx.memory.read_u32(out) == 0);
}

} // namespace

int main() {
    test_time_epoch_is_zero();
    test_time_round_trip();
    test_xconfig_known_and_unknown();
    test_query_virtual_memory_reports_committed_region();
    test_unicode_to_ansi_allocates();
    test_module_handle_lookup();
    std::printf("kernel_services_test: all checks passed\n");
    return 0;
}
