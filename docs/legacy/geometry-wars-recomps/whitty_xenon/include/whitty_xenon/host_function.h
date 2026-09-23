// host_function.h - how a native kernel handler is called by recompiled code.
//
// A statically recompiled title reaches the kernel by calling a guest function
// whose body we replace with our own. Every recompiled function has the same
// shape - `void(Ctx& ctx, uint8_t* base)`, XenonRecomp's PPCFunc - so a kernel
// handler must present that shape too. But a handler wants to be written as an
// ordinary C++ function, `uint32_t NtClose(uint32_t handle)`, not to fish its
// arguments out of a register file by hand.
//
// This layer bridges the two. `host_function<Ctx, Fn>` is a shim with the
// PPCFunc shape that reads Fn's arguments out of the guest registers and stack
// following the Xbox 360 PowerPC calling convention, calls Fn, and writes its
// result back into the return register. A handler is then just a C++ function,
// and the 239-entry kernel worklist becomes 239 ordinary functions.
//
// The convention itself is the load-bearing part, and it is subtle, so it is
// worth stating exactly - and it is cross-checked against two independent
// implementations that agree on it (Xenia's kernel/util/shim_utils.h and
// UnleashedRecomp's kernel/function.h):
//
//   * Integer/pointer arguments occupy r3..r10 by *overall argument position*:
//     the argument at position i lands in r(3+i). Position 8 and beyond spill
//     to the caller's stack at r1 + 0x54 + (i-8)*8.
//   * Floating-point arguments occupy f1..f13 by a *separate* count of the
//     floats before them: the k-th float argument lands in f(1+k). A float
//     still consumes an integer position, so a later integer argument keeps
//     counting up through the register file even though the float did not use
//     an integer register. (This asymmetry is the easy thing to get wrong.)
//   * An integer/pointer result returns in r3; a float/double result in f1.
//
// Ctx is a template parameter, not hard-wired to the generated PPCContext, so
// the shim can be unit-tested against a small stand-in with the same field
// names (r1, r3..r10, f1..f13, each a register union exposing .u64/.f64)
// without building the recompiled image. For the real title, Ctx is the
// generated PPCContext and the shim's address is a PPCFunc.
#pragma once

#include <cstddef>
#include <cstdint>
#include <tuple>
#include <type_traits>
#include <utility>

