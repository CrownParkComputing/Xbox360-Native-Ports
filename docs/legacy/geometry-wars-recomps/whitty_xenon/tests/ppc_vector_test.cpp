// Unit tests for the half-float vector packs the recompiler emits.
//
// vupkd3d128 types 3 and 5 (VPACK_FLOAT16_2 and VPACK_FLOAT16_4) had no
// translation at all: XenonRecomp emitted __builtin_debugtrap() for both, so
// Hydro Thunder Hurricane trapped 37 times over inside its render path the
// moment it drew anything. The translation added for them is checked here.
//
// Two things can be wrong and only one of them is obvious.
//
// The obvious one is the emission - a missing case traps, and the title dies
// where the trap is. The other is the ENCODING, and it fails silently. These are
// XENOS half-floats: the same 1/5/10 bit layout as IEEE 754 binary16, and the
// same 2^(e-15) scaling for normals, but exponent field 31 is a NORMAL exponent
// rather than infinity and NaN - the encoding spends that code point on an extra
// octave of range instead, so its largest finite value is 131008 where binary16
// stops at 65504. Denormals read as zero, which is what vupkd3d128 does.
//
// The load-bearing constant in the decode is the 112 that re-biases the 5-bit
// field (bias 15) into the 8-bit field of a float (bias 127): 127 - 15. Writing
// 15 there instead - the number that is actually printed in the format's
// description - is wrong by a factor of 2^97 on every value that is not zero,
// and what that looks like is geometry flung off past the far plane. No crash,
// no diagnostic, nothing to grep for.
//
// So the decode is checked against a SECOND implementation of the same
// specification, transcribed from Xenia's xenos_half_to_float (base/math.h,
// BSD-3), over every one of the 65536 possible half values. Two independent
// spellings agreeing on all of them is a much stronger statement than any
// hand-picked table of expected floats.
//
// The element ORDER is checked by round-tripping through the recompiler's
// float16_4 PACK, which was already implemented and already in use by titles
// that work. Pack writes .u16[i] from .f32[i]; unpack must read .u16[i] into
// .f32[i]. If the new code disagrees about that correspondence, packing a vector
// and unpacking it will not give the vector back.
#include <cassert>
#include <cstdint>
#include <cstdio>
#include <cstring>

namespace {

// The recompiler's register types. PPCVRegister and PPCRegister are plain
// unions of same-sized arrays (XenonUtils/ppc_context.h), reproduced here
// because that header cannot be included without a title's generated
// ppc_config.h and the compiler flags the generated code is built with.
union vector_register {
    uint8_t u8[16];
    uint16_t u16[8];
    uint32_t u32[4];
    float f32[4];
};
static_assert(sizeof(vector_register) == 16);

union scalar_register {
    uint16_t u16;
    uint32_t u32;
    float f32;
};

// --- the code under test --------------------------------------------------
//
// These are the statements XenonRecomp now emits, transcribed verbatim from the
// generated source rather than paraphrased, so that what is tested is what a
// title actually runs. Only the register names differ.

// vupkd3d128 vD,vS,20 - type 5, VPACK_FLOAT16_4.
void emitted_unpack_float16_4(vector_register& dst, const vector_register& src) {
    scalar_register temp{};
    vector_register vTemp{};
    for (int i = 0; i < 4; ++i) {
        temp.u32 = src.u16[i];
        vTemp.u32[i] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) != 0) ? ((((((temp.u32 >> 10) & 0x1F) + 112) << 23) | ((temp.u32 & 0x3FF) << 13))) : 0);
    }
    dst = vTemp;
}

// vupkd3d128 vD,vS,12 - type 3, VPACK_FLOAT16_2.
void emitted_unpack_float16_2(vector_register& dst, const vector_register& src) {
    scalar_register temp{};
    vector_register vTemp{};
    for (int i = 0; i < 2; ++i) {
        temp.u32 = src.u16[1 - i];
        vTemp.u32[3 - i] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) != 0) ? ((((((temp.u32 >> 10) & 0x1F) + 112) << 23) | ((temp.u32 & 0x3FF) << 13))) : 0);
    }
    vTemp.f32[1] = 0.0f;
    vTemp.f32[0] = 1.0f;
    dst = vTemp;
}

