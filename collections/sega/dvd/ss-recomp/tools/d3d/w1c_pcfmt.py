#!/usr/bin/env python3
"""W1-c: parsers for Split/Second PC shader containers.
  CXF\\0  (.fxc)     : combos, each {name, vs params, vs_3_0 blob, ps params, ps_3_0 blob}
  RDHS   (.shaders) : combos, each {name, BRDH groups, samplers, vertex elements, SRDS sections}
String rule (verified on both): u32 len, char[len] (NUL included), then len % 4 pad bytes."""
import struct, sys, json

def rstr(d, p):
    n = struct.unpack_from('<I', d, p)[0]
    s = d[p + 4:p + 4 + n].split(b'\0')[0].decode('latin1')
    return s, p + 4 + n + (n % 4)

def u32(d, p): return struct.unpack_from('<I', d, p)[0]

def parse_cxf(d):
    assert d[:4] == b'CXF\0', d[:4]
    ver, field8, ncombo = struct.unpack_from('<III', d, 4)
    p = 16; combos = []
    for ci in range(ncombo):
        name, p = rstr(d, p)
        c = dict(index=ci, name=name)
        for stage in ('vs', 'ps'):
            n = u32(d, p); p += 4; params = []
            for k in range(n):
                pn, p = rstr(d, p)
                t, r, cnt = struct.unpack_from('<III', d, p); p += 12
                params.append(dict(name=pn, type=t, reg=r, count=cnt))
            sz = u32(d, p); p += 4
            blob = d[p:p + sz]; p += sz
            c[stage + '_params'] = params; c[stage + '_blob'] = blob
        combos.append(c)
    return dict(version=ver, field8=field8, ncombo=ncombo, end=p, size=len(d), combos=combos)

def parse_rdhs(d):
    assert d[:4] == b'RDHS', d[:4]
    ver, ncombo = struct.unpack_from('<II', d, 4)
    p = 12; combos = []
    for ci in range(ncombo):
        name, p = rstr(d, p)
        assert d[p:p + 4] == b'BRDH', (ci, hex(p), d[p:p + 4])
        p += 4
        c = dict(index=ci, name=name, groups=[], samplers=[], vertex=[], srds=[])
        # 4 constant groups [VS global, VS layer, PS global, PS layer]: (n, total_regs) then n x {reg, count, name}
        GROUPS = ('vs_global', 'vs_layer', 'ps_global', 'ps_layer')
        for g in range(4):
            n, tot = struct.unpack_from('<II', d, p); p += 8
            ents = []
            for k in range(n):
                cid, cnt = struct.unpack_from('<II', d, p); p += 8
                en, p = rstr(d, p)
                ents.append(dict(reg=cid, count=cnt, name=en))
            c['groups'].append(dict(kind=GROUPS[g], n=n, total=tot, entries=ents))
        # 4 sampler lists in the same order, each n x {reg, name}
        c['sampler_lists'] = []
        for g in range(4):
            n = u32(d, p); p += 4; lst = []
            for k in range(n):
                sid = u32(d, p); p += 4
                sn, p = rstr(d, p)
                lst.append(dict(reg=sid, name=sn))
            c['sampler_lists'].append(dict(kind=GROUPS[g], entries=lst))
        c['samplers_a'] = c['sampler_lists'][0]['entries'] + c['sampler_lists'][1]['entries']
        c['samplers_b'] = c['sampler_lists'][2]['entries'] + c['sampler_lists'][3]['entries']
        c['samplers'] = c['samplers_a'] + c['samplers_b']
        n = u32(d, p); p += 4
        for k in range(n):
            vn, p = rstr(d, p)
            t, usage, idx = struct.unpack_from('<III', d, p); p += 12
            c['vertex'].append(dict(name=vn, type=t, usage=usage, index=idx))
        assert d[p:p + 4] == b'ERDH', (ci, hex(p), d[p:p + 4])
        p += 4
        for s in range(2):
            assert d[p:p + 4] == b'SRDS', (ci, hex(p), d[p:p + 4])
            p += 4
            start = p
            # find matching ERDS (no nesting observed) -- keep raw for now
            e = d.find(b'ERDS', p)
            c['srds'].append(d[start:e])
            p = e + 4
        combos.append(c)
    return dict(version=ver, ncombo=ncombo, end=p, size=len(d), combos=combos)

if __name__ == '__main__':
    d = open(sys.argv[1], 'rb').read()
    if d[:4] == b'CXF\0':
        r = parse_cxf(d)
        print('CXF ver', r['version'], 'field8', r['field8'], 'ncombo', r['ncombo'], 'end', r['end'], 'size', r['size'])
        for c in r['combos'][:int(sys.argv[2]) if len(sys.argv) > 2 else 3]:
            print(c['index'], c['name'], 'vs', len(c['vs_blob']), c['vs_blob'][:4].hex(), [(q['name'], q['type'], q['reg'], q['count']) for q in c['vs_params']])
            print('   ps', len(c['ps_blob']), c['ps_blob'][:4].hex(), [(q['name'], q['type'], q['reg'], q['count']) for q in c['ps_params']])
        print('tail after end:', d[r['end']:r['end'] + 32].hex())
    else:
        r = parse_rdhs(d)
        print('RDHS ver', r['version'], 'ncombo', r['ncombo'], 'end', r['end'], 'size', r['size'])
        for c in r['combos'][:int(sys.argv[2]) if len(sys.argv) > 2 else 3]:
            print(c['index'], c['name'], 'groups', [(g['n'], g['total'], [(e['reg'], e['count'], e['name']) for e in g['entries']]) for g in c['groups']])
            print('   samplersA', [(s['reg'], s['name']) for s in c['samplers_a']], 'B', [(s['reg'], s['name']) for s in c['samplers_b']])
            print('   vertex', [(v['name'], v['type'], v['usage'], v['index']) for v in c['vertex']])
            print('   srds', [len(s) for s in c['srds']], [s[:48] for s in c['srds']])
