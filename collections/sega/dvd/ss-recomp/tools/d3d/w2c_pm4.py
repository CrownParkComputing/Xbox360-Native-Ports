#!/usr/bin/env python3
"""Decode a dumped Xenos PM4 indirect buffer (big-endian dwords).

Register names come from the SDK's register_table.inc, opcode names from
xenos.h, so this decoder tracks the xenos plugin's parser (the oracle).

usage:
  w2c_pm4.py summary <dir>        # one line per ib_*.bin in <dir>
  w2c_pm4.py dump <file> [n]      # full listing of one buffer
  w2c_pm4.py json <dir> -o out    # machine-readable per-buffer summary
"""
import sys, os, glob, struct, json, collections, re, argparse

SDK = os.path.expanduser('~/rexglue-vmx/include/rex/graphics')

def load_regs():
    regs = {}
    p = os.path.join(SDK, 'register_table.inc')
    for m in re.finditer(r'XE_GPU_REGISTER\(\s*(0x[0-9A-Fa-f]+)\s*,\s*\w+\s*,\s*(\w+)\s*\)', open(p).read()):
        regs[int(m.group(1), 16)] = m.group(2)
    return regs

def load_ops():
    ops = {}
    p = os.path.join(SDK, 'xenos.h')
    for m in re.finditer(r'(PM4_\w+)\s*=\s*(0x[0-9A-Fa-f]+)', open(p).read()):
        ops.setdefault(int(m.group(2), 16), m.group(1)[4:])
    return ops

REGS = load_regs()
OPS = load_ops()
DRAW_OPS = {0x22, 0x36, 0x34, 0x35}
IB_OPS = {0x3F, 0x37}
# SET_CONSTANT / LOAD_ALU_CONSTANT constant-space bases (dwords), from xenos.h
CONST_BASE = {0: 0x4000, 1: 0x4800, 2: 0x4900, 3: 0x4908, 4: 0x2000}
CONST_NAME = {0: 'ALU', 1: 'FETCH', 2: 'BOOL', 3: 'LOOP', 4: 'REG'}

def words(buf):
    n = len(buf) // 4
    return struct.unpack('>%dI' % n, buf[:n * 4])

def regname(idx):
    return REGS.get(idx, '0x%04X' % idx)

def decode(w, on_packet=None):
    """Walk a dword list. Returns (ops, trailing_junk_dwords)."""
    out = []
    i = 0
    n = len(w)
    while i < n:
        v = w[i]
        if v == 0:
            i += 1
            continue
        t = v >> 30
        if t == 3:
            cnt = ((v >> 16) & 0x3FFF) + 1
            op = (v >> 8) & 0x7F
            body = w[i + 1:i + 1 + cnt]
            if i + 1 + cnt > n:
                return out, n - i
            out.append(('T3', op, OPS.get(op, '?%02X' % op), i, body, (v >> 1) & 1))
            i += 1 + cnt
        elif t == 0:
            cnt = ((v >> 16) & 0x3FFF) + 1
            if i + 1 + cnt > n:
                return out, n - i
            out.append(('T0', v & 0x7FFF, 'REGWRITE', i, w[i + 1:i + 1 + cnt], (v >> 15) & 1))
            i += 1 + cnt
        elif t == 2:
            out.append(('T2', 0, 'NOP2', i, (), 0))
            i += 1
        else:
            out.append(('T1', 0, 'T1', i, w[i + 1:i + 3], 0))
            i += 3
    return out, 0

def regs_written(ops):
    """Return {reg_index: last_value} from SET_CONSTANT(REG)/type0 writes."""
    r = {}
    for kind, op, name, off, body, flag in ops:
        if kind == 'T0':
            base = op
            for k, v in enumerate(body):
                r[base if flag else base + k] = v
        elif kind == 'T3' and op == 0x2D and body:  # SET_CONSTANT
            hdr = body[0]
            space = (hdr >> 16) & 0xFF
            idx = hdr & 0x7FF
            base = CONST_BASE.get(space)
            if base is None:
                continue
            for k, v in enumerate(body[1:]):
                r[base + idx + k] = v
    return r

def summarize(path):
    w = words(open(path, 'rb').read())
    ops, junk = decode(w)
    c = collections.Counter(name for _, _, name, _, _, _ in ops)
    draws = sum(1 for k, op, _, _, _, _ in ops if k == 'T3' and op in DRAW_OPS)
    ibs = sum(1 for k, op, _, _, _, _ in ops if k == 'T3' and op in IB_OPS)
    regs = regs_written(ops)
    return {
        'file': os.path.basename(path), 'dwords': len(w), 'packets': len(ops),
        'draws': draws, 'nested_ibs': ibs, 'trailing_junk': junk,
        'ops': dict(c.most_common()),
        'reg_writes': len(regs),
        'regs': sorted(regname(i) for i in regs if i < 0x4000),
    }

def dumpfile(path, limit=0):
    w = words(open(path, 'rb').read())
    ops, junk = decode(w)
    for k, op, name, off, body, flag in ops:
        if k == 'T0':
            print('%05X T0 %-24s [%d] %s' % (off, regname(op), len(body),
                                             ' '.join('%08X' % x for x in body[:8])))
        elif k == 'T3':
            extra = ''
            if op == 0x2D and body:
                hdr = body[0]
                space = (hdr >> 16) & 0xFF
                idx = hdr & 0x7FF
                base = CONST_BASE.get(space)
                extra = ' space=%s idx=%d' % (CONST_NAME.get(space, space), idx)
                if base is not None and space == 4:
                    extra += ' reg=%s' % regname(base + idx)
            if op in DRAW_OPS:
                extra += ' <<DRAW>>'
            print('%05X T3 %-24s cnt=%-4d%s %s' % (off, name, len(body), extra,
                                                   ' '.join('%08X' % x for x in body[:10])))
        else:
            print('%05X %s' % (off, name))
        if limit and off > limit:
            break
    if junk:
        print('*** %d trailing dwords did not decode' % junk)

def main():
    if len(sys.argv) < 2:
        print(__doc__); return
    cmd = sys.argv[1]
    if cmd == 'summary':
        tot = collections.Counter()
        for f in sorted(glob.glob(os.path.join(sys.argv[2], 'ib_*.bin'))):
            s = summarize(f)
            tot['files'] += 1; tot['draws'] += s['draws']; tot['dwords'] += s['dwords']
            print('%-28s dw=%-7d pkts=%-6d draws=%-5d nested=%-3d junk=%-4d %s'
                  % (s['file'], s['dwords'], s['packets'], s['draws'], s['nested_ibs'],
                     s['trailing_junk'], ' '.join('%s:%d' % kv for kv in list(s['ops'].items())[:8])))
        print('TOTAL files=%d dwords=%d draws=%d' % (tot['files'], tot['dwords'], tot['draws']))
    elif cmd == 'dump':
        dumpfile(sys.argv[2], int(sys.argv[3]) if len(sys.argv) > 3 else 0)
    elif cmd == 'json':
        ap = argparse.ArgumentParser(); ap.add_argument('cmd'); ap.add_argument('dir'); ap.add_argument('-o', '--out', required=True)
        a = ap.parse_args()
        res = [summarize(f) for f in sorted(glob.glob(os.path.join(a.dir, 'ib_*.bin')))]
        json.dump(res, open(a.out, 'w'), indent=1)
        print('%d buffers -> %s' % (len(res), a.out))
    else:
        print(__doc__)

if __name__ == '__main__':
    main()
