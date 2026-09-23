// thread_environment.h - the per-thread state real hardware keeps at r13.
//
// Xbox 360 PowerPC code reserves r13 as a pointer to the running thread's KPCR
// (Kernel Processor Control Region) - a fixed per-thread block the kernel sets
// up before any guest code runs. Guest code reads it directly, not through a
// kernel call, for things as basic as "what is my thread ID" - Alien Breed's
// own startup does this within its first few functions, by loading
// [r13+0x100] (KPCR::current_thread) and then [+0x14C] (KTHREAD::thread_id).
// So every host thread that runs recompiled guest code needs a KPCR/KTHREAD
// pair, and r13 pointed at it, before its first instruction.
//
// Field offsets and struct sizes are Xenia's (X_KPCR is 0x2D8 bytes, X_KTHREAD
// 0xAB0) - Xenia is the behavioural oracle for this whole effort. Only the
// fields guest code has been observed to read are filled in; the rest stays
// zeroed and is charted as the bring-up loop finds more reads, the same way
// Xenia's own X_KTHREAD leaves most of its 0xAB0 bytes as "unk".
#pragma once

#include "whitty_xenon/kernel_state.h"

namespace whitty_xenon {

namespace x_kpcr {
inline constexpr uint32_t size = 0x2D8;
inline constexpr uint32_t tls_ptr = 0x00;
inline constexpr uint32_t pcr_ptr = 0x30;
// The IRQL the thread is running at. Per-thread, not per-process: the console
// keeps it here and guest code reads it back directly, so a raise that is not
// recorded here is a raise the title cannot see it made.
inline constexpr uint32_t current_irql = 0x18; // u8
inline constexpr uint32_t stack_base_ptr = 0x70; // high address
inline constexpr uint32_t stack_end_ptr = 0x74;  // low address
inline constexpr uint32_t current_thread = 0x100;
inline constexpr uint32_t current_cpu = 0x10C;
inline constexpr uint32_t dpc_active = 0x150;
} // namespace x_kpcr

namespace x_kthread {
inline constexpr uint32_t size = 0xAB0;
// Milliseconds of clock-interrupt time charged to this thread.
//
// UNDOCUMENTED IN XENIA. Its X_KTHREAD (src/xenia/kernel/xthread.h) calls this
// field `unk_58[0x4]`, and nothing in that tree ever reads or writes it, so the
// name and the unit here are inferred rather than copied. Two things ground it:
//
//  - Layout. The original Xbox kernel's KTHREAD, which the 360's descends from,
//    has `ULONG KernelTime` at exactly 0x58, between the inline KTIMER +
//    KWAIT_BLOCK that end at 0x58 and StackBase/StackLimit/KernelStack/TlsData
//    at 0x5C/0x60/0x64/0x68. Xenia's X_KTHREAD matches that layout byte for
//    byte from 0x00 to 0x6F, so 0x58 is that field.
//  - Use. Hydro Thunder Hurricane's Direct3D reads it as a clock. Its GPU fence
//    wait (sub_822D5C28) snapshots [[r13+0x100]+0x58] into a wait descriptor
//    alongside a `mftb`, and its watchdog (sub_822C5318) re-reads it each time
//    round the spin, resets the snapshot whenever the fence moves, and declares
//    the GPU hung when `now - snapshot >= 5000`. A five-second GPU timeout is
//    what D3D documents, so the unit is a millisecond.
//
// Left at zero it is a watchdog that can never fire - `now - snapshot` is
// always 0 - so a stall D3D would have recovered from becomes an endless spin.
// If a title is ever found reading this offset in a way milliseconds do not
// explain, that observation beats the inference above.
inline constexpr uint32_t kernel_time = 0x58; // u32, milliseconds
inline constexpr uint32_t stack_base = 0x5C;    // high address
inline constexpr uint32_t stack_limit = 0x60;   // low address
inline constexpr uint32_t tls_address = 0x68;
// The KPROCESS this thread belongs to. Guest code follows it without a kernel
// call - Ridge Racer 6's start-up sets the process quantum by walking
// r13 -> KPCR::current_thread -> KTHREAD::process -> KPROCESS::quantum - so a
// null here is a store through a null pointer at the process field's own
// offset, which is what SIGSEGV at 0x0000000C was.
inline constexpr uint32_t process = 0x84;
// How many times the thread has entered a critical region without leaving it,
// counted DOWN from zero (KeEnterCriticalRegion decrements). It gates the
// delivery of kernel APCs to this thread and nothing else - it is not a lock.
inline constexpr uint32_t apc_disable_count = 0xB0; // s32
inline constexpr uint32_t current_cpu = 0xBF;   // u8, same value as the KPCR's
inline constexpr uint32_t thread_id = 0x14C;
inline constexpr uint32_t start_address = 0x150;
inline constexpr uint32_t creation_flags = 0x16C;
} // namespace x_kthread

// Which hardware thread a guest thread runs on, from the processor mask in the
// top byte of ExCreateThread's creation flags. The console has six, and a title
// asking for one asks by bit: 0x01 is hardware thread 0, 0x10 is thread 4.
//
// This is not bookkeeping. Guest code reads its own processor number straight
// out of the KPCR and indexes per-processor state with it - Geometry Wars 2's
// audio engine creates one thread per processor, stores each one's buffers in
// slot [processor], and reads them back through that field. Report every thread
// as processor 0 and the thread created for processor 4 reads slot 0, finds the
// null it was never given, and dereferences it.
//
// A mask of zero means the title did not ask, and the console leaves such a
// thread on its creator's hardware thread; `fallback` is what the caller knows
// about that (the creating thread's processor, or 0 for the first thread).
uint32_t processor_number_from_affinity(uint32_t affinity_mask,
                                       uint32_t fallback = 0) noexcept;

// One host thread's guest-visible thread environment: the KPCR/KTHREAD pair
// r13 must point at. Zero addresses mean allocation failed.
struct guest_thread_environment {
    uint32_t kpcr_address{0};
    uint32_t kthread_address{0};
};

// Allocates and fills a KPCR+KTHREAD pair on the kernel heap for one guest
// thread, and returns it - load kpcr_address into r13 before running any
// guest code on the host thread this represents. `stack_base` is the guest
// stack's high address, `stack_limit` its low address (the stack grows
// downward, as on real hardware).
guest_thread_environment make_guest_thread_environment(
    kernel_state& kernel, uint32_t thread_id, uint32_t stack_base,
    uint32_t stack_limit, uint32_t start_address,
    uint32_t processor_number = 0);

// Milliseconds since the runtime started - the reading tick_guest_clock puts in
// KTHREAD::kernel_time, and what a new thread's field is seeded with.
uint32_t guest_uptime_milliseconds() noexcept;

// One clock interrupt. The console's fires about once a millisecond and charges
// the thread it interrupted; Xenia models the same thing with a 1 ms repeating
// timer (kernel_state.cc's UpdateKeTimestampBundle, which also drives its
// quantum decay). Call this at about that rate.
//
// Every live thread is charged the same reading, rather than only whichever one
// is "running": with one host thread per guest thread there is no interrupted
// thread to single out, and guest code only ever uses DIFFERENCES of this field
// within one thread. A shared monotonic reading answers those the same way and,
// unlike a per-thread accrual, cannot go backwards - which matters because the
// difference is taken unsigned, so one backward step reads as 4 billion.
void tick_guest_clock(guest_memory& memory);

// Drops every thread recorded against a guest machine that is going away.
//
// The clock list above is process-wide and holds guest addresses next to the
// guest_memory they belong to. A run has one guest machine for its whole life,
// so nothing there ever needs this - but a test process builds several, one
// after another on the stack, and the SAME `guest_memory*` comes back for a
// later one. Its entries then look current, and the next tick writes a KTHREAD
// address the new machine never allocated: a store into an uncommitted page,
// faulting in the clock rather than anywhere near the test that left it behind.
// Anything that tears down a guest machine has to say so.
void forget_guest_thread_environments(guest_memory& memory);

} // namespace whitty_xenon
