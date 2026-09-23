#!/usr/bin/env python3
"""Parse a 360 .fxc (from RESIDENT.ARK) and compare its shader blobs with the runtime
shader cache (425607E7.xsh). Usage: w1d_fxc360.py file.fxc [more.fxc...]"""
import struct,sys,re,os,collections
CACHE=os.path.expanduser('~/ss-recomp/content_root/cache/shaders/shareable/425607E7.xsh')
def load_cache():
    d=open(CACHE,'rb').read(); pos=8; out=[]
    while pos+12<=len(d):
        h,ct=struct.unpack('<QI',d[pos:pos+12]); n=ct&0x7fffffff; t=ct>>31; pos+=12
        out.append((h,t,d[pos:pos+4*n])); pos+=4*n
    return out
def blobs(b):
    """find 360 compiled-shader blobs by magic 0x102A1100 (VS) / 0x102A1101 (PS)."""
    out=[]
    for m in re.finditer(rb'\x10\x2a\x11[\x00\x01]',b):
        o=m.start()
        if o<4: continue
        size=struct.unpack('>I',b[o-4:o])[0]
        out.append((o-4,size,b[o+3]))
    return out
def parse_blob(b,o):
    # header words (BE) after size: magic, then offsets; return dict of first 12 words
    w=struct.unpack('>12I',b[o:o+48]); return w
if __name__=='__main__':
    cache=load_cache(); print('cache shaders',len(cache))
    idx={}
    for h,t,u in cache: idx.setdefault(u[:32],[]).append((h,t,len(u)))
    for fn in sys.argv[1:]:
        b=open(fn,'rb').read()
        print('==',fn,len(b),'hdr',b[:32].hex())
        bl=blobs(b); print(' blobs',len(bl),collections.Counter(x[2] for x in bl))
        hit=0; sub=0; shown=0
        for o,size,t in bl:
            w=parse_blob(b,o); body=b[o:o+size+4]
            found=[k for k in idx if k in body]
            if found: hit+=1
            if shown<4:
                print('  blob@%x size=%d type=%d words=%s found=%s'%(o,size,t,' '.join('%08X'%x for x in w[:10]),[( '%016X'%h,t2,n) for k in found for h,t2,n in idx[k]][:2])); shown+=1
        print(' blobs containing a cache shader prefix:',hit,'of',len(bl))
        # reverse: how many cache shaders have their first 32 bytes somewhere in this fxc
        rev=sum(1 for k in idx if k in b)
        print(' cache shader prefixes present in fxc:',rev,'of',len(idx))
