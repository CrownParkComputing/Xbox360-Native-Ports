// Unit tests for the kernel's printf formatting.
//
// The formatter itself is thin - it hands each conversion to the host's
// snprintf - so what is worth testing is everything around that: which
// arguments a conversion consumes and in what order, that `%s` follows a guest
// pointer rather than printing the pointer, that `%p` prints a 32-bit guest
// address rather than a host one, and that the return value reports the full
// length even when the result was truncated. Those are the parts a caller can
// tell apart, and the parts that would silently corrupt a title's own
// bookkeeping if they were wrong.
#include "whitty_xenon/kernel_printf.h"
#include "whitty_xenon/kernel_state.h"

#include <cassert>
#include <cstdint>
#include <cstdio>
#include <string>
#include <vector>

using namespace whitty_xenon;

namespace {

struct fixture {
    guest_memory memory;
    guest_heap heap;
    kernel_state kernel;
    static constexpr uint32_t scratch = 0x30000000;
    static constexpr uint32_t out = scratch;
    static constexpr uint32_t format = scratch + 0x400;
    static constexpr uint32_t strings = scratch + 0x800;
    static constexpr uint32_t va_list = scratch + 0xC00;

    fixture() : kernel(memory, heap) {
        std::string error;
        assert(memory.initialize(error));
        assert(heap.initialize(memory, 0x40000000, 0x00400000, error));
        assert(memory.commit(scratch, 0x2000, error));
        install_kernel(&kernel);
    }
    ~fixture() { install_kernel(nullptr); }

