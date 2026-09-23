import sys,os,re,json,struct,glob,math
SP=os.path.dirname(os.path.abspath(__file__))
run=sys.argv[1]; bufs=os.path.join(run,'bufs')
fmts=json.load(open(os.path.join(SP,'vs_fetch.json')))
trace=[l for l in open(os.path.join(run,'trace.txt')) if 'draw=' in l]
def half(h):
    s=(h>>15)&1; e=(h>>10)&31; m=h&1023
    if e==0: v=(m/1024)*2**-14
    elif e==31: v=float('inf') if m==0 else float('nan')
    else: v=(1+m/1024)*2**(e-15)
    return -v if s else v
rows=[]
for l in trace:
    g=lambda k,d=None: (re.search(k+r'=([0-9A-Fx]+)',l) or [None,d])[1]
    di=int(g('draw')); cnt=int(g('count')); prim=int(g('prim')); vs=g('vs'); ibt=int(g('ibtype')); idxfmt=g('idxfmt')
    m=re.search(r'vf95 type=\d+ addr=0x([0-9A-F]+) size=(\d+)',l)
    if not m or cnt<64: continue
    addr=m.group(1); size=int(m.group(2))
    f=fmts.get(vs); 
    if not f: continue
    pos=f[0]; ptype=pos[1]; stride=pos[3]*4
    vbf=glob.glob(f'{bufs}/s*_d{di}_vf95_{addr}.bin'); ibf=glob.glob(f'{bufs}/s*_d{di}_ib_*.bin')
    if not vbf: continue
    vb=open(vbf[0],'rb').read()
    nverts=len(vb)//stride if stride else 0
    if ibf and ibt==1:
        ib=open(ibf[0],'rb').read()
        if idxfmt=='0': idx=[x for x in struct.unpack('>%dH'%(len(ib)//2),ib[:len(ib)//2*2])][:cnt]; reset=0xFFFF
        else: idx=[x for x in struct.unpack('>%dI'%(len(ib)//4),ib[:len(ib)//4*4])][:cnt]; reset=0xFFFFFFFF
        idx=[i for i in idx if i!=reset]
    else:
        idx=list(range(min(cnt,nverts)))
    if not idx: continue
    mx=max(idx); oob=sum(1 for i in idx if i>=nverts)
    bad=0; xs=[];ys=[];zs=[]; ws=[]
    for i in set(idx):
        if i>=nverts: continue
        o=i*stride
        if ptype=='16_16_16_16_F':
            d0,d1=struct.unpack('>II',vb[o:o+8])  # 8in32 swapped dwords
            x,y,z,w=half(d0&0xffff),half(d0>>16),half(d1&0xffff),half(d1>>16); ws.append(w)
        elif ptype=='32_32_32_F':
            x,y,z=struct.unpack('>fff',vb[o:o+12]); w=1
        elif ptype=='32_32_32_32_F':
            x,y,z,w=struct.unpack('>ffff',vb[o:o+16])
        else: x=y=z=0
        if any(math.isnan(v) or math.isinf(v) or abs(v)>1e5 for v in (x,y,z)): bad+=1
        else: xs.append(x);ys.append(y);zs.append(z)
    n=len(set(idx))
    bb=(min(xs),max(xs),min(ys),max(ys),min(zs),max(zs)) if xs else None
    wset=set(round(w,2) for w in ws) if ws else None
    rows.append((di,cnt,prim,vs,ptype,stride,nverts,mx,oob,bad,n,bb,wset))
print("draw count prim vs pos stride nverts maxidx oob badpos nuniq bbox w")
for r in rows: print(*r)
