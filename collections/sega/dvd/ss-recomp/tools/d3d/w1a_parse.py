#!/usr/bin/env python3
"""W1-a: parse rexglue generated sources into a per-function facts DB.

Output: docs/d3d/w1a_funcs.json  {va_hex: {file, end, ninsn, calls[], imports[], indirect,
 consts[], strings[], arity{gpr,fpr,vmx}, insns_sample, tail_calls[], mnemonics[]}}
Static only; reads generated/splitsecond1/splitsecond_recomp.*.cpp.
"""
import re, os, sys, json, glob, collections

ROOT = os.path.expanduser('~/ss-recomp')
GEN = os.path.join(ROOT, 'generated/splitsecond1')
OUT = os.path.join(ROOT, 'docs/d3d/w1a_funcs.json')

re_def = re.compile(r'^DEFINE_REX_FUNC\(sub_([0-9A-F]{8})\)')
re_asm = re.compile(r'^\t// ([a-z][a-z0-9_.+-]*)\s*(.*)$')
re_call = re.compile(r'^\t(sub_[0-9A-F]{8}|__imp__\w+|__savegprlr_\d+|__restgprlr_\d+|__savefpr_\d+|__restfpr_\d+|__savevmx_\d+|__restvmx_\d+)\(ctx, base\);')
re_ind = re.compile(r'REX_CALL_INDIRECT_FUNC|REX_CALL_INDIRECT|rex_indirect_target_|REX_CALL_INDIRECT_FUNC_LOCAL|PPC_CALL_INDIRECT')
re_reg = re.compile(r'\br(\d+)\b')
re_freg = re.compile(r'\bf(\d+)\b')
re_vreg = re.compile(r'\bv(\d+)\b')
re_loc = re.compile(r'^loc_([0-9A-F]{8}):')

STORE_MN = ('stw','stb','sth','std','stfs','stfd','stvx','stwx','stbx','sthx','stdx','stfsx','stfdx','stwu','stwux','stdu','stmw','stswi','stwbrx','sthbrx','stvewx','stvlx','stvrx','stvlxl','stvrxl','stvehx','stvebx','stfiwx','stvx128','stvlx128','stvrx128','stvewx128','stwcx.','stdcx.','stvxl','stvxl128')

def sext16(v):
    v &= 0xffff
    return v - 0x10000 if v & 0x8000 else v

