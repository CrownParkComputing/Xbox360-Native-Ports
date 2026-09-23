#!/usr/bin/env python3
"""bmap_convert.py -- convert Bugbear .bmap textures (Ridge Racer Unbounded, Xbox 360) to PNG.

Format summary (see docs/BMAP_FORMAT.md):
  'bmap' magic, BE u32 version(2), u32 0, u32 name_len, name (source .tga path),
  'bmbd' chunk: u32 0, u32 payload_size, then payload =
     52-byte texture header (7 BE dwords + 6-dword Xenos GPUTEXTURE_FETCH_CONST)
     followed by tiled Xenos texel data.

Formats seen in RRU: DXT1 (0x12), DXT4/5 (0x14), 8_8_8_8 (0x06).
Data is Xbox 360 tiled; DXT words are byte-swapped 8-in-16, 8888 is 8-in-32.

Usage:
  bmap_convert.py file.bmap [-o out.png]
  bmap_convert.py --batch DIR [--out OUTDIR]   (recursive, mirrors tree)

Stdlib only.
"""
import argparse
import os
import struct
import sys
import zlib

# ---------------------------------------------------------------- container

FMT_8888 = 6
FMT_DXT1 = 18
FMT_DXT2_3 = 19
FMT_DXT4_5 = 20

FMT_NAMES = {6: "8_8_8_8", 18: "DXT1", 19: "DXT3", 20: "DXT5"}


class BmapError(Exception):
    pass


def parse_bmap(data):
    if data[:4] != b"bmap":
        raise BmapError("bad magic")
    ver, _z, nlen = struct.unpack(">III", data[4:16])
    if ver != 2:
        raise BmapError("unsupported version %d" % ver)
    name = data[16:16 + nlen].decode("ascii", "replace")
    p = 16 + nlen
    if data[p:p + 4] != b"bmbd":
        raise BmapError("no bmbd chunk")
    _z2, psize = struct.unpack(">II", data[p + 4:p + 12])
    payload = data[p + 12:p + 12 + psize]
    # 52-byte header: dwords [0]=3 [1]=1 [2..4]=0 [5]=[6]=0xffff0000,
    # then the 6-dword Xenos GPUTEXTURE_FETCH_CONST
    fc = struct.unpack(">6I", payload[28:52])
    tiled = fc[0] >> 31
    pitch = ((fc[0] >> 22) & 0x1FF) * 32
    fmt = fc[1] & 0x3F
    endian = (fc[1] >> 6) & 3
    width = (fc[2] & 0x1FFF) + 1
    height = ((fc[2] >> 13) & 0x1FFF) + 1
    return {
        "name": name,
        "fmt": fmt,
        "endian": endian,
        "tiled": tiled,
        "pitch": pitch,
        "width": width,
        "height": height,
        "texels": payload[52:],
        "fetch": fc,
    }

# ---------------------------------------------------------------- 360 untiling


def xg_2d_tiled_offset(x, y, aligned_width, log_bpp):
    """Xbox 360 2D tiled address -> byte offset (XGAddress2DTiledOffset).

    aligned_width: surface width in elements, multiple of 32.
    log_bpp: log2 of bytes per element (2 for 4B, 3 for 8B, 4 for 16B).
    """
    macro_y = ((y >> 5) * (aligned_width >> 5)) << (log_bpp + 7)
    micro_y = ((y & 6) << 2) << log_bpp
    base = (macro_y + ((micro_y & ~15) << 1) + (micro_y & 15) +
            ((y & 8) << (3 + log_bpp)) + ((y & 1) << 4))
    macro_x = (x >> 5) << (log_bpp + 7)
    micro_x = (x & 7) << log_bpp
    offset = base + macro_x + ((micro_x & ~15) << 1) + (micro_x & 15)
    return (((offset & ~511) << 3) + ((offset & 448) << 2) + (offset & 63) +
            ((y & 16) << 7) + (((((y & 8) >> 2) + (x >> 3)) & 3) << 6))


def untile(src, width_el, height_el, bpb):
    """Untile a 360 tiled surface of width_el x height_el elements of bpb bytes."""
    aligned_w = (width_el + 31) & ~31
    log_bpp = bpb.bit_length() - 1
    out = bytearray(width_el * height_el * bpb)
    for y in range(height_el):
        row = y * width_el
        for x in range(width_el):
            src_off = xg_2d_tiled_offset(x, y, aligned_w, log_bpp)
            dst_off = (row + x) * bpb
            out[dst_off:dst_off + bpb] = src[src_off:src_off + bpb]
    return bytes(out)


