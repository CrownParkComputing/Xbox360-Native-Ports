#!/usr/bin/env python3
"""W1-c: D3D9 shader model 3 bytecode reader: version, DCLs (input semantics, samplers, outputs),
CTAB constant table, instruction/texld counts, constant register usage."""
import struct

REGTYPE = {0: 'r', 1: 'v', 2: 'c', 3: 'a', 4: 'oRast', 5: 'oAttr', 6: 'o', 7: 'i', 8: 'oC', 9: 'oDepth', 10: 's', 11: 'c2', 12: 'c3',
           13: 'c4', 14: 'b', 15: 'aL', 16: 'r16', 17: 'misc', 18: 'label', 19: 'p'}
USAGE = {0: 'POSITION', 1: 'BLENDWEIGHT', 2: 'BLENDINDICES', 3: 'NORMAL', 4: 'PSIZE', 5: 'TEXCOORD', 6: 'TANGENT', 7: 'BINORMAL',
         8: 'TESSFACTOR', 9: 'POSITIONT', 10: 'COLOR', 11: 'FOG', 12: 'DEPTH', 13: 'SAMPLE'}
STT = {0: 'unknown', 2: '2D', 3: 'cube', 4: 'volume'}
OPS = {0x1F: 'dcl', 0x42: 'texld', 0x5F: 'texldl', 0x5D: 'texldd', 0x41: 'texkill', 0x51: 'def', 0x52: 'defi', 0x53: 'defb',
       0x1B: 'loop', 0x1D: 'endloop', 0x19: 'call', 0x1A: 'callnz', 0x28: 'if', 0x29: 'ifc', 0x2A: 'else', 0x2B: 'endif',
       0x26: 'rep', 0x27: 'endrep', 0x2C: 'break', 0x2D: 'breakc', 0x5E: 'breakp', 0x40: 'setp', 0x2E: 'mova', 0x1E: 'label',
       0x1C: 'ret', 0x0D: 'sincos', 0x0E: 'exp' , 0x0F: 'log', 0x10: 'lit', 0x11: 'dst', 0x12: 'lrp', 0x13: 'frc'}
REGSET = {0: 'bool', 1: 'int4', 2: 'float4', 3: 'sampler'}

def regof(tok):
    return ((tok >> 28) & 7) | (((tok >> 11) & 3) << 3), tok & 0x7ff

