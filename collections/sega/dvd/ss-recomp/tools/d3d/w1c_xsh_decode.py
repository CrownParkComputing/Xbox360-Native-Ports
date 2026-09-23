#!/usr/bin/env python3
"""W1-c: full static decode of every Xenos shader in the runtime cache (.xsh).
Cache format: 8-byte header, then records {u64 hash, u32 count_and_type (bit31 = pixel shader),
count big-endian u32 ucode words}. Instruction encodings follow
~/rexglue-vmx/include/rex/graphics/format/ucode.h (control flow, vfetch, tfetch, ALU)."""
import struct, sys, json, collections

XSH = '/home/jon/ss-recomp/content_root/cache/shaders/shareable/425607E7.xsh'
FMT = {0: 'undef', 6: '8_8_8_8', 7: '2_10_10_10', 16: '10_11_11', 17: '11_11_10', 25: '16_16', 26: '16_16_16_16',
       31: '16_16_F', 32: '16_16_16_16_F', 33: '32', 34: '32_32', 35: '32_32_32_32', 36: '32_F', 37: '32_32_F',
       38: '32_32_32_32_F', 57: '32_32_32_F'}
CFNAME = {0: 'nop', 1: 'exec', 2: 'exece', 3: 'cexec', 4: 'cexece', 5: 'cexec_pred', 6: 'cexece_pred', 7: 'loop',
          8: 'endloop', 9: 'call', 10: 'ret', 11: 'jmp', 12: 'alloc', 13: 'cexec_pred_clean', 14: 'cexece_pred_clean',
          15: 'vfetch_done'}
EXEC_OPS = {1, 2, 3, 4, 5, 6, 13, 14}
END_OPS = {2, 4, 6, 14}
VEC_OPS = {0: ('add', 2), 1: ('mul', 2), 2: ('max', 2), 3: ('min', 2), 4: ('seq', 2), 5: ('sgt', 2), 6: ('sge', 2), 7: ('sne', 2),
           8: ('frc', 1), 9: ('trunc', 1), 10: ('floor', 1), 11: ('mad', 3), 12: ('cndeq', 3), 13: ('cndge', 3), 14: ('cndgt', 3),
           15: ('dp4', 2), 16: ('dp3', 2), 17: ('dp2add', 3), 18: ('cube', 2), 19: ('max4', 1), 20: ('setp_eq_push', 2),
           21: ('setp_ne_push', 2), 22: ('setp_gt_push', 2), 23: ('setp_ge_push', 2), 24: ('kill_eq', 2), 25: ('kill_gt', 2),
           26: ('kill_ge', 2), 27: ('kill_ne', 2), 28: ('dst', 2), 29: ('maxa', 2)}
SCA_OPS = {0: 'adds', 1: 'adds_prev', 2: 'muls', 3: 'muls_prev', 4: 'muls_prev2', 5: 'maxs', 6: 'mins', 7: 'seqs', 8: 'sgts',
           9: 'sges', 10: 'snes', 11: 'frcs', 12: 'truncs', 13: 'floors', 14: 'exp', 15: 'logc', 16: 'log', 17: 'rcpc', 18: 'rcpf',
           19: 'rcp', 20: 'rsqc', 21: 'rsqf', 22: 'rsq', 23: 'maxas', 24: 'maxasf', 25: 'subs', 26: 'subs_prev', 27: 'setp_eq',
           28: 'setp_ne', 29: 'setp_gt', 30: 'setp_ge', 31: 'setp_inv', 32: 'setp_pop', 33: 'setp_clr', 34: 'setp_rstr',
           35: 'kills_eq', 36: 'kills_gt', 37: 'kills_ge', 38: 'kills_ne', 39: 'kills_one', 40: 'sqrt', 42: 'mulsc0', 43: 'mulsc1',
           44: 'addsc0', 45: 'addsc1', 46: 'subsc0', 47: 'subsc1', 48: 'sin', 49: 'cos', 50: 'retain_prev'}
