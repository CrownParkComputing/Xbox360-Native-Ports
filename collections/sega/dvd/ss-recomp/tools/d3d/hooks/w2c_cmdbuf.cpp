// W2-c: where the "missing" in-race draws come from.
//
// Every PM4 packet the command processor executes for a frame reaches it
// through PM4_INDIRECT_BUFFER packets written into the hardware ring by
// sub_888E5F58 (the D3D "submit segment" helper).  This TU hooks that helper,
// decodes each submitted indirect buffer on the traced frame, counts the
// DRAW_INDX packets inside it, and dumps the bytes for offline decoding.
//
// It also hooks the pre-baked-command-buffer replay path
// (D3DDevice_RunCommandBuffer sub_888ECC28 and the engine's
// cCommandBufferContext::RunForCurrentRenderTarget sub_888050E8) and the
// predicated-tiling command interpreter sub_888E8428.
//
// Output:
//   W2CCOUNT f=<frame> <name>=<n> ... ib_subs= ib_dwords= ib_draws= cbrt=<byte>
//   W2C-IB   f= seq= i= lr= addr= dw= va= draws= nested= 
//   W2C-RUN  f= seq= lr= cb= pred= f108= chunks= ibs= dw= draws=
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdint>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include "splitsecond_funcs.h"

namespace {

enum {
  H_PRESENT, H_RUNCB, H_ENGRUNRT, H_ENG16028, H_SUBMITIB, H_RINGIB,
  H_DRAW_DIV, H_DRAW_DV, H_DRAW_DIVUP, H_DRAW_DVUP, H_DRAW_W,
  H_BEGINCB, H_RECIB, H_TILEVM, H_TILEVM2, H_KICK, H_ENDCB, H_BEGINCB2,
  H_NUM
};
const char* const g_names[H_NUM] = {
  "Present", "RunCommandBuffer", "EngRunForRT", "Eng88816028", "SubmitIBList",
  "RingWriteIB", "DrawIndexedVertices", "DrawVertices", "DrawIndexedVerticesUP",
  "DrawVerticesUP", "DrawWrapper", "SwapCmdBufInit", "RecordIB",
  "TileVM_888E8428", "TileVM_888E8768", "Kick_888E7DD0",
  "EndCommandBuffer", "BeginCommandBuffer",
};
uint32_t g_counts[H_NUM];
uint32_t g_ib_subs, g_ib_dwords, g_ib_draws, g_ib_nested;
uint32_t g_seq;

uint32_t g_frame = 0;
int g_verbose_frames = 0;
int g_always = -1;
const char* g_trigger = nullptr;
uint32_t g_gpu_trigger_at = 0;
const char* g_dumpdir = nullptr;
int g_dump_enabled = -1;
FILE* g_manifest = nullptr;

inline bool verbose() {
  if (g_always < 0) { const char* a = getenv("W2C_ALWAYS"); g_always = (a && *a && *a != '0') ? 1 : 0; }
  return g_always || g_verbose_frames > 0;
}

inline uint32_t ld32(uint8_t* base, uint32_t ea) {
  return __builtin_bswap32(*(volatile uint32_t*)(base + ea));
}
inline bool plausible(uint32_t va) { return va >= 0x10000u && va < 0xE0000000u; }

bool readable(const void* p, size_t n) {
  unsigned char tmp[8];
  if (n > sizeof tmp) n = sizeof tmp;
  iovec l{tmp, n};
  iovec r{const_cast<void*>(p), n};
  return process_vm_readv(getpid(), &l, 1, &r, 1, 0) == (ssize_t)n;
}
inline bool range_ok(uint8_t* base, uint32_t va, uint32_t dw) {
  if (!plausible(va)) return false;
  if ((uint64_t)va + (uint64_t)dw * 4 > 0xFFFFFFFFull) return false;
  return readable(base + va, 4) && readable(base + va + (uint64_t)dw * 4 - 4, 4);
}

bool pm4_scan(uint8_t* base, uint32_t va, uint32_t dw, uint32_t* draws, uint32_t* nested, int depth);

uint32_t resolve_ib(uint8_t* base, uint32_t addr, uint32_t dw, uint32_t* draws, uint32_t* nested) {
  uint32_t cand[4] = { 0xC0000000u | (addr & 0x1FFFFFFFu),
                       0xA0000000u | (addr & 0x1FFFFFFFu),
                       0x80000000u | (addr & 0x1FFFFFFFu), addr };
  for (int c = 0; c < 4; ++c) {
    if (!range_ok(base, cand[c], dw)) continue;
    uint32_t d = 0, n = 0;
    if (pm4_scan(base, cand[c], dw, &d, &n, 0)) { *draws = d; *nested = n; return cand[c]; }
  }
  return 0;
}

bool pm4_scan(uint8_t* base, uint32_t va, uint32_t dw, uint32_t* draws, uint32_t* nested, int depth) {
  uint32_t i = 0;
  while (i < dw) {
    uint32_t w = ld32(base, va + 4 * i);
    uint32_t type = w >> 30;
    if (w == 0) { ++i; continue; }
    if (type == 3) {
      uint32_t cnt = ((w >> 16) & 0x3FFF) + 1;
      uint32_t op = (w >> 8) & 0x7F;
      if (i + 1 + cnt > dw) return false;
      if (op == 0x22 || op == 0x36 || op == 0x34 || op == 0x35) ++*draws;
      if ((op == 0x3F || op == 0x37) && cnt >= 2) {
        ++*nested;
        if (depth < 4) {
          uint32_t sub = ld32(base, va + 4 * (i + 1));
          uint32_t subdw = ld32(base, va + 4 * (i + 2)) & 0xFFFFFF;
          if (subdw && subdw < (1u << 22)) {
            uint32_t d = 0, n = 0;
            if (resolve_ib(base, sub, subdw, &d, &n)) { *draws += d; *nested += n; }
          }
        }
      }
      i += 1 + cnt;
    } else if (type == 0) {
      uint32_t cnt = ((w >> 16) & 0x3FFF) + 1;
      if (i + 1 + cnt > dw) return false;
      i += 1 + cnt;
    } else if (type == 2) {
      ++i;
    } else {
      i += 3;
    }
  }
  return i == dw;
}

bool dump_on() {
  if (g_dump_enabled < 0) {
    g_dumpdir = getenv("W2C_DUMPDIR");
    g_dump_enabled = (g_dumpdir && *g_dumpdir) ? 1 : 0;
    if (g_dump_enabled) {
      mkdir(g_dumpdir, 0755);
      char p[512]; snprintf(p, sizeof p, "%s/manifest.txt", g_dumpdir);
      g_manifest = fopen(p, "a");
    }
  }
  return g_dump_enabled == 1;
}

void dump_ib(uint8_t* base, uint32_t addr, uint32_t dw, uint32_t va, uint32_t seq,
             uint32_t idx, uint32_t lr, uint32_t draws, const char* kind) {
  if (!dump_on()) return;
  if (g_manifest)
    fprintf(g_manifest, "%u %u %u %s %08x %08x %u %08x %u\n",
            g_frame, seq, idx, kind, lr, addr, dw, va, draws);
  if (!va) return;
  char p[512]; snprintf(p, sizeof p, "%s/ib_%05u_%08x_%u.bin", g_dumpdir, seq, addr, dw);
  FILE* f = fopen(p, "wb");
  if (!f) return;
  fwrite(base + va, 1, (size_t)dw * 4, f);
  fclose(f);
}

}  // namespace

