// Unit tests for the guest -> host calling-convention shim.
//
// This shim decides which register every kernel handler's argument comes from
// and where its result goes. A wrong choice here misreads every one of the 239
// kernel entry points at once - and it fails quietly, handing a plausible wrong
// value to a handler rather than crashing - so the convention is pinned here
// against the ways it is easy to get wrong. The convention itself matches two
// independent emulators (Xenia's shim_utils.h and UnleashedRecomp's
// function.h); these tests check that this implementation obeys it.
#include "whitty_xenon/host_function.h"

#include <cassert>
#include <cstdint>
#include <cstdio>
#include <vector>

using namespace whitty_xenon;

namespace {

// A stand-in for the generated PPCContext: a register file with exactly the
// fields the shim touches, each a union exposing the .u64/.u32/.f64 views the
// real PPCRegister does. Value-initialising it (test_ctx ctx{}) zeroes every
// register, since zero-initialising a union clears the whole object.
union reg {
    uint64_t u64;
    int64_t s64;
    uint32_t u32;
    int32_t s32;
    double f64;
    float f32;
};

struct test_ctx {
    reg r1, r3, r4, r5, r6, r7, r8, r9, r10;
    reg f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13;
};

// A big-endian store, matching how the guest lays out its stack, so a
// stack-spilled argument can be planted for the shim to read back.
void put_be32(std::vector<uint8_t>& mem, uint64_t ea, uint32_t value) {
    mem[ea + 0] = static_cast<uint8_t>(value >> 24);
    mem[ea + 1] = static_cast<uint8_t>(value >> 16);
    mem[ea + 2] = static_cast<uint8_t>(value >> 8);
    mem[ea + 3] = static_cast<uint8_t>(value);
}

void put_be64(std::vector<uint8_t>& mem, uint64_t ea, uint64_t value) {
    put_be32(mem, ea, static_cast<uint32_t>(value >> 32));
    put_be32(mem, ea + 4, static_cast<uint32_t>(value));
}

// Handlers under test, plus somewhere for the void ones to record that they
// ran and with what.
uint64_t g_seen_a, g_seen_c;
double g_seen_x, g_seen_y;

uint32_t add32(uint32_t a, uint32_t b) { return a + b; }

void record_one(uint32_t a) { g_seen_a = a; }

uint32_t sum8(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e,
              uint32_t f, uint32_t g, uint32_t h) {
    return a + b + c + d + e + f + g + h;
}

// Nine integers: the ninth is the first to spill onto the stack.
uint32_t sum9(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e,
              uint32_t f, uint32_t g, uint32_t h, uint32_t i) {
    (void)a; (void)b; (void)c; (void)d; (void)e; (void)f; (void)g; (void)h;
    return i;
}

double scale(double v) { return v * 2.0; }
float scalef(float v) { return v + 1.0f; }

// The asymmetric case: an integer, then a float, then an integer. The second
// integer must come from r5 (its overall position is 2), not r4 - the float
// consumed position 1 even though it did not use r4.
void int_float_int(uint32_t a, double b, uint32_t c) {
    g_seen_a = a;
    g_seen_x = b;
    g_seen_c = c;
}

// A 64-bit argument must arrive whole, not truncated to 32 bits.
uint64_t identity64(uint64_t v) { return v; }

// Two floats then an integer: floats index f1, f2 by their own count; the
// integer is at overall position 2, so r5.
void float_float_int(double a, double b, uint32_t c) {
    g_seen_x = a;
    g_seen_y = b;
    g_seen_c = c;
}

void test_two_integer_args_and_result() {
    test_ctx ctx{};
    ctx.r3.u32 = 7;
    ctx.r4.u32 = 35;
    host_function<test_ctx, add32>(ctx, nullptr);
    assert(ctx.r3.u32 == 42); // result returns in r3
}

void test_void_handler_reads_r3() {
    test_ctx ctx{};
    ctx.r3.u32 = 0xABCD;
    g_seen_a = 0;
    host_function<test_ctx, record_one>(ctx, nullptr);
    assert(g_seen_a == 0xABCD);
    // A void handler must leave the return register untouched.
    assert(ctx.r3.u32 == 0xABCD);
}

void test_eight_args_fill_r3_through_r10() {
    test_ctx ctx{};
    ctx.r3.u32 = 1; ctx.r4.u32 = 2; ctx.r5.u32 = 4; ctx.r6.u32 = 8;
    ctx.r7.u32 = 16; ctx.r8.u32 = 32; ctx.r9.u32 = 64; ctx.r10.u32 = 128;
    host_function<test_ctx, sum8>(ctx, nullptr);
    assert(ctx.r3.u32 == 255); // every general-argument register was read
}

void test_ninth_arg_spills_to_stack() {
    test_ctx ctx{};
    // r3..r10 hold the first eight; the ninth lives on the stack.
    ctx.r3.u32 = ctx.r4.u32 = ctx.r5.u32 = ctx.r6.u32 = 0;
    ctx.r7.u32 = ctx.r8.u32 = ctx.r9.u32 = ctx.r10.u32 = 0;

    std::vector<uint8_t> mem(0x10000, 0);
    const uint32_t sp = 0x1000;
    ctx.r1.u32 = sp;
    // The ninth argument is index 8, whose stack slot is at r1 + 0x54 + 0.
    put_be32(mem, sp + 0x54, 0xDEAD);
    host_function<test_ctx, sum9>(ctx, mem.data());
    assert(ctx.r3.u32 == 0xDEAD);
}

void test_double_arg_and_result() {
    test_ctx ctx{};
    ctx.f1.f64 = 21.0;
    host_function<test_ctx, scale>(ctx, nullptr);
    assert(ctx.f1.f64 == 42.0); // float result returns in f1
    // A floating result must not scribble on the integer return register.
    assert(ctx.r3.u64 == 0);
}

void test_float_arg_and_result() {
    test_ctx ctx{};
    ctx.f1.f64 = 41.0; // the shim reads .f64 and narrows to float
    host_function<test_ctx, scalef>(ctx, nullptr);
    assert(ctx.f1.f64 == 42.0);
}

void test_integer_position_counts_past_floats() {
    test_ctx ctx{};
    ctx.r3.u32 = 100;   // a: position 0 -> r3
    ctx.f1.f64 = 2.5;   // b: float #0 -> f1
    ctx.r5.u32 = 200;   // c: position 2 -> r5 (NOT r4)
    ctx.r4.u32 = 999;   // r4 must be ignored
    g_seen_a = g_seen_c = 0; g_seen_x = 0;
    host_function<test_ctx, int_float_int>(ctx, nullptr);
    assert(g_seen_a == 100);
    assert(g_seen_x == 2.5);
    assert(g_seen_c == 200);
}

void test_float_ordinal_is_independent_of_position() {
    test_ctx ctx{};
    ctx.f1.f64 = 1.5;   // a: float #0 -> f1
    ctx.f2.f64 = 2.5;   // b: float #1 -> f2
    ctx.r5.u32 = 300;   // c: position 2 -> r5
    g_seen_c = 0; g_seen_x = g_seen_y = 0;
    host_function<test_ctx, float_float_int>(ctx, nullptr);
    assert(g_seen_x == 1.5);
    assert(g_seen_y == 2.5);
    assert(g_seen_c == 300);
}

void test_sixty_four_bit_arg_is_not_truncated() {
    test_ctx ctx{};
    ctx.r3.u64 = 0x1122334455667788ull;
    host_function<test_ctx, identity64>(ctx, nullptr);
    assert(ctx.r3.u64 == 0x1122334455667788ull);
}

void test_stack_offset_matches_convention() {
    // The tenth argument (index 9) must be read from r1 + 0x54 + (9-8)*8.
    // Plant a distinct value only at that address and confirm it arrives.
    test_ctx ctx{};
    std::vector<uint8_t> mem(0x10000, 0);
    const uint32_t sp = 0x2000;
    ctx.r1.u32 = sp;

    struct local {
        static uint32_t tenth(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t,
                              uint32_t, uint32_t, uint32_t, uint32_t i,
                              uint32_t j) {
            (void)i;
            return j;
        }
    };
    put_be32(mem, sp + 0x54 + 0, 0x1111); // ninth arg (index 8)
    put_be32(mem, sp + 0x54 + 8, 0x2222); // tenth arg (index 9)
    host_function<test_ctx, local::tenth>(ctx, mem.data());
    assert(ctx.r3.u32 == 0x2222);
}

void test_sixty_four_bit_stack_arg_reads_full_slot() {
    // A 64-bit stack argument occupies its whole 8-byte slot, unlike the 32-bit
    // case which sits in the first four bytes.
    test_ctx ctx{};
    std::vector<uint8_t> mem(0x10000, 0);
    const uint32_t sp = 0x3000;
    ctx.r1.u32 = sp;

    struct local {
        static uint64_t ninth64(uint32_t, uint32_t, uint32_t, uint32_t,
                                uint32_t, uint32_t, uint32_t, uint32_t,
                                uint64_t i) {
            return i;
        }
    };
    put_be64(mem, sp + 0x54, 0xCAFEF00DBADD1234ull);
    host_function<test_ctx, local::ninth64>(ctx, mem.data());
    assert(ctx.r3.u64 == 0xCAFEF00DBADD1234ull);
}

void test_make_host_function_returns_installable_pointer() {
    // The pointer helper must produce something with the PPCFunc shape that
    // behaves identically to calling the shim directly.
    void (*fn)(test_ctx&, uint8_t*) = make_host_function<test_ctx, add32>();
    test_ctx ctx{};
    ctx.r3.u32 = 20;
    ctx.r4.u32 = 22;
    fn(ctx, nullptr);
    assert(ctx.r3.u32 == 42);
}

} // namespace

int main() {
    test_two_integer_args_and_result();
    test_void_handler_reads_r3();
    test_eight_args_fill_r3_through_r10();
    test_ninth_arg_spills_to_stack();
    test_double_arg_and_result();
    test_float_arg_and_result();
    test_integer_position_counts_past_floats();
    test_float_ordinal_is_independent_of_position();
    test_sixty_four_bit_arg_is_not_truncated();
    test_stack_offset_matches_convention();
    test_sixty_four_bit_stack_arg_reads_full_slot();
    test_make_host_function_returns_installable_pointer();
    std::printf("host_function_test: all checks passed\n");
    return 0;
}
