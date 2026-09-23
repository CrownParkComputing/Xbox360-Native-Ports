// Native replacements for kernel imports Burnout Revenge actually calls.
//
// Every kernel export in the SDK is a weak definition; a strong one here wins
// and ReXGlue's version is never linked. The list came from a runtime trace
// (REX_TRACE_IMPORTS -> out/native/used.txt: 118 imports reached), not from the
// XEX table, and tools/native_report.py scores this file against it.
//
// What is here is the part of the surface that is an ordinary host facility or
// a fact about the console, with no shared kernel object behind it: time,
// console configuration, RTL helpers, thread-local storage, spinlocks and the
// IRQL byte they raise, critical regions, critical sections, and a few XAM
// answers. Events, semaphores, timers, threads, files and memory stay with the
// SDK for now: they are one object table that the GPU and audio subsystems
// also signal into, and have to move as a whole.
//
// Guest structures are read through the same offsets the SDK uses
// (include/rex/system/xthread.h); r13 holds the KPCR.
#include <atomic>
#include <chrono>
#include <cstring>
#include <thread>

#include "burnoutrevenge_pch.h"
#include <rex/hook.h>

#if defined(__linux__)
#include <linux/futex.h>
#include <sys/syscall.h>
#include <unistd.h>
#endif

namespace {

constexpr uint32_t kStatusSuccess = 0x00000000;
constexpr uint32_t kErrorNotFound = 0x00000490;  // X_ERROR_NOT_FOUND
constexpr uint32_t kTlsOutOfIndexes = 0xFFFFFFFF;

// KPCR / KTHREAD offsets (include/rex/system/xthread.h).
constexpr uint32_t kPcrProcessTypeInDpc = 0x0C;
constexpr uint32_t kPcrCurrentIrql = 0x18;
constexpr uint32_t kPcrCurrentThread = 0x100;  // prcb_data.current_thread
constexpr uint32_t kPcrDpcActive = 0x150;      // prcb_data.dpc_active
constexpr uint32_t kThreadProcessType = 0x73;
constexpr uint32_t kThreadApcDisableCount = 0xB0;  // int32, host byte order (as the SDK keeps it)
constexpr uint8_t kIrqlDispatch = 2;

inline uint32_t CurrentThread(PPCContext& ctx, uint8_t* base) {
  (void)base;
  return REX_LOAD_U32(uint32_t(ctx.r13.u32) + kPcrCurrentThread);
}

template <typename T>
inline T* Host(uint8_t* base, uint32_t guest) {
  return reinterpret_cast<T*>(base + guest);
}

}  // namespace

//=============================================================================
// Console facts and time
//=============================================================================

// FILETIME: 100 ns ticks since 1601, from the host clock.
REX_NATIVE_HOOK(__imp__KeQuerySystemTime) {
  const uint32_t time_ptr = ctx.r3.u32;
  if (time_ptr) {
    using namespace std::chrono;
    const auto now = duration_cast<duration<int64_t, std::ratio<1, 10'000'000>>>(
                         system_clock::now().time_since_epoch())
                         .count();
    constexpr uint64_t kEpochDelta = 116'444'736'000'000'000ULL;
    *Host<rex::be<uint64_t>>(base, time_ptr) = static_cast<uint64_t>(now) + kEpochDelta;
  }
}

// The Xenon's timebase, fixed at 50 MHz on every retail console.
REX_NATIVE_HOOK(__imp__KeQueryPerformanceFrequency) {
  (void)base;
  ctx.r3.u64 = 50000000;
}

// The XDK version the title sees. Zero is what the SDK reports, and titles
// only use it to decide whether newer XAM entry points exist.
REX_NATIVE_HOOK(__imp__XamGetSystemVersion) {
  (void)base;
  ctx.r3.u64 = 0;
}

