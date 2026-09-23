# Bugbear `.bmap` texture format — Ridge Racer Unbounded (Xbox 360)

Reverse-engineered data-driven from the 5,901 extracted `.bmap` files under
`extracted/data/`. Converter: `tools/bmap_convert.py` (stdlib-only, PNG output).

All multi-byte fields are **big-endian** (Xbox 360 / PPC).

## Container layout

| offset | size | value |
|---|---|---|
| 0x00 | 4 | magic `"bmap"` |
| 0x04 | u32 | version = 2 |
| 0x08 | u32 | 0 |
| 0x0C | u32 | `name_len` |
| 0x10 | name_len | source asset path, e.g. `data/art/vehicles/27_badass/rim_c.tga` (not NUL-terminated) |
| +0 | 4 | chunk tag `"bmbd"` (bitmap data) |
| +4 | u32 | 0 |
| +8 | u32 | `payload_size` (= bytes remaining to EOF) |
| +12 | payload_size | texture payload (below) |

## Texture payload

52-byte header, then raw GPU texel data:

| dword | value |
|---|---|
| 0 | 3 (resource type?) |
| 1 | 1 |
| 2–4 | 0 |
| 5, 6 | `0xFFFF0000` (probably default LOD/clamp words) |
| 7–12 | **Xenos `GPUTEXTURE_FETCH_CONST`** — 6 dwords, exactly the D3D 360 texture fetch constant |

This 52-byte header is the same layout as the odd sibling `.dds` files in the
tree that start `00 00 00 03` — those are the same 360 payload with a different
extension, not real DDS.

### Fetch constant fields used by the converter

(dword numbering within the 6-dword fetch constant; bit 0 = LSB)

- **dword0**: bit 31 = `tiled` (always 1 in RRU); bits 22–30 = `pitch` in
  32-texel units; bits 0–1 = type (2 = 2D texture); sign/clamp bits below.
- **dword1**: bits 0–5 = `format` (Xenos `TextureFormat`, see
  `rexglue-vmx/include/rex/graphics/xenos.h`); bits 6–7 = `endianness`
  (1 = 8-in-16 swap, 2 = 8-in-32 swap); bits 12–31 = base address (always 0
  here — data follows the header directly).
- **dword2**: bits 0–12 = `width-1`; bits 13–25 = `height-1`.
- **dword3**: num_format/swizzle/filters (swizzle is identity for DXT files,
  R↔B-swapped for 8_8_8_8 ones — memory order after the 8-in-32 swap is BGRA).
- **dword4/5**: filters, mip min/max, etc. (not needed for extraction).

## Formats present in RRU (survey of all 5,901 files)

| Xenos format | id | count | used for |
|---|---|---|---|
| DXT1 | 18 (0x12) | 3,516 | opaque diffuse/spec/illumination maps, logos, menu |
| DXT4/5 (DXT5) | 20 (0x14) | 2,265 | anything with alpha: car skins, normal maps (`_ns`), fonts |
| 8_8_8_8 | 6 | 120 | **skyboxes only** (`art/effects/skybox/*`), HDR RGBM |

Every file is 2D, tiled, base address 0. No cube maps, no other formats,
0 parse failures.

## Texel data encoding

1. **Tiling**: standard Xbox 360 2D tiling (`XGAddress2DTiledOffset`).
   Elements are DXT blocks (8 or 16 bytes) or 32-bit pixels. The stored
   surface is padded to a multiple of 32×32 *elements* (so DXT mips are padded
   to 128×128 texels, 8888 to 32×32). The correct offset function is Xenia's
   `TiledOffset2DOuter/Inner` — note the `(y & 1) << 4` term that many
   circulating copies of `XGAddress2DTiledOffset` drop; without it every odd
   row collides with its even neighbour.
2. **Endianness**: after untiling, byte-swap per dword1: DXT data is 8-in-16
   swapped (each u16 of the block), 8888 is 8-in-32 swapped.
3. **DXT** then decodes exactly as on PC (little-endian words within blocks).
4. **8_8_8_8**: memory order after swap is B,G,R,A. All 120 such files are
   HDR skyboxes stored RGBM-style: `final_rgb_linear = rgb * alpha * 8`
   (alpha values observed 6–76; decoding without the multiply gives a washed-out
   image). `bmap_convert.py` applies the multiply + gamma 2.2 by default;
   `--raw-8888` dumps the raw channels instead.

## Mip chain

`payload_size - 52` equals the sum of all mip levels with each level padded to
the 32×32-element tile granularity, with the smallest levels sharing a single
packed tail tile (standard 360 packed-mip behaviour). E.g. 1024×1024 DXT5 =
0x100000 + 0x40000 + 0x10000 + 3×0x4000 + 0x4000 (packed tail) = 0x160000.
The top mip always starts at payload offset 52, which is all the converter
extracts; the exact packed-tail threshold was not pinned down (a 1024×512 DXT1
file measures 0x5A000, i.e. levels ≤32 texels share the tail).

## Converter

```
tools/bmap_convert.py file.bmap [-o out.png]      # single file
tools/bmap_convert.py --info file.bmap            # header dump
tools/bmap_convert.py --batch DIR --out OUTDIR    # recursive, mirrors tree
```

Verified on: legal disclaimer screens (readable paragraph text), debug font
atlases, sponsor logo sheets, car skins/liveries (readable licence plate),
skyboxes. Samples in `extracted_textures_samples/`.
