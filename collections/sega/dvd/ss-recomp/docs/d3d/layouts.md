# Split/Second D3D object layouts (W1-b, static)

Inputs: `generated/splitsecond1/splitsecond_recomp.*.cpp` (PPC asm comments), `~/rexglue-vmx/include/rex/graphics/xenos.h` + `register_table.inc`. Scripts: `tools/d3d/w1b_census.py` (field-access census, taint over r3..r10 / globals / stack, 58,113 functions) and `tools/d3d/w1b_layouts.py` (role propagation, this file, `layouts.json`, `layout_leaks.json`). Static only; nothing here has runtime confirmation yet (that is W2-d).

Confidence: **A** = two independent static lines of evidence (e.g. XDK layout + decoded idiom + setter/flush agreement); **B** = XDK layout or a decoded idiom matches the access pattern; **C** = offset seen, name is a guess or unknown.

## How the device is reached

- Inside the band: `this` in r3, or `**(0x880007AC)` — an XEX import-variable slot, the kernel export `VdGlobalDevice` (D3D publishes its device there); 16 band functions use it (tag `G880007AC->0`), e.g. `sub_888F6358` (shutdown) writes the slot.
- Engine: `*(*(0x88ED9388)+1388)` — the renderer singleton keeps the device pointer at +1388 (tag `G88ED9388->1388`, 185 call sites pass it as r3 into the band). Some engine methods reach it through `this->1388` or fields such as `this->452`, `this->84`, `this->92`, `this->164`.
- The engine cvar `renderer/texture_fetch_constant_mode` (names `SetTextureFetchConstant` / `GpuSetTextureFetchConstant` live in an enum-name table at 0x88E9E504/0x88E9E508; the value is cached in the global 0x88F02B88) gates the engine's direct dirty-mask edits (see leaks): `mode == 2` = GpuSetTextureFetchConstant.

## Objects recovered

| object | size guess | fields | how it was identified |
|---|---|---|---|
| device (D3DDevice) | 24224 (max offset touched) | 459 | anchors 0x888DBC78 / 0x888D63E8 / 0x888E69E0, VdGlobalDevice, any root arg touched at offset >= 1024, propagation over the band call graph |
| resource | 180 | 31 | lwarx/stwcx at +4, `Common & 0xF` type checks, Release anchor; multi-typed params (surface/texture/commandbuffer) collapse here |
| vb_or_ib | 36 | 10 | params touched exactly at +24/+28 (2-dword fetch constant), passed to SetStreamSource/SetIndices-like |
| vertexbuffer | 52 | 5 | r5 of 0x888D63E8 (SetStreamSource-like) and type check == 1 |
| texture | 56 | 14 | params touched at +28..+48 (6-dword texture fetch constant) or type check == 3 |
| commandbuffer | 28 | 3 | type check == 8 |
| device->N sub-objects (24200, 13724, 12872, 12868, 21780, 11976, 10896, 12612, 9572) | - | 16, 10, 6, 5, 3, 4, 4, 3, 4 | pointer fields of the device that the band dereferences (ring / command-buffer / pool objects); unnamed |

Not separable statically: **surface** (only `Parent` at +24 from Release: type 4 with `Common & 0x40000000` releases +24), **vertex/pixel shader**, **declaration**, **query**, **async block** — their type checks (5/6) and lwarx patterns never appear on a root argument in the band, so their fields are inside the `resource` cluster or in the unnamed device sub-objects. W1-a's names will split them.

## D3DDevice map