// Nothing launched this title with a data block.
REX_NATIVE_HOOK(__imp__XamLoaderGetLaunchData) {
  (void)base;
  ctx.r3.u64 = kErrorNotFound;
}

// Bit position in the XEX system flags. Every privilege relates to Live or to
// insecure sockets, and Live is stripped, so none are held.
REX_NATIVE_HOOK(__imp__XexCheckExecutablePrivilege) {
  (void)base;
  ctx.r3.u64 = 0;
}

// Exceptions are not delivered to the guest either way.
REX_NATIVE_HOOK(__imp__KeEnableFpuExceptions) {
  (void)base;
  (void)ctx;
}

// A no-op APC routine the kernel hands out as a default.
REX_NATIVE_HOOK(__imp__KiApcNormalRoutineNop) {
  (void)base;
  ctx.r3.u64 = 0;
}

// Signed in, locally, always - the profile the achievement store writes
// against. XUSER_INDEX_ANY (0xFF) asks "is anyone signed in?".
REX_NATIVE_HOOK(__imp__XamUserGetSigninState) {
  (void)base;
  const uint32_t user_index = ctx.r3.u32;
  ctx.r3.u64 = (user_index == 0 || (user_index & 0xFF) == 0xFF) ? 1 : 0;
}

// X_VIDEO_MODE (include/rex/system/xvideo.h): the 720p60 widescreen mode the
// ports render at.
REX_NATIVE_HOOK(__imp__XGetVideoMode) {
  const uint32_t mode = ctx.r3.u32;
  if (!mode) return;
  auto* words = Host<rex::be<uint32_t>>(base, mode);
  std::memset(words, 0, 48);
  words[0] = 1280;  // display_width
  words[1] = 720;   // display_height
  words[2] = 0;     // is_interlaced
  words[3] = 1;     // is_widescreen
  words[4] = 1;     // is_hi_def
  *Host<rex::be<float>>(base, mode + 20) = 60.0f;  // refresh_rate
  words[6] = 1;     // video_standard: NTSC
  words[7] = 0x4A;
  words[8] = 0x01;
}

// KPCR.prcb.dpc_active picks the process type recorded for the DPC; otherwise
// the current KTHREAD's own.
REX_NATIVE_HOOK(__imp__KeGetCurrentProcessType) {
  const uint32_t pcr = ctx.r13.u32;
  if (REX_LOAD_U32(pcr + kPcrDpcActive)) {
    ctx.r3.u64 = REX_LOAD_U8(pcr + kPcrProcessTypeInDpc);
  } else {
    ctx.r3.u64 = REX_LOAD_U8(CurrentThread(ctx, base) + kThreadProcessType);
  }
}

//=============================================================================
// RTL helpers
//=============================================================================

// memset with a 32-bit pattern; guest memory is big-endian.
REX_NATIVE_HOOK(__imp__RtlFillMemoryUlong) {
  const uint32_t dest = ctx.r3.u32;
  const uint32_t length = ctx.r4.u32;
  const uint32_t pattern = ctx.r5.u32;
  if (dest) {
    auto* out = Host<rex::be<uint32_t>>(base, dest);
    for (uint32_t i = 0; i < length / 4; ++i) out[i] = pattern;
  }
}

// ANSI_STRING { u16 length; u16 maximum_length; u32 buffer }.
REX_NATIVE_HOOK(__imp__RtlInitAnsiString) {
  const uint32_t dest = ctx.r3.u32;
  const uint32_t source = ctx.r4.u32;
  auto* halves = Host<rex::be<uint16_t>>(base, dest);
  if (source) {
    const uint16_t length = uint16_t(std::strlen(Host<const char>(base, source)));
    halves[0] = length;
    halves[1] = uint16_t(length + 1);
  } else {
    halves[0] = 0;
    halves[1] = 0;
  }
  *Host<rex::be<uint32_t>>(base, dest + 4) = source;
}

