# W2-c — where the extra in-race draws come from

**Verdict in one line: the "missing" draws are not pre-baked per-model command
buffers. The engine's baked-command-buffer path exists but is dead at runtime
(zero calls in 4143 frames). Every in-race frame contains one large recorded PM4
segment that the D3D runtime's *predicated-tiling interpreter* submits to the
ring three times, once per EDRAM tile; those two extra passes are the whole
surplus.**

Everything below is from capture `w2c_race2` (hook TU
`tools/d3d/hooks/w2c_cmdbuf.cpp`, CPU frame 4137) cross-checked against the
xenos plugin's per-draw trace for swap 4138
(`out/build/linux/logs/splitsecond_036.log`). Raw dumps: `~/ss-scratch/cmdbufs/`
(590 `.bin` + `manifest.txt`), machine-readable summary `docs/d3d/cmdbufs.json`.

## 1. The arithmetic

| quantity | value |
|---|---|
| PM4 draws executed by the command processor (swap 4138) | **4194** |
| distinct draw packets in the frame (oracle, after removing the repeats) | **1890** |
| surplus produced purely by replay | **2304** |
| D3D draw-API calls (hook frame 4137 / 4138) | 982 / 1057 |
| `D3DDevice_RunCommandBuffer` calls | **0** |
| PM4 `INDIRECT_BUFFER` submissions to the ring | 590 (588 distinct buffers) |
| distinct buffers submitted exactly once | 587, holding 782 draws |
| distinct buffers submitted **3×** | **1**, holding **1110 draws each** |
| draws accounted for CPU-side (782 + 3×1110) | **4112** (oracle 4194, −2 %) |

The two sides agree independently:

* **CPU side.** Hooking `sub_888E5F58` — the helper that writes
  `PM4_INDIRECT_BUFFER` (`0xC0013F00`) headers into the hardware ring — and
  decoding every submitted buffer gives 4112 draw packets from 590 submissions.
  One buffer (GPU address `0x1F9EFE20`, 69507 dwords / 271 KB, 1110 draws
  including its 66 nested IBs) accounts for 3330 of them because it is submitted
  three times in a row, all three from `lr=0x888E8594` — the "run indirect
  buffer" token handler inside the tiling interpreter `sub_888E8428`.
* **GPU side.** The oracle's `(vs,ps)` hash sequence for draws 116..2421 is
  byte-identical to that of draws 1268..3573: a **1152-draw block repeated three
  times**. Per band:

  | band | geometry draws | null point draws |
  |---|---|---|
  | 0..115 before the bracket | 116 | 0 |
  | 116..1267 tile pass 1 | 624 | 528 |
  | 1268..2419 tile pass 2 | 624 | 528 |
  | 2420..3571 tile pass 3 | 624 | 528 |
  | 3572..4193 after the bracket | 382 | 240 |

  116 + 3×1152 + 622 = 4194. Distinct work = 116 + 1152 + 622 = **1890**;
  4194 − 1890 = **2304 replayed draws**.

  "Null point draws" are `prim=1 count=1 ps=0` — 768 of the 1890 distinct
  packets. They are the XDK's own bounding-box / visibility draws (one per
  candidate draw, no pixel shader), whose memexported screen-space AABB feeds
  the bin-mask patcher in §4. Subtracting them leaves ~1122 real geometry draws
  against 982–1057 D3D draw-API calls; the remainder are the draws the runtime
  issues for `Clear`/`Resolve`.

The programme's original figure (4555 GPU vs 1619 API at swap 1882) is the same
shape: 4555 − 1619 = 2936 = 2 × 1468, i.e. two extra passes over a bracket
holding ~1468 draws.

## 2. Why the pre-baked command buffers are a red herring

The machinery is all there and it is correctly named:

| VA | role |
|---|---|
| `0x888EC2F8` | `D3DDevice_BeginCommandBuffer` — zeroes `pCB+112/116/120/124/128/132/144`, sets `device+13724 = pCB` |
| `0x888EC100` | `D3DDevice_EndCommandBuffer` — builds the single chunk at `pCB+184` = `{next=0, count=1, {dwords, gpuAddr}}`, sets `pCB+116 = pCB+184`, copies the nested-IB list to `pCB+112` and the patch table to `pCB+144` |
| `0x888ECC28` | `D3DDevice_RunCommandBuffer(device, pCB, predication)` — clears the device dirty masks the buffer declares (`pCB+24/32/40/48/56` and `+64..+96`), then walks the `pCB+116` chunk list and submits every `{dwords, addr}` entry, either via `sub_888E6538` or by inlining `INDIRECT_BUFFER` packets itself |
| `0x88805160` | engine `cCommandBufferContext` physical heap (`"Command buffer physical heap: %dk"`) |
| `0x88815130` | engine bake — the only caller of Begin+EndCommandBuffer |
| `0x888050E8` | engine `RunForCurrentRenderTarget` — linear search of `{cmdbuf, ?, renderTarget}` triples; the miss path is the `"Current render target %x doesn't match any of my command buffers. Add with cCommandBufferContext::AddRenderTarget()"` assert |
| `0x88816028` | engine per-renderable draw; takes the command-buffer branch only when `renderable+28 != 0` **and** the byte at `0x88E977B0` is non-zero — that byte is the cvar `"CommandBuffer/RuntimeEnabled"`, registered at `sub_88E57ED8` |

