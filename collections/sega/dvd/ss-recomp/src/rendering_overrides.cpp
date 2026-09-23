// Host overrides stay outside generated/ so code regeneration preserves them.
#include <cstdlib>
#include <cstring>
#include <rex/hook.h>

extern "C" REX_FUNC(__imp__sub_88E56798);
extern "C" REX_FUNC(__imp__sub_884139A8);
extern "C" REX_FUNC(__imp__sub_888D3618);

static thread_local bool tracing_compositor = false;

// Trace the actual CPU consumer, so readback can be restricted to its inputs
// instead of guessing which render-target sizes are safe to skip.
REX_HOOK_RAW(sub_884139A8) {
  static const bool enabled = std::getenv("SS_TRACE_COMPOSITOR") != nullptr;
  const bool previous = tracing_compositor;
  tracing_compositor = enabled;
  __imp__sub_884139A8(ctx, base);
  tracing_compositor = previous;
}

REX_HOOK_RAW(sub_888D3618) {
  static const bool enabled = std::getenv("SS_TRACE_COMPOSITOR") != nullptr;
  const uint32_t texture = ctx.r3.u32;
  const uint32_t level = ctx.r4.u32;
  const uint32_t locked_rect = ctx.r5.u32;
  const uint32_t flags = ctx.r7.u32;
  const uint32_t caller = ctx.lr;
  __imp__sub_888D3618(ctx, base);
  // This guest helper returns void, not an HRESULT in r3.
  if (enabled && locked_rect) {
    REXLOG_INFO("[COMPOSITOR_LOCK] caller={:08X} compositor={} texture={:08X} level={} flags={} pitch={} data={:08X}",
                caller, tracing_compositor, texture, level, flags, REX_LOAD_U32(locked_rect),
                REX_LOAD_U32(locked_rect + 4));
  }
}

// Registers "Squeezer/Enable Auto Squeeze" at guest address 0x88E973A8.
// The two viewport setup functions sub_887E9800 / sub_887E9910 read its
// first byte to enable dynamic resolution. Keep the registration intact and
// disable only the adaptation: emulated GPU timing is not a reliable input for
// the console's resolution controller. SS_AUTO_SQUEEZE=1 restores guest behavior.
REX_HOOK_RAW(sub_88E56798) {
  __imp__sub_88E56798(ctx, base);
  const char* auto_squeeze = std::getenv("SS_AUTO_SQUEEZE");
  if (!auto_squeeze || std::strcmp(auto_squeeze, "1") != 0) {
    REX_STORE_U8(0x88E973A8, 0);
    REXLOG_INFO("[rendering] auto squeeze disabled: fixed viewport resolution");
  }
}