| device offset | contents | confidence |
|---|---|---|
| +0 | dirty mask A (64-bit) = vertex-shader ALU constant dirty | A |
| +8 | dirty mask B (64-bit) = pixel-shader ALU constant dirty (0x884990E0 inlines SetPixelShaderConstantF: writes c256 at +6016 and ORs a bit here) | A |
| +16 | dirty mask C (64-bit) = register groups 0x2200/0x2180/0x2100/0x2000 (table below) | A |
| +24 | dirty mask D (64-bit): bit 0 vertex-fetch dirty (SetStreamSource ORs the caller bit: 1 for streams 0-2, 2 for stream 3), bits 6-31 texture fetch constants 0-25 (engine sets/clears exactly these), bits 34-54 register group 0x2280 | A/B |
| +32 | dirty mask E (64-bit): bits 0-37 group 0x2300..0x2325, bits 42-45 group 0x2380..0x2383 | A |
| +40 | dirty mask F (64-bit): ANDed with mask C, handled by `sub_888EEDF8(dev, C&F, dev+10560 [RB_HIZCONTROL shadow])` | B |
| +48 / +52 / +56 | ring write pointer / alloc limit / packet limit (every packet: compare +48 with +56, else `bl sub_888E69E0`, then `stwu word,4(ptr)`) | A |
| +1152..+1775 | texture fetch constant shadow, 26 slots x 6 dwords (reset invalidates type) | A |
| +1776..+1919 | vertex fetch constant shadow, slots 78..95 x 2 dwords; slot k = 95 - D3D stream (slot 95 = stream 0, slot 92 = stream 3); SetStreamSource writes dword0 = VB.dword0 + byte offset (bit-29 fixup), dword1 = VB.size - offset | A |
| +1920..+10111 | ALU constant shadow c0..c511 (16 bytes each; PS constants start at c256 = +6016) | B |
| +10112..+10271 | bool (0x4900..) and loop (0x4908..) constant shadow | B |
| +10368..+10431 | register shadow 0x2000..0x200F (RB_SURFACE_INFO .. PA_SC_SCREEN_SCISSOR_BR) | A |
| +10444..+10527 | register shadow 0x2100..0x2114 (VGT_MAX_VTX_INDX .. PA_CL_VPORT_ZOFFSET) | A |
| +10528..+10547 | register shadow 0x2180..0x2184 (SQ_PROGRAM_CNTL .. SQ_WRAPPING_1) | A |
| +10548..+10595 | register shadow 0x2200..0x220B (RB_DEPTHCONTROL .. RB_BLENDCONTROL3) | A |
| +10596..+10679 | register shadow 0x2280..0x2294 (PA_SU_POINT_SIZE .. VGT_ENHANCE) | A |
| +10680..+10831 | register shadow 0x2300..0x2325 (PA_SC_LINE_CNTL .. ) | A |
| +10832..+10847 | register shadow 0x2380..0x2383 (poly offset) | A |
| +10896 | pRing / command-buffer object (non-null check before ring writes) | B |
| +10908 / +10912 | current fence value (written to resource+8/+12 on bind) / resource flag mask tested against resource Common | B |
| +10940..+10943 | flag bytes (recording / kick pending / tiling pending) | B |
| +11992 | word written by 0x888DBC78 with mask C bit 19 (compound bit; likely current vertex declaration / fetch patch key) | B |
| +12008 / +12704 | per-stream byte tables (flags / stride) compared in SetStreamSource-like | B |
| +12616..+12635 | render-target/resolve state block compared against +12904.. | C |
| +12636..+12703 | bound vertex buffer pointer per stream (+12636+4*stream) | A |
| +13168 / +12924 | tiling rect table (8 bytes each) / rect count | B |
| +13408 | ring lock / inline depth (non-zero suppresses kick) | B |
| +13732 / +13736 | second write pointer / limit (fence & async block writes, `sub_888EBE50` grows it) | A |
| +14000..+24200 | pools, counters, sub-object pointers (150 fields, unnamed) | C |

### Dirty-mask bit -> register-group table

Decoded from the flush idiom shared by the 11 draw/resolve/flush functions (`sub_888EDA10` Resolve, `sub_888ECC28`, `sub_888EC850`, `sub_888E9468`, `sub_888E3F80`, `sub_888E4460`, `sub_888E4E08`, `sub_888E4A18`, `sub_888EA360`, `sub_888F3210`, `sub_888F9A18`): `ld mask; isolate bit run; rldicr to the MSB; bl sub_888EF190(device, bits, register_base, device+shadow)`. Inside a run **bit b -> register base + (hi - b)** (the helper walks from the MSB with cntlzd). "setter agrees" = at least one D3D setter that ORs that bit also writes exactly that shadow word.

| mask | bits | register base | shadow | note |
|---|---|---|---|---|
| +16 | 0-11 | 0x2200 RB_DEPTHCONTROL | +10548 | bit b -> register base+(hi-b), shadow+4*(hi-b) |
| +16 | 12-16 | 0x2180 SQ_PROGRAM_CNTL | +10528 | bit b -> register base+(hi-b), shadow+4*(hi-b) |
| +16 | 21-41 | 0x2100 VGT_MAX_VTX_INDX | +10444 | bit b -> register base+(hi-b), shadow+4*(hi-b) |
| +16 | 42-57 | 0x2000 RB_SURFACE_INFO | +10368 | bit b -> register base+(hi-b), shadow+4*(hi-b) |
| +24 | 34-54 | 0x2280 PA_SU_POINT_SIZE | +10596 | bit b -> register base+(hi-b), shadow+4*(hi-b) |
| +32 | 0-37 | 0x2300 PA_SC_LINE_CNTL | +10680 | bit b -> register base+(hi-b), shadow+4*(hi-b) |
| +32 | 42-45 | 0x2380 PA_SU_POLY_OFFSET_FRONT_SCALE | +10832 | bit b -> register base+(hi-b), shadow+4*(hi-b) |
| None | None | 0x4900 SHADER_CONSTANT_BOOL_000_031 | +10112 | emit call seen (sub_888EF190) but the mask bits were not decoded |