#define HOOK_DECL(fn) extern "C" void __imp__##fn(PPCContext& __restrict, uint8_t*);

HOOK_DECL(sub_888EB588)
HOOK_DECL(sub_888ECC28)
HOOK_DECL(sub_888050E8)
HOOK_DECL(sub_88816028)
HOOK_DECL(sub_888E6538)
HOOK_DECL(sub_888E5F58)
HOOK_DECL(sub_888E4E08)
HOOK_DECL(sub_888E4A18)
HOOK_DECL(sub_888E4460)
HOOK_DECL(sub_888E3F80)
HOOK_DECL(sub_888E4418)
HOOK_DECL(sub_888E7740)
HOOK_DECL(sub_888E6458)
HOOK_DECL(sub_888E8428)
HOOK_DECL(sub_888E8768)
HOOK_DECL(sub_888E7DD0)
HOOK_DECL(sub_888EC100)
HOOK_DECL(sub_888EC2F8)

extern "C" void sub_888EB588(PPCContext& __restrict ctx, uint8_t* base) {
  if (g_frame) {
    fprintf(stderr, "W2CCOUNT f=%u", g_frame);
    for (int k = 0; k < H_NUM; ++k) fprintf(stderr, " %s=%u", g_names[k], g_counts[k]);
    fprintf(stderr, " ib_subs=%u ib_dwords=%u ib_draws=%u ib_nested=%u cbrt=%u\n",
            g_ib_subs, g_ib_dwords, g_ib_draws, g_ib_nested,
            (unsigned)*(volatile uint8_t*)(base + 0x88A977B0u));
  }
  for (int k = 0; k < H_NUM; ++k) g_counts[k] = 0;
  g_ib_subs = g_ib_dwords = g_ib_draws = g_ib_nested = g_seq = 0;
  ++g_frame;
  if (g_verbose_frames > 0) { --g_verbose_frames; if (g_manifest) fflush(g_manifest); }
  if (!g_trigger) { const char* t = getenv("D3DTRACE_TRIGGER"); g_trigger = t ? t : ""; }
  if (*g_trigger && access(g_trigger, F_OK) == 0) {
    unlink(g_trigger);
    const char* n = getenv("D3DTRACE_FRAMES"); g_verbose_frames = n ? atoi(n) : 1;
    fprintf(stderr, "W2C-TRIGGER f=%u frames=%d\n", g_frame, g_verbose_frames);
    const char* gt = getenv("D3DTRACE_GPU_TRIGGER");
    if (gt && *gt) { const char* lg = getenv("D3DTRACE_GPU_LAG"); g_gpu_trigger_at = g_frame + (lg ? atoi(lg) : 2); }
  }
  if (g_gpu_trigger_at && g_frame >= g_gpu_trigger_at) {
    g_gpu_trigger_at = 0;
    FILE* tf = fopen(getenv("D3DTRACE_GPU_TRIGGER"), "w"); if (tf) fclose(tf);
    fprintf(stderr, "W2C-GPUTRIGGER f=%u\n", g_frame);
  }
  ++g_counts[H_PRESENT];
  __imp__sub_888EB588(ctx, base);
}