// vpkd3d128 vD,vS,5,2,0 - the float16_4 PACK, which was already correct. Used
// here as the inverse operation, not as the thing under test.
void emitted_pack_float16_4(vector_register& dst, const vector_register& src) {
    scalar_register temp{};
    vector_register vTemp{};
    for (int i = 0; i < 4; ++i) {
        temp.u32 = (src.u32[i] & 0x7FFFFFFF);
        vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((src.u32[i] & 0x7f800000) >> 23);
        temp.u16 = vTemp.u8[0] != 0xFF ? ((src.u32[i] & 0x7FE000) >> 13) : 0x0;
        dst.u16[i] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0] - 0x70) << 10) + temp.u16) : (0x71 - vTemp.u8[0] > 31 ? 0x0 : ((0x400 + temp.u16) >> (0x71 - vTemp.u8[0])))) : 0x7FFF;
        dst.u16[i] |= ((src.u32[i] & 0x80000000) >> 16);
    }
}

// --- the oracle -----------------------------------------------------------

// Xenia's xenos_half_to_float (src/xenia/base/math.h), with preserve_denormal
// left false, which is what vupkd3d128 uses. Kept in Xenia's shape - including
// the branch that looks redundant - so it reads as a transcription and can be
// diffed against the original.
float xenia_xenos_half_to_float(uint16_t value) {
    uint32_t mantissa = value & 0x3FFu;
    uint32_t exponent = (value >> 10u) & 0x1Fu;
    if (!exponent) {
        mantissa = 0; // !preserve_denormal
        if (!mantissa) {
            exponent = uint32_t(-112);
        }
    }
    uint32_t result = (uint32_t(value & 0x8000u) << 16u) |
                      ((exponent + 112u) << 23u) | (mantissa << 13u);
    float out;
    std::memcpy(&out, &result, sizeof(out));
    return out;
}

uint32_t bits_of(float value) {
    uint32_t bits;
    std::memcpy(&bits, &value, sizeof(bits));
    return bits;
}

// --- tests ----------------------------------------------------------------

// Every half value there is, against Xenia. Exhaustive because it can be: 65536
// values is nothing, and it removes the question of whether the interesting
// cases were guessed correctly.
void test_float16_4_decode_matches_xenia_for_every_half() {
    for (uint32_t half = 0; half <= 0xFFFF; ++half) {
        vector_register src{};
        // The same half in all four lanes, so a lane that is computed
        // differently from the others cannot hide.
        for (int i = 0; i < 4; ++i) src.u16[i] = static_cast<uint16_t>(half);
        vector_register got{};
        emitted_unpack_float16_4(got, src);
        const uint32_t expected =
            bits_of(xenia_xenos_half_to_float(static_cast<uint16_t>(half)));
        for (int i = 0; i < 4; ++i)
            assert(got.u32[i] == expected);
    }
}

// The named values, spelled out, because "agrees with my other implementation"
// is not by itself a claim that either is the Xenos encoding.
void test_float16_4_decode_has_the_xenos_encoding() {
    vector_register src{};
    // 0x3C00: exponent field 15, mantissa 0 -> 2^0 = 1.0f. This is the value
    // that pins the re-bias constant: with 15 in place of 112 it would decode as
    // 2^-97 instead, and the whole vector would collapse towards the origin.
    src.u16[0] = 0x3C00;
    // 0x4F80: exponent field 19, mantissa 0x380 -> 2^4 * 1.875 = 30.0f.
    src.u16[1] = 0x4F80;
    // Sign bit only: negative zero, and no exponent, so no denormal.
    src.u16[2] = 0x8000;
    // Every mantissa bit with exponent field 0: a denormal, which reads as zero
    // because vupkd3d128 does not preserve them.
    src.u16[3] = 0x03FF;

    vector_register got{};
    emitted_unpack_float16_4(got, src);
    assert(got.f32[0] == 1.0f);
    assert(got.f32[1] == 30.0f);
    assert(got.u32[2] == 0x80000000u); // -0.0f, sign preserved
    assert(got.u32[3] == 0x00000000u);

    // Exponent field 31, where the Xenos encoding and binary16 part company.
    // Both of these are finite numbers here; an IEEE reader would call the first
    // one +infinity and the second a NaN.
    src.u16[0] = 0x7C00;
    src.u16[1] = 0x7FFF; // what the pack saturates to
    src.u16[2] = 0xFC00;
    src.u16[3] = 0x0000;
    emitted_unpack_float16_4(got, src);
    assert(got.f32[0] == 65536.0f);  // 2^16 - one octave past binary16's range
    assert(got.f32[1] == 131008.0f); // the largest value the encoding has
    assert(got.f32[2] == -65536.0f);
    assert(got.f32[3] == 0.0f);
    for (int i = 0; i < 3; ++i)
        assert((got.u32[i] & 0x7F800000u) != 0x7F800000u); // no inf, no NaN
}

