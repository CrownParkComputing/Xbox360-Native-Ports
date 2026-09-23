#!/usr/bin/env python3
"""W1-b field-access census over rexglue-generated PPC asm comments.

Reads every DEFINE_REX_FUNC body in generated/splitsecond1/*.cpp, runs a
linear taint pass (args r3..r10, globals via lis/addi, stack slots, one to
three levels of pointer deref) and records every load/store as
(function, base-tag, offset, width, kind).  Also records call sites with the
tags of r3..r10 so a later pass can propagate object roles through the call
graph.  Output: docs/d3d/w1b_census.json (large).
"""
import re, sys, os, json, glob, collections

GEN = os.path.expanduser('~/ss-recomp/generated/splitsecond1')
OUT = os.path.expanduser('~/ss-recomp/docs/d3d/w1b_census.json')

FUNC_RE = re.compile(r'^DEFINE_REX_FUNC\((sub_[0-9A-Fa-f]+)\)')
ASM_RE = re.compile(r'^\s*//\s*([a-z0-9_.+-]+)\s*(.*?)\s*$')
MEM_RE = re.compile(r'^(-?\d+)\((r\d+)\)$')
REG_RE = re.compile(r'^r(\d+)$')

LOADS = {'lbz':1,'lhz':2,'lha':2,'lwz':4,'lwa':4,'ld':8,'lfs':4,'lfd':8,
         'lbzx':1,'lhzx':2,'lhax':2,'lwzx':4,'lwax':4,'ldx':8,'lfsx':4,'lfdx':8,
         'lbzu':1,'lhzu':2,'lhau':2,'lwzu':4,'ldu':8,'lfsu':4,'lfdu':8,
         'lbzux':1,'lhzux':2,'lwzux':4,'ldux':8,'lfsux':4,'lfdux':8,
         'lwarx':4,'ldarx':8,'lhbrx':2,'lwbrx':4,'ldbrx':8,
         'lvx':16,'lvxl':16,'lvlx':16,'lvrx':16,'lvewx':4,'lvehx':2,'lvebx':1,
         'lvx128':16,'lvlx128':16,'lvrx128':16,'lvlxl128':16,'lvrxl128':16,'lvewx128':4,
         'lvsl':0,'lvsr':0,'lvsl128':0,'lvsr128':0}
STORES = {'stb':1,'sth':2,'stw':4,'std':8,'stfs':4,'stfd':8,'stfiwx':4,
          'stbx':1,'sthx':2,'stwx':4,'stdx':8,'stfsx':4,'stfdx':8,
          'stbu':1,'sthu':2,'stwu':4,'stdu':8,'stfsu':4,'stfdu':8,
          'stbux':1,'sthux':2,'stwux':4,'stdux':8,'stfsux':4,'stfdux':8,
          'stwcx':4,'stdcx':8,'sthbrx':2,'stwbrx':4,'stdbrx':8,
          'stvx':16,'stvxl':16,'stvlx':16,'stvrx':16,'stvewx':4,'stvehx':2,'stvebx':1,
          'stvx128':16,'stvlx128':16,'stvrx128':16,'stvlxl128':16,'stvrxl128':16,'stvewx128':4}
NODEST = {'cmpw','cmpwi','cmplw','cmplwi','cmpd','cmpdi','cmpld','cmpldi','fcmpu','fcmpo',
          'mtlr','mtctr','mtcr','mtcrf','mtmsrd','mtmsr','mtxer','mtspr','mtfsf','mtfsb0','mtfsb1','mtvscr',
          'sync','lwsync','eieio','isync','dcbt','dcbtst','dcbz','dcbz128','dcbf','dcbst','icbi','nop','twi','tw','td','tdi',
          'sc','blr','bctr','bctrl','bl','b','beq','bne','blt','bgt','ble','bge','bdnz','bdz','bso','bns','bun','bnu',
          'bl+','bl-','b+','b-','beq+','bne+','blt+','bgt+','ble+','bge+','beq-','bne-','blt-','bgt-','ble-','bge-',
          'bdnz+','bdnz-','bdz+','bdz-','bdnzt','bdnzf','bdzt','bdzf','bc','bca','bcl','bclr','bcctr','crand','cror','crxor','crnor','crandc','crorc','creqv','crnand','crclr','crset','crmove','crnot','mcrf','mcrxr','mcrfs','rfid','attn','tlbie','dcbi'}