**mask +16**

| bit | register | shadow | setters (band) | setter agrees |
|---|---|---|---|---|
| 0 | 0x220B RB_BLENDCONTROL3 | +10592 | sub_888D4070, sub_888D4100, sub_888D4190, sub_888D4220 (+4) | yes |
| 1 | 0x220A RB_BLENDCONTROL2 | +10588 | sub_888D4070, sub_888D4100, sub_888D4190, sub_888D4220 (+4) | yes |
| 2 | 0x2209 RB_BLENDCONTROL1 | +10584 | sub_888D4070, sub_888D4100, sub_888D4190, sub_888D4220 (+4) | yes |
| 3 | 0x2208 RB_MODECONTROL | +10580 | sub_888D79F0, sub_888D8198, sub_888D8A88, sub_888D8BE0 (+5) | no (multi-field writer) |
| 4 | 0x2207 VGT_CURRENT_BIN_ID_MIN | +10576 |  | - |
| 5 | 0x2206 PA_CL_VTE_CNTL | +10572 | sub_888D5208, sub_888D8BE0, sub_888DB3C8, sub_888EA360 (+1) | yes |
| 6 | 0x2205 PA_SU_SC_MODE_CNTL | +10568 | sub_888D3FD8, sub_888D4008, sub_888D4AE0, sub_888D4BA8 (+7) | yes |
| 7 | 0x2204 PA_CL_CLIP_CNTL | +10564 | sub_888D4A80, sub_888D5208, sub_888D8BE0, sub_888DB3C8 (+2) | yes |
| 8 | 0x2203 RB_HIZCONTROL | +10560 | sub_888D5730, sub_888D5798, sub_888D57C8, sub_888D57F8 (+9) | yes |
| 9 | 0x2202 RB_COLORCONTROL | +10556 | sub_888D4038, sub_888D44F8, sub_888D55F0, sub_888D5620 (+1) | yes |
| 10 | 0x2201 RB_BLENDCONTROL0 | +10552 | sub_888D4070, sub_888D4100, sub_888D4190, sub_888D4220 (+5) | yes |
| 11 | 0x2200 RB_DEPTHCONTROL | +10548 | sub_888D4700, sub_888D4740, sub_888D4770, sub_888D47A8 (+16) | yes |
| 12 | 0x2184 SQ_WRAPPING_1 | +10544 | sub_888D4FD8, sub_888D4FF8, sub_888D5020, sub_888D5048 (+4) | yes |
| 13 | 0x2183 SQ_WRAPPING_0 | +10540 | sub_888D4EA8, sub_888D4EC8, sub_888D4EF0, sub_888D4F18 (+4) | yes |
| 14 | 0x2182 SQ_INTERPOLATOR_CNTL | +10536 |  | - |
| 15 | 0x2181 SQ_CONTEXT_MISC | +10532 | sub_888EDA10 | no (multi-field writer) |
| 16 | 0x2180 SQ_PROGRAM_CNTL | +10528 | sub_888EDA10 | no (multi-field writer) |
| 17 | special / compound | - | sub_888D4700, sub_888D4770, sub_888D47A8, sub_888D47E8 (+9) | - |
| 18 | special / compound | - | sub_888D4038 | - |
| 19 | special / compound | - | sub_888D63E8, sub_888D8A88, sub_888D8BE0, sub_888DB3C8 (+9) | - |
| 20 | special / compound | - | sub_888D6D60, sub_888D8BE0, sub_888DB3C8, sub_888DB8E8 (+3) | - |
| 21 | 0x2114 PA_CL_VPORT_ZOFFSET | +10524 | sub_888D69C8 | yes |
| 22 | 0x2113 PA_CL_VPORT_ZSCALE | +10520 | sub_888D69C8 | yes |
| 23 | 0x2112 PA_CL_VPORT_YOFFSET | +10516 | sub_888D69C8 | yes |
| 24 | 0x2111 PA_CL_VPORT_YSCALE | +10512 | sub_888D69C8 | yes |
| 25 | 0x2110 PA_CL_VPORT_XOFFSET | +10508 | sub_888D69C8 | yes |
| 26 | 0x210F PA_CL_VPORT_XSCALE | +10504 | sub_888D69C8 | yes |
| 27 | 0x210E RB_ALPHA_REF | +10500 | sub_888D4498 | yes |
| 28 | 0x210D RB_STENCILREFMASK | +10496 | sub_888D49C0, sub_888D49E0, sub_888D4A00, sub_888E9DE8 | no (multi-field writer) |
| 29 | 0x210C RB_STENCILREFMASK_BF | +10492 | sub_888D4A20, sub_888D4A40, sub_888D4A60 | no (multi-field writer) |
| 30 | 0x210B RB_FOG_COLOR_BLUE | +10488 |  | - |
| 31 | 0x210A RB_FOG_COLOR_GREEN | +10484 |  | - |
| 32 | 0x2109 RB_FOG_COLOR_RED | +10480 |  | - |
| 33 | 0x2108 RB_BLEND_ALPHA | +10476 | sub_888D4528 | yes |
| 34 | 0x2107 RB_BLEND_BLUE | +10472 | sub_888D4528 | yes |
| 35 | 0x2106 RB_BLEND_GREEN | +10468 | sub_888D4528 | yes |
| 36 | 0x2105 RB_BLEND_RED | +10464 | sub_888D4528 | yes |
| 37 | 0x2104 RB_COLOR_MASK | +10460 | sub_888D4CA0, sub_888D4CE0, sub_888D4D20, sub_888D4D60 (+5) | yes |
| 38 | 0x2103 VGT_MULTI_PRIM_IB_RESET_INDX | +10456 | sub_888D55C8 | yes |
| 39 | 0x2102 VGT_INDX_OFFSET | +10452 | sub_888D8A88, sub_888D8BE0, sub_888DB3C8, sub_888E9468 (+2) | yes |
| 40 | 0x2101 VGT_MIN_VTX_INDX | +10448 | sub_888D8A88, sub_888D8BE0, sub_888DB3C8, sub_888EA360 (+1) | no (multi-field writer) |
| 41 | 0x2100 VGT_MAX_VTX_INDX | +10444 | sub_888D8A88, sub_888D8BE0, sub_888DB3C8, sub_888EA360 (+1) | no (multi-field writer) |
| 42 | 0x200F PA_SC_SCREEN_SCISSOR_BR | +10428 |  | - |
| 43 | 0x200E PA_SC_SCREEN_SCISSOR_TL | +10424 |  | - |
| 44 | 0x200D COHER_DEST_BASE_7 | +10420 | sub_888D4A80, sub_888D8BE0, sub_888DB3C8, sub_888EA360 (+1) | yes |
| 45 | 0x200C COHER_DEST_BASE_6 | +10416 |  | - |
| 46 | 0x200B COHER_DEST_BASE_5 | +10412 |  | - |
| 47 | 0x200A COHER_DEST_BASE_4 | +10408 |  | - |
| 48 | 0x2009 COHER_DEST_BASE_3 | +10404 |  | - |
| 49 | 0x2008 COHER_DEST_BASE_2 | +10400 |  | - |
| 50 | 0x2007 COHER_DEST_BASE_1 | +10396 |  | - |
| 51 | 0x2006 COHER_DEST_BASE_0 | +10392 |  | - |
| 52 | 0x2005 RB_COLOR3_INFO | +10388 | sub_888D5420 | yes |
| 53 | 0x2004 RB_COLOR2_INFO | +10384 | sub_888D5388 | yes |
| 54 | 0x2003 RB_COLOR1_INFO | +10380 | sub_888D52F0 | yes |
| 55 | 0x2002 RB_DEPTH_INFO | +10376 | sub_888D70B0, sub_888E9DE8 | yes |
| 56 | 0x2001 RB_COLOR_INFO | +10372 | sub_888D5258, sub_888D8198, sub_888E9020, sub_888E9860 | yes |
| 57 | 0x2000 RB_SURFACE_INFO | +10368 | sub_888D6CD0, sub_888D8198, sub_888E9020, sub_888E9860 | yes |

