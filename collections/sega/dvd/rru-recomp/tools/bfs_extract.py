#!/usr/bin/env python3
"""Extractor for Bugbear 'bfs1' archives used by Ridge Racer Unbounded (X360).

Both shipped archives are self-contained bfs1 archives:
    00__ridge_racer__   (boot TOC archive, 273 files, mostly zlib'd database XML)
    01___unbounded___   (main data archive, 9223 files)

On-disk layout (all integer fields little-endian; see docs/BFS_FORMAT.md):

    +0x00  char magic[4] = 'bfs1'
    +0x04  u32 version   = 0x20111220
    +0x08  u32 tableSize | 0x80000000   (flag = table is encrypted with pass 2)
    +0x0C  u32 fileCount
    +0x10  u32 one
    +0x14  ...table... (tableSize counts from file offset 0, i.e. the table
           spans [0x14, tableSize) and INCLUDES the 20-byte header in its size)
    data blobs follow at absolute offsets recorded in the entries.

Encryption:
  pass 1: whole file, chained single-round XTEA variant over big-endian u32
          words in independent 0x8000-byte chunks (key KEY1, see
          bugbear_decrypt.py; recovered from guest 0x83126194).
  pass 2: table region [0x14, 0x14 + 4*((tableSize-20)//4)) only, applied
          after pass 1: multi-round chained XTEA (XXTEA-style round schedule,
          rounds = 6 + 52//n, sum starts at rounds*0x9E3779B9 and counts
          down) with KEY2 (guest 0x83126180).

Decrypted table:
    u32 bucketCount (=997)
    { u32 entryOffset (abs file offset), u32 entryCount } * bucketCount
    dict header: { u32 entriesRelOff, u32 aRelOff, u32 lensRelOff,
                   u32 treeRelOff, u32 bitsRelOff }   (all rel. to this header)
    ... huffman string dictionary + entry records ...

Entry record (variable size, 24 + 4*extraCount bytes):
    u16 flags        (bit0 = zlib-compressed)
    u16 extraCount
    u32 dataOffset   (absolute)
    u32 uncompressedSize
    u32 compressedSize (== uncompressedSize when stored)
    u32 zero
    u16 dirNameIdx   (huffman dict index; empty dir len -> file in root)
    u16 fileNameIdx
    u32 extra[extraCount]  (absolute offsets of identical duplicate copies
                            of this file, placed for seek locality)

Name lookup hash (paths lowercased, '\\'->'/'):
    h = len; step = (len >> 5) + 1
    for i = len; i >= step; i -= step:
        h = (((h << 5) + (h >> 2) + s[i-1]) & 0xffffffff) ^ h
    bucket = h % 997

Usage:
    bfs_extract.py ARCHIVE list [--filter SUBSTR]
    bfs_extract.py ARCHIVE extract NAME... --out DIR
    bfs_extract.py ARCHIVE extract --all --out DIR
"""
import argparse
import os
import struct
import sys
import zlib

MASK = 0xFFFFFFFF
DELTA = 0x9E3779B9
KEY1 = (0x486A3449, 0x53014F82, 0x9E37DC4D, 0x4F9D4C9D)  # guest 0x83126194
KEY2 = (0x37E8B81B, 0x107A4FB5, 0xA150A27A, 0x7DDAF997)  # guest 0x83126180
CHUNK = 0x8000  # pass-1 chunk framing, aligned to file offset 0


def pass1_decrypt_chunk(data: bytes) -> bytes:
    """Chained single-round XTEA variant, one chunk (sub_8247E020)."""
    n = len(data) // 4
    if n < 2:
        return data
    w = list(struct.unpack(f">{n}I", data[:n * 4]))
    for i in range(n - 1):
        z = w[i + 1]
        w[i] = (w[i] - (((((z << 4) & MASK) ^ (z >> 5)) + z) & MASK
                        ^ ((KEY1[(i & 3) ^ 2] + DELTA) & MASK))) & MASK
    z = w[0]
    i = n - 1
    w[i] = (w[i] - (((((z << 4) & MASK) ^ (z >> 5)) + z) & MASK
                    ^ ((KEY1[(i & 3) ^ 2] + DELTA) & MASK))) & MASK
    return struct.pack(f">{n}I", *w) + data[n * 4:]