def sext16(v): return v-65536 if v>=32768 else v
def u32(v): return v & 0xFFFFFFFF

class Tag:
    __slots__=('root','derefs','delta')
    def __init__(s,root,derefs=(),delta=0): s.root=root; s.derefs=derefs; s.delta=delta
    def base_key(s):
        return s.root + ''.join('->%s'%d for d in s.derefs)
    def __str__(s):
        b=s.base_key()
        return b if s.delta==0 else '%s%+d'%(b,s.delta)
    def plus(s,d): return Tag(s.root,s.derefs,s.delta+d)
    def deref(s,off):
        if len(s.derefs)>=3: return None
        return Tag(s.root,s.derefs+(s.delta+off,),0)

def parse_ops(opstr):
    if not opstr: return []
    return [o.strip() for o in opstr.split(',')]

def regnum(op):
    m=REG_RE.match(op); return int(m.group(1)) if m else None

def main():
    files=sorted(glob.glob(os.path.join(GEN,'splitsecond_recomp.*.cpp')))
    funcs={}   # name -> list of (mnem, ops)
    order=[]
    for fn in files:
        cur=None
        with open(fn,'r',errors='replace') as f:
            for line in f:
                if cur is None:
                    m=FUNC_RE.match(line)
                    if m:
                        cur=m.group(1); funcs[cur]=[]; order.append((cur,os.path.basename(fn)))
                    continue
                if line.startswith('}'):
                    cur=None; continue
                m=ASM_RE.match(line)
                if m and line.lstrip().startswith('//'):
                    funcs[cur].append((m.group(1),m.group(2)))
    sys.stderr.write('parsed %d functions\n'%len(funcs))
    vas=sorted(int(n[4:],16) for n in funcs)
    va_index={v:i for i,v in enumerate(vas)}
    # detect savegprlr/restgprlr helpers: bodies only of std/ld r14..r31 to r1, stw/lwz r12, blr, mtlr
    helpers=set()
    for name,asm in funcs.items():
        if not asm or len(asm)>40: continue
        ok=True
        for mn,ops in asm:
            mn0=mn.rstrip('.')
            if mn0 in ('std','ld','stw','lwz'):
                if not ops.endswith('(r1)'): ok=False;break
            elif mn0 in ('blr','mtlr','mflr'): pass
            else: ok=False;break
        if ok: helpers.add(int(name[4:],16))
    # also: functions that fall through into such helpers (savegprlr_N entries share one body) -
    # rexglue emits each entry as its own function starting at std rN,-x(r1) so covered.
    sys.stderr.write('helpers: %d\n'%len(helpers))

    result={}
    for name,asm in funcs.items():
        va=int(name[4:],16)
        i=va_index[va]
        end=vas[i+1] if i+1<len(vas) else va+0x100000
        regs={}
        for a in range(3,11): regs[a]=Tag('a%d'%a)
        regs[1]=Tag('SP')
        sp=0
        stack={}
        acc=[]; calls=[]; tchecks=[]; consts=collections.Counter(); notes=[]; absc=set(); dirty=[]
        last_load_of={}  # reg -> (tag,off) for typecheck detection
        for li,(mn,opstr) in enumerate(asm):
            mn0=mn.rstrip('.')
            ops=parse_ops(opstr)
            # --- loads
            if mn0 in LOADS or mn0 in STORES:
                isload = mn0 in LOADS
                width = (LOADS if isload else STORES)[mn0]
                if width==0: continue
                dst_or_src=ops[0]
                if len(ops)==2 and MEM_RE.match(ops[1]):
                    off,rb=MEM_RE.match(ops[1]).groups(); off=int(off); rb=regnum(rb); idx=None
                elif len(ops)==3:
                    ra=regnum(ops[1]); rb2=regnum(ops[2])
                    if ra==0 or ra is None: rb=rb2; idx=None; off=0
                    else:
                        rb=ra
                        t=regs.get(rb2)
                        if t is not None and t.root=='C': off=t.delta; idx=None
                        else:
                            # maybe base is the constant one
                            ta=regs.get(ra)
                            if ta is not None and ta.root=='C' and t is not None:
                                rb=rb2; off=ta.delta; idx=None
                            else: off=None; idx=rb2
                else:
                    continue
                bt=regs.get(rb)
                if rb==1:
                    if off is not None:
                        key=sp+off
                        if isload:
                            d=regnum(dst_or_src)
                            if d is not None:
                                t=stack.get(key)
                                if t is not None: regs[d]=t
                                else: regs.pop(d,None)
                        else:
                            s=regnum(dst_or_src)
                            if s is not None and s in regs: stack[key]=regs[s]
                            else: stack.pop(key,None)
                        if mn0=='stwu':
                            sp+=off
                    else:
                        if isload:
                            d=regnum(dst_or_src)
                            if d is not None: regs.pop(d,None)
                    continue
                if bt is not None and bt.root not in ('SP',):
                    if bt.root=='H' or bt.root=='C':
                        # absolute address
                        if off is not None:
                            addr=u32(bt.delta+off)
                            acc.append({'base':'G','off':addr,'w':width,'k':'r' if isload else 'w','mn':mn0,'i':li})
                            if isload:
                                d=regnum(dst_or_src)
                                if d is not None:
                                    regs[d]=Tag('G%08X'%addr)
                                    last_load_of[d]=('G',addr)
                            continue
                        else:
                            if isload:
                                d=regnum(dst_or_src)
                                if d is not None: regs.pop(d,None)
                            continue
                    rec={'base':bt.base_key(),'off':(bt.delta+off) if off is not None else None,
                         'w':width,'k':'r' if isload else 'w','mn':mn0,'i':li}
                    if off is None:
                        rec['idx']=str(regs.get(idx)) if regs.get(idx) is not None else 'r%d'%idx
                        rec['delta']=bt.delta
                    acc.append(rec)
                    if isload:
                        d=regnum(dst_or_src)
                        if d is not None:
                            nt=bt.deref(off) if off is not None else None
                            if nt is not None: regs[d]=nt
                            else: regs.pop(d,None)
                            if off is not None: last_load_of[d]=(bt.base_key(),bt.delta+off)
                    if mn0.endswith('u') or mn0.endswith('ux'):
                        if off is not None: regs[rb]=bt.plus(off)
                        else: regs.pop(rb,None)
                else:
                    if isload:
                        d=regnum(dst_or_src)
                        if d is not None: regs.pop(d,None); last_load_of.pop(d,None)
                continue
            # --- calls / branches
            if mn0 in ('bl','bl+','bl-'):
                tgt=int(ops[0],16)
                prev=asm[li-1] if li>0 else ('','')
                if tgt in helpers or (prev[0]=='mflr' and prev[1]=='r12') or tgt not in va_index: continue
                calls.append({'t':tgt,'args':{('r%d'%a):str(regs[a]) for a in range(3,11) if a in regs},'i':li})
                for a in list(regs):
                    if a==0 or 3<=a<=12: regs.pop(a,None)
                regs[3]=Tag('R%08X'%tgt)
                continue
            if mn0 in ('bctrl',):
                calls.append({'t':None,'args':{('r%d'%a):str(regs[a]) for a in range(3,11) if a in regs},'i':li})
                for a in list(regs):
                    if a==0 or 3<=a<=12: regs.pop(a,None)
                regs[3]=Tag('Rind')
                continue
            if mn0 in ('b','b+','b-'):
                tgt=int(ops[0],16)
                prev=asm[li-1] if li>0 else ('','')
                if not (va<=tgt<end) and tgt not in helpers and tgt in va_index and not (prev[0]=='addi' and prev[1].startswith('r1,r1,')):
                    calls.append({'t':tgt,'args':{('r%d'%a):str(regs[a]) for a in range(3,11) if a in regs},'i':li,'tail':True})
                continue
            if mn0 in NODEST or mn0.startswith('b') and mn0 not in ('bctrl',):
                # branch-family, no dest
                if mn0 in ('cmplwi','cmpwi','cmpldi','cmpdi'):
                    # typecheck detection: cmplwi crX,rY,K where rY = (lwz off 0 of tag) & 0xF
                    try:
                        r=regnum(ops[-2]); k=int(ops[-1])
                        src=last_load_of.get(('m',r))
                        if src is not None:
                            tchecks.append({'tag':src[0],'off':src[1],'k':k,'i':li})
                    except Exception: pass
                continue
            # --- ALU with dest
            d=regnum(ops[0]) if ops else None
            if d is None:
                continue
            src=regnum(ops[1]) if len(ops)>1 else None
            st=regs.get(src) if src is not None else None
            if mn0 in ('mr',):
                if st is not None: regs[d]=st
                else: regs.pop(d,None)
                if src in last_load_of: last_load_of[d]=last_load_of[src]
                continue
            if mn0=='or' and len(ops)==3 and ops[1]==ops[2]:
                if st is not None: regs[d]=st
                else: regs.pop(d,None)
                continue
            if mn0=='li':
                v=int(ops[1]); regs[d]=Tag('C',(),v); consts[v]+=1; continue
            if mn0=='lis':
                v=int(ops[1]); regs[d]=Tag('H',(),(v&0xFFFF)<<16); continue
            if mn0=='addi' or mn0=='addic':
                v=int(ops[2])
                if src==1: regs[d]=Tag('SP',(),sp+v); 
                elif st is not None:
                    regs[d]=st.plus(v)
                    if st.root=='H' and len(absc)<400: absc.add(u32(st.delta+v))
                else: regs.pop(d,None)
                if src==1 and d==1: sp+=v
                continue
            if mn0=='addis':
                v=int(ops[2])
                if st is not None: regs[d]=st.plus((v&0xFFFF)<<16)
                else: regs.pop(d,None)
                continue
            if mn0 in ('ori','oris') and src in last_load_of and last_load_of[src][1] in (0,8,16,24,32,40):
                v=int(ops[2])<<(16 if mn0=='oris' else 0)
                dirty.append({'tag':last_load_of[src][0],'off':last_load_of[src][1],'bits':v,'i':li})
                last_load_of[d]=last_load_of[src]; regs.pop(d,None); continue
            if mn0=='or' and len(ops)==3:
                ra=regnum(ops[1]); rb=regnum(ops[2])
                for x,y in ((ra,rb),(rb,ra)):
                    if x in last_load_of and last_load_of[x][1] in (0,8,16,24,32,40) and regs.get(y) is not None and regs[y].root=='C':
                        dirty.append({'tag':last_load_of[x][0],'off':last_load_of[x][1],'bits':regs[y].delta,'i':li})
                        last_load_of[d]=last_load_of[x]
                regs.pop(d,None); continue
            if mn0 in ('sldi','rldicr') and st is not None and st.root=='C':
                regs[d]=Tag('C',(),(st.delta<<int(ops[2]))&0xFFFFFFFFFFFFFFFF); continue
            if mn0=='ori':
                v=int(ops[2])
                if st is not None:
                    regs[d]=st.plus(v)
                    if st.root=='H' and len(absc)<400: absc.add(u32(st.delta+v))
                else: regs.pop(d,None)
                continue
            if mn0=='add' and len(ops)==3:
                ta=regs.get(regnum(ops[1])); tb=regs.get(regnum(ops[2]))
                if ta is not None and tb is not None and tb.root=='C': regs[d]=ta.plus(tb.delta)
                elif ta is not None and tb is not None and ta.root=='C': regs[d]=tb.plus(ta.delta)
                elif ta is not None and tb is None and ta.root not in ('C','H'): regs[d]=Tag(ta.root,ta.derefs+('idx',),0) if len(ta.derefs)<3 else None
                elif tb is not None and ta is None and tb.root not in ('C','H'): regs[d]=Tag(tb.root,tb.derefs+('idx',),0) if len(tb.derefs)<3 else None
                else: regs.pop(d,None)
                if regs.get(d) is None: regs.pop(d,None)
                continue
            # type-check helper: clrlwi rD,rS,28 / andi. rD,rS,15 / rlwinm rD,rS,0,28,31 after lwz rS,0(tag)
            if (mn0=='clrlwi' and len(ops)==3 and ops[2]=='28') or (mn0=='andi' and len(ops)==3 and ops[2]=='15') or (mn0=='rlwinm' and len(ops)==5 and ops[2:]==['0','28','31']):
                if src in last_load_of and last_load_of[src][1]==0:
                    last_load_of[('m',d)]=last_load_of[src]
            elif ('m',d) in last_load_of: last_load_of.pop(('m',d),None)
            regs.pop(d,None); last_load_of.pop(d,None)
        result[name]={'va':va,'acc':acc,'calls':calls,'tchecks':tchecks,'n':len(asm),
                      'consts':{str(k):v for k,v in consts.items() if k in (92,95)},'absc':sorted(absc),'dirty':dirty}
    with open(OUT,'w') as f: json.dump(result,f)
    sys.stderr.write('wrote %s (%d funcs)\n'%(OUT,len(result)))

if __name__=='__main__': main()
