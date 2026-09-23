#include "soulcalibur2_funcs.56.h"

DEFINE_REX_FUNC(sub_820E22E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fsqrts f1,f0
	ctx.f1.f64 = double(float(sqrt(ctx.f0.f64)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E5158) {
	REX_FUNC_PROLOGUE();
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e74
	ctx.lr = 0x820E5160;
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r28,8(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r23,0
	r23.s64 = 0;
	// cmpwi cr6,r11,1000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1000, ctx.xer);
	// sth r10,10034(r3)
	REX_STORE_U16(ctx.r3.u32 + 10034, ctx.r10.u16);
	// bgt cr6,0x820e67c4
	if (ctx.cr6.gt) goto loc_820E67C4;
	// beq cr6,0x820e67b8
	if (ctx.cr6.eq) goto loc_820E67B8;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// bgt cr6,0x820e6864
	if (ctx.cr6.gt) goto loc_820E6864;
	// lis r12,-32256
	ctx.r12.s64 = -2113929216;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,15696
	ctx.r12.s64 = ctx.r12.s64 + 15696;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// addi r12,r12,20936
	ctx.r12.s64 = ctx.r12.s64 + 20936;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820E5960;
	case 1:
		goto loc_820E5B00;
	case 2:
		goto loc_820E5B38;
	case 3:
		goto loc_820E5C84;
	case 4:
		goto loc_820E5CAC;
	case 5:
		goto loc_820E5CB8;
	case 6:
		goto loc_820E5D90;
	case 7:
		goto loc_820E6864;
	case 8:
		goto loc_820E6498;
	case 9:
		goto loc_820E66C8;
	case 10:
		goto loc_820E66EC;
	case 11:
		goto loc_820E5658;
	case 12:
		goto loc_820E5668;
	case 13:
		goto loc_820E5F94;
	case 14:
		goto loc_820E570C;
	case 15:
		goto loc_820E5718;
	case 16:
		goto loc_820E66D4;
	case 17:
		goto loc_820E5484;
	case 18:
		goto loc_820E572C;
	case 19:
		goto loc_820E61B4;
	case 20:
		goto loc_820E62DC;
	case 21:
		goto loc_820E5FCC;
	case 22:
		goto loc_820E6054;
	case 23:
		goto loc_820E54A4;
	case 24:
		goto loc_820E5530;
	case 25:
		goto loc_820E6070;
	case 26:
		goto loc_820E655C;
	case 27:
		goto loc_820E5FA8;
	case 28:
		goto loc_820E56C4;
	case 29:
		goto loc_820E56D0;
	case 30:
		goto loc_820E63CC;
	case 31:
		goto loc_820E5770;
	case 32:
		goto loc_820E5DF8;
	case 33:
		goto loc_820E6864;
	case 34:
		goto loc_820E611C;
	case 35:
		goto loc_820E6134;
	case 36:
		goto loc_820E57E0;
	case 37:
		goto loc_820E58A0;
	case 38:
		goto loc_820E5B10;
	case 39:
		goto loc_820E5B30;
	case 40:
		goto loc_820E5C8C;
	case 41:
		goto loc_820E5CA4;
	case 42:
		goto loc_820E6354;
	case 43:
		goto loc_820E5EA0;
	case 44:
		goto loc_820E5EB4;
	case 45:
		goto loc_820E5EBC;
	case 46:
		goto loc_820E577C;
	case 47:
		goto loc_820E5544;
	case 48:
		goto loc_820E5218;
	case 49:
		goto loc_820E51C8;
	case 50:
		goto loc_820E524C;
	case 51:
		goto loc_820E526C;
	case 52:
		goto loc_820E5274;
	case 53:
		goto loc_820E52C0;
	case 54:
		goto loc_820E5304;
	case 55:
		goto loc_820E535C;
	case 56:
		goto loc_820E5FF4;
	case 57:
		goto loc_820E601C;
	case 58:
		goto loc_820E6030;
	case 59:
		goto loc_820E6040;
	case 60:
		goto loc_820E5490;
	case 61:
		goto loc_820E6154;
	case 62:
		goto loc_820E6168;
	case 63:
		goto loc_820E5498;
	case 64:
		goto loc_820E6078;
	case 65:
		goto loc_820E573C;
	case 66:
		goto loc_820E628C;
	case 67:
		goto loc_820E5FB8;
	case 68:
		goto loc_820E6394;
	case 69:
		goto loc_820E639C;
	case 70:
		goto loc_820E63A4;
	case 71:
		goto loc_820E63BC;
	case 72:
		goto loc_820E54B4;
	case 73:
		goto loc_820E53A0;
	case 74:
		goto loc_820E53CC;
	case 75:
		goto loc_820E53EC;
	case 76:
		goto loc_820E540C;
	case 77:
		goto loc_820E542C;
	case 78:
		goto loc_820E5464;
	case 79:
		goto loc_820E5470;
	case 80:
		goto loc_820E6170;
	case 81:
		goto loc_820E6490;
	case 82:
		goto loc_820E5AF0;
	case 83:
		goto loc_820E5C78;
	case 84:
		goto loc_820E66E0;
	case 85:
		goto loc_820E5764;
	case 86:
		goto loc_820E61A0;
	case 87:
		goto loc_820E642C;
	case 88:
		goto loc_820E6008;
	case 89:
		goto loc_820E5564;
	case 90:
		goto loc_820E5574;
	case 91:
		goto loc_820E5604;
	case 92:
		goto loc_820E5FE0;
	case 93:
		goto loc_820E623C;
	case 94:
		goto loc_820E5478;
	case 95:
		goto loc_820E5678;
	case 96:
		goto loc_820E5688;
	case 97:
		goto loc_820E56DC;
	case 98:
		goto loc_820E56E8;
	case 99:
		goto loc_820E60DC;
	case 100:
		goto loc_820E6108;
	case 101:
		goto loc_820E57D8;
	case 102:
		goto loc_820E5698;
	case 103:
		goto loc_820E56AC;
	case 104:
		goto loc_820E56F4;
	case 105:
		goto loc_820E5700;
	case 106:
		goto loc_820E6754;
	case 107:
		goto loc_820E54AC;
	case 108:
		goto loc_820E6038;
	case 109:
		goto loc_820E676C;
	case 110:
		goto loc_820E6794;
	case 111:
		goto loc_820E6094;
	case 112:
		goto loc_820E60AC;
	case 113:
		goto loc_820E60C4;
	case 114:
		goto loc_820E60D0;
	case 115:
		goto loc_820E5620;
	case 116:
		goto loc_820E614C;
	case 117:
		goto loc_820E557C;
	case 118:
		goto loc_820E5584;
	case 119:
		goto loc_820E558C;
	case 120:
		goto loc_820E55DC;
	case 121:
		goto loc_820E55F8;
	case 122:
		goto loc_820E5634;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_820E51C8:
	// lbz r11,174(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 174);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820e51dc
	if (!ctx.cr0.eq) goto loc_820E51DC;
	// lwz r11,5780(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 5780);
	// b 0x820e51f8
	goto loc_820E51F8;
loc_820E51DC:
	// lbz r11,205(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 205);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820e51f4
	if (!ctx.cr0.eq) goto loc_820E51F4;
	// lbz r11,176(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 176);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820e608c
	if (ctx.cr0.eq) goto loc_820E608C;
loc_820E51F4:
	// lwz r11,5776(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 5776);
loc_820E51F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e608c
	if (ctx.cr6.eq) goto loc_820E608C;
	// lhz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 52);
loc_820E5204:
	// lhz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 2);
loc_820E5208:
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_820E520C:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
loc_820E5210:
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x820e6868
	goto loc_820E6868;
loc_820E5218:
	// lbz r11,174(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 174);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820e522c
	if (!ctx.cr0.eq) goto loc_820E522C;
	// lwz r11,5768(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 5768);
	// b 0x820e51f8
	goto loc_820E51F8;
loc_820E522C:
	// lbz r11,205(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 205);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820e5244
	if (!ctx.cr0.eq) goto loc_820E5244;
	// lbz r11,176(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 176);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820e608c
	if (ctx.cr0.eq) goto loc_820E608C;
loc_820E5244:
	// lwz r11,5776(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 5776);
	// b 0x820e51f8
	goto loc_820E51F8;
loc_820E524C:
	// lwz r11,5780(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 5780);
loc_820E5250:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e6864
	if (ctx.cr6.eq) goto loc_820E6864;
	// lhz r11,50(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 50);
	// lhz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 2);
loc_820E5260:
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_820E5264:
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// b 0x820e6868
	goto loc_820E6868;
loc_820E526C:
	// lwz r11,5768(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 5768);
	// b 0x820e5250
	goto loc_820E5250;
loc_820E5274:
	// addic. r11,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	ctx.r11.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820e52ac
	if (ctx.cr0.eq) goto loc_820E52AC;
	// addi r11,r31,2
	ctx.r11.s64 = r31.s64 + 2;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x820e6864
	if (!ctx.cr6.gt) goto loc_820E6864;
	// lwz r10,5560(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 5560);
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_820E5290:
	// lha r9,0(r11)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820e52a0
	if (!ctx.cr6.eq) goto loc_820E52A0;
	// li r23,1
	r23.s64 = 1;
loc_820E52A0:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x820e5290
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E5290;
	// b 0x820e6864
	goto loc_820E6864;
loc_820E52AC:
	// lwz r11,5560(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 5560);
loc_820E52B0:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x820e6864
	if (ctx.cr6.lt) goto loc_820E6864;
loc_820E52B8:
	// li r23,1
	r23.s64 = 1;
	// b 0x820e6864
	goto loc_820E6864;
loc_820E52C0:
	// addic. r11,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	ctx.r11.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820e52fc
	if (ctx.cr0.eq) goto loc_820E52FC;
	// addi r11,r31,2
	ctx.r11.s64 = r31.s64 + 2;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x820e6864
	if (!ctx.cr6.gt) goto loc_820E6864;
	// lwz r10,5560(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 5560);
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_820E52E0:
	// lhau r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ea));
	ctx.r11.u32 = ea;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// or r23,r9,r23
	r23.u64 = ctx.r9.u64 | r23.u64;
	// bdnz 0x820e52e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E52E0;
	// b 0x820e6864
	goto loc_820E6864;
loc_820E52FC:
	// lwz r11,5560(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 5560);
	// b 0x820e52b0
	goto loc_820E52B0;
loc_820E5304:
	// addic. r11,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	ctx.r11.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820e5340
	if (ctx.cr0.eq) goto loc_820E5340;
	// addi r11,r31,2
	ctx.r11.s64 = r31.s64 + 2;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x820e6864
	if (!ctx.cr6.gt) goto loc_820E6864;
	// lwz r10,5564(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 5564);
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_820E5324:
	// lhau r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ea));
	ctx.r11.u32 = ea;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// or r23,r9,r23
	r23.u64 = ctx.r9.u64 | r23.u64;
	// bdnz 0x820e5324
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E5324;
	// b 0x820e6864
	goto loc_820E6864;
loc_820E5340:
	// lwz r10,5564(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 5564);
loc_820E5344:
	// li r11,4
	ctx.r11.s64 = 4;
loc_820E5348:
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// adde r3,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x820e6868
	goto loc_820E6868;
loc_820E535C:
	// addic. r11,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	ctx.r11.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820e5398
	if (ctx.cr0.eq) goto loc_820E5398;
	// addi r11,r31,2
	ctx.r11.s64 = r31.s64 + 2;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x820e6864
	if (!ctx.cr6.gt) goto loc_820E6864;
	// lwz r10,5564(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 5564);
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_820E537C:
	// lhau r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ea));
	ctx.r11.u32 = ea;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// or r23,r9,r23
	r23.u64 = ctx.r9.u64 | r23.u64;
	// bdnz 0x820e537c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E537C;
	// b 0x820e6864
	goto loc_820E6864;
loc_820E5398:
	// lwz r10,5564(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 5564);
	// b 0x820e5344
	goto loc_820E5344;
loc_820E53A0:
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820e53b8
	if (ctx.cr6.lt) goto loc_820E53B8;
	// bne cr6,0x820e6864
	if (!ctx.cr6.eq) goto loc_820E6864;
	// lhz r11,5822(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 5822);
	// b 0x820e5204
	goto loc_820E5204;
loc_820E53B8:
	// lha r11,5822(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 5822));
loc_820E53BC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_820E53C0:
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x820e6868
	goto loc_820E6868;
loc_820E53CC:
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820e53e4
	if (ctx.cr6.lt) goto loc_820E53E4;
	// bne cr6,0x820e6864
	if (!ctx.cr6.eq) goto loc_820E6864;
	// lhz r11,5824(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 5824);
	// b 0x820e5204
	goto loc_820E5204;
loc_820E53E4:
	// lha r11,5824(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 5824));
	// b 0x820e53bc
	goto loc_820E53BC;
loc_820E53EC:
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820e5404
	if (ctx.cr6.lt) goto loc_820E5404;
	// bne cr6,0x820e6864
	if (!ctx.cr6.eq) goto loc_820E6864;
	// lhz r11,5520(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 5520);
	// b 0x820e5204
	goto loc_820E5204;
loc_820E5404:
	// lha r11,5520(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 5520));
	// b 0x820e53bc
	goto loc_820E53BC;
loc_820E540C:
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820e5424
	if (ctx.cr6.lt) goto loc_820E5424;
	// bne cr6,0x820e6864
	if (!ctx.cr6.eq) goto loc_820E6864;
	// lhz r11,5522(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 5522);
	// b 0x820e5204
	goto loc_820E5204;
loc_820E5424:
	// lha r11,5522(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 5522));
	// b 0x820e53bc
	goto loc_820E53BC;
loc_820E542C:
	// lha r10,5822(r30)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r30.u32 + 5822));
	// lha r9,5520(r30)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r30.u32 + 5520));
loc_820E5434:
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820e5454
	if (ctx.cr6.lt) goto loc_820E5454;
	// bne cr6,0x820e6864
	if (!ctx.cr6.eq) goto loc_820E6864;
loc_820E5448:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
loc_820E544C:
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// b 0x820e520c
	goto loc_820E520C;
loc_820E5454:
	// neg r11,r10
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// b 0x820e6868
	goto loc_820E6868;
loc_820E5464:
	// lha r10,5822(r30)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r30.u32 + 5822));
loc_820E5468:
	// lha r9,5522(r30)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r30.u32 + 5522));
	// b 0x820e5434
	goto loc_820E5434;
loc_820E5470:
	// lha r10,5824(r30)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r30.u32 + 5824));
	// b 0x820e5468
	goto loc_820E5468;
loc_820E5478:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lwz r10,5852(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 5852);
	// b 0x820e5348
	goto loc_820E5348;
loc_820E5484:
	// lhz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 88);
loc_820E5488:
	// lhz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 2);
	// b 0x820e544c
	goto loc_820E544C;
loc_820E5490:
	// lhz r11,88(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 88);
	// b 0x820e5488
	goto loc_820E5488;
loc_820E5498:
	// lhz r11,88(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 88);
	// lhz r10,88(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 88);
	// b 0x820e544c
	goto loc_820E544C;
loc_820E54A4:
	// lhz r11,100(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 100);
	// b 0x820e5488
	goto loc_820E5488;
loc_820E54AC:
	// lhz r11,90(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 90);
	// b 0x820e5488
	goto loc_820E5488;
loc_820E54B4:
	// lhz r11,90(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 90);
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bgt cr6,0x820e54ec
	if (ctx.cr6.gt) goto loc_820E54EC;
	// beq cr6,0x820e5514
	if (ctx.cr6.eq) goto loc_820E5514;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x820e550c
	if (ctx.cr6.lt) goto loc_820E550C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// ble cr6,0x820e5514
	if (!ctx.cr6.gt) goto loc_820E5514;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x820e5514
	if (ctx.cr6.eq) goto loc_820E5514;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// ble cr6,0x820e550c
	if (!ctx.cr6.gt) goto loc_820E550C;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// b 0x820e5508
	goto loc_820E5508;
loc_820E54EC:
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// beq cr6,0x820e5514
	if (ctx.cr6.eq) goto loc_820E5514;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// beq cr6,0x820e5514
	if (ctx.cr6.eq) goto loc_820E5514;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// ble cr6,0x820e550c
	if (!ctx.cr6.gt) goto loc_820E550C;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
loc_820E5508:
	// ble cr6,0x820e5514
	if (!ctx.cr6.gt) goto loc_820E5514;
loc_820E550C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820e5518
	goto loc_820E5518;
loc_820E5514:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820E5518:
	// lbz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 204);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x820e5528
	if (ctx.cr0.eq) goto loc_820E5528;
	// subfic r11,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r11.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
loc_820E5528:
	// lha r10,2(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// b 0x820e5208
	goto loc_820E5208;
loc_820E5530:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
loc_820E5534:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lhz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 2);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x820e544c
	goto loc_820E544C;
loc_820E5544:
	// lwz r10,19420(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 19420);
	// li r11,2
	ctx.r11.s64 = 2;
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// eqv r11,r10,r11
	ctx.r11.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// b 0x820e6868
	goto loc_820E6868;
loc_820E5564:
	// lwz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 124);
loc_820E5568:
	// lhz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 2);
	// lhz r11,126(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 126);
	// b 0x820e544c
	goto loc_820E544C;
loc_820E5574:
	// lwz r11,124(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 124);
	// b 0x820e5568
	goto loc_820E5568;
loc_820E557C:
	// lhz r11,140(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 140);
	// b 0x820e5488
	goto loc_820E5488;
loc_820E5584:
	// lhz r11,140(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 140);
	// b 0x820e5488
	goto loc_820E5488;
loc_820E558C:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r11,30(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bne cr6,0x820e608c
	if (!ctx.cr6.eq) goto loc_820E608C;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
loc_820E55A4:
	// lis r8,-32169
	ctx.r8.s64 = -2108227584;
	// lha r9,2(r31)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// lwz r11,23240(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 23240);
	// addi r8,r8,23240
	ctx.r8.s64 = ctx.r8.s64 + 23240;
	// mulli r10,r7,71
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(71));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r7,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// srw r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x820e53c0
	goto loc_820E53C0;
loc_820E55DC:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r11,30(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bne cr6,0x820e608c
	if (!ctx.cr6.eq) goto loc_820E608C;
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// b 0x820e55a4
	goto loc_820E55A4;
loc_820E55F8:
	// lwz r11,872(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 872);
	// lbz r11,58(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 58);
	// b 0x820e5534
	goto loc_820E5534;
loc_820E5604:
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,348(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 348);
	// bne 0x820e53c0
	if (!ctx.cr0.eq) goto loc_820E53C0;
	// b 0x820e520c
	goto loc_820E520C;
loc_820E5620:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lha r10,2(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820e544c
	goto loc_820E544C;
loc_820E5634:
	// addi r10,r29,-1
	ctx.r10.s64 = r29.s64 + -1;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x820e5648
	if (!ctx.cr6.eq) goto loc_820E5648;
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
loc_820E5648:
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r10,r10,13128
	ctx.r10.s64 = ctx.r10.s64 + 13128;
	// lbz r10,1820(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1820);
	// b 0x820e544c
	goto loc_820E544C;
loc_820E5658:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
loc_820E5660:
	// lbz r3,160(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 160);
	// b 0x820e6868
	goto loc_820E6868;
loc_820E5668:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
loc_820E5670:
	// lbz r11,160(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 160);
	// b 0x820e520c
	goto loc_820E520C;
loc_820E5678:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
loc_820E5680:
	// lbz r3,231(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 231);
	// b 0x820e6868
	goto loc_820E6868;
loc_820E5688:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
loc_820E5690:
	// lbz r11,231(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 231);
	// b 0x820e520c
	goto loc_820E520C;
loc_820E5698:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
loc_820E56A0:
	// lbz r11,373(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 373);
loc_820E56A4:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x820e520c
	goto loc_820E520C;
loc_820E56AC:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
loc_820E56B4:
	// lbz r11,373(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 373);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x820e520c
	goto loc_820E520C;
loc_820E56C4:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// b 0x820e5660
	goto loc_820E5660;
loc_820E56D0:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// b 0x820e5670
	goto loc_820E5670;
loc_820E56DC:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// b 0x820e5680
	goto loc_820E5680;
loc_820E56E8:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// b 0x820e5690
	goto loc_820E5690;
loc_820E56F4:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// b 0x820e56a0
	goto loc_820E56A0;
loc_820E5700:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// b 0x820e56b4
	goto loc_820E56B4;
loc_820E570C:
	// lwz r11,10008(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10008);
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// b 0x820e5204
	goto loc_820E5204;
loc_820E5718:
	// lwz r11,10008(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10008);
	// lhz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 2);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// b 0x820e5208
	goto loc_820E5208;
loc_820E572C:
	// lwz r3,10012(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 10012);
	// bl 0x821be8b0
	ctx.lr = 0x820E5734;
	sub_821BE8B0(ctx, base);
loc_820E5734:
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// b 0x820e6868
	goto loc_820E6868;
loc_820E573C:
	// lwz r11,10008(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10008);
	// lhz r10,100(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 100);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x820e575c
	if (!ctx.cr6.eq) goto loc_820E575C;
	// lhz r11,82(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 82);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x820e6868
	if (ctx.cr6.eq) goto loc_820E6868;
loc_820E575C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820e6868
	goto loc_820E6868;
loc_820E5764:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-9752(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -9752);
	// b 0x820e5264
	goto loc_820E5264;
loc_820E5770:
	// lwz r11,10008(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10008);
	// lhz r3,30(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// b 0x820e6868
	goto loc_820E6868;
loc_820E577C:
	// lwz r10,10008(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 10008);
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820e57c4
	if (ctx.cr6.eq) goto loc_820E57C4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e57b0
	if (ctx.cr6.eq) goto loc_820E57B0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820e6864
	if (!ctx.cr6.eq) goto loc_820E6864;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// b 0x820e63b4
	goto loc_820E63B4;
loc_820E57B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x820e6864
	if (!ctx.cr6.eq) goto loc_820E6864;
	// b 0x820e52b8
	goto loc_820E52B8;
loc_820E57C4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820e6864
	if (!ctx.cr6.lt) goto loc_820E6864;
	// b 0x820e52b8
	goto loc_820E52B8;
loc_820E57D8:
	// lwz r10,10036(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 10036);
	// b 0x820e5448
	goto loc_820E5448;
loc_820E57E0:
	// addic. r6,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	ctx.r6.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// ble 0x820e575c
	if (!ctx.cr0.gt) goto loc_820E575C;
	// addi r8,r31,2
	ctx.r8.s64 = r31.s64 + 2;
loc_820E57F0:
	// lhz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// rlwinm r10,r11,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// cmpwi cr6,r10,4096
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4096, ctx.xer);
	// beq cr6,0x820e583c
	if (ctx.cr6.eq) goto loc_820E583C;
	// cmpwi cr6,r10,8192
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8192, ctx.xer);
	// beq cr6,0x820e5834
	if (ctx.cr6.eq) goto loc_820E5834;
	// cmpwi cr6,r10,12288
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12288, ctx.xer);
	// beq cr6,0x820e582c
	if (ctx.cr6.eq) goto loc_820E582C;
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// bne cr6,0x820e588c
	if (!ctx.cr6.eq) goto loc_820E588C;
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 48);
loc_820E581C:
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// clrlwi. r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820e608c
	if (ctx.cr0.eq) goto loc_820E608C;
	// b 0x820e588c
	goto loc_820E588C;
loc_820E582C:
	// lwz r10,68(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 68);
	// b 0x820e581c
	goto loc_820E581C;
loc_820E5834:
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 40);
	// b 0x820e5840
	goto loc_820E5840;
loc_820E583C:
	// lwz r10,60(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 60);
loc_820E5840:
	// clrlwi. r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// beq 0x820e5878
	if (ctx.cr0.eq) goto loc_820E5878;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x820e588c
	if (ctx.cr6.eq) goto loc_820E588C;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// beq cr6,0x820e586c
	if (ctx.cr6.eq) goto loc_820E586C;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// b 0x820e587c
	goto loc_820E587C;
loc_820E586C:
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x820e5884
	goto loc_820E5884;
loc_820E5878:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
loc_820E587C:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_820E5884:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e608c
	if (ctx.cr6.eq) goto loc_820E608C;
loc_820E588C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x820e57f0
	if (ctx.cr6.lt) goto loc_820E57F0;
	// b 0x820e575c
	goto loc_820E575C;
loc_820E58A0:
	// addic. r6,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	ctx.r6.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// blt 0x820e575c
	if (ctx.cr0.lt) goto loc_820E575C;
	// addi r8,r31,2
	ctx.r8.s64 = r31.s64 + 2;
loc_820E58B0:
	// lhz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// rlwinm r10,r11,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// cmpwi cr6,r10,4096
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4096, ctx.xer);
	// beq cr6,0x820e58fc
	if (ctx.cr6.eq) goto loc_820E58FC;
	// cmpwi cr6,r10,8192
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8192, ctx.xer);
	// beq cr6,0x820e58f4
	if (ctx.cr6.eq) goto loc_820E58F4;
	// cmpwi cr6,r10,12288
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12288, ctx.xer);
	// beq cr6,0x820e58ec
	if (ctx.cr6.eq) goto loc_820E58EC;
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// bne cr6,0x820e594c
	if (!ctx.cr6.eq) goto loc_820E594C;
	// lwz r10,56(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 56);
loc_820E58DC:
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// clrlwi. r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820e608c
	if (ctx.cr0.eq) goto loc_820E608C;
	// b 0x820e594c
	goto loc_820E594C;
loc_820E58EC:
	// lwz r10,76(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 76);
	// b 0x820e58dc
	goto loc_820E58DC;
loc_820E58F4:
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 52);
	// b 0x820e5900
	goto loc_820E5900;
loc_820E58FC:
	// lwz r10,72(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 72);
loc_820E5900:
	// clrlwi. r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// beq 0x820e5938
	if (ctx.cr0.eq) goto loc_820E5938;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x820e594c
	if (ctx.cr6.eq) goto loc_820E594C;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// beq cr6,0x820e592c
	if (ctx.cr6.eq) goto loc_820E592C;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// b 0x820e593c
	goto loc_820E593C;
loc_820E592C:
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x820e5944
	goto loc_820E5944;
loc_820E5938:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
loc_820E593C:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_820E5944:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e608c
	if (ctx.cr6.eq) goto loc_820E608C;
loc_820E594C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x820e58b0
	if (!ctx.cr6.gt) goto loc_820E58B0;
	// b 0x820e575c
	goto loc_820E575C;
loc_820E5960:
	// addi r10,r29,-1
	ctx.r10.s64 = r29.s64 + -1;
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// lhz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 4);
	// lhz r9,6(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 6);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x820e608c
	if (ctx.cr6.lt) goto loc_820E608C;
	// beq cr6,0x820e5a98
	if (ctx.cr6.eq) goto loc_820E5A98;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x820e5988
	if (!ctx.cr6.lt) goto loc_820E5988;
	// li r9,10
	ctx.r9.s64 = 10;
loc_820E5988:
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 40);
	// clrlwi. r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// beq 0x820e59c4
	if (ctx.cr0.eq) goto loc_820E59C4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x820e59d8
	if (ctx.cr6.eq) goto loc_820E59D8;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// beq cr6,0x820e59b8
	if (ctx.cr6.eq) goto loc_820E59B8;
	// subf r11,r11,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r11.u64;
	// b 0x820e59c8
	goto loc_820E59C8;
loc_820E59B8:
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x820e59d0
	goto loc_820E59D0;
loc_820E59C4:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
loc_820E59C8:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_820E59D0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e6864
	if (ctx.cr6.eq) goto loc_820E6864;
loc_820E59D8:
	// lwz r11,1556(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1556);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x820e6864
	if (!ctx.cr6.gt) goto loc_820E6864;
loc_820E59F8:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x820e5a04
	if (!ctx.cr0.lt) goto loc_820E5A04;
	// li r9,319
	ctx.r9.s64 = 319;
loc_820E5A04:
	// addi r11,r9,131
	ctx.r11.s64 = ctx.r9.s64 + 131;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lhzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + r30.u32);
	// beq cr6,0x820e5a74
	if (ctx.cr6.eq) goto loc_820E5A74;
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x820e5a48
	if (ctx.cr0.eq) goto loc_820E5A48;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x820e5a5c
	if (ctx.cr6.eq) goto loc_820E5A5C;
	// cmpwi cr6,r5,10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 10, ctx.xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// beq cr6,0x820e5a3c
	if (ctx.cr6.eq) goto loc_820E5A3C;
	// subf r11,r11,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r11.u64;
	// b 0x820e5a4c
	goto loc_820E5A4C;
loc_820E5A3C:
	// addic r3,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// subfe r11,r3,r11
	temp.u8 = (~ctx.r3.u32 + ctx.r11.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x820e5a54
	goto loc_820E5A54;
loc_820E5A48:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_820E5A4C:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_820E5A54:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e5a88
	if (ctx.cr6.eq) goto loc_820E5A88;
loc_820E5A5C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x820e575c
	if (!ctx.cr6.lt) goto loc_820E575C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820e5a88
	goto loc_820E5A88;
loc_820E5A74:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820e5a88
	if (ctx.cr0.eq) goto loc_820E5A88;
	// li r10,1
	ctx.r10.s64 = 1;
loc_820E5A88:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x820e59f8
	if (ctx.cr6.lt) goto loc_820E59F8;
	// b 0x820e6864
	goto loc_820E6864;
loc_820E5A98:
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 40);
loc_820E5A9C:
	// clrlwi. r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_820E5AA0:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// beq 0x820e5adc
	if (ctx.cr0.eq) goto loc_820E5ADC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x820e5ad4
	if (ctx.cr6.eq) goto loc_820E5AD4;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// beq cr6,0x820e5ac8
	if (ctx.cr6.eq) goto loc_820E5AC8;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// b 0x820e5ae0
	goto loc_820E5AE0;
loc_820E5AC8:
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x820e5ae8
	goto loc_820E5AE8;
loc_820E5AD4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820e5ae8
	goto loc_820E5AE8;
loc_820E5ADC:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
loc_820E5AE0:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_820E5AE8:
	// extsh r23,r11
	r23.s64 = ctx.r11.s16;
	// b 0x820e6864
	goto loc_820E6864;
loc_820E5AF0:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lwz r10,44(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 44);
loc_820E5AF8:
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// b 0x820e53c0
	goto loc_820E53C0;
loc_820E5B00:
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 48);
loc_820E5B04:
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x820e53c0
	goto loc_820E53C0;
loc_820E5B10:
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820e608c
	if (ctx.cr6.lt) goto loc_820E608C;
	// bne cr6,0x820e6864
	if (!ctx.cr6.eq) goto loc_820E6864;
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 52);
loc_820E5B24:
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// clrlwi. r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x820e5aa0
	goto loc_820E5AA0;
loc_820E5B30:
	// lwz r10,56(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 56);
	// b 0x820e5b04
	goto loc_820E5B04;
loc_820E5B38:
	// addi r10,r29,-1
	ctx.r10.s64 = r29.s64 + -1;
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// lhz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 4);
	// lhz r9,6(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 6);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x820e608c
	if (ctx.cr6.lt) goto loc_820E608C;
	// beq cr6,0x820e5c70
	if (ctx.cr6.eq) goto loc_820E5C70;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x820e5b60
	if (!ctx.cr6.lt) goto loc_820E5B60;
	// li r9,10
	ctx.r9.s64 = 10;
loc_820E5B60:
	// lwz r10,60(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 60);
	// clrlwi. r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// beq 0x820e5b9c
	if (ctx.cr0.eq) goto loc_820E5B9C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x820e5bb0
	if (ctx.cr6.eq) goto loc_820E5BB0;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// beq cr6,0x820e5b90
	if (ctx.cr6.eq) goto loc_820E5B90;
	// subf r11,r11,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r11.u64;
	// b 0x820e5ba0
	goto loc_820E5BA0;
loc_820E5B90:
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x820e5ba8
	goto loc_820E5BA8;
loc_820E5B9C:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
loc_820E5BA0:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_820E5BA8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e6864
	if (ctx.cr6.eq) goto loc_820E6864;
loc_820E5BB0:
	// lwz r11,1556(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1556);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x820e6864
	if (!ctx.cr6.gt) goto loc_820E6864;
loc_820E5BD0:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x820e5bdc
	if (!ctx.cr0.lt) goto loc_820E5BDC;
	// li r9,319
	ctx.r9.s64 = 319;
loc_820E5BDC:
	// mulli r11,r9,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lhz r11,1568(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 1568);
	// beq cr6,0x820e5c4c
	if (ctx.cr6.eq) goto loc_820E5C4C;
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x820e5c20
	if (ctx.cr0.eq) goto loc_820E5C20;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x820e5c34
	if (ctx.cr6.eq) goto loc_820E5C34;
	// cmpwi cr6,r5,10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 10, ctx.xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// beq cr6,0x820e5c14
	if (ctx.cr6.eq) goto loc_820E5C14;
	// subf r11,r11,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r11.u64;
	// b 0x820e5c24
	goto loc_820E5C24;
loc_820E5C14:
	// addic r3,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// subfe r11,r3,r11
	temp.u8 = (~ctx.r3.u32 + ctx.r11.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x820e5c2c
	goto loc_820E5C2C;
loc_820E5C20:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_820E5C24:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_820E5C2C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e5c60
	if (ctx.cr6.eq) goto loc_820E5C60;
loc_820E5C34:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x820e575c
	if (!ctx.cr6.lt) goto loc_820E575C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820e5c60
	goto loc_820E5C60;
loc_820E5C4C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820e5c60
	if (ctx.cr0.eq) goto loc_820E5C60;
	// li r10,1
	ctx.r10.s64 = 1;
loc_820E5C60:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x820e5bd0
	if (ctx.cr6.lt) goto loc_820E5BD0;
	// b 0x820e6864
	goto loc_820E6864;
loc_820E5C70:
	// lwz r10,60(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 60);
	// b 0x820e5a9c
	goto loc_820E5A9C;
loc_820E5C78:
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 60);
	// lwz r10,64(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 64);
	// b 0x820e5af8
	goto loc_820E5AF8;
loc_820E5C84:
	// lwz r10,68(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 68);
	// b 0x820e5b04
	goto loc_820E5B04;
loc_820E5C8C:
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820e608c
	if (ctx.cr6.lt) goto loc_820E608C;
	// bne cr6,0x820e6864
	if (!ctx.cr6.eq) goto loc_820E6864;
	// lwz r10,72(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 72);
	// b 0x820e5b24
	goto loc_820E5B24;
loc_820E5CA4:
	// lwz r10,76(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 76);
	// b 0x820e5b04
	goto loc_820E5B04;
loc_820E5CAC:
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// b 0x820e5260
	goto loc_820E5260;
loc_820E5CB8:
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// lhz r29,6(r31)
	r29.u64 = REX_LOAD_U16(r31.u32 + 6);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820e5d7c
	if (ctx.cr6.eq) goto loc_820E5D7C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820e5cd4
	if (!ctx.cr6.eq) goto loc_820E5CD4;
	// li r29,10
	r29.s64 = 10;
loc_820E5CD4:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// lhz r24,2(r31)
	r24.u64 = REX_LOAD_U16(r31.u32 + 2);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x820e50d8
	ctx.lr = 0x820E5CE8;
	sub_820E50D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820e6864
	if (ctx.cr0.eq) goto loc_820E6864;
	// lwz r11,1556(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1556);
	// extsh r27,r29
	r27.s64 = r29.s16;
	// li r29,0
	r29.s64 = 0;
	// addi r28,r11,-1
	r28.s64 = ctx.r11.s64 + -1;
	// li r25,1
	r25.s64 = 1;
	// li r26,1
	r26.s64 = 1;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(r27.s32, 1, ctx.xer);
	// ble cr6,0x820e6864
	if (!ctx.cr6.gt) goto loc_820E6864;
loc_820E5D10:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bge 0x820e5d1c
	if (!ctx.cr0.lt) goto loc_820E5D1C;
	// li r28,319
	r28.s64 = 319;
loc_820E5D1C:
	// mulli r11,r28,12
	ctx.r11.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// lhz r4,1564(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 1564);
	// beq cr6,0x820e5d58
	if (ctx.cr6.eq) goto loc_820E5D58;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x820e50d8
	ctx.lr = 0x820E5D38;
	sub_820E50D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820e5d6c
	if (ctx.cr0.eq) goto loc_820E5D6C;
	// lhz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 4);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x820e575c
	if (!ctx.cr6.lt) goto loc_820E575C;
	// li r29,0
	r29.s64 = 0;
	// b 0x820e5d6c
	goto loc_820E5D6C;
loc_820E5D58:
	// li r3,-32768
	ctx.r3.s64 = -32768;
	// bl 0x820e50d8
	ctx.lr = 0x820E5D60;
	sub_820E50D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820e5d6c
	if (ctx.cr0.eq) goto loc_820E5D6C;
	// li r29,1
	r29.s64 = 1;
loc_820E5D6C:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpw cr6,r26,r27
	ctx.cr6.compare<int32_t>(r26.s32, r27.s32, ctx.xer);
	// blt cr6,0x820e5d10
	if (ctx.cr6.lt) goto loc_820E5D10;
	// b 0x820e6864
	goto loc_820E6864;
loc_820E5D7C:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// lhz r3,2(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 2);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x820e50d8
	ctx.lr = 0x820E5D8C;
	sub_820E50D8(ctx, base);
	// b 0x820e6824
	goto loc_820E6824;
loc_820E5D90:
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x820e5de4
	if (ctx.cr6.lt) goto loc_820E5DE4;
	// lhz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,1556(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1556);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x820e5dec
	if (!ctx.cr0.gt) goto loc_820E5DEC;
loc_820E5DB4:
	// mulli r10,r11,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// clrlwi r7,r4,16
	ctx.r7.u64 = ctx.r4.u32 & 0xFFFF;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r10,1566(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 1566);
	// or r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 | ctx.r7.u64;
	// bge 0x820e5dd4
	if (!ctx.cr0.lt) goto loc_820E5DD4;
	// li r11,319
	ctx.r11.s64 = 319;
loc_820E5DD4:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x820e5db4
	if (ctx.cr6.lt) goto loc_820E5DB4;
	// b 0x820e5dec
	goto loc_820E5DEC;
loc_820E5DE4:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
loc_820E5DEC:
	// lhz r3,2(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 2);
	// bl 0x820e50d8
	ctx.lr = 0x820E5DF4;
	sub_820E50D8(ctx, base);
	// b 0x820e5734
	goto loc_820E5734;
loc_820E5DF8:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// lhz r27,2(r31)
	r27.u64 = REX_LOAD_U16(r31.u32 + 2);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x820e50d8
	ctx.lr = 0x820E5E0C;
	sub_820E50D8(ctx, base);
	// extsh r23,r3
	r23.s64 = ctx.r3.s16;
	// mr. r29,r23
	r29.u64 = r23.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x820e6864
	if (ctx.cr0.eq) goto loc_820E6864;
	// lhz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 4);
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// lwz r11,1556(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1556);
	// li r26,1
	r26.s64 = 1;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// addi r9,r9,13128
	ctx.r9.s64 = ctx.r9.s64 + 13128;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r31,r11,-1
	r31.s64 = ctx.r11.s64 + -1;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,1840(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// ble cr6,0x820e6864
	if (!ctx.cr6.gt) goto loc_820E6864;
loc_820E5E60:
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x820e5e6c
	if (!ctx.cr0.lt) goto loc_820E5E6C;
	// li r31,319
	r31.s64 = 319;
loc_820E5E6C:
	// mulli r11,r31,12
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lhz r4,1564(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 1564);
	// bl 0x820e50d8
	ctx.lr = 0x820E5E80;
	sub_820E50D8(ctx, base);
	// and r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 & r29.u64;
	// extsh r23,r11
	r23.s64 = ctx.r11.s16;
	// mr. r29,r23
	r29.u64 = r23.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x820e608c
	if (ctx.cr0.eq) goto loc_820E608C;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpw cr6,r26,r28
	ctx.cr6.compare<int32_t>(r26.s32, r28.s32, ctx.xer);
	// blt cr6,0x820e5e60
	if (ctx.cr6.lt) goto loc_820E5E60;
	// b 0x820e6864
	goto loc_820E6864;
loc_820E5EA0:
	// li r5,1
	ctx.r5.s64 = 1;
loc_820E5EA4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lhz r4,2(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 2);
	// bl 0x821c32f8
	ctx.lr = 0x820E5EB0;
	sub_821C32F8(ctx, base);
	// b 0x820e5734
	goto loc_820E5734;
loc_820E5EB4:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x820e5ea4
	goto loc_820E5EA4;
loc_820E5EBC:
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x820e5ed0
	if (ctx.cr6.lt) goto loc_820E5ED0;
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
loc_820E5ED0:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820e5f68
	if (ctx.cr6.lt) goto loc_820E5F68;
	// beq cr6,0x820e5ef0
	if (ctx.cr6.eq) goto loc_820E5EF0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x820e6864
	if (!ctx.cr6.lt) goto loc_820E6864;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c7698
	ctx.lr = 0x820E5EEC;
	sub_821C7698(ctx, base);
	// b 0x820e6864
	goto loc_820E6864;
loc_820E5EF0:
	// lbz r11,6(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 6);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820e5f0c
	if (!ctx.cr0.eq) goto loc_820E5F0C;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,244(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 244);
	// b 0x820e5f20
	goto loc_820E5F20;
loc_820E5F0C:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x820e6864
	if (!ctx.cr6.eq) goto loc_820E6864;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,3688
	ctx.r11.u64 = ctx.r11.u64 | 3688;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
loc_820E5F20:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e6864
	if (ctx.cr6.eq) goto loc_820E6864;
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,54
	ctx.r4.s64 = 54;
	// andi. r10,r11,12296
	ctx.r10.u64 = ctx.r11.u64 & 12296;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// andi. r11,r11,12292
	ctx.r11.u64 = ctx.r11.u64 & 12292;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// subfic r23,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	r23.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// extsh r5,r23
	ctx.r5.s64 = r23.s16;
	// bl 0x821bf940
	ctx.lr = 0x820E5F60;
	sub_821BF940(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x820e5f80
	goto loc_820E5F80;
loc_820E5F68:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// li r3,8
	ctx.r3.s64 = 8;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x820e50d8
	ctx.lr = 0x820E5F78;
	sub_820E50D8(ctx, base);
	// extsh r23,r3
	r23.s64 = ctx.r3.s16;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
loc_820E5F80:
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bf940
	ctx.lr = 0x820E5F90;
	sub_821BF940(ctx, base);
	// b 0x820e6864
	goto loc_820E6864;
loc_820E5F94:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lha r10,2(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lwz r11,-7176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -7176);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// b 0x820e684c
	goto loc_820E684C;
loc_820E5FA8:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lha r11,144(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 144));
	// b 0x820e53c0
	goto loc_820E53C0;
loc_820E5FB8:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lha r10,2(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lha r11,144(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 144));
	// b 0x820e5208
	goto loc_820E5208;
loc_820E5FCC:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lha r10,2(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x820e544c
	goto loc_820E544C;
loc_820E5FE0:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lha r10,2(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lha r11,30(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 30));
	// b 0x820e544c
	goto loc_820E544C;
loc_820E5FF4:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lbz r11,18(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 18);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x820e520c
	goto loc_820E520C;
loc_820E6008:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lha r10,2(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lha r11,32(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 32));
	// b 0x820e5208
	goto loc_820E5208;
loc_820E601C:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lha r10,2(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lha r11,34(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 34));
	// b 0x820e5208
	goto loc_820E5208;
loc_820E6030:
	// bl 0x821d8220
	ctx.lr = 0x820E6034;
	sub_821D8220(ctx, base);
	// b 0x820e5734
	goto loc_820E5734;
loc_820E6038:
	// bl 0x821d8298
	ctx.lr = 0x820E603C;
	sub_821D8298(ctx, base);
	// b 0x820e5734
	goto loc_820E5734;
loc_820E6040:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lbz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// b 0x820e6868
	goto loc_820E6868;
loc_820E6054:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lbz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 0);
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r11,26(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 26);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x820e5208
	goto loc_820E5208;
loc_820E6070:
	// lwz r11,5464(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 5464);
	// b 0x820e53c0
	goto loc_820E53C0;
loc_820E6078:
	// lfs f0,5468(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 5468);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5476(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 5476);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
loc_820E6084:
	// li r3,1
	ctx.r3.s64 = 1;
	// bge cr6,0x820e6868
	if (!ctx.cr6.lt) goto loc_820E6868;
loc_820E608C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820e6868
	goto loc_820E6868;
loc_820E6094:
	// lfs f0,5468(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 5468);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5468(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 5468);
	ctx.f13.f64 = double(temp.f32);
loc_820E609C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
loc_820E60A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bgt cr6,0x820e6868
	if (ctx.cr6.gt) goto loc_820E6868;
	// b 0x820e608c
	goto loc_820E608C;
loc_820E60AC:
	// lfs f0,5468(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 5468);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5468(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 5468);
	ctx.f13.f64 = double(temp.f32);
loc_820E60B4:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
loc_820E60B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blt cr6,0x820e6868
	if (ctx.cr6.lt) goto loc_820E6868;
	// b 0x820e608c
	goto loc_820E608C;
loc_820E60C4:
	// lfs f0,5468(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 5468);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5468(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 5468);
	ctx.f13.f64 = double(temp.f32);
	// b 0x820e609c
	goto loc_820E609C;
loc_820E60D0:
	// lfs f0,5468(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 5468);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5468(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 5468);
	ctx.f13.f64 = double(temp.f32);
	// b 0x820e60b4
	goto loc_820E60B4;
loc_820E60DC:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lfs f13,5508(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 5508);
	ctx.f13.f64 = double(temp.f32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
loc_820E60EC:
	// fcfid f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(ctx.f12.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2392(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// b 0x820e6084
	goto loc_820E6084;
loc_820E6108:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lfs f13,5508(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 5508);
	ctx.f13.f64 = double(temp.f32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x820e60ec
	goto loc_820E60EC;
loc_820E611C:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// addi r11,r11,293
	ctx.r11.s64 = ctx.r11.s64 + 293;
	// lha r10,4(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + r30.u32);
	// b 0x820e5208
	goto loc_820E5208;
loc_820E6134:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// addi r11,r11,293
	ctx.r11.s64 = ctx.r11.s64 + 293;
	// lha r10,4(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + r28.u32);
	// b 0x820e5208
	goto loc_820E5208;
loc_820E614C:
	// lbz r3,230(r30)
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + 230);
	// b 0x820e6868
	goto loc_820E6868;
loc_820E6154:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,224(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// b 0x820e520c
	goto loc_820E520C;
loc_820E6168:
	// lbz r11,6(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 6);
	// b 0x820e56a4
	goto loc_820E56A4;
loc_820E6170:
	// ld r11,15896(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 15896);
	// clrldi r11,r11,63
	ctx.r11.u64 = ctx.r11.u64 & 0x1;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x820e6188
	if (ctx.cr6.eq) goto loc_820E6188;
	// lfs f13,15764(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 15764);
	ctx.f13.f64 = double(temp.f32);
	// b 0x820e6190
	goto loc_820E6190;
loc_820E6188:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
loc_820E6190:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
loc_820E6198:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// b 0x820e60a0
	goto loc_820E60A0;
loc_820E61A0:
	// lhz r3,2(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 2);
	// bl 0x820e2538
	ctx.lr = 0x820E61A8;
	sub_820E2538(ctx, base);
	// lfs f0,10568(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 10568);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// b 0x820e6084
	goto loc_820E6084;
loc_820E61B4:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f31,2364(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2364);
	f31.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x821af850
	ctx.lr = 0x820E61D8;
	sub_821AF850(ctx, base);
	// lha r11,4(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x821af850
	ctx.lr = 0x820E61F8;
	sub_821AF850(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lfs f1,5736(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 5736);
	ctx.f1.f64 = double(temp.f32);
loc_820E6200:
	// bl 0x821af850
	ctx.lr = 0x820E6204;
	sub_821AF850(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f30.f64);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// bge cr6,0x820e6218
	if (!ctx.cr6.lt) goto loc_820E6218;
	// fadds f31,f31,f0
	f31.f64 = double(float(f31.f64 + ctx.f0.f64));
loc_820E6218:
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f30.f64);
	// bge cr6,0x820e6224
	if (!ctx.cr6.lt) goto loc_820E6224;
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
loc_820E6224:
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f30.f64);
	// blt cr6,0x820e608c
	if (ctx.cr6.lt) goto loc_820E608C;
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// ble cr6,0x820e6868
	if (!ctx.cr6.gt) goto loc_820E6868;
	// b 0x820e608c
	goto loc_820E608C;
loc_820E623C:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f31,2364(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2364);
	f31.f64 = double(temp.f32);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x821af850
	ctx.lr = 0x820E6260;
	sub_821AF850(ctx, base);
	// lha r11,4(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x821af850
	ctx.lr = 0x820E6280;
	sub_821AF850(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lfs f1,5736(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 5736);
	ctx.f1.f64 = double(temp.f32);
	// b 0x820e6200
	goto loc_820E6200;
loc_820E628C:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f31,2364(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2364);
	f31.f64 = double(temp.f32);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x821af850
	ctx.lr = 0x820E62B0;
	sub_821AF850(ctx, base);
	// lha r11,4(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x821af850
	ctx.lr = 0x820E62D0;
	sub_821AF850(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lfs f1,5740(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 5740);
	ctx.f1.f64 = double(temp.f32);
	// b 0x820e6200
	goto loc_820E6200;
loc_820E62DC:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lha r10,4(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// addi r8,r10,-32767
	ctx.r8.s64 = ctx.r10.s64 + -32767;
	// lfs f0,2388(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2388);
	ctx.f0.f64 = double(temp.f32);
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// cntlzw r9,r8
	ctx.r9.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// beq cr6,0x820e6324
	if (ctx.cr6.eq) goto loc_820E6324;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f13,5732(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 5732);
	ctx.f13.f64 = double(temp.f32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x820e608c
	if (ctx.cr6.gt) goto loc_820E608C;
loc_820E6324:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820e575c
	if (!ctx.cr6.eq) goto loc_820E575C;
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// lfs f13,5732(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 5732);
	ctx.f13.f64 = double(temp.f32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820e575c
	if (!ctx.cr6.lt) goto loc_820E575C;
	// b 0x820e608c
	goto loc_820E608C;
loc_820E6354:
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// lwz r10,5764(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 5764);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820e638c
	if (ctx.cr6.lt) goto loc_820E638C;
	// beq cr6,0x820e6384
	if (ctx.cr6.eq) goto loc_820E6384;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x820e637c
	if (ctx.cr6.lt) goto loc_820E637C;
	// bne cr6,0x820e6864
	if (!ctx.cr6.eq) goto loc_820E6864;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// b 0x820e520c
	goto loc_820E520C;
loc_820E637C:
	// addi r11,r10,-3
	ctx.r11.s64 = ctx.r10.s64 + -3;
	// b 0x820e520c
	goto loc_820E520C;
loc_820E6384:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// b 0x820e520c
	goto loc_820E520C;
loc_820E638C:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// b 0x820e5210
	goto loc_820E5210;
loc_820E6394:
	// lhz r10,10280(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 10280);
	// b 0x820e5448
	goto loc_820E5448;
loc_820E639C:
	// lhz r10,10282(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 10282);
	// b 0x820e5448
	goto loc_820E5448;
loc_820E63A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,10300(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 10300);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
loc_820E63B4:
	// ble cr6,0x820e6864
	if (!ctx.cr6.gt) goto loc_820E6864;
	// b 0x820e52b8
	goto loc_820E52B8;
loc_820E63BC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,10304(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 10304);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// b 0x820e6198
	goto loc_820E6198;
loc_820E63CC:
	// lfs f0,10584(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 10584);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,10568(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 10568);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f31,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x820e608c
	if (ctx.cr6.gt) goto loc_820E608C;
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820e6414
	if (ctx.cr6.eq) goto loc_820E6414;
	// lha r11,4(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f0,2388(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2388);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_820E6414:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// bl 0x821bf298
	ctx.lr = 0x820E6420;
	sub_821BF298(ctx, base);
	// fneg f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = f31.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// b 0x820e60b8
	goto loc_820E60B8;
loc_820E642C:
	// lfs f0,10584(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 10584);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,10568(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 10568);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x820e608c
	if (ctx.cr6.gt) goto loc_820E608C;
	// lbz r11,210(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 210);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820e647c
	if (ctx.cr0.eq) goto loc_820E647C;
	// lbz r11,219(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 219);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820e647c
	if (ctx.cr0.eq) goto loc_820E647C;
	// addi r3,r30,15532
	ctx.r3.s64 = r30.s64 + 15532;
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// bl 0x82162068
	ctx.lr = 0x820E646C;
	sub_82162068(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,15944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15944);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x820e608c
	if (ctx.cr6.gt) goto loc_820E608C;
loc_820E647C:
	// addi r3,r30,15532
	ctx.r3.s64 = r30.s64 + 15532;
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// bl 0x82161ff8
	ctx.lr = 0x820E6488;
	sub_82161FF8(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// b 0x820e6868
	goto loc_820E6868;
loc_820E6490:
	// lbz r3,198(r30)
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + 198);
	// b 0x820e6868
	goto loc_820E6868;
loc_820E6498:
	// lwz r11,10008(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10008);
	// lha r10,28(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 28));
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// srawi r10,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r28,r10,r9
	r28.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// blt cr6,0x820e6548
	if (ctx.cr6.lt) goto loc_820E6548;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820e64ec
	if (!ctx.cr6.gt) goto loc_820E64EC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f30,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f30.f64 = double(temp.f32);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// b 0x820e6510
	goto loc_820E6510;
loc_820E64EC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f30,2024(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2024);
	f30.f64 = double(temp.f32);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f31,f0,f1
	f31.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
loc_820E6510:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x820e6864
	if (!ctx.cr6.gt) goto loc_820E6864;
loc_820E6518:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bf510
	ctx.lr = 0x820E652C;
	sub_821BF510(ctx, base);
	// extsh r11,r23
	ctx.r11.s64 = r23.s16;
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// fadds f31,f30,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f30.f64 + f31.f64));
	// or r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ctx.r11.u64;
	// extsh r23,r11
	r23.s64 = ctx.r11.s16;
	// bne 0x820e6518
	if (!ctx.cr0.eq) goto loc_820E6518;
	// b 0x820e6864
	goto loc_820E6864;
loc_820E6548:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bf510
	ctx.lr = 0x820E6558;
	sub_821BF510(ctx, base);
	// b 0x820e5734
	goto loc_820E5734;
loc_820E655C:
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// lfs f0,5524(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// lha r10,4(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// addi r9,r11,-32767
	ctx.r9.s64 = ctx.r11.s64 + -32767;
	// addi r8,r10,-32767
	ctx.r8.s64 = ctx.r10.s64 + -32767;
	// lfs f12,5528(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 5528);
	ctx.f12.f64 = double(temp.f32);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// beq cr6,0x820e66b4
	if (ctx.cr6.eq) goto loc_820E66B4;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// beq cr6,0x820e6660
	if (ctx.cr6.eq) goto loc_820E6660;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(r29.s32, 3, ctx.xer);
	// bne cr6,0x820e6864
	if (!ctx.cr6.eq) goto loc_820E6864;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820e65f8
	if (!ctx.cr6.eq) goto loc_820E65F8;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x820e65c8
	if (!ctx.cr6.eq) goto loc_820E65C8;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x820e575c
	if (ctx.cr6.eq) goto loc_820E575C;
loc_820E65C8:
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x820e65ec
	if (ctx.cr6.lt) goto loc_820E65EC;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x820e575c
	if (ctx.cr6.lt) goto loc_820E575C;
loc_820E65EC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820e6600
	if (ctx.cr6.eq) goto loc_820E6600;
	// b 0x820e575c
	goto loc_820E575C;
loc_820E65F8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820e6620
	if (!ctx.cr6.eq) goto loc_820E6620;
loc_820E6600:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// li r9,0
	ctx.r9.s64 = 0;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x820e6624
	if (ctx.cr6.gt) goto loc_820E6624;
loc_820E6620:
	// li r9,1
	ctx.r9.s64 = 1;
loc_820E6624:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x820e664c
	if (!ctx.cr6.eq) goto loc_820E664C;
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x820e6650
	if (ctx.cr6.gt) goto loc_820E6650;
loc_820E664C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820E6650:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820e6864
	if (ctx.cr6.eq) goto loc_820E6864;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x820e66ac
	goto loc_820E66AC;
loc_820E6660:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x820e6684
	if (!ctx.cr6.eq) goto loc_820E6684;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x820e575c
	if (ctx.cr6.eq) goto loc_820E575C;
loc_820E6684:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x820e66a8
	if (ctx.cr6.lt) goto loc_820E66A8;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x820e575c
	if (ctx.cr6.lt) goto loc_820E575C;
loc_820E66A8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
loc_820E66AC:
	// beq cr6,0x820e6864
	if (ctx.cr6.eq) goto loc_820E6864;
	// b 0x820e575c
	goto loc_820E575C;
loc_820E66B4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820e6864
	if (!ctx.cr6.gt) goto loc_820E6864;
	// b 0x820e575c
	goto loc_820E575C;
loc_820E66C8:
	// lwz r11,10008(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10008);
	// lhz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 36);
	// b 0x820e6868
	goto loc_820E6868;
loc_820E66D4:
	// lwz r11,10008(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10008);
	// lhz r3,38(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 38);
	// b 0x820e6868
	goto loc_820E6868;
loc_820E66E0:
	// lwz r11,10008(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10008);
	// lhz r3,40(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 40);
	// b 0x820e6868
	goto loc_820E6868;
loc_820E66EC:
	// lwz r11,10008(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10008);
	// addi r9,r11,136
	ctx.r9.s64 = ctx.r11.s64 + 136;
	// lwz r10,136(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e6708
	if (!ctx.cr6.eq) goto loc_820E6708;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820e6718
	goto loc_820E6718;
loc_820E6708:
	// lha r11,2(r10)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 2));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r11,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_820E6718:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e672c
	if (ctx.cr6.eq) goto loc_820E672C;
	// lhz r11,10(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820e608c
	if (ctx.cr0.eq) goto loc_820E608C;
loc_820E672C:
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e575c
	if (ctx.cr6.eq) goto loc_820E575C;
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x820e575c
	if (ctx.cr6.eq) goto loc_820E575C;
	// lhz r11,10(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820e575c
	if (!ctx.cr0.eq) goto loc_820E575C;
	// b 0x820e608c
	goto loc_820E608C;
loc_820E6754:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lbz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// b 0x820e520c
	goto loc_820E520C;
loc_820E676C:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lbz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x820e608c
	if (!ctx.cr0.gt) goto loc_820E608C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x820e575c
	if (!ctx.cr6.gt) goto loc_820E575C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x820e608c
	if (!ctx.cr6.eq) goto loc_820E608C;
	// b 0x820e575c
	goto loc_820E575C;
loc_820E6794:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lbz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820e575c
	if (ctx.cr6.eq) goto loc_820E575C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x820e575c
	if (ctx.cr6.eq) goto loc_820E575C;
	// b 0x820e608c
	goto loc_820E608C;
loc_820E67B8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218df20
	ctx.lr = 0x820E67C0;
	sub_8218DF20(ctx, base);
	// b 0x820e6860
	goto loc_820E6860;
loc_820E67C4:
	// cmpwi cr6,r11,1001
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1001, ctx.xer);
	// beq cr6,0x820e6858
	if (ctx.cr6.eq) goto loc_820E6858;
	// cmpwi cr6,r11,2000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2000, ctx.xer);
	// beq cr6,0x820e6838
	if (ctx.cr6.eq) goto loc_820E6838;
	// cmpwi cr6,r11,2001
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2001, ctx.xer);
	// beq cr6,0x820e682c
	if (ctx.cr6.eq) goto loc_820E682C;
	// cmpwi cr6,r11,2002
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2002, ctx.xer);
	// beq cr6,0x820e6818
	if (ctx.cr6.eq) goto loc_820E6818;
	// cmpwi cr6,r11,2003
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2003, ctx.xer);
	// bne cr6,0x820e6864
	if (!ctx.cr6.eq) goto loc_820E6864;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821254b0
	ctx.lr = 0x820E67F4;
	sub_821254B0(ctx, base);
loc_820E67F4:
	// lha r10,2(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x820e6810
	if (ctx.cr6.gt) goto loc_820E6810;
	// lha r10,4(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x820e52b8
	if (!ctx.cr6.gt) goto loc_820E52B8;
loc_820E6810:
	// li r23,0
	r23.s64 = 0;
	// b 0x820e6864
	goto loc_820E6864;
loc_820E6818:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lha r4,2(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// bl 0x82121c20
	ctx.lr = 0x820E6824;
	sub_82121C20(ctx, base);
loc_820E6824:
	// extsh r23,r3
	r23.s64 = ctx.r3.s16;
	// b 0x820e6864
	goto loc_820E6864;
loc_820E682C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82125480
	ctx.lr = 0x820E6834;
	sub_82125480(ctx, base);
	// b 0x820e67f4
	goto loc_820E67F4;
loc_820E6838:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82125420
	ctx.lr = 0x820E6840;
	sub_82125420(ctx, base);
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_820E684C:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r23,r11,27,31,31
	r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x820e6864
	goto loc_820E6864;
loc_820E6858:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218df90
	ctx.lr = 0x820E6860;
	sub_8218DF90(ctx, base);
loc_820E6860:
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_820E6864:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_820E6868:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_821617D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x821617D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8216186c
	if (!ctx.cr6.gt) goto loc_8216186C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r11,r4,62
	ctx.r11.s64 = ctx.r4.s64 + 62;
	// lfs f0,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
loc_821617F8:
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8216180c
	if (ctx.cr0.eq) goto loc_8216180C;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82161864
	if (!ctx.cr6.eq) goto loc_82161864;
loc_8216180C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lfs f13,-46(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -46);
	ctx.f13.f64 = double(temp.f32);
	// rotlwi r10,r9,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f13,-42(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -42);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f13,-38(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -38);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lbz r10,-1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x82161854
	if (!ctx.cr6.eq) goto loc_82161854;
	// addi r10,r9,244
	ctx.r10.s64 = ctx.r9.s64 + 244;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r30
	REX_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
	// b 0x82161864
	goto loc_82161864;
loc_82161854:
	// addi r9,r9,244
	ctx.r9.s64 = ctx.r9.s64 + 244;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r30
	REX_STORE_U32(ctx.r9.u32 + r30.u32, ctx.r10.u32);
loc_82161864:
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bdnz 0x821617f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821617F8;
loc_8216186C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r28,r11,-12720
	r28.s64 = ctx.r11.s64 + -12720;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,968(r30)
	REX_STORE_U32(r30.u32 + 968, ctx.r10.u32);
	// addi r29,r30,2932
	r29.s64 = r30.s64 + 2932;
	// stw r11,972(r30)
	REX_STORE_U32(r30.u32 + 972, ctx.r11.u32);
	// addi r31,r28,1
	r31.s64 = r28.s64 + 1;
loc_8216188C:
	// lbz r11,-1(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + -1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x820e22e8
	ctx.lr = 0x821618A4;
	sub_820E22E8(ctx, base);
	// stfs f1,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r29.u32 + 28, temp.u32);
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x820e22e8
	ctx.lr = 0x821618C0;
	sub_820E22E8(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r11,r28,33
	ctx.r11.s64 = r28.s64 + 33;
	// stfsu f1,32(r29)
	ctx.fpscr.disableFlushMode();
	ea = 32 + r29.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	r29.u32 = ea;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8216188c
	if (ctx.cr6.lt) goto loc_8216188C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f11,208(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 208);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-11808(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -11808);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-11812(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -11812);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f0,960(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 960, temp.u32);
	// stfs f13,964(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 964, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8216B1B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8216B1C0;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,24584(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24584);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8216b540
	if (!ctx.cr6.eq) goto loc_8216B540;
	// lfs f1,52(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r3,108
	ctx.r5.s64 = ctx.r3.s64 + 108;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e1cc0
	ctx.lr = 0x8216B1F4;
	sub_820E1CC0(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r30,r11,24544
	r30.s64 = ctx.r11.s64 + 24544;
	// lbz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8216b27c
	if (ctx.cr0.eq) goto loc_8216B27C;
	// lha r11,22(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 22));
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// bge cr6,0x8216b27c
	if (!ctx.cr6.lt) goto loc_8216B27C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,76
	ctx.r4.s64 = r31.s64 + 76;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1ba8
	ctx.lr = 0x8216B224;
	sub_820E1BA8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x820e1c50
	ctx.lr = 0x8216B234;
	sub_820E1C50(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r30,16
	ctx.r5.s64 = r30.s64 + 16;
	// bl 0x820e1c50
	ctx.lr = 0x8216B244;
	sub_820E1C50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x820e2290
	ctx.lr = 0x8216B24C;
	sub_820E2290(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1c28
	ctx.lr = 0x8216B258;
	sub_820E1C28(ctx, base);
	// lfs f0,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1cc0
	ctx.lr = 0x8216B26C;
	sub_820E1CC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e1b28
	ctx.lr = 0x8216B27C;
	sub_820E1B28(ctx, base);
loc_8216B27C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,62(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 62);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f30,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f30.f64 = double(temp.f32);
	// lfs f31,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f31.f64 = double(temp.f32);
	// beq 0x8216b328
	if (ctx.cr0.eq) goto loc_8216B328;
	// addi r5,r31,76
	ctx.r5.s64 = r31.s64 + 76;
	// addi r4,r31,92
	ctx.r4.s64 = r31.s64 + 92;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1ba8
	ctx.lr = 0x8216B2A8;
	sub_820E1BA8(ctx, base);
	// bl 0x820e2128
	ctx.lr = 0x8216B2AC;
	sub_820E2128(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2004(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2004);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8216b2d4
	if (!ctx.cr6.gt) goto loc_8216B2D4;
	// fsqrts f0,f1
	ctx.f0.f64 = double(float(sqrt(ctx.f1.f64)));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fdivs f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 / ctx.f0.f64));
	// bl 0x820e1cc0
	ctx.lr = 0x8216B2D0;
	sub_820E1CC0(ctx, base);
	// b 0x8216b2e4
	goto loc_8216B2E4;
loc_8216B2D4:
	// stfs f30,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f30,104(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_8216B2E4:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,24588
	ctx.r3.s64 = ctx.r11.s64 + 24588;
	// bl 0x820e1c28
	ctx.lr = 0x8216B2F4;
	sub_820E1C28(ctx, base);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8216b304
	if (!ctx.cr6.gt) goto loc_8216B304;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_8216B304:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// fsubs f1,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f31.f64 - ctx.f0.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,24604
	ctx.r5.s64 = ctx.r11.s64 + 24604;
	// bl 0x820e1cc0
	ctx.lr = 0x8216B318;
	sub_820E1CC0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e1b70
	ctx.lr = 0x8216B328;
	sub_820E1B70(ctx, base);
loc_8216B328:
	// lbz r11,63(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 63);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8216b4a4
	if (ctx.cr6.lt) goto loc_8216B4A4;
	// beq cr6,0x8216b49c
	if (ctx.cr6.eq) goto loc_8216B49C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8216b464
	if (ctx.cr6.lt) goto loc_8216B464;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8216b424
	if (ctx.cr6.eq) goto loc_8216B424;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x8216b358
	if (ctx.cr6.eq) goto loc_8216B358;
	// stfs f30,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x8216b4b0
	goto loc_8216B4B0;
loc_8216B358:
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x820e0af8
	ctx.lr = 0x8216B364;
	sub_820E0AF8(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lha r11,22(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 22));
	// lfs f12,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// stfs f31,204(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// bl 0x820e0368
	ctx.lr = 0x8216B398;
	sub_820E0368(ctx, base);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f1,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e1cc0
	ctx.lr = 0x8216B3C0;
	sub_820E1CC0(ctx, base);
	// lfs f0,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,196(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f12,200(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x820e1b28
	ctx.lr = 0x8216B3EC;
	sub_820E1B28(ctx, base);
	// addi r5,r31,76
	ctx.r5.s64 = r31.s64 + 76;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1ba8
	ctx.lr = 0x8216B3FC;
	sub_820E1BA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e22e8
	ctx.lr = 0x8216B404;
	sub_820E22E8(ctx, base);
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8216b4b8
	if (!ctx.cr6.gt) goto loc_8216B4B8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e2290
	ctx.lr = 0x8216B41C;
	sub_820E2290(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8216b490
	goto loc_8216B490;
loc_8216B424:
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x820e0af8
	ctx.lr = 0x8216B430;
	sub_820E0AF8(ctx, base);
	// lha r11,22(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 22));
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x820e0590
	ctx.lr = 0x8216B448;
	sub_820E0590(ctx, base);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x8216b488
	goto loc_8216B488;
loc_8216B464:
	// lha r11,22(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 22));
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_8216B488:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_8216B490:
	// lfs f1,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e1cc0
	ctx.lr = 0x8216B498;
	sub_820E1CC0(ctx, base);
	// b 0x8216b4b8
	goto loc_8216B4B8;
loc_8216B49C:
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8216b4ac
	goto loc_8216B4AC;
loc_8216B4A4:
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_8216B4AC:
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_8216B4B0:
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_8216B4B8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e1b28
	ctx.lr = 0x8216B4C8;
	sub_820E1B28(ctx, base);
	// addi r30,r31,76
	r30.s64 = r31.s64 + 76;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// bl 0x820e1b28
	ctx.lr = 0x8216B4DC;
	sub_820E1B28(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216b540
	if (ctx.cr6.eq) goto loc_8216B540;
	// addi r5,r11,76
	ctx.r5.s64 = ctx.r11.s64 + 76;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820e1ba8
	ctx.lr = 0x8216B4F8;
	sub_820E1BA8(ctx, base);
	// bl 0x820e2128
	ctx.lr = 0x8216B4FC;
	sub_820E2128(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lfs f0,2020(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2020);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8216b540
	if (!ctx.cr6.gt) goto loc_8216B540;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e2128
	ctx.lr = 0x8216B518;
	sub_820E2128(ctx, base);
	// fdivs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 / f31.f64));
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fsqrts f1,f0
	ctx.f1.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x820e1cc0
	ctx.lr = 0x8216B52C;
	sub_820E1CC0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,92
	ctx.r4.s64 = ctx.r11.s64 + 92;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x820e1b28
	ctx.lr = 0x8216B540;
	sub_820E1B28(ctx, base);
loc_8216B540:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82177F78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x82177F80;
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f29.u64);
	// stfd f30,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,160(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lwz r11,184(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r8,192(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r30,r11,16
	r30.s64 = ctx.r11.s64 + 16;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r29,r3,192
	r29.s64 = ctx.r3.s64 + 192;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r27,r3,208
	r27.s64 = ctx.r3.s64 + 208;
	// lwz r8,196(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 196);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// addi r28,r10,-16
	r28.s64 = ctx.r10.s64 + -16;
	// lwz r8,200(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r8,204(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r11,208(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,212(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,216(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,220(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,7792(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 7792);
	// addi r3,r11,1700
	ctx.r3.s64 = ctx.r11.s64 + 1700;
	// bl 0x82202070
	ctx.lr = 0x8217800C;
	sub_82202070(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e1ba8
	ctx.lr = 0x8217801C;
	sub_820E1BA8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e1cc0
	ctx.lr = 0x82178030;
	sub_820E1CC0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1b28
	ctx.lr = 0x82178040;
	sub_820E1B28(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1ba8
	ctx.lr = 0x82178050;
	sub_820E1BA8(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1c50
	ctx.lr = 0x82178060;
	sub_820E1C50(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1c50
	ctx.lr = 0x82178070;
	sub_820E1C50(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r11.u32);
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x821781e8
	if (!ctx.cr6.gt) goto loc_821781E8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r27,r28,16
	r27.s64 = r28.s64 + 16;
	// addi r29,r30,-16
	r29.s64 = r30.s64 + -16;
	// lfs f30,16372(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16372);
	f30.f64 = double(temp.f32);
	// lfs f31,2012(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2012);
	f31.f64 = double(temp.f32);
	// lfs f29,2008(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2008);
	f29.f64 = double(temp.f32);
loc_821780A4:
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821781e8
	if (!ctx.cr6.lt) goto loc_821781E8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1ba8
	ctx.lr = 0x821780C4;
	sub_820E1BA8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e22e8
	ctx.lr = 0x821780CC;
	sub_820E22E8(ctx, base);
	// lfs f0,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x821781e8
	if (ctx.cr6.lt) goto loc_821781E8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e2290
	ctx.lr = 0x821780E8;
	sub_820E2290(ctx, base);
	// bl 0x821fee88
	ctx.lr = 0x821780EC;
	sub_821FEE88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmsubs f1,f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, f31.f64, -f30.f64)));
	// bl 0x820e13b8
	ctx.lr = 0x821780FC;
	sub_820E13B8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e1f98
	ctx.lr = 0x8217810C;
	sub_820E1F98(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e1cc0
	ctx.lr = 0x8217811C;
	sub_820E1CC0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e1b28
	ctx.lr = 0x8217812C;
	sub_820E1B28(ctx, base);
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// stw r11,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821781e8
	if (!ctx.cr6.lt) goto loc_821781E8;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1ba8
	ctx.lr = 0x8217815C;
	sub_820E1BA8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e22e8
	ctx.lr = 0x82178164;
	sub_820E22E8(ctx, base);
	// lfs f0,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x821781e8
	if (ctx.cr6.lt) goto loc_821781E8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e2290
	ctx.lr = 0x82178180;
	sub_820E2290(ctx, base);
	// bl 0x821fee88
	ctx.lr = 0x82178184;
	sub_821FEE88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmsubs f1,f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, f31.f64, -f30.f64)));
	// bl 0x820e13b8
	ctx.lr = 0x82178194;
	sub_820E13B8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x820e1f98
	ctx.lr = 0x821781A4;
	sub_820E1F98(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f1,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e1cc0
	ctx.lr = 0x821781B4;
	sub_820E1CC0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x820e1b28
	ctx.lr = 0x821781C4;
	sub_820E1B28(ctx, base);
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// addi r28,r28,-16
	r28.s64 = r28.s64 + -16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r27,r27,-16
	r27.s64 = r27.s64 + -16;
	// stw r11,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821780a4
	if (ctx.cr6.lt) goto loc_821780A4;
loc_821781E8:
	// lwz r9,160(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 160);
	// addi r11,r28,16
	ctx.r11.s64 = r28.s64 + 16;
	// lwz r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 184);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x82178238
	goto loc_82178238;
loc_82178200:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r10,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// lwz r9,184(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82178238:
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82178200
	if (!ctx.cr6.gt) goto loc_82178200;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82181160) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8218117C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfd f0,-4424(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -4424);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821814C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,2504
	ctx.r3.s64 = 2504;
	// addi r11,r11,-4376
	ctx.r11.s64 = ctx.r11.s64 + -4376;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x822c80d0
	ctx.lr = 0x821814F4;
	sub_822C80D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8218151c
	if (ctx.cr0.eq) goto loc_8218151C;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,625
	ctx.r9.s64 = 625;
	// addi r8,r10,-4416
	ctx.r8.s64 = ctx.r10.s64 + -4416;
	// stw r9,2500(r3)
	REX_STORE_U32(ctx.r3.u32 + 2500, ctx.r9.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// b 0x82181520
	goto loc_82181520;
loc_8218151C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82181520:
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r30,68(r31)
	REX_STORE_U8(r31.u32 + 68, r30.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stb r8,44(r31)
	REX_STORE_U8(r31.u32 + 44, ctx.r8.u8);
	// lfs f0,19796(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 19796);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r7.u32);
	// lfs f13,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// stw r6,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r6.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f13,72(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82183638) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4240(r1)
	ea = -4240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,5
	ctx.r11.s64 = 5;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82183270
	ctx.lr = 0x82183670;
	sub_82183270(ctx, base);
	// lis r11,4
	ctx.r11.s64 = 262144;
	// lbz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r11,r11,6100
	ctx.r11.u64 = ctx.r11.u64 | 6100;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stwx r10,r31,r11
	REX_STORE_U32(r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r1,r1,4240
	ctx.r1.s64 = ctx.r1.s64 + 4240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82184750) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,4(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821847e0
	if (ctx.cr6.eq) goto loc_821847E0;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
loc_8218477C:
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,40(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82184798
	if (ctx.cr6.eq) goto loc_82184798;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8218477c
	if (!ctx.cr6.eq) goto loc_8218477C;
loc_82184798:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821847e0
	if (ctx.cr6.eq) goto loc_821847E0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821847b8
	if (ctx.cr6.eq) goto loc_821847B8;
	// bl 0x822c80a8
	ctx.lr = 0x821847B0;
	sub_822C80A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_821847B8:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d6840
	ctx.lr = 0x821847D4;
	sub_822D6840(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_821847E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82187BC8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r3,76(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82187C40) {
	REX_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82187c8c
	if (ctx.cr6.eq) goto loc_82187C8C;
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// srawi. r8,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82187c8c
	if (ctx.cr0.eq) goto loc_82187C8C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82187C6C:
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82187c94
	if (ctx.cr6.eq) goto loc_82187C94;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82187c6c
	if (ctx.cr6.lt) goto loc_82187C6C;
loc_82187C8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82187C94:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82188648) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x82185348
	ctx.lr = 0x82188664;
	sub_82185348(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82188674
	if (!ctx.cr0.eq) goto loc_82188674;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82188680
	goto loc_82188680;
loc_82188674:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82188680:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82189398) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821893A0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r8,r3,888
	ctx.r8.s64 = ctx.r3.s64 + 888;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// extsw r7,r5
	ctx.r7.s64 = ctx.r5.s32;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// stw r8,860(r31)
	REX_STORE_U32(r31.u32 + 860, ctx.r8.u32);
	// addi r8,r31,912
	ctx.r8.s64 = r31.s64 + 912;
	// std r7,928(r31)
	REX_STORE_U64(r31.u32 + 928, ctx.r7.u64);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r8,872(r31)
	REX_STORE_U32(r31.u32 + 872, ctx.r8.u32);
	// extsw r8,r4
	ctx.r8.s64 = ctx.r4.s32;
	// std r6,952(r31)
	REX_STORE_U64(r31.u32 + 952, ctx.r6.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r8,904(r31)
	REX_STORE_U64(r31.u32 + 904, ctx.r8.u64);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r31,936
	ctx.r8.s64 = r31.s64 + 936;
	// stb r10,896(r31)
	REX_STORE_U8(r31.u32 + 896, ctx.r10.u8);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r11,888(r31)
	REX_STORE_U32(r31.u32 + 888, ctx.r11.u32);
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r9,856(r31)
	REX_STORE_U32(r31.u32 + 856, ctx.r9.u32);
	// stw r10,852(r31)
	REX_STORE_U32(r31.u32 + 852, ctx.r10.u32);
	// addi r30,r31,852
	r30.s64 = r31.s64 + 852;
	// stw r11,912(r31)
	REX_STORE_U32(r31.u32 + 912, ctx.r11.u32);
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// stb r10,920(r31)
	REX_STORE_U8(r31.u32 + 920, ctx.r10.u8);
	// stw r9,868(r31)
	REX_STORE_U32(r31.u32 + 868, ctx.r9.u32);
	// stw r7,864(r31)
	REX_STORE_U32(r31.u32 + 864, ctx.r7.u32);
	// stw r8,884(r31)
	REX_STORE_U32(r31.u32 + 884, ctx.r8.u32);
	// stw r11,936(r31)
	REX_STORE_U32(r31.u32 + 936, ctx.r11.u32);
	// stb r10,944(r31)
	REX_STORE_U8(r31.u32 + 944, ctx.r10.u8);
	// stw r9,880(r31)
	REX_STORE_U32(r31.u32 + 880, ctx.r9.u32);
	// stw r6,876(r31)
	REX_STORE_U32(r31.u32 + 876, ctx.r6.u32);
	// bl 0x82188300
	ctx.lr = 0x82189430;
	sub_82188300(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82208cc8
	ctx.lr = 0x82189438;
	sub_82208CC8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 8);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,96(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x82234210
	ctx.lr = 0x82189454;
	sub_82234210(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82189464
	if (ctx.cr0.eq) goto loc_82189464;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82209598
	ctx.lr = 0x82189464;
	sub_82209598(ctx, base);
loc_82189464:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8218D948) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,10148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10148);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 944);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f2,952(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 952);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,104(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82125860
	ctx.lr = 0x8218D978;
	sub_82125860(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// stfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,30776
	ctx.r8.s64 = ctx.r10.s64 + 30776;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lfs f1,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8219f3d0
	ctx.lr = 0x8218D9B4;
	sub_8219F3D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218EC90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8218EC98;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// stw r4,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// rlwinm r28,r4,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r11,-16592
	r29.s64 = ctx.r11.s64 + -16592;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r29,28
	ctx.r11.s64 = r29.s64 + 28;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfsx f0,r28,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// bl 0x821fecf8
	ctx.lr = 0x8218ECC4;
	sub_821FECF8(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// blt cr6,0x8218ecf0
	if (ctx.cr6.lt) goto loc_8218ECF0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// b 0x8218ed48
	goto loc_8218ED48;
loc_8218ECF0:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// beq cr6,0x8218ed20
	if (ctx.cr6.eq) goto loc_8218ED20;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(r30.s32, 3, ctx.xer);
	// beq cr6,0x8218ed20
	if (ctx.cr6.eq) goto loc_8218ED20;
	// bl 0x821feec8
	ctx.lr = 0x8218ED04;
	sub_821FEEC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,26932(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26932);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2332(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2332);
	ctx.f13.f64 = double(temp.f32);
	// fnmadds f0,f1,f0,f13
	ctx.f0.f64 = double(float(-std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// b 0x8218ed44
	goto loc_8218ED44;
loc_8218ED20:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// bl 0x821feec8
	ctx.lr = 0x8218ED30;
	sub_821FEEC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,26932(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26932);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2332(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2332);
	ctx.f13.f64 = double(temp.f32);
	// fnmadds f0,f1,f0,f13
	ctx.f0.f64 = double(float(-std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
loc_8218ED44:
	// stfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
loc_8218ED48:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwzx r10,r28,r29
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + r29.u32);
	// stw r10,11936(r11)
	REX_STORE_U32(ctx.r11.u32 + 11936, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82193C00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82192ed8
	ctx.lr = 0x82193C10;
	sub_82192ED8(ctx, base);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,30856(r10)
	REX_STORE_U16(ctx.r10.u32 + 30856, ctx.r11.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82194318) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82194354
	if (!ctx.cr6.eq) goto loc_82194354;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82194398
	goto loc_82194398;
loc_82194354:
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82194370
	if (!ctx.cr6.gt) goto loc_82194370;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-4224
	ctx.r3.s64 = ctx.r11.s64 + -4224;
	// bl 0x822d4588
	ctx.lr = 0x82194370;
	sub_822D4588(ctx, base);
loc_82194370:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822abfe8
	ctx.lr = 0x8219437C;
	sub_822ABFE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_82194398:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821982E0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-80
	ctx.r3.s64 = ctx.r3.s64 + -80;
	// b 0x821982e8
	goto loc_821982E8;
loc_821982E8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-19520
	ctx.r11.s64 = ctx.r11.s64 + -19520;
	// addi r10,r10,31764
	ctx.r10.s64 = ctx.r10.s64 + 31764;
	// clrlwi. r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,36(r3)
	REX_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
	// sth r10,40(r3)
	REX_STORE_U16(ctx.r3.u32 + 40, ctx.r10.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82199648) {
	REX_FUNC_PROLOGUE();
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
	// lwz r10,80(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,84(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,92(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82199C70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82199cac
	if (ctx.cr0.eq) goto loc_82199CAC;
	// addi r31,r3,52
	r31.s64 = ctx.r3.s64 + 52;
	// lwz r5,8(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-7488
	ctx.r4.s64 = ctx.r11.s64 + -7488;
	// bl 0x822d55f8
	ctx.lr = 0x82199CA4;
	sub_822D55F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82199cd8
	goto loc_82199CD8;
loc_82199CAC:
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82199ccc
	if (!ctx.cr6.eq) goto loc_82199CCC;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82199cd8
	goto loc_82199CD8;
loc_82199CCC:
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82190770
	ctx.lr = 0x82199CD8;
	sub_82190770(ctx, base);
loc_82199CD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219B510) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8219B518;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r10,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r31,r11,r7
	r31.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x820e1df8
	ctx.lr = 0x8219B544;
	sub_820E1DF8(ctx, base);
	// lfs f13,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f13,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// beq cr6,0x8219b584
	if (ctx.cr6.eq) goto loc_8219B584;
	// bl 0x821feec8
	ctx.lr = 0x8219B574;
	sub_821FEEC8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e20b0
	ctx.lr = 0x8219B584;
	sub_820E20B0(ctx, base);
loc_8219B584:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8219b5a4
	if (ctx.cr6.eq) goto loc_8219B5A4;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// lfs f0,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// lfs f0,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
loc_8219B5A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8219D7F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r31,-32480(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8218cb30
	ctx.lr = 0x8219D810;
	sub_8218CB30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8219d820
	if (!ctx.cr0.eq) goto loc_8219D820;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8219d508
	ctx.lr = 0x8219D820;
	sub_8219D508(ctx, base);
loc_8219D820:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219EC40) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8219EC48;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r28,r11,-32480
	r28.s64 = ctx.r11.s64 + -32480;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// bl 0x8218cb30
	ctx.lr = 0x8219EC60;
	sub_8218CB30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8219ed74
	if (!ctx.cr0.eq) goto loc_8219ED74;
	// lwz r31,12(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 12);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lfs f0,200(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x8219ed60
	if (ctx.cr6.gt) goto loc_8219ED60;
	// lwz r29,112(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 112);
	// rlwinm. r11,r29,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219ec90
	if (ctx.cr0.eq) goto loc_8219EC90;
	// rlwinm r29,r29,0,30,27
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
loc_8219EC90:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219ece0
	if (ctx.cr0.eq) goto loc_8219ECE0;
	// rlwinm. r11,r29,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219ecc0
	if (ctx.cr0.eq) goto loc_8219ECC0;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lwz r11,-28724(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -28724);
	// lwz r10,-28720(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -28720);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8219ecc0
	if (!ctx.cr6.lt) goto loc_8219ECC0;
	// subf r4,r11,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r11.u64;
	// b 0x8219ecd8
	goto loc_8219ECD8;
loc_8219ECC0:
	// lfs f0,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8219ECD8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8219e748
	ctx.lr = 0x8219ECE0;
	sub_8219E748(ctx, base);
loc_8219ECE0:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r11,30520
	r30.s64 = ctx.r11.s64 + 30520;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// lfs f0,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r31,180
	ctx.r3.s64 = r31.s64 + 180;
	// lfs f13,48(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bl 0x821a6a08
	ctx.lr = 0x8219ED0C;
	sub_821A6A08(ctx, base);
	// rlwinm. r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219ed2c
	if (ctx.cr0.eq) goto loc_8219ED2C;
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// lwz r10,196(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 196);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8219ed44
	if (ctx.cr6.lt) goto loc_8219ED44;
	// stfs f31,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 188, temp.u32);
	// b 0x8219ed44
	goto loc_8219ED44;
loc_8219ED2C:
	// rlwinm. r11,r29,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219ed44
	if (ctx.cr0.eq) goto loc_8219ED44;
	// lfs f13,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,48(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 188, temp.u32);
loc_8219ED44:
	// lfs f0,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x8219ed74
	if (ctx.cr6.gt) goto loc_8219ED74;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// b 0x8219ed74
	goto loc_8219ED74;
loc_8219ED60:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,30520
	ctx.r11.s64 = ctx.r11.s64 + 30520;
	// lfs f13,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 200, temp.u32);
loc_8219ED74:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821A3DB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r4,0
	ctx.r4.s64 = 0;
	// addi r6,r10,7052
	ctx.r6.s64 = ctx.r10.s64 + 7052;
	// addi r9,r11,15680
	ctx.r9.s64 = ctx.r11.s64 + 15680;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r4,r4,32909
	ctx.r4.u64 = ctx.r4.u64 | 32909;
	// bl 0x821f7d50
	ctx.lr = 0x821A3DEC;
	sub_821F7D50(ctx, base);
	// mr. r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x821a3e08
	if (ctx.cr0.eq) goto loc_821A3E08;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r9,r9,31764
	ctx.r9.s64 = ctx.r9.s64 + 31764;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// b 0x821a3e0c
	goto loc_821A3E0C;
loc_821A3E08:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_821A3E0C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821a3e1c
	if (!ctx.cr6.eq) goto loc_821A3E1C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821a3e60
	goto loc_821A3E60;
loc_821A3E1C:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,208(r10)
	REX_STORE_U32(ctx.r10.u32 + 208, ctx.r10.u32);
	// addi r3,r10,80
	ctx.r3.s64 = ctx.r10.s64 + 80;
	// stw r31,212(r10)
	REX_STORE_U32(ctx.r10.u32 + 212, r31.u32);
	// stw r11,192(r10)
	REX_STORE_U32(ctx.r10.u32 + 192, ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r8,r3,80
	ctx.r8.s64 = ctx.r3.s64 + 80;
	// stw r11,196(r10)
	REX_STORE_U32(ctx.r10.u32 + 196, ctx.r11.u32);
	// stb r11,104(r10)
	REX_STORE_U8(ctx.r10.u32 + 104, ctx.r11.u8);
	// lfs f0,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,96(r10)
	REX_STORE_U32(ctx.r10.u32 + 96, ctx.r8.u32);
	// stfs f0,92(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 92, temp.u32);
	// stb r11,106(r10)
	REX_STORE_U8(ctx.r10.u32 + 106, ctx.r11.u8);
	// stb r11,108(r10)
	REX_STORE_U8(ctx.r10.u32 + 108, ctx.r11.u8);
	// stb r11,109(r10)
	REX_STORE_U8(ctx.r10.u32 + 109, ctx.r11.u8);
	// beq cr6,0x821a3e60
	if (ctx.cr6.eq) goto loc_821A3E60;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_821A3E60:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A7180) {
	REX_FUNC_PROLOGUE();
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e78
	ctx.lr = 0x821A7188;
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// lwz r11,7792(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7792);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r24,1644(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 1644);
	// ble cr6,0x821a71e4
	if (!ctx.cr6.gt) goto loc_821A71E4;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// subf r28,r5,r6
	r28.u64 = ctx.r6.u64 - ctx.r5.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
loc_821A71C8:
	// add r5,r28,r31
	ctx.r5.u64 = r28.u64 + r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e1df8
	ctx.lr = 0x821A71D8;
	sub_820E1DF8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x821a71c8
	if (!ctx.cr0.eq) goto loc_821A71C8;
loc_821A71E4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e01b0
	ctx.lr = 0x821A71EC;
	sub_820E01B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f1,2012(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0810
	ctx.lr = 0x821A71FC;
	sub_820E0810(ctx, base);
	// addic. r24,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r24.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// li r30,0
	r30.s64 = 0;
	// ble 0x821a72f8
	if (!ctx.cr0.gt) goto loc_821A72F8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f31.f64 = double(temp.f32);
loc_821A7210:
	// rlwinm r31,r30,4,0,27
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r29,r31,r27
	r29.u64 = r31.u64 + r27.u64;
	// addi r28,r29,16
	r28.s64 = r29.s64 + 16;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x820e1bf0
	ctx.lr = 0x821A722C;
	sub_820E1BF0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1df8
	ctx.lr = 0x821A723C;
	sub_820E1DF8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a6ae8
	ctx.lr = 0x821A7244;
	sub_821A6AE8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x820e1cf8
	ctx.lr = 0x821A7254;
	sub_820E1CF8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x821a7280
	if (!ctx.cr6.eq) goto loc_821A7280;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x820e1bf0
	ctx.lr = 0x821A726C;
	sub_820E1BF0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x820e1b70
	ctx.lr = 0x821A727C;
	sub_820E1B70(ctx, base);
	// b 0x821a72c4
	goto loc_821A72C4;
loc_821A7280:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1bf0
	ctx.lr = 0x821A728C;
	sub_820E1BF0(ctx, base);
	// add r4,r31,r26
	ctx.r4.u64 = r31.u64 + r26.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x820e20b0
	ctx.lr = 0x821A72A0;
	sub_820E20B0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1b70
	ctx.lr = 0x821A72B0;
	sub_820E1B70(ctx, base);
	// add r4,r31,r25
	ctx.r4.u64 = r31.u64 + r25.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x820e20b0
	ctx.lr = 0x821A72C4;
	sub_820E20B0(ctx, base);
loc_821A72C4:
	// add r11,r31,r26
	ctx.r11.u64 = r31.u64 + r26.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x820e1bf0
	ctx.lr = 0x821A72D8;
	sub_820E1BF0(ctx, base);
	// add r11,r31,r25
	ctx.r11.u64 = r31.u64 + r25.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x820e1b70
	ctx.lr = 0x821A72EC;
	sub_820E1B70(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r24
	ctx.cr6.compare<int32_t>(r30.s32, r24.s32, ctx.xer);
	// blt cr6,0x821a7210
	if (ctx.cr6.lt) goto loc_821A7210;
loc_821A72F8:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_821ABB98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,8236
	ctx.r11.s64 = ctx.r11.s64 + 8236;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821ABBC4;
	sub_821E2FD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821abbd4
	if (ctx.cr0.eq) goto loc_821ABBD4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821ABBD4;
	sub_822C80A8(ctx, base);
loc_821ABBD4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AFDB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r11,r11,-7176
	ctx.r11.s64 = ctx.r11.s64 + -7176;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B0A58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821b09f0
	ctx.lr = 0x821B0A74;
	sub_821B09F0(ctx, base);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821b0aa4
	if (!ctx.cr6.eq) goto loc_821B0AA4;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r11,432
	r30.s64 = ctx.r11.s64 + 432;
	// li r11,9
	ctx.r11.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r31,30(r30)
	r31.u64 = REX_LOAD_U16(r30.u32 + 30);
	// sth r11,30(r30)
	REX_STORE_U16(r30.u32 + 30, ctx.r11.u16);
	// bl 0x821c5010
	ctx.lr = 0x821B0AA0;
	sub_821C5010(ctx, base);
	// sth r31,30(r30)
	REX_STORE_U16(r30.u32 + 30, r31.u16);
loc_821B0AA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B1BC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,856(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 856);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b1c10
	if (!ctx.cr6.eq) goto loc_821B1C10;
	// lwz r4,860(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 860);
	// bl 0x820fbcd8
	ctx.lr = 0x821B1BE8;
	sub_820FBCD8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// stw r11,856(r31)
	REX_STORE_U32(r31.u32 + 856, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r10,-27144
	ctx.r10.s64 = ctx.r10.s64 + -27144;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,9504
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9504));
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x820f5e30
	ctx.lr = 0x821B1C10;
	sub_820F5E30(ctx, base);
loc_821B1C10:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B3248) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lhz r11,594(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 594);
	// lbz r10,210(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 210);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// lbz r9,182(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 182);
	// lwz r7,5564(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 5564);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lbz r6,0(r4)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// lha r8,5816(r4)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r4.u32 + 5816));
	// rlwinm r5,r11,28,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x2;
	// lhz r31,624(r4)
	r31.u64 = REX_LOAD_U16(ctx.r4.u32 + 624);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// or r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 | ctx.r10.u64;
	// srawi r6,r8,10
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 10;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwimi r7,r9,4,0,27
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r7.u64 & 0xFFFFFFFF0000000F);
	// rlwimi r31,r7,3,0,28
	r31.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8) | (r31.u64 & 0xFFFFFFFF00000007);
	// rlwimi r6,r31,6,0,25
	ctx.r6.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 6) & 0xFFFFFFC0) | (ctx.r6.u64 & 0xFFFFFFFF0000003F);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwimi r11,r8,0,27,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE0);
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// lhz r9,88(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 88);
	// cmplwi cr6,r9,25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 25, ctx.xer);
	// bne cr6,0x821b32e4
	if (!ctx.cr6.eq) goto loc_821B32E4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,692(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 692);
	ctx.f13.f64 = double(temp.f32);
	// lhz r8,92(r4)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + 92);
	// lfs f0,32280(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 32280);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwimi r8,r9,5,0,26
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0) | (ctx.r8.u64 & 0xFFFFFFFF0000001F);
	// rlwinm r9,r8,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
loc_821B32E4:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BE030) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,10008(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10008);
	// lhz r10,100(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 100);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x821be048
	if (!ctx.cr6.eq) goto loc_821BE048;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821BE048:
	// lhz r9,104(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 104);
	// lfs f0,108(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lhz r8,102(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 102);
	// stfs f0,124(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// sth r10,116(r11)
	REX_STORE_U16(ctx.r11.u32 + 116, ctx.r10.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r9,120(r11)
	REX_STORE_U16(ctx.r11.u32 + 120, ctx.r9.u16);
	// sth r8,118(r11)
	REX_STORE_U16(ctx.r11.u32 + 118, ctx.r8.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BE3D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r9,13
	ctx.r9.s64 = 13;
	// addi r11,r3,648
	ctx.r11.s64 = ctx.r3.s64 + 648;
	// addi r10,r11,52
	ctx.r10.s64 = ctx.r11.s64 + 52;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
loc_821BE3F0:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821be410
	if (ctx.cr6.lt) goto loc_821BE410;
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmadds f0,f11,f0,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_821BE410:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x821be3f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BE3F0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BF0F8) {
	REX_FUNC_PROLOGUE();
	// mulli r11,r4,896
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(896));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r7,64
	ctx.r7.s64 = 64;
	// addi r9,r11,7368
	ctx.r9.s64 = ctx.r11.s64 + 7368;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// addi r6,r9,268
	ctx.r6.s64 = ctx.r9.s64 + 268;
	// stw r10,7368(r11)
	REX_STORE_U32(ctx.r11.u32 + 7368, ctx.r10.u32);
	// stw r10,7372(r11)
	REX_STORE_U32(ctx.r11.u32 + 7372, ctx.r10.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r10,7376(r11)
	REX_STORE_U32(ctx.r11.u32 + 7376, ctx.r10.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
loc_821BF12C:
	// li r8,-1
	ctx.r8.s64 = -1;
	// sth r8,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r8.u16);
	// sthx r10,r11,r9
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bdnz 0x821bf12c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF12C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BF7B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r6,10016(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 10016);
	// bl 0x821bf630
	ctx.lr = 0x821BF7C4;
	sub_821BF630(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BFAF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e80
	ctx.lr = 0x821BFAF8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821bfb98
	if (ctx.cr6.eq) goto loc_821BFB98;
	// lhz r11,2(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x821bfb98
	if (ctx.cr6.eq) goto loc_821BFB98;
	// ld r29,880(r4)
	r29.u64 = REX_LOAD_U64(ctx.r4.u32 + 880);
	// li r30,0
	r30.s64 = 0;
	// ld r28,888(r4)
	r28.u64 = REX_LOAD_U64(ctx.r4.u32 + 888);
	// addi r26,r3,160
	r26.s64 = ctx.r3.s64 + 160;
	// std r30,864(r4)
	REX_STORE_U64(ctx.r4.u32 + 864, r30.u64);
	// or r11,r28,r29
	ctx.r11.u64 = r28.u64 | r29.u64;
	// std r11,872(r4)
	REX_STORE_U64(ctx.r4.u32 + 872, ctx.r11.u64);
loc_821BFB34:
	// lbzx r11,r26,r30
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + r30.u32);
	// clrldi r10,r29,63
	ctx.r10.u64 = r29.u64 & 0x1;
	// slw r11,r11,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r30.u8 & 0x3F));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// std r11,864(r31)
	REX_STORE_U64(r31.u32 + 864, ctx.r11.u64);
	// beq cr6,0x821bfb64
	if (ctx.cr6.eq) goto loc_821BFB64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821bf940
	ctx.lr = 0x821BFB64;
	sub_821BF940(ctx, base);
loc_821BFB64:
	// clrldi r11,r28,63
	ctx.r11.u64 = r28.u64 & 0x1;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x821bfb84
	if (ctx.cr6.eq) goto loc_821BFB84;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821bf940
	ctx.lr = 0x821BFB84;
	sub_821BF940(ctx, base);
loc_821BFB84:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// rldicl r29,r29,63,1
	r29.u64 = __builtin_rotateleft64(r29.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// rldicl r28,r28,63,1
	r28.u64 = __builtin_rotateleft64(r28.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// cmpwi cr6,r30,64
	ctx.cr6.compare<int32_t>(r30.s32, 64, ctx.xer);
	// blt cr6,0x821bfb34
	if (ctx.cr6.lt) goto loc_821BFB34;
loc_821BFB98:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_821C1760) {
	REX_FUNC_PROLOGUE();
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e54
	ctx.lr = 0x821C1768;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x822d4f38
	ctx.lr = 0x821C1770;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r28,r4,896
	r28.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(896));
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// add r11,r28,r3
	ctx.r11.u64 = r28.u64 + ctx.r3.u64;
	// li r23,0
	r23.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r15,r4
	r15.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r25,7360(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 7360);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// li r20,1
	r20.s64 = 1;
	// mr r16,r23
	r16.u64 = r23.u64;
	// addi r30,r11,7224
	r30.s64 = ctx.r11.s64 + 7224;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821c17f8
	if (!ctx.cr6.eq) goto loc_821C17F8;
	// lha r11,2(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 2));
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821c17c8
	if (!ctx.cr6.eq) goto loc_821C17C8;
	// sth r20,30(r30)
	REX_STORE_U16(r30.u32 + 30, r20.u16);
	// b 0x821c17fc
	goto loc_821C17FC;
loc_821C17C8:
	// sth r23,30(r30)
	REX_STORE_U16(r30.u32 + 30, r23.u16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r24,164(r31)
	r24.u64 = REX_LOAD_U8(r31.u32 + 164);
	// bl 0x821bfd38
	ctx.lr = 0x821C17DC;
	sub_821BFD38(ctx, base);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x821c17fc
	if (ctx.cr6.eq) goto loc_821C17FC;
	// lbz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 164);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c17fc
	if (ctx.cr0.eq) goto loc_821C17FC;
	// stb r20,192(r31)
	REX_STORE_U8(r31.u32 + 192, r20.u8);
	// b 0x821c17fc
	goto loc_821C17FC;
loc_821C17F8:
	// sth r23,30(r30)
	REX_STORE_U16(r30.u32 + 30, r23.u16);
loc_821C17FC:
	// lhz r11,104(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 104);
	// li r19,-1
	r19.s64 = -1;
	// sth r23,72(r30)
	REX_STORE_U16(r30.u32 + 72, r23.u16);
	// sth r19,82(r30)
	REX_STORE_U16(r30.u32 + 82, r19.u16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r29,2(r30)
	REX_STORE_U16(r30.u32 + 2, r29.u16);
	// sth r19,88(r30)
	REX_STORE_U16(r30.u32 + 88, r19.u16);
	// sth r19,86(r30)
	REX_STORE_U16(r30.u32 + 86, r19.u16);
	// sth r19,84(r30)
	REX_STORE_U16(r30.u32 + 84, r19.u16);
	// bne 0x821c182c
	if (!ctx.cr0.eq) goto loc_821C182C;
	// sth r19,100(r30)
	REX_STORE_U16(r30.u32 + 100, r19.u16);
	// sth r23,104(r30)
	REX_STORE_U16(r30.u32 + 104, r23.u16);
loc_821C182C:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r30,520
	ctx.r11.s64 = r30.s64 + 520;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821C1838:
	// sthu r19,20(r11)
	ea = 20 + ctx.r11.u32;
	REX_STORE_U16(ea, r19.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x821c1838
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C1838;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(r29.s32, -1, ctx.xer);
	// beq cr6,0x821c1ef4
	if (ctx.cr6.eq) goto loc_821C1EF4;
	// srawi r10,r29,12
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xFFF) != 0);
	ctx.r10.s64 = r29.s32 >> 12;
	// lwz r11,10040(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10040);
	// clrlwi r9,r29,20
	ctx.r9.u64 = r29.u32 & 0xFFF;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// mulli r8,r9,96
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(96));
	// mulli r10,r10,164
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(164));
	// add r22,r10,r11
	r22.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r7,r28,r31
	ctx.r7.u64 = r31.u64 - r28.u64;
	// addic. r10,r7,8120
	ctx.xer.ca = ctx.r7.u32 > 4294959175;
	ctx.r10.s64 = ctx.r7.s64 + 8120;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,48(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 48);
	// add r28,r8,r9
	r28.u64 = ctx.r8.u64 + ctx.r9.u64;
	// beq 0x821c18a8
	if (ctx.cr0.eq) goto loc_821C18A8;
	// lha r10,2(r10)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 2));
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x821c18a8
	if (ctx.cr6.eq) goto loc_821C18A8;
	// srawi r9,r10,12
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 12;
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// clrlwi r8,r9,28
	ctx.r8.u64 = ctx.r9.u32 & 0xF;
	// mulli r9,r10,96
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(96));
	// mulli r10,r8,164
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(164));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// add r24,r11,r9
	r24.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x821c18ac
	goto loc_821C18AC;
loc_821C18A8:
	// mr r24,r23
	r24.u64 = r23.u64;
loc_821C18AC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f28,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f28,20(r30)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r30.u32 + 20, temp.u32);
	// sth r23,26(r30)
	REX_STORE_U16(r30.u32 + 26, r23.u16);
	// sth r23,28(r30)
	REX_STORE_U16(r30.u32 + 28, r23.u16);
	// lfs f0,48(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lfs f29,2392(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2392);
	f29.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x821c1900
	if (ctx.cr6.lt) goto loc_821C1900;
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x821c1900
	if (ctx.cr0.eq) goto loc_821C1900;
	// lhz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 2);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x821c1900
	if (ctx.cr6.eq) goto loc_821C1900;
	// stfs f0,48(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 48, temp.u32);
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 52, temp.u32);
	// stfs f31,64(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 64, temp.u32);
	// stfs f31,60(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 60, temp.u32);
loc_821C1900:
	// stw r23,4(r30)
	REX_STORE_U32(r30.u32 + 4, r23.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// sth r23,36(r30)
	REX_STORE_U16(r30.u32 + 36, r23.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bfba0
	ctx.lr = 0x821C1914;
	sub_821BFBA0(ctx, base);
	// stb r20,182(r31)
	REX_STORE_U8(r31.u32 + 182, r20.u8);
	// stb r20,215(r31)
	REX_STORE_U8(r31.u32 + 215, r20.u8);
	// li r5,8
	ctx.r5.s64 = 8;
	// stb r20,216(r31)
	REX_STORE_U8(r31.u32 + 216, r20.u8);
	// addi r4,r28,32
	ctx.r4.s64 = r28.s64 + 32;
	// stb r23,203(r31)
	REX_STORE_U8(r31.u32 + 203, r23.u8);
	// addi r3,r30,880
	ctx.r3.s64 = r30.s64 + 880;
	// bl 0x821ff870
	ctx.lr = 0x821C1934;
	sub_821FF870(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r28,40
	ctx.r4.s64 = r28.s64 + 40;
	// addi r3,r30,888
	ctx.r3.s64 = r30.s64 + 888;
	// bl 0x821ff870
	ctx.lr = 0x821C1944;
	sub_821FF870(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bfaf0
	ctx.lr = 0x821C1950;
	sub_821BFAF0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821c67f0
	ctx.lr = 0x821C1964;
	sub_821C67F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// li r17,2
	r17.s64 = 2;
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// addi r27,r25,48
	r27.s64 = r25.s64 + 48;
	// sth r23,74(r30)
	REX_STORE_U16(r30.u32 + 74, r23.u16);
	// addi r29,r28,2
	r29.s64 = r28.s64 + 2;
	// addi r26,r1,96
	r26.s64 = ctx.r1.s64 + 96;
	// lfs f30,16620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16620);
	f30.f64 = double(temp.f32);
	// mr r25,r17
	r25.u64 = r17.u64;
loc_821C198C:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lha r5,-2(r29)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r29.u32 + -2));
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821c19a0
	if (ctx.cr6.eq) goto loc_821C19A0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_821C19A0:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq cr6,0x821c19ac
	if (ctx.cr6.eq) goto loc_821C19AC;
	// ori r5,r5,16384
	ctx.r5.u64 = ctx.r5.u64 | 16384;
loc_821C19AC:
	// lha r11,2(r29)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r29.u32 + 2));
	// lfs f13,10(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 10);
	ctx.f13.f64 = double(temp.f32);
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// fmuls f2,f13,f29
	ctx.f2.f64 = double(float(ctx.f13.f64 * f29.f64));
	// lha r10,0(r29)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r29.u32 + 0));
	// lfs f0,6(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 6);
	ctx.f0.f64 = double(temp.f32);
	// std r10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// addi r4,r27,-48
	ctx.r4.s64 = r27.s64 + -48;
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lbz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U8(r29.u32 + 4);
	// lbz r8,5(r29)
	ctx.r8.u64 = REX_LOAD_U8(r29.u32 + 5);
	// fmr f5,f28
	ctx.f5.f64 = f28.f64;
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * f29.f64));
	// frsp f3,f12
	ctx.f3.f64 = double(float(ctx.f12.f64));
	// frsp f4,f13
	ctx.f4.f64 = double(float(ctx.f13.f64));
	// bl 0x821c0050
	ctx.lr = 0x821C19FC;
	sub_821C0050(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821c1a28
	if (ctx.cr0.eq) goto loc_821C1A28;
	// lfs f0,16(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bgt cr6,0x821c1a14
	if (ctx.cr6.gt) goto loc_821C1A14;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
loc_821C1A14:
	// lfs f13,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bge cr6,0x821c1a28
	if (!ctx.cr6.lt) goto loc_821C1A28;
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
loc_821C1A28:
	// lbz r11,5(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 5);
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c1a38
	if (ctx.cr0.eq) goto loc_821C1A38;
	// sth r11,74(r30)
	REX_STORE_U16(r30.u32 + 74, ctx.r11.u16);
loc_821C1A38:
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// addi r27,r27,164
	r27.s64 = r27.s64 + 164;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// bne 0x821c198c
	if (!ctx.cr0.eq) goto loc_821C198C;
	// lwz r11,52(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 52);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x821c1a74
	if (ctx.cr6.eq) goto loc_821C1A74;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 16, temp.u32);
	// b 0x821c1a78
	goto loc_821C1A78;
loc_821C1A74:
	// stfs f31,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 16, temp.u32);
loc_821C1A78:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x821c1a84
	if (!ctx.cr6.eq) goto loc_821C1A84;
	// stw r23,15908(r31)
	REX_STORE_U32(r31.u32 + 15908, r23.u32);
loc_821C1A84:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lha r29,88(r28)
	r29.s64 = int16_t(REX_LOAD_U16(r28.u32 + 88));
	// li r18,3
	r18.s64 = 3;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// addi r21,r11,432
	r21.s64 = ctx.r11.s64 + 432;
	// beq cr6,0x821c1aa8
	if (ctx.cr6.eq) goto loc_821C1AA8;
	// lhz r11,88(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 88);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x821c1e0c
	if (!ctx.cr6.eq) goto loc_821C1E0C;
loc_821C1AA8:
	// lhz r11,10(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 10);
	// lis r24,0
	r24.s64 = 0;
	// ori r24,r24,65533
	r24.u64 = r24.u64 | 65533;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c1af4
	if (ctx.cr0.eq) goto loc_821C1AF4;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// addi r10,r9,23240
	ctx.r10.s64 = ctx.r9.s64 + 23240;
	// mulli r7,r8,284
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(284));
	// lwz r11,23240(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 23240);
	// addi r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 + 52;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// lwzx r10,r7,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c1af4
	if (ctx.cr0.eq) goto loc_821C1AF4;
	// lis r24,6
	r24.s64 = 393216;
	// ori r24,r24,61632
	r24.u64 = r24.u64 | 61632;
loc_821C1AF4:
	// lwz r10,5780(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5780);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821c1b6c
	if (ctx.cr6.eq) goto loc_821C1B6C;
	// lha r11,54(r10)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 54));
	// lfs f13,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x821c1b3c
	if (!ctx.cr6.lt) goto loc_821C1B3C;
	// lha r9,56(r10)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 56));
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x821c1b6c
	if (!ctx.cr6.eq) goto loc_821C1B6C;
	// lfs f13,96(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x821c1b6c
	if (ctx.cr6.eq) goto loc_821C1B6C;
loc_821C1B3C:
	// lwz r11,5792(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5792);
	// stb r23,194(r31)
	REX_STORE_U8(r31.u32 + 194, r23.u8);
	// stb r23,217(r31)
	REX_STORE_U8(r31.u32 + 217, r23.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r23,195(r31)
	REX_STORE_U8(r31.u32 + 195, r23.u8);
	// beq cr6,0x821c1b64
	if (ctx.cr6.eq) goto loc_821C1B64;
	// lwz r9,5784(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// stw r11,5900(r31)
	REX_STORE_U32(r31.u32 + 5900, ctx.r11.u32);
	// stw r10,5904(r31)
	REX_STORE_U32(r31.u32 + 5904, ctx.r10.u32);
	// stw r9,5908(r31)
	REX_STORE_U32(r31.u32 + 5908, ctx.r9.u32);
loc_821C1B64:
	// stw r20,5896(r31)
	REX_STORE_U32(r31.u32 + 5896, r20.u32);
	// b 0x821c1b74
	goto loc_821C1B74;
loc_821C1B6C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c0618
	ctx.lr = 0x821C1B74;
	sub_821C0618(ctx, base);
loc_821C1B74:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(r29.s32, -1, ctx.xer);
	// beq cr6,0x821c1e08
	if (ctx.cr6.eq) goto loc_821C1E08;
	// rlwinm. r10,r29,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,5852(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5852);
	// addi r8,r31,10532
	ctx.r8.s64 = r31.s64 + 10532;
	// lwz r9,10532(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 10532);
	// lwz r8,10536(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 10536);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r7,10540(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 10540);
	// lwz r10,10544(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10544);
	// stw r30,5788(r31)
	REX_STORE_U32(r31.u32 + 5788, r30.u32);
	// stw r11,5852(r31)
	REX_STORE_U32(r31.u32 + 5852, ctx.r11.u32);
	// stw r9,5700(r31)
	REX_STORE_U32(r31.u32 + 5700, ctx.r9.u32);
	// stw r8,5704(r31)
	REX_STORE_U32(r31.u32 + 5704, ctx.r8.u32);
	// stw r7,5708(r31)
	REX_STORE_U32(r31.u32 + 5708, ctx.r7.u32);
	// stw r10,5712(r31)
	REX_STORE_U32(r31.u32 + 5712, ctx.r10.u32);
	// stw r17,5896(r31)
	REX_STORE_U32(r31.u32 + 5896, r17.u32);
	// beq 0x821c1c08
	if (ctx.cr0.eq) goto loc_821C1C08;
	// rlwinm r10,r29,0,20,18
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// lwz r11,60(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 60);
	// stw r23,5780(r31)
	REX_STORE_U32(r31.u32 + 5780, r23.u32);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,5784(r31)
	REX_STORE_U32(r31.u32 + 5784, ctx.r11.u32);
	// lhz r11,16(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c1e0c
	if (ctx.cr0.eq) goto loc_821C1E0C;
	// lwz r11,19672(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19672);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821c1e0c
	if (!ctx.cr6.eq) goto loc_821C1E0C;
	// addi r29,r31,6272
	r29.s64 = r31.s64 + 6272;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215bc88
	ctx.lr = 0x821C1BFC;
	sub_8215BC88(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x821c1dfc
	goto loc_821C1DFC;
loc_821C1C08:
	// mulli r10,r29,96
	ctx.r10.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(96));
	// stb r20,187(r31)
	REX_STORE_U8(r31.u32 + 187, r20.u8);
	// lwz r11,56(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 56);
	// std r23,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, r23.u64);
	// stw r23,5784(r31)
	REX_STORE_U32(r31.u32 + 5784, r23.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r27,r11,0
	r27.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,5780(r31)
	REX_STORE_U32(r31.u32 + 5780, ctx.r11.u32);
	// mr r25,r23
	r25.u64 = r23.u64;
	// cmplwi r27,0
	ctx.cr0.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// stw r27,5776(r31)
	REX_STORE_U32(r31.u32 + 5776, r27.u32);
	// beq 0x821c1c4c
	if (ctx.cr0.eq) goto loc_821C1C4C;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821ff870
	ctx.lr = 0x821C1C48;
	sub_821FF870(ctx, base);
	// ld r25,96(r1)
	r25.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
loc_821C1C4C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r29,193(r31)
	r29.u64 = REX_LOAD_U8(r31.u32 + 193);
	// lbz r28,195(r31)
	r28.u64 = REX_LOAD_U8(r31.u32 + 195);
	// mr r26,r23
	r26.u64 = r23.u64;
	// bl 0x821c0228
	ctx.lr = 0x821C1C60;
	sub_821C0228(ctx, base);
	// lbz r11,193(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 193);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c1c80
	if (ctx.cr0.eq) goto loc_821C1C80;
	// stw r23,5900(r31)
	REX_STORE_U32(r31.u32 + 5900, r23.u32);
	// stw r23,5904(r31)
	REX_STORE_U32(r31.u32 + 5904, r23.u32);
	// stw r23,5908(r31)
	REX_STORE_U32(r31.u32 + 5908, r23.u32);
	// stb r23,194(r31)
	REX_STORE_U8(r31.u32 + 194, r23.u8);
	// stw r18,5896(r31)
	REX_STORE_U32(r31.u32 + 5896, r18.u32);
loc_821C1C80:
	// lbz r10,195(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 195);
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// or r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 | r28.u64;
	// stb r11,193(r31)
	REX_STORE_U8(r31.u32 + 193, ctx.r11.u8);
	// stb r10,195(r31)
	REX_STORE_U8(r31.u32 + 195, ctx.r10.u8);
	// bl 0x821c8be0
	ctx.lr = 0x821C1C9C;
	sub_821C8BE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8218c1a0
	ctx.lr = 0x821C1CA4;
	sub_8218C1A0(ctx, base);
	// lhz r11,16(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c1cc8
	if (ctx.cr0.eq) goto loc_821C1CC8;
	// lwz r11,19672(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19672);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821c1cc8
	if (!ctx.cr6.eq) goto loc_821C1CC8;
	// or r4,r25,r24
	ctx.r4.u64 = r25.u64 | r24.u64;
	// addi r3,r31,6272
	ctx.r3.s64 = r31.s64 + 6272;
	// bl 0x8215bc88
	ctx.lr = 0x821C1CC8;
	sub_8215BC88(ctx, base);
loc_821C1CC8:
	// lhz r8,90(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 90);
	// lis r11,240
	ctx.r11.s64 = 15728640;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// cmpwi cr6,r10,28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 28, ctx.xer);
	// bne cr6,0x821c1ce0
	if (!ctx.cr6.eq) goto loc_821C1CE0;
	// lis r11,48
	ctx.r11.s64 = 3145728;
loc_821C1CE0:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// and r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 & r25.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x821c1da4
	if (ctx.cr6.eq) goto loc_821C1DA4;
	// lwz r11,5780(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c1d24
	if (ctx.cr6.eq) goto loc_821C1D24;
	// lha r11,78(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 78));
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821c1d24
	if (ctx.cr6.eq) goto loc_821C1D24;
	// lbz r10,194(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 194);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821c1d24
	if (!ctx.cr0.eq) goto loc_821C1D24;
	// lbz r10,217(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 217);
	// rlwinm r11,r11,0,17,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821c1d28
	if (ctx.cr0.eq) goto loc_821C1D28;
loc_821C1D24:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_821C1D28:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// bge cr6,0x821c1d38
	if (!ctx.cr6.lt) goto loc_821C1D38;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
loc_821C1D38:
	// lhz r11,52(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 52);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c1d6c
	if (ctx.cr0.eq) goto loc_821C1D6C;
	// lhz r11,10(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c1d6c
	if (!ctx.cr0.eq) goto loc_821C1D6C;
	// lha r11,12(r27)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r27.u32 + 12));
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bge cr6,0x821c1d6c
	if (!ctx.cr6.lt) goto loc_821C1D6C;
	// li r9,4
	ctx.r9.s64 = 4;
loc_821C1D6C:
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x821c1d9c
	if (ctx.cr6.eq) goto loc_821C1D9C;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// beq cr6,0x821c1d9c
	if (ctx.cr6.eq) goto loc_821C1D9C;
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// beq cr6,0x821c1dcc
	if (ctx.cr6.eq) goto loc_821C1DCC;
	// rlwinm r11,r25,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x100000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x821c1ddc
	if (!ctx.cr6.eq) goto loc_821C1DDC;
	// mr r26,r20
	r26.u64 = r20.u64;
	// b 0x821c1de0
	goto loc_821C1DE0;
loc_821C1D9C:
	// mr r16,r20
	r16.u64 = r20.u64;
	// b 0x821c1ddc
	goto loc_821C1DDC;
loc_821C1DA4:
	// lis r12,198
	ctx.r12.s64 = 12976128;
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// ori r12,r12,61632
	ctx.r12.u64 = ctx.r12.u64 | 61632;
	// and. r11,r25,r12
	ctx.r11.u64 = r25.u64 & ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c1dc0
	if (ctx.cr0.eq) goto loc_821C1DC0;
	// li r26,5
	r26.s64 = 5;
	// b 0x821c1de0
	goto loc_821C1DE0;
loc_821C1DC0:
	// li r26,4
	r26.s64 = 4;
	// cmpwi cr6,r10,28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 28, ctx.xer);
	// bne cr6,0x821c1de0
	if (!ctx.cr6.eq) goto loc_821C1DE0;
loc_821C1DCC:
	// lhz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 140);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x821c1de0
	if (!ctx.cr6.eq) goto loc_821C1DE0;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
loc_821C1DDC:
	// mr r26,r23
	r26.u64 = r23.u64;
loc_821C1DE0:
	// lwz r11,19672(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19672);
	// stw r9,5792(r31)
	REX_STORE_U32(r31.u32 + 5792, ctx.r9.u32);
	// stw r26,5796(r31)
	REX_STORE_U32(r31.u32 + 5796, r26.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821c1e0c
	if (!ctx.cr6.eq) goto loc_821C1E0C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,6272
	ctx.r3.s64 = r31.s64 + 6272;
loc_821C1DFC:
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x8215bc48
	ctx.lr = 0x821C1E04;
	sub_8215BC48(ctx, base);
	// b 0x821c1e0c
	goto loc_821C1E0C;
loc_821C1E08:
	// stw r23,5852(r31)
	REX_STORE_U32(r31.u32 + 5852, r23.u32);
loc_821C1E0C:
	// lwz r11,40(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 40);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821c1ef4
	if (ctx.cr6.eq) goto loc_821C1EF4;
	// lha r11,2(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 2));
	// sth r23,72(r30)
	REX_STORE_U16(r30.u32 + 72, r23.u16);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// sth r20,38(r30)
	REX_STORE_U16(r30.u32 + 38, r20.u16);
	// blt cr6,0x821c1e34
	if (ctx.cr6.lt) goto loc_821C1E34;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821c1ee0
	if (ctx.cr6.lt) goto loc_821C1EE0;
loc_821C1E34:
	// stw r30,10008(r31)
	REX_STORE_U32(r31.u32 + 10008, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lha r11,0(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 0));
	// stw r11,10016(r31)
	REX_STORE_U32(r31.u32 + 10016, ctx.r11.u32);
	// lha r11,0(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 0));
	// slw r11,r20,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r11.u8 & 0x3F));
	// stw r11,10024(r31)
	REX_STORE_U32(r31.u32 + 10024, ctx.r11.u32);
	// lhz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 2);
	// sth r11,10032(r31)
	REX_STORE_U16(r31.u32 + 10032, ctx.r11.u16);
	// lha r11,0(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 0));
	// subfic r11,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r11.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// mulli r10,r11,896
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(896));
	// stw r11,10020(r31)
	REX_STORE_U32(r31.u32 + 10020, ctx.r11.u32);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r11,r11,7224
	ctx.r11.s64 = ctx.r11.s64 + 7224;
	// stw r11,10012(r31)
	REX_STORE_U32(r31.u32 + 10012, ctx.r11.u32);
	// lha r4,2(r30)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r30.u32 + 2));
	// bl 0x821bede8
	ctx.lr = 0x821C1E7C;
	sub_821BEDE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821a4c80
	ctx.lr = 0x821C1E88;
	sub_821A4C80(ctx, base);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq cr6,0x821c1ee0
	if (ctx.cr6.eq) goto loc_821C1EE0;
	// lhz r11,594(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 594);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821c1edc
	if (!ctx.cr0.gt) goto loc_821C1EDC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x821c1ec4
	if (!ctx.cr6.gt) goto loc_821C1EC4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821c1ec4
	if (ctx.cr6.eq) goto loc_821C1EC4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821c1ed4
	if (ctx.cr6.eq) goto loc_821C1ED4;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821c1ecc
	if (ctx.cr6.eq) goto loc_821C1ECC;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x821c1edc
	if (!ctx.cr6.eq) goto loc_821C1EDC;
loc_821C1EC4:
	// stw r20,5796(r31)
	REX_STORE_U32(r31.u32 + 5796, r20.u32);
	// b 0x821c1ee0
	goto loc_821C1EE0;
loc_821C1ECC:
	// stw r18,5796(r31)
	REX_STORE_U32(r31.u32 + 5796, r18.u32);
	// b 0x821c1ee0
	goto loc_821C1EE0;
loc_821C1ED4:
	// stw r17,5796(r31)
	REX_STORE_U32(r31.u32 + 5796, r17.u32);
	// b 0x821c1ee0
	goto loc_821C1EE0;
loc_821C1EDC:
	// stw r23,5796(r31)
	REX_STORE_U32(r31.u32 + 5796, r23.u32);
loc_821C1EE0:
	// sth r23,38(r30)
	REX_STORE_U16(r30.u32 + 38, r23.u16);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c4f80
	ctx.lr = 0x821C1EF0;
	sub_821C4F80(ctx, base);
	// stw r23,10036(r31)
	REX_STORE_U32(r31.u32 + 10036, r23.u32);
loc_821C1EF4:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x822d4f84
	ctx.lr = 0x821C1F00;
	// b 0x822d4ea4
	return;
}

DEFINE_REX_FUNC(sub_821E1C50) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lbz r10,2971(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2971);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821e1c98
	if (!ctx.cr0.eq) goto loc_821E1C98;
	// lbz r11,2973(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2973);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821e1c98
	if (!ctx.cr0.eq) goto loc_821E1C98;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r10,r10,5128
	ctx.r10.s64 = ctx.r10.s64 + 5128;
loc_821E1C78:
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x821e1c98
	if (ctx.cr0.eq) goto loc_821E1C98;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x821e1c78
	if (ctx.cr6.lt) goto loc_821E1C78;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_821E1C98:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E21B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821e2fb8
	ctx.lr = 0x821E21D4;
	sub_821E2FB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,13420
	ctx.r11.s64 = ctx.r11.s64 + 13420;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E2958) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821e2fb8
	ctx.lr = 0x821E2974;
	sub_821E2FB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-25184
	ctx.r11.s64 = ctx.r11.s64 + -25184;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E2F40) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lbz r10,2971(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2971);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821e2fb0
	if (!ctx.cr0.eq) goto loc_821E2FB0;
	// lbz r10,2973(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2973);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821e2fb0
	if (!ctx.cr0.eq) goto loc_821E2FB0;
	// lbz r10,6(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 6);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821e2fb0
	if (!ctx.cr0.eq) goto loc_821E2FB0;
	// lbz r10,2(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// lwz r11,2980(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2980);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821e2fb0
	if (!ctx.cr6.eq) goto loc_821E2FB0;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r9,r11,5608
	ctx.r9.s64 = ctx.r11.s64 + 5608;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lwz r11,48(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// stw r11,48(r9)
	REX_STORE_U32(ctx.r9.u32 + 48, ctx.r11.u32);
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// adde r11,r8,r7
	temp.u8 = (ctx.r8.u32 + ctx.r7.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_821E2FB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E5208) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x821E5210;
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r28,1
	r28.s64 = 1;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// addi r10,r10,31764
	ctx.r10.s64 = ctx.r10.s64 + 31764;
	// li r9,2
	ctx.r9.s64 = 2;
	// std r28,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, r28.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sth r28,88(r3)
	REX_STORE_U16(ctx.r3.u32 + 88, r28.u16);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addic. r11,r3,112
	ctx.xer.ca = ctx.r3.u32 > 4294967183;
	ctx.r11.s64 = ctx.r3.s64 + 112;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r9,90(r3)
	REX_STORE_U8(ctx.r3.u32 + 90, ctx.r9.u8);
	// li r29,0
	r29.s64 = 0;
	// beq 0x821e5260
	if (ctx.cr0.eq) goto loc_821E5260;
	// stw r11,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// b 0x821e5264
	goto loc_821E5264;
loc_821E5260:
	// stw r29,92(r31)
	REX_STORE_U32(r31.u32 + 92, r29.u32);
loc_821E5264:
	// addi r30,r31,192
	r30.s64 = r31.s64 + 192;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// beq cr6,0x821e5280
	if (ctx.cr6.eq) goto loc_821E5280;
	// li r11,115
	ctx.r11.s64 = 115;
	// stw r7,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r7.u32);
	// stb r11,104(r31)
	REX_STORE_U8(r31.u32 + 104, ctx.r11.u8);
loc_821E5280:
	// stb r29,105(r31)
	REX_STORE_U8(r31.u32 + 105, r29.u8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stb r29,106(r31)
	REX_STORE_U8(r31.u32 + 106, r29.u8);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// stb r29,107(r31)
	REX_STORE_U8(r31.u32 + 107, r29.u8);
	// stb r29,109(r31)
	REX_STORE_U8(r31.u32 + 109, r29.u8);
	// lbz r6,104(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 104);
	// lwz r5,100(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 100);
	// bl 0x821e3550
	ctx.lr = 0x821E52A4;
	sub_821E3550(ctx, base);
	// stw r29,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r29.u32);
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// lfs f5,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f5.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f4,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f4.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// lfs f7,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r10,-4224
	ctx.r11.s64 = ctx.r10.s64 + -4224;
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f7,8(r30)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// lfs f0,1996(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f8,16092(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16092);
	ctx.f8.f64 = double(temp.f32);
	// lfs f3,16088(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16088);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// fmr f6,f7
	ctx.f6.f64 = ctx.f7.f64;
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f7,16(r30)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r30.u32 + 16, temp.u32);
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 20, temp.u32);
	// stfs f7,24(r30)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r30.u32 + 24, temp.u32);
	// stfs f0,32(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 32, temp.u32);
	// stfs f7,36(r30)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r30.u32 + 36, temp.u32);
	// stfs f7,40(r30)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r30.u32 + 40, temp.u32);
	// stfs f7,48(r30)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r30.u32 + 48, temp.u32);
	// stfs f7,52(r30)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r30.u32 + 52, temp.u32);
	// stfs f7,56(r30)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r30.u32 + 56, temp.u32);
	// bl 0x821065b0
	ctx.lr = 0x821E532C;
	sub_821065B0(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// lbz r10,74(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 74);
	// beq cr6,0x821e5344
	if (ctx.cr6.eq) goto loc_821E5344;
	// ori r10,r10,208
	ctx.r10.u64 = ctx.r10.u64 | 208;
	// b 0x821e5348
	goto loc_821E5348;
loc_821E5344:
	// ori r10,r10,224
	ctx.r10.u64 = ctx.r10.u64 | 224;
loc_821E5348:
	// stb r10,74(r11)
	REX_STORE_U8(ctx.r11.u32 + 74, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821EB660) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lwz r11,7844(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7844);
	// lwz r10,7700(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 7700);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r10,202(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 202);
	// bne cr6,0x821eb6a4
	if (!ctx.cr6.eq) goto loc_821EB6A4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821eb6a4
	if (ctx.cr6.eq) goto loc_821EB6A4;
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// bne cr6,0x821eb710
	if (!ctx.cr6.eq) goto loc_821EB710;
loc_821EB6A4:
	// addi r10,r3,127
	ctx.r10.s64 = ctx.r3.s64 + 127;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// rlwinm r31,r10,0,0,24
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r8,r31,15
	ctx.r8.s64 = r31.s64 + 15;
	// lis r7,-32225
	ctx.r7.s64 = -2111897600;
	// rlwinm r8,r8,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stw r8,208(r11)
	REX_STORE_U32(ctx.r11.u32 + 208, ctx.r8.u32);
	// addi r9,r9,-18880
	ctx.r9.s64 = ctx.r9.s64 + -18880;
	// addi r6,r6,17284
	ctx.r6.s64 = ctx.r6.s64 + 17284;
	// addi r8,r10,-19064
	ctx.r8.s64 = ctx.r10.s64 + -19064;
	// addi r7,r7,-18992
	ctx.r7.s64 = ctx.r7.s64 + -18992;
	// li r5,20000
	ctx.r5.s64 = 20000;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x821EB6E8;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821eb704
	if (ctx.cr0.eq) goto loc_821EB704;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,31764
	ctx.r10.s64 = ctx.r10.s64 + 31764;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821eb708
	goto loc_821EB708;
loc_821EB704:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821EB708:
	// stfs f31,200(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 200, temp.u32);
	// stw r31,216(r11)
	REX_STORE_U32(ctx.r11.u32 + 216, r31.u32);
loc_821EB710:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821EF238) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f29.u64);
	// stfd f30,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32166
	r31.s64 = -2108030976;
	// lwz r11,7840(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 7840);
	// lbz r10,253(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 253);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821ef3e0
	if (!ctx.cr0.eq) goto loc_821EF3E0;
	// lis r30,-32166
	r30.s64 = -2108030976;
	// lwz r3,7844(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 7844);
	// bl 0x821f0638
	ctx.lr = 0x821EF278;
	sub_821F0638(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,7840(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 7840);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lfs f3,2008(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lfs f1,80(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82204ae0
	ctx.lr = 0x821EF298;
	sub_82204AE0(ctx, base);
	// lwz r10,7844(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 7844);
	// lwz r11,7840(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 7840);
	// lwz r9,320(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 320);
	// lfs f0,184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// fadds f29,f0,f1
	f29.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// blt cr6,0x821ef2c0
	if (ctx.cr6.lt) goto loc_821EF2C0;
	// beq cr6,0x821ef3bc
	if (ctx.cr6.eq) goto loc_821EF3BC;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bge cr6,0x821ef398
	if (!ctx.cr6.lt) goto loc_821EF398;
loc_821EF2C0:
	// lwz r9,140(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 140);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r10,140
	ctx.r6.s64 = ctx.r10.s64 + 140;
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r9,144(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 144);
	// lfs f30,1992(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	f30.f64 = double(temp.f32);
	// stw r9,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// fcmpu cr6,f29,f30
	ctx.cr6.compare(f29.f64, f30.f64);
	// lwz r9,148(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 148);
	// stw r9,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r9,152(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 152);
	// stw r9,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// lfs f0,188(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bge cr6,0x821ef314
	if (!ctx.cr6.lt) goto loc_821EF314;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1cf8
	ctx.lr = 0x821EF310;
	sub_820E1CF8(ctx, base);
	// lwz r11,7840(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 7840);
loc_821EF314:
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x821ef398
	if (!ctx.cr6.gt) goto loc_821EF398;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,16036(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16036);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16032(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16032);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f30,124(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f30,140(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,156(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f1,2028(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2028);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82202620
	ctx.lr = 0x821EF380;
	sub_82202620(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// bl 0x821efb70
	ctx.lr = 0x821EF394;
	sub_821EFB70(ctx, base);
loc_821EF394:
	// lwz r11,7840(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 7840);
loc_821EF398:
	// lfs f0,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// lfs f13,180(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,176(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,172(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 172);
	ctx.f11.f64 = double(temp.f32);
	// fadds f3,f13,f0
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// b 0x821ef3ec
	goto loc_821EF3EC;
loc_821EF3BC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// lfs f1,188(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 188);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// bl 0x82204ae0
	ctx.lr = 0x821EF3D4;
	sub_82204AE0(ctx, base);
	// fsubs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 - ctx.f1.f64));
	// fmuls f29,f0,f29
	f29.f64 = double(float(ctx.f0.f64 * f29.f64));
	// b 0x821ef394
	goto loc_821EF394;
loc_821EF3E0:
	// lfs f1,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f1
	ctx.f3.f64 = ctx.f1.f64;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
loc_821EF3EC:
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r3,r10,-32032
	ctx.r3.s64 = ctx.r10.s64 + -32032;
	// bl 0x821f1fb0
	ctx.lr = 0x821EF3F8;
	sub_821F1FB0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F8FE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e7c
	ctx.lr = 0x821F8FE8;
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821f9120
	if (!ctx.cr6.gt) goto loc_821F9120;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r4,17
	ctx.r4.s64 = 17;
	// addi r29,r11,-32032
	r29.s64 = ctx.r11.s64 + -32032;
	// addi r3,r29,332
	ctx.r3.s64 = r29.s64 + 332;
	// bl 0x821f1818
	ctx.lr = 0x821F9018;
	sub_821F1818(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r30,r3,16
	r30.s64 = ctx.r3.s64 + 16;
	// addi r28,r11,496
	r28.s64 = ctx.r11.s64 + 496;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r10,r28,-4
	ctx.r10.s64 = r28.s64 + -4;
	// addi r9,r11,3380
	ctx.r9.s64 = ctx.r11.s64 + 3380;
	// mulli r11,r25,40
	ctx.r11.s64 = static_cast<int64_t>(r25.u64 * static_cast<uint64_t>(40));
	// lbzx r10,r10,r26
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + r26.u32);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lfs f1,76(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// add r26,r11,r30
	r26.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x821ed290
	ctx.lr = 0x821F904C;
	sub_821ED290(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f31.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// lfs f2,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82204ae0
	ctx.lr = 0x821F9064;
	sub_82204AE0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r27,4
	ctx.r8.s64 = r27.s64 + 4;
	// addi r7,r31,-4
	ctx.r7.s64 = r31.s64 + -4;
	// addi r11,r30,-4
	ctx.r11.s64 = r30.s64 + -4;
loc_821F9074:
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_821F9080:
	// lbz r5,32(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 32);
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x821f90f4
	if (!ctx.cr6.eq) goto loc_821F90F4;
	// lfs f0,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f0,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f1,36(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lwz r5,20(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// stwu r5,40(r11)
	ea = 40 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
loc_821F90F4:
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// bdnz 0x821f9080
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F9080;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x821f9074
	if (ctx.cr6.lt) goto loc_821F9074;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r29,332
	ctx.r3.s64 = r29.s64 + 332;
	// bl 0x821f1840
	ctx.lr = 0x821F9120;
	sub_821F1840(ctx, base);
loc_821F9120:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_821FF8F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82209ef8
	ctx.lr = 0x821FF90C;
	sub_82209EF8(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x821ff95c
	if (ctx.cr6.eq) goto loc_821FF95C;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x821ff954
	if (ctx.cr6.eq) goto loc_821FF954;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x821ff94c
	if (ctx.cr6.eq) goto loc_821FF94C;
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// beq cr6,0x821ff944
	if (ctx.cr6.eq) goto loc_821FF944;
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// beq cr6,0x821ff93c
	if (ctx.cr6.eq) goto loc_821FF93C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821ff960
	goto loc_821FF960;
loc_821FF93C:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x821ff960
	goto loc_821FF960;
loc_821FF944:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x821ff960
	goto loc_821FF960;
loc_821FF94C:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x821ff960
	goto loc_821FF960;
loc_821FF954:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821ff960
	goto loc_821FF960;
loc_821FF95C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821FF960:
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r31,r10,13128
	r31.s64 = ctx.r10.s64 + 13128;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,1834(r31)
	REX_STORE_U8(r31.u32 + 1834, ctx.r11.u8);
	// stb r10,1835(r31)
	REX_STORE_U8(r31.u32 + 1835, ctx.r10.u8);
	// bl 0x824d3ebc
	ctx.lr = 0x821FF978;
	__imp__XGetGameRegion(ctx, base);
	// cmplwi cr6,r3,255
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 255, ctx.xer);
	// beq cr6,0x821ff9b0
	if (ctx.cr6.eq) goto loc_821FF9B0;
	// cmplwi cr6,r3,257
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 257, ctx.xer);
	// beq cr6,0x821ff9a8
	if (ctx.cr6.eq) goto loc_821FF9A8;
	// cmplwi cr6,r3,765
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 765, ctx.xer);
	// ble cr6,0x821ff9a0
	if (!ctx.cr6.gt) goto loc_821FF9A0;
	// cmplwi cr6,r3,767
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 767, ctx.xer);
	// bgt cr6,0x821ff9a0
	if (ctx.cr6.gt) goto loc_821FF9A0;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821ff9b4
	goto loc_821FF9B4;
loc_821FF9A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821ff9b4
	goto loc_821FF9B4;
loc_821FF9A8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821ff9b4
	goto loc_821FF9B4;
loc_821FF9B0:
	// li r11,2
	ctx.r11.s64 = 2;
loc_821FF9B4:
	// stb r11,1835(r31)
	REX_STORE_U8(r31.u32 + 1835, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822025D8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x82202268
	sub_82202268(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82202D90) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// fctiwz f0,f13
	ctx.f0.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r11,r11,3444
	ctx.r11.s64 = ctx.r11.s64 + 3444;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f11,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lfs f10,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f7,f0,f11
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfsx f9,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f8,r10,r8
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmadds f0,f9,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmadds f0,f0,f11,f7
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f7.f64)));
	// fmuls f1,f0,f10
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82204E10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82204E18;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r31,r11,30472
	r31.s64 = ctx.r11.s64 + 30472;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
loc_82204E30:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82204e50
	if (ctx.cr0.eq) goto loc_82204E50;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r31,264
	ctx.r10.s64 = r31.s64 + 264;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82204e30
	if (ctx.cr6.lt) goto loc_82204E30;
loc_82204E50:
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// bge cr6,0x82204e84
	if (!ctx.cr6.lt) goto loc_82204E84;
	// rlwinm r29,r30,5,0,26
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwzx r3,r29,r31
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + r31.u32);
	// bl 0x822c8be8
	ctx.lr = 0x82204E68;
	sub_822C8BE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82204e84
	if (ctx.cr0.eq) goto loc_82204E84;
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stbx r10,r29,r11
	REX_STORE_U8(r29.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x82204e88
	goto loc_82204E88;
loc_82204E84:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82204E88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82206828) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r8,-11816
	ctx.r8.s64 = ctx.r8.s64 + -11816;
	// lfs f13,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r7,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stb r11,48(r3)
	REX_STORE_U8(ctx.r3.u32 + 48, ctx.r11.u8);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stb r10,49(r3)
	REX_STORE_U8(ctx.r3.u32 + 49, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82208828) {
	REX_FUNC_PROLOGUE();
	// mftb r11
	ctx.r11.u64 = REX_QUERY_TIMEBASE();
	// rotlwi. r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82208838
	if (!ctx.cr0.eq) goto loc_82208838;
	// mftb r11
	ctx.r11.u64 = REX_QUERY_TIMEBASE();
loc_82208838:
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82208D30) {
	REX_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d3f8c
	__imp__XamShowAchievementsUI(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82208D78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// bne cr6,0x82208de4
	if (!ctx.cr6.eq) goto loc_82208DE4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82208dc0
	if (ctx.cr6.eq) goto loc_82208DC0;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82208dc0
	if (ctx.cr6.eq) goto loc_82208DC0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8220aa00
	ctx.lr = 0x82208DBC;
	sub_8220AA00(ctx, base);
	// b 0x82208dc4
	goto loc_82208DC4;
loc_82208DC0:
	// li r3,258
	ctx.r3.s64 = 258;
loc_82208DC4:
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// bne cr6,0x82208dd4
	if (!ctx.cr6.eq) goto loc_82208DD4;
	// li r3,996
	ctx.r3.s64 = 996;
	// b 0x82208df8
	goto loc_82208DF8;
loc_82208DD4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82208de4
	if (ctx.cr6.eq) goto loc_82208DE4;
	// bl 0x822098c8
	ctx.lr = 0x82208DE0;
	sub_822098C8(ctx, base);
	// b 0x82208df8
	goto loc_82208DF8;
loc_82208DE4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82208df4
	if (ctx.cr6.eq) goto loc_82208DF4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_82208DF4:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82208DF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220BCA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d417c
	ctx.lr = 0x8220BCD0;
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-4
	ctx.r11.s64 = -4;
	// li r10,128
	ctx.r10.s64 = 128;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220E3E4) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220EC78) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-320
	ctx.r31.s64 = ctx.r12.s64 + -320;
	// std r28,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// std r22,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r22.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,124(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r22,104(r31)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// b 0x8220ecbc
	goto loc_8220ECBC;
loc_8220ECBC:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8220eccc
	if (ctx.cr6.eq) goto loc_8220ECCC;
	// lwz r3,1408(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 1408);
	// bl 0x824d437c
	ctx.lr = 0x8220ECCC;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8220ECCC:
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r22,-24(r1)
	ctx.r22.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210248) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10556(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwinm r3,r11,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210498) {
	REX_FUNC_PROLOGUE();
	// lwz r10,12280(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12280);
	// lwz r11,12284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12284);
	// rlwimi r10,r4,21,8,10
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 21) & 0xE00000) | (ctx.r10.u64 & 0xFFFFFFFFFF1FFFFF);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,12280(r3)
	REX_STORE_U32(ctx.r3.u32 + 12280, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,10552(r3)
	REX_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	REX_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10588(r3)
	REX_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10592(r3)
	REX_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210B40) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,29,0,2
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0xE0000000) | (ctx.r11.u64 & 0xFFFFFFFF1FFFFFFF);
	// stw r11,10548(r3)
	REX_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211040) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// li r12,1
	ctx.r12.s64 = 1;
	// stfs f0,12332(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12332, temp.u32);
	// lfs f13,-8492(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8492);
	ctx.f13.f64 = double(temp.f32);
	// rldicr r12,r12,53,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// sth r11,10600(r3)
	REX_STORE_U16(ctx.r3.u32 + 10600, ctx.r11.u16);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211A28) {
	REX_FUNC_PROLOGUE();
	// lbz r3,10562(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 10562);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211B28) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r11,r10,21,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// rlwinm r10,r9,11,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x7FF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwimi r10,r11,0,29,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// clrlwi r3,r10,29
	ctx.r3.u64 = ctx.r10.u32 & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82212890) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-1648(r1)
	ea = -1648 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822175f8
	ctx.lr = 0x822128B8;
	sub_822175F8(ctx, base);
	// addi r30,r31,15408
	r30.s64 = r31.s64 + 15408;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r8,r11,1536
	ctx.r8.s64 = ctx.r11.s64 + 1536;
loc_822128C8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822128e8
	if (!ctx.cr0.eq) goto loc_822128E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822128c8
	if (!ctx.cr6.eq) goto loc_822128C8;
loc_822128E8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82212948
	if (ctx.cr0.eq) goto loc_82212948;
	// bl 0x824d419c
	ctx.lr = 0x822128F4;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8221292c
	if (ctx.cr6.eq) goto loc_8221292C;
	// lwz r3,24364(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82212920
	if (ctx.cr6.eq) goto loc_82212920;
	// lwz r11,24368(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24368);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82212920
	if (!ctx.cr0.eq) goto loc_82212920;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822091c8
	ctx.lr = 0x82212920;
	sub_822091C8(ctx, base);
loc_82212920:
	// lwz r11,24368(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24368);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,24368(r31)
	REX_STORE_U32(r31.u32 + 24368, ctx.r11.u32);
loc_8221292C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8221293C;
	sub_822D4FA0(ctx, base);
	// lwz r11,17116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 17116);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,17116(r31)
	REX_STORE_U32(r31.u32 + 17116, ctx.r11.u32);
loc_82212948:
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82216030) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82216038;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,32
	ctx.r3.s64 = 32;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x823cd118
	ctx.lr = 0x82216054;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82216064
	if (!ctx.cr0.eq) goto loc_82216064;
loc_8221605C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822160d4
	goto loc_822160D4;
loc_82216064:
	// rlwinm r10,r30,29,0,2
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 29) & 0xE0000000;
	// rlwinm. r9,r29,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// oris r30,r10,16
	r30.u64 = ctx.r10.u64 | 1048576;
	// li r11,3
	ctx.r11.s64 = 3;
	// ori r30,r30,2
	r30.u64 = r30.u64 | 2;
	// beq 0x82216084
	if (ctx.cr0.eq) goto loc_82216084;
	// li r11,2
	ctx.r11.s64 = 2;
	// oris r30,r30,32
	r30.u64 = r30.u64 | 2097152;
loc_82216084:
	// rlwinm. r10,r29,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82216090
	if (ctx.cr0.eq) goto loc_82216090;
	// oris r30,r30,64
	r30.u64 = r30.u64 | 4194304;
loc_82216090:
	// lis r4,-32128
	ctx.r4.s64 = -2105540608;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwimi r4,r11,28,1,3
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x70000000) | (ctx.r4.u64 & 0xFFFFFFFF8FFFFFFF);
	// bl 0x823cd118
	ctx.lr = 0x822160A0;
	sub_823CD118(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x822160b8
	if (!ctx.cr0.eq) goto loc_822160B8;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x823cd250
	ctx.lr = 0x822160B4;
	sub_823CD250(ctx, base);
	// b 0x8221605c
	goto loc_8221605C;
loc_822160B8:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r28,28(r31)
	REX_STORE_U32(r31.u32 + 28, r28.u32);
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_822160D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8221A2E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e80
	ctx.lr = 0x8221A2F0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,156
	ctx.r3.s64 = 156;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x823cd118
	ctx.lr = 0x8221A30C;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8221a31c
	if (!ctx.cr0.eq) goto loc_8221A31C;
loc_8221A314:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8221a3c8
	goto loc_8221A3C8;
loc_8221A31C:
	// li r26,1
	r26.s64 = 1;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// stw r26,12(r31)
	REX_STORE_U32(r31.u32 + 12, r26.u32);
	// stw r26,148(r31)
	REX_STORE_U32(r31.u32 + 148, r26.u32);
	// stw r29,152(r31)
	REX_STORE_U32(r31.u32 + 152, r29.u32);
	// beq cr6,0x8221a3b4
	if (ctx.cr6.eq) goto loc_8221A3B4;
	// cmpwi cr6,r30,9
	ctx.cr6.compare<int32_t>(r30.s32, 9, ctx.xer);
	// beq cr6,0x8221a364
	if (ctx.cr6.eq) goto loc_8221A364;
	// addi r5,r31,28
	ctx.r5.s64 = r31.s64 + 28;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82217ad8
	ctx.lr = 0x8221A354;
	sub_82217AD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8221a3a8
	if (ctx.cr0.lt) goto loc_8221A3A8;
loc_8221A35C:
	// stb r26,16(r31)
	REX_STORE_U8(r31.u32 + 16, r26.u8);
	// b 0x8221a3c4
	goto loc_8221A3C4;
loc_8221A364:
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8221a35c
	if (ctx.cr6.eq) goto loc_8221A35C;
	// addi r30,r31,88
	r30.s64 = r31.s64 + 88;
loc_8221A374:
	// addi r5,r30,-60
	ctx.r5.s64 = r30.s64 + -60;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82217ad8
	ctx.lr = 0x8221A384;
	sub_82217AD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8221a3a4
	if (ctx.cr0.lt) goto loc_8221A3A4;
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8221a374
	if (ctx.cr6.lt) goto loc_8221A374;
	// b 0x8221a35c
	goto loc_8221A35C;
loc_8221A3A4:
	// stw r28,152(r31)
	REX_STORE_U32(r31.u32 + 152, r28.u32);
loc_8221A3A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82218538
	ctx.lr = 0x8221A3B0;
	sub_82218538(ctx, base);
	// b 0x8221a314
	goto loc_8221A314;
loc_8221A3B4:
	// lwz r11,11036(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 11036);
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,16(r31)
	REX_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_8221A3C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8221A3C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8221DD38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e74
	ctx.lr = 0x8221DD40;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24392(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24392);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221df20
	if (!ctx.cr0.eq) goto loc_8221DF20;
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// li r3,200
	ctx.r3.s64 = 200;
	// bl 0x823cd118
	ctx.lr = 0x8221DD60;
	sub_823CD118(ctx, base);
	// stw r3,12224(r31)
	REX_STORE_U32(r31.u32 + 12224, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8221dd74
	if (!ctx.cr0.eq) goto loc_8221DD74;
loc_8221DD6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8221df24
	goto loc_8221DF24;
loc_8221DD74:
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x823cd118
	ctx.lr = 0x8221DD80;
	sub_823CD118(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,11128(r31)
	REX_STORE_U32(r31.u32 + 11128, ctx.r3.u32);
	// beq 0x8221dd6c
	if (ctx.cr0.eq) goto loc_8221DD6C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r3,-4
	ctx.r4.s64 = ctx.r3.s64 + -4;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r6,r11,-7920
	ctx.r6.s64 = ctx.r11.s64 + -7920;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822146b8
	ctx.lr = 0x8221DDA8;
	sub_822146B8(ctx, base);
	// lwz r11,11128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11128);
	// lis r7,32712
	ctx.r7.s64 = 2143813632;
	// lwz r9,24392(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24392);
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// li r26,0
	r26.s64 = 0;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// stw r10,11132(r31)
	REX_STORE_U32(r31.u32 + 11132, ctx.r10.u32);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// lwz r7,4396(r7)
	ctx.r7.u64 = REX_MM_LOAD_U32(ctx.r7.u32 + 4396);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r7,11524(r31)
	REX_STORE_U32(r31.u32 + 11524, ctx.r7.u32);
	// lis r23,256
	r23.s64 = 16777216;
	// stw r26,11156(r31)
	REX_STORE_U32(r31.u32 + 11156, r26.u32);
loc_8221DDE8:
	// slw r11,r23,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r10.u8 & 0x3F));
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221ddf8
	if (ctx.cr0.eq) goto loc_8221DDF8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_8221DDF8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8221dde8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221DDE8;
	// lwz r11,15300(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15300);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lwz r7,15304(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 15304);
	// rlwinm. r9,r9,0,5,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,11172(r31)
	REX_STORE_U32(r31.u32 + 11172, ctx.r10.u32);
	// li r25,-1
	r25.s64 = -1;
	// stw r8,11120(r31)
	REX_STORE_U32(r31.u32 + 11120, ctx.r8.u32);
	// stw r26,11124(r31)
	REX_STORE_U32(r31.u32 + 11124, r26.u32);
	// stw r11,11084(r31)
	REX_STORE_U32(r31.u32 + 11084, ctx.r11.u32);
	// stw r7,11092(r31)
	REX_STORE_U32(r31.u32 + 11092, ctx.r7.u32);
	// beq 0x8221de34
	if (ctx.cr0.eq) goto loc_8221DE34;
	// li r25,2
	r25.s64 = 2;
	// stw r25,11464(r31)
	REX_STORE_U32(r31.u32 + 11464, r25.u32);
loc_8221DE34:
	// mr r29,r26
	r29.u64 = r26.u64;
	// lis r27,32512
	r27.s64 = 2130706432;
	// addi r30,r31,11644
	r30.s64 = r31.s64 + 11644;
	// lis r24,-32256
	r24.s64 = -2113929216;
loc_8221DE44:
	// lwz r11,24392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24392);
	// slw r10,r23,r29
	ctx.r10.u64 = r29.u8 & 0x20 ? 0 : (r23.u32 << (r29.u8 & 0x3F));
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221df04
	if (ctx.cr0.eq) goto loc_8221DF04;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bge cr6,0x8221de64
	if (!ctx.cr6.lt) goto loc_8221DE64;
	// mr r25,r29
	r25.u64 = r29.u64;
	// stw r29,11464(r31)
	REX_STORE_U32(r31.u32 + 11464, r29.u32);
loc_8221DE64:
	// addis r11,r27,16640
	ctx.r11.s64 = r27.s64 + 1090519040;
	// stw r29,-64(r30)
	REX_STORE_U32(r30.u32 + -64, r29.u32);
	// addi r10,r31,11080
	ctx.r10.s64 = r31.s64 + 11080;
	// stw r27,-40(r30)
	REX_STORE_U32(r30.u32 + -40, r27.u32);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r10,-68(r30)
	REX_STORE_U32(r30.u32 + -68, ctx.r10.u32);
	// addi r28,r30,-68
	r28.s64 = r30.s64 + -68;
	// stw r11,-44(r30)
	REX_STORE_U32(r30.u32 + -44, ctx.r11.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stb r26,-8(r30)
	REX_STORE_U8(r30.u32 + -8, r26.u8);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r26,-4(r30)
	REX_STORE_U32(r30.u32 + -4, r26.u32);
	// addi r4,r11,-13704
	ctx.r4.s64 = ctx.r11.s64 + -13704;
	// stw r30,0(r30)
	REX_STORE_U32(r30.u32 + 0, r30.u32);
	// addi r3,r30,-36
	ctx.r3.s64 = r30.s64 + -36;
	// stw r30,4(r30)
	REX_STORE_U32(r30.u32 + 4, r30.u32);
	// bl 0x824d45ac
	ctx.lr = 0x8221DEA8;
	__imp__KeInitializeDpc(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stb r11,-33(r30)
	REX_STORE_U8(r30.u32 + -33, ctx.r11.u8);
	// addi r8,r30,12
	ctx.r8.s64 = r30.s64 + 12;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r10,-9992
	ctx.r5.s64 = ctx.r10.s64 + -9992;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823cd368
	ctx.lr = 0x8221DED0;
	sub_823CD368(ctx, base);
	// stw r3,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221dd6c
	if (ctx.cr0.eq) goto loc_8221DD6C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,1588(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 1588);
	// bl 0x824d433c
	ctx.lr = 0x8221DEE8;
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8221df04
	if (ctx.cr0.lt) goto loc_8221DF04;
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824d432c
	ctx.lr = 0x8221DEFC;
	__imp__KeSetBasePriorityThread(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824d431c
	ctx.lr = 0x8221DF04;
	__imp__ObDereferenceObject(ctx, base);
loc_8221DF04:
	// lis r11,32512
	ctx.r11.s64 = 2130706432;
	// addi r27,r27,128
	r27.s64 = r27.s64 + 128;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,108
	r30.s64 = r30.s64 + 108;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8221de44
	if (ctx.cr6.lt) goto loc_8221DE44;
loc_8221DF20:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8221DF24:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82225318) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82213580
	ctx.lr = 0x82225330;
	sub_82213580(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,21968(r31)
	REX_STORE_U32(r31.u32 + 21968, ctx.r11.u32);
	// stw r11,21972(r31)
	REX_STORE_U32(r31.u32 + 21972, ctx.r11.u32);
	// stw r11,15340(r31)
	REX_STORE_U32(r31.u32 + 15340, ctx.r11.u32);
	// bl 0x82223900
	ctx.lr = 0x82225348;
	sub_82223900(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82224bf0
	ctx.lr = 0x82225350;
	sub_82224BF0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822268E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822268E8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82226908
	if (ctx.cr6.eq) goto loc_82226908;
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
loc_82226908:
	// lwz r31,13072(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 13072);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82226978
	if (ctx.cr6.eq) goto loc_82226978;
	// lwz r11,11036(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 11036);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82226928
	if (ctx.cr6.eq) goto loc_82226928;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x82226978
	goto loc_82226978;
loc_82226928:
	// lwz r11,11040(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 11040);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82226978
	if (ctx.cr0.eq) goto loc_82226978;
	// lwz r11,13932(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 13932);
	// lwz r3,13928(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 13928);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82226950
	if (ctx.cr6.lt) goto loc_82226950;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822158d0
	ctx.lr = 0x82226950;
	sub_822158D0(ctx, base);
loc_82226950:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// rlwimi r11,r31,30,2,31
	ctx.r11.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFC0000000);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// stw r9,13928(r30)
	REX_STORE_U32(r30.u32 + 13928, ctx.r9.u32);
loc_82226978:
	// lbz r11,11070(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 11070);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// stw r29,13072(r30)
	REX_STORE_U32(r30.u32 + 13072, r29.u32);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,11070(r30)
	REX_STORE_U8(r30.u32 + 11070, ctx.r11.u8);
	// beq cr6,0x82226aa4
	if (ctx.cr6.eq) goto loc_82226AA4;
	// addic. r11,r29,872
	ctx.xer.ca = r29.u32 > 4294966423;
	ctx.r11.s64 = r29.s64 + 872;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82226aa4
	if (ctx.cr0.eq) goto loc_82226AA4;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82226aa4
	if (ctx.cr6.eq) goto loc_82226AA4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 0);
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// andc r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x822269d8
	if (ctx.cr6.eq) goto loc_822269D8;
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 32);
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r10,32(r30)
	REX_STORE_U64(r30.u32 + 32, ctx.r10.u64);
loc_822269D8:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r31,r11,20
	r31.s64 = ctx.r11.s64 + 20;
	// addi r28,r30,1152
	r28.s64 = r30.s64 + 1152;
	// add r29,r10,r31
	r29.u64 = ctx.r10.u64 + r31.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bge cr6,0x82226aa4
	if (!ctx.cr6.lt) goto loc_82226AA4;
loc_822269F0:
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82226a0c
	if (ctx.cr0.eq) goto loc_82226A0C;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// blt cr6,0x822269f0
	if (ctx.cr6.lt) goto loc_822269F0;
loc_82226A0C:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bge cr6,0x82226aa4
	if (!ctx.cr6.lt) goto loc_82226AA4;
loc_82226A14:
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// lhz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82226a9c
	if (ctx.cr0.eq) goto loc_82226A9C;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82226A40;
	sub_822D4FA0(ctx, base);
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// blt cr6,0x82226a14
	if (ctx.cr6.lt) goto loc_82226A14;
	// b 0x82226a9c
	goto loc_82226A9C;
loc_82226A50:
	// lhz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 2);
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82226aa4
	if (ctx.cr0.eq) goto loc_82226AA4;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_82226A70:
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// clrlwi. r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bne 0x82226a70
	if (!ctx.cr0.eq) goto loc_82226A70;
loc_82226A9C:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// blt cr6,0x82226a50
	if (ctx.cr6.lt) goto loc_82226A50;
loc_82226AA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8222EC20) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,-5891(r10)
	REX_STORE_U8(ctx.r10.u32 + -5891, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222EFB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,23772
	r31.s64 = ctx.r3.s64 + 23772;
	// lwz r3,24364(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222eff8
	if (ctx.cr6.eq) goto loc_8222EFF8;
	// lwz r11,612(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 612);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8222eff0
	if (!ctx.cr0.eq) goto loc_8222EFF0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x824d420c
	ctx.lr = 0x8222EFEC;
	__imp__MmFreePhysicalMemory(ctx, base);
	// b 0x8222eff8
	goto loc_8222EFF8;
loc_8222EFF0:
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x823cd250
	ctx.lr = 0x8222EFF8;
	sub_823CD250(ctx, base);
loc_8222EFF8:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222f030
	if (ctx.cr6.eq) goto loc_8222F030;
	// lwz r11,612(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 612);
	// srawi r11,r11,30
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 30;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8222f024
	if (ctx.cr6.lt) goto loc_8222F024;
	// bne cr6,0x8222f030
	if (!ctx.cr6.eq) goto loc_8222F030;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// bl 0x823cd250
	ctx.lr = 0x8222F020;
	sub_823CD250(ctx, base);
	// b 0x8222f030
	goto loc_8222F030;
loc_8222F024:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x824d420c
	ctx.lr = 0x8222F030;
	__imp__MmFreePhysicalMemory(ctx, base);
loc_8222F030:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222f06c
	if (ctx.cr6.eq) goto loc_8222F06C;
	// lwz r11,612(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 612);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r11,r11,30
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 30;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8222f060
	if (ctx.cr6.lt) goto loc_8222F060;
	// bne cr6,0x8222f06c
	if (!ctx.cr6.eq) goto loc_8222F06C;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// bl 0x823cd250
	ctx.lr = 0x8222F05C;
	sub_823CD250(ctx, base);
	// b 0x8222f06c
	goto loc_8222F06C;
loc_8222F060:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x824d420c
	ctx.lr = 0x8222F06C;
	__imp__MmFreePhysicalMemory(ctx, base);
loc_8222F06C:
	// li r5,620
	ctx.r5.s64 = 620;
	// lwz r30,616(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 616);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5870
	ctx.lr = 0x8222F080;
	sub_822D5870(ctx, base);
	// li r11,41
	ctx.r11.s64 = 41;
	// addi r10,r31,20
	ctx.r10.s64 = r31.s64 + 20;
	// stw r30,616(r31)
	REX_STORE_U32(r31.u32 + 616, r30.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8222F098:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8222f098
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222F098;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82234840) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82234848;
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// stw r3,740(r1)
	REX_STORE_U32(ctx.r1.u32 + 740, ctx.r3.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,672(r1)
	REX_STORE_U32(ctx.r1.u32 + 672, r30.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stw r30,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// li r3,1414
	ctx.r3.s64 = 1414;
	// stw r30,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// bl 0x82234450
	ctx.lr = 0x82234870;
	sub_82234450(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8223493c
	if (ctx.cr0.lt) goto loc_8223493C;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,136(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82234378
	ctx.lr = 0x82234898;
	sub_82234378(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8223493c
	if (ctx.cr0.lt) goto loc_8223493C;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824d47bc
	ctx.lr = 0x822348B0;
	__imp__XamAlloc(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8223493c
	if (ctx.cr0.lt) goto loc_8223493C;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// lwz r8,132(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r7,128(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,136(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// li r3,1414
	ctx.r3.s64 = 1414;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x822344d8
	ctx.lr = 0x822348FC;
	sub_822344D8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8223493c
	if (ctx.cr0.lt) goto loc_8223493C;
	// addi r4,r1,740
	ctx.r4.s64 = ctx.r1.s64 + 740;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822346b0
	ctx.lr = 0x82234910;
	sub_822346B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822346b0
	ctx.lr = 0x8223491C;
	sub_822346B0(ctx, base);
	// lis r4,5
	ctx.r4.s64 = 327680;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lwz r5,140(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// ori r4,r4,32803
	ctx.r4.u64 = ctx.r4.u64 | 32803;
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x824d479c
	ctx.lr = 0x82234934;
	__imp__XMsgInProcessCall(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x8223495c
	if (!ctx.cr0.lt) goto loc_8223495C;
loc_8223493C:
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223494c
	if (ctx.cr6.eq) goto loc_8223494C;
	// bl 0x824d47ac
	ctx.lr = 0x8223494C;
	__imp__XamFree(ctx, base);
loc_8223494C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8220a618
	ctx.lr = 0x82234954;
	sub_8220A618(ctx, base);
	// li r30,1627
	r30.s64 = 1627;
	// b 0x82234964
	goto loc_82234964;
loc_8223495C:
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x824d47ac
	ctx.lr = 0x82234964;
	__imp__XamFree(ctx, base);
loc_82234964:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822377B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x822377C0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lwz r9,36(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r3,r8,16385
	ctx.r3.u64 = ctx.r8.u64 | 16385;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r30,1
	r30.s64 = 1;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// beq cr6,0x822378b0
	if (ctx.cr6.eq) goto loc_822378B0;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// addi r29,r31,60
	r29.s64 = r31.s64 + 60;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82237834
	if (ctx.cr6.eq) goto loc_82237834;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822378ac
	if (ctx.cr6.eq) goto loc_822378AC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82237830;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822378ac
	goto loc_822378AC;
loc_82237834:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,98
	ctx.r3.s64 = ctx.r1.s64 + 98;
	// bl 0x822d5870
	ctx.lr = 0x82237844;
	sub_822D5870(ctx, base);
	// li r10,16000
	ctx.r10.s64 = 16000;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r10,32000
	ctx.r10.s64 = 32000;
	// sth r30,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, r30.u16);
	// sth r30,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, r30.u16);
	// sth r9,110(r1)
	REX_STORE_U16(ctx.r1.u32 + 110, ctx.r9.u16);
	// sth r8,108(r1)
	REX_STORE_U16(ctx.r1.u32 + 108, ctx.r8.u16);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r27,60(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r28,0(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 0);
	// bl 0x8223c698
	ctx.lr = 0x8223787C;
	sub_8223C698(ctx, base);
	// lwz r7,32(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f1,2380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2380);
	ctx.f1.f64 = double(temp.f32);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// bctrl 
	ctx.lr = 0x822378AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822378AC:
	// stw r30,68(r31)
	REX_STORE_U32(r31.u32 + 68, r30.u32);
loc_822378B0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8223A768) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8223A770;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223a850
	if (ctx.cr6.eq) goto loc_8223A850;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223a798
	if (ctx.cr6.eq) goto loc_8223A798;
	// bl 0x824d48cc
	ctx.lr = 0x8223A794;
	__imp__XamVoiceClose(ctx, base);
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
loc_8223A798:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82240280
	ctx.lr = 0x8223A7A0;
	sub_82240280(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r29,r28
	r29.u64 = r28.u64;
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8223a7d4
	if (!ctx.cr6.gt) goto loc_8223A7D4;
	// addi r30,r31,44
	r30.s64 = r31.s64 + 44;
loc_8223A7B8:
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x8223b450
	ctx.lr = 0x8223A7C0;
	sub_8223B450(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwu r28,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r28.u32);
	r30.u32 = ea;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223a7b8
	if (ctx.cr6.lt) goto loc_8223A7B8;
loc_8223A7D4:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8223a810
	if (!ctx.cr6.gt) goto loc_8223A810;
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
loc_8223A7E8:
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223A7FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwu r28,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r28.u32);
	r30.u32 = ea;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223a7e8
	if (ctx.cr6.lt) goto loc_8223A7E8;
loc_8223A810:
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// bl 0x8223b780
	ctx.lr = 0x8223A818;
	sub_8223B780(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x824d48dc
	ctx.lr = 0x8223A824;
	__imp__XMsgCancelIORequest(ctx, base);
	// lwz r3,188(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 188);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223a840
	if (ctx.cr6.eq) goto loc_8223A840;
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x823cd250
	ctx.lr = 0x8223A83C;
	sub_823CD250(ctx, base);
	// stw r28,188(r31)
	REX_STORE_U32(r31.u32 + 188, r28.u32);
loc_8223A840:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,32779
	ctx.r4.u64 = ctx.r4.u64 | 32779;
	// bl 0x823cd250
	ctx.lr = 0x8223A850;
	sub_823CD250(ctx, base);
loc_8223A850:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8223F758) {
	REX_FUNC_PROLOGUE();
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e7c
	ctx.lr = 0x8223F760;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,136(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// li r30,0
	r30.s64 = 0;
	// lwz r27,12(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r30
	r26.u64 = r30.u64;
	// mr r25,r30
	r25.u64 = r30.u64;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8223f7bc
	if (ctx.cr6.eq) goto loc_8223F7BC;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
loc_8223F790:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,24(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r9,24(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8223f7a8
	if (!ctx.cr6.gt) goto loc_8223F7A8;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_8223F7A8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8223f790
	if (ctx.cr6.lt) goto loc_8223F790;
loc_8223F7BC:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8223f804
	if (ctx.cr6.eq) goto loc_8223F804;
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
loc_8223F7D0:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// divwu r7,r26,r11
	ctx.r7.u64 = uint32_t(ctx.r11.u32 ? r26.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r7,r7,r11
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// subf. r7,r7,r26
	ctx.r7.u64 = r26.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8223f7f4
	if (ctx.cr0.eq) goto loc_8223F7F4;
	// mullw r26,r11,r26
	r26.s64 = int64_t(ctx.r11.s32) * int64_t(r26.s32);
loc_8223F7F4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8223f7d0
	if (ctx.cr6.lt) goto loc_8223F7D0;
loc_8223F804:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mullw r28,r26,r27
	r28.s64 = int64_t(r26.s32) * int64_t(r27.s32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223f8d8
	if (!ctx.cr6.eq) goto loc_8223F8D8;
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x823cd118
	ctx.lr = 0x8223F824;
	sub_823CD118(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mulli r3,r27,28
	ctx.r3.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(28));
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x823cd118
	ctx.lr = 0x8223F838;
	sub_823CD118(ctx, base);
	// stw r3,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// rlwinm r3,r27,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823cd118
	ctx.lr = 0x8223F84C;
	sub_823CD118(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r3,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223f870
	if (ctx.cr6.eq) goto loc_8223F870;
	// lwz r10,132(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223f870
	if (ctx.cr6.eq) goto loc_8223F870;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8223f8d8
	if (!ctx.cr6.eq) goto loc_8223F8D8;
loc_8223F870:
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lis r25,-32761
	r25.s64 = -2147024896;
	// ori r25,r25,14
	r25.u64 = r25.u64 | 14;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223f894
	if (ctx.cr6.eq) goto loc_8223F894;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823cd250
	ctx.lr = 0x8223F890;
	sub_823CD250(ctx, base);
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
loc_8223F894:
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223f8b0
	if (ctx.cr6.eq) goto loc_8223F8B0;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x823cd250
	ctx.lr = 0x8223F8AC;
	sub_823CD250(ctx, base);
	// stw r30,132(r31)
	REX_STORE_U32(r31.u32 + 132, r30.u32);
loc_8223F8B0:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223f8cc
	if (ctx.cr6.eq) goto loc_8223F8CC;
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x823cd250
	ctx.lr = 0x8223F8C8;
	sub_823CD250(ctx, base);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
loc_8223F8CC:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
loc_8223F8D8:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823cd980
	ctx.lr = 0x8223F8E8;
	sub_823CD980(ctx, base);
	// mulli r30,r27,28
	r30.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(28));
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 132);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823cd980
	ctx.lr = 0x8223F8FC;
	sub_823CD980(ctx, base);
	// rlwinm r29,r27,3,0,28
	r29.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 96);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x823cd980
	ctx.lr = 0x8223F910;
	sub_823CD980(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,132(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + r28.u64;
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + r30.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// beq cr6,0x8223f8cc
	if (ctx.cr6.eq) goto loc_8223F8CC;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_8223F934:
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// subf r8,r26,r8
	ctx.r8.u64 = ctx.r8.u64 - r26.u64;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r26,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r26.u32);
	// stwu r11,-8(r10)
	ea = -8 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8223f934
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223F934;
	// b 0x8223f8cc
	goto loc_8223F8CC;
}

DEFINE_REX_FUNC(sub_822476F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82247738
	if (ctx.cr6.eq) goto loc_82247738;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82247738
	if (!ctx.cr6.eq) goto loc_82247738;
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,40(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// stfs f13,44(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// stfs f12,48(r4)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// lwz r11,132(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 132);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,132(r4)
	REX_STORE_U32(ctx.r4.u32 + 132, ctx.r11.u32);
	// blr 
	return;
loc_82247738:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82248420) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82246220
	ctx.lr = 0x82248438;
	sub_82246220(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82248474
	if (ctx.cr6.eq) goto loc_82248474;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82248474
	if (!ctx.cr6.eq) goto loc_82248474;
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,72(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// b 0x8224847c
	goto loc_8224847C;
loc_82248474:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_8224847C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82249E80) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82249fc0
	if (ctx.cr6.eq) goto loc_82249FC0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82249fc0
	if (ctx.cr6.eq) goto loc_82249FC0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82249fc0
	if (ctx.cr6.eq) goto loc_82249FC0;
	// lwz r9,8(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,36(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 36);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82249ec4
	if (ctx.cr6.eq) goto loc_82249EC4;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82249EC4:
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82249edc
	if (ctx.cr0.eq) goto loc_82249EDC;
loc_82249ED0:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
loc_82249EDC:
	// lwz r10,20(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82249ef8
	if (ctx.cr6.eq) goto loc_82249EF8;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// blr 
	return;
loc_82249EF8:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bgt cr6,0x82249ed0
	if (ctx.cr6.gt) goto loc_82249ED0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82249f58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82249F58;
	// bdzf 4*cr6+eq,0x82249f58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82249F58;
	// bdzf 4*cr6+eq,0x82249f60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82249F60;
	// bdzf 4*cr6+eq,0x82249f6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82249F6C;
	// bdzf 4*cr6+eq,0x82249f58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82249F58;
	// bdzf 4*cr6+eq,0x82249f78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82249F78;
	// bne cr6,0x82249f94
	if (!ctx.cr6.eq) goto loc_82249F94;
	// lwz r10,12(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82249f58
	if (ctx.cr6.eq) goto loc_82249F58;
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x82249f4c
	if (ctx.cr6.eq) goto loc_82249F4C;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// b 0x82249f50
	goto loc_82249F50;
loc_82249F4C:
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
loc_82249F50:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82249fb8
	goto loc_82249FB8;
loc_82249F58:
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82249f50
	goto loc_82249F50;
loc_82249F60:
	// lfs f0,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x82249fb8
	goto loc_82249FB8;
loc_82249F6C:
	// lwz r4,4(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82246a38
	sub_82246A38(ctx, base);
	return;
loc_82249F78:
	// lfs f0,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x82249fb8
	goto loc_82249FB8;
loc_82249F94:
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// addi r10,r7,4
	ctx.r10.s64 = ctx.r7.s64 + 4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,12(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,16(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_82249FB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82249FC0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8224F0C8) {
	REX_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x8224b658
	sub_8224B658(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8224F170) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,196(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 196);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224f194
	if (ctx.cr6.eq) goto loc_8224F194;
	// bl 0x8228ae10
	ctx.lr = 0x8224F194;
	sub_8228AE10(ctx, base);
loc_8224F194:
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x822456f8
	ctx.lr = 0x8224F19C;
	sub_822456F8(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x8224bcd0
	ctx.lr = 0x8224F1A4;
	sub_8224BCD0(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8225da00
	ctx.lr = 0x8224F1AC;
	sub_8225DA00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82251D50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r6,-32220
	ctx.r6.s64 = -2111569920;
	// addi r9,r9,-5660
	ctx.r9.s64 = ctx.r9.s64 + -5660;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lis r5,-32220
	ctx.r5.s64 = -2111569920;
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// std r11,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lis r7,-32219
	ctx.r7.s64 = -2111504384;
	// std r11,24(r10)
	REX_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// addi r8,r8,-5728
	ctx.r8.s64 = ctx.r8.s64 + -5728;
	// std r11,32(r10)
	REX_STORE_U64(ctx.r10.u32 + 32, ctx.r11.u64);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r7,r7,-8304
	ctx.r7.s64 = ctx.r7.s64 + -8304;
	// addi r10,r6,27712
	ctx.r10.s64 = ctx.r6.s64 + 27712;
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r9,r5,27816
	ctx.r9.s64 = ctx.r5.s64 + 27816;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r8,-32163
	ctx.r8.s64 = -2107834368;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r4,r8,23576
	ctx.r4.s64 = ctx.r8.s64 + 23576;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x822512d8
	ctx.lr = 0x82251DD4;
	sub_822512D8(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82252F98) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-4912
	ctx.r3.s64 = ctx.r11.s64 + -4912;
	// b 0x82251550
	sub_82251550(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822531C8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-4780
	ctx.r3.s64 = ctx.r11.s64 + -4780;
	// b 0x82251550
	sub_82251550(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82253F60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82255b70
	ctx.lr = 0x82253F7C;
	sub_82255B70(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82255b70
	ctx.lr = 0x82253F84;
	sub_82255B70(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x82255b70
	ctx.lr = 0x82253F8C;
	sub_82255B70(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82253fb4
	if (ctx.cr6.eq) goto loc_82253FB4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82256918
	ctx.lr = 0x82253FA0;
	sub_82256918(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82253fb4
	if (!ctx.cr6.eq) goto loc_82253FB4;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x822516b0
	ctx.lr = 0x82253FB4;
	sub_822516B0(ctx, base);
loc_82253FB4:
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// bl 0x82255b70
	ctx.lr = 0x82253FBC;
	sub_82255B70(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bl 0x82255b70
	ctx.lr = 0x82253FC4;
	sub_82255B70(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x82255b70
	ctx.lr = 0x82253FCC;
	sub_82255B70(ctx, base);
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// bl 0x82255b70
	ctx.lr = 0x82253FD4;
	sub_82255B70(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x8225da00
	ctx.lr = 0x82253FDC;
	sub_8225DA00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82256168) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r4,23556(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23556);
	// bl 0x82255c88
	ctx.lr = 0x82256180;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82256194
	if (!ctx.cr0.eq) goto loc_82256194;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x82256198
	goto loc_82256198;
loc_82256194:
	// bl 0x822619c8
	ctx.lr = 0x82256198;
	sub_822619C8(ctx, base);
loc_82256198:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822565B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r4,23572(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23572);
	// bl 0x82255c88
	ctx.lr = 0x822565C8;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822565d8
	if (ctx.cr0.eq) goto loc_822565D8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
loc_822565D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82257038) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82257060
	if (!ctx.cr6.eq) goto loc_82257060;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82257094
	goto loc_82257094;
loc_82257060:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r4,23544(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 23544);
	// bl 0x82255c88
	ctx.lr = 0x82257074;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82257088
	if (!ctx.cr0.eq) goto loc_82257088;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x82257094
	goto loc_82257094;
loc_82257088:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82257094:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82258790) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x82258798;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x822586e0
	ctx.lr = 0x822587BC;
	sub_822586E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82258860
	if (ctx.cr0.lt) goto loc_82258860;
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82257378
	ctx.lr = 0x822587D8;
	sub_82257378(ctx, base);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82257378
	ctx.lr = 0x822587E8;
	sub_82257378(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82258858
	if (ctx.cr6.lt) goto loc_82258858;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x82258858
	if (ctx.cr6.lt) goto loc_82258858;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82258844
	if (ctx.cr6.eq) goto loc_82258844;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82257378
	ctx.lr = 0x82258820;
	sub_82257378(ctx, base);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82258858
	if (ctx.cr6.lt) goto loc_82258858;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82258858
	if (ctx.cr6.lt) goto loc_82258858;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x82258858
	if (ctx.cr6.gt) goto loc_82258858;
loc_82258844:
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82257318
	ctx.lr = 0x82258854;
	sub_82257318(ctx, base);
	// b 0x82258860
	goto loc_82258860;
loc_82258858:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82258860:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8225CE18) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225ce5c
	if (ctx.cr6.eq) goto loc_8225CE5C;
	// bl 0x822463a8
	ctx.lr = 0x8225CE3C;
	sub_822463A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225ce5c
	if (ctx.cr0.eq) goto loc_8225CE5C;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82257030
	ctx.lr = 0x8225CE50;
	sub_82257030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x8225ce60
	if (!ctx.cr0.eq) goto loc_8225CE60;
loc_8225CE5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225CE60:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8225DA00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225da50
	if (ctx.cr6.eq) goto loc_8225DA50;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8225da48
	if (!ctx.cr6.gt) goto loc_8225DA48;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8225DA3C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8225da3c
	if (ctx.cr6.lt) goto loc_8225DA3C;
loc_8225DA48:
	// bl 0x82255b70
	ctx.lr = 0x8225DA4C;
	sub_82255B70(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
loc_8225DA50:
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8225EC88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8225e318
	ctx.lr = 0x8225ECAC;
	sub_8225E318(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224da00
	ctx.lr = 0x8225ECB8;
	sub_8224DA00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8225ecc8
	if (!ctx.cr0.lt) goto loc_8225ECC8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8225ecd8
	goto loc_8225ECD8;
loc_8225ECC8:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_8225ECD8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82260E90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x82260E98;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// bl 0x822469c0
	ctx.lr = 0x82260EAC;
	sub_822469C0(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// lwz r30,16(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r29,8(r27)
	REX_STORE_U32(r27.u32 + 8, r29.u32);
	// bl 0x8225ee88
	ctx.lr = 0x82260EC0;
	sub_8225EE88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x82260f8c
	if (ctx.cr0.eq) goto loc_82260F8C;
	// bl 0x8225ef18
	ctx.lr = 0x82260ED0;
	sub_8225EF18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lbz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U8(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x82260eec
	if (ctx.cr0.eq) goto loc_82260EEC;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82260d70
	ctx.lr = 0x82260EE8;
	sub_82260D70(ctx, base);
	// b 0x82261020
	goto loc_82261020;
loc_82260EEC:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82260d70
	ctx.lr = 0x82260EF4;
	sub_82260D70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82261020
	if (!ctx.cr0.eq) goto loc_82261020;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82260f1c
	if (ctx.cr6.eq) goto loc_82260F1C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lbz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U8(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255d80
	ctx.lr = 0x82260F1C;
	sub_82255D80(ctx, base);
loc_82260F1C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225ef60
	ctx.lr = 0x82260F28;
	sub_8225EF60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225f068
	ctx.lr = 0x82260F30;
	sub_8225F068(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x8225f0b0
	ctx.lr = 0x82260F40;
	sub_8225F0B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822586e0
	ctx.lr = 0x82260F54;
	sub_822586E0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82261014
	if (!ctx.cr6.eq) goto loc_82261014;
	// lbz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U8(r30.u32 + 4);
	// bl 0x82260e08
	ctx.lr = 0x82260F6C;
	sub_82260E08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225ef60
	ctx.lr = 0x82260F78;
	sub_8225EF60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U8(r30.u32 + 4);
	// bl 0x82255d80
	ctx.lr = 0x82260F88;
	sub_82255D80(ctx, base);
	// b 0x82261020
	goto loc_82261020;
loc_82260F8C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822586e0
	ctx.lr = 0x82260F9C;
	sub_822586E0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82261020
	if (ctx.cr6.eq) goto loc_82261020;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-1704
	ctx.r4.s64 = ctx.r11.s64 + -1704;
	// bl 0x82257378
	ctx.lr = 0x82260FB8;
	sub_82257378(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,-1736
	ctx.r4.s64 = ctx.r11.s64 + -1736;
	// bl 0x82257378
	ctx.lr = 0x82260FCC;
	sub_82257378(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82261020
	if (ctx.cr6.lt) goto loc_82261020;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82261020
	if (ctx.cr6.lt) goto loc_82261020;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82261004
	if (ctx.cr6.eq) goto loc_82261004;
	// li r4,1
	ctx.r4.s64 = 1;
	// lbz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U8(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255d80
	ctx.lr = 0x82261004;
	sub_82255D80(ctx, base);
loc_82261004:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225ef60
	ctx.lr = 0x82261010;
	sub_8225EF60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82261014:
	// lbz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 4);
	// stb r11,56(r28)
	REX_STORE_U8(r28.u32 + 56, ctx.r11.u8);
	// bl 0x8225efa8
	ctx.lr = 0x82261020;
	sub_8225EFA8(ctx, base);
loc_82261020:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82269048) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82269050;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822690a0
	if (ctx.cr6.eq) goto loc_822690A0;
	// lwz r11,240(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 240);
	// lwz r10,232(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82269148
	if (ctx.cr0.lt) goto loc_82269148;
	// lwz r10,172(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82269148
	if (!ctx.cr6.lt) goto loc_82269148;
	// lwz r10,176(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82257bf8
	ctx.lr = 0x82269098;
	sub_82257BF8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82269148
	goto loc_82269148;
loc_822690A0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822690dc
	if (!ctx.cr6.eq) goto loc_822690DC;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822690dc
	if (!ctx.cr6.eq) goto loc_822690DC;
	// lwz r10,172(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// lwz r9,240(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 240);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// subfc r11,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// adde r29,r10,r8
	temp.u8 = (ctx.r10.u32 + ctx.r8.u32 < ctx.r10.u32) | (ctx.r10.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	r29.u64 = ctx.r10.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82269148
	goto loc_82269148;
loc_822690DC:
	// lwz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 240);
	// lwz r10,232(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 232);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82269148
	if (ctx.cr0.lt) goto loc_82269148;
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82269148
	if (!ctx.cr6.lt) goto loc_82269148;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82264958
	ctx.lr = 0x8226910C;
	sub_82264958(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822641d8
	ctx.lr = 0x82269120;
	sub_822641D8(ctx, base);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82269148
	if (ctx.cr6.lt) goto loc_82269148;
	// lfs f13,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82269148
	if (ctx.cr6.gt) goto loc_82269148;
	// li r29,1
	r29.s64 = 1;
loc_82269148:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8226F098) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8225ee88
	ctx.lr = 0x8226F0BC;
	sub_8225EE88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8226f120
	if (ctx.cr0.eq) goto loc_8226F120;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 148);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8226f0e8
	if (!ctx.cr6.eq) goto loc_8226F0E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8226f0f0
	goto loc_8226F0F0;
loc_8226F0E8:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
loc_8226F0F0:
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225d318
	ctx.lr = 0x8226F0FC;
	sub_8225D318(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226b6f8
	ctx.lr = 0x8226F104;
	sub_8226B6F8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8226f120
	if (ctx.cr6.eq) goto loc_8226F120;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822650b0
	ctx.lr = 0x8226F120;
	sub_822650B0(ctx, base);
loc_8226F120:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822751D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,116(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82275224
	if (ctx.cr0.eq) goto loc_82275224;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8225ee88
	ctx.lr = 0x822751FC;
	sub_8225EE88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82275224
	if (ctx.cr0.eq) goto loc_82275224;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x82275100
	ctx.lr = 0x82275220;
	sub_82275100(ctx, base);
	// b 0x82275228
	goto loc_82275228;
loc_82275224:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82275228:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82276860) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822768ac
	if (ctx.cr6.eq) goto loc_822768AC;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r30,r11,29924
	r30.s64 = ctx.r11.s64 + 29924;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d438c
	ctx.lr = 0x82276890;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822768A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d437c
	ctx.lr = 0x822768AC;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_822768AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822776C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822776D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8227e4e0
	ctx.lr = 0x822776D8;
	sub_8227E4E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82277810
	if (ctx.cr0.lt) goto loc_82277810;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82255b48
	ctx.lr = 0x822776E8;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r28,0
	r28.s64 = 0;
	// beq 0x82277714
	if (ctx.cr0.eq) goto loc_82277714;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// stw r28,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// addi r31,r11,29952
	r31.s64 = ctx.r11.s64 + 29952;
	// stw r28,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r28,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r28.u32);
	// b 0x82277720
	goto loc_82277720;
loc_82277714:
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// addi r31,r10,29952
	r31.s64 = ctx.r10.s64 + 29952;
loc_82277720:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82277738
	if (!ctx.cr6.eq) goto loc_82277738;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x822777f4
	goto loc_822777F4;
loc_82277738:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82255b48
	ctx.lr = 0x82277740;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82277764
	if (ctx.cr0.eq) goto loc_82277764;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,1296
	ctx.r11.s64 = ctx.r11.s64 + 1296;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82277768
	goto loc_82277768;
loc_82277764:
	// mr r30,r28
	r30.u64 = r28.u64;
loc_82277768:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8227777c
	if (!ctx.cr6.eq) goto loc_8227777C;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x822777c0
	goto loc_822777C0;
loc_8227777C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822774e0
	ctx.lr = 0x82277788;
	sub_822774E0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822777A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x822777c0
	if (ctx.cr6.lt) goto loc_822777C0;
	// bl 0x8227f570
	ctx.lr = 0x822777AC;
	sub_8227F570(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x822777c0
	if (ctx.cr0.lt) goto loc_822777C0;
	// bl 0x8227fb10
	ctx.lr = 0x822777B8;
	sub_8227FB10(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x82277804
	if (!ctx.cr0.lt) goto loc_82277804;
loc_822777C0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822777f4
	if (ctx.cr6.eq) goto loc_822777F4;
	// bl 0x82276e10
	ctx.lr = 0x822777D0;
	sub_82276E10(ctx, base);
	// lwz r30,4(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822777ec
	if (ctx.cr6.eq) goto loc_822777EC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227ac70
	ctx.lr = 0x822777E4;
	sub_8227AC70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82255b70
	ctx.lr = 0x822777EC;
	sub_82255B70(ctx, base);
loc_822777EC:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
loc_822777F4:
	// bl 0x82255758
	ctx.lr = 0x822777F8;
	sub_82255758(ctx, base);
	// bl 0x8227e6c8
	ctx.lr = 0x822777FC;
	sub_8227E6C8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x82277810
	goto loc_82277810;
loc_82277804:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
loc_82277810:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8227AD38) {
	REX_FUNC_PROLOGUE();
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8227B360) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x8227B368;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8227b3b8
	if (!ctx.cr6.eq) goto loc_8227B3B8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227b3ac
	if (ctx.cr6.eq) goto loc_8227B3AC;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227b3ac
	if (ctx.cr6.eq) goto loc_8227B3AC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227B3A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8227b644
	goto loc_8227B644;
loc_8227B3AC:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// b 0x8227b644
	goto loc_8227B644;
loc_8227B3B8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227b200
	ctx.lr = 0x8227B3C4;
	sub_8227B200(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8227b644
	if (ctx.cr0.lt) goto loc_8227B644;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// rlwinm r28,r30,1,0,30
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82255b48
	ctx.lr = 0x8227B3E0;
	sub_82255B48(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8227b3f8
	if (!ctx.cr0.eq) goto loc_8227B3F8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8227b644
	goto loc_8227B644;
loc_8227B3F8:
	// li r27,0
	r27.s64 = 0;
	// sth r27,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, r27.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8227b63c
	if (ctx.cr6.gt) goto loc_8227B63C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8227b464
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8227B464;
	// bdzf 4*cr6+eq,0x8227b47c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8227B47C;
	// bdzf 4*cr6+eq,0x8227b498
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8227B498;
	// bdzf 4*cr6+eq,0x8227b590
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8227B590;
	// bdzf 4*cr6+eq,0x8227b4bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8227B4BC;
	// bdzf 4*cr6+eq,0x8227b5a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8227B5A8;
	// bne cr6,0x8227b5e4
	if (!ctx.cr6.eq) goto loc_8227B5E4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8227b454
	if (ctx.cr6.eq) goto loc_8227B454;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-4492
	ctx.r5.s64 = ctx.r11.s64 + -4492;
	// b 0x8227b45c
	goto loc_8227B45C;
loc_8227B454:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-4504
	ctx.r5.s64 = ctx.r11.s64 + -4504;
loc_8227B45C:
	// bl 0x822d6c18
	ctx.lr = 0x8227B460;
	sub_822D6C18(ctx, base);
	// b 0x8227b628
	goto loc_8227B628;
loc_8227B464:
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x822d7d50
	ctx.lr = 0x8227B478;
	sub_822D7D50(ctx, base);
	// b 0x8227b628
	goto loc_8227B628;
loc_8227B47C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r5,r11,-4472
	ctx.r5.s64 = ctx.r11.s64 + -4472;
	// bl 0x824d4a1c
	ctx.lr = 0x8227B494;
	__imp___snwprintf(ctx, base);
	// b 0x8227b628
	goto loc_8227B628;
loc_8227B498:
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfd f1,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// addi r5,r11,-4464
	ctx.r5.s64 = ctx.r11.s64 + -4464;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x824d4a1c
	ctx.lr = 0x8227B4B8;
	__imp___snwprintf(ctx, base);
	// b 0x8227b628
	goto loc_8227B628;
loc_8227B4BC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r7,r11,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// rlwinm r6,r11,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwinm r8,r11,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lfd f11,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfs f0,-13044(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -13044);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfs f13,2028(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2028);
	ctx.f13.f64 = double(temp.f32);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r10,1396
	ctx.r5.s64 = ctx.r10.s64 + 1396;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f12,f9,f13
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctidz f13,f12
	ctx.f13.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f13,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fctidz f13,f10
	ctx.f13.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f13,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// fctidz f13,f11
	ctx.f13.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,100(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x824d4a1c
	ctx.lr = 0x8227B58C;
	__imp___snwprintf(ctx, base);
	// b 0x8227b628
	goto loc_8227B628;
loc_8227B590:
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8227b628
	if (ctx.cr6.eq) goto loc_8227B628;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x8227b45c
	goto loc_8227B45C;
loc_8227B5A8:
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f3,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f2,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// addi r5,r11,-4440
	ctx.r5.s64 = ctx.r11.s64 + -4440;
	// stfd f1,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f3,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f2,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x824d4a1c
	ctx.lr = 0x8227B5E0;
	__imp___snwprintf(ctx, base);
	// b 0x8227b628
	goto loc_8227B628;
loc_8227B5E4:
	// lfs f4,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfd f4,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.f4.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// lfs f2,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f3,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r11,-4420
	ctx.r5.s64 = ctx.r11.s64 + -4420;
	// lfs f1,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stfd f2,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// stfd f3,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// stfd f1,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x824d4a1c
	ctx.lr = 0x8227B628;
	__imp___snwprintf(ctx, base);
loc_8227B628:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r28,r11
	ctx.r11.u64 = r28.u64 + ctx.r11.u64;
	// sth r27,-2(r11)
	REX_STORE_U16(ctx.r11.u32 + -2, r27.u16);
	// b 0x8227b644
	goto loc_8227B644;
loc_8227B63C:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
loc_8227B644:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82286578) {
	REX_FUNC_PROLOGUE();
	// lwz r3,184(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82286580) {
	REX_FUNC_PROLOGUE();
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e68
	ctx.lr = 0x82286588;
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// li r31,0
	r31.s64 = 0;
	// std r11,-240(r1)
	REX_STORE_U64(ctx.r1.u32 + -240, ctx.r11.u64);
	// lfd f0,-240(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -240);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f9,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f10.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// fdivs f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 / ctx.f13.f64));
	// ble cr6,0x8228685c
	if (!ctx.cr6.gt) goto loc_8228685C;
	// lis r29,-32255
	r29.s64 = -2113863680;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// lis r28,-32256
	r28.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// lfs f0,-13044(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + -13044);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r7,12
	ctx.r11.s64 = ctx.r7.s64 + 12;
	// lfs f8,16620(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 16620);
	ctx.f8.f64 = double(temp.f32);
	// subfic r5,r7,-4
	ctx.xer.ca = ctx.r7.u32 <= 4294967292;
	ctx.r5.u64 = static_cast<uint64_t>(-4) - ctx.r7.u64;
	// addi r30,r10,112
	r30.s64 = ctx.r10.s64 + 112;
loc_822865F4:
	// fmuls f13,f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82286620
	if (!ctx.cr6.gt) goto loc_82286620;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// add r3,r5,r11
	ctx.r3.u64 = ctx.r5.u64 + ctx.r11.u64;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8228682c
	if (!ctx.cr6.lt) goto loc_8228682C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82286620:
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r31.s32, ctx.xer);
	// beq cr6,0x8228682c
	if (ctx.cr6.eq) goto loc_8228682C;
	// add r10,r3,r7
	ctx.r10.u64 = ctx.r3.u64 + ctx.r7.u64;
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f6,f12,f11
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fcmpu cr6,f6,f8
	ctx.cr6.compare(ctx.f6.f64, ctx.f8.f64);
	// blt cr6,0x8228682c
	if (ctx.cr6.lt) goto loc_8228682C;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x82286650
	if (!ctx.cr6.lt) goto loc_82286650;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82286830
	goto loc_82286830;
loc_82286650:
	// lwz r29,0(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f11,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// rlwinm r23,r29,24,24,31
	r23.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 24) & 0xFF;
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// rlwinm r27,r10,16,24,31
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF;
	// vspltisw128 v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x3)));
	// rlwinm r26,r10,24,24,31
	r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// std r23,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, r23.u64);
	// clrlwi r25,r10,24
	r25.u64 = ctx.r10.u32 & 0xFF;
	// std r27,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, r27.u64);
	// rlwinm r10,r10,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// lfd f6,-168(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// std r26,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, r26.u64);
	// lfd f5,-152(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// std r10,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r10.u64);
	// rlwinm r24,r29,16,24,31
	r24.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFF;
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// std r25,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, r25.u64);
	// lfd f4,-136(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// std r24,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, r24.u64);
	// lfd f1,-128(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// std r10,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.r10.u64);
	// lfd f3,-120(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// rlwinm r28,r29,8,24,31
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0xFF;
	// lfd f2,-176(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// lfd f31,-144(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// std r28,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, r28.u64);
	// lfd f11,-160(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// stfs f13,-180(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -180, temp.u32);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// stfs f13,-184(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -184, temp.u32);
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// stfs f13,-188(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// fcfid f1,f1
	ctx.f1.f64 = double(ctx.f1.s64);
	// stfs f13,-192(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// fcfid f3,f3
	ctx.f3.f64 = double(ctx.f3.s64);
	// mr r28,r25
	r28.u64 = r25.u64;
	// fcfid f31,f31
	f31.f64 = double(f31.s64);
	// mr r28,r23
	r28.u64 = r23.u64;
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// addi r29,r1,-208
	r29.s64 = ctx.r1.s64 + -208;
	// frsp f13,f11
	ctx.f13.f64 = double(float(ctx.f11.f64));
	// addi r28,r1,-224
	r28.s64 = ctx.r1.s64 + -224;
	// addi r10,r1,-256
	ctx.r10.s64 = ctx.r1.s64 + -256;
	// mr r27,r24
	r27.u64 = r24.u64;
	// frsp f11,f6
	ctx.f11.f64 = double(float(ctx.f6.f64));
	// addi r27,r1,-209
	r27.s64 = ctx.r1.s64 + -209;
	// frsp f6,f5
	ctx.f6.f64 = double(float(ctx.f5.f64));
	// lvsl v0,r0,r29
	temp.u32 = r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// frsp f5,f4
	ctx.f5.f64 = double(float(ctx.f4.f64));
	// lvsl v7,r0,r28
	temp.u32 = r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lvsr v6,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// frsp f4,f3
	ctx.f4.f64 = double(float(ctx.f3.f64));
	// addi r10,r1,-193
	ctx.r10.s64 = ctx.r1.s64 + -193;
	// frsp f31,f31
	f31.f64 = double(float(f31.f64));
	// addi r28,r1,-208
	r28.s64 = ctx.r1.s64 + -208;
	// frsp f2,f2
	ctx.f2.f64 = double(float(ctx.f2.f64));
	// addi r26,r1,-224
	r26.s64 = ctx.r1.s64 + -224;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,-196(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -196, temp.u32);
	// addi r29,r1,-256
	r29.s64 = ctx.r1.s64 + -256;
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,-224(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// fmuls f13,f6,f0
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f13,-220(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -220, temp.u32);
	// fmuls f13,f5,f0
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f13,-216(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -216, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,-204(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -204, temp.u32);
	// fmuls f13,f4,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f13,-212(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -212, temp.u32);
	// fmuls f3,f31,f0
	ctx.f3.f64 = double(float(f31.f64 * ctx.f0.f64));
	// stfs f3,-200(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + -200, temp.u32);
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f12,-208(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// vcsxwfp128 v11,v63,0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r25,r1,-192
	r25.s64 = ctx.r1.s64 + -192;
	// lvx128 v61,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,-256
	ctx.r10.s64 = ctx.r1.s64 + -256;
	// lvx128 v60,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v0,v62,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r28,4
	r28.s64 = 4;
	// vperm128 v63,v60,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// addi r27,r1,-256
	r27.s64 = ctx.r1.s64 + -256;
	// lvx128 v12,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r26,8
	r26.s64 = 8;
	// addi r25,r1,-256
	r25.s64 = ctx.r1.s64 + -256;
	// li r24,12
	r24.s64 = 12;
	// vsubfp128 v13,v63,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// addi r23,r1,-241
	r23.s64 = ctx.r1.s64 + -241;
	// addi r22,r1,-256
	r22.s64 = ctx.r1.s64 + -256;
	// addi r21,r1,-256
	r21.s64 = ctx.r1.s64 + -256;
	// addi r20,r1,-240
	r20.s64 = ctx.r1.s64 + -240;
	// lvsl v7,r0,r21
	temp.u32 = r21.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmaddfp v0,v13,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vperm128 v63,v0,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// stvewx128 v63,r0,r29
	ea = (r29.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r10,r28
	ea = (ctx.r10.u32 + r28.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r27,r26
	ea = (r27.u32 + r26.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r25,r24
	ea = (r25.u32 + r24.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v13,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v0,v62,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vnmsubfp v12,v0,v13,v11
	simde_mm_store_ps(ctx.v12.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor128 v63,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vpkd3d128 v63,v12,0,1,3
	vTemp.u32[0] = 0x404000FF;
	vTemp.f32[0] = !(ctx.v12.f32[0] >= 3.0f) ? 3.0f : (ctx.v12.f32[0] > vTemp.f32[0] ? vTemp.f32[0] : ctx.v12.f32[0]);
	temp.u32 = uint32_t(vTemp.u8[0]) << 24;
	vTemp.u32[1] = 0x404000FF;
	vTemp.f32[1] = !(ctx.v12.f32[1] >= 3.0f) ? 3.0f : (ctx.v12.f32[1] > vTemp.f32[1] ? vTemp.f32[1] : ctx.v12.f32[1]);
	temp.u32 |= uint32_t(vTemp.u8[4]) << 0;
	vTemp.u32[2] = 0x404000FF;
	vTemp.f32[2] = !(ctx.v12.f32[2] >= 3.0f) ? 3.0f : (ctx.v12.f32[2] > vTemp.f32[2] ? vTemp.f32[2] : ctx.v12.f32[2]);
	temp.u32 |= uint32_t(vTemp.u8[8]) << 8;
	vTemp.u32[3] = 0x404000FF;
	vTemp.f32[3] = !(ctx.v12.f32[3] >= 3.0f) ? 3.0f : (ctx.v12.f32[3] > vTemp.f32[3] ? vTemp.f32[3] : ctx.v12.f32[3]);
	temp.u32 |= uint32_t(vTemp.u8[12]) << 16;
	ctx.v63.u32[3] = temp.u32;
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvewx128 v63,r0,r20
	ea = (r20.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r10,-240(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// b 0x82286830
	goto loc_82286830;
loc_8228682C:
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
loc_82286830:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x82286850
	if (!ctx.cr6.eq) goto loc_82286850;
	// rlwinm r29,r10,16,24,31
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF;
	// rlwinm r28,r10,16,8,15
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF0000;
	// rlwinm r10,r10,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// or r29,r29,r28
	r29.u64 = r29.u64 | r28.u64;
	// rlwinm r10,r10,0,16,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF;
	// or r10,r29,r10
	ctx.r10.u64 = r29.u64 | ctx.r10.u64;
loc_82286850:
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
	// fadds f10,f10,f9
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// bdnz 0x822865f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822865F4;
loc_8228685C:
	// li r3,0
	ctx.r3.s64 = 0;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_82296110) {
	REX_FUNC_PROLOGUE();
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e68
	ctx.lr = 0x82296118;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// li r21,0
	r21.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// ble cr6,0x82296304
	if (!ctx.cr6.gt) goto loc_82296304;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// li r29,3
	r29.s64 = 3;
loc_8229614C:
	// lbz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lbz r10,1(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 1);
	// mr r22,r31
	r22.u64 = r31.u64;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// or r26,r11,r10
	r26.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x822979a8
	ctx.lr = 0x8229616C;
	sub_822979A8(ctx, base);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r28,r31,1
	r28.s64 = r31.s64 + 1;
	// addi r24,r26,1
	r24.s64 = r26.s64 + 1;
	// ldx r11,r11,r23
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + r23.u32);
loc_8229617C:
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// b 0x822962e8
	goto loc_822962E8;
loc_82296184:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(r28.s32, r26.s32, ctx.xer);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// ble cr6,0x82296198
	if (!ctx.cr6.gt) goto loc_82296198;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_82296198:
	// lhz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r31,r11,r23
	r31.u64 = ctx.r11.u64 + r23.u64;
	// beq 0x822961f8
	if (ctx.cr0.eq) goto loc_822961F8;
	// lhz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822961f8
	if (ctx.cr0.eq) goto loc_822961F8;
	// lha r11,80(r1)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 80));
	// li r5,2
	ctx.r5.s64 = 2;
	// lha r10,82(r1)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 82));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lha r11,0(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 0));
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x82298008
	ctx.lr = 0x822961E8;
	sub_82298008(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82296318
	if (ctx.cr0.lt) goto loc_82296318;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// b 0x8229617c
	goto loc_8229617C;
loc_822961F8:
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(r28.s32, r26.s32, ctx.xer);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// ble cr6,0x82296210
	if (!ctx.cr6.gt) goto loc_82296210;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_82296210:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r11,r11,r23
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + r23.u32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lhz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82296258
	if (!ctx.cr0.eq) goto loc_82296258;
	// lha r11,80(r1)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 80));
	// lha r10,0(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 0));
	// lha r9,82(r1)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 82));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lha r8,2(r31)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// sth r10,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
loc_82296258:
	// lha r10,88(r1)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 88));
	// li r5,4
	ctx.r5.s64 = 4;
	// lha r11,90(r1)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 90));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lha r8,80(r1)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 80));
	// lha r7,82(r1)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 82));
	// lha r9,0(r31)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r31.u32 + 0));
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// divw r9,r9,r29
	ctx.r9.u64 = uint32_t((r29.s32 && !(ctx.r9.s32 == INT32_MIN && r29.s32 == -1)) ? ctx.r9.s32 / r29.s32 : 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lha r10,2(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// divw r10,r10,r29
	ctx.r10.u64 = uint32_t((r29.s32 && !(ctx.r10.s32 == INT32_MIN && r29.s32 == -1)) ? ctx.r10.s32 / r29.s32 : 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lha r11,0(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 0));
	// subf r10,r11,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
	// divw r10,r10,r29
	ctx.r10.u64 = uint32_t((r29.s32 && !(ctx.r10.s32 == INT32_MIN && r29.s32 == -1)) ? ctx.r10.s32 / r29.s32 : 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// subf r10,r11,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r11.u64;
	// divw r10,r10,r29
	ctx.r10.u64 = uint32_t((r29.s32 && !(ctx.r10.s32 == INT32_MIN && r29.s32 == -1)) ? ctx.r10.s32 / r29.s32 : 0);
	// stw r8,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r7,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82298018
	ctx.lr = 0x822962E0;
	sub_82298018(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82296328
	if (ctx.cr0.lt) goto loc_82296328;
loc_822962E8:
	// cmpw cr6,r28,r24
	ctx.cr6.compare<int32_t>(r28.s32, r24.s32, ctx.xer);
	// ble cr6,0x82296184
	if (!ctx.cr6.gt) goto loc_82296184;
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// mr r31,r24
	r31.u64 = r24.u64;
	// addi r25,r25,2
	r25.s64 = r25.s64 + 2;
	// cmpw cr6,r21,r20
	ctx.cr6.compare<int32_t>(r21.s32, r20.s32, ctx.xer);
	// blt cr6,0x8229614c
	if (ctx.cr6.lt) goto loc_8229614C;
loc_82296304:
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x822d7b58
	ctx.lr = 0x8229630C;
	sub_822D7B58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82296310:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4eb8
	return;
loc_82296318:
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x822d7b58
	ctx.lr = 0x82296320;
	sub_822D7B58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82296310
	goto loc_82296310;
loc_82296328:
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x822d7b58
	ctx.lr = 0x82296330;
	sub_822D7B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82296310
	goto loc_82296310;
}

DEFINE_REX_FUNC(sub_822A1368) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A13A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,392(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 392);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x822a13e4
	if (!ctx.cr6.eq) goto loc_822A13E4;
	// lwz r11,396(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 396);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x822a13e4
	if (!ctx.cr6.eq) goto loc_822A13E4;
	// lwz r11,400(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 400);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x822a13e4
	if (!ctx.cr6.eq) goto loc_822A13E4;
	// lwz r11,404(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 404);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x822a142c
	if (ctx.cr6.eq) goto loc_822A142C;
loc_822A13E4:
	// lbz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 228);
	// stw r4,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r4.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r5,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r5.u32);
	// stw r6,400(r31)
	REX_STORE_U32(r31.u32 + 400, ctx.r6.u32);
	// stw r7,404(r31)
	REX_STORE_U32(r31.u32 + 404, ctx.r7.u32);
	// beq 0x822a142c
	if (ctx.cr0.eq) goto loc_822A142C;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82210378
	ctx.lr = 0x822A1408;
	sub_82210378(ctx, base);
	// lwz r4,396(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 396);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82210408
	ctx.lr = 0x822A1414;
	sub_82210408(ctx, base);
	// lwz r4,400(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 400);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82210508
	ctx.lr = 0x822A1420;
	sub_82210508(ctx, base);
	// lwz r4,404(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 404);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82210578
	ctx.lr = 0x822A142C;
	sub_82210578(ctx, base);
loc_822A142C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A3F98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,132(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,22968
	ctx.r11.s64 = ctx.r11.s64 + 22968;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x822b25a0
	ctx.lr = 0x822A3FC8;
	sub_822B25A0(ctx, base);
	// lwz r30,132(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822a3fec
	if (ctx.cr6.eq) goto loc_822A3FEC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b3748
	ctx.lr = 0x822A3FDC;
	sub_822B3748(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c80a8
	ctx.lr = 0x822A3FE4;
	sub_822C80A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
loc_822A3FEC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822aac40
	ctx.lr = 0x822A3FF4;
	sub_822AAC40(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A6070) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x822A6078;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f34
	ctx.lr = 0x822A6080;
	// stwu r1,-960(r1)
	ea = -960 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lfs f13,384(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 384);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,416(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 416);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r3,400
	r30.s64 = ctx.r3.s64 + 400;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,388(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 388);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,420(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 420);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f11,392(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 392);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lfs f12,424(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 424);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// addi r4,r3,384
	ctx.r4.s64 = ctx.r3.s64 + 384;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// lwz r27,8(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f0,288(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// stfs f13,292(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f12,296(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// bl 0x822cab38
	ctx.lr = 0x822A60DC;
	sub_822CAB38(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lfs f30,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f30.f64 = double(temp.f32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lfs f0,2024(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2024);
	ctx.f0.f64 = double(temp.f32);
	// stfs f30,224(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f31,228(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f31,232(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f31,236(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f31,240(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f30,244(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f31,248(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f31,252(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f31,256(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f31,260(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f30,264(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f31,268(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stfs f31,272(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f31,276(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f31,280(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f30,284(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stfs f30,144(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f30,168(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f31,176(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f31,196(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f31,200(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f30,204(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// bl 0x8229f270
	ctx.lr = 0x822A6184;
	sub_8229F270(ctx, base);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x8229f270
	ctx.lr = 0x822A6194;
	sub_8229F270(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821f3f40
	ctx.lr = 0x822A61A0;
	sub_821F3F40(ctx, base);
	// stfs f31,304(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// stfs f30,308(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stfs f31,312(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stfs f31,208(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f31,212(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f31,216(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// bl 0x822a5f78
	ctx.lr = 0x822A61C8;
	sub_822A5F78(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x822cab38
	ctx.lr = 0x822A61DC;
	sub_822CAB38(ctx, base);
	// addi r5,r1,608
	ctx.r5.s64 = ctx.r1.s64 + 608;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x8229f270
	ctx.lr = 0x822A61EC;
	sub_8229F270(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x821f3f40
	ctx.lr = 0x822A61F8;
	sub_821F3F40(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x821f3f40
	ctx.lr = 0x822A6204;
	sub_821F3F40(ctx, base);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x8229f270
	ctx.lr = 0x822A6214;
	sub_8229F270(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x821f3f40
	ctx.lr = 0x822A6220;
	sub_821F3F40(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821f3f40
	ctx.lr = 0x822A622C;
	sub_821F3F40(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lwz r11,452(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 452);
	// lwz r10,448(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 448);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lfs f0,1452(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1452);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,7260(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 7260);
	ctx.f13.f64 = double(temp.f32);
	// srawi. r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmr f27,f0
	f27.f64 = ctx.f0.f64;
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmr f28,f13
	f28.f64 = ctx.f13.f64;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// beq 0x822a6340
	if (ctx.cr0.eq) goto loc_822A6340;
	// rotlwi r29,r10,0
	r29.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_822A6278:
	// li r10,3
	ctx.r10.s64 = 3;
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f12,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822A6290:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f11,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f10,-16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f11,f10,f12,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f11.f64)));
	// fmadds f11,f13,f9,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, ctx.f11.f64)));
	// fadds f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// stfsx f11,r11,r9
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822a6290
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A6290;
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x822a4f30
	ctx.lr = 0x822A62F0;
	sub_822A4F30(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f27,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	f27.f64 = double(temp.f32);
	// stfs f27,136(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x822a4ed0
	ctx.lr = 0x822A631C;
	sub_822A4ED0(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lfs f13,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// lfs f28,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	f28.f64 = double(temp.f32);
	// stfs f28,120(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bne 0x822a6278
	if (!ctx.cr0.eq) goto loc_822A6278;
loc_822A6340:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x821f3f40
	ctx.lr = 0x822A634C;
	sub_821F3F40(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x821f3f40
	ctx.lr = 0x822A6358;
	sub_821F3F40(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x822ca328
	ctx.lr = 0x822A6364;
	sub_822CA328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x822a4998
	ctx.lr = 0x822A636C;
	sub_822A4998(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a5e60
	ctx.lr = 0x822A6378;
	sub_822A5E60(ctx, base);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// li r10,4
	ctx.r10.s64 = 4;
	// fmuls f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f8,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f7,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fmadds f11,f8,f13,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f11.f64)));
	// fnmadds f11,f7,f12,f11
	ctx.f11.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f11.f64)));
loc_822A63A8:
	// addi r10,r1,496
	ctx.r10.s64 = ctx.r1.s64 + 496;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f10,-48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -48);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f6,-32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f10,f6,f13,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f10,f5,f0,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f5.f64, ctx.f0.f64, ctx.f10.f64)));
	// fmadds f10,f4,f11,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f4.f64, ctx.f11.f64, ctx.f10.f64)));
	// stfsx f10,r11,r9
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822a63a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A63A8;
	// lfs f0,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,108(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fmadds f10,f13,f13,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f10,f12,f12,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f10.f64)));
	// fcmpu cr6,f10,f30
	ctx.cr6.compare(ctx.f10.f64, f30.f64);
	// beq cr6,0x822a6420
	if (ctx.cr6.eq) goto loc_822A6420;
	// fsqrts f10,f10
	ctx.f10.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f10,f30,f10
	ctx.f10.f64 = double(float(f30.f64 / ctx.f10.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
loc_822A6420:
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822A642C:
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f10,-16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// lfs f6,-32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -48);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f10,f6,f8,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f6.f64, ctx.f8.f64, ctx.f10.f64)));
	// fmadds f10,f5,f7,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f5.f64, ctx.f7.f64, ctx.f10.f64)));
	// fadds f10,f10,f4
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// stfsx f10,r11,r9
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822a642c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A642C;
	// fnmsubs f12,f12,f28,f11
	ctx.f12.f64 = double(float(-std::fma(ctx.f12.f64, f28.f64, -ctx.f11.f64)));
	// lfs f31,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f31.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// fnmsubs f13,f31,f13,f12
	ctx.f13.f64 = double(float(-std::fma(f31.f64, ctx.f13.f64, -ctx.f12.f64)));
	// fdivs f29,f13,f0
	f29.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// bl 0x821f3f40
	ctx.lr = 0x822A6480;
	sub_821F3F40(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x821f3f40
	ctx.lr = 0x822A648C;
	sub_821F3F40(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x822ca328
	ctx.lr = 0x822A6498;
	sub_822CA328(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822A64A4:
	// addi r10,r1,432
	ctx.r10.s64 = ctx.r1.s64 + 432;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,-32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// lfs f13,-48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f13,f31,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, ctx.f0.f64)));
	// fmadds f0,f12,f28,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, f28.f64, ctx.f0.f64)));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822a64a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A64A4;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822A64E8:
	// addi r10,r1,432
	ctx.r10.s64 = ctx.r1.s64 + 432;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,-32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// lfs f13,-48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f13,f31,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, ctx.f0.f64)));
	// fmadds f0,f12,f27,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, f27.f64, ctx.f0.f64)));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822a64e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A64E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822a9aa8
	ctx.lr = 0x822A652C;
	sub_822A9AA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821f3f40
	ctx.lr = 0x822A6538;
	sub_821F3F40(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822A6544:
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f12,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f11,-16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f0,f11,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f10,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f0.f64)));
	// fadds f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822a6544
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A6544;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822A6594:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f12,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f11,-16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f0,f11,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f10,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f0.f64)));
	// fadds f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822a6594
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A6594;
	// lfs f0,216(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f28,f27
	ctx.f13.f64 = double(float(f28.f64 - f27.f64));
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r31,676
	ctx.r3.s64 = r31.s64 + 676;
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - f30.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,676(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 676, temp.u32);
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f80
	ctx.lr = 0x822A6610;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822C5D90) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r10,28(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r4,r11,464
	ctx.r4.s64 = ctx.r11.s64 + 464;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822C61E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lfs f0,2024(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2024);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,28(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r11,2956(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2956);
	// lfs f13,416(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 416);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,420(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 420);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f13,424(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 424);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bctrl 
	ctx.lr = 0x822C6244;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C6F68) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lwz r9,52(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r11,31464(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 31464);
	// addi r4,r11,1392
	ctx.r4.s64 = ctx.r11.s64 + 1392;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822C80C8) {
	REX_FUNC_PROLOGUE();
	// b 0x822c7ff8
	sub_822C7FF8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822C80D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,80
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 80, ctx.xer);
	// bne cr6,0x822c8178
	if (!ctx.cr6.eq) goto loc_822C8178;
	// lbz r11,1(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// bne cr6,0x822c8178
	if (!ctx.cr6.eq) goto loc_822C8178;
	// lbz r11,2(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// bne cr6,0x822c8178
	if (!ctx.cr6.eq) goto loc_822C8178;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r30,3(r3)
	r30.u64 = REX_LOAD_U8(ctx.r3.u32 + 3);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822c9130
	ctx.lr = 0x822C8124;
	sub_822C9130(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// addic r9,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	ctx.r9.s64 = r30.s64 + -1;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822c8144
	if (ctx.cr6.eq) goto loc_822C8144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c9160
	ctx.lr = 0x822C8144;
	sub_822C9160(ctx, base);
loc_822C8144:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x822c8178
	if (ctx.cr6.gt) goto loc_822C8178;
	// lbz r11,13(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 13);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822c8178
	if (!ctx.cr0.eq) goto loc_822C8178;
	// lbz r11,14(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 14);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822c8178
	if (!ctx.cr0.eq) goto loc_822C8178;
	// lbz r11,15(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 15);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x822c817c
	goto loc_822C817C;
loc_822C8178:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822C817C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C9F10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e80
	ctx.lr = 0x822C9F18;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bl 0x822c9bc8
	ctx.lr = 0x822C9F38;
	sub_822C9BC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c9f80
	if (!ctx.cr0.eq) goto loc_822C9F80;
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r29,32(r31)
	REX_STORE_U32(r31.u32 + 32, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,40(r31)
	REX_STORE_U32(r31.u32 + 40, r28.u32);
	// stw r27,44(r31)
	REX_STORE_U32(r31.u32 + 44, r27.u32);
	// stw r26,48(r31)
	REX_STORE_U32(r31.u32 + 48, r26.u32);
	// bl 0x822c9c30
	ctx.lr = 0x822C9F60;
	sub_822C9C30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c9a68
	ctx.lr = 0x822C9F68;
	sub_822C9A68(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c9f78
	if (!ctx.cr0.eq) goto loc_822C9F78;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c9eb8
	ctx.lr = 0x822C9F78;
	sub_822C9EB8(ctx, base);
loc_822C9F78:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822c9f84
	goto loc_822C9F84;
loc_822C9F80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822C9F84:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_822CBB98) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// slw r11,r11,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CC780) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,568(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 568);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822cc7b0
	if (ctx.cr0.eq) goto loc_822CC7B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822cc954
	goto loc_822CC954;
loc_822CC7B0:
	// bl 0x822cd670
	ctx.lr = 0x822CC7B4;
	sub_822CD670(ctx, base);
	// bl 0x822cd6f0
	ctx.lr = 0x822CC7B8;
	sub_822CD6F0(ctx, base);
	// bl 0x822cd540
	ctx.lr = 0x822CC7BC;
	sub_822CD540(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x822c80d0
	ctx.lr = 0x822CC7C4;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822cc7d4
	if (ctx.cr0.eq) goto loc_822CC7D4;
	// bl 0x822cf850
	ctx.lr = 0x822CC7D0;
	sub_822CF850(ctx, base);
	// b 0x822cc7d8
	goto loc_822CC7D8;
loc_822CC7D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822CC7D8:
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x822c80d0
	ctx.lr = 0x822CC7E4;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822cc7f8
	if (ctx.cr0.eq) goto loc_822CC7F8;
	// bl 0x822ce0d0
	ctx.lr = 0x822CC7F0;
	sub_822CE0D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x822cc7fc
	goto loc_822CC7FC;
loc_822CC7F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822CC7FC:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x822c80d0
	ctx.lr = 0x822CC808;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822cc81c
	if (ctx.cr0.eq) goto loc_822CC81C;
	// bl 0x822d1fa0
	ctx.lr = 0x822CC814;
	sub_822D1FA0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x822cc820
	goto loc_822CC820;
loc_822CC81C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822CC820:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// li r3,4636
	ctx.r3.s64 = 4636;
	// bl 0x822c80d0
	ctx.lr = 0x822CC82C;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822cc840
	if (ctx.cr0.eq) goto loc_822CC840;
	// bl 0x822d4088
	ctx.lr = 0x822CC838;
	sub_822D4088(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x822cc844
	goto loc_822CC844;
loc_822CC840:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822CC844:
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822c80d0
	ctx.lr = 0x822CC850;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822cc864
	if (ctx.cr0.eq) goto loc_822CC864;
	// bl 0x822d0500
	ctx.lr = 0x822CC85C;
	sub_822D0500(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x822cc868
	goto loc_822CC868;
loc_822CC864:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822CC868:
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// li r3,276
	ctx.r3.s64 = 276;
	// bl 0x822c80d0
	ctx.lr = 0x822CC874;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822cc884
	if (ctx.cr0.eq) goto loc_822CC884;
	// bl 0x822cfc80
	ctx.lr = 0x822CC880;
	sub_822CFC80(ctx, base);
	// b 0x822cc888
	goto loc_822CC888;
loc_822CC884:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822CC888:
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x822d2db8
	ctx.lr = 0x822CC89C;
	sub_822D2DB8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x822d13a8
	ctx.lr = 0x822CC8A4;
	sub_822D13A8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x822d0708
	ctx.lr = 0x822CC8AC;
	sub_822D0708(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r7,12(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lfs f1,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x822d03c0
	ctx.lr = 0x822CC8C8;
	sub_822D03C0(ctx, base);
	// bl 0x822cd6f0
	ctx.lr = 0x822CC8CC;
	sub_822CD6F0(ctx, base);
	// bl 0x822cd798
	ctx.lr = 0x822CC8D0;
	sub_822CD798(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822ce7a8
	ctx.lr = 0x822CC8DC;
	sub_822CE7A8(ctx, base);
	// bl 0x822cd6f0
	ctx.lr = 0x822CC8E0;
	sub_822CD6F0(ctx, base);
	// bl 0x822cd7b8
	ctx.lr = 0x822CC8E4;
	sub_822CD7B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822ce7c8
	ctx.lr = 0x822CC8F0;
	sub_822CE7C8(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822ce808
	ctx.lr = 0x822CC8FC;
	sub_822CE808(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822ce7e8
	ctx.lr = 0x822CC908;
	sub_822CE7E8(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822ce828
	ctx.lr = 0x822CC914;
	sub_822CE828(ctx, base);
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822ce848
	ctx.lr = 0x822CC920;
	sub_822CE848(ctx, base);
	// bl 0x822cd6f0
	ctx.lr = 0x822CC924;
	sub_822CD6F0(ctx, base);
	// bl 0x822cd7c8
	ctx.lr = 0x822CC928;
	sub_822CD7C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822ce868
	ctx.lr = 0x822CC934;
	sub_822CE868(ctx, base);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822ce8a8
	ctx.lr = 0x822CC940;
	sub_822CE8A8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822cfb98
	ctx.lr = 0x822CC948;
	sub_822CFB98(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,568(r31)
	REX_STORE_U8(r31.u32 + 568, ctx.r11.u8);
loc_822CC954:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D2B58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// bl 0x822d18b8
	ctx.lr = 0x822D2B78;
	sub_822D18B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d2bb4
	if (ctx.cr0.eq) goto loc_822D2BB4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d1c50
	ctx.lr = 0x822D2B88;
	sub_822D1C50(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822d2bb4
	if (ctx.cr6.eq) goto loc_822D2BB4;
	// lfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x822d2bb4
	if (ctx.cr6.lt) goto loc_822D2BB4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// b 0x822d2bb8
	goto loc_822D2BB8;
loc_822D2BB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D2BB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D4C58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822d4ac8
	ctx.lr = 0x822D4C68;
	sub_822D4AC8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfd f0,26448(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 26448);
	// fmul f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 * ctx.f0.f64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savegprlr_24) {
	REX_FUNC_PROLOGUE();
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r24,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, r24.u64);
	// std r25,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, r25.u64);
	// std r26,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, r26.u64);
	// std r27,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, r27.u64);
	// std r28,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(__restgprlr_29) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// ld r29,-32(r1)
	r29.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savefpr_28) {
	REX_FUNC_PROLOGUE();
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f28,-32(r12)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	REX_STORE_U64(ctx.r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	REX_STORE_U64(ctx.r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	REX_STORE_U64(ctx.r12.u32 + -8, f31.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(__restfpr_31) {
	REX_FUNC_PROLOGUE();
	PPCRegister f31{};
	// lfd f31,-8(r12)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D5740) {
	REX_FUNC_PROLOGUE();
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e74
	ctx.lr = 0x822D5748;
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// bl 0x822d6178
	ctx.lr = 0x822D5758;
	sub_822D6178(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r24,-32161
	r24.s64 = -2107703296;
	// lis r25,-32161
	r25.s64 = -2107703296;
	// lwz r30,-11316(r24)
	r30.u64 = REX_LOAD_U32(r24.u32 + -11316);
	// lwz r28,-11312(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + -11312);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// blt cr6,0x822d5804
	if (ctx.cr6.lt) goto loc_822D5804;
	// subf r26,r28,r30
	r26.u64 = r30.u64 - r28.u64;
	// addi r27,r26,4
	r27.s64 = r26.s64 + 4;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(r27.u32, 4, ctx.xer);
	// blt cr6,0x822d5804
	if (ctx.cr6.lt) goto loc_822D5804;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822db9d0
	ctx.lr = 0x822D578C;
	sub_822DB9D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r27.u32, ctx.xer);
	// bge cr6,0x822d57f0
	if (!ctx.cr6.lt) goto loc_822D57F0;
	// cmplwi cr6,r3,2048
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2048, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// blt cr6,0x822d57a8
	if (ctx.cr6.lt) goto loc_822D57A8;
	// li r11,2048
	ctx.r11.s64 = 2048;
loc_822D57A8:
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r29.u32, ctx.xer);
	// blt cr6,0x822d57c4
	if (ctx.cr6.lt) goto loc_822D57C4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822db8e0
	ctx.lr = 0x822D57BC;
	sub_822DB8E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822d57e0
	if (!ctx.cr0.eq) goto loc_822D57E0;
loc_822D57C4:
	// addi r4,r29,16
	ctx.r4.s64 = r29.s64 + 16;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r29.u32, ctx.xer);
	// blt cr6,0x822d5804
	if (ctx.cr6.lt) goto loc_822D5804;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822db8e0
	ctx.lr = 0x822D57D8;
	sub_822DB8E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d5804
	if (ctx.cr0.eq) goto loc_822D5804;
loc_822D57E0:
	// srawi r11,r26,2
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x3) != 0);
	ctx.r11.s64 = r26.s32 >> 2;
	// stw r3,-11312(r25)
	REX_STORE_U32(r25.u32 + -11312, ctx.r3.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r3
	r30.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_822D57F0:
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// stw r23,0(r30)
	REX_STORE_U32(r30.u32 + 0, r23.u32);
	// stw r23,80(r31)
	REX_STORE_U32(r31.u32 + 80, r23.u32);
	// stw r11,-11316(r24)
	REX_STORE_U32(r24.u32 + -11316, ctx.r11.u32);
	// b 0x822d580c
	goto loc_822D580C;
loc_822D5804:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
loc_822D580C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = r31.s64 + 176;
	// bl 0x822d5824
	ctx.lr = 0x822D5818;
	ctx.r23 = r23;
	ctx.r24 = r24;
	ctx.r25 = r25;
	ctx.r26 = r26;
	ctx.r27 = r27;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_822D5824(ctx, base);
	r23 = ctx.r23;
	r24 = ctx.r24;
	r25 = ctx.r25;
	r26 = ctx.r26;
	r27 = ctx.r27;
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(__savevmx_73) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v73{};
	PPCVRegister v74{};
	PPCVRegister v75{};
	PPCVRegister v76{};
	PPCVRegister v77{};
	PPCVRegister v78{};
	PPCVRegister v79{};
	PPCVRegister v80{};
	PPCVRegister v81{};
	PPCVRegister v82{};
	PPCVRegister v83{};
	PPCVRegister v84{};
	PPCVRegister v85{};
	PPCVRegister v86{};
	PPCVRegister v87{};
	PPCVRegister v88{};
	PPCVRegister v89{};
	PPCVRegister v90{};
	PPCVRegister v91{};
	PPCVRegister v92{};
	PPCVRegister v93{};
	PPCVRegister v94{};
	PPCVRegister v95{};
	PPCVRegister v96{};
	PPCVRegister v97{};
	PPCVRegister v98{};
	PPCVRegister v99{};
	PPCVRegister v100{};
	PPCVRegister v101{};
	PPCVRegister v102{};
	PPCVRegister v103{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
	// li r11,-880
	ctx.r11.s64 = -880;
	// stvx128 v73,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v73.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-864
	ctx.r11.s64 = -864;
	// stvx128 v74,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v74.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-848
	ctx.r11.s64 = -848;
	// stvx128 v75,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v75.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-832
	ctx.r11.s64 = -832;
	// stvx128 v76,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v76.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-816
	ctx.r11.s64 = -816;
	// stvx128 v77,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v77.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-800
	ctx.r11.s64 = -800;
	// stvx128 v78,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v78.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-784
	ctx.r11.s64 = -784;
	// stvx128 v79,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v79.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-768
	ctx.r11.s64 = -768;
	// stvx128 v80,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v80.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-752
	ctx.r11.s64 = -752;
	// stvx128 v81,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v81.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-736
	ctx.r11.s64 = -736;
	// stvx128 v82,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v82.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-720
	ctx.r11.s64 = -720;
	// stvx128 v83,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v83.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-704
	ctx.r11.s64 = -704;
	// stvx128 v84,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v84.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-688
	ctx.r11.s64 = -688;
	// stvx128 v85,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v85.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-672
	ctx.r11.s64 = -672;
	// stvx128 v86,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v86.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-656
	ctx.r11.s64 = -656;
	// stvx128 v87,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v87.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-640
	ctx.r11.s64 = -640;
	// stvx128 v88,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v88.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-624
	ctx.r11.s64 = -624;
	// stvx128 v89,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v89.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-608
	ctx.r11.s64 = -608;
	// stvx128 v90,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v90.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-592
	ctx.r11.s64 = -592;
	// stvx128 v91,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v91.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-576
	ctx.r11.s64 = -576;
	// stvx128 v92,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v92.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// stvx128 v93,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v93.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// stvx128 v94,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v94.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// stvx128 v95,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v95.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// stvx128 v96,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v96.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// stvx128 v97,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v97.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v98.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v99.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v100.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v101.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v102.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v103.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v104.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v105.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v106.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v107.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v108.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v109.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v110.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v111.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v112.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v113.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v114.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v115.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v116.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v117.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v118.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v119.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v120.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v121.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v122.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v123.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v124.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v125.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__restvmx_119) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D9258) {
	REX_FUNC_PROLOGUE();
	// li r5,2624
	ctx.r5.s64 = 2624;
	// b 0x822d6840
	sub_822D6840(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D9260) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822df828
	ctx.lr = 0x822D9284;
	sub_822DF828(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822d92c4
	if (ctx.cr6.eq) goto loc_822D92C4;
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mulli r10,r9,20
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(20));
loc_822D9298:
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x822d92b8
	if (!ctx.cr6.gt) goto loc_822D92B8;
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x822d92c8
	if (!ctx.cr6.gt) goto loc_822D92C8;
loc_822D92B8:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,-20
	ctx.r10.s64 = ctx.r10.s64 + -20;
	// bne 0x822d9298
	if (!ctx.cr0.eq) goto loc_822D9298;
loc_822D92C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822D92C8:
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DB8E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x822DB8E8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822db908
	if (!ctx.cr6.eq) goto loc_822DB908;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822d9828
	ctx.lr = 0x822DB904;
	sub_822D9828(ctx, base);
	// b 0x822db994
	goto loc_822DB994;
loc_822DB908:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x822db91c
	if (!ctx.cr6.eq) goto loc_822DB91C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822d98f0
	ctx.lr = 0x822DB918;
	sub_822D98F0(ctx, base);
	// b 0x822db990
	goto loc_822DB990;
loc_822DB91C:
	// li r29,-4096
	r29.s64 = -4096;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bgt cr6,0x822db978
	if (ctx.cr6.gt) goto loc_822DB978;
	// lis r27,-32162
	r27.s64 = -2107768832;
loc_822DB92C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x822db938
	if (!ctx.cr6.eq) goto loc_822DB938;
	// li r31,1
	r31.s64 = 1;
loc_822DB938:
	// bl 0x8220fda0
	ctx.lr = 0x822DB93C;
	sub_8220FDA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// bl 0x8220efe8
	ctx.lr = 0x822DB94C;
	sub_8220EFE8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x822db9c8
	if (!ctx.cr0.eq) goto loc_822DB9C8;
	// lwz r11,-30528(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -30528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822db9b4
	if (ctx.cr6.eq) goto loc_822DB9B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822dbec0
	ctx.lr = 0x822DB968;
	sub_822DBEC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822db99c
	if (ctx.cr0.eq) goto loc_822DB99C;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// ble cr6,0x822db92c
	if (!ctx.cr6.gt) goto loc_822DB92C;
loc_822DB978:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822dbec0
	ctx.lr = 0x822DB980;
	sub_822DBEC0(ctx, base);
	// bl 0x822db6c0
	ctx.lr = 0x822DB984;
	sub_822DB6C0(ctx, base);
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_822DB990:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822DB994:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_822DB99C:
	// bl 0x822db6c0
	ctx.lr = 0x822DB9A0;
	sub_822DB6C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822098c8
	ctx.lr = 0x822DB9A8;
	sub_822098C8(ctx, base);
	// bl 0x822db650
	ctx.lr = 0x822DB9AC;
	sub_822DB650(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// b 0x822db990
	goto loc_822DB990;
loc_822DB9B4:
	// bl 0x822db6c0
	ctx.lr = 0x822DB9B8;
	sub_822DB6C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822098c8
	ctx.lr = 0x822DB9C0;
	sub_822098C8(ctx, base);
	// bl 0x822db650
	ctx.lr = 0x822DB9C4;
	sub_822DB650(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_822DB9C8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x822db994
	goto loc_822DB994;
}

DEFINE_REX_FUNC(sub_822E14E4) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e5ce0
	ctx.lr = 0x822E1504;
	sub_822E5CE0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E1FDC) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822dbb00
	ctx.lr = 0x822E1FF0;
	sub_822DBB00(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E41E0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822e420c
	if (ctx.cr6.eq) goto loc_822E420C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822e420c
	if (ctx.cr6.eq) goto loc_822E420C;
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822e4214
	if (!ctx.cr0.eq) goto loc_822E4214;
	// beq cr6,0x822e420c
	if (ctx.cr6.eq) goto loc_822E420C;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
loc_822E420C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822E4214:
	// beq cr6,0x822e4220
	if (ctx.cr6.eq) goto loc_822E4220;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// sth r11,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
loc_822E4220:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E668C) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,156(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// b 0x822e66c4
	goto loc_822E66C4;
loc_822E66C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dcd40
	ctx.lr = 0x822E66CC;
	sub_822DCD40(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E84B0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822E8C70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822E8C78;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822E8C94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822e8cc0
	if (ctx.cr6.lt) goto loc_822E8CC0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8221a820
	ctx.lr = 0x822E8CA8;
	sub_8221A820(ctx, base);
	// stw r29,56(r31)
	REX_STORE_U32(r31.u32 + 56, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e8668
	ctx.lr = 0x822E8CB4;
	sub_822E8668(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822e8cd4
	if (!ctx.cr6.lt) goto loc_822E8CD4;
loc_822E8CC0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822E8CD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822E8CD4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822EA3E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822EA3E8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r11,-29640
	r29.s64 = ctx.r11.s64 + -29640;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822270c0
	ctx.lr = 0x822EA400;
	sub_822270C0(ctx, base);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// stw r3,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r30,r11,14
	r30.u64 = ctx.r11.u64 | 14;
	// and r3,r8,r30
	ctx.r3.u64 = ctx.r8.u64 & r30.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822ea458
	if (ctx.cr6.lt) goto loc_822EA458;
	// addi r3,r29,240
	ctx.r3.s64 = r29.s64 + 240;
	// bl 0x82226ed8
	ctx.lr = 0x822EA428;
	sub_82226ED8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r3,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r3.u32);
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r9,r30
	ctx.r3.u64 = ctx.r9.u64 & r30.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822ea458
	if (ctx.cr6.lt) goto loc_822EA458;
	// addi r3,r29,720
	ctx.r3.s64 = r29.s64 + 720;
	// bl 0x82226ed8
	ctx.lr = 0x822EA448;
	sub_82226ED8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r3,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r3.u32);
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r9,r30
	ctx.r3.u64 = ctx.r9.u64 & r30.u64;
loc_822EA458:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822ECC08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822eeca0
	ctx.lr = 0x822ECC20;
	sub_822EECA0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// addi r10,r11,-27880
	ctx.r10.s64 = ctx.r11.s64 + -27880;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x822f48c0
	ctx.lr = 0x822ECC34;
	sub_822F48C0(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// bl 0x822f48c0
	ctx.lr = 0x822ECC3C;
	sub_822F48C0(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = r31.s64 + 212;
	// bl 0x822f48c0
	ctx.lr = 0x822ECC44;
	sub_822F48C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,288(r31)
	REX_STORE_U64(r31.u32 + 288, ctx.r11.u64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r11,304(r31)
	REX_STORE_U64(r31.u32 + 304, ctx.r11.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,296(r31)
	REX_STORE_U64(r31.u32 + 296, ctx.r11.u64);
	// stw r11,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r11.u32);
	// stw r11,316(r31)
	REX_STORE_U32(r31.u32 + 316, ctx.r11.u32);
	// lfs f0,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,320(r31)
	REX_STORE_U32(r31.u32 + 320, ctx.r11.u32);
	// lfs f13,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r11.u32);
	// stfs f0,336(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 336, temp.u32);
	// stfs f13,340(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 340, temp.u32);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// stw r11,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r11.u32);
	// stw r11,332(r31)
	REX_STORE_U32(r31.u32 + 332, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EEEF8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r11,-27120
	ctx.r10.s64 = ctx.r11.s64 + -27120;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x822eece8
	sub_822EECE8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822EF2B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ef310
	if (ctx.cr6.eq) goto loc_822EF310;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ef300
	if (ctx.cr6.eq) goto loc_822EF300;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822EF2FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,132(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_822EF300:
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 608);
	// bl 0x822f94e8
	ctx.lr = 0x822EF30C;
	sub_822F94E8(ctx, base);
	// lwz r5,132(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_822EF310:
	// lwz r3,572(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 572);
	// bl 0x822f9a10
	ctx.lr = 0x822EF318;
	sub_822F9A10(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,568(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 568);
	// bl 0x822f9a10
	ctx.lr = 0x822EF324;
	sub_822F9A10(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ef34c
	if (ctx.cr6.eq) goto loc_822EF34C;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x822f94e8
	ctx.lr = 0x822EF348;
	sub_822F94E8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_822EF34C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ef394
	if (ctx.cr6.eq) goto loc_822EF394;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822ef380
	if (ctx.cr6.eq) goto loc_822EF380;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EF37C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_822EF380:
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822f94e8
	ctx.lr = 0x822EF390;
	sub_822F94E8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_822EF394:
	// lwz r10,576(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 576);
	// addi r5,r11,576
	ctx.r5.s64 = ctx.r11.s64 + 576;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ef3b4
	if (ctx.cr6.eq) goto loc_822EF3B4;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x822f94e8
	ctx.lr = 0x822EF3B0;
	sub_822F94E8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_822EF3B4:
	// lwz r10,580(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 580);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ef3f8
	if (ctx.cr6.eq) goto loc_822EF3F8;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ef3e4
	if (ctx.cr6.eq) goto loc_822EF3E4;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x822f94e8
	ctx.lr = 0x822EF3E0;
	sub_822F94E8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_822EF3E4:
	// addi r5,r11,580
	ctx.r5.s64 = ctx.r11.s64 + 580;
	// lwz r3,608(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822f94e8
	ctx.lr = 0x822EF3F4;
	sub_822F94E8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_822EF3F8:
	// lwz r10,584(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 584);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ef4ac
	if (ctx.cr6.eq) goto loc_822EF4AC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ef428
	if (ctx.cr6.eq) goto loc_822EF428;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x822f94e8
	ctx.lr = 0x822EF424;
	sub_822F94E8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_822EF428:
	// lwz r10,584(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 584);
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ef44c
	if (ctx.cr6.eq) goto loc_822EF44C;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x822f94e8
	ctx.lr = 0x822EF448;
	sub_822F94E8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_822EF44C:
	// lwz r10,584(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 584);
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ef470
	if (ctx.cr6.eq) goto loc_822EF470;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x822f94e8
	ctx.lr = 0x822EF46C;
	sub_822F94E8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_822EF470:
	// lwz r10,584(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 584);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x822ef498
	if (ctx.cr6.eq) goto loc_822EF498;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,608(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822f94e8
	ctx.lr = 0x822EF494;
	sub_822F94E8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_822EF498:
	// addi r5,r11,584
	ctx.r5.s64 = ctx.r11.s64 + 584;
	// lwz r3,608(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822f94e8
	ctx.lr = 0x822EF4A8;
	sub_822F94E8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_822EF4AC:
	// lwz r10,612(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 612);
	// addi r5,r11,612
	ctx.r5.s64 = ctx.r11.s64 + 612;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ef4d0
	if (ctx.cr6.eq) goto loc_822EF4D0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x822f94e8
	ctx.lr = 0x822EF4C8;
	sub_822F94E8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_822EF4D0:
	// lwz r10,616(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 616);
	// addi r5,r11,616
	ctx.r5.s64 = ctx.r11.s64 + 616;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ef4f0
	if (ctx.cr6.eq) goto loc_822EF4F0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x822f94e8
	ctx.lr = 0x822EF4EC;
	sub_822F94E8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_822EF4F0:
	// lwz r4,636(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 636);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822ef50c
	if (ctx.cr6.eq) goto loc_822EF50C;
	// lwz r3,608(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x822f9080
	ctx.lr = 0x822EF504;
	sub_822F9080(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_822EF50C:
	// lwz r4,640(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 640);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822ef528
	if (ctx.cr6.eq) goto loc_822EF528;
	// lwz r3,608(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x822f9080
	ctx.lr = 0x822EF520;
	sub_822F9080(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_822EF528:
	// lwz r4,644(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 644);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822ef544
	if (ctx.cr6.eq) goto loc_822EF544;
	// lwz r3,608(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x822f9080
	ctx.lr = 0x822EF53C;
	sub_822F9080(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_822EF544:
	// lwz r4,648(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 648);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822ef560
	if (ctx.cr6.eq) goto loc_822EF560;
	// lwz r3,608(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x822f9080
	ctx.lr = 0x822EF558;
	sub_822F9080(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_822EF560:
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// lwz r3,608(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822f94e8
	ctx.lr = 0x822EF570;
	sub_822F94E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FF8D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x822FF8D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r27,0
	r27.s64 = 0;
	// lhz r11,34(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 34);
	// rotlwi r3,r11,3
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// bl 0x823143c0
	ctx.lr = 0x822FF8F8;
	sub_823143C0(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ff914
	if (!ctx.cr6.eq) goto loc_822FF914;
loc_822FF904:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_822FF914:
	// lhz r11,34(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ff9e8
	if (ctx.cr6.eq) goto loc_822FF9E8;
	// li r29,0
	r29.s64 = 0;
loc_822FF924:
	// mulli r11,r29,1776
	ctx.r11.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(1776));
	// li r3,28
	ctx.r3.s64 = 28;
	// add r31,r11,r28
	r31.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x823143c0
	ctx.lr = 0x822FF934;
	sub_823143C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,424(r31)
	REX_STORE_U32(r31.u32 + 424, ctx.r3.u32);
	// beq cr6,0x822ff904
	if (ctx.cr6.eq) goto loc_822FF904;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822FF950:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822ff950
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822FF950;
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 228);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r11,7
	ctx.r3.s64 = ctx.r11.s64 + 7;
	// bl 0x823143c0
	ctx.lr = 0x822FF968;
	sub_823143C0(ctx, base);
	// lwz r10,424(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 424);
	// stw r3,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// lwz r9,424(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 424);
	// lwz r3,4(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ff904
	if (ctx.cr6.eq) goto loc_822FF904;
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 228);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r11,7
	ctx.r5.s64 = ctx.r11.s64 + 7;
	// bl 0x822d5870
	ctx.lr = 0x822FF994;
	sub_822D5870(ctx, base);
	// lwz r8,424(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 424);
	// addi r10,r29,1
	ctx.r10.s64 = r29.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// stw r7,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// lwz r6,424(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 424);
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 228);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r4.u32);
	// lwz r3,424(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 424);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lhz r10,34(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 34);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822ff924
	if (ctx.cr6.lt) goto loc_822FF924;
loc_822FF9E8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82305D08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r30,212(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 212);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x82305990
	ctx.lr = 0x82305D40;
	sub_82305990(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82305d50
	goto loc_82305D50;
loc_82305D50:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82307160) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82307168;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lwz r30,28(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stb r31,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82307194;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823072d8
	if (ctx.cr6.lt) goto loc_823072D8;
	// li r5,76
	ctx.r5.s64 = 76;
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r29,8(r30)
	REX_STORE_U64(r30.u32 + 8, r29.u64);
	// std r29,32(r30)
	REX_STORE_U64(r30.u32 + 32, r29.u64);
	// std r29,40(r30)
	REX_STORE_U64(r30.u32 + 40, r29.u64);
	// bl 0x822d5870
	ctx.lr = 0x823071B8;
	sub_822D5870(ctx, base);
	// li r5,92
	ctx.r5.s64 = 92;
	// lwz r3,52(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x823071C8;
	sub_822D5870(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r31,56(r30)
	REX_STORE_U32(r30.u32 + 56, r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r31,60(r30)
	REX_STORE_U32(r30.u32 + 60, r31.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// sth r31,64(r30)
	REX_STORE_U16(r30.u32 + 64, r31.u16);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r30)
	REX_STORE_U32(r30.u32 + 80, ctx.r11.u32);
	// stw r31,84(r30)
	REX_STORE_U32(r30.u32 + 84, r31.u32);
	// stw r31,88(r30)
	REX_STORE_U32(r30.u32 + 88, r31.u32);
	// stw r31,92(r30)
	REX_STORE_U32(r30.u32 + 92, r31.u32);
	// stw r31,96(r30)
	REX_STORE_U32(r30.u32 + 96, r31.u32);
	// std r31,104(r30)
	REX_STORE_U64(r30.u32 + 104, r31.u64);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 148);
	// bl 0x822f9928
	ctx.lr = 0x82307208;
	sub_822F9928(ctx, base);
	// lis r10,-32688
	ctx.r10.s64 = -2142240768;
	// ori r29,r10,22
	r29.u64 = ctx.r10.u64 | 22;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// beq cr6,0x823072bc
	if (ctx.cr6.eq) goto loc_823072BC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823072d8
	if (ctx.cr6.lt) goto loc_823072D8;
	// li r28,1
	r28.s64 = 1;
loc_82307224:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823072d8
	if (ctx.cr6.lt) goto loc_823072D8;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823072a0
	if (ctx.cr6.eq) goto loc_823072A0;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8230724c
	if (!ctx.cr6.eq) goto loc_8230724C;
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// b 0x82307258
	goto loc_82307258;
loc_8230724C:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8230725c
	if (!ctx.cr6.eq) goto loc_8230725C;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
loc_82307258:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8230725C:
	// stw r31,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r31.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r31,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, r31.u8);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r31.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, r31.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,36(r8)
	REX_STORE_U32(ctx.r8.u32 + 36, r31.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,40(r7)
	REX_STORE_U32(ctx.r7.u32 + 40, r31.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,16(r6)
	REX_STORE_U32(ctx.r6.u32 + 16, r31.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,20(r5)
	REX_STORE_U32(ctx.r5.u32 + 20, r31.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, r31.u32);
loc_823072A0:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 148);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x822f9990
	ctx.lr = 0x823072B4;
	sub_822F9990(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// bne cr6,0x82307224
	if (!ctx.cr6.eq) goto loc_82307224;
loc_823072BC:
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 148);
	// bl 0x822f99f8
	ctx.lr = 0x823072C8;
	sub_822F99F8(ctx, base);
	// subf r11,r29,r3
	ctx.r11.u64 = ctx.r3.u64 - r29.u64;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 & ctx.r3.u64;
loc_823072D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8230E950) {
	REX_FUNC_PROLOGUE();
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e64
	ctx.lr = 0x8230E958;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,28(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r23,0
	r23.s64 = 0;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r23,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r30,r23
	r30.u64 = r23.u64;
	// stb r23,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r23.u8);
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// sth r23,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, r23.u16);
	// stw r23,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230E99C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230eda4
	if (ctx.cr6.lt) goto loc_8230EDA4;
	// lwz r31,52(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 52);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r22,48(r26)
	r22.u64 = REX_LOAD_U32(r26.u32 + 48);
	// li r19,1
	r19.s64 = 1;
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// lbz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 6);
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8230ea18
	if (!ctx.cr6.eq) goto loc_8230EA18;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r21,1
	ctx.cr6.compare<uint32_t>(r21.u32, 1, ctx.xer);
	// stw r23,8(r31)
	REX_STORE_U32(r31.u32 + 8, r23.u32);
	// stw r23,12(r31)
	REX_STORE_U32(r31.u32 + 12, r23.u32);
	// stw r19,24(r31)
	REX_STORE_U32(r31.u32 + 24, r19.u32);
	// stw r19,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r19.u32);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// blt cr6,0x8230ed9c
	if (ctx.cr6.lt) goto loc_8230ED9C;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r30,r19
	r30.u64 = r19.u64;
	// bl 0x82307660
	ctx.lr = 0x8230EA04;
	sub_82307660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230eda4
	if (ctx.cr6.lt) goto loc_8230EDA4;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// b 0x8230ea74
	goto loc_8230EA74;
loc_8230EA18:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8230ea74
	if (ctx.cr6.lt) goto loc_8230EA74;
	// li r30,8
	r30.s64 = 8;
	// cmplwi cr6,r21,8
	ctx.cr6.compare<uint32_t>(r21.u32, 8, ctx.xer);
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// blt cr6,0x8230ed9c
	if (ctx.cr6.lt) goto loc_8230ED9C;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823078f0
	ctx.lr = 0x8230EA48;
	sub_823078F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230eda4
	if (ctx.cr6.lt) goto loc_8230EDA4;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823078f0
	ctx.lr = 0x8230EA68;
	sub_823078F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230eda4
	if (ctx.cr6.lt) goto loc_8230EDA4;
	// stw r23,24(r31)
	REX_STORE_U32(r31.u32 + 24, r23.u32);
loc_8230EA74:
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// lbz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + 4);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8230c558
	ctx.lr = 0x8230EA8C;
	sub_8230C558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230eda4
	if (ctx.cr6.lt) goto loc_8230EDA4;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r20,2
	r20.s64 = 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// beq cr6,0x8230ebbc
	if (ctx.cr6.eq) goto loc_8230EBBC;
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r27,r11
	r27.s64 = ctx.r11.s16;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(r27.s32, -1, ctx.xer);
	// beq cr6,0x8230ebbc
	if (ctx.cr6.eq) goto loc_8230EBBC;
	// lhz r25,84(r1)
	r25.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8230ebbc
	if (ctx.cr6.eq) goto loc_8230EBBC;
	// mr r28,r23
	r28.u64 = r23.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x8230eb78
	if (!ctx.cr6.gt) goto loc_8230EB78;
loc_8230EAD0:
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// lbz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// sth r23,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, r23.u16);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8230c608
	ctx.lr = 0x8230EAE8;
	sub_8230C608(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230eda4
	if (ctx.cr6.lt) goto loc_8230EDA4;
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x8230eb2c
	if (!ctx.cr6.eq) goto loc_8230EB2C;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// stw r20,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r20.u32);
	// cmplw cr6,r30,r21
	ctx.cr6.compare<uint32_t>(r30.u32, r21.u32, ctx.xer);
	// bgt cr6,0x8230ed9c
	if (ctx.cr6.gt) goto loc_8230ED9C;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82307770
	ctx.lr = 0x8230EB24;
	sub_82307770(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230eda4
	if (ctx.cr6.lt) goto loc_8230EDA4;
loc_8230EB2C:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lhz r29,82(r1)
	r29.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8230EB48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230eda4
	if (ctx.cr6.lt) goto loc_8230EDA4;
	// clrlwi r11,r28,16
	ctx.r11.u64 = r28.u32 & 0xFFFF;
	// clrldi r10,r29,32
	ctx.r10.u64 = r29.u64 & 0xFFFFFFFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// ld r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U64(r26.u32 + 8);
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// clrlwi r28,r9,16
	r28.u64 = ctx.r9.u32 & 0xFFFF;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(r28.s32, r27.s32, ctx.xer);
	// std r8,8(r26)
	REX_STORE_U64(r26.u32 + 8, ctx.r8.u64);
	// blt cr6,0x8230ead0
	if (ctx.cr6.lt) goto loc_8230EAD0;
loc_8230EB78:
	// add r30,r25,r30
	r30.u64 = r25.u64 + r30.u64;
	// stw r25,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// cmplw cr6,r30,r21
	ctx.cr6.compare<uint32_t>(r30.u32, r21.u32, ctx.xer);
	// bgt cr6,0x8230ed9c
	if (ctx.cr6.gt) goto loc_8230ED9C;
	// addi r29,r31,44
	r29.s64 = r31.s64 + 44;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82307e08
	ctx.lr = 0x8230EBA8;
	sub_82307E08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230eda4
	if (ctx.cr6.lt) goto loc_8230EDA4;
	// stw r29,64(r31)
	REX_STORE_U32(r31.u32 + 64, r29.u32);
	// stw r25,68(r31)
	REX_STORE_U32(r31.u32 + 68, r25.u32);
	// stw r19,60(r31)
	REX_STORE_U32(r31.u32 + 60, r19.u32);
loc_8230EBBC:
	// lbz r9,6(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 6);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + r30.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r11,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r11.u16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8230ec20
	if (!ctx.cr6.gt) goto loc_8230EC20;
	// lwz r9,0(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 0);
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r29,r30,r8
	r29.u64 = ctx.r8.u64 - r30.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r7,20(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8230EC04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230eda4
	if (ctx.cr6.lt) goto loc_8230EDA4;
	// ld r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U64(r26.u32 + 8);
	// clrldi r11,r29,32
	ctx.r11.u64 = r29.u64 & 0xFFFFFFFF;
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r26)
	REX_STORE_U64(r26.u32 + 8, ctx.r11.u64);
loc_8230EC20:
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230ed04
	if (ctx.cr6.eq) goto loc_8230ED04;
	// lbz r11,26(r22)
	ctx.r11.u64 = REX_LOAD_U8(r22.u32 + 26);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8230eccc
	if (ctx.cr6.eq) goto loc_8230ECCC;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8230ec90
	if (ctx.cr6.eq) goto loc_8230EC90;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8230ec50
	if (ctx.cr6.eq) goto loc_8230EC50;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// b 0x8230ed44
	goto loc_8230ED44;
loc_8230EC50:
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// stw r23,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r21.u32, ctx.xer);
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bgt cr6,0x8230ed9c
	if (ctx.cr6.gt) goto loc_8230ED9C;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823078f0
	ctx.lr = 0x8230EC80;
	sub_823078F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230eda4
	if (ctx.cr6.lt) goto loc_8230EDA4;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x8230ed44
	goto loc_8230ED44;
loc_8230EC90:
	// addi r11,r30,2
	ctx.r11.s64 = r30.s64 + 2;
	// sth r23,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, r23.u16);
	// stw r20,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r20.u32);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r21.u32, ctx.xer);
	// bgt cr6,0x8230ed9c
	if (ctx.cr6.gt) goto loc_8230ED9C;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82307770
	ctx.lr = 0x8230ECBC;
	sub_82307770(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230eda4
	if (ctx.cr6.lt) goto loc_8230EDA4;
	// lhz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// b 0x8230ed44
	goto loc_8230ED44;
loc_8230ECCC:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// stw r19,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r19.u32);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r21.u32, ctx.xer);
	// bgt cr6,0x8230ed9c
	if (ctx.cr6.gt) goto loc_8230ED9C;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82307660
	ctx.lr = 0x8230ECF4;
	sub_82307660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230eda4
	if (ctx.cr6.lt) goto loc_8230EDA4;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// b 0x8230ed44
	goto loc_8230ED44;
loc_8230ED04:
	// lwz r11,32(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 32);
	// lwz r10,48(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 48);
	// lwz r9,12(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230ed2c
	if (ctx.cr6.eq) goto loc_8230ED2C;
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lhz r7,2(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 2);
	// subf r6,r9,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r9.u64;
	// subf r11,r7,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r7.u64;
	// b 0x8230ed44
	goto loc_8230ED44;
loc_8230ED2C:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lhz r8,2(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 2);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// subf r6,r10,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r10.u64;
	// subf r5,r9,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r9.u64;
	// subf r11,r8,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r8.u64;
loc_8230ED44:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lhz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 2);
	// sth r11,28(r31)
	REX_STORE_U16(r31.u32 + 28, ctx.r11.u16);
	// lbz r9,27(r22)
	ctx.r9.u64 = REX_LOAD_U8(r22.u32 + 27);
	// sth r11,30(r31)
	REX_STORE_U16(r31.u32 + 30, ctx.r11.u16);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r11,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r11.u16);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,12(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,12(r22)
	REX_STORE_U32(r22.u32 + 12, ctx.r11.u32);
	// lwz r9,4(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8230ed9c
	if (ctx.cr6.gt) goto loc_8230ED9C;
	// bne cr6,0x8230eda4
	if (!ctx.cr6.eq) goto loc_8230EDA4;
	// lwz r11,60(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 60);
	// lwz r10,56(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 56);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8230eda4
	if (!ctx.cr6.lt) goto loc_8230EDA4;
loc_8230ED9C:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,24
	ctx.r3.u64 = ctx.r3.u64 | 24;
loc_8230EDA4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_82320B68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e70
	ctx.lr = 0x82320B70;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// li r25,0
	r25.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r26,r25
	r26.u64 = r25.u64;
	// mr r23,r25
	r23.u64 = r25.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// mr r24,r25
	r24.u64 = r25.u64;
	// beq cr6,0x82320d7c
	if (ctx.cr6.eq) goto loc_82320D7C;
	// li r3,4100
	ctx.r3.s64 = 4100;
	// bl 0x823143c0
	ctx.lr = 0x82320BA4;
	sub_823143C0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82320bbc
	if (!ctx.cr6.eq) goto loc_82320BBC;
loc_82320BB0:
	// lis r25,-32761
	r25.s64 = -2147024896;
	// ori r25,r25,14
	r25.u64 = r25.u64 | 14;
	// b 0x82320d7c
	goto loc_82320D7C;
loc_82320BBC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r23,r26
	r23.u64 = r26.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// addi r29,r26,-4
	r29.s64 = r26.s64 + -4;
	// lis r27,128
	r27.s64 = 8388608;
	// addi r28,r11,-20220
	r28.s64 = ctx.r11.s64 + -20220;
loc_82320BD4:
	// rlwinm r4,r31,13,0,18
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 13) & 0xFFFFE000;
	// cmpw cr6,r4,r27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r27.s32, ctx.xer);
	// bne cr6,0x82320be8
	if (!ctx.cr6.eq) goto loc_82320BE8;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// b 0x82320bf4
	goto loc_82320BF4;
loc_82320BE8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82320518
	ctx.lr = 0x82320BF0;
	sub_82320518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82320BF4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823209b8
	ctx.lr = 0x82320BFC;
	sub_823209B8(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stwu r3,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r29.u32 = ea;
	// cmpwi cr6,r31,1024
	ctx.cr6.compare<int32_t>(r31.s32, 1024, ctx.xer);
	// ble cr6,0x82320bd4
	if (!ctx.cr6.gt) goto loc_82320BD4;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lis r10,320
	ctx.r10.s64 = 20971520;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82320c24
	if (ctx.cr6.lt) goto loc_82320C24;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
loc_82320C24:
	// li r3,4100
	ctx.r3.s64 = 4100;
	// bl 0x823143c0
	ctx.lr = 0x82320C2C;
	sub_823143C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82320bb0
	if (ctx.cr6.eq) goto loc_82320BB0;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82320C4C:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// subf. r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x82320c60
	if (ctx.cr0.gt) goto loc_82320C60;
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_82320C60:
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82320c6c
	if (!ctx.cr6.gt) goto loc_82320C6C;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
loc_82320C6C:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82320c4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82320C4C;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bgt cr6,0x82320c80
	if (ctx.cr6.gt) goto loc_82320C80;
	// li r7,2
	ctx.r7.s64 = 2;
loc_82320C80:
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82320ca0
	if (!ctx.cr6.gt) goto loc_82320CA0;
loc_82320C90:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x82320c90
	if (ctx.cr6.gt) goto loc_82320C90;
loc_82320CA0:
	// lwz r10,296(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 296);
	// rlwinm r9,r22,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r8,r11,29
	ctx.xer.ca = ctx.r11.u32 <= 29;
	ctx.r8.u64 = static_cast<uint64_t>(29) - ctx.r11.u64;
	// stwx r8,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r7,296(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 296);
	// lwzx r6,r9,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82320ccc
	if (!ctx.cr6.gt) goto loc_82320CCC;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x82320cd0
	goto loc_82320CD0;
loc_82320CCC:
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
loc_82320CD0:
	// lwz r6,296(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 296);
	// li r8,1024
	ctx.r8.s64 = 1024;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// subf r10,r26,r31
	ctx.r10.u64 = r31.u64 - r26.u64;
	// stwx r7,r9,r6
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r7.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82320CE8:
	// lwz r8,296(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 296);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r5,r7,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r7.u64;
	// lwzx r4,r9,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// slw r3,r5,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r4.u8 & 0x3F));
	// srawi r8,r3,13
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1FFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 13;
	// stwx r8,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// lwz r6,296(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 296);
	// ble cr6,0x82320d48
	if (!ctx.cr6.gt) goto loc_82320D48;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r7,13,0,18
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 13) & 0xFFFFE000;
	// subf r3,r7,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r7.u64;
	// lwzx r7,r9,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// sraw r7,r3,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r7.s64 = ctx.r3.s32 >> temp.u32;
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x82320d70
	if (!ctx.cr6.gt) goto loc_82320D70;
	// b 0x82320d6c
	goto loc_82320D6C;
loc_82320D48:
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r8,13,0,18
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0xFFFFE000;
	// subf r3,r8,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r8.u64;
	// lwzx r8,r9,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// sraw r8,r3,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r8.s64 = ctx.r3.s32 >> temp.u32;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82320d70
	if (!ctx.cr6.lt) goto loc_82320D70;
loc_82320D6C:
	// stwx r25,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r25.u32);
loc_82320D70:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82320ce8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82320CE8;
	// stw r25,4096(r31)
	REX_STORE_U32(r31.u32 + 4096, r25.u32);
loc_82320D7C:
	// lwz r11,268(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 268);
	// rlwinm r10,r22,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stwx r26,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r26.u32);
	// lwz r9,260(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 260);
	// stwx r23,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r23.u32);
	// lwz r8,272(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 272);
	// stwx r31,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, r31.u32);
	// lwz r7,264(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 264);
	// stwx r24,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_8232ABE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e68
	ctx.lr = 0x8232ABE8;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x822d4f2c
	ctx.lr = 0x8232ABF0;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 1;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// li r23,0
	r23.s64 = 0;
	// addze r25,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r25.s64 = temp.s64;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// ble cr6,0x8232ac2c
	if (!ctx.cr6.gt) goto loc_8232AC2C;
loc_8232AC1C:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// srw r11,r28,r23
	ctx.r11.u64 = r23.u8 & 0x20 ? 0 : (r28.u32 >> (r23.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x8232ac1c
	if (ctx.cr6.gt) goto loc_8232AC1C;
loc_8232AC2C:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r10,r25,-1
	ctx.r10.s64 = r25.s64 + -1;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// and r9,r10,r25
	ctx.r9.u64 = ctx.r10.u64 & r25.u64;
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mr r31,r27
	r31.u64 = r27.u64;
	// rlwinm r24,r8,27,31,31
	r24.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmpwi cr6,r28,64
	ctx.cr6.compare<int32_t>(r28.s32, 64, ctx.xer);
	// blt cr6,0x8232acbc
	if (ctx.cr6.lt) goto loc_8232ACBC;
	// cmpwi cr6,r28,2048
	ctx.cr6.compare<int32_t>(r28.s32, 2048, ctx.xer);
	// bgt cr6,0x8232acbc
	if (ctx.cr6.gt) goto loc_8232ACBC;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x8232acbc
	if (ctx.cr6.eq) goto loc_8232ACBC;
	// srawi r11,r28,7
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x7F) != 0);
	ctx.r11.s64 = r28.s32 >> 7;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-31632
	ctx.r8.s64 = ctx.r10.s64 + -31632;
	// lwzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lfs f13,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f30,f11,f0
	f30.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f28,f10,f0
	f28.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,40(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f27,f9,f0
	f27.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f26,20(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 20);
	f26.f64 = double(temp.f32);
	// fneg f31,f8
	f31.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// lfs f25,16(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16);
	f25.f64 = double(temp.f32);
	// fneg f29,f12
	f29.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// b 0x8232ad78
	goto loc_8232AD78;
loc_8232ACBC:
	// extsw r11,r28
	ctx.r11.s64 = r28.s32;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f29,f0
	f29.f64 = double(ctx.f0.s64);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfd f0,26912(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 26912);
	// fdiv f13,f0,f29
	ctx.f13.f64 = ctx.f0.f64 / f29.f64;
	// lfd f0,23800(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 23800);
	// fmul f30,f13,f0
	f30.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x822d4d68
	ctx.lr = 0x8232ACEC;
	sub_822D4D68(ctx, base);
	// fmul f12,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f1.f64 * f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// frsp f30,f12
	f30.f64 = double(float(ctx.f12.f64));
	// bl 0x822d4c88
	ctx.lr = 0x8232ACFC;
	sub_822D4C88(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmul f11,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f1.f64 * f31.f64;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lfd f0,26664(r8)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 26664);
	// fdiv f27,f0,f29
	f27.f64 = ctx.f0.f64 / f29.f64;
	// lfd f0,23792(r7)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + 23792);
	// frsp f29,f11
	f29.f64 = double(float(ctx.f11.f64));
	// fmul f28,f27,f0
	f28.f64 = f27.f64 * ctx.f0.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x822d4d68
	ctx.lr = 0x8232AD24;
	sub_822D4D68(ctx, base);
	// fmul f10,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f1.f64 * f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// frsp f28,f10
	f28.f64 = double(float(ctx.f10.f64));
	// bl 0x822d4c88
	ctx.lr = 0x8232AD34;
	sub_822D4C88(ctx, base);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// fmul f9,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f1.f64 * f31.f64;
	// lfd f0,23784(r6)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r6.u32 + 23784);
	// fmul f31,f27,f0
	f31.f64 = f27.f64 * ctx.f0.f64;
	// frsp f27,f9
	f27.f64 = double(float(ctx.f9.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822d4c88
	ctx.lr = 0x8232AD50;
	sub_822D4C88(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfd f0,-25040(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r5.u32 + -25040);
	// fmul f8,f1,f0
	ctx.f8.f64 = ctx.f1.f64 * ctx.f0.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// frsp f31,f8
	f31.f64 = double(float(ctx.f8.f64));
	// bl 0x822d4d68
	ctx.lr = 0x8232AD68;
	sub_822D4D68(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// frsp f26,f1
	ctx.fpscr.disableFlushMode();
	f26.f64 = double(float(ctx.f1.f64));
	// lfs f0,15944(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 15944);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f25,f31,f0
	f25.f64 = double(float(f31.f64 * ctx.f0.f64));
loc_8232AD78:
	// srawi r11,r25,1
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x1) != 0);
	ctx.r11.s64 = r25.s32 >> 1;
	// addze r26,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r26.s64 = temp.s64;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(r26.s32, 4, ctx.xer);
	// blt cr6,0x8232ae88
	if (ctx.cr6.lt) goto loc_8232AE88;
	// addi r10,r26,-4
	ctx.r10.s64 = r26.s64 + -4;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8232ADA4:
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f31,f30,f27
	ctx.f0.f64 = double(float(std::fma(f31.f64, f30.f64, f27.f64)));
	// lfs f12,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f29
	ctx.f11.f64 = double(float(ctx.f13.f64 * f29.f64));
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// fmuls f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 * f30.f64));
	// lfs f9,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fnmsubs f13,f31,f29,f28
	ctx.f13.f64 = double(float(-std::fma(f31.f64, f29.f64, -f28.f64)));
	// lfs f8,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fnmsubs f12,f0,f31,f30
	ctx.f12.f64 = double(float(-std::fma(ctx.f0.f64, f31.f64, -f30.f64)));
	// fmsubs f7,f8,f30,f11
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, f30.f64, -ctx.f11.f64)));
	// stfs f7,0(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fmadds f6,f8,f29,f10
	ctx.f6.f64 = double(float(std::fma(ctx.f8.f64, f29.f64, ctx.f10.f64)));
	// stfs f6,4(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f5,-8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + -8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f9,-8(r29)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r29.u32 + -8, temp.u32);
	// fmuls f3,f13,f5
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// lfs f2,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmsubs f1,f13,f2,f4
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f2.f64, -ctx.f4.f64)));
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// fmadds f13,f31,f13,f29
	ctx.f13.f64 = double(float(std::fma(f31.f64, ctx.f13.f64, f29.f64)));
	// lfs f10,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f0,f2,f3
	ctx.f9.f64 = double(float(std::fma(ctx.f0.f64, ctx.f2.f64, ctx.f3.f64)));
	// stfs f9,12(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f8,-16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + -16);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f4,f13,f8
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// stfs f10,-16(r29)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r29.u32 + -16, temp.u32);
	// fmr f6,f11
	ctx.f6.f64 = ctx.f11.f64;
	// lfs f5,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f2,f13,f5,f7
	ctx.f2.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, ctx.f7.f64)));
	// stfs f2,20(r31)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// fmsubs f1,f12,f5,f4
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, ctx.f5.f64, -ctx.f4.f64)));
	// stfs f1,16(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f10,-24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + -24);
	ctx.f10.f64 = double(temp.f32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// lfs f3,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// fnmsubs f13,f13,f31,f6
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, f31.f64, -ctx.f6.f64)));
	// stfs f3,-24(r29)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r29.u32 + -24, temp.u32);
	// fmadds f0,f31,f12,f0
	ctx.f0.f64 = double(float(std::fma(f31.f64, ctx.f12.f64, ctx.f0.f64)));
	// fmuls f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f9,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// addi r30,r30,-32
	r30.s64 = r30.s64 + -32;
	// fmr f28,f13
	f28.f64 = ctx.f13.f64;
	// addi r29,r29,-32
	r29.s64 = r29.s64 + -32;
	// fnmsubs f30,f0,f31,f12
	f30.f64 = double(float(-std::fma(ctx.f0.f64, f31.f64, -ctx.f12.f64)));
	// fmr f27,f0
	f27.f64 = ctx.f0.f64;
	// fmadds f29,f31,f13,f11
	f29.f64 = double(float(std::fma(f31.f64, ctx.f13.f64, ctx.f11.f64)));
	// fmsubs f6,f13,f9,f8
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, -ctx.f8.f64)));
	// stfs f6,24(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// fmadds f5,f0,f9,f7
	ctx.f5.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f7.f64)));
	// stfs f5,28(r31)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
	// bdnz 0x8232ada4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232ADA4;
loc_8232AE88:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8232aee4
	if (!ctx.cr6.gt) goto loc_8232AEE4;
	// subf r10,r30,r29
	ctx.r10.u64 = r29.u64 - r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8232AE98:
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f31,f29,f28
	ctx.f0.f64 = double(float(-std::fma(f31.f64, f29.f64, -f28.f64)));
	// fmuls f12,f13,f29
	ctx.f12.f64 = double(float(ctx.f13.f64 * f29.f64));
	// lfs f11,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 * f30.f64));
	// stfsx f11,r10,r30
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + r30.u32, temp.u32);
	// fmadds f13,f31,f30,f27
	ctx.f13.f64 = double(float(std::fma(f31.f64, f30.f64, f27.f64)));
	// lfs f9,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmr f28,f30
	f28.f64 = f30.f64;
	// addi r30,r30,-8
	r30.s64 = r30.s64 + -8;
	// fmr f27,f29
	f27.f64 = f29.f64;
	// fmsubs f8,f9,f30,f12
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, f30.f64, -ctx.f12.f64)));
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fmadds f7,f9,f29,f10
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, f29.f64, ctx.f10.f64)));
	// stfs f7,4(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fmr f30,f0
	f30.f64 = ctx.f0.f64;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// fmr f29,f13
	f29.f64 = ctx.f13.f64;
	// bdnz 0x8232ae98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232AE98;
loc_8232AEE4:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(r26.s32, 4, ctx.xer);
	// blt cr6,0x8232afd0
	if (ctx.cr6.lt) goto loc_8232AFD0;
	// addi r10,r26,-4
	ctx.r10.s64 = r26.s64 + -4;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8232AF08:
	// fmadds f0,f31,f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(f31.f64, f30.f64, f27.f64)));
	// lfs f6,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fnmsubs f13,f31,f29,f28
	ctx.f13.f64 = double(float(-std::fma(f31.f64, f29.f64, -f28.f64)));
	// lfs f5,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f10,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f4,f6,f29
	ctx.f4.f64 = double(float(ctx.f6.f64 * f29.f64));
	// lfs f9,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f3,f5,f29
	ctx.f3.f64 = double(float(ctx.f5.f64 * f29.f64));
	// lfs f8,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f2,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f28,f10,f0
	f28.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f27,f0,f9
	f27.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fmadds f5,f5,f30,f4
	ctx.f5.f64 = double(float(std::fma(ctx.f5.f64, f30.f64, ctx.f4.f64)));
	// stfs f5,4(r31)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fmsubs f4,f6,f30,f3
	ctx.f4.f64 = double(float(std::fma(ctx.f6.f64, f30.f64, -ctx.f3.f64)));
	// stfs f4,0(r31)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fmsubs f3,f13,f9,f28
	ctx.f3.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, -f28.f64)));
	// stfs f3,8(r31)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// fmadds f13,f10,f13,f27
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, f27.f64)));
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// fnmsubs f13,f0,f31,f30
	ctx.f13.f64 = double(float(-std::fma(ctx.f0.f64, f31.f64, -f30.f64)));
	// fmadds f0,f31,f12,f29
	ctx.f0.f64 = double(float(std::fma(f31.f64, ctx.f12.f64, f29.f64)));
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f5,f0,f8
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fmsubs f4,f13,f8,f6
	ctx.f4.f64 = double(float(std::fma(ctx.f13.f64, ctx.f8.f64, -ctx.f6.f64)));
	// stfs f4,16(r31)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// fmadds f3,f7,f13,f5
	ctx.f3.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f5.f64)));
	// stfs f3,20(r31)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// fnmsubs f13,f0,f31,f10
	ctx.f13.f64 = double(float(-std::fma(ctx.f0.f64, f31.f64, -ctx.f10.f64)));
	// fmadds f0,f31,f12,f9
	ctx.f0.f64 = double(float(std::fma(f31.f64, ctx.f12.f64, ctx.f9.f64)));
	// fmr f28,f13
	f28.f64 = ctx.f13.f64;
	// fmuls f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f9,f0,f2
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmr f27,f0
	f27.f64 = ctx.f0.f64;
	// fnmsubs f30,f0,f31,f12
	f30.f64 = double(float(-std::fma(ctx.f0.f64, f31.f64, -ctx.f12.f64)));
	// fmadds f29,f31,f13,f11
	f29.f64 = double(float(std::fma(f31.f64, ctx.f13.f64, ctx.f11.f64)));
	// fmsubs f8,f13,f2,f10
	ctx.f8.f64 = double(float(std::fma(ctx.f13.f64, ctx.f2.f64, -ctx.f10.f64)));
	// stfs f8,24(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// fmadds f7,f1,f13,f9
	ctx.f7.f64 = double(float(std::fma(ctx.f1.f64, ctx.f13.f64, ctx.f9.f64)));
	// stfs f7,28(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
	// bdnz 0x8232af08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232AF08;
loc_8232AFD0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8232b01c
	if (!ctx.cr6.gt) goto loc_8232B01C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
loc_8232AFE0:
	// lfs f12,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f0,f31,f29,f28
	ctx.f0.f64 = double(float(-std::fma(f31.f64, f29.f64, -f28.f64)));
	// lfs f11,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f29
	ctx.f10.f64 = double(float(ctx.f12.f64 * f29.f64));
	// fmuls f9,f11,f29
	ctx.f9.f64 = double(float(ctx.f11.f64 * f29.f64));
	// fmadds f13,f31,f30,f27
	ctx.f13.f64 = double(float(std::fma(f31.f64, f30.f64, f27.f64)));
	// fmr f28,f30
	f28.f64 = f30.f64;
	// fmr f27,f29
	f27.f64 = f29.f64;
	// fmsubs f8,f11,f30,f10
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, f30.f64, -ctx.f10.f64)));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmadds f7,f12,f30,f9
	ctx.f7.f64 = double(float(std::fma(ctx.f12.f64, f30.f64, ctx.f9.f64)));
	// stfsu f7,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmr f30,f0
	f30.f64 = ctx.f0.f64;
	// fmr f29,f13
	f29.f64 = ctx.f13.f64;
	// bdnz 0x8232afe0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232AFE0;
loc_8232B01C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// addi r5,r23,-1
	ctx.r5.s64 = r23.s64 + -1;
	// bne cr6,0x8232b02c
	if (!ctx.cr6.eq) goto loc_8232B02C;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
loc_8232B02C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bctrl 
	ctx.lr = 0x8232B040;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r7,r28,-2
	ctx.r7.s64 = r28.s64 + -2;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// lfs f13,1996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(r26.s32, 4, ctx.xer);
	// blt cr6,0x8232b1e0
	if (ctx.cr6.lt) goto loc_8232B1E0;
	// addi r8,r26,-4
	ctx.r8.s64 = r26.s64 + -4;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8232B084:
	// fmadds f12,f31,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(std::fma(f31.f64, ctx.f0.f64, f25.f64)));
	// lfs f10,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fnmsubs f11,f31,f13,f26
	ctx.f11.f64 = double(float(-std::fma(f31.f64, ctx.f13.f64, -f26.f64)));
	// lfs f9,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f7,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f5,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fneg f4,f13
	ctx.f4.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmuls f2,f12,f9
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f3,f11,f9
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fneg f1,f12
	ctx.f1.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fmsubs f10,f7,f0,f8
	ctx.f10.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, -ctx.f8.f64)));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmsubs f9,f4,f7,f6
	ctx.f9.f64 = double(float(std::fma(ctx.f4.f64, ctx.f7.f64, -ctx.f6.f64)));
	// stfs f9,4(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmadds f13,f31,f11,f13
	ctx.f13.f64 = double(float(std::fma(f31.f64, ctx.f11.f64, ctx.f13.f64)));
	// fnmsubs f0,f12,f31,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f12.f64, f31.f64, -ctx.f0.f64)));
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fmadds f8,f5,f11,f2
	ctx.f8.f64 = double(float(std::fma(ctx.f5.f64, ctx.f11.f64, ctx.f2.f64)));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmadds f7,f1,f5,f3
	ctx.f7.f64 = double(float(std::fma(ctx.f1.f64, ctx.f5.f64, ctx.f3.f64)));
	// lfs f5,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f5.f64 = double(temp.f32);
	// stfs f7,0(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f4,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// lfs f2,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f9,f4,f11
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f8,f13,f2
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// lfs f6,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f0,f2
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fneg f4,f13
	ctx.f4.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmsubs f3,f11,f6,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f11.f64, ctx.f6.f64, -ctx.f3.f64)));
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmsubs f1,f1,f6,f9
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f6.f64, -ctx.f9.f64)));
	// stfs f1,-4(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// fmadds f9,f5,f0,f8
	ctx.f9.f64 = double(float(std::fma(ctx.f5.f64, ctx.f0.f64, ctx.f8.f64)));
	// stfs f9,12(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmadds f7,f4,f5,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f4.f64, ctx.f5.f64, ctx.f7.f64)));
	// stfs f7,-8(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// lfs f6,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmr f3,f0
	ctx.f3.f64 = ctx.f0.f64;
	// lfs f5,-16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f5.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f1,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f9,f1,f13
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f7,f1,f0
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f8,-12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f8.f64 = double(temp.f32);
	// fmsubs f1,f0,f6,f9
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f6.f64, -ctx.f9.f64)));
	// stfs f1,16(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fnmsubs f0,f13,f31,f11
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, f31.f64, -ctx.f11.f64)));
	// fmr f2,f13
	ctx.f2.f64 = ctx.f13.f64;
	// fmadds f13,f31,f3,f10
	ctx.f13.f64 = double(float(std::fma(f31.f64, ctx.f3.f64, ctx.f10.f64)));
	// fmsubs f12,f4,f6,f7
	ctx.f12.f64 = double(float(std::fma(ctx.f4.f64, ctx.f6.f64, -ctx.f7.f64)));
	// stfs f12,-12(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + -12, temp.u32);
	// fmuls f10,f0,f8
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// fmuls f9,f13,f8
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fneg f8,f13
	ctx.f8.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmr f25,f13
	f25.f64 = ctx.f13.f64;
	// fmr f26,f12
	f26.f64 = ctx.f12.f64;
	// fmadds f7,f5,f0,f9
	ctx.f7.f64 = double(float(std::fma(ctx.f5.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfs f7,20(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fmadds f6,f8,f5,f10
	ctx.f6.f64 = double(float(std::fma(ctx.f8.f64, ctx.f5.f64, ctx.f10.f64)));
	// stfs f6,-16(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + -16, temp.u32);
	// lfs f5,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -20);
	ctx.f4.f64 = double(temp.f32);
	// lfs f9,-24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f1,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmsubs f7,f0,f5,f11
	ctx.f7.f64 = double(float(std::fma(ctx.f0.f64, ctx.f5.f64, -ctx.f11.f64)));
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmuls f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fnmsubs f0,f13,f31,f3
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, f31.f64, -ctx.f3.f64)));
	// fmadds f13,f31,f12,f2
	ctx.f13.f64 = double(float(std::fma(f31.f64, ctx.f12.f64, ctx.f2.f64)));
	// fmsubs f6,f8,f5,f10
	ctx.f6.f64 = double(float(std::fma(ctx.f8.f64, ctx.f5.f64, -ctx.f10.f64)));
	// stfs f6,-20(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + -20, temp.u32);
	// fmuls f5,f0,f4
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f4,f13,f4
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fneg f3,f13
	ctx.f3.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmadds f2,f9,f0,f4
	ctx.f2.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f4.f64)));
	// stfs f2,28(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fmadds f1,f3,f9,f5
	ctx.f1.f64 = double(float(std::fma(ctx.f3.f64, ctx.f9.f64, ctx.f5.f64)));
	// stfs f1,-24(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + -24, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// bdnz 0x8232b084
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232B084;
loc_8232B1E0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8232b258
	if (!ctx.cr6.gt) goto loc_8232B258;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8232B1F4:
	// fmadds f12,f31,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(std::fma(f31.f64, ctx.f0.f64, f25.f64)));
	// lfs f10,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fnmsubs f11,f31,f13,f26
	ctx.f11.f64 = double(float(-std::fma(f31.f64, ctx.f13.f64, -f26.f64)));
	// lfs f9,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f7,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f5,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f5.f64 = double(temp.f32);
	// fneg f6,f13
	ctx.f6.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmr f26,f0
	f26.f64 = ctx.f0.f64;
	// fmr f25,f13
	f25.f64 = ctx.f13.f64;
	// fmuls f3,f12,f9
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fneg f2,f12
	ctx.f2.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fmuls f1,f11,f9
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmsubs f0,f7,f0,f8
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, -ctx.f8.f64)));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmsubs f13,f6,f7,f4
	ctx.f13.f64 = double(float(std::fma(ctx.f6.f64, ctx.f7.f64, -ctx.f4.f64)));
	// stfs f13,-4(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// fmadds f12,f5,f11,f3
	ctx.f12.f64 = double(float(std::fma(ctx.f5.f64, ctx.f11.f64, ctx.f3.f64)));
	// stfsu f12,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmadds f11,f2,f5,f1
	ctx.f11.f64 = double(float(std::fma(ctx.f2.f64, ctx.f5.f64, ctx.f1.f64)));
	// stfsu f11,-8(r10)
	ea = -8 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8232b1f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232B1F4;
loc_8232B258:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8232b26c
	if (ctx.cr6.eq) goto loc_8232B26C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r11.u32);
loc_8232B26C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x822d4f78
	ctx.lr = 0x8232B278;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_8235E8A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e78
	ctx.lr = 0x8235E8A8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,3744(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 3744);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,3760(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 3760);
	// lwz r30,616(r8)
	r30.u64 = REX_LOAD_U32(ctx.r8.u32 + 616);
	// lwz r10,220(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r9,3776(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3776);
	// lwz r6,3832(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3832);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// add r25,r9,r10
	r25.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,3780(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3780);
	// add r26,r6,r10
	r26.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lwz r7,3784(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3784);
	// lwz r5,3836(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3836);
	// add r29,r8,r11
	r29.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r4,3840(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3840);
	// add r27,r7,r11
	r27.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r30,616(r3)
	REX_STORE_U32(ctx.r3.u32 + 616, r30.u32);
	// add r30,r5,r11
	r30.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lwz r10,15964(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15964);
	// add r28,r4,r11
	r28.u64 = ctx.r4.u64 + ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8235e96c
	if (ctx.cr6.eq) goto loc_8235E96C;
	// lwz r11,20416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8235e96c
	if (!ctx.cr6.eq) goto loc_8235E96C;
	// lwz r10,3760(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3760);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r9,592(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 592);
	// mulli r11,r9,68
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(68));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// stw r7,592(r10)
	REX_STORE_U32(ctx.r10.u32 + 592, ctx.r7.u32);
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// lwz r6,3744(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3744);
	// stw r6,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
	// lwz r5,204(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 204);
	// stw r5,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r5.u32);
	// lwz r4,208(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 208);
	// stw r4,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r4.u32);
	// lwz r3,140(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 140);
	// stw r3,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r3.u32);
	// lwz r10,220(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 220);
	// stw r10,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// lwz r9,224(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 224);
	// stw r9,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_8235E96C:
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// li r24,0
	r24.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8235e9fc
	if (!ctx.cr6.gt) goto loc_8235E9FC;
loc_8235E97C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8235E98C;
	sub_822D4FA0(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8235E9A8;
	sub_822D4FA0(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,204(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 204);
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8235E9C4;
	sub_822D4FA0(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// add r26,r11,r26
	r26.u64 = ctx.r11.u64 + r26.u64;
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8235E9E0;
	sub_822D4FA0(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// add r26,r11,r26
	r26.u64 = ctx.r11.u64 + r26.u64;
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8235e97c
	if (ctx.cr6.lt) goto loc_8235E97C;
loc_8235E9FC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8235FC08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e50
	ctx.lr = 0x8235FC10;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r15,r8
	r15.u64 = ctx.r8.u64;
	// stw r8,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// lhz r8,52(r4)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + 52);
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// lhz r11,74(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 74);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// stw r9,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// rlwinm r28,r8,31,1,31
	r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// lhz r9,50(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 50);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// stw r7,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lhz r7,76(r4)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + 76);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r8,1356(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 1356);
	// rotlwi r22,r11,3
	r22.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// stw r6,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r6.u32);
	// rlwinm r6,r9,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rotlwi r4,r11,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stw r3,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// rotlwi r20,r11,4
	r20.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// rotlwi r14,r7,3
	r14.u64 = __builtin_rotateleft32(ctx.r7.u32, 3);
	// add r10,r22,r5
	ctx.r10.u64 = r22.u64 + ctx.r5.u64;
	// neg r3,r4
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r4.u64);
	// dcbt r3,r10
	// neg r7,r9
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r7,r10
	// rotlwi r6,r11,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// neg r4,r6
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// dcbt r4,r10
	// neg r27,r11
	r27.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// dcbt r27,r10
	// dcbt r22,r5
	// dcbt r11,r10
	// dcbt r6,r10
	// dcbt r9,r10
	// add r10,r20,r5
	ctx.r10.u64 = r20.u64 + ctx.r5.u64;
	// dcbt r3,r10
	// dcbt r7,r10
	// dcbt r4,r10
	// dcbt r27,r10
	// dcbt r20,r5
	// dcbt r11,r10
	// dcbt r6,r10
	// dcbt r9,r10
	// dcbt r0,r5
	// dcbt r11,r5
	// dcbt r6,r5
	// dcbt r9,r5
	// lwz r3,20680(r19)
	ctx.r3.u64 = REX_LOAD_U32(r19.u32 + 20680);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235fd1c
	if (ctx.cr6.eq) goto loc_8235FD1C;
	// lwz r11,20684(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 20684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235fd1c
	if (ctx.cr6.eq) goto loc_8235FD1C;
	// lwz r11,1372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1372);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8235fd1c
	if (!ctx.cr6.eq) goto loc_8235FD1C;
	// lwz r10,21972(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 21972);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8235fd20
	goto loc_8235FD20;
loc_8235FD1C:
	// lwz r11,21972(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 21972);
loc_8235FD20:
	// stw r11,21968(r19)
	REX_STORE_U32(r19.u32 + 21968, ctx.r11.u32);
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// cmplw cr6,r15,r29
	ctx.cr6.compare<uint32_t>(r15.u32, r29.u32, ctx.xer);
	// bge cr6,0x82360048
	if (!ctx.cr6.lt) goto loc_82360048;
	// addi r29,r8,180
	r29.s64 = ctx.r8.s64 + 180;
	// addi r23,r28,-1
	r23.s64 = r28.s64 + -1;
	// rlwinm r25,r15,2,0,29
	r25.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0xFFFFFFFC;
loc_8235FD3C:
	// lwz r11,21940(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 21940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235fd74
	if (ctx.cr6.eq) goto loc_8235FD74;
	// cmplw cr6,r15,r23
	ctx.cr6.compare<uint32_t>(r15.u32, r23.u32, ctx.xer);
	// bge cr6,0x8235fd6c
	if (!ctx.cr6.lt) goto loc_8235FD6C;
	// lwz r11,21968(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 21968);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8235fd6c
	if (!ctx.cr6.eq) goto loc_8235FD6C;
	// li r18,0
	r18.s64 = 0;
	// b 0x8235fd80
	goto loc_8235FD80;
loc_8235FD6C:
	// li r18,1
	r18.s64 = 1;
	// b 0x8235fd80
	goto loc_8235FD80;
loc_8235FD74:
	// subfc r11,r23,r15
	ctx.xer.ca = r15.u32 >= r23.u32;
	ctx.r11.u64 = r15.u64 - r23.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfze r18,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ~ctx.r10.u32;
	r18.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8235FD80:
	// add r3,r24,r22
	ctx.r3.u64 = r24.u64 + r22.u64;
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// li r6,16
	ctx.r6.s64 = 16;
	// lhz r4,74(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 74);
	// mr r17,r24
	r17.u64 = r24.u64;
	// bl 0x82378e20
	ctx.lr = 0x8235FD98;
	sub_82378E20(ctx, base);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// bne cr6,0x8235fdb4
	if (!ctx.cr6.eq) goto loc_8235FDB4;
	// add r3,r24,r20
	ctx.r3.u64 = r24.u64 + r20.u64;
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// li r6,16
	ctx.r6.s64 = 16;
	// lhz r4,74(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 74);
	// bl 0x82378e20
	ctx.lr = 0x8235FDB4;
	sub_82378E20(ctx, base);
loc_8235FDB4:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8235ff44
	if (!ctx.cr6.gt) goto loc_8235FF44;
	// addi r30,r24,16
	r30.s64 = r24.s64 + 16;
	// addi r19,r22,-16
	r19.s64 = r22.s64 + -16;
	// addi r16,r20,-16
	r16.s64 = r20.s64 + -16;
loc_8235FDD0:
	// addic. r21,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	r21.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne 0x8235fe60
	if (!ctx.cr0.eq) goto loc_8235FE60;
	// lhz r10,74(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 74);
	// add r11,r30,r22
	ctx.r11.u64 = r30.u64 + r22.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// add r11,r30,r20
	ctx.r11.u64 = r30.u64 + r20.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// dcbt r7,r11
	// dcbt r6,r11
	// dcbt r4,r11
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// addi r11,r30,16
	ctx.r11.s64 = r30.s64 + 16;
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
loc_8235FE60:
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// li r6,16
	ctx.r6.s64 = 16;
	// lhz r4,74(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 74);
	// add r3,r19,r28
	ctx.r3.u64 = r19.u64 + r28.u64;
	// bl 0x82378e20
	ctx.lr = 0x8235FE78;
	sub_82378E20(ctx, base);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// bne cr6,0x8235fe94
	if (!ctx.cr6.eq) goto loc_8235FE94;
	// li r6,16
	ctx.r6.s64 = 16;
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// add r3,r16,r28
	ctx.r3.u64 = r16.u64 + r28.u64;
	// lhz r4,74(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 74);
	// bl 0x82378e20
	ctx.lr = 0x8235FE94;
	sub_82378E20(ctx, base);
loc_8235FE94:
	// lbz r28,1244(r31)
	r28.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// addi r27,r30,-13
	r27.s64 = r30.s64 + -13;
	// lhz r26,74(r31)
	r26.u64 = REX_LOAD_U16(r31.u32 + 74);
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// add r3,r27,r11
	ctx.r3.u64 = r27.u64 + ctx.r11.u64;
	// bl 0x82379250
	ctx.lr = 0x8235FEBC;
	sub_82379250(ctx, base);
	// lbz r9,1(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 1);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8235fee0
	if (ctx.cr6.lt) goto loc_8235FEE0;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x82379250
	ctx.lr = 0x8235FEE0;
	sub_82379250(ctx, base);
loc_8235FEE0:
	// lbz r28,1244(r31)
	r28.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// addi r27,r30,-5
	r27.s64 = r30.s64 + -5;
	// lhz r26,74(r31)
	r26.u64 = REX_LOAD_U16(r31.u32 + 74);
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// add r3,r27,r11
	ctx.r3.u64 = r27.u64 + ctx.r11.u64;
	// bl 0x82379250
	ctx.lr = 0x8235FF08;
	sub_82379250(ctx, base);
	// lbz r9,1(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 1);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8235ff2c
	if (ctx.cr6.lt) goto loc_8235FF2C;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x82379250
	ctx.lr = 0x8235FF2C;
	sub_82379250(ctx, base);
loc_8235FF2C:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r17,r17,16
	r17.s64 = r17.s64 + 16;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// cmplw cr6,r21,r10
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8235fdd0
	if (ctx.cr6.lt) goto loc_8235FDD0;
loc_8235FF44:
	// lhz r11,82(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 82);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// add r24,r11,r24
	r24.u64 = ctx.r11.u64 + r24.u64;
	// bne cr6,0x8235ffd0
	if (!ctx.cr6.eq) goto loc_8235FFD0;
	// lhz r10,74(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 74);
	// add r11,r24,r22
	ctx.r11.u64 = r24.u64 + r22.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r24,r22
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// add r11,r24,r20
	ctx.r11.u64 = r24.u64 + r20.u64;
	// dcbt r7,r11
	// dcbt r6,r11
	// dcbt r4,r11
	// dcbt r3,r11
	// dcbt r24,r20
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r24
	// dcbt r10,r24
	// dcbt r5,r24
	// dcbt r9,r24
loc_8235FFD0:
	// lbz r30,1244(r31)
	r30.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// addi r28,r17,3
	r28.s64 = r17.s64 + 3;
	// lhz r27,74(r31)
	r27.u64 = REX_LOAD_U16(r31.u32 + 74);
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// add r3,r28,r11
	ctx.r3.u64 = r28.u64 + ctx.r11.u64;
	// bl 0x82379250
	ctx.lr = 0x8235FFF8;
	sub_82379250(ctx, base);
	// lbz r9,1(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 1);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8236001c
	if (ctx.cr6.lt) goto loc_8236001C;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x82379250
	ctx.lr = 0x8236001C;
	sub_82379250(ctx, base);
loc_8236001C:
	// lwz r11,308(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// lwz r19,260(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmplw cr6,r15,r11
	ctx.cr6.compare<uint32_t>(r15.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8235fd3c
	if (ctx.cr6.lt) goto loc_8235FD3C;
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rotlwi r29,r11,0
	r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r30,284(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r25,292(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r15,300(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
loc_82360048:
	// lhz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 76);
	// add r11,r14,r30
	ctx.r11.u64 = r14.u64 + r30.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// neg r7,r8
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r14,r30
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r30
	// dcbt r10,r30
	// dcbt r5,r30
	// dcbt r9,r30
	// mr r22,r30
	r22.u64 = r30.u64;
	// mr r24,r15
	r24.u64 = r15.u64;
	// cmplw cr6,r15,r29
	ctx.cr6.compare<uint32_t>(r15.u32, r29.u32, ctx.xer);
	// bge cr6,0x82360270
	if (!ctx.cr6.lt) goto loc_82360270;
	// addi r20,r28,-1
	r20.s64 = r28.s64 + -1;
	// rlwinm r21,r15,2,0,29
	r21.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0xFFFFFFFC;
loc_823600B8:
	// lwz r11,21940(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 21940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823600f0
	if (ctx.cr6.eq) goto loc_823600F0;
	// cmplw cr6,r24,r20
	ctx.cr6.compare<uint32_t>(r24.u32, r20.u32, ctx.xer);
	// bge cr6,0x823600e8
	if (!ctx.cr6.lt) goto loc_823600E8;
	// lwz r11,21968(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 21968);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + r21.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823600e8
	if (!ctx.cr6.eq) goto loc_823600E8;
	// li r27,0
	r27.s64 = 0;
	// b 0x82360100
	goto loc_82360100;
loc_823600E8:
	// li r27,1
	r27.s64 = 1;
	// b 0x82360114
	goto loc_82360114;
loc_823600F0:
	// subfc r11,r20,r24
	ctx.xer.ca = r24.u32 >= r20.u32;
	ctx.r11.u64 = r24.u64 - r20.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfze. r27,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ~ctx.r10.u32;
	r27.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne 0x82360114
	if (!ctx.cr0.eq) goto loc_82360114;
loc_82360100:
	// li r6,8
	ctx.r6.s64 = 8;
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// add r3,r22,r14
	ctx.r3.u64 = r22.u64 + r14.u64;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 76);
	// bl 0x82378e20
	ctx.lr = 0x82360114;
	sub_82378E20(ctx, base);
loc_82360114:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r26,r22,8
	r26.s64 = r22.s64 + 8;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x823601f4
	if (!ctx.cr6.gt) goto loc_823601F4;
	// addi r30,r26,8
	r30.s64 = r26.s64 + 8;
	// addi r28,r14,-8
	r28.s64 = r14.s64 + -8;
loc_82360130:
	// addic. r29,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	r29.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x82360194
	if (!ctx.cr0.eq) goto loc_82360194;
	// lhz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 76);
	// add r11,r26,r14
	ctx.r11.u64 = r26.u64 + r14.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r30
	// dcbt r10,r30
	// dcbt r5,r30
	// dcbt r9,r30
loc_82360194:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x823601b0
	if (!ctx.cr6.eq) goto loc_823601B0;
	// li r6,8
	ctx.r6.s64 = 8;
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// add r3,r28,r30
	ctx.r3.u64 = r28.u64 + r30.u64;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 76);
	// bl 0x82378e20
	ctx.lr = 0x823601B0;
	sub_82378E20(ctx, base);
loc_823601B0:
	// li r6,8
	ctx.r6.s64 = 8;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 76);
	// addi r3,r30,-13
	ctx.r3.s64 = r30.s64 + -13;
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// bl 0x82379250
	ctx.lr = 0x823601C4;
	sub_82379250(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82360130
	if (ctx.cr6.lt) goto loc_82360130;
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r19,260(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r30,284(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r25,292(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r15,300(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r29,308(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
loc_823601F4:
	// lhz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 84);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// add r22,r11,r22
	r22.u64 = ctx.r11.u64 + r22.u64;
	// bne cr6,0x8236025c
	if (!ctx.cr6.eq) goto loc_8236025C;
	// lhz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 76);
	// add r11,r22,r14
	ctx.r11.u64 = r22.u64 + r14.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r22,r14
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r22
	// dcbt r10,r22
	// dcbt r5,r22
	// dcbt r9,r22
loc_8236025C:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// cmplw cr6,r24,r29
	ctx.cr6.compare<uint32_t>(r24.u32, r29.u32, ctx.xer);
	// blt cr6,0x823600b8
	if (ctx.cr6.lt) goto loc_823600B8;
	// b 0x82360274
	goto loc_82360274;
loc_82360270:
	// lwz r26,84(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82360274:
	// lhz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 76);
	// add r11,r14,r25
	ctx.r11.u64 = r14.u64 + r25.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// neg r7,r8
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r14,r25
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r30
	// dcbt r10,r30
	// dcbt r5,r30
	// dcbt r9,r30
	// mr r23,r15
	r23.u64 = r15.u64;
	// cmplw cr6,r15,r29
	ctx.cr6.compare<uint32_t>(r15.u32, r29.u32, ctx.xer);
	// bge cr6,0x82360488
	if (!ctx.cr6.lt) goto loc_82360488;
	// addi r20,r28,-1
	r20.s64 = r28.s64 + -1;
	// rlwinm r21,r15,2,0,29
	r21.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0xFFFFFFFC;
loc_823602E0:
	// lwz r11,21940(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 21940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82360318
	if (ctx.cr6.eq) goto loc_82360318;
	// cmplw cr6,r23,r20
	ctx.cr6.compare<uint32_t>(r23.u32, r20.u32, ctx.xer);
	// bge cr6,0x82360310
	if (!ctx.cr6.lt) goto loc_82360310;
	// lwz r11,21968(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 21968);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + r21.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82360310
	if (!ctx.cr6.eq) goto loc_82360310;
	// li r24,0
	r24.s64 = 0;
	// b 0x82360328
	goto loc_82360328;
loc_82360310:
	// li r24,1
	r24.s64 = 1;
	// b 0x8236033c
	goto loc_8236033C;
loc_82360318:
	// subfc r11,r20,r23
	ctx.xer.ca = r23.u32 >= r20.u32;
	ctx.r11.u64 = r23.u64 - r20.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfze. r24,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ~ctx.r10.u32;
	r24.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne 0x8236033c
	if (!ctx.cr0.eq) goto loc_8236033C;
loc_82360328:
	// li r6,8
	ctx.r6.s64 = 8;
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// add r3,r25,r14
	ctx.r3.u64 = r25.u64 + r14.u64;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 76);
	// bl 0x82378e20
	ctx.lr = 0x8236033C;
	sub_82378E20(ctx, base);
loc_8236033C:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r25,8
	r30.s64 = r25.s64 + 8;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82360410
	if (!ctx.cr6.gt) goto loc_82360410;
	// add r29,r30,r14
	r29.u64 = r30.u64 + r14.u64;
	// subfic r27,r14,-5
	ctx.xer.ca = r14.u32 <= 4294967291;
	r27.u64 = static_cast<uint64_t>(-5) - r14.u64;
loc_82360358:
	// addic. r28,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	r28.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x823603c0
	if (!ctx.cr0.eq) goto loc_823603C0;
	// lhz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 76);
	// add r11,r30,r14
	ctx.r11.u64 = r30.u64 + r14.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// addi r11,r26,8
	ctx.r11.s64 = r26.s64 + 8;
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
loc_823603C0:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x823603dc
	if (!ctx.cr6.eq) goto loc_823603DC;
	// li r6,8
	ctx.r6.s64 = 8;
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 76);
	// bl 0x82378e20
	ctx.lr = 0x823603DC;
	sub_82378E20(ctx, base);
loc_823603DC:
	// li r6,8
	ctx.r6.s64 = 8;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 76);
	// add r3,r27,r29
	ctx.r3.u64 = r27.u64 + r29.u64;
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// bl 0x82379250
	ctx.lr = 0x823603F0;
	sub_82379250(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82360358
	if (ctx.cr6.lt) goto loc_82360358;
	// lwz r19,260(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r29,308(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
loc_82360410:
	// lhz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 84);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
	// bne cr6,0x82360478
	if (!ctx.cr6.eq) goto loc_82360478;
	// lhz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 76);
	// add r11,r25,r14
	ctx.r11.u64 = r25.u64 + r14.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r25,r14
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r22
	// dcbt r10,r22
	// dcbt r5,r22
	// dcbt r9,r22
loc_82360478:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// cmplw cr6,r23,r29
	ctx.cr6.compare<uint32_t>(r23.u32, r29.u32, ctx.xer);
	// blt cr6,0x823602e0
	if (ctx.cr6.lt) goto loc_823602E0;
loc_82360488:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8237D6D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e7c
	ctx.lr = 0x8237D6D8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// srawi r6,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 2;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// srawi r11,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
	// mullw r9,r6,r5
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// clrlwi r27,r8,30
	r27.u64 = ctx.r8.u32 & 0x3;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// add r28,r11,r4
	r28.u64 = ctx.r11.u64 + ctx.r4.u64;
	// clrlwi r25,r7,30
	r25.u64 = ctx.r7.u32 & 0x3;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x8237d748
	if (!ctx.cr6.eq) goto loc_8237D748;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x8237d748
	if (!ctx.cr6.eq) goto loc_8237D748;
	// li r31,16
	r31.s64 = 16;
loc_8237D720:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8237D730;
	sub_822D4FA0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r26,r26,r29
	r26.u64 = r26.u64 + r29.u64;
	// add r28,r28,r30
	r28.u64 = r28.u64 + r30.u64;
	// bne 0x8237d720
	if (!ctx.cr0.eq) goto loc_8237D720;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
loc_8237D748:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8237d794
	if (!ctx.cr6.eq) goto loc_8237D794;
	// lwz r3,3168(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3168);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r11,3960(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3960);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r10,460(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 460);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x8237D78C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
loc_8237D794:
	// lwz r11,3180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r9,3960(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3960);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237D7BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,3180(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// lwz r9,3960(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3960);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r26,8
	ctx.r5.s64 = r26.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r3,r28,8
	ctx.r3.s64 = r28.s64 + 8;
	// bctrl 
	ctx.lr = 0x8237D7E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,3960(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3960);
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// add r26,r10,r26
	r26.u64 = ctx.r10.u64 + r26.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,3180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237D81C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,3180(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r9,3960(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3960);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r26,8
	ctx.r5.s64 = r26.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r28,8
	ctx.r3.s64 = r28.s64 + 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8237D844;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82385040) {
	REX_FUNC_PROLOGUE();
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e78
	ctx.lr = 0x82385048;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// stw r30,1600(r4)
	REX_STORE_U32(ctx.r4.u32 + 1600, r30.u32);
	// lwz r11,24688(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24688);
	// lwz r10,712(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 712);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8238506c
	if (ctx.cr6.eq) goto loc_8238506C;
	// lwz r11,18464(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18464);
	// b 0x82385070
	goto loc_82385070;
loc_8238506C:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82385070:
	// stw r11,1600(r4)
	REX_STORE_U32(ctx.r4.u32 + 1600, ctx.r11.u32);
	// addi r11,r4,104
	ctx.r11.s64 = ctx.r4.s64 + 104;
	// lwz r8,360(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 360);
	// li r29,1
	r29.s64 = 1;
	// stw r8,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// li r28,3
	r28.s64 = 3;
	// lwz r7,84(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stw r7,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// lwz r6,84(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// ld r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// std r5,104(r4)
	REX_STORE_U64(ctx.r4.u32 + 104, ctx.r5.u64);
	// lwz r10,84(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r8,112(r4)
	REX_STORE_U32(ctx.r4.u32 + 112, ctx.r8.u32);
	// lwz r7,84(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r6,12(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// stw r6,116(r4)
	REX_STORE_U32(ctx.r4.u32 + 116, ctx.r6.u32);
	// lwz r5,84(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r10,16(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// stw r10,120(r4)
	REX_STORE_U32(ctx.r4.u32 + 120, ctx.r10.u32);
	// lwz r8,84(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r7,20(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// stw r7,124(r4)
	REX_STORE_U32(ctx.r4.u32 + 124, ctx.r7.u32);
	// lwz r6,84(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r5,24(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// stw r5,128(r4)
	REX_STORE_U32(ctx.r4.u32 + 128, ctx.r5.u32);
	// lwz r10,84(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r8,28(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// stw r8,132(r4)
	REX_STORE_U32(ctx.r4.u32 + 132, ctx.r8.u32);
	// lwz r7,84(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r6,32(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// stw r6,136(r4)
	REX_STORE_U32(ctx.r4.u32 + 136, ctx.r6.u32);
	// lwz r5,84(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r10,36(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 36);
	// stw r10,140(r4)
	REX_STORE_U32(ctx.r4.u32 + 140, ctx.r10.u32);
	// lwz r8,84(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r7,40(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// stw r7,144(r4)
	REX_STORE_U32(ctx.r4.u32 + 144, ctx.r7.u32);
	// lwz r6,84(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r5,44(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 44);
	// stw r5,148(r4)
	REX_STORE_U32(ctx.r4.u32 + 148, ctx.r5.u32);
	// lwz r10,84(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r8,48(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r8,152(r4)
	REX_STORE_U32(ctx.r4.u32 + 152, ctx.r8.u32);
	// lwz r7,380(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 380);
	// stw r7,348(r4)
	REX_STORE_U32(ctx.r4.u32 + 348, ctx.r7.u32);
	// lwz r6,384(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 384);
	// stw r6,352(r4)
	REX_STORE_U32(ctx.r4.u32 + 352, ctx.r6.u32);
	// lwz r5,380(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 380);
	// stw r5,1784(r4)
	REX_STORE_U32(ctx.r4.u32 + 1784, ctx.r5.u32);
	// lwz r11,384(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 384);
	// stw r11,1788(r4)
	REX_STORE_U32(ctx.r4.u32 + 1788, ctx.r11.u32);
	// lwz r10,3088(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3088);
	// stw r10,376(r4)
	REX_STORE_U32(ctx.r4.u32 + 376, ctx.r10.u32);
	// lwz r8,136(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// rlwinm r7,r8,1,16,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFE;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r7,50(r4)
	REX_STORE_U16(ctx.r4.u32 + 50, ctx.r7.u16);
	// lwz r5,140(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// rlwinm r10,r5,1,16,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFE;
	// addi r7,r6,1
	ctx.r7.s64 = ctx.r6.s64 + 1;
	// sth r10,52(r4)
	REX_STORE_U16(ctx.r4.u32 + 52, ctx.r10.u16);
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r6,40(r4)
	REX_STORE_U16(ctx.r4.u32 + 40, ctx.r6.u16);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// sth r29,38(r4)
	REX_STORE_U16(ctx.r4.u32 + 38, r29.u16);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// sth r30,36(r4)
	REX_STORE_U16(ctx.r4.u32 + 36, r30.u16);
	// rlwinm r8,r6,3,16,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFF8;
	// sth r10,42(r4)
	REX_STORE_U16(ctx.r4.u32 + 42, ctx.r10.u16);
	// rlwinm r7,r6,2,16,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFC;
	// rlwinm r11,r5,3,16,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFF8;
	// sth r8,54(r4)
	REX_STORE_U16(ctx.r4.u32 + 54, ctx.r8.u16);
	// rlwinm r6,r5,2,16,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFC;
	// sth r7,58(r4)
	REX_STORE_U16(ctx.r4.u32 + 58, ctx.r7.u16);
	// sth r11,56(r4)
	REX_STORE_U16(ctx.r4.u32 + 56, ctx.r11.u16);
	// li r11,2
	ctx.r11.s64 = 2;
	// sth r6,60(r4)
	REX_STORE_U16(ctx.r4.u32 + 60, ctx.r6.u16);
	// lwz r5,204(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// sth r5,74(r4)
	REX_STORE_U16(ctx.r4.u32 + 74, ctx.r5.u16);
	// addi r10,r4,320
	ctx.r10.s64 = ctx.r4.s64 + 320;
	// lhz r10,74(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 74);
	// addi r7,r4,1792
	ctx.r7.s64 = ctx.r4.s64 + 1792;
	// addi r6,r9,-22280
	ctx.r6.s64 = ctx.r9.s64 + -22280;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r27,4
	r27.s64 = 4;
	// lwz r5,208(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// sth r5,76(r4)
	REX_STORE_U16(ctx.r4.u32 + 76, ctx.r5.u16);
	// lwz r5,212(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// sth r5,78(r4)
	REX_STORE_U16(ctx.r4.u32 + 78, ctx.r5.u16);
	// lwz r5,216(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// sth r5,80(r4)
	REX_STORE_U16(ctx.r4.u32 + 80, ctx.r5.u16);
	// lwz r5,228(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// sth r5,82(r4)
	REX_STORE_U16(ctx.r4.u32 + 82, ctx.r5.u16);
	// lwz r5,232(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// sth r5,84(r4)
	REX_STORE_U16(ctx.r4.u32 + 84, ctx.r5.u16);
	// lwz r5,172(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// sth r5,86(r4)
	REX_STORE_U16(ctx.r4.u32 + 86, ctx.r5.u16);
	// lhz r31,76(r4)
	r31.u64 = REX_LOAD_U16(ctx.r4.u32 + 76);
	// lwz r5,176(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// sth r5,88(r4)
	REX_STORE_U16(ctx.r4.u32 + 88, ctx.r5.u16);
	// sth r10,90(r4)
	REX_STORE_U16(ctx.r4.u32 + 90, ctx.r10.u16);
	// sth r31,92(r4)
	REX_STORE_U16(ctx.r4.u32 + 92, r31.u16);
	// lwz r10,1880(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1880);
	// stw r10,1164(r4)
	REX_STORE_U32(ctx.r4.u32 + 1164, ctx.r10.u32);
	// lwz r5,1772(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// stw r5,428(r4)
	REX_STORE_U32(ctx.r4.u32 + 428, ctx.r5.u32);
	// lwz r10,464(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 464);
	// stw r10,432(r4)
	REX_STORE_U32(ctx.r4.u32 + 432, ctx.r10.u32);
	// lwz r5,468(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 468);
	// stw r5,436(r4)
	REX_STORE_U32(ctx.r4.u32 + 436, ctx.r5.u32);
	// lwz r10,472(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 472);
	// stw r10,440(r4)
	REX_STORE_U32(ctx.r4.u32 + 440, ctx.r10.u32);
	// stb r28,1753(r4)
	REX_STORE_U8(ctx.r4.u32 + 1753, r28.u8);
	// stb r28,1752(r4)
	REX_STORE_U8(ctx.r4.u32 + 1752, r28.u8);
	// stw r7,2176(r4)
	REX_STORE_U32(ctx.r4.u32 + 2176, ctx.r7.u32);
	// stb r29,1755(r4)
	REX_STORE_U8(ctx.r4.u32 + 1755, r29.u8);
	// stb r11,1754(r4)
	REX_STORE_U8(ctx.r4.u32 + 1754, ctx.r11.u8);
	// lwz r9,-22280(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -22280);
	// stw r9,320(r4)
	REX_STORE_U32(ctx.r4.u32 + 320, ctx.r9.u32);
	// lwz r7,4(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stw r7,324(r4)
	REX_STORE_U32(ctx.r4.u32 + 324, ctx.r7.u32);
	// lwz r5,8(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stw r5,328(r4)
	REX_STORE_U32(ctx.r4.u32 + 328, ctx.r5.u32);
	// lwz r10,12(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// stw r10,332(r4)
	REX_STORE_U32(ctx.r4.u32 + 332, ctx.r10.u32);
loc_82385270:
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_8238527C:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
loc_82385288:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82385314
	if (!ctx.cr6.eq) goto loc_82385314;
	// clrlwi r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	// add. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823852fc
	if (ctx.cr0.eq) goto loc_823852FC;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x823852dc
	if (ctx.cr6.eq) goto loc_823852DC;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x823852dc
	if (ctx.cr6.eq) goto loc_823852DC;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x823852bc
	if (!ctx.cr6.eq) goto loc_823852BC;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x823852dc
	if (ctx.cr6.eq) goto loc_823852DC;
loc_823852BC:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r9,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r9.u64 = static_cast<uint64_t>(1) - ctx.r10.u64;
	// add r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 + ctx.r7.u64;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stb r9,264(r10)
	REX_STORE_U8(ctx.r10.u32 + 264, ctx.r9.u8);
	// b 0x8238533c
	goto loc_8238533C;
loc_823852DC:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r9,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r9.u64 = static_cast<uint64_t>(1) - ctx.r10.u64;
	// add r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 + ctx.r7.u64;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stb r9,264(r10)
	REX_STORE_U8(ctx.r10.u32 + 264, ctx.r9.u8);
	// b 0x8238533c
	goto loc_8238533C;
loc_823852FC:
	// add r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 + ctx.r7.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// stb r9,264(r10)
	REX_STORE_U8(ctx.r10.u32 + 264, ctx.r9.u8);
	// b 0x8238533c
	goto loc_8238533C;
loc_82385314:
	// subfc r10,r11,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r11.u32;
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
	// eqv r9,r11,r8
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r8.u64);
	// add r31,r6,r4
	r31.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r10,r9,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// clrlwi r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r10,268(r31)
	REX_STORE_U8(r31.u32 + 268, ctx.r10.u8);
loc_8238533C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bdnz 0x82385288
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82385288;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// blt cr6,0x8238527c
	if (ctx.cr6.lt) goto loc_8238527C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// blt cr6,0x82385270
	if (ctx.cr6.lt) goto loc_82385270;
	// lwz r10,22140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 22140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823853ac
	if (!ctx.cr6.eq) goto loc_823853AC;
	// lhz r8,52(r4)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + 52);
	// lhz r9,50(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 50);
	// rotlwi r10,r8,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 5);
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r8,r7,11,0,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0xFFFFF800;
	// rlwinm r6,r10,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r6,300(r4)
	REX_STORE_U32(ctx.r4.u32 + 300, ctx.r6.u32);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r9,316(r4)
	REX_STORE_U32(ctx.r4.u32 + 316, ctx.r9.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r10,284(r4)
	REX_STORE_U32(ctx.r4.u32 + 284, ctx.r10.u32);
	// stw r10,292(r4)
	REX_STORE_U32(ctx.r4.u32 + 292, ctx.r10.u32);
	// b 0x82385414
	goto loc_82385414;
loc_823853AC:
	// lhz r7,52(r4)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + 52);
	// lhz r10,50(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 50);
	// rotlwi r8,r7,6
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 6);
	// rotlwi r9,r7,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 4);
	// addi r6,r8,-8
	ctx.r6.s64 = ctx.r8.s64 + -8;
	// addi r5,r9,-8
	ctx.r5.s64 = ctx.r9.s64 + -8;
	// rotlwi r9,r7,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// rlwinm r7,r6,11,0,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 11) & 0xFFFFF800;
	// rlwinm r8,r5,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0xFFFFF000;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r5,r9,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r7,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// addis r7,r5,51
	ctx.r7.s64 = ctx.r5.s64 + 3342336;
	// addis r6,r8,27
	ctx.r6.s64 = ctx.r8.s64 + 1769472;
	// addi r7,r7,51
	ctx.r7.s64 = ctx.r7.s64 + 51;
	// addi r6,r6,27
	ctx.r6.s64 = ctx.r6.s64 + 27;
	// addi r5,r9,-12
	ctx.r5.s64 = ctx.r9.s64 + -12;
	// stw r7,284(r4)
	REX_STORE_U32(ctx.r4.u32 + 284, ctx.r7.u32);
	// addi r10,r10,-12
	ctx.r10.s64 = ctx.r10.s64 + -12;
	// stw r6,292(r4)
	REX_STORE_U32(ctx.r4.u32 + 292, ctx.r6.u32);
	// stw r5,300(r4)
	REX_STORE_U32(ctx.r4.u32 + 300, ctx.r5.u32);
	// stw r10,316(r4)
	REX_STORE_U32(ctx.r4.u32 + 316, ctx.r10.u32);
loc_82385414:
	// lwz r10,1768(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1768);
	// lis r9,28
	ctx.r9.s64 = 1835008;
	// lis r7,60
	ctx.r7.s64 = 3932160;
	// stb r30,1748(r4)
	REX_STORE_U8(ctx.r4.u32 + 1748, r30.u8);
	// lis r26,32
	r26.s64 = 2097152;
	// stb r30,1749(r4)
	REX_STORE_U8(ctx.r4.u32 + 1749, r30.u8);
	// li r8,64
	ctx.r8.s64 = 64;
	// stb r30,1750(r4)
	REX_STORE_U8(ctx.r4.u32 + 1750, r30.u8);
	// lis r6,64
	ctx.r6.s64 = 4194304;
	// stb r29,1751(r4)
	REX_STORE_U8(ctx.r4.u32 + 1751, r29.u8);
	// stw r10,616(r4)
	REX_STORE_U32(ctx.r4.u32 + 616, ctx.r10.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// ori r31,r9,28
	r31.u64 = ctx.r9.u64 | 28;
	// stb r8,160(r4)
	REX_STORE_U8(ctx.r4.u32 + 160, ctx.r8.u8);
	// ori r5,r7,60
	ctx.r5.u64 = ctx.r7.u64 | 60;
	// stb r10,161(r4)
	REX_STORE_U8(ctx.r4.u32 + 161, ctx.r10.u8);
	// stb r10,162(r4)
	REX_STORE_U8(ctx.r4.u32 + 162, ctx.r10.u8);
	// ori r7,r26,32
	ctx.r7.u64 = r26.u64 | 32;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r30,1724(r4)
	REX_STORE_U8(ctx.r4.u32 + 1724, r30.u8);
	// li r9,100
	ctx.r9.s64 = 100;
	// stw r31,280(r4)
	REX_STORE_U32(ctx.r4.u32 + 280, r31.u32);
	// ori r6,r6,64
	ctx.r6.u64 = ctx.r6.u64 | 64;
	// stb r10,1726(r4)
	REX_STORE_U8(ctx.r4.u32 + 1726, ctx.r10.u8);
	// li r26,192
	r26.s64 = 192;
	// stb r9,1727(r4)
	REX_STORE_U8(ctx.r4.u32 + 1727, ctx.r9.u8);
	// li r25,196
	r25.s64 = 196;
	// stw r5,288(r4)
	REX_STORE_U32(ctx.r4.u32 + 288, ctx.r5.u32);
	// li r24,16
	r24.s64 = 16;
	// stw r6,296(r4)
	REX_STORE_U32(ctx.r4.u32 + 296, ctx.r6.u32);
	// stw r7,312(r4)
	REX_STORE_U32(ctx.r4.u32 + 312, ctx.r7.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stb r27,1725(r4)
	REX_STORE_U8(ctx.r4.u32 + 1725, r27.u8);
	// addi r9,r4,168
	ctx.r9.s64 = ctx.r4.s64 + 168;
	// stb r26,1728(r4)
	REX_STORE_U8(ctx.r4.u32 + 1728, r26.u8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// stb r25,1729(r4)
	REX_STORE_U8(ctx.r4.u32 + 1729, r25.u8);
	// stb r30,684(r4)
	REX_STORE_U8(ctx.r4.u32 + 684, r30.u8);
	// stb r29,687(r4)
	REX_STORE_U8(ctx.r4.u32 + 687, r29.u8);
	// stb r29,686(r4)
	REX_STORE_U8(ctx.r4.u32 + 686, r29.u8);
	// stb r29,685(r4)
	REX_STORE_U8(ctx.r4.u32 + 685, r29.u8);
	// stb r11,690(r4)
	REX_STORE_U8(ctx.r4.u32 + 690, ctx.r11.u8);
	// stb r11,689(r4)
	REX_STORE_U8(ctx.r4.u32 + 689, ctx.r11.u8);
	// stb r11,688(r4)
	REX_STORE_U8(ctx.r4.u32 + 688, ctx.r11.u8);
	// stb r27,691(r4)
	REX_STORE_U8(ctx.r4.u32 + 691, r27.u8);
	// stb r30,692(r4)
	REX_STORE_U8(ctx.r4.u32 + 692, r30.u8);
	// stb r29,693(r4)
	REX_STORE_U8(ctx.r4.u32 + 693, r29.u8);
	// stb r11,694(r4)
	REX_STORE_U8(ctx.r4.u32 + 694, ctx.r11.u8);
	// stb r28,695(r4)
	REX_STORE_U8(ctx.r4.u32 + 695, r28.u8);
	// stb r29,696(r4)
	REX_STORE_U8(ctx.r4.u32 + 696, r29.u8);
	// stb r11,697(r4)
	REX_STORE_U8(ctx.r4.u32 + 697, ctx.r11.u8);
	// stb r28,698(r4)
	REX_STORE_U8(ctx.r4.u32 + 698, r28.u8);
	// stb r30,699(r4)
	REX_STORE_U8(ctx.r4.u32 + 699, r30.u8);
	// stb r30,163(r4)
	REX_STORE_U8(ctx.r4.u32 + 163, r30.u8);
	// stb r24,164(r4)
	REX_STORE_U8(ctx.r4.u32 + 164, r24.u8);
loc_823854F0:
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bge cr6,0x82385500
	if (!ctx.cr6.lt) goto loc_82385500;
	// stbx r30,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, r30.u8);
	// b 0x8238550c
	goto loc_8238550C;
loc_82385500:
	// clrlwi r8,r10,29
	ctx.r8.u64 = ctx.r10.u32 & 0x7;
	// slw r8,r29,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r8.u8 & 0x3F));
	// stbx r8,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u8);
loc_8238550C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x823854f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823854F0;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_82385518:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82385528
	if (!ctx.cr6.eq) goto loc_82385528;
	// stb r30,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, r30.u8);
	// b 0x82385550
	goto loc_82385550;
loc_82385528:
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bge cr6,0x82385538
	if (!ctx.cr6.lt) goto loc_82385538;
	// stbx r29,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, r29.u8);
	// b 0x82385550
	goto loc_82385550;
loc_82385538:
	// clrlwi r8,r10,29
	ctx.r8.u64 = ctx.r10.u32 & 0x7;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8238554c
	if (!ctx.cr6.eq) goto loc_8238554C;
	// stbx r11,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
	// b 0x82385550
	goto loc_82385550;
loc_8238554C:
	// stbx r27,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, r27.u8);
loc_82385550:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// blt cr6,0x82385518
	if (ctx.cr6.lt) goto loc_82385518;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r4,232
	ctx.r9.s64 = ctx.r4.s64 + 232;
loc_82385564:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82385574
	if (!ctx.cr6.eq) goto loc_82385574;
	// stb r30,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, r30.u8);
	// b 0x8238559c
	goto loc_8238559C;
loc_82385574:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bge cr6,0x82385584
	if (!ctx.cr6.lt) goto loc_82385584;
	// stbx r29,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, r29.u8);
	// b 0x8238559c
	goto loc_8238559C;
loc_82385584:
	// clrlwi r8,r10,30
	ctx.r8.u64 = ctx.r10.u32 & 0x3;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82385598
	if (!ctx.cr6.eq) goto loc_82385598;
	// stbx r11,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
	// b 0x8238559c
	goto loc_8238559C;
loc_82385598:
	// stbx r27,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, r27.u8);
loc_8238559C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x82385564
	if (ctx.cr6.lt) goto loc_82385564;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// lhz r10,52(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 52);
	// lhz r9,50(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 50);
	// lis r8,-32181
	ctx.r8.s64 = -2109014016;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r6,1756(r4)
	REX_STORE_U32(ctx.r4.u32 + 1756, ctx.r6.u32);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// stw r5,1764(r4)
	REX_STORE_U32(ctx.r4.u32 + 1764, ctx.r5.u32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stw r31,1760(r4)
	REX_STORE_U32(ctx.r4.u32 + 1760, r31.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r6,r6,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r6.u64;
	// stw r9,1768(r4)
	REX_STORE_U32(ctx.r4.u32 + 1768, ctx.r9.u32);
	// subf r5,r5,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r5.u64;
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// stw r6,1776(r4)
	REX_STORE_U32(ctx.r4.u32 + 1776, ctx.r6.u32);
	// stw r5,1772(r4)
	REX_STORE_U32(ctx.r4.u32 + 1772, ctx.r5.u32);
	// addi r8,r8,32328
	ctx.r8.s64 = ctx.r8.s64 + 32328;
	// stw r11,2200(r4)
	REX_STORE_U32(ctx.r4.u32 + 2200, ctx.r11.u32);
	// addi r5,r10,32664
	ctx.r5.s64 = ctx.r10.s64 + 32664;
	// lis r6,-32180
	ctx.r6.s64 = -2108948480;
	// stw r7,2196(r4)
	REX_STORE_U32(ctx.r4.u32 + 2196, ctx.r7.u32);
	// addi r10,r9,-32264
	ctx.r10.s64 = ctx.r9.s64 + -32264;
	// stw r8,636(r4)
	REX_STORE_U32(ctx.r4.u32 + 636, ctx.r8.u32);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// stw r5,640(r4)
	REX_STORE_U32(ctx.r4.u32 + 640, ctx.r5.u32);
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// stw r10,644(r4)
	REX_STORE_U32(ctx.r4.u32 + 644, ctx.r10.u32);
	// addi r8,r6,-31920
	ctx.r8.s64 = ctx.r6.s64 + -31920;
	// lis r7,-32180
	ctx.r7.s64 = -2108948480;
	// addi r6,r11,-31288
	ctx.r6.s64 = ctx.r11.s64 + -31288;
	// stw r8,648(r4)
	REX_STORE_U32(ctx.r4.u32 + 648, ctx.r8.u32);
	// lis r5,-32180
	ctx.r5.s64 = -2108948480;
	// addi r10,r9,-30928
	ctx.r10.s64 = ctx.r9.s64 + -30928;
	// stw r6,652(r4)
	REX_STORE_U32(ctx.r4.u32 + 652, ctx.r6.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// addi r9,r7,-30232
	ctx.r9.s64 = ctx.r7.s64 + -30232;
	// stw r10,656(r4)
	REX_STORE_U32(ctx.r4.u32 + 656, ctx.r10.u32);
	// addi r8,r5,-29216
	ctx.r8.s64 = ctx.r5.s64 + -29216;
	// stw r9,660(r4)
	REX_STORE_U32(ctx.r4.u32 + 660, ctx.r9.u32);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// stw r8,664(r4)
	REX_STORE_U32(ctx.r4.u32 + 664, ctx.r8.u32);
	// addi r8,r4,668
	ctx.r8.s64 = ctx.r4.s64 + 668;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82385668:
	// rlwinm r7,r9,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82385680
	if (ctx.cr6.eq) goto loc_82385680;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_82385680:
	// rlwinm r7,r9,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82385694
	if (ctx.cr6.eq) goto loc_82385694;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82385694:
	// rlwinm r7,r9,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x823856ac
	if (ctx.cr6.eq) goto loc_823856AC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
loc_823856AC:
	// clrlwi r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x823856c4
	if (ctx.cr6.eq) goto loc_823856C4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
loc_823856C4:
	// subfic r11,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r11.u64 = static_cast<uint64_t>(4) - ctx.r11.u64;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r6,r10,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// rlwinm r4,r6,30,28,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0xC;
	// rlwimi r5,r6,4,0,27
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r5.u64 & 0xFFFFFFFF0000000F);
	// rlwinm r11,r6,26,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x3;
	// rlwinm r10,r5,2,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFF0;
	// or r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 | ctx.r4.u64;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// stbx r5,r8,r9
	REX_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r5.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82385668
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82385668;
	// bl 0x82361608
	ctx.lr = 0x82385704;
	sub_82361608(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82397528) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x82397530;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82397588
	if (!ctx.cr6.eq) goto loc_82397588;
	// bl 0x82396bd0
	ctx.lr = 0x8239755C;
	sub_82396BD0(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82397574
	if (ctx.cr6.eq) goto loc_82397574;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_82397574:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r10,20(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_82397588:
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823975a4
	if (!ctx.cr6.eq) goto loc_823975A4;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r30,0
	r30.s64 = 0;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// b 0x823976d0
	goto loc_823976D0;
loc_823975A4:
	// lbz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + r28.u32);
	// extsh r30,r5
	r30.s64 = ctx.r5.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82397690
	if (ctx.cr6.lt) goto loc_82397690;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = r30.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x82397688
	if (!ctx.cr6.lt) goto loc_82397688;
loc_823975F0:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8239761c
	if (ctx.cr6.lt) goto loc_8239761C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x8239760C;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823975f0
	if (ctx.cr6.eq) goto loc_823975F0;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x823976d0
	goto loc_823976D0;
loc_8239761C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,3(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r6,r10,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// neg r6,r10
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r7,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rldicr r11,r7,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sld r11,r6,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r3.u8 & 0x7F));
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r5,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r5.u64);
loc_82397688:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x823976d0
	goto loc_823976D0;
loc_82397690:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x82397698;
	sub_82337F50(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	r29.u64 = ctx.r11.u64 | 32768;
loc_823976A0:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x82337f50
	ctx.lr = 0x823976B8;
	sub_82337F50(ctx, base);
	// add r10,r30,r29
	ctx.r10.u64 = r30.u64 + r29.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r28.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x823976a0
	if (ctx.cr6.lt) goto loc_823976A0;
loc_823976D0:
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 8);
	// subfc r9,r30,r11
	ctx.xer.ca = ctx.r11.u32 >= r30.u32;
	ctx.r9.u64 = ctx.r11.u64 - r30.u64;
	// addze r8,r30
	temp.s64 = r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r30.u32;
	ctx.r8.s64 = temp.s64;
	// subf r7,r8,r30
	ctx.r7.u64 = r30.u64 - ctx.r8.u64;
	// and r28,r7,r30
	r28.u64 = ctx.r7.u64 & r30.u64;
	// lbzx r30,r10,r28
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + r28.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x823977a8
	if (ctx.cr6.eq) goto loc_823977A8;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x82397710
	if (!ctx.cr6.gt) goto loc_82397710;
	// li r30,0
	r30.s64 = 0;
	// b 0x823977a8
	goto loc_823977A8;
loc_82397710:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82397770
	if (!ctx.cr6.gt) goto loc_82397770;
loc_82397718:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82397770
	if (ctx.cr6.eq) goto loc_82397770;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	r30.u64 = r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x82397760
	if (!ctx.cr0.lt) goto loc_82397760;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82397760;
	sub_823380C8(ctx, base);
loc_82397760:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82397718
	if (ctx.cr6.gt) goto loc_82397718;
loc_82397770:
	// subfic r11,r30,64
	ctx.xer.ca = r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r30.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	r30.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x823977a8
	if (!ctx.cr0.lt) goto loc_823977A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823977A8;
	sub_823380C8(ctx, base);
loc_823977A8:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r28,17
	ctx.cr6.compare<int32_t>(r28.s32, 17, ctx.xer);
	// blt cr6,0x823977c0
	if (ctx.cr6.lt) goto loc_823977C0;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r28,-17
	ctx.r11.s64 = r28.s64 + -17;
loc_823977C0:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x823977e0
	if (ctx.cr6.lt) goto loc_823977E0;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// srawi r10,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r10.s64 = r30.s32 >> 1;
	// addi r9,r9,12876
	ctx.r9.s64 = ctx.r9.s64 + 12876;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r11,-5(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + -5);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_823977E0:
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// xor r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r6,r9,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r9.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_823A6718) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a6750
	if (ctx.cr6.eq) goto loc_823A6750;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x823A6748;
	sub_822D5870(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822d98f0
	ctx.lr = 0x823A6750;
	sub_822D98F0(ctx, base);
loc_823A6750:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823A7F08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e50
	ctx.lr = 0x823A7F10;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r20,0(r4)
	r20.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r25,316(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r24,320(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// lwz r31,84(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// li r28,1
	r28.s64 = 1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 8);
	// lwz r15,0(r20)
	r15.u64 = REX_LOAD_U32(r20.u32 + 0);
	// lwz r19,28(r20)
	r19.u64 = REX_LOAD_U32(r20.u32 + 28);
	// addi r18,r11,1
	r18.s64 = ctx.r11.s64 + 1;
	// lwz r17,32(r20)
	r17.u64 = REX_LOAD_U32(r20.u32 + 32);
	// lwz r16,4(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + 4);
	// beq cr6,0x823a8228
	if (ctx.cr6.eq) goto loc_823A8228;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r21,-1
	r21.s64 = -1;
	// ori r23,r11,32768
	r23.u64 = ctx.r11.u64 | 32768;
	// li r14,64
	r14.s64 = 64;
	// b 0x823a7f70
	goto loc_823A7F70;
loc_823A7F6C:
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823A7F70:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// bne cr6,0x823a7f88
	if (!ctx.cr6.eq) goto loc_823A7F88;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r30,r21
	r30.u64 = r21.u64;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// b 0x823a80d0
	goto loc_823A80D0;
loc_823A7F88:
	// lbz r4,8(r15)
	ctx.r4.u64 = REX_LOAD_U8(r15.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r15)
	r29.u64 = REX_LOAD_U32(r15.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + r29.u32);
	// extsh r30,r6
	r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x823a8080
	if (ctx.cr6.lt) goto loc_823A8080;
	// clrlwi r10,r30,28
	ctx.r10.u64 = r30.u32 & 0xF;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// sld r8,r11,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r10.u8 & 0x7F));
	// subf r7,r10,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r10.u64;
	// sradi r6,r8,63
	ctx.xer.ca = (ctx.r8.s64 < 0) & ((ctx.r8.u64 & 0x7FFFFFFFFFFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s64 >> 63;
	// addic. r11,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r11.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicr r5,r8,1,62
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// extsw r29,r6
	r29.s64 = ctx.r6.s32;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// std r5,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r5.u64);
	// bge 0x823a8078
	if (!ctx.cr0.lt) goto loc_823A8078;
loc_823A7FE0:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823a800c
	if (ctx.cr6.lt) goto loc_823A800C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x823A7FFC;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823a7fe0
	if (ctx.cr6.eq) goto loc_823A7FE0;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x823a80d0
	goto loc_823A80D0;
loc_823A800C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,3(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r6,r10,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// neg r6,r10
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r7,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rldicr r11,r7,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sld r11,r6,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r3.u8 & 0x7F));
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r5,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r5.u64);
loc_823A8078:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x823a80d0
	goto loc_823A80D0;
loc_823A8080:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x823A8088;
	sub_82337F50(ctx, base);
loc_823A8088:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x82337f50
	ctx.lr = 0x823A80A0;
	sub_82337F50(ctx, base);
	// add r10,r30,r23
	ctx.r10.u64 = r30.u64 + r23.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x823a8088
	if (ctx.cr6.lt) goto loc_823A8088;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sradi r10,r11,63
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x7FFFFFFFFFFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s64 >> 63;
	// extsw r29,r10
	r29.s64 = ctx.r10.s32;
	// bl 0x82337f50
	ctx.lr = 0x823A80D0;
	sub_82337F50(ctx, base);
loc_823A80D0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lbzx r5,r11,r17
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + r17.u32);
	// lbzx r11,r11,r19
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r19.u32);
	// add r7,r5,r28
	ctx.r7.u64 = ctx.r5.u64 + r28.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// xor r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 ^ r29.u64;
	// lbzx r11,r7,r22
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + r22.u32);
	// subf r10,r29,r9
	ctx.r10.u64 = ctx.r9.u64 - r29.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x823a8110
	if (!ctx.cr6.lt) goto loc_823A8110;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r27
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r27.u32);
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// sthx r4,r9,r27
	REX_STORE_U16(ctx.r9.u32 + r27.u32, ctx.r4.u16);
	// b 0x823a8168
	goto loc_823A8168;
loc_823A8110:
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823a8138
	if (!ctx.cr6.eq) goto loc_823A8138;
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r27
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r27.u32);
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// sthx r4,r9,r27
	REX_STORE_U16(ctx.r9.u32 + r27.u32, ctx.r4.u16);
	// b 0x823a8168
	goto loc_823A8168;
loc_823A8138:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x823a8158
	if (!ctx.cr6.gt) goto loc_823A8158;
	// lwz r8,1764(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 1764);
	// mullw r9,r10,r25
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r25.s32);
	// add r3,r9,r24
	ctx.r3.u64 = ctx.r9.u64 + r24.u64;
	// stwx r3,r8,r4
	REX_STORE_U32(ctx.r8.u32 + ctx.r4.u32, ctx.r3.u32);
	// b 0x823a8168
	goto loc_823A8168;
loc_823A8158:
	// lwz r9,1764(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 1764);
	// mullw r8,r10,r25
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(r25.s32);
	// subf r3,r24,r8
	ctx.r3.u64 = ctx.r8.u64 - r24.u64;
	// stwx r3,r9,r4
	REX_STORE_U32(ctx.r9.u32 + ctx.r4.u32, ctx.r3.u32);
loc_823A8168:
	// subf r8,r6,r16
	ctx.r8.u64 = r16.u64 - ctx.r6.u64;
	// addi r28,r7,1
	r28.s64 = ctx.r7.s64 + 1;
	// subfc r9,r18,r6
	ctx.xer.ca = ctx.r6.u32 >= r18.u32;
	ctx.r9.u64 = ctx.r6.u64 - r18.u64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// subfze r4,r21
	temp.u8 = ~r21.u32 + ctx.xer.ca < ~r21.u32;
	ctx.r4.u64 = ~r21.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// subfc r9,r14,r28
	ctx.xer.ca = r28.u32 >= r14.u32;
	ctx.r9.u64 = r28.u64 - r14.u64;
	// or r8,r4,r3
	ctx.r8.u64 = ctx.r4.u64 | ctx.r3.u64;
	// subfze r7,r21
	temp.u8 = ~r21.u32 + ctx.xer.ca < ~r21.u32;
	ctx.r7.u64 = ~r21.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 | ctx.r7.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823a7f70
	if (ctx.cr6.eq) goto loc_823A7F70;
	// cmpw cr6,r6,r16
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r16.s32, ctx.xer);
	// bne cr6,0x823a8228
	if (!ctx.cr6.eq) goto loc_823A8228;
	// subf r9,r5,r28
	ctx.r9.u64 = r28.u64 - ctx.r5.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bge cr6,0x823a81c8
	if (!ctx.cr6.lt) goto loc_823A81C8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r11,r27
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + r27.u32);
	// subf r7,r10,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r10.u64;
	// sthx r7,r11,r27
	REX_STORE_U16(ctx.r11.u32 + r27.u32, ctx.r7.u16);
	// b 0x823a8200
	goto loc_823A8200;
loc_823A81C8:
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823a81f0
	if (!ctx.cr6.eq) goto loc_823A81F0;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r11,r27
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + r27.u32);
	// subf r7,r10,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r10.u64;
	// sthx r7,r11,r27
	REX_STORE_U16(ctx.r11.u32 + r27.u32, ctx.r7.u16);
	// b 0x823a8200
	goto loc_823A8200;
loc_823A81F0:
	// lwz r10,1764(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 1764);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
loc_823A8200:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// neg r7,r29
	ctx.r7.s64 = static_cast<int64_t>(-r29.u64);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823a7620
	ctx.lr = 0x823A821C;
	sub_823A7620(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r18.u32, ctx.xer);
	// blt cr6,0x823a7f6c
	if (ctx.cr6.lt) goto loc_823A7F6C;
loc_823A8228:
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_823A8230:
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lhzx r8,r10,r27
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + r27.u32);
	// lwz r5,1764(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 1764);
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// mullw r7,r3,r25
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(r25.s32);
	// lhzx r9,r4,r27
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + r27.u32);
	// xor r8,r10,r24
	ctx.r8.u64 = ctx.r10.u64 ^ r24.u64;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r9,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 31;
	// subf r7,r10,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r10.u64;
	// mullw r8,r4,r25
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(r25.s32);
	// xor r10,r9,r24
	ctx.r10.u64 = ctx.r9.u64 ^ r24.u64;
	// subfic r3,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r3.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subfe r3,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r4,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r4.u64 = static_cast<uint64_t>(0) - ctx.r4.u64;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// rlwinm r8,r11,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subfe r9,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 & ctx.r3.u64;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// and r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 & ctx.r9.u64;
	// stwx r7,r31,r5
	REX_STORE_U32(r31.u32 + ctx.r5.u32, ctx.r7.u32);
	// lwz r5,1764(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 1764);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r6,r8,r5
	REX_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r6.u32);
	// blt cr6,0x823a8230
	if (ctx.cr6.lt) goto loc_823A8230;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823BE2B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// bne cr6,0x823be344
	if (!ctx.cr6.eq) goto loc_823BE344;
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823be310
	if (!ctx.cr6.eq) goto loc_823BE310;
	// lwz r10,14652(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14652);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,84(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r4,36(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BE300;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823BE310:
	// lwz r10,14656(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14656);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,84(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r6,48(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r5,44(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r4,40(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BE334;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823BE344:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823be384
	if (!ctx.cr6.eq) goto loc_823BE384;
	// lwz r10,14664(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14664);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,84(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r6,32(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r5,28(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r4,24(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BE374;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823BE384:
	// lwz r4,14660(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 14660);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,84(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r8,48(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r7,44(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r6,40(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// lwz r5,32(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,28(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x823BE3B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823C0030) {
	REX_FUNC_PROLOGUE();
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e60
	ctx.lr = 0x823C0038;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r11,8552(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823c0158
	if (ctx.cr6.eq) goto loc_823C0158;
	// lwz r25,14492(r9)
	r25.u64 = REX_LOAD_U32(ctx.r9.u32 + 14492);
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// lwz r10,14500(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14500);
	// subf. r23,r7,r8
	r23.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// mullw r31,r25,r7
	r31.s64 = int64_t(r25.s32) * int64_t(ctx.r7.s32);
	// lwz r27,14644(r9)
	r27.u64 = REX_LOAD_U32(ctx.r9.u32 + 14644);
	// lwz r26,14588(r9)
	r26.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// lwz r30,14544(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 14544);
	// lwz r29,14548(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 14548);
	// lwz r28,14540(r9)
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 14540);
	// lwz r22,14480(r9)
	r22.u64 = REX_LOAD_U32(ctx.r9.u32 + 14480);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r10,r31,r10
	ctx.r10.u64 = r31.u64 + ctx.r10.u64;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r27.s32);
	// add r24,r10,r3
	r24.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mullw r27,r26,r7
	r27.s64 = int64_t(r26.s32) * int64_t(ctx.r7.s32);
	// add r10,r30,r11
	ctx.r10.u64 = r30.u64 + ctx.r11.u64;
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// add r31,r27,r28
	r31.u64 = r27.u64 + r28.u64;
	// add r3,r10,r5
	ctx.r3.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r30,r11,r6
	r30.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// add r11,r31,r4
	ctx.r11.u64 = r31.u64 + ctx.r4.u64;
	// ble 0x823c00e0
	if (!ctx.cr0.gt) goto loc_823C00E0;
	// mr r31,r23
	r31.u64 = r23.u64;
loc_823C00B0:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x823c00d0
	if (!ctx.cr6.gt) goto loc_823C00D0;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
	// addi r5,r10,-2
	ctx.r5.s64 = ctx.r10.s64 + -2;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
loc_823C00C4:
	// lbzu r4,1(r6)
	ea = 1 + ctx.r6.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// stbu r4,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r5.u32 = ea;
	// bdnz 0x823c00c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C00C4;
loc_823C00D0:
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// bne 0x823c00b0
	if (!ctx.cr0.eq) goto loc_823C00B0;
loc_823C00E0:
	// lwz r11,14484(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14484);
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// lwz r6,14524(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// srawi r31,r23,1
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x1) != 0);
	r31.s64 = r23.s32 >> 1;
	// subf r4,r8,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r8.u64;
	// lwz r8,14492(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 14492);
	// lwz r7,14644(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 14644);
	// li r10,3
	ctx.r10.s64 = 3;
	// cntlzw r9,r4
	ctx.r9.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// addze r4,r31
	temp.s64 = r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r31.u32;
	ctx.r4.s64 = temp.s64;
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// rlwinm r29,r5,27,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// rlwinm r31,r9,27,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r6,r24,3
	ctx.r6.s64 = r24.s64 + 3;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r5,r24,1
	ctx.r5.s64 = r24.s64 + 1;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// bl 0x823bfd90
	ctx.lr = 0x823C0150;
	sub_823BFD90(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822d4eb0
	return;
loc_823C0158:
	// lwz r27,14588(r9)
	r27.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// subf r26,r7,r8
	r26.u64 = ctx.r8.u64 - ctx.r7.u64;
	// lwz r31,14604(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 14604);
	// mullw r10,r27,r7
	ctx.r10.s64 = int64_t(r27.s32) * int64_t(ctx.r7.s32);
	// lwz r11,14608(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14608);
	// lwz r8,14492(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 14492);
	// lwz r25,14516(r9)
	r25.u64 = REX_LOAD_U32(ctx.r9.u32 + 14516);
	// lwz r28,14500(r9)
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 14500);
	// srawi r30,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r30.s64 = ctx.r10.s32 >> 2;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r27.s32);
	// addze r30,r30
	temp.s64 = r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r30.u32;
	r30.s64 = temp.s64;
	// srawi r24,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r24.s64 = r31.s32 >> 1;
	// mullw r29,r8,r7
	r29.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// addze r8,r24
	temp.s64 = r24.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r24.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r24,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	r24.s64 = ctx.r11.s32 >> 2;
	// add r7,r31,r11
	ctx.r7.u64 = r31.u64 + ctx.r11.u64;
	// addze r11,r24
	temp.s64 = r24.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r24.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r31,r25,3
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x7) != 0);
	r31.s64 = r25.s32 >> 3;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addze r8,r31
	temp.s64 = r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r31.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r25,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	r25.s64 = r26.s32 >> 1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r26,r8,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r29,r28
	r31.u64 = r29.u64 + r28.u64;
	// subf r10,r26,r27
	ctx.r10.u64 = r27.u64 - r26.u64;
	// addze. r20,r25
	temp.s64 = r25.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r25.u32;
	r20.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r25,r7,r4
	r25.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r3,r31,r3
	ctx.r3.u64 = r31.u64 + ctx.r3.u64;
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// add r24,r11,r5
	r24.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r23,r11,r6
	r23.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// addze r28,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	r28.s64 = temp.s64;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// ble 0x823c0288
	if (!ctx.cr0.gt) goto loc_823C0288;
	// add r22,r10,r27
	r22.u64 = ctx.r10.u64 + r27.u64;
	// mr r29,r20
	r29.u64 = r20.u64;
	// addi r6,r23,-1
	ctx.r6.s64 = r23.s64 + -1;
	// addi r7,r24,-1
	ctx.r7.s64 = r24.s64 + -1;
loc_823C01FC:
	// lwz r10,14492(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14492);
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + r27.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// ble cr6,0x823c026c
	if (!ctx.cr6.gt) goto loc_823C026C;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// addi r5,r3,-4
	ctx.r5.s64 = ctx.r3.s64 + -4;
loc_823C0220:
	// lbzu r31,1(r6)
	ea = 1 + ctx.r6.u32;
	r31.u64 = REX_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// lbz r19,1(r11)
	r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbzu r30,1(r7)
	ea = 1 + ctx.r7.u32;
	r30.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// rotlwi r31,r31,16
	r31.u64 = __builtin_rotateleft32(r31.u32, 16);
	// lbz r18,0(r11)
	r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r19,r19,16
	r19.u64 = __builtin_rotateleft32(r19.u32, 16);
	// or r31,r31,r30
	r31.u64 = r31.u64 | r30.u64;
	// or r30,r19,r18
	r30.u64 = r19.u64 | r18.u64;
	// rlwinm r19,r31,8,0,23
	r19.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r31,r30,r19
	r31.u64 = r30.u64 | r19.u64;
	// stwu r31,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, r31.u32);
	ctx.r5.u32 = ea;
	// lbz r30,1(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	r31.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// rotlwi r31,r31,16
	r31.u64 = __builtin_rotateleft32(r31.u32, 16);
	// or r31,r31,r30
	r31.u64 = r31.u64 | r30.u64;
	// or r31,r31,r19
	r31.u64 = r31.u64 | r19.u64;
	// stwu r31,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, r31.u32);
	ctx.r4.u32 = ea;
	// bdnz 0x823c0220
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C0220;
loc_823C026C:
	// lwz r10,14496(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14496);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 + r28.u64;
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + r28.u64;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r22,r11
	ctx.r11.u64 = r22.u64 + ctx.r11.u64;
	// bne 0x823c01fc
	if (!ctx.cr0.eq) goto loc_823C01FC;
loc_823C0288:
	// lwz r7,14516(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 14516);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,14588(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// add r6,r8,r23
	ctx.r6.u64 = ctx.r8.u64 + r23.u64;
	// srawi r4,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 1;
	// add r30,r10,r21
	r30.u64 = ctx.r10.u64 + r21.u64;
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// add r7,r8,r24
	ctx.r7.u64 = ctx.r8.u64 + r24.u64;
	// subf r31,r8,r3
	r31.u64 = ctx.r3.u64 - ctx.r8.u64;
	// add r11,r26,r25
	ctx.r11.u64 = r26.u64 + r25.u64;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r29,0
	r29.s64 = 0;
	// subf r28,r10,r5
	r28.u64 = ctx.r5.u64 - ctx.r10.u64;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// srawi r8,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r8.s64 = r28.s32 >> 1;
	// addze r26,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	r26.s64 = temp.s64;
	// ble cr6,0x823c0374
	if (!ctx.cr6.gt) goto loc_823C0374;
	// addi r25,r20,-1
	r25.s64 = r20.s64 + -1;
	// addi r3,r6,-1
	ctx.r3.s64 = ctx.r6.s64 + -1;
	// addi r4,r7,-1
	ctx.r4.s64 = ctx.r7.s64 + -1;
loc_823C02D8:
	// lwz r10,14492(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14492);
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + r27.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 + r30.u64;
	// ble cr6,0x823c0348
	if (!ctx.cr6.gt) goto loc_823C0348;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// addi r8,r30,-4
	ctx.r8.s64 = r30.s64 + -4;
loc_823C02FC:
	// lbzu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// lbz r24,1(r11)
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbzu r5,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// rotlwi r6,r6,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// lbz r23,0(r11)
	r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r24,r24,16
	r24.u64 = __builtin_rotateleft32(r24.u32, 16);
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// or r5,r24,r23
	ctx.r5.u64 = r24.u64 | r23.u64;
	// rlwinm r24,r6,8,0,23
	r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r6,r5,r24
	ctx.r6.u64 = ctx.r5.u64 | r24.u64;
	// stwu r6,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r8.u32 = ea;
	// lbz r5,1(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbzu r6,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// rotlwi r6,r6,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// or r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 | ctx.r5.u64;
	// or r6,r5,r24
	ctx.r6.u64 = ctx.r5.u64 | r24.u64;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x823c02fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C02FC;
loc_823C0348:
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r4,r4,r26
	ctx.r4.u64 = ctx.r4.u64 + r26.u64;
	// add r3,r3,r26
	ctx.r3.u64 = ctx.r3.u64 + r26.u64;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(r29.s32, r25.s32, ctx.xer);
	// bge cr6,0x823c0364
	if (!ctx.cr6.lt) goto loc_823C0364;
	// lwz r10,14496(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14496);
	// add r30,r10,r30
	r30.u64 = ctx.r10.u64 + r30.u64;
loc_823C0364:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// cmpw cr6,r29,r20
	ctx.cr6.compare<int32_t>(r29.s32, r20.s32, ctx.xer);
	// blt cr6,0x823c02d8
	if (ctx.cr6.lt) goto loc_823C02D8;
loc_823C0374:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_823CB448) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x823CB450;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 36);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,92(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 92);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// rlwinm r6,r5,0,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f2,1996(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	ctx.f2.f64 = double(temp.f32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lfs f4,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f4.f64 = double(temp.f32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lfs f3,17064(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 17064);
	ctx.f3.f64 = double(temp.f32);
	// li r30,2
	r30.s64 = 2;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// fdivs f5,f0,f13
	ctx.f5.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// beq cr6,0x823cb510
	if (ctx.cr6.eq) goto loc_823CB510;
	// lwz r3,80(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 80);
	// fmr f1,f5
	ctx.f1.f64 = ctx.f5.f64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cb4c0
	if (ctx.cr6.eq) goto loc_823CB4C0;
	// bl 0x823cb2e0
	ctx.lr = 0x823CB4BC;
	sub_823CB2E0(ctx, base);
	// b 0x823cb504
	goto loc_823CB504;
loc_823CB4C0:
	// stfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f3,80(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// stw r8,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r7,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// bl 0x823cb2e0
	ctx.lr = 0x823CB504;
	sub_823CB2E0(ctx, base);
loc_823CB504:
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_823CB510:
	// rlwinm r11,r29,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cb584
	if (ctx.cr6.eq) goto loc_823CB584;
	// lwz r3,84(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 84);
	// fmr f1,f5
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f5.f64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cb534
	if (ctx.cr6.eq) goto loc_823CB534;
	// bl 0x823cb2e0
	ctx.lr = 0x823CB530;
	sub_823CB2E0(ctx, base);
	// b 0x823cb578
	goto loc_823CB578;
loc_823CB534:
	// stfs f4,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stfs f3,80(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// bl 0x823cb2e0
	ctx.lr = 0x823CB578;
	sub_823CB2E0(ctx, base);
loc_823CB578:
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_823CB584:
	// rlwinm r11,r29,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cb5f8
	if (ctx.cr6.eq) goto loc_823CB5F8;
	// lwz r3,88(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 88);
	// fmr f1,f5
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f5.f64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cb5a8
	if (ctx.cr6.eq) goto loc_823CB5A8;
	// bl 0x823cb2e0
	ctx.lr = 0x823CB5A4;
	sub_823CB2E0(ctx, base);
	// b 0x823cb5ec
	goto loc_823CB5EC;
loc_823CB5A8:
	// stfs f2,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// bl 0x823cb2e0
	ctx.lr = 0x823CB5EC;
	sub_823CB2E0(ctx, base);
loc_823CB5EC:
	// stfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_823CB5F8:
	// clrlwi r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cb8f4
	if (ctx.cr6.eq) goto loc_823CB8F4;
	// lwz r3,72(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cb620
	if (ctx.cr6.eq) goto loc_823CB620;
	// fmr f1,f5
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f5.f64;
	// bl 0x823cb2e0
	ctx.lr = 0x823CB618;
	sub_823CB2E0(ctx, base);
	// fmr f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64;
	// b 0x823cb634
	goto loc_823CB634;
loc_823CB620:
	// fmr f0,f4
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f4.f64;
	// fcmpu cr6,f5,f4
	ctx.cr6.compare(ctx.f5.f64, ctx.f4.f64);
	// ble cr6,0x823cb630
	if (!ctx.cr6.gt) goto loc_823CB630;
	// fdivs f0,f4,f5
	ctx.f0.f64 = double(float(ctx.f4.f64 / ctx.f5.f64));
loc_823CB630:
	// fmr f3,f0
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f0.f64;
loc_823CB634:
	// lwz r11,60(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823cb6e4
	if (!ctx.cr6.eq) goto loc_823CB6E4;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stfs f3,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x823cb678
	if (!ctx.cr6.gt) goto loc_823CB678;
loc_823CB654:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stfsx f2,r7,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r9.u32, temp.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x823cb654
	if (ctx.cr6.lt) goto loc_823CB654;
loc_823CB678:
	// rlwinm r11,r29,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cb8f4
	if (ctx.cr6.eq) goto loc_823CB8F4;
	// lwz r3,76(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cb6b8
	if (ctx.cr6.eq) goto loc_823CB6B8;
	// fmr f1,f5
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f5.f64;
	// bl 0x823cb2e0
	ctx.lr = 0x823CB698;
	sub_823CB2E0(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r9,r10
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
loc_823CB6B8:
	// fmr f0,f4
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f4.f64;
	// fcmpu cr6,f5,f4
	ctx.cr6.compare(ctx.f5.f64, ctx.f4.f64);
	// ble cr6,0x823cb6c8
	if (!ctx.cr6.gt) goto loc_823CB6C8;
	// fdivs f0,f4,f5
	ctx.f0.f64 = double(float(ctx.f4.f64 / ctx.f5.f64));
loc_823CB6C8:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
loc_823CB6E4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f31,1980(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1980);
	f31.f64 = double(temp.f32);
	// beq cr6,0x823cb770
	if (ctx.cr6.eq) goto loc_823CB770;
	// li r9,0
	ctx.r9.s64 = 0;
loc_823CB6FC:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x823cb734
	if (!ctx.cr6.gt) goto loc_823CB734;
loc_823CB70C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 + r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f2,r6,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, temp.u32);
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x823cb70c
	if (ctx.cr6.lt) goto loc_823CB70C;
loc_823CB734:
	// lwz r11,68(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 68);
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// beq cr6,0x823cb750
	if (ctx.cr6.eq) goto loc_823CB750;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stfsx f3,r9,r11
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// b 0x823cb75c
	goto loc_823CB75C;
loc_823CB750:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823cb770
	if (!ctx.cr6.eq) goto loc_823CB770;
loc_823CB75C:
	// lwz r11,60(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823cb6fc
	if (ctx.cr6.lt) goto loc_823CB6FC;
loc_823CB770:
	// lwz r11,60(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823cb868
	if (!ctx.cr6.lt) goto loc_823CB868;
	// lwz r3,76(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cb798
	if (ctx.cr6.eq) goto loc_823CB798;
	// fmr f1,f5
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f5.f64;
	// bl 0x823cb2e0
	ctx.lr = 0x823CB790;
	sub_823CB2E0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// b 0x823cb7a8
	goto loc_823CB7A8;
loc_823CB798:
	// fmr f0,f4
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f4.f64;
	// fcmpu cr6,f5,f4
	ctx.cr6.compare(ctx.f5.f64, ctx.f4.f64);
	// ble cr6,0x823cb7a8
	if (!ctx.cr6.gt) goto loc_823CB7A8;
	// fdivs f0,f4,f5
	ctx.f0.f64 = double(float(ctx.f4.f64 / ctx.f5.f64));
loc_823CB7A8:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + r30.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r6,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, temp.u32);
	// lwz r5,60(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x823cb8f4
	if (!ctx.cr6.lt) goto loc_823CB8F4;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_823CB7D8:
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x823cb810
	if (!ctx.cr6.gt) goto loc_823CB810;
loc_823CB7E8:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f2,r5,r7
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r7.u32, temp.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x823cb7e8
	if (ctx.cr6.lt) goto loc_823CB7E8;
loc_823CB810:
	// lwz r11,68(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 68);
	// lfsx f13,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// beq cr6,0x823cb82c
	if (ctx.cr6.eq) goto loc_823CB82C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stfsx f3,r8,r11
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// b 0x823cb848
	goto loc_823CB848;
loc_823CB82C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,8(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r5,r7
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r7.u32, temp.u32);
loc_823CB848:
	// lwz r11,60(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823cb7d8
	if (ctx.cr6.lt) goto loc_823CB7D8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
loc_823CB868:
	// rlwinm r11,r29,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cb8f4
	if (ctx.cr6.eq) goto loc_823CB8F4;
	// lwz r3,76(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cb890
	if (ctx.cr6.eq) goto loc_823CB890;
	// fmr f1,f5
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f5.f64;
	// bl 0x823cb2e0
	ctx.lr = 0x823CB888;
	sub_823CB2E0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// b 0x823cb8a0
	goto loc_823CB8A0;
loc_823CB890:
	// fmr f0,f4
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f4.f64;
	// fcmpu cr6,f5,f4
	ctx.cr6.compare(ctx.f5.f64, ctx.f4.f64);
	// ble cr6,0x823cb8a0
	if (!ctx.cr6.gt) goto loc_823CB8A0;
	// fdivs f0,f4,f5
	ctx.f0.f64 = double(float(ctx.f4.f64 / ctx.f5.f64));
loc_823CB8A0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// std r10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f13,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// beq cr6,0x823cb8f4
	if (ctx.cr6.eq) goto loc_823CB8F4;
loc_823CB8C8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,8(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r6,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, temp.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x823cb8c8
	if (ctx.cr6.lt) goto loc_823CB8C8;
loc_823CB8F4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823DBD90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823dbdc8
	if (ctx.cr6.eq) goto loc_823DBDC8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x823dbdc8
	if (ctx.cr6.eq) goto loc_823DBDC8;
	// stw r10,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
loc_823DBDC8:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823dbde0
	if (!ctx.cr6.eq) goto loc_823DBDE0;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823dbe08
	if (ctx.cr6.eq) goto loc_823DBE08;
loc_823DBDE0:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x823cd118
	ctx.lr = 0x823DBDF0;
	sub_823CD118(ctx, base);
	// stw r3,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x823dbe08
	if (!ctx.cr0.eq) goto loc_823DBE08;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823dbe30
	goto loc_823DBE30;
loc_823DBE08:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823dbe2c
	if (ctx.cr6.eq) goto loc_823DBE2C;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823dbe2c
	if (ctx.cr6.eq) goto loc_823DBE2C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_823DBE2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823DBE30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823DD6D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e78
	ctx.lr = 0x823DD6D8;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f38
	ctx.lr = 0x823DD6E0;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823dd70c
	if (ctx.cr6.eq) goto loc_823DD70C;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x823DD708;
	sub_82413040(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_823DD70C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823dd728
	if (ctx.cr6.eq) goto loc_823DD728;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc0b0
	ctx.lr = 0x823DD724;
	sub_823DC0B0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_823DD728:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// clrlwi. r4,r30,31
	ctx.r4.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r3,100(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 100);
	// rlwinm r7,r30,3,27,28
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0x18;
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r5,52(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r8,r29,30
	ctx.r8.u64 = r29.u32 & 0x3;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r30,-32256
	r30.s64 = -2113929216;
	// mullw r10,r3,r29
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(r29.s32);
	// lfs f31,1996(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 1996);
	f31.f64 = double(temp.f32);
	// fmr f30,f31
	f30.f64 = f31.f64;
	// fmr f29,f31
	f29.f64 = f31.f64;
	// fmr f28,f31
	f28.f64 = f31.f64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r10,r6
	r28.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r24,r9,r5
	r24.u64 = ctx.r9.u64 + ctx.r5.u64;
	// bne 0x823dd798
	if (!ctx.cr0.eq) goto loc_823DD798;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x823dd7a0
	goto loc_823DD7A0;
loc_823DD798:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_823DD7A0:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823dd7b8
	if (ctx.cr6.eq) goto loc_823DD7B8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc658
	ctx.lr = 0x823DD7B8;
	sub_823DC658(ctx, base);
loc_823DD7B8:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823ddb34
	if (!ctx.cr6.gt) goto loc_823DDB34;
	// add r10,r30,r29
	ctx.r10.u64 = r30.u64 + r29.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f12,16288(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16288);
	ctx.f12.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// lfd f11,-9120(r10)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r10.u32 + -9120);
	// rlwinm r25,r30,1,0,30
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f13,-7224(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -7224);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f0,17176(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,9952(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 9952);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r30,r30,4,0,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f5,32280(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32280);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// subf r29,r25,r28
	r29.u64 = r28.u64 - r25.u64;
loc_823DD81C:
	// add r10,r27,r11
	ctx.r10.u64 = r27.u64 + ctx.r11.u64;
	// lfsx f9,r27,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f29,f9
	ctx.f8.f64 = double(float(f29.f64 + ctx.f9.f64));
	// rlwinm r7,r26,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xC;
	// lwz r6,92(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f9,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f9,f31
	ctx.f6.f64 = double(float(ctx.f9.f64 + f31.f64));
	// fadds f4,f7,f30
	ctx.f4.f64 = double(float(ctx.f7.f64 + f30.f64));
	// lfs f9,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f9,f28
	ctx.f9.f64 = double(float(ctx.f9.f64 + f28.f64));
	// lfsx f3,r7,r24
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + r24.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f7,f6,f5
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f6,f4,f5
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// fadds f4,f9,f3
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// fadds f2,f8,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// fadds f1,f7,f3
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// fadds f3,f6,f3
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f3.f64));
	// fctiwz f4,f4
	ctx.f4.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f4,f2
	ctx.f4.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f4,f1
	ctx.f4.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// fctiwz f4,f3
	ctx.f4.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f4,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f4.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// beq cr6,0x823dda4c
	if (ctx.cr6.eq) goto loc_823DDA4C;
	// extsw r28,r5
	r28.s64 = ctx.r5.s32;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// std r28,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r28.u64);
	// extsw r28,r4
	r28.s64 = ctx.r4.s32;
	// lfd f3,104(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r7,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// std r28,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r28.u64);
	// lfd f1,112(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// lfd f4,96(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fcfid f1,f1
	ctx.f1.f64 = double(ctx.f1.s64);
	// extsw r28,r6
	r28.s64 = ctx.r6.s32;
	// fcfid f3,f3
	ctx.f3.f64 = double(ctx.f3.s64);
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// std r28,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, r28.u64);
	// lfs f2,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f7,f7,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f4.f64));
	// frsp f4,f1
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// fmuls f7,f7,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fsubs f6,f6,f4
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// frsp f4,f3
	ctx.f4.f64 = double(float(ctx.f3.f64));
	// fmadds f3,f7,f0,f2
	ctx.f3.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f2.f64)));
	// stfs f3,16(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fsubs f8,f8,f4
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f4.f64));
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// fmul f4,f7,f11
	ctx.f4.f64 = ctx.f7.f64 * ctx.f11.f64;
	// fmuls f6,f6,f10
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f8,f8,f10
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// frsp f31,f4
	f31.f64 = double(float(ctx.f4.f64));
	// lfs f4,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f4,f7,f13,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f4.f64)));
	// stfs f4,16(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f4,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f7,f7,f12,f4
	ctx.f7.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f4.f64)));
	// stfs f7,16(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f7,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f7,f6,f0,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, ctx.f7.f64)));
	// stfs f7,20(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f7,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f7,f6,f13,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f7.f64)));
	// stfs f7,20(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f7,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f7,f6,f12,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, ctx.f7.f64)));
	// stfs f7,20(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f7,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f7,f8,f0,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f7.f64)));
	// stfs f7,24(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f7,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fmul f3,f6,f11
	ctx.f3.f64 = ctx.f6.f64 * ctx.f11.f64;
	// fmadds f7,f8,f13,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f7.f64)));
	// stfs f7,24(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfd f6,120(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f7,f6
	ctx.f7.f64 = double(ctx.f6.s64);
	// lfs f6,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// frsp f30,f3
	f30.f64 = double(float(ctx.f3.f64));
	// fmadds f6,f8,f12,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f6.f64)));
	// stfs f6,24(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// fmul f8,f8,f11
	ctx.f8.f64 = ctx.f8.f64 * ctx.f11.f64;
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fsubs f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lfs f6,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// frsp f29,f8
	f29.f64 = double(float(ctx.f8.f64));
	// addi r7,r10,28
	ctx.r7.s64 = ctx.r10.s64 + 28;
	// fmadds f8,f9,f0,f6
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f6.f64)));
	// stfs f8,28(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f8,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f9,f13,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f8.f64)));
	// fmul f7,f9,f11
	ctx.f7.f64 = ctx.f9.f64 * ctx.f11.f64;
	// stfs f8,28(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// addi r7,r10,28
	ctx.r7.s64 = ctx.r10.s64 + 28;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f8,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f9,f9,f12,f8
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f8.f64)));
	// stfs f9,28(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// frsp f28,f7
	f28.f64 = double(float(ctx.f7.f64));
	// addi r7,r10,28
	ctx.r7.s64 = ctx.r10.s64 + 28;
loc_823DDA4C:
	// cmpwi cr6,r3,31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 31, ctx.xer);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// blt cr6,0x823dda5c
	if (ctx.cr6.lt) goto loc_823DDA5C;
	// li r10,31
	ctx.r10.s64 = 31;
loc_823DDA5C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823dda74
	if (!ctx.cr6.gt) goto loc_823DDA74;
	// cmpwi cr6,r3,31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 31, ctx.xer);
	// blt cr6,0x823dda78
	if (ctx.cr6.lt) goto loc_823DDA78;
	// li r3,31
	ctx.r3.s64 = 31;
	// b 0x823dda78
	goto loc_823DDA78;
loc_823DDA74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823DDA78:
	// cmpwi cr6,r4,31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 31, ctx.xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt cr6,0x823dda88
	if (ctx.cr6.lt) goto loc_823DDA88;
	// li r10,31
	ctx.r10.s64 = 31;
loc_823DDA88:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823ddaa0
	if (!ctx.cr6.gt) goto loc_823DDAA0;
	// cmpwi cr6,r4,31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 31, ctx.xer);
	// blt cr6,0x823ddaa4
	if (ctx.cr6.lt) goto loc_823DDAA4;
	// li r4,31
	ctx.r4.s64 = 31;
	// b 0x823ddaa4
	goto loc_823DDAA4;
loc_823DDAA0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823DDAA4:
	// cmpwi cr6,r5,31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 31, ctx.xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// blt cr6,0x823ddab4
	if (ctx.cr6.lt) goto loc_823DDAB4;
	// li r10,31
	ctx.r10.s64 = 31;
loc_823DDAB4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823ddacc
	if (!ctx.cr6.gt) goto loc_823DDACC;
	// cmpwi cr6,r5,31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 31, ctx.xer);
	// blt cr6,0x823ddad0
	if (ctx.cr6.lt) goto loc_823DDAD0;
	// li r5,31
	ctx.r5.s64 = 31;
	// b 0x823ddad0
	goto loc_823DDAD0;
loc_823DDACC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_823DDAD0:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// blt cr6,0x823ddae0
	if (ctx.cr6.lt) goto loc_823DDAE0;
	// li r10,1
	ctx.r10.s64 = 1;
loc_823DDAE0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823ddaf8
	if (!ctx.cr6.gt) goto loc_823DDAF8;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// blt cr6,0x823ddafc
	if (ctx.cr6.lt) goto loc_823DDAFC;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x823ddafc
	goto loc_823DDAFC;
loc_823DDAF8:
	// li r6,0
	ctx.r6.s64 = 0;
loc_823DDAFC:
	// rlwinm r10,r6,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// or r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 | ctx.r3.u64;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r30,r9
	ctx.r9.u64 = r30.u64 + ctx.r9.u64;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// add r8,r30,r8
	ctx.r8.u64 = r30.u64 + ctx.r8.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// sthux r10,r29,r25
	ea = r29.u32 + r25.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	r29.u32 = ea;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823dd81c
	if (ctx.cr6.lt) goto loc_823DD81C;
loc_823DDB34:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f84
	ctx.lr = 0x823DDB40;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_823E7580) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x823E7588;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r4,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// lhz r11,10(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823e7614
	if (ctx.cr0.eq) goto loc_823E7614;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// li r31,0
	r31.s64 = 0;
loc_823E75B4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// bl 0x823e7580
	ctx.lr = 0x823E75C0;
	sub_823E7580(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// lhz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x823e75dc
	if (ctx.cr0.eq) goto loc_823E75DC;
	// li r10,4
	ctx.r10.s64 = 4;
loc_823E75DC:
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r8,24(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 24);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r7,24(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// lhz r8,10(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 10);
	// lwz r9,44(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r8.u32, ctx.xer);
	// lhz r8,8(r7)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + 8);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r10,r29
	r29.u64 = ctx.r10.u64 + r29.u64;
	// blt cr6,0x823e75b4
	if (ctx.cr6.lt) goto loc_823E75B4;
loc_823E7614:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823EA028) {
	REX_FUNC_PROLOGUE();
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e70
	ctx.lr = 0x823EA030;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,24(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r6,32(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// lhz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x823ea3f4
	if (ctx.cr6.lt) goto loc_823EA3F4;
	// beq cr6,0x823ea370
	if (ctx.cr6.eq) goto loc_823EA370;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x823ea214
	if (ctx.cr6.lt) goto loc_823EA214;
	// beq cr6,0x823ea15c
	if (ctx.cr6.eq) goto loc_823EA15C;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x823ea07c
	if (ctx.cr6.eq) goto loc_823EA07C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x823ea608
	goto loc_823EA608;
loc_823EA07C:
	// lwz r10,52(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 52);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 8);
	// divwu r27,r9,r10
	r27.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823ea09c
	if (!ctx.cr6.gt) goto loc_823EA09C;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_823EA09C:
	// mullw. r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r27.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x823ea0dc
	if (ctx.cr0.eq) goto loc_823EA0DC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
loc_823EA0B0:
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// rlwinm r8,r11,30,2,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r7,r11,30,30,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823ea0b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EA0B0;
loc_823EA0DC:
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x823ea154
	if (ctx.cr6.eq) goto loc_823EA154;
loc_823EA0EC:
	// lhz r11,10(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 10);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823ea148
	if (ctx.cr0.eq) goto loc_823EA148;
	// li r30,0
	r30.s64 = 0;
loc_823EA100:
	// lwz r11,56(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 56);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwzx r31,r30,r11
	r31.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,48(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x823e8d70
	ctx.lr = 0x823EA120;
	sub_823E8D70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ea608
	if (ctx.cr0.lt) goto loc_823EA608;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lhz r10,10(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 10);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// blt cr6,0x823ea100
	if (ctx.cr6.lt) goto loc_823EA100;
loc_823EA148:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(r26.u32, r27.u32, ctx.xer);
	// blt cr6,0x823ea0ec
	if (ctx.cr6.lt) goto loc_823EA0EC;
loc_823EA154:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823ea608
	goto loc_823EA608;
loc_823EA15C:
	// lhz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 8);
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823ea170
	if (!ctx.cr6.gt) goto loc_823EA170;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_823EA170:
	// lhz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 4);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x823ea188
	if (!ctx.cr6.eq) goto loc_823EA188;
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x823ea44c
	if (ctx.cr6.eq) goto loc_823EA44C;
loc_823EA188:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823ea448
	if (ctx.cr6.eq) goto loc_823EA448;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r6,-4
	ctx.r7.s64 = ctx.r6.s64 + -4;
loc_823EA19C:
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823ea208
	if (ctx.cr0.eq) goto loc_823EA208;
loc_823EA1AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ea1f8
	if (ctx.cr6.eq) goto loc_823EA1F8;
loc_823EA1B8:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x823ea1e0
	if (ctx.cr6.gt) goto loc_823EA1E0;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bgt cr6,0x823ea1e0
	if (ctx.cr6.gt) goto loc_823EA1E0;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// b 0x823ea1e4
	goto loc_823EA1E4;
loc_823EA1E0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823EA1E4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// lhz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823ea1b8
	if (ctx.cr6.lt) goto loc_823EA1B8;
loc_823EA1F8:
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823ea1ac
	if (ctx.cr6.lt) goto loc_823EA1AC;
loc_823EA208:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x823ea19c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EA19C;
	// b 0x823ea448
	goto loc_823EA448;
loc_823EA214:
	// lhz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 8);
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823ea228
	if (!ctx.cr6.gt) goto loc_823EA228;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_823EA228:
	// lhz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 4);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x823ea2e4
	if (!ctx.cr6.eq) goto loc_823EA2E4;
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x823ea2e4
	if (!ctx.cr6.eq) goto loc_823EA2E4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823ea448
	if (ctx.cr6.eq) goto loc_823EA448;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// addi r11,r5,32
	ctx.r11.s64 = ctx.r5.s64 + 32;
	// subf r9,r5,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r5.u64;
loc_823EA258:
	// lfs f0,-32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,-16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f0,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f0,-28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f0,-12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lfs f0,-24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// lfs f0,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 44, temp.u32);
	// lfs f0,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// lfs f0,-20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 52, temp.u32);
	// lfs f0,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 60, temp.u32);
	// lfs f0,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stfsu f0,64(r10)
	ea = 64 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823ea258
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EA258;
	// b 0x823ea448
	goto loc_823EA448;
loc_823EA2E4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823ea448
	if (ctx.cr6.eq) goto loc_823EA448;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// addi r7,r6,-4
	ctx.r7.s64 = ctx.r6.s64 + -4;
loc_823EA2F8:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ea364
	if (ctx.cr6.eq) goto loc_823EA364;
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
loc_823EA308:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ea354
	if (ctx.cr6.eq) goto loc_823EA354;
loc_823EA314:
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bgt cr6,0x823ea33c
	if (ctx.cr6.gt) goto loc_823EA33C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x823ea33c
	if (ctx.cr6.gt) goto loc_823EA33C;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// b 0x823ea340
	goto loc_823EA340;
loc_823EA33C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823EA340:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823ea314
	if (ctx.cr6.lt) goto loc_823EA314;
loc_823EA354:
	// lhz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823ea308
	if (ctx.cr6.lt) goto loc_823EA308;
loc_823EA364:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x823ea2f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EA2F8;
	// b 0x823ea448
	goto loc_823EA448;
loc_823EA370:
	// lhz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 8);
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823ea384
	if (!ctx.cr6.gt) goto loc_823EA384;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_823EA384:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823ea448
	if (ctx.cr6.eq) goto loc_823EA448;
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
	// addi r7,r6,-4
	ctx.r7.s64 = ctx.r6.s64 + -4;
loc_823EA398:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ea3e4
	if (ctx.cr6.eq) goto loc_823EA3E4;
loc_823EA3A4:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x823ea3b4
	if (!ctx.cr6.gt) goto loc_823EA3B4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x823ea3d0
	goto loc_823EA3D0;
loc_823EA3B4:
	// rlwinm r10,r8,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// clrlwi r9,r8,30
	ctx.r9.u64 = ctx.r8.u32 & 0x3;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
loc_823EA3D0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823ea3a4
	if (ctx.cr6.lt) goto loc_823EA3A4;
loc_823EA3E4:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r31.u32, ctx.xer);
	// blt cr6,0x823ea398
	if (ctx.cr6.lt) goto loc_823EA398;
	// b 0x823ea448
	goto loc_823EA448;
loc_823EA3F4:
	// lhz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 8);
	// rlwinm r31,r11,4,0,27
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823ea408
	if (!ctx.cr6.gt) goto loc_823EA408;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_823EA408:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823ea448
	if (ctx.cr6.eq) goto loc_823EA448;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
loc_823EA41C:
	// rlwinm r9,r11,30,2,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// clrlwi r7,r11,30
	ctx.r7.u64 = ctx.r11.u32 & 0x3;
	// rlwinm r8,r11,30,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823ea41c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EA41C;
loc_823EA448:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
loc_823EA44C:
	// lhz r10,2(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 2);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x823ea4dc
	if (ctx.cr6.eq) goto loc_823EA4DC;
	// lwz r11,52(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 52);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// beq cr6,0x823ea49c
	if (ctx.cr6.eq) goto loc_823EA49C;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x823ea4d8
	if (!ctx.cr6.eq) goto loc_823EA4D8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ea4d8
	if (ctx.cr6.eq) goto loc_823EA4D8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// subf r11,r6,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r6.u64;
loc_823EA484:
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	REX_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823ea484
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EA484;
	// b 0x823ea4d8
	goto loc_823EA4D8;
loc_823EA49C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ea4d8
	if (ctx.cr6.eq) goto loc_823EA4D8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// subf r9,r6,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r6.u64;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
loc_823EA4B8:
	// lfsx f13,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x823ea4cc
	if (!ctx.cr6.eq) goto loc_823EA4CC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823EA4CC:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823ea4b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EA4B8;
loc_823EA4D8:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
loc_823EA4DC:
	// lhz r9,8(r24)
	ctx.r9.u64 = REX_LOAD_U16(r24.u32 + 8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x823ea5bc
	if (ctx.cr0.eq) goto loc_823EA5BC;
	// lhz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x823ea500
	if (ctx.cr6.eq) goto loc_823EA500;
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
	// lhz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 4);
	// b 0x823ea508
	goto loc_823EA508;
loc_823EA500:
	// lhz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 4);
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
loc_823EA508:
	// clrlwi. r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x823ea5bc
	if (ctx.cr0.eq) goto loc_823EA5BC;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x823ea524
	if (!ctx.cr6.eq) goto loc_823EA524;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r3,r9,9268
	ctx.r3.s64 = ctx.r9.s64 + 9268;
	// b 0x823ea52c
	goto loc_823EA52C;
loc_823EA524:
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r3,r9,9252
	ctx.r3.s64 = ctx.r9.s64 + 9252;
loc_823EA52C:
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// mullw. r8,r10,r31
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r7,r9,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// beq 0x823ea5b8
	if (ctx.cr0.eq) goto loc_823EA5B8;
	// mullw r9,r8,r7
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// mullw r4,r8,r11
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
loc_823EA544:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823ea580
	if (!ctx.cr6.gt) goto loc_823EA580;
	// subf r30,r11,r7
	r30.u64 = ctx.r7.u64 - ctx.r11.u64;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_823EA564:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r30,r10,2,28,29
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// add r29,r10,r9
	r29.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r29,r29,2,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r3
	r30.u64 = REX_LOAD_U32(r30.u32 + ctx.r3.u32);
	// stwx r30,r29,r6
	REX_STORE_U32(r29.u32 + ctx.r6.u32, r30.u32);
	// bdnz 0x823ea564
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EA564;
loc_823EA580:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ea5b0
	if (ctx.cr6.eq) goto loc_823EA5B0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823EA590:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r30,r10,r4
	r30.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r29,r10,r9
	r29.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r29,2,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r5
	r30.u64 = REX_LOAD_U32(r30.u32 + ctx.r5.u32);
	// stwx r30,r29,r6
	REX_STORE_U32(r29.u32 + ctx.r6.u32, r30.u32);
	// bdnz 0x823ea590
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EA590;
loc_823EA5B0:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823ea544
	if (!ctx.cr6.eq) goto loc_823EA544;
loc_823EA5B8:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
loc_823EA5BC:
	// lwz r10,44(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 44);
	// lhz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 12);
	// mullw r7,r10,r31
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823ea5d4
	if (!ctx.cr6.gt) goto loc_823EA5D4;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_823EA5D4:
	// lwz r10,28(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823ea5ec
	if (!ctx.cr6.eq) goto loc_823EA5EC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x823ea608
	goto loc_823EA608;
loc_823EA5EC:
	// lhz r11,10(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 10);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r4,r11,r22
	ctx.r4.u64 = ctx.r11.u64 + r22.u64;
	// bctrl 
	ctx.lr = 0x823EA600;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_823EA608:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_824013A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824013d4
	if (ctx.cr6.eq) goto loc_824013D4;
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_824013D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x824013e8
	if (ctx.cr6.eq) goto loc_824013E8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x824013fc
	if (!ctx.cr6.eq) goto loc_824013FC;
loc_824013E8:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824013FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824013FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82401414
	if (!ctx.cr6.eq) goto loc_82401414;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82403ab8
	ctx.lr = 0x82401414;
	sub_82403AB8(ctx, base);
loc_82401414:
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r9,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r9.u32);
	// stw r9,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// beq cr6,0x82401458
	if (ctx.cr6.eq) goto loc_82401458;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bctrl 
	ctx.lr = 0x82401450;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// stw r3,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r3.u32);
loc_82401458:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82404ED8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// bne cr6,0x82404f38
	if (!ctx.cr6.eq) goto loc_82404F38;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,21,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x7FF;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,10,22,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3FF;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r11,21,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x7FF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r11,10,22,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3FF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
loc_82404F38:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82404f78
	if (!ctx.cr6.eq) goto loc_82404F78;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrlwi r9,r9,19
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFF;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
loc_82404F78:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,19,19,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1FFF;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r11,19,19,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82406DE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82405650
	ctx.lr = 0x82406E04;
	sub_82405650(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82406bc0
	ctx.lr = 0x82406E14;
	sub_82406BC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82408720) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// bl 0x82408568
	ctx.lr = 0x82408734;
	sub_82408568(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824091B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,204(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r31,196(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// bl 0x82408898
	ctx.lr = 0x824091DC;
	sub_82408898(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8240A0B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e78
	ctx.lr = 0x8240A0B8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r30,r4,16,16,31
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// lis r8,1029
	ctx.r8.s64 = 67436544;
	// lis r7,2057
	ctx.r7.s64 = 134807552;
	// lis r6,3085
	ctx.r6.s64 = 202178560;
	// sraw. r11,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r9,r9,515
	ctx.r9.u64 = ctx.r9.u64 | 515;
	// ori r8,r8,1543
	ctx.r8.u64 = ctx.r8.u64 | 1543;
	// ori r7,r7,2571
	ctx.r7.u64 = ctx.r7.u64 | 2571;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ori r10,r6,3599
	ctx.r10.u64 = ctx.r6.u64 | 3599;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// beq 0x8240a13c
	if (ctx.cr0.eq) goto loc_8240A13C;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_8240A120:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82409ca8
	ctx.lr = 0x8240A130;
	sub_82409CA8(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// add r29,r30,r29
	r29.u64 = r30.u64 + r29.u64;
	// bne 0x8240a120
	if (!ctx.cr0.eq) goto loc_8240A120;
loc_8240A13C:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// slw r29,r10,r11
	r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// slw r30,r27,r11
	r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r11.u8 & 0x3F));
	// bge cr6,0x8240a16c
	if (!ctx.cr6.lt) goto loc_8240A16C;
	// addi r11,r27,-1
	ctx.r11.s64 = r27.s64 + -1;
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r26.s32);
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// neg r26,r26
	r26.s64 = static_cast<int64_t>(-r26.u64);
loc_8240A16C:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8240A17C:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x8240a17c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240A17C;
	// add r11,r31,r26
	ctx.r11.u64 = r31.u64 + r26.u64;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ r31.u64;
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240a1c4
	if (ctx.cr0.eq) goto loc_8240A1C4;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r31
	// b 0x8240a1c4
	goto loc_8240A1C4;
loc_8240A1A4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8240a1cc
	if (ctx.cr6.eq) goto loc_8240A1CC;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409ca8
	ctx.lr = 0x8240A1BC;
	sub_82409CA8(ctx, base);
	// add r31,r31,r26
	r31.u64 = r31.u64 + r26.u64;
	// subf r30,r29,r30
	r30.u64 = r30.u64 - r29.u64;
loc_8240A1C4:
	// clrlwi. r11,r31,28
	ctx.r11.u64 = r31.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240a1a4
	if (!ctx.cr0.eq) goto loc_8240A1A4;
loc_8240A1CC:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// clrlwi. r10,r31,25
	ctx.r10.u64 = r31.u32 & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq 0x8240a200
	if (ctx.cr0.eq) goto loc_8240A200;
loc_8240A1DC:
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(r30.u32, 16, ctx.xer);
	// blt cr6,0x8240a200
	if (ctx.cr6.lt) goto loc_8240A200;
	// lvx128 v63,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,-16
	r30.s64 = r30.s64 + -16;
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v63,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// clrlwi. r11,r31,25
	ctx.r11.u64 = r31.u32 & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240a1dc
	if (!ctx.cr0.eq) goto loc_8240A1DC;
loc_8240A200:
	// cmplwi cr6,r30,128
	ctx.cr6.compare<uint32_t>(r30.u32, 128, ctx.xer);
	// ble cr6,0x8240a2d0
	if (!ctx.cr6.gt) goto loc_8240A2D0;
	// addi r11,r30,-129
	ctx.r11.s64 = r30.s64 + -129;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r9,r11,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// lwz r7,104(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// subf r4,r10,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r10.u64;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r28,116(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subf r9,r10,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r10.u64;
	// lwz r27,120(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// subf r8,r10,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r10.u64;
	// lwz r24,124(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// subf r7,r10,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r10.u64;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// subf r6,r10,r28
	ctx.r6.u64 = r28.u64 - ctx.r10.u64;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// subf r5,r10,r27
	ctx.r5.u64 = r27.u64 - ctx.r10.u64;
	// subf r10,r10,r24
	ctx.r10.u64 = r24.u64 - ctx.r10.u64;
loc_8240A258:
	// li r3,128
	ctx.r3.s64 = 128;
	// dcbt r3,r31
	// lvx128 v63,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r31,128
	r31.s64 = r31.s64 + 128;
	// lvx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,-128
	r30.s64 = r30.s64 + -128;
	// lvx128 v61,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v60,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v62,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v61,v61,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v60,v60,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v63,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v63,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v62,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v63,v61,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v61,v60,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v62,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x8240a258
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240A258;
loc_8240A2D0:
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(r30.u32, 16, ctx.xer);
	// blt cr6,0x8240a2f8
	if (ctx.cr6.lt) goto loc_8240A2F8;
	// rlwinm r11,r30,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 28) & 0xFFFFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8240A2E0:
	// lvx128 v63,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,-16
	r30.s64 = r30.s64 + -16;
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v63,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bdnz 0x8240a2e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240A2E0;
loc_8240A2F8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8240a31c
	if (ctx.cr6.eq) goto loc_8240A31C;
loc_8240A300:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409ca8
	ctx.lr = 0x8240A310;
	sub_82409CA8(ctx, base);
	// subf. r30,r29,r30
	r30.u64 = r30.u64 - r29.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r31,r31,r26
	r31.u64 = r31.u64 + r26.u64;
	// bne 0x8240a300
	if (!ctx.cr0.eq) goto loc_8240A300;
loc_8240A31C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8241A750) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8241a834
	if (!ctx.cr6.lt) goto loc_8241A834;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-30112(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30112);
	ctx.f0.f64 = double(temp.f32);
loc_8241A7AC:
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r10,r10,28,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// rlwinm r10,r10,20,12,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFF;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x8241a7ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241A7AC;
loc_8241A834:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241a850
	if (ctx.cr6.eq) goto loc_8241A850;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x8241A850;
	sub_82413D40(ctx, base);
loc_8241A850:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241a86c
	if (ctx.cr6.eq) goto loc_8241A86C;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82414110
	ctx.lr = 0x8241A86C;
	sub_82414110(ctx, base);
loc_8241A86C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8241C5E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8241C5F0;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f38
	ctx.lr = 0x8241C5F8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8241c624
	if (!ctx.cr6.eq) goto loc_8241C624;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8241ca2c
	goto loc_8241CA2C;
loc_8241C624:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8241c654
	if (ctx.cr6.lt) goto loc_8241C654;
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8241c654
	if (!ctx.cr6.lt) goto loc_8241C654;
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8241c654
	if (ctx.cr6.lt) goto loc_8241C654;
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8241ca28
	if (ctx.cr6.lt) goto loc_8241CA28;
loc_8241C654:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241c2b8
	ctx.lr = 0x8241C65C;
	sub_8241C2B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8241ca2c
	if (ctx.cr0.lt) goto loc_8241CA2C;
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// stw r30,136(r31)
	REX_STORE_U32(r31.u32 + 136, r30.u32);
	// addi r10,r29,1
	ctx.r10.s64 = r29.s64 + 1;
	// stw r29,148(r31)
	REX_STORE_U32(r31.u32 + 148, r29.u32);
	// stw r11,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r11.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r10,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r10.u32);
	// beq cr6,0x8241ca28
	if (ctx.cr6.eq) goto loc_8241CA28;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lis r5,6184
	ctx.r5.s64 = 405274624;
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 100);
	// mullw r8,r11,r30
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r6,128(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 128);
	// mullw r9,r9,r29
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r29.s32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r5,r5,75
	ctx.r5.u64 = ctx.r5.u64 | 75;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// blt cr6,0x8241ca28
	if (ctx.cr6.lt) goto loc_8241CA28;
	// lis r8,6184
	ctx.r8.s64 = 405274624;
	// ori r8,r8,76
	ctx.r8.u64 = ctx.r8.u64 | 76;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x8241c948
	if (!ctx.cr6.gt) goto loc_8241C948;
	// lis r8,6688
	ctx.r8.s64 = 438304768;
	// ori r8,r8,74
	ctx.r8.u64 = ctx.r8.u64 | 74;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x8241ca28
	if (!ctx.cr6.gt) goto loc_8241CA28;
	// lis r8,6688
	ctx.r8.s64 = 438304768;
	// ori r8,r8,76
	ctx.r8.u64 = ctx.r8.u64 | 76;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x8241ca28
	if (ctx.cr6.gt) goto loc_8241CA28;
	// lwz r8,140(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 140);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8241ca28
	if (!ctx.cr6.lt) goto loc_8241CA28;
	// addi r11,r6,-8
	ctx.r11.s64 = ctx.r6.s64 + -8;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// lfs f11,1996(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f11.f64 = double(temp.f32);
	// lis r3,-32249
	ctx.r3.s64 = -2113470464;
	// lfs f12,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lfs f29,-7156(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -7156);
	f29.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f30,-7160(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -7160);
	f30.f64 = double(temp.f32);
	// lfs f31,-7164(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -7164);
	f31.f64 = double(temp.f32);
	// lfs f4,-7168(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + -7168);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,-7172(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -7172);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,28452(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 28452);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,-8492(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -8492);
	ctx.f3.f64 = double(temp.f32);
loc_8241C750:
	// lhz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r7,2(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// rlwinm r4,r8,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// rlwinm r6,r8,8,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00;
	// lwz r5,168(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 168);
	// rlwinm r29,r7,8,16,23
	r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF00;
	// stfs f12,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// rlwinm r28,r7,24,8,31
	r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// or r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 | ctx.r4.u64;
	// or r4,r29,r28
	ctx.r4.u64 = r29.u64 | r28.u64;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r30,r8,8,16,23
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00;
	// srw r4,r4,r3
	ctx.r4.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r3.u8 & 0x3F));
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// std r4,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// or r8,r30,r8
	ctx.r8.u64 = r30.u64 | ctx.r8.u64;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// srw r8,r8,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r3.u8 & 0x3F));
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// srw r6,r6,r5
	ctx.r6.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r5.u8 & 0x3F));
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// rlwinm r8,r7,8,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF00;
	// rlwinm r7,r7,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// std r6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// srw r8,r8,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r5.u8 & 0x3F));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// std r8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f9,104(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fsubs f0,f0,f3
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// fsubs f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// fsubs f10,f10,f2
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f2.f64));
	// fsubs f5,f9,f3
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// fmuls f28,f0,f4
	f28.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f9,f13,f31
	ctx.f9.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmuls f8,f10,f1
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f6,f13,f29
	ctx.f6.f64 = double(float(ctx.f13.f64 * f29.f64));
	// fmuls f7,f10,f30
	ctx.f7.f64 = double(float(ctx.f10.f64 * f30.f64));
	// fsubs f13,f28,f9
	ctx.f13.f64 = double(float(f28.f64 - ctx.f9.f64));
	// fadds f0,f28,f8
	ctx.f0.f64 = double(float(f28.f64 + ctx.f8.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fadds f10,f6,f28
	ctx.f10.f64 = double(float(ctx.f6.f64 + f28.f64));
	// stfs f10,16(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fsubs f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8241c85c
	if (!ctx.cr6.lt) goto loc_8241C85C;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x8241c868
	goto loc_8241C868;
loc_8241C85C:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8241c868
	if (!ctx.cr6.gt) goto loc_8241C868;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8241C868:
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x8241c87c
	if (!ctx.cr6.lt) goto loc_8241C87C;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// b 0x8241c888
	goto loc_8241C888;
loc_8241C87C:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x8241c888
	if (!ctx.cr6.gt) goto loc_8241C888;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_8241C888:
	// stfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x8241c89c
	if (!ctx.cr6.lt) goto loc_8241C89C;
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// b 0x8241c8a8
	goto loc_8241C8A8;
loc_8241C89C:
	// fcmpu cr6,f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// ble cr6,0x8241c8a8
	if (!ctx.cr6.gt) goto loc_8241C8A8;
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
loc_8241C8A8:
	// fmuls f13,f5,f4
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// stfs f10,16(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f12,36(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// fsubs f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fadds f0,f13,f8
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fadds f10,f13,f6
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// stfs f10,32(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// fsubs f13,f9,f7
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8241c8e0
	if (!ctx.cr6.lt) goto loc_8241C8E0;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x8241c8ec
	goto loc_8241C8EC;
loc_8241C8E0:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8241c8ec
	if (!ctx.cr6.gt) goto loc_8241C8EC;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8241C8EC:
	// stfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x8241c900
	if (!ctx.cr6.lt) goto loc_8241C900;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// b 0x8241c90c
	goto loc_8241C90C;
loc_8241C900:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x8241c90c
	if (!ctx.cr6.gt) goto loc_8241C90C;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_8241C90C:
	// stfs f13,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x8241c920
	if (!ctx.cr6.lt) goto loc_8241C920;
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// b 0x8241c92c
	goto loc_8241C92C;
loc_8241C920:
	// fcmpu cr6,f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// ble cr6,0x8241c92c
	if (!ctx.cr6.gt) goto loc_8241C92C;
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
loc_8241C92C:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stfsu f10,32(r11)
	ctx.fpscr.disableFlushMode();
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lwz r8,140(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8241c750
	if (ctx.cr6.lt) goto loc_8241C750;
	// b 0x8241ca28
	goto loc_8241CA28;
loc_8241C948:
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 140);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8241ca28
	if (!ctx.cr6.lt) goto loc_8241CA28;
	// addi r10,r9,-2
	ctx.r10.s64 = ctx.r9.s64 + -2;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// lfs f0,-13044(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -13044);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
loc_8241C970:
	// lwz r6,168(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 168);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// lwz r4,172(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lhz r7,2(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// lhzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// srw r5,r7,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// stfs f13,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// srw r3,r9,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r4.u8 & 0x3F));
	// srw r7,r7,r4
	ctx.r7.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r4.u8 & 0x3F));
	// srw r9,r9,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// std r5,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f9,80(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// std r4,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,20(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsu f13,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8241c970
	if (ctx.cr6.lt) goto loc_8241C970;
loc_8241CA28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241CA2C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f84
	ctx.lr = 0x8241CA38;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8242DDB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e78
	ctx.lr = 0x8242DDC0;
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r25,r3,44
	r25.s64 = ctx.r3.s64 + 44;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242DE00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8243a300
	ctx.lr = 0x8242DE08;
	sub_8243A300(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,358
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 358, ctx.xer);
	// bne cr6,0x8242de48
	if (!ctx.cr6.eq) goto loc_8242DE48;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7712
	ctx.r3.s64 = ctx.r11.s64 + 7712;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// li r4,624
	ctx.r4.s64 = 624;
	// bl 0x8242c3b0
	ctx.lr = 0x8242DE30;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8242dec4
	if (ctx.cr0.eq) goto loc_8242DEC4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824396c0
	ctx.lr = 0x8242DE44;
	sub_824396C0(ctx, base);
	// b 0x8242debc
	goto loc_8242DEBC;
loc_8242DE48:
	// cmplwi cr6,r11,353
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 353, ctx.xer);
	// beq cr6,0x8242de8c
	if (ctx.cr6.eq) goto loc_8242DE8C;
	// cmplwi cr6,r11,354
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 354, ctx.xer);
	// beq cr6,0x8242de8c
	if (ctx.cr6.eq) goto loc_8242DE8C;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7712
	ctx.r3.s64 = ctx.r11.s64 + 7712;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// li r4,492
	ctx.r4.s64 = 492;
	// bl 0x8242c3b0
	ctx.lr = 0x8242DE74;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8242dec4
	if (ctx.cr0.eq) goto loc_8242DEC4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82435c70
	ctx.lr = 0x8242DE88;
	sub_82435C70(ctx, base);
	// b 0x8242debc
	goto loc_8242DEBC;
loc_8242DE8C:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7712
	ctx.r3.s64 = ctx.r11.s64 + 7712;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// li r4,744
	ctx.r4.s64 = 744;
	// bl 0x8242c3b0
	ctx.lr = 0x8242DEA8;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8242dec4
	if (ctx.cr0.eq) goto loc_8242DEC4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82437880
	ctx.lr = 0x8242DEBC;
	sub_82437880(ctx, base);
loc_8242DEBC:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8242dec8
	goto loc_8242DEC8;
loc_8242DEC4:
	// li r31,0
	r31.s64 = 0;
loc_8242DEC8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8242dee0
	if (!ctx.cr6.eq) goto loc_8242DEE0;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// b 0x8242df98
	goto loc_8242DF98;
loc_8242DEE0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242DF08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// blt 0x8242df64
	if (ctx.cr0.lt) goto loc_8242DF64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r28,192
	ctx.r3.s64 = r28.s64 + 192;
	// bl 0x8242d770
	ctx.lr = 0x8242DF20;
	sub_8242D770(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8242df58
	if (ctx.cr0.eq) goto loc_8242DF58;
	// li r30,0
	r30.s64 = 0;
	// rlwinm. r11,r26,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// beq 0x8242df50
	if (ctx.cr0.eq) goto loc_8242DF50;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8242cc00
	ctx.lr = 0x8242DF44;
	sub_8242CC00(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// blt 0x8242df64
	if (ctx.cr0.lt) goto loc_8242DF64;
loc_8242DF50:
	// stw r31,0(r24)
	REX_STORE_U32(r24.u32 + 0, r31.u32);
	// b 0x8242df98
	goto loc_8242DF98;
loc_8242DF58:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_8242DF64:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242DF7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242DF94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82473600
	ctx.lr = 0x8242DF98;
	sub_82473600(ctx, base);
loc_8242DF98:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242DFAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x8242dfbc
	if (!ctx.cr6.lt) goto loc_8242DFBC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8242c890
	ctx.lr = 0x8242DFBC;
	sub_8242C890(ctx, base);
loc_8242DFBC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82443000
	ctx.lr = 0x8242DFC4;
	sub_82443000(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82436FA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82436FA8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82436FD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82435b40
	ctx.lr = 0x82436FD8;
	sub_82435B40(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7712
	ctx.r3.s64 = ctx.r11.s64 + 7712;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x8242c3b0
	ctx.lr = 0x82436FF4;
	sub_8242C3B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x824370d8
	if (ctx.cr0.eq) goto loc_824370D8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,104(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 104);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82437044
	if (ctx.cr6.eq) goto loc_82437044;
	// lwz r11,104(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 104);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82437080
	goto loc_82437080;
loc_82437044:
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243706c
	if (!ctx.cr6.eq) goto loc_8243706C;
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,-4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// b 0x82437080
	goto loc_82437080;
loc_8243706C:
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
loc_82437080:
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// lwz r3,652(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 652);
	// bl 0x8247c0e8
	ctx.lr = 0x824370B0;
	sub_8247C0E8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bge 0x824370c4
	if (!ctx.cr0.lt) goto loc_824370C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x824370C0;
	sub_82473600(ctx, base);
	// b 0x82437100
	goto loc_82437100;
loc_824370C4:
	// addi r3,r29,188
	ctx.r3.s64 = r29.s64 + 188;
	// lwz r4,32(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 32);
	// bl 0x82435ac0
	ctx.lr = 0x824370D0;
	sub_82435AC0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824370e4
	if (!ctx.cr0.eq) goto loc_824370E4;
loc_824370D8:
	// lis r28,-32761
	r28.s64 = -2147024896;
	// ori r28,r28,14
	r28.u64 = r28.u64 | 14;
	// b 0x82437100
	goto loc_82437100;
loc_824370E4:
	// lwz r3,184(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 184);
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824370FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_82437100:
	// lwz r11,88(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 88);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82437118;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8243B880) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8243B888;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8243b8e0
	if (!ctx.cr6.gt) goto loc_8243B8E0;
	// li r30,0
	r30.s64 = 0;
loc_8243B8A4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r3,64(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8243b8cc
	if (ctx.cr6.eq) goto loc_8243B8CC;
	// bl 0x824d4bcc
	ctx.lr = 0x8243B8BC;
	__imp__XMAReleaseContext(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r10,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
loc_8243B8CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,96
	r30.s64 = r30.s64 + 96;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8243b8a4
	if (ctx.cr6.lt) goto loc_8243B8A4;
loc_8243B8E0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,0,14,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8243D070) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x8243cea8
	sub_8243CEA8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8243D190) {
	REX_FUNC_PROLOGUE();
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e74
	ctx.lr = 0x8243D198;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	r24.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r30,r24
	r30.u64 = r24.u64;
	// bl 0x8242b7d0
	ctx.lr = 0x8243D1BC;
	sub_8242B7D0(ctx, base);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// blt 0x8243d218
	if (ctx.cr0.lt) goto loc_8243D218;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// lhz r30,2(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// mulli r11,r30,3
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(3));
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8243d1e8
	if (!ctx.cr6.gt) goto loc_8243D1E8;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_8243D1E8:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7712
	ctx.r3.s64 = ctx.r11.s64 + 7712;
	// ori r5,r5,10
	ctx.r5.u64 = ctx.r5.u64 | 10;
	// bl 0x8242c3b0
	ctx.lr = 0x8243D200;
	sub_8242C3B0(ctx, base);
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r23,r10,r11
	r23.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_8243D218:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lhz r27,14(r11)
	r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r29,2(r11)
	r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// mr r25,r27
	r25.u64 = r27.u64;
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x8243d238
	if (!ctx.cr6.eq) goto loc_8243D238;
	// lhz r25,18(r11)
	r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
loc_8243D238:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// blt cr6,0x8243d4a8
	if (ctx.cr6.lt) goto loc_8243D4A8;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f13,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// mulli r5,r30,12
	ctx.r5.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(12));
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lfs f0,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// li r4,0
	ctx.r4.s64 = 0;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stw r30,72(r31)
	REX_STORE_U32(r31.u32 + 72, r30.u32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// stw r24,76(r31)
	REX_STORE_U32(r31.u32 + 76, r24.u32);
	// stw r24,64(r31)
	REX_STORE_U32(r31.u32 + 64, r24.u32);
	// stw r9,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r9.u32);
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// bl 0x822d5870
	ctx.lr = 0x8243D2B8;
	sub_822D5870(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// stw r24,104(r31)
	REX_STORE_U32(r31.u32 + 104, r24.u32);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8243d2f4
	if (!ctx.cr6.eq) goto loc_8243D2F4;
	// lfs f13,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8243d2f4
	if (!ctx.cr6.eq) goto loc_8243D2F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243D2F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243D2F4:
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x8243a300
	ctx.lr = 0x8243D2FC;
	sub_8243A300(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8243d454
	if (!ctx.cr6.eq) goto loc_8243D454;
	// cmplwi cr6,r27,32
	ctx.cr6.compare<uint32_t>(r27.u32, 32, ctx.xer);
	// bne cr6,0x8243d39c
	if (!ctx.cr6.eq) goto loc_8243D39C;
	// cmplwi cr6,r25,32
	ctx.cr6.compare<uint32_t>(r25.u32, 32, ctx.xer);
	// bne cr6,0x8243d344
	if (!ctx.cr6.eq) goto loc_8243D344;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82450f40
	ctx.lr = 0x8243D324;
	sub_82450F40(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r6,7
	ctx.r6.s64 = 7;
	// li r3,6
	ctx.r3.s64 = 6;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x82434088
	ctx.lr = 0x8243D33C;
	sub_82434088(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8243d478
	goto loc_8243D478;
loc_8243D344:
	// cmplwi cr6,r25,24
	ctx.cr6.compare<uint32_t>(r25.u32, 24, ctx.xer);
	// bne cr6,0x8243d374
	if (!ctx.cr6.eq) goto loc_8243D374;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82450f40
	ctx.lr = 0x8243D354;
	sub_82450F40(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r6,7
	ctx.r6.s64 = 7;
	// li r3,5
	ctx.r3.s64 = 5;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x82434088
	ctx.lr = 0x8243D36C;
	sub_82434088(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8243d478
	goto loc_8243D478;
loc_8243D374:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82450f40
	ctx.lr = 0x8243D37C;
	sub_82450F40(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r6,7
	ctx.r6.s64 = 7;
	// li r3,3
	ctx.r3.s64 = 3;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x82434088
	ctx.lr = 0x8243D394;
	sub_82434088(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8243d478
	goto loc_8243D478;
loc_8243D39C:
	// cmplwi cr6,r27,24
	ctx.cr6.compare<uint32_t>(r27.u32, 24, ctx.xer);
	// bne cr6,0x8243d3fc
	if (!ctx.cr6.eq) goto loc_8243D3FC;
	// cmplwi cr6,r25,24
	ctx.cr6.compare<uint32_t>(r25.u32, 24, ctx.xer);
	// bne cr6,0x8243d3d4
	if (!ctx.cr6.eq) goto loc_8243D3D4;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82450f40
	ctx.lr = 0x8243D3B4;
	sub_82450F40(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r6,7
	ctx.r6.s64 = 7;
	// li r3,4
	ctx.r3.s64 = 4;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x82434088
	ctx.lr = 0x8243D3CC;
	sub_82434088(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8243d478
	goto loc_8243D478;
loc_8243D3D4:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82450f40
	ctx.lr = 0x8243D3DC;
	sub_82450F40(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r6,7
	ctx.r6.s64 = 7;
	// li r3,2
	ctx.r3.s64 = 2;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x82434088
	ctx.lr = 0x8243D3F4;
	sub_82434088(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8243d478
	goto loc_8243D478;
loc_8243D3FC:
	// cmplwi cr6,r27,16
	ctx.cr6.compare<uint32_t>(r27.u32, 16, ctx.xer);
	// bne cr6,0x8243d42c
	if (!ctx.cr6.eq) goto loc_8243D42C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82450f40
	ctx.lr = 0x8243D40C;
	sub_82450F40(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r6,7
	ctx.r6.s64 = 7;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x82434088
	ctx.lr = 0x8243D424;
	sub_82434088(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8243d478
	goto loc_8243D478;
loc_8243D42C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82450f40
	ctx.lr = 0x8243D434;
	sub_82450F40(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r6,7
	ctx.r6.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x82434088
	ctx.lr = 0x8243D44C;
	sub_82434088(ctx, base);
	// stw r24,60(r31)
	REX_STORE_U32(r31.u32 + 60, r24.u32);
	// b 0x8243d47c
	goto loc_8243D47C;
loc_8243D454:
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x82450f40
	ctx.lr = 0x8243D45C;
	sub_82450F40(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r6,7
	ctx.r6.s64 = 7;
	// li r3,7
	ctx.r3.s64 = 7;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x82434088
	ctx.lr = 0x8243D474;
	sub_82434088(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
loc_8243D478:
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
loc_8243D47C:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243d498
	if (ctx.cr6.eq) goto loc_8243D498;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8243d4a0
	if (!ctx.cr6.eq) goto loc_8243D4A0;
loc_8243D498:
	// lis r23,-30569
	r23.s64 = -2003369984;
	// ori r23,r23,1
	r23.u64 = r23.u64 | 1;
loc_8243D4A0:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bge cr6,0x8243d4b0
	if (!ctx.cr6.lt) goto loc_8243D4B0;
loc_8243D4A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243d108
	ctx.lr = 0x8243D4B0;
	sub_8243D108(ctx, base);
loc_8243D4B0:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_8244DA18) {
	REX_FUNC_PROLOGUE();
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e68
	ctx.lr = 0x8244DA20;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// dcbt r0,r3
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f13,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r11,4
	ctx.r11.s64 = 4;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// rlwinm r9,r5,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFF0;
	// lfd f0,-25984(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -25984);
	// li r7,16
	ctx.r7.s64 = 16;
	// fmul f12,f1,f0
	ctx.f12.f64 = ctx.f1.f64 * ctx.f0.f64;
	// rlwinm r25,r5,0,28,29
	r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xC;
	// fmul f11,f13,f0
	ctx.f11.f64 = ctx.f13.f64 * ctx.f0.f64;
	// clrlwi r24,r5,30
	r24.u64 = ctx.r5.u32 & 0x3;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// fctidz f10,f12
	ctx.f10.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fctidz f9,f11
	ctx.f9.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// stfd f9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lvlx128 v57,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// ld r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// rldicr r27,r10,3,60
	r27.u64 = __builtin_rotateleft64(ctx.r10.u64, 3) & 0xFFFFFFFFFFFFFFF8;
	// vspltw128 v31,v57,0
	simde_mm_store_si128((simde__m128i*)v31.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xFF));
	// lvlx128 v56,r11,r6
	temp.u32 = ctx.r11.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v8,v56,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), 0xFF));
	// vadduwm v0,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)v31.u32), simde_mm_load_si128((simde__m128i*)v31.u32)));
	// vsldoi128 v55,v63,v31,4
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)v31.u8), 12));
	// vadduwm v9,v31,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)v31.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vsldoi128 v54,v55,v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 12));
	// vadduwm v30,v0,v0
	simde_mm_store_si128((simde__m128i*)v30.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vsldoi128 v0,v54,v9,4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), 12));
	// vadduwm v6,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)v30.u32), simde_mm_load_si128((simde__m128i*)v30.u32)));
	// vadduwm v7,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)v30.u32)));
	// vadduwm v0,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vadduwm v9,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vadduwm v8,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vadduwm v7,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vadduwm v6,v8,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// beq cr6,0x8244dda4
	if (ctx.cr6.eq) goto loc_8244DDA4;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// vspltisw128 v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x1)));
	// addi r8,r4,32
	ctx.r8.s64 = ctx.r4.s64 + 32;
	// rlwinm r9,r9,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// li r26,256
	r26.s64 = 256;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8244DAF4:
	// add r9,r27,r3
	ctx.r9.u64 = r27.u64 + ctx.r3.u64;
	// rldicl r30,r3,32,32
	r30.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF;
	// clrldi r5,r9,32
	ctx.r5.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicl r9,r9,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// add r6,r10,r3
	ctx.r6.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rldicl r29,r5,32,32
	r29.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + r31.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// rldicl r28,r5,32,32
	r28.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF;
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r28,2,0,29
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r30,r9
	r30.u64 = r30.u64 + ctx.r9.u64;
	// lvlx128 v53,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v52,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r3,r29,r9
	ctx.r3.u64 = r29.u64 + ctx.r9.u64;
	// rldicl r28,r6,32,32
	r28.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF;
	// vsldoi128 v51,v12,v53,4
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), 12));
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// vsldoi128 v50,v61,v52,4
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), 12));
	// lvlx128 v49,r29,r9
	temp.u32 = r29.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lvlx128 v48,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rldicl r29,r5,32,32
	r29.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF;
	// lvlx128 v47,r30,r11
	temp.u32 = r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r30,r28,2,0,29
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v46,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r3,r30,r31
	ctx.r3.u64 = r30.u64 + r31.u64;
	// vsldoi128 v45,v13,v48,4
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), 12));
	// rldicl r30,r5,32,32
	r30.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF;
	// vsldoi128 v44,v62,v47,4
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), 12));
	// rldicl r28,r6,32,32
	r28.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r29,r29,2,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// vsldoi128 v43,v45,v49,4
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), 12));
	// lvlx128 v42,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rldicl r21,r6,32,32
	r21.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF;
	// lvlx128 v41,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r29,r9
	r30.u64 = r29.u64 + ctx.r9.u64;
	// vsldoi128 v40,v44,v46,4
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), 12));
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// vsldoi128 v39,v51,v42,4
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), 12));
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vsldoi128 v38,v50,v41,4
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), 12));
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lvlx128 v37,r29,r9
	temp.u32 = r29.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rldicl r20,r6,32,32
	r20.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF;
	// lvlx128 v36,r30,r11
	temp.u32 = r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rldicl r30,r5,32,32
	r30.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF;
	// lvlx128 v35,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lvlx128 v34,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// vsldoi128 v33,v43,v37,4
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), 12));
	// rldicl r29,r6,32,32
	r29.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + r31.u64;
	// vsldoi128 v32,v40,v36,4
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v36.u8), 12));
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// vsldoi128 v13,v33,v35,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8), 12));
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vsldoi128 v62,v32,v34,4
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v34.u8), 12));
	// add r30,r30,r9
	r30.u64 = r30.u64 + ctx.r9.u64;
	// lvlx128 v61,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rldicl r28,r5,32,32
	r28.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF;
	// lvlx128 v57,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r3,r21,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// vsldoi128 v56,v39,v61,4
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 12));
	// rlwinm r29,r29,2,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + r31.u64;
	// vsldoi128 v55,v38,v57,4
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), 12));
	// lvlx128 v54,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v53,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r3,r20,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// vsldoi128 v12,v56,v54,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), 12));
	// vsldoi128 v61,v55,v53,4
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), 12));
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + r31.u64;
	// rlwinm r28,r28,2,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v52,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v51,r30,r11
	temp.u32 = r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r30,r28,r9
	r30.u64 = r28.u64 + ctx.r9.u64;
	// lvlx128 v50,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v49,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rldicl r21,r6,32,32
	r21.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF;
	// lvlx128 v48,r29,r31
	temp.u32 = r29.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r3,r29,r31
	ctx.r3.u64 = r29.u64 + r31.u64;
	// rldicl r29,r5,32,32
	r29.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF;
	// lvlx128 v41,r28,r9
	temp.u32 = r28.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// vsldoi128 v44,v11,v52,4
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), 12));
	// lvlx128 v45,r30,r11
	temp.u32 = r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r30,r10,r6
	r30.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r6,r21,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// vsldoi128 v46,v59,v49,4
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), 12));
	// rlwinm r29,r29,2,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v43,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + r31.u64;
	// vsldoi128 v42,v60,v51,4
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), 12));
	// add r3,r29,r9
	ctx.r3.u64 = r29.u64 + ctx.r9.u64;
	// vsldoi128 v47,v10,v50,4
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), 12));
	// rldicl r28,r5,32,32
	r28.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF;
	// vsldoi128 v36,v44,v41,4
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), 12));
	// rldicl r30,r30,32,32
	r30.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF;
	// vsldoi128 v39,v46,v43,4
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), 12));
	// lvlx128 v38,r29,r9
	temp.u32 = r29.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r29,r28,2,0,29
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v37,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v40,v47,v48,4
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), 12));
	// lvlx128 v35,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r6,r30,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v34,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r3,r29,r9
	ctx.r3.u64 = r29.u64 + ctx.r9.u64;
	// vsldoi128 v33,v42,v45,4
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8), 12));
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + r31.u64;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// vsldoi128 v60,v36,v38,4
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 12));
	// vsldoi128 v32,v40,v37,4
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), 12));
	// rldicl r31,r5,32,32
	r31.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF;
	// vsldoi128 v59,v39,v35,4
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8), 12));
	// vsldoi128 v57,v33,v34,4
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v34.u8), 12));
	// lvlx128 v56,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v55,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r29,r31,2,0,29
	r29.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v54,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v11,v60,v56,4
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), 12));
	// lvlx128 v53,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// clrldi r3,r5,32
	ctx.r3.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// vsldoi128 v60,v57,v55,4
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), 12));
	// add r31,r29,r9
	r31.u64 = r29.u64 + ctx.r9.u64;
	// vsldoi128 v10,v32,v54,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), 12));
	// vsldoi128 v59,v59,v53,4
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), 12));
	// dcbt r31,r26
	// vsrw128 v52,v0,v63
	ctx.v52.u32[0] = ctx.v0.u32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v52.u32[1] = ctx.v0.u32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v52.u32[2] = ctx.v0.u32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v52.u32[3] = ctx.v0.u32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vsubfp128 v5,v61,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v5.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vsrw128 v51,v8,v63
	ctx.v51.u32[0] = ctx.v8.u32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v51.u32[1] = ctx.v8.u32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v51.u32[2] = ctx.v8.u32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v51.u32[3] = ctx.v8.u32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vsubfp128 v3,v59,v10
	simde_mm_store_ps(ctx.v3.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vsrw128 v50,v7,v63
	ctx.v50.u32[0] = ctx.v7.u32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v50.u32[1] = ctx.v7.u32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v50.u32[2] = ctx.v7.u32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v50.u32[3] = ctx.v7.u32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vsubfp128 v1,v60,v11
	simde_mm_store_ps(ctx.v1.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vsrw128 v49,v6,v63
	ctx.v49.u32[0] = ctx.v6.u32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v49.u32[1] = ctx.v6.u32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v49.u32[2] = ctx.v6.u32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v49.u32[3] = ctx.v6.u32[3] >> (ctx.v63.u8[12] & 0x1F);
	// addi r9,r8,-16
	ctx.r9.s64 = ctx.r8.s64 + -16;
	// vcuxwfp128 v4,v52,31
	simde_mm_store_ps(ctx.v4.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// vadduwm v0,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vcuxwfp128 v2,v51,31
	simde_mm_store_ps(ctx.v2.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v51.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// vadduwm v8,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vadduwm v7,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// addi r6,r8,16
	ctx.r6.s64 = ctx.r8.s64 + 16;
	// vadduwm v6,v6,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmaddfp v5,v5,v4,v12
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vsubfp128 v4,v62,v13
	simde_mm_store_ps(ctx.v4.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vor128 v48,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vmaddfp v5,v3,v2,v10
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vcuxwfp128 v3,v50,31
	simde_mm_store_ps(ctx.v3.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// vcuxwfp128 v2,v49,31
	simde_mm_store_ps(ctx.v2.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v49.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// stvlx128 v48,r0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// vor128 v47,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vmaddfp v5,v4,v3,v13
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v4,v1,v2,v11
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// stvrx128 v48,r4,r7
	ea = ctx.r4.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v48.u8[i]);
	// addi r4,r4,64
	ctx.r4.s64 = ctx.r4.s64 + 64;
	// stvlx128 v47,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v47.u8[15 - i]);
	// stvrx128 v47,r9,r7
	ea = ctx.r9.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v47.u8[i]);
	// stvlx v5,0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvrx v5,r8,r7
	ea = ctx.r8.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v5.u8[i]);
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// stvlx v4,0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvrx v4,r6,r7
	ea = ctx.r6.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v4.u8[i]);
	// bdnz 0x8244daf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8244DAF4;
loc_8244DDA4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8244de7c
	if (ctx.cr6.eq) goto loc_8244DE7C;
	// addi r9,r25,-1
	ctx.r9.s64 = r25.s64 + -1;
	// vspltisw128 v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x1)));
	// li r6,64
	ctx.r6.s64 = 64;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8244DDC4:
	// rldicl r8,r3,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rldicl r5,r9,32,32
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rldicl r30,r9,32,32
	r30.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lvlx128 v46,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v45,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rldicl r5,r9,32,32
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// vsldoi128 v44,v29,v46,4
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), 12));
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// vsldoi128 v43,v58,v45,4
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8), 12));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rldicl r29,r9,32,32
	r29.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// clrldi r3,r9,32
	ctx.r3.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lvlx128 v42,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v41,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// vsldoi128 v40,v44,v42,4
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), 12));
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// vsldoi128 v39,v43,v41,4
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), 12));
	// lvlx128 v38,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v37,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// vsldoi128 v36,v40,v38,4
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 12));
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// vsldoi128 v35,v39,v37,4
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), 12));
	// add r31,r9,r31
	r31.u64 = ctx.r9.u64 + r31.u64;
	// lvlx128 v34,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v33,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v29,v36,v34,4
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v34.u8), 12));
	// vsldoi128 v58,v35,v33,4
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8), 12));
	// dcbt r31,r6
	// vsrw128 v32,v0,v63
	ctx.v32.u32[0] = ctx.v0.u32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v32.u32[1] = ctx.v0.u32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v32.u32[2] = ctx.v0.u32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v32.u32[3] = ctx.v0.u32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vsubfp128 v13,v58,v29
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(v29.f32)));
	// vadduwm v0,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)v30.u32)));
	// vcuxwfp128 v12,v32,31
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v32.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// vmaddfp v13,v13,v12,v29
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(v29.f32)));
	// stvlx v13,0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvrx v13,r4,r7
	ea = ctx.r4.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// bdnz 0x8244ddc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8244DDC4;
loc_8244DE7C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8244ded8
	if (ctx.cr6.eq) goto loc_8244DED8;
	// vspltisw128 v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x1)));
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
loc_8244DE8C:
	// rldicl r8,r3,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF;
	// vsrw128 v62,v0,v63
	ctx.v62.u32[0] = ctx.v0.u32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v62.u32[1] = ctx.v0.u32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v62.u32[2] = ctx.v0.u32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v62.u32[3] = ctx.v0.u32[3] >> (ctx.v63.u8[12] & 0x1F);
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// vadduwm v0,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)v31.u32)));
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rldicl r7,r9,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// vcuxwfp128 v11,v62,31
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// clrldi r3,r9,32
	ctx.r3.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r9,r31
	r31.u64 = ctx.r9.u64 + r31.u64;
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsubfp128 v12,v61,v13
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v12,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vspltw128 v60,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// stvewx128 v60,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bdnz 0x8244de8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8244DE8C;
loc_8244DED8:
	// bl 0x822d7620
	ctx.lr = 0x8244DEDC;
	sub_822D7620(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// subf r10,r22,r31
	ctx.r10.u64 = r31.u64 - r22.u64;
	// srawi r3,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 2;
	// lfd f0,-4424(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -4424);
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// stfs f13,0(r23)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r23.u32 + 0, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_8247A4B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247a4e0
	if (ctx.cr6.eq) goto loc_8247A4E0;
	// bl 0x82460ee8
	ctx.lr = 0x8247A4DC;
	sub_82460EE8(ctx, base);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
loc_8247A4E0:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247a4f4
	if (ctx.cr6.eq) goto loc_8247A4F4;
	// bl 0x82460ee8
	ctx.lr = 0x8247A4F0;
	sub_82460EE8(ctx, base);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
loc_8247A4F4:
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8247C540) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823ce408
	ctx.lr = 0x8247C554;
	sub_823CE408(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8247c580
	if (!ctx.cr6.eq) goto loc_8247C580;
	// bl 0x822098c8
	ctx.lr = 0x8247C560;
	sub_822098C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8247c584
	if (!ctx.cr6.gt) goto loc_8247C584;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8247C580:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247C584:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8247D40C) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,196(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 196);
	// b 0x8247d444
	goto loc_8247D444;
loc_8247D444:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dcd40
	ctx.lr = 0x8247D44C;
	sub_822DCD40(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8247DA18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8247d710
	ctx.lr = 0x8247DA38;
	sub_8247D710(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8247DE38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e50
	ctx.lr = 0x8247DE40;
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	r22.s64 = 0;
	// stw r4,716(r1)
	REX_STORE_U32(ctx.r1.u32 + 716, ctx.r4.u32);
	// li r11,350
	ctx.r11.s64 = 350;
	// stw r6,732(r1)
	REX_STORE_U32(ctx.r1.u32 + 732, ctx.r6.u32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// stw r22,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r22.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// sth r22,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, r22.u16);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bne cr6,0x8247de90
	if (!ctx.cr6.eq) goto loc_8247DE90;
loc_8247DE78:
	// bl 0x822db6c0
	ctx.lr = 0x8247DE7C;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x8247DE88;
	sub_822D6910(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8247f07c
	goto loc_8247F07C;
loc_8247DE90:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8247de78
	if (ctx.cr6.eq) goto loc_8247DE78;
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8247df34
	if (!ctx.cr0.eq) goto loc_8247DF34;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822e15a8
	ctx.lr = 0x8247DEAC;
	sub_822E15A8(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r11,r11,-11584
	ctx.r11.s64 = ctx.r11.s64 + -11584;
	// addi r8,r10,104
	ctx.r8.s64 = ctx.r10.s64 + 104;
	// beq cr6,0x8247dee8
	if (ctx.cr6.eq) goto loc_8247DEE8;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x8247dee8
	if (ctx.cr6.eq) goto loc_8247DEE8;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r9,72
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(72));
	// lwzx r9,r7,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x8247deec
	goto loc_8247DEEC;
loc_8247DEE8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8247DEEC:
	// lbz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 40);
	// rlwinm. r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8247de78
	if (!ctx.cr0.eq) goto loc_8247DE78;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8247df24
	if (ctx.cr6.eq) goto loc_8247DF24;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x8247df24
	if (ctx.cr6.eq) goto loc_8247DF24;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r9,72
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(72));
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8247df28
	goto loc_8247DF28;
loc_8247DF24:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8247DF28:
	// lbz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8247de78
	if (!ctx.cr0.eq) goto loc_8247DE78;
loc_8247DF34:
	// lbz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U8(r31.u32 + 0);
	// mr r14,r22
	r14.u64 = r22.u64;
	// stb r22,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r22.u8);
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8247f078
	if (ctx.cr0.eq) goto loc_8247F078;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r19,716(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// addi r10,r10,-2112
	ctx.r10.s64 = ctx.r10.s64 + -2112;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_8247DF68:
	// bl 0x822dcab8
	ctx.lr = 0x8247DF6C;
	sub_822DCAB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8247dfe4
	if (ctx.cr0.eq) goto loc_8247DFE4;
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
loc_8247DF78:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r11.u32);
	// blt 0x8247dfa0
	if (ctx.cr0.lt) goto loc_8247DFA0;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r31,0(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x8247dfac
	goto loc_8247DFAC;
loc_8247DFA0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822e66e8
	ctx.lr = 0x8247DFA8;
	sub_822E66E8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8247DFAC:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(r31.s32, -1, ctx.xer);
	// beq cr6,0x8247dfd0
	if (ctx.cr6.eq) goto loc_8247DFD0;
	// clrlwi r3,r31,24
	ctx.r3.u64 = r31.u32 & 0xFF;
	// bl 0x822dcab8
	ctx.lr = 0x8247DFBC;
	sub_822DCAB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8247df78
	if (!ctx.cr0.eq) goto loc_8247DF78;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e6468
	ctx.lr = 0x8247DFD0;
	sub_822E6468(ctx, base);
loc_8247DFD0:
	// lbzu r3,1(r19)
	ea = 1 + r19.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	r19.u32 = ea;
	// bl 0x822dcab8
	ctx.lr = 0x8247DFD8;
	sub_822DCAB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8247dfd0
	if (!ctx.cr0.eq) goto loc_8247DFD0;
	// b 0x8247f008
	goto loc_8247F008;
loc_8247DFE4:
	// lbz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U8(r19.u32 + 0);
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x8247ef40
	if (!ctx.cr6.eq) goto loc_8247EF40;
	// lbz r10,1(r19)
	ctx.r10.u64 = REX_LOAD_U8(r19.u32 + 1);
	// cmplwi cr6,r10,37
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 37, ctx.xer);
	// beq cr6,0x8247ef24
	if (ctx.cr6.eq) goto loc_8247EF24;
	// li r27,0
	r27.s64 = 0;
	// li r16,1
	r16.s64 = 1;
	// mr r23,r27
	r23.u64 = r27.u64;
	// mr r18,r27
	r18.u64 = r27.u64;
	// mr r17,r27
	r17.u64 = r27.u64;
	// mr r15,r27
	r15.u64 = r27.u64;
	// mr r25,r27
	r25.u64 = r27.u64;
	// mr r20,r27
	r20.u64 = r27.u64;
	// mr r29,r27
	r29.u64 = r27.u64;
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r24,r27
	r24.u64 = r27.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
	// mr r21,r27
	r21.u64 = r27.u64;
loc_8247E030:
	// lbzu r31,1(r19)
	ea = 1 + r19.u32;
	r31.u64 = REX_LOAD_U8(ea);
	r19.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r19,716(r1)
	REX_STORE_U32(ctx.r1.u32 + 716, r19.u32);
	// bl 0x822dca78
	ctx.lr = 0x8247E040;
	sub_822DCA78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8247e05c
	if (ctx.cr0.eq) goto loc_8247E05C;
	// mulli r11,r15,10
	ctx.r11.s64 = static_cast<int64_t>(r15.u64 * static_cast<uint64_t>(10));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// addi r15,r11,-48
	r15.s64 = ctx.r11.s64 + -48;
	// b 0x8247e198
	goto loc_8247E198;
loc_8247E05C:
	// cmpwi cr6,r31,78
	ctx.cr6.compare<int32_t>(r31.s32, 78, ctx.xer);
	// bgt cr6,0x8247e11c
	if (ctx.cr6.gt) goto loc_8247E11C;
	// beq cr6,0x8247e198
	if (ctx.cr6.eq) goto loc_8247E198;
	// cmpwi cr6,r31,42
	ctx.cr6.compare<int32_t>(r31.s32, 42, ctx.xer);
	// beq cr6,0x8247e10c
	if (ctx.cr6.eq) goto loc_8247E10C;
	// cmpwi cr6,r31,70
	ctx.cr6.compare<int32_t>(r31.s32, 70, ctx.xer);
	// beq cr6,0x8247e198
	if (ctx.cr6.eq) goto loc_8247E198;
	// cmpwi cr6,r31,73
	ctx.cr6.compare<int32_t>(r31.s32, 73, ctx.xer);
	// beq cr6,0x8247e094
	if (ctx.cr6.eq) goto loc_8247E094;
	// cmpwi cr6,r31,76
	ctx.cr6.compare<int32_t>(r31.s32, 76, ctx.xer);
	// bne cr6,0x8247e134
	if (!ctx.cr6.eq) goto loc_8247E134;
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8247e194
	goto loc_8247E194;
loc_8247E094:
	// lwz r19,716(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
	// lbz r10,1(r19)
	ctx.r10.u64 = REX_LOAD_U8(r19.u32 + 1);
	// cmplwi cr6,r10,54
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 54, ctx.xer);
	// bne cr6,0x8247e0c8
	if (!ctx.cr6.eq) goto loc_8247E0C8;
	// lbz r9,2(r19)
	ctx.r9.u64 = REX_LOAD_U8(r19.u32 + 2);
	// addi r11,r19,2
	ctx.r11.s64 = r19.s64 + 2;
	// cmplwi cr6,r9,52
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 52, ctx.xer);
	// bne cr6,0x8247e0c8
	if (!ctx.cr6.eq) goto loc_8247E0C8;
loc_8247E0B4:
	// std r27,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r27.u64);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
loc_8247E0BC:
	// mr r19,r11
	r19.u64 = ctx.r11.u64;
	// stw r11,716(r1)
	REX_STORE_U32(ctx.r1.u32 + 716, ctx.r11.u32);
	// b 0x8247e19c
	goto loc_8247E19C;
loc_8247E0C8:
	// cmplwi cr6,r10,51
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 51, ctx.xer);
	// bne cr6,0x8247e0e0
	if (!ctx.cr6.eq) goto loc_8247E0E0;
	// lbz r9,2(r19)
	ctx.r9.u64 = REX_LOAD_U8(r19.u32 + 2);
	// addi r11,r19,2
	ctx.r11.s64 = r19.s64 + 2;
	// cmplwi cr6,r9,50
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 50, ctx.xer);
	// beq cr6,0x8247e0bc
	if (ctx.cr6.eq) goto loc_8247E0BC;
loc_8247E0E0:
	// cmplwi cr6,r10,100
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 100, ctx.xer);
	// beq cr6,0x8247e19c
	if (ctx.cr6.eq) goto loc_8247E19C;
	// cmplwi cr6,r10,105
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 105, ctx.xer);
	// beq cr6,0x8247e19c
	if (ctx.cr6.eq) goto loc_8247E19C;
	// cmplwi cr6,r10,111
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 111, ctx.xer);
	// beq cr6,0x8247e19c
	if (ctx.cr6.eq) goto loc_8247E19C;
	// cmplwi cr6,r10,120
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 120, ctx.xer);
	// beq cr6,0x8247e19c
	if (ctx.cr6.eq) goto loc_8247E19C;
	// cmplwi cr6,r10,88
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 88, ctx.xer);
	// bne cr6,0x8247e138
	if (!ctx.cr6.eq) goto loc_8247E138;
	// b 0x8247e19c
	goto loc_8247E19C;
loc_8247E10C:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r29,r11
	r29.s64 = ctx.r11.s8;
	// b 0x8247e198
	goto loc_8247E198;
loc_8247E11C:
	// cmpwi cr6,r31,104
	ctx.cr6.compare<int32_t>(r31.s32, 104, ctx.xer);
	// beq cr6,0x8247e180
	if (ctx.cr6.eq) goto loc_8247E180;
	// cmpwi cr6,r31,108
	ctx.cr6.compare<int32_t>(r31.s32, 108, ctx.xer);
	// beq cr6,0x8247e148
	if (ctx.cr6.eq) goto loc_8247E148;
	// cmpwi cr6,r31,119
	ctx.cr6.compare<int32_t>(r31.s32, 119, ctx.xer);
	// beq cr6,0x8247e16c
	if (ctx.cr6.eq) goto loc_8247E16C;
loc_8247E134:
	// lwz r19,716(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
loc_8247E138:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r30,r11
	r30.s64 = ctx.r11.s8;
	// b 0x8247e19c
	goto loc_8247E19C;
loc_8247E148:
	// lwz r19,716(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
	// addi r11,r19,1
	ctx.r11.s64 = r19.s64 + 1;
	// lbz r10,1(r19)
	ctx.r10.u64 = REX_LOAD_U8(r19.u32 + 1);
	// cmplwi cr6,r10,108
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 108, ctx.xer);
	// beq cr6,0x8247e0b4
	if (ctx.cr6.eq) goto loc_8247E0B4;
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r16,r11
	r16.s64 = ctx.r11.s8;
	// b 0x8247e170
	goto loc_8247E170;
loc_8247E16C:
	// lwz r19,716(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
loc_8247E170:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r28,r11
	r28.s64 = ctx.r11.s8;
	// b 0x8247e19c
	goto loc_8247E19C;
loc_8247E180:
	// extsb r10,r28
	ctx.r10.s64 = r28.s8;
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsb r28,r10
	r28.s64 = ctx.r10.s8;
loc_8247E194:
	// extsb r16,r11
	r16.s64 = ctx.r11.s8;
loc_8247E198:
	// lwz r19,716(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
loc_8247E19C:
	// extsb. r11,r30
	ctx.r11.s64 = r30.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247e030
	if (ctx.cr0.eq) goto loc_8247E030;
	// extsb. r11,r29
	ctx.r11.s64 = r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bne 0x8247e1d4
	if (!ctx.cr0.eq) goto loc_8247E1D4;
	// lwz r11,732(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 732);
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// rlwinm r11,r10,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,732(r1)
	REX_STORE_U32(ctx.r1.u32 + 732, ctx.r11.u32);
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x8247e1d8
	goto loc_8247E1D8;
loc_8247E1D4:
	// stw r27,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r27.u32);
loc_8247E1D8:
	// extsb. r11,r28
	ctx.r11.s64 = r28.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r27
	r29.u64 = r27.u64;
	// bne 0x8247e200
	if (!ctx.cr0.eq) goto loc_8247E200;
	// lbz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U8(r19.u32 + 0);
	// cmplwi cr6,r11,83
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 83, ctx.xer);
	// beq cr6,0x8247e1fc
	if (ctx.cr6.eq) goto loc_8247E1FC;
	// cmplwi cr6,r11,67
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 67, ctx.xer);
	// li r28,-1
	r28.s64 = -1;
	// bne cr6,0x8247e200
	if (!ctx.cr6.eq) goto loc_8247E200;
loc_8247E1FC:
	// li r28,1
	r28.s64 = 1;
loc_8247E200:
	// lwz r10,716(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// ori r19,r11,32
	r19.u64 = ctx.r11.u64 | 32;
	// cmpwi cr6,r19,110
	ctx.cr6.compare<int32_t>(r19.s32, 110, ctx.xer);
	// beq cr6,0x8247e2b8
	if (ctx.cr6.eq) goto loc_8247E2B8;
	// cmpwi cr6,r19,99
	ctx.cr6.compare<int32_t>(r19.s32, 99, ctx.xer);
	// beq cr6,0x8247e278
	if (ctx.cr6.eq) goto loc_8247E278;
	// cmpwi cr6,r19,123
	ctx.cr6.compare<int32_t>(r19.s32, 123, ctx.xer);
	// beq cr6,0x8247e278
	if (ctx.cr6.eq) goto loc_8247E278;
loc_8247E224:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r11.u32);
	// blt 0x8247e24c
	if (ctx.cr0.lt) goto loc_8247E24C;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r31,0(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x8247e258
	goto loc_8247E258;
loc_8247E24C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822e66e8
	ctx.lr = 0x8247E254;
	sub_822E66E8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8247E258:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(r31.s32, -1, ctx.xer);
	// beq cr6,0x8247e270
	if (ctx.cr6.eq) goto loc_8247E270;
	// clrlwi r3,r31,24
	ctx.r3.u64 = r31.u32 & 0xFF;
	// bl 0x822dcab8
	ctx.lr = 0x8247E268;
	sub_822DCAB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8247e224
	if (!ctx.cr0.eq) goto loc_8247E224;
loc_8247E270:
	// mr r22,r31
	r22.u64 = r31.u64;
	// b 0x8247e2ac
	goto loc_8247E2AC;
loc_8247E278:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r11.u32);
	// blt 0x8247e2a0
	if (ctx.cr0.lt) goto loc_8247E2A0;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x8247e2ac
	goto loc_8247E2AC;
loc_8247E2A0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822e66e8
	ctx.lr = 0x8247E2A8;
	sub_822E66E8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
loc_8247E2AC:
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(r22.s32, -1, ctx.xer);
	// beq cr6,0x8247f03c
	if (ctx.cr6.eq) goto loc_8247F03C;
	// lwz r10,716(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
loc_8247E2B8:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// beq cr6,0x8247e2c8
	if (ctx.cr6.eq) goto loc_8247E2C8;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// beq cr6,0x8247f028
	if (ctx.cr6.eq) goto loc_8247F028;
loc_8247E2C8:
	// addi r11,r19,-99
	ctx.r11.s64 = r19.s64 + -99;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x8247eed8
	if (ctx.cr6.gt) goto loc_8247EED8;
	// lis r12,-32244
	ctx.r12.s64 = -2113142784;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,13856
	ctx.r12.s64 = ctx.r12.s64 + 13856;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32184
	ctx.r12.s64 = -2109210624;
	// addi r12,r12,-7428
	ctx.r12.s64 = ctx.r12.s64 + -7428;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8247E2FC;
	case 1:
		goto loc_8247E7C0;
	case 2:
		goto loc_8247EB00;
	case 3:
		goto loc_8247EB00;
	case 4:
		goto loc_8247EB00;
	case 5:
		goto loc_8247EED8;
	case 6:
		goto loc_8247E658;
	case 7:
		goto loc_8247EED8;
	case 8:
		goto loc_8247EED8;
	case 9:
		goto loc_8247EED8;
	case 10:
		goto loc_8247EED8;
	case 11:
		goto loc_8247EAB0;
	case 12:
		goto loc_8247E7C0;
	case 13:
		goto loc_8247E7BC;
	case 14:
		goto loc_8247EED8;
	case 15:
		goto loc_8247EED8;
	case 16:
		goto loc_8247E30C;
	case 17:
		goto loc_8247EED8;
	case 18:
		goto loc_8247E7C0;
	case 19:
		goto loc_8247EED8;
	case 20:
		goto loc_8247EED8;
	case 21:
		goto loc_8247E65C;
	case 22:
		goto loc_8247EED8;
	case 23:
		goto loc_8247EED8;
	case 24:
		goto loc_8247E31C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8247E2FC:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// bne cr6,0x8247e30c
	if (!ctx.cr6.eq) goto loc_8247E30C;
	// li r17,1
	r17.s64 = 1;
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
loc_8247E30C:
	// extsb. r11,r28
	ctx.r11.s64 = r28.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8247e47c
	if (!ctx.cr0.gt) goto loc_8247E47C;
	// li r24,1
	r24.s64 = 1;
	// b 0x8247e47c
	goto loc_8247E47C;
loc_8247E31C:
	// extsb. r11,r28
	ctx.r11.s64 = r28.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r6,1
	ctx.r6.s64 = 1;
	// ble 0x8247e32c
	if (!ctx.cr0.gt) goto loc_8247E32C;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
loc_8247E32C:
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,716(r1)
	REX_STORE_U32(ctx.r1.u32 + 716, ctx.r7.u32);
	// lbz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// bne cr6,0x8247e348
	if (!ctx.cr6.eq) goto loc_8247E348;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// li r25,-1
	r25.s64 = -1;
loc_8247E348:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r19,123
	ctx.cr6.compare<int32_t>(r19.s32, 123, ctx.xer);
	// std r5,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// std r5,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r5.u64);
	// std r5,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r5.u64);
	// std r5,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.r5.u64);
	// bne cr6,0x8247e458
	if (!ctx.cr6.eq) goto loc_8247E458;
	// lbz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// bne cr6,0x8247e458
	if (!ctx.cr6.eq) goto loc_8247E458;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r27,93
	r27.s64 = 93;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stb r11,155(r1)
	REX_STORE_U8(ctx.r1.u32 + 155, ctx.r11.u8);
	// b 0x8247e458
	goto loc_8247E458;
loc_8247E388:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r8,45
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 45, ctx.xer);
	// bne cr6,0x8247e438
	if (!ctx.cr6.eq) goto loc_8247E438;
	// clrlwi. r9,r27,24
	ctx.r9.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8247e438
	if (ctx.cr0.eq) goto loc_8247E438;
	// lbz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r10,93
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 93, ctx.xer);
	// beq cr6,0x8247e438
	if (ctx.cr6.eq) goto loc_8247E438;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8247e3c4
	if (!ctx.cr6.lt) goto loc_8247E3C4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8247e3cc
	goto loc_8247E3CC;
loc_8247E3C4:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
loc_8247E3CC:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8247e410
	if (!ctx.cr6.lt) goto loc_8247E410;
loc_8247E3DC:
	// rlwinm r8,r11,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// clrlwi r4,r11,29
	ctx.r4.u64 = ctx.r11.u32 & 0x7;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r4,r6,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r4.u8 & 0x3F));
	// lbzx r3,r8,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// or r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 | ctx.r3.u64;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// stbx r4,r8,r9
	REX_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r4.u8);
	// blt cr6,0x8247e3dc
	if (ctx.cr6.lt) goto loc_8247E3DC;
loc_8247E410:
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// slw r10,r6,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// lbzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stbx r10,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x8247e458
	goto loc_8247E458;
loc_8247E438:
	// rlwinm r9,r8,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// clrlwi r8,r8,29
	ctx.r8.u64 = ctx.r8.u32 & 0x7;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// slw r11,r6,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r8.u8 & 0x3F));
	// lbzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stbx r11,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
loc_8247E458:
	// lbz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// bne cr6,0x8247e388
	if (!ctx.cr6.eq) goto loc_8247E388;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8247f03c
	if (ctx.cr6.eq) goto loc_8247F03C;
	// cmpwi cr6,r19,123
	ctx.cr6.compare<int32_t>(r19.s32, 123, ctx.xer);
	// bne cr6,0x8247e47c
	if (!ctx.cr6.eq) goto loc_8247E47C;
	// stw r7,716(r1)
	REX_STORE_U32(ctx.r1.u32 + 716, ctx.r7.u32);
loc_8247E47C:
	// lwz r30,88(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(r22.s32, -1, ctx.xer);
	// mr r31,r30
	r31.u64 = r30.u64;
	// beq cr6,0x8247e49c
	if (ctx.cr6.eq) goto loc_8247E49C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x822e6468
	ctx.lr = 0x8247E49C;
	sub_822E6468(ctx, base);
loc_8247E49C:
	// lwz r29,124(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
loc_8247E4A0:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// beq cr6,0x8247e4b4
	if (ctx.cr6.eq) goto loc_8247E4B4;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// addi r15,r15,-1
	r15.s64 = r15.s64 + -1;
	// beq cr6,0x8247e60c
	if (ctx.cr6.eq) goto loc_8247E60C;
loc_8247E4B4:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r11.u32);
	// blt 0x8247e4dc
	if (ctx.cr0.lt) goto loc_8247E4DC;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x8247e4e8
	goto loc_8247E4E8;
loc_8247E4DC:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822e66e8
	ctx.lr = 0x8247E4E4;
	sub_822E66E8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
loc_8247E4E8:
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(r22.s32, -1, ctx.xer);
	// beq cr6,0x8247e5f4
	if (ctx.cr6.eq) goto loc_8247E5F4;
	// cmpwi cr6,r19,99
	ctx.cr6.compare<int32_t>(r19.s32, 99, ctx.xer);
	// beq cr6,0x8247e54c
	if (ctx.cr6.eq) goto loc_8247E54C;
	// cmpwi cr6,r19,115
	ctx.cr6.compare<int32_t>(r19.s32, 115, ctx.xer);
	// bne cr6,0x8247e518
	if (!ctx.cr6.eq) goto loc_8247E518;
	// cmpwi cr6,r22,9
	ctx.cr6.compare<int32_t>(r22.s32, 9, ctx.xer);
	// blt cr6,0x8247e510
	if (ctx.cr6.lt) goto loc_8247E510;
	// cmpwi cr6,r22,13
	ctx.cr6.compare<int32_t>(r22.s32, 13, ctx.xer);
	// ble cr6,0x8247e5f4
	if (!ctx.cr6.gt) goto loc_8247E5F4;
loc_8247E510:
	// cmpwi cr6,r22,32
	ctx.cr6.compare<int32_t>(r22.s32, 32, ctx.xer);
	// bne cr6,0x8247e54c
	if (!ctx.cr6.eq) goto loc_8247E54C;
loc_8247E518:
	// cmpwi cr6,r19,123
	ctx.cr6.compare<int32_t>(r19.s32, 123, ctx.xer);
	// bne cr6,0x8247e5f4
	if (!ctx.cr6.eq) goto loc_8247E5F4;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// srawi r11,r22,3
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x7) != 0);
	ctx.r11.s64 = r22.s32 >> 3;
	// clrlwi r9,r22,29
	ctx.r9.u64 = r22.u32 & 0x7;
	// extsb r8,r25
	ctx.r8.s64 = r25.s8;
	// li r7,1
	ctx.r7.s64 = 1;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// slw r10,r7,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247e5f4
	if (ctx.cr0.eq) goto loc_8247E5F4;
loc_8247E54C:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8247e5ec
	if (!ctx.cr6.eq) goto loc_8247E5EC;
	// extsb. r11,r24
	ctx.r11.s64 = r24.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247e5d8
	if (ctx.cr0.eq) goto loc_8247E5D8;
	// stb r22,120(r1)
	REX_STORE_U8(ctx.r1.u32 + 120, r22.u8);
	// clrlwi r3,r22,24
	ctx.r3.u64 = r22.u32 & 0xFF;
	// bl 0x822e17e0
	ctx.lr = 0x8247E56C;
	sub_822E17E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8247e5a8
	if (ctx.cr0.eq) goto loc_8247E5A8;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r11.u32);
	// blt 0x8247e59c
	if (ctx.cr0.lt) goto loc_8247E59C;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x8247e5a4
	goto loc_8247E5A4;
loc_8247E59C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822e66e8
	ctx.lr = 0x8247E5A4;
	sub_822E66E8(ctx, base);
loc_8247E5A4:
	// stb r3,121(r1)
	REX_STORE_U8(ctx.r1.u32 + 121, ctx.r3.u8);
loc_8247E5A8:
	// li r10,63
	ctx.r10.s64 = 63;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// sth r10,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,172(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// bl 0x822e41e0
	ctx.lr = 0x8247E5C8;
	sub_822E41E0(ctx, base);
	// lhz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// sth r11,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r11.u16);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// b 0x8247e5e4
	goto loc_8247E5E4;
loc_8247E5D8:
	// extsb r11,r22
	ctx.r11.s64 = r22.s8;
	// stb r11,0(r30)
	REX_STORE_U8(r30.u32 + 0, ctx.r11.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_8247E5E4:
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// b 0x8247e4a0
	goto loc_8247E4A0;
loc_8247E5EC:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x8247e4a0
	goto loc_8247E4A0;
loc_8247E5F4:
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(r22.s32, -1, ctx.xer);
	// beq cr6,0x8247e60c
	if (ctx.cr6.eq) goto loc_8247E60C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x822e6468
	ctx.lr = 0x8247E60C;
	sub_822E6468(ctx, base);
loc_8247E60C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// beq cr6,0x8247f03c
	if (ctx.cr6.eq) goto loc_8247F03C;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8247ef04
	if (!ctx.cr6.eq) goto loc_8247EF04;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r19,99
	ctx.cr6.compare<int32_t>(r19.s32, 99, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x8247ef04
	if (ctx.cr6.eq) goto loc_8247EF04;
	// extsb. r11,r24
	ctx.r11.s64 = r24.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// beq 0x8247e64c
	if (ctx.cr0.eq) goto loc_8247E64C;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// b 0x8247ef04
	goto loc_8247EF04;
loc_8247E64C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x8247ef04
	goto loc_8247EF04;
loc_8247E658:
	// li r19,100
	r19.s64 = 100;
loc_8247E65C:
	// cmpwi cr6,r22,45
	ctx.cr6.compare<int32_t>(r22.s32, 45, ctx.xer);
	// bne cr6,0x8247e66c
	if (!ctx.cr6.eq) goto loc_8247E66C;
	// li r20,1
	r20.s64 = 1;
	// b 0x8247e674
	goto loc_8247E674;
loc_8247E66C:
	// cmpwi cr6,r22,43
	ctx.cr6.compare<int32_t>(r22.s32, 43, ctx.xer);
	// bne cr6,0x8247e6c0
	if (!ctx.cr6.eq) goto loc_8247E6C0;
loc_8247E674:
	// addic. r15,r15,-1
	ctx.xer.ca = r15.u32 > 0;
	r15.s64 = r15.s64 + -1;
	ctx.cr0.compare<int32_t>(r15.s32, 0, ctx.xer);
	// bne 0x8247e68c
	if (!ctx.cr0.eq) goto loc_8247E68C;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// beq cr6,0x8247e68c
	if (ctx.cr6.eq) goto loc_8247E68C;
	// li r29,1
	r29.s64 = 1;
	// b 0x8247e6c0
	goto loc_8247E6C0;
loc_8247E68C:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r11.u32);
	// blt 0x8247e6b4
	if (ctx.cr0.lt) goto loc_8247E6B4;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x8247e6c0
	goto loc_8247E6C0;
loc_8247E6B4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822e66e8
	ctx.lr = 0x8247E6BC;
	sub_822E66E8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
loc_8247E6C0:
	// cmpwi cr6,r22,48
	ctx.cr6.compare<int32_t>(r22.s32, 48, ctx.xer);
	// bne cr6,0x8247e824
	if (!ctx.cr6.eq) goto loc_8247E824;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r11.u32);
	// blt 0x8247e6f0
	if (ctx.cr0.lt) goto loc_8247E6F0;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x8247e6fc
	goto loc_8247E6FC;
loc_8247E6F0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822e66e8
	ctx.lr = 0x8247E6F8;
	sub_822E66E8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
loc_8247E6FC:
	// extsb r11,r22
	ctx.r11.s64 = r22.s8;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x8247e760
	if (ctx.cr6.eq) goto loc_8247E760;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// beq cr6,0x8247e760
	if (ctx.cr6.eq) goto loc_8247E760;
	// li r18,1
	r18.s64 = 1;
	// cmpwi cr6,r19,120
	ctx.cr6.compare<int32_t>(r19.s32, 120, ctx.xer);
	// beq cr6,0x8247e740
	if (ctx.cr6.eq) goto loc_8247E740;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// beq cr6,0x8247e738
	if (ctx.cr6.eq) goto loc_8247E738;
	// addic. r15,r15,-1
	ctx.xer.ca = r15.u32 > 0;
	r15.s64 = r15.s64 + -1;
	ctx.cr0.compare<int32_t>(r15.s32, 0, ctx.xer);
	// bne 0x8247e738
	if (!ctx.cr0.eq) goto loc_8247E738;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r29,r11
	r29.s64 = ctx.r11.s8;
loc_8247E738:
	// li r19,111
	r19.s64 = 111;
	// b 0x8247e824
	goto loc_8247E824;
loc_8247E740:
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(r22.s32, -1, ctx.xer);
	// beq cr6,0x8247e758
	if (ctx.cr6.eq) goto loc_8247E758;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x822e6468
	ctx.lr = 0x8247E758;
	sub_822E6468(ctx, base);
loc_8247E758:
	// li r22,48
	r22.s64 = 48;
	// b 0x8247e824
	goto loc_8247E824;
loc_8247E760:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r11.u32);
	// blt 0x8247e788
	if (ctx.cr0.lt) goto loc_8247E788;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x8247e794
	goto loc_8247E794;
loc_8247E788:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822e66e8
	ctx.lr = 0x8247E790;
	sub_822E66E8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
loc_8247E794:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// beq cr6,0x8247e7b4
	if (ctx.cr6.eq) goto loc_8247E7B4;
	// addi r15,r15,-2
	r15.s64 = r15.s64 + -2;
	// cmpwi cr6,r15,1
	ctx.cr6.compare<int32_t>(r15.s32, 1, ctx.xer);
	// bge cr6,0x8247e7b4
	if (!ctx.cr6.lt) goto loc_8247E7B4;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r29,r11
	r29.s64 = ctx.r11.s8;
loc_8247E7B4:
	// li r19,120
	r19.s64 = 120;
	// b 0x8247e824
	goto loc_8247E824;
loc_8247E7BC:
	// li r16,1
	r16.s64 = 1;
loc_8247E7C0:
	// cmpwi cr6,r22,45
	ctx.cr6.compare<int32_t>(r22.s32, 45, ctx.xer);
	// bne cr6,0x8247e7d0
	if (!ctx.cr6.eq) goto loc_8247E7D0;
	// li r20,1
	r20.s64 = 1;
	// b 0x8247e7d8
	goto loc_8247E7D8;
loc_8247E7D0:
	// cmpwi cr6,r22,43
	ctx.cr6.compare<int32_t>(r22.s32, 43, ctx.xer);
	// bne cr6,0x8247e824
	if (!ctx.cr6.eq) goto loc_8247E824;
loc_8247E7D8:
	// addic. r15,r15,-1
	ctx.xer.ca = r15.u32 > 0;
	r15.s64 = r15.s64 + -1;
	ctx.cr0.compare<int32_t>(r15.s32, 0, ctx.xer);
	// bne 0x8247e7f0
	if (!ctx.cr0.eq) goto loc_8247E7F0;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// beq cr6,0x8247e7f0
	if (ctx.cr6.eq) goto loc_8247E7F0;
	// li r29,1
	r29.s64 = 1;
	// b 0x8247e824
	goto loc_8247E824;
loc_8247E7F0:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r11.u32);
	// blt 0x8247e818
	if (ctx.cr0.lt) goto loc_8247E818;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x8247e824
	goto loc_8247E824;
loc_8247E818:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822e66e8
	ctx.lr = 0x8247E820;
	sub_822E66E8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
loc_8247E824:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// extsb. r31,r29
	r31.s64 = r29.s8;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x8247e96c
	if (ctx.cr6.eq) goto loc_8247E96C;
	// bne 0x8247e954
	if (!ctx.cr0.eq) goto loc_8247E954;
loc_8247E834:
	// cmpwi cr6,r19,120
	ctx.cr6.compare<int32_t>(r19.s32, 120, ctx.xer);
	// beq cr6,0x8247e880
	if (ctx.cr6.eq) goto loc_8247E880;
	// cmpwi cr6,r19,112
	ctx.cr6.compare<int32_t>(r19.s32, 112, ctx.xer);
	// beq cr6,0x8247e880
	if (ctx.cr6.eq) goto loc_8247E880;
	// clrlwi r3,r22,24
	ctx.r3.u64 = r22.u32 & 0xFF;
	// bl 0x822dca78
	ctx.lr = 0x8247E84C;
	sub_822DCA78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8247e8bc
	if (ctx.cr0.eq) goto loc_8247E8BC;
	// cmpwi cr6,r19,111
	ctx.cr6.compare<int32_t>(r19.s32, 111, ctx.xer);
	// bne cr6,0x8247e874
	if (!ctx.cr6.eq) goto loc_8247E874;
	// cmpwi cr6,r22,56
	ctx.cr6.compare<int32_t>(r22.s32, 56, ctx.xer);
	// bge cr6,0x8247e8bc
	if (!ctx.cr6.lt) goto loc_8247E8BC;
	// ld r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r11,r11,3,60
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 3) & 0xFFFFFFFFFFFFFFF8;
loc_8247E86C:
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// b 0x8247e8c4
	goto loc_8247E8C4;
loc_8247E874:
	// ld r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// mulli r11,r11,10
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(10));
	// b 0x8247e86c
	goto loc_8247E86C;
loc_8247E880:
	// clrlwi r30,r22,24
	r30.u64 = r22.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822dca98
	ctx.lr = 0x8247E88C;
	sub_822DCA98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8247e8bc
	if (ctx.cr0.eq) goto loc_8247E8BC;
	// ld r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rldicr r11,r11,4,59
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// bl 0x822dca78
	ctx.lr = 0x8247E8A8;
	sub_822DCA78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8247e8c4
	if (!ctx.cr0.eq) goto loc_8247E8C4;
	// rlwinm r11,r22,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r22,r11,-7
	r22.s64 = ctx.r11.s64 + -7;
	// b 0x8247e8c4
	goto loc_8247E8C4;
loc_8247E8BC:
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// extsb r29,r11
	r29.s64 = ctx.r11.s8;
loc_8247E8C4:
	// extsb. r11,r29
	ctx.r11.s64 = r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8247e934
	if (!ctx.cr0.eq) goto loc_8247E934;
	// addi r11,r22,-48
	ctx.r11.s64 = r22.s64 + -48;
	// ld r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// beq cr6,0x8247e8fc
	if (ctx.cr6.eq) goto loc_8247E8FC;
	// addic. r15,r15,-1
	ctx.xer.ca = r15.u32 > 0;
	r15.s64 = r15.s64 + -1;
	ctx.cr0.compare<int32_t>(r15.s32, 0, ctx.xer);
	// bne 0x8247e8fc
	if (!ctx.cr0.eq) goto loc_8247E8FC;
	// li r29,1
	r29.s64 = 1;
	// b 0x8247e94c
	goto loc_8247E94C;
loc_8247E8FC:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r11.u32);
	// blt 0x8247e924
	if (ctx.cr0.lt) goto loc_8247E924;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x8247e94c
	goto loc_8247E94C;
loc_8247E924:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822e66e8
	ctx.lr = 0x8247E92C;
	sub_822E66E8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// b 0x8247e94c
	goto loc_8247E94C;
loc_8247E934:
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(r22.s32, -1, ctx.xer);
	// beq cr6,0x8247e94c
	if (ctx.cr6.eq) goto loc_8247E94C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x822e6468
	ctx.lr = 0x8247E94C;
	sub_822E6468(ctx, base);
loc_8247E94C:
	// extsb. r31,r29
	r31.s64 = r29.s8;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8247e834
	if (ctx.cr0.eq) goto loc_8247E834;
loc_8247E954:
	// extsb. r11,r20
	ctx.r11.s64 = r20.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247ea7c
	if (ctx.cr0.eq) goto loc_8247EA7C;
	// ld r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// b 0x8247ea7c
	goto loc_8247EA7C;
loc_8247E96C:
	// bne 0x8247ea70
	if (!ctx.cr0.eq) goto loc_8247EA70;
loc_8247E970:
	// cmpwi cr6,r19,120
	ctx.cr6.compare<int32_t>(r19.s32, 120, ctx.xer);
	// beq cr6,0x8247e9b0
	if (ctx.cr6.eq) goto loc_8247E9B0;
	// cmpwi cr6,r19,112
	ctx.cr6.compare<int32_t>(r19.s32, 112, ctx.xer);
	// beq cr6,0x8247e9b0
	if (ctx.cr6.eq) goto loc_8247E9B0;
	// clrlwi r3,r22,24
	ctx.r3.u64 = r22.u32 & 0xFF;
	// bl 0x822dca78
	ctx.lr = 0x8247E988;
	sub_822DCA78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8247e9e4
	if (ctx.cr0.eq) goto loc_8247E9E4;
	// cmpwi cr6,r19,111
	ctx.cr6.compare<int32_t>(r19.s32, 111, ctx.xer);
	// bne cr6,0x8247e9a8
	if (!ctx.cr6.eq) goto loc_8247E9A8;
	// cmpwi cr6,r22,56
	ctx.cr6.compare<int32_t>(r22.s32, 56, ctx.xer);
	// bge cr6,0x8247e9e4
	if (!ctx.cr6.lt) goto loc_8247E9E4;
	// rlwinm r23,r23,3,0,28
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x8247e9ec
	goto loc_8247E9EC;
loc_8247E9A8:
	// mulli r23,r23,10
	r23.s64 = static_cast<int64_t>(r23.u64 * static_cast<uint64_t>(10));
	// b 0x8247e9ec
	goto loc_8247E9EC;
loc_8247E9B0:
	// clrlwi r30,r22,24
	r30.u64 = r22.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822dca98
	ctx.lr = 0x8247E9BC;
	sub_822DCA98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8247e9e4
	if (ctx.cr0.eq) goto loc_8247E9E4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r23,r23,4,0,27
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x822dca78
	ctx.lr = 0x8247E9D0;
	sub_822DCA78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8247e9ec
	if (!ctx.cr0.eq) goto loc_8247E9EC;
	// rlwinm r11,r22,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r22,r11,-7
	r22.s64 = ctx.r11.s64 + -7;
	// b 0x8247e9ec
	goto loc_8247E9EC;
loc_8247E9E4:
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// extsb r29,r11
	r29.s64 = ctx.r11.s8;
loc_8247E9EC:
	// extsb. r11,r29
	ctx.r11.s64 = r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8247ea50
	if (!ctx.cr0.eq) goto loc_8247EA50;
	// add r11,r23,r22
	ctx.r11.u64 = r23.u64 + r22.u64;
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r23,r11,-48
	r23.s64 = ctx.r11.s64 + -48;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// beq cr6,0x8247ea18
	if (ctx.cr6.eq) goto loc_8247EA18;
	// addic. r15,r15,-1
	ctx.xer.ca = r15.u32 > 0;
	r15.s64 = r15.s64 + -1;
	ctx.cr0.compare<int32_t>(r15.s32, 0, ctx.xer);
	// bne 0x8247ea18
	if (!ctx.cr0.eq) goto loc_8247EA18;
	// li r29,1
	r29.s64 = 1;
	// b 0x8247ea68
	goto loc_8247EA68;
loc_8247EA18:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r11.u32);
	// blt 0x8247ea40
	if (ctx.cr0.lt) goto loc_8247EA40;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x8247ea68
	goto loc_8247EA68;
loc_8247EA40:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822e66e8
	ctx.lr = 0x8247EA48;
	sub_822E66E8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// b 0x8247ea68
	goto loc_8247EA68;
loc_8247EA50:
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(r22.s32, -1, ctx.xer);
	// beq cr6,0x8247ea68
	if (ctx.cr6.eq) goto loc_8247EA68;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x822e6468
	ctx.lr = 0x8247EA68;
	sub_822E6468(ctx, base);
loc_8247EA68:
	// extsb. r31,r29
	r31.s64 = r29.s8;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8247e970
	if (ctx.cr0.eq) goto loc_8247E970;
loc_8247EA70:
	// extsb. r11,r20
	ctx.r11.s64 = r20.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247ea7c
	if (ctx.cr0.eq) goto loc_8247EA7C;
	// neg r23,r23
	r23.s64 = static_cast<int64_t>(-r23.u64);
loc_8247EA7C:
	// addi r11,r19,-70
	ctx.r11.s64 = r19.s64 + -70;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 & r18.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8247f03c
	if (ctx.cr6.eq) goto loc_8247F03C;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8247ef04
	if (!ctx.cr6.eq) goto loc_8247EF04;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// b 0x8247eacc
	goto loc_8247EACC;
loc_8247EAB0:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mr r23,r14
	r23.u64 = r14.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8247ef04
	if (!ctx.cr6.eq) goto loc_8247EF04;
	// bl 0x822d6e70
	ctx.lr = 0x8247EAC4;
	sub_822D6E70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8247ef04
	if (ctx.cr0.eq) goto loc_8247EF04;
loc_8247EACC:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq cr6,0x8247eae4
	if (ctx.cr6.eq) goto loc_8247EAE4;
	// ld r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// b 0x8247ef04
	goto loc_8247EF04;
loc_8247EAE4:
	// extsb. r11,r16
	ctx.r11.s64 = r16.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// beq 0x8247eaf8
	if (ctx.cr0.eq) goto loc_8247EAF8;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r23.u32);
	// b 0x8247ef04
	goto loc_8247EF04;
loc_8247EAF8:
	// sth r23,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r23.u16);
	// b 0x8247ef04
	goto loc_8247EF04;
loc_8247EB00:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r22,45
	ctx.cr6.compare<int32_t>(r22.s32, 45, ctx.xer);
	// bne cr6,0x8247eb20
	if (!ctx.cr6.eq) goto loc_8247EB20;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,45
	ctx.r10.s64 = 45;
	// li r30,1
	r30.s64 = 1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x8247eb28
	goto loc_8247EB28;
loc_8247EB20:
	// cmpwi cr6,r22,43
	ctx.cr6.compare<int32_t>(r22.s32, 43, ctx.xer);
	// bne cr6,0x8247eb60
	if (!ctx.cr6.eq) goto loc_8247EB60;
loc_8247EB28:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r15,r15,-1
	r15.s64 = r15.s64 + -1;
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r11.u32);
	// blt 0x8247eb54
	if (ctx.cr0.lt) goto loc_8247EB54;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x8247eb60
	goto loc_8247EB60;
loc_8247EB54:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822e66e8
	ctx.lr = 0x8247EB5C;
	sub_822E66E8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
loc_8247EB60:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// bne cr6,0x8247ebe0
	if (!ctx.cr6.eq) goto loc_8247EBE0;
	// li r15,-1
	r15.s64 = -1;
	// b 0x8247ebe0
	goto loc_8247EBE0;
loc_8247EB70:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// addi r15,r15,-1
	r15.s64 = r15.s64 + -1;
	// beq cr6,0x8247ebf4
	if (ctx.cr6.eq) goto loc_8247EBF4;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// stbx r31,r30,r11
	REX_STORE_U8(r30.u32 + ctx.r11.u32, r31.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8247dd98
	ctx.lr = 0x8247EBA4;
	sub_8247DD98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8247f03c
	if (ctx.cr0.eq) goto loc_8247F03C;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r11.u32);
	// blt 0x8247ebd4
	if (ctx.cr0.lt) goto loc_8247EBD4;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x8247ebe0
	goto loc_8247EBE0;
loc_8247EBD4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822e66e8
	ctx.lr = 0x8247EBDC;
	sub_822E66E8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
loc_8247EBE0:
	// clrlwi r31,r22,24
	r31.u64 = r22.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822dca78
	ctx.lr = 0x8247EBEC;
	sub_822DCA78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8247eb70
	if (!ctx.cr0.eq) goto loc_8247EB70;
loc_8247EBF4:
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// extsb r10,r31
	ctx.r10.s64 = r31.s8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,188(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r31,0(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r31
	ctx.r11.s64 = r31.s8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8247ed0c
	if (!ctx.cr6.eq) goto loc_8247ED0C;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// addi r15,r15,-1
	r15.s64 = r15.s64 + -1;
	// beq cr6,0x8247ed0c
	if (ctx.cr6.eq) goto loc_8247ED0C;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r11.u32);
	// blt 0x8247ec4c
	if (ctx.cr0.lt) goto loc_8247EC4C;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x8247ec58
	goto loc_8247EC58;
loc_8247EC4C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822e66e8
	ctx.lr = 0x8247EC54;
	sub_822E66E8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
loc_8247EC58:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stbx r31,r30,r11
	REX_STORE_U8(r30.u32 + ctx.r11.u32, r31.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8247dd98
	ctx.lr = 0x8247EC7C;
	sub_8247DD98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8247f03c
	if (ctx.cr0.eq) goto loc_8247F03C;
	// b 0x8247ecf8
	goto loc_8247ECF8;
loc_8247EC88:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// addi r15,r15,-1
	r15.s64 = r15.s64 + -1;
	// beq cr6,0x8247ed0c
	if (ctx.cr6.eq) goto loc_8247ED0C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// stbx r31,r30,r11
	REX_STORE_U8(r30.u32 + ctx.r11.u32, r31.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8247dd98
	ctx.lr = 0x8247ECBC;
	sub_8247DD98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8247f03c
	if (ctx.cr0.eq) goto loc_8247F03C;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r11.u32);
	// blt 0x8247ecec
	if (ctx.cr0.lt) goto loc_8247ECEC;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x8247ecf8
	goto loc_8247ECF8;
loc_8247ECEC:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822e66e8
	ctx.lr = 0x8247ECF4;
	sub_822E66E8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
loc_8247ECF8:
	// clrlwi r31,r22,24
	r31.u64 = r22.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822dca78
	ctx.lr = 0x8247ED04;
	sub_822DCA78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8247ec88
	if (!ctx.cr0.eq) goto loc_8247EC88;
loc_8247ED0C:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// beq cr6,0x8247ee70
	if (ctx.cr6.eq) goto loc_8247EE70;
	// cmpwi cr6,r22,101
	ctx.cr6.compare<int32_t>(r22.s32, 101, ctx.xer);
	// beq cr6,0x8247ed24
	if (ctx.cr6.eq) goto loc_8247ED24;
	// cmpwi cr6,r22,69
	ctx.cr6.compare<int32_t>(r22.s32, 69, ctx.xer);
	// bne cr6,0x8247ee70
	if (!ctx.cr6.eq) goto loc_8247EE70;
loc_8247ED24:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// addi r29,r15,-1
	r29.s64 = r15.s64 + -1;
	// beq cr6,0x8247ee70
	if (ctx.cr6.eq) goto loc_8247EE70;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,101
	ctx.r10.s64 = 101;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stbx r10,r30,r11
	REX_STORE_U8(r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8247dd98
	ctx.lr = 0x8247ED58;
	sub_8247DD98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8247f03c
	if (ctx.cr0.eq) goto loc_8247F03C;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r11.u32);
	// blt 0x8247ed88
	if (ctx.cr0.lt) goto loc_8247ED88;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x8247ed94
	goto loc_8247ED94;
loc_8247ED88:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822e66e8
	ctx.lr = 0x8247ED90;
	sub_822E66E8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
loc_8247ED94:
	// cmpwi cr6,r22,45
	ctx.cr6.compare<int32_t>(r22.s32, 45, ctx.xer);
	// bne cr6,0x8247edd0
	if (!ctx.cr6.eq) goto loc_8247EDD0;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,45
	ctx.r10.s64 = 45;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stbx r10,r30,r11
	REX_STORE_U8(r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8247dd98
	ctx.lr = 0x8247EDC4;
	sub_8247DD98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8247f03c
	if (ctx.cr0.eq) goto loc_8247F03C;
	// b 0x8247edd8
	goto loc_8247EDD8;
loc_8247EDD0:
	// cmpwi cr6,r22,43
	ctx.cr6.compare<int32_t>(r22.s32, 43, ctx.xer);
	// bne cr6,0x8247ee5c
	if (!ctx.cr6.eq) goto loc_8247EE5C;
loc_8247EDD8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// bne cr6,0x8247ee28
	if (!ctx.cr6.eq) goto loc_8247EE28;
	// li r29,0
	r29.s64 = 0;
	// b 0x8247ee5c
	goto loc_8247EE5C;
loc_8247EDEC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// beq cr6,0x8247ee70
	if (ctx.cr6.eq) goto loc_8247EE70;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// stbx r31,r30,r11
	REX_STORE_U8(r30.u32 + ctx.r11.u32, r31.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8247dd98
	ctx.lr = 0x8247EE20;
	sub_8247DD98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8247f03c
	if (ctx.cr0.eq) goto loc_8247F03C;
loc_8247EE28:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r11.u32);
	// blt 0x8247ee50
	if (ctx.cr0.lt) goto loc_8247EE50;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x8247ee5c
	goto loc_8247EE5C;
loc_8247EE50:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822e66e8
	ctx.lr = 0x8247EE58;
	sub_822E66E8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
loc_8247EE5C:
	// clrlwi r31,r22,24
	r31.u64 = r22.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822dca78
	ctx.lr = 0x8247EE68;
	sub_822DCA78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8247edec
	if (!ctx.cr0.eq) goto loc_8247EDEC;
loc_8247EE70:
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(r22.s32, -1, ctx.xer);
	// beq cr6,0x8247ee88
	if (ctx.cr6.eq) goto loc_8247EE88;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x822e6468
	ctx.lr = 0x8247EE88;
	sub_822E6468(ctx, base);
loc_8247EE88:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// beq cr6,0x8247f03c
	if (ctx.cr6.eq) goto loc_8247F03C;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8247ef04
	if (!ctx.cr6.eq) goto loc_8247EF04;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,128(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// extsb r11,r16
	ctx.r11.s64 = r16.s8;
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// lwz r6,124(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stbx r10,r30,r5
	REX_STORE_U8(r30.u32 + ctx.r5.u32, ctx.r10.u8);
	// lwz r10,28(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x8247EED4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8247ef04
	goto loc_8247EF04;
loc_8247EED8:
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// bne cr6,0x8247f028
	if (!ctx.cr6.eq) goto loc_8247F028;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bne cr6,0x8247ef04
	if (!ctx.cr6.eq) goto loc_8247EF04;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,732(r1)
	REX_STORE_U32(ctx.r1.u32 + 732, ctx.r11.u32);
loc_8247EF04:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,716(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stw r10,716(r1)
	REX_STORE_U32(ctx.r1.u32 + 716, ctx.r10.u32);
	// rotlwi r19,r10,0
	r19.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x8247efe0
	goto loc_8247EFE0;
loc_8247EF24:
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x8247ef40
	if (!ctx.cr6.eq) goto loc_8247EF40;
	// lbz r10,1(r19)
	ctx.r10.u64 = REX_LOAD_U8(r19.u32 + 1);
	// addi r11,r19,1
	ctx.r11.s64 = r19.s64 + 1;
	// cmplwi cr6,r10,37
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 37, ctx.xer);
	// bne cr6,0x8247ef40
	if (!ctx.cr6.eq) goto loc_8247EF40;
	// mr r19,r11
	r19.u64 = ctx.r11.u64;
loc_8247EF40:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r11.u32);
	// blt 0x8247ef68
	if (ctx.cr0.lt) goto loc_8247EF68;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x8247ef74
	goto loc_8247EF74;
loc_8247EF68:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822e66e8
	ctx.lr = 0x8247EF70;
	sub_822E66E8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
loc_8247EF74:
	// lbz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U8(r19.u32 + 0);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// stw r19,716(r1)
	REX_STORE_U32(ctx.r1.u32 + 716, r19.u32);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// bne cr6,0x8247f028
	if (!ctx.cr6.eq) goto loc_8247F028;
	// clrlwi r3,r22,24
	ctx.r3.u64 = r22.u32 & 0xFF;
	// bl 0x822e17e0
	ctx.lr = 0x8247EF90;
	sub_822E17E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8247efe0
	if (ctx.cr0.eq) goto loc_8247EFE0;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r31,r14,1
	r31.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r11.u32);
	// blt 0x8247efc0
	if (ctx.cr0.lt) goto loc_8247EFC0;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x8247efc8
	goto loc_8247EFC8;
loc_8247EFC0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822e66e8
	ctx.lr = 0x8247EFC8;
	sub_822E66E8(ctx, base);
loc_8247EFC8:
	// lbz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U8(r19.u32 + 0);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// stw r19,716(r1)
	REX_STORE_U32(ctx.r1.u32 + 716, r19.u32);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8247f018
	if (!ctx.cr6.eq) goto loc_8247F018;
	// addi r14,r31,-1
	r14.s64 = r31.s64 + -1;
loc_8247EFE0:
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(r22.s32, -1, ctx.xer);
	// bne cr6,0x8247f008
	if (!ctx.cr6.eq) goto loc_8247F008;
	// lbz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U8(r19.u32 + 0);
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x8247f03c
	if (!ctx.cr6.eq) goto loc_8247F03C;
	// lwz r11,716(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// bne cr6,0x8247f03c
	if (!ctx.cr6.eq) goto loc_8247F03C;
	// lwz r19,716(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
loc_8247F008:
	// lbz r3,0(r19)
	ctx.r3.u64 = REX_LOAD_U8(r19.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8247df68
	if (!ctx.cr0.eq) goto loc_8247DF68;
	// b 0x8247f03c
	goto loc_8247F03C;
loc_8247F018:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8247f028
	if (ctx.cr6.eq) goto loc_8247F028;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x822e6468
	ctx.lr = 0x8247F028;
	sub_822E6468(ctx, base);
loc_8247F028:
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(r22.s32, -1, ctx.xer);
	// beq cr6,0x8247f03c
	if (ctx.cr6.eq) goto loc_8247F03C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x822e6468
	ctx.lr = 0x8247F03C;
	sub_822E6468(ctx, base);
loc_8247F03C:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8247f050
	if (!ctx.cr6.eq) goto loc_8247F050;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822d98f0
	ctx.lr = 0x8247F050;
	sub_822D98F0(ctx, base);
loc_8247F050:
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(r22.s32, -1, ctx.xer);
	// bne cr6,0x8247f078
	if (!ctx.cr6.eq) goto loc_8247F078;
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8247f07c
	if (!ctx.cr6.eq) goto loc_8247F07C;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8247f07c
	if (!ctx.cr0.eq) goto loc_8247F07C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8247f07c
	goto loc_8247F07C;
loc_8247F078:
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_8247F07C:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_824D3848) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D3858) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r11,r11,25772
	ctx.r11.s64 = ctx.r11.s64 + 25772;
	// stw r11,26800(r10)
	REX_STORE_U32(ctx.r10.u32 + 26800, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D3980) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r30,1
	r30.s64 = 1;
	// addi r11,r11,-32448
	ctx.r11.s64 = ctx.r11.s64 + -32448;
	// addi r31,r11,372
	r31.s64 = ctx.r11.s64 + 372;
loc_824D39A4:
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a3d10
	ctx.lr = 0x824D39B0;
	sub_822A3D10(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x824d39a4
	if (!ctx.cr0.lt) goto loc_824D39A4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D3D50) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,29712
	ctx.r3.s64 = ctx.r11.s64 + 29712;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3E98) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// addi r11,r11,-11816
	ctx.r11.s64 = ctx.r11.s64 + -11816;
	// stw r11,9556(r10)
	REX_STORE_U32(ctx.r10.u32 + 9556, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D40F0) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000280
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4260) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100f7
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D43E0) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010053
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4560) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101bd
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D46E0) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010104
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4860) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000014
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D49E0) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010154
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4B60) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100db
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

