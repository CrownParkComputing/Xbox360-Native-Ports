/* W1-d: scan every entry of a big-endian Split/Second .ARK (raw or LZSS) for Xbox 360
   compiled-shader blobs (magic 0x102A1100 VS / 0x102A1101 PS, preceded by a size dword)
   and append each blob's ucode (offset word[2]+4, size word[3]) to an output file:
   record = u32 BE entry index, u32 BE hash, u32 BE type, u32 BE ucode bytes, ucode.
   usage: w1d_arkscan ARK out.bin */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
static uint32_t be(const uint8_t*p){return (p[0]<<24)|(p[1]<<16)|(p[2]<<8)|p[3];}
static void wbe(FILE*f,uint32_t v){uint8_t b[4]={v>>24,v>>16,v>>8,v};fwrite(b,1,4,f);}
static size_t lzss(const uint8_t*d,size_t n,uint8_t*out,size_t size){
  uint8_t hist[4096]; memset(hist,0,4096); size_t pos=4,o=0; unsigned ring=0xfee,flags=0;
  while(o<size){ flags>>=1; if(!(flags&0x100)){ if(pos>=n)break; flags=d[pos++]|0xff00; }
    if(flags&1){ if(pos>=n)break; uint8_t b=d[pos++]; out[o++]=b; hist[ring]=b; ring=(ring+1)&0xfff; }
    else { if(pos+1>=n)break; unsigned lo=d[pos],hi=d[pos+1]; pos+=2; unsigned off=lo|((hi&0xf0)<<4),ln=(hi&15)+3;
      for(unsigned i=0;i<ln&&o<size;i++){ uint8_t b=hist[(off+i)&0xfff]; out[o++]=b; hist[ring]=b; ring=(ring+1)&0xfff; } } }
  return o; }
int main(int argc,char**argv){
  FILE*f=fopen(argv[1],"rb"); FILE*out=fopen(argv[2],"wb"); uint8_t h[24]; fread(h,1,24,f);
  uint32_t cnt=be(h+8),off=be(h+12); fseek(f,8+off,SEEK_SET); uint8_t*t=malloc(cnt*20); fread(t,1,cnt*20,f);
  size_t cap=64<<20; uint8_t*raw=malloc(cap),*dec=malloc(cap); long nblob=0,nent=0,nfxc=0;
  for(uint32_t i=0;i<cnt;i++){ uint32_t typ=be(t+i*20),eo=be(t+i*20+4),st=be(t+i*20+8),hash=be(t+i*20+16);
    if(st>cap){fprintf(stderr,"skip big %u\n",i);continue;}
    fseek(f,eo,SEEK_SET); fread(raw,1,st,f); const uint8_t*d=raw; size_t n=st;
    if(typ==1){ uint32_t sz=be(raw); if(sz>cap){fprintf(stderr,"skip big dec %u\n",i);continue;} n=lzss(raw,st,dec,sz); d=dec; }
    else if(typ!=0) continue;
    int isfxc = n>=4 && d[0]==0 && d[1]=='F' && d[2]=='X' && d[3]=='C'; if(isfxc) nfxc++;
    int found=0;
    for(size_t p=4;p+16<=n;p+=1){ if(d[p]==0x10&&d[p+1]==0x2a&&d[p+2]==0x11&&(d[p+3]==0||d[p+3]==1)){
        uint32_t size=be(d+p-4),uoff=be(d+p+4),ulen=be(d+p+8); if(size<16||size>1<<20||uoff+ulen>size+8||p-4+uoff+4+ulen>n) continue;
        wbe(out,i);wbe(out,hash);wbe(out,d[p+3]);wbe(out,ulen); fwrite(d+p+uoff,1,ulen,out); nblob++; found++; } }
    if(found){ nent++; if(!isfxc) printf("entry %u hash %08X typ %u len %zu blobs %d head %02x%02x%02x%02x%02x%02x%02x%02x\n",i,hash,typ,n,found,d[0],d[1],d[2],d[3],d[4],d[5],d[6],d[7]); }
  }
  printf("%s: entries %u, fxc files %ld, entries with blobs %ld, blobs %ld\n",argv[1],cnt,nfxc,nent,nblob); fclose(out); return 0; }
