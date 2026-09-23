#!/usr/bin/env python3
"""List or extract an Xbox 360 STFS package (CON / LIVE / PIRS).

XBLA titles ship as one of these rather than a disc tree, so a conversion
starts by unpacking it. Hydro Thunder, both Banjo games and every other Rare
XBLA release are 5841xxxx packages of this shape.

  tools/stfs_extract.py list    <package>
  tools/stfs_extract.py extract <package> <out-dir>

The block arithmetic is the fiddly part: the data area has hash tables woven
into it - one per 170 blocks, one per 170 of those, one per 170 of those - and
each table is itself stored in the data area, so every table before a block
pushes it further along. Files are read by following the block chain in the
hash entries rather than assuming they are contiguous, because the contiguous
flag is advisory and trusting it reads another file's bytes instead of failing.
"""
import os
import struct
import sys

BLOCK = 0x1000
PER_LEVEL = (0xAA, 0xAA * 0xAA)
END_OF_CHAIN = 0xFFFFFF


def u32be(b, o): return struct.unpack_from(">I", b, o)[0]
def u16be(b, o): return struct.unpack_from(">H", b, o)[0]
def u16le(b, o): return struct.unpack_from("<H", b, o)[0]
def u24le(b, o): return b[o] | (b[o + 1] << 8) | (b[o + 2] << 16)


class Stfs:
    def __init__(self, path):
        self.f = open(path, "rb")
        magic = self.f.read(4)
        if magic not in (b"LIVE", b"CON ", b"PIRS"):
            raise ValueError(f"not an STFS package (magic {magic!r})")
        self.magic = magic.decode().strip()
        head = self._at(0, 0x400)
        self.data_start = (u32be(head, 0x340) + BLOCK - 1) // BLOCK * BLOCK
        # XContentMetadata sits at 0x344: content_type is its first field, and
        # the title id is inside execution_info at +0x10 (media,ver,base,+0x0C).
        self.content_type = u32be(head, 0x344)
        self.title_id = u32be(head, 0x344 + 0x10 + 0x0C)
        desc = self._at(0x344 + 0x35, 0x24)
        if desc[0] != 0x24:
            raise ValueError("unexpected volume descriptor length")
        self.read_only = bool(desc[2] & 0x01)
        self.per_table = 1 if self.read_only else 2
        self.step0 = PER_LEVEL[0] + self.per_table
        self.dir_block_count = u16le(desc, 3)
        self.dir_block = u24le(desc, 5)
        self.total_blocks = u32be(desc, 0x1C)

    def _at(self, off, size):
        self.f.seek(off)
        data = self.f.read(size)
        if len(data) != size:
            raise EOFError(f"short read at {off:#x}")
        return data

    def block_offset(self, index):
        base, block = PER_LEVEL[0], index
        for _ in range(3):
            block += ((index + base) // base) * self.per_table
            if index < base:
                break
            base *= PER_LEVEL[0]
        return self.data_start + (block << 12)

    def _hash_table_offset(self, index):
        if index < PER_LEVEL[0]:
            block = 0
        else:
            block = (index // PER_LEVEL[0]) * self.step0
            block += ((index // PER_LEVEL[1]) + 1) * self.per_table
            if index >= PER_LEVEL[1]:
                block += self.per_table
        return self.data_start + (block << 12)

    def next_block(self, index):
        entry = self._at(self._hash_table_offset(index) + (index % PER_LEVEL[0]) * 0x18, 0x18)
        return u32be(entry, 0x14) & 0xFFFFFF

    def entries(self):
        """(path, size, is_dir) for everything in the package."""
        raw_entries, parents = [], []
        block = self.dir_block
        for _ in range(self.dir_block_count):
            data = self._at(self.block_offset(block), BLOCK)
            done = False
            for i in range(BLOCK // 0x40):
                raw = data[i * 0x40:(i + 1) * 0x40]
                if raw[0] == 0:
                    done = True
                    break
                flags = raw[0x28]
                raw_entries.append({
                    "name": raw[:flags & 0x3F].decode("latin-1"),
                    "dir": bool(flags & 0x80),
                    "size": u32be(raw, 0x34),
                    "start": u24le(raw, 0x2F),
                })
                parents.append(u16be(raw, 0x32))
            if done:
                break
            block = self.next_block(block)
            if block == END_OF_CHAIN:
                break

        out = []
        for i, entry in enumerate(raw_entries):
            parts, at, guard = [entry["name"]], parents[i], 0
            while at != 0xFFFF and at < len(raw_entries) and guard < 64:
                parts.append(raw_entries[at]["name"])
                at = parents[at]
                guard += 1
            out.append(("/".join(reversed(parts)), entry["size"], entry["dir"], entry["start"]))
        return out

    def read_file(self, start, size):
        chunks, block, remaining = [], start, size
        while remaining and block != END_OF_CHAIN:
            take = min(BLOCK, remaining)
            chunks.append(self._at(self.block_offset(block), BLOCK)[:take])
            remaining -= take
            block = self.next_block(block)
        if remaining:
            raise EOFError("block chain ended early")
        return b"".join(chunks)


def main():
    if len(sys.argv) < 3:
        print(__doc__)
        return 2
    action, package = sys.argv[1], sys.argv[2]

    # 'info' prints only the header fields a DLC install needs, so a caller can
    # read them without the full block parse (which a valid pack could still
    # trip on): <title_id hex8> <content_type hex8> <magic>. content_type
    # 00000002 is marketplace content (DLC).
    if action == "info":
        with open(package, "rb") as f:
            head = f.read(0x400)
        magic = head[:4]
        if magic not in (b"LIVE", b"CON ", b"PIRS"):
            raise ValueError(f"not an STFS package (magic {magic!r})")
        content_type = u32be(head, 0x344)
        title_id = u32be(head, 0x344 + 0x10 + 0x0C)
        print(f"{title_id:08X} {content_type:08X} {magic.decode().strip()}")
        return 0

    stfs = Stfs(package)
    print(f"{stfs.magic} package, title {stfs.title_id:08X}, type {stfs.content_type:08X}, "
          f"{stfs.total_blocks} blocks, {'read-only' if stfs.read_only else 'writable'} layout")

    entries = stfs.entries()
    if action == "list":
        for path, size, is_dir, _ in sorted(entries):
            print(f"  {'d' if is_dir else '-'} {size:>10}  {path}")
        print(f"{len([e for e in entries if not e[2]])} files")
        return 0

    if action != "extract" or len(sys.argv) < 4:
        print(__doc__)
        return 2
    out_root = sys.argv[3]
    written = 0
    for path, size, is_dir, start in sorted(entries):
        target = os.path.join(out_root, *path.split("/"))
        if is_dir:
            os.makedirs(target, exist_ok=True)
            continue
        os.makedirs(os.path.dirname(target) or ".", exist_ok=True)
        with open(target, "wb") as handle:
            handle.write(stfs.read_file(start, size) if size else b"")
        written += 1
    print(f"extracted {written} files to {out_root}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
