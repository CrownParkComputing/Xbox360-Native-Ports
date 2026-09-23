// kernel_printf.h - the kernel's printf family.
//
// These are the one group of imports that cannot be written as ordinary C++
// handlers. Every other kernel call has a fixed argument list, so
// host_function can read its arguments out of the guest registers and hand
// them over as parameters. `sprintf` and `_vsnprintf` are variadic: how many
// arguments there are, and what widths they have, is only known once the
// format string has been walked. So the argument reading has to happen inside
// the handler, which means the handler needs the guest register file itself.
//
// The split here keeps that to a minimum. `format_to_guest` does all the work
// and is an ordinary function; it pulls each argument through a small
// interface as the format string calls for it. Only the two implementations of
// that interface need to know about registers, and only one of those is
// templated on the guest context - so the formatter is testable without the
// recompiled image, exactly as host_function is.
#pragma once

#include <cstddef>
#include <cstdint>

namespace whitty_xenon {

// Supplies the variadic arguments a format string consumes, in order.
class format_arguments {
public:
    virtual ~format_arguments() = default;
    virtual uint32_t next_u32() = 0;
    virtual uint64_t next_u64() = 0;
    virtual double next_double() = 0;
};

// Formats `format_ptr` (a NUL-terminated guest string) into guest memory at
// `buffer`, writing at most `limit` characters plus a terminator. Returns the
// number of characters the result would have had, not counting the
// terminator - which is what the C library returns, and what a title uses to
// tell "it fitted" from "it was cut". Returns -1 for a null buffer or format.
int32_t format_to_guest(uint32_t buffer, std::size_t limit,
                        uint32_t format_ptr, format_arguments& args);

// A va_list the guest built: an array of 8-byte slots in guest memory.
class guest_array_arguments final : public format_arguments {
public:
    explicit guest_array_arguments(uint32_t array_ptr) noexcept
        : m_array(array_ptr) {}
    uint32_t next_u32() override;
    uint64_t next_u64() override;
    double next_double() override;

private:
    uint32_t m_array;
    uint32_t m_index{0};
};

// The variadic tail of a guest call, read straight out of the register file.
// The convention is the one host_function.h documents: argument position i is
// in r(3+i) up to position 7 and on the caller's stack after that, while
// floating-point arguments come from f1..f13 by a separate count and still
// consume an integer position.
template <typename Ctx>
class ppc_format_arguments final : public format_arguments {
public:
    ppc_format_arguments(Ctx& ctx, const uint8_t* base,
                         uint32_t first_position) noexcept
        : m_ctx(&ctx), m_base(base), m_position(first_position) {}

    uint32_t next_u32() override {
        return static_cast<uint32_t>(next_integer());
    }
    uint64_t next_u64() override { return next_integer(); }
    double next_double() override {
        // A float still consumes an integer position even though it did not
        // use an integer register - the asymmetry host_function.h warns about.
        ++m_position;
        return read_float(m_float_position++);
    }

private:
    uint64_t next_integer() {
        const uint32_t position = m_position++;
        if (position < 8) return read_gpr(position);
        // Spilled: 8-byte slots from r1 + 0x54. A value narrower than the slot
        // sits in its first four bytes, so a 32-bit argument is read there.
        const uint64_t address =
            (m_ctx->r1.u64 & 0xFFFFFFFFull) + 0x54 + (position - 8) * 8;
        uint64_t value = 0;
        for (int i = 0; i < 4; ++i)
            value = (value << 8) | static_cast<uint64_t>(m_base[address + i]);
        return value;
    }

    uint64_t read_gpr(uint32_t position) const {
        switch (position) {
            case 0: return m_ctx->r3.u64;
            case 1: return m_ctx->r4.u64;
            case 2: return m_ctx->r5.u64;
            case 3: return m_ctx->r6.u64;
            case 4: return m_ctx->r7.u64;
            case 5: return m_ctx->r8.u64;
            case 6: return m_ctx->r9.u64;
            default: return m_ctx->r10.u64;
        }
    }

    double read_float(uint32_t index) const {
        switch (index) {
            case 0: return m_ctx->f1.f64;
            case 1: return m_ctx->f2.f64;
            case 2: return m_ctx->f3.f64;
            case 3: return m_ctx->f4.f64;
            case 4: return m_ctx->f5.f64;
            case 5: return m_ctx->f6.f64;
            case 6: return m_ctx->f7.f64;
            case 7: return m_ctx->f8.f64;
            case 8: return m_ctx->f9.f64;
            case 9: return m_ctx->f10.f64;
            case 10: return m_ctx->f11.f64;
            case 11: return m_ctx->f12.f64;
            default: return m_ctx->f13.f64;
        }
    }

    Ctx* m_ctx;
    const uint8_t* m_base;
    uint32_t m_position;
    uint32_t m_float_position{0};
};

} // namespace whitty_xenon
