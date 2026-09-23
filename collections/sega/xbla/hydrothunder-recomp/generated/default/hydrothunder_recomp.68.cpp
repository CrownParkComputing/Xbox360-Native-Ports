#include "hydrothunder_funcs.68.h"

DEFINE_REX_FUNC(sub_82123408) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82123288
	ctx.lr = 0x82123424;
	sub_82123288(ctx, base);
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821234f0
	ctx.lr = 0x82123430;
	sub_821234F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8212347c
	if (ctx.cr6.eq) goto loc_8212347C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x8212344C;
	sub_82120AC0(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r30,1
	ctx.r5.s64 = r30.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120b20
	ctx.lr = 0x82123460;
	sub_82120B20(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120700
	ctx.lr = 0x8212346C;
	sub_82120700(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x8212347C;
	sub_82120AC0(ctx, base);
loc_8212347C:
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821234f0
	ctx.lr = 0x82123488;
	sub_821234F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821234d4
	if (ctx.cr6.eq) goto loc_821234D4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x821234A4;
	sub_82120AC0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120b20
	ctx.lr = 0x821234B8;
	sub_82120B20(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120700
	ctx.lr = 0x821234C4;
	sub_82120700(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x821234D4;
	sub_82120AC0(ctx, base);
loc_821234D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

DEFINE_REX_FUNC(sub_8212C398) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212C9E8) {
	REX_FUNC_PROLOGUE();
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x8212ca08
	if (!ctx.cr6.eq) goto loc_8212CA08;
	// lbz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,32(r3)
	REX_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// blr 
	return;
loc_8212CA08:
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lbz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8212ca28
	if (ctx.cr0.eq) goto loc_8212CA28;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,34(r3)
	REX_STORE_U8(ctx.r3.u32 + 34, ctx.r11.u8);
	// blr 
	return;
loc_8212CA28:
	// lbz r11,33(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 33);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,33(r3)
	REX_STORE_U8(ctx.r3.u32 + 33, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212FE40) {
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
	// bl 0x826a1cb4
	ctx.lr = 0x8212FE48;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8212ff44
	if (!ctx.cr6.gt) goto loc_8212FF44;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
loc_8212FE6C:
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8212fe90
	if (ctx.cr6.eq) goto loc_8212FE90;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8212fe6c
	if (ctx.cr6.lt) goto loc_8212FE6C;
	// b 0x8212ff44
	goto loc_8212FF44;
loc_8212FE90:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8212fea4
	if (ctx.cr6.lt) goto loc_8212FEA4;
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x8212febc
	if (!ctx.cr6.gt) goto loc_8212FEBC;
loc_8212FEA4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-25320
	ctx.r4.s64 = ctx.r11.s64 + -25320;
	// addi r3,r10,-23616
	ctx.r3.s64 = ctx.r10.s64 + -23616;
	// li r5,81
	ctx.r5.s64 = 81;
	// bl 0x821231d0
	ctx.lr = 0x8212FEBC;
	sub_821231D0(ctx, base);
loc_8212FEBC:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r9,r30,r9
	ctx.r9.u64 = ctx.r9.u64 - r30.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x8212FEE0;
	sub_826A1E70(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r28,4(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r28,-1
	r30.s64 = r28.s64 + -1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8212ff40
	if (!ctx.cr6.gt) goto loc_8212FF40;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(r29.s32, r30.s32, ctx.xer);
	// bgt cr6,0x8212ff0c
	if (ctx.cr6.gt) goto loc_8212FF0C;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8212FF0C:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8212ff40
	if (!ctx.cr6.gt) goto loc_8212FF40;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269d1d0
	ctx.lr = 0x8212FF20;
	sub_8269D1D0(ctx, base);
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8212FF30;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8212FF38;
	sub_8269D1B8(ctx, base);
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
loc_8212FF40:
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
loc_8212FF44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82139478) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
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
	// bl 0x826a1cbc
	ctx.lr = 0x82139480;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x826a2c90
	ctx.lr = 0x82139488;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// addi r7,r3,128
	ctx.r7.s64 = ctx.r3.s64 + 128;
	// addi r6,r3,144
	ctx.r6.s64 = ctx.r3.s64 + 144;
	// addi r5,r3,64
	ctx.r5.s64 = ctx.r3.s64 + 64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,6096(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6096);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821734b8
	ctx.lr = 0x821394B0;
	sub_821734B8(ctx, base);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lwz r11,6096(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6096);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,164(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 164);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,120(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// bctrl 
	ctx.lr = 0x821394D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821394F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f31,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// fmr f29,f31
	f29.f64 = f31.f64;
	// lfs f0,180(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 140);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r9,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r9.u64);
	// lfd f13,224(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f26,f0,f13
	f26.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmr f30,f26
	f30.f64 = f26.f64;
	// ble cr6,0x821396a8
	if (!ctx.cr6.gt) goto loc_821396A8;
	// lfs f25,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f25.f64 = double(temp.f32);
	// lfs f27,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	f27.f64 = double(temp.f32);
loc_82139540:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x82135630
	ctx.lr = 0x82139548;
	sub_82135630(ctx, base);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x82139c28
	ctx.lr = 0x82139554;
	sub_82139C28(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lfs f24,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	f24.f64 = double(temp.f32);
	// fmuls f29,f28,f24
	f29.f64 = double(float(f28.f64 * f24.f64));
	// fmuls f23,f24,f31
	f23.f64 = double(float(f24.f64 * f31.f64));
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// fmuls f28,f0,f24
	f28.f64 = double(float(ctx.f0.f64 * f24.f64));
	// bl 0x82135630
	ctx.lr = 0x82139570;
	sub_82135630(ctx, base);
	// fmr f22,f1
	ctx.fpscr.disableFlushMode();
	f22.f64 = ctx.f1.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82139c28
	ctx.lr = 0x8213957C;
	sub_82139C28(ctx, base);
	// fmuls f12,f24,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(f24.f64 * f31.f64));
	// lfs f11,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f22,f24
	ctx.f0.f64 = double(float(f22.f64 * f24.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f8,f23,f11
	ctx.f8.f64 = double(float(f23.f64 - ctx.f11.f64));
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmuls f13,f1,f24
	ctx.f13.f64 = double(float(ctx.f1.f64 * f24.f64));
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmr f10,f29
	ctx.f10.f64 = f29.f64;
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmr f9,f28
	ctx.f9.f64 = f28.f64;
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// li r7,24
	ctx.r7.s64 = 24;
	// stfs f29,80(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f28,84(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f7,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f23,88(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f6,f0
	ctx.f6.f64 = ctx.f0.f64;
	// stfs f31,128(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f11,f28,f0
	ctx.f11.f64 = double(float(f28.f64 * ctx.f0.f64));
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmr f5,f13
	ctx.f5.f64 = ctx.f13.f64;
	// stfs f31,164(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmuls f0,f8,f13
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f31,168(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f27,172(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f29,176(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f28,180(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f23,184(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fmuls f12,f7,f29
	ctx.f12.f64 = double(float(ctx.f7.f64 * f29.f64));
	// stfs f31,192(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f27,196(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f31,200(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f31,204(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fmsubs f0,f28,f7,f0
	ctx.f0.f64 = double(float(std::fma(f28.f64, ctx.f7.f64, -ctx.f0.f64)));
	// stfs f31,208(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f31,212(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f31,216(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f27,220(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// fmsubs f13,f8,f6,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f6.f64, -ctx.f12.f64)));
	// fmsubs f12,f5,f29,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f5.f64, f29.f64, -ctx.f11.f64)));
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f11,f12,f12,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f11.f64)));
	// fmadds f11,f0,f0,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f11.f64)));
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f11,f25,f11
	ctx.f11.f64 = double(float(f25.f64 / ctx.f11.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,248(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// bctrl 
	ctx.lr = 0x82139690;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// fmr f29,f30
	ctx.fpscr.disableFlushMode();
	f29.f64 = f30.f64;
	// fadds f30,f30,f26
	f30.f64 = double(float(f30.f64 + f26.f64));
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82139540
	if (ctx.cr6.lt) goto loc_82139540;
loc_821396A8:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x826a2cdc
	ctx.lr = 0x821396B4;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8214E4B0) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-11656
	ctx.r11.s64 = ctx.r11.s64 + -11656;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8214e50c
	if (ctx.cr6.eq) goto loc_8214E50C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-12464
	ctx.r4.s64 = ctx.r11.s64 + -12464;
	// addi r3,r10,-12400
	ctx.r3.s64 = ctx.r10.s64 + -12400;
	// li r5,118
	ctx.r5.s64 = 118;
	// bl 0x821231d0
	ctx.lr = 0x8214E4F4;
	sub_821231D0(ctx, base);
	// b 0x8214e50c
	goto loc_8214E50C;
loc_8214E4F8:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E50C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214E50C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214e4f8
	if (!ctx.cr6.eq) goto loc_8214E4F8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,29356
	ctx.r11.s64 = ctx.r11.s64 + 29356;
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

DEFINE_REX_FUNC(sub_82151CF0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82151D14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82151D2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6188(r10)
	REX_STORE_U32(ctx.r10.u32 + 6188, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82154908) {
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
	// beq cr6,0x8215494c
	if (ctx.cr6.eq) goto loc_8215494C;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82154948
	if (ctx.cr6.eq) goto loc_82154948;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8215493C:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8215493c
	if (!ctx.cr6.eq) goto loc_8215493C;
loc_82154948:
	// bl 0x8269ce98
	ctx.lr = 0x8215494C;
	sub_8269CE98(ctx, base);
loc_8215494C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82157140) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821571f8
	if (!ctx.cr6.eq) goto loc_821571F8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821571cc
	if (ctx.cr6.lt) goto loc_821571CC;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// blt cr6,0x821571c4
	if (ctx.cr6.lt) goto loc_821571C4;
	// beq cr6,0x821571a4
	if (ctx.cr6.eq) goto loc_821571A4;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// blt cr6,0x821571c4
	if (ctx.cr6.lt) goto loc_821571C4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-8396
	ctx.r4.s64 = ctx.r11.s64 + -8396;
	// addi r3,r10,-8124
	ctx.r3.s64 = ctx.r10.s64 + -8124;
	// li r5,653
	ctx.r5.s64 = 653;
	// bl 0x821231d0
	ctx.lr = 0x82157198;
	sub_821231D0(ctx, base);
	// b 0x821571e8
	goto loc_821571E8;
loc_8215719C:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x823ecca8
	ctx.lr = 0x821571A4;
	sub_823ECCA8(ctx, base);
loc_821571A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821571B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8215719c
	if (!ctx.cr0.eq) goto loc_8215719C;
	// b 0x821571e8
	goto loc_821571E8;
loc_821571C4:
	// addi r3,r31,4664
	ctx.r3.s64 = r31.s64 + 4664;
	// bl 0x823eea60
	ctx.lr = 0x821571CC;
	sub_823EEA60(ctx, base);
loc_821571CC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4728(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4728);
	// bl 0x8264dc88
	ctx.lr = 0x821571D8;
	sub_8264DC88(ctx, base);
	// lwz r3,4728(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4728);
	// bl 0x823ede68
	ctx.lr = 0x821571E0;
	sub_823EDE68(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,4728(r31)
	REX_STORE_U32(r31.u32 + 4728, ctx.r11.u32);
loc_821571E8:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_821571F8:
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

DEFINE_REX_FUNC(sub_8215C580) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb4
	ctx.lr = 0x8215C588;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r28,r30
	r28.u64 = r30.u64;
	// beq cr6,0x8215c6cc
	if (ctx.cr6.eq) goto loc_8215C6CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215c6cc
	if (!ctx.cr6.eq) goto loc_8215C6CC;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x822f6280
	ctx.lr = 0x8215C5BC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8215c65c
	if (ctx.cr0.eq) goto loc_8215C65C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r28,1
	r28.s64 = 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// bne cr6,0x8215c5e4
	if (!ctx.cr6.eq) goto loc_8215C5E4;
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
loc_8215C5E4:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822f66b0
	ctx.lr = 0x8215C5F0;
	sub_822F66B0(ctx, base);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stb r30,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, r30.u8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// stb r30,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, r30.u8);
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// stb r30,120(r1)
	REX_STORE_U8(ctx.r1.u32 + 120, r30.u8);
	// stw r30,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r30.u32);
	// stb r30,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, r30.u8);
	// bne cr6,0x8215c638
	if (!ctx.cr6.eq) goto loc_8215C638;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,18468
	ctx.r11.s64 = ctx.r11.s64 + 18468;
	// addi r10,r10,18624
	ctx.r10.s64 = ctx.r10.s64 + 18624;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82120018
	ctx.lr = 0x8215C638;
	sub_82120018(ctx, base);
loc_8215C638:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822f6bf0
	ctx.lr = 0x8215C644;
	sub_822F6BF0(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r30,4(r29)
	REX_STORE_U32(r29.u32 + 4, r30.u32);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// addi r10,r10,18436
	ctx.r10.s64 = ctx.r10.s64 + 18436;
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// b 0x8215c660
	goto loc_8215C660;
loc_8215C65C:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8215C660:
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// beq 0x8215c6cc
	if (ctx.cr0.eq) goto loc_8215C6CC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822f6b50
	ctx.lr = 0x8215C674;
	sub_822F6B50(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215c684
	if (ctx.cr6.eq) goto loc_8215C684;
	// bl 0x8269d770
	ctx.lr = 0x8215C684;
	sub_8269D770(ctx, base);
loc_8215C684:
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r30,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215c698
	if (ctx.cr6.eq) goto loc_8215C698;
	// bl 0x8269d770
	ctx.lr = 0x8215C698;
	sub_8269D770(ctx, base);
loc_8215C698:
	// lwz r3,108(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215c6ac
	if (ctx.cr6.eq) goto loc_8215C6AC;
	// bl 0x8269d770
	ctx.lr = 0x8215C6AC;
	sub_8269D770(ctx, base);
loc_8215C6AC:
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215c6c0
	if (ctx.cr6.eq) goto loc_8215C6C0;
	// bl 0x8269d770
	ctx.lr = 0x8215C6C0;
	sub_8269D770(ctx, base);
loc_8215C6C0:
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822f6700
	ctx.lr = 0x8215C6CC;
	sub_822F6700(ctx, base);
loc_8215C6CC:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82168A58) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca0
	ctx.lr = 0x82168A60;
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-10464(r1)
	ea = -10464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lwz r3,6116(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82168dfc
	if (ctx.cr6.eq) goto loc_82168DFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82168A90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82168dfc
	if (ctx.cr0.eq) goto loc_82168DFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82168AAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-23796
	ctx.r4.s64 = ctx.r11.s64 + -23796;
	// bl 0x82125d00
	ctx.lr = 0x82168AB8;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82168dfc
	if (!ctx.cr0.eq) goto loc_82168DFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82168AD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r3,20(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 20);
	// li r29,0
	r29.s64 = 0;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r29,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// li r8,256
	ctx.r8.s64 = 256;
	// stw r29,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// addi r7,r1,1152
	ctx.r7.s64 = ctx.r1.s64 + 1152;
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// std r29,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r29.u64);
	// std r29,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r29.u64);
	// std r29,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, r29.u64);
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82168B38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,23512
	ctx.r4.s64 = ctx.r11.s64 + 23512;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82168B54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r26,r29
	r26.u64 = r29.u64;
	// addi r23,r11,-19772
	r23.s64 = ctx.r11.s64 + -19772;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82168c9c
	if (!ctx.cr6.gt) goto loc_82168C9C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r30,r1,1408
	r30.s64 = ctx.r1.s64 + 1408;
	// addi r25,r11,23652
	r25.s64 = ctx.r11.s64 + 23652;
	// addi r27,r10,23644
	r27.s64 = ctx.r10.s64 + 23644;
	// addi r28,r9,23636
	r28.s64 = ctx.r9.s64 + 23636;
	// addi r24,r8,23628
	r24.s64 = ctx.r8.s64 + 23628;
loc_82168B90:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r5,r30,-256
	ctx.r5.s64 = r30.s64 + -256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82168BAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82168BC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82168BE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82168C00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82168C1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,16(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82168C38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,20(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82168C54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,24(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82168C70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82168C88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r30,r30,288
	r30.s64 = r30.s64 + 288;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82168b90
	if (ctx.cr6.lt) goto loc_82168B90;
loc_82168C9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82168CB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r30,68(r22)
	r30.u64 = REX_LOAD_U32(r22.u32 + 68);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82168cdc
	goto loc_82168CDC;
loc_82168CC8:
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x82169990
	ctx.lr = 0x82168CD8;
	sub_82169990(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82168CDC:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x82168cc8
	if (!ctx.cr6.eq) goto loc_82168CC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r10,23660
	ctx.r4.s64 = ctx.r10.s64 + 23660;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82168D04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,23680
	ctx.r4.s64 = ctx.r11.s64 + 23680;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82168D24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,23696
	ctx.r4.s64 = ctx.r11.s64 + 23696;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82168D44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,23716
	ctx.r4.s64 = ctx.r11.s64 + 23716;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82168D64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,23740
	ctx.r4.s64 = ctx.r11.s64 + 23740;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82168D80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,23744
	r28.s64 = ctx.r11.s64 + 23744;
loc_82168D90:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// blt cr6,0x82168da0
	if (ctx.cr6.lt) goto loc_82168DA0;
	// li r11,256
	ctx.r11.s64 = 256;
loc_82168DA0:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82168de0
	if (!ctx.cr6.lt) goto loc_82168DE0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwzu r3,4(r30)
	ea = 4 + r30.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822fbdd0
	ctx.lr = 0x82168DBC;
	sub_822FBDD0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82168DD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x82168d90
	goto loc_82168D90;
loc_82168DE0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-14800
	ctx.r4.s64 = ctx.r10.s64 + -14800;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82168DFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82168DFC:
	// addi r1,r1,10464
	ctx.r1.s64 = ctx.r1.s64 + 10464;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82181C38) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 48);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,56(r4)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r4.u32 + 56);
	// lfs f7,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lfs f6,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fadds f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// fmuls f7,f6,f1
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lfs f0,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// std r9,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lfs f10,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f12,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// lfs f11,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmuls f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// lfs f31,15048(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	f31.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f9,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f30,1024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1024);
	f30.f64 = double(temp.f32);
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// stfs f30,96(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// fmadds f0,f0,f31,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, ctx.f12.f64)));
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// fmadds f13,f13,f31,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, ctx.f11.f64)));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fmadds f12,f8,f31,f7
	ctx.f12.f64 = double(float(std::fma(ctx.f8.f64, f31.f64, ctx.f7.f64)));
	// fadds f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bctrl 
	ctx.lr = 0x82181D30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lfs f12,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f13,f12,f29
	ctx.f13.f64 = double(float(ctx.f12.f64 * f29.f64));
	// lfs f11,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lfs f10,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f8,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f31,128(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f30,132(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f10,f29,f10
	ctx.f10.f64 = double(float(f29.f64 * ctx.f10.f64));
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmadds f0,f0,f31,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, ctx.f13.f64)));
	// lfs f12,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f11,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fmuls f9,f8,f29
	ctx.f9.f64 = double(float(ctx.f8.f64 * f29.f64));
	// fmadds f13,f12,f31,f10
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, ctx.f10.f64)));
	// lfs f12,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f11,f31,f9
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, f31.f64, ctx.f9.f64)));
	// lfs f10,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f9,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fadds f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fadds f0,f11,f9
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bctrl 
	ctx.lr = 0x82181DD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lfs f10,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 * f29.f64));
	// lfs f9,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f29
	ctx.f10.f64 = double(float(ctx.f10.f64 * f29.f64));
	// lfs f8,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f7,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lfs f6,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,160(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f31,164(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f30,168(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fmadds f0,f0,f31,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, ctx.f12.f64)));
	// lfs f13,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// lfs f11,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fmuls f9,f8,f29
	ctx.f9.f64 = double(float(ctx.f8.f64 * f29.f64));
	// lfs f8,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmadds f13,f13,f31,f10
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, ctx.f10.f64)));
	// fmadds f12,f11,f31,f9
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, f31.f64, ctx.f9.f64)));
	// fadds f0,f13,f7
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fadds f0,f12,f6
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// bctrl 
	ctx.lr = 0x82181E70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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

DEFINE_REX_FUNC(sub_82197018) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cac
	ctx.lr = 0x82197020;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r26
	r31.u64 = r26.u64;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// bl 0x8214f4f0
	ctx.lr = 0x82197038;
	sub_8214F4F0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r26,72(r30)
	REX_STORE_U32(r30.u32 + 72, r26.u32);
	// stw r26,76(r30)
	REX_STORE_U32(r30.u32 + 76, r26.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r10,r10,-31272
	ctx.r10.s64 = ctx.r10.s64 + -31272;
	// addi r29,r30,72
	r29.s64 = r30.s64 + 72;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stfs f0,80(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 80, temp.u32);
	// addi r27,r30,76
	r27.s64 = r30.s64 + 76;
	// addi r25,r30,80
	r25.s64 = r30.s64 + 80;
	// bl 0x822f6280
	ctx.lr = 0x8219706C;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x821970a0
	if (ctx.cr0.eq) goto loc_821970A0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-31312
	ctx.r4.s64 = ctx.r11.s64 + -31312;
	// bl 0x82120600
	ctx.lr = 0x82197084;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r31,1
	r31.s64 = 1;
	// bl 0x82197628
	ctx.lr = 0x82197098;
	sub_82197628(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x821970a4
	goto loc_821970A4;
loc_821970A0:
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
loc_821970A4:
	// addi r28,r30,28
	r28.s64 = r30.s64 + 28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821970B4;
	sub_82145710(ctx, base);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821970d0
	if (ctx.cr0.eq) goto loc_821970D0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r31,0,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821970D0;
	sub_82120AC0(ctx, base);
loc_821970D0:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x822f6280
	ctx.lr = 0x821970D8;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82197124
	if (ctx.cr0.eq) goto loc_82197124;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-31292
	ctx.r4.s64 = ctx.r11.s64 + -31292;
	// bl 0x82120600
	ctx.lr = 0x821970F0;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,2
	r31.u64 = r31.u64 | 2;
	// bl 0x82197628
	ctx.lr = 0x82197104;
	sub_82197628(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r11,r11,10360
	ctx.r11.s64 = ctx.r11.s64 + 10360;
	// addi r10,r10,-17140
	ctx.r10.s64 = ctx.r10.s64 + -17140;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// stw r10,52(r29)
	REX_STORE_U32(r29.u32 + 52, ctx.r10.u32);
	// b 0x82197128
	goto loc_82197128;
loc_82197124:
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
loc_82197128:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82197134;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82197150
	if (ctx.cr0.eq) goto loc_82197150;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r31,r31,0,31,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x82197150;
	sub_82120AC0(ctx, base);
loc_82197150:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82197158;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8219718c
	if (ctx.cr0.eq) goto loc_8219718C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-31284
	ctx.r4.s64 = ctx.r11.s64 + -31284;
	// bl 0x82120600
	ctx.lr = 0x82197170;
	sub_82120600(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,4
	r31.u64 = r31.u64 | 4;
	// bl 0x82196ba8
	ctx.lr = 0x82197184;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82197190
	goto loc_82197190;
loc_8219718C:
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
loc_82197190:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x8219719C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821971b4
	if (ctx.cr0.eq) goto loc_821971B4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x821971B4;
	sub_82120AC0(ctx, base);
loc_821971B4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_821A3780) {
	REX_FUNC_PROLOGUE();
	// lwz r11,-32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-32(r3)
	REX_STORE_U32(ctx.r3.u32 + -32, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A3C50) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lbz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// lbz r8,3(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 3);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,-16(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + -16);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// addi r10,r9,16592
	ctx.r10.s64 = ctx.r9.s64 + 16592;
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// lfs f0,56(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lwz r9,-20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + -20);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// li r7,4
	ctx.r7.s64 = 4;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A3D04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A7870) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821A7878;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82125dc8
	ctx.lr = 0x821A7884;
	sub_82125DC8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// addi r11,r31,96
	ctx.r11.s64 = r31.s64 + 96;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lfs f0,172(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r7,r7,-25064
	ctx.r7.s64 = ctx.r7.s64 + -25064;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// lfs f13,596(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 596);
	ctx.f13.f64 = double(temp.f32);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r7,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// std r11,96(r31)
	REX_STORE_U64(r31.u32 + 96, ctx.r11.u64);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// std r10,104(r31)
	REX_STORE_U64(r31.u32 + 104, ctx.r10.u64);
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// std r10,112(r31)
	REX_STORE_U64(r31.u32 + 112, ctx.r10.u64);
	// std r9,120(r31)
	REX_STORE_U64(r31.u32 + 120, ctx.r9.u64);
	// bl 0x8216fb28
	ctx.lr = 0x821A78F0;
	sub_8216FB28(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,64
	ctx.r3.s64 = 64;
	// stw r30,140(r31)
	REX_STORE_U32(r31.u32 + 140, r30.u32);
	// addi r11,r31,140
	ctx.r11.s64 = r31.s64 + 140;
	// stw r30,144(r31)
	REX_STORE_U32(r31.u32 + 144, r30.u32);
	// stw r30,148(r31)
	REX_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x821A7910;
	sub_8269D1D0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x821A791C;
	sub_8269D1B8(ctx, base);
	// li r29,8
	r29.s64 = 8;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r28,140(r31)
	REX_STORE_U32(r31.u32 + 140, r28.u32);
	// li r3,512
	ctx.r3.s64 = 512;
	// stw r29,148(r31)
	REX_STORE_U32(r31.u32 + 148, r29.u32);
	// addi r11,r31,152
	ctx.r11.s64 = r31.s64 + 152;
	// stw r30,152(r31)
	REX_STORE_U32(r31.u32 + 152, r30.u32);
	// stw r30,156(r31)
	REX_STORE_U32(r31.u32 + 156, r30.u32);
	// stw r30,160(r31)
	REX_STORE_U32(r31.u32 + 160, r30.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x821A7944;
	sub_8269D1D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x821A7950;
	sub_8269D1B8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r30,152(r31)
	REX_STORE_U32(r31.u32 + 152, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,160(r31)
	REX_STORE_U32(r31.u32 + 160, r29.u32);
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 164, temp.u32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821B01B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
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
	// bl 0x826a1cac
	ctx.lr = 0x821B01B8;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826a2c78
	ctx.lr = 0x821B01C0;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// lwz r10,128(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,16
	r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,6188(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 6188);
	// addi r30,r31,48
	r30.s64 = r31.s64 + 48;
	// ld r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 16);
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// addi r26,r11,4
	r26.s64 = ctx.r11.s64 + 4;
	// lfs f30,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	f30.f64 = double(temp.f32);
	// ld r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 24);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 * ctx.f0.f64));
	// lfs f13,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f29,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	f29.f64 = double(temp.f32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// std r9,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// lfs f28,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	f28.f64 = double(temp.f32);
	// lwz r9,4(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lfs f12,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// std r10,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// mulli r10,r9,80
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(80));
	// fmadds f0,f29,f13,f0
	ctx.f0.f64 = double(float(std::fma(f29.f64, ctx.f13.f64, ctx.f0.f64)));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// fnmadds f27,f28,f12,f0
	f27.f64 = double(float(-std::fma(f28.f64, ctx.f12.f64, ctx.f0.f64)));
	// beq cr6,0x821b0404
	if (ctx.cr6.eq) goto loc_821B0404;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r28,r11,56
	r28.s64 = ctx.r11.s64 + 56;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r25,r11,16592
	r25.s64 = ctx.r11.s64 + 16592;
	// lfs f31,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
loc_821B0250:
	// lwz r11,-48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -48);
	// lwz r10,140(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 140);
	// and. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821b03e4
	if (ctx.cr0.eq) goto loc_821B03E4;
	// lwz r10,144(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 144);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821b03e4
	if (!ctx.cr0.eq) goto loc_821B03E4;
	// lfs f0,-36(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + -36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f0,f29
	ctx.f8.f64 = double(float(ctx.f0.f64 * f29.f64));
	// fmuls f7,f28,f11
	ctx.f7.f64 = double(float(f28.f64 * ctx.f11.f64));
	// lfs f13,-32(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,-4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,-40(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + -40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,-8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f13,f28,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f13.f64, f28.f64, ctx.f8.f64)));
	// fmadds f7,f10,f29,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f10.f64, f29.f64, ctx.f7.f64)));
	// fmadds f8,f12,f30,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, f30.f64, ctx.f8.f64)));
	// fmadds f7,f9,f30,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, f30.f64, ctx.f7.f64)));
	// fadds f8,f8,f27
	ctx.f8.f64 = double(float(ctx.f8.f64 + f27.f64));
	// fadds f7,f7,f27
	ctx.f7.f64 = double(float(ctx.f7.f64 + f27.f64));
	// fmuls f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fcmpu cr6,f6,f31
	ctx.cr6.compare(ctx.f6.f64, f31.f64);
	// bgt cr6,0x821b03e4
	if (ctx.cr6.gt) goto loc_821B03E4;
	// fcmpu cr6,f8,f31
	ctx.cr6.compare(ctx.f8.f64, f31.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x821b02c0
	if (ctx.cr6.gt) goto loc_821B02C0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B02C0:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// fcmpu cr6,f7,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f7.f64, f31.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x821b02d4
	if (ctx.cr6.gt) goto loc_821B02D4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B02D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b03e4
	if (ctx.cr6.eq) goto loc_821B03E4;
	// lfs f8,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// lfs f5,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsubs f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// lfs f3,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f1,f3,f12
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// lfs f26,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	f26.f64 = double(temp.f32);
	// lfs f25,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	f25.f64 = double(temp.f32);
	// addi r11,r25,256
	ctx.r11.s64 = r25.s64 + 256;
	// lfs f24,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	f24.f64 = double(temp.f32);
	// lfs f23,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	f23.f64 = double(temp.f32);
	// lfs f22,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	f22.f64 = double(temp.f32);
	// fmuls f21,f5,f11
	f21.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// lfs f20,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	f20.f64 = double(temp.f32);
	// fmuls f7,f5,f7
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// lfs f5,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// lfs f19,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f19.f64 = double(temp.f32);
	// lfs f18,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	f18.f64 = double(temp.f32);
	// lfs f17,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	f17.f64 = double(temp.f32);
	// lfs f16,-24(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + -24);
	f16.f64 = double(temp.f32);
	// fmadds f21,f2,f10,f21
	f21.f64 = double(float(std::fma(ctx.f2.f64, ctx.f10.f64, f21.f64)));
	// fmadds f7,f2,f4,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f2.f64, ctx.f4.f64, ctx.f7.f64)));
	// fmadds f4,f26,f9,f21
	ctx.f4.f64 = double(float(std::fma(f26.f64, ctx.f9.f64, f21.f64)));
	// fmadds f7,f26,f1,f7
	ctx.f7.f64 = double(float(std::fma(f26.f64, ctx.f1.f64, ctx.f7.f64)));
	// fdivs f7,f7,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 / ctx.f4.f64));
	// fmuls f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmuls f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmadds f7,f17,f7,f16
	ctx.f7.f64 = double(float(std::fma(f17.f64, ctx.f7.f64, f16.f64)));
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fadds f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// fsubs f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// fsubs f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// fsubs f12,f12,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// fmuls f11,f25,f0
	ctx.f11.f64 = double(float(f25.f64 * ctx.f0.f64));
	// fmuls f0,f24,f0
	ctx.f0.f64 = double(float(f24.f64 * ctx.f0.f64));
	// fmadds f11,f23,f13,f11
	ctx.f11.f64 = double(float(std::fma(f23.f64, ctx.f13.f64, ctx.f11.f64)));
	// fmadds f0,f22,f13,f0
	ctx.f0.f64 = double(float(std::fma(f22.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f13,f20,f12,f11
	ctx.f13.f64 = double(float(std::fma(f20.f64, ctx.f12.f64, ctx.f11.f64)));
	// fmadds f0,f5,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, ctx.f0.f64)));
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fsubs f13,f13,f19
	ctx.f13.f64 = double(float(ctx.f13.f64 - f19.f64));
	// fsubs f0,f0,f18
	ctx.f0.f64 = double(float(ctx.f0.f64 - f18.f64));
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// mfcr r10
	ctx.r10.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r10.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r10.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r10.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r10.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r10.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r10.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r10.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r10.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r10.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r10.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r10.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r10.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r10.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r10.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r10.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r10.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r10.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r10.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r10.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r10.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r10.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r10.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r10.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r10.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r10.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r10.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r10.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r10.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r10.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r10.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r10.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r9,r10,27,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// rlwinm r10,r10,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lfsx f12,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f0,f12,f13,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// bge cr6,0x821b03e4
	if (!ctx.cr6.lt) goto loc_821B03E4;
	// lwz r11,-56(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -56);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x821dfdb8
	ctx.lr = 0x821B03E4;
	sub_821DFDB8(ctx, base);
loc_821B03E4:
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r28,r28,80
	r28.s64 = r28.s64 + 80;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mulli r10,r10,80
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(80));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r28,-56
	ctx.r10.s64 = r28.s64 + -56;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821b0250
	if (!ctx.cr6.eq) goto loc_821B0250;
loc_821B0404:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826a2cc4
	ctx.lr = 0x821B0410;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_821C7E80) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// b 0x821e3270
	sub_821E3270(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821C7F18) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r9,r10,-8
	ctx.r9.s64 = ctx.r10.s64 + -8;
	// lwz r10,308(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 308);
	// addi r31,r3,148
	r31.s64 = ctx.r3.s64 + 148;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
loc_821C7F4C:
	// ldu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r10,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x821c7f4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C7F4C;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c7f70
	if (ctx.cr6.eq) goto loc_821C7F70;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821884b0
	ctx.lr = 0x821C7F70;
	sub_821884B0(ctx, base);
loc_821C7F70:
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c7f84
	if (ctx.cr6.eq) goto loc_821C7F84;
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// b 0x821c7f8c
	goto loc_821C7F8C;
loc_821C7F84:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
loc_821C7F8C:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,168(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 168);
	// bl 0x82191578
	ctx.lr = 0x821C7F98;
	sub_82191578(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e34c8
	ctx.lr = 0x821C7FA0;
	sub_821E34C8(ctx, base);
	// lwz r10,724(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 724);
	// addi r31,r30,464
	r31.s64 = r30.s64 + 464;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821c8044
	if (ctx.cr6.eq) goto loc_821C8044;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c8044
	if (ctx.cr6.eq) goto loc_821C8044;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,204(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 204);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f0,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C7FF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821e4a80
	ctx.lr = 0x821C8004;
	sub_821E4A80(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lfs f1,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 240);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,260(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 260);
	// bl 0x822c0b70
	ctx.lr = 0x821C8014;
	sub_822C0B70(ctx, base);
	// lbz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 264);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c8044
	if (ctx.cr0.eq) goto loc_821C8044;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r31,260(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r3,6164(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6164);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C803C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82294a30
	ctx.lr = 0x821C8044;
	sub_82294A30(ctx, base);
loc_821C8044:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

DEFINE_REX_FUNC(sub_821D41C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821D41D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x8269d6a8
	ctx.lr = 0x821D41E4;
	sub_8269D6A8(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269d6a8
	ctx.lr = 0x821D41F4;
	sub_8269D6A8(ctx, base);
	// mullw r11,r29,r31
	ctx.r11.s64 = int64_t(r29.s32) * int64_t(r31.s32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r28,4(r30)
	REX_STORE_U32(r30.u32 + 4, r28.u32);
	// bl 0x8269d6a8
	ctx.lr = 0x821D420C;
	sub_8269D6A8(ctx, base);
	// stw r3,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(r31.s32, 2, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blt cr6,0x821d4264
	if (ctx.cr6.lt) goto loc_821D4264;
	// addi r10,r31,-1
	ctx.r10.s64 = r31.s64 + -1;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,8
	ctx.r11.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821D4248:
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,-4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bdnz 0x821d4248
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D4248;
loc_821D4264:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821D9200) {
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
	// bl 0x826a1cb0
	ctx.lr = 0x821D9208;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// addi r28,r6,12
	r28.s64 = ctx.r6.s64 + 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d9250
	if (!ctx.cr6.eq) goto loc_821D9250;
	// lwz r6,4(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
loc_821D9238:
	// li r5,1
	ctx.r5.s64 = 1;
loc_821D923C:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_821D9248:
	// bl 0x821d94c8
	ctx.lr = 0x821D924C;
	sub_821D94C8(ctx, base);
	// b 0x821d93ac
	goto loc_821D93AC;
loc_821D9250:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821d927c
	if (!ctx.cr6.eq) goto loc_821D927C;
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120780
	ctx.lr = 0x821D926C;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821d9390
	if (!ctx.cr0.lt) goto loc_821D9390;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// b 0x821d9238
	goto loc_821D9238;
loc_821D927C:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d92ac
	if (!ctx.cr6.eq) goto loc_821D92AC;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x821D9294;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821d9390
	if (!ctx.cr0.lt) goto loc_821D9390;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x821d923c
	goto loc_821D923C;
loc_821D92AC:
	// addi r26,r29,12
	r26.s64 = r29.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82120780
	ctx.lr = 0x821D92BC;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821d931c
	if (!ctx.cr0.lt) goto loc_821D931C;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821d96a8
	ctx.lr = 0x821D92D0;
	sub_821D96A8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x821D92E0;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821d931c
	if (!ctx.cr0.lt) goto loc_821D931C;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// lbz r11,93(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 93);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d9310
	if (ctx.cr0.eq) goto loc_821D9310;
loc_821D9308:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x821d9248
	goto loc_821D9248;
loc_821D9310:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
loc_821D9314:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x821d9248
	goto loc_821D9248;
loc_821D931C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82120780
	ctx.lr = 0x821D9328;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821d9390
	if (!ctx.cr0.lt) goto loc_821D9390;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a8b28
	ctx.lr = 0x821D933C;
	sub_821A8B28(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821d9364
	if (ctx.cr6.eq) goto loc_821D9364;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x821D935C;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821d9390
	if (!ctx.cr0.lt) goto loc_821D9390;
loc_821D9364:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r11,93(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 93);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d9388
	if (ctx.cr0.eq) goto loc_821D9388;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// b 0x821d9308
	goto loc_821D9308;
loc_821D9388:
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x821d9314
	goto loc_821D9314;
loc_821D9390:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821d93b8
	ctx.lr = 0x821D93A0;
	sub_821D93B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_821D93AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821E0C90) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c98
	ctx.lr = 0x821E0C98;
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-6240(r1)
	ea = -6240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-17296
	ctx.r4.s64 = ctx.r11.s64 + -17296;
	// bl 0x8215f338
	ctx.lr = 0x821E0CB8;
	sub_8215F338(ctx, base);
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x8215fba8
	ctx.lr = 0x821E0CC0;
	sub_8215FBA8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r4,r11,10796
	ctx.r4.s64 = ctx.r11.s64 + 10796;
	// bl 0x8215f338
	ctx.lr = 0x821E0CD0;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x821E0CD4;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120d70
	ctx.lr = 0x821E0CE0;
	sub_82120D70(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,6040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// bl 0x82154b70
	ctx.lr = 0x821E0CF0;
	sub_82154B70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r3.u32);
	// bne 0x821e0d18
	if (!ctx.cr0.eq) goto loc_821E0D18;
loc_821E0CFC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x821E0D0C;
	sub_82120AC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E0D10:
	// addi r1,r1,6240
	ctx.r1.s64 = ctx.r1.s64 + 6240;
	// b 0x826a1ce8
	return;
loc_821E0D18:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120830
	ctx.lr = 0x821E0D20;
	sub_82120830(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r23,r11,-10512
	r23.s64 = ctx.r11.s64 + -10512;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x821E0D38;
	sub_8215F338(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// bl 0x821e17a0
	ctx.lr = 0x821E0D4C;
	sub_821E17A0(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6072(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6072);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E0D64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r24,-32106
	r24.s64 = -2104098816;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r31,r11,-26856
	r31.s64 = ctx.r11.s64 + -26856;
	// bne cr6,0x821e0dc0
	if (!ctx.cr6.eq) goto loc_821E0DC0;
	// lwz r11,6176(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 6176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e0dc0
	if (!ctx.cr6.eq) goto loc_821E0DC0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r4,r11,13044
	ctx.r4.s64 = ctx.r11.s64 + 13044;
	// bl 0x82120600
	ctx.lr = 0x821E0D98;
	sub_82120600(ctx, base);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821208c0
	ctx.lr = 0x821E0DA4;
	sub_821208C0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82120c08
	ctx.lr = 0x821E0DB0;
	sub_82120C08(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82120ac0
	ctx.lr = 0x821E0DC0;
	sub_82120AC0(ctx, base);
loc_821E0DC0:
	// lbz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 56);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821e0e04
	if (ctx.cr0.eq) goto loc_821E0E04;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,13056
	ctx.r4.s64 = ctx.r11.s64 + 13056;
	// bl 0x82120600
	ctx.lr = 0x821E0DDC;
	sub_82120600(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821208c0
	ctx.lr = 0x821E0DE8;
	sub_821208C0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82120c08
	ctx.lr = 0x821E0DF4;
	sub_82120C08(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82120ac0
	ctx.lr = 0x821E0E04;
	sub_82120AC0(ctx, base);
loc_821E0E04:
	// lwz r3,44(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 44);
	// bl 0x82153030
	ctx.lr = 0x821E0E0C;
	sub_82153030(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821a4270
	ctx.lr = 0x821E0E1C;
	sub_821A4270(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// bne 0x821e0e48
	if (!ctx.cr0.eq) goto loc_821E0E48;
loc_821E0E28:
	// lwz r6,132(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82120cc8
	ctx.lr = 0x821E0E3C;
	sub_82120CC8(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8269ce98
	ctx.lr = 0x821E0E44;
	sub_8269CE98(ctx, base);
	// b 0x821e0cfc
	goto loc_821E0CFC;
loc_821E0E48:
	// lwz r3,44(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 44);
	// bl 0x82153080
	ctx.lr = 0x821E0E50;
	sub_82153080(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821a4270
	ctx.lr = 0x821E0E60;
	sub_821A4270(ctx, base);
	// li r21,0
	r21.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// bne 0x821e0e74
	if (!ctx.cr0.eq) goto loc_821E0E74;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_821E0E74:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r11.u32);
	// beq cr6,0x821e0e28
	if (ctx.cr6.eq) goto loc_821E0E28;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// addi r4,r11,-17912
	ctx.r4.s64 = ctx.r11.s64 + -17912;
	// bl 0x82120600
	ctx.lr = 0x821E0E90;
	sub_82120600(ctx, base);
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r31,132(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82120a20
	ctx.lr = 0x821E0EA4;
	sub_82120A20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,57(r30)
	REX_STORE_U8(r30.u32 + 57, ctx.r11.u8);
	// bl 0x82120ac0
	ctx.lr = 0x821E0ECC;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,13068
	ctx.r4.s64 = ctx.r11.s64 + 13068;
	// bl 0x82120600
	ctx.lr = 0x821E0EDC;
	sub_82120600(ctx, base);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r31,132(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82120a20
	ctx.lr = 0x821E0EF0;
	sub_82120A20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,58(r30)
	REX_STORE_U8(r30.u32 + 58, ctx.r11.u8);
	// bl 0x82120ac0
	ctx.lr = 0x821E0F18;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,13080
	ctx.r4.s64 = ctx.r11.s64 + 13080;
	// bl 0x82120600
	ctx.lr = 0x821E0F28;
	sub_82120600(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r31,132(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82120a20
	ctx.lr = 0x821E0F3C;
	sub_82120A20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,59(r30)
	REX_STORE_U8(r30.u32 + 59, ctx.r11.u8);
	// bl 0x82120ac0
	ctx.lr = 0x821E0F64;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,24920
	ctx.r4.s64 = ctx.r11.s64 + 24920;
	// bl 0x82120600
	ctx.lr = 0x821E0F74;
	sub_82120600(ctx, base);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r31,132(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82120a20
	ctx.lr = 0x821E0F88;
	sub_82120A20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,60(r30)
	REX_STORE_U8(r30.u32 + 60, ctx.r11.u8);
	// bl 0x82120ac0
	ctx.lr = 0x821E0FB0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r29,r21
	r29.u64 = r21.u64;
	// addi r4,r11,13096
	ctx.r4.s64 = ctx.r11.s64 + 13096;
	// mr r26,r21
	r26.u64 = r21.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120600
	ctx.lr = 0x821E0FC8;
	sub_82120600(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120a20
	ctx.lr = 0x821E0FD8;
	sub_82120A20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82120ac0
	ctx.lr = 0x821E0FF0;
	sub_82120AC0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821e1030
	if (ctx.cr6.eq) goto loc_821E1030;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
	// addi r4,r11,-29928
	ctx.r4.s64 = ctx.r11.s64 + -29928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82125d00
	ctx.lr = 0x821E1010;
	sub_82125D00(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r4,r11,-29916
	ctx.r4.s64 = ctx.r11.s64 + -29916;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r29,r10,27,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82125d00
	ctx.lr = 0x821E1028;
	sub_82125D00(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r26,r11,27,31,31
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_821E1030:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r20,1
	r20.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,13116
	ctx.r4.s64 = ctx.r11.s64 + 13116;
	// mr r28,r20
	r28.u64 = r20.u64;
	// mr r27,r21
	r27.u64 = r21.u64;
	// mr r25,r21
	r25.u64 = r21.u64;
	// bl 0x82120600
	ctx.lr = 0x821E1050;
	sub_82120600(ctx, base);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120a20
	ctx.lr = 0x821E1060;
	sub_82120A20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82120ac0
	ctx.lr = 0x821E1078;
	sub_82120AC0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821e10d0
	if (ctx.cr6.eq) goto loc_821E10D0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
	// addi r4,r11,-29936
	ctx.r4.s64 = ctx.r11.s64 + -29936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82125d00
	ctx.lr = 0x821E1098;
	sub_82125D00(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-29944
	ctx.r4.s64 = ctx.r11.s64 + -29944;
	// rlwinm r28,r10,27,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82125d00
	ctx.lr = 0x821E10B0;
	sub_82125D00(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r4,r11,-29952
	ctx.r4.s64 = ctx.r11.s64 + -29952;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r27,r10,27,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82125d00
	ctx.lr = 0x821E10C8;
	sub_82125D00(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r25,r11,27,31,31
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_821E10D0:
	// lwz r11,6176(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 6176);
	// clrlwi. r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stb r29,61(r30)
	REX_STORE_U8(r30.u32 + 61, r29.u8);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,64(r30)
	REX_STORE_U32(r30.u32 + 64, ctx.r11.u32);
	// bne 0x821e10f8
	if (!ctx.cr0.eq) goto loc_821E10F8;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e1158
	if (ctx.cr0.eq) goto loc_821E1158;
loc_821E10F8:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e1118
	if (ctx.cr0.eq) goto loc_821E1118;
	// clrlwi r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// stw r11,64(r30)
	REX_STORE_U32(r30.u32 + 64, ctx.r11.u32);
loc_821E1118:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e1138
	if (ctx.cr0.eq) goto loc_821E1138;
	// clrlwi r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,64(r30)
	REX_STORE_U32(r30.u32 + 64, ctx.r11.u32);
loc_821E1138:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e1158
	if (ctx.cr0.eq) goto loc_821E1158;
	// clrlwi r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// stw r11,64(r30)
	REX_STORE_U32(r30.u32 + 64, ctx.r11.u32);
loc_821E1158:
	// addi r3,r1,4240
	ctx.r3.s64 = ctx.r1.s64 + 4240;
	// lwz r5,52(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 52);
	// lwz r4,48(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 48);
	// bl 0x8216fc68
	ctx.lr = 0x821E1168;
	sub_8216FC68(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x821E1178;
	sub_8215F338(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r1,4240
	ctx.r6.s64 = ctx.r1.s64 + 4240;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e1bc0
	ctx.lr = 0x821E118C;
	sub_821E1BC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821e11cc
	if (!ctx.cr0.eq) goto loc_821E11CC;
	// lwz r6,132(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82120cc8
	ctx.lr = 0x821E11A8;
	sub_82120CC8(ctx, base);
	// mr r31,r21
	r31.u64 = r21.u64;
loc_821E11AC:
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8269ce98
	ctx.lr = 0x821E11B4;
	sub_8269CE98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x821E11C4;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x821e0d10
	goto loc_821E0D10;
loc_821E11CC:
	// lis r26,-32106
	r26.s64 = -2104098816;
	// addi r4,r1,4240
	ctx.r4.s64 = ctx.r1.s64 + 4240;
	// lwz r3,6060(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6060);
	// bl 0x8212e940
	ctx.lr = 0x821E11DC;
	sub_8212E940(ctx, base);
	// stw r3,68(r30)
	REX_STORE_U32(r30.u32 + 68, ctx.r3.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,13136
	ctx.r4.s64 = ctx.r11.s64 + 13136;
	// mr r31,r21
	r31.u64 = r21.u64;
	// bl 0x82120600
	ctx.lr = 0x821E11F4;
	sub_82120600(ctx, base);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120a20
	ctx.lr = 0x821E1204;
	sub_82120A20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82120ac0
	ctx.lr = 0x821E121C;
	sub_82120AC0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821e128c
	if (ctx.cr6.eq) goto loc_821E128C;
	// lwz r10,60(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 60);
	// addi r11,r29,40
	ctx.r11.s64 = r29.s64 + 40;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x821e1240
	if (ctx.cr6.lt) goto loc_821E1240;
	// lwz r27,0(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821e1244
	goto loc_821E1244;
loc_821E1240:
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_821E1244:
	// lwz r29,68(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 68);
	// mr r28,r21
	r28.u64 = r21.u64;
	// addi r31,r29,792
	r31.s64 = r29.s64 + 792;
	// lwz r11,1880(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1880);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821e1288
	if (!ctx.cr6.gt) goto loc_821E1288;
loc_821E125C:
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269f180
	ctx.lr = 0x821E126C;
	sub_8269F180(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821e128c
	if (ctx.cr0.eq) goto loc_821E128C;
	// lwz r11,1880(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1880);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,136
	r31.s64 = r31.s64 + 136;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821e125c
	if (ctx.cr6.lt) goto loc_821E125C;
loc_821E1288:
	// mr r31,r21
	r31.u64 = r21.u64;
loc_821E128C:
	// lis r27,-32106
	r27.s64 = -2104098816;
	// lbz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 56);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,6096(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 6096);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// beq 0x821e12ac
	if (ctx.cr0.eq) goto loc_821E12AC;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x821e12b0
	goto loc_821E12B0;
loc_821E12AC:
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821E12B0:
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8216fc68
	ctx.lr = 0x821E12BC;
	sub_8216FC68(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r28,r11,13172
	r28.s64 = ctx.r11.s64 + 13172;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r29,r11,13152
	r29.s64 = ctx.r11.s64 + 13152;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// beq cr6,0x821e132c
	if (ctx.cr6.eq) goto loc_821E132C;
	// stw r20,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r20.u32);
	// bl 0x82170190
	ctx.lr = 0x821E12EC;
	sub_82170190(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// lwz r8,128(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 128);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r7,r31,48
	ctx.r7.s64 = r31.s64 + 48;
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// lwz r9,116(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// lfs f1,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lwz r25,124(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 124);
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// bl 0x82170228
	ctx.lr = 0x821E1328;
	sub_82170228(ctx, base);
	// b 0x821e1334
	goto loc_821E1334;
loc_821E132C:
	// stw r21,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r21.u32);
	// bl 0x82170190
	ctx.lr = 0x821E1334;
	sub_82170190(ctx, base);
loc_821E1334:
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// lwz r3,6060(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6060);
	// bl 0x8212e940
	ctx.lr = 0x821E1340;
	sub_8212E940(ctx, base);
	// lwz r11,6096(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 6096);
	// lbz r10,56(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 56);
	// stw r3,72(r30)
	REX_STORE_U32(r30.u32 + 72, ctx.r3.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// beq 0x821e1360
	if (ctx.cr0.eq) goto loc_821E1360;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x821e1364
	goto loc_821E1364;
loc_821E1360:
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821E1364:
	// addi r3,r1,2352
	ctx.r3.s64 = ctx.r1.s64 + 2352;
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8216fc68
	ctx.lr = 0x821E1370;
	sub_8216FC68(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,2352
	ctx.r3.s64 = ctx.r1.s64 + 2352;
	// beq cr6,0x821e13d0
	if (ctx.cr6.eq) goto loc_821E13D0;
	// stw r20,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r20.u32);
	// bl 0x82170190
	ctx.lr = 0x821E1390;
	sub_82170190(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// lwz r8,132(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 132);
	// lfs f1,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// addi r7,r31,48
	ctx.r7.s64 = r31.s64 + 48;
	// lwz r9,116(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,2352
	ctx.r3.s64 = ctx.r1.s64 + 2352;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lwz r31,128(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 128);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x82170228
	ctx.lr = 0x821E13CC;
	sub_82170228(ctx, base);
	// b 0x821e13d8
	goto loc_821E13D8;
loc_821E13D0:
	// stw r21,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r21.u32);
	// bl 0x82170190
	ctx.lr = 0x821E13D8;
	sub_82170190(ctx, base);
loc_821E13D8:
	// addi r4,r1,2352
	ctx.r4.s64 = ctx.r1.s64 + 2352;
	// lwz r3,6060(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6060);
	// bl 0x8212e940
	ctx.lr = 0x821E13E4;
	sub_8212E940(ctx, base);
	// stw r3,76(r30)
	REX_STORE_U32(r30.u32 + 76, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e2360
	ctx.lr = 0x821E13F0;
	sub_821E2360(ctx, base);
	// lwz r6,132(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82120cc8
	ctx.lr = 0x821E1404;
	sub_82120CC8(ctx, base);
	// mr r31,r20
	r31.u64 = r20.u64;
	// b 0x821e11ac
	goto loc_821E11AC;
}

DEFINE_REX_FUNC(sub_8221BE80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8221BE88;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,800
	r31.s64 = ctx.r3.s64 + 800;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-26344
	ctx.r4.s64 = ctx.r11.s64 + -26344;
	// bl 0x8215f338
	ctx.lr = 0x8221BEA4;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x8221BEA8;
	sub_8215F990(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,-17296
	ctx.r4.s64 = ctx.r11.s64 + -17296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x8221BEBC;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8221BEC0;
	sub_8215FA30(ctx, base);
	// lwz r11,792(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 792);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x8221BED8;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x8221BEE0;
	sub_8215F2D0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,20272
	ctx.r4.s64 = ctx.r11.s64 + 20272;
	// bl 0x8215f338
	ctx.lr = 0x8221BEEC;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8221bf10
	if (!ctx.cr6.eq) goto loc_8221BF10;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x8221bf14
	goto loc_8221BF14;
loc_8221BF10:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221BF14:
	// srawi r10,r29,31
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = r29.s32 >> 31;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r11,r11,r29
	ctx.xer.ca = r29.u32 >= ctx.r11.u32;
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// adde r11,r9,r10
	temp.u8 = (ctx.r9.u32 + ctx.r10.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82224430) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r11,668(r3)
	REX_STORE_U8(ctx.r3.u32 + 668, ctx.r11.u8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82272558
	ctx.lr = 0x82224454;
	sub_82272558(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,672(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 672);
	// stb r11,668(r31)
	REX_STORE_U8(r31.u32 + 668, ctx.r11.u8);
	// bl 0x821914c8
	ctx.lr = 0x82224464;
	sub_821914C8(ctx, base);
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

DEFINE_REX_FUNC(sub_822269B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb4
	ctx.lr = 0x822269C0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,605(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 605);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r30,r11,1624
	r30.s64 = ctx.r11.s64 + 1624;
	// bne 0x82226a00
	if (!ctx.cr0.eq) goto loc_82226A00;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-31468
	ctx.r4.s64 = ctx.r11.s64 + -31468;
	// bl 0x8215f338
	ctx.lr = 0x822269F0;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82226a04
	if (ctx.cr6.eq) goto loc_82226A04;
loc_82226A00:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82226A04:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r31,-32106
	r31.s64 = -2104098816;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// beq 0x82226a2c
	if (ctx.cr0.eq) goto loc_82226A2C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16176
	ctx.r4.s64 = ctx.r11.s64 + 16176;
	// bl 0x82125d00
	ctx.lr = 0x82226A20;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82226abc
	if (!ctx.cr0.eq) goto loc_82226ABC;
	// b 0x82226ae4
	goto loc_82226AE4;
loc_82226A2C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16192
	ctx.r4.s64 = ctx.r11.s64 + 16192;
	// bl 0x82125d00
	ctx.lr = 0x82226A38;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82226abc
	if (!ctx.cr0.eq) goto loc_82226ABC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,16492
	ctx.r4.s64 = ctx.r11.s64 + 16492;
	// bl 0x8215f338
	ctx.lr = 0x82226A50;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r30,r11,16176
	r30.s64 = ctx.r11.s64 + 16176;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x82226A60;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82226A64;
	sub_8215FA30(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120600
	ctx.lr = 0x82226A74;
	sub_82120600(ctx, base);
	// lwz r3,6276(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6276);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82226A90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r30,r11,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82120ac0
	ctx.lr = 0x82226AAC;
	sub_82120AC0(ctx, base);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x82226abc
	if (ctx.cr0.eq) goto loc_82226ABC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82226ae4
	goto loc_82226AE4;
loc_82226ABC:
	// lwz r3,6276(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6276);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82226AD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82226AE4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8222AFB8) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,20320
	ctx.r4.s64 = ctx.r11.s64 + 20320;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f670
	ctx.lr = 0x8222AFE0;
	sub_8215F670(ctx, base);
	// bl 0x8215f0f0
	ctx.lr = 0x8222AFE4;
	sub_8215F0F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_8222CE98) {
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
	// li r3,1072
	ctx.r3.s64 = 1072;
	// bl 0x822f6280
	ctx.lr = 0x8222CEAC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222cebc
	if (ctx.cr0.eq) goto loc_8222CEBC;
	// bl 0x8222ced0
	ctx.lr = 0x8222CEB8;
	sub_8222CED0(ctx, base);
	// b 0x8222cec0
	goto loc_8222CEC0;
loc_8222CEBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222CEC0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222EEF0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13604
	ctx.r3.s64 = ctx.r11.s64 + -13604;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222FA80) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13596
	ctx.r3.s64 = ctx.r11.s64 + -13596;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222FBD8) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,-20772
	ctx.r11.s64 = ctx.r11.s64 + -20772;
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x8222FC10;
	sub_82120AC0(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x8222FC20;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x8222FC28;
	sub_82178388(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222fc38
	if (ctx.cr0.eq) goto loc_8222FC38;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8222FC38;
	sub_8269CE98(ctx, base);
loc_8222FC38:
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

DEFINE_REX_FUNC(sub_822335F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822335F8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,976(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 976);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82233704
	if (!ctx.cr6.eq) goto loc_82233704;
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// lfs f0,296(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 296);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lfs f12,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fadds f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// lfs f7,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fadds f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fsubs f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsubs f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82233710
	if (!ctx.cr6.lt) goto loc_82233710;
	// lfs f0,980(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 980);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// lfs f13,756(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 756);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f0,656(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 656);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r3,848
	r31.s64 = ctx.r3.s64 + 848;
	// li r30,0
	r30.s64 = 0;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiw f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,872(r3)
	REX_STORE_U32(ctx.r3.u32 + 872, ctx.r11.u32);
	// lwz r11,956(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 956);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82233710
	if (!ctx.cr6.gt) goto loc_82233710;
	// li r28,0
	r28.s64 = 0;
loc_822336D0:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r28,r11
	ctx.r11.u64 = r28.u64 + ctx.r11.u64;
	// addi r5,r11,160
	ctx.r5.s64 = ctx.r11.s64 + 160;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821d69e8
	ctx.lr = 0x822336EC;
	sub_821D69E8(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,240
	r28.s64 = r28.s64 + 240;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822336d0
	if (ctx.cr6.lt) goto loc_822336D0;
	// b 0x82233710
	goto loc_82233710;
loc_82233704:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r3,168
	ctx.r3.s64 = ctx.r3.s64 + 168;
	// bl 0x821e3148
	ctx.lr = 0x82233710;
	sub_821E3148(ctx, base);
loc_82233710:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8223E2E8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb0
	ctx.lr = 0x8223E2F0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,365(r29)
	REX_STORE_U8(r29.u32 + 365, ctx.r11.u8);
	// lwz r11,128(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 128);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x821b2d80
	ctx.lr = 0x8223E314;
	sub_821B2D80(ctx, base);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r3,6284(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223E334;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8223e3dc
	if (!ctx.cr0.gt) goto loc_8223E3DC;
loc_8223E33C:
	// lwz r3,6284(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6284);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223E354;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6284(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6284);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,84(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223E374;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,460(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 460);
	// mulli r11,r3,320
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(320));
	// lwz r10,3848(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 3848);
	// lwz r9,128(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 128);
	// add r27,r11,r10
	r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r26.s32, ctx.xer);
	// beq cr6,0x8223e3b4
	if (ctx.cr6.eq) goto loc_8223E3B4;
	// lwz r3,6284(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6284);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223E3A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8223e33c
	if (ctx.cr6.lt) goto loc_8223E33C;
	// b 0x8223e3dc
	goto loc_8223E3DC;
loc_8223E3B4:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8223fcb0
	ctx.lr = 0x8223E3C4;
	sub_8223FCB0(ctx, base);
	// lbz r11,113(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 113);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r27)
	REX_STORE_U32(r27.u32 + 16, ctx.r11.u32);
loc_8223E3DC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82244DF8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82178268
	ctx.lr = 0x82244E18;
	sub_82178268(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r3,100
	ctx.r3.s64 = 100;
	// addi r11,r11,-15772
	ctx.r11.s64 = ctx.r11.s64 + -15772;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x82244E2C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82244e4c
	if (ctx.cr0.eq) goto loc_82244E4C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,120
	ctx.r5.s64 = 120;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x82244E44;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82244e50
	goto loc_82244E50;
loc_82244E4C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82244E50:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x82244E5C;
	sub_821D3988(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x82244E64;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82244ea0
	if (ctx.cr0.eq) goto loc_82244EA0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-22996
	ctx.r4.s64 = ctx.r10.s64 + -22996;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x82244E8C;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,-23824
	ctx.r11.s64 = ctx.r11.s64 + -23824;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x82244ea4
	goto loc_82244EA4;
loc_82244EA0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82244EA4:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x82244EBC;
	sub_82264568(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x82244EC4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82244ef0
	if (ctx.cr0.eq) goto loc_82244EF0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,19760
	ctx.r10.s64 = ctx.r10.s64 + 19760;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82244ef4
	goto loc_82244EF4;
loc_82244EF0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82244EF4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// addi r5,r11,17148
	ctx.r5.s64 = ctx.r11.s64 + 17148;
	// bl 0x8216be80
	ctx.lr = 0x82244F04;
	sub_8216BE80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

DEFINE_REX_FUNC(sub_8224E4D0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb8
	ctx.lr = 0x8224E4D8;
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f29.u64);
	// stfd f30,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lbz r11,21(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224e50c
	if (ctx.cr0.eq) goto loc_8224E50C;
	// lwz r4,16(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// bl 0x8224eb58
	ctx.lr = 0x8224E508;
	sub_8224EB58(ctx, base);
	// b 0x8224e978
	goto loc_8224E978;
loc_8224E50C:
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// addi r9,r10,-8
	ctx.r9.s64 = ctx.r10.s64 + -8;
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
loc_8224E524:
	// ldu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r10,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x8224e524
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8224E524;
	// ld r11,1024(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 1024);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ld r9,1032(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 1032);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r8,r31,1024
	ctx.r8.s64 = r31.s64 + 1024;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// bl 0x8216cfa0
	ctx.lr = 0x8224E554;
	sub_8216CFA0(ctx, base);
	// lwz r11,464(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 464);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,768(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 768);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8224e578
	if (!ctx.cr6.eq) goto loc_8224E578;
	// lbz r11,824(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 824);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// beq 0x8224e57c
	if (ctx.cr0.eq) goto loc_8224E57C;
loc_8224E578:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8224E57C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r28,-32106
	r28.s64 = -2104098816;
	// beq 0x8224e5a4
	if (ctx.cr0.eq) goto loc_8224E5A4;
	// lwz r11,6060(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 6060);
	// lwz r10,744(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 744);
	// lbz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 104);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// beq cr6,0x8224e5a8
	if (ctx.cr6.eq) goto loc_8224E5A8;
loc_8224E5A4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8224E5A8:
	// lbz r8,705(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 705);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r29,r11,16592
	r29.s64 = ctx.r11.s64 + 16592;
	// bne 0x8224e774
	if (!ctx.cr0.eq) goto loc_8224E774;
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224e774
	if (!ctx.cr0.eq) goto loc_8224E774;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lbz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 24);
	// lfs f12,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f11,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f11,72(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f11,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// beq 0x8224e670
	if (ctx.cr0.eq) goto loc_8224E670;
	// lbz r11,696(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 696);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8224e774
	if (!ctx.cr0.eq) goto loc_8224E774;
	// lbz r11,697(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 697);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8224e774
	if (!ctx.cr0.eq) goto loc_8224E774;
	// lfs f13,288(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// li r11,255
	ctx.r11.s64 = 255;
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8224e658
	if (!ctx.cr6.gt) goto loc_8224E658;
	// lwz r10,936(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 936);
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// b 0x8224e714
	goto loc_8224E714;
loc_8224E658:
	// lwz r10,932(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 932);
	// stw r11,160(r10)
	REX_STORE_U32(ctx.r10.u32 + 160, ctx.r11.u32);
loc_8224E660:
	// lwz r11,932(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 932);
	// stb r9,164(r11)
	REX_STORE_U8(ctx.r11.u32 + 164, ctx.r9.u8);
	// lwz r3,932(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 932);
	// b 0x8224e770
	goto loc_8224E770;
loc_8224E670:
	// lbz r10,696(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 696);
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// beq 0x8224e6cc
	if (ctx.cr0.eq) goto loc_8224E6CC;
	// lfs f12,692(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 692);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,168(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fctiw f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r10,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
loc_8224E6CC:
	// lbz r10,697(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 697);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8224e6e0
	if (ctx.cr0.eq) goto loc_8224E6E0;
	// li r10,128
	ctx.r10.s64 = 128;
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
loc_8224E6E0:
	// lfs f13,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8224e728
	if (!ctx.cr6.gt) goto loc_8224E728;
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lwz r11,936(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 936);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_8224E714:
	// lwz r11,936(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 936);
	// stb r9,28(r11)
	REX_STORE_U8(ctx.r11.u32 + 28, ctx.r9.u8);
	// lwz r3,936(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 936);
	// bl 0x821d5bd0
	ctx.lr = 0x8224E724;
	sub_821D5BD0(ctx, base);
	// b 0x8224e774
	goto loc_8224E774;
loc_8224E728:
	// lfs f13,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8224e758
	if (!ctx.cr6.gt) goto loc_8224E758;
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lwz r11,932(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 932);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,160(r11)
	REX_STORE_U32(ctx.r11.u32 + 160, ctx.r10.u32);
	// b 0x8224e660
	goto loc_8224E660;
loc_8224E758:
	// lwz r11,928(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 928);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,160(r11)
	REX_STORE_U32(ctx.r11.u32 + 160, ctx.r10.u32);
	// lwz r11,928(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 928);
	// stb r9,164(r11)
	REX_STORE_U8(ctx.r11.u32 + 164, ctx.r9.u8);
	// lwz r3,928(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 928);
loc_8224E770:
	// bl 0x821e8080
	ctx.lr = 0x8224E774;
	sub_821E8080(ctx, base);
loc_8224E774:
	// lbz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8224e78c
	if (!ctx.cr0.eq) goto loc_8224E78C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 484);
	// bl 0x822847e8
	ctx.lr = 0x8224E78C;
	sub_822847E8(ctx, base);
loc_8224E78C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,488(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 488);
	// bl 0x82285ac0
	ctx.lr = 0x8224E798;
	sub_82285AC0(ctx, base);
	// lbz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8224e978
	if (!ctx.cr0.eq) goto loc_8224E978;
	// lwz r11,6060(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 6060);
	// lwz r10,744(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 744);
	// lbz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 104);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8224e978
	if (ctx.cr6.eq) goto loc_8224E978;
	// lwz r3,460(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224E7D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224e978
	if (ctx.cr0.eq) goto loc_8224E978;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lfs f31,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// lfs f29,-19392(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -19392);
	f29.f64 = double(temp.f32);
	// stfs f31,144(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f29,152(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x823fbd18
	ctx.lr = 0x8224E804;
	sub_823FBD18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x8216b218
	ctx.lr = 0x8224E82C;
	sub_8216B218(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8224e978
	if (!ctx.cr6.gt) goto loc_8224E978;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lfs f13,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,1460(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 1460);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f10,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f10,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f13.f64)));
	// fsqrts f30,f13
	f30.f64 = double(float(sqrt(ctx.f13.f64)));
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(f30.f64, ctx.f0.f64);
	// bge cr6,0x8224e978
	if (!ctx.cr6.lt) goto loc_8224E978;
	// addi r5,r11,176
	ctx.r5.s64 = ctx.r11.s64 + 176;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x823fbd88
	ctx.lr = 0x8224E88C;
	sub_823FBD88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r31,808
	ctx.r4.s64 = r31.s64 + 808;
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r5,40
	ctx.r5.s64 = 40;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x826a1e70
	ctx.lr = 0x8224E8CC;
	sub_826A1E70(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lfs f13,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f13,f30,f0,f13
	ctx.f13.f64 = double(float(-std::fma(f30.f64, ctx.f0.f64, -ctx.f13.f64)));
	// lfs f0,656(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 656);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,6056(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6056);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// fctiw f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,184(r1)
	REX_STORE_U8(ctx.r1.u32 + 184, ctx.r11.u8);
	// stb r11,172(r1)
	REX_STORE_U8(ctx.r1.u32 + 172, ctx.r11.u8);
	// ble cr6,0x8224e918
	if (!ctx.cr6.gt) goto loc_8224E918;
	// lfs f0,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
loc_8224E918:
	// lwz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 460);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8224e93c
	if (ctx.cr6.lt) goto loc_8224E93C;
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8224e940
	goto loc_8224E940;
loc_8224E93C:
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_8224E940:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r31,764
	ctx.r3.s64 = r31.s64 + 764;
	// lwz r11,6096(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6096);
	// lwz r31,16(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x822e6ff8
	ctx.lr = 0x8224E954;
	sub_822E6FF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lfs f1,216(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r9,102
	ctx.r9.s64 = 102;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// bl 0x82174318
	ctx.lr = 0x8224E978;
	sub_82174318(ctx, base);
loc_8224E978:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82273730) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,32576
	ctx.r10.s64 = ctx.r10.s64 + 32576;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x822f6280
	ctx.lr = 0x82273780;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822737ac
	if (ctx.cr0.eq) goto loc_822737AC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,22024
	ctx.r10.s64 = ctx.r10.s64 + 22024;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x822737b0
	goto loc_822737B0;
loc_822737AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822737B0:
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e7a50
	ctx.lr = 0x822737BC;
	sub_822E7A50(ctx, base);
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

DEFINE_REX_FUNC(sub_822774F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82277500;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lbz r10,33(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82277548
	if (!ctx.cr0.eq) goto loc_82277548;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
loc_82277520:
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82277534
	if (!ctx.cr6.lt) goto loc_82277534;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8227753c
	goto loc_8227753C;
loc_82277534:
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8227753C:
	// lbz r9,33(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82277520
	if (ctx.cr0.eq) goto loc_82277520;
loc_82277548:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82277568
	if (ctx.cr6.eq) goto loc_82277568;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822775d0
	if (!ctx.cr6.lt) goto loc_822775D0;
loc_82277568:
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r29,0(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x822f6280
	ctx.lr = 0x82277574;
	sub_822F6280(ctx, base);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x822775dc
	if (ctx.cr0.eq) goto loc_822775DC;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addic. r11,r6,16
	ctx.xer.ca = ctx.r6.u32 > 4294967279;
	ctx.r11.s64 = ctx.r6.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r9,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r9,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// stb r10,32(r6)
	REX_STORE_U8(ctx.r6.u32 + 32, ctx.r10.u8);
	// stb r10,33(r6)
	REX_STORE_U8(ctx.r6.u32 + 33, ctx.r10.u8);
	// beq 0x822775bc
	if (ctx.cr0.eq) goto loc_822775BC;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lfd f0,136(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 136);
	// stfd f0,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.f0.u64);
loc_822775BC:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822775f8
	ctx.lr = 0x822775CC;
	sub_822775F8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_822775D0:
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_822775DC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x822775F4;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_8227E8C0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8227e8f0
	if (ctx.cr6.lt) goto loc_8227E8F0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8227e908
	if (ctx.cr6.lt) goto loc_8227E908;
loc_8227E8F0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// addi r3,r10,144
	ctx.r3.s64 = ctx.r10.s64 + 144;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x821231d0
	ctx.lr = 0x8227E908;
	sub_821231D0(ctx, base);
loc_8227E908:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227e91c
	if (!ctx.cr6.eq) goto loc_8227E91C;
loc_8227E914:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8227e978
	goto loc_8227E978;
loc_8227E91C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x8227e930
	if (ctx.cr6.lt) goto loc_8227E930;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8227e948
	if (ctx.cr6.lt) goto loc_8227E948;
loc_8227E930:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-25320
	ctx.r4.s64 = ctx.r11.s64 + -25320;
	// addi r3,r10,-25252
	ctx.r3.s64 = ctx.r10.s64 + -25252;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x821231d0
	ctx.lr = 0x8227E948;
	sub_821231D0(ctx, base);
loc_8227E948:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r31.s32, ctx.xer);
	// bne cr6,0x8227e914
	if (!ctx.cr6.eq) goto loc_8227E914;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8227E978:
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

DEFINE_REX_FUNC(sub_822860E0) {
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
	// bl 0x82286130
	ctx.lr = 0x82286100;
	sub_82286130(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82286110
	if (ctx.cr0.eq) goto loc_82286110;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82286110;
	sub_8269CE98(ctx, base);
loc_82286110:
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

DEFINE_REX_FUNC(sub_82287BE8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13064
	ctx.r3.s64 = ctx.r11.s64 + -13064;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82287EA8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82288100) {
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
	// bl 0x826a1ca0
	ctx.lr = 0x82288108;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 36);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8228813c
	if (ctx.cr0.eq) goto loc_8228813C;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228813c
	if (ctx.cr6.eq) goto loc_8228813C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822883dc
	if (ctx.cr6.eq) goto loc_822883DC;
loc_8228813C:
	// li r29,0
	r29.s64 = 0;
	// stw r4,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r4.u32);
	// li r30,1
	r30.s64 = 1;
	// stw r29,32(r31)
	REX_STORE_U32(r31.u32 + 32, r29.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stb r30,36(r31)
	REX_STORE_U8(r31.u32 + 36, r30.u8);
	// bne cr6,0x82288174
	if (!ctx.cr6.eq) goto loc_82288174;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288170;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// slw r7,r30,r3
	ctx.r7.u64 = ctx.r3.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r3.u8 & 0x3F));
loc_82288174:
	// stw r7,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r7.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82288198
	if (!ctx.cr6.eq) goto loc_82288198;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,2624
	ctx.r4.s64 = ctx.r11.s64 + 2624;
	// addi r3,r10,2676
	ctx.r3.s64 = ctx.r10.s64 + 2676;
	// li r5,83
	ctx.r5.s64 = 83;
	// bl 0x821231d0
	ctx.lr = 0x82288198;
	sub_821231D0(ctx, base);
loc_82288198:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r28,44(r31)
	REX_STORE_U32(r31.u32 + 44, r28.u32);
	// stb r29,52(r31)
	REX_STORE_U8(r31.u32 + 52, r29.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// beq cr6,0x822883d0
	if (ctx.cr6.eq) goto loc_822883D0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,2740
	ctx.r4.s64 = ctx.r11.s64 + 2740;
	// bl 0x82120600
	ctx.lr = 0x822881D0;
	sub_82120600(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x822881DC;
	sub_82178B60(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x822881F0;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,2760
	ctx.r4.s64 = ctx.r11.s64 + 2760;
	// bl 0x82120600
	ctx.lr = 0x82288200;
	sub_82120600(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8228820C;
	sub_82178B60(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82120ac0
	ctx.lr = 0x82288220;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,2780
	ctx.r4.s64 = ctx.r11.s64 + 2780;
	// bl 0x82120600
	ctx.lr = 0x82288230;
	sub_82120600(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8228823C;
	sub_82178B60(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x82288250;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,2800
	ctx.r4.s64 = ctx.r11.s64 + 2800;
	// bl 0x82120600
	ctx.lr = 0x82288260;
	sub_82120600(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8228826C;
	sub_82178B60(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82288280;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,2820
	ctx.r4.s64 = ctx.r11.s64 + 2820;
	// bl 0x82120600
	ctx.lr = 0x82288290;
	sub_82120600(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8228829C;
	sub_82178B60(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x822882B0;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,2840
	ctx.r4.s64 = ctx.r11.s64 + 2840;
	// bl 0x82120600
	ctx.lr = 0x822882C0;
	sub_82120600(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x822882CC;
	sub_82178B60(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x822882E0;
	sub_82120AC0(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r30,r11,-19376
	r30.s64 = ctx.r11.s64 + -19376;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lbzx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// bl 0x82288798
	ctx.lr = 0x822882FC;
	sub_82288798(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lbzx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// bl 0x82288798
	ctx.lr = 0x82288310;
	sub_82288798(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lbzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82288798
	ctx.lr = 0x82288328;
	sub_82288798(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lbzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82288798
	ctx.lr = 0x82288340;
	sub_82288798(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82288848
	ctx.lr = 0x82288358;
	sub_82288848(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r30,8
	ctx.r11.s64 = r30.s64 + 8;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82288848
	ctx.lr = 0x82288370;
	sub_82288848(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82288848
	ctx.lr = 0x8228837C;
	sub_82288848(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82288848
	ctx.lr = 0x82288388;
	sub_82288848(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,2864
	ctx.r4.s64 = ctx.r11.s64 + 2864;
	// bl 0x82120600
	ctx.lr = 0x82288398;
	sub_82120600(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x822883A4;
	sub_82178B60(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82120ac0
	ctx.lr = 0x822883B8;
	sub_82120AC0(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r30,2
	ctx.r11.s64 = r30.s64 + 2;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lbzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82288798
	ctx.lr = 0x822883D0;
	sub_82288798(ctx, base);
loc_822883D0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,2888
	ctx.r3.s64 = ctx.r11.s64 + 2888;
	// bl 0x8226afb8
	ctx.lr = 0x822883DC;
	sub_8226AFB8(ctx, base);
loc_822883DC:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8229D5B8) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,5584
	ctx.r11.s64 = ctx.r11.s64 + 5584;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8229f478
	ctx.lr = 0x8229D5E4;
	sub_8229F478(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229d610
	if (ctx.cr0.eq) goto loc_8229D610;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r3,-4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -4);
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// lwz r11,112(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// lwz r9,-19400(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,112(r10)
	REX_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8229D610;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229D610:
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

DEFINE_REX_FUNC(sub_822A11A0) {
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
	// bl 0x826a1ca0
	ctx.lr = 0x822A11A8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822a1298
	if (!ctx.cr6.gt) goto loc_822A1298;
	// li r27,0
	r27.s64 = 0;
	// li r31,-1
	r31.s64 = -1;
loc_822A11D4:
	// lwz r11,172(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 172);
	// lhz r10,2(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 2);
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// lhz r9,2(r29)
	ctx.r9.u64 = REX_LOAD_U16(r29.u32 + 2);
	// lhz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U16(r30.u32 + 4);
	// lhz r7,4(r29)
	ctx.r7.u64 = REX_LOAD_U16(r29.u32 + 4);
	// lhz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U16(r30.u32 + 0);
	// lhz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U16(r29.u32 + 0);
	// lhz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r3,2(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// subfc r10,r10,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r10.u32;
	ctx.r10.u64 = ctx.r4.u64 - ctx.r10.u64;
	// lhz r4,10(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// lhz r24,4(r11)
	r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// subfze r23,r31
	temp.u8 = ~r31.u32 + ctx.xer.ca < ~r31.u32;
	r23.u64 = ~r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lhz r22,6(r11)
	r22.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// subfc r10,r3,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r3.u32;
	ctx.r10.u64 = ctx.r9.u64 - ctx.r3.u64;
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// subfze r3,r31
	temp.u8 = ~r31.u32 + ctx.xer.ca < ~r31.u32;
	ctx.r3.u64 = ~r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r10,r8,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r8.u32;
	ctx.r10.u64 = ctx.r4.u64 - ctx.r8.u64;
	// and r8,r23,r3
	ctx.r8.u64 = r23.u64 & ctx.r3.u64;
	// subfze r4,r31
	temp.u8 = ~r31.u32 + ctx.xer.ca < ~r31.u32;
	ctx.r4.u64 = ~r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r10,r24,r7
	ctx.xer.ca = ctx.r7.u32 >= r24.u32;
	ctx.r10.u64 = ctx.r7.u64 - r24.u64;
	// and r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 & ctx.r4.u64;
	// subfze r7,r31
	temp.u8 = ~r31.u32 + ctx.xer.ca < ~r31.u32;
	ctx.r7.u64 = ~r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r10,r6,r22
	ctx.xer.ca = r22.u32 >= ctx.r6.u32;
	ctx.r10.u64 = r22.u64 - ctx.r6.u64;
	// and r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ctx.r7.u64;
	// subfze r7,r31
	temp.u8 = ~r31.u32 + ctx.xer.ca < ~r31.u32;
	ctx.r7.u64 = ~r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r10,r9,r5
	ctx.xer.ca = ctx.r5.u32 >= ctx.r9.u32;
	ctx.r10.u64 = ctx.r5.u64 - ctx.r9.u64;
	// and r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 & ctx.r7.u64;
	// subfze r10,r31
	temp.u8 = ~r31.u32 + ctx.xer.ca < ~r31.u32;
	ctx.r10.u64 = ~r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// srawi r10,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 31;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822a1284
	if (ctx.cr0.eq) goto loc_822A1284;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822a1048
	ctx.lr = 0x822A1284;
	sub_822A1048(ctx, base);
loc_822A1284:
	// lwz r11,164(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 164);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r27,r27,32
	r27.s64 = r27.s64 + 32;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822a11d4
	if (ctx.cr6.lt) goto loc_822A11D4;
loc_822A1298:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_822A6C38) {
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
	// bl 0x822a6c88
	ctx.lr = 0x822A6C58;
	sub_822A6C88(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a6c68
	if (ctx.cr0.eq) goto loc_822A6C68;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822A6C68;
	sub_8269CE98(ctx, base);
loc_822A6C68:
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

DEFINE_REX_FUNC(sub_822A8AE8) {
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
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
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
	// bl 0x826a1c80
	ctx.lr = 0x822A8AF0;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2c90
	ctx.lr = 0x822A8AF8;
	// stwu r1,-1408(r1)
	ea = -1408 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r3,1428(r1)
	REX_STORE_U32(ctx.r1.u32 + 1428, ctx.r3.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r6,1452(r1)
	REX_STORE_U32(ctx.r1.u32 + 1452, ctx.r6.u32);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// stw r7,1460(r1)
	REX_STORE_U32(ctx.r1.u32 + 1460, ctx.r7.u32);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a8b48
	if (!ctx.cr6.eq) goto loc_822A8B48;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A8B3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,20(r29)
	REX_STORE_U32(r29.u32 + 20, ctx.r3.u32);
	// stb r11,16(r29)
	REX_STORE_U8(r29.u32 + 16, ctx.r11.u8);
loc_822A8B48:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// stw r11,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r11.u32);
	// lwz r31,204(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 204);
	// lwz r30,204(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 204);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r31,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, r31.u32);
	// stw r30,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, r30.u32);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x822a8f1c
	if (!ctx.cr6.eq) goto loc_822A8F1C;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x822a8f1c
	if (!ctx.cr6.eq) goto loc_822A8F1C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A8B8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A8BA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,64(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 64);
	// addi r10,r27,16
	ctx.r10.s64 = r27.s64 + 16;
	// lwz r8,64(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 64);
	// addi r11,r28,16
	ctx.r11.s64 = r28.s64 + 16;
	// addi r6,r9,8
	ctx.r6.s64 = ctx.r9.s64 + 8;
	// addi r5,r8,8
	ctx.r5.s64 = ctx.r8.s64 + 8;
	// rlwinm r25,r6,2,0,29
	r25.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r5,2,0,29
	r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r23,r9,4
	r23.s64 = ctx.r9.s64 + 4;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfsx f7,r25,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// addi r25,r9,2
	r25.s64 = ctx.r9.s64 + 2;
	// lfsx f9,r24,r11
	temp.u32 = REX_LOAD_U32(r24.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r23,2,0,29
	r24.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f0,f7,f9
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// rlwinm r23,r8,2,0,29
	r23.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r22,r8,2
	r22.s64 = ctx.r8.s64 + 2;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfsx f5,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f5.f64 = double(temp.f32);
	// li r4,3
	ctx.r4.s64 = 3;
	// lfsx f6,r24,r10
	temp.u32 = REX_LOAD_U32(r24.u32 + ctx.r10.u32);
	ctx.f6.f64 = double(temp.f32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f8,r23,r11
	temp.u32 = REX_LOAD_U32(r23.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// divw r21,r22,r4
	r21.u64 = uint32_t((ctx.r4.s32 && !(r22.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? r22.s32 / ctx.r4.s32 : 0);
	// divw r4,r25,r4
	ctx.r4.u64 = uint32_t((ctx.r4.s32 && !(r25.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? r25.s32 / ctx.r4.s32 : 0);
	// ld r9,64(r28)
	ctx.r9.u64 = REX_LOAD_U64(r28.u32 + 64);
	// mulli r21,r21,3
	r21.s64 = static_cast<int64_t>(r21.u64 * static_cast<uint64_t>(3));
	// ld r24,64(r27)
	r24.u64 = REX_LOAD_U64(r27.u32 + 64);
	// ld r28,72(r28)
	r28.u64 = REX_LOAD_U64(r28.u32 + 72);
	// fmadds f0,f5,f8,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f5.f64, ctx.f8.f64, ctx.f0.f64)));
	// ld r27,72(r27)
	r27.u64 = REX_LOAD_U64(r27.u32 + 72);
	// lfsx f11,r8,r11
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// lwz r29,20(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 20);
	// std r9,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r9.u64);
	// std r24,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, r24.u64);
	// std r28,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, r28.u64);
	// std r27,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, r27.u64);
	// mulli r9,r4,3
	ctx.r9.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(3));
	// lfs f25,796(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 796);
	f25.f64 = double(temp.f32);
	// fmadds f12,f11,f6,f0
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f6.f64, ctx.f0.f64)));
	// addi r7,r10,48
	ctx.r7.s64 = ctx.r10.s64 + 48;
	// subf r9,r9,r25
	ctx.r9.u64 = r25.u64 - ctx.r9.u64;
	// subf r10,r21,r22
	ctx.r10.u64 = r22.u64 - r21.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfsx f1,r6,r30
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + r30.u32);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f10,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// lfs f3,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f4,f10,f13
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// lfs f0,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfsx f28,r10,r31
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	f28.f64 = double(temp.f32);
	// lfsx f10,r5,r31
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + r31.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f27,r9,r30
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + r30.u32);
	f27.f64 = double(temp.f32);
	// fmuls f0,f4,f8
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fmuls f13,f3,f6
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// fmadds f31,f2,f9,f0
	f31.f64 = double(float(std::fma(ctx.f2.f64, ctx.f9.f64, ctx.f0.f64)));
	// fmadds f13,f4,f5,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f4.f64, ctx.f5.f64, ctx.f13.f64)));
	// lfs f26,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f26.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fnmsubs f0,f12,f12,f26
	ctx.f0.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f12.f64, -f26.f64)));
	// fmadds f30,f11,f3,f31
	f30.f64 = double(float(std::fma(ctx.f11.f64, ctx.f3.f64, f31.f64)));
	// fmadds f13,f7,f2,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f7.f64, ctx.f2.f64, ctx.f13.f64)));
	// lfs f29,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f29.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bne cr6,0x822a8ce4
	if (!ctx.cr6.eq) goto loc_822A8CE4;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
	// b 0x822a8d0c
	goto loc_822A8D0C;
loc_822A8CE4:
	// fnmsubs f24,f13,f12,f30
	ctx.fpscr.disableFlushMode();
	f24.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f12.f64, -f30.f64)));
	// fneg f31,f10
	f31.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fdivs f0,f24,f0
	ctx.f0.f64 = double(float(f24.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x822a8d00
	if (!ctx.cr6.lt) goto loc_822A8D00;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
	// b 0x822a8d0c
	goto loc_822A8D0C;
loc_822A8D00:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x822a8d0c
	if (!ctx.cr6.gt) goto loc_822A8D0C;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_822A8D0C:
	// fmsubs f13,f12,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, -ctx.f13.f64)));
	// fneg f31,f1
	f31.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// bge cr6,0x822a8d28
	if (!ctx.cr6.lt) goto loc_822A8D28;
	// fmadds f0,f12,f31,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, f30.f64)));
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
	// b 0x822a8d38
	goto loc_822A8D38;
loc_822A8D28:
	// fcmpu cr6,f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// ble cr6,0x822a8d58
	if (!ctx.cr6.gt) goto loc_822A8D58;
	// fmadds f0,f12,f1,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f1.f64, f30.f64)));
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
loc_822A8D38:
	// fneg f12,f10
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x822a8d4c
	if (!ctx.cr6.lt) goto loc_822A8D4C;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x822a8d58
	goto loc_822A8D58;
loc_822A8D4C:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x822a8d58
	if (!ctx.cr6.gt) goto loc_822A8D58;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_822A8D58:
	// fmuls f12,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f10,f9,f0
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fsubs f13,f3,f12
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// fsubs f12,f2,f10
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// fsubs f10,f4,f0
	ctx.f10.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// fadds f0,f13,f6
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// fadds f13,f12,f7
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// fadds f12,f10,f5
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f10,f13,f13,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f10,f12,f12,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f10.f64)));
	// fsqrts f4,f10
	ctx.f4.f64 = double(float(sqrt(ctx.f10.f64)));
	// fsubs f4,f4,f28
	ctx.f4.f64 = double(float(ctx.f4.f64 - f28.f64));
	// fsubs f1,f4,f27
	ctx.f1.f64 = double(float(ctx.f4.f64 - f27.f64));
	// fcmpu cr6,f1,f25
	ctx.cr6.compare(ctx.f1.f64, f25.f64);
	// bgt cr6,0x822a8ec0
	if (ctx.cr6.gt) goto loc_822A8EC0;
	// lfs f4,1096(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1096);
	ctx.f4.f64 = double(temp.f32);
	// fcmpu cr6,f10,f4
	ctx.cr6.compare(ctx.f10.f64, ctx.f4.f64);
	// bgt cr6,0x822a8e1c
	if (ctx.cr6.gt) goto loc_822A8E1C;
	// fabs f13,f9
	ctx.f13.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// lfs f0,948(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 948);
	ctx.f0.f64 = double(temp.f32);
	// stfs f29,124(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// fmuls f0,f11,f11
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// ble cr6,0x822a8df4
	if (!ctx.cr6.gt) goto loc_822A8DF4;
	// fmadds f0,f9,f9,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f0.f64)));
	// stfs f29,112(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f0,f26,f0
	ctx.f0.f64 = double(float(f26.f64 / ctx.f0.f64));
	// fmuls f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// b 0x822a8e5c
	goto loc_822A8E5C;
loc_822A8DF4:
	// fmadds f0,f8,f8,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f8.f64, ctx.f0.f64)));
	// stfs f29,120(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f0,f26,f0
	ctx.f0.f64 = double(float(f26.f64 / ctx.f0.f64));
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// b 0x822a8e5c
	goto loc_822A8E5C;
loc_822A8E1C:
	// fsqrts f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(sqrt(ctx.f10.f64)));
	// stfs f29,108(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// fdivs f11,f26,f11
	ctx.f11.f64 = double(float(f26.f64 / ctx.f11.f64));
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
loc_822A8E5C:
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f13,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// lfs f12,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 * f27.f64));
	// lfs f11,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// lfs f10,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f27
	ctx.f11.f64 = double(float(ctx.f11.f64 * f27.f64));
	// lfs f9,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// fadds f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// fmuls f9,f9,f27
	ctx.f9.f64 = double(float(ctx.f9.f64 * f27.f64));
	// stfs f29,108(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r10,r1,656
	ctx.r10.s64 = ctx.r1.s64 + 656;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
loc_822A8EC0:
	// fcmpu cr6,f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f25.f64);
	// bge cr6,0x822a8ee4
	if (!ctx.cr6.lt) goto loc_822A8EE4;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r5,r1,656
	ctx.r5.s64 = ctx.r1.s64 + 656;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A8EE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A8EE4:
	// lwz r3,4(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r11,792(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 792);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a97f8
	if (ctx.cr6.eq) goto loc_822A97F8;
	// lwz r11,784(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 784);
	// lwz r10,144(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 144);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822a8f10
	if (ctx.cr6.eq) goto loc_822A8F10;
	// addi r5,r26,16
	ctx.r5.s64 = r26.s64 + 16;
	// addi r4,r26,80
	ctx.r4.s64 = r26.s64 + 80;
	// b 0x822a97f4
	goto loc_822A97F4;
loc_822A8F10:
	// addi r5,r26,80
	ctx.r5.s64 = r26.s64 + 80;
	// addi r4,r26,16
	ctx.r4.s64 = r26.s64 + 16;
	// b 0x822a97f4
	goto loc_822A97F4;
loc_822A8F1C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r7,12(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r6,8(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x822b5700
	ctx.lr = 0x822A8F34;
	sub_822B5700(ctx, base);
	// stw r31,712(r1)
	REX_STORE_U32(ctx.r1.u32 + 712, r31.u32);
	// stw r30,716(r1)
	REX_STORE_U32(ctx.r1.u32 + 716, r30.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lfs f31,796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 796);
	f31.f64 = double(temp.f32);
	// lwz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A8F58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A8F70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fadds f0,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 + ctx.f1.f64));
	// addi r11,r28,16
	ctx.r11.s64 = r28.s64 + 16;
	// addi r10,r27,16
	ctx.r10.s64 = r27.s64 + 16;
	// lwz r9,40(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 40);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// stw r10,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r10.u32);
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r8,r1,336
	ctx.r8.s64 = ctx.r1.s64 + 336;
	// stw r4,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r4.u32);
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// ld r5,40(r10)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r10.u32 + 40);
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// ld r4,48(r10)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r10.u32 + 48);
	// addi r30,r1,384
	r30.s64 = ctx.r1.s64 + 384;
	// ld r31,0(r11)
	r31.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// addi r28,r1,400
	r28.s64 = ctx.r1.s64 + 400;
	// ld r29,8(r11)
	r29.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// addi r25,r1,416
	r25.s64 = ctx.r1.s64 + 416;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// ld r27,16(r11)
	r27.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// ld r23,24(r11)
	r23.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// addi r22,r1,432
	r22.s64 = ctx.r1.s64 + 432;
	// ld r21,32(r11)
	r21.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// addi r20,r1,448
	r20.s64 = ctx.r1.s64 + 448;
	// ld r19,40(r11)
	r19.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// ld r18,48(r11)
	r18.u64 = REX_LOAD_U64(ctx.r11.u32 + 48);
	// ld r26,0(r10)
	r26.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r17,8(r10)
	r17.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r16,16(r10)
	r16.u64 = REX_LOAD_U64(ctx.r10.u32 + 16);
	// ld r15,24(r10)
	r15.u64 = REX_LOAD_U64(ctx.r10.u32 + 24);
	// ld r14,32(r10)
	r14.u64 = REX_LOAD_U64(ctx.r10.u32 + 32);
	// ld r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// ld r10,56(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 56);
	// stfs f0,464(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 464, temp.u32);
	// stw r9,468(r1)
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r9.u32);
	// std r21,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, r21.u64);
	// std r19,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, r19.u64);
	// std r5,8(r22)
	REX_STORE_U64(r22.u32 + 8, ctx.r5.u64);
	// std r4,0(r20)
	REX_STORE_U64(r20.u32 + 0, ctx.r4.u64);
	// std r31,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, r31.u64);
	// std r29,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, r29.u64);
	// std r27,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, r27.u64);
	// std r23,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, r23.u64);
	// std r18,0(r30)
	REX_STORE_U64(r30.u32 + 0, r18.u64);
	// std r11,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r11.u64);
	// std r26,0(r28)
	REX_STORE_U64(r28.u32 + 0, r26.u64);
	// std r17,8(r28)
	REX_STORE_U64(r28.u32 + 8, r17.u64);
	// std r16,0(r25)
	REX_STORE_U64(r25.u32 + 0, r16.u64);
	// std r15,8(r25)
	REX_STORE_U64(r25.u32 + 8, r15.u64);
	// std r14,0(r22)
	REX_STORE_U64(r22.u32 + 0, r14.u64);
	// std r10,8(r20)
	REX_STORE_U64(r20.u32 + 8, ctx.r10.u64);
	// lwz r24,1452(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1452);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,224(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r6,20(r24)
	ctx.r6.u64 = REX_LOAD_U32(r24.u32 + 20);
	// bl 0x822b57d8
	ctx.lr = 0x822A9060;
	sub_822B57D8(ctx, base);
	// lwz r27,1428(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1428);
	// lwz r23,1460(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1460);
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a97a8
	if (ctx.cr6.eq) goto loc_822A97A8;
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 4);
	// lwz r11,32(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 32);
	// lwz r10,792(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 792);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822a97a8
	if (!ctx.cr6.lt) goto loc_822A97A8;
	// lfs f0,692(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 692);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmuls f9,f0,f0
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f11,688(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 688);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,696(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 696);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r11,16592
	r31.s64 = ctx.r11.s64 + 16592;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r11,r1,640
	ctx.r11.s64 = ctx.r1.s64 + 640;
	// lfs f12,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f31,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f10,948(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 948);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f11,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f9.f64)));
	// stfs f31,204(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fmadds f9,f13,f13,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f9.f64)));
	// fsqrts f9,f9
	ctx.f9.f64 = double(float(sqrt(ctx.f9.f64)));
	// fdivs f9,f12,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 / ctx.f9.f64));
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fabs f9,f13
	ctx.f9.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// ld r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// fcmpu cr6,f9,f10
	ctx.cr6.compare(ctx.f9.f64, ctx.f10.f64);
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// ble cr6,0x822a9128
	if (!ctx.cr6.gt) goto loc_822A9128;
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmr f28,f31
	f28.f64 = f31.f64;
	// fmadds f11,f13,f13,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f11.f64)));
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f30,f12,f0
	f30.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fneg f29,f13
	f29.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// b 0x822a9148
	goto loc_822A9148;
loc_822A9128:
	// fmuls f13,f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmr f30,f31
	f30.f64 = f31.f64;
	// fmadds f13,f0,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f29,f13,f11
	f29.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fneg f28,f0
	f28.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_822A9148:
	// lwz r3,216(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// stfs f28,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f29,196(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f30,200(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A9168;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,208(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A9180;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// fcmpu cr6,f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f27.f64, ctx.f1.f64);
	// lfs f0,-19388(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -19388);
	ctx.f0.f64 = double(temp.f32);
	// bge cr6,0x822a919c
	if (!ctx.cr6.lt) goto loc_822A919C;
	// li r26,1
	r26.s64 = 1;
	// fdivs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 / f27.f64));
	// b 0x822a91a4
	goto loc_822A91A4;
loc_822A919C:
	// li r26,0
	r26.s64 = 0;
	// fdivs f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
loc_822A91A4:
	// lfs f13,1288(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 1288);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822a91b8
	if (!ctx.cr6.gt) goto loc_822A91B8;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_822A91B8:
	// clrlwi. r25,r26,24
	r25.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r7,r1,576
	ctx.r7.s64 = ctx.r1.s64 + 576;
	// addi r5,r1,592
	ctx.r5.s64 = ctx.r1.s64 + 592;
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// addi r30,r1,624
	r30.s64 = ctx.r1.s64 + 624;
	// beq 0x822a91e4
	if (ctx.cr0.eq) goto loc_822A91E4;
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// addi r10,r1,352
	ctx.r10.s64 = ctx.r1.s64 + 352;
	// addi r9,r1,368
	ctx.r9.s64 = ctx.r1.s64 + 368;
	// addi r8,r1,384
	ctx.r8.s64 = ctx.r1.s64 + 384;
	// b 0x822a91f4
	goto loc_822A91F4;
loc_822A91E4:
	// addi r11,r1,400
	ctx.r11.s64 = ctx.r1.s64 + 400;
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// addi r9,r1,432
	ctx.r9.s64 = ctx.r1.s64 + 432;
	// addi r8,r1,448
	ctx.r8.s64 = ctx.r1.s64 + 448;
loc_822A91F4:
	// ld r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r29,0(r9)
	r29.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r28,0(r8)
	r28.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 28);
	// std r29,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, r29.u64);
	// li r29,0
	r29.s64 = 0;
	// std r8,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r8.u64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r28,0(r30)
	REX_STORE_U64(r30.u32 + 0, r28.u64);
	// std r9,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.r9.u64);
	// std r10,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r10.u64);
	// std r3,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r3.u64);
	// std r6,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r6.u64);
	// ble cr6,0x822a97a8
	if (!ctx.cr6.gt) goto loc_822A97A8;
	// fmuls f0,f29,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f29.f64 * f29.f64));
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r30,232(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// addi r28,r11,4552
	r28.s64 = ctx.r11.s64 + 4552;
	// fmadds f0,f30,f30,f0
	ctx.f0.f64 = double(float(std::fma(f30.f64, f30.f64, ctx.f0.f64)));
	// lfs f30,920(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 920);
	f30.f64 = double(temp.f32);
	// fmadds f29,f28,f28,f0
	f29.f64 = double(float(std::fma(f28.f64, f28.f64, ctx.f0.f64)));
	// lfs f28,180(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	f28.f64 = double(temp.f32);
	// lwz r31,128(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
loc_822A9268:
	// fcmpu cr6,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, f30.f64);
	// ble cr6,0x822a9798
	if (!ctx.cr6.gt) goto loc_822A9798;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299ea8
	ctx.lr = 0x822A9280;
	sub_82299EA8(ctx, base);
	// extsw r11,r29
	ctx.r11.s64 = r29.s32;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// std r11,232(r1)
	REX_STORE_U64(ctx.r1.u32 + 232, ctx.r11.u64);
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwa r11,28(r27)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r27.u32 + 28));
	// std r11,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r11.u64);
	// lfd f13,208(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f0,232(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 232);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f13,f28,f13
	ctx.f13.f64 = double(float(f28.f64 / ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x82299ea8
	ctx.lr = 0x822A92C4;
	sub_82299EA8(ctx, base);
	// lfs f13,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,188(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// lfs f10,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fneg f6,f13
	ctx.f6.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// beq cr6,0x822a952c
	if (ctx.cr6.eq) goto loc_822A952C;
	// lfs f12,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f9,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// fneg f5,f12
	ctx.f5.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfs f8,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f3,f9,f0
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f2,f8,f0
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f11,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f27,f6,f10
	f27.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// lfs f7,108(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// fneg f1,f11
	ctx.f1.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// fmadds f4,f6,f7,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f6.f64, ctx.f7.f64, ctx.f4.f64)));
	// fmadds f3,f10,f5,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f10.f64, ctx.f5.f64, ctx.f3.f64)));
	// fmadds f2,f6,f9,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f6.f64, ctx.f9.f64, ctx.f2.f64)));
	// fmsubs f27,f7,f0,f27
	f27.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, -f27.f64)));
	// fmadds f4,f8,f1,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f1.f64, ctx.f4.f64)));
	// fmadds f3,f7,f1,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f7.f64, ctx.f1.f64, ctx.f3.f64)));
	// fmadds f7,f7,f5,f2
	ctx.f7.f64 = double(float(std::fma(ctx.f7.f64, ctx.f5.f64, ctx.f2.f64)));
	// fnmsubs f2,f9,f1,f27
	ctx.f2.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f1.f64, -f27.f64)));
	// fnmsubs f9,f9,f5,f4
	ctx.f9.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f5.f64, -ctx.f4.f64)));
	// fnmsubs f6,f6,f8,f3
	ctx.f6.f64 = double(float(-std::fma(ctx.f6.f64, ctx.f8.f64, -ctx.f3.f64)));
	// fnmsubs f10,f10,f1,f7
	ctx.f10.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f1.f64, -ctx.f7.f64)));
	// fnmsubs f8,f8,f5,f2
	ctx.f8.f64 = double(float(-std::fma(ctx.f8.f64, ctx.f5.f64, -ctx.f2.f64)));
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f3,f13,f8
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmsubs f7,f8,f0,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, -ctx.f7.f64)));
	// fmadds f5,f13,f10,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f5.f64)));
	// fmadds f4,f9,f11,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f4.f64)));
	// fmadds f0,f9,f0,f3
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f3.f64)));
	// fnmsubs f7,f6,f11,f7
	ctx.f7.f64 = double(float(-std::fma(ctx.f6.f64, ctx.f11.f64, -ctx.f7.f64)));
	// fmadds f5,f8,f11,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f5.f64)));
	// fmadds f8,f8,f12,f4
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f4.f64)));
	// fmadds f0,f6,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, ctx.f0.f64)));
	// fnmsubs f7,f10,f12,f7
	ctx.f7.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f12.f64, -ctx.f7.f64)));
	// stfs f7,156(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fnmsubs f12,f9,f12,f5
	ctx.f12.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f12.f64, -ctx.f5.f64)));
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fnmsubs f13,f13,f6,f8
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f6.f64, -ctx.f8.f64)));
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fnmsubs f0,f10,f11,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f11.f64, -ctx.f0.f64)));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x82293e30
	ctx.lr = 0x822A9394;
	sub_82293E30(ctx, base);
	// lfs f0,548(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 548);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f0,f8
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f7,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f13,532(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 532);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,544(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 544);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f2,f8,f13
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f3,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f27,f7,f13
	f27.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f12,564(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 564);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f8,f12,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// lfs f1,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f10,528(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 528);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f5,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lfs f9,560(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 560);
	ctx.f9.f64 = double(temp.f32);
	// stfs f31,300(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// fmadds f6,f3,f11,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f11.f64, ctx.f6.f64)));
	// fmadds f5,f1,f11,f4
	ctx.f5.f64 = double(float(std::fma(ctx.f1.f64, ctx.f11.f64, ctx.f4.f64)));
	// fmadds f4,f3,f10,f2
	ctx.f4.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, ctx.f2.f64)));
	// fmadds f2,f1,f10,f27
	ctx.f2.f64 = double(float(std::fma(ctx.f1.f64, ctx.f10.f64, f27.f64)));
	// fmadds f8,f9,f3,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f3.f64, ctx.f8.f64)));
	// fmadds f7,f1,f9,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, ctx.f7.f64)));
	// lfs f26,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	f26.f64 = double(temp.f32);
	// fmadds f11,f26,f11,f0
	ctx.f11.f64 = double(float(std::fma(f26.f64, ctx.f11.f64, ctx.f0.f64)));
	// lfs f25,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	f25.f64 = double(temp.f32);
	// lfs f0,552(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 552);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f6,f0,f25,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, f25.f64, ctx.f6.f64)));
	// lfs f24,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	f24.f64 = double(temp.f32);
	// lfs f23,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	f23.f64 = double(temp.f32);
	// stfs f6,312(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// fmadds f10,f26,f10,f13
	ctx.f10.f64 = double(float(std::fma(f26.f64, ctx.f10.f64, ctx.f13.f64)));
	// lfs f13,536(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 536);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f6,f24,f0,f5
	ctx.f6.f64 = double(float(std::fma(f24.f64, ctx.f0.f64, ctx.f5.f64)));
	// stfs f6,308(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// fmadds f0,f23,f0,f11
	ctx.f0.f64 = double(float(std::fma(f23.f64, ctx.f0.f64, ctx.f11.f64)));
	// stfs f0,304(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// fmadds f9,f26,f9,f12
	ctx.f9.f64 = double(float(std::fma(f26.f64, ctx.f9.f64, ctx.f12.f64)));
	// lfs f12,568(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 568);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f25,f13,f4
	ctx.f11.f64 = double(float(std::fma(f25.f64, ctx.f13.f64, ctx.f4.f64)));
	// stfs f11,296(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// fmadds f0,f12,f25,f8
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, f25.f64, ctx.f8.f64)));
	// stfs f0,328(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// fmadds f11,f24,f12,f7
	ctx.f11.f64 = double(float(std::fma(f24.f64, ctx.f12.f64, ctx.f7.f64)));
	// stfs f31,316(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// fmadds f6,f24,f13,f2
	ctx.f6.f64 = double(float(std::fma(f24.f64, ctx.f13.f64, ctx.f2.f64)));
	// stfs f6,292(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f31,332(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// stfs f11,324(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// addi r9,r1,320
	ctx.r9.s64 = ctx.r1.s64 + 320;
	// fmadds f0,f23,f13,f10
	ctx.f0.f64 = double(float(std::fma(f23.f64, ctx.f13.f64, ctx.f10.f64)));
	// stfs f0,288(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// std r31,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, r31.u64);
	// std r29,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, r29.u64);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// fmadds f12,f23,f12,f9
	ctx.f12.f64 = double(float(std::fma(f23.f64, ctx.f12.f64, ctx.f9.f64)));
	// stfs f12,320(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(r30.u32 + 0);
	// addi r19,r1,368
	r19.s64 = ctx.r1.s64 + 368;
	// ld r7,8(r30)
	ctx.r7.u64 = REX_LOAD_U64(r30.u32 + 8);
	// addi r21,r1,352
	r21.s64 = ctx.r1.s64 + 352;
	// ld r6,16(r30)
	ctx.r6.u64 = REX_LOAD_U64(r30.u32 + 16);
	// addi r17,r1,400
	r17.s64 = ctx.r1.s64 + 400;
	// ld r5,24(r30)
	ctx.r5.u64 = REX_LOAD_U64(r30.u32 + 24);
	// addi r15,r1,416
	r15.s64 = ctx.r1.s64 + 416;
	// ld r4,32(r30)
	ctx.r4.u64 = REX_LOAD_U64(r30.u32 + 32);
	// addi r14,r1,432
	r14.s64 = ctx.r1.s64 + 432;
	// ld r22,40(r30)
	r22.u64 = REX_LOAD_U64(r30.u32 + 40);
	// ld r20,48(r30)
	r20.u64 = REX_LOAD_U64(r30.u32 + 48);
	// ld r18,56(r30)
	r18.u64 = REX_LOAD_U64(r30.u32 + 56);
	// std r30,216(r1)
	REX_STORE_U64(ctx.r1.u32 + 216, r30.u64);
	// addi r30,r1,448
	r30.s64 = ctx.r1.s64 + 448;
	// std r8,0(r17)
	REX_STORE_U64(r17.u32 + 0, ctx.r8.u64);
	// std r7,8(r17)
	REX_STORE_U64(r17.u32 + 8, ctx.r7.u64);
	// std r6,0(r15)
	REX_STORE_U64(r15.u32 + 0, ctx.r6.u64);
	// std r5,8(r15)
	REX_STORE_U64(r15.u32 + 8, ctx.r5.u64);
	// std r20,0(r30)
	REX_STORE_U64(r30.u32 + 0, r20.u64);
	// std r18,8(r30)
	REX_STORE_U64(r30.u32 + 8, r18.u64);
	// ld r31,0(r9)
	r31.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r29,0(r11)
	r29.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r16,0(r10)
	r16.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r31,0(r19)
	REX_STORE_U64(r19.u32 + 0, r31.u64);
	// std r29,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, r29.u64);
	// ld r31,128(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// ld r30,216(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 216);
	// ld r29,224(r1)
	r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 224);
	// std r4,0(r14)
	REX_STORE_U64(r14.u32 + 0, ctx.r4.u64);
	// std r22,8(r14)
	REX_STORE_U64(r14.u32 + 8, r22.u64);
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// std r16,0(r21)
	REX_STORE_U64(r21.u32 + 0, r16.u64);
	// std r10,8(r21)
	REX_STORE_U64(r21.u32 + 8, ctx.r10.u64);
	// std r9,8(r19)
	REX_STORE_U64(r19.u32 + 8, ctx.r9.u64);
	// b 0x822a9760
	goto loc_822A9760;
loc_822A952C:
	// lfs f12,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f3,f10,f0
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f11,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f11.f64 = double(temp.f32);
	// fneg f5,f12
	ctx.f5.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fneg f4,f11
	ctx.f4.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f9,108(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f2,f6,f10
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// lfs f8,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// ld r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 8);
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// ld r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 16);
	// addi r22,r1,352
	r22.s64 = ctx.r1.s64 + 352;
	// ld r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 24);
	// addi r20,r1,368
	r20.s64 = ctx.r1.s64 + 368;
	// ld r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U64(r31.u32 + 32);
	// addi r18,r1,384
	r18.s64 = ctx.r1.s64 + 384;
	// ld r5,40(r31)
	ctx.r5.u64 = REX_LOAD_U64(r31.u32 + 40);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// fmadds f3,f6,f9,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f6.f64, ctx.f9.f64, ctx.f3.f64)));
	// ld r21,48(r31)
	r21.u64 = REX_LOAD_U64(r31.u32 + 48);
	// fmuls f1,f5,f9
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// ld r19,56(r31)
	r19.u64 = REX_LOAD_U64(r31.u32 + 56);
	// fmuls f27,f4,f9
	f27.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// fmsubs f9,f9,f0,f2
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, -ctx.f2.f64)));
	// std r11,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r11.u64);
	// std r10,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r10.u64);
	// std r9,0(r22)
	REX_STORE_U64(r22.u32 + 0, ctx.r9.u64);
	// std r8,8(r22)
	REX_STORE_U64(r22.u32 + 8, ctx.r8.u64);
	// std r7,0(r20)
	REX_STORE_U64(r20.u32 + 0, ctx.r7.u64);
	// std r5,8(r20)
	REX_STORE_U64(r20.u32 + 8, ctx.r5.u64);
	// std r21,0(r18)
	REX_STORE_U64(r18.u32 + 0, r21.u64);
	// fmadds f3,f5,f7,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f5.f64, ctx.f7.f64, ctx.f3.f64)));
	// std r19,8(r18)
	REX_STORE_U64(r18.u32 + 8, r19.u64);
	// fmadds f2,f10,f4,f1
	ctx.f2.f64 = double(float(std::fma(ctx.f10.f64, ctx.f4.f64, ctx.f1.f64)));
	// fmadds f1,f6,f8,f27
	ctx.f1.f64 = double(float(std::fma(ctx.f6.f64, ctx.f8.f64, f27.f64)));
	// fnmsubs f9,f5,f8,f9
	ctx.f9.f64 = double(float(-std::fma(ctx.f5.f64, ctx.f8.f64, -ctx.f9.f64)));
	// fmadds f2,f8,f0,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f2.f64)));
	// fmadds f1,f7,f0,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f1.f64)));
	// fnmsubs f8,f4,f8,f3
	ctx.f8.f64 = double(float(-std::fma(ctx.f4.f64, ctx.f8.f64, -ctx.f3.f64)));
	// fnmsubs f9,f4,f7,f9
	ctx.f9.f64 = double(float(-std::fma(ctx.f4.f64, ctx.f7.f64, -ctx.f9.f64)));
	// fnmsubs f7,f6,f7,f2
	ctx.f7.f64 = double(float(-std::fma(ctx.f6.f64, ctx.f7.f64, -ctx.f2.f64)));
	// fnmsubs f10,f10,f5,f1
	ctx.f10.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f5.f64, -ctx.f1.f64)));
	// fmuls f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f5,f13,f9
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f3,f10,f0
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmsubs f6,f9,f0,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, -ctx.f6.f64)));
	// fmadds f0,f8,f0,f5
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f5.f64)));
	// fmadds f5,f13,f10,f4
	ctx.f5.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f4.f64)));
	// fmadds f4,f8,f12,f3
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f3.f64)));
	// fnmsubs f6,f7,f12,f6
	ctx.f6.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f12.f64, -ctx.f6.f64)));
	// fmadds f0,f7,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, ctx.f11.f64, ctx.f0.f64)));
	// fmadds f5,f9,f12,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f5.f64)));
	// fmadds f9,f9,f11,f4
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f4.f64)));
	// fnmsubs f6,f10,f11,f6
	ctx.f6.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f11.f64, -ctx.f6.f64)));
	// stfs f6,172(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fnmsubs f0,f10,f12,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f12.f64, -ctx.f0.f64)));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fnmsubs f0,f8,f11,f5
	ctx.f0.f64 = double(float(-std::fma(ctx.f8.f64, ctx.f11.f64, -ctx.f5.f64)));
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fnmsubs f0,f13,f7,f9
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f7.f64, -ctx.f9.f64)));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82293e30
	ctx.lr = 0x822A9634;
	sub_82293E30(ctx, base);
	// lfs f0,516(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 516);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,500(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 500);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f12,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f2,f10,f13
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f9,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,484(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 484);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f3,f12,f13
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f4,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f1,f10,f11
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f27,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	f27.f64 = double(temp.f32);
	// fmuls f26,f9,f11
	f26.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f0,512(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 512);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f10,496(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 496);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f23,f6,f0,f8
	f23.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, ctx.f8.f64)));
	// lfs f9,480(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 480);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f5,f27,f0,f5
	ctx.f5.f64 = double(float(std::fma(f27.f64, ctx.f0.f64, ctx.f5.f64)));
	// lfs f24,36(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 36);
	f24.f64 = double(temp.f32);
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f12,520(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 520);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f4,f0,f7
	ctx.f0.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, ctx.f7.f64)));
	// lfs f8,504(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 504);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f2,f4,f10,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f4.f64, ctx.f10.f64, ctx.f2.f64)));
	// lfs f7,488(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 488);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f4,f4,f9,f1
	ctx.f4.f64 = double(float(std::fma(ctx.f4.f64, ctx.f9.f64, ctx.f1.f64)));
	// lfs f22,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	f22.f64 = double(temp.f32);
	// lfs f25,40(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 40);
	f25.f64 = double(temp.f32);
	// fmadds f3,f6,f10,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f6.f64, ctx.f10.f64, ctx.f3.f64)));
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// stfs f31,252(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// fmadds f1,f27,f9,f26
	ctx.f1.f64 = double(float(std::fma(f27.f64, ctx.f9.f64, f26.f64)));
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// fmadds f13,f27,f10,f13
	ctx.f13.f64 = double(float(std::fma(f27.f64, ctx.f10.f64, ctx.f13.f64)));
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// stfs f31,268(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// fmadds f10,f22,f12,f5
	ctx.f10.f64 = double(float(std::fma(f22.f64, ctx.f12.f64, ctx.f5.f64)));
	// stfs f10,272(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// fmadds f11,f6,f9,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f6.f64, ctx.f9.f64, ctx.f11.f64)));
	// stfs f31,284(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// fmadds f0,f24,f12,f0
	ctx.f0.f64 = double(float(std::fma(f24.f64, ctx.f12.f64, ctx.f0.f64)));
	// stfs f0,276(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// fmadds f0,f24,f8,f2
	ctx.f0.f64 = double(float(std::fma(f24.f64, ctx.f8.f64, ctx.f2.f64)));
	// stfs f0,260(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// fmadds f0,f24,f7,f4
	ctx.f0.f64 = double(float(std::fma(f24.f64, ctx.f7.f64, ctx.f4.f64)));
	// stfs f0,244(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// fmadds f10,f25,f8,f3
	ctx.f10.f64 = double(float(std::fma(f25.f64, ctx.f8.f64, ctx.f3.f64)));
	// stfs f10,264(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// fmadds f10,f25,f12,f23
	ctx.f10.f64 = double(float(std::fma(f25.f64, ctx.f12.f64, f23.f64)));
	// stfs f10,280(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// fmadds f0,f22,f7,f1
	ctx.f0.f64 = double(float(std::fma(f22.f64, ctx.f7.f64, ctx.f1.f64)));
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// fmadds f0,f22,f8,f13
	ctx.f0.f64 = double(float(std::fma(f22.f64, ctx.f8.f64, ctx.f13.f64)));
	// stfs f0,256(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// addi r7,r1,400
	ctx.r7.s64 = ctx.r1.s64 + 400;
	// addi r6,r1,416
	ctx.r6.s64 = ctx.r1.s64 + 416;
	// fmadds f0,f25,f7,f11
	ctx.f0.f64 = double(float(std::fma(f25.f64, ctx.f7.f64, ctx.f11.f64)));
	// stfs f0,248(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// ld r5,8(r9)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r5,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.r5.u64);
	// ld r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r5,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r5.u64);
	// std r8,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r8.u64);
	// std r11,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// std r9,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r9.u64);
	// std r10,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r10.u64);
loc_822A9760:
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// lwz r9,20(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 20);
	// addi r7,r1,576
	ctx.r7.s64 = ctx.r1.s64 + 576;
	// addi r6,r1,400
	ctx.r6.s64 = ctx.r1.s64 + 400;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x822a8508
	ctx.lr = 0x822A9780;
	sub_822A8508(ctx, base);
	// addi r5,r1,768
	ctx.r5.s64 = ctx.r1.s64 + 768;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// lwz r6,20(r24)
	ctx.r6.u64 = REX_LOAD_U32(r24.u32 + 20);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x822b57d8
	ctx.lr = 0x822A9794;
	sub_822B57D8(ctx, base);
	// stw r28,768(r1)
	REX_STORE_U32(ctx.r1.u32 + 768, r28.u32);
loc_822A9798:
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 28);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822a9268
	if (ctx.cr6.lt) goto loc_822A9268;
loc_822A97A8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lbz r10,16(r27)
	ctx.r10.u64 = REX_LOAD_U8(r27.u32 + 16);
	// addi r11,r11,5148
	ctx.r11.s64 = ctx.r11.s64 + 5148;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,672(r1)
	REX_STORE_U32(ctx.r1.u32 + 672, ctx.r11.u32);
	// beq 0x822a97f8
	if (ctx.cr0.eq) goto loc_822A97F8;
	// lwz r3,4(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 4);
	// lwz r11,792(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 792);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a97f8
	if (ctx.cr6.eq) goto loc_822A97F8;
	// lwz r11,784(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 784);
	// lwz r10,144(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 144);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822a97ec
	if (ctx.cr6.eq) goto loc_822A97EC;
	// addi r5,r23,16
	ctx.r5.s64 = r23.s64 + 16;
	// addi r4,r23,80
	ctx.r4.s64 = r23.s64 + 80;
	// b 0x822a97f4
	goto loc_822A97F4;
loc_822A97EC:
	// addi r5,r23,80
	ctx.r5.s64 = r23.s64 + 80;
	// addi r4,r23,16
	ctx.r4.s64 = r23.s64 + 16;
loc_822A97F4:
	// bl 0x822ad788
	ctx.lr = 0x822A97F8;
	sub_822AD788(ctx, base);
loc_822A97F8:
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cdc
	ctx.lr = 0x822A9804;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82313FC8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82313ff4
	if (!ctx.cr6.eq) goto loc_82313FF4;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82314078
	goto loc_82314078;
loc_82313FF4:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82314008
	if (ctx.cr0.eq) goto loc_82314008;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8231403c
	goto loc_8231403C;
loc_82314008:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82314018
	if (ctx.cr0.eq) goto loc_82314018;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8231403c
	goto loc_8231403C;
loc_82314018:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82314028
	if (ctx.cr0.eq) goto loc_82314028;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8231403c
	goto loc_8231403C;
loc_82314028:
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// li r10,3
	ctx.r10.s64 = 3;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_8231403C:
	// mulli r11,r11,76
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(76));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// li r5,76
	ctx.r5.s64 = 76;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x82314054;
	sub_823EF2F8(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_82314078:
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

DEFINE_REX_FUNC(sub_82318950) {
	REX_FUNC_PROLOGUE();
	// lwz r7,16(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823189b4
	if (ctx.cr6.eq) goto loc_823189B4;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
loc_8231896C:
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8231899c
	if (ctx.cr6.eq) goto loc_8231899C;
loc_8231897C:
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82318998
	if (ctx.cr6.eq) goto loc_82318998;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8231897c
	if (!ctx.cr6.eq) goto loc_8231897C;
	// b 0x8231899c
	goto loc_8231899C;
loc_82318998:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231899C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8231896c
	if (ctx.cr6.lt) goto loc_8231896C;
loc_823189B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8231C210) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb4
	ctx.lr = 0x8231C218;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x82317938
	ctx.lr = 0x8231C23C;
	sub_82317938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231c3c8
	if (!ctx.cr0.eq) goto loc_8231C3C8;
	// lis r11,25707
	ctx.r11.s64 = 1684733952;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// ori r11,r11,28268
	ctx.r11.u64 = ctx.r11.u64 | 28268;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8231c260
	if (ctx.cr6.eq) goto loc_8231C260;
loc_8231C258:
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x8231c3c8
	goto loc_8231C3C8;
loc_8231C260:
	// lis r30,-32256
	r30.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,6196
	ctx.r9.s64 = ctx.r11.s64 + 6196;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lwz r11,5856(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 5856);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82340718
	ctx.lr = 0x8231C298;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231c3c8
	if (!ctx.cr0.eq) goto loc_8231C3C8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82340718
	ctx.lr = 0x8231C2B8;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231c3c8
	if (!ctx.cr0.eq) goto loc_8231C3C8;
	// lis r11,59
	ctx.r11.s64 = 3866624;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8231c314
	if (ctx.cr6.lt) goto loc_8231C314;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82340718
	ctx.lr = 0x8231C2E4;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231c3c8
	if (!ctx.cr0.eq) goto loc_8231C3C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,5856(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 5856);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,5852(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 5852);
	// lwz r10,5848(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 5848);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8231C314:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82317938
	ctx.lr = 0x8231C324;
	sub_82317938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231c3c8
	if (!ctx.cr0.eq) goto loc_8231C3C8;
	// lis r11,25710
	ctx.r11.s64 = 1684930560;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// ori r11,r11,28515
	ctx.r11.u64 = ctx.r11.u64 | 28515;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8231c258
	if (!ctx.cr6.eq) goto loc_8231C258;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823179d0
	ctx.lr = 0x8231C354;
	sub_823179D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8231c380
	if (ctx.cr0.eq) goto loc_8231C380;
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231c378
	if (ctx.cr6.eq) goto loc_8231C378;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231C378;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8231C378:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8231c3c8
	goto loc_8231C3C8;
loc_8231C380:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82317f18
	ctx.lr = 0x8231C398;
	sub_82317F18(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,24(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 24);
	// bl 0x82315050
	ctx.lr = 0x8231C3A8;
	sub_82315050(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231c3c4
	if (ctx.cr6.eq) goto loc_8231C3C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231C3C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8231C3C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231C3C8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82329C90) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// addi r9,r9,8004
	ctx.r9.s64 = ctx.r9.s64 + 8004;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r8,r8,7940
	ctx.r8.s64 = ctx.r8.s64 + 7940;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r7,r7,7932
	ctx.r7.s64 = ctx.r7.s64 + 7932;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// addi r6,r6,7996
	ctx.r6.s64 = ctx.r6.s64 + 7996;
	// stb r11,28(r3)
	REX_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stb r11,29(r3)
	REX_STORE_U8(ctx.r3.u32 + 29, ctx.r11.u8);
	// stw r8,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// lfs f0,3716(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r6,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r6.u32);
	// stw r10,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// stw r10,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stb r11,88(r3)
	REX_STORE_U8(ctx.r3.u32 + 88, ctx.r11.u8);
	// stb r11,89(r3)
	REX_STORE_U8(ctx.r3.u32 + 89, ctx.r11.u8);
	// std r11,96(r3)
	REX_STORE_U64(ctx.r3.u32 + 96, ctx.r11.u64);
	// std r11,104(r3)
	REX_STORE_U64(ctx.r3.u32 + 104, ctx.r11.u64);
	// std r11,112(r3)
	REX_STORE_U64(ctx.r3.u32 + 112, ctx.r11.u64);
	// stw r11,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// std r11,136(r3)
	REX_STORE_U64(ctx.r3.u32 + 136, ctx.r11.u64);
	// stw r11,144(r3)
	REX_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stw r11,148(r3)
	REX_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stw r11,152(r3)
	REX_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// stw r11,156(r3)
	REX_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232F1F8) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82332760
	ctx.lr = 0x8232F20C;
	sub_82332760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232f21c
	if (!ctx.cr6.eq) goto loc_8232F21C;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8233c9a8
	ctx.lr = 0x8232F21C;
	sub_8233C9A8(ctx, base);
loc_8232F21C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232FAD8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82332760
	ctx.lr = 0x8232FAF4;
	sub_82332760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232fb08
	if (!ctx.cr6.eq) goto loc_8232FB08;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823345d0
	ctx.lr = 0x8232FB08;
	sub_823345D0(ctx, base);
loc_8232FB08:
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

DEFINE_REX_FUNC(sub_823311A8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82330d00
	sub_82330D00(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82332540) {
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
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x82332560;
	sub_823EF5F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82335E48) {
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
	// lwz r11,22056(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22056);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82335e74
	if (!ctx.cr6.eq) goto loc_82335E74;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823360f0
	goto loc_823360F0;
loc_82335E74:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r31,r30,22412
	r31.s64 = r30.s64 + 22412;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82335E88:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82335e88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82335E88;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ef5f0
	ctx.lr = 0x82335EA0;
	sub_823EF5F0(ctx, base);
	// lwz r11,22056(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22056);
	// lwz r6,1200(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 1200);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82335eb8
	if (ctx.cr6.eq) goto loc_82335EB8;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82335ebc
	if (!ctx.cr6.eq) goto loc_82335EBC;
loc_82335EB8:
	// li r6,6
	ctx.r6.s64 = 6;
loc_82335EBC:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x823360e8
	if (!ctx.cr6.gt) goto loc_823360E8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f12,5436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5436);
	ctx.f12.f64 = double(temp.f32);
loc_82335ED4:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x82336048
	if (ctx.cr6.lt) goto loc_82336048;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r30,22060
	ctx.r11.s64 = r30.s64 + 22060;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82335F00:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82335f4c
	if (ctx.cr6.eq) goto loc_82335F4C;
	// lbz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 36);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82335f4c
	if (ctx.cr6.eq) goto loc_82335F4C;
	// lwz r9,22056(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 22056);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x82335f2c
	if (!ctx.cr6.eq) goto loc_82335F2C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82335f4c
	if (ctx.cr6.eq) goto loc_82335F4C;
loc_82335F2C:
	// lfs f13,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82335f4c
	if (!ctx.cr6.lt) goto loc_82335F4C;
	// lbz r9,-1(r7)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + -1);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82335f4c
	if (!ctx.cr6.eq) goto loc_82335F4C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82335F4C:
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// addi r9,r11,44
	ctx.r9.s64 = ctx.r11.s64 + 44;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82335f9c
	if (ctx.cr6.eq) goto loc_82335F9C;
	// lbz r3,80(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82335f9c
	if (ctx.cr6.eq) goto loc_82335F9C;
	// lwz r3,22056(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 22056);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82335f7c
	if (!ctx.cr6.eq) goto loc_82335F7C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82335f9c
	if (ctx.cr6.eq) goto loc_82335F9C;
loc_82335F7C:
	// lfs f13,72(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82335f9c
	if (!ctx.cr6.lt) goto loc_82335F9C;
	// lbz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82335f9c
	if (!ctx.cr6.eq) goto loc_82335F9C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
loc_82335F9C:
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// addi r9,r11,88
	ctx.r9.s64 = ctx.r11.s64 + 88;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82335fec
	if (ctx.cr6.eq) goto loc_82335FEC;
	// lbz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82335fec
	if (ctx.cr6.eq) goto loc_82335FEC;
	// lwz r3,22056(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 22056);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82335fcc
	if (!ctx.cr6.eq) goto loc_82335FCC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82335fec
	if (ctx.cr6.eq) goto loc_82335FEC;
loc_82335FCC:
	// lfs f13,116(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82335fec
	if (!ctx.cr6.lt) goto loc_82335FEC;
	// lbz r3,1(r7)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82335fec
	if (!ctx.cr6.eq) goto loc_82335FEC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
loc_82335FEC:
	// lwz r10,132(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// addi r9,r11,132
	ctx.r9.s64 = ctx.r11.s64 + 132;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8233603c
	if (ctx.cr6.eq) goto loc_8233603C;
	// lbz r3,168(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 168);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233603c
	if (ctx.cr6.eq) goto loc_8233603C;
	// lwz r3,22056(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 22056);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8233601c
	if (!ctx.cr6.eq) goto loc_8233601C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8233603c
	if (ctx.cr6.eq) goto loc_8233603C;
loc_8233601C:
	// lfs f13,160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8233603c
	if (!ctx.cr6.lt) goto loc_8233603C;
	// lbz r3,2(r7)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + 2);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233603c
	if (!ctx.cr6.eq) goto loc_8233603C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
loc_8233603C:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 + 176;
	// bdnz 0x82335f00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82335F00;
loc_82336048:
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x823360c4
	if (!ctx.cr6.lt) goto loc_823360C4;
	// mulli r11,r8,44
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(44));
	// subf r7,r8,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r8.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r11,r11,22060
	ctx.r11.s64 = ctx.r11.s64 + 22060;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8233606C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x823360b8
	if (ctx.cr6.eq) goto loc_823360B8;
	// lbz r8,36(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 36);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823360b8
	if (ctx.cr6.eq) goto loc_823360B8;
	// lwz r8,22056(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 22056);
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x82336098
	if (!ctx.cr6.eq) goto loc_82336098;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x823360b8
	if (ctx.cr6.eq) goto loc_823360B8;
loc_82336098:
	// lfs f13,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x823360b8
	if (!ctx.cr6.lt) goto loc_823360B8;
	// lbz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823360b8
	if (!ctx.cr6.eq) goto loc_823360B8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_823360B8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// bdnz 0x8233606c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8233606C;
loc_823360C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823360dc
	if (ctx.cr6.eq) goto loc_823360DC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stbx r4,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u8);
loc_823360DC:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x82335ed4
	if (!ctx.cr0.eq) goto loc_82335ED4;
loc_823360E8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823336c0
	ctx.lr = 0x823360F0;
	sub_823336C0(ctx, base);
loc_823360F0:
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

DEFINE_REX_FUNC(sub_82351048) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82351050;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82351070
	if (ctx.cr6.eq) goto loc_82351070;
	// lfs f0,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82351078
	goto loc_82351078;
loc_82351070:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
loc_82351078:
	// lfs f13,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,68(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x82351090
	if (ctx.cr6.eq) goto loc_82351090;
	// li r29,1
	r29.s64 = 1;
loc_82351090:
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 40);
	// stfs f0,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 68, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823510e4
	if (ctx.cr6.eq) goto loc_823510E4;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x823510b4
	if (!ctx.cr6.eq) goto loc_823510B4;
	// li r31,0
	r31.s64 = 0;
loc_823510B4:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823510e4
	if (ctx.cr6.eq) goto loc_823510E4;
loc_823510BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82351048
	ctx.lr = 0x823510C4;
	sub_82351048(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x823510d8
	if (!ctx.cr6.eq) goto loc_823510D8;
	// li r31,0
	r31.s64 = 0;
loc_823510D8:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823510bc
	if (!ctx.cr6.eq) goto loc_823510BC;
loc_823510E4:
	// lwz r31,44(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 44);
	// addi r30,r30,44
	r30.s64 = r30.s64 + 44;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// beq cr6,0x82351120
	if (ctx.cr6.eq) goto loc_82351120;
loc_823510F4:
	// lwz r28,8(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8234bd90
	ctx.lr = 0x82351104;
	sub_8234BD90(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8234bbc8
	ctx.lr = 0x82351114;
	sub_8234BBC8(ctx, base);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x823510f4
	if (!ctx.cr6.eq) goto loc_823510F4;
loc_82351120:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82355918) {
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
	// lwz r11,416(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 416);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82355940
	if (!ctx.cr6.eq) goto loc_82355940;
	// lwz r11,396(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 396);
	// lwz r11,21976(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82355950
	if (ctx.cr6.eq) goto loc_82355950;
loc_82355940:
	// lwz r4,432(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 432);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r3,428(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 428);
	// bctrl 
	ctx.lr = 0x82355950;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82355950:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82356FB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb4
	ctx.lr = 0x82356FC0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82356fe4
	if (!ctx.cr6.eq) goto loc_82356FE4;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_82356FE4:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,10216
	ctx.r5.s64 = ctx.r10.s64 + 10216;
	// li r6,812
	ctx.r6.s64 = 812;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// li r4,152
	ctx.r4.s64 = 152;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82357008;
	sub_82330E40(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82357150
	if (ctx.cr6.eq) goto loc_82357150;
	// addi r29,r3,92
	r29.s64 = ctx.r3.s64 + 92;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, r29.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r29,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, r29.u32);
	// stw r11,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// bl 0x82331480
	ctx.lr = 0x82357030;
	sub_82331480(ctx, base);
	// lwz r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 32);
	// addic. r11,r28,260
	ctx.xer.ca = r28.u32 > 4294967035;
	ctx.r11.s64 = r28.s64 + 260;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// lwz r9,36(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 36);
	// stw r9,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// lwz r8,40(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 40);
	// stw r8,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r8.u32);
	// lwz r7,44(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 44);
	// stw r7,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r7.u32);
	// lwz r6,48(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 48);
	// stw r6,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r6.u32);
	// lwz r5,52(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 52);
	// stw r5,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r5.u32);
	// lwz r4,56(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 56);
	// stw r4,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r4.u32);
	// lwz r3,60(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 60);
	// stw r3,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 64);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// lwz r10,68(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 68);
	// stw r10,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// lwz r9,72(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 72);
	// stw r9,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r9.u32);
	// lwz r8,76(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 76);
	// stw r8,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r8.u32);
	// lwz r7,80(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 80);
	// stw r7,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r7.u32);
	// lwz r6,84(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 84);
	// stw r6,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r6.u32);
	// lwz r5,88(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 88);
	// stw r5,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r5.u32);
	// lwz r4,108(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 108);
	// stw r4,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r4.u32);
	// lwz r3,116(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 116);
	// stw r3,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r3.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// lwz r10,120(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 120);
	// stw r10,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// lwz r9,124(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 124);
	// stw r9,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r9.u32);
	// lwz r8,104(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 104);
	// stw r8,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r8.u32);
	// lwz r7,128(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 128);
	// stw r7,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r7.u32);
	// lwz r6,144(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 144);
	// stw r6,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r6.u32);
	// lwz r5,148(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 148);
	// stw r5,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r5.u32);
	// lwz r4,704(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 704);
	// stw r4,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r4.u32);
	// lwz r11,704(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 704);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,704(r28)
	REX_STORE_U32(r28.u32 + 704, ctx.r3.u32);
	// lwz r11,140(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 140);
	// stw r11,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r11.u32);
	// addi r11,r28,352
	ctx.r11.s64 = r28.s64 + 352;
	// bne 0x8235711c
	if (!ctx.cr0.eq) goto loc_8235711C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8235711C:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// stw r10,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r29,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r29.u32);
	// beq cr6,0x82357144
	if (ctx.cr6.eq) goto loc_82357144;
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_82357144:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_82357150:
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82362540) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82362550
	if (!ctx.cr6.eq) goto loc_82362550;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82362550:
	// b 0x823619b8
	sub_823619B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82362B98) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r3,-28
	r31.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82362bb8
	if (!ctx.cr6.eq) goto loc_82362BB8;
	// li r31,0
	r31.s64 = 0;
loc_82362BB8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82362be4
	if (ctx.cr6.eq) goto loc_82362BE4;
	// lbz r11,308(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82362c00
	if (!ctx.cr6.eq) goto loc_82362C00;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82362360
	ctx.lr = 0x82362BD4;
	sub_82362360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82362c04
	if (!ctx.cr6.eq) goto loc_82362C04;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82362bfc
	goto loc_82362BFC;
loc_82362BE4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82362360
	ctx.lr = 0x82362BF0;
	sub_82362360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82362c04
	if (!ctx.cr6.eq) goto loc_82362C04;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82362BFC:
	// stb r11,308(r31)
	REX_STORE_U8(r31.u32 + 308, ctx.r11.u8);
loc_82362C00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82362C04:
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

DEFINE_REX_FUNC(sub_823663D8) {
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
	// bl 0x826a1ca0
	ctx.lr = 0x823663E0;
	// lis r10,-32125
	ctx.r10.s64 = -2105344000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r22,r10,24576
	r22.s64 = ctx.r10.s64 + 24576;
	// li r23,1
	r23.s64 = 1;
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
	// ble cr6,0x8236643c
	if (!ctx.cr6.gt) goto loc_8236643C;
loc_823663FC:
	// srawi r5,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x8236642c
	if (!ctx.cr6.gt) goto loc_8236642C;
	// rlwinm r9,r23,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r23
	ctx.ctr.u64 = r23.u64;
	// addi r10,r22,4
	ctx.r10.s64 = r22.s64 + 4;
	// addi r11,r22,4
	ctx.r11.s64 = r22.s64 + 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_8236641C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236641c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236641C;
loc_8236642C:
	// rlwinm r23,r23,1,0,30
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r23,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x823663fc
	if (ctx.cr6.lt) goto loc_823663FC;
loc_8236643C:
	// rlwinm r10,r23,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r23,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82366620
	if (!ctx.cr6.eq) goto loc_82366620;
	// li r24,0
	r24.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x823669bc
	if (!ctx.cr6.gt) goto loc_823669BC;
	// li r26,0
	r26.s64 = 0;
	// addi r25,r22,4
	r25.s64 = r22.s64 + 4;
loc_82366460:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x82366598
	if (!ctx.cr6.gt) goto loc_82366598;
	// rlwinm r31,r11,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r22,4
	ctx.r3.s64 = r22.s64 + 4;
loc_82366478:
	// lwz r9,4(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwzu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r3.u32 = ea;
	// add r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r8,r10,r26
	ctx.r8.u64 = ctx.r10.u64 + r26.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r8,r31,r8
	ctx.r8.u64 = r31.u64 + ctx.r8.u64;
	// rlwinm r30,r6,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lfs f12,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f10,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fneg f9,f12
	ctx.f9.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f10,0(r9)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// add r9,r30,r4
	ctx.r9.u64 = r30.u64 + ctx.r4.u64;
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// rlwinm r29,r6,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f9,4(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f8,r30,r4
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r4.u32);
	ctx.f8.f64 = double(temp.f32);
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lfs f7,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r28,r8,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// fneg f6,f7
	ctx.f6.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// lfs f5,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fneg f4,f5
	ctx.f4.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// lfs f3,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// add r30,r31,r8
	r30.u64 = r31.u64 + ctx.r8.u64;
	// stfs f3,0(r9)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// add r9,r29,r4
	ctx.r9.u64 = r29.u64 + ctx.r4.u64;
	// stfs f4,0(r5)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// add r8,r28,r4
	ctx.r8.u64 = r28.u64 + ctx.r4.u64;
	// stfs f6,4(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f2,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r27,r6,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r28,r4
	temp.u32 = REX_LOAD_U32(r28.u32 + ctx.r4.u32);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// lfsx f0,r29,r4
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r27,r4
	ctx.r10.u64 = r27.u64 + ctx.r4.u64;
	// lfs f13,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f12,4(r9)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// add r9,r30,r4
	ctx.r9.u64 = r30.u64 + ctx.r4.u64;
	// stfsx f1,r29,r4
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r29.u32 + ctx.r4.u32, temp.u32);
	// fneg f11,f2
	ctx.f11.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// stfsx f0,r28,r4
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + ctx.r4.u32, temp.u32);
	// addi r5,r8,4
	ctx.r5.s64 = ctx.r8.s64 + 4;
	// stfs f11,4(r8)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// lfsx f10,r30,r4
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f8,r27,r4
	temp.u32 = REX_LOAD_U32(r27.u32 + ctx.r4.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fneg f6,f7
	ctx.f6.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fneg f5,f9
	ctx.f5.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfsx f10,r27,r4
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r27.u32 + ctx.r4.u32, temp.u32);
	// stfs f5,4(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfsx f8,r30,r4
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r30.u32 + ctx.r4.u32, temp.u32);
	// stfs f6,4(r9)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// bdnz 0x82366478
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82366478;
loc_82366598:
	// lwzu r10,4(r25)
	ea = 4 + r25.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	r25.u32 = ea;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// addi r26,r26,2
	r26.s64 = r26.s64 + 2;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfsx f13,r8,r4
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r4.u32, temp.u32);
	// add r9,r6,r4
	ctx.r9.u64 = ctx.r6.u64 + ctx.r4.u64;
	// lfs f12,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lfs f11,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// cmpw cr6,r24,r23
	ctx.cr6.compare<int32_t>(r24.s32, r23.s32, ctx.xer);
	// lfsx f10,r6,r4
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f9,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f10,0(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fneg f7,f12
	ctx.f7.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f8,4(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f7,4(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfsx f11,r6,r4
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r4.u32, temp.u32);
	// lfsx f6,r8,r4
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f6.f64 = double(temp.f32);
	// fneg f5,f6
	ctx.f5.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// stfsx f5,r8,r4
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r4.u32, temp.u32);
	// blt cr6,0x82366460
	if (ctx.cr6.lt) goto loc_82366460;
	// b 0x826a1cf0
	return;
loc_82366620:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r26,1
	r26.s64 = 1;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(r23.s32, 1, ctx.xer);
	// lfsx f12,r10,r4
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfsx f11,r10,r4
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, temp.u32);
	// ble cr6,0x823669bc
	if (!ctx.cr6.gt) goto loc_823669BC;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r22,8
	ctx.r5.s64 = r22.s64 + 8;
loc_82366654:
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(r26.s32, 4, ctx.xer);
	// blt cr6,0x823668c8
	if (ctx.cr6.lt) goto loc_823668C8;
	// addi r9,r26,-4
	ctx.r9.s64 = r26.s64 + -4;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r9,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r22,4
	ctx.r9.s64 = r22.s64 + 4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r27,r8,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8236667C:
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addi r3,r10,6
	ctx.r3.s64 = ctx.r10.s64 + 6;
	// lwz r7,4(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// add r31,r8,r6
	r31.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r30,r7,r10
	r30.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r30,2,0,29
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r8,r29,r4
	ctx.r8.u64 = r29.u64 + ctx.r4.u64;
	// addi r29,r7,4
	r29.s64 = ctx.r7.s64 + 4;
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
	// add r30,r30,r11
	r30.u64 = r30.u64 + ctx.r11.u64;
	// lfs f0,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f9,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f9,0(r8)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f12,4(r8)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// add r8,r30,r4
	ctx.r8.u64 = r30.u64 + ctx.r4.u64;
	// stfs f11,0(r7)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// add r7,r31,r4
	ctx.r7.u64 = r31.u64 + ctx.r4.u64;
	// stfs f10,0(r29)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// lfs f5,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fneg f4,f5
	ctx.f4.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// lfsx f3,r31,r4
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r4.u32);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f8,r30,r4
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r4.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fneg f6,f7
	ctx.f6.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// stfsx f3,r30,r4
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r30.u32 + ctx.r4.u32, temp.u32);
	// stfs f6,4(r8)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfsx f8,r31,r4
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + ctx.r4.u32, temp.u32);
	// stfs f4,4(r7)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lwz r7,8(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r31,r7,r6
	r31.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r30,r8,2
	r30.s64 = ctx.r8.s64 + 2;
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r30,2,0,29
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r8,r29,r4
	ctx.r8.u64 = r29.u64 + ctx.r4.u64;
	// add r30,r30,r11
	r30.u64 = r30.u64 + ctx.r11.u64;
	// addi r28,r8,4
	r28.s64 = ctx.r8.s64 + 4;
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
	// lfs f2,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f1,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r7,4
	r29.s64 = ctx.r7.s64 + 4;
	// lfs f13,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f2,0(r8)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// add r8,r30,r4
	ctx.r8.u64 = r30.u64 + ctx.r4.u64;
	// stfs f12,0(r28)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f1,0(r7)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// add r7,r31,r4
	ctx.r7.u64 = r31.u64 + ctx.r4.u64;
	// stfs f11,0(r29)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// lfsx f10,r31,r4
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// lfs f7,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fneg f6,f7
	ctx.f6.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// lfsx f5,r30,r4
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r4.u32);
	ctx.f5.f64 = double(temp.f32);
	// stfsx f10,r30,r4
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r30.u32 + ctx.r4.u32, temp.u32);
	// stfs f6,4(r8)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfsx f5,r31,r4
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r31.u32 + ctx.r4.u32, temp.u32);
	// stfs f8,4(r7)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lwz r7,12(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// add r31,r7,r6
	r31.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r29,r8,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r8,r11
	r30.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r8,r29,r4
	ctx.r8.u64 = r29.u64 + ctx.r4.u64;
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f4,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// add r29,r31,r11
	r29.u64 = r31.u64 + ctx.r11.u64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// fneg f2,f4
	ctx.f2.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r29,2,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r7,4
	r31.s64 = ctx.r7.s64 + 4;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lfs f1,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f1
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// add r8,r30,r4
	ctx.r8.u64 = r30.u64 + ctx.r4.u64;
	// stfs f3,0(r7)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// add r7,r29,r4
	ctx.r7.u64 = r29.u64 + ctx.r4.u64;
	// stfs f2,0(r31)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lfsx f12,r30,r4
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f9,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// lfsx f7,r29,r4
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r4.u32);
	ctx.f7.f64 = double(temp.f32);
	// stfsx f7,r30,r4
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r30.u32 + ctx.r4.u32, temp.u32);
	// stfs f8,4(r8)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfsx f12,r29,r4
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r29.u32 + ctx.r4.u32, temp.u32);
	// stfs f10,4(r7)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lwz r7,4(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lwzu r8,16(r9)
	ea = 16 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// add r30,r8,r6
	r30.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 + ctx.r3.u64;
	// rlwinm r7,r30,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r30,r30,r11
	r30.u64 = r30.u64 + ctx.r11.u64;
	// addi r31,r8,4
	r31.s64 = ctx.r8.s64 + 4;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f5,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fneg f3,f5
	ctx.f3.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// lfs f6,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r29,r7,4
	r29.s64 = ctx.r7.s64 + 4;
	// lfs f2,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// lfs f4,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stfs f4,0(r8)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f6,0(r7)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// add r7,r30,r4
	ctx.r7.u64 = r30.u64 + ctx.r4.u64;
	// stfs f1,0(r29)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lfs f13,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// lfsx f0,r3,r4
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfsx f11,r30,r4
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r3,r4
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + ctx.r4.u32, temp.u32);
	// stfs f12,4(r8)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfsx f0,r30,r4
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + ctx.r4.u32, temp.u32);
	// stfs f9,4(r7)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// bdnz 0x8236667c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236667C;
loc_823668C8:
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(r27.s32, r26.s32, ctx.xer);
	// bge cr6,0x82366978
	if (!ctx.cr6.lt) goto loc_82366978;
	// subf r7,r27,r26
	ctx.r7.u64 = r26.u64 - r27.u64;
	// rlwinm r9,r27,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r22,4
	ctx.r10.s64 = r22.s64 + 4;
	// rlwinm r8,r27,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r9,r10
	r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_823668E8:
	// lwzu r10,4(r31)
	ea = 4 + r31.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// lwz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// add r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r30,r7,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f9,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// stfs f12,4(r9)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f11,0(r9)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// add r9,r7,r4
	ctx.r9.u64 = ctx.r7.u64 + ctx.r4.u64;
	// stfs f10,4(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f9,0(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// add r10,r30,r4
	ctx.r10.u64 = r30.u64 + ctx.r4.u64;
	// lfsx f7,r7,r4
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fneg f4,f6
	ctx.f4.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// lfs f8,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f5,r30,r4
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r4.u32);
	ctx.f5.f64 = double(temp.f32);
	// fneg f3,f8
	ctx.f3.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// stfsx f5,r7,r4
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, temp.u32);
	// stfs f4,4(r9)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfsx f7,r30,r4
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r30.u32 + ctx.r4.u32, temp.u32);
	// stfs f3,4(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// bdnz 0x823668e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823668E8;
loc_82366978:
	// lwzu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r26,r23
	ctx.cr6.compare<int32_t>(r26.s32, r23.s32, ctx.xer);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfsx f13,r10,r4
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, temp.u32);
	// lfsx f12,r9,r4
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfsx f11,r9,r4
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r4.u32, temp.u32);
	// blt cr6,0x82366654
	if (ctx.cr6.lt) goto loc_82366654;
loc_823669BC:
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_823AC2E0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823AC4D0) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x823ac508
	if (!ctx.cr6.eq) goto loc_823AC508;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ac508
	if (!ctx.cr6.eq) goto loc_823AC508;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823ac548
	goto loc_823AC548;
loc_823AC508:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823ac530
	if (ctx.cr6.eq) goto loc_823AC530;
	// lwz r3,32(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ac530
	if (ctx.cr6.eq) goto loc_823AC530;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,84(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 84);
	// bl 0x82348e28
	ctx.lr = 0x823AC528;
	sub_82348E28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ac548
	if (!ctx.cr6.eq) goto loc_823AC548;
loc_823AC530:
	// addi r7,r31,784
	ctx.r7.s64 = r31.s64 + 784;
	// lwz r6,784(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 784);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,84(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r3,32(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 32);
	// bl 0x82348ca0
	ctx.lr = 0x823AC548;
	sub_82348CA0(ctx, base);
loc_823AC548:
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

DEFINE_REX_FUNC(sub_823B0200) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c94
	ctx.lr = 0x823B0208;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// bne cr6,0x823b09b0
	if (!ctx.cr6.eq) goto loc_823B09B0;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bgt cr6,0x823b11f0
	if (ctx.cr6.gt) goto loc_823B11F0;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823b041c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823B041C;
	// bdzf 4*cr6+eq,0x823b0610
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823B0610;
	// bdzf 4*cr6+eq,0x823b07d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823B07D8;
	// bne cr6,0x823b08fc
	if (!ctx.cr6.eq) goto loc_823B08FC;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// rlwinm r5,r7,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lfs f0,15200(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 15200);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// beq cr6,0x823b03d4
	if (ctx.cr6.eq) goto loc_823B03D4;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r8,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r8,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r31,r9,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r8,r6
	r29.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r27,r8,r5
	r27.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r26,r9,r4
	r26.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r25,r8,r3
	r25.u64 = ctx.r8.u64 + ctx.r3.u64;
	// subf r23,r8,r30
	r23.u64 = r30.u64 - ctx.r8.u64;
	// rlwinm r28,r9,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r9,3,0,28
	r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r9,r31
	ctx.r3.u64 = ctx.r9.u64 + r31.u64;
	// rlwinm r31,r29,2,0,29
	r31.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r8,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r30,r9,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r8,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r28,r9,r28
	r28.u64 = ctx.r9.u64 + r28.u64;
	// rlwinm r27,r27,2,0,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r26,1,0,30
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r25,3,0,28
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r24,r9,r24
	r24.u64 = r24.u64 - ctx.r9.u64;
	// rlwinm r23,r23,2,0,29
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r22,r8,5,0,26
	r22.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r21,r9,3,0,28
	r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
loc_823B02C8:
	// lbz r20,0(r10)
	r20.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r20,r20
	r20.s64 = r20.s8;
	// std r20,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, r20.u64);
	// lfd f13,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lbzx r20,r10,r9
	r20.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// extsb r20,r20
	r20.s64 = r20.s8;
	// std r20,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, r20.u64);
	// lfd f9,-168(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfsx f6,r6,r11
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// lbzx r20,r5,r10
	r20.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// extsb r20,r20
	r20.s64 = r20.s8;
	// std r20,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, r20.u64);
	// lfd f5,-160(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfsx f2,r4,r11
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, temp.u32);
	// lbzx r20,r3,r10
	r20.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// extsb r20,r20
	r20.s64 = r20.s8;
	// std r20,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, r20.u64);
	// lfd f1,-152(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfsx f11,r31,r11
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + ctx.r11.u32, temp.u32);
	// lbzx r20,r30,r10
	r20.u64 = REX_LOAD_U8(r30.u32 + ctx.r10.u32);
	// extsb r20,r20
	r20.s64 = r20.s8;
	// std r20,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, r20.u64);
	// lfd f10,-144(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfsx f7,r29,r11
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r29.u32 + ctx.r11.u32, temp.u32);
	// lbzx r20,r28,r10
	r20.u64 = REX_LOAD_U8(r28.u32 + ctx.r10.u32);
	// extsb r20,r20
	r20.s64 = r20.s8;
	// std r20,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, r20.u64);
	// lfd f6,-136(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfsx f3,r27,r11
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r27.u32 + ctx.r11.u32, temp.u32);
	// lbzx r20,r26,r10
	r20.u64 = REX_LOAD_U8(r26.u32 + ctx.r10.u32);
	// extsb r20,r20
	r20.s64 = r20.s8;
	// std r20,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, r20.u64);
	// lfd f2,-128(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsx f12,r25,r11
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r25.u32 + ctx.r11.u32, temp.u32);
	// lbzx r20,r24,r10
	r20.u64 = REX_LOAD_U8(r24.u32 + ctx.r10.u32);
	// extsb r20,r20
	r20.s64 = r20.s8;
	// std r20,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, r20.u64);
	// lfd f11,-120(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// add r10,r21,r10
	ctx.r10.u64 = r21.u64 + ctx.r10.u64;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfsx f8,r23,r11
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r23.u32 + ctx.r11.u32, temp.u32);
	// add r11,r22,r11
	ctx.r11.u64 = r22.u64 + ctx.r11.u64;
	// bdnz 0x823b02c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B02C8;
loc_823B03D4:
	// clrlwi r7,r7,29
	ctx.r7.u64 = ctx.r7.u32 & 0x7;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823b11f0
	if (ctx.cr6.eq) goto loc_823B11F0;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
loc_823B03F0:
	// lbzux r7,r10,r9
	ea = ctx.r10.u32 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// std r6,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r6.u64);
	// lfd f13,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfsux f10,r11,r8
	temp.f32 = float(ctx.f10.f64);
	ea = ctx.r11.u32 + ctx.r8.u32;
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823b03f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B03F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1ce4
	return;
loc_823B041C:
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// rlwinm r5,r7,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lfs f0,15504(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 15504);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// beq cr6,0x823b05c4
	if (ctx.cr6.eq) goto loc_823B05C4;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r9,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r8,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r27,r9,r6
	r27.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r26,r8,r5
	r26.u64 = ctx.r8.u64 + ctx.r5.u64;
	// rlwinm r29,r9,3,0,28
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r28,r8,3,0,28
	r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r25,r9,r4
	r25.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r24,r8,r3
	r24.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r23,r9,r31
	r23.u64 = ctx.r9.u64 + r31.u64;
	// add r22,r8,r30
	r22.u64 = ctx.r8.u64 + r30.u64;
	// subf r21,r9,r29
	r21.u64 = r29.u64 - ctx.r9.u64;
	// subf r20,r8,r28
	r20.u64 = r28.u64 - ctx.r8.u64;
	// rlwinm r31,r27,1,0,30
	r31.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r26,2,0,29
	r30.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r25,1,0,30
	r27.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r24,2,0,29
	r26.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r23,2,0,29
	r25.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r22,3,0,28
	r24.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r23,r21,1,0,30
	r23.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r22,r20,2,0,29
	r22.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r8,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r29,r9,3,0,28
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r28,r8,4,0,27
	r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r21,r8,5,0,26
	r21.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r20,r9,4,0,27
	r20.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
loc_823B04B8:
	// lhz r19,0(r10)
	r19.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r19,r19
	r19.s64 = r19.s16;
	// std r19,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, r19.u64);
	// lfd f13,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lhzx r19,r6,r10
	r19.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r10.u32);
	// extsh r19,r19
	r19.s64 = r19.s16;
	// std r19,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, r19.u64);
	// lfd f9,-128(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfsx f6,r5,r11
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
	// lhzx r19,r4,r10
	r19.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r10.u32);
	// extsh r19,r19
	r19.s64 = r19.s16;
	// std r19,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, r19.u64);
	// lfd f5,-136(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfsx f2,r3,r11
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, temp.u32);
	// lhzx r19,r31,r10
	r19.u64 = REX_LOAD_U16(r31.u32 + ctx.r10.u32);
	// extsh r19,r19
	r19.s64 = r19.s16;
	// std r19,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, r19.u64);
	// lfd f1,-144(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfsx f11,r30,r11
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + ctx.r11.u32, temp.u32);
	// lhzx r19,r29,r10
	r19.u64 = REX_LOAD_U16(r29.u32 + ctx.r10.u32);
	// extsh r19,r19
	r19.s64 = r19.s16;
	// std r19,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, r19.u64);
	// lfd f10,-152(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfsx f7,r28,r11
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r28.u32 + ctx.r11.u32, temp.u32);
	// lhzx r19,r27,r10
	r19.u64 = REX_LOAD_U16(r27.u32 + ctx.r10.u32);
	// extsh r19,r19
	r19.s64 = r19.s16;
	// std r19,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, r19.u64);
	// lfd f6,-160(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfsx f3,r26,r11
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r26.u32 + ctx.r11.u32, temp.u32);
	// lhzx r19,r25,r10
	r19.u64 = REX_LOAD_U16(r25.u32 + ctx.r10.u32);
	// extsh r19,r19
	r19.s64 = r19.s16;
	// std r19,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, r19.u64);
	// lfd f2,-168(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsx f12,r24,r11
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r24.u32 + ctx.r11.u32, temp.u32);
	// lhzx r19,r23,r10
	r19.u64 = REX_LOAD_U16(r23.u32 + ctx.r10.u32);
	// extsh r19,r19
	r19.s64 = r19.s16;
	// std r19,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, r19.u64);
	// lfd f11,-176(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// add r10,r20,r10
	ctx.r10.u64 = r20.u64 + ctx.r10.u64;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfsx f8,r22,r11
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r22.u32 + ctx.r11.u32, temp.u32);
	// add r11,r21,r11
	ctx.r11.u64 = r21.u64 + ctx.r11.u64;
	// bdnz 0x823b04b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B04B8;
loc_823B05C4:
	// clrlwi r7,r7,29
	ctx.r7.u64 = ctx.r7.u32 & 0x7;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823b11f0
	if (ctx.cr6.eq) goto loc_823B11F0;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r8,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r8.u64;
	// subf r11,r7,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r7.u64;
loc_823B05E4:
	// lhzux r10,r11,r7
	ea = ctx.r11.u32 + ctx.r7.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// std r6,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r6.u64);
	// lfd f13,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfsux f10,r9,r8
	temp.f32 = float(ctx.f10.f64);
	ea = ctx.r9.u32 + ctx.r8.u32;
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x823b05e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B05E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1ce4
	return;
loc_823B0610:
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// lfs f0,22436(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 22436);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// blt cr6,0x823b0764
	if (ctx.cr6.lt) goto loc_823B0764;
	// addi r6,r7,-4
	ctx.r6.s64 = ctx.r7.s64 + -4;
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r6,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r5,1
	ctx.r3.s64 = ctx.r5.s64 + 1;
	// add r5,r9,r4
	ctx.r5.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r3,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
loc_823B064C:
	// lbzx r3,r6,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// lbzx r30,r10,r9
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// rotlwi r3,r3,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// lbz r29,0(r10)
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// or r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 | r30.u64;
	// rlwinm r3,r3,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 | r29.u64;
	// rlwinm r3,r3,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r3,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 8;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r3,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r3.u64);
	// lfd f13,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lbz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r29,r10,r9
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// lbzx r30,r6,r10
	r30.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// rotlwi r30,r30,8
	r30.u64 = __builtin_rotateleft32(r30.u32, 8);
	// or r30,r30,r29
	r30.u64 = r30.u64 | r29.u64;
	// rlwinm r30,r30,8,0,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r30,r3
	ctx.r3.u64 = r30.u64 | ctx.r3.u64;
	// rlwinm r3,r3,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r3,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 8;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r3,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.r3.u64);
	// lfd f9,-128(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfsux f6,r11,r4
	temp.f32 = float(ctx.f6.f64);
	ea = ctx.r11.u32 + ctx.r4.u32;
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lbz r30,0(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r29,r6,r10
	r29.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// rotlwi r29,r29,8
	r29.u64 = __builtin_rotateleft32(r29.u32, 8);
	// lbzx r3,r10,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// or r3,r29,r3
	ctx.r3.u64 = r29.u64 | ctx.r3.u64;
	// rlwinm r3,r3,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 | r30.u64;
	// rlwinm r3,r3,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r3,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 8;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r3,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, ctx.r3.u64);
	// lfd f5,-136(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfsux f2,r11,r4
	temp.f32 = float(ctx.f2.f64);
	ea = ctx.r11.u32 + ctx.r4.u32;
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lbzx r3,r10,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// lbz r30,0(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r29,r6,r10
	r29.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// rotlwi r29,r29,8
	r29.u64 = __builtin_rotateleft32(r29.u32, 8);
	// or r3,r29,r3
	ctx.r3.u64 = r29.u64 | ctx.r3.u64;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// rlwinm r3,r3,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 | r30.u64;
	// rlwinm r3,r3,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r3,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 8;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r3,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.r3.u64);
	// lfd f1,-144(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfsux f11,r11,r4
	temp.f32 = float(ctx.f11.f64);
	ea = ctx.r11.u32 + ctx.r4.u32;
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// bdnz 0x823b064c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B064C;
loc_823B0764:
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x823b11f0
	if (!ctx.cr6.lt) goto loc_823B11F0;
	// subf r5,r31,r7
	ctx.r5.u64 = ctx.r7.u64 - r31.u64;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
loc_823B0788:
	// lbzx r5,r7,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// lbzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// rotlwi r3,r5,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// or r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 | ctx.r4.u64;
	// rlwinm r3,r4,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 | ctx.r5.u64;
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r3,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 8;
	// extsw r5,r3
	ctx.r5.s64 = ctx.r3.s32;
	// std r5,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r5.u64);
	// lfd f13,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfsux f10,r11,r8
	temp.f32 = float(ctx.f10.f64);
	ea = ctx.r11.u32 + ctx.r8.u32;
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823b0788
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B0788;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1ce4
	return;
loc_823B07D8:
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// rlwinm r5,r7,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lfs f0,22432(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 22432);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// beq cr6,0x823b08b0
	if (ctx.cr6.eq) goto loc_823B08B0;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r9,r6
	r31.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r30,r8,r5
	r30.u64 = ctx.r8.u64 + ctx.r5.u64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r9,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r3,r8,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r8,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r28,r9,4,0,27
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
loc_823B0824:
	// lwz r27,0(r10)
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsw r27,r27
	r27.s64 = r27.s32;
	// std r27,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, r27.u64);
	// lfd f13,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwzx r27,r6,r10
	r27.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// extsw r27,r27
	r27.s64 = r27.s32;
	// std r27,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, r27.u64);
	// lfd f9,-128(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfsx f6,r5,r11
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
	// lwzx r27,r4,r10
	r27.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// extsw r27,r27
	r27.s64 = r27.s32;
	// std r27,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, r27.u64);
	// lfd f5,-136(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfsx f2,r3,r11
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, temp.u32);
	// lwzx r27,r31,r10
	r27.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// extsw r27,r27
	r27.s64 = r27.s32;
	// std r27,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, r27.u64);
	// lfd f1,-144(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// add r10,r28,r10
	ctx.r10.u64 = r28.u64 + ctx.r10.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfsx f11,r30,r11
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + ctx.r11.u32, temp.u32);
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// bdnz 0x823b0824
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B0824;
loc_823B08B0:
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823b11f0
	if (ctx.cr6.eq) goto loc_823B11F0;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r8,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r8.u64;
	// subf r11,r7,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r7.u64;
loc_823B08D0:
	// lwzux r10,r11,r7
	ea = ctx.r11.u32 + ctx.r7.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r10.u64);
	// lfd f13,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfsux f10,r9,r8
	temp.f32 = float(ctx.f10.f64);
	ea = ctx.r9.u32 + ctx.r8.u32;
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x823b08d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B08D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1ce4
	return;
loc_823B08FC:
	// rlwinm r5,r7,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823b0978
	if (ctx.cr6.eq) goto loc_823B0978;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r9,r6
	r31.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r30,r8,r5
	r30.u64 = ctx.r8.u64 + ctx.r5.u64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r9,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r3,r8,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r8,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r28,r9,4,0,27
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
loc_823B093C:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsx f12,r6,r10
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfsx f11,r5,r11
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
	// lfsx f10,r4,r10
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfsx f9,r3,r11
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, temp.u32);
	// lfsx f8,r31,r10
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfsx f7,r30,r11
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r30.u32 + ctx.r11.u32, temp.u32);
	// add r10,r28,r10
	ctx.r10.u64 = r28.u64 + ctx.r10.u64;
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// bdnz 0x823b093c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B093C;
loc_823B0978:
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823b11f0
	if (ctx.cr6.eq) goto loc_823B11F0;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r8,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r8.u64;
	// subf r11,r9,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r9.u64;
loc_823B0998:
	// lfsux f0,r11,r9
	ctx.fpscr.disableFlushMode();
	ea = ctx.r11.u32 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfsux f0,r7,r8
	temp.f32 = float(ctx.f0.f64);
	ea = ctx.r7.u32 + ctx.r8.u32;
	REX_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x823b0998
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B0998;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1ce4
	return;
loc_823B09B0:
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// beq cr6,0x823b09c0
	if (ctx.cr6.eq) goto loc_823B09C0;
	// li r3,15
	ctx.r3.s64 = 15;
	// b 0x826a1ce4
	return;
loc_823B09C0:
	// addi r6,r5,-1
	ctx.r6.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bgt cr6,0x823b11f0
	if (ctx.cr6.gt) goto loc_823B11F0;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823b0b80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823B0B80;
	// bdzf 4*cr6+eq,0x823b0d28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823B0D28;
	// bdzf 4*cr6+eq,0x823b0f08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823B0F08;
	// bne cr6,0x823b10b0
	if (!ctx.cr6.eq) goto loc_823B10B0;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// rlwinm r6,r7,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f0,19036(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 19036);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// beq cr6,0x823b0b1c
	if (ctx.cr6.eq) goto loc_823B0B1C;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r31,r9,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r9,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r8,1,0,30
	r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r8,r6
	r28.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r27,r9,4,0,27
	r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r26,r8,2,0,29
	r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_823B0A2C:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfsx f10,r31,r10
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f7,r30,r10
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfsx f11,r29,r10
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f5,f12
	ctx.f5.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f5,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.f5.u64);
	// fctiwz f3,f8
	ctx.f3.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f3,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.f3.u64);
	// fctiwz f2,f6
	ctx.f2.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f2,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f2.u64);
	// fctiwz f4,f9
	ctx.f4.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f4,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, ctx.f4.u64);
	// lwz r3,-132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -132);
	// lwz r11,-124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -124);
	// lwz r6,-140(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -140);
	// lwz r5,-116(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// cmpwi cr6,r11,-128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -128, ctx.xer);
	// bge cr6,0x823b0a8c
	if (!ctx.cr6.lt) goto loc_823B0A8C;
	// li r11,-128
	ctx.r11.s64 = -128;
	// b 0x823b0aa0
	goto loc_823B0AA0;
loc_823B0A8C:
	// cmpwi cr6,r11,127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 127, ctx.xer);
	// ble cr6,0x823b0a9c
	if (!ctx.cr6.gt) goto loc_823B0A9C;
	// li r11,127
	ctx.r11.s64 = 127;
	// b 0x823b0aa0
	goto loc_823B0AA0;
loc_823B0A9C:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_823B0AA0:
	// cmpwi cr6,r6,-128
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -128, ctx.xer);
	// stb r11,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// bge cr6,0x823b0ab4
	if (!ctx.cr6.lt) goto loc_823B0AB4;
	// li r11,-128
	ctx.r11.s64 = -128;
	// b 0x823b0ac4
	goto loc_823B0AC4;
loc_823B0AB4:
	// cmpwi cr6,r6,127
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 127, ctx.xer);
	// li r11,127
	ctx.r11.s64 = 127;
	// bgt cr6,0x823b0ac4
	if (ctx.cr6.gt) goto loc_823B0AC4;
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
loc_823B0AC4:
	// cmpwi cr6,r5,-128
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -128, ctx.xer);
	// stbx r11,r4,r8
	REX_STORE_U8(ctx.r4.u32 + ctx.r8.u32, ctx.r11.u8);
	// bge cr6,0x823b0ad8
	if (!ctx.cr6.lt) goto loc_823B0AD8;
	// li r11,-128
	ctx.r11.s64 = -128;
	// b 0x823b0ae8
	goto loc_823B0AE8;
loc_823B0AD8:
	// cmpwi cr6,r5,127
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 127, ctx.xer);
	// li r11,127
	ctx.r11.s64 = 127;
	// bgt cr6,0x823b0ae8
	if (ctx.cr6.gt) goto loc_823B0AE8;
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
loc_823B0AE8:
	// cmpwi cr6,r3,-128
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -128, ctx.xer);
	// stbx r11,r25,r4
	REX_STORE_U8(r25.u32 + ctx.r4.u32, ctx.r11.u8);
	// bge cr6,0x823b0afc
	if (!ctx.cr6.lt) goto loc_823B0AFC;
	// li r11,-128
	ctx.r11.s64 = -128;
	// b 0x823b0b0c
	goto loc_823B0B0C;
loc_823B0AFC:
	// cmpwi cr6,r3,127
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 127, ctx.xer);
	// li r11,127
	ctx.r11.s64 = 127;
	// bgt cr6,0x823b0b0c
	if (ctx.cr6.gt) goto loc_823B0B0C;
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
loc_823B0B0C:
	// stbx r11,r28,r4
	REX_STORE_U8(r28.u32 + ctx.r4.u32, ctx.r11.u8);
	// add r10,r27,r10
	ctx.r10.u64 = r27.u64 + ctx.r10.u64;
	// add r4,r26,r4
	ctx.r4.u64 = r26.u64 + ctx.r4.u64;
	// bdnz 0x823b0a2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B0A2C;
loc_823B0B1C:
	// clrlwi r11,r7,30
	ctx.r11.u64 = ctx.r7.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b11f0
	if (ctx.cr6.eq) goto loc_823B11F0;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r9,r8,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r8.u64;
loc_823B0B34:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f11.u64);
	// lwz r11,-116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// cmpwi cr6,r11,-128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -128, ctx.xer);
	// bge cr6,0x823b0b58
	if (!ctx.cr6.lt) goto loc_823B0B58;
	// li r11,-128
	ctx.r11.s64 = -128;
	// b 0x823b0b6c
	goto loc_823B0B6C;
loc_823B0B58:
	// cmpwi cr6,r11,127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 127, ctx.xer);
	// ble cr6,0x823b0b68
	if (!ctx.cr6.gt) goto loc_823B0B68;
	// li r11,127
	ctx.r11.s64 = 127;
	// b 0x823b0b6c
	goto loc_823B0B6C;
loc_823B0B68:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_823B0B6C:
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stbux r11,r9,r8
	ea = ctx.r9.u32 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x823b0b34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B0B34;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1ce4
	return;
loc_823B0B80:
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// rlwinm r6,r7,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f0,10520(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 10520);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// beq cr6,0x823b0cc0
	if (ctx.cr6.eq) goto loc_823B0CC0;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r31,r9,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r9,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r8,1,0,30
	r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r8,2,0,29
	r24.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r6,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r9,4,0,27
	r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r26,r8,3,0,28
	r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
loc_823B0BD0:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfsx f11,r31,r10
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r30,r10
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfsx f8,r29,r10
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fctiwz f5,f12
	ctx.f5.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f5,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f5.u64);
	// fctiwz f4,f9
	ctx.f4.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f4,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.f4.u64);
	// fctiwz f3,f7
	ctx.f3.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f3,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, ctx.f3.u64);
	// fctiwz f2,f6
	ctx.f2.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f2,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.f2.u64);
	// lwz r3,-140(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -140);
	// lwz r11,-116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// lwz r6,-124(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -124);
	// lwz r5,-132(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -132);
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x823b0c30
	if (!ctx.cr6.lt) goto loc_823B0C30;
	// li r11,-32768
	ctx.r11.s64 = -32768;
	// b 0x823b0c44
	goto loc_823B0C44;
loc_823B0C30:
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x823b0c40
	if (!ctx.cr6.gt) goto loc_823B0C40;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x823b0c44
	goto loc_823B0C44;
loc_823B0C40:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_823B0C44:
	// cmpwi cr6,r6,-32768
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -32768, ctx.xer);
	// sth r11,0(r4)
	REX_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bge cr6,0x823b0c58
	if (!ctx.cr6.lt) goto loc_823B0C58;
	// li r11,-32768
	ctx.r11.s64 = -32768;
	// b 0x823b0c68
	goto loc_823B0C68;
loc_823B0C58:
	// cmpwi cr6,r6,32767
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 32767, ctx.xer);
	// li r11,32767
	ctx.r11.s64 = 32767;
	// bgt cr6,0x823b0c68
	if (ctx.cr6.gt) goto loc_823B0C68;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
loc_823B0C68:
	// cmpwi cr6,r5,-32768
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -32768, ctx.xer);
	// sthx r11,r25,r4
	REX_STORE_U16(r25.u32 + ctx.r4.u32, ctx.r11.u16);
	// bge cr6,0x823b0c7c
	if (!ctx.cr6.lt) goto loc_823B0C7C;
	// li r11,-32768
	ctx.r11.s64 = -32768;
	// b 0x823b0c8c
	goto loc_823B0C8C;
loc_823B0C7C:
	// cmpwi cr6,r5,32767
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 32767, ctx.xer);
	// li r11,32767
	ctx.r11.s64 = 32767;
	// bgt cr6,0x823b0c8c
	if (ctx.cr6.gt) goto loc_823B0C8C;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
loc_823B0C8C:
	// cmpwi cr6,r3,-32768
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -32768, ctx.xer);
	// sthx r11,r24,r4
	REX_STORE_U16(r24.u32 + ctx.r4.u32, ctx.r11.u16);
	// bge cr6,0x823b0ca0
	if (!ctx.cr6.lt) goto loc_823B0CA0;
	// li r11,-32768
	ctx.r11.s64 = -32768;
	// b 0x823b0cb0
	goto loc_823B0CB0;
loc_823B0CA0:
	// cmpwi cr6,r3,32767
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32767, ctx.xer);
	// li r11,32767
	ctx.r11.s64 = 32767;
	// bgt cr6,0x823b0cb0
	if (ctx.cr6.gt) goto loc_823B0CB0;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
loc_823B0CB0:
	// sthx r11,r28,r4
	REX_STORE_U16(r28.u32 + ctx.r4.u32, ctx.r11.u16);
	// add r10,r27,r10
	ctx.r10.u64 = r27.u64 + ctx.r10.u64;
	// add r4,r26,r4
	ctx.r4.u64 = r26.u64 + ctx.r4.u64;
	// bdnz 0x823b0bd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B0BD0;
loc_823B0CC0:
	// clrlwi r11,r7,30
	ctx.r11.u64 = ctx.r7.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b11f0
	if (ctx.cr6.eq) goto loc_823B11F0;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r8,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r8.u64;
loc_823B0CDC:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f11.u64);
	// lwz r11,-116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x823b0d00
	if (!ctx.cr6.lt) goto loc_823B0D00;
	// li r11,-32768
	ctx.r11.s64 = -32768;
	// b 0x823b0d14
	goto loc_823B0D14;
loc_823B0D00:
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x823b0d10
	if (!ctx.cr6.gt) goto loc_823B0D10;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x823b0d14
	goto loc_823B0D14;
loc_823B0D10:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_823B0D14:
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// sthux r11,r9,r8
	ea = ctx.r9.u32 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x823b0cdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B0CDC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1ce4
	return;
loc_823B0D28:
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,127
	ctx.r5.s64 = 8323072;
	// lis r3,-128
	ctx.r3.s64 = -8388608;
	// ori r31,r5,65535
	r31.u64 = ctx.r5.u64 | 65535;
	// li r30,0
	r30.s64 = 0;
	// lfs f0,22428(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 22428);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// blt cr6,0x823b0e94
	if (ctx.cr6.lt) goto loc_823B0E94;
	// addi r6,r7,-4
	ctx.r6.s64 = ctx.r7.s64 + -4;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r6,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r6,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_823B0D6C:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f11.u64);
	// lwz r6,-116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x823b0d90
	if (!ctx.cr6.lt) goto loc_823B0D90;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x823b0d9c
	goto loc_823B0D9C;
loc_823B0D90:
	// cmpw cr6,r6,r31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r31.s32, ctx.xer);
	// ble cr6,0x823b0d9c
	if (!ctx.cr6.gt) goto loc_823B0D9C;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_823B0D9C:
	// srawi r29,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	r29.s64 = ctx.r6.s32 >> 8;
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// srawi r28,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	r28.s64 = ctx.r6.s32 >> 16;
	// stb r29,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, r29.u8);
	// add r6,r5,r11
	ctx.r6.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stb r28,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, r28.u8);
	// lfsux f13,r10,r4
	ctx.fpscr.disableFlushMode();
	ea = ctx.r10.u32 + ctx.r4.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f11.u64);
	// lwz r11,-116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x823b0dd8
	if (!ctx.cr6.lt) goto loc_823B0DD8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x823b0de4
	goto loc_823B0DE4;
loc_823B0DD8:
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// ble cr6,0x823b0de4
	if (!ctx.cr6.gt) goto loc_823B0DE4;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_823B0DE4:
	// srawi r29,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	r29.s64 = ctx.r11.s32 >> 8;
	// stb r11,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// srawi r28,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	r28.s64 = ctx.r11.s32 >> 16;
	// stb r29,1(r6)
	REX_STORE_U8(ctx.r6.u32 + 1, r29.u8);
	// stb r28,2(r6)
	REX_STORE_U8(ctx.r6.u32 + 2, r28.u8);
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lfsux f13,r10,r4
	ctx.fpscr.disableFlushMode();
	ea = ctx.r10.u32 + ctx.r4.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f11.u64);
	// lwz r11,-116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x823b0e20
	if (!ctx.cr6.lt) goto loc_823B0E20;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x823b0e2c
	goto loc_823B0E2C;
loc_823B0E20:
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// ble cr6,0x823b0e2c
	if (!ctx.cr6.gt) goto loc_823B0E2C;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_823B0E2C:
	// srawi r29,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	r29.s64 = ctx.r11.s32 >> 8;
	// stb r11,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// srawi r28,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	r28.s64 = ctx.r11.s32 >> 16;
	// stb r29,1(r6)
	REX_STORE_U8(ctx.r6.u32 + 1, r29.u8);
	// stb r28,2(r6)
	REX_STORE_U8(ctx.r6.u32 + 2, r28.u8);
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lfsux f13,r10,r4
	ctx.fpscr.disableFlushMode();
	ea = ctx.r10.u32 + ctx.r4.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f11.u64);
	// lwz r11,-116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x823b0e68
	if (!ctx.cr6.lt) goto loc_823B0E68;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x823b0e74
	goto loc_823B0E74;
loc_823B0E68:
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// ble cr6,0x823b0e74
	if (!ctx.cr6.gt) goto loc_823B0E74;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_823B0E74:
	// srawi r29,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	r29.s64 = ctx.r11.s32 >> 8;
	// stb r11,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// srawi r28,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	r28.s64 = ctx.r11.s32 >> 16;
	// stb r29,1(r6)
	REX_STORE_U8(ctx.r6.u32 + 1, r29.u8);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stb r28,2(r6)
	REX_STORE_U8(ctx.r6.u32 + 2, r28.u8);
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x823b0d6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B0D6C;
loc_823B0E94:
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x823b11f0
	if (!ctx.cr6.lt) goto loc_823B11F0;
	// subf r5,r30,r7
	ctx.r5.u64 = ctx.r7.u64 - r30.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_823B0EB0:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f11.u64);
	// lwz r9,-116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x823b0ed4
	if (!ctx.cr6.lt) goto loc_823B0ED4;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x823b0ee0
	goto loc_823B0EE0;
loc_823B0ED4:
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r31.s32, ctx.xer);
	// ble cr6,0x823b0ee0
	if (!ctx.cr6.gt) goto loc_823B0EE0;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_823B0EE0:
	// srawi r7,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 8;
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// srawi r5,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 16;
	// stb r7,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// stb r5,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r5.u8);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x823b0eb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B0EB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1ce4
	return;
loc_823B0F08:
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// ori r31,r3,65535
	r31.u64 = ctx.r3.u64 | 65535;
	// lfs f13,22424(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 22424);
	ctx.f13.f64 = double(temp.f32);
	// ori r30,r4,1
	r30.u64 = ctx.r4.u64 | 1;
	// lfs f11,20000(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 20000);
	ctx.f11.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fmuls f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x823b104c
	if (ctx.cr6.lt) goto loc_823B104C;
	// addi r6,r7,-4
	ctx.r6.s64 = ctx.r7.s64 + -4;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_823B0F54:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823b0f6c
	if (!ctx.cr6.lt) goto loc_823B0F6C;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// b 0x823b0f88
	goto loc_823B0F88;
loc_823B0F6C:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x823b0f7c
	if (!ctx.cr6.gt) goto loc_823B0F7C;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// b 0x823b0f88
	goto loc_823B0F88;
loc_823B0F7C:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f0.u64);
	// lwz r6,-116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
loc_823B0F88:
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lfsux f0,r10,r4
	ctx.fpscr.disableFlushMode();
	ea = ctx.r10.u32 + ctx.r4.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823b0fa8
	if (!ctx.cr6.lt) goto loc_823B0FA8;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// b 0x823b0fc4
	goto loc_823B0FC4;
loc_823B0FA8:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x823b0fb8
	if (!ctx.cr6.gt) goto loc_823B0FB8;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// b 0x823b0fc4
	goto loc_823B0FC4;
loc_823B0FB8:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f0.u64);
	// lwz r6,-116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
loc_823B0FC4:
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lfsux f0,r10,r4
	ctx.fpscr.disableFlushMode();
	ea = ctx.r10.u32 + ctx.r4.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823b0fe4
	if (!ctx.cr6.lt) goto loc_823B0FE4;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// b 0x823b1000
	goto loc_823B1000;
loc_823B0FE4:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x823b0ff4
	if (!ctx.cr6.gt) goto loc_823B0FF4;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// b 0x823b1000
	goto loc_823B1000;
loc_823B0FF4:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f0.u64);
	// lwz r6,-116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
loc_823B1000:
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lfsux f0,r10,r4
	ctx.fpscr.disableFlushMode();
	ea = ctx.r10.u32 + ctx.r4.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823b1020
	if (!ctx.cr6.lt) goto loc_823B1020;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// b 0x823b103c
	goto loc_823B103C;
loc_823B1020:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x823b1030
	if (!ctx.cr6.gt) goto loc_823B1030;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// b 0x823b103c
	goto loc_823B103C;
loc_823B1030:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f0.u64);
	// lwz r6,-116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
loc_823B103C:
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// bdnz 0x823b0f54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B0F54;
loc_823B104C:
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x823b11f0
	if (!ctx.cr6.lt) goto loc_823B11F0;
	// subf r6,r3,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r3.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r8,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r8.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_823B1068:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823b1080
	if (!ctx.cr6.lt) goto loc_823B1080;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// b 0x823b109c
	goto loc_823B109C;
loc_823B1080:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x823b1090
	if (!ctx.cr6.gt) goto loc_823B1090;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x823b109c
	goto loc_823B109C;
loc_823B1090:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f0.u64);
	// lwz r11,-116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
loc_823B109C:
	// stwux r11,r9,r8
	ea = ctx.r9.u32 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// bdnz 0x823b1068
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B1068;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1ce4
	return;
loc_823B10B0:
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// lfs f12,3704(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 3704);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,3788(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 3788);
	ctx.f13.f64 = double(temp.f32);
	// blt cr6,0x823b11a4
	if (ctx.cr6.lt) goto loc_823B11A4;
	// addi r6,r7,-4
	ctx.r6.s64 = ctx.r7.s64 + -4;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_823B10EC:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823b1104
	if (!ctx.cr6.lt) goto loc_823B1104;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x823b1110
	goto loc_823B1110;
loc_823B1104:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x823b1110
	if (!ctx.cr6.gt) goto loc_823B1110;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_823B1110:
	// stfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lfsux f0,r10,r6
	ea = ctx.r10.u32 + ctx.r6.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823b1130
	if (!ctx.cr6.lt) goto loc_823B1130;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x823b113c
	goto loc_823B113C;
loc_823B1130:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x823b113c
	if (!ctx.cr6.gt) goto loc_823B113C;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_823B113C:
	// stfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lfsux f0,r10,r6
	ea = ctx.r10.u32 + ctx.r6.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823b115c
	if (!ctx.cr6.lt) goto loc_823B115C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x823b1168
	goto loc_823B1168;
loc_823B115C:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x823b1168
	if (!ctx.cr6.gt) goto loc_823B1168;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_823B1168:
	// stfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lfsux f0,r10,r6
	ea = ctx.r10.u32 + ctx.r6.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823b1188
	if (!ctx.cr6.lt) goto loc_823B1188;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x823b1194
	goto loc_823B1194;
loc_823B1188:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x823b1194
	if (!ctx.cr6.gt) goto loc_823B1194;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_823B1194:
	// stfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// bdnz 0x823b10ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B10EC;
loc_823B11A4:
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x823b11f0
	if (!ctx.cr6.lt) goto loc_823B11F0;
	// subf r7,r3,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r3.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r8,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r8.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_823B11C0:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823b11d8
	if (!ctx.cr6.lt) goto loc_823B11D8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x823b11e4
	goto loc_823B11E4;
loc_823B11D8:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x823b11e4
	if (!ctx.cr6.gt) goto loc_823B11E4;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_823B11E4:
	// stfsux f0,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	ea = ctx.r11.u32 + ctx.r8.u32;
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bdnz 0x823b11c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B11C0;
loc_823B11F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_82437390) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82437398;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824373b8
	if (ctx.cr6.eq) goto loc_824373B8;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_824373B8:
	// lwz r8,244(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824373c8
	if (ctx.cr6.eq) goto loc_824373C8;
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
loc_824373C8:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x824373dc
	if (!ctx.cr6.eq) goto loc_824373DC;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x82437408
	goto loc_82437408;
loc_824373DC:
	// lwz r29,252(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// bl 0x82436430
	ctx.lr = 0x82437408;
	sub_82436430(ctx, base);
loc_82437408:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82438008) {
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
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// rlwinm. r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82438040
	if (ctx.cr0.eq) goto loc_82438040;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r11,r6,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r6.u64;
loc_82438028:
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r9,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82438028
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82438028;
loc_82438040:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x822c9160
	ctx.lr = 0x82438048;
	sub_822C9160(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8243B0E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8243B0E8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// not r31,r5
	r31.u64 = ~ctx.r5.u64;
	// b 0x8243b108
	goto loc_8243B108;
loc_8243B0FC:
	// lwz r31,36(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8243b12c
	if (ctx.cr6.eq) goto loc_8243B12C;
loc_8243B108:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243a060
	ctx.lr = 0x8243B120;
	sub_8243A060(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8243b0fc
	if (!ctx.cr0.lt) goto loc_8243B0FC;
	// b 0x8243b130
	goto loc_8243B130;
loc_8243B12C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8243B130:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8243CF48) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,202
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 202, ctx.xer);
	// bne cr6,0x8243cfa0
	if (!ctx.cr6.eq) goto loc_8243CFA0;
	// bl 0x824c1b38
	ctx.lr = 0x8243CF6C;
	sub_824C1B38(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8243cf98
	if (ctx.cr6.eq) goto loc_8243CF98;
	// li r11,207
	ctx.r11.s64 = 207;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
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
loc_8243CF98:
	// li r11,203
	ctx.r11.s64 = 203;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_8243CFA0:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,203
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 203, ctx.xer);
	// bne cr6,0x8243d06c
	if (!ctx.cr6.eq) goto loc_8243D06C;
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 440);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8243d060
	if (ctx.cr6.eq) goto loc_8243D060;
loc_8243CFBC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243cfd8
	if (ctx.cr6.eq) goto loc_8243CFD8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243CFD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243CFD8:
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 440);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8243CFEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8243d048
	if (ctx.cr6.eq) goto loc_8243D048;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8243d060
	if (ctx.cr6.eq) goto loc_8243D060;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243cfbc
	if (ctx.cr6.eq) goto loc_8243CFBC;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8243d018
	if (ctx.cr6.eq) goto loc_8243D018;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8243cfbc
	if (!ctx.cr6.eq) goto loc_8243CFBC;
loc_8243D018:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8243cfbc
	if (ctx.cr6.lt) goto loc_8243CFBC;
	// lwz r10,324(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 324);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x8243cfbc
	goto loc_8243CFBC;
loc_8243D048:
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_8243D060:
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// stw r11,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r11.u32);
	// b 0x8243d0a0
	goto loc_8243D0A0;
loc_8243D06C:
	// cmpwi cr6,r11,204
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 204, ctx.xer);
	// beq cr6,0x8243d0a0
	if (ctx.cr6.eq) goto loc_8243D0A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r8,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8243D0A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243D0A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243cd90
	ctx.lr = 0x8243D0A8;
	sub_8243CD90(ctx, base);
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

DEFINE_REX_FUNC(sub_824447D0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x824447e0
	if (!ctx.cr6.eq) goto loc_824447E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_824447E0:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82444D78) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r10,r10,-8068
	ctx.r10.s64 = ctx.r10.s64 + -8068;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// ld r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ld r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// ld r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 16);
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// ld r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 24);
	// std r11,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82445EA0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82448598
	ctx.lr = 0x82445EBC;
	sub_82448598(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82444608
	ctx.lr = 0x82445ECC;
	sub_82444608(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82445f0c
	if (ctx.cr0.eq) goto loc_82445F0C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r10,-7984
	ctx.r10.s64 = ctx.r10.s64 + -7984;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// b 0x82445f10
	goto loc_82445F10;
loc_82445F0C:
	// li r31,0
	r31.s64 = 0;
loc_82445F10:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82445f20
	if (!ctx.cr6.eq) goto loc_82445F20;
loc_82445F18:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82445fb0
	goto loc_82445FB0;
loc_82445F20:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82445f54
	if (ctx.cr6.eq) goto loc_82445F54;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82445F48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82445f18
	if (ctx.cr0.eq) goto loc_82445F18;
loc_82445F54:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82445f80
	if (ctx.cr6.eq) goto loc_82445F80;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82445F74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82445f18
	if (ctx.cr0.eq) goto loc_82445F18;
loc_82445F80:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82445fac
	if (ctx.cr6.eq) goto loc_82445FAC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82445FA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82445f18
	if (ctx.cr0.eq) goto loc_82445F18;
loc_82445FAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82445FB0:
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

DEFINE_REX_FUNC(sub_8244A7A8) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r7,r3,16
	ctx.r7.s64 = ctx.r3.s64 + 16;
	// stb r30,16(r11)
	REX_STORE_U8(ctx.r11.u32 + 16, r30.u8);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,28576
	ctx.r6.s64 = ctx.r11.s64 + 28576;
	// beq cr6,0x8244a7fc
	if (ctx.cr6.eq) goto loc_8244A7FC;
	// li r5,7101
	ctx.r5.s64 = 7101;
	// bl 0x8241a4f0
	ctx.lr = 0x8244A7F8;
	sub_8241A4F0(ctx, base);
	// b 0x8244a804
	goto loc_8244A804;
loc_8244A7FC:
	// li r5,7102
	ctx.r5.s64 = 7102;
	// bl 0x8241a718
	ctx.lr = 0x8244A804;
	sub_8241A718(ctx, base);
loc_8244A804:
	// sth r30,8(r31)
	REX_STORE_U16(r31.u32 + 8, r30.u16);
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

DEFINE_REX_FUNC(sub_82450110) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82450118;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,1
	r31.s64 = 1;
	// li r29,0
	r29.s64 = 0;
loc_82450128:
	// lwz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82450148
	if (ctx.cr6.eq) goto loc_82450148;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x82449b28
	ctx.lr = 0x82450140;
	sub_82449B28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82450210
	if (ctx.cr0.lt) goto loc_82450210;
loc_82450148:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
	// stw r31,124(r30)
	REX_STORE_U32(r30.u32 + 124, r31.u32);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x824501dc
	if (ctx.cr6.eq) goto loc_824501DC;
	// lbz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 8);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x824501b4
	if (ctx.cr6.lt) goto loc_824501B4;
	// beq cr6,0x82450188
	if (ctx.cr6.eq) goto loc_82450188;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x824501dc
	if (!ctx.cr6.lt) goto loc_824501DC;
loc_82450174:
	// stb r29,8(r30)
	REX_STORE_U8(r30.u32 + 8, r29.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x82415778
	ctx.lr = 0x82450184;
	sub_82415778(ctx, base);
	// b 0x824501dc
	goto loc_824501DC;
loc_82450188:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82450174
	if (!ctx.cr6.eq) goto loc_82450174;
	// lbz r11,25(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 25);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82450174
	if (!ctx.cr0.eq) goto loc_82450174;
	// lbz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 24);
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// bne cr6,0x82450174
	if (!ctx.cr6.eq) goto loc_82450174;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,8(r30)
	REX_STORE_U8(r30.u32 + 8, ctx.r11.u8);
	// b 0x824501dc
	goto loc_824501DC;
loc_824501B4:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x824501dc
	if (!ctx.cr6.eq) goto loc_824501DC;
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 24);
	// bl 0x82449a10
	ctx.lr = 0x824501C4;
	sub_82449A10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824501dc
	if (ctx.cr0.eq) goto loc_824501DC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x82415778
	ctx.lr = 0x824501D8;
	sub_82415778(ctx, base);
	// stb r31,8(r30)
	REX_STORE_U8(r30.u32 + 8, r31.u8);
loc_824501DC:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x82450398
	if (ctx.cr6.gt) goto loc_82450398;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,1344
	ctx.r12.s64 = ctx.r12.s64 + 1344;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32187
	ctx.r12.s64 = -2109407232;
	// nop 
	// addi r12,r12,296
	ctx.r12.s64 = ctx.r12.s64 + 296;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82450398;
	case 1:
		goto loc_82450220;
	case 2:
		goto loc_82450234;
	case 3:
		goto loc_82450234;
	case 4:
		goto loc_82450234;
	case 5:
		goto loc_8245023C;
	case 6:
		goto loc_8245023C;
	case 7:
		goto loc_8245023C;
	case 8:
		goto loc_8245023C;
	case 9:
		goto loc_82450244;
	case 10:
		goto loc_82450398;
	case 11:
		goto loc_82450398;
	case 12:
		goto loc_82450128;
	case 13:
		goto loc_82450218;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82450210:
	// stw r31,52(r30)
	REX_STORE_U32(r30.u32 + 52, r31.u32);
	// stw r31,56(r30)
	REX_STORE_U32(r30.u32 + 56, r31.u32);
loc_82450218:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8245039c
	goto loc_8245039C;
loc_82450220:
	// lbz r11,25(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 25);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82450398
	if (!ctx.cr0.eq) goto loc_82450398;
	// lbz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + 24);
	// b 0x8245039c
	goto loc_8245039C;
loc_82450234:
	// li r3,278
	ctx.r3.s64 = 278;
	// b 0x8245039c
	goto loc_8245039C;
loc_8245023C:
	// li r3,279
	ctx.r3.s64 = 279;
	// b 0x8245039c
	goto loc_8245039C;
loc_82450244:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r8,24(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 24);
	// addi r10,r11,-26520
	ctx.r10.s64 = ctx.r11.s64 + -26520;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82450254:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x82450278
	if (ctx.cr0.eq) goto loc_82450278;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82450254
	if (ctx.cr6.eq) goto loc_82450254;
loc_82450278:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82450288
	if (!ctx.cr0.eq) goto loc_82450288;
	// li r3,257
	ctx.r3.s64 = 257;
	// b 0x8245039c
	goto loc_8245039C;
loc_82450288:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,19332
	ctx.r10.s64 = ctx.r10.s64 + 19332;
loc_82450294:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x824502b8
	if (ctx.cr0.eq) goto loc_824502B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82450294
	if (ctx.cr6.eq) goto loc_82450294;
loc_824502B8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824502c8
	if (!ctx.cr0.eq) goto loc_824502C8;
	// li r3,281
	ctx.r3.s64 = 281;
	// b 0x8245039c
	goto loc_8245039C;
loc_824502C8:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,19324
	ctx.r10.s64 = ctx.r10.s64 + 19324;
loc_824502D4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x824502f8
	if (ctx.cr0.eq) goto loc_824502F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824502d4
	if (ctx.cr6.eq) goto loc_824502D4;
loc_824502F8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82450308
	if (!ctx.cr0.eq) goto loc_82450308;
	// li r3,282
	ctx.r3.s64 = 282;
	// b 0x8245039c
	goto loc_8245039C;
loc_82450308:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,19120
	ctx.r10.s64 = ctx.r10.s64 + 19120;
loc_82450314:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x82450338
	if (ctx.cr0.eq) goto loc_82450338;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82450314
	if (ctx.cr6.eq) goto loc_82450314;
loc_82450338:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82450348
	if (!ctx.cr0.eq) goto loc_82450348;
	// li r3,283
	ctx.r3.s64 = 283;
	// b 0x8245039c
	goto loc_8245039C;
loc_82450348:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,4216
	ctx.r10.s64 = ctx.r10.s64 + 4216;
loc_82450354:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82450378
	if (ctx.cr0.eq) goto loc_82450378;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82450354
	if (ctx.cr6.eq) goto loc_82450354;
loc_82450378:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne 0x82450390
	if (!ctx.cr0.eq) goto loc_82450390;
	// bl 0x8244e138
	ctx.lr = 0x8245038C;
	sub_8244E138(ctx, base);
	// b 0x8245039c
	goto loc_8245039C;
loc_82450390:
	// bl 0x8244bef8
	ctx.lr = 0x82450394;
	sub_8244BEF8(ctx, base);
	// b 0x8245039c
	goto loc_8245039C;
loc_82450398:
	// li r3,280
	ctx.r3.s64 = 280;
loc_8245039C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82465188) {
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
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r9,r11,12
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82465248
	if (ctx.cr0.eq) goto loc_82465248;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_824651C4:
	// lwzx r11,r8,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// lwzx r10,r7,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,4(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x824652c0
	if (!ctx.cr6.eq) goto loc_824652C0;
	// lwz r31,8(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,8(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x824652c0
	if (!ctx.cr6.eq) goto loc_824652C0;
	// lwz r31,12(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,12(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x824652c0
	if (!ctx.cr6.eq) goto loc_824652C0;
	// lwz r31,16(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r30,16(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x824652c0
	if (!ctx.cr6.eq) goto loc_824652C0;
	// lwz r10,60(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// lis r31,8
	r31.s64 = 524288;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x824652c0
	if (!ctx.cr6.eq) goto loc_824652C0;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824651c4
	if (ctx.cr6.lt) goto loc_824651C4;
loc_82465248:
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r8,7
	ctx.r8.s64 = 7;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// rlwimi r10,r8,28,0,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// beq cr6,0x824652a4
	if (ctx.cr6.eq) goto loc_824652A4;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824652a4
	if (ctx.cr0.eq) goto loc_824652A4;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r4,r3,r5
	ctx.r4.u64 = ctx.r3.u64 + ctx.r5.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824652A4;
	sub_826A1E70(ctx, base);
loc_824652A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824652A8:
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
loc_824652C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824652a8
	goto loc_824652A8;
}

DEFINE_REX_FUNC(sub_8246DD38) {
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
	// lwz r10,260(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8246ddac
	if (!ctx.cr6.gt) goto loc_8246DDAC;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
loc_8246DD6C:
	// lwz r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm. r6,r6,0,22,22
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x8246ddf8
	if (!ctx.cr0.eq) goto loc_8246DDF8;
	// lwz r6,260(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 260);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r6,4(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8246dd6c
	if (ctx.cr6.lt) goto loc_8246DD6C;
loc_8246DDAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,352(r31)
	REX_STORE_U32(r31.u32 + 352, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// lwz r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246d648
	ctx.lr = 0x8246DDD4;
	sub_8246D648(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8246dde4
	if (ctx.cr0.lt) goto loc_8246DDE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82461818
	ctx.lr = 0x8246DDE4;
	sub_82461818(ctx, base);
loc_8246DDE4:
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
loc_8246DDF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8246dde4
	goto loc_8246DDE4;
}

DEFINE_REX_FUNC(sub_82472E28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb4
	ctx.lr = 0x82472E30;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82472e50
	if (!ctx.cr6.eq) goto loc_82472E50;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x824730d0
	goto loc_824730D0;
loc_82472E50:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824730cc
	if (ctx.cr6.eq) goto loc_824730CC;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r11,r10
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_82472E78:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,4(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r8,r8,r28
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r28.s32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82472edc
	if (!ctx.cr6.eq) goto loc_82472EDC;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82472edc
	if (!ctx.cr6.eq) goto loc_82472EDC;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r10,12(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82472edc
	if (!ctx.cr6.eq) goto loc_82472EDC;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r10,16(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824730c0
	if (ctx.cr6.eq) goto loc_824730C0;
loc_82472EDC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824715b8
	ctx.lr = 0x82472EE8;
	sub_824715B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824730d0
	if (ctx.cr0.lt) goto loc_824730D0;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi r10,r10,21
	ctx.r10.u64 = ctx.r10.u32 & 0x7FF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// oris r29,r10,45056
	r29.u64 = ctx.r10.u64 | 2952790016;
	// ori r29,r29,4096
	r29.u64 = r29.u64 | 4096;
	// blt cr6,0x82472f40
	if (ctx.cr6.lt) goto loc_82472F40;
	// beq cr6,0x82472f3c
	if (ctx.cr6.eq) goto loc_82472F3C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82472f34
	if (ctx.cr6.lt) goto loc_82472F34;
	// bne cr6,0x82472f40
	if (!ctx.cr6.eq) goto loc_82472F40;
	// oris r29,r29,255
	r29.u64 = r29.u64 | 16711680;
	// b 0x82472f40
	goto loc_82472F40;
loc_82472F34:
	// oris r29,r29,170
	r29.u64 = r29.u64 | 11141120;
	// b 0x82472f40
	goto loc_82472F40;
loc_82472F3C:
	// oris r29,r29,85
	r29.u64 = r29.u64 | 5570560;
loc_82472F40:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82472f50
	if (!ctx.cr6.eq) goto loc_82472F50;
	// oris r29,r29,3328
	r29.u64 = r29.u64 | 218103808;
loc_82472F50:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,320(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 320);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x82472F88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824730d0
	if (ctx.cr0.lt) goto loc_824730D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,324(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 324);
	// lwz r5,12(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r4,16(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82472FB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824730d0
	if (ctx.cr0.lt) goto loc_824730D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,312(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82472FE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824730d0
	if (ctx.cr0.lt) goto loc_824730D0;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,328(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 328);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r8,r8,r28
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r28.s32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x82473028;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824730d0
	if (ctx.cr0.lt) goto loc_824730D0;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,332(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 332);
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r9,r5,r28
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(r28.s32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82473064;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824730d0
	if (ctx.cr0.lt) goto loc_824730D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247308C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824730d0
	if (ctx.cr0.lt) goto loc_824730D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,308(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824730A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824730d0
	if (ctx.cr0.lt) goto loc_824730D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82468dd8
	ctx.lr = 0x824730B8;
	sub_82468DD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824730d0
	if (ctx.cr0.lt) goto loc_824730D0;
loc_824730C0:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(r28.u32, 2, ctx.xer);
	// blt cr6,0x82472e78
	if (ctx.cr6.lt) goto loc_82472E78;
loc_824730CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824730D0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82488F28) {
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
	// bl 0x826a1ca8
	ctx.lr = 0x82488F30;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x82481098
	ctx.lr = 0x82488F3C;
	sub_82481098(ctx, base);
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824891ec
	if (!ctx.cr6.gt) goto loc_824891EC;
	// li r25,0
	r25.s64 = 0;
	// li r26,-1
	r26.s64 = -1;
loc_82488F54:
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24);
	// lwzx r29,r25,r11
	r29.u64 = REX_LOAD_U32(r25.u32 + ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm. r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824891d8
	if (ctx.cr0.eq) goto loc_824891D8;
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 4);
	// clrlwi r31,r11,12
	r31.u64 = ctx.r11.u32 & 0xFFFFF;
	// lis r8,20480
	ctx.r8.s64 = 1342177280;
	// divwu r28,r9,r31
	r28.u64 = uint32_t(r31.u32 ? ctx.r9.u32 / r31.u32 : 0);
	// twllei r31,0
	if (r31.s32 == 0 || r31.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82488fe8
	if (!ctx.cr6.eq) goto loc_82488FE8;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8247c608
	ctx.lr = 0x82488FA4;
	sub_8247C608(ctx, base);
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82489084
	if (ctx.cr6.eq) goto loc_82489084;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_82488FB8:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82488fb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82488FB8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a22f8
	ctx.lr = 0x82488FE4;
	sub_826A22F8(ctx, base);
	// b 0x82489084
	goto loc_82489084;
loc_82488FE8:
	// rlwinm r11,r11,0,0,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82489084
	if (ctx.cr6.lt) goto loc_82489084;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82489084
	if (ctx.cr6.gt) goto loc_82489084;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r4,16(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8247c608
	ctx.lr = 0x8248901C;
	sub_8247C608(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82489084
	if (ctx.cr6.eq) goto loc_82489084;
loc_82489028:
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(r30.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x82489078
	if (ctx.cr6.eq) goto loc_82489078;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_8248904C:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8248904c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8248904C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a22f8
	ctx.lr = 0x82489078;
	sub_826A22F8(ctx, base);
loc_82489078:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// blt cr6,0x82489028
	if (ctx.cr6.lt) goto loc_82489028;
loc_82489084:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// rlwinm r11,r11,0,0,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824891d8
	if (!ctx.cr6.eq) goto loc_824891D8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82477530
	ctx.lr = 0x824890A0;
	sub_82477530(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824891d8
	if (ctx.cr0.eq) goto loc_824891D8;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 20);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r30,r11,r9
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// beq cr6,0x82489140
	if (ctx.cr6.eq) goto loc_82489140;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_824890F0:
	// lwzx r8,r7,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r8,72(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 72);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8248910c
	if (!ctx.cr6.lt) goto loc_8248910C;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_8248910C:
	// lwzx r8,r11,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r8,72(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 72);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82489128
	if (!ctx.cr6.lt) goto loc_82489128;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
loc_82489128:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x824890f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824890F0;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x824891d8
	if (ctx.cr6.lt) goto loc_824891D8;
	// bne cr6,0x824891a4
	if (!ctx.cr6.eq) goto loc_824891A4;
loc_82489140:
	// lwz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r6,16(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 16);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwzx r6,r9,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// lwz r5,4(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r6,4(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x824891d8
	if (ctx.cr6.lt) goto loc_824891D8;
	// lwz r6,16(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 16);
	// lwzx r9,r6,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwzx r11,r6,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824891a4
	if (!ctx.cr6.eq) goto loc_824891A4;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x824891d8
	if (ctx.cr6.lt) goto loc_824891D8;
	// bne cr6,0x824891a4
	if (!ctx.cr6.eq) goto loc_824891A4;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824891d8
	if (ctx.cr6.lt) goto loc_824891D8;
loc_824891A4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824891d8
	if (ctx.cr6.eq) goto loc_824891D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_824891B4:
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stwx r8,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 8);
	// stwx r7,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x824891b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824891B4;
loc_824891D8:
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82488f54
	if (ctx.cr6.lt) goto loc_82488F54;
loc_824891EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_824A2E40) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824A2E48;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r28,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x824a2e88
	goto loc_824A2E88;
loc_824A2E68:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x824a2e94
	if (ctx.cr6.eq) goto loc_824A2E94;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x824a2e94
	if (ctx.cr6.eq) goto loc_824A2E94;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x824a2e94
	if (ctx.cr6.eq) goto loc_824A2E94;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
loc_824A2E88:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a2e68
	if (!ctx.cr6.eq) goto loc_824A2E68;
	// b 0x824a2e98
	goto loc_824A2E98;
loc_824A2E94:
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
loc_824A2E98:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824a2f00
	if (!ctx.cr0.eq) goto loc_824A2F00;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x824a2ec4
	if (ctx.cr6.eq) goto loc_824A2EC4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,3064
	ctx.r5.s64 = 3064;
	// addi r6,r11,-6148
	ctx.r6.s64 = ctx.r11.s64 + -6148;
	// addi r4,r29,40
	ctx.r4.s64 = r29.s64 + 40;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82494d48
	ctx.lr = 0x824A2EC0;
	sub_82494D48(ctx, base);
	// b 0x824a3010
	goto loc_824A3010;
loc_824A2EC4:
	// stw r28,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// lis r12,26
	ctx.r12.s64 = 1703936;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// ori r12,r12,3
	ctx.r12.u64 = ctx.r12.u64 | 3;
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r7,r11,11768
	ctx.r7.s64 = ctx.r11.s64 + 11768;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// and r4,r10,r12
	ctx.r4.u64 = ctx.r10.u64 & ctx.r12.u64;
	// bl 0x82453db8
	ctx.lr = 0x824A2EF0;
	sub_82453DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824a3010
	if (ctx.cr0.lt) goto loc_824A3010;
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x824a3048
	goto loc_824A3048;
loc_824A2F00:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241c128
	ctx.lr = 0x824A2F0C;
	sub_8241C128(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x824a2fb4
	if (!ctx.cr6.eq) goto loc_824A2FB4;
	// lis r12,26
	ctx.r12.s64 = 1703936;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 4);
	// ori r12,r12,3
	ctx.r12.u64 = ctx.r12.u64 | 3;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// and r5,r11,r12
	ctx.r5.u64 = ctx.r11.u64 & ctx.r12.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82421188
	ctx.lr = 0x824A2F3C;
	sub_82421188(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824a3008
	if (ctx.cr0.lt) goto loc_824A3008;
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A2F58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82444708
	ctx.lr = 0x824A2F64;
	sub_82444708(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x824a3008
	if (ctx.cr0.eq) goto loc_824A3008;
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A2F80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824A2F90;
	sub_826A1E70(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a2fd4
	if (ctx.cr6.eq) goto loc_824A2FD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A2FAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// b 0x824a2fd4
	goto loc_824A2FD4;
loc_824A2FB4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,3201
	ctx.r5.s64 = 3201;
	// addi r6,r11,-6196
	ctx.r6.s64 = ctx.r11.s64 + -6196;
	// addi r4,r29,40
	ctx.r4.s64 = r29.s64 + 40;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82494dc0
	ctx.lr = 0x824A2FCC;
	sub_82494DC0(ctx, base);
	// mr r31,r28
	r31.u64 = r28.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_824A2FD4:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82444750
	ctx.lr = 0x824A2FDC;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a2ffc
	if (ctx.cr0.eq) goto loc_824A2FFC;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r29,40
	ctx.r4.s64 = r29.s64 + 40;
	// bl 0x82447d48
	ctx.lr = 0x824A2FF4;
	sub_82447D48(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824a3000
	goto loc_824A3000;
loc_824A2FFC:
	// mr r31,r28
	r31.u64 = r28.u64;
loc_824A3000:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x824a303c
	if (!ctx.cr6.eq) goto loc_824A303C;
loc_824A3008:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241ee58
	ctx.lr = 0x824A3010;
	sub_8241EE58(ctx, base);
loc_824A3010:
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,72(r29)
	REX_STORE_U32(r29.u32 + 72, ctx.r11.u32);
	// beq cr6,0x824a3034
	if (ctx.cr6.eq) goto loc_824A3034;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A3034;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824A3034:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824a3048
	goto loc_824A3048;
loc_824A303C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241ee58
	ctx.lr = 0x824A3044;
	sub_8241EE58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824A3048:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824B2000) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1c9c
	ctx.lr = 0x824B2008;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824b21fc
	if (ctx.cr6.eq) goto loc_824B21FC;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// lis r21,29200
	r21.s64 = 1913651200;
loc_824B2020:
	// lwz r24,0(r22)
	r24.u64 = REX_LOAD_U32(r22.u32 + 0);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x824b21ec
	if (ctx.cr6.eq) goto loc_824B21EC;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824b21ec
	if (ctx.cr6.eq) goto loc_824B21EC;
	// rlwinm r11,r10,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// lis r9,24576
	ctx.r9.s64 = 1610612736;
	// clrlwi r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824b2138
	if (ctx.cr6.eq) goto loc_824B2138;
	// lis r9,24656
	ctx.r9.s64 = 1615855616;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824b2138
	if (ctx.cr6.eq) goto loc_824B2138;
	// lis r9,24736
	ctx.r9.s64 = 1621098496;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824b2138
	if (ctx.cr6.eq) goto loc_824B2138;
	// lis r9,24816
	ctx.r9.s64 = 1626341376;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824b2138
	if (ctx.cr6.eq) goto loc_824B2138;
	// lis r9,29408
	ctx.r9.s64 = 1927282688;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824b2138
	if (ctx.cr6.eq) goto loc_824B2138;
	// lis r9,24688
	ctx.r9.s64 = 1617952768;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824b2138
	if (ctx.cr6.eq) goto loc_824B2138;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r21.u32, ctx.xer);
	// beq cr6,0x824b2140
	if (ctx.cr6.eq) goto loc_824B2140;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824b21ec
	if (ctx.cr6.eq) goto loc_824B21EC;
	// lwz r28,4(r24)
	r28.u64 = REX_LOAD_U32(r24.u32 + 4);
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
loc_824B20A4:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824b2124
	if (ctx.cr6.eq) goto loc_824B2124;
	// lwz r31,8(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_824B20BC:
	// lwzx r11,r10,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824b20e0
	if (ctx.cr6.eq) goto loc_824B20E0;
	// lwz r26,20(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824b2114
	if (!ctx.cr6.eq) goto loc_824B2114;
loc_824B20E0:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824b2114
	if (ctx.cr6.eq) goto loc_824B2114;
	// cmplw cr6,r4,r23
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r23.u32, ctx.xer);
	// bge cr6,0x824b2114
	if (!ctx.cr6.lt) goto loc_824B2114;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824b2114
	if (ctx.cr6.eq) goto loc_824B2114;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// lis r26,4352
	r26.s64 = 285212672;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x824b2208
	if (!ctx.cr6.eq) goto loc_824B2208;
loc_824B2114:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// blt cr6,0x824b20bc
	if (ctx.cr6.lt) goto loc_824B20BC;
loc_824B2124:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r27,r8
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x824b20a4
	if (ctx.cr6.lt) goto loc_824B20A4;
	// b 0x824b21ec
	goto loc_824B21EC;
loc_824B2138:
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r21.u32, ctx.xer);
	// bne cr6,0x824b2148
	if (!ctx.cr6.eq) goto loc_824B2148;
loc_824B2140:
	// li r27,0
	r27.s64 = 0;
	// b 0x824b214c
	goto loc_824B214C;
loc_824B2148:
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
loc_824B214C:
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824b21ec
	if (ctx.cr6.eq) goto loc_824B21EC;
	// lwz r26,4(r24)
	r26.u64 = REX_LOAD_U32(r24.u32 + 4);
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
loc_824B2160:
	// mr r28,r27
	r28.u64 = r27.u64;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(r27.u32, r26.u32, ctx.xer);
	// bge cr6,0x824b21dc
	if (!ctx.cr6.lt) goto loc_824B21DC;
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,8(r24)
	r30.u64 = REX_LOAD_U32(r24.u32 + 8);
loc_824B2178:
	// lwzx r9,r10,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, ctx.xer);
	// bne cr6,0x824b21a8
	if (!ctx.cr6.eq) goto loc_824B21A8;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824b21a8
	if (ctx.cr6.eq) goto loc_824B21A8;
	// cmplw cr6,r4,r23
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r23.u32, ctx.xer);
	// bge cr6,0x824b21a8
	if (!ctx.cr6.lt) goto loc_824B21A8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824b2208
	if (!ctx.cr6.eq) goto loc_824B2208;
loc_824B21A8:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r9,60(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm. r9,r9,0,11,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1F0000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824b2210
	if (!ctx.cr0.eq) goto loc_824B2210;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x824b2210
	if (!ctx.cr6.eq) goto loc_824B2210;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(r28.u32, r26.u32, ctx.xer);
	// blt cr6,0x824b2178
	if (ctx.cr6.lt) goto loc_824B2178;
loc_824B21DC:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r25,r8
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x824b2160
	if (ctx.cr6.lt) goto loc_824B2160;
loc_824B21EC:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// cmplw cr6,r23,r6
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x824b2020
	if (ctx.cr6.lt) goto loc_824B2020;
loc_824B21FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824B2200:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
loc_824B2208:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824b2200
	goto loc_824B2200;
loc_824B2210:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,4806
	ctx.r5.s64 = 4806;
	// addi r6,r11,1152
	ctx.r6.s64 = ctx.r11.s64 + 1152;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82489c30
	ctx.lr = 0x824B2224;
	sub_82489C30(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824b2200
	goto loc_824B2200;
}

DEFINE_REX_FUNC(sub_824C1228) {
	REX_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824c12e8
	if (!ctx.cr6.eq) goto loc_824C12E8;
	// lwz r11,304(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 304);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824c12e8
	if (!ctx.cr6.eq) goto loc_824C12E8;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x824c12e8
	if (!ctx.cr6.eq) goto loc_824C12E8;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x824c12e8
	if (!ctx.cr6.eq) goto loc_824C12E8;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x824c12e8
	if (!ctx.cr6.eq) goto loc_824C12E8;
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x824c12e8
	if (!ctx.cr6.eq) goto loc_824C12E8;
	// lwz r11,220(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x824c12e8
	if (!ctx.cr6.eq) goto loc_824C12E8;
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x824c12e8
	if (!ctx.cr6.eq) goto loc_824C12E8;
	// lwz r10,176(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x824c12e8
	if (!ctx.cr6.eq) goto loc_824C12E8;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bgt cr6,0x824c12e8
	if (ctx.cr6.gt) goto loc_824C12E8;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x824c12e8
	if (!ctx.cr6.eq) goto loc_824C12E8;
	// lwz r10,180(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x824c12e8
	if (!ctx.cr6.eq) goto loc_824C12E8;
	// lwz r10,320(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x824c12e8
	if (!ctx.cr6.eq) goto loc_824C12E8;
	// lwz r9,120(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x824c12e8
	if (!ctx.cr6.eq) goto loc_824C12E8;
	// lwz r11,204(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_824C12E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C5070) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb4
	ctx.lr = 0x824C5078;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x82444750
	ctx.lr = 0x824C5088;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824c509c
	if (ctx.cr0.eq) goto loc_824C509C;
	// bl 0x824c4ed8
	ctx.lr = 0x824C5094;
	sub_824C4ED8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x824c50a0
	goto loc_824C50A0;
loc_824C509C:
	// li r30,0
	r30.s64 = 0;
loc_824C50A0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824c50b0
	if (!ctx.cr6.eq) goto loc_824C50B0;
loc_824C50A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824c51e8
	goto loc_824C51E8;
loc_824C50B0:
	// ld r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 16);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// addi r11,r30,16
	ctx.r11.s64 = r30.s64 + 16;
	// addi r10,r31,64
	ctx.r10.s64 = r31.s64 + 64;
	// addi r11,r30,52
	ctx.r11.s64 = r30.s64 + 52;
	// std r8,16(r30)
	REX_STORE_U64(r30.u32 + 16, ctx.r8.u64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// ld r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U64(r31.u32 + 24);
	// subf r8,r30,r31
	ctx.r8.u64 = r31.u64 - r30.u64;
	// std r7,24(r30)
	REX_STORE_U64(r30.u32 + 24, ctx.r7.u64);
	// ld r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 32);
	// std r9,32(r30)
	REX_STORE_U64(r30.u32 + 32, ctx.r9.u64);
	// ld r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 40);
	// std r9,40(r30)
	REX_STORE_U64(r30.u32 + 40, ctx.r9.u64);
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 48);
	// stw r9,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r9.u32);
loc_824C50F4:
	// lwzx r9,r8,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,-4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824c50f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824C50F4;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// li r28,0
	r28.s64 = 0;
	// addi r29,r31,84
	r29.s64 = r31.s64 + 84;
	// subf r27,r31,r30
	r27.u64 = r30.u64 - r31.u64;
	// stw r11,76(r30)
	REX_STORE_U32(r30.u32 + 76, ctx.r11.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// stw r11,116(r30)
	REX_STORE_U32(r30.u32 + 116, ctx.r11.u32);
loc_824C5130:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c515c
	if (ctx.cr6.eq) goto loc_824C515C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824C5150;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stwx r3,r27,r29
	REX_STORE_U32(r27.u32 + r29.u32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824c50a8
	if (ctx.cr0.eq) goto loc_824C50A8;
loc_824C515C:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(r28.u32, 2, ctx.xer);
	// blt cr6,0x824c5130
	if (ctx.cr6.lt) goto loc_824C5130;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c5198
	if (ctx.cr6.eq) goto loc_824C5198;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824C518C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,92(r30)
	REX_STORE_U32(r30.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824c50a8
	if (ctx.cr0.eq) goto loc_824C50A8;
loc_824C5198:
	// li r28,0
	r28.s64 = 0;
	// addi r29,r31,96
	r29.s64 = r31.s64 + 96;
loc_824C51A0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c51cc
	if (ctx.cr6.eq) goto loc_824C51CC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824C51C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stwx r3,r29,r27
	REX_STORE_U32(r29.u32 + r27.u32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824c50a8
	if (ctx.cr0.eq) goto loc_824C50A8;
loc_824C51CC:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r28,4
	ctx.cr6.compare<uint32_t>(r28.u32, 4, ctx.xer);
	// blt cr6,0x824c51a0
	if (ctx.cr6.lt) goto loc_824C51A0;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r30)
	REX_STORE_U32(r30.u32 + 80, ctx.r11.u32);
loc_824C51E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824CB830) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca0
	ctx.lr = 0x824CB838;
	// lwz r11,460(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 460);
	// addic. r24,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	r24.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// lwz r26,112(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r9,328(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 328);
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r29,12(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r28,16(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r27,20(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// blt 0x824cb91c
	if (ctx.cr0.lt) goto loc_824CB91C;
	// rlwinm r31,r5,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r6,-4
	r25.s64 = ctx.r6.s64 + -4;
loc_824CB864:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// lwz r7,4(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r6,8(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r5,12(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwzu r10,4(r25)
	ea = 4 + r25.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	r25.u32 = ea;
	// lwzx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r7.u32);
	// lwzx r7,r6,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// lwzx r3,r31,r5
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + ctx.r5.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// beq cr6,0x824cb914
	if (ctx.cr6.eq) goto loc_824CB914;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r6,r11,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r5,r11,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
loc_824CB8A8:
	// lbzx r8,r5,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r8,r8,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lbzx r23,r6,r11
	r23.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// rotlwi r22,r7,2
	r22.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwzx r7,r8,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + r30.u32);
	// subf r7,r7,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r7.u64;
	// subf r7,r23,r7
	ctx.r7.u64 = ctx.r7.u64 - r23.u64;
	// lbz r7,255(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 255);
	// stb r7,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// lwzx r8,r8,r28
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + r28.u32);
	// lwzx r7,r22,r27
	ctx.r7.u64 = REX_LOAD_U32(r22.u32 + r27.u32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// srawi r7,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 16;
	// subf r8,r7,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r7.u64;
	// subf r7,r23,r8
	ctx.r7.u64 = ctx.r8.u64 - r23.u64;
	// lbz r8,255(r7)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + 255);
	// stb r8,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// lwzx r7,r22,r29
	ctx.r7.u64 = REX_LOAD_U32(r22.u32 + r29.u32);
	// subf r8,r7,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r7.u64;
	// subf r7,r23,r8
	ctx.r7.u64 = ctx.r8.u64 - r23.u64;
	// lbz r8,255(r7)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + 255);
	// stb r8,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r8.u8);
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x824cb8a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824CB8A8;
loc_824CB914:
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bge 0x824cb864
	if (!ctx.cr0.lt) goto loc_824CB864;
loc_824CB91C:
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_824D3868) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824D3870;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r4,24
	r31.s64 = ctx.r4.s64 + 24;
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
	// li r30,4
	r30.s64 = 4;
loc_824D3888:
	// lwz r11,-12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -12);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x824e3400
	ctx.lr = 0x824D38A4;
	sub_824E3400(ctx, base);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// lwzu r11,4(r31)
	ea = 4 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// stwu r11,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r29.u32 = ea;
	// bne 0x824d3888
	if (!ctx.cr0.eq) goto loc_824D3888;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lvrx128 v63,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v1,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824D5F98) {
	REX_FUNC_PROLOGUE();
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// clrlwi r10,r3,29
	ctx.r10.u64 = ctx.r3.u32 & 0x7;
	// rlwinm r9,r4,2,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x18;
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r5,31
	ctx.r9.s64 = ctx.r5.s64 + 31;
	// slw r6,r10,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r9,r4,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r8,r3,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// mullw r7,r10,r9
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// rlwinm r9,r6,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r10,r4,3,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x8;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r7,r11,7
	ctx.r7.s64 = ctx.r11.s64 + 7;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// rlwinm r7,r4,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// slw r9,r7,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r9,r6,28
	ctx.r9.u64 = ctx.r6.u32 & 0xF;
	// rlwinm r8,r4,4,23,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0x100;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r4,1,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFF0;
	// rlwinm r6,r10,0,0,22
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFE00;
	// add r5,r9,r3
	ctx.r5.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r9,r8,r6
	ctx.r9.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r7,r10,0,23,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1C0;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r5,3,24,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xC0;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// clrlwi r9,r10,26
	ctx.r9.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srw r3,r10,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D8FC0) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c84
	ctx.lr = 0x824D8FC8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// bl 0x824d7948
	ctx.lr = 0x824D8FE0;
	sub_824D7948(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r15,r10,21596
	r15.s64 = ctx.r10.s64 + 21596;
	// addi r17,r11,28488
	r17.s64 = ctx.r11.s64 + 28488;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D9000;
	sub_824EAC90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d8700
	ctx.lr = 0x824D9008;
	sub_824D8700(ctx, base);
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r30,0(r20)
	r30.u64 = REX_LOAD_U32(r20.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824d9178
	if (!ctx.cr6.lt) goto loc_824D9178;
	// lis r29,-32243
	r29.s64 = -2113077248;
	// lis r28,-32252
	r28.s64 = -2113667072;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r21,r29,-20920
	r21.s64 = r29.s64 + -20920;
	// addi r28,r28,21228
	r28.s64 = r28.s64 + 21228;
	// addi r19,r3,19324
	r19.s64 = ctx.r3.s64 + 19324;
	// addi r18,r4,19332
	r18.s64 = ctx.r4.s64 + 19332;
	// addi r27,r5,21584
	r27.s64 = ctx.r5.s64 + 21584;
	// addi r26,r6,21576
	r26.s64 = ctx.r6.s64 + 21576;
	// addi r25,r7,21564
	r25.s64 = ctx.r7.s64 + 21564;
	// addi r29,r8,21556
	r29.s64 = ctx.r8.s64 + 21556;
	// addi r24,r9,21544
	r24.s64 = ctx.r9.s64 + 21544;
	// addi r23,r10,21536
	r23.s64 = ctx.r10.s64 + 21536;
	// addi r22,r11,18184
	r22.s64 = ctx.r11.s64 + 18184;
loc_824D9078:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7948
	ctx.lr = 0x824D9080;
	sub_824D7948(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D9090;
	sub_824EAC90(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// rlwinm r11,r11,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r6,r11,r16
	ctx.r6.u64 = ctx.r11.u64 + r16.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D90AC;
	sub_824EAC90(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r6,r11,18,26,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// bl 0x824eac90
	ctx.lr = 0x824D90C4;
	sub_824EAC90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stb r11,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r11,30,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x7;
	// rlwinm r9,r11,27,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7;
	// rlwinm r8,r11,24,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7;
	// rlwinm r11,r11,21,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x7;
	// lbzx r10,r10,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + r29.u32);
	// lbzx r9,r9,r29
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + r29.u32);
	// lbzx r8,r8,r29
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + r29.u32);
	// lbzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r8,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// bl 0x824d7b08
	ctx.lr = 0x824D9110;
	sub_824D7B08(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r5,r11,9,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFF;
	// bl 0x826a0568
	ctx.lr = 0x824D9124;
	sub_826A0568(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7b08
	ctx.lr = 0x824D9134;
	sub_824D7B08(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824d9148
	if (!ctx.cr0.eq) goto loc_824D9148;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
loc_824D9148:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7b08
	ctx.lr = 0x824D9154;
	sub_824D7B08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d86b0
	ctx.lr = 0x824D915C;
	sub_824D86B0(ctx, base);
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 0);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824d9078
	if (ctx.cr6.lt) goto loc_824D9078;
loc_824D9178:
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d79a8
	ctx.lr = 0x824D9184;
	sub_824D79A8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_824E3928) {
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
	// bl 0x826a1ca4
	ctx.lr = 0x824E3930;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 31;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// xor r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 ^ ctx.r11.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// rlwinm r25,r5,16,16,31
	r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// subf r24,r11,r10
	r24.u64 = ctx.r10.u64 - ctx.r11.u64;
	// beq cr6,0x824e3aa4
	if (ctx.cr6.eq) goto loc_824E3AA4;
	// clrlwi. r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824e3968
	if (!ctx.cr0.eq) goto loc_824E3968;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x824e3aa4
	if (ctx.cr6.eq) goto loc_824E3AA4;
loc_824E3968:
	// subf r11,r29,r3
	ctx.r11.u64 = ctx.r3.u64 - r29.u64;
	// xor. r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x824e3984
	if (!ctx.cr0.lt) goto loc_824E3984;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// b 0x824e3998
	goto loc_824E3998;
loc_824E3984:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// neg r26,r6
	r26.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// add r31,r11,r3
	r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r28,r11,r29
	r28.u64 = ctx.r11.u64 + r29.u64;
loc_824E3998:
	// bl 0x823ed6a8
	ctx.lr = 0x824E399C;
	sub_823ED6A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824e39b0
	if (ctx.cr0.eq) goto loc_824E39B0;
	// rlwinm. r11,r3,0,21,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x600;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r27,1
	r27.s64 = 1;
	// beq 0x824e39b4
	if (ctx.cr0.eq) goto loc_824E39B4;
loc_824E39B0:
	// li r27,0
	r27.s64 = 0;
loc_824E39B4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ed6a8
	ctx.lr = 0x824E39BC;
	sub_823ED6A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824e39d0
	if (ctx.cr0.eq) goto loc_824E39D0;
	// rlwinm. r11,r3,0,21,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x600;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x824e39d4
	if (ctx.cr0.eq) goto loc_824E39D4;
loc_824E39D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824E39D4:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x824e3a7c
	if (ctx.cr6.eq) goto loc_824E3A7C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824e3a7c
	if (ctx.cr6.eq) goto loc_824E3A7C;
	// cmplwi cr6,r25,16
	ctx.cr6.compare<uint32_t>(r25.u32, 16, ctx.xer);
	// bgt cr6,0x824e3a7c
	if (ctx.cr6.gt) goto loc_824E3A7C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x824e3a7c
	if (ctx.cr6.eq) goto loc_824E3A7C;
	// addi r11,r25,-1
	ctx.r11.s64 = r25.s64 + -1;
	// and. r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 & r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824e3a7c
	if (!ctx.cr0.eq) goto loc_824E3A7C;
	// cmplw cr6,r24,r25
	ctx.cr6.compare<uint32_t>(r24.u32, r25.u32, ctx.xer);
	// bne cr6,0x824e3a7c
	if (!ctx.cr6.eq) goto loc_824E3A7C;
	// addi r11,r24,-1
	ctx.r11.s64 = r24.s64 + -1;
	// and. r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 & r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824e3a7c
	if (!ctx.cr0.eq) goto loc_824E3A7C;
	// and. r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824e3a7c
	if (!ctx.cr0.eq) goto loc_824E3A7C;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// bne cr6,0x824e3a3c
	if (!ctx.cr6.eq) goto loc_824E3A3C;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e36b0
	ctx.lr = 0x824E3A38;
	sub_824E36B0(ctx, base);
	// b 0x824e3aa4
	goto loc_824E3AA4;
loc_824E3A3C:
	// subf r11,r28,r31
	ctx.r11.u64 = r31.u64 - r28.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// blt cr6,0x824e3a7c
	if (ctx.cr6.lt) goto loc_824E3A7C;
	// xor r11,r28,r31
	ctx.r11.u64 = r28.u64 ^ r31.u64;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824e3a7c
	if (!ctx.cr0.eq) goto loc_824E3A7C;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e3408
	ctx.lr = 0x824E3A78;
	sub_824E3408(ctx, base);
	// b 0x824e3aa4
	goto loc_824E3AA4;
loc_824E3A7C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824e3aa4
	if (ctx.cr6.eq) goto loc_824E3AA4;
	// subf r29,r31,r28
	r29.u64 = r28.u64 - r31.u64;
loc_824E3A88:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// add r4,r29,r31
	ctx.r4.u64 = r29.u64 + r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e32a8
	ctx.lr = 0x824E3A98;
	sub_824E32A8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r31,r26,r31
	r31.u64 = r26.u64 + r31.u64;
	// bne 0x824e3a88
	if (!ctx.cr0.eq) goto loc_824E3A88;
loc_824E3AA4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_824EE4D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb4
	ctx.lr = 0x824EE4D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,22852
	r29.s64 = ctx.r11.s64 + 22852;
	// addi r28,r10,-26736
	r28.s64 = ctx.r10.s64 + -26736;
	// bne cr6,0x824ee518
	if (!ctx.cr6.eq) goto loc_824EE518;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-26412
	ctx.r5.s64 = ctx.r11.s64 + -26412;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,672
	ctx.r7.s64 = 672;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EE518;
	sub_824EA978(ctx, base);
loc_824EE518:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824ee52c
	if (!ctx.cr6.eq) goto loc_824EE52C;
	// li r30,0
	r30.s64 = 0;
	// b 0x824ee538
	goto loc_824EE538;
loc_824EE52C:
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824ee554
	if (!ctx.cr6.eq) goto loc_824EE554;
loc_824EE538:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-26368
	ctx.r5.s64 = ctx.r11.s64 + -26368;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,677
	ctx.r7.s64 = 677;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EE554;
	sub_824EA978(ctx, base);
loc_824EE554:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ee408
	ctx.lr = 0x824EE564;
	sub_824EE408(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824ee570
	if (!ctx.cr0.eq) goto loc_824EE570;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
loc_824EE570:
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824F0358) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824f039c
	if (!ctx.cr6.eq) goto loc_824F039C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-25912
	ctx.r6.s64 = ctx.r11.s64 + -25912;
	// addi r5,r10,-26852
	ctx.r5.s64 = ctx.r10.s64 + -26852;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,452
	ctx.r7.s64 = 452;
	// bl 0x824ea978
	ctx.lr = 0x824F039C;
	sub_824EA978(ctx, base);
loc_824F039C:
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
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

DEFINE_REX_FUNC(sub_824F19A0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,124(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824F2398) {
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
	// bl 0x826a1cb0
	ctx.lr = 0x824F23A0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,22852
	r28.s64 = ctx.r11.s64 + 22852;
	// addi r27,r10,-23840
	r27.s64 = ctx.r10.s64 + -23840;
	// bne cr6,0x824f23e0
	if (!ctx.cr6.eq) goto loc_824F23E0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-26968
	ctx.r5.s64 = ctx.r11.s64 + -26968;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,132
	ctx.r7.s64 = 132;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F23E0;
	sub_824EA978(ctx, base);
loc_824F23E0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x824f2404
	if (!ctx.cr6.eq) goto loc_824F2404;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-23860
	ctx.r5.s64 = ctx.r11.s64 + -23860;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,133
	ctx.r7.s64 = 133;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F2404;
	sub_824EA978(ctx, base);
loc_824F2404:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824f2528
	if (ctx.cr6.eq) goto loc_824F2528;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x824f2528
	if (ctx.cr6.eq) goto loc_824F2528;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82130e88
	ctx.lr = 0x824F241C;
	sub_82130E88(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824F2434;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x824f2528
	if (ctx.cr0.eq) goto loc_824F2528;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f2474
	if (!ctx.cr6.eq) goto loc_824F2474;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-23896
	ctx.r5.s64 = ctx.r11.s64 + -23896;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,169
	ctx.r7.s64 = 169;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F2474;
	sub_824EA978(ctx, base);
loc_824F2474:
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f249c
	if (!ctx.cr6.eq) goto loc_824F249C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-23936
	ctx.r5.s64 = ctx.r11.s64 + -23936;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,170
	ctx.r7.s64 = 170;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F249C;
	sub_824EA978(ctx, base);
loc_824F249C:
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f24c4
	if (!ctx.cr6.eq) goto loc_824F24C4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-23972
	ctx.r5.s64 = ctx.r11.s64 + -23972;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,171
	ctx.r7.s64 = 171;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F24C4;
	sub_824EA978(ctx, base);
loc_824F24C4:
	// lwz r11,28(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f24ec
	if (!ctx.cr6.eq) goto loc_824F24EC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-24012
	ctx.r5.s64 = ctx.r11.s64 + -24012;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,172
	ctx.r7.s64 = 172;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F24EC;
	sub_824EA978(ctx, base);
loc_824F24EC:
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824F24FC;
	sub_826A1E70(ctx, base);
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r5,24(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 24);
	// lwz r4,20(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r3,16(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 16);
	// bl 0x824ee118
	ctx.lr = 0x824F2510;
	sub_824EE118(ctx, base);
	// stw r3,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f19d0
	ctx.lr = 0x824F2520;
	sub_824F19D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x824f252c
	goto loc_824F252C;
loc_824F2528:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824F252C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82501C88) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82501a80
	ctx.lr = 0x82501CA4;
	sub_82501A80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82501cc4
	if (ctx.cr0.eq) goto loc_82501CC4;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82501cc4
	if (ctx.cr6.eq) goto loc_82501CC4;
	// stw r3,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82501cc8
	goto loc_82501CC8;
loc_82501CC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82501CC8:
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

DEFINE_REX_FUNC(sub_82503400) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,26
	ctx.r5.s64 = 26;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x824ff930
	ctx.lr = 0x82503428;
	sub_824FF930(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// stw r31,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// rlwinm r10,r10,0,19,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFE001FFF;
	// rlwimi r11,r30,13,7,18
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 13) & 0x1FFE000) | (ctx.r11.u64 & 0xFFFFFFFFFE001FFF);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_82505438) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82505440;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82505460
	if (!ctx.cr6.eq) goto loc_82505460;
	// bl 0x82505370
	ctx.lr = 0x82505460;
	sub_82505370(ctx, base);
loc_82505460:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// li r10,997
	ctx.r10.s64 = 997;
	// lwz r9,712(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 712);
	// divwu r10,r11,r10
	ctx.r10.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mulli r10,r10,997
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(997));
	// subf r29,r10,r11
	r29.u64 = ctx.r11.u64 - ctx.r10.u64;
	// bne cr6,0x82505490
	if (!ctx.cr6.eq) goto loc_82505490;
	// li r4,3988
	ctx.r4.s64 = 3988;
	// addi r3,r31,972
	ctx.r3.s64 = r31.s64 + 972;
	// bl 0x824f7c98
	ctx.lr = 0x8250548C;
	sub_824F7C98(ctx, base);
	// stw r3,712(r31)
	REX_STORE_U32(r31.u32 + 712, ctx.r3.u32);
loc_82505490:
	// lwz r11,712(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 712);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r11.u32);
	// lwz r11,712(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 712);
	// stwx r30,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r30.u32);
	// lwz r11,716(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 716);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,716(r31)
	REX_STORE_U32(r31.u32 + 716, ctx.r11.u32);
	// cmplwi cr6,r11,25000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25000, ctx.xer);
	// ble cr6,0x825054c4
	if (!ctx.cr6.gt) goto loc_825054C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82505530
	goto loc_82505530;
loc_825054C4:
	// lwz r10,28(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 28);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250552c
	if (!ctx.cr0.eq) goto loc_8250552C;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8250552c
	if (ctx.cr0.eq) goto loc_8250552C;
loc_825054D8:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82505514
	if (ctx.cr0.eq) goto loc_82505514;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r8,20(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r11,r11,12,21,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x780;
	// lwz r9,724(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 724);
	// rlwinm r8,r8,7,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7F;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
loc_82505514:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250552c
	if (!ctx.cr0.eq) goto loc_8250552C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825054d8
	if (!ctx.cr6.eq) goto loc_825054D8;
loc_8250552C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82505530:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82516448) {
	REX_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm. r9,r11,0,13,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// beq 0x82516474
	if (ctx.cr0.eq) goto loc_82516474;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// andc r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r10,r11,31
	ctx.r10.s64 = ctx.r11.s64 + 31;
loc_82516474:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82516990) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82516998;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r31,18(r4)
	r31.u64 = REX_LOAD_U16(ctx.r4.u32 + 18);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// b 0x825169cc
	goto loc_825169CC;
loc_825169AC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825164c0
	ctx.lr = 0x825169B4;
	sub_825164C0(ctx, base);
	// lwz r11,688(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 688);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x825169f0
	if (!ctx.cr6.eq) goto loc_825169F0;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_825169CC:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r10,r11,16,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825169ac
	if (ctx.cr6.lt) goto loc_825169AC;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x824e4368
	ctx.lr = 0x825169F0;
	sub_824E4368(ctx, base);
loc_825169F0:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// rlwinm r6,r11,31,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
loc_82516A00:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82516b18
	if (ctx.cr6.eq) goto loc_82516B18;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// lwz r10,192(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 192);
	// li r8,0
	ctx.r8.s64 = 0;
	// andc r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 & ~ctx.r11.u64;
	// clrlwi. r11,r10,29
	ctx.r11.u64 = ctx.r10.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// subfic r7,r9,31
	ctx.xer.ca = ctx.r9.u32 <= 31;
	ctx.r7.u64 = static_cast<uint64_t>(31) - ctx.r9.u64;
	// beq 0x82516a50
	if (ctx.cr0.eq) goto loc_82516A50;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82516A2C:
	// rlwinm r4,r10,18,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFF;
	// srw r4,r4,r9
	ctx.r4.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r4,r4,30
	ctx.r4.u64 = ctx.r4.u32 & 0x3;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82516a50
	if (ctx.cr6.eq) goto loc_82516A50;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82516a2c
	if (ctx.cr6.lt) goto loc_82516A2C;
loc_82516A50:
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82516b00
	if (!ctx.cr6.lt) goto loc_82516B00;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// rlwinm r11,r10,16,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x7;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82516ad8
	if (!ctx.cr6.lt) goto loc_82516AD8;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
loc_82516A84:
	// rlwinm r10,r11,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r4,r11,58
	ctx.r4.u64 = ctx.r11.u64 & 0x3F;
	// li r31,1
	r31.s64 = 1;
	// sld r4,r31,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x40 ? 0 : (r31.u64 << (ctx.r4.u8 & 0x7F));
	// ldx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r8.u32);
	// and r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 & ctx.r10.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x82516aac
	if (!ctx.cr6.eq) goto loc_82516AAC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82516AAC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82516acc
	if (!ctx.cr0.eq) goto loc_82516ACC;
	// rlwinm r10,r7,16,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0x7;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82516a84
	if (ctx.cr6.lt) goto loc_82516A84;
	// b 0x82516ad8
	goto loc_82516AD8;
loc_82516ACC:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82516ad8
	if (!ctx.cr6.lt) goto loc_82516AD8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82516AD8:
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwinm r10,r9,16,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x7;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82516b0c
	if (!ctx.cr6.lt) goto loc_82516B0C;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// andc r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ~ctx.r11.u64;
	// subf r6,r11,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r11.u64;
	// b 0x82516a00
	goto loc_82516A00;
loc_82516B00:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824e4368
	ctx.lr = 0x82516B0C;
	sub_824E4368(ctx, base);
loc_82516B0C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824e4368
	ctx.lr = 0x82516B18;
	sub_824E4368(ctx, base);
loc_82516B18:
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// bne cr6,0x82516b2c
	if (!ctx.cr6.eq) goto loc_82516B2C;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824e4368
	ctx.lr = 0x82516B2C;
	sub_824E4368(ctx, base);
loc_82516B2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82528F28) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 31, ctx.xer);
	// ble cr6,0x82528f70
	if (!ctx.cr6.gt) goto loc_82528F70;
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// rlwinm r31,r11,27,5,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bctrl 
	ctx.lr = 0x82528F64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// b 0x82528f78
	goto loc_82528F78;
loc_82528F70:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_82528F78:
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

DEFINE_REX_FUNC(sub_8252E9B0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cac
	ctx.lr = 0x8252E9B8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x8252e9e4
	if (!ctx.cr6.eq) goto loc_8252E9E4;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// b 0x8252ea24
	goto loc_8252EA24;
loc_8252E9E4:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
loc_8252E9E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252ea20
	if (ctx.cr6.eq) goto loc_8252EA20;
	// lwz r30,16(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8252ea18
	if (ctx.cr6.eq) goto loc_8252EA18;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// bne cr6,0x8252ea18
	if (!ctx.cr6.eq) goto loc_8252EA18;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252ea24
	if (!ctx.cr0.eq) goto loc_8252EA24;
loc_8252EA18:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8252e9e8
	goto loc_8252E9E8;
loc_8252EA20:
	// li r30,0
	r30.s64 = 0;
loc_8252EA24:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8252eaac
	if (ctx.cr6.eq) goto loc_8252EAAC;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252ea4c
	if (ctx.cr0.eq) goto loc_8252EA4C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,660(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 660);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8254f428
	ctx.lr = 0x8252EA48;
	sub_8254F428(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8252EA4C:
	// li r29,0
	r29.s64 = 0;
	// addi r31,r30,44
	r31.s64 = r30.s64 + 44;
loc_8252EA54:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8252eaa4
	if (!ctx.cr6.lt) goto loc_8252EAA4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// subf r11,r5,r28
	ctx.r11.u64 = r28.u64 - ctx.r5.u64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r11,r25
	ctx.r6.u64 = ctx.r11.u64 & r25.u64;
	// bl 0x8252dde0
	ctx.lr = 0x8252EA88;
	sub_8252DDE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252ea9c
	if (ctx.cr0.eq) goto loc_8252EA9C;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x8252ea54
	goto loc_8252EA54;
loc_8252EA9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8252eac0
	goto loc_8252EAC0;
loc_8252EAA4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8252eac0
	goto loc_8252EAC0;
loc_8252EAAC:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8252dde0
	ctx.lr = 0x8252EAC0;
	sub_8252DDE0(ctx, base);
loc_8252EAC0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8253C1D8) {
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
	// bl 0x826a1cac
	ctx.lr = 0x8253C1E0;
	// stwu r1,-1088(r1)
	ea = -1088 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r8,28(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,44(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// bl 0x825ba3a0
	ctx.lr = 0x8253C218;
	sub_825BA3A0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x825ba3a0
	ctx.lr = 0x8253C23C;
	sub_825BA3A0(ctx, base);
	// addi r10,r1,804
	ctx.r10.s64 = ctx.r1.s64 + 804;
	// addi r9,r1,356
	ctx.r9.s64 = ctx.r1.s64 + 356;
	// lwz r7,108(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r8,r1,580
	ctx.r8.s64 = ctx.r1.s64 + 580;
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,1000
	ctx.r5.s64 = ctx.r1.s64 + 1000;
	// addi r4,r1,552
	ctx.r4.s64 = ctx.r1.s64 + 552;
	// stw r11,800(r1)
	REX_STORE_U32(ctx.r1.u32 + 800, ctx.r11.u32);
	// addi r3,r1,776
	ctx.r3.s64 = ctx.r1.s64 + 776;
	// stw r11,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// stw r11,576(r1)
	REX_STORE_U32(ctx.r1.u32 + 576, ctx.r11.u32);
	// addi r25,r1,328
	r25.s64 = ctx.r1.s64 + 328;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// rlwinm. r29,r7,0,30,28
	r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r11,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,828(r1)
	REX_STORE_U32(ctx.r1.u32 + 828, ctx.r11.u32);
	// stw r11,960(r1)
	REX_STORE_U32(ctx.r1.u32 + 960, ctx.r11.u32);
	// stw r11,996(r1)
	REX_STORE_U32(ctx.r1.u32 + 996, ctx.r11.u32);
	// stw r11,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r11.u32);
	// stw r11,512(r1)
	REX_STORE_U32(ctx.r1.u32 + 512, ctx.r11.u32);
	// stw r11,548(r1)
	REX_STORE_U32(ctx.r1.u32 + 548, ctx.r11.u32);
	// stw r11,604(r1)
	REX_STORE_U32(ctx.r1.u32 + 604, ctx.r11.u32);
	// stw r11,736(r1)
	REX_STORE_U32(ctx.r1.u32 + 736, ctx.r11.u32);
	// stw r11,772(r1)
	REX_STORE_U32(ctx.r1.u32 + 772, ctx.r11.u32);
	// std r11,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// std r11,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r11,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// stw r11,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r11.u32);
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// std r11,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r11.u64);
	// std r11,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.r11.u64);
	// std r11,0(r25)
	REX_STORE_U64(r25.u32 + 0, ctx.r11.u64);
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// lwz r29,44(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 44);
	// lwz r27,48(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 48);
	// std r11,8(r25)
	REX_STORE_U64(r25.u32 + 8, ctx.r11.u64);
	// bne 0x8253c368
	if (!ctx.cr0.eq) goto loc_8253C368;
	// lwz r5,116(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bne cr6,0x8253c368
	if (!ctx.cr6.eq) goto loc_8253C368;
	// addi r4,r1,800
	ctx.r4.s64 = ctx.r1.s64 + 800;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,12(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 12);
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x82530210
	ctx.lr = 0x8253C334;
	sub_82530210(ctx, base);
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r7,108(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r8,12(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 12);
	// lwz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,116(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x82530210
	ctx.lr = 0x8253C368;
	sub_82530210(ctx, base);
loc_8253C368:
	// lwz r7,112(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm. r11,r7,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253c3e8
	if (!ctx.cr0.eq) goto loc_8253C3E8;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bne cr6,0x8253c3e8
	if (!ctx.cr6.eq) goto loc_8253C3E8;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,12(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 12);
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x82530210
	ctx.lr = 0x8253C3B4;
	sub_82530210(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r7,112(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r8,12(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 12);
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x82530210
	ctx.lr = 0x8253C3E8;
	sub_82530210(ctx, base);
loc_8253C3E8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,828(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 828);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8253c4a4
	if (!ctx.cr6.gt) goto loc_8253C4A4;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x8253c4a4
	if (ctx.cr6.gt) goto loc_8253C4A4;
	// addi r4,r1,800
	ctx.r4.s64 = ctx.r1.s64 + 800;
loc_8253C410:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8253beb0
	ctx.lr = 0x8253C420;
	sub_8253BEB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8253c49c
	if (!ctx.cr0.eq) goto loc_8253C49C;
loc_8253C428:
	// lwz r11,336(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253c444
	if (ctx.cr6.eq) goto loc_8253C444;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,340(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825c3fe8
	ctx.lr = 0x8253C444;
	sub_825C3FE8(ctx, base);
loc_8253C444:
	// lwz r11,784(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253c460
	if (ctx.cr6.eq) goto loc_8253C460;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,788(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 788);
	// lwz r4,576(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 576);
	// bl 0x825c3fe8
	ctx.lr = 0x8253C460;
	sub_825C3FE8(ctx, base);
loc_8253C460:
	// lwz r11,560(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 560);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253c47c
	if (ctx.cr6.eq) goto loc_8253C47C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,564(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 564);
	// lwz r4,352(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x825c3fe8
	ctx.lr = 0x8253C47C;
	sub_825C3FE8(ctx, base);
loc_8253C47C:
	// lwz r11,1008(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1008);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253c498
	if (ctx.cr6.eq) goto loc_8253C498;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,1012(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1012);
	// lwz r4,800(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 800);
	// bl 0x825c3fe8
	ctx.lr = 0x8253C498;
	sub_825C3FE8(ctx, base);
loc_8253C498:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8253C49C:
	// addi r1,r1,1088
	ctx.r1.s64 = ctx.r1.s64 + 1088;
	// b 0x826a1cfc
	return;
loc_8253C4A4:
	// lwz r10,380(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8253c4c8
	if (!ctx.cr6.gt) goto loc_8253C4C8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x8253c4c8
	if (ctx.cr6.gt) goto loc_8253C4C8;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// b 0x8253c410
	goto loc_8253C410;
loc_8253C4C8:
	// lwz r10,604(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 604);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8253c4ec
	if (!ctx.cr6.gt) goto loc_8253C4EC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x8253c4ec
	if (ctx.cr6.gt) goto loc_8253C4EC;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// b 0x8253c410
	goto loc_8253C410;
loc_8253C4EC:
	// lwz r10,156(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8253c428
	if (!ctx.cr6.gt) goto loc_8253C428;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8253c428
	if (ctx.cr6.gt) goto loc_8253C428;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// b 0x8253c410
	goto loc_8253C410;
}

DEFINE_REX_FUNC(sub_82559C08) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82559c1c
	if (!ctx.cr0.eq) goto loc_82559C1C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82559c24
	if (!ctx.cr0.eq) goto loc_82559C24;
loc_82559C1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82559C24:
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82559c60
	if (!ctx.cr0.eq) goto loc_82559C60;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82559c60
	if (ctx.cr6.eq) goto loc_82559C60;
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82559c60
	if (!ctx.cr0.eq) goto loc_82559C60;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82559c1c
	if (!ctx.cr6.eq) goto loc_82559C1C;
loc_82559C60:
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8255EEC0) {
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
	// bl 0x826a1c98
	ctx.lr = 0x8255EEC8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,12288
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12288, ctx.xer);
	// bne cr6,0x8255eef8
	if (!ctx.cr6.eq) goto loc_8255EEF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8255f2c8
	goto loc_8255F2C8;
loc_8255EEF8:
	// li r26,0
	r26.s64 = 0;
	// addi r21,r22,4
	r21.s64 = r22.s64 + 4;
	// li r24,1
	r24.s64 = 1;
loc_8255EF04:
	// lwz r23,0(r21)
	r23.u64 = REX_LOAD_U32(r21.u32 + 0);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8255f2c4
	if (ctx.cr6.eq) goto loc_8255F2C4;
	// lwz r31,16(r23)
	r31.u64 = REX_LOAD_U32(r23.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8255f2b0
	if (ctx.cr6.eq) goto loc_8255F2B0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// rlwinm r9,r9,25,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x7F;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8255f2b0
	if (!ctx.cr6.eq) goto loc_8255F2B0;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// beq cr6,0x8255f2b0
	if (ctx.cr6.eq) goto loc_8255F2B0;
	// rlwinm. r9,r11,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8255f2b0
	if (!ctx.cr0.eq) goto loc_8255F2B0;
	// rlwinm. r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8255f2b0
	if (!ctx.cr0.eq) goto loc_8255F2B0;
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255ef64
	if (ctx.cr0.eq) goto loc_8255EF64;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r9,28(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8255f2b0
	if (!ctx.cr6.eq) goto loc_8255F2B0;
loc_8255EF64:
	// cmplwi cr6,r10,112
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 112, ctx.xer);
	// bne cr6,0x8255ef7c
	if (!ctx.cr6.eq) goto loc_8255EF7C;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8255f2b0
	if (!ctx.cr6.eq) goto loc_8255F2B0;
loc_8255EF7C:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r10,76(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi. r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255f2b0
	if (!ctx.cr0.eq) goto loc_8255F2B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7708
	ctx.lr = 0x8255EFA0;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255f2b0
	if (!ctx.cr0.eq) goto loc_8255F2B0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bcbe0
	ctx.lr = 0x8255EFB8;
	sub_825BCBE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255f2b0
	if (ctx.cr0.eq) goto loc_8255F2B0;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r27,0
	r27.s64 = 0;
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8255eff8
	if (!ctx.cr6.eq) goto loc_8255EFF8;
	// mr r27,r24
	r27.u64 = r24.u64;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(r31.u32, r22.u32, ctx.xer);
	// beq cr6,0x8255f068
	if (ctx.cr6.eq) goto loc_8255F068;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bcf88
	ctx.lr = 0x8255EFEC;
	sub_825BCF88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255f068
	if (ctx.cr0.eq) goto loc_8255F068;
	// b 0x8255f05c
	goto loc_8255F05C;
loc_8255EFF8:
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r8,40(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// clrlwi r7,r9,13
	ctx.r7.u64 = ctx.r9.u32 & 0x7FFFF;
	// rlwinm r9,r7,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r7,r7,27
	ctx.r7.u64 = ctx.r7.u32 & 0x1F;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// slw r7,r24,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r7.u8 & 0x3F));
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// and. r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8255f02c
	if (ctx.cr0.eq) goto loc_8255F02C;
	// mr r27,r24
	r27.u64 = r24.u64;
	// b 0x8255f068
	goto loc_8255F068;
loc_8255F02C:
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi r10,r10,13
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFF;
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r10,r24,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255f068
	if (ctx.cr0.eq) goto loc_8255F068;
	// mr r27,r24
	r27.u64 = r24.u64;
loc_8255F05C:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// mr r31,r30
	r31.u64 = r30.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_8255F068:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255f1a8
	if (ctx.cr0.eq) goto loc_8255F1A8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r4,96
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 96, ctx.xer);
	// bne cr6,0x8255f0f8
	if (!ctx.cr6.eq) goto loc_8255F0F8;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f71b8
	ctx.lr = 0x8255F090;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-20
	ctx.r11.s64 = r31.s64 + -20;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// add r29,r3,r11
	r29.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r6,r10,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// rlwinm r5,r10,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// rlwinm r4,r10,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f71b8
	ctx.lr = 0x8255F0B0;
	sub_824F71B8(ctx, base);
	// addi r10,r30,-20
	ctx.r10.s64 = r30.s64 + -20;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r8,r29,16
	ctx.r8.s64 = r29.s64 + 16;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8255F0C4:
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8255f0e4
	if (!ctx.cr0.eq) goto loc_8255F0E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8255f0c4
	if (!ctx.cr6.eq) goto loc_8255F0C4;
loc_8255F0E4:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8255f1a4
	if (!ctx.cr0.eq) goto loc_8255F1A4;
	// lwz r5,16(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r4,16(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 16);
	// b 0x8255f194
	goto loc_8255F194;
loc_8255F0F8:
	// cmplwi cr6,r4,97
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 97, ctx.xer);
	// beq cr6,0x8255f114
	if (ctx.cr6.eq) goto loc_8255F114;
	// cmplwi cr6,r4,99
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 99, ctx.xer);
	// beq cr6,0x8255f114
	if (ctx.cr6.eq) goto loc_8255F114;
	// cmplwi cr6,r4,100
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 100, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x8255f118
	if (!ctx.cr6.eq) goto loc_8255F118;
loc_8255F114:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_8255F118:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8255f1a8
	if (ctx.cr0.eq) goto loc_8255F1A8;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f71b8
	ctx.lr = 0x8255F130;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-24
	ctx.r11.s64 = r31.s64 + -24;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// add r29,r3,r11
	r29.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r6,r10,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// rlwinm r5,r10,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// rlwinm r4,r10,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f71b8
	ctx.lr = 0x8255F150;
	sub_824F71B8(ctx, base);
	// addi r10,r30,-24
	ctx.r10.s64 = r30.s64 + -24;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r8,r29,20
	ctx.r8.s64 = r29.s64 + 20;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8255F164:
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8255f184
	if (!ctx.cr0.eq) goto loc_8255F184;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8255f164
	if (!ctx.cr6.eq) goto loc_8255F164;
loc_8255F184:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8255f1a4
	if (!ctx.cr0.eq) goto loc_8255F1A4;
	// lwz r5,20(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r4,20(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 20);
loc_8255F194:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8254fde0
	ctx.lr = 0x8255F19C;
	sub_8254FDE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255f1a8
	if (!ctx.cr0.eq) goto loc_8255F1A8;
loc_8255F1A4:
	// li r27,0
	r27.s64 = 0;
loc_8255F1A8:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255f2b0
	if (ctx.cr0.eq) goto loc_8255F2B0;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x8255f240
	if (!ctx.cr6.eq) goto loc_8255F240;
	// addi r8,r30,4
	ctx.r8.s64 = r30.s64 + 4;
loc_8255F1C4:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255f228
	if (ctx.cr6.eq) goto loc_8255F228;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8255f214
	if (ctx.cr6.eq) goto loc_8255F214;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8255f1f4
	goto loc_8255F1F4;
loc_8255F1EC:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8255F1F4:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8255f1ec
	if (!ctx.cr6.eq) goto loc_8255F1EC;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r31.u32);
loc_8255F214:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8255f1c4
	if (!ctx.cr6.eq) goto loc_8255F1C4;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x8255f1c4
	goto loc_8255F1C4;
loc_8255F228:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8255e698
	ctx.lr = 0x8255F238;
	sub_8255E698(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x8255f29c
	goto loc_8255F29C;
loc_8255F240:
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,228
	ctx.r6.s64 = 228;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825c41d0
	ctx.lr = 0x8255F260;
	sub_825C41D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255f2b0
	if (ctx.cr0.eq) goto loc_8255F2B0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8255e698
	ctx.lr = 0x8255F278;
	sub_8255E698(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// andi. r11,r11,52428
	ctx.r11.u64 = ctx.r11.u64 & 52428;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8255f2a8
	if (ctx.cr6.eq) goto loc_8255F2A8;
	// sth r11,14(r31)
	REX_STORE_U16(r31.u32 + 14, ctx.r11.u16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_8255F29C:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8255e698
	ctx.lr = 0x8255F2A8;
	sub_8255E698(ctx, base);
loc_8255F2A8:
	// mr r30,r31
	r30.u64 = r31.u64;
	// mr r26,r24
	r26.u64 = r24.u64;
loc_8255F2B0:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// bne cr6,0x8255ef04
	if (!ctx.cr6.eq) goto loc_8255EF04;
	// addi r21,r23,8
	r21.s64 = r23.s64 + 8;
	// b 0x8255ef04
	goto loc_8255EF04;
loc_8255F2C4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8255F2C8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_82585588) {
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
	// bl 0x826a1cb4
	ctx.lr = 0x82585590;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// bne 0x825856a4
	if (!ctx.cr0.eq) goto loc_825856A4;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// bne cr6,0x825855f0
	if (!ctx.cr6.eq) goto loc_825855F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x825855f4
	if (ctx.cr6.eq) goto loc_825855F4;
loc_825855F0:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_825855F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// beq 0x82585624
	if (ctx.cr0.eq) goto loc_82585624;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825845a0
	ctx.lr = 0x82585610;
	sub_825845A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,4(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r30,8(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82553828
	ctx.lr = 0x82585620;
	sub_82553828(ctx, base);
	// b 0x8258562c
	goto loc_8258562C;
loc_82585624:
	// lwz r30,84(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8258562C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x824e4308
	ctx.lr = 0x8258566C;
	sub_824E4308(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82585680
	if (ctx.cr6.eq) goto loc_82585680;
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x825856d4
	goto loc_825856D4;
loc_82585680:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// b 0x825856d4
	goto loc_825856D4;
loc_825856A4:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64;
	// bl 0x8269cc20
	ctx.lr = 0x825856D4;
	sub_8269CC20(ctx, base);
loc_825856D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8259DD38) {
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
	// bl 0x826a1ca8
	ctx.lr = 0x8259DD40;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,11(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 11);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8259dd60
	if (ctx.cr6.eq) goto loc_8259DD60;
loc_8259DD54:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8259df98
	goto loc_8259DF98;
loc_8259DD60:
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,104(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// lwz r10,104(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 104);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// bgt cr6,0x8259dd80
	if (ctx.cr6.gt) goto loc_8259DD80;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_8259DD80:
	// lwz r11,108(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 108);
	// lwz r10,108(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 108);
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8259dd98
	if (ctx.cr6.lt) goto loc_8259DD98;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
loc_8259DD98:
	// lwz r11,112(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 112);
	// lwz r10,112(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 112);
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8259ddb0
	if (ctx.cr6.lt) goto loc_8259DDB0;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
loc_8259DDB0:
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// li r29,-1
	r29.s64 = -1;
	// ori r31,r11,65535
	r31.u64 = ctx.r11.u64 | 65535;
	// rlwinm r3,r27,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r27,r31
	ctx.cr6.compare<uint32_t>(r27.u32, r31.u32, ctx.xer);
	// ble cr6,0x8259ddcc
	if (!ctx.cr6.gt) goto loc_8259DDCC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8259DDCC:
	// bl 0x822f6280
	ctx.lr = 0x8259DDD0;
	sub_822F6280(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8259dd54
	if (ctx.cr6.eq) goto loc_8259DD54;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x8259ddf4
	if (!ctx.cr6.gt) goto loc_8259DDF4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8259DDF4:
	// bl 0x822f6280
	ctx.lr = 0x8259DDF8;
	sub_822F6280(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bne cr6,0x8259de10
	if (!ctx.cr6.eq) goto loc_8259DE10;
	// bl 0x8269ce98
	ctx.lr = 0x8259DE0C;
	sub_8269CE98(ctx, base);
	// b 0x8259dd54
	goto loc_8259DD54;
loc_8259DE10:
	// rlwinm r5,r27,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xFFFFFFF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x8259DE1C;
	sub_826A2E60(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x826a2e60
	ctx.lr = 0x8259DE34;
	sub_826A2E60(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r27,0
	r27.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8259de64
	if (ctx.cr6.eq) goto loc_8259DE64;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8259de64
	if (ctx.cr6.eq) goto loc_8259DE64;
	// stw r27,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r27.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r27,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r27.u32);
loc_8259DE64:
	// mr r29,r27
	r29.u64 = r27.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8259df1c
	if (ctx.cr6.eq) goto loc_8259DF1C;
loc_8259DE70:
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8259dec8
	if (ctx.cr6.eq) goto loc_8259DEC8;
loc_8259DE7C:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259DE9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259DEBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r24
	ctx.cr6.compare<uint32_t>(r31.u32, r24.u32, ctx.xer);
	// blt cr6,0x8259de7c
	if (ctx.cr6.lt) goto loc_8259DE7C;
loc_8259DEC8:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r31,r24
	r31.u64 = r24.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8259df10
	if (!ctx.cr6.lt) goto loc_8259DF10;
loc_8259DEDC:
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259DEFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8259dedc
	if (ctx.cr6.lt) goto loc_8259DEDC;
loc_8259DF10:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(r29.u32, r25.u32, ctx.xer);
	// blt cr6,0x8259de70
	if (ctx.cr6.lt) goto loc_8259DE70;
loc_8259DF1C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8259df84
	if (!ctx.cr6.lt) goto loc_8259DF84;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
loc_8259DF34:
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8259df74
	if (ctx.cr6.eq) goto loc_8259DF74;
loc_8259DF40:
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259DF60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8259df40
	if (ctx.cr6.lt) goto loc_8259DF40;
loc_8259DF74:
	// lwz r9,112(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8259df34
	if (ctx.cr6.lt) goto loc_8259DF34;
loc_8259DF84:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8259DF8C;
	sub_8269CE98(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8259DF94;
	sub_8269CE98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8259DF98:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_825ACEA8) {
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
	// bl 0x826a1cac
	ctx.lr = 0x825ACEB0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,81
	ctx.r11.s64 = 81;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r26,1
	r26.s64 = 1;
	// sth r11,2(r7)
	REX_STORE_U16(ctx.r7.u32 + 2, ctx.r11.u16);
	// clrlwi r27,r6,16
	r27.u64 = ctx.r6.u32 & 0xFFFF;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwimi r11,r26,17,3,15
	ctx.r11.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 17) & 0x1FFF0000) | (ctx.r11.u64 & 0xFFFFFFFFE000FFFF);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
	// sth r27,6(r7)
	REX_STORE_U16(ctx.r7.u32 + 6, r27.u16);
	// rlwinm r28,r10,11,29,31
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x7;
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r10,r26,18,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 18) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r9,r10,0,16,9
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r9.u64 & 0x3F0000);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r29,r11,4
	r29.s64 = ctx.r11.s64 + 4;
	// rlwimi r9,r10,0,9,7
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r9.u64 & 0x800000);
	// oris r10,r9,64
	ctx.r10.u64 = ctx.r9.u64 | 4194304;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// beq cr6,0x825acf78
	if (ctx.cr6.eq) goto loc_825ACF78;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(r28.u32, 2, ctx.xer);
	// beq cr6,0x825acf70
	if (ctx.cr6.eq) goto loc_825ACF70;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(r28.u32, 3, ctx.xer);
	// beq cr6,0x825acf68
	if (ctx.cr6.eq) goto loc_825ACF68;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-8552
	ctx.r6.s64 = ctx.r11.s64 + -8552;
	// addi r5,r10,-31184
	ctx.r5.s64 = ctx.r10.s64 + -31184;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,10629
	ctx.r7.s64 = 10629;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825ACF68;
	sub_824EA978(ctx, base);
loc_825ACF68:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x825acf7c
	goto loc_825ACF7C;
loc_825ACF70:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x825acf7c
	goto loc_825ACF7C;
loc_825ACF78:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_825ACF7C:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// li r8,73
	ctx.r8.s64 = 73;
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwimi r7,r11,4,25,27
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x70) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFF8F);
	// rlwinm r10,r10,0,28,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,0,24,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF;
	// li r9,17
	ctx.r9.s64 = 17;
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwimi r7,r11,12,17,19
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7000) | (ctx.r7.u64 & 0xFFFFFFFFFFFF8FFF);
	// addi r11,r29,4
	ctx.r11.s64 = r29.s64 + 4;
	// stw r7,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r7.u32);
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// sth r8,6(r29)
	REX_STORE_U16(r29.u32 + 6, ctx.r8.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,4(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm r8,r8,0,16,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r8,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r8.u32);
	// sth r27,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, r27.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r8,r9,18,8,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFF0000) | (ctx.r8.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// beq cr6,0x825ad018
	if (ctx.cr6.eq) goto loc_825AD018;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(r28.u32, 2, ctx.xer);
	// beq cr6,0x825ad00c
	if (ctx.cr6.eq) goto loc_825AD00C;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(r28.u32, 3, ctx.xer);
	// beq cr6,0x825ad004
	if (ctx.cr6.eq) goto loc_825AD004;
	// li r8,85
	ctx.r8.s64 = 85;
	// b 0x825ad024
	goto loc_825AD024;
loc_825AD004:
	// li r8,64
	ctx.r8.s64 = 64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_825AD00C:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r8,r26,4,26,27
	ctx.r8.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0x30) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFCF);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_825AD018:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r7,5
	ctx.r7.s64 = 5;
	// rlwimi r8,r7,0,28,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xF) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF0);
loc_825AD024:
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r7,r8,0,16,9
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r7.u64 & 0x3F0000);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r7,r8,0,9,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r7.u64 & 0x800000);
	// oris r8,r7,64
	ctx.r8.u64 = ctx.r7.u64 | 4194304;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwzu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwimi r8,r7,0,0,28
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF8) | (ctx.r8.u64 & 0xFFFFFFFF00000007);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwimi r7,r8,0,28,24
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F) | (ctx.r7.u64 & 0x70);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwimi r8,r7,0,24,20
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF) | (ctx.r8.u64 & 0x700);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwimi r7,r8,0,20,16
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFF8FFF) | (ctx.r7.u64 & 0x7000);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r8,r8,0,8,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x825ad0b4
	if (ctx.cr0.eq) goto loc_825AD0B4;
	// lwz r8,0(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 0);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825AD0B4:
	// sth r27,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, r27.u16);
	// li r8,65
	ctx.r8.s64 = 65;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r7,r26,18,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 18) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,0,16,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r27,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, r27.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r8,r9,18,8,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFF0000) | (ctx.r8.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// beq cr6,0x825ad108
	if (ctx.cr6.eq) goto loc_825AD108;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(r28.u32, 2, ctx.xer);
	// beq cr6,0x825ad110
	if (ctx.cr6.eq) goto loc_825AD110;
	// b 0x825ad11c
	goto loc_825AD11C;
loc_825AD108:
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_825AD110:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r26,6,24,25
	ctx.r10.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 6) & 0xC0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF3F);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_825AD11C:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r9,r10,0,16,9
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r9.u64 & 0x3F0000);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r9,r10,0,9,7
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r9.u64 & 0x800000);
	// oris r10,r9,64
	ctx.r10.u64 = ctx.r9.u64 | 4194304;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwimi r9,r10,0,0,28
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8) | (ctx.r9.u64 & 0xFFFFFFFF00000007);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwimi r9,r10,0,28,24
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F) | (ctx.r9.u64 & 0x70);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwimi r9,r10,0,24,20
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF) | (ctx.r9.u64 & 0x700);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwimi r9,r10,0,20,16
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF8FFF) | (ctx.r9.u64 & 0x7000);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825ad1a8
	if (ctx.cr0.eq) goto loc_825AD1A8;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825AD1A8:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r10,r9,0,16,9
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r10.u64 & 0x3F0000);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r9,r10,0,9,7
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r9.u64 & 0x800000);
	// oris r10,r9,64
	ctx.r10.u64 = ctx.r9.u64 | 4194304;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwimi r9,r10,0,0,28
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8) | (ctx.r9.u64 & 0xFFFFFFFF00000007);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwimi r9,r10,0,28,24
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F) | (ctx.r9.u64 & 0x70);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwimi r9,r10,0,24,20
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF) | (ctx.r9.u64 & 0x700);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwimi r9,r10,0,20,16
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF8FFF) | (ctx.r9.u64 & 0x7000);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ad230
	if (ctx.cr0.eq) goto loc_825AD230;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
loc_825AD230:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_825C4930) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb4
	ctx.lr = 0x825C4938;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// b 0x825c4a10
	goto loc_825C4A10;
loc_825C495C:
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x825c4970
	if (ctx.cr6.eq) goto loc_825C4970;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x825c4974
	if (!ctx.cr6.eq) goto loc_825C4974;
loc_825C4970:
	// li r10,1
	ctx.r10.s64 = 1;
loc_825C4974:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c4a18
	if (!ctx.cr0.eq) goto loc_825C4A18;
	// cmplwi cr6,r11,113
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 113, ctx.xer);
	// beq cr6,0x825c4a18
	if (ctx.cr6.eq) goto loc_825C4A18;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// beq cr6,0x825c4a18
	if (ctx.cr6.eq) goto loc_825C4A18;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825c4a18
	if (!ctx.cr6.eq) goto loc_825C4A18;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c49bc
	if (ctx.cr0.eq) goto loc_825C49BC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8252dc68
	ctx.lr = 0x825C49B8;
	sub_8252DC68(ctx, base);
	// b 0x825c49e8
	goto loc_825C49E8;
loc_825C49BC:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_825C49C0:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c4a24
	if (!ctx.cr0.eq) goto loc_825C4A24;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c4a24
	if (ctx.cr0.eq) goto loc_825C4A24;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x825c49c0
	if (!ctx.cr6.eq) goto loc_825C49C0;
	// li r3,1
	ctx.r3.s64 = 1;
loc_825C49E8:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c4a2c
	if (ctx.cr0.eq) goto loc_825C4A2C;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// mr r31,r30
	r31.u64 = r30.u64;
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r29,r11,27,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
loc_825C4A10:
	// cmplwi cr6,r11,112
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 112, ctx.xer);
	// bne cr6,0x825c495c
	if (!ctx.cr6.eq) goto loc_825C495C;
loc_825C4A18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825C4A1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_825C4A24:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825c49e8
	goto loc_825C49E8;
loc_825C4A2C:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825c2bf8
	ctx.lr = 0x825C4A44;
	sub_825C2BF8(ctx, base);
	// b 0x825c4a1c
	goto loc_825C4A1C;
}

DEFINE_REX_FUNC(sub_825CBD18) {
	REX_FUNC_PROLOGUE();
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
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
	// bl 0x826a1ca8
	ctx.lr = 0x825CBD20;
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f29.u64);
	// stfd f30,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
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
	// beq cr6,0x825cbd58
	if (ctx.cr6.eq) goto loc_825CBD58;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82408848
	ctx.lr = 0x825CBD54;
	sub_82408848(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_825CBD58:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cbd74
	if (ctx.cr6.eq) goto loc_825CBD74;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c7448
	ctx.lr = 0x825CBD70;
	sub_825C7448(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_825CBD74:
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
	// lfs f31,3716(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 3716);
	f31.f64 = double(temp.f32);
	// fmr f30,f31
	f30.f64 = f31.f64;
	// fmr f29,f31
	f29.f64 = f31.f64;
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
	// bne 0x825cbde0
	if (!ctx.cr0.eq) goto loc_825CBDE0;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x825cbde8
	goto loc_825CBDE8;
loc_825CBDE0:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_825CBDE8:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cbe00
	if (ctx.cr6.eq) goto loc_825CBE00;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409a88
	ctx.lr = 0x825CBE00;
	sub_82409A88(ctx, base);
loc_825CBE00:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825cc0d0
	if (!ctx.cr6.gt) goto loc_825CC0D0;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r25,r30,1,0,30
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lfd f11,20216(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r7.u32 + 20216);
	// subf r30,r25,r28
	r30.u64 = r28.u64 - r25.u64;
	// lfs f5,20236(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20236);
	ctx.f5.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r28,-32255
	r28.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f12,15196(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 15196);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,20208(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 20208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,17280(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 17280);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f7,20244(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 20244);
	ctx.f7.f64 = double(temp.f32);
	// addi r29,r27,12
	r29.s64 = r27.s64 + 12;
	// lfs f4,20228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20228);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,20240(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 20240);
	ctx.f6.f64 = double(temp.f32);
loc_825CBE74:
	// add r11,r29,r10
	ctx.r11.u64 = r29.u64 + ctx.r10.u64;
	// lfsx f10,r29,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// fadds f10,f29,f10
	ctx.f10.f64 = double(float(f29.f64 + ctx.f10.f64));
	// rlwinm r7,r26,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xC;
	// lwz r6,92(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f9,-12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 + f31.f64));
	// fadds f8,f8,f30
	ctx.f8.f64 = double(float(ctx.f8.f64 + f30.f64));
	// lfsx f3,r7,r24
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + r24.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f10,f10,f4
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// fmuls f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fadds f2,f10,f3
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// fadds f1,f9,f3
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// fadds f3,f8,f3
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// fctiwz f2,f2
	ctx.f2.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f2,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f2,f1
	ctx.f2.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f2,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// fctiwz f3,f3
	ctx.f3.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f3.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// beq cr6,0x825cc024
	if (ctx.cr6.eq) goto loc_825CC024;
	// extsw r28,r4
	r28.s64 = ctx.r4.s32;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r7,r5
	ctx.r7.s64 = ctx.r5.s32;
	// std r28,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r28.u64);
	// extsw r28,r6
	r28.s64 = ctx.r6.s32;
	// std r7,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f3,96(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r28,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r28.u64);
	// lfd f31,112(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f3
	ctx.f3.f64 = double(ctx.f3.s64);
	// lfd f2,104(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// frsp f3,f3
	ctx.f3.f64 = double(float(ctx.f3.f64));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// fcfid f31,f31
	f31.f64 = double(f31.s64);
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lfs f1,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f9,f9,f3
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// frsp f3,f31
	ctx.f3.f64 = double(float(f31.f64));
	// fmuls f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fsubs f8,f8,f3
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f3.f64));
	// frsp f3,f2
	ctx.f3.f64 = double(float(ctx.f2.f64));
	// fmadds f2,f9,f0,f1
	ctx.f2.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f1.f64)));
	// stfs f2,16(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fmuls f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fsubs f10,f10,f3
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// fmul f2,f8,f11
	ctx.f2.f64 = ctx.f8.f64 * ctx.f11.f64;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// fmul f3,f9,f11
	ctx.f3.f64 = ctx.f9.f64 * ctx.f11.f64;
	// fmuls f10,f10,f5
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// frsp f30,f2
	f30.f64 = double(float(ctx.f2.f64));
	// lfs f2,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f2,f9,f13,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f2.f64)));
	// stfs f2,16(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f2,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f9,f9,f12,f2
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f2.f64)));
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f9,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f9,f8,f0,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f9,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f9,f8,f13,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f9.f64)));
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f9,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f9,f8,f12,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f9.f64)));
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f9,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f9,f10,f0,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfs f9,28(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f9,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// frsp f31,f3
	f31.f64 = double(float(ctx.f3.f64));
	// fmadds f9,f10,f13,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f9.f64)));
	// stfs f9,28(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fmul f3,f10,f11
	ctx.f3.f64 = ctx.f10.f64 * ctx.f11.f64;
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f9,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f10,f10,f12,f9
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f9.f64)));
	// stfs f10,28(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// frsp f29,f3
	f29.f64 = double(float(ctx.f3.f64));
loc_825CC024:
	// cmpwi cr6,r5,15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 15, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x825cc034
	if (ctx.cr6.lt) goto loc_825CC034;
	// li r11,15
	ctx.r11.s64 = 15;
loc_825CC034:
	// cmpwi cr6,r11,-15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -15, ctx.xer);
	// ble cr6,0x825cc04c
	if (!ctx.cr6.gt) goto loc_825CC04C;
	// cmpwi cr6,r5,15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 15, ctx.xer);
	// blt cr6,0x825cc050
	if (ctx.cr6.lt) goto loc_825CC050;
	// li r5,15
	ctx.r5.s64 = 15;
	// b 0x825cc050
	goto loc_825CC050;
loc_825CC04C:
	// li r5,-15
	ctx.r5.s64 = -15;
loc_825CC050:
	// cmpwi cr6,r6,15
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 15, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x825cc060
	if (ctx.cr6.lt) goto loc_825CC060;
	// li r11,15
	ctx.r11.s64 = 15;
loc_825CC060:
	// cmpwi cr6,r11,-15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -15, ctx.xer);
	// ble cr6,0x825cc078
	if (!ctx.cr6.gt) goto loc_825CC078;
	// cmpwi cr6,r6,15
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 15, ctx.xer);
	// blt cr6,0x825cc07c
	if (ctx.cr6.lt) goto loc_825CC07C;
	// li r6,15
	ctx.r6.s64 = 15;
	// b 0x825cc07c
	goto loc_825CC07C;
loc_825CC078:
	// li r6,-15
	ctx.r6.s64 = -15;
loc_825CC07C:
	// cmpwi cr6,r4,63
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 63, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x825cc08c
	if (ctx.cr6.lt) goto loc_825CC08C;
	// li r11,63
	ctx.r11.s64 = 63;
loc_825CC08C:
	// cmpwi cr6,r11,-63
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -63, ctx.xer);
	// ble cr6,0x825cc0a4
	if (!ctx.cr6.gt) goto loc_825CC0A4;
	// cmpwi cr6,r4,63
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 63, ctx.xer);
	// blt cr6,0x825cc0a8
	if (ctx.cr6.lt) goto loc_825CC0A8;
	// li r4,63
	ctx.r4.s64 = 63;
	// b 0x825cc0a8
	goto loc_825CC0A8;
loc_825CC0A4:
	// li r4,-63
	ctx.r4.s64 = -63;
loc_825CC0A8:
	// rlwimi r6,r4,5,0,26
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0) | (ctx.r6.u64 & 0xFFFFFFFF0000001F);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// rlwimi r5,r6,5,0,26
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0) | (ctx.r5.u64 & 0xFFFFFFFF0000001F);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// sthux r5,r30,r25
	ea = r30.u32 + r25.u32;
	REX_STORE_U16(ea, ctx.r5.u16);
	r30.u32 = ea;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825cbe74
	if (ctx.cr6.lt) goto loc_825CBE74;
loc_825CC0D0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_825E0748) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r11,r11,27328
	ctx.r11.s64 = ctx.r11.s64 + 27328;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r6,60(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x824ea8e0
	ctx.lr = 0x825E0778;
	sub_824EA8E0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_825E4740) {
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
	// bl 0x826a1cac
	ctx.lr = 0x825E4748;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r11,52(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 52);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// divw r10,r10,r9
	ctx.r10.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825e4788
	if (!ctx.cr6.eq) goto loc_825E4788;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// b 0x825e478c
	goto loc_825E478C;
loc_825E4788:
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
loc_825E478C:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e2338
	ctx.lr = 0x825E47A0;
	sub_825E2338(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e2338
	ctx.lr = 0x825E47B4;
	sub_825E2338(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r29,r11,27328
	r29.s64 = ctx.r11.s64 + 27328;
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r25,1
	r25.s64 = 1;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r10,92(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 92);
	// rlwimi r8,r10,24,3,7
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F000000) | (ctx.r8.u64 & 0xFFFFFFFFE0FFFFFF);
	// rlwinm r10,r7,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_825E47EC:
	// slw r10,r25,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwimi r10,r8,0,16,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF) | (ctx.r10.u64 & 0xF0000);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bdnz 0x825e47ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825E47EC;
	// stb r9,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r9.u8);
	// lis r27,256
	r27.s64 = 16777216;
	// stb r9,6(r31)
	REX_STORE_U8(r31.u32 + 6, ctx.r9.u8);
	// lis r28,2
	r28.s64 = 131072;
	// lwz r4,236(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 236);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825e4880
	if (ctx.cr6.eq) goto loc_825E4880;
	// lwz r3,2736(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 2736);
	// bl 0x82607f18
	ctx.lr = 0x825E4830;
	sub_82607F18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x825e4880
	if (ctx.cr0.lt) goto loc_825E4880;
	// lwz r10,132(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 132);
	// rlwinm r11,r10,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r11,r10,24,16,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r11,r10,8,8,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r11,r10,24,0,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + r27.u64;
	// addi r9,r11,-256
	ctx.r9.s64 = ctx.r11.s64 + -256;
	// rlwinm r10,r10,14,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC0;
	// rlwinm r9,r9,26,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0xC;
	// subf r8,r28,r11
	ctx.r8.u64 = ctx.r11.u64 - r28.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r9,r8,20,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x30;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stb r11,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r11.u8);
	// lhz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 4);
	// stb r11,6(r31)
	REX_STORE_U8(r31.u32 + 6, ctx.r11.u8);
loc_825E4880:
	// lwz r11,128(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 128);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// rlwimi r9,r11,24,16,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r9,r11,8,8,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r9,r11,24,0,7
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// rlwinm r11,r9,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// rlwinm r8,r9,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000;
	// rlwinm r11,r11,0,18,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFE3FFF;
	// rlwinm r7,r9,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// nor r11,r11,r9
	ctx.r11.u64 = ~(ctx.r11.u64 | ctx.r9.u64);
	// rlwimi r10,r11,16,12,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF0000) | (ctx.r10.u64 & 0xFFFFFFFFFFF0FFFF);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r3,2736(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 2736);
	// bl 0x82607f18
	ctx.lr = 0x825E48D4;
	sub_82607F18(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// li r6,3
	ctx.r6.s64 = 3;
	// rlwimi r10,r11,0,0,25
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e2338
	ctx.lr = 0x825E48F8;
	sub_825E2338(ctx, base);
	// lwz r11,240(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 240);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r10,r11,26,0,5
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xFC000000) | (ctx.r10.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r3,2736(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 2736);
	// lwz r4,240(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 240);
	// bl 0x82607f18
	ctx.lr = 0x825E4914;
	sub_82607F18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x825e495c
	if (ctx.cr0.lt) goto loc_825E495C;
	// lwz r10,136(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 136);
	// rlwinm r11,r10,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r11,r10,24,16,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r11,r10,8,8,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r11,r10,24,0,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + r27.u64;
	// addi r9,r11,-256
	ctx.r9.s64 = ctx.r11.s64 + -256;
	// rlwinm r10,r10,14,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC0;
	// rlwinm r9,r9,26,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0xC;
	// subf r8,r28,r11
	ctx.r8.u64 = ctx.r11.u64 - r28.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r9,r8,20,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x30;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stb r11,7(r31)
	REX_STORE_U8(r31.u32 + 7, ctx.r11.u8);
loc_825E495C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,8193
	ctx.r10.s64 = 8193;
	// rlwimi r11,r10,12,18,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3F00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC0FF);
	// rlwimi r11,r10,12,8,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xF00000) | (ctx.r11.u64 & 0xFFFFFFFFFF0FFFFF);
	// rlwimi r11,r10,12,6,6
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x2000000) | (ctx.r11.u64 & 0xFFFFFFFFFDFFFFFF);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825e4a40
	if (ctx.cr6.eq) goto loc_825E4A40;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x825e49fc
	if (ctx.cr6.eq) goto loc_825E49FC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x825e49b8
	if (ctx.cr6.eq) goto loc_825E49B8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,11616
	ctx.r6.s64 = ctx.r11.s64 + 11616;
	// addi r5,r10,19324
	ctx.r5.s64 = ctx.r10.s64 + 19324;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,2722
	ctx.r7.s64 = 2722;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E49B4;
	sub_824EA978(ctx, base);
	// b 0x825e4a7c
	goto loc_825E4A7C;
loc_825E49B8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r11,r11,5,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e49f0
	if (ctx.cr0.eq) goto loc_825E49F0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x825e49f0
	if (ctx.cr6.eq) goto loc_825E49F0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,11616
	ctx.r6.s64 = ctx.r11.s64 + 11616;
	// addi r5,r10,13352
	ctx.r5.s64 = ctx.r10.s64 + 13352;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,2718
	ctx.r7.s64 = 2718;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E49F0;
	sub_824EA978(ctx, base);
loc_825E49F0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// oris r11,r11,6144
	ctx.r11.u64 = ctx.r11.u64 | 402653184;
	// b 0x825e4a78
	goto loc_825E4A78;
loc_825E49FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r11,r11,5,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e4a34
	if (ctx.cr0.eq) goto loc_825E4A34;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x825e4a34
	if (ctx.cr6.eq) goto loc_825E4A34;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,11616
	ctx.r6.s64 = ctx.r11.s64 + 11616;
	// addi r5,r10,13312
	ctx.r5.s64 = ctx.r10.s64 + 13312;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,2714
	ctx.r7.s64 = 2714;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E4A34;
	sub_824EA978(ctx, base);
loc_825E4A34:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r11,r25,28,3,4
	ctx.r11.u64 = (__builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 28) & 0x18000000) | (ctx.r11.u64 & 0xFFFFFFFFE7FFFFFF);
	// b 0x825e4a78
	goto loc_825E4A78;
loc_825E4A40:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r11,r11,0,3,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e4a70
	if (ctx.cr0.eq) goto loc_825E4A70;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,11616
	ctx.r6.s64 = ctx.r11.s64 + 11616;
	// addi r5,r10,13292
	ctx.r5.s64 = ctx.r10.s64 + 13292;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,2710
	ctx.r7.s64 = 2710;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E4A70;
	sub_824EA978(ctx, base);
loc_825E4A70:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,0,5,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFE7FFFFFF;
loc_825E4A78:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_825E4A7C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_825FAFF8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,31760
	ctx.r3.s64 = ctx.r11.s64 + 31760;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825FB198) {
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
	// li r4,125
	ctx.r4.s64 = 125;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x825fa990
	ctx.lr = 0x825FB1BC;
	sub_825FA990(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,32128
	ctx.r11.s64 = ctx.r11.s64 + 32128;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// ori r11,r11,24
	ctx.r11.u64 = ctx.r11.u64 | 24;
	// stw r11,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// lwz r3,2736(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 2736);
	// bl 0x825d7d20
	ctx.lr = 0x825FB1E8;
	sub_825D7D20(ctx, base);
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

DEFINE_REX_FUNC(sub_825FCB60) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,112(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x825f7440
	ctx.lr = 0x825FCB88;
	sub_825F7440(ctx, base);
	// stw r31,948(r30)
	REX_STORE_U32(r30.u32 + 948, r31.u32);
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

DEFINE_REX_FUNC(sub_825FE068) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x825fe08c
	if (ctx.cr6.lt) goto loc_825FE08C;
	// cmpwi cr6,r3,136
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 136, ctx.xer);
	// blt cr6,0x825fe0b0
	if (ctx.cr6.lt) goto loc_825FE0B0;
loc_825FE08C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-20400
	ctx.r6.s64 = ctx.r11.s64 + -20400;
	// addi r5,r10,-20456
	ctx.r5.s64 = ctx.r10.s64 + -20456;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,5351
	ctx.r7.s64 = 5351;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825FE0B0;
	sub_824EA978(ctx, base);
loc_825FE0B0:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mulli r10,r31,36
	ctx.r10.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(36));
	// addi r11,r11,-26376
	ctx.r11.s64 = ctx.r11.s64 + -26376;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82608810) {
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
	// b 0x82608848
	goto loc_82608848;
loc_82608828:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// beq 0x82608848
	if (ctx.cr0.eq) goto loc_82608848;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x825b3528
	ctx.lr = 0x82608848;
	sub_825B3528(ctx, base);
loc_82608848:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82608828
	if (!ctx.cr6.eq) goto loc_82608828;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82608868
	if (ctx.cr6.eq) goto loc_82608868;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825e18c0
	ctx.lr = 0x82608868;
	sub_825E18C0(ctx, base);
loc_82608868:
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

DEFINE_REX_FUNC(sub_8260B6C8) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x82793894
	ctx.lr = 0x8260B6F8;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8260b718
	goto loc_8260B718;
loc_8260B718:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
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

DEFINE_REX_FUNC(sub_8260D268) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8260D270;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r3,15400
	ctx.r3.s64 = ctx.r3.s64 + 15400;
	// bl 0x8260f8f8
	ctx.lr = 0x8260D280;
	sub_8260F8F8(ctx, base);
	// addi r11,r30,15400
	ctx.r11.s64 = r30.s64 + 15400;
	// li r29,63
	r29.s64 = 63;
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
loc_8260D28C:
	// addi r31,r31,-240
	r31.s64 = r31.s64 + -240;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x8260c698
	ctx.lr = 0x8260D298;
	sub_8260C698(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r11,3720
	ctx.r6.s64 = ctx.r11.s64 + 3720;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8212e1b0
	ctx.lr = 0x8260D2B0;
	sub_8212E1B0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x8260d28c
	if (!ctx.cr0.lt) goto loc_8260D28C;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x8260b670
	ctx.lr = 0x8260D2C0;
	sub_8260B670(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8260E7E0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8260EE98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8260EEA0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260EEC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// li r29,0
	r29.s64 = 0;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8260eef8
	if (ctx.cr6.eq) goto loc_8260EEF8;
	// lwz r3,144(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 144);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260EEEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8260eef8
	if (ctx.cr0.lt) goto loc_8260EEF8;
	// stw r30,212(r31)
	REX_STORE_U32(r31.u32 + 212, r30.u32);
loc_8260EEF8:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260EF10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82611C10) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82611E48) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1c9c
	ctx.lr = 0x82611E50;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,504(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 504);
	// li r26,0
	r26.s64 = 0;
	// lwz r11,480(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 480);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r27,r26
	r27.u64 = r26.u64;
	// mr r25,r26
	r25.u64 = r26.u64;
	// add r24,r10,r11
	r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r21,64
	r21.s64 = 64;
	// li r22,-2
	r22.s64 = -2;
loc_82611E7C:
	// lwz r11,452(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 452);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82611fc0
	if (!ctx.cr6.eq) goto loc_82611FC0;
	// lwz r11,648(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 648);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82611e9c
	if (ctx.cr6.eq) goto loc_82611E9C;
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82611ea0
	goto loc_82611EA0;
loc_82611E9C:
	// mr r30,r26
	r30.u64 = r26.u64;
loc_82611EA0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82611fc0
	if (ctx.cr6.eq) goto loc_82611FC0;
	// lwz r8,12(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82611ee0
	if (ctx.cr6.eq) goto loc_82611EE0;
	// lwz r9,28(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 28);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_82611EC0:
	// lwzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82611ee0
	if (ctx.cr6.lt) goto loc_82611EE0;
	// lwz r7,12(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82611ec0
	if (!ctx.cr6.eq) goto loc_82611EC0;
loc_82611EE0:
	// lwz r10,460(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 460);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r9,452(r31)
	REX_STORE_U32(r31.u32 + 452, ctx.r9.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r10,456(r31)
	REX_STORE_U32(r31.u32 + 456, ctx.r10.u32);
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r26,12(r30)
	REX_STORE_U32(r30.u32 + 12, r26.u32);
	// beq cr6,0x82611f24
	if (ctx.cr6.eq) goto loc_82611F24;
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
loc_82611F24:
	// addi r3,r31,508
	ctx.r3.s64 = r31.s64 + 508;
	// bl 0x82613af8
	ctx.lr = 0x82611F2C;
	sub_82613AF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826122c4
	if (ctx.cr0.eq) goto loc_826122C4;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r11.u32);
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 16);
	// beq 0x82611f50
	if (ctx.cr0.eq) goto loc_82611F50;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_82611F50:
	// addi r3,r31,548
	ctx.r3.s64 = r31.s64 + 548;
	// bl 0x82613af8
	ctx.lr = 0x82611F58;
	sub_82613AF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826122c4
	if (ctx.cr0.eq) goto loc_826122C4;
	// lwz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 604);
	// mr r27,r26
	r27.u64 = r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82611f80
	if (!ctx.cr6.eq) goto loc_82611F80;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// bne cr6,0x82611f84
	if (!ctx.cr6.eq) goto loc_82611F84;
loc_82611F80:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82611F84:
	// stw r11,464(r31)
	REX_STORE_U32(r31.u32 + 464, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r10,608(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 608);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,612(r31)
	REX_STORE_U32(r31.u32 + 612, ctx.r11.u32);
	// bne cr6,0x82611fc0
	if (!ctx.cr6.eq) goto loc_82611FC0;
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r4,24(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 24);
	// bl 0x8260e808
	ctx.lr = 0x82611FB8;
	sub_8260E808(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,608(r31)
	REX_STORE_U32(r31.u32 + 608, ctx.r11.u32);
loc_82611FC0:
	// lwz r11,472(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 472);
	// addi r30,r31,472
	r30.s64 = r31.s64 + 472;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82612214
	if (ctx.cr6.lt) goto loc_82612214;
	// beq cr6,0x826121f8
	if (ctx.cr6.eq) goto loc_826121F8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x826122b0
	if (!ctx.cr6.lt) goto loc_826122B0;
	// lwz r4,476(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 476);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,468(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 468);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826239b8
	ctx.lr = 0x8261200C;
	sub_826239B8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt 0x826122cc
	if (ctx.cr0.lt) goto loc_826122CC;
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,592(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 592);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// rlwinm r30,r10,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82612060
	if (ctx.cr6.eq) goto loc_82612060;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// blt cr6,0x82612044
	if (ctx.cr6.lt) goto loc_82612044;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// stw r11,592(r31)
	REX_STORE_U32(r31.u32 + 592, ctx.r11.u32);
	// b 0x826122b0
	goto loc_826122B0;
loc_82612044:
	// subf r5,r11,r30
	ctx.r5.u64 = r30.u64 - ctx.r11.u64;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + r24.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82612054;
	sub_826A1E70(ctx, base);
	// lwz r11,592(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 592);
	// stw r26,592(r31)
	REX_STORE_U32(r31.u32 + 592, r26.u32);
	// subf r30,r11,r30
	r30.u64 = r30.u64 - ctx.r11.u64;
loc_82612060:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x826122b0
	if (ctx.cr6.eq) goto loc_826122B0;
	// lwz r11,596(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 596);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// ble cr6,0x82612080
	if (!ctx.cr6.gt) goto loc_82612080;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// stw r11,596(r31)
	REX_STORE_U32(r31.u32 + 596, ctx.r11.u32);
	// b 0x82612100
	goto loc_82612100;
loc_82612080:
	// lwz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 580);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826120d4
	if (ctx.cr6.eq) goto loc_826120D4;
	// addi r29,r31,508
	r29.s64 = r31.s64 + 508;
	// addi r28,r31,548
	r28.s64 = r31.s64 + 548;
loc_82612094:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8260c0a0
	ctx.lr = 0x8261209C;
	sub_8260C0A0(ctx, base);
	// stw r3,592(r31)
	REX_STORE_U32(r31.u32 + 592, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8260c0a0
	ctx.lr = 0x826120A8;
	sub_8260C0A0(ctx, base);
	// lwz r11,596(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 596);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,596(r31)
	REX_STORE_U32(r31.u32 + 596, ctx.r11.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bgt cr6,0x826120d4
	if (ctx.cr6.gt) goto loc_826120D4;
	// lwz r11,588(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 588);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,588(r31)
	REX_STORE_U32(r31.u32 + 588, ctx.r11.u32);
	// lwz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 580);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82612094
	if (!ctx.cr6.eq) goto loc_82612094;
loc_826120D4:
	// lwz r11,596(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 596);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// ble cr6,0x826120ec
	if (!ctx.cr6.gt) goto loc_826120EC;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// stw r11,596(r31)
	REX_STORE_U32(r31.u32 + 596, ctx.r11.u32);
	// b 0x826120f4
	goto loc_826120F4;
loc_826120EC:
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// stw r26,596(r31)
	REX_STORE_U32(r31.u32 + 596, r26.u32);
loc_826120F4:
	// lwz r11,588(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 588);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,588(r31)
	REX_STORE_U32(r31.u32 + 588, ctx.r11.u32);
loc_82612100:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x826122b0
	if (ctx.cr6.eq) goto loc_826122B0;
	// lwz r10,484(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 484);
	// add r24,r30,r24
	r24.u64 = r30.u64 + r24.u64;
	// lwz r11,600(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 600);
	// add r25,r30,r25
	r25.u64 = r30.u64 + r25.u64;
	// lwz r9,480(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 480);
	// subf r23,r30,r23
	r23.u64 = r23.u64 - r30.u64;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// subf r10,r9,r24
	ctx.r10.u64 = r24.u64 - ctx.r9.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826122b0
	if (ctx.cr6.lt) goto loc_826122B0;
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r26,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r26.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r26.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// stw r21,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r21.u32);
	// bl 0x826a2e60
	ctx.lr = 0x8261214C;
	sub_826A2E60(ctx, base);
	// lwz r11,588(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 588);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826121a0
	if (ctx.cr6.eq) goto loc_826121A0;
	// lwz r11,696(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 696);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261219c
	if (ctx.cr6.eq) goto loc_8261219C;
	// addi r29,r31,664
	r29.s64 = r31.s64 + 664;
loc_82612168:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8260c0a0
	ctx.lr = 0x82612170;
	sub_8260C0A0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82612190
	if (ctx.cr0.eq) goto loc_82612190;
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r4,24(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 24);
	// bl 0x8260ef20
	ctx.lr = 0x82612188;
	sub_8260EF20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82612190;
	sub_8264C3D0(ctx, base);
loc_82612190:
	// lwz r11,696(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 696);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82612168
	if (!ctx.cr6.eq) goto loc_82612168;
loc_8261219C:
	// stw r26,588(r31)
	REX_STORE_U32(r31.u32 + 588, r26.u32);
loc_826121A0:
	// lwz r11,504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 504);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// lwz r10,480(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 480);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r25,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r25.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r25.u32);
	// lwz r3,144(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 144);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826121D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r10,496(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 496);
	// clrldi r11,r25,32
	ctx.r11.u64 = r25.u64 & 0xFFFFFFFF;
	// lwz r24,480(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 480);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r26,504(r31)
	REX_STORE_U32(r31.u32 + 504, r26.u32);
	// mr r25,r26
	r25.u64 = r26.u64;
	// std r11,496(r31)
	REX_STORE_U64(r31.u32 + 496, ctx.r11.u64);
	// b 0x826122b0
	goto loc_826122B0;
loc_826121F8:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,468(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 468);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,476
	ctx.r4.s64 = r31.s64 + 476;
	// bl 0x82623158
	ctx.lr = 0x8261220C;
	sub_82623158(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x826122b0
	goto loc_826122B0;
loc_82612214:
	// lwz r11,452(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 452);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261224c
	if (ctx.cr6.eq) goto loc_8261224C;
	// lwz r3,468(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 468);
	// bl 0x8261df08
	ctx.lr = 0x82612228;
	sub_8261DF08(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r31,508
	ctx.r3.s64 = r31.s64 + 508;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x8260c0a0
	ctx.lr = 0x82612238;
	sub_8260C0A0(ctx, base);
	// stw r3,592(r31)
	REX_STORE_U32(r31.u32 + 592, ctx.r3.u32);
	// addi r3,r31,548
	ctx.r3.s64 = r31.s64 + 548;
	// bl 0x8260c0a0
	ctx.lr = 0x82612244;
	sub_8260C0A0(ctx, base);
	// stw r3,596(r31)
	REX_STORE_U32(r31.u32 + 596, ctx.r3.u32);
	// b 0x826122b0
	goto loc_826122B0;
loc_8261224C:
	// lwz r11,656(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 656);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826122b0
	if (!ctx.cr6.eq) goto loc_826122B0;
	// lwz r11,612(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 612);
	// mr r23,r26
	r23.u64 = r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826122b0
	if (ctx.cr6.eq) goto loc_826122B0;
	// lwz r11,696(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 696);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826122ac
	if (ctx.cr6.eq) goto loc_826122AC;
	// addi r29,r31,664
	r29.s64 = r31.s64 + 664;
loc_82612278:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8260c0a0
	ctx.lr = 0x82612280;
	sub_8260C0A0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x826122a0
	if (ctx.cr0.eq) goto loc_826122A0;
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r4,24(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 24);
	// bl 0x8260ef20
	ctx.lr = 0x82612298;
	sub_8260EF20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x826122A0;
	sub_8264C3D0(ctx, base);
loc_826122A0:
	// lwz r11,696(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 696);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82612278
	if (!ctx.cr6.eq) goto loc_82612278;
loc_826122AC:
	// stw r26,596(r31)
	REX_STORE_U32(r31.u32 + 596, r26.u32);
loc_826122B0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt cr6,0x826122cc
	if (ctx.cr6.lt) goto loc_826122CC;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bgt cr6,0x82611e7c
	if (ctx.cr6.gt) goto loc_82611E7C;
	// b 0x826122cc
	goto loc_826122CC;
loc_826122C4:
	// lis r27,-32761
	r27.s64 = -2147024896;
	// ori r27,r27,14
	r27.u64 = r27.u64 | 14;
loc_826122CC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82612398
	if (ctx.cr6.eq) goto loc_82612398;
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r26,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r26.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r26.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// stw r21,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r21.u32);
	// bl 0x826a2e60
	ctx.lr = 0x826122F0;
	sub_826A2E60(ctx, base);
	// lwz r11,588(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 588);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82612344
	if (ctx.cr6.eq) goto loc_82612344;
	// lwz r11,696(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 696);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82612340
	if (ctx.cr6.eq) goto loc_82612340;
	// addi r29,r31,664
	r29.s64 = r31.s64 + 664;
loc_8261230C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8260c0a0
	ctx.lr = 0x82612314;
	sub_8260C0A0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82612334
	if (ctx.cr0.eq) goto loc_82612334;
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r4,24(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 24);
	// bl 0x8260ef20
	ctx.lr = 0x8261232C;
	sub_8260EF20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82612334;
	sub_8264C3D0(ctx, base);
loc_82612334:
	// lwz r11,696(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 696);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8261230c
	if (!ctx.cr6.eq) goto loc_8261230C;
loc_82612340:
	// stw r26,588(r31)
	REX_STORE_U32(r31.u32 + 588, r26.u32);
loc_82612344:
	// stw r25,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r25.u32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// lwz r11,504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 504);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r10,480(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 480);
	// stw r25,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r25.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,144(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 144);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82612378;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,504(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 504);
	// clrldi r11,r25,32
	ctx.r11.u64 = r25.u64 & 0xFFFFFFFF;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// add r9,r10,r25
	ctx.r9.u64 = ctx.r10.u64 + r25.u64;
	// ld r10,496(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 496);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r9.u32);
	// std r11,496(r31)
	REX_STORE_U64(r31.u32 + 496, ctx.r11.u64);
loc_82612398:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_8263A078) {
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
	// bl 0x826a1cbc
	ctx.lr = 0x8263A080;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// li r30,-5
	r30.s64 = -5;
	// addi r29,r11,22048
	r29.s64 = ctx.r11.s64 + 22048;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r29
	r31.u64 = r29.u64;
	// lfd f31,10608(r11)
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 10608);
loc_8263A0A4:
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f2,f13
	ctx.f2.f64 = double(float(ctx.f13.f64));
	// bl 0x8269f778
	ctx.lr = 0x8263A0C0;
	sub_8269F778(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r10,r29,80
	ctx.r10.s64 = r29.s64 + 80;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8263a0a4
	if (ctx.cr6.lt) goto loc_8263A0A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r29,80
	r31.s64 = r29.s64 + 80;
	// li r30,0
	r30.s64 = 0;
	// lfs f30,8516(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8516);
	f30.f64 = double(temp.f32);
loc_8263A0EC:
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f2,f12,f30
	ctx.f2.f64 = double(float(ctx.f12.f64 * f30.f64));
	// bl 0x8269f778
	ctx.lr = 0x8263A10C;
	sub_8269F778(ctx, base);
	// addi r11,r29,80
	ctx.r11.s64 = r29.s64 + 80;
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8263a0ec
	if (ctx.cr6.lt) goto loc_8263A0EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,160(r29)
	REX_STORE_U32(r29.u32 + 160, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82640B18) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82640b28
	if (!ctx.cr6.eq) goto loc_82640B28;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// blt cr6,0x82640ca8
	if (ctx.cr6.lt) goto loc_82640CA8;
loc_82640B28:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bgt cr6,0x82640ca8
	if (ctx.cr6.gt) goto loc_82640CA8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82640ca8
	if (!ctx.cr6.gt) goto loc_82640CA8;
	// cmpwi cr6,r3,8000
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8000, ctx.xer);
	// bgt cr6,0x82640b48
	if (ctx.cr6.gt) goto loc_82640B48;
	// li r11,512
	ctx.r11.s64 = 512;
	// b 0x82640bd8
	goto loc_82640BD8;
loc_82640B48:
	// cmpwi cr6,r3,11025
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11025, ctx.xer);
	// bgt cr6,0x82640b58
	if (ctx.cr6.gt) goto loc_82640B58;
	// li r11,512
	ctx.r11.s64 = 512;
	// b 0x82640bd8
	goto loc_82640BD8;
loc_82640B58:
	// cmpwi cr6,r3,16000
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16000, ctx.xer);
	// bgt cr6,0x82640b68
	if (ctx.cr6.gt) goto loc_82640B68;
	// li r11,512
	ctx.r11.s64 = 512;
	// b 0x82640bd8
	goto loc_82640BD8;
loc_82640B68:
	// cmpwi cr6,r3,22050
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22050, ctx.xer);
	// bgt cr6,0x82640b78
	if (ctx.cr6.gt) goto loc_82640B78;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// b 0x82640bd8
	goto loc_82640BD8;
loc_82640B78:
	// cmpwi cr6,r3,32000
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32000, ctx.xer);
	// bgt cr6,0x82640b90
	if (ctx.cr6.gt) goto loc_82640B90;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82640bb8
	if (!ctx.cr6.eq) goto loc_82640BB8;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// b 0x82640c2c
	goto loc_82640C2C;
loc_82640B90:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,44100
	ctx.r10.u64 = ctx.r11.u64 | 44100;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82640ba8
	if (ctx.cr6.gt) goto loc_82640BA8;
	// li r11,2048
	ctx.r11.s64 = 2048;
	// b 0x82640bd8
	goto loc_82640BD8;
loc_82640BA8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,48000
	ctx.r10.u64 = ctx.r11.u64 | 48000;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82640bc0
	if (ctx.cr6.gt) goto loc_82640BC0;
loc_82640BB8:
	// li r11,2048
	ctx.r11.s64 = 2048;
	// b 0x82640bd8
	goto loc_82640BD8;
loc_82640BC0:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,30464
	ctx.r10.u64 = ctx.r11.u64 | 30464;
	// li r11,4096
	ctx.r11.s64 = 4096;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82640bd8
	if (!ctx.cr6.gt) goto loc_82640BD8;
	// li r11,8192
	ctx.r11.s64 = 8192;
loc_82640BD8:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x82640c28
	if (!ctx.cr6.eq) goto loc_82640C28;
	// rlwinm r10,r6,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82640bf8
	if (!ctx.cr6.eq) goto loc_82640BF8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82640BF8:
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x82640c10
	if (!ctx.cr6.eq) goto loc_82640C10;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82640C10:
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bne cr6,0x82640ca0
	if (!ctx.cr6.eq) goto loc_82640CA0;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82640C28:
	// bge cr6,0x82640ca0
	if (!ctx.cr6.lt) goto loc_82640CA0;
loc_82640C2C:
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// mullw r8,r11,r4
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// divwu r9,r9,r3
	ctx.r9.u64 = uint32_t(ctx.r3.u32 ? ctx.r9.u32 / ctx.r3.u32 : 0);
	// addi r7,r9,7
	ctx.r7.s64 = ctx.r9.s64 + 7;
	// rlwinm r9,r7,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82640c70
	if (!ctx.cr6.eq) goto loc_82640C70;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82640c80
	if (!ctx.cr6.eq) goto loc_82640C80;
	// mullw r9,r11,r3
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// divwu r9,r9,r3
	ctx.r9.u64 = uint32_t(ctx.r3.u32 ? ctx.r9.u32 / ctx.r3.u32 : 0);
	// addi r8,r9,7
	ctx.r8.s64 = ctx.r9.s64 + 7;
	// rlwinm r9,r8,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
loc_82640C70:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x82640ca0
	if (ctx.cr6.gt) goto loc_82640CA0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82640ca0
	if (!ctx.cr6.eq) goto loc_82640CA0;
loc_82640C80:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r9,r11,r4
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// divwu r9,r9,r3
	ctx.r9.u64 = uint32_t(ctx.r3.u32 ? ctx.r9.u32 / ctx.r3.u32 : 0);
	// addi r8,r9,7
	ctx.r8.s64 = ctx.r9.s64 + 7;
	// rlwinm r7,r8,0,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82640c80
	if (ctx.cr6.eq) goto loc_82640C80;
loc_82640CA0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82640CA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8264AAA8) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c98
	ctx.lr = 0x8264AAB0;
	// stfd f29,-128(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -128, f29.u64);
	// stfd f30,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, f30.u64);
	// stfd f31,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x826a3f64
	ctx.lr = 0x8264AAC4;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// li r24,0
	r24.s64 = 0;
	// addze r26,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r26.s64 = temp.s64;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// ble cr6,0x8264aafc
	if (!ctx.cr6.gt) goto loc_8264AAFC;
loc_8264AAEC:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// srw r11,r6,r24
	ctx.r11.u64 = r24.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (r24.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x8264aaec
	if (ctx.cr6.gt) goto loc_8264AAEC;
loc_8264AAFC:
	// addi r11,r26,-1
	ctx.r11.s64 = r26.s64 + -1;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// and r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 & r26.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// add r25,r11,r29
	r25.u64 = ctx.r11.u64 + r29.u64;
	// rlwinm r23,r8,27,31,31
	r23.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// mr r30,r29
	r30.u64 = r29.u64;
	// mr r28,r25
	r28.u64 = r25.u64;
	// cmpwi cr6,r6,64
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 64, ctx.xer);
	// blt cr6,0x8264aba4
	if (ctx.cr6.lt) goto loc_8264ABA4;
	// cmpwi cr6,r6,2048
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2048, ctx.xer);
	// bgt cr6,0x8264aba4
	if (ctx.cr6.gt) goto loc_8264ABA4;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x8264aba4
	if (ctx.cr6.eq) goto loc_8264ABA4;
	// srawi r11,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 7;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-12408
	ctx.r8.s64 = ctx.r10.s64 + -12408;
	// lwzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lfs f13,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f8,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f6,40(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f4,20(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fneg f3,f6
	ctx.f3.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// lfs f2,16(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f7,144(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f4,160(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fneg f1,f12
	ctx.f1.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f3,112(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f1,128(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// b 0x8264ac78
	goto loc_8264AC78;
loc_8264ABA4:
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f30,f0
	f30.f64 = double(ctx.f0.s64);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lfd f0,4296(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 4296);
	// fdiv f13,f0,f30
	ctx.f13.f64 = ctx.f0.f64 / f30.f64;
	// lfd f0,-21784(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + -21784);
	// fmul f29,f13,f0
	f29.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x826a15c0
	ctx.lr = 0x8264ABD4;
	sub_826A15C0(ctx, base);
	// fmul f12,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f1.f64 * f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x826a14e0
	ctx.lr = 0x8264ABE8;
	sub_826A14E0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// fmul f10,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f1.f64 * f31.f64;
	// lfd f0,3728(r8)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 3728);
	// fdiv f30,f0,f30
	f30.f64 = ctx.f0.f64 / f30.f64;
	// lfd f0,-21792(r7)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + -21792);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmul f29,f30,f0
	f29.f64 = f30.f64 * ctx.f0.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x826a15c0
	ctx.lr = 0x8264AC14;
	sub_826A15C0(ctx, base);
	// fmul f8,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f1.f64 * f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// stfs f7,144(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x826a14e0
	ctx.lr = 0x8264AC28;
	sub_826A14E0(ctx, base);
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// fmul f6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f1.f64 * f31.f64;
	// lfd f0,-21800(r6)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r6.u32 + -21800);
	// fmul f31,f30,f0
	f31.f64 = f30.f64 * ctx.f0.f64;
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x826a14e0
	ctx.lr = 0x8264AC48;
	sub_826A14E0(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfd f0,8312(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r5.u32 + 8312);
	// fmul f4,f1,f0
	ctx.f4.f64 = ctx.f1.f64 * ctx.f0.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// frsp f31,f4
	f31.f64 = double(float(ctx.f4.f64));
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x826a15c0
	ctx.lr = 0x8264AC64;
	sub_826A15C0(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// stfs f3,160(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f0,3824(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 3824);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f31,f0
	ctx.f2.f64 = double(float(f31.f64 * ctx.f0.f64));
loc_8264AC78:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f2,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lvx128 v62,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r11,-21568
	r31.s64 = ctx.r11.s64 + -21568;
	// vspltw128 v13,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// lvx128 v61,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,32
	ctx.r5.s64 = 32;
	// vspltw128 v12,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// vspltw128 v0,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// lvx128 v59,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v127,v61,0
	simde_mm_store_si128((simde__m128i*)v127.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// vor v9,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vspltw128 v10,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xFF));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v62,r31,r5
	ea = (r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// vor v8,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vsldoi v11,v12,v0,8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 8));
	// vmaddcfp128 v9,v127,v9,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vxor128 v126,v127,v62
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// srawi r10,r26,2
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x3) != 0);
	ctx.r10.s64 = r26.s32 >> 2;
	// lvx128 v58,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v12,v10,v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 8));
	// addze r27,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	r27.s64 = temp.s64;
	// lvx128 v57,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddcfp128 v8,v126,v8,v10
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vspltw128 v125,v58,0
	simde_mm_store_si128((simde__m128i*)v125.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0xFF));
	// vspltw128 v124,v57,0
	simde_mm_store_si128((simde__m128i*)v124.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xFF));
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// vsldoi v0,v0,v9,8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), 8));
	// vsldoi v13,v13,v8,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), 8));
	// vxor128 v10,v0,v63
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// ble cr6,0x8264adac
	if (!ctx.cr6.gt) goto loc_8264ADAC;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_8264AD24:
	// lvx128 v56,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp128 v12,v126,v0,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vor128 v55,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// lvx128 v54,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp128 v11,v127,v13,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vor128 v53,v54,v54
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_load_si128((simde__m128i*)ctx.v54.u8));
	// vrlimi128 v55,v54,5,2
	simde_mm_store_ps(ctx.v55.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v54.f32), 78), 5));
	// vrlimi128 v53,v56,5,2
	simde_mm_store_ps(ctx.v53.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v56.f32), 78), 5));
	// vmulfp128 v9,v13,v55
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v55.f32)));
	// vpermwi128 v8,v55,78
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), 0xB1));
	// stvx128 v53,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r28,-16
	r28.s64 = r28.s64 + -16;
	// vmaddfp128 v0,v127,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp128 v13,v126,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v10,v10,v8,v9
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// stvx128 v10,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// vxor128 v10,v0,v63
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// bdnz 0x8264ad24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8264AD24;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x8264adac
	if (!ctx.cr6.gt) goto loc_8264ADAC;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_8264AD7C:
	// lvx128 v52,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp128 v12,v126,v0,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v9,v13,v52
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v52.f32)));
	// vpermwi128 v8,v52,78
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), 0xB1));
	// vmaddfp128 v11,v127,v13,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp128 v0,v127,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v10,v10,v8,v9
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp128 v13,v126,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v10,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// vxor128 v10,v0,v63
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// bdnz 0x8264ad7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8264AD7C;
loc_8264ADAC:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// addi r5,r24,-1
	ctx.r5.s64 = r24.s64 + -1;
	// bne cr6,0x8264adbc
	if (!ctx.cr6.eq) goto loc_8264ADBC;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_8264ADBC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bctrl 
	ctx.lr = 0x8264ADD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,48
	ctx.r9.s64 = 48;
	// lvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,16
	ctx.r8.s64 = 16;
	// vor v9,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// li r7,32
	ctx.r7.s64 = 32;
	// vsldoi128 v11,v124,v0,12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)v124.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 4));
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// lvx128 v10,r31,r9
	ea = (r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// vmaddcfp128 v9,v126,v9,v125
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(v125.f32)));
	// vor v8,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vsldoi128 v12,v125,v10,12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)v125.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 4));
	// lvx128 v63,r31,r8
	ea = (r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r31,r7
	ea = (r31.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddcfp128 v8,v127,v8,v124
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(v124.f32)));
	// vor v7,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vsldoi v13,v10,v9,12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), 4));
	// vrlimi128 v12,v9,1,0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v9.f32), 228), 1));
	// vmaddcfp128 v7,v127,v7,v0
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsldoi v0,v0,v8,12
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), 4));
	// vmaddfp128 v10,v126,v8,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vrlimi128 v11,v8,1,0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v8.f32), 228), 1));
	// vrlimi128 v0,v7,1,0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v7.f32), 228), 1));
	// vrlimi128 v13,v10,1,0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v10.f32), 228), 1));
	// vxor128 v8,v0,v63
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vxor128 v9,v13,v63
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vxor128 v62,v0,v61
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// ble cr6,0x8264aeac
	if (!ctx.cr6.gt) goto loc_8264AEAC;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_8264AE48:
	// lvx128 v51,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v10,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vor128 v50,v51,v51
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_load_si128((simde__m128i*)ctx.v51.u8));
	// lvx128 v49,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp128 v11,v127,v13,v11
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddcfp128 v10,v126,v10,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vpermwi128 v12,v51,78
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.u32), 0xB1));
	// vrlimi128 v50,v49,5,1
	simde_mm_store_ps(ctx.v50.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v49.f32), 147), 5));
	// vrlimi128 v12,v49,5,2
	simde_mm_store_ps(ctx.v12.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v49.f32), 78), 5));
	// vmulfp128 v6,v62,v50
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v50.f32)));
	// vmulfp128 v7,v13,v50
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v50.f32)));
	// vmaddfp128 v13,v126,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp128 v0,v127,v10,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v9,v9,v12,v6
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v8,v8,v12,v7
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vor v12,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vxor128 v62,v0,v61
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vpermwi128 v48,v9,228
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0x1B));
	// vxor128 v9,v13,v63
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// stvx128 v8,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vxor128 v8,v0,v63
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// stvx128 v48,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// bdnz 0x8264ae48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8264AE48;
loc_8264AEAC:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8264aec0
	if (ctx.cr6.eq) goto loc_8264AEC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r11.u32);
loc_8264AEC0:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x826a41fc
	ctx.lr = 0x8264AECC;
	// lfd f29,-128(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f30,-120(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_82672A28) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addi r10,r3,36
	ctx.r10.s64 = ctx.r3.s64 + 36;
	// b 0x82672a48
	goto loc_82672A48;
loc_82672A34:
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82672a60
	if (ctx.cr6.eq) goto loc_82672A60;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82672A48:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82672a58
	if (ctx.cr6.eq) goto loc_82672A58;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82672a34
	if (!ctx.cr0.eq) goto loc_82672A34;
loc_82672A58:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82672A60:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r3
	ea = ctx.r3.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r3
	ea = ctx.r3.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82672a60
	if (!ctx.cr0.eq) goto loc_82672A60;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82675AD0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82675af4
	if (!ctx.cr6.eq) goto loc_82675AF4;
	// addi r3,r3,-208
	ctx.r3.s64 = ctx.r3.s64 + -208;
	// bl 0x82676ea8
	ctx.lr = 0x82675AF0;
	sub_82676EA8(ctx, base);
	// b 0x82675afc
	goto loc_82675AFC;
loc_82675AF4:
	// addi r3,r3,-1100
	ctx.r3.s64 = ctx.r3.s64 + -1100;
	// bl 0x8267f410
	ctx.lr = 0x82675AFC;
	sub_8267F410(ctx, base);
loc_82675AFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826761C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb4
	ctx.lr = 0x826761C8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r31,r11,29,3,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// bl 0x826a2e60
	ctx.lr = 0x826761FC;
	sub_826A2E60(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// beq cr6,0x8267622c
	if (ctx.cr6.eq) goto loc_8267622C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stwx r28,r31,r29
	REX_STORE_U32(r31.u32 + r29.u32, r28.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8267622C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826781D0) {
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
	// bl 0x826a1c94
	ctx.lr = 0x826781D8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	r20.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// stw r20,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r20.u32);
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// mr r19,r9
	r19.u64 = ctx.r9.u64;
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8267821c
	if (!ctx.cr6.eq) goto loc_8267821C;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// addi r27,r1,84
	r27.s64 = ctx.r1.s64 + 84;
	// sth r30,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r30.u16);
	// sth r30,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, r30.u16);
loc_8267821C:
	// addi r28,r31,244
	r28.s64 = r31.s64 + 244;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827938a4
	ctx.lr = 0x82678228;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r8,296(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 296);
	// addi r29,r31,312
	r29.s64 = r31.s64 + 312;
	// mr r25,r30
	r25.u64 = r30.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// lwz r11,20(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lhz r9,18(r8)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + 18);
	// rldimi r7,r9,32,16
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFF00000000) | (ctx.r7.u64 & 0xFFFF0000FFFFFFFF);
	// clrlwi r11,r7,30
	ctx.r11.u64 = ctx.r7.u32 & 0x3;
	// sth r9,92(r1)
	REX_STORE_U16(ctx.r1.u32 + 92, ctx.r9.u16);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// b 0x82678290
	goto loc_82678290;
loc_8267826C:
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r11,r26
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, r26.u64, ctx.xer);
	// beq cr6,0x8267829c
	if (ctx.cr6.eq) goto loc_8267829C;
	// rldicl r9,r9,62,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 62) & 0x3FFFFFFFFFFFFFFF;
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_82678290:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8267826c
	if (!ctx.cr6.eq) goto loc_8267826C;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_8267829C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826782b0
	if (ctx.cr6.eq) goto loc_826782B0;
	// lis r30,-32646
	r30.s64 = -2139488256;
	// ori r30,r30,4100
	r30.u64 = r30.u64 | 4100;
	// b 0x82678340
	goto loc_82678340;
loc_826782B0:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267f9c8
	ctx.lr = 0x826782D0;
	sub_8267F9C8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82678340
	if (ctx.cr0.lt) goto loc_82678340;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r5,r11,144
	ctx.r5.s64 = ctx.r11.s64 + 144;
	// bl 0x82676bf8
	ctx.lr = 0x826782EC;
	sub_82676BF8(ctx, base);
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 336);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,336(r31)
	REX_STORE_U32(r31.u32 + 336, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82678300:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82678300
	if (!ctx.cr0.eq) goto loc_82678300;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827938b4
	ctx.lr = 0x82678324;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r25,r20
	r25.u64 = r20.u64;
	// bl 0x8267d0b8
	ctx.lr = 0x82678338;
	sub_8267D0B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x8267836c
	if (!ctx.cr0.lt) goto loc_8267836C;
loc_82678340:
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82678354
	if (ctx.cr6.eq) goto loc_82678354;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82677508
	ctx.lr = 0x82678354;
	sub_82677508(ctx, base);
loc_82678354:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x82678364
	if (ctx.cr6.eq) goto loc_82678364;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827938b4
	ctx.lr = 0x82678364;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82678364:
	// stw r20,0(r19)
	REX_STORE_U32(r19.u32 + 0, r20.u32);
	// b 0x82678378
	goto loc_82678378;
loc_8267836C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r11.u32);
loc_82678378:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_82681B80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82681B88;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r29,2
	r29.s64 = 2;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
	// lhz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// sth r11,42(r31)
	REX_STORE_U16(r31.u32 + 42, ctx.r11.u16);
	// sth r29,40(r31)
	REX_STORE_U16(r31.u32 + 40, r29.u16);
	// bl 0x82680ed0
	ctx.lr = 0x82681BCC;
	sub_82680ED0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82682E00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82682E08;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 40);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r3,r4,r11
	ctx.r3.u64 = ctx.r4.u64 + ctx.r11.u64;
	// subf r29,r10,r5
	r29.u64 = ctx.r5.u64 - ctx.r10.u64;
	// std r3,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r3.u64);
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82682e7c
	if (!ctx.cr6.gt) goto loc_82682E7C;
	// bl 0x826a2d40
	ctx.lr = 0x82682E38;
	sub_826A2D40(ctx, base);
	// clrldi r11,r29,32
	ctx.r11.u64 = r29.u64 & 0xFFFFFFFF;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fdiv f13,f1,f0
	ctx.f13.f64 = ctx.f1.f64 / ctx.f0.f64;
	// lfd f0,-10304(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -10304);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// ld r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82682c48
	ctx.lr = 0x82682E70;
	sub_82682C48(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
	// std r11,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r11.u64);
loc_82682E7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82686430) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r4,4
	ctx.r9.s64 = ctx.r4.s64 + 4;
	// mulli r11,r11,20
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(20));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
loc_82686448:
	// mfmsr r7
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r7.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r8,0,r9
	ea = ctx.r9.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r9
	ea = ctx.r9.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82686448
	if (!ctx.cr0.eq) goto loc_82686448;
	// addi r9,r5,4
	ctx.r9.s64 = ctx.r5.s64 + 4;
	// stw r4,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r4.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r9,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r8,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// stw r9,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// b 0x82685f48
	sub_82685F48(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82689268) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r3,284
	ctx.r11.s64 = ctx.r3.s64 + 284;
loc_8268926C:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r4,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8268926c
	if (!ctx.cr0.eq) goto loc_8268926C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8268A570) {
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c90
	ctx.lr = 0x8268A578;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8268a68c
	if (!ctx.cr6.eq) goto loc_8268A68C;
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lis r10,-32151
	ctx.r10.s64 = -2107047936;
	// addi r11,r11,-28456
	ctx.r11.s64 = ctx.r11.s64 + -28456;
	// lis r9,-32151
	ctx.r9.s64 = -2107047936;
	// lis r8,-32151
	ctx.r8.s64 = -2107047936;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-25128
	ctx.r10.s64 = ctx.r10.s64 + -25128;
	// addi r9,r9,-28416
	ctx.r9.s64 = ctx.r9.s64 + -28416;
	// addi r11,r8,-28280
	ctx.r11.s64 = ctx.r8.s64 + -28280;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lis r7,-32151
	ctx.r7.s64 = -2107047936;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lis r6,-32151
	ctx.r6.s64 = -2107047936;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lis r5,-32151
	ctx.r5.s64 = -2107047936;
	// addi r10,r7,-28168
	ctx.r10.s64 = ctx.r7.s64 + -28168;
	// addi r9,r6,-24680
	ctx.r9.s64 = ctx.r6.s64 + -24680;
	// addi r11,r5,-24568
	ctx.r11.s64 = ctx.r5.s64 + -24568;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lis r4,-32151
	ctx.r4.s64 = -2107047936;
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lis r31,-32151
	r31.s64 = -2107047936;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lis r30,-32151
	r30.s64 = -2107047936;
	// addi r10,r4,-28056
	ctx.r10.s64 = ctx.r4.s64 + -28056;
	// addi r9,r31,-28016
	ctx.r9.s64 = r31.s64 + -28016;
	// addi r11,r30,-27856
	ctx.r11.s64 = r30.s64 + -27856;
	// stw r10,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// lis r29,-32151
	r29.s64 = -2107047936;
	// stw r9,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// lis r28,-32151
	r28.s64 = -2107047936;
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lis r27,-32151
	r27.s64 = -2107047936;
	// addi r10,r29,-24456
	ctx.r10.s64 = r29.s64 + -24456;
	// addi r9,r28,-24192
	ctx.r9.s64 = r28.s64 + -24192;
	// addi r11,r27,-24096
	ctx.r11.s64 = r27.s64 + -24096;
	// stw r10,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// lis r26,-32151
	r26.s64 = -2107047936;
	// stw r9,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// lis r25,-32151
	r25.s64 = -2107047936;
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lis r24,-32151
	r24.s64 = -2107047936;
	// addi r10,r26,-27784
	ctx.r10.s64 = r26.s64 + -27784;
	// addi r9,r25,-27696
	ctx.r9.s64 = r25.s64 + -27696;
	// addi r11,r24,-23904
	ctx.r11.s64 = r24.s64 + -23904;
	// stw r10,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// lis r23,-32151
	r23.s64 = -2107047936;
	// stw r9,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// lis r22,-32151
	r22.s64 = -2107047936;
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lis r21,-32151
	r21.s64 = -2107047936;
	// addi r10,r23,-23816
	ctx.r10.s64 = r23.s64 + -23816;
	// addi r9,r22,-23712
	ctx.r9.s64 = r22.s64 + -23712;
	// addi r11,r21,-27648
	ctx.r11.s64 = r21.s64 + -27648;
	// stw r10,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// lis r20,-32151
	r20.s64 = -2107047936;
	// stw r9,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// lis r19,-32151
	r19.s64 = -2107047936;
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// lis r18,-32151
	r18.s64 = -2107047936;
	// addi r10,r20,-27640
	ctx.r10.s64 = r20.s64 + -27640;
	// addi r9,r19,-23584
	ctx.r9.s64 = r19.s64 + -23584;
	// addi r11,r18,-23472
	ctx.r11.s64 = r18.s64 + -23472;
	// stw r10,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// stw r9,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
loc_8268A68C:
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_82693E08) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lfs f0,-3352(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -3352);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,-16(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82693E38:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfsu f0,4(r4)
	ea = 4 + ctx.r4.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r4.u32 = ea;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f0,f0,f0,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f11.f64)));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82693e6c
	if (!ctx.cr6.lt) goto loc_82693E6C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_82693E6C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82693e38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82693E38;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82697218) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,92(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 92);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8269724c
	if (!ctx.cr6.eq) goto loc_8269724C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f5,3720(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	ctx.f5.f64 = double(temp.f32);
	// b 0x82697258
	goto loc_82697258;
loc_8269724C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lfs f5,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f5.f64 = double(temp.f32);
loc_82697258:
	// lwz r8,24(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r7,r3,104
	ctx.r7.s64 = ctx.r3.s64 + 104;
	// lwz r30,20(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lfs f4,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lfs f3,28(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f2,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lwz r5,4(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f1,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r7,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x82697970
	ctx.lr = 0x8269729C;
	sub_82697970(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

DEFINE_REX_FUNC(sub_8269AE50) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca0
	ctx.lr = 0x8269AE58;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// bl 0x82699a50
	ctx.lr = 0x8269AE78;
	sub_82699A50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8269b070
	if (!ctx.cr0.eq) goto loc_8269B070;
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// lhz r27,84(r1)
	r27.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82699af8
	ctx.lr = 0x8269AE9C;
	sub_82699AF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8269b070
	if (!ctx.cr0.eq) goto loc_8269B070;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8269ad98
	ctx.lr = 0x8269AEB4;
	sub_8269AD98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8269b070
	if (!ctx.cr0.eq) goto loc_8269B070;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// and. r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8269aed0
	if (!ctx.cr0.eq) goto loc_8269AED0;
loc_8269AEC8:
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x8269b070
	goto loc_8269B070;
loc_8269AED0:
	// cmplwi cr6,r31,64
	ctx.cr6.compare<uint32_t>(r31.u32, 64, ctx.xer);
	// beq cr6,0x8269aeec
	if (ctx.cr6.eq) goto loc_8269AEEC;
	// cmplwi cr6,r31,256
	ctx.cr6.compare<uint32_t>(r31.u32, 256, ctx.xer);
	// bne cr6,0x8269aec8
	if (!ctx.cr6.eq) goto loc_8269AEC8;
	// lis r26,0
	r26.s64 = 0;
	// ori r26,r26,48000
	r26.u64 = r26.u64 | 48000;
	// b 0x8269aef0
	goto loc_8269AEF0;
loc_8269AEEC:
	// li r26,32000
	r26.s64 = 32000;
loc_8269AEF0:
	// lis r24,20480
	r24.s64 = 1342177280;
	// lis r22,24576
	r22.s64 = 1610612736;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(r28.u32, r24.u32, ctx.xer);
	// beq cr6,0x8269af18
	if (ctx.cr6.eq) goto loc_8269AF18;
	// cmplw cr6,r28,r22
	ctx.cr6.compare<uint32_t>(r28.u32, r22.u32, ctx.xer);
	// beq cr6,0x8269af10
	if (ctx.cr6.eq) goto loc_8269AF10;
loc_8269AF08:
	// li r3,1167
	ctx.r3.s64 = 1167;
	// b 0x8269b070
	goto loc_8269B070;
loc_8269AF10:
	// mulli r11,r26,2000
	ctx.r11.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(2000));
	// b 0x8269af1c
	goto loc_8269AF1C;
loc_8269AF18:
	// mulli r11,r26,16000
	ctx.r11.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(16000));
loc_8269AF1C:
	// lis r10,15
	ctx.r10.s64 = 983040;
	// addis r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 983040;
	// ori r10,r10,16960
	ctx.r10.u64 = ctx.r10.u64 | 16960;
	// addi r11,r11,16959
	ctx.r11.s64 = ctx.r11.s64 + 16959;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// divwu r29,r11,r10
	r29.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// beq cr6,0x8269af4c
	if (ctx.cr6.eq) goto loc_8269AF4C;
	// bl 0x82699930
	ctx.lr = 0x8269AF3C;
	sub_82699930(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8269af60
	if (!ctx.cr0.eq) goto loc_8269AF60;
	// li r3,170
	ctx.r3.s64 = 170;
	// b 0x8269b070
	goto loc_8269B070;
loc_8269AF4C:
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// bl 0x826a2e60
	ctx.lr = 0x8269AF60;
	sub_826A2E60(ctx, base);
loc_8269AF60:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826999d0
	ctx.lr = 0x8269AF70;
	sub_826999D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8269af80
	if (ctx.cr6.eq) goto loc_8269AF80;
	// stw r29,0(r23)
	REX_STORE_U32(r23.u32 + 0, r29.u32);
loc_8269AF80:
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(r28.u32, r24.u32, ctx.xer);
	// beq cr6,0x8269afe8
	if (ctx.cr6.eq) goto loc_8269AFE8;
	// cmplw cr6,r28,r22
	ctx.cr6.compare<uint32_t>(r28.u32, r22.u32, ctx.xer);
	// bne cr6,0x8269af08
	if (!ctx.cr6.eq) goto loc_8269AF08;
	// lis r10,-32150
	ctx.r10.s64 = -2106982400;
	// sth r27,50(r31)
	REX_STORE_U16(r31.u32 + 50, r27.u16);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// addi r10,r10,-24144
	ctx.r10.s64 = ctx.r10.s64 + -24144;
	// sth r11,48(r31)
	REX_STORE_U16(r31.u32 + 48, ctx.r11.u16);
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// stw r31,60(r31)
	REX_STORE_U32(r31.u32 + 60, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r25,0(r31)
	REX_STORE_U32(r31.u32 + 0, r25.u32);
	// stw r26,4(r30)
	REX_STORE_U32(r30.u32 + 4, r26.u32);
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
	// lbz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 124);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stb r11,124(r31)
	REX_STORE_U8(r31.u32 + 124, ctx.r11.u8);
	// lbz r11,30(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 30);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stb r11,30(r30)
	REX_STORE_U8(r30.u32 + 30, ctx.r11.u8);
	// bl 0x8269a968
	ctx.lr = 0x8269AFE4;
	sub_8269A968(ctx, base);
	// b 0x8269b050
	goto loc_8269B050;
loc_8269AFE8:
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// sth r27,50(r31)
	REX_STORE_U16(r31.u32 + 50, r27.u16);
	// li r10,10
	ctx.r10.s64 = 10;
	// sth r10,48(r31)
	REX_STORE_U16(r31.u32 + 48, ctx.r10.u16);
	// addi r11,r11,-24448
	ctx.r11.s64 = ctx.r11.s64 + -24448;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// li r11,-3072
	ctx.r11.s64 = -3072;
	// stw r31,52(r31)
	REX_STORE_U32(r31.u32 + 52, r31.u32);
	// li r10,9024
	ctx.r10.s64 = 9024;
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r25,0(r31)
	REX_STORE_U32(r31.u32 + 0, r25.u32);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// sth r11,26(r30)
	REX_STORE_U16(r30.u32 + 26, ctx.r11.u16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
	// sth r10,28(r30)
	REX_STORE_U16(r30.u32 + 28, ctx.r10.u16);
	// stw r26,4(r30)
	REX_STORE_U32(r30.u32 + 4, r26.u32);
	// lbz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 124);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stb r11,124(r31)
	REX_STORE_U8(r31.u32 + 124, ctx.r11.u8);
	// lbz r11,30(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 30);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stb r11,30(r30)
	REX_STORE_U8(r30.u32 + 30, ctx.r11.u8);
	// bl 0x8269a8d8
	ctx.lr = 0x8269B050;
	sub_8269A8D8(ctx, base);
loc_8269B050:
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x8269b070
	if (ctx.cr6.eq) goto loc_8269B070;
	// lbz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 124);
	// andi. r11,r11,191
	ctx.r11.u64 = ctx.r11.u64 & 191;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,124(r31)
	REX_STORE_U8(r31.u32 + 124, ctx.r11.u8);
	// lbz r11,30(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 30);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,30(r30)
	REX_STORE_U8(r30.u32 + 30, ctx.r11.u8);
loc_8269B070:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(__savevmx_71) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v71{};
	PPCVRegister v72{};
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
	// li r11,-912
	ctx.r11.s64 = -912;
	// stvx128 v71,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v71.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-896
	ctx.r11.s64 = -896;
	// stvx128 v72,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v72.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(sub_826B112C) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
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
	// lwz r30,164(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// b 0x826b1164
	goto loc_826B1164;
loc_826B1164:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826b11bc
	if (ctx.cr6.eq) goto loc_826B11BC;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826b11b4
	if (ctx.cr6.eq) goto loc_826B11B4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// srawi r9,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 5;
	// addi r10,r10,31264
	ctx.r10.s64 = ctx.r10.s64 + 31264;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_826B11B4:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x826b03f0
	ctx.lr = 0x826B11BC;
	sub_826B03F0(ctx, base);
loc_826B11BC:
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

DEFINE_REX_FUNC(sub_826B63A0) {
	REX_FUNC_PROLOGUE();
	// stw r4,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B6518) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B6544;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b6568
	if (ctx.cr6.eq) goto loc_826B6568;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B6564;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
loc_826B6568:
	// lwz r11,652(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 652);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826b6598
	if (ctx.cr6.eq) goto loc_826B6598;
	// lwz r3,656(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 656);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b6594
	if (ctx.cr6.eq) goto loc_826B6594;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B6590;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,656(r31)
	REX_STORE_U32(r31.u32 + 656, r30.u32);
loc_826B6594:
	// stw r30,652(r31)
	REX_STORE_U32(r31.u32 + 652, r30.u32);
loc_826B6598:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B65AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,88(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 88);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826B65C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
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

DEFINE_REX_FUNC(sub_826BC000) {
	REX_FUNC_PROLOGUE();
	// ld r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 64);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826BC310) {
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
	// bl 0x823ee280
	ctx.lr = 0x826BC320;
	sub_823EE280(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x826bc330
	if (!ctx.cr6.gt) goto loc_826BC330;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
loc_826BC330:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826BE928) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb0
	ctx.lr = 0x826BE930;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826beaec
	if (ctx.cr6.eq) goto loc_826BEAEC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826beaec
	if (ctx.cr6.eq) goto loc_826BEAEC;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x826beaec
	if (ctx.cr6.lt) goto loc_826BEAEC;
	// cmplwi cr6,r4,127
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 127, ctx.xer);
	// bgt cr6,0x826beaec
	if (ctx.cr6.gt) goto loc_826BEAEC;
	// lwz r11,528(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826beaec
	if (ctx.cr6.eq) goto loc_826BEAEC;
	// li r5,796
	ctx.r5.s64 = 796;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a2e60
	ctx.lr = 0x826BE988;
	sub_826A2E60(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// clrlwi r30,r28,24
	r30.u64 = r28.u32 & 0xFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x826c6cf0
	ctx.lr = 0x826BE9A0;
	sub_826C6CF0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826beadc
	if (ctx.cr6.lt) goto loc_826BEADC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x826beaec
	if (!ctx.cr6.eq) goto loc_826BEAEC;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,128(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// bl 0x826c6cf0
	ctx.lr = 0x826BE9D0;
	sub_826C6CF0(ctx, base);
	// lwz r7,4(r26)
	ctx.r7.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r11,104(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826bea18
	if (ctx.cr6.eq) goto loc_826BEA18;
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x826bea18
	if (ctx.cr6.eq) goto loc_826BEA18;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_826BE9F4:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r28,r6
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x826bea64
	if (ctx.cr6.eq) goto loc_826BEA64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x826be9f4
	if (ctx.cr6.lt) goto loc_826BE9F4;
loc_826BEA18:
	// lwz r11,28(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// li r9,10
	ctx.r9.s64 = 10;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// divwu r7,r8,r9
	ctx.r7.u64 = uint32_t(ctx.r9.u32 ? ctx.r8.u32 / ctx.r9.u32 : 0);
	// stw r7,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r7.u32);
loc_826BEA30:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826bea70
	if (ctx.cr6.eq) goto loc_826BEA70;
	// ld r3,64(r11)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x826bea70
	if (ctx.cr6.eq) goto loc_826BEA70;
	// bl 0x826a2d40
	ctx.lr = 0x826BEA4C;
	sub_826A2D40(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lfd f0,-11328(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -11328);
	// fdiv f0,f0,f1
	ctx.f0.f64 = ctx.f0.f64 / ctx.f1.f64;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// stfs f13,8(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// b 0x826bea7c
	goto loc_826BEA7C;
loc_826BEA64:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// b 0x826bea30
	goto loc_826BEA30;
loc_826BEA70:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
loc_826BEA7C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r29,790
	ctx.r5.s64 = r29.s64 + 790;
	// addi r4,r29,792
	ctx.r4.s64 = r29.s64 + 792;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,16(r29)
	REX_STORE_U32(r29.u32 + 16, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stw r7,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,20(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// sth r9,788(r29)
	REX_STORE_U16(r29.u32 + 788, ctx.r9.u16);
	// bl 0x826bd678
	ctx.lr = 0x826BEABC;
	sub_826BD678(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826beadc
	if (ctx.cr6.lt) goto loc_826BEADC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r29,20
	ctx.r3.s64 = r29.s64 + 20;
	// addi r4,r11,28904
	ctx.r4.s64 = ctx.r11.s64 + 28904;
	// li r5,768
	ctx.r5.s64 = 768;
	// bl 0x826a1e70
	ctx.lr = 0x826BEADC;
	sub_826A1E70(ctx, base);
loc_826BEADC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bd9a0
	ctx.lr = 0x826BEAE4;
	sub_826BD9A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_826BEAEC:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826D06C8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1c8c
	ctx.lr = 0x826D06D0;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// sth r10,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// sth r10,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x826d0734
	if (ctx.cr6.eq) goto loc_826D0734;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// bgt cr6,0x826d0734
	if (ctx.cr6.gt) goto loc_826D0734;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x826d0734
	if (ctx.cr6.lt) goto loc_826D0734;
	// cmpwi cr6,r5,32
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 32, ctx.xer);
	// bgt cr6,0x826d0734
	if (ctx.cr6.gt) goto loc_826D0734;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// blt cr6,0x826d0734
	if (ctx.cr6.lt) goto loc_826D0734;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826d0734
	if (ctx.cr6.eq) goto loc_826D0734;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x826d0744
	if (!ctx.cr6.eq) goto loc_826D0744;
loc_826D0734:
	// lis r28,-32764
	r28.s64 = -2147221504;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cdc
	return;
loc_826D0744:
	// rlwinm r10,r25,0,0,20
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFF800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826d0734
	if (!ctx.cr6.eq) goto loc_826D0734;
	// rlwinm r10,r24,0,0,20
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xFFFFF800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826d0734
	if (!ctx.cr6.eq) goto loc_826D0734;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
loc_826D0780:
	// and r31,r11,r25
	r31.u64 = ctx.r11.u64 & r25.u64;
	// and r30,r11,r24
	r30.u64 = ctx.r11.u64 & r24.u64;
	// addic r29,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r29.s64 = r31.s64 + -1;
	// rlwinm r28,r11,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subfe r11,r29,r31
	temp.u8 = (~r29.u32 + r31.u32 < ~r29.u32) | (~r29.u32 + r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~r29.u64 + r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r31,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r31.s64 = r30.s64 + -1;
	// and r29,r28,r25
	r29.u64 = r28.u64 & r25.u64;
	// subfe r31,r31,r30
	temp.u8 = (~r31.u32 + r30.u32 < ~r31.u32) | (~r31.u32 + r30.u32 + ctx.xer.ca < ctx.xer.ca);
	r31.u64 = ~r31.u64 + r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r30,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r30.s64 = r29.s64 + -1;
	// and r27,r28,r24
	r27.u64 = r28.u64 & r24.u64;
	// rlwinm r28,r28,1,0,30
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// subfe r30,r30,r29
	temp.u8 = (~r30.u32 + r29.u32 < ~r30.u32) | (~r30.u32 + r29.u32 + ctx.xer.ca < ctx.xer.ca);
	r30.u64 = ~r30.u64 + r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r29,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r29.s64 = r27.s64 + -1;
	// and r26,r28,r25
	r26.u64 = r28.u64 & r25.u64;
	// subfe r29,r29,r27
	temp.u8 = (~r29.u32 + r27.u32 < ~r29.u32) | (~r29.u32 + r27.u32 + ctx.xer.ca < ctx.xer.ca);
	r29.u64 = ~r29.u64 + r27.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r27,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r27.s64 = r26.s64 + -1;
	// and r19,r28,r24
	r19.u64 = r28.u64 & r24.u64;
	// rlwinm r18,r28,1,0,30
	r18.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// subfe r28,r27,r26
	temp.u8 = (~r27.u32 + r26.u32 < ~r27.u32) | (~r27.u32 + r26.u32 + ctx.xer.ca < ctx.xer.ca);
	r28.u64 = ~r27.u64 + r26.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r27,r19,-1
	ctx.xer.ca = r19.u32 > 0;
	r27.s64 = r19.s64 + -1;
	// and r26,r18,r25
	r26.u64 = r18.u64 & r25.u64;
	// subfe r27,r27,r19
	temp.u8 = (~r27.u32 + r19.u32 < ~r27.u32) | (~r27.u32 + r19.u32 + ctx.xer.ca < ctx.xer.ca);
	r27.u64 = ~r27.u64 + r19.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r19,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r19.s64 = r26.s64 + -1;
	// and r17,r18,r24
	r17.u64 = r18.u64 & r24.u64;
	// subfe r26,r19,r26
	temp.u8 = (~r19.u32 + r26.u32 < ~r19.u32) | (~r19.u32 + r26.u32 + ctx.xer.ca < ctx.xer.ca);
	r26.u64 = ~r19.u64 + r26.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r19,r17,-1
	ctx.xer.ca = r17.u32 > 0;
	r19.s64 = r17.s64 + -1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subfe r11,r19,r17
	temp.u8 = (~r19.u32 + r17.u32 < ~r19.u32) | (~r19.u32 + r17.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~r19.u64 + r17.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r9,r31,r9
	ctx.r9.u64 = r31.u64 + ctx.r9.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r8,r30,r8
	ctx.r8.u64 = r30.u64 + ctx.r8.u64;
	// add r7,r29,r7
	ctx.r7.u64 = r29.u64 + ctx.r7.u64;
	// add r6,r28,r6
	ctx.r6.u64 = r28.u64 + ctx.r6.u64;
	// add r5,r27,r5
	ctx.r5.u64 = r27.u64 + ctx.r5.u64;
	// add r4,r26,r4
	ctx.r4.u64 = r26.u64 + ctx.r4.u64;
	// rlwinm r11,r18,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// bdnz 0x826d0780
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826D0780;
	// add r11,r8,r6
	ctx.r11.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r21.s32, ctx.xer);
	// bne cr6,0x826d083c
	if (!ctx.cr6.eq) goto loc_826D083C;
	// cmpw cr6,r10,r22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r22.s32, ctx.xer);
	// beq cr6,0x826d0850
	if (ctx.cr6.eq) goto loc_826D0850;
loc_826D083C:
	// lis r28,-32761
	r28.s64 = -2147024896;
	// ori r28,r28,87
	r28.u64 = r28.u64 | 87;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cdc
	return;
loc_826D0850:
	// rlwinm r11,r25,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x8;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d086c
	if (ctx.cr6.eq) goto loc_826D086C;
	// rlwinm r4,r25,0,29,27
	ctx.r4.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r3,r21,-1
	ctx.r3.s64 = r21.s64 + -1;
loc_826D086C:
	// rlwinm r11,r24,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x8;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d0888
	if (ctx.cr6.eq) goto loc_826D0888;
	// rlwinm r6,r24,0,29,27
	ctx.r6.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r5,r22,-1
	ctx.r5.s64 = r22.s64 + -1;
loc_826D0888:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x826d0734
	if (ctx.cr6.lt) goto loc_826D0734;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// blt cr6,0x826d0734
	if (ctx.cr6.lt) goto loc_826D0734;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// bl 0x826cff68
	ctx.lr = 0x826D08A0;
	sub_826CFF68(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d0f4c
	if (ctx.cr6.lt) goto loc_826D0F4C;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x826d0938
	if (!ctx.cr6.gt) goto loc_826D0938;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
loc_826D08C4:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r21,4
	ctx.cr6.compare<int32_t>(r21.s32, 4, ctx.xer);
	// blt cr6,0x826d0908
	if (ctx.cr6.lt) goto loc_826D0908;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r6,r21,-3
	ctx.r6.s64 = r21.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826D08DC:
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f0,-4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + -4, temp.u32);
	// stfsx f0,r10,r8
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x826d08dc
	if (ctx.cr6.lt) goto loc_826D08DC;
loc_826D0908:
	// cmpw cr6,r9,r21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r21.s32, ctx.xer);
	// bge cr6,0x826d092c
	if (!ctx.cr6.lt) goto loc_826D092C;
	// subf r8,r9,r21
	ctx.r8.u64 = r21.u64 - ctx.r9.u64;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_826D0920:
	// stfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x826d0920
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826D0920;
loc_826D092C:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x826d08c4
	if (!ctx.cr0.eq) goto loc_826D08C4;
loc_826D0938:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82637f90
	ctx.lr = 0x826D0948;
	sub_82637F90(ctx, base);
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82637f90
	ctx.lr = 0x826D0958;
	sub_82637F90(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r9,82(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x826d0bb8
	if (ctx.cr6.eq) goto loc_826D0BB8;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x826d0bb0
	if (ctx.cr6.eq) goto loc_826D0BB0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	r31.s64 = 0;
	// lwzx r7,r11,r20
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	// lfs f0,3704(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r7,r8
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, temp.u32);
	// lhz r6,82(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826d0a98
	if (!ctx.cr6.gt) goto loc_826D0A98;
	// li r5,0
	ctx.r5.s64 = 0;
loc_826D09A8:
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x826d09e8
	if (!ctx.cr6.gt) goto loc_826D09E8;
	// lwzx r8,r5,r20
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_826D09C4:
	// lwzx r9,r5,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r23.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r8,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// lhz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826d09c4
	if (ctx.cr6.lt) goto loc_826D09C4;
loc_826D09E8:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r21.s32, ctx.xer);
	// bge cr6,0x826d0a80
	if (!ctx.cr6.lt) goto loc_826D0A80;
	// subf r11,r10,r21
	ctx.r11.u64 = r21.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x826d0a50
	if (ctx.cr6.lt) goto loc_826D0A50;
	// lwzx r9,r5,r20
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// addi r3,r21,-3
	ctx.r3.s64 = r21.s64 + -3;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_826D0A0C:
	// lwzx r7,r5,r23
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + r23.u32);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// add r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r30,r9,r8
	r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// lfs f0,-4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// lfsx f13,r7,r11
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r9,r8
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// lfsx f11,r8,r7
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r30)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// blt cr6,0x826d0a0c
	if (ctx.cr6.lt) goto loc_826D0A0C;
loc_826D0A50:
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r21.s32, ctx.xer);
	// bge cr6,0x826d0a80
	if (!ctx.cr6.lt) goto loc_826D0A80;
	// subf r8,r10,r21
	ctx.r8.u64 = r21.u64 - ctx.r10.u64;
	// lwzx r9,r5,r20
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_826D0A68:
	// lwzx r10,r5,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + r23.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x826d0a68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826D0A68;
loc_826D0A80:
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826d09a8
	if (ctx.cr6.lt) goto loc_826D09A8;
loc_826D0A98:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// bge cr6,0x826d0f4c
	if (!ctx.cr6.lt) goto loc_826D0F4C;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r11,r22
	r30.u64 = r22.u64 - ctx.r11.u64;
loc_826D0AAC:
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x826d0af4
	if (!ctx.cr6.gt) goto loc_826D0AF4;
	// lwzx r7,r6,r20
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + r20.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r8,r6,r23
	ctx.r8.u64 = ctx.r6.u64 + r23.u64;
loc_826D0ACC:
	// lwz r9,-4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r6,r23
	ctx.r8.u64 = ctx.r6.u64 + r23.u64;
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r7,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// lhz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826d0acc
	if (ctx.cr6.lt) goto loc_826D0ACC;
loc_826D0AF4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r21.s32, ctx.xer);
	// bge cr6,0x826d0b98
	if (!ctx.cr6.lt) goto loc_826D0B98;
	// subf r11,r9,r21
	ctx.r11.u64 = r21.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x826d0b64
	if (ctx.cr6.lt) goto loc_826D0B64;
	// lwzx r10,r6,r20
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + r20.u32);
	// addi r31,r21,-3
	r31.s64 = r21.s64 + -3;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r6,r23
	ctx.r4.u64 = ctx.r6.u64 + r23.u64;
loc_826D0B1C:
	// lwz r7,-4(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + -4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r29,r10,r8
	r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// add r4,r6,r23
	ctx.r4.u64 = ctx.r6.u64 + r23.u64;
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r31.s32, ctx.xer);
	// lfs f0,-4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lfsx f13,r11,r7
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r10,r8
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// lfsx f11,r8,r7
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r29)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// blt cr6,0x826d0b1c
	if (ctx.cr6.lt) goto loc_826D0B1C;
loc_826D0B64:
	// cmpw cr6,r9,r21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r21.s32, ctx.xer);
	// bge cr6,0x826d0b98
	if (!ctx.cr6.lt) goto loc_826D0B98;
	// subf r10,r9,r21
	ctx.r10.u64 = r21.u64 - ctx.r9.u64;
	// lwzx r8,r6,r20
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + r20.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826D0B7C:
	// add r10,r6,r23
	ctx.r10.u64 = ctx.r6.u64 + r23.u64;
	// lwz r10,-4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r8,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x826d0b7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826D0B7C;
loc_826D0B98:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne 0x826d0aac
	if (!ctx.cr0.eq) goto loc_826D0AAC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cdc
	return;
loc_826D0BB0:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x826d0d3c
	if (!ctx.cr6.eq) goto loc_826D0D3C;
loc_826D0BB8:
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x826d0d34
	if (ctx.cr6.eq) goto loc_826D0D34;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826d0c74
	if (!ctx.cr6.gt) goto loc_826D0C74;
	// li r5,0
	ctx.r5.s64 = 0;
loc_826D0BD4:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r21,4
	ctx.cr6.compare<int32_t>(r21.s32, 4, ctx.xer);
	// blt cr6,0x826d0c30
	if (ctx.cr6.lt) goto loc_826D0C30;
	// lwzx r9,r5,r20
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// addi r31,r21,-3
	r31.s64 = r21.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826D0BEC:
	// lwzx r10,r5,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + r23.u32);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r8,-4
	ctx.r6.s64 = ctx.r8.s64 + -4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f13,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r31.s32, ctx.xer);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfsx f12,r6,r10
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r9,r6
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// lfsx f11,r8,r10
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r9,r8
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x826d0bec
	if (ctx.cr6.lt) goto loc_826D0BEC;
loc_826D0C30:
	// cmpw cr6,r7,r21
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r21.s32, ctx.xer);
	// bge cr6,0x826d0c5c
	if (!ctx.cr6.lt) goto loc_826D0C5C;
	// subf r9,r7,r21
	ctx.r9.u64 = r21.u64 - ctx.r7.u64;
	// lwzx r10,r5,r20
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826D0C48:
	// lwzx r9,r5,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r23.u32);
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x826d0c48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826D0C48;
loc_826D0C5C:
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826d0bd4
	if (ctx.cr6.lt) goto loc_826D0BD4;
loc_826D0C74:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// bge cr6,0x826d0f4c
	if (!ctx.cr6.lt) goto loc_826D0F4C;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r29,r11,r22
	r29.u64 = r22.u64 - ctx.r11.u64;
loc_826D0C88:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r21,4
	ctx.cr6.compare<int32_t>(r21.s32, 4, ctx.xer);
	// blt cr6,0x826d0cec
	if (ctx.cr6.lt) goto loc_826D0CEC;
	// lwzx r9,r5,r20
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// addi r30,r21,-3
	r30.s64 = r21.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r4,r5,r23
	ctx.r4.u64 = ctx.r5.u64 + r23.u64;
loc_826D0CA4:
	// lwz r10,-4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + -4);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r8,-4
	ctx.r6.s64 = ctx.r8.s64 + -4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r4,r5,r23
	ctx.r4.u64 = ctx.r5.u64 + r23.u64;
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r30.s32, ctx.xer);
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfsx f12,r10,r6
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r9,r6
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// lfsx f11,r10,r8
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r9,r8
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x826d0ca4
	if (ctx.cr6.lt) goto loc_826D0CA4;
loc_826D0CEC:
	// cmpw cr6,r7,r21
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r21.s32, ctx.xer);
	// bge cr6,0x826d0d1c
	if (!ctx.cr6.lt) goto loc_826D0D1C;
	// subf r9,r7,r21
	ctx.r9.u64 = r21.u64 - ctx.r7.u64;
	// lwzx r10,r5,r20
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826D0D04:
	// add r9,r5,r23
	ctx.r9.u64 = ctx.r5.u64 + r23.u64;
	// lwz r8,-4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// lfsx f0,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x826d0d04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826D0D04;
loc_826D0D1C:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x826d0c88
	if (!ctx.cr0.eq) goto loc_826D0C88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cdc
	return;
loc_826D0D34:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x826d0ea8
	if (ctx.cr6.eq) goto loc_826D0EA8;
loc_826D0D3C:
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x826d0ea8
	if (!ctx.cr6.eq) goto loc_826D0EA8;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x826d0f4c
	if (!ctx.cr6.gt) goto loc_826D0F4C;
	// extsw r11,r22
	ctx.r11.s64 = r22.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r22
	r31.u64 = r22.u64;
	// lfs f12,14180(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 14180);
	ctx.f12.f64 = double(temp.f32);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// fadds f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fdivs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
loc_826D0D7C:
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x826d0dc4
	if (!ctx.cr6.gt) goto loc_826D0DC4;
	// lwzx r8,r5,r20
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_826D0D98:
	// lwzx r9,r5,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r23.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f11,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fdivs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// stfsx f9,r8,r11
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// lhz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826d0d98
	if (ctx.cr6.lt) goto loc_826D0D98;
loc_826D0DC4:
	// lwzx r10,r5,r20
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f12,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// lhz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r9,r21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r21.s32, ctx.xer);
	// bge cr6,0x826d0e90
	if (!ctx.cr6.lt) goto loc_826D0E90;
	// subf r11,r9,r21
	ctx.r11.u64 = r21.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x826d0e5c
	if (ctx.cr6.lt) goto loc_826D0E5C;
	// addi r3,r21,-3
	ctx.r3.s64 = r21.s64 + -3;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_826D0DF8:
	// lwzx r7,r5,r23
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + r23.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// add r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r30,r10,r8
	r30.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// lfs f11,-4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fdivs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// stfsx f9,r10,r11
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lfsx f8,r7,r11
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// fmuls f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fdivs f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 / ctx.f13.f64));
	// stfs f6,4(r4)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f5,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fdivs f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 / ctx.f13.f64));
	// stfsx f3,r10,r8
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// lfsx f2,r7,r8
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fdivs f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 / ctx.f13.f64));
	// stfs f11,4(r30)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// blt cr6,0x826d0df8
	if (ctx.cr6.lt) goto loc_826D0DF8;
loc_826D0E5C:
	// cmpw cr6,r9,r21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r21.s32, ctx.xer);
	// bge cr6,0x826d0e90
	if (!ctx.cr6.lt) goto loc_826D0E90;
	// subf r8,r9,r21
	ctx.r8.u64 = r21.u64 - ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_826D0E70:
	// lwzx r9,r5,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r23.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f11,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fdivs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// stfsx f9,r10,r11
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x826d0e70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826D0E70;
loc_826D0E90:
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x826d0d7c
	if (!ctx.cr0.eq) goto loc_826D0D7C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cdc
	return;
loc_826D0EA8:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x826d0f4c
	if (!ctx.cr6.gt) goto loc_826D0F4C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_826D0EB8:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r21,4
	ctx.cr6.compare<int32_t>(r21.s32, 4, ctx.xer);
	// blt cr6,0x826d0f14
	if (ctx.cr6.lt) goto loc_826D0F14;
	// lwzx r9,r5,r20
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// addi r31,r21,-3
	r31.s64 = r21.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826D0ED0:
	// lwzx r10,r5,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + r23.u32);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r8,-4
	ctx.r6.s64 = ctx.r8.s64 + -4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r31.s32, ctx.xer);
	// lfs f13,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfsx f12,r10,r6
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r9,r6
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// lfsx f11,r10,r8
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r9,r8
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x826d0ed0
	if (ctx.cr6.lt) goto loc_826D0ED0;
loc_826D0F14:
	// cmpw cr6,r7,r21
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r21.s32, ctx.xer);
	// bge cr6,0x826d0f40
	if (!ctx.cr6.lt) goto loc_826D0F40;
	// subf r9,r7,r21
	ctx.r9.u64 = r21.u64 - ctx.r7.u64;
	// lwzx r10,r5,r20
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826D0F2C:
	// lwzx r9,r5,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r23.u32);
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x826d0f2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826D0F2C;
loc_826D0F40:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x826d0eb8
	if (!ctx.cr0.eq) goto loc_826D0EB8;
loc_826D0F4C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_827234B8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827234cc
	if (!ctx.cr6.eq) goto loc_827234CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_827234CC:
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// ori r9,r10,22857
	ctx.r9.u64 = ctx.r10.u64 | 22857;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82723514
	if (ctx.cr6.eq) goto loc_82723514;
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// ori r9,r10,13385
	ctx.r9.u64 = ctx.r10.u64 | 13385;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82723514
	if (ctx.cr6.eq) goto loc_82723514;
	// lis r10,12593
	ctx.r10.s64 = 825294848;
	// ori r9,r10,13392
	ctx.r9.u64 = ctx.r10.u64 | 13392;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82723514
	if (ctx.cr6.eq) goto loc_82723514;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// li r3,2
	ctx.r3.s64 = 2;
	// ori r9,r10,22105
	ctx.r9.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82723514:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827253E0) {
	REX_FUNC_PROLOGUE();
	// lwz r10,15580(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15580);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// bne cr6,0x82725414
	if (!ctx.cr6.eq) goto loc_82725414;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,3948(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 3948);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,15540(r11)
	REX_STORE_U32(ctx.r11.u32 + 15540, ctx.r10.u32);
	// stw r10,15544(r11)
	REX_STORE_U32(ctx.r11.u32 + 15544, ctx.r10.u32);
	// b 0x82759ca8
	sub_82759CA8(ctx, base);
	return;
loc_82725414:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82725434
	if (!ctx.cr6.eq) goto loc_82725434;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,3948(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 3948);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,15540(r11)
	REX_STORE_U32(ctx.r11.u32 + 15540, ctx.r10.u32);
	// stw r10,15544(r11)
	REX_STORE_U32(ctx.r11.u32 + 15544, ctx.r10.u32);
	// b 0x82759ca8
	sub_82759CA8(ctx, base);
	return;
loc_82725434:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82725458
	if (!ctx.cr6.eq) goto loc_82725458;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,3948(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 3948);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,15540(r11)
	REX_STORE_U32(ctx.r11.u32 + 15540, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,15544(r11)
	REX_STORE_U32(ctx.r11.u32 + 15544, ctx.r9.u32);
	// b 0x82759ca8
	sub_82759CA8(ctx, base);
	return;
loc_82725458:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82725478
	if (!ctx.cr6.eq) goto loc_82725478;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,3948(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 3948);
	// stw r10,15540(r11)
	REX_STORE_U32(ctx.r11.u32 + 15540, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,15544(r11)
	REX_STORE_U32(ctx.r11.u32 + 15544, ctx.r9.u32);
	// b 0x82759ca8
	sub_82759CA8(ctx, base);
	return;
loc_82725478:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,15540(r11)
	REX_STORE_U32(ctx.r11.u32 + 15540, ctx.r10.u32);
	// stw r10,15544(r11)
	REX_STORE_U32(ctx.r11.u32 + 15544, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8272B340) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v14{};
	PPCVRegister v15{};
	PPCVRegister v16{};
	PPCVRegister v17{};
	PPCVRegister v18{};
	PPCVRegister v19{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8272B348;
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// vspltisw v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// vspltisb v0,-1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0xFF)));
	// srawi. r10,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 6;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ori r8,r11,128
	ctx.r8.u64 = ctx.r11.u64 | 128;
	// rlwinm r7,r10,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r8,-64(r1)
	REX_STORE_U32(ctx.r1.u32 + -64, ctx.r8.u32);
	// vmrghb v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r28,r7,r6
	r28.u64 = ctx.r6.u64 - ctx.r7.u64;
	// vspltw128 v13,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// ble 0x8272b518
	if (!ctx.cr0.gt) goto loc_8272B518;
	// li r11,16
	ctx.r11.s64 = 16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r8,r5,32
	ctx.r8.s64 = ctx.r5.s64 + 32;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_8272B394:
	// lvrx128 v62,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r7,r10,-16
	ctx.r7.s64 = ctx.r10.s64 + -16;
	// lvlx128 v61,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r9,-16
	ctx.r6.s64 = ctx.r9.s64 + -16;
	// lvrx128 v60,r29,r4
	temp.u32 = r29.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v59,v61,v62
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lvlx128 v58,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r31,r10,16
	r31.s64 = ctx.r10.s64 + 16;
	// vor128 v57,v58,v60
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// addi r30,r9,16
	r30.s64 = ctx.r9.s64 + 16;
	// lvlx128 v56,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// vupklsb128 v55,v59,v0
	simde_mm_store_si128((simde__m128i*)ctx.v55.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v59.s16)));
	// lvlx128 v54,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsb128 v53,v59,v0
	simde_mm_store_si128((simde__m128i*)ctx.v53.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v59.s8), simde_mm_load_si128((simde__m128i*)ctx.v59.s8))));
	// lvrx128 v52,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vupklsb128 v51,v57,v0
	simde_mm_store_si128((simde__m128i*)ctx.v51.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v57.s16)));
	// lvrx128 v50,r11,r6
	temp.u32 = ctx.r11.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vupkhsb128 v49,v57,v0
	simde_mm_store_si128((simde__m128i*)ctx.v49.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v57.s8), simde_mm_load_si128((simde__m128i*)ctx.v57.s8))));
	// lvlx128 v48,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v47,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v46,v56,v52
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvrx128 v45,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v42,v54,v50
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// lvlx128 v43,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v44,v48,v47
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// vor128 v41,v43,v45
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// lvlx128 v40,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vand128 v12,v55,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v39,r11,r31
	temp.u32 = ctx.r11.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vand128 v11,v53,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v38,r11,r30
	temp.u32 = ctx.r11.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vand128 v10,v51,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v37,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vand128 v9,v49,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vupklsb128 v36,v46,v0
	simde_mm_store_si128((simde__m128i*)ctx.v36.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v46.s16)));
	// vor128 v35,v37,v38
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// vupkhsb128 v34,v46,v0
	simde_mm_store_si128((simde__m128i*)ctx.v34.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v46.s8), simde_mm_load_si128((simde__m128i*)ctx.v46.s8))));
	// vor128 v33,v40,v39
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8)));
	// vupklsb128 v32,v44,v0
	simde_mm_store_si128((simde__m128i*)ctx.v32.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v44.s16)));
	// vupkhsb128 v63,v44,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v44.s8), simde_mm_load_si128((simde__m128i*)ctx.v44.s8))));
	// vaddshs v8,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vupklsb128 v62,v42,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v42.s16)));
	// vaddshs v7,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vupkhsb128 v61,v42,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v42.s8), simde_mm_load_si128((simde__m128i*)ctx.v42.s8))));
	// vand128 v6,v36,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vupklsb128 v60,v41,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v41.s16)));
	// vand128 v5,v34,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vupkhsb128 v59,v41,v0
	simde_mm_store_si128((simde__m128i*)ctx.v59.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v41.s8), simde_mm_load_si128((simde__m128i*)ctx.v41.s8))));
	// vand128 v4,v32,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v3,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vupklsb128 v58,v35,v0
	simde_mm_store_si128((simde__m128i*)ctx.v58.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v35.s16)));
	// vand128 v2,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vupklsb128 v57,v33,v0
	simde_mm_store_si128((simde__m128i*)ctx.v57.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v33.s16)));
	// vand128 v1,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vupkhsb128 v56,v35,v0
	simde_mm_store_si128((simde__m128i*)ctx.v56.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v35.s8), simde_mm_load_si128((simde__m128i*)ctx.v35.s8))));
	// vand128 v31,v60,v0
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vupkhsb128 v55,v33,v0
	simde_mm_store_si128((simde__m128i*)ctx.v55.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v33.s8), simde_mm_load_si128((simde__m128i*)ctx.v33.s8))));
	// vand128 v30,v59,v0
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r7,r8,-16
	ctx.r7.s64 = ctx.r8.s64 + -16;
	// vsubshs v29,v8,v13
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// addi r6,r8,16
	ctx.r6.s64 = ctx.r8.s64 + 16;
	// vsubshs v28,v7,v13
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v27,v6,v2
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v26,v5,v1
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v25,v4,v31
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vaddshs v24,v3,v30
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vpkshus128 v54,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vand128 v23,v58,v0
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v22,v57,v0
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v21,v27,v13
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v20,v26,v13
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v19,v25,v13
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v18,v24,v13
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v17,v22,v23
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// stvlx128 v54,r0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// vpkshus128 v53,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vand128 v16,v56,v0
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v15,v55,v0
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vpkshus128 v52,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vsubshs v14,v17,v13
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v12,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvrx128 v54,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v54.u8[i]);
	// stvlx128 v53,r0,r7
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v53.u8[15 - i]);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// stvrx128 v53,r7,r11
	ea = ctx.r7.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v53.u8[i]);
	// addi r4,r4,64
	ctx.r4.s64 = ctx.r4.s64 + 64;
	// stvlx128 v52,r0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// vsubshs v11,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// stvrx128 v52,r8,r11
	ea = ctx.r8.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v52.u8[i]);
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// addi r5,r5,64
	ctx.r5.s64 = ctx.r5.s64 + 64;
	// vpkshus128 v51,v11,v14
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvlx128 v51,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// stvrx128 v51,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v51.u8[i]);
	// bdnz 0x8272b394
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272B394;
loc_8272B518:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x8272b564
	if (!ctx.cr6.gt) goto loc_8272B564;
	// subf r9,r4,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r4.u64;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// subf r8,r4,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r4.u64;
loc_8272B52C:
	// lbzx r10,r9,r4
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x8272b54c
	if (!ctx.cr6.gt) goto loc_8272B54C;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x8272b558
	goto loc_8272B558;
loc_8272B54C:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_8272B558:
	// stbx r11,r8,r4
	REX_STORE_U8(ctx.r8.u32 + ctx.r4.u32, ctx.r11.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bdnz 0x8272b52c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272B52C;
loc_8272B564:
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8274AAA0) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c90
	ctx.lr = 0x8274AAA8;
	// lwz r27,136(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r28,3940(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 3940);
	// mullw r30,r27,r5
	r30.s64 = int64_t(r27.s32) * int64_t(ctx.r5.s32);
	// lwz r26,20904(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 20904);
	// addi r31,r11,-29208
	r31.s64 = ctx.r11.s64 + -29208;
	// add r11,r30,r4
	ctx.r11.u64 = r30.u64 + ctx.r4.u64;
	// rlwinm r30,r30,1,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r11,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r30,r4
	r30.u64 = r30.u64 + ctx.r4.u64;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r23,r30,1,0,30
	r23.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r29,1,0,30
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r21,r11,r23
	r21.u64 = ctx.r11.u64 + r23.u64;
	// subf r22,r11,r23
	r22.u64 = r23.u64 - ctx.r11.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// bne cr6,0x8274ab1c
	if (!ctx.cr6.eq) goto loc_8274AB1C;
	// lwz r30,284(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// bne cr6,0x8274ab1c
	if (!ctx.cr6.eq) goto loc_8274AB1C;
	// li r29,6
	r29.s64 = 6;
	// addi r30,r11,-1
	r30.s64 = ctx.r11.s64 + -1;
	// li r28,15
	r28.s64 = 15;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_8274AB10:
	// stbu r28,1(r30)
	ea = 1 + r30.u32;
	REX_STORE_U8(ea, r28.u8);
	r30.u32 = ea;
	// bdnz 0x8274ab10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8274AB10;
	// b 0x8274ab98
	goto loc_8274AB98;
loc_8274AB1C:
	// li r28,6
	r28.s64 = 6;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// subf r27,r7,r10
	r27.u64 = ctx.r10.u64 - ctx.r7.u64;
	// subf r29,r7,r11
	r29.u64 = ctx.r11.u64 - ctx.r7.u64;
	// li r24,15
	r24.s64 = 15;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// li r25,-49
	r25.s64 = -49;
	// li r26,63
	r26.s64 = 63;
loc_8274AB3C:
	// lbz r28,0(r30)
	r28.u64 = REX_LOAD_U8(r30.u32 + 0);
	// extsb r28,r28
	r28.s64 = r28.s8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x8274ab54
	if (!ctx.cr6.eq) goto loc_8274AB54;
	// stbx r24,r29,r30
	REX_STORE_U8(r29.u32 + r30.u32, r24.u8);
	// b 0x8274ab90
	goto loc_8274AB90;
loc_8274AB54:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// bne cr6,0x8274ab64
	if (!ctx.cr6.eq) goto loc_8274AB64;
	// stbx r25,r29,r30
	REX_STORE_U8(r29.u32 + r30.u32, r25.u8);
	// b 0x8274ab90
	goto loc_8274AB90;
loc_8274AB64:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// bne cr6,0x8274ab74
	if (!ctx.cr6.eq) goto loc_8274AB74;
	// stbx r26,r29,r30
	REX_STORE_U8(r29.u32 + r30.u32, r26.u8);
	// b 0x8274ab90
	goto loc_8274AB90;
loc_8274AB74:
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(r28.s32, 4, ctx.xer);
	// bne cr6,0x8274ab90
	if (!ctx.cr6.eq) goto loc_8274AB90;
	// lbzx r28,r27,r30
	r28.u64 = REX_LOAD_U8(r27.u32 + r30.u32);
	// addi r20,r31,960
	r20.s64 = r31.s64 + 960;
	// rotlwi r28,r28,2
	r28.u64 = __builtin_rotateleft32(r28.u32, 2);
	// lwzx r28,r28,r20
	r28.u64 = REX_LOAD_U32(r28.u32 + r20.u32);
	// stbx r28,r29,r30
	REX_STORE_U8(r29.u32 + r30.u32, r28.u8);
loc_8274AB90:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bdnz 0x8274ab3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8274AB3C;
loc_8274AB98:
	// lwz r20,100(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r19,108(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq cr6,0x8274ac30
	if (ctx.cr6.eq) goto loc_8274AC30;
	// lbz r29,1(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// lbz r30,0(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r29,r29
	r29.s64 = r29.s8;
	// extsb r30,r30
	r30.s64 = r30.s8;
	// rlwinm r29,r29,0,30,27
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// stb r29,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, r29.u8);
	// beq cr6,0x8274ac04
	if (ctx.cr6.eq) goto loc_8274AC04;
	// lbz r28,2(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r30,r30,0,0,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFF0;
	// lbz r27,4(r11)
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r26,5(r11)
	r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// extsb r28,r28
	r28.s64 = r28.s8;
	// extsb r27,r27
	r27.s64 = r27.s8;
	// stb r30,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r30.u8);
	// extsb r26,r26
	r26.s64 = r26.s8;
	// rlwinm r28,r28,0,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r27,r27,0,0,27
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r26,r26,0,0,27
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFF0;
	// stb r28,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, r28.u8);
	// stb r27,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, r27.u8);
	// stb r26,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, r26.u8);
	// b 0x8274ac7c
	goto loc_8274AC7C;
loc_8274AC04:
	// lbz r28,4(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r30,r30,0,30,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// lbz r27,5(r11)
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// extsb r28,r28
	r28.s64 = r28.s8;
	// stb r30,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r30.u8);
	// extsb r27,r27
	r27.s64 = r27.s8;
	// rlwinm r28,r28,0,30,27
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// rlwinm r27,r27,0,30,27
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// stb r28,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, r28.u8);
	// stb r27,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, r27.u8);
	// b 0x8274ac7c
	goto loc_8274AC7C;
loc_8274AC30:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x8274ac7c
	if (ctx.cr6.eq) goto loc_8274AC7C;
	// lwz r30,3388(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 3388);
	// lbzx r29,r30,r11
	r29.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// extsb r29,r29
	r29.s64 = r29.s8;
	// rlwinm r29,r29,0,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFC;
	// stbx r29,r30,r11
	REX_STORE_U8(r30.u32 + ctx.r11.u32, r29.u8);
	// lbz r29,4(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r28,5(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r30,2(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r30,r30
	r30.s64 = r30.s8;
	// extsb r28,r28
	r28.s64 = r28.s8;
	// extsb r29,r29
	r29.s64 = r29.s8;
	// rlwinm r30,r30,0,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r29,r29,0,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r28,r28,0,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r30,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, r30.u8);
	// stb r29,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, r29.u8);
	// stb r28,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, r28.u8);
loc_8274AC7C:
	// lwz r30,284(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// beq cr6,0x8274b334
	if (ctx.cr6.eq) goto loc_8274B334;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// beq cr6,0x8274b334
	if (ctx.cr6.eq) goto loc_8274B334;
	// lwz r25,84(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne cr6,0x8274ad2c
	if (!ctx.cr6.eq) goto loc_8274AD2C;
	// lwz r30,1772(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// rlwinm r6,r23,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r30,r6
	r30.u64 = REX_LOAD_U16(r30.u32 + ctx.r6.u32);
	// cmplwi cr6,r30,16384
	ctx.cr6.compare<uint32_t>(r30.u32, 16384, ctx.xer);
	// beq cr6,0x8274ad2c
	if (ctx.cr6.eq) goto loc_8274AD2C;
	// lwz r29,1772(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// rlwinm r30,r22,1,0,30
	r30.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r28,r29,r6
	r28.u64 = REX_LOAD_U16(r29.u32 + ctx.r6.u32);
	// lhzx r29,r30,r29
	r29.u64 = REX_LOAD_U16(r30.u32 + r29.u32);
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// bne cr6,0x8274ad2c
	if (!ctx.cr6.eq) goto loc_8274AD2C;
	// lwz r29,1776(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// lhzx r30,r29,r30
	r30.u64 = REX_LOAD_U16(r29.u32 + r30.u32);
	// lhzx r6,r29,r6
	ctx.r6.u64 = REX_LOAD_U16(r29.u32 + ctx.r6.u32);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8274ad2c
	if (!ctx.cr6.eq) goto loc_8274AD2C;
	// lbz r6,2(r8)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// addi r27,r31,640
	r27.s64 = r31.s64 + 640;
	// lbz r30,0(r7)
	r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// addi r26,r31,320
	r26.s64 = r31.s64 + 320;
	// extsb r28,r6
	r28.s64 = ctx.r6.s8;
	// lbz r6,2(r25)
	ctx.r6.u64 = REX_LOAD_U8(r25.u32 + 2);
	// extsb r24,r30
	r24.s64 = r30.s8;
	// lbz r29,0(r10)
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r30,r28,4,0,27
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r18,0(r11)
	r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r28,r24,4,0,27
	r28.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r30,r6
	ctx.r6.u64 = r30.u64 + ctx.r6.u64;
	// add r30,r28,r29
	r30.u64 = r28.u64 + r29.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r27
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r27.u32);
	// lwzx r30,r30,r26
	r30.u64 = REX_LOAD_U32(r30.u32 + r26.u32);
	// or r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 | r30.u64;
	// and r6,r6,r18
	ctx.r6.u64 = ctx.r6.u64 & r18.u64;
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
loc_8274AD2C:
	// lwz r24,92(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x8274adc8
	if (!ctx.cr6.eq) goto loc_8274ADC8;
	// lwz r30,1772(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// rlwinm r6,r23,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r30,r6
	r30.u64 = REX_LOAD_U16(r30.u32 + ctx.r6.u32);
	// cmplwi cr6,r30,16384
	ctx.cr6.compare<uint32_t>(r30.u32, 16384, ctx.xer);
	// beq cr6,0x8274adc8
	if (ctx.cr6.eq) goto loc_8274ADC8;
	// lwz r30,1772(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// add r30,r30,r6
	r30.u64 = r30.u64 + ctx.r6.u64;
	// lhz r29,-2(r30)
	r29.u64 = REX_LOAD_U16(r30.u32 + -2);
	// lhz r30,0(r30)
	r30.u64 = REX_LOAD_U16(r30.u32 + 0);
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// bne cr6,0x8274adc8
	if (!ctx.cr6.eq) goto loc_8274ADC8;
	// lwz r30,1776(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// add r6,r30,r6
	ctx.r6.u64 = r30.u64 + ctx.r6.u64;
	// lhz r30,-2(r6)
	r30.u64 = REX_LOAD_U16(ctx.r6.u32 + -2);
	// lhz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8274adc8
	if (!ctx.cr6.eq) goto loc_8274ADC8;
	// lbz r6,1(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// addi r27,r31,-320
	r27.s64 = r31.s64 + -320;
	// lbz r30,0(r7)
	r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r28,1(r24)
	r28.u64 = REX_LOAD_U8(r24.u32 + 1);
	// extsb r26,r30
	r26.s64 = r30.s8;
	// lbz r30,0(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r29,r6,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r18,0(r11)
	r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r6,r26,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r31
	r30.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// lwzx r6,r6,r27
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r27.u32);
	// or r6,r30,r6
	ctx.r6.u64 = r30.u64 | ctx.r6.u64;
	// and r6,r6,r18
	ctx.r6.u64 = ctx.r6.u64 & r18.u64;
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
loc_8274ADC8:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne cr6,0x8274ae74
	if (!ctx.cr6.eq) goto loc_8274AE74;
	// lwz r30,1772(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// rlwinm r6,r23,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r30,r6
	r30.u64 = r30.u64 + ctx.r6.u64;
	// lhz r30,2(r30)
	r30.u64 = REX_LOAD_U16(r30.u32 + 2);
	// cmplwi cr6,r30,16384
	ctx.cr6.compare<uint32_t>(r30.u32, 16384, ctx.xer);
	// beq cr6,0x8274ae74
	if (ctx.cr6.eq) goto loc_8274AE74;
	// lwz r30,1772(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// rlwinm r29,r22,1,0,30
	r29.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r30,r6
	r28.u64 = r30.u64 + ctx.r6.u64;
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// lhz r28,2(r28)
	r28.u64 = REX_LOAD_U16(r28.u32 + 2);
	// lhz r30,2(r30)
	r30.u64 = REX_LOAD_U16(r30.u32 + 2);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// bne cr6,0x8274ae74
	if (!ctx.cr6.eq) goto loc_8274AE74;
	// lwz r30,1776(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// add r6,r30,r6
	ctx.r6.u64 = r30.u64 + ctx.r6.u64;
	// add r29,r30,r29
	r29.u64 = r30.u64 + r29.u64;
	// lhz r6,2(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// lhz r30,2(r29)
	r30.u64 = REX_LOAD_U16(r29.u32 + 2);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8274ae74
	if (!ctx.cr6.eq) goto loc_8274AE74;
	// lbz r6,1(r7)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// addi r27,r31,320
	r27.s64 = r31.s64 + 320;
	// lbz r30,3(r8)
	r30.u64 = REX_LOAD_U8(ctx.r8.u32 + 3);
	// addi r26,r31,640
	r26.s64 = r31.s64 + 640;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r28,1(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r22,r30
	r22.s64 = r30.s8;
	// lbz r30,3(r25)
	r30.u64 = REX_LOAD_U8(r25.u32 + 3);
	// rlwinm r29,r6,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r18,1(r11)
	r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r6,r22,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r27
	r30.u64 = REX_LOAD_U32(r30.u32 + r27.u32);
	// lwzx r6,r6,r26
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r26.u32);
	// or r6,r30,r6
	ctx.r6.u64 = r30.u64 | ctx.r6.u64;
	// and r6,r6,r18
	ctx.r6.u64 = ctx.r6.u64 & r18.u64;
	// stb r6,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
loc_8274AE74:
	// lwz r6,1772(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// rlwinm r26,r23,1,0,30
	r26.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r6,r26
	ctx.r6.u64 = ctx.r6.u64 + r26.u64;
	// lhz r6,2(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// beq cr6,0x8274af08
	if (ctx.cr6.eq) goto loc_8274AF08;
	// lwz r6,1772(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// add r6,r6,r26
	ctx.r6.u64 = ctx.r6.u64 + r26.u64;
	// lhz r30,2(r6)
	r30.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// lhz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r30.u32, ctx.xer);
	// bne cr6,0x8274af08
	if (!ctx.cr6.eq) goto loc_8274AF08;
	// lwz r6,1776(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// add r6,r6,r26
	ctx.r6.u64 = ctx.r6.u64 + r26.u64;
	// lhz r30,2(r6)
	r30.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// lhz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r30.u32, ctx.xer);
	// bne cr6,0x8274af08
	if (!ctx.cr6.eq) goto loc_8274AF08;
	// lbz r6,1(r7)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// addi r27,r31,-320
	r27.s64 = r31.s64 + -320;
	// lbz r30,0(r7)
	r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r28,1(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r23,r30
	r23.s64 = r30.s8;
	// lbz r30,0(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r29,r6,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r22,1(r11)
	r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r6,r23,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r27
	r30.u64 = REX_LOAD_U32(r30.u32 + r27.u32);
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// or r6,r30,r6
	ctx.r6.u64 = r30.u64 | ctx.r6.u64;
	// and r6,r6,r22
	ctx.r6.u64 = ctx.r6.u64 & r22.u64;
	// stb r6,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
loc_8274AF08:
	// lwz r6,1772(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// rlwinm r27,r21,1,0,30
	r27.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r6,r27
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + r27.u32);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// beq cr6,0x8274af94
	if (ctx.cr6.eq) goto loc_8274AF94;
	// lwz r6,1772(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// lhzx r30,r6,r26
	r30.u64 = REX_LOAD_U16(ctx.r6.u32 + r26.u32);
	// lhzx r6,r6,r27
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + r27.u32);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8274af94
	if (!ctx.cr6.eq) goto loc_8274AF94;
	// lwz r6,1776(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// lhzx r30,r6,r26
	r30.u64 = REX_LOAD_U16(ctx.r6.u32 + r26.u32);
	// lhzx r6,r6,r27
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + r27.u32);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8274af94
	if (!ctx.cr6.eq) goto loc_8274AF94;
	// lbz r6,2(r7)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 2);
	// addi r23,r31,320
	r23.s64 = r31.s64 + 320;
	// lbz r30,0(r7)
	r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// addi r22,r31,640
	r22.s64 = r31.s64 + 640;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r28,2(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r21,r30
	r21.s64 = r30.s8;
	// lbz r30,0(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r29,r6,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r18,2(r11)
	r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r6,r21,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r23
	r30.u64 = REX_LOAD_U32(r30.u32 + r23.u32);
	// lwzx r6,r6,r22
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r22.u32);
	// or r6,r30,r6
	ctx.r6.u64 = r30.u64 | ctx.r6.u64;
	// and r6,r6,r18
	ctx.r6.u64 = ctx.r6.u64 & r18.u64;
	// stb r6,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
loc_8274AF94:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x8274b028
	if (!ctx.cr6.eq) goto loc_8274B028;
	// lwz r6,1772(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// lhzx r6,r6,r27
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + r27.u32);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// beq cr6,0x8274b028
	if (ctx.cr6.eq) goto loc_8274B028;
	// lwz r6,1772(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + r27.u64;
	// lhz r30,-2(r6)
	r30.u64 = REX_LOAD_U16(ctx.r6.u32 + -2);
	// lhz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8274b028
	if (!ctx.cr6.eq) goto loc_8274B028;
	// lwz r6,1776(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + r27.u64;
	// lhz r30,-2(r6)
	r30.u64 = REX_LOAD_U16(ctx.r6.u32 + -2);
	// lhz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8274b028
	if (!ctx.cr6.eq) goto loc_8274B028;
	// lbz r6,2(r7)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 2);
	// addi r23,r31,-320
	r23.s64 = r31.s64 + -320;
	// lbz r30,3(r9)
	r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 3);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r28,2(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r22,r30
	r22.s64 = r30.s8;
	// lbz r30,3(r24)
	r30.u64 = REX_LOAD_U8(r24.u32 + 3);
	// rlwinm r29,r6,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r21,2(r11)
	r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r6,r22,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r23
	r30.u64 = REX_LOAD_U32(r30.u32 + r23.u32);
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// or r6,r30,r6
	ctx.r6.u64 = r30.u64 | ctx.r6.u64;
	// and r6,r6,r21
	ctx.r6.u64 = ctx.r6.u64 & r21.u64;
	// stb r6,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
loc_8274B028:
	// lwz r6,1772(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + r27.u64;
	// lhz r6,2(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// beq cr6,0x8274b0c4
	if (ctx.cr6.eq) goto loc_8274B0C4;
	// lwz r6,1772(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// add r30,r6,r26
	r30.u64 = ctx.r6.u64 + r26.u64;
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + r27.u64;
	// lhz r30,2(r30)
	r30.u64 = REX_LOAD_U16(r30.u32 + 2);
	// lhz r6,2(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8274b0c4
	if (!ctx.cr6.eq) goto loc_8274B0C4;
	// lwz r6,1776(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// add r30,r6,r26
	r30.u64 = ctx.r6.u64 + r26.u64;
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + r27.u64;
	// lhz r30,2(r30)
	r30.u64 = REX_LOAD_U16(r30.u32 + 2);
	// lhz r6,2(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8274b0c4
	if (!ctx.cr6.eq) goto loc_8274B0C4;
	// lbz r6,3(r7)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 3);
	// addi r26,r31,320
	r26.s64 = r31.s64 + 320;
	// lbz r30,1(r7)
	r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// addi r23,r31,640
	r23.s64 = r31.s64 + 640;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r28,3(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r22,r30
	r22.s64 = r30.s8;
	// lbz r30,1(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r29,r6,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r21,3(r11)
	r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r6,r22,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r26
	r30.u64 = REX_LOAD_U32(r30.u32 + r26.u32);
	// lwzx r6,r6,r23
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r23.u32);
	// or r6,r30,r6
	ctx.r6.u64 = r30.u64 | ctx.r6.u64;
	// and r6,r6,r21
	ctx.r6.u64 = ctx.r6.u64 & r21.u64;
	// stb r6,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r6.u8);
loc_8274B0C4:
	// lwz r6,1772(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + r27.u64;
	// lhz r6,2(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// beq cr6,0x8274b154
	if (ctx.cr6.eq) goto loc_8274B154;
	// lwz r6,1772(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + r27.u64;
	// lhz r30,2(r6)
	r30.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// lhz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r30.u32, ctx.xer);
	// bne cr6,0x8274b154
	if (!ctx.cr6.eq) goto loc_8274B154;
	// lwz r6,1776(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + r27.u64;
	// lhz r30,2(r6)
	r30.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// lhz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r30.u32, ctx.xer);
	// bne cr6,0x8274b154
	if (!ctx.cr6.eq) goto loc_8274B154;
	// lbz r6,3(r7)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 3);
	// addi r27,r31,-320
	r27.s64 = r31.s64 + -320;
	// lbz r30,2(r7)
	r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 2);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r28,3(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r26,r30
	r26.s64 = r30.s8;
	// lbz r30,2(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// rlwinm r29,r6,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r23,3(r11)
	r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r6,r26,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r27
	r30.u64 = REX_LOAD_U32(r30.u32 + r27.u32);
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// or r6,r30,r6
	ctx.r6.u64 = r30.u64 | ctx.r6.u64;
	// and r6,r6,r23
	ctx.r6.u64 = ctx.r6.u64 & r23.u64;
	// stb r6,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r6.u8);
loc_8274B154:
	// lwz r6,136(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// mullw r5,r6,r5
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// add r29,r5,r4
	r29.u64 = ctx.r5.u64 + ctx.r4.u64;
	// bne cr6,0x8274b250
	if (!ctx.cr6.eq) goto loc_8274B250;
	// lwz r4,1780(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1780);
	// rlwinm r5,r29,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r5,r4
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r4.u32);
	// cmplwi cr6,r4,16384
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16384, ctx.xer);
	// beq cr6,0x8274b250
	if (ctx.cr6.eq) goto loc_8274B250;
	// subf r6,r6,r29
	ctx.r6.u64 = r29.u64 - ctx.r6.u64;
	// lwz r4,1780(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1780);
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r4,r5
	r30.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r5.u32);
	// lhzx r4,r4,r6
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r6.u32);
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r30.u32, ctx.xer);
	// bne cr6,0x8274b250
	if (!ctx.cr6.eq) goto loc_8274B250;
	// lwz r4,1784(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1784);
	// lhzx r6,r4,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r6.u32);
	// lhzx r5,r4,r5
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r5.u32);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8274b250
	if (!ctx.cr6.eq) goto loc_8274B250;
	// lbz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 4);
	// addi r28,r31,320
	r28.s64 = r31.s64 + 320;
	// lbz r4,4(r7)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// addi r27,r31,640
	r27.s64 = r31.s64 + 640;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r5,4(r25)
	ctx.r5.u64 = REX_LOAD_U8(r25.u32 + 4);
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// lbz r30,4(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// rlwinm r6,r6,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r26,4(r11)
	r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r4,r4,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r23,5(r11)
	r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r5,r4,r30
	ctx.r5.u64 = ctx.r4.u64 + r30.u64;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r30,r31,320
	r30.s64 = r31.s64 + 320;
	// addi r26,r31,640
	r26.s64 = r31.s64 + 640;
	// lwzx r4,r4,r27
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + r27.u32);
	// lwzx r6,r6,r28
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r28.u32);
	// or r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 | ctx.r4.u64;
	// and r6,r4,r5
	ctx.r6.u64 = ctx.r4.u64 & ctx.r5.u64;
	// stb r6,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// lbz r5,5(r7)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + 5);
	// lbz r6,5(r25)
	ctx.r6.u64 = REX_LOAD_U8(r25.u32 + 5);
	// lbz r4,5(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r8,5(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 5);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r5,r5,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r6,r5,r4
	ctx.r6.u64 = ctx.r5.u64 + ctx.r4.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r5,r26
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + r26.u32);
	// lwzx r6,r4,r30
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + r30.u32);
	// or r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 | ctx.r8.u64;
	// and r4,r5,r23
	ctx.r4.u64 = ctx.r5.u64 & r23.u64;
	// stb r4,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r4.u8);
loc_8274B250:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x8274b334
	if (!ctx.cr6.eq) goto loc_8274B334;
	// lwz r6,1780(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1780);
	// rlwinm r8,r29,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r8,r6
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,16384
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16384, ctx.xer);
	// beq cr6,0x8274b334
	if (ctx.cr6.eq) goto loc_8274B334;
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lhz r5,-2(r6)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + -2);
	// lhz r4,0(r6)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8274b334
	if (!ctx.cr6.eq) goto loc_8274B334;
	// lwz r6,1784(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1784);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lhz r6,-2(r8)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + -2);
	// lhz r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8274b334
	if (!ctx.cr6.eq) goto loc_8274B334;
	// lbz r8,4(r7)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// addi r3,r31,-320
	ctx.r3.s64 = r31.s64 + -320;
	// lbz r6,4(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// addi r30,r31,-320
	r30.s64 = r31.s64 + -320;
	// extsb r5,r8
	ctx.r5.s64 = ctx.r8.s8;
	// lbz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// extsb r8,r6
	ctx.r8.s64 = ctx.r6.s8;
	// lbz r6,4(r24)
	ctx.r6.u64 = REX_LOAD_U8(r24.u32 + 4);
	// rlwinm r5,r5,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r29,4(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r28,5(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwzx r8,r6,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// or r6,r3,r8
	ctx.r6.u64 = ctx.r3.u64 | ctx.r8.u64;
	// and r5,r6,r29
	ctx.r5.u64 = ctx.r6.u64 & r29.u64;
	// stb r5,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r5.u8);
	// lbz r8,5(r7)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + 5);
	// extsb r5,r8
	ctx.r5.s64 = ctx.r8.s8;
	// lbz r7,5(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 5);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// lbz r7,5(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r5,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r9,5(r24)
	ctx.r9.u64 = REX_LOAD_U8(r24.u32 + 5);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// lwzx r6,r8,r30
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + r30.u32);
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// and r4,r5,r28
	ctx.r4.u64 = ctx.r5.u64 & r28.u64;
	// stb r4,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r4.u8);
loc_8274B334:
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_827887D8) {
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
	// bl 0x826a1c80
	ctx.lr = 0x827887E0;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,404(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r28,396(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// stw r3,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r4,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r4.u32);
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// stw r5,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r5.u32);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// stw r6,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r6.u32);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r18,r10
	r18.u64 = ctx.r10.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x827886e8
	ctx.lr = 0x82788838;
	sub_827886E8(ctx, base);
	// lwz r27,380(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r4,388(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// add r30,r24,r8
	r30.u64 = r24.u64 + ctx.r8.u64;
	// add r20,r23,r8
	r20.u64 = r23.u64 + ctx.r8.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r31,r22
	r31.u64 = r22.u64;
	// add r17,r22,r7
	r17.u64 = r22.u64 + ctx.r7.u64;
	// mr r21,r25
	r21.u64 = r25.u64;
	// add r16,r25,r7
	r16.u64 = r25.u64 + ctx.r7.u64;
	// add r19,r30,r8
	r19.u64 = r30.u64 + ctx.r8.u64;
	// add r15,r20,r8
	r15.u64 = r20.u64 + ctx.r8.u64;
	// bl 0x827886e8
	ctx.lr = 0x82788874;
	sub_827886E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82788a68
	if (ctx.cr6.eq) goto loc_82788A68;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x82788a68
	if (ctx.cr6.eq) goto loc_82788A68;
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r10,348(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x827889b0
	if (!ctx.cr6.gt) goto loc_827889B0;
	// lwz r26,80(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r14,r11,-1
	r14.s64 = ctx.r11.s64 + -1;
	// lwz r25,84(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r24,88(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r23,92(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_827888B4:
	// lwz r6,340(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82788978
	if (!ctx.cr6.gt) goto loc_82788978;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// subf r5,r31,r21
	ctx.r5.u64 = r21.u64 - r31.u64;
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// subf r22,r19,r30
	r22.u64 = r30.u64 - r19.u64;
	// subf r3,r31,r17
	ctx.r3.u64 = r17.u64 - r31.u64;
	// subf r6,r31,r16
	ctx.r6.u64 = r16.u64 - r31.u64;
	// subf r21,r19,r15
	r21.u64 = r15.u64 - r19.u64;
	// subf r20,r19,r20
	r20.u64 = r20.u64 - r19.u64;
loc_827888E4:
	// lbzx r31,r3,r11
	r31.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// lbz r30,0(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mullw r31,r31,r4
	r31.s64 = int64_t(r31.s32) * int64_t(ctx.r4.s32);
	// mullw r30,r30,r27
	r30.s64 = int64_t(r30.s32) * int64_t(r27.s32);
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// add r31,r31,r26
	r31.u64 = r31.u64 + r26.u64;
	// sraw r31,r31,r24
	temp.u32 = r24.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r31.s32 < 0) & (((r31.s32 >> temp.u32) << temp.u32) != r31.s32);
	r31.s64 = r31.s32 >> temp.u32;
	// stbx r31,r22,r10
	REX_STORE_U8(r22.u32 + ctx.r10.u32, r31.u8);
	// lbzx r31,r3,r11
	r31.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// lbz r30,0(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mullw r30,r30,r28
	r30.s64 = int64_t(r30.s32) * int64_t(r28.s32);
	// mullw r31,r31,r29
	r31.s64 = int64_t(r31.s32) * int64_t(r29.s32);
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// add r31,r31,r25
	r31.u64 = r31.u64 + r25.u64;
	// sraw r31,r31,r23
	temp.u32 = r23.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r31.s32 < 0) & (((r31.s32 >> temp.u32) << temp.u32) != r31.s32);
	r31.s64 = r31.s32 >> temp.u32;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// lbzx r31,r5,r11
	r31.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// lbzx r30,r6,r11
	r30.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// mullw r30,r30,r4
	r30.s64 = int64_t(r30.s32) * int64_t(ctx.r4.s32);
	// mullw r31,r31,r27
	r31.s64 = int64_t(r31.s32) * int64_t(r27.s32);
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// add r31,r31,r26
	r31.u64 = r31.u64 + r26.u64;
	// sraw r31,r31,r24
	temp.u32 = r24.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r31.s32 < 0) & (((r31.s32 >> temp.u32) << temp.u32) != r31.s32);
	r31.s64 = r31.s32 >> temp.u32;
	// stbx r31,r20,r10
	REX_STORE_U8(r20.u32 + ctx.r10.u32, r31.u8);
	// lbzx r31,r5,r11
	r31.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// lbzx r30,r6,r11
	r30.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// mullw r30,r30,r29
	r30.s64 = int64_t(r30.s32) * int64_t(r29.s32);
	// mullw r31,r31,r28
	r31.s64 = int64_t(r31.s32) * int64_t(r28.s32);
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r31,r31,r25
	r31.u64 = r31.u64 + r25.u64;
	// sraw r31,r31,r23
	temp.u32 = r23.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r31.s32 < 0) & (((r31.s32 >> temp.u32) << temp.u32) != r31.s32);
	r31.s64 = r31.s32 >> temp.u32;
	// stbx r31,r21,r10
	REX_STORE_U8(r21.u32 + ctx.r10.u32, r31.u8);
	// add r10,r10,r18
	ctx.r10.u64 = ctx.r10.u64 + r18.u64;
	// bdnz 0x827888e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827888E4;
	// lwz r6,340(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r22,276(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
loc_82788978:
	// add r30,r19,r8
	r30.u64 = r19.u64 + ctx.r8.u64;
	// add r20,r15,r8
	r20.u64 = r15.u64 + ctx.r8.u64;
	// mr r31,r17
	r31.u64 = r17.u64;
	// mr r21,r16
	r21.u64 = r16.u64;
	// addic. r14,r14,-1
	ctx.xer.ca = r14.u32 > 0;
	r14.s64 = r14.s64 + -1;
	ctx.cr0.compare<int32_t>(r14.s32, 0, ctx.xer);
	// add r17,r17,r7
	r17.u64 = r17.u64 + ctx.r7.u64;
	// add r16,r16,r7
	r16.u64 = r16.u64 + ctx.r7.u64;
	// add r19,r30,r8
	r19.u64 = r30.u64 + ctx.r8.u64;
	// add r15,r20,r8
	r15.u64 = r20.u64 + ctx.r8.u64;
	// bne 0x827888b4
	if (!ctx.cr0.eq) goto loc_827888B4;
	// lwz r25,284(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r24,292(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r23,300(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// b 0x827889b4
	goto loc_827889B4;
loc_827889B0:
	// lwz r6,340(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
loc_827889B4:
	// lwz r11,356(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827889f8
	if (ctx.cr6.eq) goto loc_827889F8;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x827889f8
	if (!ctx.cr6.gt) goto loc_827889F8;
	// subf r8,r22,r25
	ctx.r8.u64 = r25.u64 - r22.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// subf r7,r24,r23
	ctx.r7.u64 = r23.u64 - r24.u64;
loc_827889DC:
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r5,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// lbzx r4,r8,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stbx r4,r7,r10
	REX_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r4.u8);
	// add r10,r10,r18
	ctx.r10.u64 = ctx.r10.u64 + r18.u64;
	// bdnz 0x827889dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827889DC;
loc_827889F8:
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82788a68
	if (ctx.cr6.eq) goto loc_82788A68;
	// lwz r4,372(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82788a68
	if (!ctx.cr6.gt) goto loc_82788A68;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82788a68
	if (!ctx.cr6.gt) goto loc_82788A68;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// subf r7,r31,r21
	ctx.r7.u64 = r21.u64 - r31.u64;
	// subf r6,r30,r19
	ctx.r6.u64 = r19.u64 - r30.u64;
	// subf r5,r30,r15
	ctx.r5.u64 = r15.u64 - r30.u64;
	// subf r10,r30,r20
	ctx.r10.u64 = r20.u64 - r30.u64;
loc_82788A34:
	// lbz r3,0(r8)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// stb r3,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// lbzx r3,r7,r8
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// stbx r3,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u8);
	// ble cr6,0x82788a5c
	if (!ctx.cr6.gt) goto loc_82788A5C;
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stbx r3,r6,r11
	REX_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r3.u8);
	// lbzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r3,r5,r11
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r3.u8);
loc_82788A5C:
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + r18.u64;
	// bdnz 0x82788a34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82788A34;
loc_82788A68:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82792BD0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,442
	ctx.r4.s64 = 442;
	// addi r3,r11,12264
	ctx.r3.s64 = ctx.r11.s64 + 12264;
	// bl 0x8269c348
	ctx.lr = 0x82792BEC;
	sub_8269C348(ctx, base);
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// stw r3,8880(r11)
	REX_STORE_U32(ctx.r11.u32 + 8880, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82792EE0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,13356
	ctx.r3.s64 = ctx.r11.s64 + 13356;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82120ac0
	sub_82120AC0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82793150) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r11,1592
	ctx.r3.s64 = ctx.r11.s64 + 1592;
	// b 0x8215f0f0
	sub_8215F0F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_827933B0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82793440) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,6008
	ctx.r3.s64 = ctx.r11.s64 + 6008;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82120ac0
	sub_82120AC0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_827935D0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82793608) {
	REX_FUNC_PROLOGUE();
	// .long 0x20001a8
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_827936D8) {
	REX_FUNC_PROLOGUE();
	// .long 0x20002c7
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_827937E8) {
	REX_FUNC_PROLOGUE();
	// .long 0x200020e
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793918) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010003
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793A68) {
	REX_FUNC_PROLOGUE();
	// .long 0x201000f
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793C08) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010199
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793DC8) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101c2
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793FA8) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000041
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_827941B8) {
	REX_FUNC_PROLOGUE();
	// .long 0x200030f
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_827943C8) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100db
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_827ABE30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// addic r1,r1,-64
	ctx.xer.ca = ctx.r1.u32 > 63;
	ctx.r1.s64 = ctx.r1.s64 + -64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r12,56(r1)
	REX_STORE_U32(ctx.r1.u32 + 56, ctx.r12.u32);
	// std r31,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, r31.u64);
	// std r30,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, r30.u64);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// stw r3,0(r1)
	REX_STORE_U32(ctx.r1.u32 + 0, ctx.r3.u32);
	// stw r4,8(r1)
	REX_STORE_U32(ctx.r1.u32 + 8, ctx.r4.u32);
	// stw r5,16(r1)
	REX_STORE_U32(ctx.r1.u32 + 16, ctx.r5.u32);
	// stw r6,24(r1)
	REX_STORE_U32(ctx.r1.u32 + 24, ctx.r6.u32);
	// std r29,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, r29.u64);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r12,8(r4)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r2,4(r4)
	ctx.r2.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r31,36(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r5,r12,1
	ctx.r5.s64 = ctx.r12.s64 + 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,8(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// ld r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
loc_827ABE8C:
	// rldicl r11,r7,10,54
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 10) & 0x3FF;
	// rldicr r11,r11,1,62
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// lhzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// clrldi r11,r8,60
	ctx.r11.u64 = ctx.r8.u64 & 0xF;
	// blt cr6,0x827ac020
	if (ctx.cr6.lt) goto loc_827AC020;
	// sld r7,r7,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r11.u8 & 0x7F));
	// rlwinm r8,r8,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// subf. r6,r11,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt 0x827abf48
	if (ctx.cr0.lt) goto loc_827ABF48;
loc_827ABEB8:
	// rldicl r11,r7,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 1) & 0x1;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rldicr r7,r7,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// blt 0x827ac084
	if (ctx.cr0.lt) goto loc_827AC084;
loc_827ABEC8:
	// rldicr r12,r8,1,62
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpw cr6,r8,r2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r2.s32, ctx.xer);
	// cmpw cr5,r8,r5
	ctx.cr5.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// lhzx r12,r31,r12
	ctx.r12.u64 = REX_LOAD_U16(r31.u32 + ctx.r12.u32);
	// rldicl r29,r12,56,8
	r29.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFF;
	// clrldi r12,r12,57
	ctx.r12.u64 = ctx.r12.u64 & 0x7F;
	// xor r0,r29,r11
	ctx.r0.u64 = r29.u64 ^ ctx.r11.u64;
	// add r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 + ctx.r12.u64;
	// subf r29,r11,r0
	r29.u64 = ctx.r0.u64 - ctx.r11.u64;
	// lbzx r0,r10,r30
	ctx.r0.u64 = REX_LOAD_U8(ctx.r10.u32 + r30.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rldicr r0,r0,1,62
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// cmpwi r10,64
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// sthx r29,r3,r0
	REX_STORE_U16(ctx.r3.u32 + ctx.r0.u32, r29.u16);
	// cror 4*cr1+eq,gt,4*cr6+eq
	ctx.cr1.eq = ctx.cr0.gt | ctx.cr6.eq;
	// crorc eq,4*cr1+eq,4*cr5+lt
	ctx.cr0.eq = ctx.cr1.eq | !(ctx.cr5.lt);
	// bne 0x827abe8c
	if (!ctx.cr0.eq) goto loc_827ABE8C;
	// std r7,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r7.u64);
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// stw r6,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// bgt cr6,0x827ac1cc
	if (ctx.cr6.gt) goto loc_827AC1CC;
	// cmpw cr5,r8,r2
	ctx.cr5.compare<int32_t>(ctx.r8.s32, ctx.r2.s32, ctx.xer);
	// beq cr5,0x827ac0ec
	if (ctx.cr5.eq) goto loc_827AC0EC;
loc_827ABF28:
	// lwz r12,56(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + 56);
	// li r3,0
	ctx.r3.s64 = 0;
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,48(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r30,40(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r29,32(r1)
	r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// addic r1,r1,64
	ctx.xer.ca = ctx.r1.u32 > 4294967231;
	ctx.r1.s64 = ctx.r1.s64 + 64;
	// blr 
	return;
loc_827ABF48:
	// lwz r12,12(r4)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// subf r11,r12,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r12.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x827abfe8
	if (ctx.cr6.gt) goto loc_827ABFE8;
	// addi r1,r1,-96
	ctx.r1.s64 = ctx.r1.s64 + -96;
	// std r7,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r7.u64);
	// stw r6,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// std r2,8(r1)
	REX_STORE_U64(ctx.r1.u32 + 8, ctx.r2.u64);
	// std r3,16(r1)
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r4,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// std r12,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r12.u64);
	// bl 0x82725d78
	ctx.lr = 0x827ABF9C;
	sub_82725D78(ctx, base);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r12,88(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r12,r3
	ctx.r12.u64 = ctx.r3.u64;
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r2,8(r1)
	ctx.r2.u64 = REX_LOAD_U64(ctx.r1.u32 + 8);
	// cmpwi cr6,r12,1
	ctx.cr6.compare<int32_t>(ctx.r12.s32, 1, ctx.xer);
	// lwz r6,8(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// ld r10,72(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 72);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// ld r3,16(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// ld r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// bne cr6,0x827abeb8
	if (!ctx.cr6.eq) goto loc_827ABEB8;
	// b 0x827abf48
	goto loc_827ABF48;
loc_827ABFE8:
	// lhz r11,0(r12)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r12.u32 + 0);
	// lhz r0,2(r12)
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + 2);
	// addi r12,r12,6
	ctx.r12.s64 = ctx.r12.s64 + 6;
	// rldicr r11,r11,32,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r0,r0,16,47
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u64, 16) & 0xFFFFFFFFFFFF0000;
	// add r11,r11,r0
	ctx.r11.u64 = ctx.r11.u64 + ctx.r0.u64;
	// lhz r0,-2(r12)
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + -2);
	// stw r12,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r12.u32);
	// neg r12,r6
	ctx.r12.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// add r11,r11,r0
	ctx.r11.u64 = ctx.r11.u64 + ctx.r0.u64;
	// addi r6,r6,48
	ctx.r6.s64 = ctx.r6.s64 + 48;
	// sld r11,r11,r12
	ctx.r11.u64 = ctx.r12.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r12.u8 & 0x7F));
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// b 0x827abeb8
	goto loc_827ABEB8;
loc_827AC020:
	// addi r1,r1,-96
	ctx.r1.s64 = ctx.r1.s64 + -96;
	// std r7,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r7.u64);
	// stw r6,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// std r2,8(r1)
	REX_STORE_U64(ctx.r1.u32 + 8, ctx.r2.u64);
	// std r3,16(r1)
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r4,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// std r9,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// bl 0x827ab8d8
	ctx.lr = 0x827AC054;
	sub_827AB8D8(ctx, base);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r2,8(r1)
	ctx.r2.u64 = REX_LOAD_U64(ctx.r1.u32 + 8);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// ld r10,72(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 72);
	// lwz r6,8(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// ld r3,16(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// ld r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// b 0x827abeb8
	goto loc_827ABEB8;
loc_827AC084:
	// addi r1,r1,-96
	ctx.r1.s64 = ctx.r1.s64 + -96;
	// std r7,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r7.u64);
	// stw r6,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// std r2,8(r1)
	REX_STORE_U64(ctx.r1.u32 + 8, ctx.r2.u64);
	// std r3,16(r1)
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r4,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r8,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x827ab808
	ctx.lr = 0x827AC0B8;
	sub_827AB808(ctx, base);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r2,8(r1)
	ctx.r2.u64 = REX_LOAD_U64(ctx.r1.u32 + 8);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// lwz r6,8(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// ld r10,72(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 72);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// ld r3,16(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// ld r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// b 0x827abec8
	goto loc_827ABEC8;
loc_827AC0EC:
	// li r29,0
	r29.s64 = 0;
	// subf r10,r12,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r12.u64;
	// sthx r29,r3,r0
	REX_STORE_U16(ctx.r3.u32 + ctx.r0.u32, r29.u16);
	// lwz r6,0(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r7,8(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 8);
	// addi r1,r1,-96
	ctx.r1.s64 = ctx.r1.s64 + -96;
	// std r2,8(r1)
	REX_STORE_U64(ctx.r1.u32 + 8, ctx.r2.u64);
	// std r3,16(r1)
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// std r4,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// std r5,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// neg r5,r11
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// std r6,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// std r12,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r12.u64);
	// bl 0x82794408
	ctx.lr = 0x827AC144;
	sub_82794408(ctx, base);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// addic. r8,r3,0
	ctx.xer.ca = ctx.r3.u32 > 4294967295;
	ctx.r8.s64 = ctx.r3.s64 + 0;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ld r2,8(r1)
	ctx.r2.u64 = REX_LOAD_U64(ctx.r1.u32 + 8);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// ld r10,72(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 72);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// ld r12,88(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// ld r3,16(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blt 0x827ac1cc
	if (ctx.cr0.lt) goto loc_827AC1CC;
	// rlwinm r11,r8,12,20,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xF00;
	// rlwinm r29,r8,24,24,31
	r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// rlwinm r12,r8,25,31,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1;
	// add r29,r29,r11
	r29.u64 = r29.u64 + ctx.r11.u64;
	// clrldi r11,r8,58
	ctx.r11.u64 = ctx.r8.u64 & 0x3F;
	// neg r12,r12
	ctx.r12.s64 = static_cast<int64_t>(-ctx.r12.u64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// xor r29,r29,r12
	r29.u64 = r29.u64 ^ ctx.r12.u64;
	// rlwinm r8,r8,16,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFF;
	// subf r29,r12,r29
	r29.u64 = r29.u64 - ctx.r12.u64;
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// lbzx r0,r10,r30
	ctx.r0.u64 = REX_LOAD_U8(ctx.r10.u32 + r30.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rldicr r0,r0,1,62
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// sthx r29,r3,r0
	REX_STORE_U16(ctx.r3.u32 + ctx.r0.u32, r29.u16);
	// lwz r6,8(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// ld r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// blt cr6,0x827abe8c
	if (ctx.cr6.lt) goto loc_827ABE8C;
	// b 0x827abf28
	goto loc_827ABF28;
loc_827AC1CC:
	// lwz r12,56(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + 56);
	// li r3,-1
	ctx.r3.s64 = -1;
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,48(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r30,40(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r29,32(r1)
	r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// addic r1,r1,64
	ctx.xer.ca = ctx.r1.u32 > 4294967231;
	ctx.r1.s64 = ctx.r1.s64 + 64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827B5698) {
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
	// vspltish v0,-5
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0xFFFB)));
	// li r10,1120
	ctx.r10.s64 = 1120;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// vspltish v1,6
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x6)));
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// vsrh v0,v0,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_srlv_epi16(a, shift));
	}
	// slw r7,r4,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r7.u8 & 0x3F));
	// lvx128 v13,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,0
	ctx.r9.s64 = 0;
	// vaddshs v2,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
	// bl 0x827b4fa8
	ctx.lr = 0x827B56E0;
	sub_827B4FA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827B6C50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v14{};
	PPCVRegister v15{};
	PPCVRegister v16{};
	PPCVRegister v17{};
	PPCVRegister v18{};
	PPCVRegister v19{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x827B6C58;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// li r9,1120
	ctx.r9.s64 = 1120;
	// vspltish v13,15
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0xF)));
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// lwz r30,1164(r6)
	r30.u64 = REX_LOAD_U32(ctx.r6.u32 + 1164);
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v11,5
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x5)));
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// vrlh v9,v12,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, result);
	}
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// vspltish v27,7
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_set1_epi16(short(0x7)));
	// lvx128 v10,r6,r9
	ea = (ctx.r6.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,1
	r31.s64 = 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// vaddshs v3,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// li r28,-32
	r28.s64 = -32;
	// vspltish v7,1
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_set1_epi16(short(0x1)));
	// li r29,-16
	r29.s64 = -16;
	// vsubshs v26,v9,v10
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// slw r9,r31,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r8.u8 & 0x3F));
	// li r3,16
	ctx.r3.s64 = 16;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// bne cr6,0x827b6e0c
	if (!ctx.cr6.eq) goto loc_827B6E0C;
	// lvx128 v60,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lvx128 v62,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v9,v62,v60,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v59,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v6,v63,v61,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v4,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v4,v58,v59,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrghb v8,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x827b6fe0
	if (!ctx.cr6.gt) goto loc_827B6FE0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_827B6D24:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v2,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vor v8,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// vor v10,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vor v1,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// vor v6,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// lvx128 v57,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v9,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v4,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v30,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// vperm128 v5,v56,v57,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vslh v28,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v21,v30,v4
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vmrglb v23,v0,v5
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v20,v29,v10
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v17,v25,v28
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v24,v9
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v22,v8,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v6,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v4,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)v23.u8));
	// vslh v31,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v30,v20,v21
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vslh v15,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v29,v18,v19
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v28,v16,v17
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v31,v22,v31
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vslh v25,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v23,v2,v15
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vadduhm v22,v30,v31
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vsubshs v21,v1,v14
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vadduhm v20,v28,v29
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vsubshs v19,v0,v25
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vsubshs v18,v0,v24
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vadduhm v17,v22,v3
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v16,v20,v3
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v15,v23,v19
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v14,v21,v18
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v2,v17,v15
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vadduhm v1,v16,v14
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vsrah v31,v2,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v30,v1,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v31,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v30,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// blt cr6,0x827b6d24
	if (ctx.cr6.lt) goto loc_827B6D24;
	// b 0x827b6fe0
	goto loc_827B6FE0;
loc_827B6E0C:
	// li r31,32
	r31.s64 = 32;
	// lvrx128 v52,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v50,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lvlx128 v55,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v53,r3,r10
	temp.u32 = ctx.r3.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v54,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v8,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v51,r31,r11
	temp.u32 = r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvrx128 v49,r31,r10
	temp.u32 = r31.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v1,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lvlx128 v48,r3,r10
	temp.u32 = ctx.r3.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v9,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vor128 v4,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v6,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v8,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r31,r11
	temp.u32 = r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v31,v46,v47
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v2,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v1,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v31,v0,v31
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x827b6fe0
	if (!ctx.cr6.gt) goto loc_827B6FE0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
loc_827B6E90:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v30,v6,v6
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vor v29,v5,v5
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// vor v6,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v10,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// vor v5,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v9,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)v31.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v1,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor v28,v4,v4
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v24,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v42,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v1,v43,v63,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vslh v25,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v4,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v22,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// vslh v21,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v20,v63,v42,v4
	simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vadduhm v15,v24,v10
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vmrglb v19,v0,v1
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v25,v31
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vmrghb v1,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v24,v22,v23
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vslh v18,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v6,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v23,v21,v9
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vor v4,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vslh v14,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v5,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v8,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// vmrghb v2,v0,v20
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v31,v19,v19
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_load_si128((simde__m128i*)v19.u8));
	// vslh v22,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v17,v18
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v19,v15,v16
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vadduhm v18,v25,v14
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vadduhm v17,v23,v24
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vslh v16,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v23,v30,v22
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vadduhm v22,v19,v20
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v20,v17,v18
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vslh v21,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v15,v16
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vslh v24,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v16,v14,v8
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v19,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v4,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v15,v0,v25
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vsubshs v21,v29,v21
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vsubshs v14,v0,v24
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vadduhm v30,v22,v3
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v29,v20,v3
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v22,v18,v19
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vslh v24,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v16,v17
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vslh v25,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v23,v15
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vadduhm v18,v21,v14
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vsubshs v16,v28,v24
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vsubshs v17,v0,v25
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vadduhm v15,v20,v22
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v14,v30,v19
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v30,v29,v18
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v29,v16,v17
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v28,v15,v3
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsrah v25,v14,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v30,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v23,v28,v29
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// stvx128 v25,r10,r28
	ea = (ctx.r10.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r10,r29
	ea = (ctx.r10.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v22,v23,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v22,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// blt cr6,0x827b6e90
	if (ctx.cr6.lt) goto loc_827B6E90;
loc_827B6FE0:
	// vspltish v10,8
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x8)));
	// li r11,0
	ctx.r11.s64 = 0;
	// vspltish v9,-1
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// vspltish v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x0)));
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// vslh v2,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// bne cr6,0x827b7090
	if (!ctx.cr6.eq) goto loc_827B7090;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827b7178
	if (!ctx.cr6.gt) goto loc_827B7178;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_827B7014:
	// lvx128 v10,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v41,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v6,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v9,v10,v41,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), 12));
	// vsldoi128 v8,v10,v41,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), 14));
	// vsldoi128 v4,v10,v41,6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), 10));
	// vsubshs v3,v10,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vslh v1,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v8,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v31,v1
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v24,v30,v9
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v23,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v28,v29
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v21,v24,v25
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vsubshs v20,v0,v23
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vadduhm v19,v21,v22
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v18,v3,v20
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v17,v19,v26
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v16,v17,v18
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vsrah v15,v16,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v40,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vor v5,v5,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// stvewx128 v40,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x827b7014
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B7014;
	// b 0x827b7178
	goto loc_827B7178;
loc_827B7090:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827b7178
	if (!ctx.cr6.gt) goto loc_827B7178;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
loc_827B70A8:
	// lvx128 v10,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v39,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v8,v9,v10,4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 12));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v6,v10,v39,4
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), 12));
	// vsubshs v31,v10,v3
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsldoi v4,v9,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 14));
	// vsldoi128 v3,v10,v39,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), 14));
	// vsubshs v30,v9,v1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v28,v9,v10,6
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 10));
	// vslh v25,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v24,v10,v39,6
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), 10));
	// vslh v23,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v23,v29
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v16,v22,v8
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v15,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v10,v21,v25
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v9,v20,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vslh v19,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v4,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v3,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v3,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vslh v6,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v4,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v1,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vslh v8,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v29,v9,v10
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubshs v25,v0,v6
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vadduhm v24,v3,v4
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsubshs v28,v0,v8
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vadduhm v23,v29,v1
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v21,v31,v25
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v20,v24,v26
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v22,v30,v28
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v19,v23,v26
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v18,v20,v22
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v17,v19,v21
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vsrah v16,v18,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v17,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v38,v5,v16
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// vpkshus128 v37,v16,v15
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vor128 v5,v38,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// stvx128 v37,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x827b70a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B70A8;
loc_827B7178:
	// vand v13,v5,v2
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vcmpgtuh. v12,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), 0xFFFF);
	// mfocrf r11,2
	ctx.r11.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x826a1d08
	return;
}