Runtime measurement over the whole 4143-frame capture (boot, menus, load, race):

```
BeginCommandBuffer=0  EndCommandBuffer=0  RunCommandBuffer=0  EngRunForRT=0
```

No command buffer is ever baked and none is ever replayed. `CommandBuffer/
RuntimeEnabled` is off in this build/configuration. **A host implementation can
ignore this path entirely for now**, but it must fail loudly (not silently) if
`BeginCommandBuffer` is ever called, because the mechanism would then bypass the
per-draw API exactly as the plan feared.

## 3. The mechanism that actually replays: predicated tiling

`sub_888E8428` is a small interpreter over a token stream (`r3` = instruction
pointer, `r4` = tiling context). Tokens are tagged by their top byte:

| token | effect |
|---|---|
| `0x81xxxxxx` | **run indirect buffer**: dwords = `token & 0xFFFFFF`, address = next dword; calls `sub_888E5F58`; `ip += 8` |
| `0x82xxxxxx` | **begin tiling**: copies the 248-byte tile descriptor to `ctx+108`, `ctx+52 = 0` (tile index), `ctx+356 = 0x7FFFFFFF`; `ip += 252` |
| `0x83xxxxxx` | mark loop-body start (`ctx+364 = ip`), emit `SET_BIN_SELECT` via `sub_888E72B0` |
| `0x84/0x85` | end/begin conditional block (`ctx+368`) |
| `0x86xxxxxx` | **loop start**: `ctx+372 = ip` |
| `0x87xxxxxx` | **loop end**: `++ctx+52`; **if `ctx+52 < ctx+112` (tile count) then `ip = ctx+372`** |
| `0x88xxxxxx` | branch into the sub-list at `ctx+84` if `ctx+356 & token` |
| `0x89xxxxxx` | predicated `sub_888E74E0` |
| `0x8Axxxxxx` | per-tile resolve + patch: `sub_888E7F68`, `sub_888E8110`, `sub_888E81F0`/`sub_888E8330` |
| `0x8Exxxxxx` | predicated run indirect buffer `{addr = ip[2], dwords = ip[3]}` |
| `0xC0000000` | end of stream |

The stream is written by `sub_888E6458` (`RecordIB`): whenever the D3D runtime
would submit a segment while a tiling bracket is open (`device+11012`, the token
write pointer, non-zero, guarded by the spinlock at `device+11016`) it appends a
`0x81` token instead of calling `sub_888E5F58`. On `EndTiling` the interpreter
walks the stream once per tile.

Per tile, `sub_888E72B0` emits `SET_BIN_SELECT_LO` (packet `0xC0006200`), and the
recorded stream itself carries per-tile `SET_BIN_MASK_LO` + `PA_SC_WINDOW_OFFSET`
triples. In this frame there are **3 tiles**, bin masks `0x03 / 0x0C / 0x30`,
window offsets `0x00000000 / 0x7F000000 / 0x7E000000` with scissors
`0x01000500 / 0x02000500 / 0x02A00500`. Every `DRAW_INDX` in the buffer is
emitted **predicated** (packet bit 0 set) and preceded by its own
`SET_BIN_MASK_LO`, so the command processor drops draws that miss the current
tile — `rexglue-vmx/src/graphics/command_processor.cpp:769`.

Counting: `RingWriteIB` (`sub_888E5F58`) runs ~590×/frame in race —
256 of those are the segment "kick" from `sub_888E7DD0` (append `EVENT_WRITE_SHD`
then submit), ~260 come from the tiling interpreter, the rest are direct
`RecordIB` submissions outside any bracket.

## 4. Are the replayed bytes static, or patched?

**Patched, in place, between passes.** The three dumps of `0x1F9EFE20` taken at
the three submissions differ in exactly **555 dwords out of 69507** — and 555 is
exactly the number of top-level `DRAW_INDX` packets in the buffer. Every
differing dword is the payload of a `SET_BIN_MASK_LO` packet (`0xC0006000`)
immediately preceding a draw, and every one changes `FFFFFFFF -> 8000003F`
(submission 1 → submissions 2 and 3, which are byte-identical to each other).

The writer is guest code, not the GPU: `sub_888E81F0` / `sub_888E8330`, reached
from the interpreter's `0x8A` token. They walk a list of
`{bbox-record address, patch address}` pairs, read a 4×16-bit screen-space AABB
(in 8-pixel units) that the GPU memexported from the null point draws, test it
against each tile rectangle held at `ctx+108+16*i`, OR `3 << (2*i)` into a mask
for every overlapping tile, store the mask **straight into the recorded command
buffer** and `dcbf` the line. `sub_888E8110` does the same for occlusion-query
results (writes `0` or `0xFFFFFFFF` into predication words in the buffer).

