# Mesh-copy destination ranges — 2026-09-12

## Result and limits

`gpu_memexport_copy_ranges = true` substantially improves driving geometry in
the tested airport race. Inspected captures no longer contain the screen-wide
stray shapes or the wedge/magenta tile bands. Tile replay remains enabled.
The user confirmed the improvement, but also reported incorrect car details /
textures and rendering changes / increasing blur while driving. The user later
clarified that power plays do not freeze; stable 60 FPS and lower rendering
overhead are the current priorities. These are
still open; this is not a claim that the renderer is correct or a full race is
playable.

- Before: [baseline](evidence/copy_ranges/before.png).
- After: [four driving/effect frames](evidence/copy_ranges/after_driving.png).
- Shader: [actual SDK disassembly](evidence/copy_ranges/copy_shader.txt).

The screenshots cover different moments in a live race, rather than an exact
frame replay. The user also drove during capture. They demonstrate the visible
improvement but are not a deterministic pixel comparison.

## Correction to the earlier handoff

The 20 MiB and 63 MiB ranges were declared by **mesh-copy shader
`C8302F90258AC60E`**, not the tile-classification pass. They are already that
large before `SharedMemory::MakeRangeValid` rounds to pages. Tracking those
same declared ranges at byte granularity would still protect the entire pools.

The earlier clamp failed for a different reason than the handoff suggested:
the copy starts at a computed offset inside the pool, and there are **two**
exports of four elements per invocation. Clamping only the length at the
original pool base protects the wrong bytes and counts only half the exports.

The shader's address arithmetic, independently decoded from the `.xsh` cache
and then confirmed by the SDK's disassembly:

```text
r0.x = vertex_index + c68.x
r0.x = trunc(r0.x * c255.w)
eA = r0.x * c255.xyxx + c69
export eM0, eM1, eM2, eM3
r0.x += c255.z
eA = r0.x * c255.xyxx + c69
export eM0, eM1, eM2, eM3
```

For the verified constants `c255 = (0, 1, 4, 8)` and 8-byte elements:

```text
start = stream_base + 64 * (first_vertex_index + c68.x)
length = 64 * vertex_count
```

Examples from the new capture: the old 20 MiB pool at `0x13A60000` now produces
copies at `0x14060000` (797,568 bytes), `0x14123000` (3,702,784 bytes), and
`0x144AB000` (219,648 bytes). The old 63 MiB pool at `0x15B10000` produces, among
others, `0x16110000` (8,192 bytes) and `0x16112000` (3,473,408 bytes).

## Implementation

In `~/rexglue-vmx`:

- `src/graphics/util/draw.cpp`: a guarded shader-specific range calculation,
  used for both residency requests and GPU-written ownership. The default
  backend behavior is unchanged unless `gpu_memexport_copy_ranges` is enabled.
- `include/rex/graphics/util/memexport_copy.h`: checked copy-offset arithmetic.
- `tests/unit/graphics/memexport_copy_test.cpp`: 17 assertions across two cases,
  covering offsets, both exports, capacity bounds, overflow, and invalid floats.

The optimization requires the exact shader hash, vertex-shader type, export
constant 69, the verified arithmetic constants, a sequential point-list draw,
unclamped/unwrapped vertex indices, and a destination within the declared
stream and physical memory. Unsupported cases retain the conservative range.
It takes precedence over the old count-only clamp when both are enabled.

This is deliberately a title-specific correction, not a general memexport
address interpreter or a complete solution for mixed CPU/GPU writes to one page.
The shared-memory page tracking itself is unchanged.

Validation: Release GPU plugin builds; the new Catch2 test file was independently
compiled against the existing Catch2 libraries and all 17 assertions passed.
The tested plugin was copied into `out/build/linux`, and the title config now
enables the fix. No generated guest source was edited.

## Captures and next diagnostics

Local raw captures (not committed):

- `/tmp/ss-defects-baseline`, log `splitsecond_070.log`.
- `/tmp/ss-defects-copy-range`, log `splitsecond_071.log`.
- `/tmp/ss-defects-panels`, log `splitsecond_072.log`.

Logs live in `out/build/linux/logs/`. The second run includes a 9.133-second
interval between dumps spaced 60 guest swaps apart (normally about 2 seconds).
The third has a 9.389-second interval around a power-play effect. Both continued
to emit frames after these intervals; this does not rule out a later hang.

`--gpu_log_slow_draw_ms=50` now logs slow draw stages (translation, texture
uploads, pipeline compilation, bindings, buffer uploads, submission, ownership /
readback). It defaults OFF. Use it to distinguish GPU-backend work from guest
thread stalls; use thread stacks for a persistent hang.

The existing `--gpu_draw_trace_dump_dir` now also saves each draw's complete
register file and sampled linear 8-bit 2D planes, alongside vertex/index data.
This is only active during the explicitly triggered draw trace. A full-screen
Bink draw captured at swap 666 uses PS `F62C0DC9C7803633`, nonconstant 1280x720 Y
and 640x360 U/V planes, and the expected YUV conversion constants. That proves
the source planes are present for this draw; it does not prove the smaller
event-select movie panels are correctly sampled or composited.