SCA_NOOPERAND = {33, 50}
SCA_CONSTTEMP = {42, 43, 44, 45, 46, 47}
FETCH_OPS = {0: 'vfetch', 1: 'tfetch', 16: 'getBCF', 17: 'getCompTexLOD', 18: 'getGradients', 19: 'getWeights',
             24: 'setTexLOD', 25: 'setGradientH', 26: 'setGradientV'}
DIM = {0: '1D', 1: '2D', 2: '3D', 3: 'cube'}

def load(path=XSH):
    d = open(path, 'rb').read(); pos = 8; out = []
    while pos + 12 <= len(d):
        h, ct = struct.unpack('<QI', d[pos:pos + 12]); n = ct & 0x7fffffff; t = ct >> 31; pos += 12
        u = struct.unpack('>%dI' % n, d[pos:pos + 4 * n]); pos += 4 * n
        out.append(('%016X' % h, t, u))
    return out, d[:8]

def bits(v, lo, n): return (v >> lo) & ((1 << n) - 1)
def sext(v, n): return v - (1 << n) if v & (1 << (n - 1)) else v

def cf_pairs(u):
    """Unpack control-flow pairs like UnpackControlFlowInstructions. Yields (cf_index, w0, w1)."""
    for i in range(0, len(u) - 2, 3):
        d0, d1, d2 = u[i], u[i + 1], u[i + 2]
        yield 2 * i // 3, d0, d1 & 0xffff
        yield 2 * i // 3 + 1, ((d1 >> 16) | (d2 << 16)) & 0xffffffff, d2 >> 16

def decode_cf(w0, w1):
    op = bits(w1, 12, 4)
    r = dict(op=op, name=CFNAME[op])
    if op in EXEC_OPS:
        r.update(addr=bits(w0, 0, 12), count=bits(w0, 12, 3), seq=bits(w0, 16, 12), yield_=bits(w0, 15, 1), amode=bits(w1, 11, 1))
        if op in (3, 4, 13, 14):
            r.update(bool=bits(w1, 2, 8), cond=bits(w1, 10, 1))
        elif op in (5, 6):
            r.update(pred_clean=bits(w1, 9, 1), cond=bits(w1, 10, 1))
        else:
            r.update(pred_clean=bits(w1, 9, 1))
    elif op == 7:
        r.update(addr=bits(w0, 0, 13), repeat=bits(w0, 13, 1), loop_id=bits(w0, 16, 5))
    elif op == 8:
        r.update(addr=bits(w0, 0, 13), loop_id=bits(w0, 16, 5), pred_break=bits(w0, 21, 1), cond=bits(w1, 10, 1))
    elif op in (9, 11):
        r.update(addr=bits(w0, 0, 13), uncond=bits(w0, 13, 1), predicated=bits(w0, 14, 1), bool=bits(w1, 2, 8), cond=bits(w1, 10, 1))
    elif op == 12:
        r.update(size=bits(w0, 0, 3) + 1, alloc_type=bits(w1, 9, 2))
    return r

