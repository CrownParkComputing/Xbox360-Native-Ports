# Bugbear `bfs1` archive format — Ridge Racer Unbounded (X360)

Reverse-engineered from the recompiled guest code (archive open/parse:
`sub_824AAAD8`, lookup: `sub_824AB1B0`, name decode: `sub_824AA960`,
pass-1 decrypt: `sub_8247E020`, pass-2 decrypt: `sub_824AB718`,
read wrapper: `sub_8247EBD8`) and verified byte-for-byte against both
shipped archives.

The game ships two independent, self-contained `bfs1` archives:

| file | size | files | contents |
|---|---|---|---|
| `00__ridge_racer__` | 491,520 | 273 | boot databases (zlib'd PropertyDatabase XML) |
| `01___unbounded___` | 1,672,839,168 | 9,223 | all game data (bmap/scne/png/bnk/wem/usm/...) |

All integer fields are **little-endian** (the guest byte-swaps at load; a
magic of `1sfb` would mean big-endian fields). Encryption operates on
**big-endian u32 words** regardless.

## Encryption

Two layers, both little XTEA-family ciphers over big-endian u32 words.

### Pass 1 — whole file, chunked (`sub_8247E020`)

Applied to the entire archive in independent chunks of **0x8000 bytes
aligned to file offset 0** (both archives; 0x4000 framing is wrong — it
corrupts the word at each 0x4000 boundary). Single round, chained through
the *next* word; the last word of a chunk chains to the (already
decrypted) first word:

```
KEY1 = (0x486A3449, 0x53014F82, 0x9E37DC4D, 0x4F9D4C9D)   # guest 0x83126194
DELTA = 0x9E3779B9
for i in 0..n-2:  w[i]   -= (((w[i+1]<<4) ^ (w[i+1]>>5)) + w[i+1]) ^ (KEY1[(i&3)^2] + DELTA)
w[n-1]           -= (((w[0]  <<4) ^ (w[0]  >>5)) + w[0])           ^ (KEY1[((n-1)&3)^2] + DELTA)
```

### Pass 2 — TOC table only (`sub_824AB718`)

Applied after pass 1 to the table region `[0x14, 0x14 + 4*((tableSize-20)/4))`
as **one block** (n ≈ 5.4k/83k words). Multi-round, XXTEA-style schedule,
different key (guest 0x83126180, recovered from live process memory via
gdb):

```
KEY2 = (0x37E8B81B, 0x107A4FB5, 0xA150A27A, 0x7DDAF997)
n = words; sum = (6 + 52//n) * DELTA
while sum != 0:
    e = (sum >> 2) & 3
    for i in n-1 .. 1:
        z = w[i-1]
        w[i] -= (((z<<4) ^ (z>>5)) + z) ^ (KEY2[(i&3)^e] + sum)
    z = w[n-1]
    w[0] -= (((z<<4) ^ (z>>5)) + z) ^ (KEY2[e] + sum)
    sum -= DELTA
```

File data gets **only pass 1**.

## Header (0x14 bytes)

| off | type | value |
|---|---|---|
| 0x00 | char[4] | `bfs1` |
| 0x04 | u32 | version `0x20111220` (2011-12-20) |
| 0x08 | u32 | `tableSize \| 0x80000000` — flag bit = table has pass-2 encryption. tableSize counts **from file offset 0** (it includes the header), so the table spans `[0x14, tableSize)`. 00: 0x54E8, 01: 0x51330 |
| 0x0C | u32 | fileCount (00: 273, 01: 9223) |
| 0x10 | u32 | 1 |

## Table (after both decrypt passes)

```
+0x14  u32 bucketCount                 # always 997 (asserted by the code)
+0x18  { u32 entryOffset;              # ABSOLUTE file offset of the bucket's
                                       #   first entry record
         u32 entryCount; } * 997      # entries of a bucket are consecutive
dictHdr:                               # at 0x18 + 997*8
       u32 entriesRelOff               # dictHdr + this -> first entry record
       u32 aRelOff                     # dictHdr-relative -> u32 A[nstr]
       u32 lensRelOff                  #                  -> u16 lens[nstr]
       u32 treeRelOff                  #                  -> s16 tree[]
       u32 bitsRelOff                  #                  -> huffman bitstream
```

### Entry record — variable size, `24 + 4*extraCount` bytes

| off | type | meaning |
|---|---|---|
| 0x00 | u16 | flags; bit0 = zlib-compressed (raw zlib stream, 0x78 …) |
| 0x02 | u16 | extraCount |
| 0x04 | u32 | dataOffset (absolute; a bias `[obj+632]` exists in code but is always 0 here) |
| 0x08 | u32 | uncompressedSize |
| 0x0C | u32 | compressedSize (== uncompressedSize when stored) |
| 0x10 | u32 | 0 (always, in both archives) |
| 0x14 | u16 | dir-name index into string dictionary |
| 0x16 | u16 | file-name index into string dictionary |
| 0x18 | u32[extraCount] | absolute offsets of **identical duplicate copies** of this file (seek locality; verified byte-identical; 330 entries in `01` have one) |

Full path = `dict[dirIdx] + "/" + dict[fileIdx]` (just `dict[fileIdx]` if
the dir string is empty). Stored paths are lowercase with `/` separators,
e.g. `data/menu/overlay/intro.usm`.

### String dictionary (`sub_824AA960`)

One shared canonical-Huffman-coded pool for directory strings and file
names (00: 274 strings, 01: 5225). Per string index `i`:
bitstream starts at `bits + A[i]` (byte-aligned), decoded length is
`lens[i]` chars. Tree walk over the s16 `tree[]` array, per character:

```
i = 0; v = tree[0]
while v >= 0:              # non-negative = internal node
    bit = next bit (LSB-first within each byte)
    i = (bit ? i+1 : v)    # 1 -> next slot, 0 -> jump to tree[v]
    v = tree[i]
char = v & 0xFF            # negative value = leaf, low byte = char
```

## Name lookup (`sub_824AB1B0`)

Path is normalized (`\` → `/`, lowercase, via `sub_824464E0`), then hashed
with a sparse-sampling hash (at most 32 characters ever touched):

```
h = len; step = (len >> 5) + 1
for i = len; i >= step; i -= step:
    h = (((h << 5) + (h >> 2) + s[i-1]) & 0xFFFFFFFF) ^ h
bucket = h % 997
```

The bucket's consecutive entries are then compared by **decoded name**
(not by hash — the hash is never stored). Verified: all 273 + 9223
entries land in the bucket their name hashes to.

## Extractor

`tools/bfs_extract.py` (stdlib only):

```
python3 tools/bfs_extract.py 01___unbounded___ list [--filter usm]
python3 tools/bfs_extract.py 01___unbounded___ extract data/menu/overlay/intro.usm --out extracted
python3 tools/bfs_extract.py 01___unbounded___ extract --all --out extracted
```

List columns: hash, Z/- (zlib/stored), offset, csize, usize, name.
Only the needed 0x8000-aligned ranges are read/decrypted; the 1.6 GB file
is never loaded whole.

## Verification performed

- 273/273 and 9223/9223 entries parse; entry stream ends exactly at
  tableSize in both archives; all names hash into their buckets.
- All 8,420 compressed entries in `01` start with a valid zlib header;
  120 random full inflations matched `uncompressedSize` exactly.
- `data/menu/overlay/intro.usm` (357 MB) extracts with valid `CRID`
  magic; ffprobe: Sofdec, 1280x720 mpeg1video 29.97 fps, 1:58.05.
  (There is no "gamescom" USM in either archive — the 13 USMs are
  intro, outro, logo_bugbear, logo_namco, episode01–09.)
- Spot checks: `.png` (valid RGBA PNG), `.bnk` (Wwise `BKHD`),
  `.wem` (`RIFX`), zlib'd `database.xml` from `00` inflates to valid
  PropertyDatabase XML, `.bmap`/`.scne` are Bugbear-proprietary.