// NTSTATUS -> Win32 error. The generic rules first, then the codes titles
// actually meet, then ERROR_MR_MID_NOT_FOUND like the real table's fall-through.
REX_NATIVE_HOOK(__imp__RtlNtStatusToDosError) {
  (void)base;
  uint32_t status = ctx.r3.u32;
  uint32_t result = 317;  // ERROR_MR_MID_NOT_FOUND
  if (!status || (status & 0x20000000)) {
    result = status;
  } else if ((status >> 16) == 0x8007) {
    result = status & 0xFFFF;
  } else {
    if ((status & 0xF0000000) == 0xD0000000) status &= ~0x30000000;
    struct Map { uint32_t status, error; };
    static constexpr Map kMap[] = {
        {0x00000102, 1460}, {0x00000103, 997},  {0x80000005, 234},  {0x80000006, 18},
        {0xC0000001, 31},   {0xC0000002, 1},    {0xC0000004, 24},   {0xC0000005, 998},
        {0xC0000006, 1502}, {0xC0000008, 6},    {0xC0000009, 1454}, {0xC000000B, 6},
        {0xC000000D, 87},   {0xC000000E, 2},    {0xC000000F, 2},    {0xC0000010, 1},
        {0xC0000011, 38},   {0xC0000015, 27},   {0xC0000016, 234},  {0xC0000017, 8},
        {0xC0000018, 487},  {0xC0000022, 5},    {0xC0000023, 122},  {0xC0000024, 6},
        {0xC0000033, 123},  {0xC0000034, 2},    {0xC0000035, 183},  {0xC0000039, 161},
        {0xC000003A, 3},    {0xC000003B, 161},  {0xC0000043, 32},   {0xC0000056, 5},
        {0xC000007F, 112},  {0xC0000098, 1006}, {0xC000009A, 1450}, {0xC00000A2, 19},
        {0xC00000BA, 5},    {0xC00000E5, 1359}, {0xC0000101, 145},  {0xC0000103, 267},
        {0xC0000120, 995},  {0xC000013A, 572},  {0xC0000185, 1117}, {0xC0000225, 1168},
    };
    bool found = false;
    for (const auto& m : kMap) {
      if (m.status == status) {
        result = m.error;
        found = true;
        break;
      }
    }
    if (!found && (status >> 16) == 0xC001) result = status & 0xFFFF;
  }
  ctx.r3.u64 = result;
}

// FILETIME -> TIME_FIELDS { i16 year, month, day, hour, minute, second,
// milliseconds, weekday }. Civil-date arithmetic (days-from-civil inverse),
// no time zone, which is what the console does with a UTC time.
REX_NATIVE_HOOK(__imp__RtlTimeToTimeFields) {
  const uint32_t time_ptr = ctx.r3.u32;
  const uint32_t fields_ptr = ctx.r4.u32;
  if (!time_ptr || !fields_ptr) return;
  const uint64_t ticks = *Host<rex::be<uint64_t>>(base, time_ptr);
  const uint64_t ms_total = ticks / 10'000;
  const uint64_t seconds_total = ms_total / 1000;
  const uint64_t days = seconds_total / 86400;
  const uint32_t secs = uint32_t(seconds_total % 86400);
  // Days since 1601-01-01 -> civil. 1601-01-01 is 584389 days before 1970-01-01... use the
  // classic algorithm on the proleptic Gregorian calendar, day 0 = 1601-01-01 (a Monday).
  int64_t z = int64_t(days) + 584389 + 719468;  // shift to days since 0000-03-01
  const int64_t era = (z >= 0 ? z : z - 146096) / 146097;
  const uint32_t doe = uint32_t(z - era * 146097);
  const uint32_t yoe = (doe - doe / 1460 + doe / 36524 - doe / 146096) / 365;
  const int64_t y = int64_t(yoe) + era * 400;
  const uint32_t doy = doe - (365 * yoe + yoe / 4 - yoe / 100);
  const uint32_t mp = (5 * doy + 2) / 153;
  const uint32_t d = doy - (153 * mp + 2) / 5 + 1;
  const uint32_t m = mp < 10 ? mp + 3 : mp - 9;
  const int64_t year = y + (m <= 2 ? 1 : 0);
  auto* f = Host<rex::be<uint16_t>>(base, fields_ptr);
  f[0] = uint16_t(year);
  f[1] = uint16_t(m);
  f[2] = uint16_t(d);
  f[3] = uint16_t(secs / 3600);
  f[4] = uint16_t((secs / 60) % 60);
  f[5] = uint16_t(secs % 60);
  f[6] = uint16_t(ms_total % 1000);
  f[7] = uint16_t((days + 1) % 7);  // 1601-01-01 was a Monday; 0 = Sunday
}

