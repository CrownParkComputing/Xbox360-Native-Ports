// Diagnostic: disable the streaming memory-pool defragmenter.
//
// sub_887C5EA8 walks the pool's block list and, for each adjacent
// {free, used} pair, calls sub_887C4C00 to MOVE the used block down into the
// free space, under a time budget (cvar "Streaming/MemoryPool/DefragEnabled",
// "Streaming/Budgets/Defrag Time Budget (ms)"). If a block is relocated while
// the GPU still holds a vertex fetch constant pointing at the old address, the
// draw reads whatever now occupies that memory -- which is precisely the
// observed corruption (correct data up to a 128-byte boundary, then bytes
// belonging to other archive entries).
//
// Stubbing the defrag pass answers that in one run: if the [CORRUPT-VB] reports
// stop, the defragmenter is the cause.
#include <cstdio>
#include "splitsecond_funcs.h"

static unsigned g_defrag_calls = 0;

extern "C" void __imp__sub_887C5EA8(PPCContext& __restrict ctx, uint8_t* base);
extern "C" void sub_887C5EA8(PPCContext& __restrict ctx, uint8_t* base) {
  if (++g_defrag_calls <= 3 || (g_defrag_calls % 500) == 0) {
    fprintf(stderr, "[NODEFRAG] suppressed defrag pass #%u (r3=%08x r4=%08x r5=%d)\n",
            g_defrag_calls, ctx.r3.u32, ctx.r4.u32, ctx.r5.s32);
    fflush(stderr);
  }
  ctx.r3.u64 = 0;  // report "no work done"
}