namespace whitty_xenon {

// Which guest thread is calling.
//
// Recompiled PowerPC keeps the running thread's KPCR in r13 and preserves it
// across calls, so the value in r13 at a kernel entry names the calling thread
// as exactly as the hardware did. Nothing else here can: a handler is an
// ordinary C++ function with no thread argument, and the console's own calls
// take none either - RtlEnterCriticalSection records an owner, KeSetEvent
// wakes waiters, ExTerminateThread ends "this" thread, all without being told
// which one that is.
//
// The shim below stashes r13 on entry so any handler can ask. It is a plain
// thread-local word, written once per kernel call; the handlers that never ask
// pay one store for it.
//
// Zero means "not running guest code" - a unit test calling a handler directly
// with a context that has no r13, for instance. Every handler that uses this
// must therefore keep working when it reads zero.
namespace detail {
inline uint32_t& current_guest_kpcr_ref() noexcept {
    static thread_local uint32_t kpcr = 0;
    return kpcr;
}

// Does Ctx have an r13? The unit-test stand-in contexts do not, and must keep
// compiling.
template <typename Ctx, typename = void>
struct has_r13 : std::false_type {};
template <typename Ctx>
struct has_r13<Ctx, std::void_t<decltype(std::declval<const Ctx&>().r13.u64)>>
    : std::true_type {};
} // namespace detail

// The KPCR of the thread whose kernel call is running, or 0 outside one.
inline uint32_t current_guest_kpcr() noexcept {
    return detail::current_guest_kpcr_ref();
}
// Sets it directly, for a host thread that runs guest work without going
// through the shim, and for tests.
inline void set_current_guest_kpcr(uint32_t kpcr) noexcept {
    detail::current_guest_kpcr_ref() = kpcr;
}

// An argument or result is "floating" (goes through f1..f13 / returns in f1)
// exactly when it is float or double; everything else - integers, pointers as
// guest addresses, bool, handles - travels through the general registers.
template <typename T>
inline constexpr bool is_float_arg_v =
    std::is_same_v<std::remove_cv_t<T>, float> ||
    std::is_same_v<std::remove_cv_t<T>, double>;

namespace detail {

// Picks apart a function pointer type into its return type, argument tuple and
// arity. Fn is passed as a non-type template parameter, so its type is a plain
// R(*)(Args...).
template <typename T>
struct fn_traits;

template <typename R, typename... Args>
struct fn_traits<R (*)(Args...)> {
    using ret = R;
    using args = std::tuple<Args...>;
    static constexpr std::size_t arity = sizeof...(Args);
};

// Reads general register r(n). A switch rather than an array because the
// registers are named members, and this compiles equally against the generated
// PPCContext and the test stand-in. n is always 3..10 here.
template <typename Ctx>
inline uint64_t gpr_u64(const Ctx& ctx, std::size_t n) noexcept {
    switch (n) {
        case 3: return ctx.r3.u64;
        case 4: return ctx.r4.u64;
        case 5: return ctx.r5.u64;
        case 6: return ctx.r6.u64;
        case 7: return ctx.r7.u64;
        case 8: return ctx.r8.u64;
        case 9: return ctx.r9.u64;
        case 10: return ctx.r10.u64;
        default: return 0;
    }
}

// Reads floating register f(n). n is always 1..13 here.
template <typename Ctx>
inline double fpr_f64(const Ctx& ctx, std::size_t n) noexcept {
    switch (n) {
        case 1: return ctx.f1.f64;
        case 2: return ctx.f2.f64;
        case 3: return ctx.f3.f64;
        case 4: return ctx.f4.f64;
        case 5: return ctx.f5.f64;
        case 6: return ctx.f6.f64;
        case 7: return ctx.f7.f64;
        case 8: return ctx.f8.f64;
        case 9: return ctx.f9.f64;
        case 10: return ctx.f10.f64;
        case 11: return ctx.f11.f64;
        case 12: return ctx.f12.f64;
        case 13: return ctx.f13.f64;
        default: return 0.0;
    }
}

// Reads a stack-spilled integer argument. The guest is big-endian, so the same
// byte order the recompiled loads use is reproduced here by hand rather than
// borrowing guest_memory, keeping this header free-standing. A value narrower
// than 8 bytes sits in the low-addressed (most significant) bytes of its
// 8-byte slot, so a 4-byte argument is read from the first four bytes.
template <typename T>
inline uint64_t read_stack_bits(const uint8_t* base, uint64_t ea) noexcept {
    if constexpr (sizeof(T) <= 4) {
        return (static_cast<uint64_t>(base[ea]) << 24) |
               (static_cast<uint64_t>(base[ea + 1]) << 16) |
               (static_cast<uint64_t>(base[ea + 2]) << 8) |
               static_cast<uint64_t>(base[ea + 3]);
    } else {
        uint64_t v = 0;
        for (int i = 0; i < 8; ++i)
            v = (v << 8) | static_cast<uint64_t>(base[ea + i]);
        return v;
    }
}

// Counts the floating-point arguments in Tuple strictly before index I - that
// count is the float's ordinal into f1..f13.
template <typename Tuple, std::size_t... J>
constexpr std::size_t count_floats(std::index_sequence<J...>) noexcept {
    return (std::size_t{0} + ... +
            (is_float_arg_v<std::tuple_element_t<J, Tuple>> ? std::size_t{1}
                                                            : std::size_t{0}));
}

template <typename Tuple, std::size_t I>
inline constexpr std::size_t floats_before_v =
    count_floats<Tuple>(std::make_index_sequence<I>{});

// Where 0x54 comes from: the caller reserves a parameter save area at the top
// of its frame, and the eight-word register save shadow sits at r1 + 0x54.
inline constexpr uint32_t kStackArgBase = 0x54;

// Fetches argument I of the call, whose type is element I of Tuple.
template <typename Ctx, typename Tuple, std::size_t I>
auto get_arg(const Ctx& ctx, const uint8_t* base) noexcept {
    using T = std::tuple_element_t<I, Tuple>;
    if constexpr (is_float_arg_v<T>) {
        constexpr std::size_t k = floats_before_v<Tuple, I>;
        return static_cast<T>(fpr_f64(ctx, 1 + k));
    } else if constexpr (I <= 7) {
        return static_cast<T>(gpr_u64(ctx, 3 + I));
    } else {
        const uint32_t sp = static_cast<uint32_t>(ctx.r1.u32);
        const uint64_t ea =
            static_cast<uint64_t>(sp) + kStackArgBase + (I - 8) * 8u;
        return static_cast<T>(read_stack_bits<T>(base, ea));
    }
}

// Writes the call's result into the return register.
template <typename Ctx, typename R>
inline void set_return(Ctx& ctx, R value) noexcept {
    if constexpr (is_float_arg_v<R>) {
        ctx.f1.f64 = static_cast<double>(value);
    } else {
        ctx.r3.u64 = static_cast<uint64_t>(value);
    }
}

template <typename Ctx, auto Fn, std::size_t... I>
void invoke(Ctx& ctx, uint8_t* base, std::index_sequence<I...>) {
    using traits = fn_traits<decltype(Fn)>;
    using args = typename traits::args;
    using ret = typename traits::ret;
    if constexpr (std::is_same_v<ret, void>) {
        Fn(get_arg<Ctx, args, I>(ctx, base)...);
    } else {
        set_return(ctx, Fn(get_arg<Ctx, args, I>(ctx, base)...));
    }
}

} // namespace detail

// The shim. Its address has the PPCFunc shape `void(Ctx&, uint8_t*)`, so it can
// be installed anywhere the recompiled code expects a guest function, while Fn
// stays an ordinary C++ function.
template <typename Ctx, auto Fn>
void host_function(Ctx& ctx, uint8_t* base) {
    // Record who is calling before the handler runs; see current_guest_kpcr.
    if constexpr (detail::has_r13<Ctx>::value)
        detail::current_guest_kpcr_ref() = static_cast<uint32_t>(ctx.r13.u64);
    detail::invoke<Ctx, Fn>(
        ctx, base,
        std::make_index_sequence<detail::fn_traits<decltype(Fn)>::arity>{});
}

// Convenience: the installable function pointer for Fn. Spelling the shim's
// address once here keeps call sites from repeating the Ctx/Fn pair.
template <typename Ctx, auto Fn>
constexpr auto make_host_function() noexcept -> void (*)(Ctx&, uint8_t*) {
    return &host_function<Ctx, Fn>;
}

} // namespace whitty_xenon
