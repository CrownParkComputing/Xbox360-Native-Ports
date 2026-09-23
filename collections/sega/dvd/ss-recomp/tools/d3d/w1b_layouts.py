#!/usr/bin/env python3
"""W1-b: cluster the field-access census (w1b_census.json) by object role and
emit docs/d3d/layouts.json, layout_leaks.json, layouts.md.

Roles are propagated through the call graph inside the D3D band from seeds
(plan anchors, D3DResource type checks, fetch-constant access signatures,
VdGlobalDevice).  Everything outside the band that dereferences a value the
band treats as a D3D object, that goes through the device global, that writes
the fetch-constant shadow / dirty masks / ring, or that touches GPU MMIO, is a
leak.  Static only.
"""
import json, os, collections, re, sys
D=os.path.expanduser('~/ss-recomp/docs/d3d/')
C=json.load(open(D+'w1b_census.json'))
BAND=(0x888D19C0,0x888FA000)
def band(va):
    if BAND[0]<=va<BAND[1]: return 'd3d'
    if 0x888FA000<=va<0x888FE000: return 'wrap'
    if 0x887F0000<=va<0x88820000: return 'engine'
    if 0x88903000<=va<0x88B00000: return 'xgraphics'
    return 'other'
name_by_va={f['va']:n for n,f in C.items()}
TYPE_NAMES={1:'vertexbuffer',2:'indexbuffer',3:'texture',4:'surface',5:'vertexshader',6:'pixelshader',7:'constantbuffer',8:'commandbuffer'}
RESOURCE_KINDS=set(TYPE_NAMES.values())|{'vb_or_ib','resource'}
VDGLOBALDEVICE='G880007AC->0'   # **(import slot 0x880007AC) : kernel export VdGlobalDevice (D3D's own device global)

# ---------------- register names ----------------
REGN={}
try:
    for m in re.finditer(r'XE_GPU_REGISTER\((0x[0-9A-Fa-f]+),\s*\w+,\s*(\w+)\)',open(os.path.expanduser('~/rexglue-vmx/include/rex/graphics/register_table.inc')).read()):
        REGN[int(m.group(1),16)]=m.group(2)
except Exception as e: sys.stderr.write('no register table: %s\n'%e)
def regname(r): return REGN.get(r,'reg_%04X'%r)

# ---------------- register shadow map (from the emit idiom: bl sub_888EF190(dev, bits<<rot, reg_base, dev+shadow)) ----------------
# mask offset, bit range [lo,hi], register base, shadow offset.  bit b <-> reg base+(hi-b), shadow + 4*(hi-b)
GROUPS=[(16,0,11,0x2200,10548),(16,12,16,0x2180,10528),(16,21,41,0x2100,10444),(16,42,57,0x2000,10368),
        (24,34,54,0x2280,10596),(32,0,37,0x2300,10680),(32,42,45,0x2380,10832)]
# groups whose mask bits were not recovered from a decoded flush (only the emit call was seen)
GROUPS_UNBOUND=[(None,None,None,0x4900,10112)]
def shadow_field(off):
    for m,lo,hi,rb,sh in GROUPS:
        n=hi-lo+1
        if sh<=off<sh+4*n:
            i=(off-sh)//4
            return rb+i,m,hi-i
    for _,_,_,rb,sh in GROUPS_UNBOUND:
        n=40
        if sh<=off<sh+4*n: return rb+(off-sh)//4,None,None
    return None