**mask +24**

| bit | register | shadow | setters (band) | setter agrees |
|---|---|---|---|---|
| 0 | special / compound | - | sub_888E3F80, sub_888E4460, sub_888ECC28 | - |
| 9 | special / compound | - | sub_888ECC28 | - |
| 11 | special / compound | - | sub_888ECC28 | - |
| 12 | special / compound | - | sub_888ECC28 | - |
| 14 | special / compound | - | sub_888ECC28 | - |
| 25 | special / compound | - | sub_888F9A18 | - |
| 26 | special / compound | - | sub_888F9A18 | - |
| 27 | special / compound | - | sub_888F9A18 | - |
| 28 | special / compound | - | sub_888F9A18 | - |
| 29 | special / compound | - | sub_888F9A18 | - |
| 30 | special / compound | - | sub_888F9A18 | - |
| 31 | special / compound | - | sub_888DB3C8, sub_888E9860, sub_888EDA10, sub_888F9A18 | - |
| 34 | 0x2294 VGT_ENHANCE | +10676 |  | - |
| 35 | 0x2293 PA_SC_VIZ_QUERY | +10672 | sub_888D8BE0, sub_888DB3C8, sub_888EA360, sub_888EDA10 | no (multi-field writer) |
| 36 | 0x2292 PA_SC_MPASS_PS_CNTL | +10668 |  | - |
| 37 | 0x2291 UNKNOWN_2291 | +10664 |  | - |
| 38 | 0x2290 UNKNOWN_2290 | +10660 |  | - |
| 39 | 0x228F VGT_GROUP_VECT_1_FMT_CNTL | +10656 |  | - |
| 40 | 0x228E VGT_GROUP_VECT_0_FMT_CNTL | +10652 |  | - |
| 41 | 0x228D VGT_GROUP_VECT_1_CNTL | +10648 |  | - |
| 42 | 0x228C VGT_GROUP_VECT_0_CNTL | +10644 |  | - |
| 43 | 0x228B VGT_GROUP_DECR | +10640 |  | - |
| 44 | 0x228A VGT_GROUP_FIRST_DECR | +10636 |  | - |
| 45 | 0x2289 VGT_GROUP_PRIM_TYPE | +10632 |  | - |
| 46 | 0x2288 VGT_HOS_REUSE_DEPTH | +10628 |  | - |
| 47 | 0x2287 VGT_HOS_MIN_TESS_LEVEL | +10624 | sub_888D54B8 | yes |
| 48 | 0x2286 VGT_HOS_MAX_TESS_LEVEL | +10620 | sub_888D54F0 | yes |
| 49 | 0x2285 VGT_HOS_CNTL | +10616 | sub_888D5528 | yes |
| 50 | 0x2284 VGT_OUTPUT_PATH_CNTL | +10612 |  | - |
| 51 | 0x2283 PA_SC_LINE_STIPPLE | +10608 |  | - |
| 52 | 0x2282 PA_SU_LINE_CNTL | +10604 | sub_888D4660 | no (multi-field writer) |
| 53 | 0x2281 PA_SU_POINT_MINMAX | +10600 | sub_888D4E08, sub_888D4E58 | yes |
| 54 | 0x2280 PA_SU_POINT_SIZE | +10596 | sub_888D4DB0, sub_888D8BE0, sub_888DB3C8 | yes |

