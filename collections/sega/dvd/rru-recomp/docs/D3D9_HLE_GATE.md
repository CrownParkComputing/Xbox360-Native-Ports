# Phase 4 gate check: D3D9-HLE viability — VERDICT: PASS

RRU's XEX contains the Xbox 360 D3D9 runtime as a closed, discrete module.
Not LTCG-flattened. Route 1 (HLE native renderer) is viable and cheaper than
estimated: **~20 hook points for first light, not 50-100.**

## Shape of the layer

- No COM vtable (360 D3D9 isn't COM) - instead a flat ~24KB device struct in
  r3 everywhere, containing six u64 dirty masks (+0..+40), shader/fetch
  constant shadows (+1920, +6016), a **Xenos register shadow** (+10500..
  +10600), push-buffer put/limit (+13600/+13628), EDRAM window (+15308/+15312).
- ~78 discrete SetRenderState_* setters (sub_8253AFC0..sub_8253C2B0, exactly
  67 call sites each), SetSamplerState = sub_8253C488.
- **Only 6 draw entry points in the whole 47k-function binary**; ~46 engine
  call sites total. Zero engine functions emit PM4 directly - the push-buffer
  reserve (sub_821B1D48) has a closed 67-function caller set, all D3D-module.

## Minimal hook surface (Shape A - read device struct at submit)

| guest addr | role |
|---|---|
| sub_821BA6E0 | primary Draw (flush + DRAW_INDX + tiling loop), 20 sites |
| sub_821B7F30 | draw variant 2 (6 sites) |
| sub_821AAB08 | draw variant 3 (7 sites) |
| sub_821B52C8 | Clear/Resolve (f1 = Z, r4 = D3DCLEAR bits), 9 sites |
| sub_82199F58 | Present (VdSwap/VdPersistDisplay), 2 sites |
| sub_821BAAF8 | shader-program selection, called from every draw |

Because the setters materialize all state into the register shadow *before*
the draw, hooking these six and decoding dev+10500..+10600 + fetch constants
yields the complete draw description - no setter semantics to reimplement.
Then stub sub_821B1D48 to a sink to kill PM4 entirely.

## Secondary hooks (Shape B, for semantic interception)

- sub_8253C308/C3E8/C4E0/C598/C688: likely SetTexture/SetStreamSource/
  SetIndices/SetVertexDeclaration (5 sites each)
- sub_821B83A8 / sub_821B8A60: dirty-range -> SET_CONSTANT emitters
- sub_825467C0: state reset; sub_8218E9A0/sub_8218EC78: 360-dword device
  default register block (one caller)
- sub_8254D218 (VdInitializeEngines), sub_8253FEB0 (ring init),
  sub_8254CF70 (display mode), sub_82552140 (physical resource allocator)

Hook mechanism already exists in the SDK: REX_HOOK (see
rexglue src/kernel/crt/file.cpp).

## Traps and notes

- D3D lives in TWO disjoint address windows (0x82183000-0x821FFFFF and
  0x8253D000-0x82557000) - PGO-scrambled; classify by call graph, never
  address locality.
- Hot-function rankings are dominated by a string-ID registry
  (sub_821D1048: 16,860 sites; sub_821D1FF8; sub_821D6CC8) and a generic
  helper sub_8253AC68 - exclude them.
- The 8 giant renderer functions (sub_8299EF28 46k lines/2,079 setter calls,
  sub_829BE350, sub_829B34B0, ...) have zero direct callers - dispatched
  indirectly; live tracing must instrument the dispatch, not static sites.
- 'stwu rX,4(rY)' and the literal 8704 are PM4 false-positive magnets; a
  real draw header is ori with a preceding lis -1638n.
- TLS slot 2548 = per-thread engine context (835 sites) - name it early.

## Device shadow -> Xenos register base map (recovered from sub_821BA6E0 flush)

| reg base | dev offset | contents |
|---|---|---|
| 0x4000 | +1920  | vertex ALU constants (via sub_821B83A8) |
| 0x4400 | +6016  | pixel ALU constants (via sub_821B83A8) |
| 0x2000 | +10368 | RB/PA window regs |
| 0x2100 | +10444 | |
| 0x2180 | +10528 | |
| 0x2200 | +10548 | |
| 0x2280 | +10596 | |
| 0x2300 | +10680 | |
| 0x2380 | +10832 | |
| 0x4900 | +10112 | texture fetch constants |

Register index = base + (word offset within block); names in
rexglue include/rex/graphics/registers.h. Dirty mask for each block is the
u64 loaded just before each bl (dev+0..+40 masks).
