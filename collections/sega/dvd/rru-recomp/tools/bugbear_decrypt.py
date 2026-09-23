#!/usr/bin/env python3
"""Offline decryptor for RRU's Bugbear archive pair (00__ridge_racer__ TOC +
01___unbounded___ data).

Cipher recovered from the recompiled guest code (sub_8247E020, called per
streamed chunk): a chained single-round XTEA-style pass over big-endian
32-bit words w[0..n-1]:

    for i in 0..n-2:  w[i] -= ((w[i+1]<<4 ^ w[i+1]>>5) + w[i+1])
                              ^ (key[(i&3)^2] + 0x9E3779B9)
    w[n-1]          -= ((w[0]<<4 ^ w[0]>>5) + w[0])          # w[0] decrypted
                              ^ (key[((n-1)&3)^2] + 0x9E3779B9)

Key (16 bytes, guest 0x83126194 in the XEX data section):
    486A3449 53014F82 9E37DC4D 4F9D4C9D  (big-endian words)
"""
import struct, sys

KEY = (0x486A3449, 0x53014F82, 0x9E37DC4D, 0x4F9D4C9D)
DELTA = 0x9E3779B9
M = 0xFFFFFFFF

def decrypt_chunk(data: bytes) -> bytes:
    n = len(data) // 4
    w = list(struct.unpack(f">{n}I", data[:n*4]))
    for i in range(n - 1):
        v = w[i+1]
        w[i] = (w[i] - ((((v << 4) & M) ^ (v >> 5)) + v ^ (KEY[(i & 3) ^ 2] + DELTA))) & M
    v = w[0]
    i = n - 1
    w[i] = (w[i] - ((((v << 4) & M) ^ (v >> 5)) + v ^ (KEY[(i & 3) ^ 2] + DELTA))) & M
    return struct.pack(f">{n}I", *w) + data[n*4:]

def decrypt_file(src, dst, chunk=0x4000):
    with open(src, "rb") as f, open(dst, "wb") as o:
        while True:
            c = f.read(chunk)
            if not c:
                break
            o.write(decrypt_chunk(c) if len(c) >= 8 else c)

if __name__ == "__main__":
    src, dst = sys.argv[1], sys.argv[2]
    chunk = int(sys.argv[3], 0) if len(sys.argv) > 3 else 0x4000
    decrypt_file(src, dst, chunk)
    print(f"decrypted {src} -> {dst} (chunk 0x{chunk:X})")