def decode_shader(hsh, t, u):
    s = dict(hash=hsh, type='ps' if t else 'vs', nwords=len(u), ninstr=0, cf=[], vfetch=[], tfetch=[], memexport=False,
             float_consts=set(), bool_consts=set(), loop_consts=set(), exports=set(), interpolators=set(),
             vec_ops=collections.Counter(), sca_ops=collections.Counter(), fetch_ops=collections.Counter(),
             notes=set(), max_temp=-1, alu=0, fetch=0, relative_const=False, predicated=0, allocs=[],
             temps_read_before_write=set())
    # 1. control-flow section: pairs until the lowest exec address (translator: cf_pair_index_bound_)
    cfs = []
    bound = len(u) // 3
    for ci, w0, w1 in cf_pairs(u):
        if (ci >> 1) >= bound: break
        cf = decode_cf(w0, w1); cf['index'] = ci; cfs.append(cf)
        if cf['op'] in EXEC_OPS and cf['addr'] != 0:
            bound = min(bound, cf['addr'])
        if cf['op'] in EXEC_OPS and cf['addr'] == 0:
            pass
    s['ncf'] = len(cfs)
    written = set()
    for cf in cfs:
        s['cf'].append(cf['name'])
        op = cf['op']
        if op == 12:
            s['allocs'].append({0: 'none', 1: 'position', 2: 'interp_or_color', 3: 'memory'}[cf['alloc_type']])
            if cf['alloc_type'] == 3: s['memexport'] = True
        if op in (3, 4, 13, 14, 9, 11) and 'bool' in cf and not cf.get('uncond'):
            s['bool_consts'].add(cf['bool'])
        if op in (7, 8): s['loop_consts'].add(cf['loop_id'])
        if op == 7: s['notes'].add('loop')
        if op == 9: s['notes'].add('call')
        if op == 11: s['notes'].add('jmp')
        if op in (5, 6, 13, 14): s['notes'].add('pred_exec')
        if op not in EXEC_OPS: continue
        s['max_exec_count'] = max(s.get('max_exec_count', 0), cf['count'])
        for k in range(cf['count']):
            i = (cf['addr'] + k) * 3
            if i + 2 >= len(u): s['notes'].add('exec_out_of_range'); break
            d0, d1, d2 = u[i], u[i + 1], u[i + 2]
            s['ninstr'] += 1
            isfetch = (cf['seq'] >> (k * 2)) & 1
            if isfetch:
                s['fetch'] += 1
                fop = d0 & 0x1f
                s['fetch_ops'][FETCH_OPS.get(fop, str(fop))] += 1
                if bits(d1, 31, 1): s['predicated'] += 1
                src = bits(d0, 5, 6); dst = bits(d0, 12, 6)
                if fop == 0:
                    fmt = bits(d1, 16, 6); mini = bits(d1, 30, 1)
                    v = dict(slot=bits(d0, 20, 5) * 3 + bits(d0, 25, 2), format=FMT.get(fmt, str(fmt)), mini=bool(mini),
                             stride=bits(d2, 0, 8), offset=sext(bits(d2, 8, 23), 23), signed=bool(bits(d1, 12, 1)),
                             normalized=bits(d1, 13, 1) == 0, exp_adjust=sext(bits(d1, 24, 6), 6), src=src, src_swz=bits(d0, 30, 2),
                             dst=dst, dst_swz=bits(d1, 0, 12), rounded=bool(bits(d1, 15, 1)), srf=bits(d1, 14, 1), prefetch=bits(d0, 27, 3) + 1)
                    if mini and s['vfetch']:
                        # mini fetch reuses slot/stride/src from the last full fetch
                        last = [x for x in s['vfetch'] if not x['mini']]
                        if last: v['slot'] = last[-1]['slot']; v['stride'] = last[-1]['stride']; v['src'] = last[-1]['src']
                    s['vfetch'].append(v)
                    if v['exp_adjust']: s['notes'].add('vfetch_exp_adjust')
                    if src not in written and src <= 63: s['temps_read_before_write'].add(src)
                    written.add(dst)
                else:
                    tf = dict(op=FETCH_OPS.get(fop, str(fop)), slot=bits(d0, 20, 5), dim=DIM[bits(d2, 14, 2)], src=src, dst=dst,
                              unnorm=bool(bits(d0, 25, 1)), use_comp_lod=bool(bits(d1, 27, 1)), use_reg_lod=bool(bits(d1, 28, 1)),
                              use_reg_grad=bool(bits(d2, 0, 1)), lod_bias=sext(bits(d2, 2, 7), 7) / 16.0,
                              mag=bits(d1, 12, 2), min_=bits(d1, 14, 2), mip=bits(d1, 16, 2), aniso=bits(d1, 18, 3))
                    s['tfetch'].append(tf)
                    if src not in written and src <= 63: s['temps_read_before_write'].add(src)
                    if fop in (1, 16, 17, 18, 19): written.add(dst)
                s['max_temp'] = max(s['max_temp'], src, dst if fop in (0, 1, 16, 17, 18, 19) else -1)
            else:
                s['alu'] += 1
                vdst = bits(d0, 0, 6); vrel = bits(d0, 6, 1); sdst = bits(d0, 8, 6); srel = bits(d0, 14, 1)
                export = bits(d0, 15, 1); vmask = bits(d0, 16, 4); smask = bits(d0, 20, 4); sopc = bits(d0, 26, 6)
                pred = bits(d1, 28, 1); c_rel = bits(d1, 29, 1); c1_abs = bits(d1, 30, 1); c0_abs = bits(d1, 31, 1)
                s3r = bits(d2, 0, 8); s2r = bits(d2, 8, 8); s1r = bits(d2, 16, 8); vopc = bits(d2, 24, 5)
                s3sel = bits(d2, 29, 1); s2sel = bits(d2, 30, 1); s1sel = bits(d2, 31, 1)
                vname, vcount = VEC_OPS.get(vopc, (str(vopc), 3))
                sname = SCA_OPS.get(sopc, str(sopc))
                if pred: s['predicated'] += 1
                if vmask or export: s['vec_ops'][vname] += 1
                if smask or (sopc not in (50,) and sname.startswith(('setp', 'kills'))): s['sca_ops'][sname] += 1
                if vname.startswith('kill') or sname.startswith('kills'): s['notes'].add('kill')
                if vname == 'cube': s['notes'].add('cube')
                if sname in ('maxas', 'maxasf') or vname == 'maxa': s['notes'].add('a0_write')
                if sname.startswith('setp') or vname.startswith('setp'): s['notes'].add('setp')
                # sources
                srcs = []
                if vcount >= 1: srcs.append((s1r, s1sel))
                if vcount >= 2: srcs.append((s2r, s2sel))
                if vcount >= 3: srcs.append((s3r, s3sel))
                if sopc in SCA_CONSTTEMP:
                    s['float_consts'].add(s3r)
                    tr = (sopc & 1) | (s3sel << 1) | (bits(d1, 0, 8) & 0x3c)
                    srcs.append((tr, 1))
                elif sopc not in SCA_NOOPERAND and (smask or sname.startswith(('setp', 'kills'))):
                    srcs.append((s3r, s3sel))
                nconst_before = 0
                for reg, sel in srcs:
                    if not sel:
                        addressed = c0_abs if nconst_before == 0 else c1_abs
                        nconst_before += 1
                        if addressed:
                            s['relative_const'] = True; s['notes'].add('relative_const_a0' if c_rel else 'relative_const_aL')
                    if sel:
                        r = reg & 0x3f; s['max_temp'] = max(s['max_temp'], r)
                        if r not in written: s['temps_read_before_write'].add(r)
                    else:
                        s['float_consts'].add(reg)
                if export:
                    if vmask or smask or srel:
                        s['exports'].add(vdst)
                        if vdst == 32: s['memexport'] = True
                else:
                    if vmask: written.add(vdst); s['max_temp'] = max(s['max_temp'], vdst)
                    if smask: written.add(sdst); s['max_temp'] = max(s['max_temp'], sdst)
        # end of exec
    # summarize
    ex = sorted(s['exports'])
    if s['type'] == 'vs':
        s['interpolators'] = [e for e in ex if e < 16]
        s['export_position'] = 62 in ex
        s['export_pointsize'] = 63 in ex
        s['export_mem'] = sorted(e for e in ex if 32 <= e <= 37)
    else:
        s['color_targets'] = [e for e in ex if e < 4]
        s['export_depth'] = 61 in ex
        s['export_mem'] = sorted(e for e in ex if 32 <= e <= 37)
        s['interpolators'] = sorted(s['temps_read_before_write'])
    fc = sorted(s['float_consts'])
    ranges = []
    for c in fc:
        if ranges and c == ranges[-1][1] + 1: ranges[-1][1] = c
        else: ranges.append([c, c])
    s['float_const_ranges'] = ranges
    s['float_const_count'] = len(fc)
    s['float_const_max'] = fc[-1] if fc else -1
    s['bool_consts'] = sorted(s['bool_consts']); s['loop_consts'] = sorted(s['loop_consts'])
    s['exports'] = ex; s['notes'] = sorted(s['notes'])
    s['vec_ops'] = dict(s['vec_ops']); s['sca_ops'] = dict(s['sca_ops']); s['fetch_ops'] = dict(s['fetch_ops'])
    s['vfetch_slots'] = sorted(set(v['slot'] for v in s['vfetch']))
    s['tfetch_slots'] = sorted(set(t['slot'] for t in s['tfetch']))
    s['cf'] = ' '.join(s['cf'])
    del s['float_consts']; del s['temps_read_before_write']
    s['vertex_layout'] = [(v['slot'], v['format'], v['stride'], v['offset'], 's' if v['signed'] else 'u', 'n' if v['normalized'] else 'i') for v in s['vfetch']] if s['type'] == 'vs' else []
    return s