// Pack then unpack. This is what pins the element order: both operations have to
// agree about which half belongs to which float, and the pack was already right.
void test_float16_4_round_trips_through_the_pack() {
    // Every normal half whose value the pack does not saturate. Exponent field
    // 31 is excluded on purpose and checked separately below.
    for (uint32_t exponent = 1; exponent <= 30; ++exponent) {
        for (uint32_t mantissa = 0; mantissa <= 0x3FF; ++mantissa) {
            const uint16_t half =
                static_cast<uint16_t>((exponent << 10) | mantissa);
            vector_register halves{};
            // A different lane order for the negatives, so a pack or unpack
            // that transposed lanes would not round-trip by symmetry.
            halves.u16[0] = half;
            halves.u16[1] = static_cast<uint16_t>(half | 0x8000);
            halves.u16[2] = half;
            halves.u16[3] = static_cast<uint16_t>(half | 0x8000);

            vector_register floats{};
            emitted_unpack_float16_4(floats, halves);
            vector_register back{};
            emitted_pack_float16_4(back, floats);
            for (int i = 0; i < 4; ++i)
                assert(back.u16[i] == halves.u16[i]);
        }
    }

    // Exponent field 31 decodes above the pack's 65504 ceiling, so it comes back
    // saturated. That is the encoding having no infinity, not a fault.
    vector_register halves{};
    for (int i = 0; i < 4; ++i) halves.u16[i] = 0x7C00;
    vector_register floats{};
    emitted_unpack_float16_4(floats, halves);
    vector_register back{};
    emitted_pack_float16_4(back, floats);
    for (int i = 0; i < 4; ++i) assert(back.u16[i] == 0x7FFF);
}

// The two-half form reads the LAST guest word and fills z and w with the
// constants the guest then splats to build vectors of 1.0f. Those constants are
// part of the instruction: a title that gets 0.0f where it expects 1.0f in w
// scales by zero.
void test_float16_2_decodes_two_halves_and_supplies_z_and_w() {
    vector_register src{};
    // .u16[1] is the guest's first half of the pair, .u16[0] the second - the
    // same indices the already-correct 2-shorts unpack uses.
    src.u16[1] = 0x4F80; // 30.0f
    src.u16[0] = 0xCF80; // -30.0f
    // Anything in the upper halves must be ignored entirely.
    src.u16[2] = 0xFFFF;
    src.u16[3] = 0xFFFF;
    src.u16[4] = 0xFFFF;
    src.u16[7] = 0xFFFF;

    vector_register got{};
    emitted_unpack_float16_2(got, src);
    assert(got.f32[3] == 30.0f);  // guest x
    assert(got.f32[2] == -30.0f); // guest y
    assert(got.f32[1] == 0.0f);      // guest z
    assert(got.f32[0] == 1.0f);      // guest w

    // Same decode as the four-half form for the lanes they share, which is the
    // property that lets one oracle cover both.
    for (uint32_t half = 0; half <= 0xFFFF; ++half) {
        vector_register two{};
        two.u16[1] = static_cast<uint16_t>(half);
        vector_register out{};
        emitted_unpack_float16_2(out, two);
        assert(out.u32[3] ==
               bits_of(xenia_xenos_half_to_float(static_cast<uint16_t>(half))));
    }
}

} // namespace

int main() {
    test_float16_4_decode_matches_xenia_for_every_half();
    test_float16_4_decode_has_the_xenos_encoding();
    test_float16_4_round_trips_through_the_pack();
    test_float16_2_decodes_two_halves_and_supplies_z_and_w();
    std::printf("ppc_vector_test: all checks passed\n");
    return 0;
}
