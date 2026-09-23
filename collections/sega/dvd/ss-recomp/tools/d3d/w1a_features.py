#!/usr/bin/env python3
"""Per-function feature summary for the D3D band (entry points by default; --all for every band fn)."""
import sys, os, re, json, collections
sys.path.insert(0, os.path.dirname(__file__))
from w1a_lib import *
LO, HI = 0x888D19C0, 0x888FA3E0
F = load(); C = callers_map(F)
band = [v for v in sorted(F) if in_band(v, LO, HI)]
# register shadow map (device offsets -> GPU register)
GROUPS = [(10548, 0x2200, 12), (10528, 0x2180, 5), (10368, 0x2000, 16), (10444, 0x2100, 21), (10596, 0x2280, 21), (10680, 0x2300, 38), (10832, 0x2380, 8), (10112, 0x4900, 64), (1920, 0x4000, 1024), (6016, 0x4400, 1024)]
regnames = {}
for line in open(os.path.expanduser('~/rexglue-vmx/include/rex/graphics/register_table.inc')):
    m = re.match(r'XE_GPU_REGISTER\((0x[0-9A-Fa-f]+), \w+, (\w+)\)', line)
    if m: regnames[int(m.group(1), 16)] = m.group(2)
def shadow(off):
    for base, reg, n in GROUPS:
        if base <= off < base + 4*n:
            r = reg + (off-base)//4
            return '%s(0x%X)' % (regnames.get(r, '?'), r)
    return None
PM4 = {0x10:'NOP',0x21:'REG_RMW',0x22:'DRAW_INDX',0x23:'VIZ_QUERY',0x25:'SET_STATE',0x26:'WAIT_FOR_IDLE',0x27:'IM_LOAD',0x2b:'IM_LOAD_IMMEDIATE',0x2c:'IM_STORE',0x2d:'SET_CONSTANT',0x2e:'LOAD_CONSTANT_CONTEXT',0x2f:'LOAD_ALU_CONSTANT',0x36:'DRAW_INDX_2',0x3b:'INVALIDATE_STATE',0x3c:'WAIT_REG_MEM',0x3d:'MEM_WRITE',0x3e:'REG_TO_MEM',0x3f:'INDIRECT_BUFFER',0x37:'INDIRECT_BUFFER_PFD',0x44:'COND_EXEC',0x45:'COND_WRITE',0x46:'EVENT_WRITE',0x48:'?48',0x4a:'SET_SHADER_BASES',0x54:'INTERRUPT',0x58:'EVENT_WRITE_SHD',0x5a:'EVENT_WRITE_EXT',0x5b:'EVENT_WRITE_ZPD',0x60:'SET_BIN_MASK_LO',0x61:'SET_BIN_MASK_HI',0x62:'SET_BIN_SELECT_LO',0x63:'SET_BIN_SELECT_HI'}
rs_table = {}
sampler_table = {}
import struct
d = open(os.path.expanduser('~/ports/splitsecond/splitsecond/assets/image.bin'), 'rb').read()
def dw(a): return struct.unpack_from('>I', d, a-0x88000000)[0]
for i in range(91):
    a = 0x88EA3F68 + 12*i
    rs_table[dw(a)] = ('GetRenderState', i); rs_table[dw(a+4)] = ('SetRenderState', i)
for i in range(20):
    a = 0x88EA43B0 + 12*i
    sampler_table[dw(a)] = ('GetSamplerState', i); sampler_table[dw(a+4)] = ('SetSamplerState', i)

