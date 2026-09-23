#include "hydrothunder_funcs.8.h"

DEFINE_REX_FUNC(sub_82120780) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r6,16(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8212079c
	if (ctx.cr6.lt) goto loc_8212079C;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x821207a0
	goto loc_821207A0;
loc_8212079C:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_821207A0:
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r7
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x821207b0
	if (!ctx.cr6.lt) goto loc_821207B0;
loc_821207B0:
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// blt cr6,0x821207c0
	if (ctx.cr6.lt) goto loc_821207C0;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_821207C0:
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x821207d0
	if (ctx.cr6.lt) goto loc_821207D0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821207D0:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82120800
	if (ctx.cr0.eq) goto loc_82120800;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_821207E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82120800
	if (!ctx.cr0.eq) goto loc_82120800;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x821207e0
	if (!ctx.cr6.eq) goto loc_821207E0;
loc_82120800:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82120824
	if (!ctx.cr0.eq) goto loc_82120824;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82120818
	if (!ctx.cr6.lt) goto loc_82120818;
	// li r9,-1
	ctx.r9.s64 = -1;
	// b 0x82120824
	goto loc_82120824;
loc_82120818:
	// subf r11,r7,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r7.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82120824:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212C2B0) {
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
	// li r3,-2
	ctx.r3.s64 = -2;
	// bl 0x823ed118
	ctx.lr = 0x8212C2C4;
	sub_823ED118(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8212c2e4
	if (!ctx.cr6.eq) goto loc_8212C2E4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-24240
	ctx.r4.s64 = ctx.r11.s64 + -24240;
	// addi r3,r10,-24188
	ctx.r3.s64 = ctx.r10.s64 + -24188;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x821231d0
	ctx.lr = 0x8212C2E4;
	sub_821231D0(ctx, base);
loc_8212C2E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212DAB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// bl 0x826a1ca8
	ctx.lr = 0x8212DAC0;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ca0
	ctx.lr = 0x8212DAC8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8212dbf0
	if (!ctx.cr6.gt) goto loc_8212DBF0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r24,-32106
	r24.s64 = -2104098816;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r30,r3,16
	r30.s64 = ctx.r3.s64 + 16;
	// lwz r27,6168(r24)
	r27.u64 = REX_LOAD_U32(r24.u32 + 6168);
	// lfs f26,920(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 920);
	f26.f64 = double(temp.f32);
	// lfs f29,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f29.f64 = double(temp.f32);
	// lfs f28,172(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 172);
	f28.f64 = double(temp.f32);
	// lfs f27,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f27.f64 = double(temp.f32);
loc_8212DB08:
	// addi r28,r30,32
	r28.s64 = r30.s64 + 32;
	// fmr f30,f29
	ctx.fpscr.disableFlushMode();
	f30.f64 = f29.f64;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8212db84
	if (ctx.cr6.eq) goto loc_8212DB84;
	// lwz r11,32(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 32);
	// fmr f31,f28
	f31.f64 = f28.f64;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8212db80
	if (ctx.cr6.eq) goto loc_8212DB80;
loc_8212DB30:
	// lwz r31,8(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lbz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 60);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8212db6c
	if (ctx.cr0.eq) goto loc_8212DB6C;
	// lfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,216(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8212db6c
	if (!ctx.cr6.gt) goto loc_8212DB6C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82183a50
	ctx.lr = 0x8212DB5C;
	sub_82183A50(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// bge cr6,0x8212db6c
	if (!ctx.cr6.lt) goto loc_8212DB6C;
	// lfs f30,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	f30.f64 = double(temp.f32);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
loc_8212DB6C:
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,32(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8212db30
	if (!ctx.cr6.eq) goto loc_8212DB30;
	// lwz r27,6168(r24)
	r27.u64 = REX_LOAD_U32(r24.u32 + 6168);
loc_8212DB80:
	// fsqrts f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(f31.f64)));
loc_8212DB84:
	// lfs f13,696(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 696);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f30,f13
	ctx.cr6.compare(f30.f64, ctx.f13.f64);
	// beq cr6,0x8212dba0
	if (ctx.cr6.eq) goto loc_8212DBA0;
	// lfs f13,688(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 688);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,692(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 692, temp.u32);
	// stfs f30,696(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 696, temp.u32);
	// stfs f0,700(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 700, temp.u32);
loc_8212DBA0:
	// lfs f13,696(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 696);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,688(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 688);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// beq cr6,0x8212dbdc
	if (ctx.cr6.eq) goto loc_8212DBDC;
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, f26.f64);
	// bge cr6,0x8212dbc0
	if (!ctx.cr6.lt) goto loc_8212DBC0;
	// stfs f13,688(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 688, temp.u32);
	// b 0x8212dbdc
	goto loc_8212DBDC;
loc_8212DBC0:
	// lfs f12,700(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 700);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// lfs f12,692(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 692);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f27,f0
	ctx.f11.f64 = double(float(f27.f64 - ctx.f0.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmadds f0,f11,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,688(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 688, temp.u32);
loc_8212DBDC:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r30,r30,720
	r30.s64 = r30.s64 + 720;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8212db08
	if (ctx.cr6.lt) goto loc_8212DB08;
loc_8212DBF0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2cec
	ctx.lr = 0x8212DBFC;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8213A770) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-18916
	ctx.r11.s64 = ctx.r11.s64 + -18916;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8213a79c
	if (ctx.cr0.eq) goto loc_8213A79C;
	// bl 0x8269ce98
	ctx.lr = 0x8213A79C;
	sub_8269CE98(ctx, base);
loc_8213A79C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_8213BC98) {
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
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8213bcc0
	if (ctx.cr6.lt) goto loc_8213BCC0;
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x8213bcc4
	goto loc_8213BCC4;
loc_8213BCC0:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_8213BCC4:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82162af8
	ctx.lr = 0x8213BCCC;
	sub_82162AF8(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_8213EDD8) {
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
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,-17316
	ctx.r5.s64 = ctx.r10.s64 + -17316;
	// bl 0x8213f000
	ctx.lr = 0x8213EE08;
	sub_8213F000(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f0f0
	ctx.lr = 0x8213EE14;
	sub_8215F0F0(ctx, base);
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

DEFINE_REX_FUNC(sub_82141E80) {
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
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82141EA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821447D0) {
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
	ctx.lr = 0x821447D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// li r31,0
	r31.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r27,r31
	r27.u64 = r31.u64;
	// lwz r3,6192(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82144804;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82144894
	if (!ctx.cr0.gt) goto loc_82144894;
loc_8214480C:
	// lwz r3,6192(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6192);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82144824;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82144838;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82144874
	if (ctx.cr0.eq) goto loc_82144874;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82144750
	ctx.lr = 0x82144848;
	sub_82144750(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// or r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82144868;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82144874
	if (ctx.cr0.eq) goto loc_82144874;
	// li r27,1
	r27.s64 = 1;
loc_82144874:
	// lwz r3,6192(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6192);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214488C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8214480c
	if (ctx.cr6.lt) goto loc_8214480C;
loc_82144894:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8214AA30) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214AB00) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// beq cr6,0x8214ab58
	if (ctx.cr6.eq) goto loc_8214AB58;
loc_8214AB40:
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x8214AB48;
	sub_8269CE98(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8214ab40
	if (!ctx.cr6.eq) goto loc_8214AB40;
loc_8214AB58:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x8214AB60;
	sub_8269CE98(ctx, base);
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

DEFINE_REX_FUNC(sub_8214DE78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8214DE80;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6060(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6060);
	// bl 0x8212e8b0
	ctx.lr = 0x8214DE94;
	sub_8212E8B0(ctx, base);
	// addi r31,r31,36
	r31.s64 = r31.s64 + 36;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8214df80
	if (!ctx.cr0.gt) goto loc_8214DF80;
	// li r29,0
	r29.s64 = 0;
loc_8214DEB4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwzx r30,r29,r11
	r30.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8214df60
	if (ctx.cr6.eq) goto loc_8214DF60;
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 48);
	// bl 0x821357c8
	ctx.lr = 0x8214DECC;
	sub_821357C8(ctx, base);
	// lwz r3,56(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 56);
	// bl 0x821357c8
	ctx.lr = 0x8214DED4;
	sub_821357C8(ctx, base);
	// lwz r3,52(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214DEE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,60(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 60);
	// bl 0x821357c8
	ctx.lr = 0x8214DEF0;
	sub_821357C8(ctx, base);
	// lwz r3,64(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 64);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214DF04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,68(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 68);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214DF18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,72(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 72);
	// bl 0x821357c8
	ctx.lr = 0x8214DF20;
	sub_821357C8(ctx, base);
	// lwz r3,76(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 76);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214DF34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214DF48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214df58
	if (ctx.cr6.eq) goto loc_8214DF58;
	// bl 0x821357c8
	ctx.lr = 0x8214DF58;
	sub_821357C8(ctx, base);
loc_8214DF58:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8214DF60;
	sub_8269CE98(ctx, base);
loc_8214DF60:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8214deb4
	if (ctx.cr6.lt) goto loc_8214DEB4;
loc_8214DF80:
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8214dfb0
	if (ctx.cr6.eq) goto loc_8214DFB0;
	// subf r11,r4,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x8269cc20
	ctx.lr = 0x8214DFA8;
	sub_8269CC20(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = r29.u64 + r30.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_8214DFB0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821576C0) {
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
	ctx.lr = 0x821576C8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x821576f0
	if (ctx.cr6.eq) goto loc_821576F0;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x821576f0
	if (ctx.cr6.eq) goto loc_821576F0;
loc_821576E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8215776c
	goto loc_8215776C;
loc_821576F0:
	// lwz r10,4692(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4692);
	// addi r28,r31,4692
	r28.s64 = r31.s64 + 4692;
	// cmplwi cr6,r10,997
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 997, ctx.xer);
	// beq cr6,0x82157768
	if (ctx.cr6.eq) goto loc_82157768;
	// li r30,0
	r30.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8215771c
	if (!ctx.cr6.eq) goto loc_8215771C;
	// lwz r3,4720(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4720);
	// bl 0x823ede68
	ctx.lr = 0x82157718;
	sub_823EDE68(ctx, base);
	// b 0x8215772c
	goto loc_8215772C;
loc_8215771C:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8215772c
	if (!ctx.cr6.eq) goto loc_8215772C;
	// ld r30,712(r31)
	r30.u64 = REX_LOAD_U64(r31.u32 + 712);
	// lwz r29,1520(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 1520);
loc_8215772C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823ede70
	ctx.lr = 0x82157734;
	sub_823EDE70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// blt 0x821576e8
	if (ctx.cr0.lt) goto loc_821576E8;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82157dc8
	ctx.lr = 0x82157758;
	sub_82157DC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8215776c
	goto loc_8215776C;
loc_82157768:
	// li r3,3
	ctx.r3.s64 = 3;
loc_8215776C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8215C230) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215C260;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215c274
	if (ctx.cr0.eq) goto loc_8215C274;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// b 0x8215c2d8
	goto loc_8215C2D8;
loc_8215C274:
	// addi r9,r31,24
	ctx.r9.s64 = r31.s64 + 24;
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// addi r8,r31,40
	ctx.r8.s64 = r31.s64 + 40;
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// stw r9,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// stw r8,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r8.u32);
	// addi r10,r31,12
	ctx.r10.s64 = r31.s64 + 12;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// addi r9,r31,28
	ctx.r9.s64 = r31.s64 + 28;
	// addi r8,r31,44
	ctx.r8.s64 = r31.s64 + 44;
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// stw r8,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r8.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8215C2D8:
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

DEFINE_REX_FUNC(sub_82160728) {
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
	ctx.lr = 0x82160730;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb. r7,r3
	ctx.r7.s64 = ctx.r3.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8216084c
	if (ctx.cr0.eq) goto loc_8216084C;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r9,-26300
	r30.s64 = ctx.r9.s64 + -26300;
	// addi r27,r8,18864
	r27.s64 = ctx.r8.s64 + 18864;
	// addi r29,r10,18860
	r29.s64 = ctx.r10.s64 + 18860;
	// addi r28,r11,18840
	r28.s64 = ctx.r11.s64 + 18840;
loc_82160768:
	// cmpwi cr6,r7,47
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 47, ctx.xer);
	// bne cr6,0x82160810
	if (!ctx.cr6.eq) goto loc_82160810;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// bne cr6,0x821607b0
	if (!ctx.cr6.eq) goto loc_821607B0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8269f078
	ctx.lr = 0x82160794;
	sub_8269F078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821607a4
	if (ctx.cr0.eq) goto loc_821607A4;
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// b 0x82160838
	goto loc_82160838;
loc_821607A4:
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// b 0x82160804
	goto loc_82160804;
loc_821607B0:
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// bne cr6,0x821607fc
	if (!ctx.cr6.eq) goto loc_821607FC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8269f0f0
	ctx.lr = 0x821607C0;
	sub_8269F0F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821607d0
	if (ctx.cr0.eq) goto loc_821607D0;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// b 0x82160838
	goto loc_82160838;
loc_821607D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_821607D8:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821607d8
	if (!ctx.cr6.eq) goto loc_821607D8;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82160838
	goto loc_82160838;
loc_821607FC:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_82160804:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82160698
	ctx.lr = 0x8216080C;
	sub_82160698(ctx, base);
	// b 0x8216083c
	goto loc_8216083C;
loc_82160810:
	// cmpwi cr6,r7,32
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 32, ctx.xer);
	// beq cr6,0x82160830
	if (ctx.cr6.eq) goto loc_82160830;
	// cmpwi cr6,r7,9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 9, ctx.xer);
	// beq cr6,0x82160830
	if (ctx.cr6.eq) goto loc_82160830;
	// cmpwi cr6,r7,13
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 13, ctx.xer);
	// beq cr6,0x82160830
	if (ctx.cr6.eq) goto loc_82160830;
	// cmpwi cr6,r7,10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 10, ctx.xer);
	// bne cr6,0x82160850
	if (!ctx.cr6.eq) goto loc_82160850;
loc_82160830:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82160838:
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8216083C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb. r7,r3
	ctx.r7.s64 = ctx.r3.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82160768
	if (!ctx.cr0.eq) goto loc_82160768;
loc_8216084C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82160850:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8216BDB0) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,21(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8216be08
	if (!ctx.cr0.eq) goto loc_8216BE08;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
loc_8216BDE0:
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8216bdf4
	if (!ctx.cr6.lt) goto loc_8216BDF4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8216bdfc
	goto loc_8216BDFC;
loc_8216BDF4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8216BDFC:
	// lbz r8,21(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8216bde0
	if (ctx.cr0.eq) goto loc_8216BDE0;
loc_8216BE08:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8216be30
	if (ctx.cr6.eq) goto loc_8216BE30;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8216be30
	if (ctx.cr6.lt) goto loc_8216BE30;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// b 0x8216be38
	goto loc_8216BE38;
loc_8216BE30:
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
loc_8216BE38:
	// lwz r31,0(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8216be64
	if (ctx.cr6.eq) goto loc_8216BE64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x8269ce98
	ctx.lr = 0x8216BE4C;
	sub_8269CE98(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82132d80
	ctx.lr = 0x8216BE5C;
	sub_82132D80(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8216be68
	goto loc_8216BE68;
loc_8216BE64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8216BE68:
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

DEFINE_REX_FUNC(sub_821725E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821725E8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
	// addi r30,r3,88
	r30.s64 = ctx.r3.s64 + 88;
loc_821725FC:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8217265c
	if (!ctx.cr0.eq) goto loc_8217265C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ed488
	ctx.lr = 0x82172618;
	sub_823ED488(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8217265c
	if (!ctx.cr0.eq) goto loc_8217265C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ed490
	ctx.lr = 0x8217262C;
	sub_823ED490(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8217265c
	if (!ctx.cr0.eq) goto loc_8217265C;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stb r11,0(r30)
	REX_STORE_U8(r30.u32 + 0, ctx.r11.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82172658;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,-4(r30)
	REX_STORE_U32(r30.u32 + -4, ctx.r3.u32);
loc_8217265C:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,20
	r29.s64 = r29.s64 + 20;
	// addi r30,r30,36
	r30.s64 = r30.s64 + 36;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// blt cr6,0x821725fc
	if (ctx.cr6.lt) goto loc_821725FC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82177B28) {
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
	ctx.lr = 0x82177B30;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// bl 0x8215f498
	ctx.lr = 0x82177B44;
	sub_8215F498(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,28
	ctx.r11.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r10,r30,r10
	ctx.r10.u64 = ctx.r10.u64 - r30.u64;
	// divw. r27,r10,r11
	r27.u64 = uint32_t((ctx.r11.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r10.s32 / ctx.r11.s32 : 0);
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne 0x82177b70
	if (!ctx.cr0.eq) goto loc_82177B70;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,28272
	ctx.r4.s64 = ctx.r11.s64 + 28272;
	// b 0x82177c8c
	goto loc_82177C8C;
loc_82177B70:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,23740
	ctx.r4.s64 = ctx.r11.s64 + 23740;
	// bl 0x82177ca0
	ctx.lr = 0x82177B80;
	sub_82177CA0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r22,r31,8
	r22.s64 = r31.s64 + 8;
	// addi r4,r11,28288
	ctx.r4.s64 = ctx.r11.s64 + 28288;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82121928
	ctx.lr = 0x82177B94;
	sub_82121928(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x82177c4c
	if (!ctx.cr6.gt) goto loc_82177C4C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r23,r27,-1
	r23.s64 = r27.s64 + -1;
	// addi r26,r11,28264
	r26.s64 = ctx.r11.s64 + 28264;
	// addi r25,r10,28280
	r25.s64 = ctx.r10.s64 + 28280;
	// addi r24,r9,28276
	r24.s64 = ctx.r9.s64 + 28276;
	// addi r28,r8,-26856
	r28.s64 = ctx.r8.s64 + -26856;
loc_82177BC4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82177ca0
	ctx.lr = 0x82177BD4;
	sub_82177CA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82177858
	ctx.lr = 0x82177BE0;
	sub_82177858(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82177bf4
	if (!ctx.cr0.eq) goto loc_82177BF4;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_82177BF4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82177ca0
	ctx.lr = 0x82177C00;
	sub_82177CA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x82177C0C;
	sub_8215F2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82177720
	ctx.lr = 0x82177C18;
	sub_82177720(ctx, base);
	// cmpw cr6,r29,r23
	ctx.cr6.compare<int32_t>(r29.s32, r23.s32, ctx.xer);
	// blt cr6,0x82177c2c
	if (ctx.cr6.lt) goto loc_82177C2C;
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82177c3c
	if (ctx.cr0.eq) goto loc_82177C3C;
loc_82177C2C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82177ca0
	ctx.lr = 0x82177C3C;
	sub_82177CA0(ctx, base);
loc_82177C3C:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// blt cr6,0x82177bc4
	if (ctx.cr6.lt) goto loc_82177BC4;
loc_82177C4C:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r11,16(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 16);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82177c70
	if (ctx.cr6.gt) goto loc_82177C70;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x82120dc8
	ctx.lr = 0x82177C6C;
	sub_82120DC8(ctx, base);
	// b 0x82177c7c
	goto loc_82177C7C;
loc_82177C70:
	// li r5,0
	ctx.r5.s64 = 0;
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
	// bl 0x8212a778
	ctx.lr = 0x82177C7C;
	sub_8212A778(ctx, base);
loc_82177C7C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,28284
	ctx.r4.s64 = ctx.r11.s64 + 28284;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82177C8C:
	// bl 0x82177ca0
	ctx.lr = 0x82177C90;
	sub_82177CA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82122800
	ctx.lr = 0x82177C98;
	sub_82122800(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_8217FCA8) {
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
	ctx.lr = 0x8217FCB0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 104);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217fd60
	if (ctx.cr0.eq) goto loc_8217FD60;
	// addi r28,r3,136
	r28.s64 = ctx.r3.s64 + 136;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82125c20
	ctx.lr = 0x8217FCE0;
	sub_82125C20(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,136(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 136);
	// bl 0x826a1e70
	ctx.lr = 0x8217FCF0;
	sub_826A1E70(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r30,120
	ctx.r3.s64 = r30.s64 + 120;
	// addi r4,r11,30452
	ctx.r4.s64 = ctx.r11.s64 + 30452;
	// bl 0x8215f670
	ctx.lr = 0x8217FD00;
	sub_8215F670(ctx, base);
	// bl 0x8215f270
	ctx.lr = 0x8217FD04;
	sub_8215F270(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,6156(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6156);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217FD20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r4,r11,30464
	ctx.r4.s64 = ctx.r11.s64 + 30464;
	// bl 0x8215f670
	ctx.lr = 0x8217FD34;
	sub_8215F670(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8217FD3C;
	sub_8215F0F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r25,8(r24)
	REX_STORE_U32(r24.u32 + 8, r25.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r4,r10,-17324
	ctx.r4.s64 = ctx.r10.s64 + -17324;
	// bl 0x8215f670
	ctx.lr = 0x8217FD58;
	sub_8215F670(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82167680
	ctx.lr = 0x8217FD60;
	sub_82167680(ctx, base);
loc_8217FD60:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x8217fd9c
	if (!ctx.cr6.gt) goto loc_8217FD9C;
loc_8217FD68:
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// subf r5,r29,r31
	ctx.r5.u64 = r31.u64 - r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217FD84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8217fdc4
	if (!ctx.cr0.gt) goto loc_8217FDC4;
	// add r29,r3,r29
	r29.u64 = ctx.r3.u64 + r29.u64;
	// add r27,r3,r27
	r27.u64 = ctx.r3.u64 + r27.u64;
	// cmpw cr6,r29,r31
	ctx.cr6.compare<int32_t>(r29.s32, r31.s32, ctx.xer);
	// blt cr6,0x8217fd68
	if (ctx.cr6.lt) goto loc_8217FD68;
loc_8217FD9C:
	// cmpw cr6,r29,r31
	ctx.cr6.compare<int32_t>(r29.s32, r31.s32, ctx.xer);
	// beq cr6,0x8217fdbc
	if (ctx.cr6.eq) goto loc_8217FDBC;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r5,298
	ctx.r5.s64 = 298;
	// addi r3,r10,30528
	ctx.r3.s64 = ctx.r10.s64 + 30528;
loc_8217FDB0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,30224
	ctx.r4.s64 = ctx.r11.s64 + 30224;
	// bl 0x821231d0
	ctx.lr = 0x8217FDBC;
	sub_821231D0(ctx, base);
loc_8217FDBC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_8217FDC4:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r5,286
	ctx.r5.s64 = 286;
	// addi r3,r10,30476
	ctx.r3.s64 = ctx.r10.s64 + 30476;
	// b 0x8217fdb0
	goto loc_8217FDB0;
}

DEFINE_REX_FUNC(sub_8218B0A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8218B0A8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,6096(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 6096);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82135fb8
	ctx.lr = 0x8218B0C0;
	sub_82135FB8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8218B0D0:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8218b0d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218B0D0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,208(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f13,212(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x8216d040
	ctx.lr = 0x8218B104;
	sub_8216D040(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,16592
	r29.s64 = ctx.r11.s64 + 16592;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f0,224(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x821884b0
	ctx.lr = 0x8218B12C;
	sub_821884B0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x82139870
	ctx.lr = 0x8218B138;
	sub_82139870(ctx, base);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r11,192
	ctx.r11.s64 = 192;
	// li r9,255
	ctx.r9.s64 = 255;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// li r6,32
	ctx.r6.s64 = 32;
	// lfs f0,-19392(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -19392);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stb r9,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82136b58
	ctx.lr = 0x8218B180;
	sub_82136B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82135f08
	ctx.lr = 0x8218B188;
	sub_82135F08(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821911E8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15564
	ctx.r3.s64 = ctx.r11.s64 + -15564;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82191578) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82183478
	ctx.lr = 0x82191594;
	sub_82183478(ctx, base);
	// lbz r11,26(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 26);
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
	// ld r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// std r11,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r11.u64);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// std r11,48(r31)
	REX_STORE_U64(r31.u32 + 48, ctx.r11.u64);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// std r11,56(r31)
	REX_STORE_U64(r31.u32 + 56, ctx.r11.u64);
	// beq 0x821915e0
	if (ctx.cr0.eq) goto loc_821915E0;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6172(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6172);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821915E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821915E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82194E38) {
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
	ctx.lr = 0x82194E40;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// ble cr6,0x82194e7c
	if (!ctx.cr6.gt) goto loc_82194E7C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,-31704
	ctx.r4.s64 = ctx.r11.s64 + -31704;
	// addi r3,r10,-31640
	ctx.r3.s64 = ctx.r10.s64 + -31640;
	// li r5,97
	ctx.r5.s64 = 97;
	// bl 0x821231d0
	ctx.lr = 0x82194E7C;
	sub_821231D0(ctx, base);
loc_82194E7C:
	// lis r31,-32106
	r31.s64 = -2104098816;
	// li r12,-26
	ctx.r12.s64 = -26;
	// li r4,76
	ctx.r4.s64 = 76;
	// rldicr r12,r12,49,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,6060(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6060);
	// ld r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 104);
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// li r12,3
	ctx.r12.s64 = 3;
	// rldicr r12,r12,50,13
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 50) & 0xFFFC000000000000;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,104(r3)
	REX_STORE_U64(ctx.r3.u32 + 104, ctx.r11.u64);
	// bl 0x8212dd28
	ctx.lr = 0x82194EAC;
	sub_8212DD28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r5,r30,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r27.u32);
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r30.u32);
	// bl 0x826a1e70
	ctx.lr = 0x82194ECC;
	sub_826A1E70(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,6060(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6060);
	// addi r6,r11,20472
	ctx.r6.s64 = ctx.r11.s64 + 20472;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8212dc68
	ctx.lr = 0x82194EE4;
	sub_8212DC68(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,6060(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6060);
	// addi r6,r11,20744
	ctx.r6.s64 = ctx.r11.s64 + 20744;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x8212dc68
	ctx.lr = 0x82194EFC;
	sub_8212DC68(ctx, base);
	// lwz r3,6060(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6060);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r12,-24
	ctx.r12.s64 = -24;
	// addi r6,r11,20776
	ctx.r6.s64 = ctx.r11.s64 + 20776;
	// rldicr r12,r12,49,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 104);
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,52,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,104(r3)
	REX_STORE_U64(ctx.r3.u32 + 104, ctx.r11.u64);
	// bl 0x8212dc68
	ctx.lr = 0x82194F34;
	sub_8212DC68(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,6060(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6060);
	// addi r6,r11,20864
	ctx.r6.s64 = ctx.r11.s64 + 20864;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8212dc68
	ctx.lr = 0x82194F4C;
	sub_8212DC68(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82194f94
	if (ctx.cr6.eq) goto loc_82194F94;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,6060(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6060);
	// bl 0x8212dd28
	ctx.lr = 0x82194F60;
	sub_8212DD28(ctx, base);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r3,6060(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6060);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,20952
	ctx.r6.s64 = ctx.r11.s64 + 20952;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8212dc68
	ctx.lr = 0x82194F7C;
	sub_8212DC68(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,6060(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6060);
	// addi r6,r11,20952
	ctx.r6.s64 = ctx.r11.s64 + 20952;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x8212dc68
	ctx.lr = 0x82194F94;
	sub_8212DC68(ctx, base);
loc_82194F94:
	// lwz r3,6060(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6060);
	// li r12,-6
	ctx.r12.s64 = -6;
	// li r4,8
	ctx.r4.s64 = 8;
	// rldicr r12,r12,51,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 51) & 0xFFFFFFFFFFFFFFFF;
	// ld r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 104);
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// li r12,11
	ctx.r12.s64 = 11;
	// rldicr r12,r12,49,14
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFE000000000000;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,104(r3)
	REX_STORE_U64(ctx.r3.u32 + 104, ctx.r11.u64);
	// bl 0x8212dd28
	ctx.lr = 0x82194FC0;
	sub_8212DD28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic r10,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	ctx.r10.s64 = r30.s64 + -1;
	// lwz r3,6060(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6060);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// subfe r10,r10,r30
	temp.u8 = (~ctx.r10.u32 + r30.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r6,r9,20984
	ctx.r6.s64 = ctx.r9.s64 + 20984;
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r10,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x8212dc68
	ctx.lr = 0x82194FEC;
	sub_8212DC68(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8219F4C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8219F4D0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r30,16(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r29,r11,-17272
	r29.s64 = ctx.r11.s64 + -17272;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821a33a0
	ctx.lr = 0x8219F4EC;
	sub_821A33A0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,196(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f13,192(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f10,f1
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// bl 0x821a33a0
	ctx.lr = 0x8219F514;
	sub_821A33A0(ctx, base);
	// lfs f0,204(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f10,f1
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// lfs f13,200(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// bl 0x821a33a0
	ctx.lr = 0x8219F530;
	sub_821A33A0(ctx, base);
	// lfs f0,212(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f10,f1
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// lfs f13,208(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// bl 0x821a33a0
	ctx.lr = 0x8219F54C;
	sub_821A33A0(ctx, base);
	// lfs f0,220(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f10,f1
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// lfs f13,216(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// bl 0x821a33a0
	ctx.lr = 0x8219F568;
	sub_821A33A0(ctx, base);
	// lfs f0,228(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f10,f1
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// lfs f13,224(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
	// bl 0x821a33a0
	ctx.lr = 0x8219F584;
	sub_821A33A0(ctx, base);
	// lfs f0,236(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f10,f1
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// lfs f13,232(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821A6D28) {
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
	// addi r4,r3,120
	ctx.r4.s64 = ctx.r3.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821626c0
	ctx.lr = 0x821A6D50;
	sub_821626C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821a74a0
	ctx.lr = 0x821A6D5C;
	sub_821A74A0(ctx, base);
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

DEFINE_REX_FUNC(sub_821A84D0) {
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
	ctx.lr = 0x821A84D8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821626c0
	ctx.lr = 0x821A84F8;
	sub_821626C0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// rlwinm r30,r11,4,0,27
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x821a8c10
	ctx.lr = 0x821A850C;
	sub_821A8C10(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r29,4(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r29,r30
	ctx.r4.u64 = r29.u64 + r30.u64;
	// bl 0x82125c20
	ctx.lr = 0x821A8524;
	sub_82125C20(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x821A8530;
	sub_82125C98(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821A853C;
	sub_826A1E70(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821626c0
	ctx.lr = 0x821A8550;
	sub_821626C0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// rlwinm r30,r11,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x822434c8
	ctx.lr = 0x821A8564;
	sub_822434C8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r29,4(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r29,r30
	ctx.r4.u64 = r29.u64 + r30.u64;
	// bl 0x82125c20
	ctx.lr = 0x821A857C;
	sub_82125C20(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x821A8588;
	sub_82125C98(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821A8594;
	sub_826A1E70(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821626c0
	ctx.lr = 0x821A85A8;
	sub_821626C0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// rlwinm r30,r11,6,0,25
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x821a8cf0
	ctx.lr = 0x821A85BC;
	sub_821A8CF0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r29,4(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r29,r30
	ctx.r4.u64 = r29.u64 + r30.u64;
	// bl 0x82125c20
	ctx.lr = 0x821A85D4;
	sub_82125C20(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x821A85E0;
	sub_82125C98(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821A85EC;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r30,4(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// bl 0x82125c20
	ctx.lr = 0x821A85FC;
	sub_82125C20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x821A8608;
	sub_82125C98(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x826a1e70
	ctx.lr = 0x821A8614;
	sub_826A1E70(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r31,164
	ctx.r4.s64 = r31.s64 + 164;
	// bl 0x821626c0
	ctx.lr = 0x821A8620;
	sub_821626C0(ctx, base);
	// addi r4,r31,168
	ctx.r4.s64 = r31.s64 + 168;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821626c0
	ctx.lr = 0x821A862C;
	sub_821626C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821B13D0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15176
	ctx.r3.s64 = ctx.r11.s64 + -15176;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B1B18) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15160
	ctx.r3.s64 = ctx.r11.s64 + -15160;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B2430) {
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
	ctx.lr = 0x821B2438;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r8,r11,16592
	ctx.r8.s64 = ctx.r11.s64 + 16592;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// lfs f0,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f13,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r6,-23760
	ctx.r8.s64 = ctx.r6.s64 + -23760;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r27,4(r9)
	r27.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r28,r10,8536
	r28.s64 = ctx.r10.s64 + 8536;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r10,8(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r5,12(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// li r30,0
	r30.s64 = 0;
	// lwz r4,0(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// lwz r8,4(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// stw r27,36(r31)
	REX_STORE_U32(r31.u32 + 36, r27.u32);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// stw r5,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r5.u32);
	// stw r4,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r4.u32);
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// stw r8,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r8.u32);
	// beq cr6,0x821b2520
	if (ctx.cr6.eq) goto loc_821B2520;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821B24FC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b251c
	if (ctx.cr0.eq) goto loc_821B251C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r28,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_821B251C:
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
loc_821B2520:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821BA550) {
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
	// lwz r3,284(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,-19620
	ctx.r11.s64 = ctx.r11.s64 + -19620;
	// addi r10,r10,-19568
	ctx.r10.s64 = ctx.r10.s64 + -19568;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// beq cr6,0x821ba598
	if (ctx.cr6.eq) goto loc_821BA598;
	// bl 0x821357c8
	ctx.lr = 0x821BA590;
	sub_821357C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r11.u32);
loc_821BA598:
	// addi r30,r31,160
	r30.s64 = r31.s64 + 160;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// bl 0x82120ac0
	ctx.lr = 0x821BA5AC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// bl 0x82120ac0
	ctx.lr = 0x821BA5BC;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x821BA5C4;
	sub_82178388(ctx, base);
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

DEFINE_REX_FUNC(sub_821BDA48) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 128);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821bdb84
	if (ctx.cr0.eq) goto loc_821BDB84;
	// lfs f0,132(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f13,132(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x821bdb84
	if (!ctx.cr6.lt) goto loc_821BDB84;
	// addi r11,r3,136
	ctx.r11.s64 = ctx.r3.s64 + 136;
	// li r31,0
	r31.s64 = 0;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stb r31,128(r3)
	REX_STORE_U8(ctx.r3.u32 + 128, r31.u8);
	// stw r31,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, r31.u32);
	// lwz r10,128(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ble cr6,0x821bdb38
	if (!ctx.cr6.gt) goto loc_821BDB38;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// bne cr6,0x821bdaf4
	if (!ctx.cr6.eq) goto loc_821BDAF4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8216b8e0
	ctx.lr = 0x821BDAC0;
	sub_8216B8E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bdad4
	if (ctx.cr0.eq) goto loc_821BDAD4;
	// bl 0x8213bce8
	ctx.lr = 0x821BDACC;
	sub_8213BCE8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x821bdad8
	goto loc_821BDAD8;
loc_821BDAD4:
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_821BDAD8:
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8216b6a8
	ctx.lr = 0x821BDAEC;
	sub_8216B6A8(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_821BDAF4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821bdb38
	if (!ctx.cr6.gt) goto loc_821BDB38;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821bdb38
	if (!ctx.cr6.eq) goto loc_821BDB38;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6156(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6156);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BDB20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8216b6a8
	ctx.lr = 0x821BDB38;
	sub_8216B6A8(ctx, base);
loc_821BDB38:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-19168
	ctx.r4.s64 = ctx.r11.s64 + -19168;
	// bl 0x82120600
	ctx.lr = 0x821BDB48;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,112(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x821BDB54;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BDB74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821BDB84;
	sub_82120AC0(ctx, base);
loc_821BDB84:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
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

DEFINE_REX_FUNC(sub_821C6578) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,5(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c65d8
	if (!ctx.cr0.eq) goto loc_821C65D8;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ld r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lfs f0,15048(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// std r7,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// std r6,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stb r11,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stb r11,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x821c65e8
	ctx.lr = 0x821C65D8;
	sub_821C65E8(ctx, base);
loc_821C65D8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CA138) {
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
	ctx.lr = 0x821CA140;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// mr r31,r26
	r31.u64 = r26.u64;
	// bl 0x82178268
	ctx.lr = 0x821CA15C;
	sub_82178268(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r26,120(r30)
	REX_STORE_U32(r30.u32 + 120, r26.u32);
	// stb r26,124(r30)
	REX_STORE_U8(r30.u32 + 124, r26.u8);
	// li r3,100
	ctx.r3.s64 = 100;
	// addi r11,r11,-15832
	ctx.r11.s64 = ctx.r11.s64 + -15832;
	// stb r26,125(r30)
	REX_STORE_U8(r30.u32 + 125, r26.u8);
	// addi r28,r30,120
	r28.s64 = r30.s64 + 120;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addi r27,r30,124
	r27.s64 = r30.s64 + 124;
	// addi r25,r30,125
	r25.s64 = r30.s64 + 125;
	// bl 0x822f6280
	ctx.lr = 0x821CA188;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ca1a8
	if (ctx.cr0.eq) goto loc_821CA1A8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,120
	ctx.r5.s64 = 120;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821dc550
	ctx.lr = 0x821CA1A0;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821ca1ac
	goto loc_821CA1AC;
loc_821CA1A8:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_821CA1AC:
	// stw r4,116(r30)
	REX_STORE_U32(r30.u32 + 116, ctx.r4.u32);
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x821CA1B8;
	sub_821D3988(ctx, base);
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x822f6280
	ctx.lr = 0x821CA1C0;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821ca20c
	if (ctx.cr0.eq) goto loc_821CA20C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-15948
	ctx.r4.s64 = ctx.r11.s64 + -15948;
	// bl 0x82120600
	ctx.lr = 0x821CA1D8;
	sub_82120600(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r31,1
	r31.s64 = 1;
	// bl 0x82197628
	ctx.lr = 0x821CA1EC;
	sub_82197628(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r11,r11,10360
	ctx.r11.s64 = ctx.r11.s64 + 10360;
	// addi r10,r10,-11960
	ctx.r10.s64 = ctx.r10.s64 + -11960;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// stw r10,52(r29)
	REX_STORE_U32(r29.u32 + 52, ctx.r10.u32);
	// b 0x821ca210
	goto loc_821CA210;
loc_821CA20C:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_821CA210:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r28,r30,80
	r28.s64 = r30.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821CA224;
	sub_82145710(ctx, base);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ca240
	if (ctx.cr0.eq) goto loc_821CA240;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r31,0,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821CA240;
	sub_82120AC0(ctx, base);
loc_821CA240:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821CA248;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821ca278
	if (ctx.cr0.eq) goto loc_821CA278;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-15944
	ctx.r4.s64 = ctx.r11.s64 + -15944;
	// bl 0x82120600
	ctx.lr = 0x821CA260;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,2
	r31.u64 = r31.u64 | 2;
	// bl 0x82191600
	ctx.lr = 0x821CA274;
	sub_82191600(ctx, base);
	// b 0x821ca27c
	goto loc_821CA27C;
loc_821CA278:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_821CA27C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821CA28C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ca2a8
	if (ctx.cr0.eq) goto loc_821CA2A8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r31,r31,0,31,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x821CA2A8;
	sub_82120AC0(ctx, base);
loc_821CA2A8:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821CA2B0;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821ca2e0
	if (ctx.cr0.eq) goto loc_821CA2E0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,22596
	ctx.r4.s64 = ctx.r11.s64 + 22596;
	// bl 0x82120600
	ctx.lr = 0x821CA2C8;
	sub_82120600(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,4
	r31.u64 = r31.u64 | 4;
	// bl 0x82191600
	ctx.lr = 0x821CA2DC;
	sub_82191600(ctx, base);
	// b 0x821ca2e4
	goto loc_821CA2E4;
loc_821CA2E0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_821CA2E4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821CA2F4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ca30c
	if (ctx.cr0.eq) goto loc_821CA30C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x821CA30C;
	sub_82120AC0(ctx, base);
loc_821CA30C:
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821CA314;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821ca34c
	if (ctx.cr0.eq) goto loc_821CA34C;
	// stw r26,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, r26.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-22996
	ctx.r4.s64 = ctx.r11.s64 + -22996;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821CA338;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// addi r11,r11,-23824
	ctx.r11.s64 = ctx.r11.s64 + -23824;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x821ca350
	goto loc_821CA350;
loc_821CA34C:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_821CA350:
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 116);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821CA368;
	sub_82264568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_821DB790) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821DB798;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821db7e4
	if (ctx.cr6.eq) goto loc_821DB7E4;
	// lwz r29,28(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x821db7dc
	if (ctx.cr6.eq) goto loc_821DB7DC;
loc_821DB7C0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120ac0
	ctx.lr = 0x821DB7D0;
	sub_82120AC0(ctx, base);
	// addi r30,r30,36
	r30.s64 = r30.s64 + 36;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x821db7c0
	if (!ctx.cr6.eq) goto loc_821DB7C0;
loc_821DB7DC:
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x8269ce98
	ctx.lr = 0x821DB7E4;
	sub_8269CE98(ctx, base);
loc_821DB7E4:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,30592
	ctx.r10.s64 = ctx.r10.s64 + 30592;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x8214e4b0
	ctx.lr = 0x821DB808;
	sub_8214E4B0(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821db818
	if (ctx.cr0.eq) goto loc_821DB818;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821DB818;
	sub_8269CE98(ctx, base);
loc_821DB818:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821DE358) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821DE360;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r30,20(r3)
	r30.u64 = REX_LOAD_U8(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,22(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 22);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821de3c0
	if (ctx.cr6.eq) goto loc_821DE3C0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8217f4b0
	ctx.lr = 0x821DE38C;
	sub_8217F4B0(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// li r6,1
	ctx.r6.s64 = 1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// li r5,3
	ctx.r5.s64 = 3;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lbz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// rlwimi r10,r11,7,24,24
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF7F);
	// stb r10,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// bl 0x8217fb30
	ctx.lr = 0x821DE3B8;
	sub_8217FB30(ctx, base);
	// lbz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 20);
	// stb r11,22(r31)
	REX_STORE_U8(r31.u32 + 22, ctx.r11.u8);
loc_821DE3C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821E04A8) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,12996
	ctx.r11.s64 = ctx.r11.s64 + 12996;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82793a84
	ctx.lr = 0x821E04D4;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x821e04e8
	if (!ctx.cr6.eq) goto loc_821E04E8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2064(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2064);
	// b 0x821e04f0
	goto loc_821E04F0;
loc_821E04E8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2068(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2068);
loc_821E04F0:
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821e050c
	if (ctx.cr6.eq) goto loc_821E050C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x822d5c28
	ctx.lr = 0x821E050C;
	sub_822D5C28(ctx, base);
loc_821E050C:
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// bl 0x823ed698
	ctx.lr = 0x821E0514;
	sub_823ED698(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8214e4b0
	ctx.lr = 0x821E051C;
	sub_8214E4B0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e052c
	if (ctx.cr0.eq) goto loc_821E052C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821E052C;
	sub_8269CE98(ctx, base);
loc_821E052C:
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

DEFINE_REX_FUNC(sub_821E50E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f12,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// fneg f8,f10
	ctx.f8.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// lfs f9,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fneg f7,f9
	ctx.f7.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
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
	// rlwinm r7,r10,27,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// rlwinm r10,r10,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// mfcr r9
	ctx.r9.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r9.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r9.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r9.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r9.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r9.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r9.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r9.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r9.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r9.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r9.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r9.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r9.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r9.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r9.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r9.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r9.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r9.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r9.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r9.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r9.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r9.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r9.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r9.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r9.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r9.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r9.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r9.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r9.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r9.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r9.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r9.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r6,r9,27,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// lfs f11,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// addi r7,r11,256
	ctx.r7.s64 = ctx.r11.s64 + 256;
	// lfs f13,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// mfcr r8
	ctx.r8.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r8.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r8.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r8.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r8.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r8.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r8.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r8.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r8.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r8.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r8.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r8.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r8.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r8.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r8.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r8.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r8.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r8.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r8.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r8.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r8.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r8.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r8.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r8.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r8.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r8.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r8.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r8.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r8.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r8.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r8.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r8.u64 |= ctx.cr7.so ? 0x1 : 0;
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// rlwinm r5,r8,27,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// addi r6,r11,256
	ctx.r6.s64 = ctx.r11.s64 + 256;
	// lfsx f0,r7,r10
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r8,r8,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// fsel f0,f0,f10,f8
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f10.f64 : ctx.f8.f64;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// lfsx f0,r6,r9
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsel f0,f0,f9,f7
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f9.f64 : ctx.f7.f64;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfsx f0,r11,r8
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsel f0,f0,f13,f12
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F59E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821F59E8;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821f5a1c
	if (ctx.cr6.eq) goto loc_821F5A1C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,22816
	ctx.r4.s64 = ctx.r11.s64 + 22816;
	// addi r3,r10,22864
	ctx.r3.s64 = ctx.r10.s64 + 22864;
	// li r5,412
	ctx.r5.s64 = 412;
	// bl 0x821231d0
	ctx.lr = 0x821F5A1C;
	sub_821231D0(ctx, base);
loc_821F5A1C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r30,1
	ctx.r5.s64 = r30.s64 + 1;
	// addi r4,r11,23312
	ctx.r4.s64 = ctx.r11.s64 + 23312;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826a0568
	ctx.lr = 0x821F5A30;
	sub_826A0568(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120600
	ctx.lr = 0x821F5A3C;
	sub_82120600(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// bl 0x8215f338
	ctx.lr = 0x821F5A50;
	sub_8215F338(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-17264
	ctx.r4.s64 = ctx.r11.s64 + -17264;
	// bl 0x8215f338
	ctx.lr = 0x821F5A5C;
	sub_8215F338(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x821f6130
	ctx.lr = 0x821F5A68;
	sub_821F6130(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821F5A7C;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821FA9C8) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r4,r11,24836
	ctx.r4.s64 = ctx.r11.s64 + 24836;
	// bl 0x8215f338
	ctx.lr = 0x821FA9E4;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821FA9E8;
	sub_8215F990(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FB0A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821FB0A8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821fb0dc
	if (ctx.cr6.eq) goto loc_821FB0DC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,25200
	ctx.r4.s64 = ctx.r11.s64 + 25200;
	// addi r3,r10,25300
	ctx.r3.s64 = ctx.r10.s64 + 25300;
	// li r5,167
	ctx.r5.s64 = 167;
	// bl 0x821231d0
	ctx.lr = 0x821FB0DC;
	sub_821231D0(ctx, base);
loc_821FB0DC:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x821FB0F0;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,25364
	ctx.r4.s64 = ctx.r11.s64 + 25364;
	// bl 0x8215f338
	ctx.lr = 0x821FB0FC;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,17424
	ctx.r4.s64 = ctx.r11.s64 + 17424;
	// bl 0x8215f338
	ctx.lr = 0x821FB108;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x821FB110;
	sub_8215F2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x821FB118;
	sub_8215F1B0(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821FB11C;
	sub_8215F990(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821FE590) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	temp.u8 = (ctx.r10.u32 + 0xFFFFFFFFu < ctx.r10.u32) | (ctx.r10.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r10.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FFE90) {
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
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821ffedc
	if (!ctx.cr6.gt) goto loc_821FFEDC;
	// lwz r8,40(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821FFEC0:
	// lwzx r7,r11,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x821ffef8
	if (ctx.cr6.eq) goto loc_821FFEF8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821ffec0
	if (ctx.cr6.lt) goto loc_821FFEC0;
loc_821FFEDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821FFEE0:
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
loc_821FFEF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r10,1
	r30.s64 = ctx.r10.s64 + 1;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FFF10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821fff3c
	if (ctx.cr0.eq) goto loc_821FFF3C;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rotlwi r11,r30,1
	ctx.r11.u64 = __builtin_rotateleft32(r30.u32, 1);
	// divw r9,r30,r10
	ctx.r9.u64 = uint32_t((ctx.r10.s32 && !(r30.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? r30.s32 / ctx.r10.s32 : 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// subf r30,r9,r30
	r30.u64 = r30.u64 - ctx.r9.u64;
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
loc_821FFF3C:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821ffedc
	if (!ctx.cr6.lt) goto loc_821FFEDC;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x821ffee0
	goto loc_821FFEE0;
}

DEFINE_REX_FUNC(sub_82204D90) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,29980
	ctx.r11.s64 = ctx.r11.s64 + 29980;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82204dbc
	if (ctx.cr0.eq) goto loc_82204DBC;
	// bl 0x8269ce98
	ctx.lr = 0x82204DBC;
	sub_8269CE98(ctx, base);
loc_82204DBC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_82206250) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82206258;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82206314
	if (ctx.cr6.eq) goto loc_82206314;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82120cc8
	ctx.lr = 0x82206284;
	sub_82120CC8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r28,4(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x82207920
	ctx.lr = 0x8220629C;
	sub_82207920(ctx, base);
	// stw r3,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r3.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,69(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 69);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82206308
	if (!ctx.cr0.eq) goto loc_82206308;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822062cc
	goto loc_822062CC;
loc_822062C4:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
loc_822062CC:
	// lbz r8,69(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 69);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x822062c4
	if (ctx.cr0.eq) goto loc_822062C4;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x822062f4
	goto loc_822062F4;
loc_822062EC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_822062F4:
	// lbz r8,69(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 69);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x822062ec
	if (ctx.cr0.eq) goto loc_822062EC;
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82206314
	goto loc_82206314;
loc_82206308:
	// stw r10,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
loc_82206314:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,30252
	ctx.r4.s64 = ctx.r11.s64 + 30252;
	// bl 0x82120600
	ctx.lr = 0x82206324;
	sub_82120600(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r31,r10,30276
	r31.s64 = ctx.r10.s64 + 30276;
	// lwz r3,6076(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6076);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82206348;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8215fba8
	ctx.lr = 0x82206350;
	sub_8215FBA8(ctx, base);
	// stb r3,109(r30)
	REX_STORE_U8(r30.u32 + 109, ctx.r3.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120600
	ctx.lr = 0x82206360;
	sub_82120600(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220637C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,109(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 109);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r11,109(r30)
	REX_STORE_U8(r30.u32 + 109, ctx.r11.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x8220639C;
	sub_82120AC0(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// bl 0x82120b20
	ctx.lr = 0x822063B0;
	sub_82120B20(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r4,r11,30288
	ctx.r4.s64 = ctx.r11.s64 + 30288;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f670
	ctx.lr = 0x822063C4;
	sub_8215F670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,30308
	ctx.r4.s64 = ctx.r11.s64 + 30308;
	// bl 0x8215f670
	ctx.lr = 0x822063D0;
	sub_8215F670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,30316
	ctx.r4.s64 = ctx.r11.s64 + 30316;
	// bl 0x8215fbf8
	ctx.lr = 0x822063DC;
	sub_8215FBF8(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// li r29,0
	r29.s64 = 0;
	// addi r10,r10,27536
	ctx.r10.s64 = ctx.r10.s64 + 27536;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r31,6048(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// bl 0x822f6280
	ctx.lr = 0x82206400;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82206428
	if (ctx.cr0.eq) goto loc_82206428;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r10,-12728
	ctx.r10.s64 = ctx.r10.s64 + -12728;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// b 0x8220642c
	goto loc_8220642C;
loc_82206428:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_8220642C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r10,-23868
	ctx.r5.s64 = ctx.r10.s64 + -23868;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82206448;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r10,r10,28280
	ctx.r10.s64 = ctx.r10.s64 + 28280;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r31,6052(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 6052);
	// bl 0x822f6280
	ctx.lr = 0x82206468;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82206490
	if (ctx.cr0.eq) goto loc_82206490;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r10,-13900
	ctx.r10.s64 = ctx.r10.s64 + -13900;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// b 0x82206494
	goto loc_82206494;
loc_82206490:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82206494:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822064A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,109(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 109);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82206568
	if (ctx.cr0.eq) goto loc_82206568;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822064CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,30332
	ctx.r4.s64 = ctx.r11.s64 + 30332;
	// bl 0x82125d00
	ctx.lr = 0x822064DC;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82206568
	if (ctx.cr0.eq) goto loc_82206568;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,16080
	ctx.r4.s64 = ctx.r11.s64 + 16080;
	// bl 0x82120600
	ctx.lr = 0x822064F4;
	sub_82120600(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// bl 0x821ac270
	ctx.lr = 0x82206500;
	sub_821AC270(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r31,r30,84
	r31.s64 = r30.s64 + 84;
	// lwz r4,84(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 84);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82207a70
	ctx.lr = 0x82206518;
	sub_82207A70(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x82206528;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,30364
	ctx.r4.s64 = ctx.r11.s64 + 30364;
	// bl 0x82120600
	ctx.lr = 0x82206538;
	sub_82120600(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// bl 0x821ac1d8
	ctx.lr = 0x82206544;
	sub_821AC1D8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,84(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82207a70
	ctx.lr = 0x82206558;
	sub_82207A70(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82120ac0
	ctx.lr = 0x82206568;
	sub_82120AC0(ctx, base);
loc_82206568:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82206578;
	sub_82120AC0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82221220) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c84
	ctx.lr = 0x82221228;
	// stfd f30,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f30.u64);
	// stfd f31,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, f31.u64);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r29,484(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 484);
	// lwz r30,712(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 712);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82221250;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf r11,r29,r3
	ctx.r11.u64 = ctx.r3.u64 - r29.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82221264
	if (!ctx.cr6.lt) goto loc_82221264;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// b 0x82221280
	goto loc_82221280;
loc_82221264:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,484(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 484);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222127C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf r11,r30,r3
	ctx.r11.u64 = ctx.r3.u64 - r30.u64;
loc_82221280:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822212d8
	if (!ctx.cr6.gt) goto loc_822212D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,484(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 484);
	// lwz r30,712(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 712);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822212A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf r11,r29,r3
	ctx.r11.u64 = ctx.r3.u64 - r29.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822212b8
	if (!ctx.cr6.lt) goto loc_822212B8;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// b 0x822212dc
	goto loc_822212DC;
loc_822212B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,484(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 484);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822212D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf r10,r30,r3
	ctx.r10.u64 = ctx.r3.u64 - r30.u64;
	// b 0x822212dc
	goto loc_822212DC;
loc_822212D8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822212DC:
	// lwz r11,708(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 708);
	// stw r10,712(r31)
	REX_STORE_U32(r31.u32 + 712, ctx.r10.u32);
	// subf. r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x822212f0
	if (!ctx.cr0.lt) goto loc_822212F0;
	// stw r11,712(r31)
	REX_STORE_U32(r31.u32 + 712, ctx.r11.u32);
loc_822212F0:
	// lwz r10,712(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 712);
	// lwz r30,484(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 484);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r30.s32, ctx.xer);
	// blt cr6,0x82221310
	if (ctx.cr6.lt) goto loc_82221310;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,712(r31)
	REX_STORE_U32(r31.u32 + 712, ctx.r11.u32);
loc_82221310:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r10,144(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 144);
	// addi r15,r31,144
	r15.s64 = r31.s64 + 144;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82221330;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r30.s32, ctx.xer);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// blt cr6,0x82221340
	if (ctx.cr6.lt) goto loc_82221340;
	// mr r20,r30
	r20.u64 = r30.u64;
loc_82221340:
	// li r16,-1
	r16.s64 = -1;
	// li r24,0
	r24.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x82221540
	if (!ctx.cr6.gt) goto loc_82221540;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f30.f64 = double(temp.f32);
	// lfs f31,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	f31.f64 = double(temp.f32);
	// addi r27,r31,160
	r27.s64 = r31.s64 + 160;
	// addi r26,r31,268
	r26.s64 = r31.s64 + 268;
	// addi r25,r31,376
	r25.s64 = r31.s64 + 376;
	// addi r19,r31,116
	r19.s64 = r31.s64 + 116;
	// addi r23,r31,176
	r23.s64 = r31.s64 + 176;
	// addi r22,r31,284
	r22.s64 = r31.s64 + 284;
	// addi r21,r31,392
	r21.s64 = r31.s64 + 392;
	// lis r17,-32106
	r17.s64 = -2104098816;
	// addi r18,r11,-25200
	r18.s64 = ctx.r11.s64 + -25200;
loc_82221380:
	// lwz r11,712(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 712);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,708(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 708);
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + r24.u64;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822213a0
	if (!ctx.cr6.eq) goto loc_822213A0;
	// li r28,1
	r28.s64 = 1;
	// mr r16,r24
	r16.u64 = r24.u64;
loc_822213A0:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8228ca78
	ctx.lr = 0x822213A8;
	sub_8228CA78(ctx, base);
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822213C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822213d4
	if (ctx.cr6.lt) goto loc_822213D4;
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822213d8
	goto loc_822213D8;
loc_822213D4:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_822213D8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822213EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82221424
	if (ctx.cr0.eq) goto loc_82221424;
	// lwz r3,6140(r17)
	ctx.r3.u64 = REX_LOAD_U32(r17.u32 + 6140);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222140C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82221420
	if (ctx.cr6.lt) goto loc_82221420;
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82221424
	goto loc_82221424;
loc_82221420:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82221424:
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lfs f13,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lfs f12,8(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// lfs f11,12(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82221588
	ctx.lr = 0x82221464;
	sub_82221588(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f13,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lfs f12,8(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// lfs f11,12(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822214A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x826a06d8
	ctx.lr = 0x822214AC;
	sub_826A06D8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// bl 0x82221588
	ctx.lr = 0x822214C4;
	sub_82221588(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822214D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822214ec
	if (ctx.cr6.lt) goto loc_822214EC;
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822214f0
	goto loc_822214F0;
loc_822214EC:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_822214F0:
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lfs f13,4(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lfs f12,8(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 + ctx.f13.f64));
	// lfs f11,12(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82221588
	ctx.lr = 0x8222152C;
	sub_82221588(ctx, base);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// lfs f0,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// cmpw cr6,r24,r20
	ctx.cr6.compare<int32_t>(r24.s32, r20.s32, ctx.xer);
	// fadds f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
	// blt cr6,0x82221380
	if (ctx.cr6.lt) goto loc_82221380;
loc_82221540:
	// stw r20,664(r31)
	REX_STORE_U32(r31.u32 + 664, r20.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r16,668(r31)
	REX_STORE_U32(r31.u32 + 668, r16.u32);
	// addi r5,r31,136
	ctx.r5.s64 = r31.s64 + 136;
	// addi r10,r11,16592
	ctx.r10.s64 = ctx.r11.s64 + 16592;
	// lwz r9,132(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 132);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// addi r3,r31,488
	ctx.r3.s64 = r31.s64 + 488;
	// lfs f0,16592(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16592);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// bl 0x8226bf68
	ctx.lr = 0x82221574;
	sub_8226BF68(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// lfd f30,-160(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f31,-152(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_8223A810) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,-16904
	ctx.r11.s64 = ctx.r11.s64 + -16904;
	// addi r4,r4,72
	ctx.r4.s64 = ctx.r4.s64 + 72;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f0,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// lfs f0,28(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// lfs f0,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f0,36(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f0,40(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f0,44(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// lfs f0,48(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// lbz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 52);
	// stb r11,52(r31)
	REX_STORE_U8(r31.u32 + 52, ctx.r11.u8);
	// lfs f0,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// lfs f0,60(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// lfs f0,64(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// lfs f0,68(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// bl 0x82120d70
	ctx.lr = 0x8223A8B4;
	sub_82120D70(ctx, base);
	// addi r4,r30,100
	ctx.r4.s64 = r30.s64 + 100;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x82120d70
	ctx.lr = 0x8223A8C0;
	sub_82120D70(ctx, base);
	// lfs f0,128(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// addi r4,r30,132
	ctx.r4.s64 = r30.s64 + 132;
	// addi r3,r31,132
	ctx.r3.s64 = r31.s64 + 132;
	// bl 0x82120d70
	ctx.lr = 0x8223A8D4;
	sub_82120D70(ctx, base);
	// addi r4,r30,160
	ctx.r4.s64 = r30.s64 + 160;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82120d70
	ctx.lr = 0x8223A8E0;
	sub_82120D70(ctx, base);
	// lfs f0,188(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 188, temp.u32);
	// addi r4,r30,196
	ctx.r4.s64 = r30.s64 + 196;
	// addi r3,r31,196
	ctx.r3.s64 = r31.s64 + 196;
	// lfs f0,192(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 192, temp.u32);
	// bl 0x82120d70
	ctx.lr = 0x8223A8FC;
	sub_82120D70(ctx, base);
	// lbz r11,224(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 224);
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r30,240
	ctx.r4.s64 = r30.s64 + 240;
	// stb r11,224(r31)
	REX_STORE_U8(r31.u32 + 224, ctx.r11.u8);
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 228);
	// stw r11,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r11.u32);
	// bl 0x826a1e70
	ctx.lr = 0x8223A91C;
	sub_826A1E70(ctx, base);
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

DEFINE_REX_FUNC(sub_82244BD0) {
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
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x822f6280
	ctx.lr = 0x82244BE4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82244bf4
	if (ctx.cr0.eq) goto loc_82244BF4;
	// bl 0x82244c08
	ctx.lr = 0x82244BF0;
	sub_82244C08(ctx, base);
	// b 0x82244bf8
	goto loc_82244BF8;
loc_82244BF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82244BF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82245F68) {
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
	ctx.lr = 0x82245F70;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r8,r11,16592
	ctx.r8.s64 = ctx.r11.s64 + 16592;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// lfs f0,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lfs f13,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r6,-23760
	ctx.r8.s64 = ctx.r6.s64 + -23760;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r27,4(r9)
	r27.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r28,r10,3720
	r28.s64 = ctx.r10.s64 + 3720;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r10,8(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r5,12(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// li r30,0
	r30.s64 = 0;
	// lwz r4,0(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// lwz r8,4(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// stw r27,36(r31)
	REX_STORE_U32(r31.u32 + 36, r27.u32);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// stw r5,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r5.u32);
	// stw r4,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r4.u32);
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// stw r8,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r8.u32);
	// beq cr6,0x82246058
	if (ctx.cr6.eq) goto loc_82246058;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x82246034;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82246054
	if (ctx.cr0.eq) goto loc_82246054;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r28,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82246054:
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
loc_82246058:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8224FB90) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-112
	ctx.r3.s64 = ctx.r3.s64 + -112;
	// b 0x8224afa8
	sub_8224AFA8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822502E0) {
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
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82250320
	if (ctx.cr6.lt) goto loc_82250320;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-12720
	ctx.r4.s64 = ctx.r11.s64 + -12720;
	// addi r3,r10,-12600
	ctx.r3.s64 = ctx.r10.s64 + -12600;
	// li r5,141
	ctx.r5.s64 = 141;
	// bl 0x821231d0
	ctx.lr = 0x82250320;
	sub_821231D0(ctx, base);
loc_82250320:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x82250334
	if (ctx.cr6.lt) goto loc_82250334;
	// lwz r11,224(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 224);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8225034c
	if (ctx.cr6.lt) goto loc_8225034C;
loc_82250334:
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
	ctx.lr = 0x8225034C;
	sub_821231D0(ctx, base);
loc_8225034C:
	// lwz r11,220(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 220);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82252D38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,128(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 128);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82252460
	ctx.lr = 0x82252D68;
	sub_82252460(ctx, base);
	// addi r11,r31,688
	ctx.r11.s64 = r31.s64 + 688;
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,688(r31)
	REX_STORE_U64(r31.u32 + 688, ctx.r11.u64);
	// ld r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// std r11,696(r31)
	REX_STORE_U64(r31.u32 + 696, ctx.r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82254340) {
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
	// bl 0x826a1ca8
	ctx.lr = 0x82254348;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,104(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// lbz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82254368
	if (ctx.cr0.eq) goto loc_82254368;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82254604
	if (!ctx.cr6.eq) goto loc_82254604;
loc_82254368:
	// li r30,0
	r30.s64 = 0;
	// li r29,1
	r29.s64 = 1;
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// stb r29,36(r31)
	REX_STORE_U8(r31.u32 + 36, r29.u8);
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82254394;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// slw. r11,r29,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r3.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// bne 0x822543b8
	if (!ctx.cr0.eq) goto loc_822543B8;
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
	ctx.lr = 0x822543B8;
	sub_821231D0(ctx, base);
loc_822543B8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
	// stb r30,52(r31)
	REX_STORE_U8(r31.u32 + 52, r30.u8);
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
	// beq cr6,0x822545f8
	if (ctx.cr6.eq) goto loc_822545F8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,2740
	ctx.r4.s64 = ctx.r11.s64 + 2740;
	// bl 0x82120600
	ctx.lr = 0x822543F0;
	sub_82120600(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x822543FC;
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
	ctx.lr = 0x82254410;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,2760
	ctx.r4.s64 = ctx.r11.s64 + 2760;
	// bl 0x82120600
	ctx.lr = 0x82254420;
	sub_82120600(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225442C;
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
	ctx.lr = 0x82254440;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,2780
	ctx.r4.s64 = ctx.r11.s64 + 2780;
	// bl 0x82120600
	ctx.lr = 0x82254450;
	sub_82120600(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225445C;
	sub_82178B60(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x82254470;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,2800
	ctx.r4.s64 = ctx.r11.s64 + 2800;
	// bl 0x82120600
	ctx.lr = 0x82254480;
	sub_82120600(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225448C;
	sub_82178B60(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x822544A0;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,2820
	ctx.r4.s64 = ctx.r11.s64 + 2820;
	// bl 0x82120600
	ctx.lr = 0x822544B0;
	sub_82120600(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x822544BC;
	sub_82178B60(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x822544D0;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,2840
	ctx.r4.s64 = ctx.r11.s64 + 2840;
	// bl 0x82120600
	ctx.lr = 0x822544E0;
	sub_82120600(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x822544EC;
	sub_82178B60(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x82254500;
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
	ctx.lr = 0x8225451C;
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
	ctx.lr = 0x82254530;
	sub_82288798(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lbzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82288798
	ctx.lr = 0x82254548;
	sub_82288798(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lbzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82288798
	ctx.lr = 0x82254560;
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
	ctx.lr = 0x82254578;
	sub_82288848(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r30,8
	ctx.r11.s64 = r30.s64 + 8;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82288848
	ctx.lr = 0x82254590;
	sub_82288848(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,-11400
	ctx.r4.s64 = ctx.r11.s64 + -11400;
	// bl 0x82288848
	ctx.lr = 0x822545A0;
	sub_82288848(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,-11384
	ctx.r4.s64 = ctx.r11.s64 + -11384;
	// bl 0x82288848
	ctx.lr = 0x822545B0;
	sub_82288848(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,2864
	ctx.r4.s64 = ctx.r11.s64 + 2864;
	// bl 0x82120600
	ctx.lr = 0x822545C0;
	sub_82120600(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x822545CC;
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
	ctx.lr = 0x822545E0;
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
	ctx.lr = 0x822545F8;
	sub_82288798(ctx, base);
loc_822545F8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,2888
	ctx.r3.s64 = ctx.r11.s64 + 2888;
	// bl 0x8226afb8
	ctx.lr = 0x82254604;
	sub_8226AFB8(ctx, base);
loc_82254604:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82267620) {
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
	// stw r4,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x82124e10
	ctx.lr = 0x82267644;
	sub_82124E10(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82267660;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_82269968) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,604(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 604);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,608(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 608);
	// lwz r9,624(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 624);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// add r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 + ctx.r4.u64;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822699a4
	if (!ctx.cr6.lt) goto loc_822699A4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822699A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// xoris r8,r11,32768
	ctx.r8.u64 = ctx.r11.u64 ^ 2147483648;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addc r11,r11,r8
	ctx.xer.ca = ctx.r11.u32 + ctx.r8.u32 < ctx.r11.u32;
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82269a3c
	if (ctx.cr6.eq) goto loc_82269A3C;
	// stw r11,624(r31)
	REX_STORE_U32(r31.u32 + 624, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822699DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-6656
	ctx.r4.s64 = ctx.r11.s64 + -6656;
	// bl 0x82120600
	ctx.lr = 0x822699EC;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x822699F8;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r10,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r10.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82269A20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82269A30;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,-6636
	ctx.r3.s64 = ctx.r11.s64 + -6636;
	// bl 0x8226afb8
	ctx.lr = 0x82269A3C;
	sub_8226AFB8(ctx, base);
loc_82269A3C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822707C0) {
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
	ctx.lr = 0x822707C8;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r27,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r27.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// std r27,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, r27.u64);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-25248
	ctx.r4.s64 = ctx.r11.s64 + -25248;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// bl 0x82120600
	ctx.lr = 0x822707F8;
	sub_82120600(ctx, base);
	// lis r31,-32106
	r31.s64 = -2104098816;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,6256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6256);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82270818;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r25,r11,27,31,31
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82120ac0
	ctx.lr = 0x82270834;
	sub_82120AC0(ctx, base);
	// cmplwi r25,0
	ctx.cr0.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq 0x82270854
	if (ctx.cr0.eq) goto loc_82270854;
	// mr r31,r27
	r31.u64 = r27.u64;
loc_82270840:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8215f0f0
	ctx.lr = 0x82270848;
	sub_8215F0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cf4
	return;
loc_82270854:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r24,80(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-16800
	ctx.r4.s64 = ctx.r11.s64 + -16800;
	// bl 0x8215f670
	ctx.lr = 0x82270868;
	sub_8215F670(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82270870;
	sub_8215F0F0(ctx, base);
	// li r25,1
	r25.s64 = 1;
	// stw r24,8(r23)
	REX_STORE_U32(r23.u32 + 8, r24.u32);
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// stw r25,0(r23)
	REX_STORE_U32(r23.u32 + 0, r25.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x8226ff98
	ctx.lr = 0x82270898;
	sub_8226FF98(ctx, base);
	// lwz r3,6256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6256);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822708B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822708d0
	if (ctx.cr0.eq) goto loc_822708D0;
	// lis r4,0
	ctx.r4.s64 = 0;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ori r4,r4,32779
	ctx.r4.u64 = ctx.r4.u64 | 32779;
	// bl 0x8226ff98
	ctx.lr = 0x822708D0;
	sub_8226FF98(ctx, base);
loc_822708D0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,16504
	ctx.r4.s64 = ctx.r11.s64 + 16504;
	// bl 0x82120600
	ctx.lr = 0x822708E0;
	sub_82120600(ctx, base);
	// lwz r3,6256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6256);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822708FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227092c
	if (ctx.cr0.eq) goto loc_8227092C;
	// lwz r3,6256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6256);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82270920;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// bne 0x82270930
	if (!ctx.cr0.eq) goto loc_82270930;
loc_8227092C:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_82270930:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// clrlwi r30,r11,24
	r30.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82120ac0
	ctx.lr = 0x82270944;
	sub_82120AC0(ctx, base);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8227095c
	if (ctx.cr0.eq) goto loc_8227095C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x8226ff98
	ctx.lr = 0x8227095C;
	sub_8226FF98(ctx, base);
loc_8227095C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-17788
	ctx.r4.s64 = ctx.r11.s64 + -17788;
	// bl 0x82120600
	ctx.lr = 0x8227096C;
	sub_82120600(ctx, base);
	// lwz r3,6256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6256);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82270988;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822709b8
	if (ctx.cr0.eq) goto loc_822709B8;
	// lwz r3,6256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6256);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822709AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// bne 0x822709bc
	if (!ctx.cr0.eq) goto loc_822709BC;
loc_822709B8:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_822709BC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// clrlwi r31,r11,24
	r31.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82120ac0
	ctx.lr = 0x822709D0;
	sub_82120AC0(ctx, base);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x822709e8
	if (ctx.cr0.eq) goto loc_822709E8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8226ff98
	ctx.lr = 0x822709E8;
	sub_8226FF98(ctx, base);
loc_822709E8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r4,r11,16584
	ctx.r4.s64 = ctx.r11.s64 + 16584;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f338
	ctx.lr = 0x822709FC;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-28324
	ctx.r4.s64 = ctx.r11.s64 + -28324;
	// bl 0x8215f338
	ctx.lr = 0x82270A08;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82270A0C;
	sub_8215F990(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-16776
	ctx.r4.s64 = ctx.r11.s64 + -16776;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8215f670
	ctx.lr = 0x82270A20;
	sub_8215F670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82270A28;
	sub_8215F0F0(ctx, base);
	// stw r31,8(r30)
	REX_STORE_U32(r30.u32 + 8, r31.u32);
	// stw r25,0(r30)
	REX_STORE_U32(r30.u32 + 0, r25.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82270A4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82270840
	goto loc_82270840;
}

DEFINE_REX_FUNC(sub_822830C8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r11,656(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 656);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82283318
	if (ctx.cr0.eq) goto loc_82283318;
	// lwz r11,472(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 472);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r11,436(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 436);
	// lfs f6,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,96(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f6
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// bgt cr6,0x82283318
	if (ctx.cr6.gt) goto loc_82283318;
	// lwz r10,468(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 468);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r6,r10,320
	ctx.r6.s64 = ctx.r10.s64 + 320;
	// addi r6,r10,320
	ctx.r6.s64 = ctx.r10.s64 + 320;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// ld r5,320(r10)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r10.u32 + 320);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// ld r10,328(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 328);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// ld r31,0(r6)
	r31.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// ld r6,8(r6)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// std r5,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// std r10,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// lfs f13,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f10,920(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 920);
	ctx.f10.f64 = double(temp.f32);
	// std r31,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, r31.u64);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// std r6,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// lfs f11,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f11,f11
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f9,f10
	ctx.cr6.compare(ctx.f9.f64, ctx.f10.f64);
	// ble cr6,0x82283318
	if (!ctx.cr6.gt) goto loc_82283318;
	// fadds f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f12,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f1,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f9,f1,f13
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// lfs f0,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// fsqrts f2,f10
	ctx.f2.f64 = double(float(sqrt(ctx.f10.f64)));
	// std r11,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r10,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// lfs f10,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// fdivs f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f2.f64));
	// fmadds f11,f0,f11,f9
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f9.f64)));
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fcmpu cr6,f11,f6
	ctx.cr6.compare(ctx.f11.f64, ctx.f6.f64);
	// fmuls f13,f1,f9
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// fmadds f13,f0,f8,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, ctx.f13.f64)));
	// fmadds f13,f7,f6,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f7.f64, ctx.f6.f64, ctx.f13.f64)));
	// fmuls f11,f8,f13
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f12,f13,f9
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fsubs f4,f0,f11
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f5,f1,f12
	ctx.f5.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// fneg f3,f13
	ctx.f3.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fsubs f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f13,f1,f5
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f5.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fneg f0,f3
	ctx.f0.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ble cr6,0x8228323c
	if (!ctx.cr6.gt) goto loc_8228323C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8224c840
	ctx.lr = 0x82283210;
	sub_8224C840(ctx, base);
	// fcmpu cr6,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f1.f64);
	// ble cr6,0x8228323c
	if (!ctx.cr6.gt) goto loc_8228323C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
loc_8228323C:
	// lfs f0,24(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// fmuls f12,f4,f0
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f13,20(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f6,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f10,f5,f0
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f5,f3,f0
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f11,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f0,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lis r7,-32126
	ctx.r7.s64 = -2105409536;
	// fmuls f4,f0,f13
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r11,468(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 468);
	// addi r10,r11,432
	ctx.r10.s64 = ctx.r11.s64 + 432;
	// lfs f13,-16132(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -16132);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f3,f12,f12
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f2,368(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 368);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,372(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 372);
	ctx.f1.f64 = double(temp.f32);
	// fadds f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f12,f5,f4
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// lfs f12,376(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 376);
	ctx.f12.f64 = double(temp.f32);
	// std r10,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// lfs f11,432(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 432);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f6,f5,f5,f3
	ctx.f6.f64 = double(float(std::fma(ctx.f5.f64, ctx.f5.f64, ctx.f3.f64)));
	// ld r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r10,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// lfs f4,436(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 436);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f10,f10,f10,f6
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f6.f64)));
	// lfs f5,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,440(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 440);
	ctx.f3.f64 = double(temp.f32);
	// fsqrts f10,f10
	ctx.f10.f64 = double(float(sqrt(ctx.f10.f64)));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f10,f13,f9
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f9,f8,f13
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fsubs f10,f5,f9
	ctx.f10.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// fsubs f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fmuls f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f10,f1,f10
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,432(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 432, temp.u32);
	// fadds f0,f4,f10
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// stfs f0,436(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 436, temp.u32);
	// fadds f0,f3,f13
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// stfs f0,440(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 440, temp.u32);
loc_82283318:
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

DEFINE_REX_FUNC(sub_822941E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f0,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,52(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f13,48(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lfs f12,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f0,56(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,56(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// fsubs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f31,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	f31.f64 = double(temp.f32);
	// lfs f0,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// fdivs f30,f0,f1
	f30.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// fmuls f0,f30,f13
	ctx.f0.f64 = double(float(f30.f64 * ctx.f13.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f0,f30,f12
	ctx.f0.f64 = double(float(f30.f64 * ctx.f12.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f30,f11
	ctx.f0.f64 = double(float(f30.f64 * ctx.f11.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// bl 0x822942e8
	ctx.lr = 0x82294280;
	sub_822942E8(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f12,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmuls f13,f30,f13
	ctx.f13.f64 = double(float(f30.f64 * ctx.f13.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f30,f12
	ctx.f13.f64 = double(float(f30.f64 * ctx.f12.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 * ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A12A0) {
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
	// bl 0x826a1ca4
	ctx.lr = 0x822A12A8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,180(r3)
	REX_STORE_U32(ctx.r3.u32 + 180, ctx.r11.u32);
	// beq cr6,0x822a1374
	if (ctx.cr6.eq) goto loc_822A1374;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stb r26,72(r4)
	REX_STORE_U8(ctx.r4.u32 + 72, r26.u8);
	// li r10,276
	ctx.r10.s64 = 276;
	// addi r9,r11,5868
	ctx.r9.s64 = ctx.r11.s64 + 5868;
	// stw r10,64(r4)
	REX_STORE_U32(ctx.r4.u32 + 64, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stb r11,92(r4)
	REX_STORE_U8(ctx.r4.u32 + 92, ctx.r11.u8);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r26,88(r4)
	REX_STORE_U32(ctx.r4.u32 + 88, r26.u32);
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// stw r26,80(r4)
	REX_STORE_U32(ctx.r4.u32 + 80, r26.u32);
	// stw r26,84(r4)
	REX_STORE_U32(ctx.r4.u32 + 84, r26.u32);
	// stb r11,112(r4)
	REX_STORE_U8(ctx.r4.u32 + 112, ctx.r11.u8);
	// stw r26,108(r4)
	REX_STORE_U32(ctx.r4.u32 + 108, r26.u32);
	// lfs f12,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f12.f64 = double(temp.f32);
	// stw r26,100(r4)
	REX_STORE_U32(ctx.r4.u32 + 100, r26.u32);
	// lfs f0,596(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 596);
	ctx.f0.f64 = double(temp.f32);
	// stw r26,104(r4)
	REX_STORE_U32(ctx.r4.u32 + 104, r26.u32);
	// lfs f13,172(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,132(r4)
	REX_STORE_U8(ctx.r4.u32 + 132, ctx.r11.u8);
	// stw r26,128(r4)
	REX_STORE_U32(ctx.r4.u32 + 128, r26.u32);
	// stw r26,120(r4)
	REX_STORE_U32(ctx.r4.u32 + 120, r26.u32);
	// stw r26,124(r4)
	REX_STORE_U32(ctx.r4.u32 + 124, r26.u32);
	// stb r11,152(r4)
	REX_STORE_U8(ctx.r4.u32 + 152, ctx.r11.u8);
	// stw r26,148(r4)
	REX_STORE_U32(ctx.r4.u32 + 148, r26.u32);
	// stw r26,140(r4)
	REX_STORE_U32(ctx.r4.u32 + 140, r26.u32);
	// stw r26,144(r4)
	REX_STORE_U32(ctx.r4.u32 + 144, r26.u32);
	// stw r26,156(r4)
	REX_STORE_U32(ctx.r4.u32 + 156, r26.u32);
	// stb r11,176(r4)
	REX_STORE_U8(ctx.r4.u32 + 176, ctx.r11.u8);
	// stw r26,172(r4)
	REX_STORE_U32(ctx.r4.u32 + 172, r26.u32);
	// stw r26,164(r4)
	REX_STORE_U32(ctx.r4.u32 + 164, r26.u32);
	// stw r26,168(r4)
	REX_STORE_U32(ctx.r4.u32 + 168, r26.u32);
	// stw r26,180(r4)
	REX_STORE_U32(ctx.r4.u32 + 180, r26.u32);
	// stfs f0,16(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f0,24(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// stfs f12,28(r4)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// stfs f13,32(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// stfs f13,36(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// stfs f13,40(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// stfs f12,44(r4)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + 44, temp.u32);
loc_822A1374:
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// clrlwi. r23,r6,24
	r23.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq 0x822a1494
	if (ctx.cr0.eq) goto loc_822A1494;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rlwimi r8,r11,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r9,r8,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// addi r10,r31,15
	ctx.r10.s64 = r31.s64 + 15;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// addi r11,r30,18
	ctx.r11.s64 = r30.s64 + 18;
	// subf r8,r30,r31
	ctx.r8.u64 = r31.u64 - r30.u64;
	// stw r9,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r9.u32);
loc_822A13B4:
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r9,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r9,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r9.u8);
	// lbz r9,-1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// stbx r9,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbz r9,-2(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stbu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x822a13b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A13B4;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r31,31
	ctx.r10.s64 = r31.s64 + 31;
	// addi r11,r30,34
	ctx.r11.s64 = r30.s64 + 34;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822A13EC:
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r9,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r9,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r9.u8);
	// lbz r9,-1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// stbx r9,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u8);
	// lbz r9,-2(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stbu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x822a13ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A13EC;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r31,47
	ctx.r10.s64 = r31.s64 + 47;
	// addi r11,r30,50
	ctx.r11.s64 = r30.s64 + 50;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822A1424:
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r9,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r9,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r9.u8);
	// lbz r9,-1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// stbx r9,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u8);
	// lbz r9,-2(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stbu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x822a1424
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A1424;
	// lwz r11,156(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 156);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r11.u32);
	// lwz r11,180(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 180);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x822a14d8
	goto loc_822A14D8;
loc_822A1494:
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// addi r10,r31,16
	ctx.r10.s64 = r31.s64 + 16;
	// ld r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 16);
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// ld r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 24);
	// std r11,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r11.u64);
	// ld r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 32);
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
	// ld r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 40);
	// std r11,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r11.u64);
	// ld r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 48);
	// std r11,48(r31)
	REX_STORE_U64(r31.u32 + 48, ctx.r11.u64);
	// ld r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 56);
	// std r11,56(r31)
	REX_STORE_U64(r31.u32 + 56, ctx.r11.u64);
	// lwz r11,156(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 156);
	// stw r11,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r11.u32);
	// lwz r11,180(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 180);
loc_822A14D8:
	// stw r11,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r11.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lbz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 72);
	// addi r27,r31,192
	r27.s64 = r31.s64 + 192;
	// stb r11,72(r31)
	REX_STORE_U8(r31.u32 + 72, ctx.r11.u8);
	// addi r25,r10,112
	r25.s64 = ctx.r10.s64 + 112;
	// lbz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 72);
	// lwz r28,68(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 68);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r24,r11,-19400
	r24.s64 = ctx.r11.s64 + -19400;
	// beq 0x822a173c
	if (ctx.cr0.eq) goto loc_822A173C;
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// addi r29,r31,136
	r29.s64 = r31.s64 + 136;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a1544
	if (ctx.cr6.eq) goto loc_822A1544;
	// lbz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822a1540
	if (ctx.cr0.eq) goto loc_822A1540;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r9,0(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A1540;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A1540:
	// stw r26,12(r29)
	REX_STORE_U32(r29.u32 + 12, r26.u32);
loc_822A1544:
	// stw r27,12(r29)
	REX_STORE_U32(r29.u32 + 12, r27.u32);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// stw r28,4(r29)
	REX_STORE_U32(r29.u32 + 4, r28.u32);
	// stb r26,16(r29)
	REX_STORE_U8(r29.u32 + 16, r26.u8);
	// stw r28,8(r29)
	REX_STORE_U32(r29.u32 + 8, r28.u32);
	// beq cr6,0x822a167c
	if (ctx.cr6.eq) goto loc_822A167C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x822a1734
	if (!ctx.cr6.gt) goto loc_822A1734;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_822A156C:
	// lwz r10,148(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 148);
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lhzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r8,r10,8,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF00;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// sthx r10,r9,r11
	REX_STORE_U16(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u16);
	// lwz r9,148(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 148);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r9,2(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 148);
	// rlwinm r8,r9,8,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF00;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// sth r9,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// lwz r10,148(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 148);
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// rlwinm r8,r10,8,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF00;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// sth r10,4(r9)
	REX_STORE_U16(ctx.r9.u32 + 4, ctx.r10.u16);
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lwz r10,148(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 148);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,6(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// rlwinm r8,r10,8,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF00;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// sth r10,6(r9)
	REX_STORE_U16(ctx.r9.u32 + 6, ctx.r10.u16);
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lwz r10,148(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 148);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// rlwinm r8,r10,8,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF00;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// sth r10,8(r9)
	REX_STORE_U16(ctx.r9.u32 + 8, ctx.r10.u16);
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lwz r10,148(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 148);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,10(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 10);
	// rlwinm r8,r10,8,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF00;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// sth r10,10(r9)
	REX_STORE_U16(ctx.r9.u32 + 10, ctx.r10.u16);
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lwz r10,148(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 148);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// rlwimi r8,r10,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r10,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r8,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// bdnz 0x822a156c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A156C;
	// b 0x822a1734
	goto loc_822A1734;
loc_822A167C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x822a1734
	if (!ctx.cr6.gt) goto loc_822A1734;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_822A168C:
	// lwz r10,148(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 148);
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lhzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// sthx r10,r9,r11
	REX_STORE_U16(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u16);
	// lwz r10,148(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 148);
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// sth r10,2(r9)
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r10.u16);
	// lwz r10,148(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 148);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lhz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// sth r10,4(r9)
	REX_STORE_U16(ctx.r9.u32 + 4, ctx.r10.u16);
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lwz r10,148(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 148);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhz r10,6(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// sth r10,6(r9)
	REX_STORE_U16(ctx.r9.u32 + 6, ctx.r10.u16);
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lwz r10,148(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 148);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// sth r10,8(r9)
	REX_STORE_U16(ctx.r9.u32 + 8, ctx.r10.u16);
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lwz r9,148(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 148);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r9,10(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 10);
	// sth r9,10(r10)
	REX_STORE_U16(ctx.r10.u32 + 10, ctx.r9.u16);
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lwz r9,148(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 148);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// bdnz 0x822a168c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A168C;
loc_822A1734:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x822a199c
	goto loc_822A199C;
loc_822A173C:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// addi r29,r31,96
	r29.s64 = r31.s64 + 96;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a1778
	if (ctx.cr6.eq) goto loc_822A1778;
	// lbz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822a1774
	if (ctx.cr0.eq) goto loc_822A1774;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r9,0(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A1774;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A1774:
	// stw r26,12(r29)
	REX_STORE_U32(r29.u32 + 12, r26.u32);
loc_822A1778:
	// stw r27,12(r29)
	REX_STORE_U32(r29.u32 + 12, r27.u32);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// stw r28,4(r29)
	REX_STORE_U32(r29.u32 + 4, r28.u32);
	// stb r26,16(r29)
	REX_STORE_U8(r29.u32 + 16, r26.u8);
	// stw r28,8(r29)
	REX_STORE_U32(r29.u32 + 8, r28.u32);
	// beq cr6,0x822a18ec
	if (ctx.cr6.eq) goto loc_822A18EC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x822a1998
	if (!ctx.cr6.gt) goto loc_822A1998;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_822A17A0:
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r9,108(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 108);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// addi r8,r9,2
	ctx.r8.s64 = ctx.r9.s64 + 2;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
loc_822A17C4:
	// lbz r9,1(r8)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// stb r9,1(r7)
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r9.u8);
	// lbz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// stb r9,2(r7)
	REX_STORE_U8(ctx.r7.u32 + 2, ctx.r9.u8);
	// lbz r9,-1(r8)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + -1);
	// stbx r9,r10,r8
	REX_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u8);
	// lbz r9,-2(r8)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + -2);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stbu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x822a17c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A17C4;
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r9,108(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 108);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// addi r8,r9,2
	ctx.r8.s64 = ctx.r9.s64 + 2;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
loc_822A1818:
	// lbz r9,1(r8)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// stb r9,1(r7)
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r9.u8);
	// lbz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// stb r9,2(r7)
	REX_STORE_U8(ctx.r7.u32 + 2, ctx.r9.u8);
	// lbz r9,-1(r8)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + -1);
	// stbx r9,r10,r8
	REX_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u8);
	// lbz r9,-2(r8)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + -2);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stbu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x822a1818
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A1818;
	// lwz r9,108(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 108);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,32(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r9,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r8,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r9,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r9.u32);
	// lwz r10,108(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 108);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,36(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r9,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r8,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r9,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// lwz r10,108(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 108);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r9,40(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r9,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r8,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r9,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r9.u32);
	// bne 0x822a17a0
	if (!ctx.cr0.eq) goto loc_822A17A0;
	// b 0x822a1998
	goto loc_822A1998;
loc_822A18EC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x822a1998
	if (!ctx.cr6.gt) goto loc_822A1998;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_822A18FC:
	// lwz r8,108(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 108);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 108);
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// ldx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r8.u32);
	// stdx r8,r11,r9
	REX_STORE_U64(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u64);
	// ld r9,8(r7)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// std r9,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r9.u64);
	// lwz r8,108(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 108);
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 108);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r7,r9,16
	ctx.r7.s64 = ctx.r9.s64 + 16;
	// addi r7,r8,16
	ctx.r7.s64 = ctx.r8.s64 + 16;
	// ld r7,16(r8)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r8.u32 + 16);
	// std r7,16(r9)
	REX_STORE_U64(ctx.r9.u32 + 16, ctx.r7.u64);
	// ld r8,24(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 24);
	// std r8,24(r9)
	REX_STORE_U64(ctx.r9.u32 + 24, ctx.r8.u64);
	// lwz r8,108(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r9,108(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 108);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r9,32(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// stw r9,32(r8)
	REX_STORE_U32(ctx.r8.u32 + 32, ctx.r9.u32);
	// lwz r8,108(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r9,108(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 108);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r9,36(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// stw r9,36(r8)
	REX_STORE_U32(ctx.r8.u32 + 36, ctx.r9.u32);
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r8,108(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 108);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r8,40(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r8,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r8.u32);
	// bne 0x822a18fc
	if (!ctx.cr0.eq) goto loc_822A18FC;
loc_822A1998:
	// rlwinm r11,r28,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 6) & 0xFFFFFFC0;
loc_822A199C:
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a19d8
	if (ctx.cr6.eq) goto loc_822A19D8;
	// lbz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822a19d4
	if (ctx.cr0.eq) goto loc_822A19D4;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r9,0(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A19D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A19D4:
	// stw r26,12(r29)
	REX_STORE_U32(r29.u32 + 12, r26.u32);
loc_822A19D8:
	// stw r26,8(r29)
	REX_STORE_U32(r29.u32 + 8, r26.u32);
	// addi r28,r31,160
	r28.s64 = r31.s64 + 160;
	// stw r26,4(r29)
	REX_STORE_U32(r29.u32 + 4, r26.u32);
	// stw r26,12(r29)
	REX_STORE_U32(r29.u32 + 12, r26.u32);
	// stb r26,16(r29)
	REX_STORE_U8(r29.u32 + 16, r26.u8);
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lwz r29,180(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a1a28
	if (ctx.cr6.eq) goto loc_822A1A28;
	// lbz r10,16(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822a1a24
	if (ctx.cr0.eq) goto loc_822A1A24;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r9,0(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A1A24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A1A24:
	// stw r26,12(r28)
	REX_STORE_U32(r28.u32 + 12, r26.u32);
loc_822A1A28:
	// stw r27,12(r28)
	REX_STORE_U32(r28.u32 + 12, r27.u32);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// stw r29,4(r28)
	REX_STORE_U32(r28.u32 + 4, r29.u32);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stb r26,16(r28)
	REX_STORE_U8(r28.u32 + 16, r26.u8);
	// stw r29,8(r28)
	REX_STORE_U32(r28.u32 + 8, r29.u32);
	// lwz r11,180(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 180);
	// beq cr6,0x822a1ba4
	if (ctx.cr6.eq) goto loc_822A1BA4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822a1ca0
	if (!ctx.cr6.gt) goto loc_822A1CA0;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_822A1A54:
	// lwz r9,172(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 172);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,172(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lhzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r7,r9,8,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF00;
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// sthx r9,r11,r8
	REX_STORE_U16(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u16);
	// lwz r8,172(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 172);
	// lwz r9,172(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 172);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r8,2(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 2);
	// rlwinm r7,r8,8,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00;
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// sth r8,2(r9)
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r8.u16);
	// lwz r9,172(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 172);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,172(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lhz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 4);
	// rlwinm r7,r8,8,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// sth r8,4(r9)
	REX_STORE_U16(ctx.r9.u32 + 4, ctx.r8.u16);
	// lwz r8,172(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 172);
	// lwz r9,172(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 172);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lhz r8,6(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 6);
	// rlwinm r7,r8,8,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00;
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// sth r8,6(r9)
	REX_STORE_U16(ctx.r9.u32 + 6, ctx.r8.u16);
	// lwz r8,172(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lwz r9,172(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 172);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 8);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r7,r9,8,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF00;
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// sth r9,8(r8)
	REX_STORE_U16(ctx.r8.u32 + 8, ctx.r9.u16);
	// lwz r9,172(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 172);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r8,172(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lhz r9,10(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 10);
	// rlwinm r7,r9,8,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF00;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// sth r9,10(r8)
	REX_STORE_U16(ctx.r8.u32 + 10, ctx.r9.u16);
	// lwz r9,172(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 172);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,172(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r8,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r7,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r8,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
	// lwz r9,172(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lwz r8,172(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 172);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,16(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r8,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r7,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r8,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r8.u32);
	// lwz r9,180(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 180);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822a1a54
	if (ctx.cr6.lt) goto loc_822A1A54;
	// b 0x822a1ca0
	goto loc_822A1CA0;
loc_822A1BA4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822a1ca0
	if (!ctx.cr6.gt) goto loc_822A1CA0;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_822A1BB0:
	// lwz r9,172(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 172);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,172(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lhzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// sthx r9,r8,r11
	REX_STORE_U16(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u16);
	// lwz r8,172(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 172);
	// lwz r9,172(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 172);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhz r8,2(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 2);
	// sth r8,2(r9)
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r8.u16);
	// lwz r8,172(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 172);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r9,172(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 172);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 4);
	// sth r9,4(r8)
	REX_STORE_U16(ctx.r8.u32 + 4, ctx.r9.u16);
	// lwz r9,172(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 172);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r8,172(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lhz r9,6(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 6);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// sth r9,6(r8)
	REX_STORE_U16(ctx.r8.u32 + 6, ctx.r9.u16);
	// lwz r9,172(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 172);
	// lwz r8,172(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 172);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 8);
	// sth r9,8(r8)
	REX_STORE_U16(ctx.r8.u32 + 8, ctx.r9.u16);
	// lwz r9,172(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lwz r8,172(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 172);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lhz r8,10(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 10);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// sth r8,10(r9)
	REX_STORE_U16(ctx.r9.u32 + 10, ctx.r8.u16);
	// lwz r8,172(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 172);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r9,172(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 172);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stw r9,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// lwz r9,172(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lwz r8,172(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 172);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r8,16(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// stw r8,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r8.u32);
	// lwz r9,172(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 172);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r26,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, r26.u32);
	// lwz r9,172(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 172);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r26,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, r26.u32);
	// lwz r9,172(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 172);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r26,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, r26.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lwz r9,180(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 180);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822a1bb0
	if (ctx.cr6.lt) goto loc_822A1BB0;
loc_822A1CA0:
	// lwz r10,12(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a1cd8
	if (ctx.cr6.eq) goto loc_822A1CD8;
	// lbz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822a1cd4
	if (ctx.cr0.eq) goto loc_822A1CD4;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r9,0(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A1CD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A1CD4:
	// stw r26,12(r28)
	REX_STORE_U32(r28.u32 + 12, r26.u32);
loc_822A1CD8:
	// stb r26,16(r28)
	REX_STORE_U8(r28.u32 + 16, r26.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r26,12(r28)
	REX_STORE_U32(r28.u32 + 12, r26.u32);
	// stw r26,4(r28)
	REX_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r26,8(r28)
	REX_STORE_U32(r28.u32 + 8, r26.u32);
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_822EDF70) {
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
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r11,r11,14988
	ctx.r11.s64 = ctx.r11.s64 + 14988;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6040(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822EDFB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82120ac0
	ctx.lr = 0x822EDFC4;
	sub_82120AC0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,17212
	ctx.r11.s64 = ctx.r11.s64 + 17212;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x822edfe0
	if (ctx.cr0.eq) goto loc_822EDFE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822EDFE0;
	sub_8269CE98(ctx, base);
loc_822EDFE0:
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

DEFINE_REX_FUNC(sub_822F0570) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c80
	ctx.lr = 0x822F0578;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r6,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r6.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r14,r5
	r14.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x822f0048
	ctx.lr = 0x822F0594;
	sub_822F0048(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15460
	ctx.r4.s64 = ctx.r11.s64 + 15460;
	// lwz r18,8(r25)
	r18.u64 = REX_LOAD_U32(r25.u32 + 8);
	// bl 0x82180150
	ctx.lr = 0x822F05A8;
	sub_82180150(ctx, base);
	// lbz r11,64(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 64);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822f060c
	if (!ctx.cr0.eq) goto loc_822F060C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822F05C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822F05E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r5,8(r14)
	ctx.r5.u64 = REX_LOAD_U32(r14.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r4,16(r14)
	ctx.r4.u64 = REX_LOAD_U32(r14.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822F0608;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822f0954
	goto loc_822F0954;
loc_822F060C:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,28(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 28);
	// li r23,0
	r23.s64 = 0;
	// mr r16,r11
	r16.u64 = ctx.r11.u64;
	// addi r3,r25,24
	ctx.r3.s64 = r25.s64 + 24;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stb r23,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r23.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// ble cr6,0x822f063c
	if (!ctx.cr6.gt) goto loc_822F063C;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822f0960
	ctx.lr = 0x822F063C;
	sub_822F0960(ctx, base);
loc_822F063C:
	// li r15,1
	r15.s64 = 1;
	// mr r22,r23
	r22.u64 = r23.u64;
	// mr r21,r15
	r21.u64 = r15.u64;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// ble cr6,0x822f0954
	if (!ctx.cr6.gt) goto loc_822F0954;
	// addi r28,r25,44
	r28.s64 = r25.s64 + 44;
	// lis r17,-32126
	r17.s64 = -2105409536;
	// lis r19,-32106
	r19.s64 = -2104098816;
loc_822F0660:
	// lwz r9,16(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 16);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r24,r23
	r24.u64 = r23.u64;
	// mr r20,r11
	r20.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r18.s32, ctx.xer);
	// lwzx r26,r9,r10
	r26.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bge cr6,0x822f07c4
	if (!ctx.cr6.lt) goto loc_822F07C4;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
loc_822F0680:
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 16);
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r26.s32, ctx.xer);
	// bne cr6,0x822f07c4
	if (!ctx.cr6.eq) goto loc_822F07C4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,16(r14)
	ctx.r9.u64 = REX_LOAD_U32(r14.u32 + 16);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// lwzx r29,r8,r9
	r29.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bne cr6,0x822f0768
	if (!ctx.cr6.eq) goto loc_822F0768;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x822f06c4
	if (!ctx.cr0.eq) goto loc_822F06C4;
	// mr r30,r15
	r30.u64 = r15.u64;
loc_822F06C4:
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r30.s32, ctx.xer);
	// bge cr6,0x822f0764
	if (!ctx.cr6.lt) goto loc_822F0764;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x822f06e4
	if (ctx.cr6.eq) goto loc_822F06E4;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822c1a70
	ctx.lr = 0x822F06DC;
	sub_822C1A70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x822f06e8
	goto loc_822F06E8;
loc_822F06E4:
	// mr r31,r23
	r31.u64 = r23.u64;
loc_822F06E8:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822f0720
	if (!ctx.cr6.gt) goto loc_822F0720;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_822F0700:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f0714
	if (ctx.cr6.eq) goto loc_822F0714;
	// lwz r9,12(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 12);
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_822F0714:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822f0700
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F0700;
loc_822F0720:
	// lwz r10,12(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f0758
	if (ctx.cr6.eq) goto loc_822F0758;
	// lbz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822f0754
	if (ctx.cr0.eq) goto loc_822F0754;
	// lwz r11,112(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 112);
	// lwz r9,-19400(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r19)
	REX_STORE_U32(r19.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822F0754;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822F0754:
	// stw r23,12(r28)
	REX_STORE_U32(r28.u32 + 12, r23.u32);
loc_822F0758:
	// stw r30,8(r28)
	REX_STORE_U32(r28.u32 + 8, r30.u32);
	// stw r31,12(r28)
	REX_STORE_U32(r28.u32 + 12, r31.u32);
	// stb r15,16(r28)
	REX_STORE_U8(r28.u32 + 16, r15.u8);
loc_822F0764:
	// lwz r30,284(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
loc_822F0768:
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f0780
	if (ctx.cr0.eq) goto loc_822F0780;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
loc_822F0780:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
	// lwz r11,224(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 224);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822f07a4
	if (ctx.cr6.eq) goto loc_822F07A4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
	// bne cr6,0x822f07a8
	if (!ctx.cr6.eq) goto loc_822F07A8;
loc_822F07A4:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_822F07A8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f07b4
	if (!ctx.cr0.eq) goto loc_822F07B4;
	// mr r24,r15
	r24.u64 = r15.u64;
loc_822F07B4:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// cmpw cr6,r20,r18
	ctx.cr6.compare<int32_t>(r20.s32, r18.s32, ctx.xer);
	// blt cr6,0x822f0680
	if (ctx.cr6.lt) goto loc_822F0680;
loc_822F07C4:
	// mr r31,r23
	r31.u64 = r23.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// cmpw cr6,r22,r16
	ctx.cr6.compare<int32_t>(r22.s32, r16.s32, ctx.xer);
	// bge cr6,0x822f0850
	if (!ctx.cr6.lt) goto loc_822F0850;
	// lwz r8,36(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 36);
	// rlwinm r11,r22,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r10,784(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 784);
	// lwz r10,216(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 216);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x822f07fc
	if (!ctx.cr6.lt) goto loc_822F07FC;
	// lwz r11,788(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 788);
	// lwz r10,216(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
loc_822F07FC:
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r26.s32, ctx.xer);
	// bne cr6,0x822f0850
	if (!ctx.cr6.eq) goto loc_822F0850;
	// addi r21,r22,1
	r21.s64 = r22.s64 + 1;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// cmpw cr6,r21,r16
	ctx.cr6.compare<int32_t>(r21.s32, r16.s32, ctx.xer);
	// bge cr6,0x822f084c
	if (!ctx.cr6.lt) goto loc_822F084C;
	// rlwinm r9,r21,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
loc_822F0818:
	// lwzx r11,r9,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r10,784(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 784);
	// lwz r10,216(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 216);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x822f0834
	if (!ctx.cr6.lt) goto loc_822F0834;
	// lwz r11,788(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 788);
	// lwz r10,216(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
loc_822F0834:
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822f084c
	if (!ctx.cr6.eq) goto loc_822F084C;
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r21,r16
	ctx.cr6.compare<int32_t>(r21.s32, r16.s32, ctx.xer);
	// blt cr6,0x822f0818
	if (ctx.cr6.lt) goto loc_822F0818;
loc_822F084C:
	// subf r31,r22,r21
	r31.u64 = r21.u64 - r22.u64;
loc_822F0850:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f087c
	if (!ctx.cr0.eq) goto loc_822F087C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r5,48(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,56(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 56);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822F087C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822F087C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x822f0888
	if (ctx.cr6.eq) goto loc_822F0888;
	// mr r22,r21
	r22.u64 = r21.u64;
loc_822F0888:
	// lwz r31,4(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmpwi r31,0
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bgt 0x822f0944
	if (ctx.cr0.gt) goto loc_822F0944;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge cr6,0x822f0944
	if (!ctx.cr6.lt) goto loc_822F0944;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x822f0918
	if (!ctx.cr6.lt) goto loc_822F0918;
	// cmpwi r31,0
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble 0x822f08d4
	if (!ctx.cr0.gt) goto loc_822F08D4;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_822F08B8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f08cc
	if (ctx.cr6.eq) goto loc_822F08CC;
	// lwz r10,12(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 12);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822F08CC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822f08b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F08B8;
loc_822F08D4:
	// lwz r10,12(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f090c
	if (ctx.cr6.eq) goto loc_822F090C;
	// lbz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822f0908
	if (ctx.cr0.eq) goto loc_822F0908;
	// lwz r11,112(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 112);
	// lwz r9,-19400(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r19)
	REX_STORE_U32(r19.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822F0908;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822F0908:
	// stw r23,12(r28)
	REX_STORE_U32(r28.u32 + 12, r23.u32);
loc_822F090C:
	// stb r15,16(r28)
	REX_STORE_U8(r28.u32 + 16, r15.u8);
	// stw r23,12(r28)
	REX_STORE_U32(r28.u32 + 12, r23.u32);
	// stw r23,8(r28)
	REX_STORE_U32(r28.u32 + 8, r23.u32);
loc_822F0918:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge cr6,0x822f0944
	if (!ctx.cr6.lt) goto loc_822F0944;
	// neg r11,r31
	ctx.r11.s64 = static_cast<int64_t>(-r31.u64);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822F092C:
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f093c
	if (ctx.cr0.eq) goto loc_822F093C;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r23.u32);
loc_822F093C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822f092c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F092C;
loc_822F0944:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// stw r23,4(r28)
	REX_STORE_U32(r28.u32 + 4, r23.u32);
	// cmpw cr6,r20,r18
	ctx.cr6.compare<int32_t>(r20.s32, r18.s32, ctx.xer);
	// blt cr6,0x822f0660
	if (ctx.cr6.lt) goto loc_822F0660;
loc_822F0954:
	// bl 0x821800b8
	ctx.lr = 0x822F0958;
	sub_821800B8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8230C890) {
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
	ctx.lr = 0x8230C898;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,32
	r29.s64 = ctx.r3.s64 + 32;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r31,23
	r31.s64 = 23;
	// li r26,0
	r26.s64 = 0;
	// mr r27,r29
	r27.u64 = r29.u64;
	// lis r24,-32126
	r24.s64 = -2105409536;
loc_8230C8C0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x8230ca04
	if (ctx.cr6.eq) goto loc_8230CA04;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8230c938
	if (ctx.cr6.eq) goto loc_8230C938;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r3,-10820(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + -10820);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823039a8
	ctx.lr = 0x8230C8E4;
	sub_823039A8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8230c938
	if (!ctx.cr0.eq) goto loc_8230C938;
	// ld r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 96);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8230c90c
	if (ctx.cr6.eq) goto loc_8230C90C;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,68(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 68);
	// ld r10,296(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 296);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x8230c9fc
	if (!ctx.cr6.eq) goto loc_8230C9FC;
loc_8230C90C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x8233fae8
	ctx.lr = 0x8230C918;
	sub_8233FAE8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8230c9fc
	if (!ctx.cr0.eq) goto loc_8230C9FC;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// ori r4,r11,1024
	ctx.r4.u64 = ctx.r11.u64 | 1024;
	// stw r4,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r4.u32);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x8233fa68
	ctx.lr = 0x8230C938;
	sub_8233FA68(ctx, base);
loc_8230C938:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// blt cr6,0x8230c8c0
	if (ctx.cr6.lt) goto loc_8230C8C0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x8230ca04
	if (ctx.cr6.eq) goto loc_8230CA04;
	// rlwinm. r11,r25,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230c960
	if (ctx.cr0.eq) goto loc_8230C960;
	// li r3,24
	ctx.r3.s64 = 24;
	// b 0x8230ca08
	goto loc_8230CA08;
loc_8230C960:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// li r31,23
	r31.s64 = 23;
	// li r27,0
	r27.s64 = 0;
	// rlwinm r11,r11,0,22,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// stw r11,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r11.u32);
loc_8230C974:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x8230c9d8
	if (ctx.cr6.eq) goto loc_8230C9D8;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230c9c0
	if (ctx.cr6.eq) goto loc_8230C9C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// lwz r11,-10820(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + -10820);
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// ori r5,r10,2
	ctx.r5.u64 = ctx.r10.u64 | 2;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8232f858
	ctx.lr = 0x8230C9B0;
	sub_8232F858(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8230c9c0
	if (ctx.cr0.eq) goto loc_8230C9C0;
	// cmpwi cr6,r31,23
	ctx.cr6.compare<int32_t>(r31.s32, 23, ctx.xer);
	// bne cr6,0x8230c9d0
	if (!ctx.cr6.eq) goto loc_8230C9D0;
loc_8230C9C0:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(r27.s32, 2, ctx.xer);
	// blt cr6,0x8230c974
	if (ctx.cr6.lt) goto loc_8230C974;
loc_8230C9D0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x8230ca04
	if (!ctx.cr6.eq) goto loc_8230CA04;
loc_8230C9D8:
	// ld r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 96);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8230ca04
	if (ctx.cr6.eq) goto loc_8230CA04;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,68(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// ld r10,296(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 296);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x8230ca04
	if (ctx.cr6.eq) goto loc_8230CA04;
	// bl 0x8232fc60
	ctx.lr = 0x8230C9FC;
	sub_8232FC60(ctx, base);
loc_8230C9FC:
	// li r3,89
	ctx.r3.s64 = 89;
	// b 0x8230ca08
	goto loc_8230CA08;
loc_8230CA04:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8230CA08:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82315050) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82315058;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823150c8
	if (ctx.cr6.eq) goto loc_823150C8;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r30,12(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82315084;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// divwu r11,r3,r30
	ctx.r11.u64 = uint32_t(r30.u32 ? ctx.r3.u32 / r30.u32 : 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// twllei r30,0
	if (r30.s32 == 0 || r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8231509C:
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823150d4
	if (ctx.cr6.eq) goto loc_823150D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// twllei r30,0
	if (r30.s32 == 0 || r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r8,r11,r30
	ctx.r8.u64 = uint32_t(r30.u32 ? ctx.r11.u32 / r30.u32 : 0);
	// mullw r8,r8,r30
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8231509c
	if (!ctx.cr6.eq) goto loc_8231509C;
loc_823150C8:
	// li r3,33
	ctx.r3.s64 = 33;
loc_823150CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823150D4:
	// stwx r29,r8,r9
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823150cc
	goto loc_823150CC;
}

DEFINE_REX_FUNC(sub_823188E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823188F0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,12(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r30,-32129
	r30.s64 = -2105606144;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r31,r11,6576
	r31.s64 = ctx.r11.s64 + 6576;
	// beq cr6,0x82318928
	if (ctx.cr6.eq) goto loc_82318928;
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,834
	ctx.r6.s64 = 834;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82318928;
	sub_82330D00(ctx, base);
loc_82318928:
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,839
	ctx.r6.s64 = 839;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82318944;
	sub_82330D00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8231AE40) {
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
	ctx.lr = 0x8231AE48;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8231b04c
	if (ctx.cr6.eq) goto loc_8231B04C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8231b04c
	if (ctx.cr6.eq) goto loc_8231B04C;
	// lwz r3,68(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231ae88
	if (!ctx.cr6.eq) goto loc_8231AE88;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8231AE78:
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r27)
	REX_STORE_U8(r27.u32 + 0, ctx.r11.u8);
	// b 0x8231b050
	goto loc_8231B050;
loc_8231AE88:
	// lbz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 88);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8231ae9c
	if (!ctx.cr0.eq) goto loc_8231AE9C;
loc_8231AE94:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8231b050
	goto loc_8231B050;
loc_8231AE9C:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r28,r31,72
	r28.s64 = r31.s64 + 72;
	// li r25,1
	r25.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231af00
	if (!ctx.cr6.eq) goto loc_8231AF00;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r30,r31,56
	r30.s64 = r31.s64 + 56;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231aff8
	if (ctx.cr6.eq) goto loc_8231AFF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8233f898
	ctx.lr = 0x8231AED4;
	sub_8233F898(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231af28
	if (!ctx.cr0.eq) goto loc_8231AF28;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231af28
	if (!ctx.cr6.eq) goto loc_8231AF28;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8233f688
	ctx.lr = 0x8231AEF8;
	sub_8233F688(ctx, base);
loc_8231AEF8:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231b050
	if (!ctx.cr0.eq) goto loc_8231B050;
loc_8231AF00:
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231b044
	if (ctx.cr6.eq) goto loc_8231B044;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8233f898
	ctx.lr = 0x8231AF1C;
	sub_8233F898(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8231ae94
	if (ctx.cr0.eq) goto loc_8231AE94;
	// b 0x8231b050
	goto loc_8231B050;
loc_8231AF28:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8231afd8
	if (!ctx.cr6.eq) goto loc_8231AFD8;
	// cmpwi cr6,r3,23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 23, ctx.xer);
	// bne cr6,0x8231af74
	if (!ctx.cr6.eq) goto loc_8231AF74;
	// lwz r29,64(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8231b050
	if (ctx.cr6.eq) goto loc_8231B050;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// bl 0x8232fc60
	ctx.lr = 0x8231AF54;
	sub_8232FC60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231b050
	if (!ctx.cr0.eq) goto loc_8231B050;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,80(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82318840
	ctx.lr = 0x8231AF70;
	sub_82318840(ctx, base);
	// b 0x8231aef8
	goto loc_8231AEF8;
loc_8231AF74:
	// cmpwi cr6,r3,21
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 21, ctx.xer);
	// bne cr6,0x8231afd8
	if (!ctx.cr6.eq) goto loc_8231AFD8;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8231afa0
	if (ctx.cr6.eq) goto loc_8231AFA0;
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8231afa0
	if (!ctx.cr6.eq) goto loc_8231AFA0;
	// lwz r29,36(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x8231afa4
	goto loc_8231AFA4;
loc_8231AFA0:
	// lwz r29,32(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
loc_8231AFA4:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8232fc60
	ctx.lr = 0x8231AFAC;
	sub_8232FC60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231b050
	if (!ctx.cr0.eq) goto loc_8231B050;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,80(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82318840
	ctx.lr = 0x8231AFC8;
	sub_82318840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231b050
	if (!ctx.cr0.eq) goto loc_8231B050;
	// stb r25,0(r27)
	REX_STORE_U8(r27.u32 + 0, r25.u8);
	// b 0x8231af00
	goto loc_8231AF00;
loc_8231AFD8:
	// cmpwi cr6,r3,38
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 38, ctx.xer);
	// bne cr6,0x8231afec
	if (!ctx.cr6.eq) goto loc_8231AFEC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// b 0x8231ae78
	goto loc_8231AE78;
loc_8231AFEC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8231af00
	if (ctx.cr6.eq) goto loc_8231AF00;
	// b 0x8231b050
	goto loc_8231B050;
loc_8231AFF8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,72
	ctx.r4.s64 = 72;
	// bl 0x8230c3a0
	ctx.lr = 0x8231B004;
	sub_8230C3A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231b050
	if (!ctx.cr0.eq) goto loc_8231B050;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231af00
	if (ctx.cr6.eq) goto loc_8231AF00;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 76);
	// bl 0x8233f688
	ctx.lr = 0x8231B024;
	sub_8233F688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231b050
	if (!ctx.cr0.eq) goto loc_8231B050;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231af00
	if (ctx.cr6.eq) goto loc_8231AF00;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8233fa68
	ctx.lr = 0x8231B040;
	sub_8233FA68(ctx, base);
	// b 0x8231aef8
	goto loc_8231AEF8;
loc_8231B044:
	// stw r25,0(r26)
	REX_STORE_U32(r26.u32 + 0, r25.u32);
	// b 0x8231ae94
	goto loc_8231AE94;
loc_8231B04C:
	// li r3,33
	ctx.r3.s64 = 33;
loc_8231B050:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8232CCB8) {
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
	// lwz r4,8(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8232cd00
	if (ctx.cr6.eq) goto loc_8232CD00;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8356
	ctx.r5.s64 = ctx.r10.s64 + 8356;
	// li r6,84
	ctx.r6.s64 = 84;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8232CCF8;
	sub_82330D00(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_8232CD00:
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
}

DEFINE_REX_FUNC(sub_8232E308) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb0
	ctx.lr = 0x8232E310;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8232e334
	if (!ctx.cr6.eq) goto loc_8232E334;
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x8232e4d4
	goto loc_8232E4D4;
loc_8232E334:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232e378
	if (ctx.cr6.eq) goto loc_8232E378;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,5856(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 5856);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232E364;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8232e3cc
	if (!ctx.cr0.eq) goto loc_8232E3CC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// b 0x8232e4d0
	goto loc_8232E4D0;
loc_8232E378:
	// lwz r11,164(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232e3cc
	if (ctx.cr6.eq) goto loc_8232E3CC;
	// addi r3,r30,44
	ctx.r3.s64 = r30.s64 + 44;
	// bl 0x8232df90
	ctx.lr = 0x8232E38C;
	sub_8232DF90(ctx, base);
	// lwz r11,164(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 164);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232E3B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232e4d4
	if (!ctx.cr0.eq) goto loc_8232E4D4;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8232e3cc
	if (ctx.cr6.eq) goto loc_8232E3CC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8232e1d0
	ctx.lr = 0x8232E3CC;
	sub_8232E1D0(ctx, base);
loc_8232E3CC:
	// addi r28,r30,20
	r28.s64 = r30.s64 + 20;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8232cd18
	ctx.lr = 0x8232E3DC;
	sub_8232CD18(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8232e4cc
	if (ctx.cr6.eq) goto loc_8232E4CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232E3FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f31.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// bgt cr6,0x8232e414
	if (ctx.cr6.gt) goto loc_8232E414;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232E414:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8232e4cc
	if (!ctx.cr0.eq) goto loc_8232E4CC;
	// li r29,10
	r29.s64 = 10;
loc_8232E420:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232E434;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8232e444
	if (ctx.cr6.gt) goto loc_8232E444;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232E444:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8232e4cc
	if (!ctx.cr0.eq) goto loc_8232E4CC;
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232e4ac
	if (!ctx.cr6.eq) goto loc_8232E4AC;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x8232e4ac
	if (!ctx.cr6.gt) goto loc_8232E4AC;
	// lwz r11,164(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232e4a8
	if (ctx.cr6.eq) goto loc_8232E4A8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232E48C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232e4d4
	if (!ctx.cr0.eq) goto loc_8232E4D4;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8232e4a8
	if (ctx.cr6.eq) goto loc_8232E4A8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8232e1d0
	ctx.lr = 0x8232E4A8;
	sub_8232E1D0(ctx, base);
loc_8232E4A8:
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
loc_8232E4AC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x8232cd18
	ctx.lr = 0x8232E4BC;
	sub_8232CD18(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8232e420
	if (!ctx.cr6.eq) goto loc_8232E420;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
loc_8232E4CC:
	// stw r31,0(r26)
	REX_STORE_U32(r26.u32 + 0, r31.u32);
loc_8232E4D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232E4D4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82340BB8) {
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
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82340718
	ctx.lr = 0x82340BE0;
	sub_82340718(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82340bf0
	if (ctx.cr6.eq) goto loc_82340BF0;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// sth r10,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r10.u16);
loc_82340BF0:
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

DEFINE_REX_FUNC(sub_82342310) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82342324
	if (ctx.cr6.lt) goto loc_82342324;
	// stfs f1,96(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 96, temp.u32);
loc_82342324:
	// fcmpu cr6,f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// blt cr6,0x82342330
	if (ctx.cr6.lt) goto loc_82342330;
	// stfs f2,100(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 100, temp.u32);
loc_82342330:
	// fcmpu cr6,f3,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// blt cr6,0x8234233c
	if (ctx.cr6.lt) goto loc_8234233C;
	// stfs f3,104(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 104, temp.u32);
loc_8234233C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823470C8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82347154
	if (ctx.cr6.eq) goto loc_82347154;
	// lwz r10,36(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82347154
	if (ctx.cr6.lt) goto loc_82347154;
	// lwz r11,116(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 116);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82347154
	if (ctx.cr6.gt) goto loc_82347154;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8234714c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8234714C;
	// bdzf 4*cr6+eq,0x8234714c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8234714C;
	// bdzf 4*cr6+eq,0x8234714c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8234714C;
	// bdzf 4*cr6+eq,0x8234714c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8234714C;
	// bdzf 4*cr6+eq,0x8234714c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8234714C;
	// bdzf 4*cr6+eq,0x82347174
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82347174;
	// bdzf 4*cr6+eq,0x82347174
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82347174;
	// bne cr6,0x8234716c
	if (!ctx.cr6.eq) goto loc_8234716C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,1200(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 1200);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82347174
	if (!ctx.cr6.gt) goto loc_82347174;
	// li r3,79
	ctx.r3.s64 = 79;
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
loc_8234714C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82347174
	if (!ctx.cr6.eq) goto loc_82347174;
loc_82347154:
	// li r3,37
	ctx.r3.s64 = 37;
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
loc_8234716C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82347154
	if (!ctx.cr6.eq) goto loc_82347154;
loc_82347174:
	// li r5,152
	ctx.r5.s64 = 152;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x823ef2f8
	ctx.lr = 0x82347180;
	sub_823EF2F8(ctx, base);
	// lwz r9,284(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 284);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r8,r9,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r11.u32);
	// rlwinm r8,r8,0,27,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r10,36(r31)
	REX_STORE_U16(r31.u32 + 36, ctx.r10.u16);
	// stw r8,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r8.u32);
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

DEFINE_REX_FUNC(sub_8234D388) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8234d398
	if (!ctx.cr6.eq) goto loc_8234D398;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_8234D398:
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234d3ac
	if (!ctx.cr6.eq) goto loc_8234D3AC;
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_8234D3AC:
	// lwz r10,84(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8234d3d0
	if (ctx.cr6.eq) goto loc_8234D3D0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_8234D3D0:
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234d4ec
	if (ctx.cr6.eq) goto loc_8234D4EC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,408(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 408);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8234d480
	if (!ctx.cr6.lt) goto loc_8234D480;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234d40c
	if (ctx.cr6.eq) goto loc_8234D40C;
	// lfs f12,128(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// b 0x8234d410
	goto loc_8234D410;
loc_8234D40C:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
loc_8234D410:
	// lfs f11,380(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 380);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// lfs f10,364(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 364);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f7,408(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 408);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,336(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 336);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,292(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 292);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f5,f6,f7,f13
	ctx.f5.f64 = double(float(std::fma(ctx.f6.f64, ctx.f7.f64, ctx.f13.f64)));
	// lfs f3,80(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f4,f7,f13
	ctx.f2.f64 = double(float(std::fma(ctx.f4.f64, ctx.f7.f64, ctx.f13.f64)));
	// fmadds f1,f3,f7,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f3.f64, ctx.f7.f64, ctx.f13.f64)));
	// lfs f0,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,288(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 288);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,176(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f10.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fmadds f9,f9,f7,f13
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f7.f64, ctx.f13.f64)));
	// fmadds f8,f8,f7,f13
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f7.f64, ctx.f13.f64)));
	// fmuls f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f6,f7,f1
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fmuls f5,f6,f5
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f4,f5,f2
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f2,f3,f11
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fmuls f1,f2,f10
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fmuls f0,f1,f12
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_8234D480:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234d490
	if (ctx.cr6.eq) goto loc_8234D490;
	// lfs f13,128(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8234d494
	goto loc_8234D494;
loc_8234D490:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_8234D494:
	// lfs f12,380(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 380);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// lfs f11,364(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 364);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f8,336(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 336);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,292(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 292);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,288(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 288);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,80(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,176(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f3.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fmuls f2,f10,f9
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f1,f2,f5
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// fmuls f0,f1,f4
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// fmuls f12,f0,f8
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f11,f12,f7
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f10,f11,f6
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmuls f9,f10,f3
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,0(r4)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_8234D4EC:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234d500
	if (ctx.cr6.eq) goto loc_8234D500;
	// lfs f0,128(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8234d508
	goto loc_8234D508;
loc_8234D500:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
loc_8234D508:
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// lfs f13,176(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f12,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r4)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823589B8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823589f4
	if (ctx.cr6.eq) goto loc_823589F4;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82358a10
	if (!ctx.cr6.eq) goto loc_82358A10;
	// bl 0x82358880
	ctx.lr = 0x823589E4;
	sub_82358880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82358a14
	if (!ctx.cr6.eq) goto loc_82358A14;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82358a0c
	goto loc_82358A0C;
loc_823589F4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82358880
	ctx.lr = 0x82358A00;
	sub_82358880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82358a14
	if (!ctx.cr6.eq) goto loc_82358A14;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82358A0C:
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
loc_82358A10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82358A14:
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

DEFINE_REX_FUNC(sub_8235C970) {
	REX_FUNC_PROLOGUE();
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826a2c88
	ctx.lr = 0x8235C980;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,68(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,232(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f2,168(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 168);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,80(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,76(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f10.f64 = double(temp.f32);
	// fabs f13,f2
	ctx.f13.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// lfs f0,3720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
	// fadds f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fsubs f6,f11,f10
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f7,64(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,60(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f5.f64 = double(temp.f32);
	// addi r11,r3,136
	ctx.r11.s64 = ctx.r3.s64 + 136;
	// fsubs f4,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// lfs f3,140(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f3.f64 = double(temp.f32);
	// fadds f1,f5,f7
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// lfs f11,156(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f11.f64 = double(temp.f32);
	// fmr f10,f3
	ctx.f10.f64 = ctx.f3.f64;
	// lfs f5,144(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f5.f64 = double(temp.f32);
	// fabs f7,f3
	ctx.f7.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// lfs f28,136(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 136);
	f28.f64 = double(temp.f32);
	// fmuls f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f12,152(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// fmr f29,f11
	f29.f64 = ctx.f11.f64;
	// lfs f30,160(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 160);
	f30.f64 = double(temp.f32);
	// fmr f31,f5
	f31.f64 = ctx.f5.f64;
	// lfs f27,176(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 176);
	f27.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f25,152(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 152);
	f25.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f23,112(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	f23.f64 = double(temp.f32);
	// fmuls f10,f9,f0
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f9,172(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f21,116(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	f21.f64 = double(temp.f32);
	// fmr f24,f9
	f24.f64 = ctx.f9.f64;
	// lfs f20,120(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	f20.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fmuls f3,f3,f2
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fmuls f11,f11,f2
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// fmuls f9,f9,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// lfs f2,168(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 168);
	ctx.f2.f64 = double(temp.f32);
	// fmr f0,f28
	ctx.f0.f64 = f28.f64;
	// fmuls f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fabs f31,f31
	f31.u64 = f31.u64 & ~0x8000000000000000;
	// fmr f26,f30
	f26.f64 = f30.f64;
	// fmuls f7,f7,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fabs f29,f29
	f29.u64 = f29.u64 & ~0x8000000000000000;
	// fmr f22,f27
	f22.f64 = f27.f64;
	// fmadds f5,f5,f8,f3
	ctx.f5.f64 = double(float(std::fma(ctx.f5.f64, ctx.f8.f64, ctx.f3.f64)));
	// fmadds f3,f30,f8,f11
	ctx.f3.f64 = double(float(std::fma(f30.f64, ctx.f8.f64, ctx.f11.f64)));
	// fmadds f11,f27,f8,f9
	ctx.f11.f64 = double(float(std::fma(f27.f64, ctx.f8.f64, ctx.f9.f64)));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fmadds f9,f12,f10,f13
	ctx.f9.f64 = double(float(std::fma(ctx.f12.f64, ctx.f10.f64, ctx.f13.f64)));
	// fmuls f31,f31,f4
	f31.f64 = double(float(f31.f64 * ctx.f4.f64));
	// fabs f26,f26
	f26.u64 = f26.u64 & ~0x8000000000000000;
	// fabs f24,f24
	f24.u64 = f24.u64 & ~0x8000000000000000;
	// fmadds f8,f29,f10,f7
	ctx.f8.f64 = double(float(std::fma(f29.f64, ctx.f10.f64, ctx.f7.f64)));
	// fabs f22,f22
	f22.u64 = f22.u64 & ~0x8000000000000000;
	// fmadds f5,f28,f1,f5
	ctx.f5.f64 = double(float(std::fma(f28.f64, ctx.f1.f64, ctx.f5.f64)));
	// fmadds f3,f25,f1,f3
	ctx.f3.f64 = double(float(std::fma(f25.f64, ctx.f1.f64, ctx.f3.f64)));
	// fmadds f2,f2,f1,f11
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f1.f64, ctx.f11.f64)));
	// fmadds f1,f0,f4,f9
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f4.f64, ctx.f9.f64)));
	// fmadds f7,f26,f10,f31
	ctx.f7.f64 = double(float(std::fma(f26.f64, ctx.f10.f64, f31.f64)));
	// fmadds f0,f24,f6,f8
	ctx.f0.f64 = double(float(std::fma(f24.f64, ctx.f6.f64, ctx.f8.f64)));
	// fadds f12,f23,f5
	ctx.f12.f64 = double(float(f23.f64 + ctx.f5.f64));
	// fadds f11,f21,f3
	ctx.f11.f64 = double(float(f21.f64 + ctx.f3.f64));
	// fadds f10,f20,f2
	ctx.f10.f64 = double(float(f20.f64 + ctx.f2.f64));
	// fmadds f13,f22,f6,f7
	ctx.f13.f64 = double(float(std::fma(f22.f64, ctx.f6.f64, ctx.f7.f64)));
	// fadds f9,f1,f12
	ctx.f9.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// stfs f9,4(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r9,232(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// fsubs f8,f12,f1
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// stfs f8,0(r9)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lwz r8,232(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// fadds f7,f0,f11
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f7,12(r8)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lwz r7,232(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// fsubs f6,f11,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fadds f5,f13,f10
	ctx.f5.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fsubs f4,f10,f13
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stfs f6,8(r7)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lwz r6,232(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// stfs f5,20(r6)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// lwz r5,232(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// stfs f4,16(r5)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r4,84(r3)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + 84);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r4,232(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// lwz r3,344(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// beq cr6,0x8235cb0c
	if (ctx.cr6.eq) goto loc_8235CB0C;
	// bl 0x823a9090
	ctx.lr = 0x8235CB08;
	sub_823A9090(ctx, base);
	// b 0x8235cb10
	goto loc_8235CB10;
loc_8235CB0C:
	// bl 0x823a8e88
	ctx.lr = 0x8235CB10;
	sub_823A8E88(ctx, base);
loc_8235CB10:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826a2cd4
	ctx.lr = 0x8235CB1C;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8236D3D8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8236d3e8
	if (!ctx.cr6.eq) goto loc_8236D3E8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236D3E8:
	// b 0x8236ca40
	sub_8236CA40(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236D678) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c98
	ctx.lr = 0x8236D680;
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, f30.u64);
	// stfd f31,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	r20.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// beq cr6,0x8236e12c
	if (ctx.cr6.eq) goto loc_8236E12C;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r24,1
	r24.s64 = 1;
	// lwz r9,600(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 600);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// lwz r28,1188(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 1188);
	// beq cr6,0x8236d6d4
	if (ctx.cr6.eq) goto loc_8236D6D4;
	// stw r7,600(r3)
	REX_STORE_U32(ctx.r3.u32 + 600, ctx.r7.u32);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_8236D6D4:
	// lfs f0,316(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,312(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 312);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8236d6ec
	if (ctx.cr6.eq) goto loc_8236D6EC;
	// stfs f0,312(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 312, temp.u32);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_8236D6EC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// clrlwi r27,r11,24
	r27.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// lfs f30,3720(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	f30.f64 = double(temp.f32);
	// lfs f31,4104(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4104);
	f31.f64 = double(temp.f32);
	// bne cr6,0x8236d714
	if (!ctx.cr6.eq) goto loc_8236D714;
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 512);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236d7ec
	if (!ctx.cr6.eq) goto loc_8236D7EC;
loc_8236D714:
	// extsw r10,r28
	ctx.r10.s64 = r28.s32;
	// lfs f0,312(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 312);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,516(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 516);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// addi r30,r11,16428
	r30.s64 = ctx.r11.s64 + 16428;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lis r29,-32129
	r29.s64 = -2105606144;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f9,f10,f31,f30
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, f31.f64, f30.f64)));
	// fctiwz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,524(r31)
	REX_STORE_U32(r31.u32 + 524, ctx.r9.u32);
	// beq cr6,0x8236d780
	if (ctx.cr6.eq) goto loc_8236D780;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,326
	ctx.r6.s64 = 326;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8236D778;
	sub_82330D00(ctx, base);
	// stw r20,512(r31)
	REX_STORE_U32(r31.u32 + 512, r20.u32);
	// stw r20,516(r31)
	REX_STORE_U32(r31.u32 + 516, r20.u32);
loc_8236D780:
	// lwz r11,524(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 524);
	// lwz r10,600(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 600);
	// lwz r3,516(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 516);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r11,520(r31)
	REX_STORE_U32(r31.u32 + 520, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236d7ec
	if (!ctx.cr6.eq) goto loc_8236D7EC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r11,520(r31)
	REX_STORE_U32(r31.u32 + 520, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,338
	ctx.r6.s64 = 338;
	// lwz r10,1012(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8236D7C0;
	sub_82330E40(ctx, base);
	// addi r11,r3,15
	ctx.r11.s64 = ctx.r3.s64 + 15;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r3,516(r31)
	REX_STORE_U32(r31.u32 + 516, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,512(r31)
	REX_STORE_U32(r31.u32 + 512, ctx.r10.u32);
	// bne cr6,0x8236d7ec
	if (!ctx.cr6.eq) goto loc_8236D7EC;
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x826a1ce8
	return;
loc_8236D7EC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8236d874
	if (ctx.cr6.eq) goto loc_8236D874;
	// addi r11,r31,384
	ctx.r11.s64 = r31.s64 + 384;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
loc_8236D7FC:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -64);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8236d86c
	if (ctx.cr6.eq) goto loc_8236D86C;
	// lfs f0,312(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 312);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8236d81c
	if (!ctx.cr6.gt) goto loc_8236D81C;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_8236D81C:
	// extsw r10,r28
	ctx.r10.s64 = r28.s32;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-64(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -64, temp.u32);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f9,f10,f31,f30
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, f31.f64, f30.f64)));
	// fctiwz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f8.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r9,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// lwz r8,528(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 528);
	// subf. r10,r9,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,148(r11)
	REX_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
	// bge 0x8236d86c
	if (!ctx.cr0.lt) goto loc_8236D86C;
	// lwz r9,524(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 524);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,148(r11)
	REX_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
loc_8236D86C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8236d7fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236D7FC;
loc_8236D874:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x8236d888
	if (!ctx.cr6.eq) goto loc_8236D888;
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 512);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236d890
	if (!ctx.cr6.eq) goto loc_8236D890;
loc_8236D888:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8236d5a8
	ctx.lr = 0x8236D890;
	sub_8236D5A8(ctx, base);
loc_8236D890:
	// lhz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 36);
	// lhz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 604);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8236d91c
	if (ctx.cr6.eq) goto loc_8236D91C;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8236d914
	if (ctx.cr6.eq) goto loc_8236D914;
	// clrlwi r6,r11,16
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFF;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
loc_8236D8C4:
	// slw r11,r24,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r7.u8 & 0x3F));
	// and r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 & ctx.r6.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8236d908
	if (ctx.cr6.eq) goto loc_8236D908;
	// lwz r11,524(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 524);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mullw r9,r11,r26
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(r26.s32);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8236d908
	if (!ctx.cr6.lt) goto loc_8236D908;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r26,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
loc_8236D8F0:
	// lwz r5,512(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 512);
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stfsx f0,r11,r5
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, temp.u32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// blt cr6,0x8236d8f0
	if (ctx.cr6.lt) goto loc_8236D8F0;
loc_8236D908:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r26
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r26.u32, ctx.xer);
	// blt cr6,0x8236d8c4
	if (ctx.cr6.lt) goto loc_8236D8C4;
loc_8236D914:
	// lhz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 36);
	// sth r10,604(r31)
	REX_STORE_U16(r31.u32 + 604, ctx.r10.u16);
loc_8236D91C:
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 512);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236e118
	if (ctx.cr6.eq) goto loc_8236E118;
	// slw r9,r24,r26
	ctx.r9.u64 = r26.u8 & 0x20 ? 0 : (r24.u32 << (r26.u8 & 0x3F));
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8236e118
	if (ctx.cr6.eq) goto loc_8236E118;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// bne cr6,0x8236da20
	if (!ctx.cr6.eq) goto loc_8236DA20;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236dfa8
	if (ctx.cr6.eq) goto loc_8236DFA8;
	// lwz r9,532(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 532);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r10,528(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 528);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x8236e12c
	if (ctx.cr6.eq) goto loc_8236E12C;
	// lwz r10,524(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 524);
	// addi r6,r21,-4
	ctx.r6.s64 = r21.s64 + -4;
	// addi r7,r22,-4
	ctx.r7.s64 = r22.s64 + -4;
loc_8236D984:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8236d99c
	if (!ctx.cr6.gt) goto loc_8236D99C;
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8236D99C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8236d9e8
	if (ctx.cr6.eq) goto loc_8236D9E8;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_8236D9A8:
	// lfsu f0,4(r7)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r7.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r7.u32 = ea;
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lfs f0,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r6)
	ea = 4 + ctx.r6.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r6.u32 = ea;
	// lwz r11,532(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 532);
	// lwz r10,524(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 524);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,532(r31)
	REX_STORE_U32(r31.u32 + 532, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8236d9e0
	if (ctx.cr6.lt) goto loc_8236D9E0;
	// lwz r8,512(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 512);
	// stw r20,532(r31)
	REX_STORE_U32(r31.u32 + 532, r20.u32);
	// b 0x8236d9e4
	goto loc_8236D9E4;
loc_8236D9E0:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
loc_8236D9E4:
	// bdnz 0x8236d9a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236D9A8;
loc_8236D9E8:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stw r11,528(r31)
	REX_STORE_U32(r31.u32 + 528, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8236da04
	if (ctx.cr6.lt) goto loc_8236DA04;
	// lwz r9,512(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 512);
	// stw r20,528(r31)
	REX_STORE_U32(r31.u32 + 528, r20.u32);
loc_8236DA04:
	// subf. r4,r5,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8236d984
	if (!ctx.cr0.eq) goto loc_8236D984;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x826a1ce8
	return;
loc_8236DA20:
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// bne cr6,0x8236db48
	if (!ctx.cr6.eq) goto loc_8236DB48;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x8236dfa8
	if (!ctx.cr6.eq) goto loc_8236DFA8;
	// lwz r10,536(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 536);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r9,528(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 528);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// lwz r8,532(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 532);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// beq cr6,0x8236e12c
	if (ctx.cr6.eq) goto loc_8236E12C;
	// lwz r10,524(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 524);
	// addi r7,r21,-4
	ctx.r7.s64 = r21.s64 + -4;
	// addi r8,r22,-8
	ctx.r8.s64 = r22.s64 + -8;
loc_8236DA74:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r30,r11,r3
	r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8236da8c
	if (!ctx.cr6.gt) goto loc_8236DA8C;
	// subf r4,r11,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8236DA8C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8236db10
	if (ctx.cr6.eq) goto loc_8236DB10;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_8236DA98:
	// lfs f13,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfsu f0,8(r8)
	ea = 8 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lfs f12,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lfs f11,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfsu f11,8(r7)
	ea = 8 + ctx.r7.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// lwz r10,524(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 524);
	// lwz r11,532(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 532);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,532(r31)
	REX_STORE_U32(r31.u32 + 532, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8236dae0
	if (ctx.cr6.lt) goto loc_8236DAE0;
	// lwz r5,512(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 512);
	// stw r20,532(r31)
	REX_STORE_U32(r31.u32 + 532, r20.u32);
	// b 0x8236dae4
	goto loc_8236DAE4;
loc_8236DAE0:
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
loc_8236DAE4:
	// lwz r11,536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 536);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,536(r31)
	REX_STORE_U32(r31.u32 + 536, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8236db08
	if (ctx.cr6.lt) goto loc_8236DB08;
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 512);
	// stw r20,536(r31)
	REX_STORE_U32(r31.u32 + 536, r20.u32);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// b 0x8236db0c
	goto loc_8236DB0C;
loc_8236DB08:
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
loc_8236DB0C:
	// bdnz 0x8236da98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236DA98;
loc_8236DB10:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stw r11,528(r31)
	REX_STORE_U32(r31.u32 + 528, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8236db2c
	if (ctx.cr6.lt) goto loc_8236DB2C;
	// lwz r9,512(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 512);
	// stw r20,528(r31)
	REX_STORE_U32(r31.u32 + 528, r20.u32);
loc_8236DB2C:
	// subf. r3,r4,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8236da74
	if (!ctx.cr0.eq) goto loc_8236DA74;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x826a1ce8
	return;
loc_8236DB48:
	// cmpwi cr6,r26,6
	ctx.cr6.compare<int32_t>(r26.s32, 6, ctx.xer);
	// bne cr6,0x8236dd6c
	if (!ctx.cr6.eq) goto loc_8236DD6C;
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// cmplwi cr6,r10,63
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 63, ctx.xer);
	// bne cr6,0x8236dfa8
	if (!ctx.cr6.eq) goto loc_8236DFA8;
	// lwz r10,536(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 536);
	// addi r24,r31,532
	r24.s64 = r31.s64 + 532;
	// lwz r9,540(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 540);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// lwz r8,544(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 544);
	// rlwinm r3,r10,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,548(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 548);
	// rlwinm r30,r9,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,552(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 552);
	// rlwinm r29,r8,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,532(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 532);
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r5,528(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 528);
	// rlwinm r28,r7,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r9,r30
	r30.u64 = ctx.r9.u64 + r30.u64;
	// rlwinm r27,r6,1,0,30
	r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r8,r29
	r29.u64 = ctx.r8.u64 + r29.u64;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r4,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r7,r28
	r28.u64 = ctx.r7.u64 + r28.u64;
	// add r3,r6,r27
	ctx.r3.u64 = ctx.r6.u64 + r27.u64;
	// rlwinm r8,r30,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r4,r26
	r30.u64 = ctx.r4.u64 + r26.u64;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// rlwinm r7,r29,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r6,r28,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r4,r3,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r3,r30,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r6,r11
	ctx.r7.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r6,r4,r11
	ctx.r6.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r4,r3,r11
	ctx.r4.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// addi r9,r8,12
	ctx.r9.s64 = ctx.r8.s64 + 12;
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r8,r7,16
	ctx.r8.s64 = ctx.r7.s64 + 16;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// addi r7,r6,20
	ctx.r7.s64 = ctx.r6.s64 + 20;
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// mr r30,r25
	r30.u64 = r25.u64;
	// beq cr6,0x8236e12c
	if (ctx.cr6.eq) goto loc_8236E12C;
	// addi r8,r21,-4
	ctx.r8.s64 = r21.s64 + -4;
	// addi r9,r22,-24
	ctx.r9.s64 = r22.s64 + -24;
loc_8236DC2C:
	// lwz r10,528(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 528);
	// mr r29,r30
	r29.u64 = r30.u64;
	// lwz r7,524(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 524);
	// add r6,r30,r10
	ctx.r6.u64 = r30.u64 + ctx.r10.u64;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x8236dc48
	if (!ctx.cr6.gt) goto loc_8236DC48;
	// subf r29,r10,r7
	r29.u64 = ctx.r7.u64 - ctx.r10.u64;
loc_8236DC48:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8236dd30
	if (ctx.cr6.eq) goto loc_8236DD30;
	// subfic r4,r31,-532
	ctx.xer.ca = r31.u32 <= 4294966764;
	ctx.r4.u64 = static_cast<uint64_t>(-532) - r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8236DC58:
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f13,28(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lwz r28,100(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f11,36(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lwz r27,104(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f10,40(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lwz r26,108(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lfs f9,44(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// lwz r25,112(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lfsu f0,24(r9)
	ea = 24 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// lwz r23,116(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// li r6,6
	ctx.r6.s64 = 6;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f10,16(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// lfs f8,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stfs f8,4(r8)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f7,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,8(r8)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lfs f6,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,12(r8)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lfs f5,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,16(r8)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// lfs f4,0(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,20(r8)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// lfs f3,0(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// stfsu f3,24(r8)
	ea = 24 + ctx.r8.u32;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
loc_8236DCE4:
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r5,524(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 524);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8236dd10
	if (ctx.cr6.lt) goto loc_8236DD10;
	// stw r20,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r20.u32);
	// add r6,r4,r10
	ctx.r6.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lwz r5,512(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 512);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// b 0x8236dd18
	goto loc_8236DD18;
loc_8236DD10:
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r6,r6,24
	ctx.r6.s64 = ctx.r6.s64 + 24;
loc_8236DD18:
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x8236dce4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236DCE4;
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8236dc58
	if (!ctx.cr0.eq) goto loc_8236DC58;
loc_8236DD30:
	// lwz r10,528(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 528);
	// lwz r7,524(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 524);
	// add r10,r29,r10
	ctx.r10.u64 = r29.u64 + ctx.r10.u64;
	// stw r10,528(r31)
	REX_STORE_U32(r31.u32 + 528, ctx.r10.u32);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8236dd50
	if (ctx.cr6.lt) goto loc_8236DD50;
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 512);
	// stw r20,528(r31)
	REX_STORE_U32(r31.u32 + 528, r20.u32);
loc_8236DD50:
	// subf. r30,r29,r30
	r30.u64 = r30.u64 - r29.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8236dc2c
	if (!ctx.cr0.eq) goto loc_8236DC2C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x826a1ce8
	return;
loc_8236DD6C:
	// cmpwi cr6,r26,8
	ctx.cr6.compare<int32_t>(r26.s32, 8, ctx.xer);
	// bne cr6,0x8236dfa8
	if (!ctx.cr6.eq) goto loc_8236DFA8;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x8236dfa8
	if (!ctx.cr6.eq) goto loc_8236DFA8;
	// lwz r10,536(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 536);
	// addi r29,r31,532
	r29.s64 = r31.s64 + 532;
	// lwz r9,540(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 540);
	// mr r28,r25
	r28.u64 = r25.u64;
	// lwz r8,544(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 544);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r7,548(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 548);
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r6,552(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 552);
	// rlwinm r8,r8,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r5,556(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 556);
	// rlwinm r7,r7,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r4,560(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 560);
	// rlwinm r6,r6,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r3,532(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 532);
	// rlwinm r5,r5,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r4,r4,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r30,528(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 528);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r3,r3,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r30,r30,5,0,26
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// addi r6,r6,20
	ctx.r6.s64 = ctx.r6.s64 + 20;
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// addi r5,r5,24
	ctx.r5.s64 = ctx.r5.s64 + 24;
	// stw r7,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r4,r4,28
	ctx.r4.s64 = ctx.r4.s64 + 28;
	// stw r6,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// stw r5,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r4,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8236e12c
	if (ctx.cr6.eq) goto loc_8236E12C;
	// addi r9,r21,-4
	ctx.r9.s64 = r21.s64 + -4;
	// addi r10,r22,-32
	ctx.r10.s64 = r22.s64 + -32;
loc_8236DE40:
	// lwz r8,528(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 528);
	// mr r30,r28
	r30.u64 = r28.u64;
	// lwz r7,524(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 524);
	// add r6,r28,r8
	ctx.r6.u64 = r28.u64 + ctx.r8.u64;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x8236de5c
	if (!ctx.cr6.gt) goto loc_8236DE5C;
	// subf r30,r8,r7
	r30.u64 = ctx.r7.u64 - ctx.r8.u64;
loc_8236DE5C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8236df6c
	if (ctx.cr6.eq) goto loc_8236DF6C;
	// subfic r4,r31,-532
	ctx.xer.ca = r31.u32 <= 4294966764;
	ctx.r4.u64 = static_cast<uint64_t>(-532) - r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8236DE6C:
	// lfs f13,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f12,40(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lwz r27,100(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f11,44(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// lwz r26,104(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f10,48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lwz r25,108(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lfs f9,52(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// lwz r24,112(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lfs f8,56(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// lwz r23,116(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lfs f7,60(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// lwz r22,120(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lfsu f0,32(r10)
	ea = 32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// lwz r21,124(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f10,16(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// stfs f8,24(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f7,28(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lfs f6,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,4(r9)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f5,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,8(r9)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f4,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,12(r9)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lfs f3,0(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,16(r9)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// lfs f2,0(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,20(r9)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// lfs f1,0(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,24(r9)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// lfs f0,0(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// lfs f13,0(r21)
	temp.u32 = REX_LOAD_U32(r21.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfsu f13,32(r9)
	ea = 32 + ctx.r9.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
loc_8236DF20:
	// lwz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stw r6,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// lwz r5,524(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 524);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8236df4c
	if (ctx.cr6.lt) goto loc_8236DF4C;
	// stw r20,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, r20.u32);
	// add r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lwz r5,512(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 512);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// b 0x8236df54
	goto loc_8236DF54;
loc_8236DF4C:
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
loc_8236DF54:
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x8236df20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236DF20;
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8236de6c
	if (!ctx.cr0.eq) goto loc_8236DE6C;
loc_8236DF6C:
	// lwz r8,528(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 528);
	// lwz r7,524(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 524);
	// add r8,r30,r8
	ctx.r8.u64 = r30.u64 + ctx.r8.u64;
	// stw r8,528(r31)
	REX_STORE_U32(r31.u32 + 528, ctx.r8.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8236df8c
	if (ctx.cr6.lt) goto loc_8236DF8C;
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 512);
	// stw r20,528(r31)
	REX_STORE_U32(r31.u32 + 528, r20.u32);
loc_8236DF8C:
	// subf. r28,r30,r28
	r28.u64 = r28.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x8236de40
	if (!ctx.cr0.eq) goto loc_8236DE40;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x826a1ce8
	return;
loc_8236DFA8:
	// lwz r10,528(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 528);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// mullw r9,r26,r10
	ctx.r9.s64 = int64_t(r26.s32) * int64_t(ctx.r10.s32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// ble cr6,0x8236dff8
	if (!ctx.cr6.gt) goto loc_8236DFF8;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// addi r9,r31,528
	ctx.r9.s64 = r31.s64 + 528;
loc_8236DFD8:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// mullw r7,r7,r26
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(r26.s32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8236dfd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236DFD8;
loc_8236DFF8:
	// mr r28,r25
	r28.u64 = r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8236e12c
	if (ctx.cr6.eq) goto loc_8236E12C;
loc_8236E004:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// mr r30,r28
	r30.u64 = r28.u64;
	// lwz r10,524(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 524);
	// add r9,r28,r11
	ctx.r9.u64 = r28.u64 + ctx.r11.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8236e020
	if (!ctx.cr6.gt) goto loc_8236E020;
	// subf r30,r11,r10
	r30.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8236E020:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8236e0dc
	if (ctx.cr6.eq) goto loc_8236E0DC;
	// rlwinm r5,r26,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8236E030:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x8236e06c
	if (!ctx.cr6.gt) goto loc_8236E06C;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// subf r10,r6,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r6.u64;
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// subf r8,r6,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r6.u64;
loc_8236E050:
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r8,r11
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8236e050
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236E050;
loc_8236E06C:
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r3,r5,r3
	ctx.r3.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x8236e0d4
	if (!ctx.cr6.gt) goto loc_8236E0D4;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// addi r11,r31,532
	ctx.r11.s64 = r31.s64 + 532;
	// subfic r7,r31,-532
	ctx.xer.ca = r31.u32 <= 4294966764;
	ctx.r7.u64 = static_cast<uint64_t>(-532) - r31.u64;
loc_8236E090:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,524(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 524);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8236e0bc
	if (ctx.cr6.lt) goto loc_8236E0BC;
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r20,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r20.u32);
	// lwz r8,512(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 512);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// b 0x8236e0c4
	goto loc_8236E0C4;
loc_8236E0BC:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
loc_8236E0C4:
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8236e090
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236E090;
loc_8236E0D4:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8236e030
	if (!ctx.cr0.eq) goto loc_8236E030;
loc_8236E0DC:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// lwz r10,524(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 524);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r11,528(r31)
	REX_STORE_U32(r31.u32 + 528, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8236e0fc
	if (ctx.cr6.lt) goto loc_8236E0FC;
	// lwz r6,512(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 512);
	// stw r20,528(r31)
	REX_STORE_U32(r31.u32 + 528, r20.u32);
loc_8236E0FC:
	// subf. r28,r30,r28
	r28.u64 = r28.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x8236e004
	if (!ctx.cr0.eq) goto loc_8236E004;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x826a1ce8
	return;
loc_8236E118:
	// mullw r11,r25,r23
	ctx.r11.s64 = int64_t(r25.s32) * int64_t(r23.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x8236E12C;
	sub_823EF2F8(ctx, base);
loc_8236E12C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_823D6768) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x823d67f4
	if (ctx.cr6.lt) goto loc_823D67F4;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r5,8
	ctx.r10.s64 = ctx.r5.s64 + 8;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// subf r7,r4,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r4.u64;
	// subf r31,r4,r5
	r31.u64 = ctx.r5.u64 - ctx.r4.u64;
	// subf r30,r5,r3
	r30.u64 = ctx.r3.u64 - ctx.r5.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_823D67A8:
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,-8(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// lfsx f11,r7,r11
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfsx f9,r31,r11
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + ctx.r11.u32, temp.u32);
	// lfsx f8,r30,r10
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,0(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f5,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfsu f0,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// fadds f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f4,4(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x823d67a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D67A8;
loc_823D67F4:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x823d682c
	if (!ctx.cr6.lt) goto loc_823D682C;
	// subf r7,r8,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r8.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// subf r9,r4,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r4.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_823D6814:
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfsx f12,r11,r9
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823d6814
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D6814;
loc_823D682C:
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823DB000) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823DB008;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// subf r10,r5,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r5.u64;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r8,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// beq cr6,0x823db03c
	if (ctx.cr6.eq) goto loc_823DB03C;
	// subf r10,r4,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r4.u64;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// b 0x823db044
	goto loc_823DB044;
loc_823DB03C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_823DB044:
	// lis r28,128
	r28.s64 = 8388608;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bgt cr6,0x823db0bc
	if (ctx.cr6.gt) goto loc_823DB0BC;
loc_823DB054:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r29,r10,7,24,24
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x80;
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// bl 0x823d9510
	ctx.lr = 0x823DB070;
	sub_823D9510(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x823db088
	if (!ctx.cr6.lt) goto loc_823DB088;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// bl 0x823d9500
	ctx.lr = 0x823DB088;
	sub_823D9500(ctx, base);
loc_823DB088:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// srawi r10,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r10.s64 = r30.s32 >> 1;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// or r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 | r29.u64;
	// rlwinm r8,r11,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// rlwinm r6,r7,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	// andc r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// stw r5,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r5.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r28.u32, ctx.xer);
	// ble cr6,0x823db054
	if (!ctx.cr6.gt) goto loc_823DB054;
loc_823DB0BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823E0758) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,17(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 17);
	// lbz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 16);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,15(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// lbz r6,14(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// or r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 | ctx.r7.u64;
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 | ctx.r6.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E16F0) {
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
	ctx.lr = 0x823E16F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 64);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r30,r4,4
	r30.s64 = ctx.r4.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r28,96(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r27,28(r10)
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// bl 0x823e19d8
	ctx.lr = 0x823E171C;
	sub_823E19D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823e17ec
	if (!ctx.cr6.eq) goto loc_823E17EC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x823e2c70
	ctx.lr = 0x823E1734;
	sub_823E2C70(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823E1740;
	sub_823E2DA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e1754
	if (ctx.cr6.eq) goto loc_823E1754;
	// li r3,-135
	ctx.r3.s64 = -135;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_823E1754:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,16(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 16);
	// bl 0x823e2da8
	ctx.lr = 0x823E1760;
	sub_823E2DA8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823e17b4
	if (ctx.cr6.eq) goto loc_823E17B4;
	// addi r11,r3,7
	ctx.r11.s64 = ctx.r3.s64 + 7;
	// stw r3,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// li r28,0
	r28.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r8,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// beq cr6,0x823e17c0
	if (ctx.cr6.eq) goto loc_823E17C0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823E1798;
	sub_823E2DA8(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823E17A8;
	sub_823E2DA8(ctx, base);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x823e17c8
	if (!ctx.cr6.eq) goto loc_823E17C8;
loc_823E17B4:
	// li r3,-136
	ctx.r3.s64 = -136;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_823E17C0:
	// stw r28,24(r31)
	REX_STORE_U32(r31.u32 + 24, r28.u32);
	// stw r28,32(r31)
	REX_STORE_U32(r31.u32 + 32, r28.u32);
loc_823E17C8:
	// ld r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,48(r31)
	REX_STORE_U64(r31.u32 + 48, ctx.r11.u64);
	// ld r10,24(r29)
	ctx.r10.u64 = REX_LOAD_U64(r29.u32 + 24);
	// std r10,56(r31)
	REX_STORE_U64(r31.u32 + 56, ctx.r10.u64);
	// lwz r9,12(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 12);
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// stw r28,36(r31)
	REX_STORE_U32(r31.u32 + 36, r28.u32);
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
loc_823E17EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823E7900) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1c88
	ctx.lr = 0x823E7908;
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r24,r5,268
	r24.s64 = ctx.r5.s64 + 268;
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r12,r10,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x826a2d14
	ctx.lr = 0x823E7928;
	sub_826A2D14(ctx, base);
	// lwz r8,0(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stwux r8,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r1.u32 = ea;
	// addi r26,r1,80
	r26.s64 = ctx.r1.s64 + 80;
	// ble cr6,0x823e7bc4
	if (!ctx.cr6.gt) goto loc_823E7BC4;
	// li r19,0
	r19.s64 = 0;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// li r18,0
	r18.s64 = 0;
	// rlwinm r16,r4,3,0,28
	r16.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r17,r6
	r17.u64 = ctx.r6.u64;
loc_823E7950:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x823e7bb0
	if (!ctx.cr6.gt) goto loc_823E7BB0;
	// rlwinm r21,r6,3,0,28
	r21.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r10,r26,-8
	ctx.r10.s64 = r26.s64 + -8;
	// subf r11,r21,r20
	ctx.r11.u64 = r20.u64 - r21.u64;
loc_823E7968:
	// ldux r8,r11,r21
	ea = ctx.r11.u32 + r21.u32;
	ctx.r8.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r8.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x823e7968
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E7968;
	// mullw r23,r4,r6
	r23.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// mr r29,r19
	r29.u64 = r19.u64;
	// mr r28,r18
	r28.u64 = r18.u64;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// rlwinm r22,r23,3,0,28
	r22.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
loc_823E798C:
	// lwz r8,0(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,4(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 4);
	// li r30,1
	r30.s64 = 1;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// ble cr6,0x823e7b9c
	if (!ctx.cr6.gt) goto loc_823E7B9C;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x823e7b20
	if (ctx.cr6.lt) goto loc_823E7B20;
	// addi r8,r7,-5
	ctx.r8.s64 = ctx.r7.s64 + -5;
	// rlwinm r27,r9,3,0,28
	r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 1;
	// addi r8,r26,4
	ctx.r8.s64 = r26.s64 + 4;
	// rlwinm r30,r3,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
loc_823E79DC:
	// add r3,r29,r10
	ctx.r3.u64 = r29.u64 + ctx.r10.u64;
	// add r10,r5,r28
	ctx.r10.u64 = ctx.r5.u64 + r28.u64;
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823e79f4
	if (ctx.cr6.lt) goto loc_823E79F4;
	// subf r3,r9,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r9.u64;
	// subf r10,r27,r10
	ctx.r10.u64 = ctx.r10.u64 - r27.u64;
loc_823E79F4:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// add r5,r29,r3
	ctx.r5.u64 = r29.u64 + ctx.r3.u64;
	// lfs f13,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f9,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// lfs f7,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// fmadds f6,f9,f12,f11
	ctx.f6.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f11.f64)));
	// fmsubs f5,f9,f13,f10
	ctx.f5.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, -ctx.f10.f64)));
	// fadds f4,f8,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// stfs f4,0(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f3,f7,f5
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// stfs f3,4(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blt cr6,0x823e7a44
	if (ctx.cr6.lt) goto loc_823E7A44;
	// subf r5,r9,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r9.u64;
	// subf r10,r27,r10
	ctx.r10.u64 = ctx.r10.u64 - r27.u64;
loc_823E7A44:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// add r3,r29,r5
	ctx.r3.u64 = r29.u64 + ctx.r5.u64;
	// lfs f13,16(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// add r5,r10,r28
	ctx.r5.u64 = ctx.r10.u64 + r28.u64;
	// lfs f12,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f9,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// lfs f7,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f9,f12,f11
	ctx.f6.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f11.f64)));
	// fmsubs f5,f9,f13,f10
	ctx.f5.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, -ctx.f10.f64)));
	// fadds f4,f8,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// stfs f4,0(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f3,f7,f5
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// stfs f3,4(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blt cr6,0x823e7a94
	if (ctx.cr6.lt) goto loc_823E7A94;
	// subf r3,r9,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r9.u64;
	// subf r5,r27,r5
	ctx.r5.u64 = ctx.r5.u64 - r27.u64;
loc_823E7A94:
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r29,r3
	ctx.r10.u64 = r29.u64 + ctx.r3.u64;
	// lfs f13,20(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f9,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + r28.u64;
	// lfs f7,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// fmsubs f6,f9,f12,f11
	ctx.f6.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, -ctx.f11.f64)));
	// fmadds f5,f9,f13,f10
	ctx.f5.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f10.f64)));
	// fadds f4,f7,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// stfs f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f3,f8,f5
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// blt cr6,0x823e7ae4
	if (ctx.cr6.lt) goto loc_823E7AE4;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subf r5,r27,r5
	ctx.r5.u64 = ctx.r5.u64 - r27.u64;
loc_823E7AE4:
	// lfs f13,28(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfsu f0,32(r8)
	ea = 32 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmsubs f6,f9,f0,f11
	ctx.f6.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, -ctx.f11.f64)));
	// fmadds f5,f9,f13,f10
	ctx.f5.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f10.f64)));
	// fadds f4,f7,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// stfs f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f3,f8,f5
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// bdnz 0x823e79dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E79DC;
loc_823E7B20:
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x823e7b9c
	if (!ctx.cr6.lt) goto loc_823E7B9C;
	// rlwinm r8,r30,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r27,r30,r7
	r27.u64 = ctx.r7.u64 - r30.u64;
	// add r5,r8,r26
	ctx.r5.u64 = ctx.r8.u64 + r26.u64;
	// rlwinm r3,r10,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r30,r9,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r3,r24
	ctx.r8.u64 = ctx.r3.u64 + r24.u64;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// addi r5,r5,-8
	ctx.r5.s64 = ctx.r5.s64 + -8;
loc_823E7B48:
	// add r10,r29,r10
	ctx.r10.u64 = r29.u64 + ctx.r10.u64;
	// add r8,r28,r8
	ctx.r8.u64 = r28.u64 + ctx.r8.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823e7b60
	if (ctx.cr6.lt) goto loc_823E7B60;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subf r8,r30,r8
	ctx.r8.u64 = ctx.r8.u64 - r30.u64;
loc_823E7B60:
	// lfs f13,12(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfsu f0,8(r5)
	ea = 8 + ctx.r5.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r5.u32 = ea;
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f9,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f9,f0,f11
	ctx.f6.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f11.f64)));
	// fmsubs f5,f9,f13,f10
	ctx.f5.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, -ctx.f10.f64)));
	// fadds f4,f8,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// stfs f4,0(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f3,f7,f5
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// stfs f3,4(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// bdnz 0x823e7b48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E7B48;
loc_823E7B9C:
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// add r11,r21,r11
	ctx.r11.u64 = r21.u64 + ctx.r11.u64;
	// add r29,r23,r29
	r29.u64 = r23.u64 + r29.u64;
	// add r28,r22,r28
	r28.u64 = r22.u64 + r28.u64;
	// bne 0x823e798c
	if (!ctx.cr0.eq) goto loc_823E798C;
loc_823E7BB0:
	// addic. r17,r17,-1
	ctx.xer.ca = r17.u32 > 0;
	r17.s64 = r17.s64 + -1;
	ctx.cr0.compare<int32_t>(r17.s32, 0, ctx.xer);
	// add r19,r19,r4
	r19.u64 = r19.u64 + ctx.r4.u64;
	// add r18,r16,r18
	r18.u64 = r16.u64 + r18.u64;
	// addi r20,r20,8
	r20.s64 = r20.s64 + 8;
	// bne 0x823e7950
	if (!ctx.cr0.eq) goto loc_823E7950;
loc_823E7BC4:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_823F7BE8) {
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
	// addi r5,r3,14672
	ctx.r5.s64 = ctx.r3.s64 + 14672;
	// addi r4,r3,9520
	ctx.r4.s64 = ctx.r3.s64 + 9520;
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823f7838
	ctx.lr = 0x823F7C0C;
	sub_823F7838(ctx, base);
	// lwz r11,2152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2152);
	// addi r5,r31,14928
	ctx.r5.s64 = r31.s64 + 14928;
	// addi r4,r31,9776
	ctx.r4.s64 = r31.s64 + 9776;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x823f7838
	ctx.lr = 0x823F7C24;
	sub_823F7838(ctx, base);
	// addi r5,r31,16868
	ctx.r5.s64 = r31.s64 + 16868;
	// addi r4,r31,10221
	ctx.r4.s64 = r31.s64 + 10221;
	// li r6,249
	ctx.r6.s64 = 249;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f7838
	ctx.lr = 0x823F7C38;
	sub_823F7838(ctx, base);
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

DEFINE_REX_FUNC(sub_823FA780) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823FA788;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,257
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 257, ctx.xer);
	// bge cr6,0x823fa7d8
	if (!ctx.cr6.lt) goto loc_823FA7D8;
	// subfic r5,r4,257
	ctx.xer.ca = ctx.r4.u32 <= 257;
	ctx.r5.u64 = static_cast<uint64_t>(257) - ctx.r4.u64;
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r31.s32, ctx.xer);
	// blt cr6,0x823fa7b0
	if (ctx.cr6.lt) goto loc_823FA7B0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_823FA7B0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823fa148
	ctx.lr = 0x823FA7BC;
	sub_823FA148(ctx, base);
	// subf r11,r3,r30
	ctx.r11.u64 = r30.u64 - ctx.r3.u64;
	// stw r3,11960(r29)
	REX_STORE_U32(r29.u32 + 11960, ctx.r3.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// add. r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bgt 0x823fa7d8
	if (ctx.cr0.gt) goto loc_823FA7D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x823fa7e8
	goto loc_823FA7E8;
loc_823FA7D8:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823fa408
	ctx.lr = 0x823FA7E8;
	sub_823FA408(ctx, base);
loc_823FA7E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823FBEC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v60,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// lvsl v0,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r9,48
	ctx.r9.s64 = 48;
	// lvx128 v59,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,63
	ctx.r8.s64 = 63;
	// lvsl v7,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r7,15
	ctx.r7.s64 = 15;
	// lvx128 v63,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v60,v60,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v58,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v62,v62,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v57,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v61,v61,v58,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v59,v59,v57,v7
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrghw128 v58,v60,v62
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// vmrghw128 v57,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vmrglw128 v63,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vmrglw128 v62,v60,v62
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// vmrghw128 v61,v58,v57
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// vmrglw128 v60,v58,v57
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// vmrghw128 v58,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vmrglw128 v63,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vmsum4fp128 v62,v59,v61
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v62.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v61.f32), 0xFF));
	// vmsum4fp128 v61,v59,v60
	simde_mm_store_ps(ctx.v61.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v60.f32), 0xFF));
	// vmsum4fp128 v60,v59,v58
	simde_mm_store_ps(ctx.v60.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v58.f32), 0xFF));
	// vmsum4fp128 v63,v59,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vmrghw128 v62,v62,v60
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vmrghw128 v63,v61,v63
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// vmrghw128 v63,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// stvlx128 v63,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82407FB8) {
	REX_FUNC_PROLOGUE();
	// b 0x82407e60
	sub_82407E60(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824084E8) {
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
	ctx.lr = 0x824084F0;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82408520
	if (ctx.cr6.eq) goto loc_82408520;
	// bl 0x82407f60
	ctx.lr = 0x82408520;
	sub_82407F60(ctx, base);
loc_82408520:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x822d34b8
	ctx.lr = 0x8240852C;
	sub_822D34B8(ctx, base);
	// li r22,0
	r22.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824085e0
	if (ctx.cr6.eq) goto loc_824085E0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82408548;
	sub_826A1E70(ctx, base);
	// lwz r9,176(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r26,104(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x824085d4
	if (ctx.cr6.gt) goto loc_824085D4;
	// lwz r25,96(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(r25.u32, r26.u32, ctx.xer);
	// bgt cr6,0x824085d4
	if (ctx.cr6.gt) goto loc_824085D4;
	// lwz r28,108(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r28,r6
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x824085d4
	if (ctx.cr6.gt) goto loc_824085D4;
	// lwz r27,100(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(r27.u32, r28.u32, ctx.xer);
	// bgt cr6,0x824085d4
	if (ctx.cr6.gt) goto loc_824085D4;
	// lwz r31,116(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,184(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// cmplw cr6,r31,r5
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x824085d4
	if (ctx.cr6.gt) goto loc_824085D4;
	// lwz r29,112(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(r29.u32, r31.u32, ctx.xer);
	// bgt cr6,0x824085d4
	if (ctx.cr6.gt) goto loc_824085D4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x824085cc
	if (!ctx.cr6.eq) goto loc_824085CC;
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824085cc
	if (!ctx.cr6.eq) goto loc_824085CC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x824085cc
	if (!ctx.cr6.eq) goto loc_824085CC;
	// cmplw cr6,r28,r6
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x824085cc
	if (!ctx.cr6.eq) goto loc_824085CC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x824085cc
	if (!ctx.cr6.eq) goto loc_824085CC;
	// cmplw cr6,r31,r5
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8240861c
	if (ctx.cr6.eq) goto loc_8240861C;
loc_824085CC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82408620
	goto loc_82408620;
loc_824085D4:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x824087c0
	goto loc_824087C0;
loc_824085E0:
	// lwz r9,176(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// mr r25,r22
	r25.u64 = r22.u64;
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// mr r27,r22
	r27.u64 = r22.u64;
	// lwz r5,184(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// mr r29,r22
	r29.u64 = r22.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r22,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r22.u32);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// stw r22,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r22.u32);
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// stw r5,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
loc_8240861C:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_82408620:
	// rlwinm r24,r24,4,27,27
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 4) & 0x10;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82408830
	if (ctx.cr6.eq) goto loc_82408830;
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,11
	ctx.r10.u64 = ctx.r10.u64 | 11;
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8240881c
	if (ctx.cr6.lt) goto loc_8240881C;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x824087c8
	if (!ctx.cr6.gt) goto loc_824087C8;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,17
	ctx.r10.u64 = ctx.r10.u64 | 17;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8240881c
	if (!ctx.cr6.gt) goto loc_8240881C;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,20
	ctx.r10.u64 = ctx.r10.u64 | 20;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8240881c
	if (ctx.cr6.gt) goto loc_8240881C;
	// addi r11,r26,3
	ctx.r11.s64 = r26.s64 + 3;
	// stw r29,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r29.u32);
	// addi r10,r28,3
	ctx.r10.s64 = r28.s64 + 3;
	// stw r31,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r31.u32);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r8,r25,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r7,r27,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r8,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// stw r7,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r10,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// ble cr6,0x824086b4
	if (!ctx.cr6.gt) goto loc_824086B4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r9,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
loc_824086B4:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x824086c4
	if (!ctx.cr6.gt) goto loc_824086C4;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stw r6,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
loc_824086C4:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x824086f4
	if (!ctx.cr6.eq) goto loc_824086F4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824086f4
	if (!ctx.cr6.eq) goto loc_824086F4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x824086f4
	if (!ctx.cr6.eq) goto loc_824086F4;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
loc_824086E0:
	// bne cr6,0x824086f4
	if (!ctx.cr6.eq) goto loc_824086F4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x824086f4
	if (!ctx.cr6.eq) goto loc_824086F4;
	// cmplw cr6,r31,r5
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82408830
	if (ctx.cr6.eq) goto loc_82408830;
loc_824086F4:
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x822d3500
	ctx.lr = 0x82408708;
	sub_822D3500(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// subf r8,r11,r25
	ctx.r8.u64 = r25.u64 - ctx.r11.u64;
	// lwz r9,144(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// subf r11,r11,r26
	ctx.r11.u64 = r26.u64 - ctx.r11.u64;
	// subf r7,r10,r27
	ctx.r7.u64 = r27.u64 - ctx.r10.u64;
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// subf r11,r9,r29
	ctx.r11.u64 = r29.u64 - ctx.r9.u64;
	// subf r10,r10,r28
	ctx.r10.u64 = r28.u64 - ctx.r10.u64;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// subf r9,r9,r31
	ctx.r9.u64 = r31.u64 - ctx.r9.u64;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
loc_82408744:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,176(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r31,184(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// stw r9,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// stw r8,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r8.u32);
	// stw r22,16(r30)
	REX_STORE_U32(r30.u32 + 16, r22.u32);
	// stw r7,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r7.u32);
	// stw r22,20(r30)
	REX_STORE_U32(r30.u32 + 20, r22.u32);
	// stw r6,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r6.u32);
	// stw r22,32(r30)
	REX_STORE_U32(r30.u32 + 32, r22.u32);
	// stw r31,36(r30)
	REX_STORE_U32(r30.u32 + 36, r31.u32);
	// bl 0x826a1e70
	ctx.lr = 0x82408798;
	sub_826A1E70(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r19,76(r30)
	REX_STORE_U32(r30.u32 + 76, r19.u32);
	// stw r20,80(r30)
	REX_STORE_U32(r30.u32 + 80, r20.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r11,64(r30)
	REX_STORE_U32(r30.u32 + 64, ctx.r11.u32);
	// stw r22,68(r30)
	REX_STORE_U32(r30.u32 + 68, r22.u32);
	// stw r22,72(r30)
	REX_STORE_U32(r30.u32 + 72, r22.u32);
	// stw r23,0(r21)
	REX_STORE_U32(r21.u32 + 0, r23.u32);
	// bl 0x822c5e78
	ctx.lr = 0x824087BC;
	sub_822C5E78(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_824087C0:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1ce4
	return;
loc_824087C8:
	// addi r11,r26,1
	ctx.r11.s64 = r26.s64 + 1;
	// stw r27,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r27.u32);
	// rlwinm r10,r25,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r28,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r28.u32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r29,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r29.u32);
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r31,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r31.u32);
	// ble cr6,0x824087fc
	if (!ctx.cr6.gt) goto loc_824087FC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r9,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
loc_824087FC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824086f4
	if (!ctx.cr6.eq) goto loc_824086F4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824086f4
	if (!ctx.cr6.eq) goto loc_824086F4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x824086f4
	if (!ctx.cr6.eq) goto loc_824086F4;
	// cmplw cr6,r28,r6
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r6.u32, ctx.xer);
	// b 0x824086e0
	goto loc_824086E0;
loc_8240881C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x826a1e70
	ctx.lr = 0x8240882C;
	sub_826A1E70(ctx, base);
	// b 0x824086f4
	goto loc_824086F4;
loc_82408830:
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x822d3500
	ctx.lr = 0x82408844;
	sub_822D3500(ctx, base);
	// b 0x82408744
	goto loc_82408744;
}

DEFINE_REX_FUNC(sub_82416788) {
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
	// lwz r11,628(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 628);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,56(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824167d8
	if (!ctx.cr6.eq) goto loc_824167D8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,1510
	ctx.r5.s64 = 1510;
	// addi r6,r11,23676
	ctx.r6.s64 = ctx.r11.s64 + 23676;
	// addi r4,r31,640
	ctx.r4.s64 = r31.s64 + 640;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x8241a4f0
	ctx.lr = 0x824167C4;
	sub_8241A4F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824167fc
	goto loc_824167FC;
loc_824167D8:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// bl 0x82415a50
	ctx.lr = 0x824167F8;
	sub_82415A50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_824167FC:
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

DEFINE_REX_FUNC(sub_8241A040) {
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
	ctx.lr = 0x8241A048;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8241a0c4
	if (!ctx.cr6.lt) goto loc_8241A0C4;
loc_8241A070:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x8241a094
	if (!ctx.cr6.eq) goto loc_8241A094;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x826a14c8
	ctx.lr = 0x8241A084;
	sub_826A14C8(ctx, base);
	// cmpwi cr6,r3,117
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 117, ctx.xer);
	// bne cr6,0x8241a094
	if (!ctx.cr6.eq) goto loc_8241A094;
	// li r28,1
	r28.s64 = 1;
	// b 0x8241a0b4
	goto loc_8241A0B4;
loc_8241A094:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x8241a0c4
	if (!ctx.cr6.eq) goto loc_8241A0C4;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x826a14c8
	ctx.lr = 0x8241A0A8;
	sub_826A14C8(ctx, base);
	// cmpwi cr6,r3,108
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 108, ctx.xer);
	// bne cr6,0x8241a0c4
	if (!ctx.cr6.eq) goto loc_8241A0C4;
	// li r27,1
	r27.s64 = 1;
loc_8241A0B4:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8241a070
	if (ctx.cr6.lt) goto loc_8241A070;
loc_8241A0C4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8241a0ec
	if (ctx.cr6.eq) goto loc_8241A0EC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x8241a0dc
	if (ctx.cr6.eq) goto loc_8241A0DC;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8241a0e8
	goto loc_8241A0E8;
loc_8241A0DC:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x8241a0ec
	if (ctx.cr6.eq) goto loc_8241A0EC;
	// li r11,3
	ctx.r11.s64 = 3;
loc_8241A0E8:
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
loc_8241A0EC:
	// subf r3,r30,r31
	ctx.r3.u64 = r31.u64 - r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8241EED0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8241EED8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8241f520
	if (!ctx.cr6.eq) goto loc_8241F520;
	// li r29,0
	r29.s64 = 0;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8241ef40
	if (ctx.cr6.eq) goto loc_8241EF40;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8241EF0C:
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241ef74
	if (ctx.cr6.eq) goto loc_8241EF74;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r8.u32);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r29.u32);
	// stw r29,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r29.u32);
	// bne cr6,0x8241ef0c
	if (!ctx.cr6.eq) goto loc_8241EF0C;
loc_8241EF40:
	// li r28,1
	r28.s64 = 1;
	// cmplwi cr6,r4,63
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 63, ctx.xer);
	// bgt cr6,0x8241f4b8
	if (ctx.cr6.gt) goto loc_8241F4B8;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// rlwinm r0,r4,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,-29576
	ctx.r12.s64 = ctx.r12.s64 + -29576;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32190
	ctx.r12.s64 = -2109603840;
	// addi r12,r12,-4236
	ctx.r12.s64 = ctx.r12.s64 + -4236;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r4.u32) {
	case 0:
		goto loc_8241EFCC;
	case 1:
		goto loc_8241EF98;
	case 2:
		goto loc_8241EF98;
	case 3:
		goto loc_8241EFA0;
	case 4:
		goto loc_8241EF98;
	case 5:
		goto loc_8241EF98;
	case 6:
		goto loc_8241EFCC;
	case 7:
		goto loc_8241EFB4;
	case 8:
		goto loc_8241EFD4;
	case 9:
		goto loc_8241EFE8;
	case 10:
		goto loc_8241EF98;
	case 11:
		goto loc_8241F02C;
	case 12:
		goto loc_8241F074;
	case 13:
		goto loc_8241F074;
	case 14:
		goto loc_8241F074;
	case 15:
		goto loc_8241F074;
	case 16:
		goto loc_8241F074;
	case 17:
		goto loc_8241F074;
	case 18:
		goto loc_8241F074;
	case 19:
		goto loc_8241F074;
	case 20:
		goto loc_8241F074;
	case 21:
		goto loc_8241F0BC;
	case 22:
		goto loc_8241F0BC;
	case 23:
		goto loc_8241EF98;
	case 24:
		goto loc_8241F0F0;
	case 25:
		goto loc_8241EF98;
	case 26:
		goto loc_8241F140;
	case 27:
		goto loc_8241F16C;
	case 28:
		goto loc_8241F1FC;
	case 29:
		goto loc_8241EF98;
	case 30:
		goto loc_8241F26C;
	case 31:
		goto loc_8241F4B8;
	case 32:
		goto loc_8241F4B8;
	case 33:
		goto loc_8241F2BC;
	case 34:
		goto loc_8241F2D4;
	case 35:
		goto loc_8241EF98;
	case 36:
		goto loc_8241F2DC;
	case 37:
		goto loc_8241F32C;
	case 38:
		goto loc_8241F358;
	case 39:
		goto loc_8241F378;
	case 40:
		goto loc_8241F3B8;
	case 41:
		goto loc_8241EF98;
	case 42:
		goto loc_8241EF98;
	case 43:
		goto loc_8241F3F0;
	case 44:
		goto loc_8241F404;
	case 45:
		goto loc_8241F404;
	case 46:
		goto loc_8241F42C;
	case 47:
		goto loc_8241EF98;
	case 48:
		goto loc_8241EF98;
	case 49:
		goto loc_8241F454;
	case 50:
		goto loc_8241F460;
	case 51:
		goto loc_8241F460;
	case 52:
		goto loc_8241F460;
	case 53:
		goto loc_8241F460;
	case 54:
		goto loc_8241F460;
	case 55:
		goto loc_8241F460;
	case 56:
		goto loc_8241F460;
	case 57:
		goto loc_8241F460;
	case 58:
		goto loc_8241F460;
	case 59:
		goto loc_8241F460;
	case 60:
		goto loc_8241F460;
	case 61:
		goto loc_8241F488;
	case 62:
		goto loc_8241F488;
	case 63:
		goto loc_8241F488;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8241EF74:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,24260
	ctx.r6.s64 = ctx.r11.s64 + 24260;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x8241a4f0
	ctx.lr = 0x8241EF8C;
	sub_8241A4F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,76(r30)
	REX_STORE_U32(r30.u32 + 76, ctx.r11.u32);
	// b 0x8241f520
	goto loc_8241F520;
loc_8241EF98:
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x8241f4b8
	goto loc_8241F4B8;
loc_8241EFA0:
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x824448b0
	ctx.lr = 0x8241EFAC;
	sub_824448B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8241f4b8
	goto loc_8241F4B8;
loc_8241EFB4:
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8241efcc
	if (!ctx.cr6.eq) goto loc_8241EFCC;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,120(r30)
	REX_STORE_U32(r30.u32 + 120, ctx.r11.u32);
loc_8241EFCC:
	// mr r31,r29
	r31.u64 = r29.u64;
	// b 0x8241f4b8
	goto loc_8241F4B8;
loc_8241EFD4:
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_8241EFDC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8241db90
	ctx.lr = 0x8241EFE4;
	sub_8241DB90(ctx, base);
	// b 0x8241f4b8
	goto loc_8241F4B8;
loc_8241EFE8:
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// blt cr6,0x8241f00c
	if (ctx.cr6.lt) goto loc_8241F00C;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bgt cr6,0x8241f00c
	if (ctx.cr6.gt) goto loc_8241F00C;
	// stw r28,84(r4)
	REX_STORE_U32(ctx.r4.u32 + 84, r28.u32);
	// b 0x8241efdc
	goto loc_8241EFDC;
loc_8241F00C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2027
	ctx.r5.s64 = 2027;
	// addi r6,r11,-26816
	ctx.r6.s64 = ctx.r11.s64 + -26816;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
loc_8241F01C:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8241a4f0
	ctx.lr = 0x8241F024;
	sub_8241A4F0(ctx, base);
	// stw r28,76(r30)
	REX_STORE_U32(r30.u32 + 76, r28.u32);
	// b 0x8241f4b8
	goto loc_8241F4B8;
loc_8241F02C:
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// lwz r31,100(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8241f044
	if (ctx.cr6.lt) goto loc_8241F044;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x8241f054
	if (!ctx.cr6.gt) goto loc_8241F054;
loc_8241F044:
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// blt cr6,0x8241f060
	if (ctx.cr6.lt) goto loc_8241F060;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bgt cr6,0x8241f060
	if (ctx.cr6.gt) goto loc_8241F060;
loc_8241F054:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// b 0x8241f4b8
	goto loc_8241F4B8;
loc_8241F060:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2028
	ctx.r5.s64 = 2028;
	// addi r6,r11,-26880
	ctx.r6.s64 = ctx.r11.s64 + -26880;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// b 0x8241f01c
	goto loc_8241F01C;
loc_8241F074:
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// ble cr6,0x8241f090
	if (!ctx.cr6.gt) goto loc_8241F090;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
loc_8241F090:
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// ble cr6,0x8241f4b8
	if (!ctx.cr6.gt) goto loc_8241F4B8;
	// addi r9,r5,-2
	ctx.r9.s64 = ctx.r5.s64 + -2;
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// addi r10,r31,64
	ctx.r10.s64 = r31.s64 + 64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8241F0A8:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8241f0a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241F0A8;
	// b 0x8241f4b8
	goto loc_8241F4B8;
loc_8241F0BC:
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// ble cr6,0x8241f4b8
	if (!ctx.cr6.gt) goto loc_8241F4B8;
	// addi r9,r5,-1
	ctx.r9.s64 = ctx.r5.s64 + -1;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r31,64
	ctx.r10.s64 = r31.s64 + 64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8241F0DC:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8241f0dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241F0DC;
	// b 0x8241f4b8
	goto loc_8241F4B8;
loc_8241F0F0:
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241f128
	if (ctx.cr6.eq) goto loc_8241F128;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r5,2022
	ctx.r5.s64 = 2022;
	// addi r6,r11,-26920
	ctx.r6.s64 = ctx.r11.s64 + -26920;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x8241a4f0
	ctx.lr = 0x8241F118;
	sub_8241A4F0(ctx, base);
	// lis r11,15
	ctx.r11.s64 = 983040;
	// stw r28,76(r30)
	REX_STORE_U32(r30.u32 + 76, r28.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// b 0x8241f4b8
	goto loc_8241F4B8;
loc_8241F128:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x8241c1d0
	ctx.lr = 0x8241F138;
	sub_8241C1D0(ctx, base);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// b 0x8241f4b8
	goto loc_8241F4B8;
loc_8241F140:
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241f160
	if (ctx.cr6.eq) goto loc_8241F160;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2018
	ctx.r5.s64 = 2018;
	// addi r6,r11,-26960
	ctx.r6.s64 = ctx.r11.s64 + -26960;
	// b 0x8241f264
	goto loc_8241F264;
loc_8241F160:
	// lis r11,3328
	ctx.r11.s64 = 218103808;
loc_8241F164:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// b 0x8241f4b8
	goto loc_8241F4B8;
loc_8241F16C:
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241f1f4
	if (ctx.cr6.eq) goto loc_8241F1F4;
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8241f1ec
	if (ctx.cr6.eq) goto loc_8241F1EC;
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8241f1e4
	if (ctx.cr6.eq) goto loc_8241F1E4;
	// lis r10,1792
	ctx.r10.s64 = 117440512;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8241f1dc
	if (ctx.cr6.eq) goto loc_8241F1DC;
	// lis r10,2304
	ctx.r10.s64 = 150994944;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8241f1cc
	if (ctx.cr6.eq) goto loc_8241F1CC;
	// lis r10,2560
	ctx.r10.s64 = 167772160;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8241f1cc
	if (ctx.cr6.eq) goto loc_8241F1CC;
	// lis r10,2816
	ctx.r10.s64 = 184549376;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8241f4b8
	if (!ctx.cr6.eq) goto loc_8241F4B8;
	// lis r11,3072
	ctx.r11.s64 = 201326592;
	// b 0x8241f164
	goto loc_8241F164;
loc_8241F1CC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2011
	ctx.r5.s64 = 2011;
	// addi r6,r11,-27008
	ctx.r6.s64 = ctx.r11.s64 + -27008;
	// b 0x8241f264
	goto loc_8241F264;
loc_8241F1DC:
	// lis r11,2048
	ctx.r11.s64 = 134217728;
	// b 0x8241f164
	goto loc_8241F164;
loc_8241F1E4:
	// lis r11,1280
	ctx.r11.s64 = 83886080;
	// b 0x8241f164
	goto loc_8241F164;
loc_8241F1EC:
	// lis r11,768
	ctx.r11.s64 = 50331648;
	// b 0x8241f164
	goto loc_8241F164;
loc_8241F1F4:
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// b 0x8241f164
	goto loc_8241F164;
loc_8241F1FC:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r31,100(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8241f220
	if (ctx.cr6.eq) goto loc_8241F220;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2010
	ctx.r5.s64 = 2010;
	// addi r6,r11,-27040
	ctx.r6.s64 = ctx.r11.s64 + -27040;
	// b 0x8241f264
	goto loc_8241F264;
loc_8241F220:
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x8241f258
	if (ctx.cr6.lt) goto loc_8241F258;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bgt cr6,0x8241f258
	if (ctx.cr6.gt) goto loc_8241F258;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241f250
	if (ctx.cr6.eq) goto loc_8241F250;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2012
	ctx.r5.s64 = 2012;
	// addi r6,r11,-27088
	ctx.r6.s64 = ctx.r11.s64 + -27088;
	// b 0x8241f264
	goto loc_8241F264;
loc_8241F250:
	// lis r11,1536
	ctx.r11.s64 = 100663296;
	// b 0x8241f164
	goto loc_8241F164;
loc_8241F258:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2029
	ctx.r5.s64 = 2029;
	// addi r6,r11,-27140
	ctx.r6.s64 = ctx.r11.s64 + -27140;
loc_8241F264:
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// b 0x8241f01c
	goto loc_8241F01C;
loc_8241F26C:
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241f2a4
	if (ctx.cr6.eq) goto loc_8241F2A4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r5,2022
	ctx.r5.s64 = 2022;
	// addi r6,r11,-27176
	ctx.r6.s64 = ctx.r11.s64 + -27176;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x8241a4f0
	ctx.lr = 0x8241F294;
	sub_8241A4F0(ctx, base);
	// lis r11,228
	ctx.r11.s64 = 14942208;
	// stw r28,76(r30)
	REX_STORE_U32(r30.u32 + 76, r28.u32);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// b 0x8241f4b8
	goto loc_8241F4B8;
loc_8241F2A4:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x8241c2e0
	ctx.lr = 0x8241F2B4;
	sub_8241C2E0(ctx, base);
	// stw r3,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// b 0x8241f4b8
	goto loc_8241F4B8;
loc_8241F2BC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8241F2C0:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x8241d288
	ctx.lr = 0x8241F2D0;
	sub_8241D288(ctx, base);
	// b 0x8241f4a0
	goto loc_8241F4A0;
loc_8241F2D4:
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x8241f2c0
	goto loc_8241F2C0;
loc_8241F2DC:
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r8,40(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 40);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// bne cr6,0x8241f310
	if (!ctx.cr6.eq) goto loc_8241F310;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// stw r29,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r29.u32);
	// b 0x8241f4b8
	goto loc_8241F4B8;
loc_8241F310:
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241f4b8
	if (ctx.cr6.eq) goto loc_8241F4B8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2009
	ctx.r5.s64 = 2009;
	// addi r6,r11,-27256
	ctx.r6.s64 = ctx.r11.s64 + -27256;
	// b 0x8241f264
	goto loc_8241F264;
loc_8241F32C:
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82444750
	ctx.lr = 0x8241F334;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8241f4a8
	if (ctx.cr0.eq) goto loc_8241F4A8;
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r6,0
	ctx.r6.s64 = 0;
loc_8241F344:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82449528
	ctx.lr = 0x8241F354;
	sub_82449528(ctx, base);
	// b 0x8241f4a0
	goto loc_8241F4A0;
loc_8241F358:
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82444750
	ctx.lr = 0x8241F360;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8241f4a8
	if (ctx.cr0.eq) goto loc_8241F4A8;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,24(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x8241f344
	goto loc_8241F344;
loc_8241F378:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82444750
	ctx.lr = 0x8241F380;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8241f398
	if (ctx.cr0.eq) goto loc_8241F398;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x82444d78
	ctx.lr = 0x8241F390;
	sub_82444D78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8241f39c
	goto loc_8241F39C;
loc_8241F398:
	// mr r31,r29
	r31.u64 = r29.u64;
loc_8241F39C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8241c158
	ctx.lr = 0x8241F3A8;
	sub_8241C158(ctx, base);
	// stw r28,24(r31)
	REX_STORE_U32(r31.u32 + 24, r28.u32);
loc_8241F3AC:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// b 0x8241f4b8
	goto loc_8241F4B8;
loc_8241F3B8:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82444750
	ctx.lr = 0x8241F3C0;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8241f3d8
	if (ctx.cr0.eq) goto loc_8241F3D8;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x82444d78
	ctx.lr = 0x8241F3D0;
	sub_82444D78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8241f3dc
	goto loc_8241F3DC;
loc_8241F3D8:
	// mr r31,r29
	r31.u64 = r29.u64;
loc_8241F3DC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8241c158
	ctx.lr = 0x8241F3E8;
	sub_8241C158(ctx, base);
	// stw r29,24(r31)
	REX_STORE_U32(r31.u32 + 24, r29.u32);
	// b 0x8241f3ac
	goto loc_8241F3AC;
loc_8241F3F0:
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// b 0x8241f4b8
	goto loc_8241F4B8;
loc_8241F404:
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
loc_8241F424:
	// stfd f0,24(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 24, ctx.f0.u64);
	// b 0x8241f4b8
	goto loc_8241F4B8;
loc_8241F42C:
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
loc_8241F44C:
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x8241f424
	goto loc_8241F424;
loc_8241F454:
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lfd f0,24(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 24);
	// b 0x8241f44c
	goto loc_8241F44C;
loc_8241F460:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82444750
	ctx.lr = 0x8241F468;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8241f4a8
	if (ctx.cr0.eq) goto loc_8241F4A8;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// lwz r7,72(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 72);
	// lwz r6,68(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 68);
	// lwz r5,64(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 64);
	// bl 0x824492f0
	ctx.lr = 0x8241F484;
	sub_824492F0(ctx, base);
	// b 0x8241f4a0
	goto loc_8241F4A0;
loc_8241F488:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82444750
	ctx.lr = 0x8241F490;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8241f4a8
	if (ctx.cr0.eq) goto loc_8241F4A8;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x82444d78
	ctx.lr = 0x8241F4A0;
	sub_82444D78(ctx, base);
loc_8241F4A0:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8241f4ac
	goto loc_8241F4AC;
loc_8241F4A8:
	// mr r31,r29
	r31.u64 = r29.u64;
loc_8241F4AC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8241c158
	ctx.lr = 0x8241F4B8;
	sub_8241C158(ctx, base);
loc_8241F4B8:
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8241f520
	if (!ctx.cr6.eq) goto loc_8241F520;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x8241F4CC;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8241f4ec
	if (ctx.cr0.eq) goto loc_8241F4EC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r5,52(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 52);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r6,r11,24208
	ctx.r6.s64 = ctx.r11.s64 + 24208;
	// bl 0x82444918
	ctx.lr = 0x8241F4E8;
	sub_82444918(ctx, base);
	// b 0x8241f4f0
	goto loc_8241F4F0;
loc_8241F4EC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8241F4F0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8241f51c
	if (!ctx.cr6.eq) goto loc_8241F51C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,24176
	ctx.r6.s64 = ctx.r11.s64 + 24176;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x8241a4f0
	ctx.lr = 0x8241F510;
	sub_8241A4F0(ctx, base);
	// stw r28,80(r30)
	REX_STORE_U32(r30.u32 + 80, r28.u32);
	// stw r28,76(r30)
	REX_STORE_U32(r30.u32 + 76, r28.u32);
	// b 0x8241f520
	goto loc_8241F520;
loc_8241F51C:
	// stw r3,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r3.u32);
loc_8241F520:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82456C30) {
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
	ctx.lr = 0x82456C38;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// bl 0x82455688
	ctx.lr = 0x82456C50;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824570a0
	if (ctx.cr0.lt) goto loc_824570A0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r24,r11,14352
	r24.s64 = ctx.r11.s64 + 14352;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x824555b8
	ctx.lr = 0x82456C6C;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824570a0
	if (ctx.cr0.lt) goto loc_824570A0;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r25,r11,14100
	r25.s64 = ctx.r11.s64 + 14100;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,388(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 388);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82456CA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824570a0
	if (ctx.cr0.lt) goto loc_824570A0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r22,r11,14096
	r22.s64 = ctx.r11.s64 + 14096;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x824555b8
	ctx.lr = 0x82456CC0;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824570a0
	if (ctx.cr0.lt) goto loc_824570A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82456CD0;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824570a0
	if (ctx.cr0.lt) goto loc_824570A0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r26,r11,14392
	r26.s64 = ctx.r11.s64 + 14392;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x824555b8
	ctx.lr = 0x82456CEC;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824570a0
	if (ctx.cr0.lt) goto loc_824570A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,388(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82456D1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824570a0
	if (ctx.cr0.lt) goto loc_824570A0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82456D30;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824570a0
	if (ctx.cr0.lt) goto loc_824570A0;
	// lwz r7,1816(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// addi r28,r8,14344
	r28.s64 = ctx.r8.s64 + 14344;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// addi r27,r9,14384
	r27.s64 = ctx.r9.s64 + 14384;
	// addi r29,r10,14172
	r29.s64 = ctx.r10.s64 + 14172;
	// addi r23,r11,14372
	r23.s64 = ctx.r11.s64 + 14372;
	// ble cr6,0x82456e08
	if (!ctx.cr6.gt) goto loc_82456E08;
loc_82456D68:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82456D70;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824570a0
	if (ctx.cr0.lt) goto loc_824570A0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x82456D90;
	sub_82404168(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404168
	ctx.lr = 0x82456DA4;
	sub_82404168(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82456DB4;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824570a0
	if (ctx.cr0.lt) goto loc_824570A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82456DDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824570a0
	if (ctx.cr0.lt) goto loc_824570A0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82456DF0;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824570a0
	if (ctx.cr0.lt) goto loc_824570A0;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82456d68
	if (ctx.cr6.lt) goto loc_82456D68;
loc_82456E08:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82456E10;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824570a0
	if (ctx.cr0.lt) goto loc_824570A0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82456E24;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824570a0
	if (ctx.cr0.lt) goto loc_824570A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,388(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82456E54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824570a0
	if (ctx.cr0.lt) goto loc_824570A0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82456E68;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824570a0
	if (ctx.cr0.lt) goto loc_824570A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82456E78;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824570a0
	if (ctx.cr0.lt) goto loc_824570A0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82456E8C;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824570a0
	if (ctx.cr0.lt) goto loc_824570A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,388(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82456EBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824570a0
	if (ctx.cr0.lt) goto loc_824570A0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82456ED0;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824570a0
	if (ctx.cr0.lt) goto loc_824570A0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,14364
	ctx.r4.s64 = ctx.r11.s64 + 14364;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8269f180
	ctx.lr = 0x82456EEC;
	sub_8269F180(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// beq 0x82456f08
	if (ctx.cr0.eq) goto loc_82456F08;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,14160
	ctx.r5.s64 = ctx.r11.s64 + 14160;
	// b 0x82456f10
	goto loc_82456F10;
loc_82456F08:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,14148
	ctx.r5.s64 = ctx.r11.s64 + 14148;
loc_82456F10:
	// bl 0x8244a6e0
	ctx.lr = 0x82456F14;
	sub_8244A6E0(ctx, base);
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82456fc4
	if (ctx.cr6.eq) goto loc_82456FC4;
loc_82456F24:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82456F2C;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824570a0
	if (ctx.cr0.lt) goto loc_824570A0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x82456F4C;
	sub_82404168(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82404168
	ctx.lr = 0x82456F60;
	sub_82404168(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82456F70;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824570a0
	if (ctx.cr0.lt) goto loc_824570A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82456F98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824570a0
	if (ctx.cr0.lt) goto loc_824570A0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82456FAC;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824570a0
	if (ctx.cr0.lt) goto loc_824570A0;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82456f24
	if (ctx.cr6.lt) goto loc_82456F24;
loc_82456FC4:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245709c
	if (ctx.cr6.eq) goto loc_8245709C;
loc_82456FD0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82456FD8;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824570a0
	if (ctx.cr0.lt) goto loc_824570A0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82404168
	ctx.lr = 0x82456FF8;
	sub_82404168(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x82457010;
	sub_82404168(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82404168
	ctx.lr = 0x82457024;
	sub_82404168(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404168
	ctx.lr = 0x82457038;
	sub_82404168(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82457048;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824570a0
	if (ctx.cr0.lt) goto loc_824570A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,520(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82457070;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824570a0
	if (ctx.cr0.lt) goto loc_824570A0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82457084;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824570a0
	if (ctx.cr0.lt) goto loc_824570A0;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82456fd0
	if (ctx.cr6.lt) goto loc_82456FD0;
loc_8245709C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824570A0:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_824727E8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// beq 0x82472874
	if (ctx.cr0.eq) goto loc_82472874;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82472854
	if (ctx.cr6.eq) goto loc_82472854;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
loc_82472828:
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r6,r6,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lwz r6,16(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82472868
	if (!ctx.cr6.eq) goto loc_82472868;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82472828
	if (ctx.cr6.lt) goto loc_82472828;
loc_82472854:
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// beq cr6,0x8247288c
	if (ctx.cr6.eq) goto loc_8247288C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r10,29504
	ctx.r6.s64 = ctx.r10.s64 + 29504;
	// b 0x824729d8
	goto loc_824729D8;
loc_82472868:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r10,29468
	ctx.r6.s64 = ctx.r10.s64 + 29468;
	// b 0x824729d8
	goto loc_824729D8;
loc_82472874:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x8247288c
	if (ctx.cr6.eq) goto loc_8247288C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r10,29404
	ctx.r6.s64 = ctx.r10.s64 + 29404;
	// b 0x824729d8
	goto loc_824729D8;
loc_8247288C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r8,128(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824728e4
	if (!ctx.cr6.eq) goto loc_824728E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,348(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 348);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824728CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82472904
	if (!ctx.cr0.lt) goto loc_82472904;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r11,27136
	ctx.r6.s64 = ctx.r11.s64 + 27136;
	// b 0x824729dc
	goto loc_824729DC;
loc_824728E4:
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824729d0
	if (!ctx.cr6.eq) goto loc_824729D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// b 0x82472908
	goto loc_82472908;
loc_82472904:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82472908:
	// lis r10,-128
	ctx.r10.s64 = -8388608;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r8,r11,0,27,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	// rlwimi r10,r11,20,9,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x700000) | (ctx.r10.u64 & 0xFFFFFFFFFF8FFFFF);
	// clrlwi r11,r9,21
	ctx.r11.u64 = ctx.r9.u32 & 0x7FF;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// li r4,65
	ctx.r4.s64 = 65;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// or r30,r10,r11
	r30.u64 = ctx.r10.u64 | ctx.r11.u64;
	// bl 0x824715b8
	ctx.lr = 0x82472934;
	sub_824715B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824729f0
	if (ctx.cr0.lt) goto loc_824729F0;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,336(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 336);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x8247296C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824729f0
	if (ctx.cr0.lt) goto loc_824729F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r5,15
	ctx.r5.s64 = 983040;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,312(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82472994;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824729f0
	if (ctx.cr0.lt) goto loc_824729F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,308(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824729B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824729f0
	if (ctx.cr0.lt) goto loc_824729F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82468dd8
	ctx.lr = 0x824729C0;
	sub_82468DD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824729f0
	if (ctx.cr0.lt) goto loc_824729F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824729f0
	goto loc_824729F0;
loc_824729D0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r10,29352
	ctx.r6.s64 = ctx.r10.s64 + 29352;
loc_824729D8:
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
loc_824729DC:
	// li r5,4500
	ctx.r5.s64 = 4500;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82489c30
	ctx.lr = 0x824729E8;
	sub_82489C30(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_824729F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

DEFINE_REX_FUNC(sub_8247CCF8) {
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
	ctx.lr = 0x8247CD00;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lwzx r29,r10,r11
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r27,r9,r11
	r27.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r9,r9,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8247cd38
	if (ctx.cr0.eq) goto loc_8247CD38;
loc_8247CD30:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8247cf30
	goto loc_8247CF30;
loc_8247CD38:
	// clrlwi r3,r11,12
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFFF;
	// clrlwi r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8247cd30
	if (!ctx.cr6.lt) goto loc_8247CD30;
	// rlwinm r11,r11,0,0,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8247cd30
	if (ctx.cr6.lt) goto loc_8247CD30;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8247cd30
	if (ctx.cr6.gt) goto loc_8247CD30;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8247cddc
	if (ctx.cr6.eq) goto loc_8247CDDC;
	// lwz r7,16(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,16(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 16);
	// lwz r8,20(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 20);
loc_8247CD84:
	// lwzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r9,r11,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r31,4(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r30,4(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x8247cd30
	if (!ctx.cr6.eq) goto loc_8247CD30;
	// lwz r31,20(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r30,20(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x8247cd30
	if (!ctx.cr6.eq) goto loc_8247CD30;
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r9,24(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8247cd30
	if (!ctx.cr6.eq) goto loc_8247CD30;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8247cd84
	if (ctx.cr6.lt) goto loc_8247CD84;
loc_8247CDDC:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// divwu r26,r11,r3
	r26.u64 = uint32_t(ctx.r3.u32 ? ctx.r11.u32 / ctx.r3.u32 : 0);
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// beq cr6,0x8247cf2c
	if (ctx.cr6.eq) goto loc_8247CF2C;
loc_8247CDF4:
	// lwz r5,12(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 12);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8247cf10
	if (ctx.cr6.eq) goto loc_8247CF10;
loc_8247CE04:
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8247ce6c
	if (ctx.cr6.eq) goto loc_8247CE6C;
	// lwz r8,8(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 8);
	// lwz r7,12(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r6,8(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r11,20(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 20);
loc_8247CE20:
	// mullw r10,r5,r31
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(r31.s32);
	// mullw r9,r7,r31
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(r31.s32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,48(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8247ce6c
	if (!ctx.cr6.eq) goto loc_8247CE6C;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(r31.u32, r26.u32, ctx.xer);
	// blt cr6,0x8247ce20
	if (ctx.cr6.lt) goto loc_8247CE20;
loc_8247CE6C:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(r31.u32, r26.u32, ctx.xer);
	// beq cr6,0x8247cf10
	if (ctx.cr6.eq) goto loc_8247CF10;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82477530
	ctx.lr = 0x8247CE7C;
	sub_82477530(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8247cef8
	if (ctx.cr0.eq) goto loc_8247CEF8;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8247cef8
	if (ctx.cr6.eq) goto loc_8247CEF8;
	// lwz r7,12(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r6,8(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r5,12(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 12);
	// lwz r4,8(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 8);
	// lwz r11,20(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 20);
loc_8247CEA8:
	// mullw r8,r5,r31
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(r31.s32);
	// mullw r9,r10,r7
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + r30.u64;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// lwzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r8,48(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r9,48(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8247cef8
	if (!ctx.cr6.eq) goto loc_8247CEF8;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(r31.u32, r26.u32, ctx.xer);
	// blt cr6,0x8247cea8
	if (ctx.cr6.lt) goto loc_8247CEA8;
loc_8247CEF8:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(r31.u32, r26.u32, ctx.xer);
	// beq cr6,0x8247cf10
	if (ctx.cr6.eq) goto loc_8247CF10;
	// lwz r5,12(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 12);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8247ce04
	if (ctx.cr6.lt) goto loc_8247CE04;
loc_8247CF10:
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8247cd30
	if (ctx.cr6.eq) goto loc_8247CD30;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8247cdf4
	if (ctx.cr6.lt) goto loc_8247CDF4;
loc_8247CF2C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8247CF30:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82498390) {
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
	ctx.lr = 0x82498398;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r23,0
	r23.s64 = 0;
	// bl 0x82495868
	ctx.lr = 0x824983B0;
	sub_82495868(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82495868
	ctx.lr = 0x824983C0;
	sub_82495868(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824937e8
	ctx.lr = 0x824983D4;
	sub_824937E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824983e4
	if (ctx.cr0.eq) goto loc_824983E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824984f4
	goto loc_824984F4;
loc_824983E4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r27,0
	r27.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// bl 0x82446180
	ctx.lr = 0x824983F4;
	sub_82446180(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82446180
	ctx.lr = 0x824983FC;
	sub_82446180(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x824984c0
	if (ctx.cr6.eq) goto loc_824984C0;
loc_82498408:
	// cmplw cr6,r30,r24
	ctx.cr6.compare<uint32_t>(r30.u32, r24.u32, ctx.xer);
	// bge cr6,0x824984c0
	if (!ctx.cr6.lt) goto loc_824984C0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82495d70
	ctx.lr = 0x82498424;
	sub_82495D70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8249849c
	if (ctx.cr0.lt) goto loc_8249849C;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82495d70
	ctx.lr = 0x82498440;
	sub_82495D70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8249849c
	if (ctx.cr0.lt) goto loc_8249849C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82493930
	ctx.lr = 0x8249845C;
	sub_82493930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8249849c
	if (ctx.cr0.lt) goto loc_8249849C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82493678
	ctx.lr = 0x82498474;
	sub_82493678(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82498480
	if (ctx.cr0.eq) goto loc_82498480;
	// li r27,1
	r27.s64 = 1;
loc_82498480:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r5,164(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82493678
	ctx.lr = 0x82498490;
	sub_82493678(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824984a4
	if (ctx.cr0.eq) goto loc_824984A4;
	// b 0x824984a0
	goto loc_824984A0;
loc_8249849C:
	// li r27,1
	r27.s64 = 1;
loc_824984A0:
	// li r25,1
	r25.s64 = 1;
loc_824984A4:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x824984b4
	if (ctx.cr6.eq) goto loc_824984B4;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x824984c0
	if (!ctx.cr6.eq) goto loc_824984C0;
loc_824984B4:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// blt cr6,0x82498408
	if (ctx.cr6.lt) goto loc_82498408;
loc_824984C0:
	// cmplw cr6,r24,r26
	ctx.cr6.compare<uint32_t>(r24.u32, r26.u32, ctx.xer);
	// bge cr6,0x824984cc
	if (!ctx.cr6.lt) goto loc_824984CC;
	// li r23,4
	r23.s64 = 4;
loc_824984CC:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x824984d8
	if (ctx.cr6.eq) goto loc_824984D8;
	// addi r23,r23,512
	r23.s64 = r23.s64 + 512;
loc_824984D8:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x824984e4
	if (ctx.cr6.eq) goto loc_824984E4;
	// addis r23,r23,1
	r23.s64 = r23.s64 + 65536;
loc_824984E4:
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(r26.u32, r24.u32, ctx.xer);
	// bge cr6,0x824984f0
	if (!ctx.cr6.lt) goto loc_824984F0;
	// addis r23,r23,128
	r23.s64 = r23.s64 + 8388608;
loc_824984F0:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_824984F4:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_824A6D68) {
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
	// lwz r6,200(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// li r8,32
	ctx.r8.s64 = 32;
	// ori r9,r10,512
	ctx.r9.u64 = ctx.r10.u64 | 512;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r8,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// subf. r10,r9,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r6,268(r3)
	REX_STORE_U32(ctx.r3.u32 + 268, ctx.r6.u32);
	// beq 0x824a6e64
	if (ctx.cr0.eq) goto loc_824A6E64;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x824a6e2c
	if (ctx.cr6.eq) goto loc_824A6E2C;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x824a6e08
	if (ctx.cr6.eq) goto loc_824A6E08;
	// cmplwi cr6,r10,100
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 100, ctx.xer);
	// beq cr6,0x824a6e10
	if (ctx.cr6.eq) goto loc_824A6E10;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x824a6ddc
	if (ctx.cr6.eq) goto loc_824A6DDC;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r10,-4800
	ctx.r6.s64 = ctx.r10.s64 + -4800;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82489c30
	ctx.lr = 0x824A6DD0;
	sub_82489C30(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824a6ec8
	goto loc_824A6EC8;
loc_824A6DDC:
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// li r9,2048
	ctx.r9.s64 = 2048;
	// lwz r6,112(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// oris r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 4194304;
	// stw r8,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// rlwimi r6,r7,26,5,6
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x6000000) | (ctx.r6.u64 & 0xFFFFFFFFF9FFFFFF);
	// stw r9,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r6,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r6.u32);
	// stw r10,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// b 0x824a6e88
	goto loc_824A6E88;
loc_824A6E08:
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// ori r9,r9,513
	ctx.r9.u64 = ctx.r9.u64 | 513;
loc_824A6E10:
	// lwz r6,108(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// stw r8,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// oris r8,r6,8256
	ctx.r8.u64 = ctx.r6.u64 | 541065216;
	// stw r9,200(r11)
	REX_STORE_U32(ctx.r11.u32 + 200, ctx.r9.u32);
	// ori r8,r8,16
	ctx.r8.u64 = ctx.r8.u64 | 16;
	// stw r8,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r8.u32);
	// b 0x824a6e7c
	goto loc_824A6E7C;
loc_824A6E2C:
	// lwz r8,108(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// li r9,17
	ctx.r9.s64 = 17;
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// lis r6,-1
	ctx.r6.s64 = -65536;
	// oris r8,r8,64
	ctx.r8.u64 = ctx.r8.u64 | 4194304;
	// rlwimi r10,r9,26,5,6
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x6000000) | (ctx.r10.u64 & 0xFFFFFFFFF9FFFFFF);
	// li r5,22
	ctx.r5.s64 = 22;
	// ori r6,r6,513
	ctx.r6.u64 = ctx.r6.u64 | 513;
	// ori r8,r8,9
	ctx.r8.u64 = ctx.r8.u64 | 9;
	// stw r5,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// rlwimi r10,r9,26,1,1
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r6,200(r11)
	REX_STORE_U32(ctx.r11.u32 + 200, ctx.r6.u32);
	// stw r8,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r8.u32);
	// b 0x824a6e84
	goto loc_824A6E84;
loc_824A6E64:
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r8,108(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// stw r9,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// oris r9,r8,8256
	ctx.r9.u64 = ctx.r8.u64 | 541065216;
	// ori r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 16;
	// stw r9,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
loc_824A6E7C:
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// oris r10,r10,10240
	ctx.r10.u64 = ctx.r10.u64 | 671088640;
loc_824A6E84:
	// stw r10,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
loc_824A6E88:
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r8,44(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// li r6,10
	ctx.r6.s64 = 10;
	// oris r10,r10,17024
	ctx.r10.u64 = ctx.r10.u64 | 1115684864;
	// stw r9,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r6,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r6.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r7,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r7.u32);
	// ori r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 512;
	// stw r5,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r5.u32);
	// stw r9,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// stw r8,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, ctx.r8.u32);
loc_824A6EC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824AF5A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb4
	ctx.lr = 0x824AF5A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x824af654
	if (!ctx.cr6.lt) goto loc_824AF654;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r4
	r30.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_824AF5CC:
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824af644
	if (ctx.cr6.eq) goto loc_824AF644;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824af644
	if (!ctx.cr6.gt) goto loc_824AF644;
	// li r10,0
	ctx.r10.s64 = 0;
loc_824AF5EC:
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r28,20(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// lwzx r11,r27,r28
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + r28.u32);
	// beq cr6,0x824af614
	if (ctx.cr6.eq) goto loc_824AF614;
	// lwz r28,56(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmplw cr6,r28,r7
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x824af630
	if (!ctx.cr6.eq) goto loc_824AF630;
loc_824AF614:
	// lwz r28,12(r8)
	r28.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// li r27,1
	r27.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r28.u32);
	// lwz r28,16(r8)
	r28.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// stw r28,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r28.u32);
	// stw r27,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r27.u32);
loc_824AF630:
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824af5ec
	if (ctx.cr6.lt) goto loc_824AF5EC;
loc_824AF644:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r31,r6
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x824af5cc
	if (ctx.cr6.lt) goto loc_824AF5CC;
loc_824AF654:
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824B5640) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824B5648;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lhz r9,202(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 202);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r9,260
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 260, ctx.xer);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r29,r11,12
	r29.u64 = ctx.r11.u32 & 0xFFFFF;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bne cr6,0x824b57d8
	if (!ctx.cr6.eq) goto loc_824B57D8;
	// bl 0x824715b8
	ctx.lr = 0x824B5684;
	sub_824715B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b57d0
	if (ctx.cr0.lt) goto loc_824B57D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,320(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 320);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824B56B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b57d0
	if (ctx.cr0.lt) goto loc_824B57D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,324(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 324);
	// lwz r4,16(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824B56E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b57d0
	if (ctx.cr0.lt) goto loc_824B57D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,7
	ctx.r5.s64 = 458752;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,312(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824B5708;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b57d0
	if (ctx.cr0.lt) goto loc_824B57D0;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,328(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 328);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x824B5744;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b57d0
	if (ctx.cr0.lt) goto loc_824B57D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,332(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824B5770;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b57d0
	if (ctx.cr0.lt) goto loc_824B57D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r5,228
	ctx.r5.s64 = 14942208;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
loc_824B5788:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824B5798;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b57d0
	if (ctx.cr0.lt) goto loc_824B57D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,308(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824B57B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b57d0
	if (ctx.cr0.lt) goto loc_824B57D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82468dd8
	ctx.lr = 0x824B57C4;
	sub_82468DD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b57d0
	if (ctx.cr0.lt) goto loc_824B57D0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_824B57D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
loc_824B57D8:
	// bl 0x824715b8
	ctx.lr = 0x824B57DC;
	sub_824715B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b57d0
	if (ctx.cr0.lt) goto loc_824B57D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,320(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 320);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824B5808;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b57d0
	if (ctx.cr0.lt) goto loc_824B57D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,324(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 324);
	// lwz r4,16(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824B5838;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b57d0
	if (ctx.cr0.lt) goto loc_824B57D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,15
	ctx.r5.s64 = 983040;
	// lwz r11,312(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 312);
	// b 0x824b5788
	goto loc_824B5788;
}

DEFINE_REX_FUNC(sub_824C1158) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c1184
	if (ctx.cr6.eq) goto loc_824C1184;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824C1184;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824C1184:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
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
}

DEFINE_REX_FUNC(sub_824C1C80) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r30,20(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x824c1cb0
	if (!ctx.cr6.gt) goto loc_824C1CB0;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
loc_824C1CB0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824c1d24
	if (ctx.cr6.eq) goto loc_824C1D24;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x826a1e70
	ctx.lr = 0x824C1CC8;
	sub_826A1E70(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// subf r9,r30,r9
	ctx.r9.u64 = ctx.r9.u64 - r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r9,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// subf r10,r30,r10
	ctx.r10.u64 = ctx.r10.u64 - r30.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x824c1d24
	if (!ctx.cr6.eq) goto loc_824C1D24;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_824C1D24:
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

DEFINE_REX_FUNC(sub_824C5470) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824C548C;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824c54a0
	if (ctx.cr0.eq) goto loc_824C54A0;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x824c5420
	ctx.lr = 0x824C549C;
	sub_824C5420(ctx, base);
	// b 0x824c54a4
	goto loc_824C54A4;
loc_824C54A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824C54A4:
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

DEFINE_REX_FUNC(sub_824C6218) {
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
	ctx.lr = 0x824C6220;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r26,0
	r26.s64 = 0;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r26,8(r31)
	REX_STORE_U32(r31.u32 + 8, r26.u32);
	// stw r26,12(r31)
	REX_STORE_U32(r31.u32 + 12, r26.u32);
	// stw r26,16(r31)
	REX_STORE_U32(r31.u32 + 16, r26.u32);
	// stw r26,28(r31)
	REX_STORE_U32(r31.u32 + 28, r26.u32);
	// stw r26,32(r31)
	REX_STORE_U32(r31.u32 + 32, r26.u32);
	// stw r26,36(r31)
	REX_STORE_U32(r31.u32 + 36, r26.u32);
	// stw r26,40(r31)
	REX_STORE_U32(r31.u32 + 40, r26.u32);
	// stw r26,44(r31)
	REX_STORE_U32(r31.u32 + 44, r26.u32);
	// stw r26,48(r31)
	REX_STORE_U32(r31.u32 + 48, r26.u32);
	// stw r26,52(r31)
	REX_STORE_U32(r31.u32 + 52, r26.u32);
	// stw r26,60(r31)
	REX_STORE_U32(r31.u32 + 60, r26.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// bl 0x82481098
	ctx.lr = 0x824C626C;
	sub_82481098(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x824C627C;
	sub_823F02B8(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824c676c
	if (ctx.cr0.eq) goto loc_824C676C;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x824C6298;
	sub_823F02B8(ctx, base);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824c676c
	if (ctx.cr0.eq) goto loc_824C676C;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x824C62B8;
	sub_826A2E60(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x824C62CC;
	sub_826A2E60(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824c637c
	if (!ctx.cr6.gt) goto loc_824C637C;
	// mr r27,r26
	r27.u64 = r26.u64;
loc_824C62E0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwzx r30,r11,r27
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c6368
	if (ctx.cr0.eq) goto loc_824C6368;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r28,r26
	r28.u64 = r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824c6330
	if (!ctx.cr6.gt) goto loc_824C6330;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_824C630C:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r29,r11
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// bl 0x824c5668
	ctx.lr = 0x824C631C;
	sub_824C5668(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c630c
	if (ctx.cr6.lt) goto loc_824C630C;
loc_824C6330:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r29,r26
	r29.u64 = r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824c6368
	if (!ctx.cr6.gt) goto loc_824C6368;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
loc_824C6344:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r11,r6
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// bl 0x824c55c8
	ctx.lr = 0x824C6354;
	sub_824C55C8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c6344
	if (ctx.cr6.lt) goto loc_824C6344;
loc_824C6368:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c62e0
	if (ctx.cr6.lt) goto loc_824C62E0;
loc_824C637C:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x824C638C;
	sub_823F02B8(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824c676c
	if (ctx.cr0.eq) goto loc_824C676C;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x824C63A8;
	sub_823F02B8(ctx, base);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824c676c
	if (ctx.cr0.eq) goto loc_824C676C;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824c640c
	if (!ctx.cr6.gt) goto loc_824C640C;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_824C63D0:
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r10,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stwx r30,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, r30.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r7,56(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r30,r8,r30
	r30.u64 = ctx.r8.u64 + r30.u64;
	// blt cr6,0x824c63d0
	if (ctx.cr6.lt) goto loc_824C63D0;
loc_824C640C:
	// rlwinm r29,r10,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823f02b8
	ctx.lr = 0x824C641C;
	sub_823F02B8(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824c676c
	if (ctx.cr0.eq) goto loc_824C676C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823f02b8
	ctx.lr = 0x824C6434;
	sub_823F02B8(ctx, base);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824c676c
	if (ctx.cr0.eq) goto loc_824C676C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823f02b8
	ctx.lr = 0x824C644C;
	sub_823F02B8(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824c676c
	if (ctx.cr0.eq) goto loc_824C676C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x824C6464;
	sub_823F02B8(ctx, base);
	// stw r3,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824c676c
	if (ctx.cr0.eq) goto loc_824C676C;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x824C6484;
	sub_826A2E60(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x824C6498;
	sub_826A2E60(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824c6548
	if (!ctx.cr6.gt) goto loc_824C6548;
	// mr r27,r26
	r27.u64 = r26.u64;
loc_824C64AC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwzx r30,r11,r27
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c6534
	if (ctx.cr0.eq) goto loc_824C6534;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r29,r26
	r29.u64 = r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824c64fc
	if (!ctx.cr6.gt) goto loc_824C64FC;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
loc_824C64D8:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r11,r6
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// bl 0x824c55c8
	ctx.lr = 0x824C64E8;
	sub_824C55C8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c64d8
	if (ctx.cr6.lt) goto loc_824C64D8;
loc_824C64FC:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r28,r26
	r28.u64 = r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824c6534
	if (!ctx.cr6.gt) goto loc_824C6534;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_824C6510:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r11,r29
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// bl 0x824c5668
	ctx.lr = 0x824C6520;
	sub_824C5668(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c6510
	if (ctx.cr6.lt) goto loc_824C6510;
loc_824C6534:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c64ac
	if (ctx.cr6.lt) goto loc_824C64AC;
loc_824C6548:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r29,r26
	r29.u64 = r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824c65b8
	if (!ctx.cr6.gt) goto loc_824C65B8;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_824C655C:
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// add r5,r30,r11
	ctx.r5.u64 = r30.u64 + ctx.r11.u64;
	// lwzx r11,r30,r9
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r9.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x824c5788
	ctx.lr = 0x824C6580;
	sub_824C5788(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r5,r30,r11
	ctx.r5.u64 = r30.u64 + ctx.r11.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x824c5788
	ctx.lr = 0x824C65A4;
	sub_824C5788(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c655c
	if (ctx.cr6.lt) goto loc_824C655C;
loc_824C65B8:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x824C65C8;
	sub_823F02B8(ctx, base);
	// stw r3,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824c676c
	if (ctx.cr0.eq) goto loc_824C676C;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x824C65E4;
	sub_823F02B8(ctx, base);
	// stw r3,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824c676c
	if (ctx.cr0.eq) goto loc_824C676C;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x824C6600;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r3.u32);
	// beq 0x824c676c
	if (ctx.cr0.eq) goto loc_824C676C;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x824C661C;
	sub_823F02B8(ctx, base);
	// stw r3,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824c676c
	if (ctx.cr0.eq) goto loc_824C676C;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r29,r26
	r29.u64 = r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824c669c
	if (!ctx.cr6.gt) goto loc_824C669C;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_824C663C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwzx r3,r11,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// stwx r29,r30,r9
	REX_STORE_U32(r30.u32 + ctx.r9.u32, r29.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// stwx r3,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// beq 0x824c667c
	if (ctx.cr0.eq) goto loc_824C667C;
	// bl 0x824777d8
	ctx.lr = 0x824C6670;
	sub_824777D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// beq 0x824c6680
	if (ctx.cr0.eq) goto loc_824C6680;
loc_824C667C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_824C6680:
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwx r11,r30,r10
	REX_STORE_U32(r30.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c663c
	if (ctx.cr6.lt) goto loc_824C663C;
loc_824C669C:
	// stw r26,72(r31)
	REX_STORE_U32(r31.u32 + 72, r26.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x824C66B0;
	sub_823F02B8(ctx, base);
	// stw r3,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824c676c
	if (ctx.cr0.eq) goto loc_824C676C;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x824C66CC;
	sub_823F02B8(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824c676c
	if (ctx.cr0.eq) goto loc_824C676C;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x824C66E8;
	sub_823F02B8(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824c676c
	if (ctx.cr0.eq) goto loc_824C676C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x824c6764
	if (ctx.cr6.eq) goto loc_824C6764;
	// b 0x824c6708
	goto loc_824C6708;
loc_824C6700:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x824c671c
	if (ctx.cr6.eq) goto loc_824C671C;
loc_824C6708:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824c6148
	ctx.lr = 0x824C6710;
	sub_824C6148(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x824c6700
	if (!ctx.cr0.lt) goto loc_824C6700;
	// b 0x824c682c
	goto loc_824C682C;
loc_824C671C:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824c6764
	if (!ctx.cr6.gt) goto loc_824C6764;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_824C6730:
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 60);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,68(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,24(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 24);
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stwx r9,r7,r11
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824c6730
	if (ctx.cr6.lt) goto loc_824C6730;
loc_824C6764:
	// mr r30,r26
	r30.u64 = r26.u64;
	// b 0x824c6774
	goto loc_824C6774;
loc_824C676C:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
loc_824C6774:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x823f0350
	ctx.lr = 0x824C6780;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x823f0350
	ctx.lr = 0x824C678C;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x823f0350
	ctx.lr = 0x824C6798;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x823f0350
	ctx.lr = 0x824C67A4;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x823f0350
	ctx.lr = 0x824C67B0;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x823f0350
	ctx.lr = 0x824C67BC;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x823f0350
	ctx.lr = 0x824C67C8;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// bl 0x823f0350
	ctx.lr = 0x824C67D4;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// bl 0x823f0350
	ctx.lr = 0x824C67E0;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bl 0x823f0350
	ctx.lr = 0x824C67EC;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x823f0350
	ctx.lr = 0x824C67F8;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// bl 0x823f0350
	ctx.lr = 0x824C6804;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// bl 0x823f0350
	ctx.lr = 0x824C6810;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// bl 0x823f0350
	ctx.lr = 0x824C681C;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 68);
	// bl 0x823f0350
	ctx.lr = 0x824C6828;
	sub_823F0350(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824C682C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824EA150) {
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
	ctx.lr = 0x824EA158;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824ea204
	if (ctx.cr6.lt) goto loc_824EA204;
	// bl 0x826b40a0
	ctx.lr = 0x824EA188;
	sub_826B40A0(ctx, base);
	// b 0x824ea204
	goto loc_824EA204;
loc_824EA18C:
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x824ea230
	if (!ctx.cr0.eq) goto loc_824EA230;
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x824ea1b4
	if (!ctx.cr6.eq) goto loc_824EA1B4;
	// rlwinm r11,r11,16,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// b 0x824ea1f0
	goto loc_824EA1F0;
loc_824EA1B4:
	// cmplwi cr6,r10,65533
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65533, ctx.xer);
	// beq cr6,0x824ea1ec
	if (ctx.cr6.eq) goto loc_824EA1EC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824ea1ec
	if (ctx.cr6.eq) goto loc_824EA1EC;
	// cmplwi cr6,r10,81
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 81, ctx.xer);
	// bne cr6,0x824ea1d4
	if (!ctx.cr6.eq) goto loc_824EA1D4;
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// b 0x824ea1f0
	goto loc_824EA1F0;
loc_824EA1D4:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824e9e70
	ctx.lr = 0x824EA1E4;
	sub_824E9E70(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x824ea1f4
	goto loc_824EA1F4;
loc_824EA1EC:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_824EA1F0:
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_824EA1F4:
	// subf r11,r30,r31
	ctx.r11.u64 = r31.u64 - r30.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// bgt cr6,0x824ea230
	if (ctx.cr6.gt) goto loc_824EA230;
loc_824EA204:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x824ea18c
	if (!ctx.cr6.eq) goto loc_824EA18C;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// bne cr6,0x824ea230
	if (!ctx.cr6.eq) goto loc_824EA230;
	// li r3,0
	ctx.r3.s64 = 0;
loc_824EA228:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
loc_824EA230:
	// bl 0x826b40a0
	ctx.lr = 0x824EA234;
	sub_826B40A0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x824ea228
	goto loc_824EA228;
}

DEFINE_REX_FUNC(sub_824EF4F0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824ef52c
	if (!ctx.cr6.eq) goto loc_824EF52C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-26736
	ctx.r6.s64 = ctx.r11.s64 + -26736;
	// addi r5,r10,-26132
	ctx.r5.s64 = ctx.r10.s64 + -26132;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,3010
	ctx.r7.s64 = 3010;
	// bl 0x824ea978
	ctx.lr = 0x824EF52C;
	sub_824EA978(ctx, base);
loc_824EF52C:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
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

DEFINE_REX_FUNC(sub_824F0410) {
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
	// bne cr6,0x824f0454
	if (!ctx.cr6.eq) goto loc_824F0454;
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
	// li r7,498
	ctx.r7.s64 = 498;
	// bl 0x824ea978
	ctx.lr = 0x824F0454;
	sub_824EA978(ctx, base);
loc_824F0454:
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
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

DEFINE_REX_FUNC(sub_824F19D0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,76(r10)
	REX_STORE_U32(ctx.r10.u32 + 76, ctx.r4.u32);
	// b 0x824ee350
	sub_824EE350(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824F3520) {
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
	ctx.lr = 0x824F3528;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bl 0x825a4a88
	ctx.lr = 0x824F3550;
	sub_825A4A88(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x824f3584
	if (!ctx.cr0.eq) goto loc_824F3584;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-23288
	ctx.r6.s64 = ctx.r11.s64 + -23288;
	// addi r5,r10,-23124
	ctx.r5.s64 = ctx.r10.s64 + -23124;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,489
	ctx.r7.s64 = 489;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F357C;
	sub_824EA978(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x824f360c
	goto loc_824F360C;
loc_824F3584:
	// clrlwi r27,r27,24
	r27.u64 = r27.u32 & 0xFF;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addic r11,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	ctx.r11.s64 = r27.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// subfe r4,r11,r27
	temp.u8 = (~ctx.r11.u32 + r27.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r27.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r11.u64 + r27.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x824de4b0
	ctx.lr = 0x824F359C;
	sub_824DE4B0(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// bl 0x824f1600
	ctx.lr = 0x824F35A4;
	sub_824F1600(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bl 0x824f1600
	ctx.lr = 0x824F35AC;
	sub_824F1600(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r28,40(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 40);
	// bl 0x825b6aa8
	ctx.lr = 0x824F35B8;
	sub_825B6AA8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824f0410
	ctx.lr = 0x824F35C0;
	sub_824F0410(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r28,44(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bl 0x825b6a50
	ctx.lr = 0x824F35CC;
	sub_825B6A50(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824f0410
	ctx.lr = 0x824F35D4;
	sub_824F0410(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825b30a8
	ctx.lr = 0x824F35E8;
	sub_825B30A8(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne cr6,0x824f35fc
	if (!ctx.cr6.eq) goto loc_824F35FC;
	// bl 0x825b6aa8
	ctx.lr = 0x824F35F8;
	sub_825B6AA8(ctx, base);
	// b 0x824f3600
	goto loc_824F3600;
loc_824F35FC:
	// bl 0x825b6a50
	ctx.lr = 0x824F3600;
	sub_825B6A50(ctx, base);
loc_824F3600:
	// stw r3,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// bl 0x824f1030
	ctx.lr = 0x824F360C;
	sub_824F1030(ctx, base);
loc_824F360C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824FD928) {
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
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// std r3,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r7,112(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// std r4,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r4.u64);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwimi r6,r9,0,20,29
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFC) | (ctx.r6.u64 & 0xFFFFFFFFFFFFF003);
	// rlwimi r4,r7,0,18,31
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x3FFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFFC000);
	// rlwimi r6,r9,0,16,19
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF000) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0FFF);
	// rlwimi r4,r7,0,17,17
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4000) | (ctx.r4.u64 & 0xFFFFFFFFFFFFBFFF);
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
loc_824FD97C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824fd99c
	if (!ctx.cr0.eq) goto loc_824FD99C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x824fd97c
	if (!ctx.cr6.eq) goto loc_824FD97C;
loc_824FD99C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824fda04
	if (!ctx.cr0.eq) goto loc_824FDA04;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r11,r9,19,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r9,r9,16,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x7;
	// blt 0x824fda04
	if (ctx.cr0.lt) goto loc_824FDA04;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x824fda04
	if (!ctx.cr6.lt) goto loc_824FDA04;
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r4,r7,19
	ctx.r4.u64 = ctx.r7.u32 & 0x1FFF;
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x824fda04
	if (!ctx.cr6.lt) goto loc_824FDA04;
	// li r8,33
	ctx.r8.s64 = 33;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// bl 0x824fc918
	ctx.lr = 0x824FD9F0;
	sub_824FC918(ctx, base);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x824fda0c
	goto loc_824FDA0C;
loc_824FDA04:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_824FDA0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82504738) {
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
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82504768
	if (!ctx.cr0.eq) goto loc_82504768;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x8250477c
	goto loc_8250477C;
loc_82504768:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x8250477C;
	sub_826A2E60(ctx, base);
loc_8250477C:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82504798
	if (ctx.cr6.eq) goto loc_82504798;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x82504798;
	sub_826A2E60(ctx, base);
loc_82504798:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8250A938) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8250A9A0) {
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
	// bl 0x8250a940
	ctx.lr = 0x8250A9B8;
	sub_8250A940(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250aa00
	if (!ctx.cr0.eq) goto loc_8250AA00;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// blt cr6,0x8250a9d8
	if (ctx.cr6.lt) goto loc_8250A9D8;
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// ble cr6,0x8250a9e8
	if (!ctx.cr6.gt) goto loc_8250A9E8;
loc_8250A9D8:
	// cmplwi cr6,r11,67
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 67, ctx.xer);
	// blt cr6,0x8250a9f0
	if (ctx.cr6.lt) goto loc_8250A9F0;
	// cmplwi cr6,r11,71
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 71, ctx.xer);
	// bgt cr6,0x8250a9f0
	if (ctx.cr6.gt) goto loc_8250A9F0;
loc_8250A9E8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8250a9f4
	goto loc_8250A9F4;
loc_8250A9F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8250A9F4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8250aa04
	if (ctx.cr0.eq) goto loc_8250AA04;
loc_8250AA00:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8250AA04:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

DEFINE_REX_FUNC(sub_8250F208) {
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
	ctx.lr = 0x8250F210;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250f310
	if (!ctx.cr0.eq) goto loc_8250F310;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8250f310
	if (ctx.cr0.eq) goto loc_8250F310;
loc_8250F230:
	// lwz r31,28(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 28);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250f2f4
	if (!ctx.cr0.eq) goto loc_8250F2F4;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x8250f2f4
	if (ctx.cr0.eq) goto loc_8250F2F4;
loc_8250F244:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,109
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 109, ctx.xer);
	// beq cr6,0x8250f25c
	if (ctx.cr6.eq) goto loc_8250F25C;
	// cmplwi cr6,r11,108
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 108, ctx.xer);
	// bne cr6,0x8250f2dc
	if (!ctx.cr6.eq) goto loc_8250F2DC;
loc_8250F25C:
	// addi r11,r11,-109
	ctx.r11.s64 = ctx.r11.s64 + -109;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r9,r11,12
	ctx.xer.ca = ctx.r11.u32 <= 12;
	ctx.r9.u64 = static_cast<uint64_t>(12) - ctx.r11.u64;
	// subfic r10,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 + 11;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r30,r10,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// lwzx r4,r30,r31
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// lwzx r26,r11,r31
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r29,12(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x8250b470
	ctx.lr = 0x8250F2A0;
	sub_8250B470(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8250F2AC;
	sub_8250AD28(ctx, base);
	// stwx r3,r30,r31
	REX_STORE_U32(r30.u32 + r31.u32, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f7708
	ctx.lr = 0x8250F2B8;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250f2cc
	if (ctx.cr0.eq) goto loc_8250F2CC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825c2510
	ctx.lr = 0x8250F2CC;
	sub_825C2510(ctx, base);
loc_8250F2CC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwimi r11,r10,7,18,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_8250F2DC:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250f2f4
	if (!ctx.cr0.eq) goto loc_8250F2F4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8250f244
	if (!ctx.cr6.eq) goto loc_8250F244;
loc_8250F2F4:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250f310
	if (!ctx.cr0.eq) goto loc_8250F310;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8250f230
	if (!ctx.cr6.eq) goto loc_8250F230;
loc_8250F310:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8251F2F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8251F300;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8251e520
	ctx.lr = 0x8251F314;
	sub_8251E520(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8251f344
	if (!ctx.cr6.eq) goto loc_8251F344;
loc_8251F320:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8251f358
	goto loc_8251F358;
loc_8251F328:
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8251eb30
	ctx.lr = 0x8251F338;
	sub_8251EB30(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8251f354
	if (ctx.cr6.eq) goto loc_8251F354;
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
loc_8251F344:
	// add r11,r31,r30
	ctx.r11.u64 = r31.u64 + r30.u64;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// ble cr6,0x8251f328
	if (!ctx.cr6.gt) goto loc_8251F328;
	// b 0x8251f320
	goto loc_8251F320;
loc_8251F354:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8251F358:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825235D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825235D8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82523600
	if (!ctx.cr0.eq) goto loc_82523600;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82523608
	if (!ctx.cr0.eq) goto loc_82523608;
loc_82523600:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825236a4
	goto loc_825236A4;
loc_82523608:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_8252360C:
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,36(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82523644
	if (!ctx.cr0.eq) goto loc_82523644;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r10,r10,-40
	ctx.xer.ca = ctx.r10.u32 > 39;
	ctx.r10.s64 = ctx.r10.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82523644
	if (ctx.cr0.eq) goto loc_82523644;
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// xor r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// clrlwi. r9,r9,19
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82523644
	if (!ctx.cr0.eq) goto loc_82523644;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8252360c
	goto loc_8252360C;
loc_82523644:
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// b 0x82523688
	goto loc_82523688;
loc_82523650:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82502168
	ctx.lr = 0x8252365C;
	sub_82502168(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825236a0
	if (ctx.cr6.eq) goto loc_825236A0;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82523680
	if (ctx.cr0.eq) goto loc_82523680;
	// li r31,0
	r31.s64 = 0;
	// b 0x82523688
	goto loc_82523688;
loc_82523680:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r31,r11,-40
	r31.s64 = ctx.r11.s64 + -40;
loc_82523688:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82501ee0
	ctx.lr = 0x82523694;
	sub_82501EE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82523650
	if (!ctx.cr0.eq) goto loc_82523650;
	// b 0x82523600
	goto loc_82523600;
loc_825236A0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_825236A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8252F5F8) {
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
	ctx.lr = 0x8252F600;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8252f61c
	if (!ctx.cr6.eq) goto loc_8252F61C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8252f82c
	goto loc_8252F82C;
loc_8252F61C:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r9,28(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 28);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8252f640
	if (ctx.cr6.eq) goto loc_8252F640;
	// lwz r10,48(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// clrlwi r10,r10,13
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFF;
	// clrlwi r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	// b 0x8252f828
	goto loc_8252F828;
loc_8252F640:
	// rlwinm r10,r30,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFF000;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r29,148(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 148);
	// lwz r10,564(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 564);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8252f68c
	if (!ctx.cr6.eq) goto loc_8252F68C;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8252f68c
	if (!ctx.cr6.eq) goto loc_8252F68C;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252f7cc
	if (ctx.cr0.eq) goto loc_8252F7CC;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252f7cc
	if (ctx.cr0.eq) goto loc_8252F7CC;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r10,20(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 20);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x8252f828
	goto loc_8252F828;
loc_8252F68C:
	// lwz r7,8(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r8,r7,25,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r8,125
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 125, ctx.xer);
	// beq cr6,0x8252f6a8
	if (ctx.cr6.eq) goto loc_8252F6A8;
	// cmplwi cr6,r8,124
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8252f6ac
	if (!ctx.cr6.eq) goto loc_8252F6AC;
loc_8252F6A8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8252F6AC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252f7f0
	if (ctx.cr0.eq) goto loc_8252F7F0;
	// lwz r9,8(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r10,r9,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,125
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 125, ctx.xer);
	// beq cr6,0x8252f6d0
	if (ctx.cr6.eq) goto loc_8252F6D0;
	// cmplwi cr6,r10,124
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8252f6d4
	if (!ctx.cr6.eq) goto loc_8252F6D4;
loc_8252F6D0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8252F6D4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252f768
	if (ctx.cr0.eq) goto loc_8252F768;
	// cmplwi cr6,r8,124
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 124, ctx.xer);
	// bne cr6,0x8252f770
	if (!ctx.cr6.eq) goto loc_8252F770;
	// cmplwi cr6,r10,124
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 124, ctx.xer);
	// bne cr6,0x8252f768
	if (!ctx.cr6.eq) goto loc_8252F768;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x8252F704;
	sub_824F71B8(ctx, base);
	// addi r11,r30,-8
	ctx.r11.s64 = r30.s64 + -8;
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// add r31,r3,r11
	r31.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r6,r10,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// rlwinm r5,r10,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// rlwinm r4,r10,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f71b8
	ctx.lr = 0x8252F724;
	sub_824F71B8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r10,r28,-8
	ctx.r10.s64 = r28.s64 + -8;
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// beq 0x8252f7cc
	if (ctx.cr0.eq) goto loc_8252F7CC;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252f7cc
	if (ctx.cr0.eq) goto loc_8252F7CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r9,r11,17
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFF;
	// clrlwi r8,r10,17
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFF;
	// subf. r3,r8,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8252f82c
	if (!ctx.cr0.eq) goto loc_8252F82C;
	// rlwinm r10,r10,17,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x3FFF;
	// rlwinm r11,r11,17,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x3FFF;
	// b 0x8252f828
	goto loc_8252F828;
loc_8252F768:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8252f82c
	goto loc_8252F82C;
loc_8252F770:
	// cmplwi cr6,r10,124
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 124, ctx.xer);
	// bne cr6,0x8252f780
	if (!ctx.cr6.eq) goto loc_8252F780;
loc_8252F778:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8252f82c
	goto loc_8252F82C;
loc_8252F780:
	// rlwinm r10,r7,18,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x7;
	// rlwinm r11,r9,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x7;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8252f798
	if (ctx.cr6.eq) goto loc_8252F798;
	// subf r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	// b 0x8252f82c
	goto loc_8252F82C;
loc_8252F798:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252f7cc
	if (ctx.cr6.eq) goto loc_8252F7CC;
	// addi r11,r28,44
	ctx.r11.s64 = r28.s64 + 44;
	// subf r8,r28,r30
	ctx.r8.u64 = r30.u64 - r28.u64;
loc_8252F7AC:
	// lwzx r7,r8,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf. r3,r6,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8252f82c
	if (!ctx.cr0.eq) goto loc_8252F82C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8252f7ac
	if (ctx.cr6.lt) goto loc_8252F7AC;
loc_8252F7CC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825bcf88
	ctx.lr = 0x8252F7D8;
	sub_825BCF88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// b 0x8252f82c
	goto loc_8252F82C;
loc_8252F7F0:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8252f80c
	if (ctx.cr6.eq) goto loc_8252F80C;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8252f810
	if (!ctx.cr6.eq) goto loc_8252F810;
loc_8252F80C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8252F810:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252f778
	if (!ctx.cr0.eq) goto loc_8252F778;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r10,16(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 16);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
loc_8252F828:
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_8252F82C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8254FDE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8254FDE8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8254fe04
	if (!ctx.cr6.eq) goto loc_8254FE04;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8254fe58
	if (!ctx.cr6.eq) goto loc_8254FE58;
loc_8254FDFC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8254fe5c
	goto loc_8254FE5C;
loc_8254FE04:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8254fe58
	if (ctx.cr6.eq) goto loc_8254FE58;
	// lwz r29,4(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8254fe58
	if (!ctx.cr6.eq) goto loc_8254FE58;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8254fdfc
	if (ctx.cr6.eq) goto loc_8254FDFC;
	// addi r31,r4,8
	r31.s64 = ctx.r4.s64 + 8;
	// subf r28,r4,r5
	r28.u64 = ctx.r5.u64 - ctx.r4.u64;
loc_8254FE30:
	// lwzx r4,r28,r31
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + r31.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x824f7010
	ctx.lr = 0x8254FE3C;
	sub_824F7010(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254fe58
	if (ctx.cr0.eq) goto loc_8254FE58;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// blt cr6,0x8254fe30
	if (ctx.cr6.lt) goto loc_8254FE30;
	// b 0x8254fdfc
	goto loc_8254FDFC;
loc_8254FE58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254FE5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82552240) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
loc_82552248:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825522f0
	if (!ctx.cr0.eq) goto loc_825522F0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825522f0
	if (ctx.cr0.eq) goto loc_825522F0;
loc_82552264:
	// lwz r11,44(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x825522d4
	if (!ctx.cr6.eq) goto loc_825522D4;
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
loc_82552274:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x825522d4
	if (ctx.cr6.eq) goto loc_825522D4;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x825522cc
	if (ctx.cr6.eq) goto loc_825522CC;
	// clrlwi. r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825522c4
	if (ctx.cr0.eq) goto loc_825522C4;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r31,40(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// clrlwi r30,r10,13
	r30.u64 = ctx.r10.u32 & 0x7FFFF;
	// rlwinm r10,r30,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r30,r30,27
	r30.u64 = r30.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r6,r6,r30
	ctx.r6.u64 = r30.u8 & 0x20 ? 0 : (ctx.r6.u32 << (r30.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// and. r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 & ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825522cc
	if (!ctx.cr0.eq) goto loc_825522CC;
loc_825522C4:
	// stw r4,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r4.u32);
	// li r7,1
	ctx.r7.s64 = 1;
loc_825522CC:
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// b 0x82552274
	goto loc_82552274;
loc_825522D4:
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825522f0
	if (!ctx.cr0.eq) goto loc_825522F0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82552264
	if (!ctx.cr6.eq) goto loc_82552264;
loc_825522F0:
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82552248
	if (!ctx.cr0.eq) goto loc_82552248;
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82555060) {
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
	ctx.lr = 0x82555068;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,18
	ctx.r6.s64 = 18;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x8255509C;
	sub_825BB860(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8250ab60
	ctx.lr = 0x825550AC;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825550B8;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ab60
	ctx.lr = 0x825550C8;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825550D4;
	sub_8250AD28(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// beq cr6,0x825550f8
	if (ctx.cr6.eq) goto loc_825550F8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x825550F4;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_825550F8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82555100;
	sub_8250AD28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// rlwimi r11,r10,14,15,17
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x1C000) | (ctx.r11.u64 & 0xFFFFFFFFFFFE3FFF);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ffc30
	ctx.lr = 0x82555128;
	sub_824FFC30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8255E488) {
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
	// bl 0x826a1ca8
	ctx.lr = 0x8255E490;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r24,0
	r24.s64 = 0;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r24,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82553778
	ctx.lr = 0x8255E4C8;
	sub_82553778(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8255E4CC:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8255e4ec
	if (ctx.cr6.eq) goto loc_8255E4EC;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// bne cr6,0x8255e4f0
	if (!ctx.cr6.eq) goto loc_8255E4F0;
loc_8255E4EC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8255E4F0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255e520
	if (!ctx.cr0.eq) goto loc_8255E520;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82553778
	ctx.lr = 0x8255E500;
	sub_82553778(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// bl 0x8254ff60
	ctx.lr = 0x8255E50C;
	sub_8254FF60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255e51c
	if (!ctx.cr0.eq) goto loc_8255E51C;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// b 0x8255e4cc
	goto loc_8255E4CC;
loc_8255E51C:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8255E520:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8255e53c
	if (ctx.cr6.eq) goto loc_8255E53C;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// bne cr6,0x8255e540
	if (!ctx.cr6.eq) goto loc_8255E540;
loc_8255E53C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8255E540:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255e690
	if (!ctx.cr0.eq) goto loc_8255E690;
	// li r5,51
	ctx.r5.s64 = 51;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f7678
	ctx.lr = 0x8255E558;
	sub_824F7678(ctx, base);
	// addi r26,r3,4
	r26.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r26,1
	ctx.r10.u64 = r26.u64 | 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x82553880
	ctx.lr = 0x8255E578;
	sub_82553880(ctx, base);
loc_8255E578:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255e690
	if (!ctx.cr0.eq) goto loc_8255E690;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8255e690
	if (ctx.cr0.eq) goto loc_8255E690;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// stw r24,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
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
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82553778
	ctx.lr = 0x8255E5B4;
	sub_82553778(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8255E5B8:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255e5d8
	if (ctx.cr6.eq) goto loc_8255E5D8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// bne cr6,0x8255e5dc
	if (!ctx.cr6.eq) goto loc_8255E5DC;
loc_8255E5D8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8255E5DC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255e608
	if (!ctx.cr0.eq) goto loc_8255E608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82553778
	ctx.lr = 0x8255E5EC;
	sub_82553778(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// bl 0x8254ff60
	ctx.lr = 0x8255E5F8;
	sub_8254FF60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255e5b8
	if (ctx.cr0.eq) goto loc_8255E5B8;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// b 0x8255e5b8
	goto loc_8255E5B8;
loc_8255E608:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r29,4(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r28,8(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bne 0x8255e644
	if (!ctx.cr0.eq) goto loc_8255E644;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r10,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r10.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8255e644
	if (ctx.cr0.eq) goto loc_8255E644;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8255e654
	if (!ctx.cr6.gt) goto loc_8255E654;
loc_8255E644:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82584838
	ctx.lr = 0x8255E650;
	sub_82584838(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8255E654:
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mulli r11,r9,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r30,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r30.u32);
	// stw r29,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r29.u32);
	// stw r28,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r28.u32);
	// ld r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82559de8
	ctx.lr = 0x8255E68C;
	sub_82559DE8(ctx, base);
	// b 0x8255e578
	goto loc_8255E578;
loc_8255E690:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8257EB90) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x8257ebf4
	if (ctx.cr6.eq) goto loc_8257EBF4;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x8257ebb8
	if (!ctx.cr6.eq) goto loc_8257EBB8;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8257ebec
	if (ctx.cr6.lt) goto loc_8257EBEC;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x8257ebc0
	if (ctx.cr6.eq) goto loc_8257EBC0;
loc_8257EBB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8257EBC0:
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8257ebd4
	if (!ctx.cr6.eq) goto loc_8257EBD4;
loc_8257EBCC:
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// b 0x8257ec00
	goto loc_8257EC00;
loc_8257EBD4:
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x8257eae8
	sub_8257EAE8(ctx, base);
	return;
loc_8257EBEC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8257ebcc
	goto loc_8257EBCC;
loc_8257EBF4:
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
loc_8257EC00:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8257FC28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8257FC30;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x824ff930
	ctx.lr = 0x8257FC4C;
	sub_824FF930(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824448f0
	ctx.lr = 0x8257FC58;
	sub_824448F0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,8(r28)
	REX_STORE_U32(r28.u32 + 8, r31.u32);
	// stw r30,12(r28)
	REX_STORE_U32(r28.u32 + 12, r30.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
	// stw r29,16(r28)
	REX_STORE_U32(r28.u32 + 16, r29.u32);
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82580638) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// rlwinm r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82580668
	if (!ctx.cr6.eq) goto loc_82580668;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x825806d0
	if (ctx.cr6.eq) goto loc_825806D0;
loc_82580668:
	// lwz r5,12(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82580670;
	sub_82503DA0(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// ori r11,r31,228
	ctx.r11.u64 = r31.u64 | 228;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// rlwinm r9,r11,27,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x6;
	// rlwinm r7,r7,27,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0xFF;
	// rlwinm r8,r11,29,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x6;
	// srw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r10,r9,2,28,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r6,r11,31,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x6;
	// clrlwi r9,r8,30
	ctx.r9.u64 = ctx.r8.u32 & 0x3;
	// rlwinm r11,r11,1,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x6;
	// srw r8,r7,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// srw r11,r7,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r11.u8 & 0x3F));
	// rlwimi r8,r10,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// rlwinm r5,r5,0,27,18
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwimi r11,r8,2,0,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// rlwinm r5,r5,0,6,3
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFF3FFFFFF;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_825806D0:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
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

DEFINE_REX_FUNC(sub_82582C58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82582C60;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82582C88;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82582cac
	if (ctx.cr6.eq) goto loc_82582CAC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82582CA8;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82582CAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82582CB4;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82582CC4;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82582CD0;
	sub_8250AD28(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// rlwimi r9,r10,14,15,17
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x1C000) | (ctx.r9.u64 & 0xFFFFFFFFFFFE3FFF);
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r10,564(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 564);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// stw r8,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82586DF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82586DF8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82586E20;
	sub_825BB860(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82584ed0
	ctx.lr = 0x82586E30;
	sub_82584ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82586E3C;
	sub_8250AD28(ctx, base);
	// stw r3,44(r28)
	REX_STORE_U32(r28.u32 + 44, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82584ed0
	ctx.lr = 0x82586E4C;
	sub_82584ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82586E58;
	sub_8250AD28(ctx, base);
	// lwz r10,44(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 44);
	// stw r3,48(r28)
	REX_STORE_U32(r28.u32 + 48, ctx.r3.u32);
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,8(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// rlwimi r9,r10,14,15,17
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x1C000) | (ctx.r9.u64 & 0xFFFFFFFFFFFE3FFF);
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// stw r9,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r9.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r10,564(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 564);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// stw r8,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8258D1D0) {
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
	ctx.lr = 0x8258D1D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x82520410
	ctx.lr = 0x8258D1FC;
	sub_82520410(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8258D200:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8258d220
	if (!ctx.cr6.eq) goto loc_8258D220;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82589ed0
	ctx.lr = 0x8258D214;
	sub_82589ED0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8258d224
	if (ctx.cr0.eq) goto loc_8258D224;
loc_8258D220:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258D224:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8258d298
	if (!ctx.cr0.eq) goto loc_8258D298;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82589f28
	ctx.lr = 0x8258D234;
	sub_82589F28(ctx, base);
	// cmpwi cr6,r3,33
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 33, ctx.xer);
	// beq cr6,0x8258d270
	if (ctx.cr6.eq) goto loc_8258D270;
	// ble cr6,0x8258d248
	if (!ctx.cr6.gt) goto loc_8258D248;
	// cmpwi cr6,r3,37
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 37, ctx.xer);
	// ble cr6,0x8258d27c
	if (!ctx.cr6.gt) goto loc_8258D27C;
loc_8258D248:
	// lwz r6,16(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8258d28c
	if (ctx.cr6.eq) goto loc_8258D28C;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8258c288
	ctx.lr = 0x8258D26C;
	sub_8258C288(ctx, base);
	// b 0x8258d28c
	goto loc_8258D28C;
loc_8258D270:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
loc_8258D27C:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwimi r11,r10,4,25,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x70) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
loc_8258D28C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// b 0x8258d200
	goto loc_8258D200;
loc_8258D298:
	// lwz r10,1004(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1004);
	// addi r11,r31,972
	ctx.r11.s64 = r31.s64 + 972;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r30,1004(r31)
	REX_STORE_U32(r31.u32 + 1004, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825A0BD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825A0BD8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,79
	ctx.r4.s64 = 79;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825A0BF0;
	sub_824F05F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825A0C04;
	sub_824F05F0(ctx, base);
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(r29.u32, 3, ctx.xer);
	// bne cr6,0x825a0c1c
	if (!ctx.cr6.eq) goto loc_825A0C1C;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x825a0c38
	if (ctx.cr6.eq) goto loc_825A0C38;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x825a0c28
	goto loc_825A0C28;
loc_825A0C1C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a0c38
	if (ctx.cr6.eq) goto loc_825A0C38;
	// li r6,0
	ctx.r6.s64 = 0;
loc_825A0C28:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824de5a0
	ctx.lr = 0x825A0C38;
	sub_824DE5A0(ctx, base);
loc_825A0C38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825A2548) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825a257c
	if (!ctx.cr6.eq) goto loc_825A257C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-11824
	ctx.r6.s64 = ctx.r11.s64 + -11824;
	// addi r5,r10,-13852
	ctx.r5.s64 = ctx.r10.s64 + -13852;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,412
	ctx.r7.s64 = 412;
	// bl 0x824ea978
	ctx.lr = 0x825A257C;
	sub_824EA978(ctx, base);
loc_825A257C:
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

DEFINE_REX_FUNC(sub_825A2EF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825A2F00;
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,22852
	r30.s64 = ctx.r11.s64 + 22852;
	// addi r29,r10,-11576
	r29.s64 = ctx.r10.s64 + -11576;
	// bne cr6,0x825a2f40
	if (!ctx.cr6.eq) goto loc_825A2F40;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-11836
	ctx.r5.s64 = ctx.r11.s64 + -11836;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,666
	ctx.r7.s64 = 666;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A2F40;
	sub_824EA978(ctx, base);
loc_825A2F40:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x825a2f64
	if (!ctx.cr6.eq) goto loc_825A2F64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-26132
	ctx.r5.s64 = ctx.r11.s64 + -26132;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,667
	ctx.r7.s64 = 667;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A2F64;
	sub_824EA978(ctx, base);
loc_825A2F64:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x825a2f8c
	if (ctx.cr6.gt) goto loc_825A2F8C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-11444
	ctx.r5.s64 = ctx.r11.s64 + -11444;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,671
	ctx.r7.s64 = 671;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A2F8C;
	sub_824EA978(ctx, base);
loc_825A2F8C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824ef4f0
	ctx.lr = 0x825A2F94;
	sub_824EF4F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825a2fb8
	if (ctx.cr0.eq) goto loc_825A2FB8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-11324
	ctx.r5.s64 = ctx.r11.s64 + -11324;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,672
	ctx.r7.s64 = 672;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A2FB8;
	sub_824EA978(ctx, base);
loc_825A2FB8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824ef3e0
	ctx.lr = 0x825A2FC0;
	sub_824EF3E0(ctx, base);
	// bl 0x821aae78
	ctx.lr = 0x825A2FC4;
	sub_821AAE78(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a2e60
	ctx.lr = 0x825A2FD4;
	sub_826A2E60(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x825a28c0
	ctx.lr = 0x825A2FE0;
	sub_825A28C0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825A6778) {
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
	ctx.lr = 0x825A6780;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,72(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// addi r28,r11,22852
	r28.s64 = ctx.r11.s64 + 22852;
	// addi r27,r10,23200
	r27.s64 = ctx.r10.s64 + 23200;
	// blt cr6,0x825a67c8
	if (ctx.cr6.lt) goto loc_825A67C8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,23360
	ctx.r5.s64 = ctx.r11.s64 + 23360;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,670
	ctx.r7.s64 = 670;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A67C8;
	sub_824EA978(ctx, base);
loc_825A67C8:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mulli r30,r30,12
	r30.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(12));
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825a67fc
	if (ctx.cr6.lt) goto loc_825A67FC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,23288
	ctx.r5.s64 = ctx.r11.s64 + 23288;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,670
	ctx.r7.s64 = 670;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A67FC;
	sub_824EA978(ctx, base);
loc_825A67FC:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r11,r9,r29
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(r29.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x825a57a8
	ctx.lr = 0x825A681C;
	sub_825A57A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825ADE70) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c80
	ctx.lr = 0x825ADE78;
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,28(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r3,724(r1)
	REX_STORE_U32(ctx.r1.u32 + 724, ctx.r3.u32);
	// addi r4,r11,22852
	ctx.r4.s64 = ctx.r11.s64 + 22852;
	// li r31,0
	r31.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r4,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// lwz r11,12424(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12424);
	// addi r6,r10,-8552
	ctx.r6.s64 = ctx.r10.s64 + -8552;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// bne cr6,0x825aded4
	if (!ctx.cr6.eq) goto loc_825ADED4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,12247
	ctx.r7.s64 = 12247;
	// addi r5,r11,-6840
	ctx.r5.s64 = ctx.r11.s64 + -6840;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825ADED4;
	sub_824EA978(ctx, base);
loc_825ADED4:
	// lwz r10,12028(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 12028);
	// li r7,6
	ctx.r7.s64 = 6;
	// lwz r11,10820(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 10820);
	// lwz r9,13164(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 13164);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,12(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 12);
	// lwz r23,12424(r25)
	r23.u64 = REX_LOAD_U32(r25.u32 + 12424);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r6,r10,5
	ctx.r6.s64 = ctx.r10.s64 + 5;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// divwu r9,r6,r7
	ctx.r9.u64 = uint32_t(ctx.r7.u32 ? ctx.r6.u32 / ctx.r7.u32 : 0);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrlwi. r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// beq 0x825adf18
	if (ctx.cr0.eq) goto loc_825ADF18;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
loc_825ADF18:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r31,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r22,r9,31,1,31
	r22.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// li r15,1
	r15.s64 = 1;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + r22.u64;
	// addi r16,r25,13152
	r16.s64 = r25.s64 + 13152;
	// stw r11,12428(r25)
	REX_STORE_U32(r25.u32 + 12428, ctx.r11.u32);
	// mr r21,r31
	r21.u64 = r31.u64;
	// lwz r10,13160(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 13160);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// lwz r30,13152(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 13152);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825adf80
	if (ctx.cr6.eq) goto loc_825ADF80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x825ADF60;
	sub_826A1E70(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,0(r16)
	REX_STORE_U32(r16.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825ADF7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
loc_825ADF80:
	// lwz r10,8(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 8);
	// mr r20,r11
	r20.u64 = ctx.r11.u64;
	// lwz r14,140(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// addi r19,r1,288
	r19.s64 = ctx.r1.s64 + 288;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lwz r18,136(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r11,8(r16)
	REX_STORE_U32(r16.u32 + 8, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r10,-31184
	ctx.r10.s64 = ctx.r10.s64 + -31184;
	// addi r11,r11,-6848
	ctx.r11.s64 = ctx.r11.s64 + -6848;
	// addi r17,r1,416
	r17.s64 = ctx.r1.s64 + 416;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_825ADFB8:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x825ae668
	if (ctx.cr6.eq) goto loc_825AE668;
	// lwz r28,132(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r21,r28
	ctx.cr6.compare<uint32_t>(r21.u32, r28.u32, ctx.xer);
	// bne cr6,0x825ae534
	if (!ctx.cr6.eq) goto loc_825AE534;
	// lwz r27,128(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi. r11,r27,31
	ctx.r11.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ae004
	if (ctx.cr0.eq) goto loc_825AE004;
	// mulli r11,r31,6
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 2);
	// rlwimi r8,r14,12,0,19
	ctx.r8.u64 = (__builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 12) & 0xFFFFF000) | (ctx.r8.u64 & 0xFFFFFFFF00000FFF);
	// rlwimi r9,r18,5,25,26
	ctx.r9.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 5) & 0x60) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF9F);
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// rlwimi r9,r10,2,28,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xF) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF0);
	// b 0x825ae2a4
	goto loc_825AE2A4;
loc_825AE004:
	// rlwinm. r11,r27,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ae01c
	if (ctx.cr0.eq) goto loc_825AE01C;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x825ae4d0
	if (ctx.cr6.eq) goto loc_825AE4D0;
	// b 0x825ae200
	goto loc_825AE200;
loc_825AE01C:
	// rlwinm. r11,r27,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ae0cc
	if (ctx.cr0.eq) goto loc_825AE0CC;
	// mulli r11,r31,6
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// addi r9,r31,1
	ctx.r9.s64 = r31.s64 + 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// mulli r10,r9,6
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(6));
	// lwz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 2);
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// clrlwi r6,r6,20
	ctx.r6.u64 = ctx.r6.u32 & 0xFFF;
	// ori r7,r7,108
	ctx.r7.u64 = ctx.r7.u64 | 108;
	// sth r6,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + r23.u64;
	// stw r7,2(r11)
	REX_STORE_U32(ctx.r11.u32 + 2, ctx.r7.u32);
	// rlwimi r8,r22,4,16,27
	ctx.r8.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 4) & 0xFFF0) | (ctx.r8.u64 & 0xFFFFFFFFFFFF000F);
	// mulli r11,r21,12
	ctx.r11.s64 = static_cast<int64_t>(r21.u64 * static_cast<uint64_t>(12));
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// sth r7,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r7.u16);
	// mulli r8,r22,12
	ctx.r8.s64 = static_cast<int64_t>(r22.u64 * static_cast<uint64_t>(12));
	// addi r31,r9,1
	r31.s64 = ctx.r9.s64 + 1;
	// lwz r7,2(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 2);
	// addi r21,r21,2
	r21.s64 = r21.s64 + 2;
	// addi r22,r22,2
	r22.s64 = r22.s64 + 2;
	// rlwimi r7,r15,0,28,11
	ctx.r7.u64 = (__builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 0) & 0xFFFFFFFFFFF0000F) | (ctx.r7.u64 & 0xFFFF0);
	// stw r7,2(r10)
	REX_STORE_U32(ctx.r10.u32 + 2, ctx.r7.u32);
	// lwz r10,12424(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 12424);
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,12424(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 12424);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// stw r9,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// b 0x825ae4d0
	goto loc_825AE4D0;
loc_825AE0CC:
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825ae32c
	if (!ctx.cr0.eq) goto loc_825AE32C;
	// rlwinm. r11,r27,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825ae32c
	if (!ctx.cr0.eq) goto loc_825AE32C;
	// rlwinm. r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ae120
	if (ctx.cr0.eq) goto loc_825AE120;
	// mulli r11,r31,6
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(6));
	// stw r31,0(r19)
	REX_STORE_U32(r19.u32 + 0, r31.u32);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// addi r10,r18,-128
	ctx.r10.s64 = r18.s64 + -128;
	// li r9,16395
	ctx.r9.s64 = 16395;
	// addi r17,r17,4
	r17.s64 = r17.s64 + 4;
	// addi r19,r19,4
	r19.s64 = r19.s64 + 4;
	// lwz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 2);
	// lhz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwimi r8,r10,6,18,25
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3FC0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFC03F);
	// andi. r10,r7,65531
	ctx.r10.u64 = ctx.r7.u64 & 65531;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwimi r8,r9,0,26,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFC0);
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// rlwimi r8,r9,0,17,17
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000) | (ctx.r8.u64 & 0xFFFFFFFFFFFFBFFF);
	// b 0x825ae264
	goto loc_825AE264;
loc_825AE120:
	// rlwinm. r11,r27,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ae170
	if (ctx.cr0.eq) goto loc_825AE170;
	// mulli r11,r31,6
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(6));
	// lwz r10,-4(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + -4);
	// stw r31,-4(r19)
	REX_STORE_U32(r19.u32 + -4, r31.u32);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// addi r9,r18,-128
	ctx.r9.s64 = r18.s64 + -128;
	// li r8,16427
	ctx.r8.s64 = 16427;
	// mulli r10,r10,6
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(6));
	// lwz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 2);
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwimi r7,r9,6,18,25
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3FC0) | (ctx.r7.u64 & 0xFFFFFFFFFFFFC03F);
	// andi. r9,r6,65531
	ctx.r9.u64 = ctx.r6.u64 & 65531;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwimi r7,r8,0,26,31
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3F) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFC0);
	// sth r9,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// rlwimi r7,r8,0,17,17
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4000) | (ctx.r7.u64 & 0xFFFFFFFFFFFFBFFF);
	// stw r7,2(r11)
	REX_STORE_U32(ctx.r11.u32 + 2, ctx.r7.u32);
	// lhzx r11,r10,r23
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + r23.u32);
	// rlwimi r11,r31,3,0,28
	ctx.r11.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8) | (ctx.r11.u64 & 0xFFFFFFFF00000007);
	// b 0x825ae304
	goto loc_825AE304;
loc_825AE170:
	// rlwinm. r11,r27,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ae188
	if (ctx.cr0.eq) goto loc_825AE188;
	// lwz r11,-4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + -4);
	// addi r17,r17,-4
	r17.s64 = r17.s64 + -4;
	// addi r19,r19,-4
	r19.s64 = r19.s64 + -4;
	// b 0x825ae200
	goto loc_825AE200;
loc_825AE188:
	// rlwinm. r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ae1ec
	if (ctx.cr0.eq) goto loc_825AE1EC;
	// mulli r11,r31,6
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(6));
	// add r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 + r23.u64;
	// li r9,41
	ctx.r9.s64 = 41;
	// cmpwi cr6,r18,-1
	ctx.cr6.compare<int32_t>(r18.s32, -1, ctx.xer);
	// lwz r11,2(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 2);
	// rlwimi r11,r9,0,26,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC0);
	// stw r11,2(r10)
	REX_STORE_U32(ctx.r10.u32 + 2, ctx.r11.u32);
	// bne cr6,0x825ae1c0
	if (!ctx.cr6.eq) goto loc_825AE1C0;
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,26,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFC03F;
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
	// b 0x825ae1d0
	goto loc_825AE1D0;
loc_825AE1C0:
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// addi r8,r18,-128
	ctx.r8.s64 = r18.s64 + -128;
	// andi. r9,r9,65531
	ctx.r9.u64 = ctx.r9.u64 & 65531;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwimi r11,r8,6,18,25
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0x3FC0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC03F);
loc_825AE1D0:
	// stw r11,2(r10)
	REX_STORE_U32(ctx.r10.u32 + 2, ctx.r11.u32);
	// rlwinm r11,r14,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r9,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stwx r31,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r31.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x825ae4d0
	goto loc_825AE4D0;
loc_825AE1EC:
	// rlwinm. r11,r27,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ae214
	if (ctx.cr0.eq) goto loc_825AE214;
	// rlwinm r11,r14,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_825AE200:
	// mulli r11,r11,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(6));
	// lhzx r10,r11,r23
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + r23.u32);
	// rlwimi r10,r31,3,0,28
	ctx.r10.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8) | (ctx.r10.u64 & 0xFFFFFFFF00000007);
	// sthx r10,r11,r23
	REX_STORE_U16(ctx.r11.u32 + r23.u32, ctx.r10.u16);
	// b 0x825ae4d0
	goto loc_825AE4D0;
loc_825AE214:
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ae238
	if (ctx.cr0.eq) goto loc_825AE238;
	// mulli r11,r31,6
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 2);
	// rlwimi r9,r10,1,27,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1F) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFE0);
	// b 0x825ae2a4
	goto loc_825AE2A4;
loc_825AE238:
	// rlwinm. r11,r27,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ae270
	if (ctx.cr0.eq) goto loc_825AE270;
	// mulli r11,r31,6
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(6));
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// li r10,11
	ctx.r10.s64 = 11;
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 2);
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
	// rlwimi r8,r10,0,17,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7FFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF8000);
	// sth r9,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
loc_825AE264:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stw r8,2(r11)
	REX_STORE_U32(ctx.r11.u32 + 2, ctx.r8.u32);
	// b 0x825ae4d0
	goto loc_825AE4D0;
loc_825AE270:
	// rlwinm. r11,r27,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ae2ac
	if (ctx.cr0.eq) goto loc_825AE2AC;
	// mulli r11,r31,6
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(6));
	// stw r31,0(r19)
	REX_STORE_U32(r19.u32 + 0, r31.u32);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r31,0(r17)
	REX_STORE_U32(r17.u32 + 0, r31.u32);
	// addi r19,r19,4
	r19.s64 = r19.s64 + 4;
	// addi r17,r17,4
	r17.s64 = r17.s64 + 4;
	// lwz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 2);
	// rlwimi r9,r18,27,0,4
	ctx.r9.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 27) & 0xF8000000) | (ctx.r9.u64 & 0xFFFFFFFF07FFFFFF);
	// rlwimi r9,r10,0,27,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFE0);
loc_825AE2A4:
	// stw r9,2(r11)
	REX_STORE_U32(ctx.r11.u32 + 2, ctx.r9.u32);
	// b 0x825ae4d0
	goto loc_825AE4D0;
loc_825AE2AC:
	// rlwinm. r11,r27,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ae310
	if (ctx.cr0.eq) goto loc_825AE310;
	// mulli r11,r31,6
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(6));
	// lwzu r9,-4(r17)
	ea = -4 + r17.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	r17.u32 = ea;
	// lwzu r10,-4(r19)
	ea = -4 + r19.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	r19.u32 = ea;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// rlwinm r8,r18,27,0,4
	ctx.r8.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 27) & 0xF8000000;
	// mulli r10,r10,6
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(6));
	// lwz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 2);
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,6,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x3FFFFC0;
	// rlwimi r6,r9,3,0,28
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8) | (ctx.r6.u64 & 0xFFFFFFFF00000007);
	// rlwinm r7,r7,0,20,17
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFCFFF;
	// sth r6,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// or r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 | ctx.r8.u64;
	// addi r7,r31,1
	ctx.r7.s64 = r31.s64 + 1;
	// rlwinm r9,r9,0,20,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFCFFF;
	// rlwinm r9,r9,0,6,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// ori r9,r9,40
	ctx.r9.u64 = ctx.r9.u64 | 40;
	// stw r9,2(r11)
	REX_STORE_U32(ctx.r11.u32 + 2, ctx.r9.u32);
	// lhzx r11,r10,r23
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + r23.u32);
	// rlwimi r11,r7,3,16,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFF8) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0007);
loc_825AE304:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// sthx r11,r10,r23
	REX_STORE_U16(ctx.r10.u32 + r23.u32, ctx.r11.u16);
	// b 0x825ae4d0
	goto loc_825AE4D0;
loc_825AE310:
	// li r7,12655
	ctx.r7.s64 = 12655;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x824ea978
	ctx.lr = 0x825AE328;
	sub_824EA978(ctx, base);
	// b 0x825ae4d0
	goto loc_825AE4D0;
loc_825AE32C:
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r15,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r15.u32);
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - r28.u64;
	// add. r4,r11,r14
	ctx.r4.u64 = ctx.r11.u64 + r14.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x825ae4d0
	if (ctx.cr0.eq) goto loc_825AE4D0;
	// lwz r29,104(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mulli r11,r21,12
	ctx.r11.s64 = static_cast<int64_t>(r21.u64 * static_cast<uint64_t>(12));
	// mulli r10,r31,6
	ctx.r10.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(6));
	// addi r9,r29,902
	ctx.r9.s64 = r29.s64 + 902;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + r23.u64;
	// mulli r9,r9,12
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// mulli r8,r22,12
	ctx.r8.s64 = static_cast<int64_t>(r22.u64 * static_cast<uint64_t>(12));
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// add r6,r9,r25
	ctx.r6.u64 = ctx.r9.u64 + r25.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_825AE374:
	// li r10,6
	ctx.r10.s64 = 6;
	// divwu r10,r3,r10
	ctx.r10.u64 = uint32_t(ctx.r10.u32 ? ctx.r3.u32 / ctx.r10.u32 : 0);
	// mulli r10,r10,6
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(6));
	// subf. r5,r10,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x825ae3c8
	if (!ctx.cr0.eq) goto loc_825AE3C8;
	// lhz r10,-2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// subf r9,r3,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r3.u64;
	// lwz r26,0(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r22,4,0,27
	ctx.r10.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r10.u64 & 0xFFFFFFFF0000000F);
	// rlwinm r26,r26,0,12,27
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFF0;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// ori r26,r26,1
	r26.u64 = r26.u64 | 1;
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// sth r10,-2(r11)
	REX_STORE_U16(ctx.r11.u32 + -2, ctx.r10.u16);
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r26.u32);
	// blt cr6,0x825ae3c0
	if (ctx.cr6.lt) goto loc_825AE3C0;
	// rlwinm r10,r10,0,16,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF0;
	// ori r10,r10,6
	ctx.r10.u64 = ctx.r10.u64 | 6;
	// b 0x825ae3c4
	goto loc_825AE3C4;
loc_825AE3C0:
	// rlwimi r10,r9,0,28,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF0);
loc_825AE3C4:
	// sth r10,-2(r11)
	REX_STORE_U16(ctx.r11.u32 + -2, ctx.r10.u16);
loc_825AE3C8:
	// add r10,r3,r28
	ctx.r10.u64 = ctx.r3.u64 + r28.u64;
	// cmplw cr6,r10,r18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r18.u32, ctx.xer);
	// blt cr6,0x825ae454
	if (ctx.cr6.lt) goto loc_825AE454;
	// add r9,r14,r18
	ctx.r9.u64 = r14.u64 + r18.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x825ae454
	if (!ctx.cr6.lt) goto loc_825AE454;
	// cmplw cr6,r10,r18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r18.u32, ctx.xer);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x825ae3fc
	if (!ctx.cr6.eq) goto loc_825AE3FC;
	// li r26,3
	r26.s64 = 3;
	// slw r10,r26,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r10.u8 & 0x3F));
	// b 0x825ae400
	goto loc_825AE400;
loc_825AE3FC:
	// slw r10,r15,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r15.u32 << (ctx.r10.u8 & 0x3F));
loc_825AE400:
	// rlwinm r10,r10,20,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFF00000;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwimi r10,r9,0,12,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFF00000);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rlwinm. r10,r27,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825ae42c
	if (ctx.cr0.eq) goto loc_825AE42C;
	// slw r10,r15,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (r15.u32 << (ctx.r5.u8 & 0x3F));
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,14,12,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFC000;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_825AE42C:
	// lwz r10,12424(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 12424);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// addi r6,r6,12
	ctx.r6.s64 = ctx.r6.s64 + 12;
	// b 0x825ae498
	goto loc_825AE498;
loc_825AE454:
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r26,2
	r26.s64 = 2;
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// slw r10,r26,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r10,r10,20,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFF00000;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwimi r10,r9,0,12,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFF00000);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,12424(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 12424);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
loc_825AE498:
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// cmplwi cr6,r5,5
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 5, ctx.xer);
	// beq cr6,0x825ae4b8
	if (ctx.cr6.eq) goto loc_825AE4B8;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825ae4c0
	if (!ctx.cr6.eq) goto loc_825AE4C0;
loc_825AE4B8:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
loc_825AE4C0:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x825ae374
	if (!ctx.cr0.eq) goto loc_825AE374;
	// stw r29,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r29.u32);
loc_825AE4D0:
	// lwz r10,8(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,0(r16)
	r30.u64 = REX_LOAD_U32(r16.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825ae520
	if (ctx.cr6.eq) goto loc_825AE520;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x825AE4F4;
	sub_826A1E70(ctx, base);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r11,724(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 724);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r10,0(r16)
	REX_STORE_U32(r16.u32 + 0, ctx.r10.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825AE514;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r14,140(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
	// lwz r18,136(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
loc_825AE520:
	// lwz r10,8(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 8);
	// mr r20,r11
	r20.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r11,8(r16)
	REX_STORE_U32(r16.u32 + 8, ctx.r11.u32);
	// b 0x825ae7b8
	goto loc_825AE7B8;
loc_825AE534:
	// subf. r27,r21,r28
	r27.u64 = r28.u64 - r21.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// li r24,0
	r24.s64 = 0;
	// beq 0x825ae7b8
	if (ctx.cr0.eq) goto loc_825AE7B8;
	// mulli r11,r21,12
	ctx.r11.s64 = static_cast<int64_t>(r21.u64 * static_cast<uint64_t>(12));
	// mulli r10,r31,6
	ctx.r10.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + r23.u64;
	// mulli r26,r22,12
	r26.s64 = static_cast<int64_t>(r22.u64 * static_cast<uint64_t>(12));
	// addi r29,r11,16
	r29.s64 = ctx.r11.s64 + 16;
	// addi r30,r10,2
	r30.s64 = ctx.r10.s64 + 2;
	// add r21,r27,r21
	r21.u64 = r27.u64 + r21.u64;
loc_825AE560:
	// li r11,6
	ctx.r11.s64 = 6;
	// divwu r11,r24,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? r24.u32 / ctx.r11.u32 : 0);
	// mulli r11,r11,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(6));
	// subf. r28,r11,r24
	r28.u64 = r24.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x825ae5b4
	if (!ctx.cr0.eq) goto loc_825AE5B4;
	// lhz r11,-2(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + -2);
	// subf r10,r24,r27
	ctx.r10.u64 = r27.u64 - r24.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwimi r11,r22,4,0,27
	ctx.r11.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// rlwinm r9,r9,0,12,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// sth r11,-2(r30)
	REX_STORE_U16(r30.u32 + -2, ctx.r11.u16);
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// blt cr6,0x825ae5ac
	if (ctx.cr6.lt) goto loc_825AE5AC;
	// rlwinm r11,r11,0,16,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF0;
	// ori r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 6;
	// b 0x825ae5b0
	goto loc_825AE5B0;
loc_825AE5AC:
	// rlwimi r11,r10,0,28,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF0);
loc_825AE5B0:
	// sth r11,-2(r30)
	REX_STORE_U16(r30.u32 + -2, ctx.r11.u16);
loc_825AE5B4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ae5f0
	if (ctx.cr6.eq) goto loc_825AE5F0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x825ae5e0
	if (ctx.cr6.eq) goto loc_825AE5E0;
	// li r7,12695
	ctx.r7.s64 = 12695;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x824ea978
	ctx.lr = 0x825AE5E0;
	sub_824EA978(ctx, base);
loc_825AE5E0:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// b 0x825ae5f4
	goto loc_825AE5F4;
loc_825AE5F0:
	// li r9,0
	ctx.r9.s64 = 0;
loc_825AE5F4:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r11,20,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000;
	// cmplwi cr6,r28,5
	ctx.cr6.compare<uint32_t>(r28.u32, 5, ctx.xer);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r11,r10,0,12,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFF00000);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,12424(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12424);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// addi r26,r26,12
	r26.s64 = r26.s64 + 12;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// beq cr6,0x825ae650
	if (ctx.cr6.eq) goto loc_825AE650;
	// addi r11,r27,-1
	ctx.r11.s64 = r27.s64 + -1;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825ae658
	if (!ctx.cr6.eq) goto loc_825AE658;
loc_825AE650:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,6
	r30.s64 = r30.s64 + 6;
loc_825AE658:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// cmplw cr6,r24,r27
	ctx.cr6.compare<uint32_t>(r24.u32, r27.u32, ctx.xer);
	// blt cr6,0x825ae560
	if (ctx.cr6.lt) goto loc_825AE560;
	// b 0x825ae7b8
	goto loc_825AE7B8;
loc_825AE668:
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// li r24,0
	r24.s64 = 0;
	// subf. r28,r21,r11
	r28.u64 = ctx.r11.u64 - r21.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x825ae7b8
	if (ctx.cr0.eq) goto loc_825AE7B8;
	// mulli r11,r21,12
	ctx.r11.s64 = static_cast<int64_t>(r21.u64 * static_cast<uint64_t>(12));
	// mulli r10,r31,6
	ctx.r10.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + r23.u64;
	// mulli r26,r22,12
	r26.s64 = static_cast<int64_t>(r22.u64 * static_cast<uint64_t>(12));
	// addi r29,r11,16
	r29.s64 = ctx.r11.s64 + 16;
	// addi r30,r10,2
	r30.s64 = ctx.r10.s64 + 2;
	// add r21,r28,r21
	r21.u64 = r28.u64 + r21.u64;
loc_825AE698:
	// li r11,6
	ctx.r11.s64 = 6;
	// divwu r11,r24,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? r24.u32 / ctx.r11.u32 : 0);
	// mulli r11,r11,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(6));
	// subf. r27,r11,r24
	r27.u64 = r24.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne 0x825ae708
	if (!ctx.cr0.eq) goto loc_825AE708;
	// lhz r9,-2(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + -2);
	// subf r10,r24,r28
	ctx.r10.u64 = r28.u64 - r24.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwimi r9,r22,4,0,27
	ctx.r9.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r9.u64 & 0xFFFFFFFF0000000F);
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// sth r9,-2(r30)
	REX_STORE_U16(r30.u32 + -2, ctx.r9.u16);
	// bgt cr6,0x825ae6e0
	if (ctx.cr6.gt) goto loc_825AE6E0;
	// rlwimi r11,r15,1,28,31
	ctx.r11.u64 = (__builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 1) & 0xF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r15,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r15.u32);
	// b 0x825ae6e4
	goto loc_825AE6E4;
loc_825AE6E0:
	// rlwimi r11,r15,0,28,31
	ctx.r11.u64 = (__builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 0) & 0xF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF0);
loc_825AE6E4:
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// blt cr6,0x825ae700
	if (ctx.cr6.lt) goto loc_825AE700;
	// rlwinm r11,r9,0,16,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF0;
	// ori r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 6;
	// sth r11,-2(r30)
	REX_STORE_U16(r30.u32 + -2, ctx.r11.u16);
	// b 0x825ae708
	goto loc_825AE708;
loc_825AE700:
	// rlwimi r9,r10,0,28,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF0);
	// sth r9,-2(r30)
	REX_STORE_U16(r30.u32 + -2, ctx.r9.u16);
loc_825AE708:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ae744
	if (ctx.cr6.eq) goto loc_825AE744;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x825ae734
	if (ctx.cr6.eq) goto loc_825AE734;
	// li r7,12773
	ctx.r7.s64 = 12773;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x824ea978
	ctx.lr = 0x825AE734;
	sub_824EA978(ctx, base);
loc_825AE734:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// b 0x825ae748
	goto loc_825AE748;
loc_825AE744:
	// li r9,0
	ctx.r9.s64 = 0;
loc_825AE748:
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r11,20,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000;
	// cmplwi cr6,r27,5
	ctx.cr6.compare<uint32_t>(r27.u32, 5, ctx.xer);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r11,r10,0,12,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFF00000);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,12424(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12424);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// addi r26,r26,12
	r26.s64 = r26.s64 + 12;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// beq cr6,0x825ae7a4
	if (ctx.cr6.eq) goto loc_825AE7A4;
	// addi r11,r28,-1
	ctx.r11.s64 = r28.s64 + -1;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825ae7ac
	if (!ctx.cr6.eq) goto loc_825AE7AC;
loc_825AE7A4:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,6
	r30.s64 = r30.s64 + 6;
loc_825AE7AC:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// cmplw cr6,r24,r28
	ctx.cr6.compare<uint32_t>(r24.u32, r28.u32, ctx.xer);
	// blt cr6,0x825ae698
	if (ctx.cr6.lt) goto loc_825AE698;
loc_825AE7B8:
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825adfb8
	if (ctx.cr6.lt) goto loc_825ADFB8;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825ae7f0
	if (!ctx.cr6.eq) goto loc_825AE7F0;
	// mulli r11,r31,6
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// rlwinm r10,r22,4,16,27
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 4) & 0xFFF0;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 2);
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// rlwimi r9,r15,1,28,11
	ctx.r9.u64 = (__builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 1) & 0xFFFFFFFFFFF0000F) | (ctx.r9.u64 & 0xFFFF0);
	// stw r9,2(r11)
	REX_STORE_U32(ctx.r11.u32 + 2, ctx.r9.u32);
loc_825AE7F0:
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825ae820
	if (!ctx.cr6.lt) goto loc_825AE820;
	// mulli r11,r31,6
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(6));
	// subf r10,r31,r10
	ctx.r10.u64 = ctx.r10.u64 - r31.u64;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825AE810:
	// lwz r10,6(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 6);
	// rlwinm r10,r10,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// stwu r10,6(r11)
	ea = 6 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x825ae810
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825AE810;
loc_825AE820:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_825F1258) {
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
	ctx.lr = 0x825F1260;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r30,1456(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825F1288;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// beq 0x825f12ac
	if (ctx.cr0.eq) goto loc_825F12AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825ed660
	ctx.lr = 0x825F12A8;
	sub_825ED660(ctx, base);
	// b 0x825f12b0
	goto loc_825F12B0;
loc_825F12AC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_825F12B0:
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r30,1456(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825F12C8;
	sub_825B33A0(ctx, base);
	// li r28,-1
	r28.s64 = -1;
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// beq 0x825f12ec
	if (ctx.cr0.eq) goto loc_825F12EC;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r29.u32);
	// stw r28,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r28.u32);
	// b 0x825f12f0
	goto loc_825F12F0;
loc_825F12EC:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_825F12F0:
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r26,1456(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825F1308;
	sub_825B33A0(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// beq 0x825f1328
	if (ctx.cr0.eq) goto loc_825F1328;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825d7a48
	ctx.lr = 0x825F1324;
	sub_825D7A48(ctx, base);
	// b 0x825f132c
	goto loc_825F132C;
loc_825F1328:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_825F132C:
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r26,1456(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825F1344;
	sub_825B33A0(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// beq 0x825f1364
	if (ctx.cr0.eq) goto loc_825F1364;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825d7a48
	ctx.lr = 0x825F1360;
	sub_825D7A48(ctx, base);
	// b 0x825f1368
	goto loc_825F1368;
loc_825F1364:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_825F1368:
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r26,1456(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825F1380;
	sub_825B33A0(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// beq 0x825f13a4
	if (ctx.cr0.eq) goto loc_825F13A4;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x825f7480
	ctx.lr = 0x825F1394;
	sub_825F7480(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// b 0x825f13a8
	goto loc_825F13A8;
loc_825F13A4:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_825F13A8:
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,1360(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1360);
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x825d8668
	ctx.lr = 0x825F13C0;
	sub_825D8668(ctx, base);
	// stw r3,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,124(r31)
	REX_STORE_U32(r31.u32 + 124, r29.u32);
	// stw r28,128(r31)
	REX_STORE_U32(r31.u32 + 128, r28.u32);
	// stw r29,132(r31)
	REX_STORE_U32(r31.u32 + 132, r29.u32);
	// stw r29,136(r31)
	REX_STORE_U32(r31.u32 + 136, r29.u32);
	// stw r29,140(r31)
	REX_STORE_U32(r31.u32 + 140, r29.u32);
	// stw r29,144(r31)
	REX_STORE_U32(r31.u32 + 144, r29.u32);
	// bl 0x825ecd80
	ctx.lr = 0x825F13E4;
	sub_825ECD80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825edcf0
	ctx.lr = 0x825F13EC;
	sub_825EDCF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ee020
	ctx.lr = 0x825F13F4;
	sub_825EE020(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r30,136(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// b 0x825f1430
	goto loc_825F1430;
loc_825F1400:
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// bl 0x825f74b8
	ctx.lr = 0x825F1408;
	sub_825F74B8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x825f142c
	if (!ctx.cr6.gt) goto loc_825F142C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f0ed0
	ctx.lr = 0x825F141C;
	sub_825F0ED0(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
loc_825F142C:
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
loc_825F1430:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825f1400
	if (!ctx.cr6.eq) goto loc_825F1400;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x825f1464
	if (ctx.cr6.lt) goto loc_825F1464;
loc_825F1448:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x825e9338
	ctx.lr = 0x825F1454;
	sub_825E9338(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x825f1448
	if (!ctx.cr6.gt) goto loc_825F1448;
loc_825F1464:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,124(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 124);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,17100
	ctx.r4.s64 = ctx.r11.s64 + 17100;
	// bl 0x82130e88
	ctx.lr = 0x825F1478;
	sub_82130E88(ctx, base);
	// lwz r5,128(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x825f1494
	if (ctx.cr6.lt) goto loc_825F1494;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,17064
	ctx.r4.s64 = ctx.r11.s64 + 17064;
	// bl 0x82130e88
	ctx.lr = 0x825F1494;
	sub_82130E88(ctx, base);
loc_825F1494:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r6,136(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r5,132(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 132);
	// addi r4,r11,17020
	ctx.r4.s64 = ctx.r11.s64 + 17020;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82130e88
	ctx.lr = 0x825F14AC;
	sub_82130E88(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826070b0
	ctx.lr = 0x825F14B4;
	sub_826070B0(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825f14cc
	if (ctx.cr6.eq) goto loc_825F14CC;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x825b3528
	ctx.lr = 0x825F14CC;
	sub_825B3528(ctx, base);
loc_825F14CC:
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825f14e0
	if (ctx.cr6.eq) goto loc_825F14E0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825edc98
	ctx.lr = 0x825F14E0;
	sub_825EDC98(ctx, base);
loc_825F14E0:
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825f14f4
	if (ctx.cr6.eq) goto loc_825F14F4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825e18c0
	ctx.lr = 0x825F14F4;
	sub_825E18C0(ctx, base);
loc_825F14F4:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825f1508
	if (ctx.cr6.eq) goto loc_825F1508;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825e18c0
	ctx.lr = 0x825F1508;
	sub_825E18C0(ctx, base);
loc_825F1508:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825f1520
	if (ctx.cr6.eq) goto loc_825F1520;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x825b3528
	ctx.lr = 0x825F1520;
	sub_825B3528(ctx, base);
loc_825F1520:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825f1538
	if (ctx.cr6.eq) goto loc_825F1538;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x825b3528
	ctx.lr = 0x825F1538;
	sub_825B3528(ctx, base);
loc_825F1538:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_825FC290) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825FC298;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// b 0x825fc2e4
	goto loc_825FC2E4;
loc_825FC2AC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825fc2f4
	if (ctx.cr6.eq) goto loc_825FC2F4;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r29,4(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// beq 0x825fc2dc
	if (ctx.cr0.eq) goto loc_825FC2DC;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x825b3528
	ctx.lr = 0x825FC2DC;
	sub_825B3528(ctx, base);
loc_825FC2DC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stwx r29,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r29.u32);
loc_825FC2E4:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825fc2ac
	if (!ctx.cr6.eq) goto loc_825FC2AC;
loc_825FC2F4:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825fc310
	if (ctx.cr6.eq) goto loc_825FC310;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x825b3528
	ctx.lr = 0x825FC310;
	sub_825B3528(ctx, base);
loc_825FC310:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x825fc2e4
	if (!ctx.cr6.gt) goto loc_825FC2E4;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b3528
	ctx.lr = 0x825FC334;
	sub_825B3528(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b3528
	ctx.lr = 0x825FC344;
	sub_825B3528(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b3528
	ctx.lr = 0x825FC354;
	sub_825B3528(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b3528
	ctx.lr = 0x825FC364;
	sub_825B3528(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b3528
	ctx.lr = 0x825FC374;
	sub_825B3528(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b3528
	ctx.lr = 0x825FC384;
	sub_825B3528(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b3528
	ctx.lr = 0x825FC394;
	sub_825B3528(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8260B538) {
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
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
loc_8260B554:
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
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
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
	// bne 0x8260b554
	if (!ctx.cr0.eq) goto loc_8260B554;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8260b5a0
	if (!ctx.cr6.eq) goto loc_8260B5A0;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r30,r11,20576
	r30.s64 = ctx.r11.s64 + 20576;
	// addi r3,r30,84
	ctx.r3.s64 = r30.s64 + 84;
	// bl 0x827938a4
	ctx.lr = 0x8260B58C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260b238
	ctx.lr = 0x8260B598;
	sub_8260B238(ctx, base);
	// addi r3,r30,84
	ctx.r3.s64 = r30.s64 + 84;
	// bl 0x827938b4
	ctx.lr = 0x8260B5A0;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8260B5A0:
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

DEFINE_REX_FUNC(sub_8260DFA0) {
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
	// bl 0x82613198
	ctx.lr = 0x8260DFC0;
	sub_82613198(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8260e004
	if (ctx.cr0.eq) goto loc_8260E004;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8260dff0
	if (ctx.cr6.eq) goto loc_8260DFF0;
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// b 0x8260dff4
	goto loc_8260DFF4;
loc_8260DFF0:
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
loc_8260DFF4:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_8260E004:
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

DEFINE_REX_FUNC(sub_8260FC78) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8260fbb0
	sub_8260FBB0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82610118) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82610120;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82610144;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8261015c
	if (!ctx.cr6.eq) goto loc_8261015C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82610248
	if (ctx.cr6.eq) goto loc_82610248;
loc_8261015C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82610224
	if (ctx.cr6.eq) goto loc_82610224;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260f120
	ctx.lr = 0x82610170;
	sub_8260F120(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82610248
	if (ctx.cr0.lt) goto loc_82610248;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_8261017C:
	// lwz r3,144(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 144);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82610194;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82610248
	if (ctx.cr0.lt) goto loc_82610248;
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826101c0
	if (ctx.cr6.eq) goto loc_826101C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826101BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_826101C0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82610248
	if (ctx.cr6.lt) goto loc_82610248;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826101e4
	if (ctx.cr6.eq) goto loc_826101E4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8261b918
	ctx.lr = 0x826101E0;
	sub_8261B918(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_826101E4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82610248
	if (ctx.cr6.lt) goto loc_82610248;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82610230
	if (!ctx.cr6.eq) goto loc_82610230;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,176(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82610210;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82610248
	if (ctx.cr0.lt) goto loc_82610248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260f178
	ctx.lr = 0x82610220;
	sub_8260F178(ctx, base);
	// b 0x82610248
	goto loc_82610248;
loc_82610224:
	// lis r29,4919
	r29.s64 = 322371584;
	// ori r29,r29,61441
	r29.u64 = r29.u64 | 61441;
	// b 0x8261017c
	goto loc_8261017C;
loc_82610230:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260fa20
	ctx.lr = 0x82610244;
	sub_8260FA20(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82610248:
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
	ctx.lr = 0x82610260;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82616CD0) {
	REX_FUNC_PROLOGUE();
	// lwz r5,20(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// lwz r4,16(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// b 0x826162e8
	sub_826162E8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82617280) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826163c0
	sub_826163C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82617970) {
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
	// bl 0x82617530
	ctx.lr = 0x82617990;
	sub_82617530(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826179a0
	if (ctx.cr0.eq) goto loc_826179A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x826179A0;
	sub_8264C3D0(ctx, base);
loc_826179A0:
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

DEFINE_REX_FUNC(sub_82618F88) {
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
	ctx.lr = 0x82618F90;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,28(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r29,32(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// addi r25,r4,12
	r25.s64 = ctx.r4.s64 + 12;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82618fbc
	if (ctx.cr6.eq) goto loc_82618FBC;
	// li r28,4
	r28.s64 = 4;
loc_82618FBC:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x82618fc8
	if (!ctx.cr6.eq) goto loc_82618FC8;
	// ori r28,r28,3
	r28.u64 = r28.u64 | 3;
loc_82618FC8:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82619040
	if (ctx.cr6.eq) goto loc_82619040;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
loc_82618FE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82619030
	if (ctx.cr6.eq) goto loc_82619030;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82618FF0:
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x82619014
	if (ctx.cr6.eq) goto loc_82619014;
	// lfsx f13,r8,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r25.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82619028
	if (ctx.cr6.eq) goto loc_82619028;
	// rlwinm r28,r28,0,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x82619028
	goto loc_82619028;
loc_82619014:
	// lfs f13,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r8,r25
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r25.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// beq cr6,0x82619028
	if (ctx.cr6.eq) goto loc_82619028;
	// rlwinm r28,r28,0,0,30
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
loc_82619028:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82618ff0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82618FF0;
loc_82619030:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, ctx.xer);
	// blt cr6,0x82618fe0
	if (ctx.cr6.lt) goto loc_82618FE0;
loc_82619040:
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82619074
	if (!ctx.cr6.eq) goto loc_82619074;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r8,r31,152
	ctx.r8.s64 = r31.s64 + 152;
loc_82619054:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r11,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82619054
	if (!ctx.cr0.eq) goto loc_82619054;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r10.u32);
loc_82619074:
	// mullw r11,r29,r30
	ctx.r11.s64 = int64_t(r29.s32) * int64_t(r30.s32);
	// lwz r10,156(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r3,16(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82619090;
	sub_826A1E70(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lfs f0,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lfs f0,8(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// stw r28,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r28.u32);
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82619154
	if (!ctx.cr6.eq) goto loc_82619154;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8261910c
	if (!ctx.cr6.eq) goto loc_8261910C;
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x826190e8
	if (!ctx.cr6.eq) goto loc_826190E8;
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x82619158
	goto loc_82619158;
loc_826190E8:
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bne cr6,0x82619104
	if (!ctx.cr6.eq) goto loc_82619104;
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x82619164
	goto loc_82619164;
loc_82619104:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82619164
	goto loc_82619164;
loc_8261910C:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bne cr6,0x8261913c
	if (!ctx.cr6.eq) goto loc_8261913C;
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x82619134
	if (!ctx.cr6.eq) goto loc_82619134;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x82619164
	goto loc_82619164;
loc_82619134:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82619164
	goto loc_82619164;
loc_8261913C:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8261914c
	if (!ctx.cr6.eq) goto loc_8261914C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82619164
	goto loc_82619164;
loc_8261914C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82619164
	goto loc_82619164;
loc_82619154:
	// li r3,7
	ctx.r3.s64 = 7;
loc_82619158:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_82619164:
	// bl 0x8262fff8
	ctx.lr = 0x82619168;
	sub_8262FFF8(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// lwz r3,144(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 144);
	// bl 0x826a1e70
	ctx.lr = 0x82619180;
	sub_826A1E70(ctx, base);
	// lwz r10,156(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,148(r31)
	REX_STORE_U32(r31.u32 + 148, r28.u32);
	// stw r10,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r10.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// stw r10,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r10.u32);
	// lfs f0,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// lfs f0,8(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r11.u32);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8262FFF8) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82630200
	if (ctx.cr6.lt) goto loc_82630200;
	// beq cr6,0x82630114
	if (ctx.cr6.eq) goto loc_82630114;
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// blt cr6,0x82630200
	if (ctx.cr6.lt) goto loc_82630200;
	// bne cr6,0x82630208
	if (!ctx.cr6.eq) goto loc_82630208;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x82630058
	if (!ctx.cr6.eq) goto loc_82630058;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bne cr6,0x82630030
	if (!ctx.cr6.eq) goto loc_82630030;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r11,r11,-18112
	ctx.r11.s64 = ctx.r11.s64 + -18112;
	// b 0x82630208
	goto loc_82630208;
loc_82630030:
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// bne cr6,0x826300c0
	if (!ctx.cr6.eq) goto loc_826300C0;
	// rlwinm. r11,r6,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8263004c
	if (ctx.cr0.eq) goto loc_8263004C;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r11,r11,-13200
	ctx.r11.s64 = ctx.r11.s64 + -13200;
	// b 0x82630208
	goto loc_82630208;
loc_8263004C:
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r11,r11,-17848
	ctx.r11.s64 = ctx.r11.s64 + -17848;
	// b 0x82630208
	goto loc_82630208;
loc_82630058:
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bne cr6,0x82630088
	if (!ctx.cr6.eq) goto loc_82630088;
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// bne cr6,0x826300c0
	if (!ctx.cr6.eq) goto loc_826300C0;
	// rlwinm. r11,r6,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8263007c
	if (ctx.cr0.eq) goto loc_8263007C;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r11,r11,-12200
	ctx.r11.s64 = ctx.r11.s64 + -12200;
	// b 0x82630208
	goto loc_82630208;
loc_8263007C:
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r11,r11,-17376
	ctx.r11.s64 = ctx.r11.s64 + -17376;
	// b 0x82630208
	goto loc_82630208;
loc_82630088:
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// bne cr6,0x826300a4
	if (!ctx.cr6.eq) goto loc_826300A4;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bne cr6,0x826300c0
	if (!ctx.cr6.eq) goto loc_826300C0;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r11,r11,-16632
	ctx.r11.s64 = ctx.r11.s64 + -16632;
	// b 0x82630208
	goto loc_82630208;
loc_826300A4:
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bne cr6,0x826300c0
	if (!ctx.cr6.eq) goto loc_826300C0;
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// bne cr6,0x826300c0
	if (!ctx.cr6.eq) goto loc_826300C0;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r11,r11,-16056
	ctx.r11.s64 = ctx.r11.s64 + -16056;
	// b 0x82630208
	goto loc_82630208;
loc_826300C0:
	// rlwinm. r11,r6,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82630108
	if (ctx.cr0.eq) goto loc_82630108;
	// clrlwi. r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826300fc
	if (!ctx.cr0.eq) goto loc_826300FC;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bgt cr6,0x826300e8
	if (ctx.cr6.gt) goto loc_826300E8;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// beq cr6,0x826300e8
	if (ctx.cr6.eq) goto loc_826300E8;
	// rlwinm. r11,r6,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826300fc
	if (!ctx.cr0.eq) goto loc_826300FC;
loc_826300E8:
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// bgt cr6,0x82630108
	if (ctx.cr6.gt) goto loc_82630108;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r11,r11,-14576
	ctx.r11.s64 = ctx.r11.s64 + -14576;
	// b 0x82630208
	goto loc_82630208;
loc_826300FC:
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r11,r11,-11184
	ctx.r11.s64 = ctx.r11.s64 + -11184;
	// b 0x82630208
	goto loc_82630208;
loc_82630108:
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r11,r11,-18552
	ctx.r11.s64 = ctx.r11.s64 + -18552;
	// b 0x82630208
	goto loc_82630208;
loc_82630114:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x82630158
	if (!ctx.cr6.eq) goto loc_82630158;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bne cr6,0x82630130
	if (!ctx.cr6.eq) goto loc_82630130;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r11,r11,-9656
	ctx.r11.s64 = ctx.r11.s64 + -9656;
	// b 0x82630208
	goto loc_82630208;
loc_82630130:
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// bne cr6,0x826301ac
	if (!ctx.cr6.eq) goto loc_826301AC;
	// rlwinm. r11,r6,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8263014c
	if (ctx.cr0.eq) goto loc_8263014C;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r11,r11,-3288
	ctx.r11.s64 = ctx.r11.s64 + -3288;
	// b 0x82630208
	goto loc_82630208;
loc_8263014C:
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r11,r11,-9336
	ctx.r11.s64 = ctx.r11.s64 + -9336;
	// b 0x82630208
	goto loc_82630208;
loc_82630158:
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bne cr6,0x82630174
	if (!ctx.cr6.eq) goto loc_82630174;
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// bne cr6,0x826301ac
	if (!ctx.cr6.eq) goto loc_826301AC;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r11,r11,-8776
	ctx.r11.s64 = ctx.r11.s64 + -8776;
	// b 0x82630208
	goto loc_82630208;
loc_82630174:
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// bne cr6,0x82630190
	if (!ctx.cr6.eq) goto loc_82630190;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bne cr6,0x826301ac
	if (!ctx.cr6.eq) goto loc_826301AC;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r11,r11,-7848
	ctx.r11.s64 = ctx.r11.s64 + -7848;
	// b 0x82630208
	goto loc_82630208;
loc_82630190:
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bne cr6,0x826301ac
	if (!ctx.cr6.eq) goto loc_826301AC;
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// bne cr6,0x826301ac
	if (!ctx.cr6.eq) goto loc_826301AC;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r11,r11,-6928
	ctx.r11.s64 = ctx.r11.s64 + -6928;
	// b 0x82630208
	goto loc_82630208;
loc_826301AC:
	// rlwinm. r11,r6,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826301f4
	if (ctx.cr0.eq) goto loc_826301F4;
	// clrlwi. r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826301e8
	if (!ctx.cr0.eq) goto loc_826301E8;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bgt cr6,0x826301d4
	if (ctx.cr6.gt) goto loc_826301D4;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// beq cr6,0x826301d4
	if (ctx.cr6.eq) goto loc_826301D4;
	// rlwinm. r11,r6,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826301e8
	if (!ctx.cr0.eq) goto loc_826301E8;
loc_826301D4:
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// bgt cr6,0x826301f4
	if (ctx.cr6.gt) goto loc_826301F4;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r11,r11,-5080
	ctx.r11.s64 = ctx.r11.s64 + -5080;
	// b 0x82630208
	goto loc_82630208;
loc_826301E8:
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r11,r11,-2240
	ctx.r11.s64 = ctx.r11.s64 + -2240;
	// b 0x82630208
	goto loc_82630208;
loc_826301F4:
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r11,r11,-10192
	ctx.r11.s64 = ctx.r11.s64 + -10192;
	// b 0x82630208
	goto loc_82630208;
loc_82630200:
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r11,r11,-1120
	ctx.r11.s64 = ctx.r11.s64 + -1120;
loc_82630208:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8263E330) {
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
	ctx.lr = 0x8263E338;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// lwz r28,0(r4)
	r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8263e378
	if (!ctx.cr6.gt) goto loc_8263E378;
loc_8263E368:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8263e368
	if (ctx.cr6.gt) goto loc_8263E368;
loc_8263E378:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,312(r29)
	REX_STORE_U16(r29.u32 + 312, ctx.r11.u16);
	// lhz r9,202(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 202);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r30.s32, ctx.xer);
	// bge cr6,0x8263e40c
	if (!ctx.cr6.lt) goto loc_8263E40C;
loc_8263E390:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82640d30
	ctx.lr = 0x8263E39C;
	sub_82640D30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263e44c
	if (ctx.cr6.lt) goto loc_8263E44C;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// xor r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// subf r7,r10,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r10.u64;
	// stw r7,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// lhz r6,202(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 202);
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r30.s32, ctx.xer);
	// bge cr6,0x8263e424
	if (!ctx.cr6.lt) goto loc_8263E424;
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sth r8,202(r31)
	REX_STORE_U16(r31.u32 + 202, ctx.r8.u16);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stwx r6,r5,r28
	REX_STORE_U32(ctx.r5.u32 + r28.u32, ctx.r6.u32);
	// lhz r4,202(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 202);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// sth r11,202(r31)
	REX_STORE_U16(r31.u32 + 202, ctx.r11.u16);
	// stw r26,56(r29)
	REX_STORE_U32(r29.u32 + 56, r26.u32);
	// lhz r9,202(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 202);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r30.s32, ctx.xer);
	// blt cr6,0x8263e390
	if (ctx.cr6.lt) goto loc_8263E390;
loc_8263E40C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263e434
	if (ctx.cr6.eq) goto loc_8263E434;
	// sth r30,490(r27)
	REX_STORE_U16(r27.u32 + 490, r30.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_8263E424:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_8263E434:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addis r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 65536;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// sth r8,490(r27)
	REX_STORE_U16(r27.u32 + 490, ctx.r8.u16);
loc_8263E44C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826427C0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x826427cc
	if (!ctx.cr6.eq) goto loc_826427CC;
	// b 0x8264c3c0
	sub_8264C3C0(ctx, base);
	return;
loc_826427CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,260(r3)
	REX_STORE_U32(ctx.r3.u32 + 260, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82642A60) {
	REX_FUNC_PROLOGUE();
	// lwz r11,184(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82642a74
	if (ctx.cr6.eq) goto loc_82642A74;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,192(r3)
	REX_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
loc_82642A74:
	// lwz r3,264(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_826437E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826437E8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8264c540
	ctx.lr = 0x826437FC;
	sub_8264C540(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r30,0
	r30.s64 = 0;
	// stw r29,128(r31)
	REX_STORE_U32(r31.u32 + 128, r29.u32);
	// addi r11,r11,-27040
	ctx.r11.s64 = ctx.r11.s64 + -27040;
	// stw r30,120(r31)
	REX_STORE_U32(r31.u32 + 120, r30.u32);
	// addi r3,r31,132
	ctx.r3.s64 = r31.s64 + 132;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r30,124(r31)
	REX_STORE_U32(r31.u32 + 124, r30.u32);
	// bl 0x82642ca8
	ctx.lr = 0x82643820;
	sub_82642CA8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r31,208
	ctx.r11.s64 = r31.s64 + 208;
	// stw r30,184(r31)
	REX_STORE_U32(r31.u32 + 184, r30.u32);
	// stw r30,188(r31)
	REX_STORE_U32(r31.u32 + 188, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,240(r31)
	REX_STORE_U32(r31.u32 + 240, ctx.r11.u32);
	// stw r30,192(r31)
	REX_STORE_U32(r31.u32 + 192, r30.u32);
	// std r30,200(r31)
	REX_STORE_U64(r31.u32 + 200, r30.u64);
	// stw r30,244(r31)
	REX_STORE_U32(r31.u32 + 244, r30.u32);
	// stw r10,248(r31)
	REX_STORE_U32(r31.u32 + 248, ctx.r10.u32);
	// stw r30,252(r31)
	REX_STORE_U32(r31.u32 + 252, r30.u32);
	// stw r30,256(r31)
	REX_STORE_U32(r31.u32 + 256, r30.u32);
	// stw r10,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r10.u32);
	// stw r30,264(r31)
	REX_STORE_U32(r31.u32 + 264, r30.u32);
	// std r30,208(r31)
	REX_STORE_U64(r31.u32 + 208, r30.u64);
	// std r30,216(r31)
	REX_STORE_U64(r31.u32 + 216, r30.u64);
	// std r30,224(r31)
	REX_STORE_U64(r31.u32 + 224, r30.u64);
	// std r30,232(r31)
	REX_STORE_U64(r31.u32 + 232, r30.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82649450) {
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
	ctx.lr = 0x82649458;
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f29.u64);
	// stfd f30,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,16
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16, ctx.xer);
	// lfs f30,3804(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3804);
	f30.f64 = double(temp.f32);
	// slw r29,r10,r5
	r29.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r5.u8 & 0x3F));
	// bge cr6,0x826494ac
	if (!ctx.cr6.lt) goto loc_826494AC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-21936
	ctx.r11.s64 = ctx.r11.s64 + -21936;
	// addi r9,r11,72
	ctx.r9.s64 = ctx.r11.s64 + 72;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lfsx f0,r10,r9
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f31,r10,r8
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	f31.f64 = double(temp.f32);
	// fmuls f10,f0,f30
	ctx.f10.f64 = double(float(ctx.f0.f64 * f30.f64));
	// b 0x826494fc
	goto loc_826494FC;
loc_826494AC:
	// extsw r11,r29
	ctx.r11.s64 = r29.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lfd f0,3728(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 3728);
	// fdiv f29,f0,f13
	f29.f64 = ctx.f0.f64 / ctx.f13.f64;
	// lfd f0,-21936(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + -21936);
	// fmul f1,f29,f0
	ctx.f1.f64 = f29.f64 * ctx.f0.f64;
	// bl 0x826a15c0
	ctx.lr = 0x826494D8;
	sub_826A15C0(ctx, base);
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64));
	// lfd f0,-21800(r8)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + -21800);
	// fmul f1,f29,f0
	ctx.f1.f64 = f29.f64 * ctx.f0.f64;
	// bl 0x826a14e0
	ctx.lr = 0x826494EC;
	sub_826A14E0(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfd f0,8312(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + 8312);
	// fmul f12,f1,f0
	ctx.f12.f64 = ctx.f1.f64 * ctx.f0.f64;
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
loc_826494FC:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// bne cr6,0x82649510
	if (!ctx.cr6.eq) goto loc_82649510;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3788(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3788);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
loc_82649510:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r3,r29,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lfs f0,3720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// lfs f8,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// ble cr6,0x826496f8
	if (!ctx.cr6.gt) goto loc_826496F8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f7,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f7.f64 = double(temp.f32);
loc_8264953C:
	// fnmsubs f13,f9,f10,f8
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f10.f64, -ctx.f8.f64)));
	// srawi r31,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	r31.s64 = ctx.r7.s32 >> 1;
	// fmuls f0,f10,f31
	ctx.f0.f64 = double(float(ctx.f10.f64 * f31.f64));
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f12,f8
	ctx.f12.f64 = ctx.f8.f64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// fmr f11,f7
	ctx.f11.f64 = ctx.f7.f64;
	// fmr f31,f13
	f31.f64 = ctx.f13.f64;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// fmuls f10,f0,f30
	ctx.f10.f64 = double(float(ctx.f0.f64 * f30.f64));
	// ble cr6,0x82649600
	if (!ctx.cr6.gt) goto loc_82649600;
	// addi r11,r31,3
	ctx.r11.s64 = r31.s64 + 3;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r30,8
	ctx.r11.s64 = r30.s64 + 8;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
loc_8264957C:
	// lfs f6,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f6.f64 = double(temp.f32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lfs f5,-12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// stfs f4,-8(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// fsubs f3,f6,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// stfs f3,-12(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + -12, temp.u32);
	// lfs f2,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// lfs f1,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f1.f64 = double(temp.f32);
	// fadds f6,f2,f1
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// stfs f6,-4(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fsubs f5,f2,f1
	ctx.f5.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// stfs f5,-8(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// lfs f4,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f1,f4,f3
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// lfs f5,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f2,f4,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fadds f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// stfs f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// fmsubs f5,f1,f13,f3
	ctx.f5.f64 = double(float(std::fma(ctx.f1.f64, ctx.f13.f64, -ctx.f3.f64)));
	// stfs f5,-4(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// fmadds f4,f1,f0,f2
	ctx.f4.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f2.f64)));
	// stfs f4,0(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// blt cr6,0x8264957c
	if (ctx.cr6.lt) goto loc_8264957C;
loc_82649600:
	// li r4,4
	ctx.r4.s64 = 4;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// ble cr6,0x826496ec
	if (!ctx.cr6.gt) goto loc_826496EC;
	// addi r11,r31,7
	ctx.r11.s64 = r31.s64 + 7;
	// addi r6,r30,24
	ctx.r6.s64 = r30.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + r30.u64;
loc_8264961C:
	// fnmsubs f12,f0,f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f10.f64, -ctx.f12.f64)));
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// fmadds f11,f13,f10,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f11.f64)));
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// fmadds f0,f12,f10,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f10.f64, ctx.f0.f64)));
	// fnmsubs f13,f11,f10,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f10.f64, -ctx.f13.f64)));
	// bgt cr6,0x826496d8
	if (ctx.cr6.gt) goto loc_826496D8;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_82649644:
	// lfs f6,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f6.f64 = double(temp.f32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lfs f5,-12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// stfs f4,-8(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfs f1,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f2,f6,f5
	ctx.f2.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// lfs f3,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f6,f3,f1
	ctx.f6.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// fmuls f5,f6,f11
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// fmuls f4,f6,f12
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fadds f3,f3,f1
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f1.f64));
	// stfs f3,-4(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fmsubs f1,f2,f12,f5
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f12.f64, -ctx.f5.f64)));
	// stfs f1,-12(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + -12, temp.u32);
	// fmadds f6,f2,f11,f4
	ctx.f6.f64 = double(float(std::fma(ctx.f2.f64, ctx.f11.f64, ctx.f4.f64)));
	// stfs f6,-8(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// lfs f5,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f2,f4,f5
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// lfs f6,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f1,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f5,f1,f6
	ctx.f5.f64 = double(float(ctx.f1.f64 - ctx.f6.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f3,f5,f13
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fadds f1,f1,f6
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f6.f64));
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// fmsubs f6,f2,f13,f4
	ctx.f6.f64 = double(float(std::fma(ctx.f2.f64, ctx.f13.f64, -ctx.f4.f64)));
	// stfs f6,-4(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// fmadds f5,f2,f0,f3
	ctx.f5.f64 = double(float(std::fma(ctx.f2.f64, ctx.f0.f64, ctx.f3.f64)));
	// stfs f5,0(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// ble cr6,0x82649644
	if (!ctx.cr6.gt) goto loc_82649644;
loc_826496D8:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// cmpw cr6,r4,r31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r31.s32, ctx.xer);
	// blt cr6,0x8264961c
	if (ctx.cr6.lt) goto loc_8264961C;
loc_826496EC:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// bgt cr6,0x8264953c
	if (ctx.cr6.gt) goto loc_8264953C;
loc_826496F8:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// ble cr6,0x82649750
	if (!ctx.cr6.gt) goto loc_82649750;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82649750
	if (!ctx.cr6.gt) goto loc_82649750;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// addi r11,r30,-4
	ctx.r11.s64 = r30.s64 + -4;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8264971C:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f9,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fsubs f6,f10,f9
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// stfsu f6,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8264971c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8264971C;
loc_82649750:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// ble cr6,0x82649830
	if (!ctx.cr6.gt) goto loc_82649830;
	// srawi r11,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r11.s64 = r29.s32 >> 1;
	// addi r4,r29,1
	ctx.r4.s64 = r29.s64 + 1;
	// addze r5,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r5.s64 = temp.s64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x82649830
	if (!ctx.cr6.gt) goto loc_82649830;
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
loc_82649778:
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x826497d0
	if (!ctx.cr6.lt) goto loc_826497D0;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-4(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// lfs f11,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsux f9,r11,r8
	ea = ctx.r11.u32 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f9.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// lfsx f10,r8,r10
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// stfsx f9,r8,r10
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, temp.u32);
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f7,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f7.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// lfsu f0,4(r7)
	ea = 4 + ctx.r7.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r7.u32 = ea;
	// stfs f7,0(r7)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_826497D0:
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + r29.u64;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f11,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// bgt cr6,0x8264981c
	if (ctx.cr6.gt) goto loc_8264981C;
loc_82649808:
	// srawi r11,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 1;
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// addze r8,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r8.s64 = temp.s64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82649808
	if (!ctx.cr6.gt) goto loc_82649808;
loc_8264981C:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r6,r29
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r29.s32, ctx.xer);
	// blt cr6,0x82649778
	if (ctx.cr6.lt) goto loc_82649778;
loc_82649830:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// bne cr6,0x826498e4
	if (!ctx.cr6.eq) goto loc_826498E4;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// blt cr6,0x826498a0
	if (ctx.cr6.lt) goto loc_826498A0;
	// extsw r11,r29
	ctx.r11.s64 = r29.s32;
	// addi r9,r3,-3
	ctx.r9.s64 = ctx.r3.s64 + -3;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r11,r30,-4
	ctx.r11.s64 = r30.s64 + -4;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f8,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 / ctx.f12.f64));
loc_82649864:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f7,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f0,f10
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f5,f0,f7
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stfs f6,12(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfsu f5,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// blt cr6,0x82649864
	if (ctx.cr6.lt) goto loc_82649864;
loc_826498A0:
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x826498e4
	if (!ctx.cr6.lt) goto loc_826498E4;
	// extsw r9,r29
	ctx.r9.s64 = r29.s32;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// subf r8,r10,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r10.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// fdivs f0,f8,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 / ctx.f12.f64));
loc_826498D4:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x826498d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826498D4;
loc_826498E4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

DEFINE_REX_FUNC(sub_82669F18) {
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
	ctx.lr = 0x82669F20;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,108
	ctx.r11.s64 = ctx.r4.s64 + 108;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r3,260
	ctx.r3.s64 = 260;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x8265d838
	ctx.lr = 0x82669F44;
	sub_8265D838(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82669f74
	if (ctx.cr0.eq) goto loc_82669F74;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82664f98
	ctx.lr = 0x82669F64;
	sub_82664F98(ctx, base);
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,432
	ctx.r3.s64 = r31.s64 + 432;
	// bl 0x826a2e60
	ctx.lr = 0x82669F74;
	sub_826A2E60(ctx, base);
loc_82669F74:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8266CAA0) {
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
	ctx.lr = 0x8266CAA8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	r22.s64 = 0;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r22.u32);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r22.u32);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8266caf0
	if (!ctx.cr6.gt) goto loc_8266CAF0;
loc_8266CAE4:
	// lis r29,-32646
	r29.s64 = -2139488256;
	// ori r29,r29,4102
	r29.u64 = r29.u64 | 4102;
	// b 0x8266cbc8
	goto loc_8266CBC8;
loc_8266CAF0:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8266cae4
	if (ctx.cr6.gt) goto loc_8266CAE4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826612a0
	ctx.lr = 0x8266CB00;
	sub_826612A0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8266cbb8
	if (ctx.cr0.lt) goto loc_8266CBB8;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r6,324(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82669f18
	ctx.lr = 0x8266CB1C;
	sub_82669F18(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8266cb30
	if (!ctx.cr0.eq) goto loc_8266CB30;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x8266cbb8
	goto loc_8266CBB8;
loc_8266CB30:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r22.u32);
	// beq cr6,0x8266cbf8
	if (ctx.cr6.eq) goto loc_8266CBF8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,258
	ctx.r3.s64 = 258;
	// bl 0x82663958
	ctx.lr = 0x8266CB4C;
	sub_82663958(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r3.u32);
	// bne 0x8266cbd4
	if (!ctx.cr0.eq) goto loc_8266CBD4;
loc_8266CB58:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
loc_8266CB60:
	// addi r28,r31,132
	r28.s64 = r31.s64 + 132;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827938a4
	ctx.lr = 0x8266CB6C;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_8266CB6C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r29,176(r31)
	REX_STORE_U32(r31.u32 + 176, r29.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r11.u32);
	// bl 0x827938b4
	ctx.lr = 0x8266CB80;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,192(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266cb94
	if (ctx.cr6.eq) goto loc_8266CB94;
	// bl 0x82675b10
	ctx.lr = 0x8266CB90;
	sub_82675B10(ctx, base);
	// stw r22,192(r31)
	REX_STORE_U32(r31.u32 + 192, r22.u32);
loc_8266CB94:
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266cba4
	if (ctx.cr6.eq) goto loc_8266CBA4;
	// stw r22,164(r31)
	REX_STORE_U32(r31.u32 + 164, r22.u32);
loc_8266CBA4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82665168
	ctx.lr = 0x8266CBAC;
	sub_82665168(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x8265d850
	ctx.lr = 0x8266CBB8;
	sub_8265D850(ctx, base);
loc_8266CBB8:
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266cbc8
	if (ctx.cr6.eq) goto loc_8266CBC8;
	// bl 0x82661120
	ctx.lr = 0x8266CBC8;
	sub_82661120(ctx, base);
loc_8266CBC8:
	// lwz r11,332(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// stw r22,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r22.u32);
	// b 0x8266cf20
	goto loc_8266CF20;
loc_8266CBD4:
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
	// bne 0x8266cbd4
	if (!ctx.cr0.eq) goto loc_8266CBD4;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// stw r11,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r11.u32);
loc_8266CBF8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8266cc40
	if (ctx.cr6.eq) goto loc_8266CC40;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,257
	ctx.r3.s64 = 257;
	// bl 0x82663958
	ctx.lr = 0x8266CC10;
	sub_82663958(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r3.u32);
	// beq 0x8266cb58
	if (ctx.cr0.eq) goto loc_8266CB58;
loc_8266CC1C:
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
	// bne 0x8266cc1c
	if (!ctx.cr0.eq) goto loc_8266CC1C;
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// stw r11,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r11.u32);
loc_8266CC40:
	// addic r11,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	ctx.r11.s64 = r31.s64 + -1;
	// stw r31,164(r31)
	REX_STORE_U32(r31.u32 + 164, r31.u32);
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r28,r10,14
	r28.u64 = ctx.r10.u64 | 14;
	// and. r29,r11,r28
	r29.u64 = ctx.r11.u64 & r28.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8266cb60
	if (ctx.cr0.lt) goto loc_8266CB60;
	// addi r27,r31,192
	r27.s64 = r31.s64 + 192;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82675a50
	ctx.lr = 0x8266CC70;
	sub_82675A50(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8266cb60
	if (ctx.cr0.lt) goto loc_8266CB60;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x8266ccec
	if (!ctx.cr6.eq) goto loc_8266CCEC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// bl 0x82675a58
	ctx.lr = 0x8266CC8C;
	sub_82675A58(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8266cb60
	if (ctx.cr0.lt) goto loc_8266CB60;
	// addi r30,r31,132
	r30.s64 = r31.s64 + 132;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827938a4
	ctx.lr = 0x8266CCA0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r11.u32);
	// li r6,256
	ctx.r6.s64 = 256;
	// stw r11,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r11.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// stw r10,432(r31)
	REX_STORE_U32(r31.u32 + 432, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r22,200(r31)
	REX_STORE_U32(r31.u32 + 200, r22.u32);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// stw r11,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r11.u32);
	// bl 0x826726c0
	ctx.lr = 0x8266CCD0;
	sub_826726C0(ctx, base);
	// lwz r11,428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 428);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// oris r11,r11,20480
	ctx.r11.u64 = ctx.r11.u64 | 1342177280;
	// stw r11,428(r31)
	REX_STORE_U32(r31.u32 + 428, ctx.r11.u32);
	// bl 0x8266bb58
	ctx.lr = 0x8266CCE4;
	sub_8266BB58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8266cf0c
	goto loc_8266CF0C;
loc_8266CCEC:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82661600
	ctx.lr = 0x8266CCFC;
	sub_82661600(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8266cb60
	if (!ctx.cr0.eq) goto loc_8266CB60;
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lhz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r11,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// bl 0x82670c20
	ctx.lr = 0x8266CD28;
	sub_82670C20(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8266cd38
	if (!ctx.cr0.eq) goto loc_8266CD38;
	// mr r29,r28
	r29.u64 = r28.u64;
	// b 0x8266cb60
	goto loc_8266CB60;
loc_8266CD38:
	// lwz r11,292(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 292);
	// addi r28,r31,132
	r28.s64 = r31.s64 + 132;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,292(r30)
	REX_STORE_U32(r30.u32 + 292, ctx.r11.u32);
	// bl 0x827938a4
	ctx.lr = 0x8266CD50;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,257
	ctx.r10.s64 = 257;
	// stb r11,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// sth r10,97(r1)
	REX_STORE_U16(ctx.r1.u32 + 97, ctx.r10.u16);
	// lhz r11,384(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 384);
	// sth r11,99(r1)
	REX_STORE_U16(ctx.r1.u32 + 99, ctx.r11.u16);
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// stb r11,101(r1)
	REX_STORE_U8(ctx.r1.u32 + 101, ctx.r11.u8);
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// lwz r10,352(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 352);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// ble cr6,0x8266cd8c
	if (!ctx.cr6.gt) goto loc_8266CD8C;
	// li r11,128
	ctx.r11.s64 = 128;
	// b 0x8266cd90
	goto loc_8266CD90;
loc_8266CD8C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8266CD90:
	// stb r11,102(r1)
	REX_STORE_U8(ctx.r1.u32 + 102, ctx.r11.u8);
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266cdac
	if (ctx.cr6.eq) goto loc_8266CDAC;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,103(r1)
	REX_STORE_U32(ctx.r1.u32 + 103, ctx.r11.u32);
	// b 0x8266cdb0
	goto loc_8266CDB0;
loc_8266CDAC:
	// stw r22,103(r1)
	REX_STORE_U32(ctx.r1.u32 + 103, r22.u32);
loc_8266CDB0:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,11
	ctx.r6.s64 = 11;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82675a60
	ctx.lr = 0x8266CDD0;
	sub_82675A60(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8266ce20
	if (ctx.cr0.lt) goto loc_8266CE20;
loc_8266CDD8:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r30
	ea = r30.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r30
	ea = r30.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8266cdd8
	if (!ctx.cr0.eq) goto loc_8266CDD8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,72(r30)
	REX_STORE_U32(r30.u32 + 72, ctx.r11.u32);
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266ced0
	if (ctx.cr6.eq) goto loc_8266CED0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82661c08
	ctx.lr = 0x8266CE18;
	sub_82661C08(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8266ced0
	if (ctx.cr0.eq) goto loc_8266CED0;
loc_8266CE20:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266cea0
	if (ctx.cr6.eq) goto loc_8266CEA0;
loc_8266CE2C:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r30
	ea = r30.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r30
	ea = r30.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8266ce2c
	if (!ctx.cr0.eq) goto loc_8266CE2C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8266ce58
	if (!ctx.cr6.eq) goto loc_8266CE58;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82670cd8
	ctx.lr = 0x8266CE58;
	sub_82670CD8(ctx, base);
loc_8266CE58:
	// stw r22,72(r30)
	REX_STORE_U32(r30.u32 + 72, r22.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82675b10
	ctx.lr = 0x8266CE64;
	sub_82675B10(ctx, base);
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r22.u32);
	// lwz r4,216(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8266cea0
	if (ctx.cr6.eq) goto loc_8266CEA0;
loc_8266CE74:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r4
	ea = ctx.r4.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r4
	ea = ctx.r4.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8266ce74
	if (!ctx.cr0.eq) goto loc_8266CE74;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8266cea0
	if (!ctx.cr6.eq) goto loc_8266CEA0;
	// lwz r3,4(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8265d850
	ctx.lr = 0x8266CEA0;
	sub_8265D850(ctx, base);
loc_8266CEA0:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r30
	ea = r30.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r30
	ea = r30.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8266cea0
	if (!ctx.cr0.eq) goto loc_8266CEA0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8266cb6c
	if (!ctx.cr6.eq) goto loc_8266CB6C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82670cd8
	ctx.lr = 0x8266CECC;
	sub_82670CD8(ctx, base);
	// b 0x8266cb6c
	goto loc_8266CB6C;
loc_8266CED0:
	// lwz r9,220(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 220);
	// addi r10,r31,240
	ctx.r10.s64 = r31.s64 + 240;
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r9,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r9.u32);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lwz r10,244(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 244);
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r10,244(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 244);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r11.u32);
	// lwz r11,428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 428);
	// oris r11,r11,12288
	ctx.r11.u64 = ctx.r11.u64 | 805306368;
	// stw r11,428(r31)
	REX_STORE_U32(r31.u32 + 428, ctx.r11.u32);
loc_8266CF0C:
	// bl 0x827938b4
	ctx.lr = 0x8266CF10;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,332(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r10,164(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 164);
	// mr r29,r22
	r29.u64 = r22.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8266CF20:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_826871A8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// bge cr6,0x826871b8
	if (!ctx.cr6.lt) goto loc_826871B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_826871B8:
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826878F8) {
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
	// lhz r10,76(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 76);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,78(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 78);
	// ori r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 8192;
	// rlwinm. r9,r11,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r10,76(r3)
	REX_STORE_U16(ctx.r3.u32 + 76, ctx.r10.u16);
	// bne 0x8268792c
	if (!ctx.cr0.eq) goto loc_8268792C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82687968
	goto loc_82687968;
loc_8268792C:
	// lbz r9,79(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 79);
	// andi. r11,r11,191
	ctx.r11.u64 = ctx.r11.u64 & 191;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
	// stb r11,78(r31)
	REX_STORE_U8(r31.u32 + 78, ctx.r11.u8);
	// rlwinm. r10,r10,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r9,79(r31)
	REX_STORE_U8(r31.u32 + 79, ctx.r9.u8);
	// bne 0x82687960
	if (!ctx.cr0.eq) goto loc_82687960;
	// lhz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 76);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// sth r11,76(r31)
	REX_STORE_U16(r31.u32 + 76, ctx.r11.u16);
	// bl 0x82685250
	ctx.lr = 0x82687960;
	sub_82685250(ctx, base);
loc_82687960:
	// lbz r11,78(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 78);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82687968:
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

DEFINE_REX_FUNC(sub_8268B680) {
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
	ctx.lr = 0x8268B688;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// ori r4,r4,32785
	ctx.r4.u64 = ctx.r4.u64 | 32785;
	// li r3,80
	ctx.r3.s64 = 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r26,r27
	r26.u64 = r27.u64;
	// bl 0x823f02b8
	ctx.lr = 0x8268B6B4;
	sub_823F02B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8268b73c
	if (ctx.cr0.eq) goto loc_8268B73C;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// stw r29,32(r31)
	REX_STORE_U32(r31.u32 + 32, r29.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// addi r11,r11,22272
	ctx.r11.s64 = ctx.r11.s64 + 22272;
	// stw r27,60(r31)
	REX_STORE_U32(r31.u32 + 60, r27.u32);
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r27,64(r31)
	REX_STORE_U32(r31.u32 + 64, r27.u32);
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
	// bne cr6,0x8268b714
	if (!ctx.cr6.eq) goto loc_8268B714;
	// lwz r4,72(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 72);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8268b71c
	if (ctx.cr6.eq) goto loc_8268B71C;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268B710;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8268b71c
	goto loc_8268B71C;
loc_8268B714:
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r11,60(r31)
	REX_STORE_U8(r31.u32 + 60, ctx.r11.u8);
loc_8268B71C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x823f02b8
	ctx.lr = 0x8268B730;
	sub_823F02B8(ctx, base);
	// stw r3,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8268b750
	if (!ctx.cr0.eq) goto loc_8268B750;
loc_8268B73C:
	// lis r26,-32761
	r26.s64 = -2147024896;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r26,r26,14
	r26.u64 = r26.u64 | 14;
	// bl 0x8268b298
	ctx.lr = 0x8268B74C;
	sub_8268B298(ctx, base);
	// mr r31,r27
	r31.u64 = r27.u64;
loc_8268B750:
	// stw r31,0(r25)
	REX_STORE_U32(r25.u32 + 0, r31.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_826927A0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-5956(r10)
	REX_STORE_U32(ctx.r10.u32 + -5956, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82692D30) {
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
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c9c
	ctx.lr = 0x82692D38;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x826a2ca8
	ctx.lr = 0x82692D40;
	// stwu r1,-1536(r1)
	ea = -1536 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f28,f0
	f28.f64 = double(float(ctx.f0.f64));
	// fdivs f0,f28,f1
	ctx.f0.f64 = double(float(f28.f64 / ctx.f1.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r31,r11,1
	r31.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r31,80
	ctx.cr6.compare<int32_t>(r31.s32, 80, ctx.xer);
	// ble cr6,0x82692d88
	if (!ctx.cr6.gt) goto loc_82692D88;
	// li r31,80
	r31.s64 = 80;
loc_82692D88:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rlwinm r28,r31,2,0,29
	r28.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// rlwinm r9,r31,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lfs f31,3716(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3716);
	f31.f64 = double(temp.f32);
	// add r26,r28,r11
	r26.u64 = r28.u64 + ctx.r11.u64;
	// add r30,r9,r10
	r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x82692e04
	if (!ctx.cr6.gt) goto loc_82692E04;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r29,r30
	r29.u64 = r30.u64;
	// subf r25,r30,r11
	r25.u64 = ctx.r11.u64 - r30.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// subf r24,r30,r26
	r24.u64 = r26.u64 - r30.u64;
	// mr r27,r31
	r27.u64 = r31.u64;
	// lfs f30,3720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	f30.f64 = double(temp.f32);
loc_82692DCC:
	// fadds f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 + f30.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r21,84(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r22
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82695b58
	ctx.lr = 0x82692DE8;
	sub_82695B58(ctx, base);
	// stfsx f1,r25,r29
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r25.u32 + r29.u32, temp.u32);
	// stw r21,0(r29)
	REX_STORE_U32(r29.u32 + 0, r21.u32);
	// stfsx f31,r24,r29
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r24.u32 + r29.u32, temp.u32);
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// fadds f31,f31,f29
	f31.f64 = double(float(f31.f64 + f29.f64));
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x82692dcc
	if (!ctx.cr0.eq) goto loc_82692DCC;
loc_82692E04:
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + r22.u64;
	// lfs f1,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82695b58
	ctx.lr = 0x82692E14;
	sub_82695B58(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,1
	ctx.r4.s64 = r31.s64 + 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// stfsx f1,r28,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r28.u32 + ctx.r11.u32, temp.u32);
	// stwx r23,r28,r30
	REX_STORE_U32(r28.u32 + r30.u32, r23.u32);
	// stfsx f28,r28,r26
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r28.u32 + r26.u32, temp.u32);
	// ble cr6,0x82692ee4
	if (!ctx.cr6.gt) goto loc_82692EE4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r7,r30,4
	ctx.r7.s64 = r30.s64 + 4;
	// subf r3,r30,r26
	ctx.r3.u64 = r26.u64 - r30.u64;
	// lfd f11,3728(r11)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// lfs f12,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f12.f64 = double(temp.f32);
loc_82692E4C:
	// lwz r11,-4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + -4);
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// lfsx f0,r7,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lfsx f10,r10,r3
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f10.f64 = double(temp.f32);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fsubs f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// bge cr6,0x82692ed4
	if (!ctx.cr6.lt) goto loc_82692ED4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + r22.u64;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
loc_82692E94:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fadd f10,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f0.f64 + ctx.f11.f64;
	// add r31,r8,r26
	r31.u64 = ctx.r8.u64 + r26.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// lfs f9,-4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lfs f8,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
	// fmuls f10,f9,f7
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmadds f10,f10,f13,f8
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f8.f64)));
	// stfsu f10,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// blt cr6,0x82692e94
	if (ctx.cr6.lt) goto loc_82692E94;
loc_82692ED4:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82692e4c
	if (ctx.cr6.lt) goto loc_82692E4C;
loc_82692EE4:
	// addi r1,r1,1536
	ctx.r1.s64 = ctx.r1.s64 + 1536;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x826a2cf4
	ctx.lr = 0x82692EF0;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_8269E56C) {
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8269e1e0
	ctx.lr = 0x8269E58C;
	sub_8269E1E0(ctx, base);
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

DEFINE_REX_FUNC(sub_8269F338) {
	REX_FUNC_PROLOGUE();
	// li r5,64
	ctx.r5.s64 = 64;
	// b 0x8269f1d8
	sub_8269F1D8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8269FD10) {
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
	// bl 0x826a3990
	ctx.lr = 0x8269FD20;
	sub_826A3990(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8269fd38
	if (ctx.cr0.eq) goto loc_8269FD38;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8269fd38
	if (ctx.cr6.eq) goto loc_8269FD38;
	// bl 0x823ed360
	ctx.lr = 0x8269FD38;
	sub_823ED360(ctx, base);
loc_8269FD38:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826b4158
	ctx.lr = 0x8269FD40;
	sub_826B4158(ctx, base);
}

DEFINE_REX_FUNC(sub_826A0E40) {
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
	ctx.lr = 0x826A0E48;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826a0e90
	if (ctx.cr6.eq) goto loc_826A0E90;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x826a0e90
	if (ctx.cr6.eq) goto loc_826A0E90;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826a0e9c
	if (!ctx.cr6.eq) goto loc_826A0E9C;
loc_826A0E80:
	// bl 0x826a33d0
	ctx.lr = 0x826A0E84;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
loc_826A0E88:
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826A0E90;
	sub_8269CB20(ctx, base);
loc_826A0E90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A0E94:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
loc_826A0E9C:
	// li r31,-1
	r31.s64 = -1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x826a0eb8
	if (ctx.cr6.eq) goto loc_826A0EB8;
	// divwu r11,r31,r25
	ctx.r11.u64 = uint32_t(r25.u32 ? r31.u32 / r25.u32 : 0);
	// twllei r25,0
	if (r25.s32 == 0 || r25.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x826a0ee8
	if (!ctx.cr6.gt) goto loc_826A0EE8;
loc_826A0EB8:
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(r21.s32, -1, ctx.xer);
	// beq cr6,0x826a0ed0
	if (ctx.cr6.eq) goto loc_826A0ED0;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x826a2e60
	ctx.lr = 0x826A0ED0;
	sub_826A2E60(ctx, base);
loc_826A0ED0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x826a0e80
	if (ctx.cr6.eq) goto loc_826A0E80;
	// divwu r11,r31,r25
	ctx.r11.u64 = uint32_t(r25.u32 ? r31.u32 / r25.u32 : 0);
	// twllei r25,0
	if (r25.s32 == 0 || r25.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826a0e80
	if (ctx.cr6.gt) goto loc_826A0E80;
loc_826A0EE8:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// mullw r23,r25,r22
	r23.s64 = int64_t(r25.s32) * int64_t(r22.s32);
	// andi. r11,r11,268
	ctx.r11.u64 = ctx.r11.u64 & 268;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r23
	r31.u64 = r23.u64;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a0f08
	if (ctx.cr0.eq) goto loc_826A0F08;
	// lwz r26,24(r29)
	r26.u64 = REX_LOAD_U32(r29.u32 + 24);
	// b 0x826a0f0c
	goto loc_826A0F0C;
loc_826A0F08:
	// li r26,4096
	r26.s64 = 4096;
loc_826A0F0C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x826a1054
	if (ctx.cr6.eq) goto loc_826A1054;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r24,r11,65535
	r24.u64 = ctx.r11.u64 | 65535;
loc_826A0F1C:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// andi. r10,r11,268
	ctx.r10.u64 = ctx.r11.u64 & 268;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826a0f8c
	if (ctx.cr0.eq) goto loc_826A0F8C;
	// lwz r30,4(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x826a0f8c
	if (ctx.cr6.eq) goto loc_826A0F8C;
	// blt cr6,0x826a1080
	if (ctx.cr6.lt) goto loc_826A1080;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bge cr6,0x826a0f48
	if (!ctx.cr6.lt) goto loc_826A0F48;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_826A0F48:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// bgt cr6,0x826a105c
	if (ctx.cr6.gt) goto loc_826A105C;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269e5a8
	ctx.lr = 0x826A0F64;
	sub_8269E5A8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// subf r31,r30,r31
	r31.u64 = r31.u64 - r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r28,r30,r28
	r28.u64 = r30.u64 + r28.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// subf r27,r30,r27
	r27.u64 = r27.u64 - r30.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// b 0x826a104c
	goto loc_826A104C;
loc_826A0F8C:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(r31.u32, r26.u32, ctx.xer);
	// blt cr6,0x826a1020
	if (ctx.cr6.lt) goto loc_826A1020;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x826a0fd4
	if (ctx.cr6.eq) goto loc_826A0FD4;
	// cmplw cr6,r31,r24
	ctx.cr6.compare<uint32_t>(r31.u32, r24.u32, ctx.xer);
	// twllei r26,0
	if (r26.s32 == 0 || r26.u32 < 0u) ppc_trap(ctx, base, 0);
	// ble cr6,0x826a0fc0
	if (!ctx.cr6.gt) goto loc_826A0FC0;
	// divwu r10,r24,r26
	ctx.r10.u64 = uint32_t(r26.u32 ? r24.u32 / r26.u32 : 0);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// mullw r10,r10,r26
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r26.s32);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r30,r11,r24
	r30.u64 = r24.u64 - ctx.r11.u64;
	// b 0x826a0fe4
	goto loc_826A0FE4;
loc_826A0FC0:
	// divwu r11,r31,r26
	ctx.r11.u64 = uint32_t(r26.u32 ? r31.u32 / r26.u32 : 0);
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r26.s32);
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// subf r30,r11,r31
	r30.u64 = r31.u64 - ctx.r11.u64;
	// b 0x826a0fe4
	goto loc_826A0FE4;
loc_826A0FD4:
	// cmplw cr6,r31,r24
	ctx.cr6.compare<uint32_t>(r31.u32, r24.u32, ctx.xer);
	// mr r30,r24
	r30.u64 = r24.u64;
	// bgt cr6,0x826a0fe4
	if (ctx.cr6.gt) goto loc_826A0FE4;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_826A0FE4:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// bgt cr6,0x826a105c
	if (ctx.cr6.gt) goto loc_826A105C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a3320
	ctx.lr = 0x826A0FF4;
	sub_826A3320(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x826ac748
	ctx.lr = 0x826A1000;
	sub_826AC748(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a1098
	if (ctx.cr0.eq) goto loc_826A1098;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x826a10b4
	if (ctx.cr6.eq) goto loc_826A10B4;
	// subf r31,r3,r31
	r31.u64 = r31.u64 - ctx.r3.u64;
	// add r28,r3,r28
	r28.u64 = ctx.r3.u64 + r28.u64;
	// subf r27,r3,r27
	r27.u64 = r27.u64 - ctx.r3.u64;
	// b 0x826a104c
	goto loc_826A104C;
loc_826A1020:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a91b0
	ctx.lr = 0x826A1028;
	sub_826A91B0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x826a10c0
	if (ctx.cr6.eq) goto loc_826A10C0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x826a105c
	if (ctx.cr6.eq) goto loc_826A105C;
	// stb r3,0(r28)
	REX_STORE_U8(r28.u32 + 0, ctx.r3.u8);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// lwz r26,24(r29)
	r26.u64 = REX_LOAD_U32(r29.u32 + 24);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
loc_826A104C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x826a0f1c
	if (!ctx.cr6.eq) goto loc_826A0F1C;
loc_826A1054:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// b 0x826a0e94
	goto loc_826A0E94;
loc_826A105C:
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(r21.s32, -1, ctx.xer);
	// beq cr6,0x826a1074
	if (ctx.cr6.eq) goto loc_826A1074;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x826a2e60
	ctx.lr = 0x826A1074;
	sub_826A2E60(ctx, base);
loc_826A1074:
	// bl 0x826a33d0
	ctx.lr = 0x826A1078;
	sub_826A33D0(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// b 0x826a0e88
	goto loc_826A0E88;
loc_826A1080:
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// subf r10,r31,r23
	ctx.r10.u64 = r23.u64 - r31.u64;
	// stw r11,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r11.u32);
	// divwu r3,r10,r25
	ctx.r3.u64 = uint32_t(r25.u32 ? ctx.r10.u32 / r25.u32 : 0);
loc_826A1090:
	// twllei r25,0
	if (r25.s32 == 0 || r25.u32 < 0u) ppc_trap(ctx, base, 0);
	// b 0x826a0e94
	goto loc_826A0E94;
loc_826A1098:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_826A10A0:
	// subf r10,r31,r23
	ctx.r10.u64 = r23.u64 - r31.u64;
	// stw r11,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r11.u32);
	// twllei r25,0
	if (r25.s32 == 0 || r25.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r3,r10,r25
	ctx.r3.u64 = uint32_t(r25.u32 ? ctx.r10.u32 / r25.u32 : 0);
	// b 0x826a0e94
	goto loc_826A0E94;
loc_826A10B4:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// b 0x826a10a0
	goto loc_826A10A0;
loc_826A10C0:
	// subf r11,r31,r23
	ctx.r11.u64 = r23.u64 - r31.u64;
	// divwu r3,r11,r25
	ctx.r3.u64 = uint32_t(r25.u32 ? ctx.r11.u32 / r25.u32 : 0);
	// b 0x826a1090
	goto loc_826A1090;
}

DEFINE_REX_FUNC(__restvmx_122) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
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

DEFINE_REX_FUNC(sub_826A4E50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-16377
	ctx.r11.s64 = -1073283072;
	// stfd f1,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f1.u64);
	// li r3,248
	ctx.r3.s64 = 248;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// ori r30,r11,65279
	r30.u64 = ctx.r11.u64 | 65279;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826adf00
	ctx.lr = 0x826A4E88;
	sub_826ADF00(ctx, base);
	// lhz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 144);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,17,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r11,32752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32752, ctx.xer);
	// bne cr6,0x826a4efc
	if (!ctx.cr6.eq) goto loc_826A4EFC;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x826ab0e8
	ctx.lr = 0x826A4EA4;
	sub_826AB0E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x826a4ee8
	if (!ctx.cr0.gt) goto loc_826A4EE8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x826a4ed0
	if (!ctx.cr6.gt) goto loc_826A4ED0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x826a4ee8
	if (!ctx.cr6.eq) goto loc_826A4EE8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x826adc30
	ctx.lr = 0x826A4ECC;
	sub_826ADC30(ctx, base);
	// b 0x826a4ff4
	goto loc_826A4FF4;
loc_826A4ED0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826adf00
	ctx.lr = 0x826A4EDC;
	sub_826ADF00(ctx, base);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lfd f1,26768(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 26768);
	// b 0x826a4ff4
	goto loc_826A4FF4;
loc_826A4EE8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,8
	ctx.r3.s64 = 8;
	// lfd f0,3728(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// fadd f2,f30,f0
	ctx.f2.f64 = f30.f64 + ctx.f0.f64;
	// b 0x826a4fe4
	goto loc_826A4FE4;
loc_826A4EFC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,-3744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(f30.f64, ctx.f0.f64);
	// bne cr6,0x826a4f24
	if (!ctx.cr6.eq) goto loc_826A4F24;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826adf00
	ctx.lr = 0x826A4F18;
	sub_826ADF00(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,3728(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// b 0x826a4ff4
	goto loc_826A4FF4;
loc_826A4F24:
	// fabs f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = f30.u64 & ~0x8000000000000000;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,19144
	ctx.r11.s64 = ctx.r11.s64 + 19144;
	// lfd f0,-8(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -8);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x826a4f94
	if (!ctx.cr6.gt) goto loc_826A4F94;
	// lfd f0,0(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x826a4f58
	if (!ctx.cr6.gt) goto loc_826A4F58;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// li r3,17
	ctx.r3.s64 = 17;
	// lfd f2,26768(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 26768);
	// b 0x826a4fe4
	goto loc_826A4FE4;
loc_826A4F58:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826a0490
	ctx.lr = 0x826A4F60;
	sub_826A0490(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cmpwi cr6,r4,1024
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1024, ctx.xer);
	// ble cr6,0x826a4f88
	if (!ctx.cr6.gt) goto loc_826A4F88;
	// addi r4,r4,-1536
	ctx.r4.s64 = ctx.r4.s64 + -1536;
	// bl 0x826ab070
	ctx.lr = 0x826A4F7C;
	sub_826AB070(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// li r3,17
	ctx.r3.s64 = 17;
	// b 0x826a4fe4
	goto loc_826A4FE4;
loc_826A4F88:
	// bl 0x826ab070
	ctx.lr = 0x826A4F8C;
	sub_826AB070(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// b 0x826a4fc0
	goto loc_826A4FC0;
loc_826A4F94:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826a0490
	ctx.lr = 0x826A4F9C;
	sub_826A0490(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826ab070
	ctx.lr = 0x826A4FA4;
	sub_826AB070(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f0,3728(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// fdiv f0,f0,f1
	ctx.f0.f64 = ctx.f0.f64 / ctx.f1.f64;
	// lfd f13,32424(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 32424);
	// fadd f0,f0,f1
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fmul f31,f0,f13
	f31.f64 = ctx.f0.f64 * ctx.f13.f64;
loc_826A4FC0:
	// rlwinm. r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a4fdc
	if (ctx.cr0.eq) goto loc_826A4FDC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826adf00
	ctx.lr = 0x826A4FD4;
	sub_826ADF00(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// b 0x826a4ff4
	goto loc_826A4FF4;
loc_826A4FDC:
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// li r3,16
	ctx.r3.s64 = 16;
loc_826A4FE4:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x826add38
	ctx.lr = 0x826A4FF4;
	sub_826ADD38(ctx, base);
loc_826A4FF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(sub_826B0908) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826B0910;
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,84(r31)
	REX_STORE_U32(r31.u32 + 84, r28.u32);
	// bl 0x826a9928
	ctx.lr = 0x826B0928;
	sub_826A9928(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r30,r11,31540
	r30.s64 = ctx.r11.s64 + 31540;
	// addi r10,r10,31544
	ctx.r10.s64 = ctx.r10.s64 + 31544;
loc_826B093C:
	// stw r28,80(r31)
	REX_STORE_U32(r31.u32 + 80, r28.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x826b09cc
	if (!ctx.cr6.lt) goto loc_826B09CC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r29,r28,2,0,29
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r29,r11
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826b09c0
	if (ctx.cr6.eq) goto loc_826B09C0;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826b09c0
	if (ctx.cr0.eq) goto loc_826B09C0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269e190
	ctx.lr = 0x826B097C;
	sub_8269E190(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwzx r3,r29,r11
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826b09b4
	if (ctx.cr0.eq) goto loc_826B09B4;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b09b4
	if (ctx.cr6.eq) goto loc_826B09B4;
	// bl 0x8269ee60
	ctx.lr = 0x826B09A8;
	sub_8269EE60(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
loc_826B09B4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = r31.s64 + 128;
	// bl 0x826b0a34
	ctx.lr = 0x826B09C0;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_826B0A34(ctx, base);
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
loc_826B09C0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x826b093c
	goto loc_826B093C;
loc_826B09CC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = r31.s64 + 128;
	// bl 0x826b09e4
	ctx.lr = 0x826B09D8;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_826B09E4(ctx, base);
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826B8538) {
	REX_FUNC_PROLOGUE();
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x826b8358
	sub_826B8358(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826B8718) {
	REX_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32791
	ctx.r4.u64 = ctx.r4.u64 | 32791;
	// b 0x823f02b8
	sub_823F02B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826B8D30) {
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
	ctx.lr = 0x826B8D38;
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B8D5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r8,76(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826B8D70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,52(r29)
	REX_STORE_U32(r29.u32 + 52, r30.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r29,672
	r28.s64 = r29.s64 + 672;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826bff00
	ctx.lr = 0x826B8D88;
	sub_826BFF00(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r27,0
	r27.s64 = 0;
	// bne cr6,0x826b8e00
	if (!ctx.cr6.eq) goto loc_826B8E00;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r29,592(r11)
	REX_STORE_U32(ctx.r11.u32 + 592, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r27,88(r31)
	REX_STORE_U32(r31.u32 + 88, r27.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B8DB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826b8df0
	if (ctx.cr6.eq) goto loc_826B8DF0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B8DD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,0
	ctx.r9.s64 = ctx.r3.s64 + 0;
	// lwz r8,88(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 88);
	// addic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 & ctx.r8.u64;
	// stw r4,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r4.u32);
loc_826B8DF0:
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x826bff90
	ctx.lr = 0x826B8DFC;
	sub_826BFF90(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
loc_826B8E00:
	// addi r11,r31,100
	ctx.r11.s64 = r31.s64 + 100;
	// stw r27,96(r31)
	REX_STORE_U32(r31.u32 + 96, r27.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r27.u32);
	// stw r27,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r27.u32);
	// stw r27,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r27.u32);
	// stw r27,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r27.u32);
	// bne cr6,0x826b8ee8
	if (!ctx.cr6.eq) goto loc_826B8EE8;
	// lwz r11,660(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 660);
	// addi r9,r31,96
	ctx.r9.s64 = r31.s64 + 96;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826bffc0
	ctx.lr = 0x826B8E4C;
	sub_826BFFC0(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826b8ee8
	if (!ctx.cr6.eq) goto loc_826B8EE8;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// ble cr6,0x826b8ee8
	if (!ctx.cr6.gt) goto loc_826B8EE8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826bfc68
	ctx.lr = 0x826B8E6C;
	sub_826BFC68(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826b8ee8
	if (!ctx.cr6.eq) goto loc_826B8EE8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B8E90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,676(r29)
	REX_STORE_U32(r29.u32 + 676, r27.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r27,664(r29)
	REX_STORE_U32(r29.u32 + 664, r27.u32);
	// stw r27,668(r29)
	REX_STORE_U32(r29.u32 + 668, r27.u32);
	// stw r27,0(r28)
	REX_STORE_U32(r28.u32 + 0, r27.u32);
	// bl 0x826bff00
	ctx.lr = 0x826B8EA8;
	sub_826BFF00(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826b8ee8
	if (!ctx.cr6.eq) goto loc_826B8EE8;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r9,r31,96
	ctx.r9.s64 = r31.s64 + 96;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,63
	ctx.r7.s64 = 63;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,592(r11)
	REX_STORE_U32(ctx.r11.u32 + 592, r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,660(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 660);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x826bffc0
	ctx.lr = 0x826B8EE4;
	sub_826BFFC0(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
loc_826B8EE8:
	// sth r27,80(r31)
	REX_STORE_U16(r31.u32 + 80, r27.u16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826b8fe4
	if (!ctx.cr6.eq) goto loc_826B8FE4;
	// lwz r11,124(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 124);
	// addi r30,r29,124
	r30.s64 = r29.s64 + 124;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B8F10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r9,124(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 124);
	// lwz r8,40(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826B8F28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 100);
	// bl 0x826b6388
	ctx.lr = 0x826B8F34;
	sub_826B6388(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 96);
	// bl 0x826b6390
	ctx.lr = 0x826B8F40;
	sub_826B6390(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,108(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 108);
	// bl 0x822adae8
	ctx.lr = 0x826B8F4C;
	sub_822ADAE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r7,108(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r6,96(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 96);
	// mullw r4,r7,r6
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// bl 0x826b6398
	ctx.lr = 0x826B8F60;
	sub_826B6398(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,124(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 124);
	// lwz r11,44(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B8F78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826b63a0
	ctx.lr = 0x826B8F84;
	sub_826B63A0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826b63b0
	ctx.lr = 0x826B8F94;
	sub_826B63B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b63a8
	ctx.lr = 0x826B8FA0;
	sub_826B63A8(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x826bfc18
	ctx.lr = 0x826B8FAC;
	sub_826BFC18(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826b8fe4
	if (!ctx.cr6.eq) goto loc_826B8FE4;
	// lhz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b8fcc
	if (!ctx.cr6.eq) goto loc_826B8FCC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
loc_826B8FCC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826b8fe4
	if (!ctx.cr6.eq) goto loc_826B8FE4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x826bfc40
	ctx.lr = 0x826B8FE0;
	sub_826BFC40(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
loc_826B8FE4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b9014
	if (ctx.cr6.eq) goto loc_826B9014;
	// cmplwi cr6,r3,11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 11, ctx.xer);
	// ble cr6,0x826b9008
	if (!ctx.cr6.gt) goto loc_826B9008;
	// cmplwi cr6,r3,14
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 14, ctx.xer);
	// bgt cr6,0x826b9008
	if (ctx.cr6.gt) goto loc_826B9008;
	// lis r11,-16371
	ctx.r11.s64 = -1072889856;
	// ori r11,r11,10416
	ctx.r11.u64 = ctx.r11.u64 | 10416;
	// b 0x826b9018
	goto loc_826B9018;
loc_826B9008:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// b 0x826b9018
	goto loc_826B9018;
loc_826B9014:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_826B9018:
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x826b9038
	goto loc_826B9038;
loc_826B9038:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826D3470) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826D3478;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,28(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r30,0
	r30.s64 = 0;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lhz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d3574
	if (ctx.cr6.eq) goto loc_826D3574;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// bl 0x826c6cf0
	ctx.lr = 0x826D34A8;
	sub_826C6CF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d357c
	if (ctx.cr6.lt) goto loc_826D357C;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826d34f0
	if (ctx.cr6.eq) goto loc_826D34F0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826d34f0
	if (ctx.cr6.eq) goto loc_826D34F0;
	// lwz r11,48(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x826d3574
	if (!ctx.cr6.eq) goto loc_826D3574;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x826d3500
	if (ctx.cr6.eq) goto loc_826D3500;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d3514
	if (ctx.cr6.eq) goto loc_826D3514;
	// addi r30,r11,-1
	r30.s64 = ctx.r11.s64 + -1;
	// b 0x826d3514
	goto loc_826D3514;
loc_826D34F0:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,188
	ctx.r3.u64 = ctx.r3.u64 | 188;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_826D3500:
	// lwz r9,72(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x826d3514
	if (!ctx.cr6.lt) goto loc_826D3514;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
loc_826D3514:
	// lwz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x826d3534
	if (!ctx.cr6.gt) goto loc_826D3534;
loc_826D3524:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_826D3534:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x826d3524
	if (ctx.cr6.gt) goto loc_826D3524;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// ld r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 16);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r9,0(r28)
	REX_STORE_U64(r28.u32 + 0, ctx.r9.u64);
	// stw r30,220(r31)
	REX_STORE_U32(r31.u32 + 220, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_826D3574:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,187
	ctx.r3.u64 = ctx.r3.u64 | 187;
loc_826D357C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826DCC08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826DCC10;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r29,0
	r29.s64 = 0;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826dcc3c
	if (!ctx.cr6.eq) goto loc_826DCC3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_826DCC3C:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826dcc94
	if (ctx.cr6.eq) goto loc_826DCC94;
loc_826DCC4C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,29
	ctx.r4.s64 = 29;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r29,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, r29.u32);
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// bl 0x826c68d8
	ctx.lr = 0x826DCC78;
	sub_826C68D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dccc0
	if (ctx.cr6.lt) goto loc_826DCCC0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826dcc4c
	if (!ctx.cr6.eq) goto loc_826DCC4C;
loc_826DCC94:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x826c68d8
	ctx.lr = 0x826DCCA4;
	sub_826C68D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dccc0
	if (ctx.cr6.lt) goto loc_826DCCC0;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_826DCCC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826DEBA0) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x826de420
	ctx.lr = 0x826DEBC0;
	sub_826DE420(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826de850
	ctx.lr = 0x826DEBC8;
	sub_826DE850(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826debec
	if (ctx.cr6.eq) goto loc_826DEBEC;
	// li r4,30
	ctx.r4.s64 = 30;
	// lwz r3,48(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x826c68d8
	ctx.lr = 0x826DEBE8;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826DEBEC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826dec04
	if (ctx.cr6.eq) goto loc_826DEC04;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x826c68d8
	ctx.lr = 0x826DEC04;
	sub_826C68D8(ctx, base);
loc_826DEC04:
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

DEFINE_REX_FUNC(sub_826E0120) {
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
	ctx.lr = 0x826E0128;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,44(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r28,0
	r28.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// ld r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 40);
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// ble cr6,0x826e0160
	if (!ctx.cr6.gt) goto loc_826E0160;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// b 0x826e025c
	goto loc_826E025C;
loc_826E0160:
	// lwz r9,16(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826e0184
	if (ctx.cr6.eq) goto loc_826E0184;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_826E0184:
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bge cr6,0x826e01a8
	if (!ctx.cr6.lt) goto loc_826E01A8;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,212
	ctx.r3.u64 = ctx.r3.u64 | 212;
	// b 0x826e025c
	goto loc_826E025C;
loc_826E01A8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 48);
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x826c6880
	ctx.lr = 0x826E01BC;
	sub_826C6880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e0264
	if (ctx.cr6.lt) goto loc_826E0264;
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826E01D8:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x826e01d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826E01D8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,31
	ctx.r4.s64 = 31;
	// std r31,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r31.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, r30.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r9,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, r28.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r11,44
	ctx.r6.s64 = ctx.r11.s64 + 44;
	// lwz r5,28(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r3,48(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 48);
	// bl 0x826c6880
	ctx.lr = 0x826E021C;
	sub_826C6880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e0264
	if (ctx.cr6.lt) goto loc_826E0264;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826de248
	ctx.lr = 0x826E0230;
	sub_826DE248(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e0264
	if (ctx.cr6.lt) goto loc_826E0264;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826dfca0
	ctx.lr = 0x826E024C;
	sub_826DFCA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e0264
	if (ctx.cr6.lt) goto loc_826E0264;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
loc_826E025C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x826e027c
	if (!ctx.cr6.lt) goto loc_826E027C;
loc_826E0264:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 48);
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x826c68d8
	ctx.lr = 0x826E0274;
	sub_826C68D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e0264
	if (ctx.cr6.lt) goto loc_826E0264;
loc_826E027C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826ED618) {
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
	ctx.lr = 0x826ED620;
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
	// beq cr6,0x826ed82c
	if (ctx.cr6.eq) goto loc_826ED82C;
	// li r3,4100
	ctx.r3.s64 = 4100;
	// bl 0x826e07e0
	ctx.lr = 0x826ED654;
	sub_826E07E0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826ed66c
	if (!ctx.cr6.eq) goto loc_826ED66C;
loc_826ED660:
	// lis r25,-32761
	r25.s64 = -2147024896;
	// ori r25,r25,14
	r25.u64 = r25.u64 | 14;
	// b 0x826ed82c
	goto loc_826ED82C;
loc_826ED66C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r23,r26
	r23.u64 = r26.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// addi r29,r26,-4
	r29.s64 = r26.s64 + -4;
	// lis r27,128
	r27.s64 = 8388608;
	// addi r28,r11,-29900
	r28.s64 = ctx.r11.s64 + -29900;
loc_826ED684:
	// rlwinm r4,r31,13,0,18
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 13) & 0xFFFFE000;
	// cmpw cr6,r4,r27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r27.s32, ctx.xer);
	// bne cr6,0x826ed698
	if (!ctx.cr6.eq) goto loc_826ED698;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// b 0x826ed6a4
	goto loc_826ED6A4;
loc_826ED698:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826ed080
	ctx.lr = 0x826ED6A0;
	sub_826ED080(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_826ED6A4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ed468
	ctx.lr = 0x826ED6AC;
	sub_826ED468(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stwu r3,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r29.u32 = ea;
	// cmpwi cr6,r31,1024
	ctx.cr6.compare<int32_t>(r31.s32, 1024, ctx.xer);
	// ble cr6,0x826ed684
	if (!ctx.cr6.gt) goto loc_826ED684;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lis r10,320
	ctx.r10.s64 = 20971520;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826ed6d4
	if (ctx.cr6.lt) goto loc_826ED6D4;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
loc_826ED6D4:
	// li r3,4100
	ctx.r3.s64 = 4100;
	// bl 0x826e07e0
	ctx.lr = 0x826ED6DC;
	sub_826E07E0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826ed660
	if (ctx.cr6.eq) goto loc_826ED660;
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
loc_826ED6FC:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// subf. r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x826ed710
	if (ctx.cr0.gt) goto loc_826ED710;
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_826ED710:
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x826ed71c
	if (!ctx.cr6.gt) goto loc_826ED71C;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
loc_826ED71C:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x826ed6fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826ED6FC;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bgt cr6,0x826ed730
	if (ctx.cr6.gt) goto loc_826ED730;
	// li r7,2
	ctx.r7.s64 = 2;
loc_826ED730:
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x826ed750
	if (!ctx.cr6.gt) goto loc_826ED750;
loc_826ED740:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x826ed740
	if (ctx.cr6.gt) goto loc_826ED740;
loc_826ED750:
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
	// ble cr6,0x826ed77c
	if (!ctx.cr6.gt) goto loc_826ED77C;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x826ed780
	goto loc_826ED780;
loc_826ED77C:
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
loc_826ED780:
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
loc_826ED798:
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
	// ble cr6,0x826ed7f8
	if (!ctx.cr6.gt) goto loc_826ED7F8;
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
	// ble cr6,0x826ed820
	if (!ctx.cr6.gt) goto loc_826ED820;
	// b 0x826ed81c
	goto loc_826ED81C;
loc_826ED7F8:
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
	// bge cr6,0x826ed820
	if (!ctx.cr6.lt) goto loc_826ED820;
loc_826ED81C:
	// stwx r25,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r25.u32);
loc_826ED820:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x826ed798
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826ED798;
	// stw r25,4096(r31)
	REX_STORE_U32(r31.u32 + 4096, r25.u32);
loc_826ED82C:
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
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_826FEBE0) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca0
	ctx.lr = 0x826FEBE8;
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,1
	r23.s64 = 1;
	// stw r4,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r5,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r5.u32);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// stw r23,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r23.u32);
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826fec30
	if (!ctx.cr6.eq) goto loc_826FEC30;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_826FEC30:
	// lwz r11,15332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826fec5c
	if (!ctx.cr6.eq) goto loc_826FEC5C;
	// lwz r11,15400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826fec5c
	if (!ctx.cr6.eq) goto loc_826FEC5C;
loc_826FEC48:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_826FEC5C:
	// lwz r11,15584(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15584);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x826fec74
	if (!ctx.cr6.gt) goto loc_826FEC74;
	// lwz r11,3444(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3444);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3444(r31)
	REX_STORE_U32(r31.u32 + 3444, ctx.r11.u32);
loc_826FEC74:
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r26,15584(r31)
	REX_STORE_U32(r31.u32 + 15584, r26.u32);
	// bne cr6,0x826fecf4
	if (!ctx.cr6.eq) goto loc_826FECF4;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r3,3364(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r7,r1,308
	ctx.r7.s64 = ctx.r1.s64 + 308;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,300
	ctx.r5.s64 = ctx.r1.s64 + 300;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82716b40
	ctx.lr = 0x826FECA0;
	sub_82716B40(ctx, base);
	// lwz r6,128(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r5,308(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r4,300(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x826fecd8
	if (ctx.cr6.eq) goto loc_826FECD8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826fecc4
	if (ctx.cr6.eq) goto loc_826FECC4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x826fecd8
	if (!ctx.cr6.eq) goto loc_826FECD8;
loc_826FECC4:
	// li r3,11
	ctx.r3.s64 = 11;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_826FECD8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x826fecfc
	if (!ctx.cr6.eq) goto loc_826FECFC;
loc_826FECE0:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_826FECF4:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// stw r26,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r26.u32);
loc_826FECFC:
	// lwz r11,15504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x826fed50
	if (!ctx.cr6.eq) goto loc_826FED50;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,308
	ctx.r7.s64 = ctx.r1.s64 + 308;
	// addi r6,r1,300
	ctx.r6.s64 = ctx.r1.s64 + 300;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82715ad8
	ctx.lr = 0x826FED1C;
	sub_82715AD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826ff408
	if (!ctx.cr6.eq) goto loc_826FF408;
	// lwz r11,3696(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826fed44
	if (!ctx.cr6.eq) goto loc_826FED44;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_826FED44:
	// lwz r5,308(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r4,300(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r6,128(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
loc_826FED50:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x826fed60
	if (!ctx.cr6.eq) goto loc_826FED60;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x826fece0
	if (ctx.cr6.eq) goto loc_826FECE0;
loc_826FED60:
	// lwz r11,15504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82725b68
	ctx.lr = 0x826FED78;
	sub_82725B68(ctx, base);
	// lwz r9,80(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r8,128(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r29,r23
	r29.u64 = r23.u64;
	// mr r28,r26
	r28.u64 = r26.u64;
	// stw r8,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// ld r10,3608(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 3608);
	// ld r11,3600(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 3600);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lwz r30,84(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r23,15596(r31)
	REX_STORE_U32(r31.u32 + 15596, r23.u32);
	// stw r26,3448(r31)
	REX_STORE_U32(r31.u32 + 3448, r26.u32);
	// std r7,3608(r31)
	REX_STORE_U64(r31.u32 + 3608, ctx.r7.u64);
	// std r6,3600(r31)
	REX_STORE_U64(r31.u32 + 3600, ctx.r6.u64);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x826fee18
	if (!ctx.cr6.lt) goto loc_826FEE18;
loc_826FEDC0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fee18
	if (ctx.cr6.eq) goto loc_826FEE18;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r29,r11,r29
	r29.u64 = r29.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r29.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// bge 0x826fee08
	if (!ctx.cr0.lt) goto loc_826FEE08;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FEE08;
	sub_82725E38(ctx, base);
loc_826FEE08:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fedc0
	if (ctx.cr6.gt) goto loc_826FEDC0;
loc_826FEE18:
	// subfic r11,r29,64
	ctx.xer.ca = r29.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r29.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r8,r29,32
	ctx.r8.u64 = r29.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r29,r10
	ctx.r6.u64 = ctx.r10.u64 - r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r27,r11,r28
	r27.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r4.u64);
	// bge 0x826fee50
	if (!ctx.cr0.lt) goto loc_826FEE50;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FEE50;
	sub_82725E38(ctx, base);
loc_826FEE50:
	// lwz r30,84(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mr r29,r23
	r29.u64 = r23.u64;
	// stw r27,288(r31)
	REX_STORE_U32(r31.u32 + 288, r27.u32);
	// mr r28,r26
	r28.u64 = r26.u64;
	// lwz r27,15336(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 15336);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x826feecc
	if (!ctx.cr6.lt) goto loc_826FEECC;
loc_826FEE74:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826feecc
	if (ctx.cr6.eq) goto loc_826FEECC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r29,r11,r29
	r29.u64 = r29.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r29.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// bge 0x826feebc
	if (!ctx.cr0.lt) goto loc_826FEEBC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FEEBC;
	sub_82725E38(ctx, base);
loc_826FEEBC:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fee74
	if (ctx.cr6.gt) goto loc_826FEE74;
loc_826FEECC:
	// subfic r11,r29,64
	ctx.xer.ca = r29.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r29.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r8,r29,32
	ctx.r8.u64 = r29.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r29,r10
	ctx.r6.u64 = ctx.r10.u64 - r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r29,r11,r28
	r29.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r4.u64);
	// bge 0x826fef04
	if (!ctx.cr0.lt) goto loc_826FEF04;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FEF04;
	sub_82725E38(ctx, base);
loc_826FEF04:
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// addi r10,r29,1
	ctx.r10.s64 = r29.s64 + 1;
	// stw r10,15336(r31)
	REX_STORE_U32(r31.u32 + 15336, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826ff204
	if (!ctx.cr6.eq) goto loc_826FF204;
	// lwz r4,180(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 180);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// lwz r10,188(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 188);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,192(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 192);
	// lwz r8,200(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 200);
	// srawi r5,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 4;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// stw r23,1968(r31)
	REX_STORE_U32(r31.u32 + 1968, r23.u32);
	// srawi r30,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	r30.s64 = ctx.r10.s32 >> 4;
	// stw r5,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r5.u32);
	// rlwinm r29,r4,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r3,236(r31)
	REX_STORE_U32(r31.u32 + 236, ctx.r3.u32);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r4,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r4.u32);
	// stw r10,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r9.u32);
	// stw r8,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r8.u32);
	// stw r30,140(r31)
	REX_STORE_U32(r31.u32 + 140, r30.u32);
	// stw r29,228(r31)
	REX_STORE_U32(r31.u32 + 228, r29.u32);
	// stw r11,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r11.u32);
	// stw r26,220(r31)
	REX_STORE_U32(r31.u32 + 220, r26.u32);
	// stw r26,224(r31)
	REX_STORE_U32(r31.u32 + 224, r26.u32);
	// lwz r5,160(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 160);
	// bl 0x8272b6b8
	ctx.lr = 0x826FEF84;
	sub_8272B6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826ff408
	if (!ctx.cr6.eq) goto loc_826FF408;
	// addi r11,r25,15
	ctx.r11.s64 = r25.s64 + 15;
	// stw r25,15340(r31)
	REX_STORE_U32(r31.u32 + 15340, r25.u32);
	// addi r10,r24,15
	ctx.r10.s64 = r24.s64 + 15;
	// stw r24,15344(r31)
	REX_STORE_U32(r31.u32 + 15344, r24.u32);
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// stw r23,3380(r31)
	REX_STORE_U32(r31.u32 + 3380, r23.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r7,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 4;
	// rlwinm r6,r8,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addze r5,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r5.s64 = temp.s64;
	// stw r6,15348(r31)
	REX_STORE_U32(r31.u32 + 15348, ctx.r6.u32);
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r4,15352(r31)
	REX_STORE_U32(r31.u32 + 15352, ctx.r4.u32);
	// bl 0x827390c8
	ctx.lr = 0x826FEFC8;
	sub_827390C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826ff408
	if (!ctx.cr6.eq) goto loc_826FF408;
	// lwz r11,15504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x826ff008
	if (ctx.cr6.lt) goto loc_826FF008;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r26,15596(r31)
	REX_STORE_U32(r31.u32 + 15596, r26.u32);
	// addi r10,r31,2664
	ctx.r10.s64 = r31.s64 + 2664;
	// addi r9,r31,2704
	ctx.r9.s64 = r31.s64 + 2704;
	// stw r11,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r11.u32);
	// stw r10,2928(r31)
	REX_STORE_U32(r31.u32 + 2928, ctx.r10.u32);
	// stw r9,2940(r31)
	REX_STORE_U32(r31.u32 + 2940, ctx.r9.u32);
	// stw r11,348(r31)
	REX_STORE_U32(r31.u32 + 348, ctx.r11.u32);
	// stw r11,20932(r31)
	REX_STORE_U32(r31.u32 + 20932, ctx.r11.u32);
	// stw r11,14836(r31)
	REX_STORE_U32(r31.u32 + 14836, ctx.r11.u32);
	// stw r11,21868(r31)
	REX_STORE_U32(r31.u32 + 21868, ctx.r11.u32);
loc_826FF008:
	// lwz r11,15428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826ff028
	if (!ctx.cr6.eq) goto loc_826FF028;
	// lwz r11,14804(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14804);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x827077d0
	ctx.lr = 0x826FF028;
	sub_827077D0(ctx, base);
loc_826FF028:
	// lwz r11,15504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x826ff054
	if (ctx.cr6.eq) goto loc_826FF054;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8270f440
	ctx.lr = 0x826FF03C;
	sub_8270F440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826ff0fc
	if (ctx.cr6.eq) goto loc_826FF0FC;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_826FF054:
	// lwz r11,22088(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22088);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826fece0
	if (!ctx.cr6.eq) goto loc_826FECE0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r26,20908(r31)
	REX_STORE_U32(r31.u32 + 20908, r26.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r26,20904(r31)
	REX_STORE_U32(r31.u32 + 20904, r26.u32);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r3,r11,28064
	ctx.r3.s64 = ctx.r11.s64 + 28064;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// addi r11,r10,27976
	ctx.r11.s64 = ctx.r10.s64 + 27976;
	// stw r3,1824(r31)
	REX_STORE_U32(r31.u32 + 1824, ctx.r3.u32);
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// addi r10,r9,27308
	ctx.r10.s64 = ctx.r9.s64 + 27308;
	// stw r11,1828(r31)
	REX_STORE_U32(r31.u32 + 1828, ctx.r11.u32);
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// addi r9,r8,27708
	ctx.r9.s64 = ctx.r8.s64 + 27708;
	// stw r10,1836(r31)
	REX_STORE_U32(r31.u32 + 1836, ctx.r10.u32);
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// addi r8,r7,27540
	ctx.r8.s64 = ctx.r7.s64 + 27540;
	// stw r9,1840(r31)
	REX_STORE_U32(r31.u32 + 1840, ctx.r9.u32);
	// lis r4,-32247
	ctx.r4.s64 = -2113339392;
	// addi r7,r6,27812
	ctx.r7.s64 = ctx.r6.s64 + 27812;
	// stw r8,1844(r31)
	REX_STORE_U32(r31.u32 + 1844, ctx.r8.u32);
	// addi r6,r5,28044
	ctx.r6.s64 = ctx.r5.s64 + 28044;
	// addi r5,r4,28128
	ctx.r5.s64 = ctx.r4.s64 + 28128;
	// stw r7,1848(r31)
	REX_STORE_U32(r31.u32 + 1848, ctx.r7.u32);
	// stw r6,1864(r31)
	REX_STORE_U32(r31.u32 + 1864, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r5,1868(r31)
	REX_STORE_U32(r31.u32 + 1868, ctx.r5.u32);
	// bl 0x82703840
	ctx.lr = 0x826FF0D0;
	sub_82703840(ctx, base);
	// stw r26,20904(r31)
	REX_STORE_U32(r31.u32 + 20904, r26.u32);
	// stw r26,20912(r31)
	REX_STORE_U32(r31.u32 + 20912, r26.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8271a7f0
	ctx.lr = 0x826FF0E0;
	sub_8271A7F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8270da78
	ctx.lr = 0x826FF0E8;
	sub_8270DA78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826ff408
	if (!ctx.cr6.eq) goto loc_826FF408;
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x826fece0
	if (ctx.cr6.eq) goto loc_826FECE0;
loc_826FF0FC:
	// clrlwi r11,r22,28
	ctx.r11.u64 = r22.u32 & 0xF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ff12c
	if (ctx.cr6.eq) goto loc_826FF12C;
	// rlwinm r11,r22,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 16) & 0xFFFF0000;
	// srawi r11,r11,28
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 28;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x826ff12c
	if (ctx.cr6.eq) goto loc_826FF12C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x826ff12c
	if (ctx.cr6.eq) goto loc_826FF12C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,15580(r31)
	REX_STORE_U32(r31.u32 + 15580, ctx.r11.u32);
	// b 0x826ff130
	goto loc_826FF130;
loc_826FF12C:
	// stw r26,15580(r31)
	REX_STORE_U32(r31.u32 + 15580, r26.u32);
loc_826FF130:
	// lwz r11,15504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x826ff150
	if (ctx.cr6.eq) goto loc_826FF150;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x826ff1a0
	if (!ctx.cr6.eq) goto loc_826FF1A0;
	// lwz r11,20904(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20904);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826ff1a0
	if (!ctx.cr6.eq) goto loc_826FF1A0;
loc_826FF150:
	// lwz r11,3396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ff194
	if (ctx.cr6.eq) goto loc_826FF194;
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// lwz r10,3188(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3188);
	// addi r9,r11,29896
	ctx.r9.s64 = ctx.r11.s64 + 29896;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x826ff194
	if (ctx.cr6.eq) goto loc_826FF194;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x826ff194
	if (ctx.cr6.eq) goto loc_826FF194;
	// lwz r11,3388(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3388);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x826ff194
	if (ctx.cr6.gt) goto loc_826FF194;
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// addi r10,r11,-6000
	ctx.r10.s64 = ctx.r11.s64 + -6000;
	// b 0x826ff19c
	goto loc_826FF19C;
loc_826FF194:
	// lis r11,-32144
	ctx.r11.s64 = -2106589184;
	// addi r10,r11,15400
	ctx.r10.s64 = ctx.r11.s64 + 15400;
loc_826FF19C:
	// stw r10,15804(r31)
	REX_STORE_U32(r31.u32 + 15804, ctx.r10.u32);
loc_826FF1A0:
	// lwz r11,15804(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15804);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FF1B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,22480(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22480);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r9,3712(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3712);
	// stw r10,608(r9)
	REX_STORE_U32(ctx.r9.u32 + 608, ctx.r10.u32);
	// bne cr6,0x826ff408
	if (!ctx.cr6.eq) goto loc_826FF408;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827253e0
	ctx.lr = 0x826FF1CC;
	sub_827253E0(ctx, base);
	// lwz r11,15540(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ff1fc
	if (ctx.cr6.eq) goto loc_826FF1FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fc9b0
	ctx.lr = 0x826FF1E0;
	sub_826FC9B0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,3836(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3836);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82724fb8
	ctx.lr = 0x826FF1F4;
	sub_82724FB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fca10
	ctx.lr = 0x826FF1FC;
	sub_826FCA10(ctx, base);
loc_826FF1FC:
	// stw r23,3692(r31)
	REX_STORE_U32(r31.u32 + 3692, r23.u32);
	// b 0x826ff23c
	goto loc_826FF23C;
loc_826FF204:
	// lwz r11,3692(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3692);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826fec48
	if (ctx.cr6.eq) goto loc_826FEC48;
	// lwz r10,22480(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22480);
	// rlwinm r9,r22,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 16) & 0xFFFF0000;
	// lwz r8,3712(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3712);
	// li r7,2
	ctx.r7.s64 = 2;
	// srawi r11,r9,28
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 28;
	// stw r7,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r7.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stw r10,608(r8)
	REX_STORE_U32(ctx.r8.u32 + 608, ctx.r10.u32);
	// beq cr6,0x826ff3fc
	if (ctx.cr6.eq) goto loc_826FF3FC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x826ff3fc
	if (ctx.cr6.eq) goto loc_826FF3FC;
loc_826FF23C:
	// lwz r11,15336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15336);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x826ff250
	if (ctx.cr6.eq) goto loc_826FF250;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x826fec48
	if (!ctx.cr6.eq) goto loc_826FEC48;
loc_826FF250:
	// lwz r11,15400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15400);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ff290
	if (ctx.cr6.eq) goto loc_826FF290;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82730f50
	ctx.lr = 0x826FF268;
	sub_82730F50(ctx, base);
	// lwz r11,3712(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3712);
	// lwz r10,3728(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3728);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r9,608(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// stw r9,608(r10)
	REX_STORE_U32(ctx.r10.u32 + 608, ctx.r9.u32);
	// beq cr6,0x826ff3e8
	if (ctx.cr6.eq) goto loc_826FF3E8;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_826FF290:
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// addi r8,r1,148
	ctx.r8.s64 = ctx.r1.s64 + 148;
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x826fd178
	ctx.lr = 0x826FF2B0;
	sub_826FD178(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826ff408
	if (!ctx.cr6.eq) goto loc_826FF408;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,15396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15396);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfd f31,-3744(r10)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
	// lfd f30,3728(r9)
	f30.u64 = REX_LOAD_U64(ctx.r9.u32 + 3728);
	// bne cr6,0x826ff2e8
	if (!ctx.cr6.eq) goto loc_826FF2E8;
	// fmr f5,f30
	ctx.f5.f64 = f30.f64;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// b 0x826ff310
	goto loc_826FF310;
loc_826FF2E8:
	// lfs f1,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826ff304
	if (!ctx.cr6.eq) goto loc_826FF304;
	// fmr f5,f1
	ctx.f5.f64 = ctx.f1.f64;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// b 0x826ff310
	goto loc_826FF310;
loc_826FF304:
	// lfs f5,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,156(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f2.f64 = double(temp.f32);
loc_826FF310:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,3744(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3744);
	// lwz r5,3748(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3748);
	// lfs f7,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f7.f64 = double(temp.f32);
	// lwz r6,3752(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3752);
	// lfs f6,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f6.f64 = double(temp.f32);
	// lwz r7,3800(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3800);
	// lfs f3,140(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f3.f64 = double(temp.f32);
	// lwz r8,3804(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3804);
	// lwz r9,3808(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3808);
	// bl 0x8272bb90
	ctx.lr = 0x826FF33C;
	sub_8272BB90(ctx, base);
	// lwz r11,15336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15336);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x826ff3e8
	if (!ctx.cr6.eq) goto loc_826FF3E8;
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// addi r8,r1,156
	ctx.r8.s64 = ctx.r1.s64 + 156;
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fd178
	ctx.lr = 0x826FF36C;
	sub_826FD178(ctx, base);
	// lwz r11,15396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826ff38c
	if (!ctx.cr6.eq) goto loc_826FF38C;
	// fmr f5,f30
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = f30.f64;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// b 0x826ff3b4
	goto loc_826FF3B4;
loc_826FF38C:
	// lfs f1,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826ff3a8
	if (!ctx.cr6.eq) goto loc_826FF3A8;
	// fmr f5,f1
	ctx.f5.f64 = ctx.f1.f64;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// b 0x826ff3b4
	goto loc_826FF3B4;
loc_826FF3A8:
	// lfs f5,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f2.f64 = double(temp.f32);
loc_826FF3B4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,3756(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3756);
	// lwz r5,3760(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3760);
	// lfs f7,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f7.f64 = double(temp.f32);
	// lwz r6,3764(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3764);
	// lfs f6,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f6.f64 = double(temp.f32);
	// lwz r7,3812(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3812);
	// lfs f3,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f3.f64 = double(temp.f32);
	// lwz r8,3816(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3816);
	// lwz r9,3820(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3820);
	// bl 0x8272bb90
	ctx.lr = 0x826FF3E0;
	sub_8272BB90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8272ae90
	ctx.lr = 0x826FF3E8;
	sub_8272AE90(ctx, base);
loc_826FF3E8:
	// lwz r11,3728(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3728);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,15584(r31)
	REX_STORE_U32(r31.u32 + 15584, ctx.r10.u32);
	// stw r11,3740(r31)
	REX_STORE_U32(r31.u32 + 3740, ctx.r11.u32);
	// b 0x826ff400
	goto loc_826FF400;
loc_826FF3FC:
	// stw r23,15584(r31)
	REX_STORE_U32(r31.u32 + 15584, r23.u32);
loc_826FF400:
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r23,3708(r31)
	REX_STORE_U16(r31.u32 + 3708, r23.u16);
loc_826FF408:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_827460B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,3716(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3716);
	// lwz r5,3712(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 3712);
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,220(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// lwz r9,224(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// stw r11,3712(r3)
	REX_STORE_U32(ctx.r3.u32 + 3712, ctx.r11.u32);
	// stw r5,3716(r3)
	REX_STORE_U32(ctx.r3.u32 + 3716, ctx.r5.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,3744(r3)
	REX_STORE_U32(ctx.r3.u32 + 3744, ctx.r11.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,3748(r3)
	REX_STORE_U32(ctx.r3.u32 + 3748, ctx.r8.u32);
	// lwz r7,8(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r7,3752(r3)
	REX_STORE_U32(ctx.r3.u32 + 3752, ctx.r7.u32);
	// lwz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r8,3744(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 3744);
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,3748(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 3748);
	// stw r6,3784(r3)
	REX_STORE_U32(ctx.r3.u32 + 3784, ctx.r6.u32);
	// lwz r6,3752(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 3752);
	// lwz r4,4(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r4,3788(r3)
	REX_STORE_U32(ctx.r3.u32 + 3788, ctx.r4.u32);
	// rotlwi r4,r4,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r5,8(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// add r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r5,3792(r3)
	REX_STORE_U32(ctx.r3.u32 + 3792, ctx.r5.u32);
	// add r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r31,3796(r3)
	REX_STORE_U32(ctx.r3.u32 + 3796, r31.u32);
	// rotlwi r6,r5,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r10,3824(r3)
	REX_STORE_U32(ctx.r3.u32 + 3824, ctx.r10.u32);
	// stw r8,3828(r3)
	REX_STORE_U32(ctx.r3.u32 + 3828, ctx.r8.u32);
	// stw r7,3832(r3)
	REX_STORE_U32(ctx.r3.u32 + 3832, ctx.r7.u32);
	// stw r11,14792(r3)
	REX_STORE_U32(ctx.r3.u32 + 14792, ctx.r11.u32);
	// stw r4,14796(r3)
	REX_STORE_U32(ctx.r3.u32 + 14796, ctx.r4.u32);
	// stw r6,14800(r3)
	REX_STORE_U32(ctx.r3.u32 + 14800, ctx.r6.u32);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827498E0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// lwz r11,24544(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24544);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24544(r10)
	REX_STORE_U32(ctx.r10.u32 + 24544, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// beq cr6,0x82749904
	if (ctx.cr6.eq) goto loc_82749904;
	// lwz r3,14296(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 14296);
	// blr 
	return;
loc_82749904:
	// addi r8,r11,14296
	ctx.r8.s64 = ctx.r11.s64 + 14296;
	// li r10,10240
	ctx.r10.s64 = 10240;
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
	// li r11,-5120
	ctx.r11.s64 = -5120;
	// addi r9,r9,5120
	ctx.r9.s64 = ctx.r9.s64 + 5120;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
loc_82749920:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82749930
	if (!ctx.cr6.lt) goto loc_82749930;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82749940
	goto loc_82749940;
loc_82749930:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// li r10,255
	ctx.r10.s64 = 255;
	// bgt cr6,0x82749940
	if (ctx.cr6.gt) goto loc_82749940;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82749940:
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
	// addi r9,r9,5120
	ctx.r9.s64 = ctx.r9.s64 + 5120;
	// stbx r10,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82749920
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82749920;
	// addi r11,r8,8
	ctx.r11.s64 = ctx.r8.s64 + 8;
	// addi r3,r11,5120
	ctx.r3.s64 = ctx.r11.s64 + 5120;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8274B7A8) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c80
	ctx.lr = 0x8274B7B0;
	// lwz r23,136(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r6,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// addi r6,r23,1
	ctx.r6.s64 = r23.s64 + 1;
	// stw r4,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r4.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r22,r6,31,1,31
	r22.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r5,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r23,-184(r1)
	REX_STORE_U32(ctx.r1.u32 + -184, r23.u32);
	// add r3,r22,r7
	ctx.r3.u64 = r22.u64 + ctx.r7.u64;
	// stw r22,-200(r1)
	REX_STORE_U32(ctx.r1.u32 + -200, r22.u32);
	// add r4,r22,r4
	ctx.r4.u64 = r22.u64 + ctx.r4.u64;
	// stw r3,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r3.u32);
	// stw r4,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r4.u32);
	// beq cr6,0x8274bb7c
	if (ctx.cr6.eq) goto loc_8274BB7C;
	// li r6,1
	ctx.r6.s64 = 1;
	// srawi. r11,r23,2
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x3) != 0);
	ctx.r11.s64 = r23.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// ble 0x8274b9c8
	if (!ctx.cr0.gt) goto loc_8274B9C8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8274B804:
	// lbz r11,1(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r6,6(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// lbz r5,7(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// lbz r11,9(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 9);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r30,8(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// lbz r29,3(r10)
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// srawi r4,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 2;
	// extsb r28,r11
	r28.s64 = ctx.r11.s8;
	// lbz r27,13(r10)
	r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 13);
	// srawi r6,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 4;
	// lbz r26,18(r10)
	r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 18);
	// extsb r24,r30
	r24.s64 = r30.s8;
	// lbz r25,19(r10)
	r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 19);
	// srawi r5,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 6;
	// lbz r22,21(r10)
	r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 21);
	// extsb r20,r29
	r20.s64 = r29.s8;
	// lbz r21,20(r10)
	r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 20);
	// srawi r28,r28,6
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3F) != 0);
	r28.s64 = r28.s32 >> 6;
	// lbz r18,15(r10)
	r18.u64 = REX_LOAD_U8(ctx.r10.u32 + 15);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// lbz r19,2(r10)
	r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r27,r27
	r27.s64 = r27.s8;
	// lbz r17,0(r10)
	r17.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// srawi r24,r24,4
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0xF) != 0);
	r24.s64 = r24.s32 >> 4;
	// lbz r15,14(r10)
	r15.u64 = REX_LOAD_U8(ctx.r10.u32 + 14);
	// extsb r26,r26
	r26.s64 = r26.s8;
	// lbz r16,12(r10)
	r16.u64 = REX_LOAD_U8(ctx.r10.u32 + 12);
	// srawi r20,r20,2
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x3) != 0);
	r20.s64 = r20.s32 >> 2;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// srawi r27,r27,2
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3) != 0);
	r27.s64 = r27.s32 >> 2;
	// srawi r26,r26,4
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0xF) != 0);
	r26.s64 = r26.s32 >> 4;
	// rlwimi r4,r6,0,28,29
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xC) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFF3);
	// extsb r25,r25
	r25.s64 = r25.s8;
	// rlwimi r28,r24,0,28,29
	r28.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xC) | (r28.u64 & 0xFFFFFFFFFFFFFFF3);
	// extsb r6,r22
	ctx.r6.s64 = r22.s8;
	// rlwimi r27,r26,0,28,29
	r27.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xC) | (r27.u64 & 0xFFFFFFFFFFFFFFF3);
	// extsb r24,r21
	r24.s64 = r21.s8;
	// srawi r26,r25,6
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x3F) != 0);
	r26.s64 = r25.s32 >> 6;
	// srawi r6,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 6;
	// srawi r25,r24,4
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0xF) != 0);
	r25.s64 = r24.s32 >> 4;
	// rlwimi r4,r5,0,30,31
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x3) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFFC);
	// rlwimi r6,r25,0,28,29
	ctx.r6.u64 = (__builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xC) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFF3);
	// extsb r25,r18
	r25.s64 = r18.s8;
	// rlwimi r29,r19,2,22,27
	r29.u64 = (__builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0x3F0) | (r29.u64 & 0xFFFFFFFFFFFFFC0F);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// rlwimi r4,r17,0,24,25
	ctx.r4.u64 = (__builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0xC0) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFF3F);
	// srawi r5,r25,2
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x3) != 0);
	ctx.r5.s64 = r25.s32 >> 2;
	// lbz r25,4(r10)
	r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// rlwinm r29,r29,2,24,27
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xF0;
	// stb r4,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r4.u8);
	// rlwimi r6,r5,0,26,27
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x30) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFCF);
	// or r11,r29,r11
	ctx.r11.u64 = r29.u64 | ctx.r11.u64;
	// lbz r29,22(r10)
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 22);
	// rlwimi r28,r20,0,26,27
	r28.u64 = (__builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x30) | (r28.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwinm r4,r30,0,28,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xC;
	// rlwimi r27,r26,0,30,31
	r27.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x3) | (r27.u64 & 0xFFFFFFFFFFFFFFFC);
	// lbz r26,23(r10)
	r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 23);
	// rlwimi r6,r15,0,24,25
	ctx.r6.u64 = (__builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 0) & 0xC0) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFF3F);
	// or r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 | ctx.r4.u64;
	// rlwimi r28,r19,0,24,25
	r28.u64 = (__builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0xC0) | (r28.u64 & 0xFFFFFFFFFFFFFF3F);
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// lbz r5,10(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 10);
	// rlwimi r27,r16,0,24,25
	r27.u64 = (__builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 0) & 0xC0) | (r27.u64 & 0xFFFFFFFFFFFFFF3F);
	// stb r28,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, r28.u8);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stb r4,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r4.u8);
	// rlwinm r6,r22,0,28,29
	ctx.r6.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xC;
	// lbz r4,16(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 16);
	// stbu r27,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, r27.u8);
	ctx.r7.u32 = ea;
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// srawi r6,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// lbz r28,11(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 11);
	// lbz r27,17(r10)
	r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 17);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// mr r30,r15
	r30.u64 = r15.u64;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// extsb r29,r29
	r29.s64 = r29.s8;
	// srawi r5,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 2;
	// stbu r11,1(r3)
	ea = 1 + ctx.r3.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r3.u32 = ea;
	// extsb r28,r28
	r28.s64 = r28.s8;
	// srawi r4,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 4;
	// lbz r24,5(r10)
	r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r11,r27
	ctx.r11.s64 = r27.s8;
	// srawi r29,r29,6
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x3F) != 0);
	r29.s64 = r29.s32 >> 6;
	// srawi r28,r28,2
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3) != 0);
	r28.s64 = r28.s32 >> 2;
	// rlwimi r5,r4,0,28,29
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xC) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFF3);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// extsb r4,r26
	ctx.r4.s64 = r26.s8;
	// rlwimi r18,r15,2,22,27
	r18.u64 = (__builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0x3F0) | (r18.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwimi r28,r11,0,28,29
	r28.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC) | (r28.u64 & 0xFFFFFFFFFFFFFFF3);
	// srawi r11,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 6;
	// rlwinm r4,r18,2,24,27
	ctx.r4.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xF0;
	// rlwimi r28,r11,0,30,31
	r28.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3) | (r28.u64 & 0xFFFFFFFFFFFFFFFC);
	// or r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 | ctx.r6.u64;
	// rlwinm r6,r21,0,28,29
	ctx.r6.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xC;
	// rlwimi r5,r29,0,30,31
	ctx.r5.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x3) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFFC);
	// or r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 | ctx.r6.u64;
	// rlwimi r5,r25,0,24,25
	ctx.r5.u64 = (__builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xC0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFF3F);
	// rlwimi r28,r24,0,24,25
	r28.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xC0) | (r28.u64 & 0xFFFFFFFFFFFFFF3F);
	// stbu r4,1(r31)
	ea = 1 + r31.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	r31.u32 = ea;
	// stb r5,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stb r28,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, r28.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// bdnz 0x8274b804
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8274B804;
	// lwz r22,-200(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// stw r31,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, r31.u32);
loc_8274B9C8:
	// clrlwi r6,r23,30
	ctx.r6.u64 = r23.u32 & 0x3;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8274bb68
	if (ctx.cr6.eq) goto loc_8274BB68;
	// lbz r11,1(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r5,r23,0,30,30
	ctx.r5.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x2;
	// lbz r4,3(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lbz r30,2(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r29,r4
	r29.s64 = ctx.r4.s8;
	// lbz r28,0(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// lbz r27,4(r10)
	r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// mr r26,r30
	r26.u64 = r30.u64;
	// lbz r25,5(r10)
	r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// srawi r29,r29,2
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x3) != 0);
	r29.s64 = r29.s32 >> 2;
	// rlwimi r11,r28,0,24,25
	ctx.r11.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xC0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF3F);
	// rlwimi r4,r30,2,22,27
	ctx.r4.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x3F0) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwimi r26,r29,0,26,27
	r26.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x30) | (r26.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwinm r30,r11,0,24,27
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// rlwinm r28,r4,2,24,27
	r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xF0;
	// rlwinm r29,r26,0,24,27
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xF0;
	// rlwinm r11,r27,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r4,r25,0,0,25
	ctx.r4.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFC0;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bne cr6,0x8274bab8
	if (!ctx.cr6.eq) goto loc_8274BAB8;
	// lbz r5,1(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r26,0(r10)
	r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r25,2(r10)
	r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// lbz r27,3(r10)
	r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r26,r26
	r26.s64 = r26.s8;
	// extsb r20,r25
	r20.s64 = r25.s8;
	// lbz r21,4(r10)
	r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// rlwinm r24,r27,0,28,29
	r24.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xC;
	// lbz r19,5(r10)
	r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// srawi r5,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 6;
	// extsb r27,r27
	r27.s64 = r27.s8;
	// srawi r26,r26,4
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0xF) != 0);
	r26.s64 = r26.s32 >> 4;
	// srawi r20,r20,4
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0xF) != 0);
	r20.s64 = r20.s32 >> 4;
	// srawi r27,r27,6
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3F) != 0);
	r27.s64 = r27.s32 >> 6;
	// extsb r21,r21
	r21.s64 = r21.s8;
	// extsb r19,r19
	r19.s64 = r19.s8;
	// srawi r24,r24,2
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x3) != 0);
	r24.s64 = r24.s32 >> 2;
	// rlwimi r20,r27,0,30,31
	r20.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x3) | (r20.u64 & 0xFFFFFFFFFFFFFFFC);
	// rlwimi r5,r26,0,28,29
	ctx.r5.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xC) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFF3);
	// srawi r21,r21,2
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x3) != 0);
	r21.s64 = r21.s32 >> 2;
	// rlwinm r27,r25,0,28,29
	r27.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xC;
	// srawi r26,r19,2
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0x3) != 0);
	r26.s64 = r19.s32 >> 2;
	// or r27,r24,r27
	r27.u64 = r24.u64 | r27.u64;
	// clrlwi r5,r5,28
	ctx.r5.u64 = ctx.r5.u32 & 0xF;
	// clrlwi r25,r20,28
	r25.u64 = r20.u32 & 0xF;
	// rlwinm r24,r21,0,26,27
	r24.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x30;
	// rlwinm r26,r26,0,26,27
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x30;
	// or r30,r5,r30
	r30.u64 = ctx.r5.u64 | r30.u64;
	// or r29,r25,r29
	r29.u64 = r25.u64 | r29.u64;
	// or r28,r27,r28
	r28.u64 = r27.u64 | r28.u64;
	// or r11,r24,r11
	ctx.r11.u64 = r24.u64 | ctx.r11.u64;
	// or r4,r26,r4
	ctx.r4.u64 = r26.u64 | ctx.r4.u64;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
loc_8274BAB8:
	// stb r28,0(r31)
	REX_STORE_U8(r31.u32 + 0, r28.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stb r30,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, r30.u8);
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// stb r29,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, r29.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stw r31,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, r31.u32);
	// bne cr6,0x8274bb58
	if (!ctx.cr6.eq) goto loc_8274BB58;
	// lbz r6,1(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r5,3(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r30,2(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r29,4(r10)
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// extsb r28,r5
	r28.s64 = ctx.r5.s8;
	// lbz r25,0(r10)
	r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// srawi r6,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// lbz r26,5(r10)
	r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// rlwimi r5,r30,2,22,27
	ctx.r5.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x3F0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFC0F);
	// mr r27,r30
	r27.u64 = r30.u64;
	// srawi r28,r28,2
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3) != 0);
	r28.s64 = r28.s32 >> 2;
	// extsb r29,r29
	r29.s64 = r29.s8;
	// rlwimi r6,r25,0,24,25
	ctx.r6.u64 = (__builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xC0) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFF3F);
	// extsb r27,r26
	r27.s64 = r26.s8;
	// rlwinm r5,r5,2,24,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xF0;
	// rlwimi r30,r28,0,26,27
	r30.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x30) | (r30.u64 & 0xFFFFFFFFFFFFFFCF);
	// srawi r29,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r29.s64 = r29.s32 >> 4;
	// stb r5,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r5.u8);
	// rlwinm r6,r6,0,24,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xF0;
	// srawi r28,r27,4
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0xF) != 0);
	r28.s64 = r27.s32 >> 4;
	// rlwinm r5,r30,0,24,27
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xF0;
	// stb r6,1(r7)
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r6.u8);
	// rlwinm r30,r29,0,28,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xC;
	// rlwinm r7,r28,0,28,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xC;
	// stb r5,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r5.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// or r11,r30,r11
	ctx.r11.u64 = r30.u64 | ctx.r11.u64;
	// or r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 | ctx.r4.u64;
	// stw r31,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, r31.u32);
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8274BB58:
	// stb r11,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r4,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8274BB68:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// add r4,r22,r31
	ctx.r4.u64 = r22.u64 + r31.u64;
	// add r3,r22,r3
	ctx.r3.u64 = r22.u64 + ctx.r3.u64;
	// stw r4,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r4.u32);
	// stw r3,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r3.u32);
loc_8274BB7C:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8274c12c
	if (!ctx.cr6.lt) goto loc_8274C12C;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// lwz r30,36(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// lwz r5,44(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// srawi r6,r23,2
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x3) != 0);
	ctx.r6.s64 = r23.s32 >> 2;
	// addi r27,r30,-1
	r27.s64 = r30.s64 + -1;
	// stw r11,-180(r1)
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r11.u32);
	// addi r26,r5,-1
	r26.s64 = ctx.r5.s64 + -1;
	// stw r6,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r6.u32);
	// addi r25,r8,-1
	r25.s64 = ctx.r8.s64 + -1;
	// stw r27,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, r27.u32);
	// addi r24,r9,-1
	r24.s64 = ctx.r9.s64 + -1;
	// stw r26,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, r26.u32);
	// stw r25,60(r1)
	REX_STORE_U32(ctx.r1.u32 + 60, r25.u32);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r24,68(r1)
	REX_STORE_U32(ctx.r1.u32 + 68, r24.u32);
	// b 0x8274bbd0
	goto loc_8274BBD0;
loc_8274BBCC:
	// lwz r6,-176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
loc_8274BBD0:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8274bea8
	if (!ctx.cr6.gt) goto loc_8274BEA8;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8274BBDC:
	// lbz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r9,7(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// lbz r5,10(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// lbz r31,9(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// extsb r30,r8
	r30.s64 = ctx.r8.s8;
	// lbz r29,4(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// srawi r6,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 6;
	// lbz r26,19(r11)
	r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 19);
	// extsb r28,r5
	r28.s64 = ctx.r5.s8;
	// srawi r4,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 4;
	// lbz r27,20(r11)
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// extsb r24,r31
	r24.s64 = r31.s8;
	// lbz r22,3(r11)
	r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// srawi r30,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	r30.s64 = r30.s32 >> 2;
	// lbz r25,14(r11)
	r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// extsb r20,r29
	r20.s64 = r29.s8;
	// lbz r23,1(r11)
	r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// srawi r28,r28,6
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3F) != 0);
	r28.s64 = r28.s32 >> 6;
	// stb r26,-224(r1)
	REX_STORE_U8(ctx.r1.u32 + -224, r26.u8);
	// rlwinm r10,r10,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// lbz r21,13(r11)
	r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// rlwinm r5,r5,0,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xC;
	// lbz r16,22(r11)
	r16.u64 = REX_LOAD_U8(ctx.r11.u32 + 22);
	// srawi r24,r24,4
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0xF) != 0);
	r24.s64 = r24.s32 >> 4;
	// lwz r19,-220(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// rlwimi r6,r4,0,28,29
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xC) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFF3);
	// lbz r17,21(r11)
	r17.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// srawi r20,r20,2
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x3) != 0);
	r20.s64 = r20.s32 >> 2;
	// lbz r18,16(r11)
	r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 16);
	// extsb r14,r27
	r14.s64 = r27.s8;
	// lbz r15,15(r11)
	r15.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// extsb r26,r26
	r26.s64 = r26.s8;
	// srawi r5,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 2;
	// rlwimi r6,r30,0,26,27
	ctx.r6.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x30) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFCF);
	// srawi r14,r14,6
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x3F) != 0);
	r14.s64 = r14.s32 >> 6;
	// srawi r26,r26,4
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0xF) != 0);
	r26.s64 = r26.s32 >> 4;
	// rlwimi r28,r24,0,28,29
	r28.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xC) | (r28.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwimi r29,r22,2,22,27
	r29.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0x3F0) | (r29.u64 & 0xFFFFFFFFFFFFFC0F);
	// extsb r4,r25
	ctx.r4.s64 = r25.s8;
	// mr r30,r23
	r30.u64 = r23.u64;
	// rlwimi r6,r23,0,24,25
	ctx.r6.u64 = (__builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xC0) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFF3F);
	// rlwimi r8,r23,2,22,27
	ctx.r8.u64 = (__builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0x3F0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFC0F);
	// mr r30,r21
	r30.u64 = r21.u64;
	// stb r6,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r6.u8);
	// rlwimi r14,r26,0,28,29
	r14.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xC) | (r14.u64 & 0xFFFFFFFFFFFFFFF3);
	// srawi r4,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 2;
	// rlwimi r28,r20,0,26,27
	r28.u64 = (__builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x30) | (r28.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwinm r30,r29,2,24,27
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xF0;
	// lbz r29,5(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r8,r8,2,24,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xF0;
	// or r6,r30,r5
	ctx.r6.u64 = r30.u64 | ctx.r5.u64;
	// lbz r30,11(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// rlwimi r14,r4,0,26,27
	r14.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x30) | (r14.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwimi r28,r22,0,24,25
	r28.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xC0) | (r28.u64 & 0xFFFFFFFFFFFFFF3F);
	// rlwinm r5,r31,0,28,29
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xC;
	// lbz r31,24(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 24);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stb r28,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, r28.u8);
	// rlwinm r9,r9,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	// lbz r28,17(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 17);
	// rlwimi r14,r21,0,24,25
	r14.u64 = (__builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xC0) | (r14.u64 & 0xFFFFFFFFFFFFFF3F);
	// or r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 | ctx.r5.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// stbu r14,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, r14.u8);
	ctx.r7.u32 = ea;
	// or r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 | ctx.r9.u64;
	// extsb r5,r16
	ctx.r5.s64 = r16.s8;
	// extsb r10,r17
	ctx.r10.s64 = r17.s8;
	// stb r4,0(r19)
	REX_STORE_U8(r19.u32 + 0, ctx.r4.u8);
	// mr r26,r22
	r26.u64 = r22.u64;
	// lbz r4,23(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 23);
	// srawi r5,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 6;
	// rlwinm r20,r27,0,28,29
	r20.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xC;
	// lbz r27,6(r11)
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// rlwinm r14,r16,0,28,29
	r14.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 0) & 0xC;
	// extsb r26,r18
	r26.s64 = r18.s8;
	// lwz r22,-216(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// rlwimi r5,r10,0,28,29
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFF3);
	// lbz r24,12(r11)
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// rlwinm r23,r4,0,28,29
	r23.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xC;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// stw r6,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r6.u32);
	// rotlwi r10,r19,0
	ctx.r10.u64 = __builtin_rotateleft32(r19.u32, 0);
	// lbz r19,18(r11)
	r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 18);
	// rlwimi r25,r21,2,22,27
	r25.u64 = (__builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0x3F0) | (r25.u64 & 0xFFFFFFFFFFFFFC0F);
	// std r11,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r11.u64);
	// stb r3,0(r22)
	REX_STORE_U8(r22.u32 + 0, ctx.r3.u8);
	// mr r22,r30
	r22.u64 = r30.u64;
	// srawi r3,r26,2
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x3) != 0);
	ctx.r3.s64 = r26.s32 >> 2;
	// stb r27,-223(r1)
	REX_STORE_U8(ctx.r1.u32 + -223, r27.u8);
	// mr r21,r27
	r21.u64 = r27.u64;
	// lwz r9,-208(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// lwz r7,36(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// rlwimi r22,r29,2,22,27
	r22.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0x3F0) | (r22.u64 & 0xFFFFFFFFFFFFFC0F);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// srawi r20,r20,2
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x3) != 0);
	r20.s64 = r20.s32 >> 2;
	// srawi r14,r14,2
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x3) != 0);
	r14.s64 = r14.s32 >> 2;
	// mr r23,r29
	r23.u64 = r29.u64;
	// rlwinm r16,r31,0,28,29
	r16.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xC;
	// srawi r6,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// rlwinm r23,r22,2,24,27
	r23.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xF0;
	// lbz r22,-224(r1)
	r22.u64 = REX_LOAD_U8(ctx.r1.u32 + -224);
	// rlwimi r11,r21,2,22,27
	ctx.r11.u64 = (__builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0x3F0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwimi r5,r3,0,26,27
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x30) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFCF);
	// extsb r27,r28
	r27.s64 = r28.s8;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// or r6,r23,r6
	ctx.r6.u64 = r23.u64 | ctx.r6.u64;
	// srawi r3,r16,2
	ctx.xer.ca = (r16.s32 < 0) & ((r16.u32 & 0x3) != 0);
	ctx.r3.s64 = r16.s32 >> 2;
	// rlwinm r21,r11,2,24,27
	r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xF0;
	// rlwinm r28,r28,0,28,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xC;
	// rlwimi r5,r15,0,24,25
	ctx.r5.u64 = (__builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 0) & 0xC0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFF3F);
	// mr r26,r15
	r26.u64 = r15.u64;
	// or r3,r21,r3
	ctx.r3.u64 = r21.u64 | ctx.r3.u64;
	// stbu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r9.u32 = ea;
	// srawi r4,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 6;
	// rlwinm r26,r25,2,24,27
	r26.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xF0;
	// or r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 | r28.u64;
	// rlwinm r23,r19,0,28,29
	r23.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0xC;
	// srawi r27,r27,4
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0xF) != 0);
	r27.s64 = r27.s32 >> 4;
	// stb r6,1(r7)
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r6.u8);
	// extsb r30,r30
	r30.s64 = r30.s8;
	// lwz r6,44(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// or r5,r3,r23
	ctx.r5.u64 = ctx.r3.u64 | r23.u64;
	// or r26,r26,r20
	r26.u64 = r26.u64 | r20.u64;
	// rlwinm r22,r22,0,28,29
	r22.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xC;
	// srawi r30,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	r30.s64 = r30.s32 >> 2;
	// rlwimi r4,r27,0,28,29
	ctx.r4.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xC) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFF3);
	// stb r5,1(r6)
	REX_STORE_U8(ctx.r6.u32 + 1, ctx.r5.u8);
	// extsb r3,r31
	ctx.r3.s64 = r31.s8;
	// extsb r31,r19
	r31.s64 = r19.s8;
	// or r26,r26,r22
	r26.u64 = r26.u64 | r22.u64;
	// rlwimi r4,r30,0,26,27
	ctx.r4.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x30) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFCF);
	// srawi r3,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 6;
	// stbu r26,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, r26.u8);
	ctx.r10.u32 = ea;
	// rlwimi r18,r15,2,22,27
	r18.u64 = (__builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0x3F0) | (r18.u64 & 0xFFFFFFFFFFFFFC0F);
	// srawi r31,r31,4
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xF) != 0);
	r31.s64 = r31.s32 >> 4;
	// extsb r30,r24
	r30.s64 = r24.s8;
	// rlwinm r25,r18,2,24,27
	r25.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xF0;
	// srawi r5,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r5.s64 = r30.s32 >> 2;
	// rlwimi r3,r31,0,28,29
	ctx.r3.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xC) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFFF3);
	// addi r31,r10,1
	r31.s64 = ctx.r10.s64 + 1;
	// lwz r10,60(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 60);
	// or r27,r25,r14
	r27.u64 = r25.u64 | r14.u64;
	// rlwimi r3,r5,0,26,27
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x30) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFFCF);
	// lbz r5,-223(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + -223);
	// rlwinm r25,r17,0,28,29
	r25.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0xC;
	// stw r31,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, r31.u32);
	// rlwimi r4,r29,0,24,25
	ctx.r4.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xC0) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFF3F);
	// or r27,r27,r25
	r27.u64 = r27.u64 | r25.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stb r4,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r4.u8);
	// addi r25,r10,1
	r25.s64 = ctx.r10.s64 + 1;
	// lwz r10,68(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// stbu r27,1(r8)
	ea = 1 + ctx.r8.u32;
	REX_STORE_U8(ea, r27.u8);
	ctx.r8.u32 = ea;
	// rlwimi r30,r5,0,24,25
	r30.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xC0) | (r30.u64 & 0xFFFFFFFFFFFFFF3F);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// ld r11,-168(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// addi r27,r7,1
	r27.s64 = ctx.r7.s64 + 1;
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// lwz r7,-192(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// addi r26,r6,1
	r26.s64 = ctx.r6.s64 + 1;
	// stw r25,60(r1)
	REX_STORE_U32(ctx.r1.u32 + 60, r25.u32);
	// addi r24,r10,1
	r24.s64 = ctx.r10.s64 + 1;
	// stw r3,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r3.u32);
	// stw r4,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r4.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r27,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, r27.u32);
	// stw r26,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, r26.u32);
	// stb r30,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, r30.u8);
	// stw r24,68(r1)
	REX_STORE_U32(ctx.r1.u32 + 68, r24.u32);
	// bdnz 0x8274bbdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8274BBDC;
	// lwz r22,-200(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// lwz r23,-184(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
loc_8274BEA8:
	// clrlwi r10,r23,30
	ctx.r10.u64 = r23.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8274c100
	if (ctx.cr6.eq) goto loc_8274C100;
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r21,r23,0,30,30
	r21.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x2;
	// lbz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r6,1(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// lbz r5,3(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// extsb r30,r9
	r30.s64 = ctx.r9.s8;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// lbz r20,5(r11)
	r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lbz r19,6(r11)
	r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// srawi r30,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	r30.s64 = r30.s32 >> 2;
	// rlwimi r29,r8,0,26,27
	r29.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x30) | (r29.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwimi r28,r30,0,26,27
	r28.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x30) | (r28.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwimi r10,r6,2,22,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3F0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwimi r9,r5,2,22,27
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3F0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwinm r5,r29,0,24,27
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xF0;
	// rlwinm r29,r28,0,24,27
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xF0;
	// rlwinm r30,r10,2,24,27
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xF0;
	// rlwinm r28,r9,2,24,27
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xF0;
	// rlwinm r10,r20,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r9,r19,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r8,r20,4,24,25
	ctx.r8.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 4) & 0xC0;
	// rlwinm r6,r19,4,24,25
	ctx.r6.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 4) & 0xC0;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// cmplwi cr6,r21,2
	ctx.cr6.compare<uint32_t>(r21.u32, 2, ctx.xer);
	// bne cr6,0x8274c01c
	if (!ctx.cr6.eq) goto loc_8274C01C;
	// lbz r21,1(r11)
	r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// lbz r25,2(r11)
	r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// extsb r23,r21
	r23.s64 = r21.s8;
	// std r7,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r7.u64);
	// rlwinm r16,r25,0,28,29
	r16.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xC;
	// std r4,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r4.u64);
	// extsb r18,r25
	r18.s64 = r25.s8;
	// std r31,-216(r1)
	REX_STORE_U64(ctx.r1.u32 + -216, r31.u64);
	// srawi r25,r23,4
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0xF) != 0);
	r25.s64 = r23.s32 >> 4;
	// std r3,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r3.u64);
	// lbz r19,3(r11)
	r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// srawi r18,r18,6
	ctx.xer.ca = (r18.s32 < 0) & ((r18.u32 & 0x3F) != 0);
	r18.s64 = r18.s32 >> 6;
	// stb r25,-224(r1)
	REX_STORE_U8(ctx.r1.u32 + -224, r25.u8);
	// srawi r16,r16,2
	ctx.xer.ca = (r16.s32 < 0) & ((r16.u32 & 0x3) != 0);
	r16.s64 = r16.s32 >> 2;
	// lbz r20,4(r11)
	r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi r7,r19,24
	ctx.r7.u64 = r19.u32 & 0xFF;
	// lbz r17,5(r11)
	r17.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r21,r21,0,28,29
	r21.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xC;
	// rlwinm r14,r20,0,28,29
	r14.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0xC;
	// lbz r15,6(r11)
	r15.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// extsb r20,r20
	r20.s64 = r20.s8;
	// stb r19,-223(r1)
	REX_STORE_U8(ctx.r1.u32 + -223, r19.u8);
	// srawi r7,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 4;
	// lwz r24,68(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// srawi r20,r20,6
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x3F) != 0);
	r20.s64 = r20.s32 >> 6;
	// lwz r25,60(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 60);
	// extsb r4,r17
	ctx.r4.s64 = r17.s8;
	// lwz r22,-200(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// extsb r3,r15
	ctx.r3.s64 = r15.s8;
	// lwz r23,-184(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// rlwimi r7,r20,0,30,31
	ctx.r7.u64 = (__builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x3) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFFC);
	// srawi r14,r14,2
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x3) != 0);
	r14.s64 = r14.s32 >> 2;
	// srawi r4,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 2;
	// rlwinm r20,r19,0,28,29
	r20.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0xC;
	// srawi r19,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	r19.s64 = ctx.r3.s32 >> 2;
	// or r21,r16,r21
	r21.u64 = r16.u64 | r21.u64;
	// or r20,r14,r20
	r20.u64 = r14.u64 | r20.u64;
	// clrlwi r16,r7,28
	r16.u64 = ctx.r7.u32 & 0xF;
	// ld r7,-168(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// rlwinm r14,r4,0,26,27
	r14.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x30;
	// ld r4,-192(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// rlwinm r19,r19,0,26,27
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0x30;
	// ld r3,-208(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// or r30,r21,r30
	r30.u64 = r21.u64 | r30.u64;
	// lbz r31,-224(r1)
	r31.u64 = REX_LOAD_U8(ctx.r1.u32 + -224);
	// or r29,r16,r29
	r29.u64 = r16.u64 | r29.u64;
	// or r28,r20,r28
	r28.u64 = r20.u64 | r28.u64;
	// rlwimi r31,r18,0,30,31
	r31.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0x3) | (r31.u64 & 0xFFFFFFFFFFFFFFFC);
	// rlwinm r18,r17,2,26,27
	r18.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 2) & 0x30;
	// rlwinm r17,r15,2,26,27
	r17.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0x30;
	// clrlwi r15,r31,28
	r15.u64 = r31.u32 & 0xF;
	// ld r31,-216(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// or r8,r18,r8
	ctx.r8.u64 = r18.u64 | ctx.r8.u64;
	// or r6,r17,r6
	ctx.r6.u64 = r17.u64 | ctx.r6.u64;
	// or r5,r15,r5
	ctx.r5.u64 = r15.u64 | ctx.r5.u64;
	// or r10,r14,r10
	ctx.r10.u64 = r14.u64 | ctx.r10.u64;
	// or r9,r19,r9
	ctx.r9.u64 = r19.u64 | ctx.r9.u64;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
loc_8274C01C:
	// stb r5,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r5.u8);
	// clrlwi r5,r23,30
	ctx.r5.u64 = r23.u32 & 0x3;
	// stb r30,0(r31)
	REX_STORE_U8(r31.u32 + 0, r30.u8);
	// stb r29,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, r29.u8);
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// stb r28,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, r28.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bne cr6,0x8274c0e0
	if (!ctx.cr6.eq) goto loc_8274C0E0;
	// lbz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// clrlwi r30,r8,24
	r30.u64 = ctx.r8.u32 & 0xFF;
	// lbz r29,4(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// lbz r28,1(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r8,r5
	ctx.r8.s64 = ctx.r5.s8;
	// lbz r21,3(r11)
	r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// extsb r20,r29
	r20.s64 = r29.s8;
	// srawi r18,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	r18.s64 = ctx.r8.s32 >> 2;
	// lbz r19,5(r11)
	r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// mr r17,r28
	r17.u64 = r28.u64;
	// lbzu r8,6(r11)
	ea = 6 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// srawi r20,r20,2
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x3) != 0);
	r20.s64 = r20.s32 >> 2;
	// mr r16,r21
	r16.u64 = r21.u64;
	// rlwimi r17,r18,0,26,27
	r17.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0x30) | (r17.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwimi r5,r28,2,22,27
	ctx.r5.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x3F0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwimi r16,r20,0,26,27
	r16.u64 = (__builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x30) | (r16.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwinm r20,r17,0,24,27
	r20.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0xF0;
	// rlwimi r29,r21,2,22,27
	r29.u64 = (__builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0x3F0) | (r29.u64 & 0xFFFFFFFFFFFFFC0F);
	// extsb r15,r19
	r15.s64 = r19.s8;
	// stb r20,1(r7)
	REX_STORE_U8(ctx.r7.u32 + 1, r20.u8);
	// extsb r14,r8
	r14.s64 = ctx.r8.s8;
	// rlwinm r5,r5,2,24,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xF0;
	// srawi r28,r15,4
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0xF) != 0);
	r28.s64 = r15.s32 >> 4;
	// rlwinm r7,r29,2,24,27
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xF0;
	// stb r5,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r5.u8);
	// srawi r21,r14,4
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0xF) != 0);
	r21.s64 = r14.s32 >> 4;
	// rlwinm r5,r8,0,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC;
	// stb r7,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r7.u8);
	// rlwinm r8,r28,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xC;
	// rlwinm r18,r16,0,24,27
	r18.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 0) & 0xF0;
	// rlwinm r7,r21,0,28,29
	ctx.r7.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xC;
	// rlwinm r31,r19,0,28,29
	r31.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0xC;
	// stb r18,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, r18.u8);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// or r8,r31,r30
	ctx.r8.u64 = r31.u64 | r30.u64;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_8274C0E0:
	// stbu r8,1(r27)
	ea = 1 + r27.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	r27.u32 = ea;
	// stbu r6,1(r26)
	ea = 1 + r26.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	r26.u32 = ea;
	// stbu r10,1(r25)
	ea = 1 + r25.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	r25.u32 = ea;
	// stbu r9,1(r24)
	ea = 1 + r24.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	r24.u32 = ea;
	// stw r27,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, r27.u32);
	// stw r26,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, r26.u32);
	// stw r25,60(r1)
	REX_STORE_U32(ctx.r1.u32 + 60, r25.u32);
	// stw r24,68(r1)
	REX_STORE_U32(ctx.r1.u32 + 68, r24.u32);
loc_8274C100:
	// lwz r10,-180(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r4,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r4.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r3,r22,r3
	ctx.r3.u64 = r22.u64 + ctx.r3.u64;
	// add r4,r22,r4
	ctx.r4.u64 = r22.u64 + ctx.r4.u64;
	// stw r10,-180(r1)
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// stw r3,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r3.u32);
	// stw r4,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r4.u32);
	// bne 0x8274bbcc
	if (!ctx.cr0.eq) goto loc_8274BBCC;
loc_8274C12C:
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82792650) {
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
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,-13564
	ctx.r11.s64 = ctx.r11.s64 + -13564;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82793894
	ctx.lr = 0x8279266C;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r3,r11,13736
	ctx.r3.s64 = ctx.r11.s64 + 13736;
	// bl 0x8269d008
	ctx.lr = 0x82792678;
	sub_8269D008(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82792E48) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r11,r11,7216
	ctx.r11.s64 = ctx.r11.s64 + 7216;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x821225f8
	sub_821225F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82792ED0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r11,12736
	ctx.r3.s64 = ctx.r11.s64 + 12736;
	// b 0x82122800
	sub_82122800(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82792F70) {
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
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r31,r11,1028
	r31.s64 = ctx.r11.s64 + 1028;
	// lwz r11,1028(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1028);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// beq cr6,0x82792fd0
	if (ctx.cr6.eq) goto loc_82792FD0;
loc_82792FB4:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r30,0(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x82792FC0;
	sub_8269CE98(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82792fb4
	if (!ctx.cr6.eq) goto loc_82792FB4;
loc_82792FD0:
	// bl 0x8269ce98
	ctx.lr = 0x82792FD4;
	sub_8269CE98(ctx, base);
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

DEFINE_REX_FUNC(sub_82793EE8) {
	REX_FUNC_PROLOGUE();
	// .long 0x201026a
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_827940F8) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000012
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82794308) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010147
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8279B8E8) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c80
	ctx.lr = 0x8279B8F0;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r20,50(r3)
	r20.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r22,0(r7)
	r22.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// lwz r26,348(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r15,0
	r15.s64 = 0;
	// srawi r25,r20,1
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x1) != 0);
	r25.s64 = r20.s32 >> 1;
	// beq cr6,0x8279b934
	if (ctx.cr6.eq) goto loc_8279B934;
	// lwz r11,1304(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1304);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r18,r15
	r18.u64 = r15.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8279b938
	if (ctx.cr6.eq) goto loc_8279B938;
loc_8279B934:
	// li r18,1
	r18.s64 = 1;
loc_8279B938:
	// lwz r10,344(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 344);
	// lwz r31,0(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lhz r24,62(r27)
	r24.u64 = REX_LOAD_U16(r27.u32 + 62);
	// lhz r17,66(r27)
	r17.u64 = REX_LOAD_U16(r27.u32 + 66);
	// lhz r23,64(r27)
	r23.u64 = REX_LOAD_U16(r27.u32 + 64);
	// lbz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r30,0(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lhz r16,68(r27)
	r16.u64 = REX_LOAD_U16(r27.u32 + 68);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r11,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r30
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + r30.u32);
	// extsh r29,r5
	r29.s64 = ctx.r5.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x8279ba3c
	if (ctx.cr6.lt) goto loc_8279BA3C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = r29.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x8279ba34
	if (!ctx.cr6.lt) goto loc_8279BA34;
loc_8279B99C:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8279b9c8
	if (ctx.cr6.lt) goto loc_8279B9C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x8279B9B8;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8279b99c
	if (ctx.cr6.eq) goto loc_8279B99C;
	// srawi r29,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r29.s64 = r29.s32 >> 4;
	// b 0x8279ba7c
	goto loc_8279BA7C;
loc_8279B9C8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,5(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 0);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// sld r11,r8,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r3.u8 & 0x7F));
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// std r7,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r7.u64);
loc_8279BA34:
	// srawi r29,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r29.s64 = r29.s32 >> 4;
	// b 0x8279ba7c
	goto loc_8279BA7C;
loc_8279BA3C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x8279BA44;
	sub_82725F80(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r28,r11,32768
	r28.u64 = ctx.r11.u64 | 32768;
loc_8279BA4C:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x82725f80
	ctx.lr = 0x8279BA64;
	sub_82725F80(ctx, base);
	// add r10,r29,r28
	ctx.r10.u64 = r29.u64 + r28.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r30
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r30.u32);
	// extsh r29,r8
	r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x8279ba4c
	if (ctx.cr6.lt) goto loc_8279BA4C;
loc_8279BA7C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8279ba98
	if (ctx.cr6.eq) goto loc_8279BA98;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cd0
	return;
loc_8279BA98:
	// rlwinm r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8279bab4
	if (ctx.cr6.eq) goto loc_8279BAB4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,336(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 336);
	// bl 0x8279a080
	ctx.lr = 0x8279BAB4;
	sub_8279A080(ctx, base);
loc_8279BAB4:
	// stw r15,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r15.u32);
	// mr r10,r15
	ctx.r10.u64 = r15.u64;
	// stw r15,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r15.u32);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// stw r15,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r15.u32);
	// beq cr6,0x8279baf0
	if (ctx.cr6.eq) goto loc_8279BAF0;
	// lwz r11,-24(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + -24);
	// rlwinm r9,r11,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8279baf0
	if (ctx.cr6.eq) goto loc_8279BAF0;
	// rlwinm r11,r22,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
loc_8279BAF0:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// bne cr6,0x8279bbcc
	if (!ctx.cr6.eq) goto loc_8279BBCC;
	// rlwinm r9,r25,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r20,r22
	ctx.r11.u64 = r22.u64 - r20.u64;
	// add r9,r25,r9
	ctx.r9.u64 = r25.u64 + ctx.r9.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r8,r8,r21
	ctx.r8.u64 = r21.u64 - ctx.r8.u64;
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r7,r9,0,14,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8279bb58
	if (ctx.cr6.eq) goto loc_8279BB58;
	// rlwinm r9,r9,0,21,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x700;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r9,512
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 512, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bge cr6,0x8279bb44
	if (!ctx.cr6.lt) goto loc_8279BB44;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwzx r5,r9,r26
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + r26.u32);
	// stwx r5,r7,r6
	REX_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r5.u32);
	// b 0x8279bb58
	goto loc_8279BB58;
loc_8279BB44:
	// subf r9,r20,r11
	ctx.r9.u64 = ctx.r11.u64 - r20.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r6,r26
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + r26.u32);
	// stwx r4,r7,r5
	REX_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r4.u32);
loc_8279BB58:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// beq cr6,0x8279bbcc
	if (ctx.cr6.eq) goto loc_8279BBCC;
	// addi r9,r25,-1
	ctx.r9.s64 = r25.s64 + -1;
	// cmpw cr6,r19,r9
	ctx.cr6.compare<int32_t>(r19.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8279bb78
	if (ctx.cr6.eq) goto loc_8279BB78;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r9,r8,24
	ctx.r9.s64 = ctx.r8.s64 + 24;
	// b 0x8279bb80
	goto loc_8279BB80;
loc_8279BB78:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r8,-24
	ctx.r9.s64 = ctx.r8.s64 + -24;
loc_8279BB80:
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r9,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8279bbcc
	if (ctx.cr6.eq) goto loc_8279BBCC;
	// rlwinm r9,r9,0,21,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r9,512
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 512, ctx.xer);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bge cr6,0x8279bbb8
	if (!ctx.cr6.lt) goto loc_8279BBB8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwzx r7,r11,r26
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// stwx r7,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// b 0x8279bbcc
	goto loc_8279BBCC;
loc_8279BBB8:
	// subf r11,r20,r11
	ctx.r11.u64 = ctx.r11.u64 - r20.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r26
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + r26.u32);
	// stwx r6,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r6.u32);
loc_8279BBCC:
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8279bcfc
	if (!ctx.cr6.gt) goto loc_8279BCFC;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_8279BBF0:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r4,r5,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8279bc10
	if (ctx.cr6.eq) goto loc_8279BC10;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stwu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
	// b 0x8279bc18
	goto loc_8279BC18;
loc_8279BC10:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwu r5,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r8.u32 = ea;
loc_8279BC18:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8279bbf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8279BBF0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8279bcfc
	if (!ctx.cr6.gt) goto loc_8279BCFC;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x8279bc58
	if (ctx.cr6.eq) goto loc_8279BC58;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x8279bc58
	if (ctx.cr6.eq) goto loc_8279BC58;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8279bc4c
	if (ctx.cr6.lt) goto loc_8279BC4C;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8279bd00
	goto loc_8279BD00;
loc_8279BC4C:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8279bd00
	goto loc_8279BD00;
loc_8279BC58:
	// lhz r11,98(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// lhz r10,94(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 94);
	// lhz r9,90(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// extsh r31,r9
	r31.s64 = ctx.r9.s16;
	// lhz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 92);
	// extsh r30,r11
	r30.s64 = ctx.r11.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// subf r11,r31,r5
	ctx.r11.u64 = ctx.r5.u64 - r31.u64;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r9,r31,r7
	ctx.r9.u64 = ctx.r7.u64 - r31.u64;
	// subf r8,r30,r4
	ctx.r8.u64 = ctx.r4.u64 - r30.u64;
	// subf r28,r6,r4
	r28.u64 = ctx.r4.u64 - ctx.r6.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r14,r30,r6
	r14.u64 = ctx.r6.u64 - r30.u64;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r28,r28,r8
	r28.u64 = r28.u64 ^ ctx.r8.u64;
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// xor r8,r14,r8
	ctx.r8.u64 = r14.u64 ^ ctx.r8.u64;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// srawi r9,r28,31
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = r28.s32 >> 31;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// or r28,r11,r10
	r28.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r14,r9,r8
	r14.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 & r31.u64;
	// andc r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 & ~r28.u64;
	// and r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 & r30.u64;
	// andc r6,r6,r14
	ctx.r6.u64 = ctx.r6.u64 & ~r14.u64;
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// and r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 & ctx.r5.u64;
	// and r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 & ctx.r4.u64;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 | ctx.r5.u64;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r9,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// sth r8,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// b 0x8279bd00
	goto loc_8279BD00;
loc_8279BCFC:
	// stw r15,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r15.u32);
loc_8279BD00:
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r8,r29,31
	ctx.r8.u64 = r29.u32 & 0x1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r7,r11,r24
	ctx.r7.u64 = ctx.r11.u64 + r24.u64;
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// rlwinm r11,r22,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// and r4,r6,r16
	ctx.r4.u64 = ctx.r6.u64 & r16.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// and r5,r7,r17
	ctx.r5.u64 = ctx.r7.u64 & r17.u64;
	// subf r10,r23,r4
	ctx.r10.u64 = ctx.r4.u64 - r23.u64;
	// subf r3,r24,r5
	ctx.r3.u64 = ctx.r5.u64 - r24.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sth r3,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r3.u16);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// beq cr6,0x8279bd68
	if (ctx.cr6.eq) goto loc_8279BD68;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,336(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 336);
	// bl 0x8279a080
	ctx.lr = 0x8279BD68;
	sub_8279A080(ctx, base);
loc_8279BD68:
	// stw r15,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r15.u32);
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// stw r15,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r15.u32);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// stw r15,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r15.u32);
	// beq cr6,0x8279bda8
	if (ctx.cr6.eq) goto loc_8279BDA8;
	// lwz r11,-24(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + -24);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279bda8
	if (ctx.cr6.eq) goto loc_8279BDA8;
	// add r11,r22,r20
	ctx.r11.u64 = r22.u64 + r20.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + r26.u64;
	// lwz r9,-4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
loc_8279BDA8:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// bne cr6,0x8279be3c
	if (!ctx.cr6.eq) goto loc_8279BE3C;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r20,r22
	ctx.r10.u64 = r22.u64 - r20.u64;
	// add r11,r25,r11
	ctx.r11.u64 = r25.u64 + ctx.r11.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r9,r21
	ctx.r11.u64 = r21.u64 - ctx.r9.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r8,0,14,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8279bdec
	if (ctx.cr6.eq) goto loc_8279BDEC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwzx r5,r9,r26
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + r26.u32);
	// stwx r5,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r5.u32);
loc_8279BDEC:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// beq cr6,0x8279be3c
	if (ctx.cr6.eq) goto loc_8279BE3C;
	// addi r9,r25,-1
	ctx.r9.s64 = r25.s64 + -1;
	// cmpw cr6,r19,r9
	ctx.cr6.compare<int32_t>(r19.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8279be0c
	if (ctx.cr6.eq) goto loc_8279BE0C;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// b 0x8279be14
	goto loc_8279BE14;
loc_8279BE0C:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
loc_8279BE14:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r11,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8279be3c
	if (ctx.cr6.eq) goto loc_8279BE3C;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwzx r8,r11,r26
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
loc_8279BE3C:
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8279bf6c
	if (!ctx.cr6.gt) goto loc_8279BF6C;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_8279BE60:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r4,r5,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8279be80
	if (ctx.cr6.eq) goto loc_8279BE80;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// b 0x8279be88
	goto loc_8279BE88;
loc_8279BE80:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
loc_8279BE88:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8279be60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8279BE60;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8279bf6c
	if (!ctx.cr6.gt) goto loc_8279BF6C;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x8279bec8
	if (ctx.cr6.eq) goto loc_8279BEC8;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x8279bec8
	if (ctx.cr6.eq) goto loc_8279BEC8;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8279bebc
	if (ctx.cr6.lt) goto loc_8279BEBC;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8279bf70
	goto loc_8279BF70;
loc_8279BEBC:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8279bf70
	goto loc_8279BF70;
loc_8279BEC8:
	// lhz r11,98(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// lhz r10,94(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 94);
	// lhz r9,90(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// extsh r31,r9
	r31.s64 = ctx.r9.s16;
	// lhz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 92);
	// extsh r30,r11
	r30.s64 = ctx.r11.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// subf r11,r31,r5
	ctx.r11.u64 = ctx.r5.u64 - r31.u64;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r9,r31,r7
	ctx.r9.u64 = ctx.r7.u64 - r31.u64;
	// subf r8,r30,r4
	ctx.r8.u64 = ctx.r4.u64 - r30.u64;
	// subf r29,r6,r4
	r29.u64 = ctx.r4.u64 - ctx.r6.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r28,r30,r6
	r28.u64 = ctx.r6.u64 - r30.u64;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r29,r29,r8
	r29.u64 = r29.u64 ^ ctx.r8.u64;
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// xor r8,r28,r8
	ctx.r8.u64 = r28.u64 ^ ctx.r8.u64;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// srawi r9,r29,31
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = r29.s32 >> 31;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// or r29,r11,r10
	r29.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r28,r9,r8
	r28.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 & r31.u64;
	// andc r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 & ~r29.u64;
	// and r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 & r30.u64;
	// andc r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 & ~r28.u64;
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// and r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 & ctx.r5.u64;
	// and r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 & ctx.r4.u64;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 | ctx.r5.u64;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r9,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// sth r8,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// b 0x8279bf70
	goto loc_8279BF70;
loc_8279BF6C:
	// stw r15,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r15.u32);
loc_8279BF70:
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// lhz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r22,r20
	ctx.r11.u64 = r22.u64 + r20.u64;
	// add r8,r10,r23
	ctx.r8.u64 = ctx.r10.u64 + r23.u64;
	// add r5,r9,r24
	ctx.r5.u64 = ctx.r9.u64 + r24.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// and r7,r8,r16
	ctx.r7.u64 = ctx.r8.u64 & r16.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// and r10,r5,r17
	ctx.r10.u64 = ctx.r5.u64 & r17.u64;
	// subf r6,r23,r7
	ctx.r6.u64 = ctx.r7.u64 - r23.u64;
	// subf r9,r24,r10
	ctx.r9.u64 = ctx.r10.u64 - r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r6,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_827BD5D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x827BD5E0;
	// stwu r1,-912(r1)
	ea = -912 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,996(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 996);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// li r8,4
	ctx.r8.s64 = 4;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// slw r29,r8,r10
	r29.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// slw r28,r7,r9
	r28.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// subfic r10,r5,8
	ctx.xer.ca = ctx.r5.u32 <= 8;
	ctx.r10.u64 = static_cast<uint64_t>(8) - ctx.r5.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x827b1d48
	ctx.lr = 0x827BD62C;
	sub_827B1D48(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// vsplth v1,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// bl 0x827b98b0
	ctx.lr = 0x827BD650;
	sub_827B98B0(ctx, base);
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_827BEFB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cac
	ctx.lr = 0x827BEFB8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1156(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 1156);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r25,r1,128
	r25.s64 = ctx.r1.s64 + 128;
	// lbz r8,35(r7)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + 35);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// vspltish v0,7
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x7)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r31,1164(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 1164);
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// lwz r28,308(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,144
	r26.s64 = ctx.r1.s64 + 144;
	// stw r8,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// vspltish v1,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x1)));
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v12,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// vsplth v2,v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_set1_epi16(short(0xD0C))));
	// vsplth v11,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xD0C))));
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// stvx128 v0,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// stvx128 v11,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x827af878
	ctx.lr = 0x827BF030;
	sub_827AF878(ctx, base);
	// cntlzw r5,r28
	ctx.r5.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// vspltish v10,8
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x8)));
	// vspltish v8,-1
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// vspltisb v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// vspltish v9,3
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x3)));
	// and r9,r3,r27
	ctx.r9.u64 = ctx.r3.u64 & r27.u64;
	// vspltish v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x0)));
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// vslh v8,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// slw r9,r4,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r9.u8 & 0x3F));
	// bne cr6,0x827bf0e8
	if (!ctx.cr6.eq) goto loc_827BF0E8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827bf194
	if (!ctx.cr6.gt) goto loc_827BF194;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
loc_827BF084:
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvx128 v63,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v13,v0,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// vsldoi128 v10,v0,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// vsldoi128 v7,v0,v63,6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 10));
	// lvx128 v6,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v13,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v4,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vslh v3,v13,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v2,v11,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vadduhm v1,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v31,v1,v6
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v30,v31,v2
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsrah v29,v30,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v62,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vor v12,v12,v29
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// stvewx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// bdnz 0x827bf084
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827BF084;
	// b 0x827bf194
	goto loc_827BF194;
loc_827BF0E8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827bf194
	if (!ctx.cr6.gt) goto loc_827BF194;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_827BF100:
	// lvx128 v0,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lvx128 v13,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v10,v0,v61,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 12));
	// vsldoi128 v7,v0,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// vsldoi128 v6,v0,v61,6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 10));
	// vsldoi v5,v13,v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 12));
	// vsldoi v4,v13,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 14));
	// vadduhm v3,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsldoi v2,v13,v0,6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 10));
	// vadduhm v1,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v10,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vor v0,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vadduhm v31,v13,v2
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsubshs v30,v11,v1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v10,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v0,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v27,v11,v31
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vadduhm v26,v10,v29
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// lvx128 v10,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v25,v0,v28
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// lvx128 v0,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v24,v26,v10
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v23,v25,v10
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v13,v24,v27
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v22,v23,v30
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vsrah v21,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v20,v22,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v60,v12,v21
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v21.u8)));
	// vpkshus128 v59,v21,v20
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vor128 v12,v60,v20
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)v20.u8)));
	// stvx128 v59,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// bdnz 0x827bf100
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827BF100;
loc_827BF194:
	// vand v0,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// vcmpgtuh. v13,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// mfocrf r11,2
	ctx.r11.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cfc
	return;
}

