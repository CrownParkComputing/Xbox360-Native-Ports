#!/usr/bin/env python3
"""Decode all of RRU's Wwise audio to .ogg.

- Loose .wem files: big-endian XWMA -> RIFF XWMA (wem_xwma_to_riff) -> ffmpeg.
- .bnk banks (big-endian on X360): BKHD/DIDX/DATA chunks; DIDX is a table of
  {u32 wemId, u32 offset, u32 size} into DATA. Embedded wems decode the same
  way. HIRC/STID (event graph / names) are skipped here - they matter for the
  native mixer later, not for media recovery.

Usage: wwise_audio_dump.py <extracted_root> <out_dir>
"""
import os, struct, subprocess, sys, tempfile
from wem_xwma_to_riff import convert

def decode_wem_bytes(data: bytes, out_ogg: str) -> bool:
    if data[:4] == b"RIFX":
        data = convert(data)
    elif data[:4] != b"RIFF":
        return False
    with tempfile.NamedTemporaryFile(suffix=".xwma", delete=False) as t:
        t.write(data)
        tmp = t.name
    try:
        r = subprocess.run(["ffmpeg", "-v", "error", "-y", "-i", tmp, "-c:a", "libvorbis",
                            "-q:a", "5", out_ogg], capture_output=True)
        return r.returncode == 0 and os.path.getsize(out_ogg) > 0
    finally:
        os.unlink(tmp)

def parse_bnk(path: str):
    d = open(path, "rb").read()
    pos = 0
    didx, data_off = [], None
    while pos + 8 <= len(d):
        cid = d[pos:pos+4]
        (size,) = struct.unpack(">I", d[pos+4:pos+8])
        if cid == b"DIDX":
            for i in range(size // 12):
                didx.append(struct.unpack(">III", d[pos+8+i*12:pos+20+i*12]))
        elif cid == b"DATA":
            data_off = pos + 8
        pos += 8 + size
    for wem_id, off, sz in didx:
        yield wem_id, d[data_off+off:data_off+off+sz]

def main(root, out_dir):
    ok = fail = 0
    for dirpath, _, files in os.walk(root):
        for name in files:
            src = os.path.join(dirpath, name)
            rel = os.path.relpath(src, root)
            if name.endswith(".wem"):
                dst = os.path.join(out_dir, os.path.splitext(rel)[0] + ".ogg")
                os.makedirs(os.path.dirname(dst), exist_ok=True)
                if decode_wem_bytes(open(src, "rb").read(), dst):
                    ok += 1
                else:
                    fail += 1
                    print("FAIL wem", rel)
            elif name.endswith(".bnk"):
                bank_dir = os.path.join(out_dir, os.path.splitext(rel)[0])
                for wem_id, blob in parse_bnk(src):
                    os.makedirs(bank_dir, exist_ok=True)
                    dst = os.path.join(bank_dir, f"{wem_id}.ogg")
                    if decode_wem_bytes(blob, dst):
                        ok += 1
                    else:
                        fail += 1
                        print("FAIL bnk-wem", rel, wem_id, blob[:4])
    print(f"decoded {ok}, failed {fail}")

if __name__ == "__main__":
    sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
    main(sys.argv[1], sys.argv[2])
