// Native replacements for kernel imports this title actually calls.
//
// Every kernel export in the SDK is a weak definition, so a strong definition
// here wins and ReXGlue's implementation is never linked in. The list of
// imports worth doing came from measurement, not the XEX import table: run
//
//     REX_TRACE_IMPORTS=used.txt ./run.sh
//
// and the file names the imports the title reached at runtime - 90 of Geometry
// Wars' 142. tools/native_report.py scores this file against that list.
//
// Starting with the console-configuration group: these are constants on a
// retail console and need no ReXGlue machinery to answer, so they are the
// cheapest possible proof that an override displaces the SDK's version.

#include <chrono>

#include <rex/hook.h>

namespace {

// XConfig categories/settings the title asks about, from the XDK headers.
constexpr uint32_t kXConfigSecuredCategory = 0x0002;
constexpr uint32_t kXConfigSecuredAVRegion = 0x0002;

// PAL-E, matching the region the ports are configured for elsewhere.
constexpr uint32_t kAVRegionPAL50 = 0x00400100;
constexpr uint32_t kGameRegionPAL = 0x0002;
constexpr uint32_t kLanguageEnglish = 1;

}  // namespace

// Locale and region. Fixed on a console for the life of a session.
REX_NATIVE_HOOK(__imp__XGetLanguage) {
  (void)base;
  ctx.r3.u64 = kLanguageEnglish;
}

REX_NATIVE_HOOK(__imp__XGetGameRegion) {
  (void)base;
  ctx.r3.u64 = kGameRegionPAL;
}

// Reads one setting out of the console's secured config block. The title uses
// it for the AV region; anything else it asks for gets a zeroed answer and
// success, which is what a console with the setting unset returns.
REX_NATIVE_HOOK(__imp__ExGetXConfigSetting) {
  const uint32_t category = ctx.r3.u32;
  const uint32_t setting = ctx.r4.u32;
  const uint32_t buffer = ctx.r5.u32;
  const uint32_t buffer_size = ctx.r6.u32;
  const uint32_t written_ptr = ctx.r7.u32;

  uint32_t value = 0;
  uint32_t value_size = 4;
  if (category == kXConfigSecuredCategory && setting == kXConfigSecuredAVRegion) {
    value = kAVRegionPAL50;
  }

  if (buffer && buffer_size >= value_size) {
    // Guest memory is big-endian.
    rex::be<uint32_t>* dest = reinterpret_cast<rex::be<uint32_t>*>(base + buffer);
    *dest = value;
  }
  if (written_ptr) {
    *reinterpret_cast<rex::be<uint16_t>*>(base + written_ptr) =
        static_cast<uint16_t>(value_size);
  }
  ctx.r3.u64 = 0;  // X_STATUS_SUCCESS
}

//=============================================================================
// Xbox Live: stripped. Achievements stay local.
//=============================================================================
// Live is gone - no sign-in, no leaderboards, no marketplace, no matchmaking.
// The title is told there is no network, which is a state it already handles
// because a console with the cable out reports the same thing, so it falls back
// to its offline paths instead of sitting on a connection screen.
//
// What is deliberately KEPT is the local profile and the achievement store:
// XamUserGetSigninState answering "signed in locally" is what lets the title
// award achievements at all, and ReXGlue persists unlocks to user-data. Strip
// the sign-in too and the achievements go with it.

namespace {
constexpr uint32_t kXStatusSuccess = 0x00000000;
constexpr uint32_t kXErrorNetworkNotAvailable = 0x800072AF;  // WSAENETDOWN as X_ERROR
constexpr uint32_t kSigninStateSignedInLocally = 1;
}  // namespace

// The socket layer never starts. A title that asks is told the network is down.
REX_NATIVE_HOOK(__imp__NetDll_WSAStartup) {
  (void)base;
  ctx.r3.u64 = kXErrorNetworkNotAvailable;
}

// XNet is the Live transport - secure sockets, key exchange, matchmaking. With
// Live stripped there is nothing for it to start.
REX_NATIVE_HOOK(__imp__NetDll_XNetStartup) {
  (void)base;
  ctx.r3.u64 = kXErrorNetworkNotAvailable;
}

// Signed in, locally, always. No Live account, no sign-in blade, and the
// profile the achievement store writes against. XUSER_INDEX_ANY (0xFF) asks
// "is anyone signed in?" and must be answered the same way.
REX_NATIVE_HOOK(__imp__XamUserGetSigninState) {
  (void)base;
  const uint32_t user_index = ctx.r3.u32;
  const bool any = (user_index & 0xFF) == 0xFF;
  ctx.r3.u64 = (user_index == 0 || any) ? kSigninStateSignedInLocally : 0;
}

// Licensed. Without this an XBLA title runs as a trial and locks its content,
// which for a game bought and dumped by its owner is simply wrong.
REX_NATIVE_HOOK(__imp__XamContentGetLicenseMask) {
  const uint32_t mask_ptr = ctx.r3.u32;
  if (mask_ptr) {
    *reinterpret_cast<rex::be<uint32_t>*>(base + mask_ptr) = 1;
  }
  ctx.r3.u64 = kXStatusSuccess;
}

//=============================================================================
// Console facts and trivial helpers
//=============================================================================

// Bit position in the XEX system flags. Every privilege a stripped-Live build
// would grant relates to Live or to insecure sockets, so none are held.
REX_NATIVE_HOOK(__imp__XexCheckExecutablePrivilege) {
  (void)base;
  ctx.r3.u64 = 0;
}

// FILETIME: 100 ns ticks since 1601, from the host clock.
REX_NATIVE_HOOK(__imp__KeQuerySystemTime) {
  const uint32_t time_ptr = ctx.r3.u32;
  if (time_ptr) {
    using namespace std::chrono;
    const auto now = duration_cast<duration<int64_t, std::ratio<1, 10'000'000>>>(
                         system_clock::now().time_since_epoch())
                         .count();
    constexpr uint64_t kEpochDelta = 116'444'736'000'000'000ULL;
    *reinterpret_cast<rex::be<uint64_t>*>(base + time_ptr) =
        static_cast<uint64_t>(now) + kEpochDelta;
  }
}

// The Xenon's timebase, fixed at 50 MHz on every retail console.
REX_NATIVE_HOOK(__imp__KeQueryPerformanceFrequency) {
  (void)base;
  ctx.r3.u64 = 50000000;
}

// memset with a 32-bit pattern. Guest memory is big-endian, so the pattern is
// written through a be<uint32_t> rather than splatted as host bytes.
REX_NATIVE_HOOK(__imp__RtlFillMemoryUlong) {
  const uint32_t dest = ctx.r3.u32;
  const uint32_t length = ctx.r4.u32;
  const uint32_t pattern = ctx.r5.u32;
  if (dest) {
    auto* out = reinterpret_cast<rex::be<uint32_t>*>(base + dest);
    for (uint32_t i = 0; i < length / 4; ++i) {
      out[i] = pattern;
    }
  }
}

// A no-op APC routine the kernel hands out as a default. It does nothing on a
// console either.
REX_NATIVE_HOOK(__imp__KiApcNormalRoutineNop) {
  (void)base;
  ctx.r3.u64 = 0;
}