// sub_888E5F58(device, entries[], count): writes one PM4_INDIRECT_BUFFER per
// entry into the hardware ring.  entry = { dwordCount|flags, gpuAddress }.
extern "C" void sub_888E5F58(PPCContext& __restrict ctx, uint8_t* base) {
  ++g_counts[H_RINGIB];
  uint32_t ents = ctx.r4.u32, n = ctx.r5.u32, lr = (uint32_t)ctx.lr;
  uint32_t seq = g_seq++;
  if (plausible(ents) && n && n < 4096 && readable(base + ents, 8)) {
    for (uint32_t i = 0; i < n; ++i) {
      uint32_t w0 = ld32(base, ents + 8 * i);
      uint32_t addr = ld32(base, ents + 8 * i + 4);
      uint32_t dw = w0 & 0xFFFFFF;
      ++g_ib_subs; g_ib_dwords += dw;
      if (verbose() && dw && dw < (1u << 22)) {
        uint32_t d = 0, ns = 0;
        uint32_t va = resolve_ib(base, addr, dw, &d, &ns);
        g_ib_draws += d; g_ib_nested += ns;
        dump_ib(base, addr, dw, va, seq, i, lr, d, "ring");
        fprintf(stderr, "W2C-IB f=%u seq=%u i=%u lr=%08x addr=%08x dw=%u va=%08x draws=%u nested=%u\n",
                g_frame, seq, i, lr, addr, dw, va, d, ns);
      }
    }
  }
  __imp__sub_888E5F58(ctx, base);
}

