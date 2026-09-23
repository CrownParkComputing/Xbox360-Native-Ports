import struct,sys,collections
p='/home/jon/ss-recomp/content_root/cache/shaders/shareable/425607E7.xsh'
d=open(p,'rb').read(); pos=8
FMT={0:'undef',6:'8_8_8_8',7:'2_10_10_10',16:'10_11_11',17:'11_11_10',25:'16_16',26:'16_16_16_16',31:'16_16_F',32:'16_16_16_16_F',33:'32',34:'32_32',35:'32_32_32_32',36:'32_F',37:'32_32_F',38:'32_32_32_32_F',57:'32_32_32_F'}
shaders=[]
while pos+12<=len(d):
    h,ct=struct.unpack('<QI',d[pos:pos+12]); n=ct&0x7fffffff; t=ct>>31; pos+=12
    u=struct.unpack('>%dI'%n,d[pos:pos+4*n]); pos+=4*n
    shaders.append((h,t,u))
print('shaders',len(shaders),'vs',sum(1 for s in shaders if s[1]==0),'ps',sum(1 for s in shaders if s[1]==1))
def cfs(u):
    out=[]
    for i in range(0,len(u)-2,3):
        a=u[i]|((u[i+1]&0xffff)<<32); b=(u[i+1]>>16)|(u[i+2]<<16)
        for cf in (a,b):
            op=(cf>>44)&0xf; addr=cf&0xfff; cnt=(cf>>12)&7; seq=(cf>>16)&0xfff
            out.append((op,addr,cnt,seq))
            if op==2 or op==4 or op==8: pass
        if any(o[0] in (2,4,8,10) for o in out[-2:]): break
    return out
sig=collections.Counter(); per=[]
for h,t,u in shaders:
    if t!=0: continue
    fetches=[]; memexp=False; tfetch=0
    for op,addr,cnt,seq in cfs(u):
        if op not in (1,2,3,4,10,11,12,13): continue  # exec variants
        for k in range(cnt+1):
            i=(addr+k)*3
            if i+2>=len(u): break
            isfetch=(seq>>(k*2))&1
            if not isfetch: continue
            d0,d1,d2=u[i],u[i+1],u[i+2]
            opc=d0&0x1f
            if opc==0:
                fmt=(d1>>16)&0x3f; mini=(d1>>30)&1; stride=d2&0xff; off=d2>>8&0x7fffff
                if off&0x400000: off-=0x800000
                sgn=(d1>>12)&1; norm=((d1>>13)&1)==0; expadj=(d1>>24)&0x3f; rounded=(d1>>15)&1
                if expadj&0x20: expadj-=64
                ci=((d0>>20)&0x1f)*3+((d0>>25)&3); src=(d0>>5)&0x3f
                fetches.append((ci,FMT.get(fmt,str(fmt)),'mini' if mini else 'full',stride,off,'s' if sgn else 'u','n' if norm else 'i',expadj,src,rounded))
            elif opc==1: tfetch+=1
    # memexport: alu export to eA (a0? ) detect via 'export' dst 32-47? skip; detect using exec with serialize? use string: alu vector_dest with export flag and dest>=32
    for i in range(0,len(u)-2,3):
        d0,d1,d2=u[i],u[i+1],u[i+2]
        pass
    key=tuple(fetches)
    sig[key]+=1; per.append((h,fetches,tfetch,len(u)))
for key,c in sig.most_common():
    print(c,'x',key)
print('--- vs with texture fetches:',sum(1 for p in per if p[2]))
# memexport + vertex tfetch + special fetch details
print('=== memexport / tfetch scan')
me=0; tf=0; details=[]
for h,t,u in shaders:
    if t!=0: continue
    exp=set(); tfs=0; f16int=False
    for op,addr,cnt,seq in cfs(u):
        if op not in (1,2,3,4,10,11,12,13): continue
        for k in range(cnt+1):
            i=(addr+k)*3
            if i+2>=len(u): break
            d0,d1,d2=u[i],u[i+1],u[i+2]
            if (seq>>(k*2))&1:
                if (d0&0x1f)==1: tfs+=1
                if (d0&0x1f)==0 and ((d1>>16)&0x3f) in (25,26): f16int=True
            else:
                export_data=(d0>>15)&1; vdst=d0&0x3f; sdst=(d0>>8)&0x3f
                if export_data: exp.add(vdst); exp.add(sdst)
    if 32 in exp or any(33<=e<=37 for e in exp): me+=1; details.append(('MEMEXPORT',hex(h),sorted(exp),len(u)))
    if tfs: tf+=1
    if f16int: details.append(('INT16FETCH',hex(h),tfs,len(u)))
print('vs with memexport',me,'vs with tfetch',tf)
for d in details[:20]: print(d)
