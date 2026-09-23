#!/usr/bin/env python3
"""W1-d: emit docs/d3d/xgraphics.json — the entry points of the XGRAPHICS / D3DX / HLSL
compiler band (0x88903530-0x88AFBF00) with names, tiers, arity, callers and class.
Callers come from docs/d3d/w1d_callgraph.json (run w1d_callgraph.py first); names and
classes are the static analysis recorded in docs/d3d/xgraphics.md."""
import json,collections,os
ROOT=os.path.expanduser('~/ss-recomp')
g=json.load(open(ROOT+'/docs/d3d/w1d_callgraph.json'))
LO,HI=0x88903530,0x88AFBF00
ent=collections.defaultdict(set)
for k,d in g.items():
    v=int(k,16)
    if LO<=v<HI: continue
    for c in d['calls']:
        if LO<=int(c,16)<HI: ent[c].add(k)
# va: (name, tier, arity, class, notes)
A={
'88904188':('XGCompileShaderEx','A',11,'shader_compile','pSrcData,SrcDataSize,pDefines,pInclude,pFunctionName,pProfile,Flags,ppShader,ppErrorMsgs,ppConstantTable,pCompileParameters. Wraps source in a reader object (vtable 0x88119A1C) and calls the common core sub_88904000 (which checks profile[0] in {v,p}); output is an ID3DXBuffer (sub_8890BBA8 creates it, vtable 0x8811B668) whose GetBufferPointer returns a 0x102A1100/0x102A1101 compiled-shader blob. Only caller sub_88647C48 (engine: compile one PS from a runtime-built HLSL string table, profile ps_1_1, entry main), itself called only from sub_88649400 (bootstrap: up to 30 PS + 5 VS, Scaleform-GFx-style renderer init).'),
'889042D8':('XGCompileShader','A',10,'shader_compile','Same core as 88904188 with pCompileParameters=NULL. Callers: sub_88647B48 (engine: up to 5 VS, profile vs_1_1, from table 0x88F01708 filled at runtime) and sub_88499218 (three inline HLSL strings at 0x88073xxx: "struct VS_DATA...", "sampler tex0 : register(s0)..." with vs_2_0/ps_2_0/ps_2_0, results stored in globals 0x88F0827x and fed to D3D CreatePixelShader/CreateVertexShader). All compile-band traffic is at startup; nothing on the material path.'),
'88904418':('D3DX_LoadSurfaceFromMemory_like','C',12,'d3dx_texture','12 args: (pTexture, 0, 0, pSrcMemory, SrcFormat(GPU format e.g. 0x1A200086), SrcPitch, 0, pSrcRect(required, +8/+12 = w/h), Filter, Width(1..8192), Height(1..8192), Flags(-1 -> 0x00080004)). Returns D3DERR_INVALIDCALL (0x8876086C) on bad args; uses XGGetTextureDesc, XGGetMipTailBaseLevel, sub_889D8650/sub_889D8130 (layout) and the tiling helpers. Single caller sub_8864D1A8 (engine texture upload, creates textures with GPU formats 0x18280186/0x1A200152...), which has NO static callers (reached virtually) - hook to see if it is ever hit.'),
'88906530':('D3DXCreateTextureFromFileExA','B',14,'d3dx_texture','(pDevice, pSrcFile, Width=-1, Height=-1, MipLevels=-1, Usage=0, Format=-1, Pool=0, Filter=-1, MipFilter=-1, ColorKey=0, pSrcInfo=0, pPalette=0, ppTexture). Opens the file via sub_88932870/88932888 and decodes with the D3DX image loaders (closure contains the Radiance "#?RADIANCE"/"32-bit_rle_rgbe" HDR parser). Single caller sub_8864D928 (engine, 0 static callers - virtual). Likely never used in game; hook to confirm.'),
'8890C978':('StringCchPrintfA','A',3,'crt','strsafe: rejects cchDest > 0x7FFFFFFF with STRSAFE_E_INVALID_PARAMETER (0x80070057), va_list into sub_88907B20. Linked inside the band but is CRT, used by the FMOD audio-format reporter sub_88B1BB78. Not XG.'),
'889D8128':('XGGetTextureDesc','B',3,'xg_header_helper','Tail jump to sub_889D7CF8: (pTexture, Level, pDesc): switches on D3D resource type (3,4,16..20 via D3D sub_888D8428 GetType) and fills the desc from D3D GetLevelDesc (sub_888D3710). Pure CPU, writes only *pDesc. Callers: sub_887FA470 (cRenderableGeom2 area), 887FF430, 887FF480, 88808B38, 888190D8, 88819108, 88819138.'),
'889D8130':('XGGetTextureLayout_family','C',2,'xg_header_helper','(pTexture, pOut): reads texture w/h/depth through D3D sub_888D19C0, computes log2 tail dimensions and writes pOut+56.... Pure CPU. Callers: sub_884580E8 (engine), and internally D3DX 88904418.'),
'889D8438':('XGGetMipTailBaseLevel','B',3,'xg_header_helper','(Width, Height, Border): pure arithmetic (cntlzw on w/h). Caller sub_8849E768.'),
'889D86D8':('XGSetVertexBufferHeader','A',5,'xg_header_helper','(Length, Usage, Pool, BaseAddress, pHeader): memset(pHeader,0,32); Common=1 (|0x00200001 when Usage&4, |0x00400000 when Usage&0x200), ReferenceCount=1, BaseFlush=0xFFFF0000 at +20, Address|3 at +24, Size/flags at +28. Guest-struct only. Callers sub_887C5500, 887C91C0, 887C99C8 (engine XPS/vertex-pool code).'),
'889D8978':('XGSetTextureHeader','A',12,'xg_header_helper','(Width, Height, Levels, Usage, Format, Pool, BaseOffset, MipOffset, Pitch, pTexture, pBaseSize, pMipSize) -> common core sub_889D8770 with Depth=1, dimension constant 3 in the 13th core slot; the core calls D3D format helpers sub_888D1B28 (block dims) and fills the 52-byte GPUTEXTURE_FETCH_CONSTANT. Callers sub_88498EF0, 88499448, 88499A70, 88806E58, 888070C8, 888072E8.'),
'889D89E8':('XGSetArrayTextureHeader (or Volume)','B',13,'xg_header_helper','13 args, passes r5 (Depth/ArraySize) through to the core, constant 19. Callers sub_88806E58, 888070C8 (engine texture creation).'),
'889D8A48':('XGSetTextureHeaderEx','B',13,'xg_header_helper','13 args, constant 17, extra zeroed slots (ExpBias/Flags path). Caller sub_88806E58.'),
'889D8AA8':('XGOffsetBaseTextureAddress','A',3,'xg_header_helper','(pTexture, BaseOffset, MipOffset): adds offsets into the fetch-constant BaseAddress (+32, top 20 bits) and MipAddress (+48) after D3D sub_888D3468 (level count) check. Callers sub_887FF308, 88801BC0, 88806E58, 888070C8, 888072E8.'),
'889D8B10':('XGOffsetResourceAddress','A',2,'xg_header_helper','(pResource, Offset): switch on D3D GetType (sub_888D8428): 1 (vertex buffer +24), 6 (index buffer +32), 2/7/8 and 16..20 textures -> XGOffsetBaseTextureAddress. Callers sub_88499A70, 887C5500, 887C91C0, 887C99C8.'),
'889D95C0':('XGTileTextureLevel','A',10,'xg_tiling','(Width, Height, Level, GpuFormat, Flags, pDestination, pPoint, pSource, RowPitch, pRect): bpp from the format table at 0x88000B30, block dims from sub_889D8678. CPU memory copy with 2D tiling. Caller sub_887FEE70 (from sub_884139A8, texture streaming).'),
'889D9820':('XGUntileTextureLevel','A',10,'xg_tiling','(Width, Height, Level, GpuFormat, Flags, pDestination, RowPitch, pPoint, pSource, pRect). Caller sub_887FED40 (from sub_884139A8).'),
'88AB63F0':('xg_static_init_ctor_44','C',2,'static_init','memset(obj,0,44) then packs arg (114) into obj+8 bitfield |0x00400000. Called from static initializer sub_88E581C0 with global 0x88F07E38 (compiler-internal registry, SSM state-query table). Must run once; harmless.'),
'88AB70F0':('xg_static_init_ctor_20','C',2,'static_init','zero 5 words, +16=r4, +0|=0x80000000, links object into r4+4. Called from static initializer sub_88E581D0 (0x88F07E64 <- 0x88F07E38).'),
'88929DE0':('ID3DXBuffer::GetBufferPointer (ICF)','A',1,'icf_trivial','lwz r3,12(r3). Slot 3 of the buffer vtable 0x8811B668 (QI 8890BA88, AddRef 8890B9C0, Release 8890B9D8). Engine callers sub_882D6160/882D6748 reach it only through identical-code folding of an unrelated getter.'),
'889362A0':('zero5_ctor (ICF)','A',1,'icf_trivial','stores 0 to +0..+16. Also used by D3DX 88904418. Engine callers 88B27BB0/88B27C10 are ICF aliases.'),
'889660A0':('return_arg2 (ICF)','A',2,'icf_trivial','mr r3,r4; blr. Nine engine callers at 0x882DCxxx are ICF aliases.'),
'889BBEF0':('return_1 (ICF)','A',0,'icf_trivial','li r3,1. Callers sub_887A0A58, 888BBDF8.'),
'889DA120':('vcall_slot2_thunk (ICF)','A',1,'icf_trivial','lwz r11,0(r3); lwz r11,8(r11); bctr. Caller sub_88D24148.'),
'88ADFEA8':('store0_at4 (ICF)','A',1,'icf_trivial','stw 0,4(r3). Callers 882DD5D0, 882DE248.'),
'88AE4A80':('load_at20 (ICF)','A',1,'icf_trivial','lwz r3,20(r3). Callers 882D6748, 882D8FE8.'),
'88AE4AA8':('return_3 (ICF)','A',0,'icf_trivial','li r3,3. Caller sub_887ACCD8 (this-adjust thunk).'),
'88AEBF20':('return_2 (ICF)','A',0,'icf_trivial','li r3,2. Caller sub_887A0D80 (this-adjust thunk).'),
}
out=[]
for va in sorted(ent):
    name,tier,ar,cls,notes=A.get(va,('UNNAMED','C',None,'unknown',''))
    out.append({'va':'0x'+va,'name':name,'tier':tier,'arity':ar,'callers':sorted('0x'+c for c in ent[va]),'class':cls,'notes':notes})
