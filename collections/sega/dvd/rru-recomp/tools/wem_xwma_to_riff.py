#!/usr/bin/env python3
"""Convert RRU's big-endian Wwise XWMA .wem (RIFX/XWMA, X360) into a
little-endian RIFF XWMA that ffmpeg's xwma demuxer accepts.

Container endianness is swapped; the WMA packet payload is a byte stream and
passes through untouched. The Wwise 'seek' chunk is the XWMA 'dpds' table
(u32 decoded-PCM running totals), byteswapped.
"""
import struct, sys

def convert(src: bytes) -> bytes:
    assert src[:4] == b"RIFX", "not RIFX"
    form = src[8:12]
    assert form in (b"XWMA", b"WAVE"), form
    pos = 12
    chunks = []
    while pos + 8 <= len(src):
        cid = src[pos:pos+4]
        (size,) = struct.unpack(">I", src[pos+4:pos+8])
        body = src[pos+8:pos+8+size]
        chunks.append((cid, body))
        pos += 8 + size + (size & 1)

    out_chunks = []
    for cid, body in chunks:
        if cid == b"fmt ":
            tag, ch, rate, avg, align, bits = struct.unpack(">HHIIHH", body[:16])
            extra = body[18:] if len(body) >= 18 else b""
            if tag == 0x166 and len(extra) >= 34:
                # XMA2WAVEFORMATEX extra block, field-wise byteswap.
                (streams, mask, senc, bpb, pbeg, plen, lbeg, llen, lcount, ever,
                 bcount) = struct.unpack(">HIIIIIIIBBH", extra[:34])
                if mask == 0:
                    mask = {1: 0x4, 2: 0x3, 4: 0x33, 6: 0x3F}.get(ch, (1 << ch) - 1)
                # ffmpeg's xma2 decoder requires exactly the 34-byte
                # XMA2WAVEFORMATEX extra block; Wwise pads beyond it.
                extra = struct.pack("<HIIIIIIIBBH", streams, mask, senc, bpb, pbeg,
                                    plen, lbeg, llen, lcount, ever, bcount)
            # For XWMA (0x161/0x162) ffmpeg ignores the extra bytes.
            body = struct.pack("<HHIIHHH", tag, ch, rate, avg, align, bits,
                               len(extra)) + extra
        elif cid in (b"seek", b"dpds"):
            n = len(body) // 4
            body = struct.pack(f"<{n}I", *struct.unpack(f">{n}I", body[:n*4]))
            cid = b"dpds"
        elif cid == b"data":
            pass  # WMA packets are a byte stream
        else:
            continue  # drop Wwise-specific chunks ffmpeg would reject
        out_chunks.append((cid, body))

    payload = form
    for cid, body in out_chunks:
        payload += cid + struct.pack("<I", len(body)) + body
        if len(body) & 1:
            payload += b"\0"
    return b"RIFF" + struct.pack("<I", len(payload)) + payload

if __name__ == "__main__":
    data = open(sys.argv[1], "rb").read()
    open(sys.argv[2], "wb").write(convert(data))
    print(f"{sys.argv[1]} -> {sys.argv[2]} ({len(data)} bytes)")