def fetch_field(off):
    if 1920<=off<10112:
        c=(off-1920)//16; comp='xyzw'[((off-1920)%16)//4]
        return 'ALU constant shadow c%d.%s (register 0x%04X; %s c%d)'%(c,comp,0x4000+4*c+((off-1920)%16)//4,'VS' if c<256 else 'PS',c if c<256 else c-256)
    if 10112<=off<10144:
        return 'bool constant shadow (register 0x%04X %s)'%(0x4900+(off-10112)//4,regname(0x4900+(off-10112)//4))
    if 10144<=off<10272:
        return 'loop constant shadow (register 0x%04X %s)'%(0x4900+(off-10112)//4,regname(0x4900+(off-10112)//4))
    if 1152<=off<1776:
        t=(off-1152)//24; d=((off-1152)%24)//4
        return 'texture fetch constant shadow: tfetch slot %d dword%d (%s)'%(t,d,['type/sign/clamp/pitch/tiled','format/endian/base_address','size','num_format/swizzle/exp_adjust/filters','grad_exp/mip lod','dimension/mip_address'][d])
    if 1776<=off<1920:
        k=(off-1152)//8; d=((off-1152)%8)//4
        return 'vertex fetch constant shadow: vfetch slot %d dword%d (%s) = D3D stream %d'%(k,d,'type:2|address:30' if d==0 else 'endian:2|size:24',95-k)
    return None

# ---------------- role propagation inside the band ----------------
roles=collections.defaultdict(set); ev={}; strong=set()
def addrole(fn,tag,role,why,st=False):
    if st: strong.add((fn,tag,role))
    if role not in roles[(fn,tag)]:
        roles[(fn,tag)].add(role); ev.setdefault((fn,tag),[]).append(why); return True
    return False
seeds=[('sub_888DBC78','a3','device','plan anchor: state setter (writes +11992, ORs bit 19 into mask+16)'),
       ('sub_888D63E8','a3','device','plan anchor: SetStreamSource-like (writes vfetch shadow, +24 mask)'),
       ('sub_888E69E0','a3','device','plan anchor: ring write helper'),
       ('sub_888D63E8','a5','vertexbuffer','reads +24/+28 as xe_gpu_vertex_fetch_t and adds the byte offset to dword0'),
       ('sub_888D9838','a3','resource','plan anchor: Release (lwarx/stwcx refcount at +4, type check at +0, Parent at +24 for type 4)'),
       ('sub_888F64F8','a3','device','device state reset: fills masks +0..+32 with -1, invalidates tfetch 0-25 and vfetch 78-95 shadow')]
for fn,tag,role,why in seeds: addrole(fn,tag,role,why,True)
bandfns=[n for n,f in C.items() if band(f['va'])=='d3d']
for n in bandfns:
    f=C[n]
    for t in f['tchecks']:
        if t['off']==0 and t['k'] in TYPE_NAMES: addrole(n,t['tag'],TYPE_NAMES[t['k']],'type check (Common & 0xF) == %d'%t['k'],True)
    per=collections.defaultdict(set)
    for a in f['acc']:
        if a['mn']=='lwarx' and a['off']==4 and a['base'].startswith('a') and '->' not in a['base']:
            addrole(n,a['base'],'resource','lwarx refcount at +4',True)
        if a['base']==VDGLOBALDEVICE: addrole(n,VDGLOBALDEVICE,'device','VdGlobalDevice',True)
        if a['off'] is not None and '->' not in a['base'] and a['base'].startswith('a'): per[a['base']].add(a['off'])
    for tag,offs in per.items():
        if max(offs)>=1024: addrole(n,tag,'device','root arg accessed at offset %d (>=1024; resources are <=64 bytes)'%max(offs),True)
        if {24,28}<=offs and max(offs)<=32 and min(offs)>=0: addrole(n,tag,'vb_or_ib','touches exactly the 2-dword fetch block +24/+28',True)
        if {28,32,36,40,44,48}<=offs and max(offs)<=52: addrole(n,tag,'texture','touches the 6-dword texture fetch constant +28..+48',True)
def derefs(fn,ak): return any(a['base'].split('->')[0].split('+')[0]==ak for a in C[fn]['acc'])
changed=True; it=0
while changed and it<20:
    changed=False; it+=1
    for n in bandfns:
        for c in C[n]['calls']:
            t=c['t']
            if t is None or t not in name_by_va or band(t)!='d3d': continue
            cn=name_by_va[t]
            for rk,tag in c['args'].items():
                ak='a'+rk[1:]
                if not (tag.startswith('a') or tag.startswith('G')): continue
                for r in list(roles.get((cn,ak),())):
                    if not derefs(cn,ak): continue
                    if r=='resource' and '->' in tag: continue
                    if addrole(n,tag,r,'passed as %s to %s whose %s is %s'%(rk,cn,ak,r)): changed=True
                if derefs(cn,ak):
                    for r in list(roles.get((n,tag),())):
                        if addrole(cn,ak,r,'caller %s passes its %s (%s) as %s'%(n,tag,r,rk)): changed=True
sys.stderr.write('role propagation: %d iterations, %d (fn,tag) pairs\n'%(it,len(roles)))
gtags=collections.Counter()
for n,f in C.items():
    for c in f['calls']:
        if c['t'] and c['t'] in name_by_va and band(c['t'])=='d3d':
            cn=name_by_va[c['t']]
            for rk,tag in c['args'].items():
                ak='a'+rk[1:]
                if tag.startswith('G') and 'device' in roles.get((cn,ak),()) and derefs(cn,ak): gtags[tag]+=1
GLOBAL_DEVICE={t for t,c in gtags.items() if c>=3}|{VDGLOBALDEVICE}
sys.stderr.write('global device tags: %s\n'%{t:gtags[t] for t in GLOBAL_DEVICE})

def pick(rs):
    rs=set(rs)
    if 'device' in rs: return 'device'
    typed=[r for r in rs if r in TYPE_NAMES.values()]
    if len(typed)==1: return typed[0]
    if len(typed)>1: return 'vb_or_ib' if set(typed)<={'vertexbuffer','indexbuffer'} else 'resource'
    if 'vb_or_ib' in rs: return 'vb_or_ib'
    if 'resource' in rs: return 'resource'
    return None
def resolve(fn,tag):
    if tag in GLOBAL_DEVICE: return {'device'}
    return set(roles.get((fn,tag),()))

# ---------------- layouts ----------------
layouts=collections.defaultdict(lambda: collections.defaultdict(lambda: {'r':set(),'w':set(),'mn':set()}))
sub_objects=collections.defaultdict(lambda: collections.defaultdict(lambda: {'r':set(),'w':set()}))
idx_access=collections.defaultdict(lambda: collections.defaultdict(set))
for n in bandfns:
    for a in C[n]['acc']:
        b=a['base']; obj=pick(resolve(n,b))
        if obj is None:
            root=b.split('->')[0]
            if '->' in b and b.count('->')==1 and pick(resolve(n,root))=='device' and a['off'] is not None:
                sub=b.split('->')[1]
                if sub!='idx': sub_objects['device->'+sub][(a['off'],a['w'])][a['k']].add(n)
            continue
        if a['off'] is None: idx_access[obj][a.get('delta',0)].add(n); continue
        e=layouts[obj][(a['off'],a['w'])]; e[a['k']].add(n); e['mn'].add(a['mn'])

XDK_RES={0:'Common (bits 0-3 = D3DCOMMON_TYPE: 1 VB, 2 IB, 3 texture, 4 surface, 5 VS, 6 PS, 7 constant buffer, 8 command buffer; upper bits flags, 0x40000000 = surface owns Parent)',
         4:'ReferenceCount (lwarx/stwcx)',8:'Fence (written with device+10908 when bound)',12:'ReadFence',16:'Identifier',20:'BaseFlush'}
XDK={'vertexbuffer':{24:'Format.dword0 = xe_gpu_vertex_fetch_t (type:2 | address:30, byte address since type=3; SetStreamSource adds the byte offset)',28:'Format.dword1 (endian:2 | size:24 words)'},
     'indexbuffer':{24:'Address (fetch dword0 layout)',28:'Size (fetch dword1 layout)'},
     'texture':{24:'MipFlush',28:'Format.dword0 (type/sign/clamp/pitch/tiled)',32:'Format.dword1 (format/endian/request_size/stacked/base_address)',36:'Format.dword2 (size)',40:'Format.dword3 (num_format/swizzle/exp_adjust/filters/aniso/border)',44:'Format.dword4 (grad_exp/mip_min/mip_max/lod_bias)',48:'Format.dword5 (dimension/mip_address)'},
     'surface':{24:'Parent (owning texture; Release releases it when Common&0x40000000)',28:'SurfaceInfo? (EDRAM base/pitch/format/MSAA)',32:'ColorInfo/DepthInfo? (RB_*_INFO word)',36:'HierarchicalZ? / second info word',40:'size/pitch word?',44:'?'},
     'commandbuffer':{24:'?',28:'?'}}
DEVICE_NAMES={0:'dirty mask A = vertex shader ALU constant dirty (64-bit, presumably 1 bit per 4 float4 of c0..c255; engine sets bits 2-63 before its GPU-owned constant writes and clears them after)',
              8:'dirty mask B = pixel shader ALU constant dirty (64-bit; inlined SetPixelShaderConstantF at 0x884990E0 writes c256.. and ORs a bit here)',
              16:'dirty mask C (64-bit register-group dirty bits: 0-11 -> 0x2200.., 12-16 -> 0x2180.., 21-41 -> 0x2100.., 42-57 -> 0x2000..; 17-20/58-63 special compound bits)',
              24:'dirty mask D (64-bit: bits 6-31 = texture fetch constants 0-25 (engine clears them in texture_fetch_constant_mode==2), 34-54 -> 0x2280.., others special)',
              32:'dirty mask E (64-bit: bits 0-37 -> 0x2300..0x2325, bits 42-45 -> 0x2380..0x2383 poly offset; 38-41/46-63 special)',
              40:'dirty mask F (64-bit; ANDed with mask C and handed to sub_888EEDF8 with shadow +10560)',
              48:'ring write pointer (current, dword granularity; every packet emit does stwu ..,4(ptr))',52:'ring write limit for N-dword allocation (sub_888E6C10)',56:'ring write limit (compared before every packet)',
              10896:'pRing / command buffer object (checked non-null in ring write helper)',10908:'current fence value (stored into resource+8/+12 when bound)',10912:'resource Common flag mask (tested against resource+0)',
              10940:'flags byte (bit 3 tested by resolve; bit 7 = recording?)',10941:'flags byte (|=2 after kick, |=4 during resolve)',10942:'flags byte (bit 3 = tiling/predication pending, cleared by resolve)',10943:'flags byte',
              11992:'state word written by 0x888DBC78 (mask C bit 19); likely current vertex declaration / fetch-patch key',12000:'64-bit mask set to 0x00000000FFFFFFFF on reset',
              12008:'per-stream byte table (compared with stream flags in SetStreamSource-like)',12616:'render target / resolve state block start (5 dwords compared with 12904..)',
              12636:'bound stream vertex buffer pointers [stream 0..16] (device+12636+4*stream)',12704:'per-stream stride/flags byte table',12884:'resolve/tiling word',12888:'resolve/tiling word',12924:'tiling rect count',13168:'tiling rect table (8 bytes each)',
              13408:'ring lock / inline-write depth (non-zero suppresses kick)',13568:'ring write cursor block',13732:'ring write pointer (second ring: fence/async writes)',13736:'ring write limit (second ring)',
              21912:'default width for resolve?',21916:'default height for resolve?'}
def name_device(off,w):
    ff=fetch_field(off)
    if ff: return ff,'A'
    sf=shadow_field(off)
    if sf:
        r,m,b=sf
        if m is not None: return 'register shadow %s (0x%04X); dirty = mask+%d bit %d'%(regname(r),r,m,b),'A'
        return 'register shadow %s (0x%04X); dirty bits not decoded'%(regname(r),r),'B'
    if off in DEVICE_NAMES: return DEVICE_NAMES[off],('A' if off in (0,8,16,24,32,48,56,10908,12636,13732,13736) else 'B')
    return None,'C'
def name_guess(obj,off,w):
    if obj=='device': return name_device(off,w)
    if off in XDK_RES: return XDK_RES[off],('A' if off in (0,4) else 'B')
    if obj=='vb_or_ib' and off in XDK['vertexbuffer']: return 'VB: '+XDK['vertexbuffer'][off]+' | IB: '+XDK['indexbuffer'][off],'B'
    if obj in XDK and off in XDK[obj]: return XDK[obj][off],('A' if (obj,off) in (('surface',24),('vertexbuffer',24),('vertexbuffer',28)) else 'B' if obj=='texture' else 'C')
    return None,'C'
out={}
for obj,fields in sorted(layouts.items()):
    fl=[]
    for (off,w),rw in sorted(fields.items()):
        nm,conf=name_guess(obj,off,w)
        fl.append({'offset':off,'width':w,'name_guess':nm,'confidence':conf,'readers':sorted(rw['r']),'writers':sorted(rw['w']),'mnemonics':sorted(rw['mn'])})
    size=max((off+w for (off,w) in fields),default=0)
    out[obj]={'size_guess':size,'field_count':len(fl),'indexed_access_functions':{str(k):sorted(v) for k,v in idx_access.get(obj,{}).items()},'fields':fl}
out['device']['size_note']='max offset touched by the band (true allocation size not recovered statically); fetch constant file image at +1152..+1919; ALU constant shadow c0..c511 at +1920..+10111 (16 bytes each); register shadow blocks at +10112 (0x4900 bool/loop), +10368 (0x2000), +10444 (0x2100), +10528 (0x2180), +10548 (0x2200), +10596 (0x2280), +10680 (0x2300), +10832 (0x2380)'
for sub,fields in sub_objects.items():
    fl=[{'offset':off,'width':w,'name_guess':None,'confidence':'C','readers':sorted(rw['r']),'writers':sorted(rw['w'])} for (off,w),rw in sorted(fields.items())]
    if len(fl)>=3: out[sub]={'size_guess':max(off+w for (off,w) in fields),'field_count':len(fl),'fields':fl,'note':'object reached through a device field (pointer at that device offset)'}
# dirty mask table
dirty=collections.defaultdict(lambda: collections.defaultdict(list))
for n in bandfns:
    for x in C[n]['dirty']:
        if x['tag'] in ('a3',VDGLOBALDEVICE) and pick(resolve(n,x['tag']))=='device':
            others=sorted({a['off'] for a in C[n]['acc'] if a['base']==x['tag'] and a['k']=='w' and a['off'] is not None and a['off'] not in (0,8,16,24,32,40)})
            for b in range(64):
                if (x['bits']>>b)&1: dirty[x['off']][b].append({'setter':n,'shadow_fields_written':others[:8]})
masks={}
for m in (0,8,16,24,32,40):
    bits={}
    for b in range(64):
        reg=None; sh=None
        for mm,lo,hi,rb,shb in GROUPS:
            if mm==m and lo<=b<=hi: reg=rb+(hi-b); sh=shb+4*(hi-b)
        setters=dirty[m].get(b,[])
        consistent=None
        if reg is not None and setters:
            consistent=any(sh in s['shadow_fields_written'] for s in setters)
        if reg is not None or setters:
            bits[b]={'register':('0x%04X %s'%(reg,regname(reg))) if reg is not None else None,'shadow_offset':sh,'setters':sorted({s['setter'] for s in setters}),'setter_writes_shadow':consistent,
                     'setter_fields':sorted({o for s in setters for o in s['shadow_fields_written']})[:10]}
    masks['+%d'%m]=bits
out['_device_dirty_masks']={'groups':[{'mask':'+%d'%m,'bits':'%d-%d'%(lo,hi),'register_base':'0x%04X %s'%(rb,regname(rb)),'shadow_offset':sh,'order':'bit b -> register base+(hi-b), shadow+4*(hi-b)'} for m,lo,hi,rb,sh in GROUPS]+
                            [{'mask':None,'bits':None,'register_base':'0x%04X %s'%(rb,regname(rb)),'shadow_offset':sh,'order':'emit call seen (sub_888EF190) but the mask bits were not decoded'} for _,_,_,rb,sh in GROUPS_UNBOUND],
                            'emit_helper':'sub_888EF190(device, bits rotated to MSB, register_base, device+shadow)','special_helper':'sub_888EEDF8(device, mask C & mask F, device+10560)','bits':masks}
param_roles={}
for (fn,tag),rs in sorted(roles.items()):
    if band(C[fn]['va'])=='d3d' and tag.startswith('a') and '->' not in tag:
        param_roles.setdefault(fn,{})[tag]={'roles':sorted(rs),'strong':sorted(r for r in rs if (fn,tag,r) in strong),'evidence':ev.get((fn,tag),[])[:3]}
out['_band_param_roles']=param_roles
out['_global_device_tags']={'engine':'G88ED9388->1388 = *(*(0x88ED9388)+1388) (renderer singleton field)','d3d':'G880007AC->0 = **(0x880007AC) import slot (VdGlobalDevice)'}
out['_method']='static census of load/store offsets per base register tag in the D3D band (tools/d3d/w1b_census.py), roles propagated over the band call graph (tools/d3d/w1b_layouts.py); names = XDK layout knowledge + decoded flush/resolve/reset idioms; confidence A = two independent static lines of evidence, B = XDK layout matches access pattern, C = guess'
json.dump(out,open(D+'layouts.json','w'),indent=1)

# ---------------- leaks ----------------
RING_HELPERS={0x888E69E0:'ring write helper (returns write pointer)',0x888E6C10:'ring alloc N dwords (returns write pointer)'}
leaks=[]
for n,f in C.items():
    b=band(f['va'])
    if b in ('d3d','wrap'): continue
    handed={}
    for c in f['calls']:
        if c['t'] and c['t'] in name_by_va and band(c['t'])=='d3d':
            cn=name_by_va[c['t']]
            for rk,tag in c['args'].items():
                ak='a'+rk[1:]
                if not derefs(cn,ak): continue
                r=pick(roles.get((cn,ak),()))
                if r: handed.setdefault(tag,set()).add((r,cn,rk))
    per=collections.defaultdict(lambda: {'r':set(),'w':set(),'via':set(),'idx':False})
    for a in f['acc']:
        bt=a['base']; obj=None; via=None
        root=bt.split('->')[0]
        if bt in GLOBAL_DEVICE: obj='device'; via='device global'
        elif bt in handed:
            obj=pick({r for r,_,_ in handed[bt]}); via='passed to '+', '.join(sorted({'%s(%s=%s)'%(cn,rk,r) for r,cn,rk in handed[bt]})[:3])
        elif root.startswith('R') and int(root[1:],16) in RING_HELPERS if root[1:].isalnum() and root!='Rind' else False:
            obj='ring'; via=RING_HELPERS[int(root[1:],16)]
        elif '->' in bt and (root in GLOBAL_DEVICE or root in handed):
            base_obj='device' if root in GLOBAL_DEVICE else pick({r for r,_,_ in handed[root]})
            if base_obj: obj=base_obj+'->'+bt.split('->',1)[1]; via='deref of a %s field'%base_obj
        if obj is None: continue
        if a['off'] is None: per[obj]['idx']=True
        else: per[obj][a['k']].add((a['off'],a['w']))
        per[obj]['via'].add(via)
    for obj,info in per.items():
        for kind in ('r','w'):
            if not info[kind]: continue
            offs=sorted(o for o,_ in info[kind])
            what=[]
            if obj=='device':
                fc=[o for o in offs if 1152<=o<1920]
                if fc: what.append('fetch constant shadow: '+'; '.join(sorted({fetch_field(o).split(': ')[1].split(' (')[0] for o in fc})))
                for o in offs:
                    if o in (0,8,16,24,32,40): what.append('dirty mask +%d'%o)
                    elif o in DEVICE_NAMES and not (1152<=o<1920): what.append('+%d %s'%(o,DEVICE_NAMES[o].split(' (')[0]))
                    elif shadow_field(o): what.append('+%d register shadow %s'%(o,regname(shadow_field(o)[0])))
            elif obj=='ring': what.append('PM4 written straight into the D3D ring through a pointer obtained from the band')
            elif obj in XDK or obj in ('vb_or_ib','resource'):
                tbl=dict(XDK_RES); tbl.update(XDK.get(obj,{}) if obj in XDK else {**XDK['vertexbuffer']})
                what+=['+%d %s'%(o,(tbl.get(o) or '?').split(' (')[0]) for o in offs]
            elif obj.startswith('device->'): what.append('object hanging off device field %s'%obj.split('->',1)[1])
            leaks.append({'va':'0x%08X'%f['va'],'fn':n,'band':b,'object':obj,'offsets':offs+(['indexed'] if info['idx'] else []),'kind':'read' if kind=='r' else 'write',
                          'what':'; '.join(what) if what else 'fields of a D3D %s object'%obj,'via':sorted(info['via']),
                          'fetch_bypass':(obj=='device' and any(o in (0,8,24) or 1152<=o<1920 for o in offs)) or obj=='ring'})
    mm=[a for a in f['acc'] if a['base']=='G' and (0x7FC80000<=a['off']<0x7FCA0000 or 0xEC800000<=a['off']<0xEC820000)]
    if mm: leaks.append({'va':'0x%08X'%f['va'],'fn':n,'band':b,'object':'gpu_mmio','offsets':sorted({a['off'] for a in mm}),'kind':'write' if any(a['k']=='w' for a in mm) else 'read','what':'direct GPU register MMIO','via':['lis/addi absolute'],'fetch_bypass':True})
    hc=[c for c in f['absc'] if 0x7FC80000<=c<0x7FCA0000]
    if hc and not mm: leaks.append({'va':'0x%08X'%f['va'],'fn':n,'band':b,'object':'gpu_mmio','offsets':sorted(hc),'kind':'read','what':'materialises a GPU MMIO register address','via':['lis/addi absolute'],'fetch_bypass':True})
order={'engine':0,'other':1,'xgraphics':2}
leaks.sort(key=lambda l:(not l['fetch_bypass'],order[l['band']],-len(l['offsets']),l['va']))
json.dump(leaks,open(D+'layout_leaks.json','w'),indent=1)
sys.stderr.write('objects: %s\n'%{k:v['field_count'] for k,v in out.items() if not k.startswith('_')})
sys.stderr.write('leaks: %d entries, %d functions, by band %s, by object %s\n'%(len(leaks),len({l['fn'] for l in leaks}),dict(collections.Counter(l['band'] for l in leaks)),dict(collections.Counter(l['object'].split('->')[0] for l in leaks))))
for l in leaks[:30]: sys.stderr.write('%s %s %-12s %-5s %s | %s | %s\n'%(l['va'],l['band'],l['object'][:12],l['kind'],l['offsets'][:10],l['what'][:90],l['via'][0][:60]))
# diagnostics for the report
sys.stderr.write('--- SetStreamSource-like r8 (mask D bit) by caller\n')
for n,f in C.items():
    for c in f['calls']:
        if c['t']==0x888D63E8: sys.stderr.write('  %s r4=%s r8=%s\n'%(n,c['args'].get('r4'),c['args'].get('r8')))
sys.stderr.write('--- band device methods that write through a computed device pointer while holding a texture param (texture fetch setter candidates)\n')
for n in bandfns:
    pr=param_roles.get(n,{})
    if pick(pr.get('a3',{}).get('roles',[]))=='device' and any('texture' in v['roles'] for k,v in pr.items() if k!='a3'):
        w=sorted({(a['base'],a['off'] if a['off'] is not None else -1) for a in C[n]['acc'] if a['k']=='w' and a['base'].startswith('a3') and a['base']!='a3'})
        if w: sys.stderr.write('  %s %s\n'%(n,w[:6]))

# ---------------- markdown ----------------
md=[]
A=md.append
A('# Split/Second D3D object layouts (W1-b, static)\n')
A('Inputs: `generated/splitsecond1/splitsecond_recomp.*.cpp` (PPC asm comments), `~/rexglue-vmx/include/rex/graphics/xenos.h` + `register_table.inc`. Scripts: `tools/d3d/w1b_census.py` (field-access census, taint over r3..r10 / globals / stack, 58,113 functions) and `tools/d3d/w1b_layouts.py` (role propagation, this file, `layouts.json`, `layout_leaks.json`). Static only; nothing here has runtime confirmation yet (that is W2-d).\n')
A('Confidence: **A** = two independent static lines of evidence (e.g. XDK layout + decoded idiom + setter/flush agreement); **B** = XDK layout or a decoded idiom matches the access pattern; **C** = offset seen, name is a guess or unknown.\n')
A('## How the device is reached\n')
A('- Inside the band: `this` in r3, or `**(0x880007AC)` — an XEX import-variable slot, the kernel export `VdGlobalDevice` (D3D publishes its device there); 16 band functions use it (tag `G880007AC->0`), e.g. `sub_888F6358` (shutdown) writes the slot.')
A('- Engine: `*(*(0x88ED9388)+1388)` — the renderer singleton keeps the device pointer at +1388 (tag `G88ED9388->1388`, 185 call sites pass it as r3 into the band). Some engine methods reach it through `this->1388` or fields such as `this->452`, `this->84`, `this->92`, `this->164`.')
A('- The engine cvar `renderer/texture_fetch_constant_mode` (names `SetTextureFetchConstant` / `GpuSetTextureFetchConstant` live in an enum-name table at 0x88E9E504/0x88E9E508; the value is cached in the global 0x88F02B88) gates the engine\'s direct dirty-mask edits (see leaks): `mode == 2` = GpuSetTextureFetchConstant.\n')
A('## Objects recovered\n')
A('| object | size guess | fields | how it was identified |')
A('|---|---|---|---|')
A('| device (D3DDevice) | %d (max offset touched) | %d | anchors 0x888DBC78 / 0x888D63E8 / 0x888E69E0, VdGlobalDevice, any root arg touched at offset >= 1024, propagation over the band call graph |'%(out['device']['size_guess'],out['device']['field_count']))
for obj,how in (('resource','lwarx/stwcx at +4, `Common & 0xF` type checks, Release anchor; multi-typed params (surface/texture/commandbuffer) collapse here'),('vb_or_ib','params touched exactly at +24/+28 (2-dword fetch constant), passed to SetStreamSource/SetIndices-like'),('vertexbuffer','r5 of 0x888D63E8 (SetStreamSource-like) and type check == 1'),('texture','params touched at +28..+48 (6-dword texture fetch constant) or type check == 3'),('commandbuffer','type check == 8')):
    if obj in out: A('| %s | %d | %d | %s |'%(obj,out[obj]['size_guess'],out[obj]['field_count'],how))
subs=[k for k in out if k.startswith('device->')]
A('| device->N sub-objects (%s) | - | %s | pointer fields of the device that the band dereferences (ring / command-buffer / pool objects); unnamed |'%(', '.join(k.split('->')[1] for k in subs),', '.join(str(out[k]['field_count']) for k in subs)))
A('\nNot separable statically: **surface** (only `Parent` at +24 from Release: type 4 with `Common & 0x40000000` releases +24), **vertex/pixel shader**, **declaration**, **query**, **async block** — their type checks (5/6) and lwarx patterns never appear on a root argument in the band, so their fields are inside the `resource` cluster or in the unnamed device sub-objects. W1-a\'s names will split them.\n')
A('## D3DDevice map\n')
A('| device offset | contents | confidence |')
A('|---|---|---|')
for row in (('+0','dirty mask A (64-bit) = vertex-shader ALU constant dirty','A'),('+8','dirty mask B (64-bit) = pixel-shader ALU constant dirty (0x884990E0 inlines SetPixelShaderConstantF: writes c256 at +6016 and ORs a bit here)','A'),
            ('+16','dirty mask C (64-bit) = register groups 0x2200/0x2180/0x2100/0x2000 (table below)','A'),('+24','dirty mask D (64-bit): bit 0 vertex-fetch dirty (SetStreamSource ORs the caller bit: 1 for streams 0-2, 2 for stream 3), bits 6-31 texture fetch constants 0-25 (engine sets/clears exactly these), bits 34-54 register group 0x2280','A/B'),
            ('+32','dirty mask E (64-bit): bits 0-37 group 0x2300..0x2325, bits 42-45 group 0x2380..0x2383','A'),('+40','dirty mask F (64-bit): ANDed with mask C, handled by `sub_888EEDF8(dev, C&F, dev+10560 [RB_HIZCONTROL shadow])`','B'),
            ('+48 / +52 / +56','ring write pointer / alloc limit / packet limit (every packet: compare +48 with +56, else `bl sub_888E69E0`, then `stwu word,4(ptr)`)','A'),
            ('+1152..+1775','texture fetch constant shadow, 26 slots x 6 dwords (reset invalidates type)','A'),('+1776..+1919','vertex fetch constant shadow, slots 78..95 x 2 dwords; slot k = 95 - D3D stream (slot 95 = stream 0, slot 92 = stream 3); SetStreamSource writes dword0 = VB.dword0 + byte offset (bit-29 fixup), dword1 = VB.size - offset','A'),
            ('+1920..+10111','ALU constant shadow c0..c511 (16 bytes each; PS constants start at c256 = +6016)','B'),('+10112..+10271','bool (0x4900..) and loop (0x4908..) constant shadow','B'),
            ('+10368..+10431','register shadow 0x2000..0x200F (RB_SURFACE_INFO .. PA_SC_SCREEN_SCISSOR_BR)','A'),('+10444..+10527','register shadow 0x2100..0x2114 (VGT_MAX_VTX_INDX .. PA_CL_VPORT_ZOFFSET)','A'),('+10528..+10547','register shadow 0x2180..0x2184 (SQ_PROGRAM_CNTL .. SQ_WRAPPING_1)','A'),
            ('+10548..+10595','register shadow 0x2200..0x220B (RB_DEPTHCONTROL .. RB_BLENDCONTROL3)','A'),('+10596..+10679','register shadow 0x2280..0x2294 (PA_SU_POINT_SIZE .. VGT_ENHANCE)','A'),('+10680..+10831','register shadow 0x2300..0x2325 (PA_SC_LINE_CNTL .. )','A'),('+10832..+10847','register shadow 0x2380..0x2383 (poly offset)','A'),
            ('+10896','pRing / command-buffer object (non-null check before ring writes)','B'),('+10908 / +10912','current fence value (written to resource+8/+12 on bind) / resource flag mask tested against resource Common','B'),('+10940..+10943','flag bytes (recording / kick pending / tiling pending)','B'),
            ('+11992','word written by 0x888DBC78 with mask C bit 19 (compound bit; likely current vertex declaration / fetch patch key)','B'),('+12008 / +12704','per-stream byte tables (flags / stride) compared in SetStreamSource-like','B'),('+12616..+12635','render-target/resolve state block compared against +12904..','C'),('+12636..+12703','bound vertex buffer pointer per stream (+12636+4*stream)','A'),
            ('+13168 / +12924','tiling rect table (8 bytes each) / rect count','B'),('+13408','ring lock / inline depth (non-zero suppresses kick)','B'),('+13732 / +13736','second write pointer / limit (fence & async block writes, `sub_888EBE50` grows it)','A'),('+14000..+24200','pools, counters, sub-object pointers (150 fields, unnamed)','C')):
    A('| %s | %s | %s |'%row)
A('\n### Dirty-mask bit -> register-group table\n')
A('Decoded from the flush idiom shared by the 11 draw/resolve/flush functions (`sub_888EDA10` Resolve, `sub_888ECC28`, `sub_888EC850`, `sub_888E9468`, `sub_888E3F80`, `sub_888E4460`, `sub_888E4E08`, `sub_888E4A18`, `sub_888EA360`, `sub_888F3210`, `sub_888F9A18`): `ld mask; isolate bit run; rldicr to the MSB; bl sub_888EF190(device, bits, register_base, device+shadow)`. Inside a run **bit b -> register base + (hi - b)** (the helper walks from the MSB with cntlzd). "setter agrees" = at least one D3D setter that ORs that bit also writes exactly that shadow word.\n')
A('| mask | bits | register base | shadow | note |')
A('|---|---|---|---|---|')
for g in out['_device_dirty_masks']['groups']: A('| %s | %s | %s | +%s | %s |'%(g['mask'],g['bits'],g['register_base'],g['shadow_offset'],g['order']))
for m in ('+16','+24','+32'):
    A('\n**mask %s**\n'%m)
    A('| bit | register | shadow | setters (band) | setter agrees |')
    A('|---|---|---|---|---|')
    for b,v in out['_device_dirty_masks']['bits'][m].items():
        A('| %s | %s | %s | %s | %s |'%(b,v['register'] or 'special / compound',('+%d'%v['shadow_offset']) if v['shadow_offset'] else '-',', '.join(v['setters'][:4])+(' (+%d)'%(len(v['setters'])-4) if len(v['setters'])>4 else ''),{True:'yes',False:'no (multi-field writer)',None:'-'}[v['setter_writes_shadow']]))
A('\nMasks +0/+8 (constants) and +40 have no register run; setters seen: mask +8 bit 11 (`sub_888E4460`), mask +40 bits 8/37/57 (`sub_888D5730`, `sub_888D73F0`, `sub_888D7390`). Mask +16 bits 17-20 and 58-63, mask +24 bits 0/9/11/12/14/25-31, mask +32 bits 38-41/46-63 are compound flags set by draw/resolve paths and by SetStreamSource/SetTexture-like setters; they are not one register each.\n')
A('## Resource layouts (band evidence vs XDK)\n')
A('| offset | D3DResource (all) | D3DVertexBuffer / IndexBuffer | D3DBaseTexture | D3DSurface | evidence |')
A('|---|---|---|---|---|---|')
A('| +0 | Common: type in bits 0-3 (1 VB, 2 IB, 3 texture, 4 surface, 8 command buffer seen in type checks), flags above | | | | Release checks `&0xF == 4` then bit 0x40000000; type checks 1/3/8 seen |')
A('| +4 | ReferenceCount (lwarx/stwcx in `sub_888D9838`, `sub_888D8720`) | | | | A |')
A('| +8 / +12 | Fence / ReadFence (device+10908 stored here by binders and by Resolve) | | | | B |')
A('| +16 / +20 | Identifier / BaseFlush | | | | B (XDK) |')
A('| +24 | | VB: fetch dword0 (type:2 / address:30); IB: address | MipFlush | Parent (released by Release for type 4) | A for VB (0x888D63E8 adds the byte offset to it) and surface Parent |')
A('| +28 | | VB: fetch dword1 (endian:2 / size:24); IB: size | fetch dword0 | surface info word | A for VB; B for texture |')
A('| +32..+48 | | | fetch dword1..dword5 (6 dwords read as a block by `sub_888D3B58` SetTexture-like, `sub_888EAC80`, `sub_888F9A18`; XGRAPHICS 0x889D7A78/0x889D8130 read the same words) | more surface words | B |')
A('| +52 | | | written by `sub_888F67F0` (texture ctor writes +0..+52) | | C |')
A('\nThe `resource` cluster also carries a 180-byte object written by `sub_888EC2F8` (64-bit words at +24..+72, dwords +108..+176) that is most likely a **D3DCommandBuffer** header snapshotting the device masks; the `vb_or_ib` cluster shows a byte read at +8 and a write at +32 that come from the XPS/`sub_888EEA40` pool path.\n')
A('## Leak set (functions outside the band that bypass the API)\n')
A('%d entries, %d functions (`layout_leaks.json`, ordered: fetch/mask bypassers first, then engine > other > XGRAPHICS, then by number of offsets). Negative results worth stating: **no** function outside the band writes PM4 through pointers obtained from the band\'s ring helpers (`sub_888E69E0`/`sub_888E6C10`), **no** function materialises a GPU MMIO address (0x7FC8xxxx), and **no** function outside the band writes the vertex-fetch shadow (+1776..+1919) or the ring pointers directly. The `li 92/95` hits in the engine (`sub_887F1DC0`, `sub_88812CC8`, `sub_8880CFD0`, `sub_8881B7D8`) are allocation sizes / loop counts, not fetch slots; the band\'s own 95 (`sub_888EF678`) is the vfetch-patching code (stream 0 = slot 95). Slot 92/95 programming therefore goes through the band\'s SetStreamSource-like entry `sub_888D63E8` (callers at 0x885EB290, 0x887C4A40..0x887FD0D8 pass stream 0..3), and the engine\'s "GpuSetTextureFetchConstant" mode shows up as direct edits of the texture-fetch dirty bits, listed first below.\n'%(len(leaks),len({l["fn"] for l in leaks})))
A('| va | band | object | kind | offsets | what | via |')
A('|---|---|---|---|---|---|---|')
for l in leaks: A('| %s | %s | %s | %s | %s | %s | %s |'%(l['va'],l['band'],l['object'],l['kind'],' '.join(str(o) for o in l['offsets'][:8]),l['what'].replace('|','/'),'; '.join(l['via'])[:90].replace('|','/')))
A('\n### Top leaks, explained\n')
A('1. `0x887FE138` / `0x887FDF28` / `0x887FDF78` / `0x8880DB30` / `0x88805CD0` / `0x88806648` (engine): read-modify-write the device masks with the same recipe — `sub_8880DB30` ORs 0xFFFFFFFFFFFFFFFC into masks A and B and, when `0x88F02B88 == 2`, ORs 0xFFFFFFC0 (bits 6-31 = tfetch 0-25) into mask D; `sub_887FE138` ANDs A and B back to bits 0-1 and mask D with 0xFFFFFFFF0000003F. This is the engine telling D3D "I have written the constants / texture fetch constants myself, do not re-emit them" (GPU-owned constants + GpuSetTextureFetchConstant mode). A native device must honour these mask edits or, better, override the six functions.')
A('2. `0x884990E0` (game code): inlined `SetPixelShaderConstantF` — writes c256 (+6016..+6028) into the ALU shadow and ORs mask B. Expect more of these once W1-a names the inline helpers; any native device must keep the ALU shadow at +1920 coherent or hook the shadow writes.')
A('3. `0x8864B168` (game code): edits texture fetch constant dword3 (filters/aniso) of tfetch slots 0 and 1 in the device shadow (+1164, +1188) and ORs mask D — a sampler-state bypass.')
A('4. `0x8864E808`, `0x88815130`: mask A/B/D read-modify-write around a band call (same protocol as 1).')
A('5. XGRAPHICS `0x889D7A78`, `0x889D7CF8`, `0x889D8130`, `0x889D8B10`, `0x88905D58`: read (and in 0x889D8B10 write) the texture/vertex-buffer fetch-constant words +24..+48 of resources they receive — the XGGetTextureDesc / XGSetTextureHeader family; harmless for a native device as long as the guest resource headers are kept in XDK layout.')
A('6. `0x88936518` (XGRAPHICS): edits `Common` (+0) of a resource before Release — resource type/flag bypass, benign.')
A('\n## Caveats / open items for W2-d\n')
A('- The census is linear (no CFG); a tag can be stale after a join, so a few field attributions may be one branch off. Widths come from mnemonics; 1/2-byte accesses to mask offsets (+0 w2/w4) are partial reads of the 64-bit masks.')
A('- Roles are propagated through the band call graph; params of generic helpers that never dereference their argument are excluded, but a wrongly seeded role can still spread (check `_band_param_roles[fn][aN].evidence`).')
A('- Mask D bit order for the 26 texture fetch slots (bit 31-s vs 6+s) and the mask A/B bit granularity are inferred, not decoded.')
A('- The engine renderer band extends below 0x887F0000: SetStreamSource-like callers sit at 0x887C4A40..0x887CB660 and 0x885EB290; the "other" band in the leak list includes them.')
A('- Not found statically: the band function that emits texture fetch constants straight to the ring for `GpuSetTextureFetchConstant` mode; runtime tracing of mask D edits will locate it.')
open(D+'layouts.md','w').write('\n'.join(md)+'\n')
sys.stderr.write('wrote layouts.md (%d lines)\n'%len(md))