missing=[va for va in A if va not in ent]
doc={'band':{'lo':'0x88903530','hi':'0x88AFBF00','functions':sum(1 for k in g if LO<=int(k,16)<HI),
     'note':'Re-derived: 0x88903000-0x88903530 is xapilib/CRT (MultiByteToWideChar core sub_88903108, SystemTimeToFileTime wrapper sub_88903318, large-page alloc helper sub_88903068); 0x88AFBFA8-0x88B00000 is engine allocator/list code (pool allocator sub_88AFC8C8 = the "57-caller" entry, refcount lock sub_88AFC7B0, list unlink sub_88AFD408, delete thunk sub_88AFC070). Those account for the difference between the original 61 entry points and the 27 here.'},
     'entry_points':out,
     'vtable_reached':[{'vtable':'0x8811B668','object':'ID3DXBuffer (16 bytes: vtable, refcount, size@+8, data@+12) created by sub_8890BBA8','slots':['0x8890BA88 QueryInterface','0x8890B9C0 AddRef','0x8890B9D8 Release','0x88929DE0 GetBufferPointer']},
                       {'vtable':'0x88EA8F50','object':'SSM state-query table (44 E_COMPILEWITH_* entries, names at 0x88EB63C4: CompileWithTransformedVertices, CompileWithTableFogALU, CompileGetZScale, CompileGetZOffset, CompileGetMemExportConstant0..3Pix, CompileWithMaxSizeVfetches, CompileGetVertexDwordsFetched, CompileWithShadowBuffering, CompileWithMSAAFilterFunctionPoint, CompileGetPointSizeMax/Min, CompileWithPointSizeClamp...) dispatched by sub_88AA1DE8 from the compiler back end only (chain 889F2D80 <- 889EFE58/88AA25F0 <- 889E0228/889F54B8 <- ... <- 88903AC0 XGCompileShader core). Config table at 0x88EA8EF4 (SSMMaxRSVidMem=0x1F400, SSMMaxVSVidMem, SSMMaxPSVidMem, SSMMaxVSSize=0x2EE0, SSMMaxPSSize, SSMStateCacheBypass=1, SSMCompilerVFetchMaxSize=1, SSMPrecompileEnable=0, SSMShaderRecyclingEnable, SSMUseTranslator, SSMImmediatePacketFlags).'}],
     'd3d_band_functions_called_from_xg':['0x888E0910','0x888DCD10','0x888D9838 (Release)','0x888DD008','0x888E0710','0x888D1B28 (format block dims)','0x888D1C48','0x888D8428 (GetType)','0x888DCD40','0x888E0718','0x888DB860','0x888E0770','0x888DCCB0','0x888E0790','0x888E0798','0x888D19C0 (texture w/h/d)','0x888D1B10','0x888DB810','0x888E0088','0x888E00A0','0x888D3710 (GetLevelDesc)','0x888D3468 (level count)'],
     'd3d_band_to_xg_calls':0,
     'missing_from_callgraph':missing}
json.dump(doc,open(ROOT+'/docs/d3d/xgraphics.json','w'),indent=1)
cls=collections.Counter(e['class'] for e in out); tiers=collections.Counter(e['tier'] for e in out)
print('entries',len(out),dict(cls),dict(tiers),'missing',missing)
