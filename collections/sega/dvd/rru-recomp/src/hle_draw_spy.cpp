// HLE spike: observe the game's D3D9 layer live by overriding the weak
// recomp symbols for the primary draw and Present (see docs/D3D9_HLE_GATE.md).
// Pure observation - every hook tail-calls the original __imp__ function.
// Enable with RRU_DRAW_SPY=1 in the environment.

#include "../generated/default/ridgeracerunbounded_pch.h"

#include <atomic>
#include <cstdlib>

#include <rex/logging.h>

extern "C" void __imp__sub_821BA6E0(PPCContext& __restrict ctx, uint8_t* base);
extern "C" void __imp__sub_82199F58(PPCContext& __restrict ctx, uint8_t* base);

namespace {

bool SpyEnabled() {
  static const bool enabled = [] {
    const char* v = std::getenv("RRU_DRAW_SPY");
    return v && *v && *v != '0';
  }();
  return enabled;
}

std::atomic<uint32_t> g_frame{0};
std::atomic<uint32_t> g_draws_this_frame{0};

inline uint32_t GuestU32(uint8_t* base, uint32_t addr) {
  return __builtin_bswap32(*reinterpret_cast<uint32_t*>(base + addr));
}

}  // namespace

// Primary draw: D3DDevice* in r3. The device struct carries a Xenos register
// shadow (+10500..+10600) and the push-buffer put pointer (+13600); the state
// setters have fully materialized both by the time this runs, so reading them
// here yields a complete draw description.
extern "C" void sub_821BA6E0(PPCContext& __restrict ctx, uint8_t* base) {
  if (SpyEnabled()) {
    uint32_t n = g_draws_this_frame.fetch_add(1);
    if (n < 6) {
      uint32_t dev = ctx.r3.u32;
      REXLOG_INFO("[draw-spy] f{} d{} dev={:08X} args r4={:08X} r5={:08X} r6={:08X} "
                  "shadow[10528]={:08X} [10544]={:08X} [10548]={:08X} [10560]={:08X} "
                  "put={:08X}",
                  g_frame.load(), n, dev, ctx.r4.u32, ctx.r5.u32, ctx.r6.u32,
                  GuestU32(base, dev + 10528), GuestU32(base, dev + 10544),
                  GuestU32(base, dev + 10548), GuestU32(base, dev + 10560),
                  GuestU32(base, dev + 13600));
    }
  }
  __imp__sub_821BA6E0(ctx, base);
}

// Present: frame boundary.
extern "C" void sub_82199F58(PPCContext& __restrict ctx, uint8_t* base) {
  if (SpyEnabled()) {
    uint32_t draws = g_draws_this_frame.exchange(0);
    uint32_t f = g_frame.fetch_add(1);
    if (f % 60 == 0 || draws > 0) {
      REXLOG_INFO("[draw-spy] === Present frame {} ({} draws) ===", f, draws);
    }
  }
  __imp__sub_82199F58(ctx, base);
}