//=============================================================================
// Thread-local storage
//=============================================================================
// Slots are process-wide, values are per thread; every guest thread is a host
// thread, so thread_local is exactly the storage KeTls* describes. Only these
// four imports ever see this table, so it does not have to agree with the
// SDK's own TLS bitmap.

namespace {
constexpr uint32_t kTlsSlots = 64;
std::atomic<uint64_t> g_tls_used{0};
thread_local uint32_t g_tls_values[kTlsSlots];
}  // namespace

REX_NATIVE_HOOK(__imp__KeTlsAlloc) {
  (void)base;
  uint64_t used = g_tls_used.load();
  for (;;) {
    if (used == ~0ull) {
      ctx.r3.u64 = kTlsOutOfIndexes;
      return;
    }
    const uint32_t slot = uint32_t(__builtin_ctzll(~used));
    if (g_tls_used.compare_exchange_weak(used, used | (1ull << slot))) {
      ctx.r3.u64 = slot;
      return;
    }
  }
}

REX_NATIVE_HOOK(__imp__KeTlsFree) {
  (void)base;
  const uint32_t slot = ctx.r3.u32;
  if (slot < kTlsSlots) {
    g_tls_used.fetch_and(~(1ull << slot));
    ctx.r3.u64 = 1;
  } else {
    ctx.r3.u64 = 0;
  }
}

REX_NATIVE_HOOK(__imp__KeTlsGetValue) {
  (void)base;
  const uint32_t slot = ctx.r3.u32;
  ctx.r3.u64 = slot < kTlsSlots ? g_tls_values[slot] : 0;
}

REX_NATIVE_HOOK(__imp__KeTlsSetValue) {
  (void)base;
  const uint32_t slot = ctx.r3.u32;
  if (slot < kTlsSlots) g_tls_values[slot] = ctx.r4.u32;
  ctx.r3.u64 = 1;
}

//=============================================================================
// IRQL, spinlocks, critical regions
//=============================================================================
// The IRQL is a byte in the KPCR that nothing here schedules on; raising it is
// bookkeeping the title reads back. A KSPINLOCK is one guest word holding the
// owner's KPCR address (big-endian, the SDK's convention, so a lock the SDK
// itself takes still interoperates) and is spun on with a yield.

namespace {

inline uint8_t RaiseIrql(PPCContext& ctx, uint8_t* base, uint8_t level) {
  (void)base;
  const uint32_t at = uint32_t(ctx.r13.u32) + kPcrCurrentIrql;
  const uint8_t old = REX_LOAD_U8(at);
  REX_STORE_U8(at, level);
  return old;
}

inline void LowerIrql(PPCContext& ctx, uint8_t* base, uint8_t level) {
  (void)base;
  REX_STORE_U8(uint32_t(ctx.r13.u32) + kPcrCurrentIrql, level);
}

inline void AcquireSpin(PPCContext& ctx, uint8_t* base, uint32_t lock) {
  std::atomic_ref<uint32_t> word(*Host<uint32_t>(base, lock));
  const uint32_t self = __builtin_bswap32(uint32_t(ctx.r13.u32));
  for (;;) {
    uint32_t expected = 0;
    if (word.compare_exchange_weak(expected, self, std::memory_order_acquire)) return;
    std::this_thread::yield();
  }
}

inline void ReleaseSpin(uint8_t* base, uint32_t lock) {
  std::atomic_ref<uint32_t> word(*Host<uint32_t>(base, lock));
  word.store(0, std::memory_order_release);
}

}  // namespace

