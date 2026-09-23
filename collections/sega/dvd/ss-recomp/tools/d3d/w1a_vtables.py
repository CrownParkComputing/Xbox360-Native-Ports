#!/usr/bin/env python3
"""Scan image.bin (decompressed XEX image at 0x88000000) for big-endian pointers into the
D3D band and cluster them into function tables / vtables."""
import struct, json, os, sys, collections
sys.path.insert(0, os.path.dirname(__file__))
from w1a_lib import *
IMG = os.path.expanduser('~/ports/splitsecond/splitsecond/assets/image.bin')
BASE = 0x88000000
LO, HI = 0x888D19C0, 0x888FA3E0
F = load()
funcs = set(int(v, 16) for v in F)
d = open(IMG, 'rb').read()
CODE_END = 0x88210000 + 0xC6A7E0
hits = []  # (addr, target)
for off in range(0, len(d) - 3, 4):
    t = struct.unpack_from('>I', d, off)[0]
    if LO <= t < HI and t in funcs:
        hits.append((BASE + off, t))
# cluster: consecutive dword slots (allow gaps of pointers to any function, e.g. other bands)
tables = []
cur = None
for a, t in hits:
    if cur and a == cur['next']:
        cur['slots'].append(t); cur['next'] = a + 4
    else:
        # check whether a table continues through non-band function pointers
        cur = {'addr': a, 'slots': [t], 'next': a + 4}
        tables.append(cur)
# merge tables separated only by pointers to other (non-band) functions
merged = []
for tb in tables:
    if merged:
        prev = merged[-1]
        gap = (tb['addr'] - prev['next']) // 4
        ok = gap <= 64 and all((struct.unpack_from('>I', d, prev['next'] - BASE + 4*i)[0] in funcs) for i in range(gap))
        if ok and gap >= 0:
            for i in range(gap):
                prev['slots'].append(struct.unpack_from('>I', d, prev['next'] - BASE + 4*i)[0])
            prev['slots'] += tb['slots']; prev['next'] = tb['next']
            continue
    merged.append(tb)
in_data = [t for t in merged if t['addr'] >= CODE_END or t['addr'] < 0x88210000]
in_code = [t for t in merged if not (t['addr'] >= CODE_END or t['addr'] < 0x88210000)]
print('pointer hits', len(hits), 'tables', len(merged), 'in data', len(in_data), 'in code', len(in_code))
for t in sorted(merged, key=lambda t: -len(t['slots'])):
    print('%08X n=%d %s' % (t['addr'], len(t['slots']), ' '.join('%08X' % s for s in t['slots'][:40])))
json.dump([{'addr': '%08X' % t['addr'], 'slots': ['%08X' % s for s in t['slots']], 'in_data': t['addr'] >= CODE_END} for t in merged], open(os.path.expanduser('~/ss-recomp/docs/d3d/w1a_tables_raw.json'), 'w'), indent=1)