def pass2_decrypt(data: bytes) -> bytes:
    """Multi-round chained XTEA over the whole block (sub_824AB718)."""
    n = len(data) // 4
    w = list(struct.unpack(f">{n}I", data[:n * 4]))
    s = ((6 + 52 // n) * DELTA) & MASK
    while s:
        e = (s >> 2) & 3
        for i in range(n - 1, 0, -1):
            z = w[i - 1]
            w[i] = (w[i] - ((((((z << 4) & MASK) ^ (z >> 5)) + z) & MASK)
                            ^ ((KEY2[(i & 3) ^ e] + s) & MASK))) & MASK
        z = w[n - 1]
        w[0] = (w[0] - ((((((z << 4) & MASK) ^ (z >> 5)) + z) & MASK)
                        ^ ((KEY2[e] + s) & MASK))) & MASK
        s = (s - DELTA) & MASK
    return struct.pack(f">{n}I", *w) + data[n * 4:]


def bugbear_hash(name: str) -> int:
    """Path hash (sub_824AB1B0 inline); bucket = hash % 997."""
    s = name.replace("\\", "/").lower().encode()
    ln = len(s)
    h = ln
    step = (ln >> 5) + 1
    i = ln
    while i >= step:
        h = ((((h << 5) & MASK) + (h >> 2) + s[i - 1]) & MASK) ^ h
        i -= step
    return h


class BfsArchive:
    def __init__(self, path: str):
        self.path = path
        self.f = open(path, "rb")
        hdr = pass1_decrypt_chunk(self._read_raw(0, 0x20))
        magic, version, szf, count, one = struct.unpack_from("<4sIIII", hdr, 0)
        if magic != b"bfs1":
            raise ValueError(f"not a bfs1 archive: {magic!r}")
        self.version = version
        self.table_size = szf & 0x7FFFFFFF
        self.table_encrypted = bool(szf & 0x80000000)
        self.count = count
        t = self.read_decrypted(0, self.table_size)
        if self.table_encrypted:
            n = (self.table_size - 20) // 4
            t = t[:20] + pass2_decrypt(t[20:20 + n * 4]) + t[20 + n * 4:]
        self.table = t
        self._parse_table()

    def _read_raw(self, ofs, ln):
        self.f.seek(ofs)
        return self.f.read(ln)

    def read_decrypted(self, ofs, ln):
        """Read+pass-1-decrypt an arbitrary byte range (chunk aligned)."""
        start = (ofs // CHUNK) * CHUNK
        end = ((ofs + ln + CHUNK - 1) // CHUNK) * CHUNK
        raw = self._read_raw(start, end - start)
        out = b"".join(pass1_decrypt_chunk(raw[i:i + CHUNK])
                       for i in range(0, len(raw), CHUNK))
        return out[ofs - start:ofs - start + ln]

    def _parse_table(self):
        t = self.table
        nb = struct.unpack_from("<I", t, 20)[0]
        self.bucket_count = nb
        self.buckets = [struct.unpack_from("<II", t, 24 + 8 * i)
                        for i in range(nb)]
        sub = 24 + 8 * nb
        ents, aoff, loff, toff, boff = struct.unpack_from("<5I", t, sub)
        self._aoff, self._loff = sub + aoff, sub + loff
        self._toff, self._boff = sub + toff, sub + boff
        nstr = (self._loff - self._aoff) // 4
        self._lens = struct.unpack_from(f"<{nstr}H", t, self._loff)
        self._a = struct.unpack_from(f"<{nstr}I", t, self._aoff)
        ntree = (self._boff - self._toff) // 2
        self._tree = struct.unpack_from(f"<{ntree}h", t, self._toff)
        self.entries = []
        self.by_name = {}
        p = sub + ents
        for _ in range(self.count):
            flags, xc = struct.unpack_from("<HH", t, p)
            ofs, usz, csz, zero, di, fi = struct.unpack_from("<IIIIHH", t, p + 4)
            extras = struct.unpack_from(f"<{xc}I", t, p + 24)
            name = self._decode_string(fi) if not self._lens[di] \
                else self._decode_string(di) + "/" + self._decode_string(fi)
            e = {"name": name, "flags": flags, "offset": ofs, "usize": usz,
                 "csize": csz, "zero": zero, "extras": extras,
                 "hash": bugbear_hash(name)}
            self.entries.append(e)
            self.by_name[name] = e
            p += 24 + 4 * xc

    def _decode_string(self, idx):
        """Huffman string dictionary decode (sub_824AA960)."""
        t = self.table
        base = self._boff + self._a[idx]
        out = bytearray()
        bp = 0
        for _ in range(self._lens[idx]):
            i, v = 0, self._tree[0]
            while v >= 0:
                bit = (t[base + (bp >> 3)] >> (bp & 7)) & 1
                bp += 1
                i = i + 1 if bit else v
                v = self._tree[i]
            out.append(v & 0xFF)
        return out.decode("latin1")

    def extract(self, entry, out_path):
        os.makedirs(os.path.dirname(out_path) or ".", exist_ok=True)
        compressed = entry["flags"] & 1
        with open(out_path, "wb") as o:
            if compressed:
                d = zlib.decompressobj()
                remaining = entry["csize"]
                pos = entry["offset"]
                while remaining:
                    step = min(remaining, 4 << 20)
                    o.write(d.decompress(self.read_decrypted(pos, step)))
                    pos += step
                    remaining -= step
                o.write(d.flush())
            else:
                remaining = entry["usize"]
                pos = entry["offset"]
                while remaining:
                    step = min(remaining, 8 << 20)
                    o.write(self.read_decrypted(pos, step))
                    pos += step
                    remaining -= step
        got = os.path.getsize(out_path)
        if got != entry["usize"]:
            raise IOError(f"{entry['name']}: size {got} != {entry['usize']}")


def main():
    try:
        import signal
        signal.signal(signal.SIGPIPE, signal.SIG_DFL)
    except (ImportError, AttributeError, ValueError):
        pass
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("archive")
    ap.add_argument("cmd", choices=["list", "extract"])
    ap.add_argument("names", nargs="*")
    ap.add_argument("--all", action="store_true")
    ap.add_argument("--filter")
    ap.add_argument("--out", default="extracted")
    args = ap.parse_args()

    a = BfsArchive(args.archive)
    if args.cmd == "list":
        print(f"# {args.archive}: version 0x{a.version:08X}, "
              f"{a.count} files, {a.bucket_count} buckets")
        for e in a.entries:
            if args.filter and args.filter not in e["name"]:
                continue
            z = "Z" if e["flags"] & 1 else "-"
            print(f"{e['hash']:08x} {z} {e['offset']:10d} "
                  f"{e['csize']:10d} {e['usize']:10d} {e['name']}")
        return

    targets = a.entries if args.all else []
    if not args.all:
        for n in args.names:
            key = n.replace("\\", "/").lower()
            if key not in a.by_name:
                sys.exit(f"not found: {n}")
            targets.append(a.by_name[key])
    for e in targets:
        out = os.path.join(args.out, e["name"])
        a.extract(e, out)
        print(f"extracted {e['name']} ({e['usize']} bytes)")


if __name__ == "__main__":
    main()