So the sequence is: pass 1 runs with every mask `0xFFFFFFFF` (everything drawn,
visibility data produced), the patcher then computes real masks, passes 2 and 3
run with them. In this frame every mask came out `0x8000003F` (visible in all
three tiles), so no draw was actually culled and the multiplier is a clean 3×.

Nothing else is patched: no relocation of resource addresses, no matrix or
constant fix-ups in the buffer bytes. (The `D3DCommandBuffer` object does carry a
patch table at `+144` with counts at `+124/+128`, copied in `EndCommandBuffer` —
but since no command buffer is ever baked, that table is never exercised.)

## 5. Verdict for the host

**Can the replayed buffers be decoded once into host draw lists?** The question
does not arise in the form the plan assumed, and the answer for the real
mechanism is better:

1. **Nothing needs re-recording.** The replayed segment is *this frame's*
   recording of ordinary D3D calls — it is rebuilt from the per-draw API every
   frame, not baked at load. Every draw inside it passed through
   `D3DDevice_DrawIndexedVertices` / `DrawVertices` / the UP variants. So the
   per-draw API really is the complete draw set; the surplus is pure Xenos EDRAM
   tiling and has **no host meaning at all**.
2. **The host must suppress the replay, not reproduce it.** A native Vulkan
   device renders to a full-size attachment, so there is one pass, not three.
   The host implementation should own the bracket and execute the recorded draws
   exactly once, ignoring `SET_BIN_MASK`/`SET_BIN_SELECT` and the per-tile
   `PA_SC_WINDOW_OFFSET`/scissor. The proven seams to take are
   `sub_888E6458` (record-or-submit: the point at which a submission is diverted
   into a token instead of reaching the ring), `sub_888E8428` (the interpreter)
   and `sub_888E8768` (its driver). The engine-facing `BeginTiling`/`EndTiling`
   entry points are not yet named — `device+11012`, the token write pointer, is
   only ever *advanced* by `sub_888E6458` and cleared by the device-reset path
   `sub_888F5798`, so whatever initialises it does so through a store this
   offset-based scan does not see; naming it is W2-b's frame-graph job. That deletes 2304 of 4194 draws per
   frame outright — a ~55 % draw-call saving before any other optimisation.
3. **What must be handled, not dropped.**
   - The per-tile resolve (`0x8A` token → `sub_888E7F68`/`sub_888E8110`) must
     become one full-surface resolve instead of three tile resolves.
   - The null point/bounding-box draws (768 of 1890 distinct packets, 41 %) exist
     only to feed the bin-mask patcher. With tiling gone they are dead work and
     can be dropped — but `sub_888E81F0`/`sub_888E8330` write their results into
     guest memory, so if the host keeps the guest D3D path alive in `tee` mode
     the memexport must still run or those functions will read stale AABBs.
   - Occlusion queries (`sub_888E8110`) patch predication dwords in the buffer.
     RRU's "always visible" policy is compatible: write `0xFFFFFFFF`.
4. **The one pattern that would block a host re-record** is the in-place patching
   itself: guest code writes into the middle of a submitted PM4 stream between
   submissions and relies on cache flushes for coherency. A host that decoded a
   buffer once and cached the result would use stale bin masks. Since the host
   plan is to intercept at the D3D API (not to parse PM4), this is moot — but it
   is a hard argument against any design that tries to cache decoded PM4.
5. **Residual risk, ranked.** (a) `CommandBuffer/RuntimeEnabled` could be turned
   on by a config or a later level — put a fatal assert in
   `D3DDevice_BeginCommandBuffer`. (b) `sub_888E6538`/`sub_888ECC28` are the only
   two other paths that can submit indirect buffers the host would not see; both
   are hooked and both read zero in race. (c) 82 of 4194 oracle draws are not
   accounted for CPU-side, which is frame skew between hook frame 4137 and GPU
   swap 4138 (adjacent frames differ by ~75 API draws); it is not a missing
   submission path.

## 6. Reproduction

```sh
bash tools/d3d/build_hooks.sh tools/d3d/hooks/w2c_cmdbuf.cpp
rm -rf ~/ss-scratch/cmdbufs && mkdir -p ~/ss-scratch/cmdbufs
W2C_DUMPDIR=~/ss-scratch/cmdbufs \
  setsid nohup bash tools/d3d/capture.sh w2c_race2 320 >/dev/null 2>&1 & disown
# wait for ~/ss-scratch/captures/w2c_race2/done  (~6 min)
python3 tools/d3d/w2c_analyse.py ~/ss-scratch/captures/w2c_race2 \
        "$(cat ~/ss-scratch/captures/w2c_race2/logname)" -o docs/d3d/cmdbufs.json
python3 tools/d3d/w2c_pm4.py summary ~/ss-scratch/cmdbufs
python3 tools/d3d/w2c_pm4.py dump ~/ss-scratch/cmdbufs/ib_00578_1f9efe20_69507.bin | head -40
```

`tools/d3d/w2c_pm4.py` builds its register and opcode tables directly from
`~/rexglue-vmx/include/rex/graphics/register_table.inc` and `xenos.h`, so it
decodes exactly what the xenos plugin executes.