    void put_string(uint32_t address, const std::string& text) {
        for (std::size_t i = 0; i < text.size(); ++i)
            memory.write_u8(address + static_cast<uint32_t>(i),
                            static_cast<uint8_t>(text[i]));
        memory.write_u8(address + static_cast<uint32_t>(text.size()), 0);
    }
    std::string read_out() {
        std::string text;
        for (uint32_t i = 0; i < 512; ++i) {
            const uint8_t c = memory.read_u8(out + i);
            if (c == 0) break;
            text.push_back(static_cast<char>(c));
        }
        return text;
    }
};

// A va_list the guest built. The callee spills each variadic register with
// `std`, so a slot is eight big-endian bytes and a 32-bit argument lands in the
// SECOND four - the first hold whatever the producing instruction left in the
// register's upper half. `fill` is what to put there: zero for a value that was
// zero-extended, ~0 for the sign extension `lis` leaves behind on any constant
// with bit 31 set, which is every pointer into the title's image.
void put_va_list(fixture& fx, const std::vector<uint32_t>& values,
                 uint32_t fill = 0) {
    for (std::size_t i = 0; i < values.size(); ++i) {
        const uint32_t slot = fixture::va_list + static_cast<uint32_t>(i) * 8;
        fx.memory.write_u32(slot, fill);
        fx.memory.write_u32(slot + 4, values[i]);
    }
}

int32_t run(fixture& fx, const std::string& format,
            const std::vector<uint32_t>& values,
            std::size_t limit = static_cast<std::size_t>(-1)) {
    fx.put_string(fixture::format, format);
    put_va_list(fx, values);
    guest_array_arguments args(fixture::va_list);
    return format_to_guest(fixture::out, limit, fixture::format, args);
}

void test_plain_text_and_percent() {
    fixture fx;
    assert(run(fx, "hello", {}) == 5);
    assert(fx.read_out() == "hello");
    assert(run(fx, "100%% done", {}) == 9);
    assert(fx.read_out() == "100% done");
}

void test_integer_conversions() {
    fixture fx;
    assert(run(fx, "%d/%u/%x/%X", {static_cast<uint32_t>(-5), 5, 0xABCD, 0xABCD}) > 0);
    assert(fx.read_out() == "-5/5/abcd/ABCD");
    // Width and zero padding are passed through to the host formatter.
    assert(run(fx, "[%5d][%-5d][%05d]", {42, 42, 42}) > 0);
    assert(fx.read_out() == "[   42][42   ][00042]");
}

void test_string_follows_the_guest_pointer() {
    fixture fx;
    fx.put_string(fixture::strings, "world");
    // %s must chase the pointer into guest memory - printing the pointer
    // itself would look plausible and be useless.
    assert(run(fx, "hello %s!", {fixture::strings}) == 12);
    assert(fx.read_out() == "hello world!");
}

void test_pointer_prints_a_guest_address() {
    fixture fx;
    // A guest pointer is 32 bits; printing the host's would be wrong and would
    // leak host addresses into the title's own logs.
    assert(run(fx, "%p", {0x82001234}) == 8);
    assert(fx.read_out() == "82001234");
}

void test_star_width_consumes_an_argument() {
    fixture fx;
    // The '*' takes its width from the argument list, so the arguments after
    // it shift along - getting this wrong misreads every later conversion.
    assert(run(fx, "[%*d]", {6, 42}) == 8);
    assert(fx.read_out() == "[    42]");
}

void test_length_modifiers_are_accepted() {
    fixture fx;
    // A title writes %ld and %lu freely; the modifier is meaningless here
    // because the argument is already 32 bits, but it must not be printed.
    assert(run(fx, "%ld %lu %hd", {7, 8, 9}) > 0);
    assert(fx.read_out() == "7 8 9");
}

void test_unknown_conversion_is_passed_through() {
    fixture fx;
    // Better visible than silently dropped: a format we do not understand
    // shows up in the output instead of vanishing mid-message.
    assert(run(fx, "a%qz", {}) > 0);
    assert(fx.read_out().find("a%") == 0);
}

void test_truncation_reports_the_full_length() {
    fixture fx;
    // The C contract: the return value is what the result WOULD have been, so
    // a caller can tell it was cut and how much room it needed.
    const int32_t needed = run(fx, "0123456789", {}, 4);
    assert(needed == 10);
    assert(fx.read_out() == "0123");
    // And the terminator is written inside the limit, not past it.
    assert(fx.memory.read_u8(fixture::out + 4) == 0);
}

// The upper half of a spilled slot is not zero, and is not the argument. A
// 32-bit value produced by `lis`/`addi` sits in a register whose top half is
// the sign extension, so a slot holding a pointer into the title's image reads
// FFFFFFFF_82xxxxxx. Taking the first word gives FFFFFFFF - a %s that walks off
// the address space and a %x that prints nonsense.
//
// This is Direct3D's GPU-hang report: "D3D version %i.%i %s, kernel %i, ..."
// with the %s pointing at a string in the image. Before the watchdog could
// fire nothing reached it; once it could, the report faulted.
void test_sign_extension_in_the_upper_half_is_not_the_argument() {
    fixture fx;
    fx.put_string(fixture::strings, "LTCG");
    fx.put_string(fixture::format, "D3D version %i.%i %s, kernel %i\n");
    put_va_list(fx, {9, 18, fixture::strings, 2}, /*fill=*/0xFFFFFFFF);
    guest_array_arguments args(fixture::va_list);
    assert(format_to_guest(fixture::out, 512, fixture::format, args) > 0);
    assert(fx.read_out() == "D3D version 9.18 LTCG, kernel 2\n");
}

// And a pointer that is wrong anyway must produce a wrong string rather than a
// fault: a diagnostic is the worst place to take the process down.
void test_a_string_pointer_into_nothing_does_not_fault() {
    fixture fx;
    assert(run(fx, "[%s]", {0xFFFFFFFF}) == 2);
    assert(fx.read_out() == "[]");
}

void test_null_arguments_are_refused() {
    fixture fx;
    guest_array_arguments args(fixture::va_list);
    assert(format_to_guest(0, 16, fixture::format, args) == -1);
    assert(format_to_guest(fixture::out, 16, 0, args) == -1);
}

} // namespace

int main() {
    test_plain_text_and_percent();
    test_integer_conversions();
    test_string_follows_the_guest_pointer();
    test_pointer_prints_a_guest_address();
    test_star_width_consumes_an_argument();
    test_length_modifiers_are_accepted();
    test_unknown_conversion_is_passed_through();
    test_truncation_reports_the_full_length();
    test_sign_extension_in_the_upper_half_is_not_the_argument();
    test_a_string_pointer_into_nothing_does_not_fault();
    test_null_arguments_are_refused();
    std::printf("kernel_printf_test: all checks passed\n");
    return 0;
}
