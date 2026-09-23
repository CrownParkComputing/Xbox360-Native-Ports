# Bugbear `.scne` scene/geometry format — Ridge Racer Unbounded (Xbox 360)

Reverse-engineered data-driven from the 1,451 extracted `.scne` files under
`extracted/data/` (track pieces, buildings, props, landmarks). Parser:
`tools/scne_parse.py` (stdlib-only). **All 1,451 files parse with zero errors
and exact end-of-file consumption**; sample OBJ exports + wireframe previews in
`samples/scne/` (water tower, tower crane, suspension-bridge landmark,
downtown skyscraper block).

All multi-byte fields are **big-endian** (Xbox 360 / PPC) unless noted.

## Container

```
"scne"  u32 version (=6 everywhere)
```
followed by a flat sequence of top-level chunks to EOF, always in this order:
`modl ltpd ssce aprl airt trsp trcp tvlm`.

**Chunks carry no size field.** Every chunk is

```
tag(4cc)  u32 version  u32 record_count
```

followed by `record_count` records whose layout is fixed per (tag, version).
Child chunks are embedded inline inside parent records, so the file can only
be read with full knowledge of every record layout (all layouts below are
verified corpus-wide). Strings are `u32 len + bytes` (no NUL). Asset
references are `4cc class + string path` (classes seen: `bmap`, `scne`).

## Chunk tree

```
scne v6
├─ modl v0                 models
│  └─ record: str name, str props, f32[16] matrix, f32[3] bbox_min, f32[3] bbox_max,
│     then child chunks until 'anim' is consumed:
│     ├─ pmsh v0           record: u32[3] (0), f32[3] extents   (physics/proxy bbox; may appear twice)
│     ├─ mesh v0           record: str name, then:
│     │  └─ btch v2        render batches
│     │     └─ record: u32, f32, u32, f32 pos_scale, f32[3] bbox_min, f32[3] bbox_max, then:
│     │        ├─ mtrl v4  record: str name, u32 flags (0x37/0x3e...), 5×u32 params, then:
│     │        │  └─ txtr v0  record: u32 slot, 'bmap', str path   (slot 1=diffuse _c,
│     │        │              3/4/8 = normal _ns / spec / illumination stages)
│     │        ├─ vert v3  record = 16 bytes (see below), count = vertex count
│     │        ├─ tria v0  record = 3×u16 indices, count = triangle count
│     │        └─ edgm v0  always empty in corpus
│     ├─ shpe v0           collision shapes; record: u32 kind, u32 size, size bytes
│     │                    (kind 1 = box: 3×u32 + 3 LE f32 half-extents; kind 0 = mesh blob)
│     └─ anim v0           record: kfra chunk + dmmy chunk + 12 trailer bytes (-1, hash, 0)
│        ├─ kfra v0        record = 32 bytes (8 dwords per keyframe)
│        └─ dmmy v0        record: f32[16] matrix, str name  (attachment dummies)
├─ ltpd v1                 lights; record: f32[16] matrix + 44 bytes
│                          (rgb color, intensity, 10,10 range?, -1,-1, flags)
├─ ssce v2                 sub-scene xrefs; record: f32[16] matrix, u32, u32,
│                          str instance_name, 'scne', str path-to-other-.scne
├─ aprl v0                 portal/approach volumes; record: u32 kind + 8×f32[3] corners
├─ airt v0                 AI routes; record: aisc chunk + u32 + u32 + str condition
│  └─ aisc v1              record = 10×f32: left point, right point, 4 params
├─ trsp v0                 spawn points; record = f32[16] matrix
├─ trcp v0                 camera(?) points; record = 3×f32[3]
└─ tvlm v1                 track volumes; record: f32[16] matrix, 6×f32, str name,
   └─ tvpl v0              plane chunk; record = f32[4] plane equation (nx,ny,nz,d)
```

`modl` model records: `props` is either `static` or a `#`-separated tag string
(e.g. `b.moderateinherit#e.metal.hollow#s.metalhollow`). Sub-meshes appear as
separate models named `foo$part1`, `foo$part1$part2`, …; LODs as `foo#lod1`.
The model `matrix` is row-major, rows = basis vectors, 4th row = translation
(usually identity for the base model, real transforms on `$part`/dummy nodes).

## Vertex format (`vert` v3, stride 16)

| bytes | type | meaning |
|---|---|---|
| 0–5 | 3×s16 | quantized position: `pos = batch_bbox_center + v * batch.pos_scale` |
| 6–7 | u16 | always 0 in corpus |
| 8–11 | u32 | packed TBN frame (below) |
| 12–15 | 2×s16 | UV: `u/1024, v/1024` |

`pos_scale` is a power of two chosen per batch (e.g. 2^-8, 2^-12) so ±32767
covers the batch bbox. Verified corpus-wide: decoded positions fit the batch
bbox to < 0.033 worst-case slack (quantization), and all `tria` indices are in
range. Triangle winding + UV orientation confirmed by flat-face reconstruction
(OBJ export flips `v` to 1-v for image convention).

### Packed TBN (bytes 8–11, one u32)

Angular encoding, decoded and verified against geometric face normals
(median dot = 0.99999 on flat-shaded faces):

| bits | field | decode |
|---|---|---|
| 0–10 | yaw | `Y = bits * 2π/2048` |
| 11–21 | pitch | signed 11-bit, **stored doubled**: `P = signed * π/2048` |
| 22–31 | roll | tangent rotation about the normal (not needed for normals) |

```
normal = ( cos P · cos Y,  sin P,  −cos P · sin Y )
```

Yaw is arbitrary when pitch = ±90°. The doubled pitch store (unit π/2048
instead of 2π/2048) is exact — a half-unit pitch decode makes slanted normals
match measured face normals precisely.

## Texture / material references

Inline path strings to `.bmap` files (see `BMAP_FORMAT.md`), not string-registry
ids. Material param dwords include floats (specular/blend factors, e.g. 0.1);
flags value 0x37 most common. Texture slot numbers observed: 1 (diffuse `_c`),
3, 4, 8 (normal `_ns`, spec, illumination — some materials bind the same map
to several slots).

## Tools

```
tools/scne_parse.py --info file.scne          # chunk tree + mesh table
tools/scne_parse.py --obj out.obj file.scne   # OBJ with v/vt/vn/f, usemtl per batch
tools/scne_parse.py --obj out.obj --local ... # skip model matrices
```

Corpus totals: 24,082 meshes, 11.54 M vertices, 7.12 M triangles.

## Remaining unknowns (not needed for geometry)

- `mtrl` 5 param dwords + flags word semantics; material name → shader mapping.
- Tangent reconstruction convention for the roll field (bits 22–31).
- `kfra` keyframe record fields (8 dwords), `shpe` kind-0 collision-mesh blob
  internals, `ltpd` light param tail, `trcp`/`aprl` exact semantics.
- `ssce` xref resolution (parser records name/path/matrix in `Scne.xrefs`;
  recursive OBJ merge not implemented).
- vertex bytes 6–7 (always zero here — likely position w or padding).