def parse_file(path, funcs):
    cur = None
    with open(path, 'r', errors='replace') as f:
        for line in f:
            m = re_def.match(line)
            if m:
                va = int(m.group(1), 16)
                cur = funcs[va] = {
                    'file': os.path.basename(path), 'calls': [], 'imports': [], 'indirect': 0,
                    'consts': set(), 'strings': set(), 'ninsn': 0, 'maxaddr': va,
                    'mn': collections.Counter(), 'asm': [],
                    # arity tracking
                    'gpr_read_first': set(), 'gpr_written': set(),
                    'fpr_read_first': set(), 'fpr_written': set(),
                    'vr_read_first': set(), 'vr_written': set(),
                    'lis': {}, 'stack_frame': 0, 'ret_r3_set': False,
                    'bl_targets': [],
                }
                continue
            if cur is None:
                continue
            if line.startswith('}'):
                cur = None
                continue
            m = re_loc.match(line)
            if m:
                a = int(m.group(1), 16)
                if a > cur['maxaddr']: cur['maxaddr'] = a
                continue
            m = re_call.match(line)
            if m:
                t = m.group(1)
                if t.startswith('sub_'):
                    cur['calls'].append(int(t[4:], 16))
                elif t.startswith('__imp__'):
                    cur['imports'].append(t[7:])
                continue
            if re_ind.search(line):
                cur['indirect'] += 1
                continue
            m = re_asm.match(line)
            if not m:
                continue
            mn, ops = m.group(1), m.group(2).strip()
            cur['ninsn'] += 1
            cur['mn'][mn] += 1
            if len(cur['asm']) < 4000:
                cur['asm'].append(mn + ' ' + ops)
            opl = [o.strip() for o in ops.split(',')] if ops else []
            # register def/use
            if (mn.startswith('b') and not mn.startswith('bc')) or mn in ('blr','bctr','bctrl'):
                srcs = []; dsts = []
            elif mn.startswith('cmp') or mn in ('twi','tw','dcbz','dcbt','dcbst','dcbf','icbi','dcbz128','dcbtst','sync','isync','eieio','lwsync','mtctr','mtlr','mtspr','mtxer','mtcrf','mtfsf','mtfsb0','mtfsb1','mtvscr','mtocrf') or mn in STORE_MN:
                srcs = opl; dsts = []
            elif mn in ('mfctr','mflr','mfspr','mfxer','mfcr','mfmsr','mftb','mfvscr','mffs','mfocrf'):
                dsts = opl[:1]; srcs = []
            else:
                dsts = opl[:1]; srcs = opl[1:]
                if mn in ('lwzu','lbzu','lhzu','ldu','lfsu','lfdu','stwu','stdu','lhau','lwzux','ldux','lfsux','lfdux'):
                    # update forms write base too, keep simple
                    pass
            def touch(regs_src, regs_dst, rx, first, written, lo, hi):
                for s in regs_src:
                    for r in rx.findall(s):
                        r = int(r)
                        if lo <= r <= hi and r not in written:
                            first.add(r)
                for d in regs_dst:
                    for r in rx.findall(d):
                        r = int(r)
                        if lo <= r <= hi:
                            written.add(r)
            touch(srcs, dsts, re_reg, cur['gpr_read_first'], cur['gpr_written'], 3, 10)
            if mn.startswith(('lf','stf','f')) or 'f' in mn[:2]:
                touch(srcs, dsts, re_freg, cur['fpr_read_first'], cur['fpr_written'], 1, 13)
            if mn.startswith(('v','lv','stv')):
                touch(srcs, dsts, re_vreg, cur['vr_read_first'], cur['vr_written'], 1, 13)
            # constants via lis/addi/ori
            if mn == 'lis' and len(opl) == 2:
                try:
                    cur['lis'][opl[0]] = (int(opl[1], 0) & 0xffff) << 16
                except ValueError: pass
            elif mn in ('addi','ori','addic') and len(opl) == 3 and cur['lis'].get(opl[1]) is not None:
                try:
                    lo = int(opl[2], 0)
                except ValueError: lo = None
                if lo is not None:
                    hi = cur['lis'][opl[1]]
                    v = (hi + (lo if mn == 'addi' else (lo & 0xffff))) & 0xffffffff
                    cur['consts'].add(v)
                    if opl[0] != opl[1]:
                        cur['lis'].pop(opl[0], None)
            elif mn == 'stwu' and opl and opl[1].startswith('-'):
                try: cur['stack_frame'] = -int(opl[1].split('(')[0])
                except ValueError: pass
            if mn.startswith('b') and ops.startswith('0x'):
                try:
                    tgt = int(ops.split(',')[-1], 16)
                except ValueError:
                    tgt = None
                if tgt is not None and mn == 'b':
                    cur['bl_targets'].append(tgt)
            # lis dest overwritten by non-lis: invalidate
            if mn != 'lis' and dsts:
                for d in dsts:
                    if d in cur['lis'] and mn not in ('addi','ori'):
                        cur['lis'].pop(d, None)
            # last instruction address tracked via bl lr comments not available; use loc labels

def main():
    funcs = {}
    files = sorted(glob.glob(os.path.join(GEN, 'splitsecond_recomp.*.cpp')))
    for p in files:
        parse_file(p, funcs)
    # function end = next function start
    vas = sorted(funcs)
    for i, va in enumerate(vas):
        f = funcs[va]
        f['end'] = vas[i+1] if i+1 < len(vas) else va + f['ninsn']*4
    # strings
    strings = {}
    with open(os.path.join(ROOT, 'docs/d3d/engine_strings.txt'), errors='replace') as sf:
        for line in sf:
            line = line.rstrip('\n')
            try:
                off, s = line.strip().split(' ', 1)
            except ValueError:
                continue
            try: strings[0x88000000 + int(off, 16)] = s
            except ValueError: pass
    out = {}
    for va, f in funcs.items():
        strs = sorted(c for c in f['consts'] if c in strings)
        # tail 'b' targets outside [va,end) are tail calls
        tails = sorted(set(t for t in f['bl_targets'] if not (va <= t < f['end']) and t in funcs))
        out['%08X' % va] = {
            'file': f['file'], 'end': '%08X' % f['end'], 'ninsn': f['ninsn'],
            'calls': sorted(set('%08X' % c for c in f['calls'])),
            'tail_calls': ['%08X' % t for t in tails],
            'imports': sorted(set(f['imports'])), 'indirect': f['indirect'],
            'consts': sorted('%08X' % c for c in f['consts']),
            'strings': [[('%08X' % s), strings[s]] for s in strs],
            'arity': {'gpr': sorted(f['gpr_read_first']), 'fpr': sorted(f['fpr_read_first']), 'vr': sorted(f['vr_read_first'])},
            'stack_frame': f['stack_frame'],
            'mn': dict(f['mn']),
            'asm': f['asm'],
        }
    with open(OUT, 'w') as o:
        json.dump(out, o)
    print('functions', len(out), '->', OUT)

if __name__ == '__main__':
    main()