def byteswap(data, mode):
    """mode 1 = 8-in-16 swap, mode 2 = 8-in-32 swap."""
    if mode == 0:
        return data
    n = len(data)
    if mode == 1:
        arr = bytearray(data)
        arr[0::2], arr[1::2] = data[1::2], data[0::2]
        return bytes(arr)
    if mode == 2:
        arr = bytearray(data)
        arr[0::4], arr[1::4], arr[2::4], arr[3::4] = \
            data[3::4], data[2::4], data[1::4], data[0::4]
        return bytes(arr)
    raise BmapError("endian mode %d" % mode)

# ---------------------------------------------------------------- DXT decode


def _expand565(c):
    r = (c >> 11) & 31
    g = (c >> 5) & 63
    b = c & 31
    return ((r << 3) | (r >> 2), (g << 2) | (g >> 4), (b << 3) | (b >> 2))


def decode_dxt(data, width, height, variant):
    """variant: 1, 3, or 5. Returns RGBA bytes (width*height*4)."""
    bw = (width + 3) // 4
    bh = (height + 3) // 4
    bpb = 8 if variant == 1 else 16
    out = bytearray(width * height * 4)
    pos = 0
    for by in range(bh):
        for bx in range(bw):
            block = data[pos:pos + bpb]
            pos += bpb
            if variant == 1:
                coff = 0
            else:
                coff = 8
            c0, c1 = struct.unpack_from("<HH", block, coff)
            bits, = struct.unpack_from("<I", block, coff + 4)
            r0, g0, b0 = _expand565(c0)
            r1, g1, b1 = _expand565(c1)
            if variant == 1 and c0 <= c1:
                pal = [(r0, g0, b0, 255), (r1, g1, b1, 255),
                       ((r0 + r1) // 2, (g0 + g1) // 2, (b0 + b1) // 2, 255),
                       (0, 0, 0, 0)]
            else:
                pal = [(r0, g0, b0, 255), (r1, g1, b1, 255),
                       ((2 * r0 + r1) // 3, (2 * g0 + g1) // 3, (2 * b0 + b1) // 3, 255),
                       ((r0 + 2 * r1) // 3, (g0 + 2 * g1) // 3, (b0 + 2 * b1) // 3, 255)]
            # alpha
            if variant == 3:
                a16 = struct.unpack_from("<8B", block, 0)
            elif variant == 5:
                a0 = block[0]
                a1 = block[1]
                abits = int.from_bytes(block[2:8], "little")
                if a0 > a1:
                    apal = [a0, a1] + [((7 - i) * a0 + i * a1) // 7 for i in range(1, 7)]
                else:
                    apal = [a0, a1] + [((5 - i) * a0 + i * a1) // 5 for i in range(1, 5)] + [0, 255]
            for py in range(4):
                yy = by * 4 + py
                if yy >= height:
                    break
                for px in range(4):
                    xx = bx * 4 + px
                    if xx >= width:
                        continue
                    idx = (bits >> (2 * (py * 4 + px))) & 3
                    r, g, b, a = pal[idx]
                    if variant == 3:
                        nib = py * 4 + px
                        v = a16[nib // 2]
                        a = (v & 15) if nib % 2 == 0 else (v >> 4)
                        a = a * 17
                    elif variant == 5:
                        a = apal[(abits >> (3 * (py * 4 + px))) & 7]
                    o = (yy * width + xx) * 4
                    out[o] = r
                    out[o + 1] = g
                    out[o + 2] = b
                    out[o + 3] = a
    return bytes(out)

# ---------------------------------------------------------------- PNG writer


def write_png(path, width, height, rgba):
    def chunk(tag, body):
        c = tag + body
        return struct.pack(">I", len(body)) + c + struct.pack(">I", zlib.crc32(c))
    raw = bytearray()
    stride = width * 4
    for y in range(height):
        raw.append(0)
        raw += rgba[y * stride:(y + 1) * stride]
    png = (b"\x89PNG\r\n\x1a\n" +
           chunk(b"IHDR", struct.pack(">IIBBBBB", width, height, 8, 6, 0, 0, 0)) +
           chunk(b"IDAT", zlib.compress(bytes(raw), 6)) +
           chunk(b"IEND", b""))
    with open(path, "wb") as f:
        f.write(png)

# ---------------------------------------------------------------- conversion


def convert(path, out_path, verbose=True, raw_8888=False):
    data = open(path, "rb").read()
    t = parse_bmap(data)
    fmt = t["fmt"]
    w, h = t["width"], t["height"]
    texels = t["texels"]
    if fmt in (FMT_DXT1, FMT_DXT2_3, FMT_DXT4_5):
        bpb = 8 if fmt == FMT_DXT1 else 16
        bw, bh = (w + 3) // 4, (h + 3) // 4
        # tiled storage is padded to 32x32 blocks
        aw, ah = (bw + 31) & ~31, (bh + 31) & ~31
        need = aw * ah * bpb
        if len(texels) < need:
            raise BmapError("payload too small: %d < %d" % (len(texels), need))
        lin = untile(texels[:need], bw, bh, bpb) if t["tiled"] else texels
        lin = byteswap(lin, t["endian"])
        variant = {FMT_DXT1: 1, FMT_DXT2_3: 3, FMT_DXT4_5: 5}[fmt]
        rgba = decode_dxt(lin, w, h, variant)
    elif fmt == FMT_8888:
        aw, ah = (w + 31) & ~31, (h + 31) & ~31
        need = aw * ah * 4
        if len(texels) < need:
            raise BmapError("payload too small: %d < %d" % (len(texels), need))
        lin = untile(texels[:need], w, h, 4) if t["tiled"] else texels
        lin = byteswap(lin, t["endian"])
        # After the 8-in-32 swap memory order is B,G,R,A (empirically verified).
        # All 8_8_8_8 bmaps in RRU are HDR skyboxes stored RGBM-style:
        # final colour = RGB * A * 8 (linear light). Decode that to sRGB unless raw.
        if raw_8888:
            rgba = bytearray(len(lin))
            rgba[0::4] = lin[2::4]
            rgba[1::4] = lin[1::4]
            rgba[2::4] = lin[0::4]
            rgba[3::4] = lin[3::4]
            rgba = bytes(rgba)
        else:
            enc = [int(255.0 * min(1.0, x / 255.0) ** (1 / 2.2)) for x in range(256)]
            rgba = bytearray(len(lin))
            for i in range(0, len(lin), 4):
                m = lin[i + 3] * 8.0 / 255.0
                rgba[i] = enc[min(255, int(lin[i + 2] * m))]
                rgba[i + 1] = enc[min(255, int(lin[i + 1] * m))]
                rgba[i + 2] = enc[min(255, int(lin[i] * m))]
                rgba[i + 3] = 255
            rgba = bytes(rgba)
    else:
        raise BmapError("unsupported format %d (%s)" %
                        (fmt, FMT_NAMES.get(fmt, "?")))
    write_png(out_path, w, h, rgba)
    if verbose:
        print("%s -> %s  %dx%d %s" % (path, out_path, w, h,
                                      FMT_NAMES.get(fmt, str(fmt))))


def main():
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("input", help=".bmap file or directory (with --batch)")
    ap.add_argument("-o", "--out", help="output .png file or directory")
    ap.add_argument("--batch", action="store_true", help="recurse into directory")
    ap.add_argument("--info", action="store_true", help="print header info only")
    ap.add_argument("--raw-8888", action="store_true",
                    help="dump 8_8_8_8 textures as raw RGBA (skip RGBM HDR decode)")
    args = ap.parse_args()

    if args.info:
        t = parse_bmap(open(args.input, "rb").read())
        print("name:   %s" % t["name"])
        print("size:   %dx%d" % (t["width"], t["height"]))
        print("format: %s (%d)" % (FMT_NAMES.get(t["fmt"], "?"), t["fmt"]))
        print("tiled:  %d  endian: %d  pitch: %d" %
              (t["tiled"], t["endian"], t["pitch"]))
        print("fetch:  %s" % " ".join("%08x" % d for d in t["fetch"]))
        return

    if args.batch or os.path.isdir(args.input):
        outdir = args.out or args.input
        errs = 0
        for dp, _, fs in os.walk(args.input):
            for fn in sorted(fs):
                if not fn.endswith(".bmap"):
                    continue
                src = os.path.join(dp, fn)
                rel = os.path.relpath(src, args.input)
                dst = os.path.join(outdir, os.path.splitext(rel)[0] + ".png")
                os.makedirs(os.path.dirname(dst), exist_ok=True)
                try:
                    convert(src, dst, raw_8888=args.raw_8888)
                except Exception as e:
                    errs += 1
                    print("FAIL %s: %s" % (src, e), file=sys.stderr)
        if errs:
            print("%d failures" % errs, file=sys.stderr)
            sys.exit(1)
    else:
        out = args.out or os.path.splitext(args.input)[0] + ".png"
        convert(args.input, out, raw_8888=args.raw_8888)


if __name__ == "__main__":
    main()