**mask +32**

| bit | register | shadow | setters (band) | setter agrees |
|---|---|---|---|---|
| 0 | 0x2325 RB_SAMPLE_COUNT_ADDR | +10828 |  | - |
| 1 | 0x2324 RB_SAMPLE_COUNT_CTL | +10824 |  | - |
| 2 | 0x2323 RB_COPY_SURFACE_SLICE | +10820 | sub_888EDA10 | yes |
| 3 | 0x2322 RB_COPY_MASK | +10816 |  | - |
| 4 | 0x2321 RB_COPY_REF | +10812 |  | - |
| 5 | 0x2320 RB_COPY_FUNC | +10808 |  | - |
| 6 | 0x231F RB_COLOR_CLEAR_LO | +10804 | sub_888ED938 | yes |
| 7 | 0x231E RB_COLOR_CLEAR | +10800 | sub_888ED938 | yes |
| 8 | 0x231D RB_DEPTH_CLEAR | +10796 | sub_888ED3A0 | yes |
| 9 | 0x231C RB_HIZ_CLEAR | +10792 | sub_888ED3A0 | yes |
| 10 | 0x231B RB_COPY_DEST_INFO | +10788 | sub_888EDA10 | yes |
| 11 | 0x231A RB_COPY_DEST_PITCH | +10784 | sub_888EDA10 | yes |
| 12 | 0x2319 RB_COPY_DEST_BASE | +10780 | sub_888EDA10 | yes |
| 13 | 0x2318 RB_COPY_CONTROL | +10776 | sub_888EDA10 | yes |
| 14 | 0x2317 VGT_OUT_DEALLOC_CNTL | +10772 |  | - |
| 15 | 0x2316 VGT_VERTEX_REUSE_BLOCK_CNTL | +10768 |  | - |
| 16 | 0x2315 SQ_CF_PROGRAM_SIZE | +10764 |  | - |
| 17 | 0x2314 UNKNOWN_2314 | +10760 |  | - |
| 18 | 0x2313 UNKNOWN_2313 | +10756 |  | - |
| 19 | 0x2312 PA_SC_AA_MASK | +10752 | sub_888D4C80, sub_888D8BE0, sub_888DB3C8, sub_888EA360 (+1) | yes |
| 20 | 0x2311 UNKNOWN_2311 | +10748 |  | - |
| 21 | 0x2310 UNKNOWN_2310 | +10744 |  | - |
| 22 | 0x230F UNKNOWN_230F | +10740 |  | - |
| 23 | 0x230E UNKNOWN_230E | +10736 |  | - |
| 24 | 0x230D UNKNOWN_230D | +10732 |  | - |
| 25 | 0x230C UNKNOWN_230C | +10728 |  | - |
| 26 | 0x230B UNKNOWN_230B | +10724 |  | - |
| 27 | 0x230A SQ_DEBUG_MISC_1 | +10720 |  | - |
| 28 | 0x2309 SQ_DEBUG_MISC_0 | +10716 |  | - |
| 29 | 0x2308 SQ_PS_CONST | +10712 |  | - |
| 30 | 0x2307 SQ_VS_CONST | +10708 |  | - |
| 31 | 0x2306 PA_CL_GB_HORZ_DISC_ADJ | +10704 | sub_888D56A8 | yes |
| 32 | 0x2305 PA_CL_GB_HORZ_CLIP_ADJ | +10700 | sub_888D5648 | yes |
| 33 | 0x2304 PA_CL_GB_VERT_DISC_ADJ | +10696 | sub_888D56D0 | yes |
| 34 | 0x2303 PA_CL_GB_VERT_CLIP_ADJ | +10692 | sub_888D5678 | yes |
| 35 | 0x2302 PA_SU_VTX_CNTL | +10688 | sub_888D5560, sub_888D8BE0, sub_888DB3C8 | yes |
| 36 | 0x2301 PA_SC_AA_CONFIG | +10684 | sub_888D6CD0, sub_888E9860 | yes |
| 37 | 0x2300 PA_SC_LINE_CNTL | +10680 | sub_888D4628 | yes |
| 42 | 0x2383 PA_SU_POLY_OFFSET_BACK_OFFSET | +10844 | sub_888D4BA8 | yes |
| 43 | 0x2382 PA_SU_POLY_OFFSET_BACK_SCALE | +10840 | sub_888D4AE0 | yes |
| 44 | 0x2381 PA_SU_POLY_OFFSET_FRONT_OFFSET | +10836 | sub_888D4BA8 | yes |
| 45 | 0x2380 PA_SU_POLY_OFFSET_FRONT_SCALE | +10832 | sub_888D4AE0 | yes |
| 56 | special / compound | - | sub_888DB8E8, sub_888DBAA8 | - |