REX_NATIVE_HOOK(__imp__KeRaiseIrqlToDpcLevel) { ctx.r3.u64 = RaiseIrql(ctx, base, kIrqlDispatch); }

REX_NATIVE_HOOK(__imp__KfLowerIrql) { LowerIrql(ctx, base, uint8_t(ctx.r3.u32)); }

REX_NATIVE_HOOK(__imp__KfAcquireSpinLock) {
  const uint8_t old = RaiseIrql(ctx, base, kIrqlDispatch);
  AcquireSpin(ctx, base, ctx.r3.u32);
  ctx.r3.u64 = old;
}

REX_NATIVE_HOOK(__imp__KfReleaseSpinLock) {
  const uint32_t lock = ctx.r3.u32;
  const uint8_t old_irql = uint8_t(ctx.r4.u32);
  ReleaseSpin(base, lock);
  if (old_irql < kIrqlDispatch) LowerIrql(ctx, base, old_irql);
}

REX_NATIVE_HOOK(__imp__KeAcquireSpinLockAtRaisedIrql) { AcquireSpin(ctx, base, ctx.r3.u32); }

REX_NATIVE_HOOK(__imp__KeReleaseSpinLockFromRaisedIrql) { ReleaseSpin(base, ctx.r3.u32); }

// A critical region only defers APC delivery: the counter lives in the
// KTHREAD in host byte order, which is how the SDK's APC path reads it.
REX_NATIVE_HOOK(__imp__KeEnterCriticalRegion) {
  std::atomic_ref<int32_t> count(*Host<int32_t>(base, CurrentThread(ctx, base) + kThreadApcDisableCount));
  count.fetch_sub(1);
}

REX_NATIVE_HOOK(__imp__KeLeaveCriticalRegion) {
  std::atomic_ref<int32_t> count(*Host<int32_t>(base, CurrentThread(ctx, base) + kThreadApcDisableCount));
  count.fetch_add(1);
}

//=============================================================================
// Critical sections
//=============================================================================
// RTL_CRITICAL_SECTION as the SDK lays it out: a 16-byte dispatcher header
// (type at +0, spin count / 256 at +1), lock_count at +0x10 (host byte order),
// recursion_count at +0x14 and owning_thread at +0x18 (big-endian). The title
// never reads the fields itself, so lock_count is used as a futex word here:
// -1 free, 0 held, 1 held with waiters - the Drepper mutex shifted by one so a
// section the title pre-initialised in its data (-1, 0, 0) is already valid.

namespace {

constexpr uint32_t kCsSpinDiv256 = 1;
constexpr uint32_t kCsLockCount = 0x10;
constexpr uint32_t kCsRecursion = 0x14;
constexpr uint32_t kCsOwner = 0x18;

inline void FutexWait(int32_t* word, int32_t expected) {
#if defined(__linux__)
  syscall(SYS_futex, word, FUTEX_WAIT_PRIVATE, expected, nullptr, nullptr, 0);
#else
  (void)word;
  (void)expected;
  std::this_thread::yield();
#endif
}

inline void FutexWake(int32_t* word) {
#if defined(__linux__)
  syscall(SYS_futex, word, FUTEX_WAKE_PRIVATE, 1, nullptr, nullptr, 0);
#else
  (void)word;
#endif
}

inline void InitCriticalSection(uint8_t* base, uint32_t cs, uint32_t spin_count) {
  uint32_t spin_div_256 = (spin_count + 255) >> 8;
  if (spin_div_256 > 255) spin_div_256 = 255;
  REX_STORE_U8(cs + 0, 1);  // EventSynchronizationObject
  REX_STORE_U8(cs + kCsSpinDiv256, uint8_t(spin_div_256));
  *Host<rex::be<int32_t>>(base, cs + 4) = 0;  // signal_state
  *Host<int32_t>(base, cs + kCsLockCount) = -1;
  *Host<rex::be<int32_t>>(base, cs + kCsRecursion) = 0;
  *Host<rex::be<uint32_t>>(base, cs + kCsOwner) = 0;
}

}  // namespace

