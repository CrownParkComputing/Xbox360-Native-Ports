#!/usr/bin/env python3
"""W1-c: minimal ARK reader (per ~/development/splitsecond-native/FORMAT.md) used to
scan every entry of every .ark for the PC shader containers (CXF\\0 = .fxc, RDHS = .shaders).
Only the head of LZSS entries is decoded for the scan; full extraction of the hits is
delegated to ss_assets_tool (validated C reader)."""
import struct, sys, os, glob, json

DATA = "/home/jon/Downloads/Split.Second.Civer.Edition.Build.385319/Split Second/Data"

def ark_entries(path):
    with open(path, 'rb') as f:
        w0, hsize = struct.unpack('<II', f.read(8))
        blk = f.read(hsize)
    hcount, hoff, ncount, noff = struct.unpack('<IIII', blk[:16])
    out = []
    for i in range(hcount):
        comp, off, size, hint, h = struct.unpack('<IIIII', blk[hoff + 20 * i: hoff + 20 * i + 20])
        out.append((i, comp, off, size, hint, h))
    return out

def lzss_head(data, want):
    """Decode at most `want` output bytes of an LZSS member (u32 length prefix)."""
    n = struct.unpack('<I', data[:4])[0]
    want = min(want, n)
    ring = bytearray(4096); rp = 0xfee
    out = bytearray(); ip = 4; flags = 0; fb = 0
    while len(out) < want and ip < len(data):
        if fb == 0:
            flags = data[ip]; ip += 1; fb = 8
        if flags & 1:
            b = data[ip]; ip += 1
            out.append(b); ring[rp] = b; rp = (rp + 1) & 0xfff
        else:
            if ip + 1 >= len(data): break
            lo, hi = data[ip], data[ip + 1]; ip += 2
            o = lo | ((hi & 0xf0) << 4); l = (hi & 0xf) + 3
            for k in range(l):
                b = ring[(o + k) & 0xfff]
                out.append(b); ring[rp] = b; rp = (rp + 1) & 0xfff
        flags >>= 1; fb -= 1
    return bytes(out), n

def scan(path, magics=(b'CXF\0', b'RDHS'), head=64):
    hits = []
    with open(path, 'rb') as f:
        for i, comp, off, size, hint, h in ark_entries(path):
            f.seek(off)
            if comp == 0:
                raw = f.read(min(size, head)); full = size
            elif comp == 1:
                buf = f.read(min(size, 4 + head * 3))
                try:
                    raw, full = lzss_head(buf, head)
                except Exception:
                    continue
            else:
                continue
            for m in magics:
                if raw[:4] == m:
                    hits.append(dict(ark=os.path.basename(path), index=i, hash='%08x' % h, comp=comp,
                                     stored=size, size=full, magic=m.decode('latin1').rstrip('\0'),
                                     head=raw[:head].hex()))
    return hits

if __name__ == '__main__':
    arks = sorted(glob.glob(os.path.join(DATA, '**', '*.ark'), recursive=True))
    allhits = []
    for a in arks:
        hs = scan(a)
        print(os.path.relpath(a, DATA), len(ark_entries(a)), 'entries', len(hs), 'hits', file=sys.stderr)
        allhits += hs
    json.dump(allhits, open(sys.argv[1], 'w'), indent=1)
    print(len(allhits), 'hits total')
