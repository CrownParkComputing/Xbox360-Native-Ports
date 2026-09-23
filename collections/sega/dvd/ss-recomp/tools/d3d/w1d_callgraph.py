#!/usr/bin/env python3
"""W1-d: build a call graph + string-reference map from the rexglue generated
sources (DEFINE_REX_FUNC blocks with original PPC asm in // comments).
Output: docs/d3d/w1d_callgraph.json {funcs:{va:{calls:[..], strs:[..], ninsn, maxaddr, has_vt:bool}}}
"""
import re, glob, json, sys, os
ROOT=os.path.expanduser('~/ss-recomp')
files=sorted(glob.glob(ROOT+'/generated/splitsecond1/splitsecond_recomp.*.cpp'))
hdr=re.compile(r'^DEFINE_REX_FUNC\(sub_([0-9A-F]{8})\)')
asm=re.compile(r'^\t// (\S+)\s*(.*)$')
funcs={}
cur=None
for f in files:
    for line in open(f,errors='replace'):
        m=hdr.match(line)
        if m:
            cur={'calls':[],'tails':[],'strs':[],'ninsn':0,'maxaddr':0,'lis':{},'va':int(m.group(1),16)}
            funcs[int(m.group(1),16)]=cur
            continue
        if cur is None: continue
        if line.startswith('\tctx.lr = 0x'):
            a=int(line[12:20],16)
            if a>cur['maxaddr']: cur['maxaddr']=a
            continue
        m=asm.match(line)
        if not m: continue
        op,args=m.group(1),m.group(2)
        cur['ninsn']+=1
        if op=='bl' or op=='b':
            try: t=int(args,16)
            except ValueError: continue
            if op=='bl': cur['calls'].append(t)
            else: cur['tails'].append(t)
            continue
        if op=='lis':
            r,v=args.split(',',1)
            try: cur['lis'][r]=int(v)<<16
            except ValueError: pass
            continue
        if op in ('addi','ori','addic','la'):
            p=args.split(',')
            if len(p)==3 and p[1] in cur['lis']:
                try:
                    v=int(p[2]); base=cur['lis'][p[1]]
                    ea=(base+v)&0xffffffff if op!='ori' else base|v
                    if 0x88000000<=ea<0x8B000000: cur['strs'].append(ea)
                except ValueError: pass
            continue
        # loads/stores via lis base also count as data refs
        m2=re.match(r'^(-?\d+)\((r\d+)\)$',args.split(',')[-1]) if ',' in args else None
        if m2 and m2.group(2) in cur['lis'] and op[0] in 'ls':
            ea=(cur['lis'][m2.group(2)]+int(m2.group(1)))&0xffffffff
            if 0x88000000<=ea<0x8B000000: cur['strs'].append(ea)
# resolve tail calls: a 'b' target that is another function's start is a call edge
starts=sorted(funcs); import bisect
for va,d in funcs.items():
    for t in d['tails']:
        if t in funcs and t!=va: d['calls'].append(t)
out={}
for va,d in funcs.items():
    out['%08X'%va]={'calls':sorted(set('%08X'%c for c in d['calls'])),'refs':sorted(set('%08X'%s for s in d['strs'])),'ninsn':d['ninsn'],'maxaddr':'%08X'%d['maxaddr']}
json.dump(out,open(ROOT+'/docs/d3d/w1d_callgraph.json','w'))
print(len(out),'functions')
