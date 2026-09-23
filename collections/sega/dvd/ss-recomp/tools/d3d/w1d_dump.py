#!/usr/bin/env python3
"""Dump the original PPC asm comments of one or more sub_X from the generated sources,
annotating lis/addi string refs. Usage: w1d_dump.py VA [VA...] [-n MAXLINES]"""
import sys,re,glob,os,bisect
ROOT=os.path.expanduser('~/ss-recomp')
n=80
args=[a for a in sys.argv[1:]]
if '-n' in args: i=args.index('-n'); n=int(args[i+1]); del args[i:i+2]
strs={}
for line in open(ROOT+'/docs/d3d/engine_strings.txt',errors='replace'):
    off,_,s=line.strip().partition(' ')
    try: strs[0x88000000+int(off,16)]=s
    except: pass
idx={}
for f in glob.glob(ROOT+'/generated/splitsecond1/splitsecond_recomp.*.cpp'):
    for m in re.finditer(r'DEFINE_REX_FUNC\(sub_([0-9A-F]{8})\)',open(f,errors='replace').read()):
        idx[m.group(1)]=f
for va in args:
    va=va.upper().replace('0X','')
    f=idx.get(va)
    if not f: print('??',va); continue
    txt=open(f,errors='replace').read()
    s=txt.index('DEFINE_REX_FUNC(sub_%s)'%va); e=txt.index('\n}\n',s)
    print('=== sub_%s (%s)'%(va,os.path.basename(f)))
    lis={}; k=0
    for line in txt[s:e].split('\n'):
        if not line.startswith('\t// '): 
            if line.startswith('loc_'): print(line)
            continue
        op,_,a=line[4:].partition(' ')
        ann=''
        if op=='lis':
            r,v=a.split(','); lis[r]=int(v)<<16
        elif op in('addi','ori') and a.count(',')==2:
            d,r,v=a.split(',')
            if r in lis:
                ea=(lis[r]+int(v))&0xffffffff
                if ea in strs: ann='   ; "%s"'%strs[ea][:70]
                else: ann='   ; 0x%08X'%ea
        print('\t'+op+' '+a+ann); k+=1
        if k>=n: print('\t...'); break