def features(v):
    f = F[v]; asm = f['asm']
    cl = C.get(v, [])
    ins = sorted(set(c for c in cl if in_band(c, LO, HI))); outs = sorted(set(c for c in cl if not in_band(c, LO, HI)))
    ft = {'va': v, 'ninsn': f['ninsn'], 'callers_in': len(ins), 'callers_out': len(outs), 'callers_sample': outs[:6] + ins[:3],
          'arity': f['arity'], 'imports': f['imports'], 'strings': [s[1][:60] for s in f['strings']],
          'calls': f['calls'], 'tail': f['tail_calls'], 'indirect': f['indirect']}
    hdrs = []
    for c in f['consts']:
        x = int(c, 16)
        if (x >> 30) == 3:
            op = (x >> 8) & 0x7F; cnt = ((x >> 16) & 0x3FFF) + 1
            hdrs.append('%s[%d]%s' % (PM4.get(op, '?%02X' % op), cnt, '+P' if x & 1 else ''))
    ft['pm4'] = hdrs
    regs = set()
    for a in asm:
        m = re.match(r'li r\d+,(-?\d+)$', a)
        if m:
            x = int(m.group(1))
            if 0x2000 <= x < 0x5000: regs.add('%s(0x%X)' % (regnames.get(x, '?'), x))
    ft['reg_imm'] = sorted(regs)
    # device field accesses relative to r3/r31 (only first 2 regs likely device)
    rd, wr = collections.Counter(), collections.Counter()
    for a in asm:
        m = re.match(r'(st\w+|l\w+) r?\d*,?\S*?(-?\d+)\((r\d+)\)', a)
        m = re.match(r'(\w+) (?:r|f|v)?\d+,(-?\d+)\((r\d+)\)', a)
        if not m: continue
        mn, off, base = m.group(1), int(m.group(2)), m.group(3)
        if mn.startswith('st'): wr[(base, off)] += 1
        elif mn.startswith('l'): rd[(base, off)] += 1
    ft['stores'] = sorted(set('%s+%d%s' % (b, o, ('=' + shadow(o)) if shadow(o) else '') for (b, o) in wr))[:40]
    ft['loads'] = sorted(set('%s+%d%s' % (b, o, ('=' + shadow(o)) if shadow(o) else '') for (b, o) in rd))[:40]
    ft['dirty'] = [a for a in asm if re.match(r'(ori|oris) r11,r11,\d+', a)] and [a for a in asm if re.match(r'(ori|oris) r\d+,r\d+,\d+', a) and 'r11' in a][:6]
    ft['atomic'] = sum(1 for a in asm if a.startswith('lwarx') or a.startswith('stwcx'))
    ft['fp'] = sum(1 for a in asm if a.startswith('f') or a.startswith('lfs') or a.startswith('stfs'))
    ft['vmx'] = sum(1 for a in asm if re.match(r'(v|lv|stv)', a))
    ft['mfmsr'] = sum(1 for a in asm if a.startswith('mfmsr'))
    ft['bctr'] = sum(1 for a in asm if a.startswith('bctr'))
    x = int(v, 16)
    if x in rs_table: ft['table'] = 'RS:%s[%d]' % rs_table[x]
    if x in sampler_table: ft['table'] = 'SAMP:%s[%d]' % sampler_table[x]
    return ft

if __name__ == '__main__':
    sel = band if '--all' in sys.argv else [v for v in band if any(not in_band(c, LO, HI) for c in C.get(v, []))]
    out = {v: features(v) for v in sel}
    json.dump(out, open(os.path.expanduser('~/ss-recomp/docs/d3d/w1a_features%s.json' % ('_all' if '--all' in sys.argv else '')), 'w'), indent=0)
    for v, ft in out.items():
        print('== %s n=%d in=%d out=%d arity=%s%s %s' % (v, ft['ninsn'], ft['callers_in'], ft['callers_out'], ft['arity']['gpr'], (' f'+str(ft['arity']['fpr'])) if ft['arity']['fpr'] else '', ft.get('table','')))
        if ft['imports']: print('   imp', ft['imports'])
        if ft['pm4']: print('   pm4', ft['pm4'])
        if ft['reg_imm']: print('   reg', ft['reg_imm'][:12])
        if ft['strings']: print('   str', ft['strings'][:3])
        print('   st', ft['stores'][:18])
        print('   ld', ft['loads'][:18])
        if ft['dirty']: print('   dirty', ft['dirty'])
        print('   calls', ft['calls'][:10], 'tail', ft['tail'], 'ind', ft['indirect'], 'atomic', ft['atomic'], 'fp', ft['fp'], 'vmx', ft['vmx'], 'bctr', ft['bctr'])
        print('   callers', ft['callers_sample'])