def parse(blob):
    n = len(blob) // 4
    w = struct.unpack('<%dI' % n, blob[:n * 4])
    r = dict(version=None, inputs=[], samplers=[], outputs=[], ctab=None, ninstr=0, texld=0, consts=set(), ops={}, rel_addr=False,
             int_consts=set(), bool_consts=set(), max_temp=-1, kill=False, flow=[], color_out=set(), depth_out=False, out_regs=set(), literals=set())
    v = w[0]
    r['version'] = ('vs' if (v >> 16) == 0xFFFE else 'ps' if (v >> 16) == 0xFFFF else '?') + '_%d_%d' % ((v >> 8) & 0xff, v & 0xff)
    i = 1
    while i < n:
        t = w[i]
        if t == 0x0000FFFF: break
        op = t & 0xffff
        if op == 0xFFFE:  # comment
            ln = (t >> 16) & 0x7fff
            body = blob[(i + 1) * 4:(i + 1 + ln) * 4]
            if body[:4] == b'CTAB': r['ctab'] = parse_ctab(body[4:])
            i += 1 + ln; continue
        ln = (t >> 24) & 0xf
        args = w[i + 1:i + 1 + ln]
        name = OPS.get(op)
        r['ops'][name or op] = r['ops'].get(name or op, 0) + 1
        if op == 0x1F:
            usage = args[0]; rt, num = regof(args[1])
            if rt == 10:
                r['samplers'].append(dict(reg=num, dim=STT.get((usage >> 27) & 0xf, str((usage >> 27) & 0xf))))
            elif rt == 1:
                r['inputs'].append(dict(reg=num, usage=USAGE.get(usage & 0x1f, str(usage & 0x1f)), index=(usage >> 16) & 0xf))
            elif rt == 6:
                r['outputs'].append(dict(reg=num, usage=USAGE.get(usage & 0x1f, str(usage & 0x1f)), index=(usage >> 16) & 0xf))
            elif rt == 17:
                r['inputs'].append(dict(reg=num, usage='MISC' + str(num), index=0))
            else:
                r['inputs'].append(dict(reg=num, usage='dcl_rt%d' % rt, index=0))
        elif op in (0x51, 0x52, 0x53):
            rt, num = regof(args[0])
            if rt == 2: r['literals'].add(num)
        else:
            r['ninstr'] += 1
            if op in (0x42, 0x5F, 0x5D): r['texld'] += 1
            if op == 0x41: r['kill'] = True
            if op in (0x1B, 0x19, 0x1A, 0x28, 0x29, 0x26, 0x5E, 0x2D): r['flow'].append(name)
            for k, a in enumerate(args):
                rt, num = regof(a)
                if k == 0 and ln > 1 and op not in (0x1B, 0x19, 0x1A, 0x28, 0x29, 0x26, 0x5E, 0x2D, 0x1E, 0x40):
                    if rt == 8: r['color_out'].add(num)
                    elif rt == 9: r['depth_out'] = True
                    elif rt == 6: r['out_regs'].add(num)
                    continue
                if rt == 2: r['consts'].add(num)
                elif rt == 7: r['int_consts'].add(num)
                elif rt == 14: r['bool_consts'].add(num)
                elif rt == 0: r['max_temp'] = max(r['max_temp'], num)
                if k > 0 and (a >> 13) & 1: r['rel_addr'] = True
        i += 1 + ln
    r['color_out'] = sorted(r['color_out']); r['out_regs'] = sorted(r['out_regs'])
    r['literals'] = sorted(r['literals']); r['consts'] = sorted(set(r['consts']) - set(r['literals'])); r['int_consts'] = sorted(r['int_consts']); r['bool_consts'] = sorted(r['bool_consts'])
    return r

def parse_ctab(b):
    size, creator, version, nconst, cinfo, flags, target = struct.unpack_from('<7I', b, 0)
    def cs(off):
        e = b.find(b'\0', off); return b[off:e].decode('latin1')
    consts = []
    for k in range(nconst):
        name, rset, ridx, rcnt, res, tinfo, dflt = struct.unpack_from('<IHHHHII', b, cinfo + 20 * k)
        cls, typ, rows, cols, elems, members, minfo = struct.unpack_from('<HHHHHHI', b, tinfo)
        consts.append(dict(name=cs(name), set=REGSET.get(rset, str(rset)), reg=ridx, count=rcnt, cls=cls, type=typ, rows=rows, cols=cols, elems=elems))
    return dict(creator=cs(creator), target=cs(target), consts=consts)

if __name__ == '__main__':
    import sys, json
    sys.path.insert(0, '/home/jon/ss-recomp/tools/d3d')
    import w1c_pcfmt as P
    d = open(sys.argv[1], 'rb').read()
    r = P.parse_cxf(d)
    for c in r['combos'][:int(sys.argv[2]) if len(sys.argv) > 2 else 2]:
        for st in ('vs', 'ps'):
            x = parse(c[st + '_blob'])
            print(c['name'], st, x['version'], 'ninstr', x['ninstr'], 'texld', x['texld'], 'ops', x['ops'], 'flow', x['flow'])
            print('  inputs', x['inputs']); print('  outputs', x['outputs']); print('  samplers', x['samplers'])
            print('  consts', x['consts'], 'int', x['int_consts'], 'bool', x['bool_consts'], 'rel', x['rel_addr'], 'maxtemp', x['max_temp'])
            print('  ctab', x['ctab'])