def main():
    shaders, hdr = load()
    out = {}; errs = []
    for hsh, t, u in shaders:
        try:
            out[hsh] = decode_shader(hsh, t, u)
        except Exception as e:
            errs.append((hsh, repr(e)))
    print('decoded', len(out), 'errors', len(errs), 'header', hdr.hex())
    for e in errs: print('ERR', e)
    vs = [s for s in out.values() if s['type'] == 'vs']; ps = [s for s in out.values() if s['type'] == 'ps']
    print('vs', len(vs), 'ps', len(ps))
    print('vs with tfetch', sum(1 for s in vs if s['tfetch']), 'vs memexport', sum(1 for s in vs if s['memexport']),
          'ps memexport', sum(1 for s in ps if s['memexport']))
    print('vs without position export', sum(1 for s in vs if not s['export_position']))
    print('ps without color export', sum(1 for s in ps if not s['color_targets']))
    bad = [s['hash'] for s in out.values() if [e for e in s['exports'] if 32 <= e <= 37] and 'memory' not in s['allocs']]
    print('exports to eA/eM without memory alloc:', len(bad), bad[:5])
    print('max exec count seen', max(int(c) for s in out.values() for c in [s.get('max_exec_count', 0)]))
    print('exec_out_of_range', sum(1 for s in out.values() if 'exec_out_of_range' in s['notes']))
    print('vs interp count hist', collections.Counter(len(s['interpolators']) for s in vs).most_common())
    print('ps color targets hist', collections.Counter(tuple(s['color_targets']) for s in ps).most_common())
    print('ps depth export', sum(1 for s in ps if s['export_depth']))
    print('bool const users', sum(1 for s in out.values() if s['bool_consts']), 'loop users', sum(1 for s in out.values() if s['loop_consts']))
    print('notes hist', collections.Counter(n for s in out.values() for n in s['notes']).most_common())
    print('c255 users vs', sum(1 for s in vs if 255 in [c for r in s['float_const_ranges'] for c in range(r[0], r[1]+1)]), 'ps', sum(1 for s in ps if 255 in [c for r in s['float_const_ranges'] for c in range(r[0], r[1]+1)]))
    print('vs layouts', len(set(tuple(s['vertex_layout']) for s in vs)))
    print('vs slots hist', collections.Counter(tuple(s['vfetch_slots']) for s in vs).most_common(12))
    print('ps tfetch count hist', collections.Counter(len(s['tfetch']) for s in ps).most_common())
    print('ps tfetch slots hist', collections.Counter(tuple(s['tfetch_slots']) for s in ps).most_common(15))
    print('vs tfetch slots hist', collections.Counter(tuple(s['tfetch_slots']) for s in vs if s['tfetch']).most_common(15))
    print('float const max hist vs', collections.Counter(s['float_const_max'] for s in vs).most_common(10))
    print('float const max hist ps', collections.Counter(s['float_const_max'] for s in ps).most_common(10))
    print('allocs hist', collections.Counter(tuple(s['allocs']) for s in out.values()).most_common(10))
    for s in out.values():
        if s['memexport'] or s['export_mem']: print('MEMEXPORT', s['type'], s['hash'], 'exports', s['exports'], 'allocs', s['allocs'], 'ninstr', s['ninstr'], 'tfetch', [(t['slot'], t['dim']) for t in s['tfetch']], 'vfetch', s['vertex_layout'], 'consts', s['float_const_ranges'], 'bool', s['bool_consts'], 'loop', s['loop_consts'], 'cf', s['cf'][:200])
    json.dump(out, open(sys.argv[1], 'w'), indent=0, sort_keys=True)

if __name__ == '__main__':
    main()