Masks +0/+8 (constants) and +40 have no register run; setters seen: mask +8 bit 11 (`sub_888E4460`), mask +40 bits 8/37/57 (`sub_888D5730`, `sub_888D73F0`, `sub_888D7390`). Mask +16 bits 17-20 and 58-63, mask +24 bits 0/9/11/12/14/25-31, mask +32 bits 38-41/46-63 are compound flags set by draw/resolve paths and by SetStreamSource/SetTexture-like setters; they are not one register each.

## Resource layouts (band evidence vs XDK)

| offset | D3DResource (all) | D3DVertexBuffer / IndexBuffer | D3DBaseTexture | D3DSurface | evidence |
|---|---|---|---|---|---|
| +0 | Common: type in bits 0-3 (1 VB, 2 IB, 3 texture, 4 surface, 8 command buffer seen in type checks), flags above | | | | Release checks `&0xF == 4` then bit 0x40000000; type checks 1/3/8 seen |
| +4 | ReferenceCount (lwarx/stwcx in `sub_888D9838`, `sub_888D8720`) | | | | A |
| +8 / +12 | Fence / ReadFence (device+10908 stored here by binders and by Resolve) | | | | B |
| +16 / +20 | Identifier / BaseFlush | | | | B (XDK) |
| +24 | | VB: fetch dword0 (type:2 / address:30); IB: address | MipFlush | Parent (released by Release for type 4) | A for VB (0x888D63E8 adds the byte offset to it) and surface Parent |
| +28 | | VB: fetch dword1 (endian:2 / size:24); IB: size | fetch dword0 | surface info word | A for VB; B for texture |
| +32..+48 | | | fetch dword1..dword5 (6 dwords read as a block by `sub_888D3B58` SetTexture-like, `sub_888EAC80`, `sub_888F9A18`; XGRAPHICS 0x889D7A78/0x889D8130 read the same words) | more surface words | B |
| +52 | | | written by `sub_888F67F0` (texture ctor writes +0..+52) | | C |