REX_NATIVE_HOOK(__imp__RtlInitializeCriticalSection) { InitCriticalSection(base, ctx.r3.u32, 0); }

REX_NATIVE_HOOK(__imp__RtlInitializeCriticalSectionAndSpinCount) {
  InitCriticalSection(base, ctx.r3.u32, ctx.r4.u32);
  ctx.r3.u64 = kStatusSuccess;
}

REX_NATIVE_HOOK(__imp__RtlEnterCriticalSection) {
  const uint32_t cs = ctx.r3.u32;
  const uint32_t me = CurrentThread(ctx, base);
  auto* owner = Host<rex::be<uint32_t>>(base, cs + kCsOwner);
  auto* recursion = Host<rex::be<int32_t>>(base, cs + kCsRecursion);
  if (*owner == me) {
    *recursion = int32_t(*recursion) + 1;
    return;
  }
  int32_t* word = Host<int32_t>(base, cs + kCsLockCount);
  std::atomic_ref<int32_t> lock(*word);
  uint32_t spins = uint32_t(REX_LOAD_U8(cs + kCsSpinDiv256)) * 256;
  int32_t c = -1;
  if (!lock.compare_exchange_strong(c, 0, std::memory_order_acquire)) {
    while (spins--) {
      c = -1;
      if (lock.compare_exchange_weak(c, 0, std::memory_order_acquire)) goto acquired;
      std::this_thread::yield();
    }
    if (c != 1) c = lock.exchange(1, std::memory_order_acquire);
    while (c != -1) {
      FutexWait(word, 1);
      c = lock.exchange(1, std::memory_order_acquire);
    }
  }
acquired:
  *owner = me;
  *recursion = 1;
}

REX_NATIVE_HOOK(__imp__RtlTryEnterCriticalSection) {
  const uint32_t cs = ctx.r3.u32;
  const uint32_t me = CurrentThread(ctx, base);
  auto* owner = Host<rex::be<uint32_t>>(base, cs + kCsOwner);
  auto* recursion = Host<rex::be<int32_t>>(base, cs + kCsRecursion);
  std::atomic_ref<int32_t> lock(*Host<int32_t>(base, cs + kCsLockCount));
  int32_t c = -1;
  if (lock.compare_exchange_strong(c, 0, std::memory_order_acquire)) {
    *owner = me;
    *recursion = 1;
    ctx.r3.u64 = 1;
  } else if (*owner == me) {
    *recursion = int32_t(*recursion) + 1;
    ctx.r3.u64 = 1;
  } else {
    ctx.r3.u64 = 0;
  }
}

REX_NATIVE_HOOK(__imp__RtlLeaveCriticalSection) {
  const uint32_t cs = ctx.r3.u32;
  auto* owner = Host<rex::be<uint32_t>>(base, cs + kCsOwner);
  auto* recursion = Host<rex::be<int32_t>>(base, cs + kCsRecursion);
  const int32_t left = int32_t(*recursion) - 1;
  *recursion = left;
  if (left > 0) return;
  *owner = 0;
  int32_t* word = Host<int32_t>(base, cs + kCsLockCount);
  std::atomic_ref<int32_t> lock(*word);
  if (lock.exchange(-1, std::memory_order_release) == 1) FutexWake(word);
}