extern "C" void sub_888ECC28(PPCContext& __restrict ctx, uint8_t* base) {
  ++g_counts[H_RUNCB];
  uint32_t cb = ctx.r4.u32, pred = ctx.r5.u32, lr = (uint32_t)ctx.lr;
  uint32_t seq = g_seq++;
  if (plausible(cb) && readable(base + cb, 8)) {
    uint32_t f108 = ld32(base, cb + 108);
    uint32_t chunk = ld32(base, cb + 116);
    uint32_t chunks = 0, ibs = 0, dws = 0, draws = 0, nested = 0;
    int guard = 0;
    while (plausible(chunk) && readable(base + chunk, 8) && guard++ < 256) {
      uint32_t n = ld32(base, chunk + 4);
      if (n > 65536) break;
      ++chunks;
      for (uint32_t i = 0; i < n; ++i) {
        uint32_t e = chunk + 8 + 8 * i;
        uint32_t w0 = ld32(base, e + 0);
        uint32_t addr = ld32(base, e + 4);
        uint32_t dw = w0 & 0xFFFFFF;
        ++ibs; dws += dw;
        if (verbose() && dw && dw < (1u << 22)) {
          uint32_t d = 0, ns = 0;
          uint32_t va = resolve_ib(base, addr, dw, &d, &ns);
          draws += d; nested += ns;
          dump_ib(base, addr, dw, va, seq, i, lr, d, "cb");
          fprintf(stderr, "W2C-IB f=%u seq=%u i=%u lr=%08x addr=%08x dw=%u va=%08x draws=%u nested=%u\n",
                  g_frame, seq, i, lr, addr, dw, va, d, ns);
        }
      }
      chunk = ld32(base, chunk + 0);
    }
    if (verbose())
      fprintf(stderr, "W2C-RUN f=%u seq=%u lr=%08x cb=%08x pred=%08x f108=%08x chunks=%u ibs=%u dw=%u draws=%u nested=%u\n",
              g_frame, seq, lr, cb, pred, f108, chunks, ibs, dws, draws, nested);
  }
  __imp__sub_888ECC28(ctx, base);
}

// Predicated-tiling command interpreter: replays a token stream once per
// EDRAM tile.  r4 = tiling context; +52 = current tile, +112 = tile count.
extern "C" void sub_888E8428(PPCContext& __restrict ctx, uint8_t* base) {
  ++g_counts[H_TILEVM];
  if (verbose() && plausible(ctx.r4.u32) && readable(base + ctx.r4.u32 + 112, 4))
    fprintf(stderr, "W2C-TILEVM f=%u lr=%08x ip=%08x ctx=%08x tile=%u tiles=%u flags=%08x\n",
            g_frame, (uint32_t)ctx.lr, ctx.r3.u32, ctx.r4.u32,
            ld32(base, ctx.r4.u32 + 52), ld32(base, ctx.r4.u32 + 112),
            ld32(base, ctx.r4.u32 + 48));
  __imp__sub_888E8428(ctx, base);
}

#define SIMPLE(fn, slot, trace)                                                     \
  extern "C" void fn(PPCContext& __restrict ctx, uint8_t* base) {                   \
    ++g_counts[slot];                                                               \
    if (verbose() && trace)                                                         \
      fprintf(stderr, "W2C f=%u lr=%08x fn=%s r3=%08x r4=%08x r5=%08x r6=%08x\n",   \
              g_frame, (uint32_t)ctx.lr, g_names[slot], ctx.r3.u32, ctx.r4.u32,     \
              ctx.r5.u32, ctx.r6.u32);                                              \
    __imp__##fn(ctx, base);                                                         \
  }

SIMPLE(sub_888050E8, H_ENGRUNRT, 1)
SIMPLE(sub_88816028, H_ENG16028, 0)
SIMPLE(sub_888E6538, H_SUBMITIB, 1)
SIMPLE(sub_888E7740, H_BEGINCB, 1)
SIMPLE(sub_888E6458, H_RECIB, 1)
SIMPLE(sub_888E8768, H_TILEVM2, 1)
SIMPLE(sub_888E7DD0, H_KICK, 0)
SIMPLE(sub_888EC100, H_ENDCB, 1)
SIMPLE(sub_888EC2F8, H_BEGINCB2, 1)
SIMPLE(sub_888E4E08, H_DRAW_DIV, 0)
SIMPLE(sub_888E4A18, H_DRAW_DV, 0)
SIMPLE(sub_888E4460, H_DRAW_DIVUP, 0)
SIMPLE(sub_888E3F80, H_DRAW_DVUP, 0)
SIMPLE(sub_888E4418, H_DRAW_W, 0)