The `resource` cluster also carries a 180-byte object written by `sub_888EC2F8` (64-bit words at +24..+72, dwords +108..+176) that is most likely a **D3DCommandBuffer** header snapshotting the device masks; the `vb_or_ib` cluster shows a byte read at +8 and a write at +32 that come from the XPS/`sub_888EEA40` pool path.

## Leak set (functions outside the band that bypass the API)

29 entries, 16 functions (`layout_leaks.json`, ordered: fetch/mask bypassers first, then engine > other > XGRAPHICS, then by number of offsets). Negative results worth stating: **no** function outside the band writes PM4 through pointers obtained from the band's ring helpers (`sub_888E69E0`/`sub_888E6C10`), **no** function materialises a GPU MMIO address (0x7FC8xxxx), and **no** function outside the band writes the vertex-fetch shadow (+1776..+1919) or the ring pointers directly. The `li 92/95` hits in the engine (`sub_887F1DC0`, `sub_88812CC8`, `sub_8880CFD0`, `sub_8881B7D8`) are allocation sizes / loop counts, not fetch slots; the band's own 95 (`sub_888EF678`) is the vfetch-patching code (stream 0 = slot 95). Slot 92/95 programming therefore goes through the band's SetStreamSource-like entry `sub_888D63E8` (callers at 0x885EB290, 0x887C4A40..0x887FD0D8 pass stream 0..3), and the engine's "GpuSetTextureFetchConstant" mode shows up as direct edits of the texture-fetch dirty bits, listed first below.

| va | band | object | kind | offsets | what | via |
|---|---|---|---|---|---|---|
| 0x887FE138 | engine | device | read | 0 8 24 | dirty mask +0; dirty mask +8; dirty mask +24 | device global |
| 0x887FE138 | engine | device | write | 0 8 24 | dirty mask +0; dirty mask +8; dirty mask +24 | device global |
| 0x8880DB30 | engine | device | read | 0 8 24 | dirty mask +0; dirty mask +8; dirty mask +24 | device global |
| 0x8880DB30 | engine | device | write | 0 8 24 | dirty mask +0; dirty mask +8; dirty mask +24 | device global |
| 0x88815130 | engine | device | read | 0 8 | dirty mask +0; dirty mask +8 | passed to sub_888DB8E8(r3=device), sub_888DBAA8(r3=device), sub_888DBC78(r3=device) |
| 0x88815130 | engine | device | write | 0 8 | dirty mask +0; dirty mask +8 | passed to sub_888DB8E8(r3=device), sub_888DBAA8(r3=device), sub_888DBC78(r3=device) |
| 0x887FDF28 | engine | device | read | 24 | dirty mask +24 | device global |
| 0x887FDF28 | engine | device | write | 24 | dirty mask +24 | device global |
| 0x887FDF78 | engine | device | read | 24 | dirty mask +24 | device global |
| 0x887FDF78 | engine | device | write | 24 | dirty mask +24 | device global |
| 0x88805CD0 | engine | device | read | 24 | dirty mask +24 | device global |
| 0x88805CD0 | engine | device | write | 24 | dirty mask +24 | device global |
| 0x88806648 | engine | device | read | 24 | dirty mask +24 | device global |
| 0x88806648 | engine | device | write | 24 | dirty mask +24 | device global |
| 0x884990E0 | other | device | write | 8 6016 6020 6024 6028 | dirty mask +8 | device global |
| 0x8864B168 | other | device | read | 24 1164 1188 | fetch constant shadow: tfetch slot 0 dword3; tfetch slot 1 dword3; dirty mask +24 | passed to sub_888D3B58(r3=device), sub_888D3FD8(r3=device), sub_888D4038(r3=device) |
| 0x8864B168 | other | device | write | 24 1164 1188 | fetch constant shadow: tfetch slot 0 dword3; tfetch slot 1 dword3; dirty mask +24 | passed to sub_888D3B58(r3=device), sub_888D3FD8(r3=device), sub_888D4038(r3=device) |
| 0x8864E808 | other | device | read | 0 24 | dirty mask +0; dirty mask +24 | passed to sub_888D3B58(r3=device) |
| 0x8864E808 | other | device | write | 0 24 | dirty mask +0; dirty mask +24 | passed to sub_888D3B58(r3=device) |
| 0x884990E0 | other | device | read | 8 | dirty mask +8 | device global |
| 0x889D7CF8 | xgraphics | vb_or_ib | read | 0 24 28 36 44 | +0 Common; +24 Format.dword0 = xe_gpu_vertex_fetch_t; +28 Format.dword1; +36 ?; +44 ? | passed to sub_888D3A30(r3=vb_or_ib), sub_888D3AF0(r3=vb_or_ib), sub_888D8428(r3=resource) |
| 0x889D8130 | xgraphics | resource | read | 28 32 40 44 48 | +28 Format.dword1; +32 ?; +40 ?; +44 ?; +48 ? | passed to sub_888D19C0(r3=resource), sub_888D8428(r3=resource) |
| 0x889D7A78 | xgraphics | resource | read | 28 32 40 48 | +28 Format.dword1; +32 ?; +40 ?; +48 ? | passed to sub_888D19C0(r3=resource) |
| 0x889D7CF8 | xgraphics | resource | read | 28 32 40 48 | +28 Format.dword1; +32 ?; +40 ?; +48 ? | passed to sub_888D19C0(r3=resource), sub_888D8428(r3=resource) |
| 0x889D8B10 | xgraphics | resource | read | 24 32 48 | +24 Format.dword0 = xe_gpu_vertex_fetch_t; +32 ?; +48 ? | passed to sub_888D8428(r3=resource) |
| 0x889D8B10 | xgraphics | resource | write | 24 32 | +24 Format.dword0 = xe_gpu_vertex_fetch_t; +32 ? | passed to sub_888D8428(r3=resource) |
| 0x88905D58 | xgraphics | resource | read | 48 | +48 ? | passed to sub_888D3560(r3=resource), sub_888D3638(r3=resource), sub_888D3720(r3=resource) |
| 0x88936518 | xgraphics | resource | read | 0 | +0 Common | passed to sub_888D9838(r3=resource) |
| 0x88936518 | xgraphics | resource | write | 0 | +0 Common | passed to sub_888D9838(r3=resource) |

