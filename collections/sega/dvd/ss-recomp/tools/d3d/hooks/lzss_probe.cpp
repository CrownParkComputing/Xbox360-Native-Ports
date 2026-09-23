// Instrument the streamed-mesh write path.
//
// sub_888AC3B8 is the resumable LZSS decoder (r3=filter object, r4=destination,
// r5=bytes to produce; returns 0 when the underlying stream reported an error).
// sub_888AA8C8 is the filter's refill (r3=filter); sub_888AA5D0 is the consumer
// read loop. Logging destination ranges from all three tells us which path
// actually fills the vertex buffers the GPU later reads as corrupt, and whether
// the producer was asked for fewer bytes than the mesh needs.
#include <cstdio>
#include "splitsecond_funcs.h"

extern "C" void __imp__sub_888AC3B8(PPCContext& __restrict ctx, uint8_t* base);
extern "C" void sub_888AC3B8(PPCContext& __restrict ctx, uint8_t* base) {
  uint32_t self = ctx.r3.u32, dst = ctx.r4.u32, n = ctx.r5.u32, lr = (uint32_t)ctx.lr;
  uint32_t err_before = self ? REX_LOAD_U32(self + 16) : 0;
  uint32_t remaining_before = self ? REX_LOAD_U32(self + 428) : 0;
  __imp__sub_888AC3B8(ctx, base);
  uint32_t rc = ctx.r3.u32;
  uint32_t err_after = self ? REX_LOAD_U32(self + 16) : 0;
  if (n >= 256) {
    fprintf(stderr, "[LZSS] dst=%08x n=%u rc=%u err=%u->%u remain=%u lr=%08x\n",
            dst, n, rc, err_before, err_after, remaining_before, lr);
  }
  if (rc == 0 || err_after != 0) {
    fprintf(stderr, "[LZSS-FAIL] dst=%08x n=%u rc=%u err=%u->%u remain=%u lr=%08x\n",
            dst, n, rc, err_before, err_after, remaining_before, lr);
  }
}

extern "C" void __imp__sub_888AA8C8(PPCContext& __restrict ctx, uint8_t* base);
extern "C" void sub_888AA8C8(PPCContext& __restrict ctx, uint8_t* base) {
  uint32_t self = ctx.r3.u32;
  __imp__sub_888AA8C8(ctx, base);
  if (ctx.r3.u32 == 0) {
    fprintf(stderr, "[REFILL-STOP] this=%08x err=%u remain=%d lr=%08x\n", self,
            self ? REX_LOAD_U32(self + 16) : 0,
            self ? (int32_t)REX_LOAD_U32(self + 428) : 0, (uint32_t)ctx.lr);
  }
}