### Top leaks, explained

1. `0x887FE138` / `0x887FDF28` / `0x887FDF78` / `0x8880DB30` / `0x88805CD0` / `0x88806648` (engine): read-modify-write the device masks with the same recipe — `sub_8880DB30` ORs 0xFFFFFFFFFFFFFFFC into masks A and B and, when `0x88F02B88 == 2`, ORs 0xFFFFFFC0 (bits 6-31 = tfetch 0-25) into mask D; `sub_887FE138` ANDs A and B back to bits 0-1 and mask D with 0xFFFFFFFF0000003F. This is the engine telling D3D "I have written the constants / texture fetch constants myself, do not re-emit them" (GPU-owned constants + GpuSetTextureFetchConstant mode). A native device must honour these mask edits or, better, override the six functions.
2. `0x884990E0` (game code): inlined `SetPixelShaderConstantF` — writes c256 (+6016..+6028) into the ALU shadow and ORs mask B. Expect more of these once W1-a names the inline helpers; any native device must keep the ALU shadow at +1920 coherent or hook the shadow writes.
3. `0x8864B168` (game code): edits texture fetch constant dword3 (filters/aniso) of tfetch slots 0 and 1 in the device shadow (+1164, +1188) and ORs mask D — a sampler-state bypass.
4. `0x8864E808`, `0x88815130`: mask A/B/D read-modify-write around a band call (same protocol as 1).
5. XGRAPHICS `0x889D7A78`, `0x889D7CF8`, `0x889D8130`, `0x889D8B10`, `0x88905D58`: read (and in 0x889D8B10 write) the texture/vertex-buffer fetch-constant words +24..+48 of resources they receive — the XGGetTextureDesc / XGSetTextureHeader family; harmless for a native device as long as the guest resource headers are kept in XDK layout.
6. `0x88936518` (XGRAPHICS): edits `Common` (+0) of a resource before Release — resource type/flag bypass, benign.

## Caveats / open items for W2-d

- The census is linear (no CFG); a tag can be stale after a join, so a few field attributions may be one branch off. Widths come from mnemonics; 1/2-byte accesses to mask offsets (+0 w2/w4) are partial reads of the 64-bit masks.
- Roles are propagated through the band call graph; params of generic helpers that never dereference their argument are excluded, but a wrongly seeded role can still spread (check `_band_param_roles[fn][aN].evidence`).
- Mask D bit order for the 26 texture fetch slots (bit 31-s vs 6+s) and the mask A/B bit granularity are inferred, not decoded.
- The engine renderer band extends below 0x887F0000: SetStreamSource-like callers sit at 0x887C4A40..0x887CB660 and 0x885EB290; the "other" band in the leak list includes them.
- Not found statically: the band function that emits texture fetch constants straight to the ring for `GpuSetTextureFetchConstant` mode; runtime tracing of mask D edits will locate it.
