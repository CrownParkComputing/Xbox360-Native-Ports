#include "hydrothunder_funcs.54.h"

DEFINE_REX_FUNC(sub_82122860) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,28
	ctx.r9.s64 = 28;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r8,2340
	ctx.r8.s64 = 153354240;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// ori r8,r8,37448
	ctx.r8.u64 = ctx.r8.u64 | 37448;
	// divw r10,r10,r9
	ctx.r10.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82122890
	if (!ctx.cr6.gt) goto loc_82122890;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26548
	ctx.r3.s64 = ctx.r11.s64 + -26548;
	// b 0x822f6020
	sub_822F6020(ctx, base);
	return;
loc_82122890:
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// divw r11,r11,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r11.s32 / ctx.r9.s32 : 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r8,2340
	ctx.r8.s64 = 153354240;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r8,r8,37449
	ctx.r8.u64 = ctx.r8.u64 | 37449;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821228c8
	if (ctx.cr6.lt) goto loc_821228C8;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_821228C8:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821228d4
	if (!ctx.cr6.lt) goto loc_821228D4;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_821228D4:
	// b 0x821228e0
	sub_821228E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8212A8C0) {
	REX_FUNC_PROLOGUE();
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// ori r8,r10,65534
	ctx.r8.u64 = ctx.r10.u64 | 65534;
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8212a8ec
	if (!ctx.cr6.gt) goto loc_8212A8EC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26548
	ctx.r3.s64 = ctx.r11.s64 + -26548;
	// b 0x822f6020
	sub_822F6020(ctx, base);
	return;
loc_8212A8EC:
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r8,16383
	ctx.r8.s64 = 1073676288;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8212a924
	if (ctx.cr6.lt) goto loc_8212A924;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8212A924:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8212a930
	if (!ctx.cr6.lt) goto loc_8212A930;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_8212A930:
	// b 0x821458a0
	sub_821458A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8212E608) {
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
	// bl 0x8212e8b0
	ctx.lr = 0x8212E624;
	sub_8212E8B0(ctx, base);
	// lwz r31,240(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 240);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8212e654
	if (ctx.cr6.eq) goto loc_8212E654;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,25360
	ctx.r11.s64 = ctx.r11.s64 + 25360;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8269d1b8
	ctx.lr = 0x8212E644;
	sub_8269D1B8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x8269d1b8
	ctx.lr = 0x8212E64C;
	sub_8269D1B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8212E654;
	sub_8269CE98(ctx, base);
loc_8212E654:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,6048(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212E670;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_82132898) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x822f6280
	ctx.lr = 0x821328B4;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8213292c
	if (ctx.cr0.eq) goto loc_8213292C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-20476
	ctx.r11.s64 = ctx.r11.s64 + -20476;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// bl 0x822f6280
	ctx.lr = 0x821328D8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82132914
	if (ctx.cr0.eq) goto loc_82132914;
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r9,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r9,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r9.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stb r10,20(r9)
	REX_STORE_U8(ctx.r9.u32 + 20, ctx.r10.u8);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stb r10,21(r9)
	REX_STORE_U8(ctx.r9.u32 + 21, ctx.r10.u8);
	// b 0x82132930
	goto loc_82132930;
loc_82132914:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x8213292C;
	sub_82120018(ctx, base);
loc_8213292C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82132930:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r11,r11,6088
	ctx.r11.s64 = ctx.r11.s64 + 6088;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_82137838) {
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
	// bl 0x826a1cac
	ctx.lr = 0x82137840;
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32106
	r26.s64 = -2104098816;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r3,6060(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6060);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// bl 0x8212dd28
	ctx.lr = 0x82137870;
	sub_8212DD28(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82137880;
	sub_826A1E70(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lwz r3,6060(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6060);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r10,30952
	ctx.r7.s64 = ctx.r10.s64 + 30952;
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f1,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f1.f64 = double(temp.f32);
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// stb r11,64(r25)
	REX_STORE_U8(r25.u32 + 64, ctx.r11.u8);
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1);
	// stb r11,65(r25)
	REX_STORE_U8(r25.u32 + 65, ctx.r11.u8);
	// lbz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 2);
	// stb r11,66(r25)
	REX_STORE_U8(r25.u32 + 66, ctx.r11.u8);
	// lbz r11,3(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 3);
	// stfs f31,68(r25)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r25.u32 + 68, temp.u32);
	// stb r11,67(r25)
	REX_STORE_U8(r25.u32 + 67, ctx.r11.u8);
	// stw r29,72(r25)
	REX_STORE_U32(r25.u32 + 72, r29.u32);
	// stw r28,76(r25)
	REX_STORE_U32(r25.u32 + 76, r28.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,76(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x82139b18
	ctx.lr = 0x821378D8;
	sub_82139B18(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8213CC48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8213CC50;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213cd10
	if (!ctx.cr6.eq) goto loc_8213CD10;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8213cd10
	if (!ctx.cr6.eq) goto loc_8213CD10;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8213cf00
	ctx.lr = 0x8213CC84;
	sub_8213CF00(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// b 0x8213cd1c
	goto loc_8213CD1C;
loc_8213CC94:
	// lbz r11,41(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 41);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8213cd04
	if (!ctx.cr0.eq) goto loc_8213CD04;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lbz r11,41(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 41);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8213ccd8
	if (!ctx.cr0.eq) goto loc_8213CCD8;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8213ccc4
	goto loc_8213CCC4;
loc_8213CCBC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8213CCC4:
	// lbz r9,41(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8213ccbc
	if (ctx.cr0.eq) goto loc_8213CCBC;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// b 0x8213cd04
	goto loc_8213CD04;
loc_8213CCD8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x8213ccf4
	goto loc_8213CCF4;
loc_8213CCE0:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213cd00
	if (!ctx.cr6.eq) goto loc_8213CD00;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8213CCF4:
	// lbz r10,41(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8213cce0
	if (ctx.cr0.eq) goto loc_8213CCE0;
loc_8213CD00:
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_8213CD04:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8213c4a8
	ctx.lr = 0x8213CD10;
	sub_8213C4A8(ctx, base);
loc_8213CD10:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bne cr6,0x8213cc94
	if (!ctx.cr6.eq) goto loc_8213CC94;
	// stw r31,0(r28)
	REX_STORE_U32(r28.u32 + 0, r31.u32);
loc_8213CD1C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82145A58) {
	REX_FUNC_PROLOGUE();
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// subf r10,r11,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r8,r4,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r4.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82145a88
	if (!ctx.cr6.lt) goto loc_82145A88;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26548
	ctx.r3.s64 = ctx.r11.s64 + -26548;
	// b 0x822f6020
	sub_822F6020(ctx, base);
	return;
loc_82145A88:
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82145ab8
	if (ctx.cr6.lt) goto loc_82145AB8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82145AB8:
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82145ac4
	if (!ctx.cr6.lt) goto loc_82145AC4;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_82145AC4:
	// b 0x821458a0
	sub_821458A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82148FB8) {
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
	// addi r11,r11,-13340
	ctx.r11.s64 = ctx.r11.s64 + -13340;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82148fe4
	if (ctx.cr0.eq) goto loc_82148FE4;
	// bl 0x8269ce98
	ctx.lr = 0x82148FE4;
	sub_8269CE98(ctx, base);
loc_82148FE4:
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

DEFINE_REX_FUNC(sub_8214B0A0) {
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
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8214b1f0
	if (ctx.cr6.eq) goto loc_8214B1F0;
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// lwz r6,0(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// ori r31,r11,65534
	r31.u64 = ctx.r11.u64 | 65534;
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// b 0x8214b170
	goto loc_8214B170;
loc_8214B0D8:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8214b1f0
	if (ctx.cr6.eq) goto loc_8214B1F0;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lfs f0,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,24(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8214b100
	if (ctx.cr6.lt) goto loc_8214B100;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8214B100:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8214b16c
	if (ctx.cr0.eq) goto loc_8214B16C;
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r5,r8,r31
	ctx.r5.u64 = r31.u64 - ctx.r8.u64;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x8214b1a0
	if (ctx.cr6.lt) goto loc_8214B1A0;
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// lwz r5,4(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stw r5,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r5.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r5,4(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r30,4(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,4(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r30,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, r30.u32);
	// lwz r30,0(r8)
	r30.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r30,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// stw r5,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// b 0x8214b170
	goto loc_8214B170;
loc_8214B16C:
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
loc_8214B170:
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8214b0d8
	if (!ctx.cr6.eq) goto loc_8214B0D8;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8214b1f0
	if (ctx.cr6.eq) goto loc_8214B1F0;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// subf r8,r9,r31
	ctx.r8.u64 = r31.u64 - ctx.r9.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8214b1ac
	if (!ctx.cr6.lt) goto loc_8214B1AC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26228
	ctx.r3.s64 = ctx.r11.s64 + -26228;
	// bl 0x822f6020
	ctx.lr = 0x8214B1A0;
	sub_822F6020(ctx, base);
loc_8214B1A0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26228
	ctx.r3.s64 = ctx.r11.s64 + -26228;
	// bl 0x822f6020
	ctx.lr = 0x8214B1AC;
	sub_822F6020(ctx, base);
loc_8214B1AC:
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r10,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r9,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8214B1F0:
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

DEFINE_REX_FUNC(sub_821550F8) {
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
	// addis r30,r3,1
	r30.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r30,-25092
	r30.s64 = r30.s64 + -25092;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8215513c
	if (ctx.cr6.eq) goto loc_8215513C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-9312
	ctx.r4.s64 = ctx.r11.s64 + -9312;
	// addi r3,r10,-9244
	ctx.r3.s64 = ctx.r10.s64 + -9244;
	// li r5,184
	ctx.r5.s64 = 184;
	// bl 0x821231d0
	ctx.lr = 0x8215513C;
	sub_821231D0(ctx, base);
loc_8215513C:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// lwz r3,6068(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6068);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82155158;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r10,-23868
	ctx.r5.s64 = ctx.r10.s64 + -23868;
	// lwz r3,6048(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215517C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82159E18) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x82159e40
	if (!ctx.cr6.eq) goto loc_82159E40;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82159E40:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6068(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6068);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82159E58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,21984
	ctx.r10.s64 = ctx.r10.s64 + 21984;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r31,6048(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// bl 0x822f6280
	ctx.lr = 0x82159E7C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82159ea4
	if (ctx.cr0.eq) goto loc_82159EA4;
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
	// b 0x82159ea8
	goto loc_82159EA8;
loc_82159EA4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82159EA8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r10,-25728
	ctx.r5.s64 = ctx.r10.s64 + -25728;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82159EC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6044(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6044);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82159EDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stw r3,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r3.u32);
	// lwz r3,6116(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82159f34
	if (ctx.cr6.eq) goto loc_82159F34;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-7636
	ctx.r4.s64 = ctx.r10.s64 + -7636;
	// lfs f0,680(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 680);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,684(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 684);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,584(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 584);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82159F34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82159F34:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

DEFINE_REX_FUNC(sub_82161700) {
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
	ctx.lr = 0x82161708;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r27,4
	ctx.r4.s64 = r27.s64 + 4;
	// bl 0x821613d8
	ctx.lr = 0x82161724;
	sub_821613D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r27,8
	ctx.r4.s64 = r27.s64 + 8;
	// bl 0x821613d8
	ctx.lr = 0x82161734;
	sub_821613D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r27,12
	ctx.r4.s64 = r27.s64 + 12;
	// bl 0x821613d8
	ctx.lr = 0x82161744;
	sub_821613D8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821613d8
	ctx.lr = 0x82161754;
	sub_821613D8(ctx, base);
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24);
	// addi r25,r27,16
	r25.s64 = r27.s64 + 16;
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821617b8
	if (!ctx.cr6.gt) goto loc_821617B8;
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
	// bgt cr6,0x82161780
	if (ctx.cr6.gt) goto loc_82161780;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82161780:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821617b8
	if (!ctx.cr6.gt) goto loc_821617B8;
	// li r4,16
	ctx.r4.s64 = 16;
	// mulli r3,r29,44
	ctx.r3.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(44));
	// bl 0x8269d1d0
	ctx.lr = 0x82161794;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r4,0(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mulli r5,r11,44
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(44));
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821617A8;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x821617B0;
	sub_8269D1B8(ctx, base);
	// stw r28,0(r25)
	REX_STORE_U32(r25.u32 + 0, r28.u32);
	// stw r29,8(r25)
	REX_STORE_U32(r25.u32 + 8, r29.u32);
loc_821617B8:
	// stw r30,4(r25)
	REX_STORE_U32(r25.u32 + 4, r30.u32);
	// mulli r5,r30,44
	ctx.r5.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(44));
	// lwz r4,0(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821613d8
	ctx.lr = 0x821617CC;
	sub_821613D8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821613d8
	ctx.lr = 0x821617DC;
	sub_821613D8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821613d8
	ctx.lr = 0x821617EC;
	sub_821613D8(ctx, base);
	// li r6,9
	ctx.r6.s64 = 9;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,84(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82177510
	ctx.lr = 0x82161804;
	sub_82177510(ctx, base);
	// stw r3,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82161818
	if (!ctx.cr0.eq) goto loc_82161818;
loc_82161810:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821619cc
	goto loc_821619CC;
loc_82161818:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82161834;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mullw r5,r11,r30
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// bl 0x821613d8
	ctx.lr = 0x82161848;
	sub_821613D8(ctx, base);
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82161860;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821613d8
	ctx.lr = 0x82161870;
	sub_821613D8(ctx, base);
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 36);
	// addi r29,r27,28
	r29.s64 = r27.s64 + 28;
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821618d4
	if (!ctx.cr6.gt) goto loc_821618D4;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(r30.s32, r28.s32, ctx.xer);
	// bgt cr6,0x8216189c
	if (ctx.cr6.gt) goto loc_8216189C;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_8216189C:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821618d4
	if (!ctx.cr6.gt) goto loc_821618D4;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269d1d0
	ctx.lr = 0x821618B0;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x821618C4;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x821618CC;
	sub_8269D1B8(ctx, base);
	// stw r26,0(r29)
	REX_STORE_U32(r29.u32 + 0, r26.u32);
	// stw r30,8(r29)
	REX_STORE_U32(r29.u32 + 8, r30.u32);
loc_821618D4:
	// rotlwi r10,r28,0
	ctx.r10.u64 = __builtin_rotateleft32(r28.u32, 0);
	// stw r28,4(r29)
	REX_STORE_U32(r29.u32 + 4, r28.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// extsw r30,r11
	r30.s64 = ctx.r11.s32;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82161984
	if (ctx.cr6.eq) goto loc_82161984;
	// lis r26,-32106
	r26.s64 = -2104098816;
loc_821618F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r28,r11,r10
	r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_82161908:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82161908
	if (!ctx.cr6.eq) goto loc_82161908;
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82161448
	ctx.lr = 0x82161930;
	sub_82161448(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120600
	ctx.lr = 0x8216193C;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,6040(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6040);
	// bl 0x82154c08
	ctx.lr = 0x82161948;
	sub_82154C08(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8216195C;
	sub_82120AC0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82161810
	if (ctx.cr6.eq) goto loc_82161810;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821618f8
	if (!ctx.cr6.eq) goto loc_821618F8;
loc_82161984:
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821619c8
	if (!ctx.cr6.gt) goto loc_821619C8;
	// addi r30,r27,40
	r30.s64 = r27.s64 + 40;
loc_82161998:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82162650
	ctx.lr = 0x821619A4;
	sub_82162650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82162130
	ctx.lr = 0x821619B0;
	sub_82162130(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// sth r11,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82161998
	if (ctx.cr6.lt) goto loc_82161998;
loc_821619C8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821619CC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82179FD8) {
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
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6060(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6060);
	// bl 0x8212e8b0
	ctx.lr = 0x82179FF8;
	sub_8212E8B0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x821788c8
	ctx.lr = 0x8217A000;
	sub_821788C8(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6136(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6136);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217A01C;
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

DEFINE_REX_FUNC(sub_8217B158) {
	REX_FUNC_PROLOGUE();
	// lwz r9,76(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// addi r6,r3,44
	ctx.r6.s64 = ctx.r3.s64 + 44;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8217b1b4
	if (ctx.cr6.eq) goto loc_8217B1B4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r7,r11,-17552
	ctx.r7.s64 = ctx.r11.s64 + -17552;
loc_8217B170:
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_8217B17C:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// beq 0x8217b1a0
	if (ctx.cr0.eq) goto loc_8217B1A0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8217b17c
	if (ctx.cr6.eq) goto loc_8217B17C;
loc_8217B1A0:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8217b1b8
	if (ctx.cr0.eq) goto loc_8217B1B8;
	// lwz r9,32(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8217b170
	if (!ctx.cr6.eq) goto loc_8217B170;
loc_8217B1B4:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8217B1B8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8217b1cc
	if (ctx.cr6.eq) goto loc_8217B1CC;
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// blr 
	return;
loc_8217B1CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217F0F0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
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

DEFINE_REX_FUNC(sub_8217F220) {
	REX_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217F4B0) {
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
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// ble cr6,0x8217f4f0
	if (!ctx.cr6.gt) goto loc_8217F4F0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,29744
	ctx.r4.s64 = ctx.r11.s64 + 29744;
	// addi r3,r10,29812
	ctx.r3.s64 = ctx.r10.s64 + 29812;
	// li r5,54
	ctx.r5.s64 = 54;
	// bl 0x821231d0
	ctx.lr = 0x8217F4F0;
	sub_821231D0(ctx, base);
loc_8217F4F0:
	// sth r30,0(r31)
	REX_STORE_U16(r31.u32 + 0, r30.u16);
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

DEFINE_REX_FUNC(sub_82183888) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r3,144
	ctx.r5.s64 = ctx.r3.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823fbd18
	ctx.lr = 0x821838A8;
	sub_823FBD18(ctx, base);
	// ld r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// ld r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f13,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f12,244(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 244);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// std r8,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r7,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// lfs f11,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fabs f10,f10
	ctx.f10.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f0,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fabs f11,f11
	ctx.f11.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
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
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// rlwinm r8,r10,27,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// rlwinm r10,r10,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// lfsx f11,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f13,f11,f13,f0
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
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
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// rlwinm r10,r10,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lfsx f11,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f0,f11,f12,f0
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// fmadds f1,f0,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
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

DEFINE_REX_FUNC(sub_8218F0C0) {
	REX_FUNC_PROLOGUE();
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x826a2c90
	ctx.lr = 0x8218F0D8;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f1,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,16592
	r30.s64 = ctx.r11.s64 + 16592;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,172(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,596(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 596);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x821265f8
	ctx.lr = 0x8218F110;
	sub_821265F8(ctx, base);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// lfs f13,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f12,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f29,f13,f0
	f29.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f28,f12,f0
	f28.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f31,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	f31.f64 = double(temp.f32);
	// lfs f30,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	f30.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f31,128(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f27,f29,f13
	f27.f64 = double(float(f29.f64 * ctx.f13.f64));
	// fmuls f26,f28,f13
	f26.f64 = double(float(f28.f64 * ctx.f13.f64));
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmuls f25,f28,f0
	f25.f64 = double(float(f28.f64 * ctx.f0.f64));
	// fsubs f24,f31,f27
	f24.f64 = double(float(f31.f64 - f27.f64));
	// fmuls f23,f13,f29
	f23.f64 = double(float(ctx.f13.f64 * f29.f64));
	// fsubs f0,f24,f25
	ctx.f0.f64 = double(float(f24.f64 - f25.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f22,f30,f23
	f22.f64 = double(float(f30.f64 - f23.f64));
	// fsubs f0,f22,f26
	ctx.f0.f64 = double(float(f22.f64 - f26.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x8216cea8
	ctx.lr = 0x8218F178;
	sub_8216CEA8(ctx, base);
	// fadds f31,f27,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f27.f64 + f31.f64));
	// fadds f30,f23,f30
	f30.f64 = double(float(f23.f64 + f30.f64));
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fsubs f0,f31,f25
	ctx.f0.f64 = double(float(f31.f64 - f25.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f0,f30,f26
	ctx.f0.f64 = double(float(f30.f64 - f26.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x8216cea8
	ctx.lr = 0x8218F1A0;
	sub_8216CEA8(ctx, base);
	// fadds f0,f31,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 + f25.f64));
	// fadds f13,f30,f26
	ctx.f13.f64 = double(float(f30.f64 + f26.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216cea8
	ctx.lr = 0x8218F1C0;
	sub_8216CEA8(ctx, base);
	// fadds f0,f24,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f24.f64 + f25.f64));
	// fadds f13,f22,f26
	ctx.f13.f64 = double(float(f22.f64 + f26.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216cea8
	ctx.lr = 0x8218F1E0;
	sub_8216CEA8(ctx, base);
	// fmuls f0,f29,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f29.f64 * f29.f64));
	// lfs f12,108(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// ld r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// lfs f13,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// std r11,48(r31)
	REX_STORE_U64(r31.u32 + 48, ctx.r11.u64);
	// fmadds f0,f28,f28,f0
	ctx.f0.f64 = double(float(std::fma(f28.f64, f28.f64, ctx.f0.f64)));
	// lfs f13,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f13,124(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// std r10,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r10.u64);
	// ld r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
	// std r10,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r10.u64);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x826a2cdc
	ctx.lr = 0x8218F264;
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

DEFINE_REX_FUNC(sub_8219D2C8) {
	REX_FUNC_PROLOGUE();
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
	// ld r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 64);
	// ld r10,72(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 72);
	// std r11,48(r3)
	REX_STORE_U64(ctx.r3.u32 + 48, ctx.r11.u64);
	// std r10,56(r3)
	REX_STORE_U64(ctx.r3.u32 + 56, ctx.r10.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219D868) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82167098
	ctx.lr = 0x8219D890;
	sub_82167098(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219d928
	if (ctx.cr0.eq) goto loc_8219D928;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8219d928
	if (ctx.cr6.eq) goto loc_8219D928;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219D8C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r9,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// lbz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// stb r9,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r9.u8);
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219D904;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219d928
	if (ctx.cr0.eq) goto loc_8219D928;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8219d928
	if (ctx.cr6.eq) goto loc_8219D928;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219D928;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8219D928:
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

DEFINE_REX_FUNC(sub_821A3AF8) {
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
	// lwz r10,-20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + -20);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r4,-16(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + -16);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A3B30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_821A47C0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
	// b 0x821a3e98
	sub_821A3E98(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A5968) {
	REX_FUNC_PROLOGUE();
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A6200) {
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
	ctx.lr = 0x821A6208;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,96(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// addi r29,r3,96
	r29.s64 = ctx.r3.s64 + 96;
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x821a6250
	if (!ctx.cr6.gt) goto loc_821A6250;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_821A6224:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// add r28,r11,r30
	r28.u64 = ctx.r11.u64 + r30.u64;
	// addi r3,r28,32
	ctx.r3.s64 = r28.s64 + 32;
	// bl 0x8215f0f0
	ctx.lr = 0x821A6234;
	sub_8215F0F0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
	// bl 0x82120ac0
	ctx.lr = 0x821A6244;
	sub_82120AC0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// bne 0x821a6224
	if (!ctx.cr0.eq) goto loc_821A6224;
loc_821A6250:
	// lbz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821a6264
	if (ctx.cr0.eq) goto loc_821A6264;
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
	// bl 0x8269d1b8
	ctx.lr = 0x821A6264;
	sub_8269D1B8(ctx, base);
loc_821A6264:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r27,0(r29)
	REX_STORE_U32(r29.u32 + 0, r27.u32);
	// stw r27,4(r29)
	REX_STORE_U32(r29.u32 + 4, r27.u32);
	// stw r27,8(r29)
	REX_STORE_U32(r29.u32 + 8, r27.u32);
	// stb r11,12(r29)
	REX_STORE_U8(r29.u32 + 12, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821A8258) {
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
	ctx.lr = 0x821A8260;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r6,76(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r3,72
	ctx.r4.s64 = ctx.r3.s64 + 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x8213cc48
	ctx.lr = 0x821A827C;
	sub_8213CC48(ctx, base);
	// lwz r3,76(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 76);
	// bl 0x8269ce98
	ctx.lr = 0x821A8284;
	sub_8269CE98(ctx, base);
	// addi r3,r28,56
	ctx.r3.s64 = r28.s64 + 56;
	// bl 0x821a8950
	ctx.lr = 0x821A828C;
	sub_821A8950(ctx, base);
	// lbz r11,52(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 52);
	// addi r29,r28,40
	r29.s64 = r28.s64 + 40;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821a82a4
	if (ctx.cr0.eq) goto loc_821A82A4;
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
	// bl 0x8269d1b8
	ctx.lr = 0x821A82A4;
	sub_8269D1B8(ctx, base);
loc_821A82A4:
	// li r31,0
	r31.s64 = 0;
	// li r27,1
	r27.s64 = 1;
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r28,24
	r30.s64 = r28.s64 + 24;
	// stw r31,4(r29)
	REX_STORE_U32(r29.u32 + 4, r31.u32);
	// stw r31,8(r29)
	REX_STORE_U32(r29.u32 + 8, r31.u32);
	// stb r27,12(r29)
	REX_STORE_U8(r29.u32 + 12, r27.u8);
	// lbz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821a82d4
	if (ctx.cr0.eq) goto loc_821A82D4;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x8269d1b8
	ctx.lr = 0x821A82D4;
	sub_8269D1B8(ctx, base);
loc_821A82D4:
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r29,r28,8
	r29.s64 = r28.s64 + 8;
	// stw r31,4(r30)
	REX_STORE_U32(r30.u32 + 4, r31.u32);
	// stw r31,8(r30)
	REX_STORE_U32(r30.u32 + 8, r31.u32);
	// stb r27,12(r30)
	REX_STORE_U8(r30.u32 + 12, r27.u8);
	// lbz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821a82fc
	if (ctx.cr0.eq) goto loc_821A82FC;
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
	// bl 0x8269d1b8
	ctx.lr = 0x821A82FC;
	sub_8269D1B8(ctx, base);
loc_821A82FC:
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
	// stw r31,4(r29)
	REX_STORE_U32(r29.u32 + 4, r31.u32);
	// stw r31,8(r29)
	REX_STORE_U32(r29.u32 + 8, r31.u32);
	// stb r27,12(r29)
	REX_STORE_U8(r29.u32 + 12, r27.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821AD898) {
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
	ctx.lr = 0x821AD8A0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r10,68(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// addi r31,r3,64
	r31.s64 = ctx.r3.s64 + 64;
	// li r29,0
	r29.s64 = 0;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821ad930
	if (!ctx.cr0.gt) goto loc_821AD930;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r30,0
	r30.s64 = 0;
	// addi r28,r11,-15256
	r28.s64 = ctx.r11.s64 + -15256;
loc_821AD8D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x821fd140
	ctx.lr = 0x821AD8E0;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ad910
	if (ctx.cr0.eq) goto loc_821AD910;
	// lwz r11,120(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 120);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ad900
	if (ctx.cr6.eq) goto loc_821AD900;
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x821ad904
	goto loc_821AD904;
loc_821AD900:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821AD904:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x821ac3e0
	ctx.lr = 0x821AD910;
	sub_821AC3E0(ctx, base);
loc_821AD910:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821ad8d0
	if (ctx.cr6.lt) goto loc_821AD8D0;
loc_821AD930:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821B2578) {
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
	ctx.lr = 0x821B2580;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// mr r28,r25
	r28.u64 = r25.u64;
	// bl 0x82178268
	ctx.lr = 0x821B259C;
	sub_82178268(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r25,132(r31)
	REX_STORE_U32(r31.u32 + 132, r25.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r10,r10,-22528
	ctx.r10.s64 = ctx.r10.s64 + -22528;
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r30,r31,124
	r30.s64 = r31.s64 + 124;
	// addi r27,r31,128
	r27.s64 = r31.s64 + 128;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// stfs f13,128(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B25D4;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b2604
	if (ctx.cr0.eq) goto loc_821B2604;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-22696
	ctx.r4.s64 = ctx.r11.s64 + -22696;
	// bl 0x82120600
	ctx.lr = 0x821B25EC;
	sub_82120600(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x82196ba8
	ctx.lr = 0x821B2600;
	sub_82196BA8(ctx, base);
	// b 0x821b2608
	goto loc_821B2608;
loc_821B2604:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_821B2608:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r29,r31,80
	r29.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821B261C;
	sub_82145710(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 36);
	// bl 0x8269ce98
	ctx.lr = 0x821B2628;
	sub_8269CE98(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821B2630;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r26,r11,-29688
	r26.s64 = ctx.r11.s64 + -29688;
	// beq 0x821b265c
	if (ctx.cr0.eq) goto loc_821B265C;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,10712
	ctx.r10.s64 = ctx.r10.s64 + 10712;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821b2660
	goto loc_821B2660;
loc_821B265C:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821B2660:
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
	// stb r25,33(r30)
	REX_STORE_U8(r30.u32 + 33, r25.u8);
	// beq 0x821b2684
	if (ctx.cr0.eq) goto loc_821B2684;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r28,r28,0,0,30
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821B2684;
	sub_82120AC0(ctx, base);
loc_821B2684:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B268C;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821b26bc
	if (ctx.cr0.eq) goto loc_821B26BC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-22684
	ctx.r4.s64 = ctx.r11.s64 + -22684;
	// bl 0x82120600
	ctx.lr = 0x821B26A4;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r28,r28,2
	r28.u64 = r28.u64 | 2;
	// bl 0x821a0530
	ctx.lr = 0x821B26B8;
	sub_821A0530(ctx, base);
	// b 0x821b26c0
	goto loc_821B26C0;
loc_821B26BC:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_821B26C0:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821B26D0;
	sub_82145710(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 36);
	// bl 0x8269ce98
	ctx.lr = 0x821B26DC;
	sub_8269CE98(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821B26E4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b2708
	if (ctx.cr0.eq) goto loc_821B2708;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,10712
	ctx.r10.s64 = ctx.r10.s64 + 10712;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821b270c
	goto loc_821B270C;
loc_821B2708:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821B270C:
	// rlwinm. r10,r28,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
	// stb r25,33(r30)
	REX_STORE_U8(r30.u32 + 33, r25.u8);
	// beq 0x821b272c
	if (ctx.cr0.eq) goto loc_821B272C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x821B272C;
	sub_82120AC0(ctx, base);
loc_821B272C:
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x822f6280
	ctx.lr = 0x821B2734;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b274c
	if (ctx.cr0.eq) goto loc_821B274C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821a1e80
	ctx.lr = 0x821B2744;
	sub_821A1E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821b2750
	goto loc_821B2750;
loc_821B274C:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_821B2750:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821B2760;
	sub_821D3988(ctx, base);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821B2768;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b2780
	if (ctx.cr0.eq) goto loc_821B2780;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dffe8
	ctx.lr = 0x821B2778;
	sub_821DFFE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821b2784
	goto loc_821B2784;
loc_821B2780:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_821B2784:
	// stw r4,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821B2790;
	sub_821D3988(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x821B2798;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b27b0
	if (ctx.cr0.eq) goto loc_821B27B0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821b2c78
	ctx.lr = 0x821B27A8;
	sub_821B2C78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821b27b4
	goto loc_821B27B4;
loc_821B27B0:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_821B27B4:
	// stw r4,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821B27C0;
	sub_821D3988(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r30,112(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x822f6280
	ctx.lr = 0x821B27CC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b27f4
	if (ctx.cr0.eq) goto loc_821B27F4;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r9,10712
	ctx.r9.s64 = ctx.r9.s64 + 10712;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x821b27f8
	goto loc_821B27F8;
loc_821B27F4:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821B27F8:
	// stw r11,96(r30)
	REX_STORE_U32(r30.u32 + 96, ctx.r11.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r30,116(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 116);
	// bl 0x822f6280
	ctx.lr = 0x821B2808;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b2830
	if (ctx.cr0.eq) goto loc_821B2830;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r9,10712
	ctx.r9.s64 = ctx.r9.s64 + 10712;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x821b2834
	goto loc_821B2834;
loc_821B2830:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821B2834:
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
	// li r4,39
	ctx.r4.s64 = 39;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x821a1ff8
	ctx.lr = 0x821B2844;
	sub_821A1FF8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,116(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 116);
	// bl 0x821e00d0
	ctx.lr = 0x821B2850;
	sub_821E00D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_821C5560) {
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
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821c5598
	if (ctx.cr6.eq) goto loc_821C5598;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C5598;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C5598:
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 68);
	// bl 0x8269d6a0
	ctx.lr = 0x821C55A0;
	sub_8269D6A0(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// bl 0x8269d1b8
	ctx.lr = 0x821C55A8;
	sub_8269D1B8(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// bl 0x8269d1b8
	ctx.lr = 0x821C55B0;
	sub_8269D1B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821C55B8;
	sub_8269CE98(ctx, base);
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

DEFINE_REX_FUNC(sub_821C9230) {
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
	// lbz r11,132(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 132);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c9274
	if (ctx.cr0.eq) goto loc_821C9274;
	// lbz r11,225(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 225);
	// addi r31,r3,144
	r31.s64 = ctx.r3.s64 + 144;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c9274
	if (!ctx.cr0.eq) goto loc_821C9274;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6216(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6216);
	// bl 0x821597e8
	ctx.lr = 0x821C926C;
	sub_821597E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,81(r31)
	REX_STORE_U8(r31.u32 + 81, ctx.r11.u8);
loc_821C9274:
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

DEFINE_REX_FUNC(sub_821CB9D8) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-15420
	ctx.r10.s64 = ctx.r10.s64 + -15420;
loc_821CB9E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cba08
	if (ctx.cr0.eq) goto loc_821CBA08;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cb9e4
	if (ctx.cr6.eq) goto loc_821CB9E4;
loc_821CBA08:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821cba20
	if (!ctx.cr0.eq) goto loc_821CBA20;
loc_821CBA10:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821CBA14:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_821CBA20:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-15400
	ctx.r10.s64 = ctx.r10.s64 + -15400;
loc_821CBA2C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cba50
	if (ctx.cr0.eq) goto loc_821CBA50;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cba2c
	if (ctx.cr6.eq) goto loc_821CBA2C;
loc_821CBA50:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821cba60
	if (!ctx.cr0.eq) goto loc_821CBA60;
loc_821CBA58:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821cba14
	goto loc_821CBA14;
loc_821CBA60:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-15380
	ctx.r10.s64 = ctx.r10.s64 + -15380;
loc_821CBA6C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cba90
	if (ctx.cr0.eq) goto loc_821CBA90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cba6c
	if (ctx.cr6.eq) goto loc_821CBA6C;
loc_821CBA90:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cba10
	if (ctx.cr0.eq) goto loc_821CBA10;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-15360
	ctx.r10.s64 = ctx.r10.s64 + -15360;
loc_821CBAA4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cbac8
	if (ctx.cr0.eq) goto loc_821CBAC8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cbaa4
	if (ctx.cr6.eq) goto loc_821CBAA4;
loc_821CBAC8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cba58
	if (ctx.cr0.eq) goto loc_821CBA58;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-15336
	ctx.r10.s64 = ctx.r10.s64 + -15336;
loc_821CBADC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cbb00
	if (ctx.cr0.eq) goto loc_821CBB00;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cbadc
	if (ctx.cr6.eq) goto loc_821CBADC;
loc_821CBB00:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cba58
	if (ctx.cr0.eq) goto loc_821CBA58;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-15320
	ctx.r10.s64 = ctx.r10.s64 + -15320;
loc_821CBB14:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cbb38
	if (ctx.cr0.eq) goto loc_821CBB38;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cbb14
	if (ctx.cr6.eq) goto loc_821CBB14;
loc_821CBB38:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cba10
	if (ctx.cr0.eq) goto loc_821CBA10;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-15300
	ctx.r10.s64 = ctx.r10.s64 + -15300;
loc_821CBB4C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cbb70
	if (ctx.cr0.eq) goto loc_821CBB70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cbb4c
	if (ctx.cr6.eq) goto loc_821CBB4C;
loc_821CBB70:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cba58
	if (ctx.cr0.eq) goto loc_821CBA58;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-15288
	ctx.r10.s64 = ctx.r10.s64 + -15288;
loc_821CBB84:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cbba8
	if (ctx.cr0.eq) goto loc_821CBBA8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cbb84
	if (ctx.cr6.eq) goto loc_821CBB84;
loc_821CBBA8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cba10
	if (ctx.cr0.eq) goto loc_821CBA10;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-15272
	ctx.r10.s64 = ctx.r10.s64 + -15272;
loc_821CBBBC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cbbe0
	if (ctx.cr0.eq) goto loc_821CBBE0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cbbbc
	if (ctx.cr6.eq) goto loc_821CBBBC;
loc_821CBBE0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821cbbf0
	if (!ctx.cr0.eq) goto loc_821CBBF0;
loc_821CBBE8:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821cba14
	goto loc_821CBA14;
loc_821CBBF0:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-15252
	ctx.r10.s64 = ctx.r10.s64 + -15252;
loc_821CBBFC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cbc20
	if (ctx.cr0.eq) goto loc_821CBC20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cbbfc
	if (ctx.cr6.eq) goto loc_821CBBFC;
loc_821CBC20:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821cbc30
	if (!ctx.cr0.eq) goto loc_821CBC30;
loc_821CBC28:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821cba14
	goto loc_821CBA14;
loc_821CBC30:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-15240
	ctx.r10.s64 = ctx.r10.s64 + -15240;
loc_821CBC3C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cbc60
	if (ctx.cr0.eq) goto loc_821CBC60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cbc3c
	if (ctx.cr6.eq) goto loc_821CBC3C;
loc_821CBC60:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821cbc70
	if (!ctx.cr0.eq) goto loc_821CBC70;
loc_821CBC68:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x821cba14
	goto loc_821CBA14;
loc_821CBC70:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-15228
	ctx.r10.s64 = ctx.r10.s64 + -15228;
loc_821CBC7C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cbca0
	if (ctx.cr0.eq) goto loc_821CBCA0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cbc7c
	if (ctx.cr6.eq) goto loc_821CBC7C;
loc_821CBCA0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cba58
	if (ctx.cr0.eq) goto loc_821CBA58;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-15212
	ctx.r10.s64 = ctx.r10.s64 + -15212;
loc_821CBCB4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cbcd8
	if (ctx.cr0.eq) goto loc_821CBCD8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cbcb4
	if (ctx.cr6.eq) goto loc_821CBCB4;
loc_821CBCD8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cba10
	if (ctx.cr0.eq) goto loc_821CBA10;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-15196
	ctx.r10.s64 = ctx.r10.s64 + -15196;
loc_821CBCEC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cbd10
	if (ctx.cr0.eq) goto loc_821CBD10;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cbcec
	if (ctx.cr6.eq) goto loc_821CBCEC;
loc_821CBD10:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cbbe8
	if (ctx.cr0.eq) goto loc_821CBBE8;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-15180
	ctx.r10.s64 = ctx.r10.s64 + -15180;
loc_821CBD24:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cbd48
	if (ctx.cr0.eq) goto loc_821CBD48;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cbd24
	if (ctx.cr6.eq) goto loc_821CBD24;
loc_821CBD48:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cba58
	if (ctx.cr0.eq) goto loc_821CBA58;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-15160
	ctx.r10.s64 = ctx.r10.s64 + -15160;
loc_821CBD5C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cbd80
	if (ctx.cr0.eq) goto loc_821CBD80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cbd5c
	if (ctx.cr6.eq) goto loc_821CBD5C;
loc_821CBD80:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cba58
	if (ctx.cr0.eq) goto loc_821CBA58;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-15140
	ctx.r10.s64 = ctx.r10.s64 + -15140;
loc_821CBD94:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cbdb8
	if (ctx.cr0.eq) goto loc_821CBDB8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cbd94
	if (ctx.cr6.eq) goto loc_821CBD94;
loc_821CBDB8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cba10
	if (ctx.cr0.eq) goto loc_821CBA10;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-15116
	ctx.r10.s64 = ctx.r10.s64 + -15116;
loc_821CBDCC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cbdf0
	if (ctx.cr0.eq) goto loc_821CBDF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cbdcc
	if (ctx.cr6.eq) goto loc_821CBDCC;
loc_821CBDF0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cbbe8
	if (ctx.cr0.eq) goto loc_821CBBE8;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-15096
	ctx.r10.s64 = ctx.r10.s64 + -15096;
loc_821CBE04:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cbe28
	if (ctx.cr0.eq) goto loc_821CBE28;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cbe04
	if (ctx.cr6.eq) goto loc_821CBE04;
loc_821CBE28:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cba58
	if (ctx.cr0.eq) goto loc_821CBA58;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-15080
	ctx.r10.s64 = ctx.r10.s64 + -15080;
loc_821CBE3C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cbe60
	if (ctx.cr0.eq) goto loc_821CBE60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cbe3c
	if (ctx.cr6.eq) goto loc_821CBE3C;
loc_821CBE60:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cba10
	if (ctx.cr0.eq) goto loc_821CBA10;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-15060
	ctx.r10.s64 = ctx.r10.s64 + -15060;
loc_821CBE74:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cbe98
	if (ctx.cr0.eq) goto loc_821CBE98;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cbe74
	if (ctx.cr6.eq) goto loc_821CBE74;
loc_821CBE98:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cbbe8
	if (ctx.cr0.eq) goto loc_821CBBE8;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-15044
	ctx.r10.s64 = ctx.r10.s64 + -15044;
loc_821CBEAC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cbed0
	if (ctx.cr0.eq) goto loc_821CBED0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cbeac
	if (ctx.cr6.eq) goto loc_821CBEAC;
loc_821CBED0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cba58
	if (ctx.cr0.eq) goto loc_821CBA58;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-15024
	ctx.r10.s64 = ctx.r10.s64 + -15024;
loc_821CBEE4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cbf08
	if (ctx.cr0.eq) goto loc_821CBF08;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cbee4
	if (ctx.cr6.eq) goto loc_821CBEE4;
loc_821CBF08:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cba10
	if (ctx.cr0.eq) goto loc_821CBA10;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-15004
	ctx.r10.s64 = ctx.r10.s64 + -15004;
loc_821CBF1C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cbf40
	if (ctx.cr0.eq) goto loc_821CBF40;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cbf1c
	if (ctx.cr6.eq) goto loc_821CBF1C;
loc_821CBF40:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cbbe8
	if (ctx.cr0.eq) goto loc_821CBBE8;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-14984
	ctx.r10.s64 = ctx.r10.s64 + -14984;
loc_821CBF54:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cbf78
	if (ctx.cr0.eq) goto loc_821CBF78;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cbf54
	if (ctx.cr6.eq) goto loc_821CBF54;
loc_821CBF78:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cbc28
	if (ctx.cr0.eq) goto loc_821CBC28;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-14960
	ctx.r10.s64 = ctx.r10.s64 + -14960;
loc_821CBF8C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cbfb0
	if (ctx.cr0.eq) goto loc_821CBFB0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cbf8c
	if (ctx.cr6.eq) goto loc_821CBF8C;
loc_821CBFB0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cba58
	if (ctx.cr0.eq) goto loc_821CBA58;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-14944
	ctx.r10.s64 = ctx.r10.s64 + -14944;
loc_821CBFC4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cbfe8
	if (ctx.cr0.eq) goto loc_821CBFE8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cbfc4
	if (ctx.cr6.eq) goto loc_821CBFC4;
loc_821CBFE8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cba10
	if (ctx.cr0.eq) goto loc_821CBA10;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-14928
	ctx.r10.s64 = ctx.r10.s64 + -14928;
loc_821CBFFC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cc020
	if (ctx.cr0.eq) goto loc_821CC020;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cbffc
	if (ctx.cr6.eq) goto loc_821CBFFC;
loc_821CC020:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cbbe8
	if (ctx.cr0.eq) goto loc_821CBBE8;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-14912
	ctx.r10.s64 = ctx.r10.s64 + -14912;
loc_821CC034:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cc058
	if (ctx.cr0.eq) goto loc_821CC058;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cc034
	if (ctx.cr6.eq) goto loc_821CC034;
loc_821CC058:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cbc28
	if (ctx.cr0.eq) goto loc_821CBC28;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-14896
	ctx.r10.s64 = ctx.r10.s64 + -14896;
loc_821CC06C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cc090
	if (ctx.cr0.eq) goto loc_821CC090;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cc06c
	if (ctx.cr6.eq) goto loc_821CC06C;
loc_821CC090:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cbc68
	if (ctx.cr0.eq) goto loc_821CBC68;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-14880
	ctx.r10.s64 = ctx.r10.s64 + -14880;
loc_821CC0A4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cc0c8
	if (ctx.cr0.eq) goto loc_821CC0C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cc0a4
	if (ctx.cr6.eq) goto loc_821CC0A4;
loc_821CC0C8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821cc0d8
	if (!ctx.cr0.eq) goto loc_821CC0D8;
loc_821CC0D0:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x821cba14
	goto loc_821CBA14;
loc_821CC0D8:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-14868
	ctx.r10.s64 = ctx.r10.s64 + -14868;
loc_821CC0E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cc108
	if (ctx.cr0.eq) goto loc_821CC108;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cc0e4
	if (ctx.cr6.eq) goto loc_821CC0E4;
loc_821CC108:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821cc118
	if (!ctx.cr0.eq) goto loc_821CC118;
loc_821CC110:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x821cba14
	goto loc_821CBA14;
loc_821CC118:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-14852
	ctx.r10.s64 = ctx.r10.s64 + -14852;
loc_821CC124:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cc148
	if (ctx.cr0.eq) goto loc_821CC148;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cc124
	if (ctx.cr6.eq) goto loc_821CC124;
loc_821CC148:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821cc158
	if (!ctx.cr0.eq) goto loc_821CC158;
loc_821CC150:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x821cba14
	goto loc_821CBA14;
loc_821CC158:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-14836
	ctx.r10.s64 = ctx.r10.s64 + -14836;
loc_821CC164:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cc188
	if (ctx.cr0.eq) goto loc_821CC188;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cc164
	if (ctx.cr6.eq) goto loc_821CC164;
loc_821CC188:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cba58
	if (ctx.cr0.eq) goto loc_821CBA58;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-14816
	ctx.r10.s64 = ctx.r10.s64 + -14816;
loc_821CC19C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cc1c0
	if (ctx.cr0.eq) goto loc_821CC1C0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cc19c
	if (ctx.cr6.eq) goto loc_821CC19C;
loc_821CC1C0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cba10
	if (ctx.cr0.eq) goto loc_821CBA10;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-14800
	ctx.r10.s64 = ctx.r10.s64 + -14800;
loc_821CC1D4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cc1f8
	if (ctx.cr0.eq) goto loc_821CC1F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cc1d4
	if (ctx.cr6.eq) goto loc_821CC1D4;
loc_821CC1F8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cbbe8
	if (ctx.cr0.eq) goto loc_821CBBE8;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-14780
	ctx.r10.s64 = ctx.r10.s64 + -14780;
loc_821CC20C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cc230
	if (ctx.cr0.eq) goto loc_821CC230;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cc20c
	if (ctx.cr6.eq) goto loc_821CC20C;
loc_821CC230:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cbc28
	if (ctx.cr0.eq) goto loc_821CBC28;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-14760
	ctx.r10.s64 = ctx.r10.s64 + -14760;
loc_821CC244:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cc268
	if (ctx.cr0.eq) goto loc_821CC268;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cc244
	if (ctx.cr6.eq) goto loc_821CC244;
loc_821CC268:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cbc68
	if (ctx.cr0.eq) goto loc_821CBC68;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-14744
	ctx.r10.s64 = ctx.r10.s64 + -14744;
loc_821CC27C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cc2a0
	if (ctx.cr0.eq) goto loc_821CC2A0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cc27c
	if (ctx.cr6.eq) goto loc_821CC27C;
loc_821CC2A0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cba58
	if (ctx.cr0.eq) goto loc_821CBA58;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-14720
	ctx.r10.s64 = ctx.r10.s64 + -14720;
loc_821CC2B4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cc2d8
	if (ctx.cr0.eq) goto loc_821CC2D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cc2b4
	if (ctx.cr6.eq) goto loc_821CC2B4;
loc_821CC2D8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cba10
	if (ctx.cr0.eq) goto loc_821CBA10;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-14700
	ctx.r10.s64 = ctx.r10.s64 + -14700;
loc_821CC2EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cc310
	if (ctx.cr0.eq) goto loc_821CC310;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cc2ec
	if (ctx.cr6.eq) goto loc_821CC2EC;
loc_821CC310:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cbbe8
	if (ctx.cr0.eq) goto loc_821CBBE8;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-14680
	ctx.r10.s64 = ctx.r10.s64 + -14680;
loc_821CC324:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cc348
	if (ctx.cr0.eq) goto loc_821CC348;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cc324
	if (ctx.cr6.eq) goto loc_821CC324;
loc_821CC348:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cbc28
	if (ctx.cr0.eq) goto loc_821CBC28;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-14656
	ctx.r10.s64 = ctx.r10.s64 + -14656;
loc_821CC35C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cc380
	if (ctx.cr0.eq) goto loc_821CC380;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cc35c
	if (ctx.cr6.eq) goto loc_821CC35C;
loc_821CC380:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cba58
	if (ctx.cr0.eq) goto loc_821CBA58;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-14636
	ctx.r10.s64 = ctx.r10.s64 + -14636;
loc_821CC394:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cc3b8
	if (ctx.cr0.eq) goto loc_821CC3B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cc394
	if (ctx.cr6.eq) goto loc_821CC394;
loc_821CC3B8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cba10
	if (ctx.cr0.eq) goto loc_821CBA10;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-14620
	ctx.r10.s64 = ctx.r10.s64 + -14620;
loc_821CC3CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cc3f0
	if (ctx.cr0.eq) goto loc_821CC3F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cc3cc
	if (ctx.cr6.eq) goto loc_821CC3CC;
loc_821CC3F0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cbbe8
	if (ctx.cr0.eq) goto loc_821CBBE8;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-14604
	ctx.r10.s64 = ctx.r10.s64 + -14604;
loc_821CC404:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cc428
	if (ctx.cr0.eq) goto loc_821CC428;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cc404
	if (ctx.cr6.eq) goto loc_821CC404;
loc_821CC428:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cbc28
	if (ctx.cr0.eq) goto loc_821CBC28;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-14588
	ctx.r10.s64 = ctx.r10.s64 + -14588;
loc_821CC43C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cc460
	if (ctx.cr0.eq) goto loc_821CC460;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cc43c
	if (ctx.cr6.eq) goto loc_821CC43C;
loc_821CC460:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cbc68
	if (ctx.cr0.eq) goto loc_821CBC68;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-14572
	ctx.r10.s64 = ctx.r10.s64 + -14572;
loc_821CC474:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cc498
	if (ctx.cr0.eq) goto loc_821CC498;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cc474
	if (ctx.cr6.eq) goto loc_821CC474;
loc_821CC498:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cc0d0
	if (ctx.cr0.eq) goto loc_821CC0D0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-14556
	ctx.r10.s64 = ctx.r10.s64 + -14556;
loc_821CC4AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cc4d0
	if (ctx.cr0.eq) goto loc_821CC4D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cc4ac
	if (ctx.cr6.eq) goto loc_821CC4AC;
loc_821CC4D0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cc110
	if (ctx.cr0.eq) goto loc_821CC110;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-14540
	ctx.r10.s64 = ctx.r10.s64 + -14540;
loc_821CC4E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cc508
	if (ctx.cr0.eq) goto loc_821CC508;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cc4e4
	if (ctx.cr6.eq) goto loc_821CC4E4;
loc_821CC508:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cc150
	if (ctx.cr0.eq) goto loc_821CC150;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8221FC98) {
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
	// li r3,716
	ctx.r3.s64 = 716;
	// bl 0x822f6280
	ctx.lr = 0x8221FCAC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221fcbc
	if (ctx.cr0.eq) goto loc_8221FCBC;
	// bl 0x8221fcd0
	ctx.lr = 0x8221FCB8;
	sub_8221FCD0(ctx, base);
	// b 0x8221fcc0
	goto loc_8221FCC0;
loc_8221FCBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221FCC0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82221EE8) {
	REX_FUNC_PROLOGUE();
	// lbz r11,576(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 576);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,760(r3)
	REX_STORE_U32(ctx.r3.u32 + 760, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82222060) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c8c
	ctx.lr = 0x82222068;
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -144, f30.u64);
	// stfd f31,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, f31.u64);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r10,128(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 128);
	// li r18,0
	r18.s64 = 0;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r19,r3,128
	r19.s64 = ctx.r3.s64 + 128;
	// addi r30,r3,144
	r30.s64 = ctx.r3.s64 + 144;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lfs f30,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f30.f64 = double(temp.f32);
	// addi r29,r3,252
	r29.s64 = ctx.r3.s64 + 252;
	// lfs f31,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	f31.f64 = double(temp.f32);
	// addi r28,r3,360
	r28.s64 = ctx.r3.s64 + 360;
	// addi r27,r3,468
	r27.s64 = ctx.r3.s64 + 468;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// addi r24,r3,160
	r24.s64 = ctx.r3.s64 + 160;
	// addi r23,r3,268
	r23.s64 = ctx.r3.s64 + 268;
	// addi r22,r3,376
	r22.s64 = ctx.r3.s64 + 376;
	// addi r21,r3,484
	r21.s64 = ctx.r3.s64 + 484;
	// addi r25,r10,-24988
	r25.s64 = ctx.r10.s64 + -24988;
	// addi r20,r9,-26860
	r20.s64 = ctx.r9.s64 + -26860;
loc_822220C4:
	// addi r26,r11,1
	r26.s64 = ctx.r11.s64 + 1;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// lfs f12,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f11,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// fadds f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 + ctx.f13.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// rlwinm r17,r11,27,31,31
	r17.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x826a06d8
	ctx.lr = 0x82222108;
	sub_826A06D8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82222758
	ctx.lr = 0x82222120;
	sub_82222758(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lfs f12,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 + ctx.f13.f64));
	// lfs f11,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82222758
	ctx.lr = 0x82222160;
	sub_82222758(ctx, base);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lfs f12,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// lfs f11,12(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82222758
	ctx.lr = 0x822221A0;
	sub_82222758(ctx, base);
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
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
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82222758
	ctx.lr = 0x822221E0;
	sub_82222758(ctx, base);
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// fadds f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
	// cmpwi cr6,r26,12
	ctx.cr6.compare<int32_t>(r26.s32, 12, ctx.xer);
	// blt cr6,0x822220c4
	if (ctx.cr6.lt) goto loc_822220C4;
	// lbz r11,576(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 576);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82222208
	if (ctx.cr0.eq) goto loc_82222208;
	// stw r18,760(r31)
	REX_STORE_U32(r31.u32 + 760, r18.u32);
	// b 0x82222210
	goto loc_82222210;
loc_82222208:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,760(r31)
	REX_STORE_U32(r31.u32 + 760, ctx.r11.u32);
loc_82222210:
	// lwz r11,772(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 772);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,756(r31)
	REX_STORE_U32(r31.u32 + 756, ctx.r10.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r5,r31,120
	ctx.r5.s64 = r31.s64 + 120;
	// addi r8,r10,16592
	ctx.r8.s64 = ctx.r10.s64 + 16592;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r11,772(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 772);
	// addi r3,r31,580
	ctx.r3.s64 = r31.s64 + 580;
	// stw r18,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r18.u32);
	// lfs f0,16592(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16592);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lfs f13,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// bl 0x8226bf68
	ctx.lr = 0x82222258;
	sub_8226BF68(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_82231960) {
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
	// bl 0x826a1cb8
	ctx.lr = 0x82231968;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 128);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x821bf1e8
	ctx.lr = 0x8223198C;
	sub_821BF1E8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821bf1e8
	ctx.lr = 0x82231998;
	sub_821BF1E8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821678f0
	ctx.lr = 0x822319A4;
	sub_821678F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x821678f0
	ctx.lr = 0x822319B0;
	sub_821678F0(ctx, base);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// bne 0x822319c0
	if (!ctx.cr0.eq) goto loc_822319C0;
	// lfs f31,184(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 184);
	f31.f64 = double(temp.f32);
loc_822319C0:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822319cc
	if (!ctx.cr0.eq) goto loc_822319CC;
	// lfs f2,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 188);
	ctx.f2.f64 = double(temp.f32);
loc_822319CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82231a18
	ctx.lr = 0x822319D8;
	sub_82231A18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822365D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f14{};
	PPCRegister f15{};
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
	// bl 0x826a1cbc
	ctx.lr = 0x822365D8;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x826a2c70
	ctx.lr = 0x822365E0;
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,592(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 592);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82236adc
	if (ctx.cr6.eq) goto loc_82236ADC;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x821c3de8
	ctx.lr = 0x82236600;
	sub_821C3DE8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,608(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 608);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// lfs f31,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// stfs f31,144(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x823fbd18
	ctx.lr = 0x8223662C;
	sub_823FBD18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x821264e8
	ctx.lr = 0x82236650;
	sub_821264E8(ctx, base);
	// lbz r11,620(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 620);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822366f4
	if (ctx.cr0.eq) goto loc_822366F4;
	// lfs f0,604(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 604);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,432
	ctx.r11.s64 = r31.s64 + 432;
	// lfs f11,624(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,628(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 628);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f13,716(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 716);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,720(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 720);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f10,320(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 320);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,324(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 324);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,368(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 368);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,372(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 372);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,376(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 376);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f3,f11,f31
	ctx.f3.f64 = double(float(ctx.f11.f64 * f31.f64));
	// lfs f5,432(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 432);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lfs f4,436(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 436);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,440(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 440);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fsubs f10,f3,f1
	ctx.f10.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmuls f12,f6,f10
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fadds f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// stfs f12,440(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 440, temp.u32);
	// fadds f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// stfs f13,432(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 432, temp.u32);
	// fadds f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// stfs f0,436(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 436, temp.u32);
loc_822366F4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lbz r10,621(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 621);
	// addi r29,r11,16592
	r29.s64 = ctx.r11.s64 + 16592;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f30,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	f30.f64 = double(temp.f32);
	// beq 0x82236930
	if (ctx.cr0.eq) goto loc_82236930;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82126320
	ctx.lr = 0x82236714;
	sub_82126320(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x821262a8
	ctx.lr = 0x82236720;
	sub_821262A8(ctx, base);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x821deda0
	ctx.lr = 0x8223672C;
	sub_821DEDA0(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82126320
	ctx.lr = 0x82236734;
	sub_82126320(ctx, base);
	// addi r4,r30,732
	ctx.r4.s64 = r30.s64 + 732;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x821262a8
	ctx.lr = 0x82236740;
	sub_821262A8(ctx, base);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821deda0
	ctx.lr = 0x8223674C;
	sub_821DEDA0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x822354d0
	ctx.lr = 0x8223675C;
	sub_822354D0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x821df068
	ctx.lr = 0x8223676C;
	sub_821DF068(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f13,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// lfs f11,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x823fbe48
	ctx.lr = 0x822367A8;
	sub_823FBE48(ctx, base);
	// addi r11,r31,272
	ctx.r11.s64 = r31.s64 + 272;
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f0,624(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,628(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// ld r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lfs f2,292(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 292);
	ctx.f2.f64 = double(temp.f32);
	// lfs f12,308(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 308);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,296(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 296);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f3.f64 = double(temp.f32);
	// lfs f10,288(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 288);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,312(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 312);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,336(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 336);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,340(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 340);
	ctx.f7.f64 = double(temp.f32);
	// lfs f27,272(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 272);
	f27.f64 = double(temp.f32);
	// lfs f24,276(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 276);
	f24.f64 = double(temp.f32);
	// lfs f6,344(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 344);
	ctx.f6.f64 = double(temp.f32);
	// lfs f26,280(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 280);
	f26.f64 = double(temp.f32);
	// lfs f1,304(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 304);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f29,f1,f2
	f29.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// fmuls f28,f9,f12
	f28.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f25,f10,f11
	f25.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmsubs f3,f10,f12,f29
	ctx.f3.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, -f29.f64)));
	// fneg f8,f8
	ctx.f8.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fneg f7,f7
	ctx.f7.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fmr f23,f27
	f23.f64 = f27.f64;
	// fneg f6,f6
	ctx.f6.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// fmsubs f29,f2,f11,f28
	f29.f64 = double(float(std::fma(ctx.f2.f64, ctx.f11.f64, -f28.f64)));
	// fmuls f22,f24,f10
	f22.f64 = double(float(f24.f64 * ctx.f10.f64));
	// fmr f21,f26
	f21.f64 = f26.f64;
	// fmsubs f28,f1,f9,f25
	f28.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, -f25.f64)));
	// fmr f25,f24
	f25.f64 = f24.f64;
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f27,f29,f27
	f27.f64 = double(float(f29.f64 * f27.f64));
	// fadds f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// lfs f5,452(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 452);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f7,f7,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// fmuls f5,f26,f2
	ctx.f5.f64 = double(float(f26.f64 * ctx.f2.f64));
	// stfd f31,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, f31.u64);
	// fmadds f4,f3,f26,f27
	ctx.f4.f64 = double(float(std::fma(ctx.f3.f64, f26.f64, f27.f64)));
	// lfs f19,608(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 608);
	f19.f64 = double(temp.f32);
	// fmuls f16,f23,f9
	f16.f64 = double(float(f23.f64 * ctx.f9.f64));
	// lfs f17,616(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 616);
	f17.f64 = double(temp.f32);
	// fmuls f20,f24,f11
	f20.f64 = double(float(f24.f64 * ctx.f11.f64));
	// lfs f15,448(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 448);
	f15.f64 = double(temp.f32);
	// fmuls f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f6,612(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 612);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f18,f23,f12
	f18.f64 = double(float(f23.f64 * ctx.f12.f64));
	// lfs f31,456(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 456);
	f31.f64 = double(temp.f32);
	// fmuls f14,f26,f1
	f14.f64 = double(float(f26.f64 * ctx.f1.f64));
	// addi r11,r31,448
	ctx.r11.s64 = r31.s64 + 448;
	// fmsubs f2,f23,f2,f22
	ctx.f2.f64 = double(float(std::fma(f23.f64, ctx.f2.f64, -f22.f64)));
	// fmsubs f9,f24,f9,f5
	ctx.f9.f64 = double(float(std::fma(f24.f64, ctx.f9.f64, -ctx.f5.f64)));
	// fmadds f5,f24,f28,f4
	ctx.f5.f64 = double(float(std::fma(f24.f64, f28.f64, ctx.f4.f64)));
	// fmsubs f10,f26,f10,f16
	ctx.f10.f64 = double(float(std::fma(f26.f64, ctx.f10.f64, -f16.f64)));
	// fmsubs f12,f26,f12,f20
	ctx.f12.f64 = double(float(std::fma(f26.f64, ctx.f12.f64, -f20.f64)));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmsubs f13,f24,f1,f18
	ctx.f13.f64 = double(float(std::fma(f24.f64, ctx.f1.f64, -f18.f64)));
	// fmsubs f11,f23,f11,f14
	ctx.f11.f64 = double(float(std::fma(f23.f64, ctx.f11.f64, -f14.f64)));
	// fdivs f5,f30,f5
	ctx.f5.f64 = double(float(f30.f64 / ctx.f5.f64));
	// fmuls f4,f29,f5
	ctx.f4.f64 = double(float(f29.f64 * ctx.f5.f64));
	// fmuls f2,f2,f5
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// fmuls f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// fmuls f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// fmuls f10,f10,f5
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fmuls f1,f28,f5
	ctx.f1.f64 = double(float(f28.f64 * ctx.f5.f64));
	// fmuls f11,f11,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f3,f3,f5
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fmuls f5,f4,f8
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fmuls f4,f0,f2
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmuls f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmadds f5,f0,f3,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f0.f64, ctx.f3.f64, ctx.f5.f64)));
	// fmadds f10,f7,f10,f4
	ctx.f10.f64 = double(float(std::fma(ctx.f7.f64, ctx.f10.f64, ctx.f4.f64)));
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// fmadds f13,f7,f1,f5
	ctx.f13.f64 = double(float(std::fma(ctx.f7.f64, ctx.f1.f64, ctx.f5.f64)));
	// fmadds f12,f9,f8,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f8.f64, ctx.f10.f64)));
	// fmadds f0,f7,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, ctx.f11.f64, ctx.f0.f64)));
	// fmuls f13,f19,f13
	ctx.f13.f64 = double(float(f19.f64 * ctx.f13.f64));
	// fmuls f12,f17,f12
	ctx.f12.f64 = double(float(f17.f64 * ctx.f12.f64));
	// fmuls f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fadds f13,f15,f13
	ctx.f13.f64 = double(float(f15.f64 + ctx.f13.f64));
	// stfs f13,448(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 448, temp.u32);
	// fadds f13,f31,f12
	ctx.f13.f64 = double(float(f31.f64 + ctx.f12.f64));
	// stfs f13,456(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 456, temp.u32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfd f31,96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// stfs f0,452(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 452, temp.u32);
loc_82236930:
	// lwz r11,220(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82236944
	if (ctx.cr6.eq) goto loc_82236944;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// b 0x8223694c
	goto loc_8223694C;
loc_82236944:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r11,r11,1072
	ctx.r11.s64 = ctx.r11.s64 + 1072;
loc_8223694C:
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stw r31,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f13,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// ld r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// lfs f10,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// fsubs f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f13,1176(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 1176);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,604(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 604);
	ctx.f9.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f8,612(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 612);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,616(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 616);
	ctx.f7.f64 = double(temp.f32);
	// std r8,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// std r11,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// stfs f9,196(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,200(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f7,204(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// bl 0x821e73c0
	ctx.lr = 0x822369D0;
	sub_821E73C0(ctx, base);
	// lfs f0,368(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 368);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,208(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,432
	ctx.r11.s64 = r31.s64 + 432;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,216(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,372(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 372);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r31,448
	ctx.r10.s64 = r31.s64 + 448;
	// lfs f9,212(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f9.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f8,436(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 436);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,224(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,228(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,232(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f5.f64 = double(temp.f32);
	// lfs f11,260(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, f31.f64);
	// lfs f13,376(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 376);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f10,432(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 432);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,440(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 440);
	ctx.f9.f64 = double(temp.f32);
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,432(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 432, temp.u32);
	// fadds f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f0,440(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 440, temp.u32);
	// fadds f0,f12,f8
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f0,436(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 436, temp.u32);
	// lfs f12,612(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 612);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,616(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 616);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,448(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 448);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,452(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 452);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,456(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 456);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,608(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 608);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,448(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 448, temp.u32);
	// fadds f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f0,452(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 452, temp.u32);
	// fadds f0,f9,f8
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// stfs f0,456(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 456, temp.u32);
	// ble cr6,0x82236a8c
	if (!ctx.cr6.gt) goto loc_82236A8C;
	// stfs f31,492(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 492, temp.u32);
	// stfs f31,496(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 496, temp.u32);
	// lfs f2,636(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 636);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,632(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 632);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82236aa0
	goto loc_82236AA0;
loc_82236A8C:
	// lfs f0,220(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// stfs f0,492(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 492, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stfs f30,496(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 496, temp.u32);
loc_82236AA0:
	// bl 0x822c0838
	ctx.lr = 0x82236AA4;
	sub_822C0838(ctx, base);
	// lfs f0,752(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 752);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x82236ad8
	if (!ctx.cr6.eq) goto loc_82236AD8;
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, f31.f64);
	// ble cr6,0x82236ad8
	if (!ctx.cr6.gt) goto loc_82236AD8;
	// lfs f13,248(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,328(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,696(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 696);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82236ad8
	if (!ctx.cr6.gt) goto loc_82236AD8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,756(r30)
	REX_STORE_U8(r30.u32 + 756, ctx.r11.u8);
loc_82236AD8:
	// stfs f11,752(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + 752, temp.u32);
loc_82236ADC:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x826a2cbc
	ctx.lr = 0x82236AE8;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82265F10) {
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
	ctx.lr = 0x82265F18;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,6112(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6112);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82265F3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,6056(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6056);
	// bl 0x8212d668
	ctx.lr = 0x82265F4C;
	sub_8212D668(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6036(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6036);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82265F64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfd f1,80(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 80, ctx.f1.u64);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,-24868
	r30.s64 = ctx.r11.s64 + -24868;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82120600
	ctx.lr = 0x82265F7C;
	sub_82120600(ctx, base);
	// lis r29,-32106
	r29.s64 = -2104098816;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,6072(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6072);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82265F98;
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
	// rlwinm r28,r11,27,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82120ac0
	ctx.lr = 0x82265FB4;
	sub_82120AC0(ctx, base);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq 0x82265fc8
	if (ctx.cr0.eq) goto loc_82265FC8;
loc_82265FBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82265FC0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1d04
	return;
loc_82265FC8:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r27,r31,24
	r27.s64 = r31.s64 + 24;
	// addi r28,r10,16384
	r28.s64 = ctx.r10.s64 + 16384;
	// lwz r3,6076(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6076);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82265FF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215fba8
	ctx.lr = 0x82265FF8;
	sub_8215FBA8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120600
	ctx.lr = 0x82266004;
	sub_82120600(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,6316(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6316);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82266024;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82266034;
	sub_82120AC0(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82265fbc
	if (ctx.cr6.eq) goto loc_82265FBC;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82160340
	ctx.lr = 0x82266048;
	sub_82160340(ctx, base);
	// lwz r3,6072(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6072);
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82266060;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82121610
	ctx.lr = 0x82266070;
	sub_82121610(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82160388
	ctx.lr = 0x82266080;
	sub_82160388(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r30,r11,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82120ac0
	ctx.lr = 0x8226609C;
	sub_82120AC0(ctx, base);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x822660b8
	if (ctx.cr0.eq) goto loc_822660B8;
loc_822660A4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x82120ac0
	ctx.lr = 0x822660B4;
	sub_82120AC0(ctx, base);
	// b 0x82265fbc
	goto loc_82265FBC;
loc_822660B8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x822660C4;
	sub_8215F5F8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-24512
	ctx.r4.s64 = ctx.r11.s64 + -24512;
	// bl 0x8215f670
	ctx.lr = 0x822660D0;
	sub_8215F670(ctx, base);
	// addi r4,r31,52
	ctx.r4.s64 = r31.s64 + 52;
	// bl 0x8215fb00
	ctx.lr = 0x822660D8;
	sub_8215FB00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822660a4
	if (ctx.cr0.eq) goto loc_822660A4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x822660EC;
	sub_8215F5F8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-24496
	ctx.r4.s64 = ctx.r11.s64 + -24496;
	// bl 0x8215f670
	ctx.lr = 0x822660F8;
	sub_8215F670(ctx, base);
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// bl 0x8215fb00
	ctx.lr = 0x82266100;
	sub_8215FB00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822660a4
	if (ctx.cr0.eq) goto loc_822660A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82266258
	ctx.lr = 0x82266110;
	sub_82266258(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822660a4
	if (ctx.cr0.eq) goto loc_822660A4;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,6040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82266134;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82266158
	if (!ctx.cr0.eq) goto loc_82266158;
	// li r31,0
	r31.s64 = 0;
loc_82266140:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x82120ac0
	ctx.lr = 0x82266150;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82265fc0
	goto loc_82265FC0;
loc_82266158:
	// li r31,1
	r31.s64 = 1;
	// b 0x82266140
	goto loc_82266140;
}

DEFINE_REX_FUNC(sub_82274DF0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82274e10
	if (!ctx.cr6.eq) goto loc_82274E10;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82274E10:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82274e24
	if (ctx.cr6.eq) goto loc_82274E24;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82274E24:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82274e38
	if (ctx.cr6.eq) goto loc_82274E38;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82274E38:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822772D0) {
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
	ctx.lr = 0x822772D8;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,328(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 328);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82277304
	if (ctx.cr6.eq) goto loc_82277304;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-2856
	ctx.r4.s64 = ctx.r11.s64 + -2856;
	// addi r3,r10,-2748
	ctx.r3.s64 = ctx.r10.s64 + -2748;
	// li r5,414
	ctx.r5.s64 = 414;
	// bl 0x821231d0
	ctx.lr = 0x82277304;
	sub_821231D0(ctx, base);
loc_82277304:
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822c1a70
	ctx.lr = 0x8227730C;
	sub_822C1A70(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f1,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f1.f64 = double(temp.f32);
	// beq 0x82277368
	if (ctx.cr0.eq) goto loc_82277368;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,272(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,14568
	ctx.r10.s64 = ctx.r10.s64 + 14568;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stfs f1,28(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// b 0x8227736c
	goto loc_8227736C;
loc_82277368:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8227736C:
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f1,92(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x821e4d38
	ctx.lr = 0x8227738C;
	sub_821E4D38(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x821c3ec8
	ctx.lr = 0x8227739C;
	sub_821C3EC8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ld r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// ld r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// ld r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// li r3,768
	ctx.r3.s64 = 768;
	// ld r30,24(r11)
	r30.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// ld r29,32(r11)
	r29.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// ld r28,40(r11)
	r28.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// ld r27,48(r11)
	r27.u64 = REX_LOAD_U64(ctx.r11.u32 + 48);
	// ld r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// std r6,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// std r5,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r5.u64);
	// std r4,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r4.u64);
	// std r30,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, r30.u64);
	// std r29,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, r29.u64);
	// std r28,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, r28.u64);
	// std r27,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, r27.u64);
	// std r11,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// bl 0x822c1a70
	ctx.lr = 0x822773FC;
	sub_822C1A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8227741c
	if (ctx.cr0.eq) goto loc_8227741C;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x821ecdc8
	ctx.lr = 0x82277418;
	sub_821ECDC8(ctx, base);
	// b 0x82277420
	goto loc_82277420;
loc_8227741C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82277420:
	// stw r3,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r3.u32);
	// addi r11,r31,112
	ctx.r11.s64 = r31.s64 + 112;
	// lwz r10,212(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// stw r10,212(r3)
	REX_STORE_U32(ctx.r3.u32 + 212, ctx.r10.u32);
	// lwz r10,328(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 328);
	// stw r11,708(r10)
	REX_STORE_U32(ctx.r10.u32 + 708, ctx.r11.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82283C58) {
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
	ctx.lr = 0x82283C60;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r30,r11,16592
	r30.s64 = ctx.r11.s64 + 16592;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f31,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	f31.f64 = double(temp.f32);
	// lfs f12,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// beq cr6,0x82283cfc
	if (ctx.cr6.eq) goto loc_82283CFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r9,656(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 656);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82283ca4
	if (ctx.cr0.eq) goto loc_82283CA4;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x82283ca8
	goto loc_82283CA8;
loc_82283CA4:
	// lfs f0,608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 608);
	ctx.f0.f64 = double(temp.f32);
loc_82283CA8:
	// lfs f13,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x82283ccc
	if (!ctx.cr6.gt) goto loc_82283CCC;
	// lfs f11,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f11,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f10,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f0.f64)));
	// b 0x82283ce4
	goto loc_82283CE4;
loc_82283CCC:
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f0,f9,f10,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f10.f64, ctx.f0.f64)));
loc_82283CE4:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f0,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// bgt cr6,0x82283cf4
	if (ctx.cr6.gt) goto loc_82283CF4;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82283CF4:
	// fmadds f0,f0,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f1.f64, ctx.f13.f64)));
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
loc_82283CFC:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82283dd0
	if (ctx.cr6.eq) goto loc_82283DD0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lfs f13,1432(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 1432);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,468(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// lfs f0,612(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 612);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// addi r8,r10,320
	ctx.r8.s64 = ctx.r10.s64 + 320;
	// ld r8,320(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 320);
	// ld r10,328(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 328);
	// lfs f11,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// std r8,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// std r10,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// lfs f8,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f11,f11,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmadds f11,f10,f8,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f8.f64, ctx.f11.f64)));
	// fmadds f11,f9,f7,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f7.f64, ctx.f11.f64)));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x82283d64
	if (!ctx.cr6.lt) goto loc_82283D64;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82283D64:
	// lfs f13,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r30,256
	ctx.r11.s64 = r30.s64 + 256;
	// lfs f11,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82283d84
	if (!ctx.cr6.gt) goto loc_82283D84;
	// fmadds f13,f11,f1,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f1.f64, ctx.f13.f64)));
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x82283d8c
	goto loc_82283D8C;
loc_82283D84:
	// fnmsubs f13,f11,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f1.f64, -ctx.f13.f64)));
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_82283D8C:
	// fcmpu cr6,f11,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, f31.f64);
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
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// rlwinm r10,r10,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lfsx f11,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f0,f11,f13,f0
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// fadds f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f0,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// bl 0x821e9910
	ctx.lr = 0x82283DD0;
	sub_821E9910(ctx, base);
loc_82283DD0:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r26,3
	r26.s64 = 3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82283f18
	if (ctx.cr6.eq) goto loc_82283F18;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f0,624(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x82283e00
	if (!ctx.cr6.gt) goto loc_82283E00;
	// lbz r11,698(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 698);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82283e04
	if (ctx.cr0.eq) goto loc_82283E04;
loc_82283E00:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82283E04:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82284078
	if (ctx.cr6.lt) goto loc_82284078;
	// beq cr6,0x82283ed4
	if (ctx.cr6.eq) goto loc_82283ED4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82283e48
	if (ctx.cr6.lt) goto loc_82283E48;
	// bne cr6,0x82283f20
	if (!ctx.cr6.eq) goto loc_82283F20;
	// lfs f0,28(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// beq cr6,0x82283e38
	if (ctx.cr6.eq) goto loc_82283E38;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82283E38:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82283f20
	if (ctx.cr0.eq) goto loc_82283F20;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82283f1c
	goto loc_82283F1C;
loc_82283E48:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82283f20
	if (!ctx.cr0.eq) goto loc_82283F20;
	// lfs f13,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lfs f0,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,88
	ctx.r11.s64 = r31.s64 + 88;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f13,24(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82283e80
	if (ctx.cr6.lt) goto loc_82283E80;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82283E80:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x821ea0e0
	ctx.lr = 0x82283E8C;
	sub_821EA0E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82283e9c
	if (ctx.cr0.eq) goto loc_82283E9C;
	// lwz r3,156(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 156);
	// bl 0x822fbe20
	ctx.lr = 0x82283E9C;
	sub_822FBE20(ctx, base);
loc_82283E9C:
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r11,r31,116
	ctx.r11.s64 = r31.s64 + 116;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82283eb0
	if (ctx.cr6.lt) goto loc_82283EB0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82283EB0:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x821ea0e0
	ctx.lr = 0x82283EBC;
	sub_821EA0E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82283ecc
	if (ctx.cr0.eq) goto loc_82283ECC;
	// lwz r3,164(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 164);
	// bl 0x822fbe20
	ctx.lr = 0x82283ECC;
	sub_822FBE20(ctx, base);
loc_82283ECC:
	// stw r26,52(r31)
	REX_STORE_U32(r31.u32 + 52, r26.u32);
	// b 0x82283f20
	goto loc_82283F20;
loc_82283ED4:
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lfs f0,28(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82283ef0
	if (ctx.cr6.eq) goto loc_82283EF0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82283EF0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82283f20
	if (ctx.cr0.eq) goto loc_82283F20;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r5,r10,1688
	ctx.r5.s64 = ctx.r10.s64 + 1688;
	// lwz r3,6296(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6296);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82283F18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82283F18:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82283F1C:
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
loc_82283F20:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r30,r31,148
	r30.s64 = r31.s64 + 148;
	// lwz r11,128(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 128);
	// lfs f0,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,72(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r11,468(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 468);
	// addi r10,r11,320
	ctx.r10.s64 = ctx.r11.s64 + 320;
	// ld r10,328(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 328);
	// ld r11,320(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 320);
	// std r11,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r10,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// lfs f12,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r28,r11,1472
	r28.s64 = ctx.r11.s64 + 1472;
	// addi r27,r10,23936
	r27.s64 = ctx.r10.s64 + 23936;
	// addi r29,r9,1468
	r29.s64 = ctx.r9.s64 + 1468;
loc_82283FC0:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82284060
	if (ctx.cr6.eq) goto loc_82284060;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x822fbfc0
	ctx.lr = 0x82283FDC;
	sub_822FBFC0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x822fbeb0
	ctx.lr = 0x82283FEC;
	sub_822FBEB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82284008
	if (!ctx.cr0.eq) goto loc_82284008;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,476(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 476);
	// lfs f1,252(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82300070
	ctx.lr = 0x82284008;
	sub_82300070(ctx, base);
loc_82284008:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x822fbeb0
	ctx.lr = 0x82284018;
	sub_822FBEB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82284034
	if (!ctx.cr0.eq) goto loc_82284034;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,476(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 476);
	// lfs f1,256(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 256);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82300070
	ctx.lr = 0x82284034;
	sub_82300070(ctx, base);
loc_82284034:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x822fbeb0
	ctx.lr = 0x82284044;
	sub_822FBEB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82284060
	if (!ctx.cr0.eq) goto loc_82284060;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,476(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 476);
	// lfs f1,260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 260);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82300070
	ctx.lr = 0x82284060;
	sub_82300070(ctx, base);
loc_82284060:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x82283fc0
	if (!ctx.cr0.eq) goto loc_82283FC0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
loc_82284078:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82283f20
	if (ctx.cr0.eq) goto loc_82283F20;
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,60
	ctx.r11.s64 = r31.s64 + 60;
	// lfs f13,24(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x822840a8
	if (ctx.cr6.lt) goto loc_822840A8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_822840A8:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x821ea0e0
	ctx.lr = 0x822840B4;
	sub_821EA0E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822840c4
	if (ctx.cr0.eq) goto loc_822840C4;
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// bl 0x822fbe20
	ctx.lr = 0x822840C4;
	sub_822FBE20(ctx, base);
loc_822840C4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82283f1c
	goto loc_82283F1C;
}

DEFINE_REX_FUNC(sub_822AAF10) {
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
	PPCRegister f14{};
	PPCRegister f15{};
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
	// bl 0x826a1c8c
	ctx.lr = 0x822AAF18;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x826a2c70
	ctx.lr = 0x822AAF20;
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 16);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// bne 0x822aaf44
	if (!ctx.cr0.eq) goto loc_822AAF44;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_822AAF44:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bne cr6,0x822aaf54
	if (!ctx.cr6.eq) goto loc_822AAF54;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
loc_822AAF54:
	// ld r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// ld r7,24(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// ld r5,32(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// addi r24,r1,144
	r24.s64 = ctx.r1.s64 + 144;
	// ld r23,40(r11)
	r23.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// addi r22,r1,160
	r22.s64 = ctx.r1.s64 + 160;
	// ld r21,48(r11)
	r21.u64 = REX_LOAD_U64(ctx.r11.u32 + 48);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// ld r20,56(r11)
	r20.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// ld r19,64(r11)
	r19.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// ld r18,72(r11)
	r18.u64 = REX_LOAD_U64(ctx.r11.u32 + 72);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r28,204(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 204);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r17,204(r11)
	r17.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// std r9,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// addi r29,r28,48
	r29.s64 = r28.s64 + 48;
	// std r7,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r7.u64);
	// std r5,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r5.u64);
	// std r23,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, r23.u64);
	// std r21,0(r24)
	REX_STORE_U64(r24.u32 + 0, r21.u64);
	// std r20,8(r24)
	REX_STORE_U64(r24.u32 + 8, r20.u64);
	// std r19,0(r22)
	REX_STORE_U64(r22.u32 + 0, r19.u64);
	// std r18,8(r22)
	REX_STORE_U64(r22.u32 + 8, r18.u64);
	// bl 0x822940c8
	ctx.lr = 0x822AAFC8;
	sub_822940C8(ctx, base);
	// lfs f11,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lfs f31,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	f31.f64 = double(temp.f32);
	// lfs f30,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	f30.f64 = double(temp.f32);
	// fmuls f12,f31,f11
	ctx.f12.f64 = double(float(f31.f64 * ctx.f11.f64));
	// lfs f10,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f30,f10
	ctx.f8.f64 = double(float(f30.f64 * ctx.f10.f64));
	// lfs f0,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f31,f9
	ctx.f1.f64 = double(float(f31.f64 * ctx.f9.f64));
	// lfs f7,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f5,f0,f11
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f22,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	f22.f64 = double(temp.f32);
	// fmuls f3,f30,f7
	ctx.f3.f64 = double(float(f30.f64 * ctx.f7.f64));
	// lfs f2,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f29,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	f29.f64 = double(temp.f32);
	// fmuls f0,f0,f22
	ctx.f0.f64 = double(float(ctx.f0.f64 * f22.f64));
	// lfs f4,32(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f20,f29,f2
	f20.f64 = double(float(f29.f64 * ctx.f2.f64));
	// lfs f28,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	f28.f64 = double(temp.f32);
	// fmuls f21,f29,f4
	f21.f64 = double(float(f29.f64 * ctx.f4.f64));
	// lfs f27,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	f27.f64 = double(temp.f32);
	// fmadds f19,f4,f28,f12
	f19.f64 = double(float(std::fma(ctx.f4.f64, f28.f64, ctx.f12.f64)));
	// lfs f13,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f8,f27,f11,f8
	ctx.f8.f64 = double(float(std::fma(f27.f64, ctx.f11.f64, ctx.f8.f64)));
	// lfs f18,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	f18.f64 = double(temp.f32);
	// lfs f26,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	f26.f64 = double(temp.f32);
	// fmadds f1,f2,f28,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, f28.f64, ctx.f1.f64)));
	// fmadds f6,f13,f2,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, ctx.f2.f64, ctx.f6.f64)));
	// lfs f25,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	f25.f64 = double(temp.f32);
	// fmadds f5,f13,f4,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f13.f64, ctx.f4.f64, ctx.f5.f64)));
	// lfs f24,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	f24.f64 = double(temp.f32);
	// fmadds f3,f27,f9,f3
	ctx.f3.f64 = double(float(std::fma(f27.f64, ctx.f9.f64, ctx.f3.f64)));
	// lfs f12,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f18,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f18.f64, ctx.f0.f64)));
	// lfs f17,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	f17.f64 = double(temp.f32);
	// fmadds f13,f26,f9,f20
	ctx.f13.f64 = double(float(std::fma(f26.f64, ctx.f9.f64, f20.f64)));
	// lfs f23,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	f23.f64 = double(temp.f32);
	// lfs f16,48(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	f16.f64 = double(temp.f32);
	// fmadds f11,f26,f11,f21
	ctx.f11.f64 = double(float(std::fma(f26.f64, ctx.f11.f64, f21.f64)));
	// fmadds f9,f25,f10,f19
	ctx.f9.f64 = double(float(std::fma(f25.f64, ctx.f10.f64, f19.f64)));
	// stfs f9,92(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f15,52(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	f15.f64 = double(temp.f32);
	// fmadds f9,f24,f4,f8
	ctx.f9.f64 = double(float(std::fma(f24.f64, ctx.f4.f64, ctx.f8.f64)));
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f14,56(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	f14.f64 = double(temp.f32);
	// fmuls f4,f29,f18
	ctx.f4.f64 = double(float(f29.f64 * f18.f64));
	// fmadds f9,f12,f7,f6
	ctx.f9.f64 = double(float(std::fma(ctx.f12.f64, ctx.f7.f64, ctx.f6.f64)));
	// fmadds f8,f12,f10,f5
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f10.f64, ctx.f5.f64)));
	// fmadds f6,f24,f2,f3
	ctx.f6.f64 = double(float(std::fma(f24.f64, ctx.f2.f64, ctx.f3.f64)));
	// fmuls f5,f30,f17
	ctx.f5.f64 = double(float(f30.f64 * f17.f64));
	// fmuls f3,f31,f22
	ctx.f3.f64 = double(float(f31.f64 * f22.f64));
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// fmadds f13,f23,f7,f13
	ctx.f13.f64 = double(float(std::fma(f23.f64, ctx.f7.f64, ctx.f13.f64)));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f0,f12,f17,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, f17.f64, ctx.f0.f64)));
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f13,f25,f7,f1
	ctx.f13.f64 = double(float(std::fma(f25.f64, ctx.f7.f64, ctx.f1.f64)));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f12,f23,f10,f11
	ctx.f12.f64 = double(float(std::fma(f23.f64, ctx.f10.f64, ctx.f11.f64)));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f13,f27,f22,f5
	ctx.f13.f64 = double(float(std::fma(f27.f64, f22.f64, ctx.f5.f64)));
	// fmadds f12,f26,f22,f4
	ctx.f12.f64 = double(float(std::fma(f26.f64, f22.f64, ctx.f4.f64)));
	// fadds f21,f9,f15
	f21.f64 = double(float(ctx.f9.f64 + f15.f64));
	// fadds f20,f8,f14
	f20.f64 = double(float(ctx.f8.f64 + f14.f64));
	// fmadds f11,f18,f28,f3
	ctx.f11.f64 = double(float(std::fma(f18.f64, f28.f64, ctx.f3.f64)));
	// fadds f22,f0,f16
	f22.f64 = double(float(ctx.f0.f64 + f16.f64));
	// fmadds f19,f24,f18,f13
	f19.f64 = double(float(std::fma(f24.f64, f18.f64, ctx.f13.f64)));
	// fmadds f18,f23,f17,f12
	f18.f64 = double(float(std::fma(f23.f64, f17.f64, ctx.f12.f64)));
	// fmadds f17,f25,f17,f11
	f17.f64 = double(float(std::fma(f25.f64, f17.f64, ctx.f11.f64)));
	// bl 0x82293e30
	ctx.lr = 0x822AB0E8;
	sub_82293E30(ctx, base);
	// lfs f13,260(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f12,256(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f13,f23
	ctx.f6.f64 = double(float(ctx.f13.f64 * f23.f64));
	// lfs f11,248(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f4,f13,f26
	ctx.f4.f64 = double(float(ctx.f13.f64 * f26.f64));
	// fmuls f3,f26,f12
	ctx.f3.f64 = double(float(f26.f64 * ctx.f12.f64));
	// lfs f10,244(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f2,f11,f28
	ctx.f2.f64 = double(float(ctx.f11.f64 * f28.f64));
	// lfs f9,272(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f1,f10,f28
	ctx.f1.f64 = double(float(ctx.f10.f64 * f28.f64));
	// lfs f8,240(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f16,f9,f24
	f16.f64 = double(float(ctx.f9.f64 * f24.f64));
	// lfs f7,280(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f23,f12
	ctx.f5.f64 = double(float(f23.f64 * ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmadds f15,f10,f25,f6
	f15.f64 = double(float(std::fma(ctx.f10.f64, f25.f64, ctx.f6.f64)));
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmadds f10,f10,f31,f4
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, f31.f64, ctx.f4.f64)));
	// fmadds f4,f31,f8,f3
	ctx.f4.f64 = double(float(std::fma(f31.f64, ctx.f8.f64, ctx.f3.f64)));
	// fmadds f3,f7,f24,f2
	ctx.f3.f64 = double(float(std::fma(ctx.f7.f64, f24.f64, ctx.f2.f64)));
	// fmadds f12,f12,f29,f16
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, f29.f64, f16.f64)));
	// fmadds f5,f25,f8,f5
	ctx.f5.f64 = double(float(std::fma(f25.f64, ctx.f8.f64, ctx.f5.f64)));
	// lfs f6,276(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f2,f6,f24,f1
	ctx.f2.f64 = double(float(std::fma(ctx.f6.f64, f24.f64, ctx.f1.f64)));
	// lfs f0,264(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f23
	ctx.f1.f64 = double(float(ctx.f0.f64 * f23.f64));
	// fmuls f26,f0,f26
	f26.f64 = double(float(ctx.f0.f64 * f26.f64));
	// fmadds f10,f6,f27,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f6.f64, f27.f64, ctx.f10.f64)));
	// stfs f10,132(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmadds f0,f0,f29,f3
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, ctx.f3.f64)));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmadds f24,f6,f30,f15
	f24.f64 = double(float(std::fma(ctx.f6.f64, f30.f64, f15.f64)));
	// stfs f24,148(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmadds f10,f27,f9,f4
	ctx.f10.f64 = double(float(std::fma(f27.f64, ctx.f9.f64, ctx.f4.f64)));
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmadds f5,f30,f9,f5
	ctx.f5.f64 = double(float(std::fma(f30.f64, ctx.f9.f64, ctx.f5.f64)));
	// stfs f5,144(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmadds f0,f13,f29,f2
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f29.f64, ctx.f2.f64)));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f0,f8,f28,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, f28.f64, ctx.f12.f64)));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f0,f11,f25,f1
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, f25.f64, ctx.f1.f64)));
	// fmadds f13,f11,f31,f26
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, f31.f64, f26.f64)));
	// fmadds f0,f7,f30,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, f30.f64, ctx.f0.f64)));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmadds f0,f7,f27,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, f27.f64, ctx.f13.f64)));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x822940c8
	ctx.lr = 0x822AB1C0;
	sub_822940C8(ctx, base);
	// lfs f13,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lfs f11,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f9,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f7,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,32(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f2,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lfs f1,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f10,f2,f6,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f2.f64, ctx.f6.f64, ctx.f10.f64)));
	// lfs f3,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f31,f11,f1
	f31.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// lfs f4,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f29,f9,f1
	f29.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// lfs f27,56(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 56);
	f27.f64 = double(temp.f32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lfs f26,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	f26.f64 = double(temp.f32);
	// fneg f27,f27
	f27.u64 = f27.u64 ^ 0x8000000000000000;
	// lfs f25,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f25.f64 = double(temp.f32);
	// fmadds f8,f2,f4,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f2.f64, ctx.f4.f64, ctx.f8.f64)));
	// lfs f24,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	f24.f64 = double(temp.f32);
	// fmadds f13,f2,f3,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f2.f64, ctx.f3.f64, ctx.f13.f64)));
	// lfs f2,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f5,f12,f1,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f12.f64, ctx.f1.f64, ctx.f5.f64)));
	// lfs f30,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	f30.f64 = double(temp.f32);
	// lfs f28,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	f28.f64 = double(temp.f32);
	// fmuls f23,f4,f2
	f23.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// lfs f1,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f12,f12,f26
	ctx.f12.f64 = double(float(ctx.f12.f64 * f26.f64));
	// fmadds f10,f25,f7,f10
	ctx.f10.f64 = double(float(std::fma(f25.f64, ctx.f7.f64, ctx.f10.f64)));
	// lfs f16,52(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 52);
	f16.f64 = double(temp.f32);
	// fmadds f4,f4,f24,f31
	ctx.f4.f64 = double(float(std::fma(ctx.f4.f64, f24.f64, f31.f64)));
	// lfs f14,48(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 48);
	f14.f64 = double(temp.f32);
	// fmuls f15,f28,f1
	f15.f64 = double(float(f28.f64 * ctx.f1.f64));
	// lfs f31,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f31.f64 = double(temp.f32);
	// fmadds f29,f3,f24,f29
	f29.f64 = double(float(std::fma(ctx.f3.f64, f24.f64, f29.f64)));
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fneg f31,f16
	f31.u64 = f16.u64 ^ 0x8000000000000000;
	// fmadds f8,f25,f30,f8
	ctx.f8.f64 = double(float(std::fma(f25.f64, f30.f64, ctx.f8.f64)));
	// fmadds f13,f25,f28,f13
	ctx.f13.f64 = double(float(std::fma(f25.f64, f28.f64, ctx.f13.f64)));
	// fmadds f5,f6,f24,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f6.f64, f24.f64, ctx.f5.f64)));
	// fmadds f12,f6,f2,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f6.f64, ctx.f2.f64, ctx.f12.f64)));
	// fmuls f10,f27,f10
	ctx.f10.f64 = double(float(f27.f64 * ctx.f10.f64));
	// fmadds f4,f30,f0,f4
	ctx.f4.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, ctx.f4.f64)));
	// fmadds f6,f30,f1,f23
	ctx.f6.f64 = double(float(std::fma(f30.f64, ctx.f1.f64, f23.f64)));
	// fmadds f0,f28,f0,f29
	ctx.f0.f64 = double(float(std::fma(f28.f64, ctx.f0.f64, f29.f64)));
	// fmadds f9,f9,f26,f15
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, f26.f64, f15.f64)));
	// fmuls f8,f27,f8
	ctx.f8.f64 = double(float(f27.f64 * ctx.f8.f64));
	// fmuls f13,f27,f13
	ctx.f13.f64 = double(float(f27.f64 * ctx.f13.f64));
	// fneg f30,f14
	f30.u64 = f14.u64 ^ 0x8000000000000000;
	// fmadds f12,f7,f1,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f7.f64, ctx.f1.f64, ctx.f12.f64)));
	// fmadds f10,f31,f5,f10
	ctx.f10.f64 = double(float(std::fma(f31.f64, ctx.f5.f64, ctx.f10.f64)));
	// fmadds f11,f11,f26,f6
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, f26.f64, ctx.f6.f64)));
	// fmadds f9,f3,f2,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f3.f64, ctx.f2.f64, ctx.f9.f64)));
	// fmadds f8,f31,f4,f8
	ctx.f8.f64 = double(float(std::fma(f31.f64, ctx.f4.f64, ctx.f8.f64)));
	// fmadds f0,f31,f0,f13
	ctx.f0.f64 = double(float(std::fma(f31.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmadds f13,f30,f12,f10
	ctx.f13.f64 = double(float(std::fma(f30.f64, ctx.f12.f64, ctx.f10.f64)));
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmadds f13,f30,f11,f8
	ctx.f13.f64 = double(float(std::fma(f30.f64, ctx.f11.f64, ctx.f8.f64)));
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmadds f0,f30,f9,f0
	ctx.f0.f64 = double(float(std::fma(f30.f64, ctx.f9.f64, ctx.f0.f64)));
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822AB2E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,232(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f19
	ctx.f12.f64 = double(float(ctx.f0.f64 * f19.f64));
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f9,56(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,52(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,64(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,228(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f5,f13,f18,f12
	ctx.f5.f64 = double(float(std::fma(ctx.f13.f64, f18.f64, ctx.f12.f64)));
	// lfs f0,48(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f6,f13,f6,f10
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, ctx.f6.f64, ctx.f10.f64)));
	// fmadds f4,f13,f12,f11
	ctx.f4.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f11.f64)));
	// lfs f13,224(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f5,f13,f17,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f13.f64, f17.f64, ctx.f5.f64)));
	// fmadds f6,f13,f11,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f6.f64)));
	// lfs f3,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// lfs f12,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// lfs f2,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f31,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	f31.f64 = double(temp.f32);
	// lfs f10,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f30,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	f30.f64 = double(temp.f32);
	// lfs f29,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f29.f64 = double(temp.f32);
	// lfs f11,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f4,f13,f3,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f13.f64, ctx.f3.f64, ctx.f4.f64)));
	// lfs f3,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// fadds f5,f5,f22
	ctx.f5.f64 = double(float(ctx.f5.f64 + f22.f64));
	// lfs f28,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	f28.f64 = double(temp.f32);
	// fadds f6,f6,f20
	ctx.f6.f64 = double(float(ctx.f6.f64 + f20.f64));
	// lfs f27,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	f27.f64 = double(temp.f32);
	// lfs f26,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	f26.f64 = double(temp.f32);
	// lfs f25,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	f25.f64 = double(temp.f32);
	// lfs f24,796(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 796);
	f24.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,220(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// fadds f4,f4,f21
	ctx.f4.f64 = double(float(ctx.f4.f64 + f21.f64));
	// fmuls f1,f6,f9
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fmadds f1,f4,f8,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f4.f64, ctx.f8.f64, ctx.f1.f64)));
	// fmadds f1,f0,f5,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f5.f64, ctx.f1.f64)));
	// fsubs f1,f1,f7
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f7.f64));
	// fmuls f8,f8,f1
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmuls f9,f9,f1
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f7,f0,f1
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fcmpu cr6,f1,f24
	ctx.cr6.compare(ctx.f1.f64, f24.f64);
	// fsubs f8,f4,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// fsubs f9,f6,f9
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// fsubs f7,f5,f7
	ctx.f7.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// fmuls f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f5,f2,f8
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f8.f64));
	// fmuls f8,f31,f8
	ctx.f8.f64 = double(float(f31.f64 * ctx.f8.f64));
	// fmadds f6,f7,f10,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, ctx.f10.f64, ctx.f6.f64)));
	// fmadds f5,f30,f9,f5
	ctx.f5.f64 = double(float(std::fma(f30.f64, ctx.f9.f64, ctx.f5.f64)));
	// fmadds f8,f29,f9,f8
	ctx.f8.f64 = double(float(std::fma(f29.f64, ctx.f9.f64, ctx.f8.f64)));
	// fmadds f9,f9,f11,f6
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f6.f64)));
	// fmadds f6,f7,f3,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, ctx.f3.f64, ctx.f5.f64)));
	// fmadds f8,f7,f28,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f7.f64, f28.f64, ctx.f8.f64)));
	// fadds f9,f9,f27
	ctx.f9.f64 = double(float(ctx.f9.f64 + f27.f64));
	// stfs f9,208(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fadds f9,f6,f26
	ctx.f9.f64 = double(float(ctx.f6.f64 + f26.f64));
	// stfs f9,212(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fadds f9,f8,f25
	ctx.f9.f64 = double(float(ctx.f8.f64 + f25.f64));
	// stfs f9,216(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// blt cr6,0x822ab3fc
	if (ctx.cr6.lt) goto loc_822AB3FC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_822AB3FC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
	// beq 0x822ab490
	if (ctx.cr0.eq) goto loc_822AB490;
	// lfs f9,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// lfs f8,40(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfs f7,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f8,f9
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// lfs f7,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f13,204(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// lfs f6,36(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// lfs f5,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lfs f4,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lwz r8,0(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lfs f3,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// fmadds f13,f12,f7,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f7.f64, ctx.f11.f64)));
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// fmadds f12,f6,f7,f8
	ctx.f12.f64 = double(float(std::fma(ctx.f6.f64, ctx.f7.f64, ctx.f8.f64)));
	// lwz r11,12(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// fmadds f11,f5,f7,f9
	ctx.f11.f64 = double(float(std::fma(ctx.f5.f64, ctx.f7.f64, ctx.f9.f64)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmadds f13,f0,f10,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f13.f64)));
	// stfs f13,192(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fmadds f13,f0,f4,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f4.f64, ctx.f12.f64)));
	// stfs f13,200(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fmadds f0,f0,f3,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f3.f64, ctx.f11.f64)));
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// bctrl 
	ctx.lr = 0x822AB490;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822AB490:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x826a2cbc
	ctx.lr = 0x822AB49C;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_822E0268) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c80
	ctx.lr = 0x822E0270;
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -176, f29.u64);
	// stfd f30,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-1328(r1)
	ea = -1328 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r15,r5
	r15.u64 = ctx.r5.u64;
	// li r17,0
	r17.s64 = 0;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r17,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r17.u32);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r16,r9
	r16.u64 = ctx.r9.u64;
	// bl 0x826a2e60
	ctx.lr = 0x822E02B4;
	sub_826A2E60(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r1,216
	ctx.r10.s64 = ctx.r1.s64 + 216;
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822E02C4:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x822e02c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E02C4;
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// stw r17,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r17.u32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r9,r15
	ctx.r9.u64 = r15.u64;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r17,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r17,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r17.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822d2970
	ctx.lr = 0x822E0318;
	sub_822D2970(ctx, base);
	// lis r9,8192
	ctx.r9.s64 = 536870912;
	// lwz r8,264(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// li r11,9
	ctx.r11.s64 = 9;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r8,r10,21,9,10
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x600000) | (ctx.r8.u64 & 0xFFFFFFFFFF9FFFFF);
	// lwz r9,252(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// stw r8,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r8.u32);
	// rlwimi r9,r11,11,16,21
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFC00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF03FF);
	// addis r11,r31,-16384
	ctx.r11.s64 = r31.s64 + -1073741824;
	// stw r9,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r9.u32);
	// blt cr6,0x822e034c
	if (ctx.cr6.lt) goto loc_822E034C;
	// addis r11,r31,-16640
	ctx.r11.s64 = r31.s64 + -1090519040;
loc_822E034C:
	// lwz r10,256(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// rlwimi r11,r10,0,20,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF000);
	// mr r14,r11
	r14.u64 = ctx.r11.u64;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// stw r14,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, r14.u32);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x822e0374
	if (!ctx.cr6.eq) goto loc_822E0374;
	// li r11,27
	ctx.r11.s64 = 27;
	// rlwimi r14,r11,1,26,31
	r14.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3F) | (r14.u64 & 0xFFFFFFFFFFFFFFC0);
	// stw r14,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, r14.u32);
loc_822E0374:
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826a1e70
	ctx.lr = 0x822E0384;
	sub_826A1E70(ctx, base);
	// lwz r19,304(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// bne cr6,0x822e0394
	if (!ctx.cr6.eq) goto loc_822E0394;
	// lwz r19,21912(r23)
	r19.u64 = REX_LOAD_U32(r23.u32 + 21912);
loc_822E0394:
	// lwz r20,308(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// bne cr6,0x822e03a4
	if (!ctx.cr6.eq) goto loc_822E03A4;
	// lwz r20,21916(r23)
	r20.u64 = REX_LOAD_U32(r23.u32 + 21916);
loc_822E03A4:
	// lwz r24,296(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r25,288(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// cmpw cr6,r24,r25
	ctx.cr6.compare<int32_t>(r24.s32, r25.s32, ctx.xer);
	// bne cr6,0x822e03bc
	if (!ctx.cr6.eq) goto loc_822E03BC;
	// mr r25,r17
	r25.u64 = r17.u64;
	// mr r24,r30
	r24.u64 = r30.u64;
loc_822E03BC:
	// lwz r26,300(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r27,292(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// cmpw cr6,r26,r27
	ctx.cr6.compare<int32_t>(r26.s32, r27.s32, ctx.xer);
	// bne cr6,0x822e03d4
	if (!ctx.cr6.eq) goto loc_822E03D4;
	// mr r27,r17
	r27.u64 = r17.u64;
	// mr r26,r29
	r26.u64 = r29.u64;
loc_822E03D4:
	// lwz r11,21912(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 21912);
	// clrldi r10,r20,32
	ctx.r10.u64 = r20.u64 & 0xFFFFFFFF;
	// lwz r9,21916(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 21916);
	// clrldi r8,r19,32
	ctx.r8.u64 = r19.u64 & 0xFFFFFFFF;
	// std r10,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// std r8,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// lfd f12,128(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// std r9,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f11,128(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// addi r18,r11,16592
	r18.s64 = ctx.r11.s64 + 16592;
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// lfs f0,12(r18)
	temp.u32 = REX_LOAD_U32(r18.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lfs f12,1628(r18)
	temp.u32 = REX_LOAD_U32(r18.u32 + 1628);
	ctx.f12.f64 = double(temp.f32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fdivs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// fdivs f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 / ctx.f11.f64));
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822e0454
	if (!ctx.cr6.lt) goto loc_822E0454;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// b 0x822e0458
	goto loc_822E0458;
loc_822E0454:
	// fmr f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f0.f64;
loc_822E0458:
	// fsubs f13,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822e046c
	if (!ctx.cr6.lt) goto loc_822E046C;
	// fmr f31,f13
	f31.f64 = ctx.f13.f64;
	// b 0x822e0470
	goto loc_822E0470;
loc_822E046C:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f0.f64;
loc_822E0470:
	// subf r31,r25,r24
	r31.u64 = r24.u64 - r25.u64;
	// subf r28,r27,r26
	r28.u64 = r26.u64 - r27.u64;
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f10
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// bl 0x826a3cb0
	ctx.lr = 0x822E0494;
	sub_826A3CB0(ctx, base);
	// extsw r11,r28
	ctx.r11.s64 = r28.s32;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// lfd f13,128(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// stfd f0,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lwz r30,132(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// fmuls f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * f31.f64));
	// bl 0x826a3cb0
	ctx.lr = 0x822E04C0;
	sub_826A3CB0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,21752(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 21752);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 35;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// andi. r9,r10,9
	ctx.r9.u64 = ctx.r10.u64 & 9;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// addi r8,r9,19
	ctx.r8.s64 = ctx.r9.s64 + 19;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r7,132(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// divw r10,r9,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r9.s32 / ctx.r11.s32 : 0);
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// andc r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// cmpwi cr6,r10,24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 24, ctx.xer);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bgt cr6,0x822e0528
	if (ctx.cr6.gt) goto loc_822E0528;
	// li r10,24
	ctx.r10.s64 = 24;
loc_822E0528:
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// divw r11,r9,r8
	ctx.r11.u64 = uint32_t((ctx.r8.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r9.s32 / ctx.r8.s32 : 0);
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bgt cr6,0x822e055c
	if (ctx.cr6.gt) goto loc_822E055C;
	// li r11,24
	ctx.r11.s64 = 24;
loc_822E055C:
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + r30.u64;
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// rotlwi r8,r6,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// rotlwi r9,r7,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// srawi r5,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 2;
	// divw r7,r7,r10
	ctx.r7.u64 = uint32_t((ctx.r10.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r7.s32 / ctx.r10.s32 : 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addze r22,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	r22.s64 = temp.s64;
	// mullw r30,r7,r10
	r30.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// srawi r5,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// andc r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// divw r7,r6,r11
	ctx.r7.u64 = uint32_t((ctx.r11.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r6.s32 / ctx.r11.s32 : 0);
	// andc r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// addze r21,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	r21.s64 = temp.s64;
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// mullw r29,r7,r11
	r29.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(r30.s32, r31.s32, ctx.xer);
	// ble cr6,0x822e05d8
	if (!ctx.cr6.gt) goto loc_822E05D8;
	// rotlwi r9,r31,1
	ctx.r9.u64 = __builtin_rotateleft32(r31.u32, 1);
	// divw r8,r31,r10
	ctx.r8.u64 = uint32_t((ctx.r10.s32 && !(r31.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? r31.s32 / ctx.r10.s32 : 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r30,r8,r10
	r30.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// andc r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
loc_822E05D8:
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// ble cr6,0x822e05fc
	if (!ctx.cr6.gt) goto loc_822E05FC;
	// rotlwi r10,r28,1
	ctx.r10.u64 = __builtin_rotateleft32(r28.u32, 1);
	// divw r9,r28,r11
	ctx.r9.u64 = uint32_t((ctx.r11.s32 && !(r28.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? r28.s32 / ctx.r11.s32 : 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r29,r9,r11
	r29.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
loc_822E05FC:
	// lwz r10,21912(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 21912);
	// mullw r11,r30,r19
	ctx.r11.s64 = int64_t(r30.s32) * int64_t(r19.s32);
	// lwz r9,21916(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 21916);
	// lwz r8,21924(r23)
	ctx.r8.u64 = REX_LOAD_U32(r23.u32 + 21924);
	// std r10,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// std r9,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r9.u64);
	// divwu r11,r11,r31
	ctx.r11.u64 = uint32_t(r31.u32 ? ctx.r11.u32 / r31.u32 : 0);
	// mullw r10,r29,r20
	ctx.r10.s64 = int64_t(r29.s32) * int64_t(r20.s32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// twllei r31,0
	if (r31.s32 == 0 || r31.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r28,0
	if (r28.s32 == 0 || r28.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lfd f11,136(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// divwu r11,r10,r28
	ctx.r11.u64 = uint32_t(r28.u32 ? ctx.r10.u32 / r28.u32 : 0);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// add r10,r25,r24
	ctx.r10.u64 = r25.u64 + r24.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// add r9,r27,r26
	ctx.r9.u64 = r27.u64 + r26.u64;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfd f13,128(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f12,128(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r10.s64 = r30.s32 >> 1;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// subf r20,r10,r11
	r20.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r10.s64 = r29.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// subf r19,r10,r11
	r19.u64 = ctx.r11.u64 - ctx.r10.u64;
	// fdivs f30,f12,f11
	f30.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fdivs f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// beq cr6,0x822e06b8
	if (ctx.cr6.eq) goto loc_822E06B8;
	// lfs f0,144(r18)
	temp.u32 = REX_LOAD_U32(r18.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,708(r18)
	temp.u32 = REX_LOAD_U32(r18.u32 + 708);
	ctx.f13.f64 = double(temp.f32);
	// b 0x822e06c0
	goto loc_822E06C0;
loc_822E06B8:
	// lfs f0,668(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r18.u32 + 668);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,164(r18)
	temp.u32 = REX_LOAD_U32(r18.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
loc_822E06C0:
	// divw r8,r30,r22
	ctx.r8.u64 = uint32_t((r22.s32 && !(r30.s32 == INT32_MIN && r22.s32 == -1)) ? r30.s32 / r22.s32 : 0);
	// fmuls f13,f30,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f30.f64 * ctx.f13.f64));
	// divw r7,r29,r21
	ctx.r7.u64 = uint32_t((r21.s32 && !(r29.s32 == INT32_MIN && r21.s32 == -1)) ? r29.s32 / r21.s32 : 0);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 * ctx.f0.f64));
	// li r11,42
	ctx.r11.s64 = 42;
	// mullw r6,r7,r8
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// fdivs f29,f0,f13
	f29.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// divwu r9,r6,r11
	ctx.r9.u64 = uint32_t(ctx.r11.u32 ? ctx.r6.u32 / ctx.r11.u32 : 0);
	// rotlwi r10,r30,1
	ctx.r10.u64 = __builtin_rotateleft32(r30.u32, 1);
	// rotlwi r11,r29,1
	ctx.r11.u64 = __builtin_rotateleft32(r29.u32, 1);
	// addi r9,r9,1024
	ctx.r9.s64 = ctx.r9.s64 + 1024;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r6,6
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(6));
	// andc r9,r22,r5
	ctx.r9.u64 = r22.u64 & ~ctx.r5.u64;
	// andc r6,r21,r4
	ctx.r6.u64 = r21.u64 & ~ctx.r4.u64;
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twllei r22,0
	if (r22.s32 == 0 || r22.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r21,0
	if (r21.s32 == 0 || r21.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// rlwinm r26,r8,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r7,1,0,30
	r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r31,16384
	ctx.cr6.compare<uint32_t>(r31.u32, 16384, ctx.xer);
	// bgt cr6,0x822e072c
	if (ctx.cr6.gt) goto loc_822E072C;
	// li r31,16384
	r31.s64 = 16384;
loc_822E072C:
	// stw r17,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r17.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// stw r31,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r31.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// stw r8,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// stw r10,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// lwz r11,2272(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2272);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e0774
	if (ctx.cr6.eq) goto loc_822E0774;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r3,92
	ctx.r3.s64 = 92;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822E076C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,176(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x822e0778
	goto loc_822E0778;
loc_822E0774:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
loc_822E0778:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e0954
	if (ctx.cr6.eq) goto loc_822E0954;
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// lwz r28,180(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// clrlwi r9,r10,18
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFF;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// addi r24,r9,1
	r24.s64 = ctx.r9.s64 + 1;
	// beq cr6,0x822e07c4
	if (ctx.cr6.eq) goto loc_822E07C4;
	// lis r10,10280
	ctx.r10.s64 = 673710080;
	// ori r10,r10,310
	ctx.r10.u64 = ctx.r10.u64 | 310;
	// subf r10,r15,r10
	ctx.r10.u64 = ctx.r10.u64 - r15.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_822E07C4:
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lis r8,20585
	ctx.r8.s64 = 1349058560;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// ori r9,r8,30806
	ctx.r9.u64 = ctx.r8.u64 | 30806;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r17,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r17.u32);
	// lwz r9,21752(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 21752);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r26,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r26.u32);
	// stw r25,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r25.u32);
	// stfs f31,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f30,28(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f29,32(r11)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// beq cr6,0x822e0814
	if (ctx.cr6.eq) goto loc_822E0814;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x826a1e70
	ctx.lr = 0x822E0814;
	sub_826A1E70(ctx, base);
loc_822E0814:
	// addi r4,r27,4096
	ctx.r4.s64 = r27.s64 + 4096;
	// cmplwi cr6,r4,16384
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16384, ctx.xer);
	// blt cr6,0x822e082c
	if (ctx.cr6.lt) goto loc_822E082C;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
loc_822E082C:
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// extsw r10,r19
	ctx.r10.s64 = r19.s32;
	// std r11,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// extsw r11,r21
	ctx.r11.s64 = r21.s32;
	// extsw r9,r20
	ctx.r9.s64 = r20.s32;
	// std r10,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r10.u64);
	// std r11,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.r11.u64);
	// extsw r11,r22
	ctx.r11.s64 = r22.s32;
	// lfd f11,208(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 208);
	// std r9,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r9.u64);
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// lfd f10,192(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// extsw r10,r29
	ctx.r10.s64 = r29.s32;
	// lfd f9,200(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 200);
	// mullw r11,r29,r30
	ctx.r11.s64 = int64_t(r29.s32) * int64_t(r30.s32);
	// std r10,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f12,144(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f13,136(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r10,21
	ctx.r10.s64 = 1376256;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// ori r10,r10,6144
	ctx.r10.u64 = ctx.r10.u64 | 6144;
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// frsp f0,f11
	ctx.f0.f64 = double(float(ctx.f11.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// frsp f0,f9
	ctx.f0.f64 = double(float(ctx.f9.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// ble cr6,0x822e08d8
	if (!ctx.cr6.gt) goto loc_822E08D8;
	// li r9,2
	ctx.r9.s64 = 2;
	// b 0x822e08f4
	goto loc_822E08F4;
loc_822E08D8:
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r10,r10,59648
	ctx.r10.u64 = ctx.r10.u64 | 59648;
	// subfc r9,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// eqv r11,r11,r10
	ctx.r11.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
loc_822E08F4:
	// clrlwi r11,r14,26
	ctx.r11.u64 = r14.u32 & 0x3F;
	// lwz r10,21752(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 21752);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r11,r11,-54
	ctx.r11.s64 = ctx.r11.s64 + -54;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r3,r8,12920
	ctx.r3.s64 = ctx.r8.s64 + 12920;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mulli r11,r11,3
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(3));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x822df738
	ctx.lr = 0x822E0954;
	sub_822DF738(ctx, base);
loc_822E0954:
	// lwz r3,184(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82313170) {
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
	ctx.lr = 0x82313178;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231319c
	if (!ctx.cr6.eq) goto loc_8231319C;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x823131b8
	goto loc_823131B8;
loc_8231319C:
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// b 0x823131ac
	goto loc_823131AC;
loc_823131A4:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,92(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 92);
loc_823131AC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823131a4
	if (!ctx.cr6.eq) goto loc_823131A4;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_823131B8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82311a98
	ctx.lr = 0x823131C4;
	sub_82311A98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82313248
	if (!ctx.cr0.eq) goto loc_82313248;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x823131e0
	if (ctx.cr6.eq) goto loc_823131E0;
	// mr r28,r31
	r28.u64 = r31.u64;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_823131E0:
	// lwz r30,128(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 128);
	// addi r29,r31,128
	r29.s64 = r31.s64 + 128;
	// b 0x82313238
	goto loc_82313238;
loc_823131EC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r31,r30,-4
	r31.s64 = r30.s64 + -4;
	// bne cr6,0x823131fc
	if (!ctx.cr6.eq) goto loc_823131FC;
	// li r31,0
	r31.s64 = 0;
loc_823131FC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82311a98
	ctx.lr = 0x82313208;
	sub_82311A98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82313248
	if (!ctx.cr0.eq) goto loc_82313248;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82313234
	if (ctx.cr6.eq) goto loc_82313234;
	// cmpld cr6,r11,r27
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, r27.u64, ctx.xer);
	// blt cr6,0x8231322c
	if (ctx.cr6.lt) goto loc_8231322C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82313234
	if (!ctx.cr6.eq) goto loc_82313234;
loc_8231322C:
	// mr r28,r31
	r28.u64 = r31.u64;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_82313234:
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_82313238:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x823131ec
	if (!ctx.cr6.eq) goto loc_823131EC;
	// stw r28,0(r26)
	REX_STORE_U32(r26.u32 + 0, r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82313248:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82316CF0) {
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
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca0
	ctx.lr = 0x82316CF8;
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,8(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// li r28,0
	r28.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82316D24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 24);
	// cmpld cr6,r3,r11
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x82316e6c
	if (!ctx.cr6.gt) goto loc_82316E6C;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r30,3
	r30.s64 = 3;
	// lwz r25,8(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r26,r1,100
	r26.s64 = ctx.r1.s64 + 100;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r23,r25
	r23.u64 = r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82316D5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82316D78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82316D90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82316DA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// ld r24,24(r31)
	r24.u64 = REX_LOAD_U64(r31.u32 + 24);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82316DC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// bl 0x82316a60
	ctx.lr = 0x82316DEC;
	sub_82316A60(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82316E08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpld cr6,r30,r3
	ctx.cr6.compare<uint64_t>(r30.u64, ctx.r3.u64, ctx.xer);
	// bge cr6,0x82316e50
	if (!ctx.cr6.lt) goto loc_82316E50;
	// ld r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 32);
	// cmpld cr6,r30,r10
	ctx.cr6.compare<uint64_t>(r30.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x82316e50
	if (ctx.cr6.gt) goto loc_82316E50;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm. r9,r11,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// beq 0x82316e34
	if (ctx.cr0.eq) goto loc_82316E34;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// b 0x82316e38
	goto loc_82316E38;
loc_82316E34:
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_82316E38:
	// cmpld cr6,r30,r10
	ctx.cr6.compare<uint64_t>(r30.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x82316e44
	if (!ctx.cr6.eq) goto loc_82316E44;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_82316E44:
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// std r30,8(r29)
	REX_STORE_U64(r29.u32 + 8, r30.u64);
	// b 0x82316e74
	goto loc_82316E74;
loc_82316E50:
	// ld r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 32);
	// cmpld cr6,r3,r11
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x82316e6c
	if (!ctx.cr6.gt) goto loc_82316E6C;
	// li r10,4
	ctx.r10.s64 = 4;
	// std r11,8(r29)
	REX_STORE_U64(r29.u32 + 8, ctx.r11.u64);
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// b 0x82316e74
	goto loc_82316E74;
loc_82316E6C:
	// std r28,8(r29)
	REX_STORE_U64(r29.u32 + 8, r28.u64);
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
loc_82316E74:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82324860) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addic. r10,r4,-48
	ctx.xer.ca = ctx.r4.u32 > 47;
	ctx.r10.s64 = ctx.r4.s64 + -48;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r3,36
	ctx.r9.s64 = ctx.r3.s64 + 36;
	// blt 0x823248a0
	if (ctx.cr0.lt) goto loc_823248A0;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823248a0
	if (ctx.cr6.eq) goto loc_823248A0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82324894
	if (!ctx.cr6.gt) goto loc_82324894;
loc_82324880:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823248a0
	if (ctx.cr6.eq) goto loc_823248A0;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt 0x82324880
	if (ctx.cr0.gt) goto loc_82324880;
loc_82324894:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x823248a4
	if (!ctx.cr6.eq) goto loc_823248A4;
loc_823248A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823248A4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823248e0
	if (ctx.cr6.eq) goto loc_823248E0;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x823248c4
	if (ctx.cr6.lt) goto loc_823248C4;
	// beq cr6,0x823248d4
	if (ctx.cr6.eq) goto loc_823248D4;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x823248cc
	if (!ctx.cr6.lt) goto loc_823248CC;
loc_823248C4:
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_823248CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823248D4:
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// b 0x823248cc
	goto loc_823248CC;
loc_823248E0:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82329528) {
	REX_FUNC_PROLOGUE();
	// lwz r3,128(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// b 0x823300c0
	sub_823300C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82329630) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r4,152(r3)
	REX_STORE_U32(ctx.r3.u32 + 152, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,156(r11)
	REX_STORE_U32(ctx.r11.u32 + 156, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82329BB8) {
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
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x82329b68
	ctx.lr = 0x82329BCC;
	sub_82329B68(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232B240) {
	REX_FUNC_PROLOGUE();
	// lwz r5,64(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// addi r9,r3,64
	ctx.r9.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8232b2d8
	if (ctx.cr6.eq) goto loc_8232B2D8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8232B254:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// addi r7,r5,-4
	ctx.r7.s64 = ctx.r5.s64 + -4;
	// bne cr6,0x8232b264
	if (!ctx.cr6.eq) goto loc_8232B264;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
loc_8232B264:
	// lwz r6,20(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// lwz r8,36(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 36);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x8232b280
	if (!ctx.cr6.eq) goto loc_8232B280;
	// stw r4,24(r7)
	REX_STORE_U32(ctx.r7.u32 + 24, ctx.r4.u32);
	// stw r4,40(r6)
	REX_STORE_U32(ctx.r6.u32 + 40, ctx.r4.u32);
	// b 0x8232b2cc
	goto loc_8232B2CC;
loc_8232B280:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8232b2e0
	if (ctx.cr6.eq) goto loc_8232B2E0;
loc_8232B290:
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8232b2a8
	if (!ctx.cr6.lt) goto loc_8232B2A8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8232b290
	if (!ctx.cr6.eq) goto loc_8232B290;
loc_8232B2A8:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8232b2e0
	if (ctx.cr6.eq) goto loc_8232B2E0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x8232b2c0
	if (!ctx.cr6.eq) goto loc_8232B2C0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8232B2C0:
	// stw r11,24(r7)
	REX_STORE_U32(ctx.r7.u32 + 24, ctx.r11.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,40(r6)
	REX_STORE_U32(ctx.r6.u32 + 40, ctx.r11.u32);
loc_8232B2CC:
	// lwz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8232b254
	if (!ctx.cr6.eq) goto loc_8232B254;
loc_8232B2D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8232B2E0:
	// li r3,19
	ctx.r3.s64 = 19;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232F6D0) {
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
	ctx.lr = 0x8232F6EC;
	sub_82332760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232f700
	if (!ctx.cr6.eq) goto loc_8232F700;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82333ee0
	ctx.lr = 0x8232F700;
	sub_82333EE0(ctx, base);
loc_8232F700:
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

DEFINE_REX_FUNC(sub_823304D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823304E0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823304fc
	if (!ctx.cr6.eq) goto loc_823304FC;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
loc_823304FC:
	// lis r29,-32129
	r29.s64 = -2105606144;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r28,r11,8536
	r28.s64 = ctx.r11.s64 + 8536;
	// li r6,251
	ctx.r6.s64 = 251;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,26296
	ctx.r4.s64 = 26296;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82330524;
	sub_82330E40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82330538
	if (ctx.cr6.eq) goto loc_82330538;
	// bl 0x823372b8
	ctx.lr = 0x82330530;
	sub_823372B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8233053c
	goto loc_8233053C;
loc_82330538:
	// li r30,0
	r30.s64 = 0;
loc_8233053C:
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82330604
	if (ctx.cr6.eq) goto loc_82330604;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ef5f0
	ctx.lr = 0x82330558;
	sub_823EF5F0(ctx, base);
	// lwz r7,1012(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// bne cr6,0x82330574
	if (!ctx.cr6.eq) goto loc_82330574;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82330574:
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823305b4
	if (ctx.cr6.eq) goto loc_823305B4;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82330584:
	// lwz r10,21784(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 21784);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stb r8,-1(r10)
	REX_STORE_U8(ctx.r10.u32 + -1, ctx.r8.u8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// bne cr6,0x823305a8
	if (!ctx.cr6.eq) goto loc_823305A8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823305A8:
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82330584
	if (!ctx.cr6.eq) goto loc_82330584;
loc_823305B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_823305BC:
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823305d8
	if (ctx.cr6.eq) goto loc_823305D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// blt cr6,0x823305bc
	if (ctx.cr6.lt) goto loc_823305BC;
	// b 0x823305e4
	goto loc_823305E4;
loc_823305D8:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,21784(r30)
	REX_STORE_U32(r30.u32 + 21784, ctx.r10.u32);
	// lwz r7,1012(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 1012);
loc_823305E4:
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x82330610
	if (!ctx.cr6.eq) goto loc_82330610;
	// lwz r3,4(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,276
	ctx.r6.s64 = 276;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82330d00
	ctx.lr = 0x82330604;
	sub_82330D00(ctx, base);
loc_82330604:
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
loc_82330610:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82330628
	if (ctx.cr6.eq) goto loc_82330628;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// b 0x8233062c
	goto loc_8233062C;
loc_82330628:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8233062C:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r30,8
	ctx.r11.s64 = r30.s64 + 8;
	// stw r10,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// lwz r7,12(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82340DE8) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82340718
	ctx.lr = 0x82340E10;
	sub_82340718(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82340e20
	if (ctx.cr6.eq) goto loc_82340E20;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82340E20:
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

DEFINE_REX_FUNC(sub_82342B30) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82342b60
	if (!ctx.cr6.eq) goto loc_82342B60;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82342B60:
	// cmpwi cr6,r5,256
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 256, ctx.xer);
	// ble cr6,0x82342b6c
	if (!ctx.cr6.gt) goto loc_82342B6C;
	// li r5,256
	ctx.r5.s64 = 256;
loc_82342B6C:
	// lwz r4,36(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82342b80
	if (!ctx.cr6.eq) goto loc_82342B80;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,9360
	ctx.r4.s64 = ctx.r11.s64 + 9360;
loc_82342B80:
	// bl 0x823314a0
	ctx.lr = 0x82342B84;
	sub_823314A0(ctx, base);
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

DEFINE_REX_FUNC(sub_82349208) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82349210;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82349230
	if (!ctx.cr6.eq) goto loc_82349230;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_82349230:
	// clrlwi r30,r5,24
	r30.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82349254
	if (ctx.cr6.eq) goto loc_82349254;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x82334ca0
	ctx.lr = 0x82349248;
	sub_82334CA0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,4356(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4356);
	// bl 0x8233e7e0
	ctx.lr = 0x82349254;
	sub_8233E7E0(ctx, base);
loc_82349254:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82349270
	if (ctx.cr6.eq) goto loc_82349270;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,4356(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4356);
	// bl 0x8233e820
	ctx.lr = 0x82349270;
	sub_8233E820(ctx, base);
loc_82349270:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8234BBC8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb4
	ctx.lr = 0x8234BBD0;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r3,76
	ctx.r10.s64 = ctx.r3.s64 + 76;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234bc0c
	if (!ctx.cr6.eq) goto loc_8234BC0C;
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
loc_8234BC0C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(f31.f64, ctx.f13.f64);
	// bge cr6,0x8234bc24
	if (!ctx.cr6.lt) goto loc_8234BC24;
	// fmr f31,f13
	f31.f64 = ctx.f13.f64;
	// b 0x8234bc38
	goto loc_8234BC38;
loc_8234BC24:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// ble cr6,0x8234bc38
	if (!ctx.cr6.gt) goto loc_8234BC38;
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
loc_8234BC38:
	// lfs f0,176(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// beq cr6,0x8234bc48
	if (ctx.cr6.eq) goto loc_8234BC48;
	// li r28,1
	r28.s64 = 1;
loc_8234BC48:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stfs f31,176(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 176, temp.u32);
	// rlwinm r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8234bc60
	if (ctx.cr6.eq) goto loc_8234BC60;
	// fmr f31,f13
	f31.f64 = ctx.f13.f64;
loc_8234BC60:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8234bd2c
	if (!ctx.cr6.gt) goto loc_8234BD2C;
	// lwz r9,284(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 284);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8234bcc0
	if (ctx.cr6.eq) goto loc_8234BCC0;
	// lwz r9,88(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x8234bcc0
	if (!ctx.cr6.eq) goto loc_8234BCC0;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8234bd64
	if (!ctx.cr6.gt) goto loc_8234BD64;
	// addi r29,r10,-4
	r29.s64 = ctx.r10.s64 + -4;
loc_8234BC94:
	// lwzu r3,4(r29)
	ea = 4 + r29.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234BCAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8234bc94
	if (ctx.cr6.lt) goto loc_8234BC94;
	// b 0x8234bd64
	goto loc_8234BD64;
loc_8234BCC0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8234bd2c
	if (!ctx.cr6.gt) goto loc_8234BD2C;
	// lwz r9,88(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x8234bd2c
	if (!ctx.cr6.eq) goto loc_8234BD2C;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8234bd64
	if (!ctx.cr6.gt) goto loc_8234BD64;
	// addi r29,r10,-4
	r29.s64 = ctx.r10.s64 + -4;
loc_8234BCE4:
	// lwzu r3,4(r29)
	ea = 4 + r29.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// lfs f8,216(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 216);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,212(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 212);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,208(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 208);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,204(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 204);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,200(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 200);
	ctx.f4.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f3,196(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,192(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 192);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,188(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 188);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234BD18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8234bce4
	if (ctx.cr6.lt) goto loc_8234BCE4;
	// b 0x8234bd64
	goto loc_8234BD64;
loc_8234BD2C:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8234bd64
	if (!ctx.cr6.gt) goto loc_8234BD64;
	// addi r29,r10,-4
	r29.s64 = ctx.r10.s64 + -4;
loc_8234BD3C:
	// lwzu r3,4(r29)
	ea = 4 + r29.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234BD54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8234bd3c
	if (ctx.cr6.lt) goto loc_8234BD3C;
loc_8234BD64:
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234bd7c
	if (!ctx.cr6.eq) goto loc_8234BD7C;
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234bd84
	if (ctx.cr6.eq) goto loc_8234BD84;
loc_8234BD7C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82350620
	ctx.lr = 0x8234BD84;
	sub_82350620(ctx, base);
loc_8234BD84:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82356610) {
	REX_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82340718
	sub_82340718(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82356648) {
	REX_FUNC_PROLOGUE();
	// stw r4,700(r3)
	REX_STORE_U32(ctx.r3.u32 + 700, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82356838) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82356848
	if (!ctx.cr6.eq) goto loc_82356848;
loc_82356840:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82356848:
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r10,r3,580
	ctx.r10.s64 = ctx.r3.s64 + 580;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82356840
	if (ctx.cr6.lt) goto loc_82356840;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82356840
	if (ctx.cr6.eq) goto loc_82356840;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8235687c
	if (!ctx.cr6.gt) goto loc_8235687C;
loc_8235686C:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82356840
	if (ctx.cr6.eq) goto loc_82356840;
	// bdnz 0x8235686c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235686C;
loc_8235687C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82356840
	if (ctx.cr6.eq) goto loc_82356840;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82358940) {
	REX_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stw r4,412(r3)
	REX_STORE_U32(ctx.r3.u32 + 412, ctx.r4.u32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82358954
	if (!ctx.cr6.gt) goto loc_82358954;
	// stw r11,412(r3)
	REX_STORE_U32(ctx.r3.u32 + 412, ctx.r11.u32);
loc_82358954:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8235A348) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca4
	ctx.lr = 0x8235A350;
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x8235a384
	if (!ctx.cr6.gt) goto loc_8235A384;
loc_8235A374:
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x8235a374
	if (ctx.cr6.gt) goto loc_8235A374;
loc_8235A384:
	// lwz r11,276(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// lfs f31,3704(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3704);
	f31.f64 = double(temp.f32);
	// bgt cr6,0x8235ab90
	if (ctx.cr6.gt) goto loc_8235AB90;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8235a458
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8235A458;
	// bdzf 4*cr6+eq,0x8235a5ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8235A5AC;
	// bdzf 4*cr6+eq,0x8235a6fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8235A6FC;
	// bne cr6,0x8235a8f4
	if (!ctx.cr6.eq) goto loc_8235A8F4;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8235abf4
	if (!ctx.cr6.gt) goto loc_8235ABF4;
	// extsw r8,r30
	ctx.r8.s64 = r30.s32;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// lfs f12,7536(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 7536);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,3804(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 3804);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// fdivs f11,f31,f0
	ctx.f11.f64 = double(float(f31.f64 / ctx.f0.f64));
loc_8235A3F0:
	// extsw r3,r7
	ctx.r3.s64 = ctx.r7.s32;
	// mullw r8,r5,r10
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f10,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r8,r5,1
	ctx.r8.s64 = ctx.r5.s64 + 1;
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// subfc r3,r6,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r6.u32;
	ctx.r3.u64 = ctx.r8.u64 - ctx.r6.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// subfe r3,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lfsx f7,r5,r4
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f7.f64 = double(temp.f32);
	// and r5,r3,r8
	ctx.r5.u64 = ctx.r3.u64 & ctx.r8.u64;
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fdivs f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 / ctx.f0.f64));
	// fmsubs f5,f6,f13,f31
	ctx.f5.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, -f31.f64)));
	// fneg f4,f5
	ctx.f4.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fsel f3,f5,f5,f4
	ctx.f3.f64 = ctx.f5.f64 >= 0.0 ? ctx.f5.f64 : ctx.f4.f64;
	// fsubs f2,f31,f3
	ctx.f2.f64 = double(float(f31.f64 - ctx.f3.f64));
	// fmuls f1,f2,f7
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// fmuls f10,f1,f11
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x8235a3f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235A3F0;
	// b 0x8235abf4
	goto loc_8235ABF4;
loc_8235A458:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8235abf4
	if (!ctx.cr6.gt) goto loc_8235ABF4;
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f7,f13
	ctx.f7.f64 = double(float(ctx.f13.f64));
	// lis r29,-32256
	r29.s64 = -2113929216;
	// lis r28,-32256
	r28.s64 = -2113929216;
	// lfs f11,10552(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10552);
	ctx.f11.f64 = double(temp.f32);
	// lis r24,-32256
	r24.s64 = -2113929216;
	// lfs f12,10556(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10556);
	ctx.f12.f64 = double(temp.f32);
	// lis r27,0
	r27.s64 = 0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r3,0
	ctx.r3.s64 = 0;
	// lfs f8,10520(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 10520);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,7536(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 7536);
	ctx.f13.f64 = double(temp.f32);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// lfs f9,3716(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 3716);
	ctx.f9.f64 = double(temp.f32);
	// ori r27,r27,32768
	r27.u64 = r27.u64 | 32768;
	// ori r28,r11,49151
	r28.u64 = ctx.r11.u64 | 49151;
	// ori r29,r3,65535
	r29.u64 = ctx.r3.u64 | 65535;
	// fdivs f10,f31,f7
	ctx.f10.f64 = double(float(f31.f64 / ctx.f7.f64));
loc_8235A4C0:
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f0
	ctx.f6.f64 = double(ctx.f0.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fdivs f4,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 / ctx.f7.f64));
	// fmuls f3,f4,f8
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fctiwz f2,f3
	ctx.f2.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f2.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8235a4f4
	if (!ctx.cr6.lt) goto loc_8235A4F4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8235A4F4:
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// srawi r3,r11,13
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 13;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bgt cr6,0x8235a560
	if (ctx.cr6.gt) goto loc_8235A560;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8235a528
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8235A528;
	// bdzf 4*cr6+eq,0x8235a53c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8235A53C;
	// bne cr6,0x8235a550
	if (!ctx.cr6.eq) goto loc_8235A550;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r3,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8235a564
	goto loc_8235A564;
loc_8235A528:
	// subf r11,r11,r28
	ctx.r11.u64 = r28.u64 - ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r3,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x8235a564
	goto loc_8235A564;
loc_8235A53C:
	// addi r11,r11,16384
	ctx.r11.s64 = ctx.r11.s64 + 16384;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r3,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x8235a564
	goto loc_8235A564;
loc_8235A550:
	// subf r11,r11,r29
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r3,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8235a564
	goto loc_8235A564;
loc_8235A560:
	// fmr f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f9.f64;
loc_8235A564:
	// mullw r11,r5,r10
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// fnmsubs f0,f0,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f12.f64, -ctx.f11.f64)));
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// subfc r3,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r3.u64 = ctx.r11.u64 - ctx.r6.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// subfe r3,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r30.s32, ctx.xer);
	// lfsx f6,r5,r4
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f6.f64 = double(temp.f32);
	// and r5,r3,r11
	ctx.r5.u64 = ctx.r3.u64 & ctx.r11.u64;
	// fmuls f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// fmuls f4,f5,f10
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// stfs f4,0(r8)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// blt cr6,0x8235a4c0
	if (ctx.cr6.lt) goto loc_8235A4C0;
	// b 0x8235abf4
	goto loc_8235ABF4;
loc_8235A5AC:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8235abf4
	if (!ctx.cr6.gt) goto loc_8235ABF4;
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lis r29,-32256
	r29.s64 = -2113929216;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r28,-32256
	r28.s64 = -2113929216;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lis r27,0
	r27.s64 = 0;
	// lis r24,0
	r24.s64 = 0;
	// lfs f12,3720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lfs f10,3716(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 3716);
	ctx.f10.f64 = double(temp.f32);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// lfs f9,10520(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10520);
	ctx.f9.f64 = double(temp.f32);
	// ori r27,r27,32768
	r27.u64 = r27.u64 | 32768;
	// ori r28,r24,49151
	r28.u64 = r24.u64 | 49151;
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f8,f13
	ctx.f8.f64 = double(float(ctx.f13.f64));
	// lfs f13,7536(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 7536);
	ctx.f13.f64 = double(temp.f32);
	// ori r29,r11,65535
	r29.u64 = ctx.r11.u64 | 65535;
	// fdivs f11,f31,f8
	ctx.f11.f64 = double(float(f31.f64 / ctx.f8.f64));
loc_8235A60C:
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f7,f0
	ctx.f7.f64 = double(ctx.f0.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fdivs f5,f6,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 / ctx.f8.f64));
	// fmuls f4,f5,f9
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// fctiwz f3,f4
	ctx.f3.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8235a640
	if (!ctx.cr6.lt) goto loc_8235A640;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8235A640:
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// srawi r3,r11,13
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 13;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bgt cr6,0x8235a6ac
	if (ctx.cr6.gt) goto loc_8235A6AC;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8235a674
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8235A674;
	// bdzf 4*cr6+eq,0x8235a688
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8235A688;
	// bne cr6,0x8235a69c
	if (!ctx.cr6.eq) goto loc_8235A69C;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r3,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8235a6b0
	goto loc_8235A6B0;
loc_8235A674:
	// subf r11,r11,r28
	ctx.r11.u64 = r28.u64 - ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r3,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x8235a6b0
	goto loc_8235A6B0;
loc_8235A688:
	// addi r11,r11,16384
	ctx.r11.s64 = ctx.r11.s64 + 16384;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r3,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x8235a6b0
	goto loc_8235A6B0;
loc_8235A69C:
	// subf r11,r11,r29
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r3,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8235a6b0
	goto loc_8235A6B0;
loc_8235A6AC:
	// fmr f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64;
loc_8235A6B0:
	// fsubs f0,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 - ctx.f0.f64));
	// mullw r11,r5,r10
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// fmuls f7,f0,f12
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// subfc r3,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r3.u64 = ctx.r11.u64 - ctx.r6.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// subfe r3,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r30.s32, ctx.xer);
	// lfsx f6,r5,r4
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f6.f64 = double(temp.f32);
	// and r5,r3,r11
	ctx.r5.u64 = ctx.r3.u64 & ctx.r11.u64;
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// fmuls f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f4,f5,f11
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// stfs f4,0(r8)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// blt cr6,0x8235a60c
	if (ctx.cr6.lt) goto loc_8235A60C;
	// b 0x8235abf4
	goto loc_8235ABF4;
loc_8235A6FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8235abf4
	if (!ctx.cr6.gt) goto loc_8235ABF4;
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lis r29,-32256
	r29.s64 = -2113929216;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r28,-32256
	r28.s64 = -2113929216;
	// lis r27,-32256
	r27.s64 = -2113929216;
	// lis r24,-32256
	r24.s64 = -2113929216;
	// lfs f11,3720(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 3720);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,10548(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10548);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,10544(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 10544);
	ctx.f10.f64 = double(temp.f32);
	// lis r29,0
	r29.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lfs f8,10520(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 10520);
	ctx.f8.f64 = double(temp.f32);
	// lis r23,0
	r23.s64 = 0;
	// lfs f12,7536(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 7536);
	ctx.f12.f64 = double(temp.f32);
	// ori r28,r29,49151
	r28.u64 = r29.u64 | 49151;
	// lfs f6,3716(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 3716);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,3804(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3804);
	ctx.f5.f64 = double(temp.f32);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// ori r27,r8,32768
	r27.u64 = ctx.r8.u64 | 32768;
	// ori r29,r23,65535
	r29.u64 = r23.u64 | 65535;
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f4,f13
	ctx.f4.f64 = double(float(ctx.f13.f64));
	// fdivs f7,f31,f4
	ctx.f7.f64 = double(float(f31.f64 / ctx.f4.f64));
loc_8235A774:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f3,f13
	ctx.f3.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f3,f4
	ctx.f0.f64 = double(float(ctx.f3.f64 / ctx.f4.f64));
	// fmuls f2,f0,f8
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fctiwz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f1,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8235a7a8
	if (!ctx.cr6.lt) goto loc_8235A7A8;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8235A7A8:
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// srawi r8,r11,13
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 13;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bgt cr6,0x8235a814
	if (ctx.cr6.gt) goto loc_8235A814;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8235a7dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8235A7DC;
	// bdzf 4*cr6+eq,0x8235a7f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8235A7F0;
	// bne cr6,0x8235a804
	if (!ctx.cr6.eq) goto loc_8235A804;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8235a818
	goto loc_8235A818;
loc_8235A7DC:
	// subf r11,r11,r28
	ctx.r11.u64 = r28.u64 - ctx.r11.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// b 0x8235a818
	goto loc_8235A818;
loc_8235A7F0:
	// addi r11,r11,16384
	ctx.r11.s64 = ctx.r11.s64 + 16384;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// b 0x8235a818
	goto loc_8235A818;
loc_8235A804:
	// subf r11,r11,r29
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8235a818
	goto loc_8235A818;
loc_8235A814:
	// fmr f13,f6
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f6.f64;
loc_8235A818:
	// fmuls f0,f0,f5
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmuls f3,f0,f8
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fctiwz f2,f3
	ctx.f2.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8235a838
	if (!ctx.cr6.lt) goto loc_8235A838;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8235A838:
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// srawi r8,r11,13
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 13;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bgt cr6,0x8235a8a4
	if (ctx.cr6.gt) goto loc_8235A8A4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8235a86c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8235A86C;
	// bdzf 4*cr6+eq,0x8235a880
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8235A880;
	// bne cr6,0x8235a894
	if (!ctx.cr6.eq) goto loc_8235A894;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8235a8a8
	goto loc_8235A8A8;
loc_8235A86C:
	// subf r11,r11,r28
	ctx.r11.u64 = r28.u64 - ctx.r11.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x8235a8a8
	goto loc_8235A8A8;
loc_8235A880:
	// addi r11,r11,16384
	ctx.r11.s64 = ctx.r11.s64 + 16384;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x8235a8a8
	goto loc_8235A8A8;
loc_8235A894:
	// subf r11,r11,r29
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8235a8a8
	goto loc_8235A8A8;
loc_8235A8A4:
	// fmr f0,f6
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f6.f64;
loc_8235A8A8:
	// fnmsubs f13,f13,f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f11.f64, -ctx.f10.f64)));
	// mullw r11,r5,r10
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// fmadds f3,f0,f9,f13
	ctx.f3.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f13.f64)));
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subfc r8,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r6.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r30.s32, ctx.xer);
	// lfsx f2,r5,r4
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f2.f64 = double(temp.f32);
	// and r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 & ctx.r11.u64;
	// stfs f12,4(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// fmuls f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fmuls f0,f1,f7
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// blt cr6,0x8235a774
	if (ctx.cr6.lt) goto loc_8235A774;
	// b 0x8235abf4
	goto loc_8235ABF4;
loc_8235A8F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8235abf4
	if (!ctx.cr6.gt) goto loc_8235ABF4;
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lis r29,-32256
	r29.s64 = -2113929216;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r28,-32256
	r28.s64 = -2113929216;
	// lis r24,-32256
	r24.s64 = -2113929216;
	// lfs f8,10540(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 10540);
	ctx.f8.f64 = double(temp.f32);
	// lis r27,-32256
	r27.s64 = -2113929216;
	// lfs f6,10536(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10536);
	ctx.f6.f64 = double(temp.f32);
	// lis r29,-32256
	r29.s64 = -2113929216;
	// lfs f7,10532(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 10532);
	ctx.f7.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f9,10528(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 10528);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,10520(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 10520);
	ctx.f10.f64 = double(temp.f32);
	// lis r28,0
	r28.s64 = 0;
	// lis r23,0
	r23.s64 = 0;
	// lfs f2,8620(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 8620);
	ctx.f2.f64 = double(temp.f32);
	// lis r24,0
	r24.s64 = 0;
	// lfs f3,3804(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 3804);
	ctx.f3.f64 = double(temp.f32);
	// ori r27,r28,32768
	r27.u64 = r28.u64 | 32768;
	// lfs f11,7536(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 7536);
	ctx.f11.f64 = double(temp.f32);
	// lfs f5,3716(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3716);
	ctx.f5.f64 = double(temp.f32);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// ori r28,r23,49151
	r28.u64 = r23.u64 | 49151;
	// ori r29,r24,65535
	r29.u64 = r24.u64 | 65535;
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// fdivs f4,f31,f1
	ctx.f4.f64 = double(float(f31.f64 / ctx.f1.f64));
loc_8235A97C:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f12,f1
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f1.f64));
	// fmuls f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8235a9b0
	if (!ctx.cr6.lt) goto loc_8235A9B0;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8235A9B0:
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// srawi r8,r11,13
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 13;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bgt cr6,0x8235aa1c
	if (ctx.cr6.gt) goto loc_8235AA1C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8235a9e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8235A9E4;
	// bdzf 4*cr6+eq,0x8235a9f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8235A9F8;
	// bne cr6,0x8235aa0c
	if (!ctx.cr6.eq) goto loc_8235AA0C;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// b 0x8235aa20
	goto loc_8235AA20;
loc_8235A9E4:
	// subf r11,r11,r28
	ctx.r11.u64 = r28.u64 - ctx.r11.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// b 0x8235aa20
	goto loc_8235AA20;
loc_8235A9F8:
	// addi r11,r11,16384
	ctx.r11.s64 = ctx.r11.s64 + 16384;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// b 0x8235aa20
	goto loc_8235AA20;
loc_8235AA0C:
	// subf r11,r11,r29
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// b 0x8235aa20
	goto loc_8235AA20;
loc_8235AA1C:
	// fmr f12,f5
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f5.f64;
loc_8235AA20:
	// fmuls f13,f0,f3
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8235aa40
	if (!ctx.cr6.lt) goto loc_8235AA40;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8235AA40:
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// srawi r8,r11,13
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 13;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bgt cr6,0x8235aaac
	if (ctx.cr6.gt) goto loc_8235AAAC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8235aa74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8235AA74;
	// bdzf 4*cr6+eq,0x8235aa88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8235AA88;
	// bne cr6,0x8235aa9c
	if (!ctx.cr6.eq) goto loc_8235AA9C;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8235aab0
	goto loc_8235AAB0;
loc_8235AA74:
	// subf r11,r11,r28
	ctx.r11.u64 = r28.u64 - ctx.r11.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// b 0x8235aab0
	goto loc_8235AAB0;
loc_8235AA88:
	// addi r11,r11,16384
	ctx.r11.s64 = ctx.r11.s64 + 16384;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// b 0x8235aab0
	goto loc_8235AAB0;
loc_8235AA9C:
	// subf r11,r11,r29
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8235aab0
	goto loc_8235AAB0;
loc_8235AAAC:
	// fmr f13,f5
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f5.f64;
loc_8235AAB0:
	// fmuls f0,f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8235aad0
	if (!ctx.cr6.lt) goto loc_8235AAD0;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8235AAD0:
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// srawi r8,r11,13
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 13;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bgt cr6,0x8235ab3c
	if (ctx.cr6.gt) goto loc_8235AB3C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8235ab04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8235AB04;
	// bdzf 4*cr6+eq,0x8235ab18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8235AB18;
	// bne cr6,0x8235ab2c
	if (!ctx.cr6.eq) goto loc_8235AB2C;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8235ab40
	goto loc_8235AB40;
loc_8235AB04:
	// subf r11,r11,r28
	ctx.r11.u64 = r28.u64 - ctx.r11.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x8235ab40
	goto loc_8235AB40;
loc_8235AB18:
	// addi r11,r11,16384
	ctx.r11.s64 = ctx.r11.s64 + 16384;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x8235ab40
	goto loc_8235AB40;
loc_8235AB2C:
	// subf r11,r11,r29
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8235ab40
	goto loc_8235AB40;
loc_8235AB3C:
	// fmr f0,f5
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f5.f64;
loc_8235AB40:
	// fnmsubs f12,f12,f9,f8
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f9.f64, -ctx.f8.f64)));
	// mullw r11,r5,r10
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// fmadds f13,f13,f7,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, ctx.f12.f64)));
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subfc r8,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r6.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r30.s32, ctx.xer);
	// lfsx f12,r5,r4
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// and r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 & ctx.r11.u64;
	// stfs f11,4(r7)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// fnmsubs f0,f0,f6,f13
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f6.f64, -ctx.f13.f64)));
	// fmuls f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f12,f13,f4
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// blt cr6,0x8235a97c
	if (ctx.cr6.lt) goto loc_8235A97C;
	// b 0x8235abf4
	goto loc_8235ABF4;
loc_8235AB90:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8235abf4
	if (!ctx.cr6.gt) goto loc_8235ABF4;
	// extsw r8,r30
	ctx.r8.s64 = r30.s32;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,7536(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 7536);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f31,f12
	ctx.f13.f64 = double(float(f31.f64 / ctx.f12.f64));
loc_8235ABC0:
	// mullw r8,r5,r10
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r8,r5,1
	ctx.r8.s64 = ctx.r5.s64 + 1;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subfc r3,r6,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r6.u32;
	ctx.r3.u64 = ctx.r8.u64 - ctx.r6.u64;
	// subfe r3,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lfsx f12,r5,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// and r5,r3,r8
	ctx.r5.u64 = ctx.r3.u64 & ctx.r8.u64;
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x8235abc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235ABC0;
loc_8235ABF4:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82359f58
	ctx.lr = 0x8235AC00;
	sub_82359F58(ctx, base);
	// srawi r11,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r11.s64 = r30.s32 >> 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// addic. r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x8235ac84
	if (!ctx.cr0.gt) goto loc_8235AC84;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r7,r25,-4
	ctx.r7.s64 = r25.s64 + -4;
	// lfs f13,10524(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10524);
	ctx.f13.f64 = double(temp.f32);
loc_8235AC20:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x8235ac48
	if (ctx.cr6.eq) goto loc_8235AC48;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
loc_8235AC34:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwimi r6,r10,1,0,30
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r6.u64 & 0xFFFFFFFF00000001);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// bdnz 0x8235ac34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235AC34;
loc_8235AC48:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f11,f11,f12
	ctx.f10.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f12.f64)));
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// fmuls f0,f9,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8235ac74
	if (!ctx.cr6.gt) goto loc_8235AC74;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_8235AC74:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stfsu f0,4(r7)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r7.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8235ac20
	if (ctx.cr6.lt) goto loc_8235AC20;
loc_8235AC84:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_823C2120) {
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
	// bl 0x826a1c80
	ctx.lr = 0x823C2128;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2c88
	ctx.lr = 0x823C2130;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r11,-24656
	r29.s64 = ctx.r11.s64 + -24656;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// li r30,-256
	r30.s64 = -256;
	// lfs f21,-30864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30864);
	f21.f64 = double(temp.f32);
	// mr r31,r29
	r31.u64 = r29.u64;
	// lfd f20,8312(r11)
	f20.u64 = REX_LOAD_U64(ctx.r11.u32 + 8312);
loc_823C2158:
	// addi r11,r30,210
	ctx.r11.s64 = r30.s64 + 210;
	// fmr f1,f20
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f20.f64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f2,f12,f21
	ctx.f2.f64 = double(float(ctx.f12.f64 * f21.f64));
	// bl 0x8269f778
	ctx.lr = 0x823C217C;
	sub_8269F778(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r9,r29,1512
	ctx.r9.s64 = r29.s64 + 1512;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823c2158
	if (ctx.cr6.lt) goto loc_823C2158;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// li r18,0
	r18.s64 = 0;
	// addi r29,r11,-20392
	r29.s64 = ctx.r11.s64 + -20392;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r18
	r30.u64 = r18.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
	// lfd f31,-30872(r11)
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -30872);
loc_823C21B4:
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x8269f778
	ctx.lr = 0x823C21D0;
	sub_8269F778(ctx, base);
	// addis r11,r29,1
	ctx.r11.s64 = r29.s64 + 65536;
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r10,r11,-32708
	ctx.r10.s64 = ctx.r11.s64 + -32708;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823c21b4
	if (ctx.cr6.lt) goto loc_823C21B4;
	// li r10,8
	ctx.r10.s64 = 8;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r9,-32121
	ctx.r9.s64 = -2105081856;
	// lis r8,-32129
	ctx.r8.s64 = -2105606144;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// lfs f29,3704(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3704);
	f29.f64 = double(temp.f32);
	// addi r9,r9,19584
	ctx.r9.s64 = ctx.r9.s64 + 19584;
	// addi r10,r10,13360
	ctx.r10.s64 = ctx.r10.s64 + 13360;
	// addi r8,r8,26600
	ctx.r8.s64 = ctx.r8.s64 + 26600;
loc_823C221C:
	// lfsx f0,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f0,f0,f29
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, f29.f64)));
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f11,f29,f12
	ctx.f11.f64 = double(float(f29.f64 / ctx.f12.f64));
	// stfsx f11,r11,r9
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfsx f10,r11,r10
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823c221c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C221C;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r11,13392
	r29.s64 = ctx.r11.s64 + 13392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,19
	r31.s64 = 19;
	// addi r30,r29,68
	r30.s64 = r29.s64 + 68;
	// lfs f31,-30876(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30876);
	f31.f64 = double(temp.f32);
	// lfs f27,3720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	f27.f64 = double(temp.f32);
loc_823C2260:
	// addi r11,r31,-18
	ctx.r11.s64 = r31.s64 + -18;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * f31.f64));
	// bl 0x826a14e0
	ctx.lr = 0x823C2280;
	sub_826A14E0(ctx, base);
	// extsw r9,r31
	ctx.r9.s64 = r31.s32;
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64));
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f1,f9,f31
	ctx.f1.f64 = double(float(ctx.f9.f64 * f31.f64));
	// bl 0x826a15c0
	ctx.lr = 0x823C22A0;
	sub_826A15C0(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// addi r8,r31,18
	ctx.r8.s64 = r31.s64 + 18;
	// fmuls f7,f30,f27
	ctx.f7.f64 = double(float(f30.f64 * f27.f64));
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f6,96(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// fdivs f4,f7,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 / ctx.f8.f64));
	// stfs f4,76(r30)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r30.u32 + 76, temp.u32);
	// stfs f4,-68(r30)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r30.u32 + -68, temp.u32);
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// fmuls f1,f3,f31
	ctx.f1.f64 = double(float(ctx.f3.f64 * f31.f64));
	// bl 0x826a14e0
	ctx.lr = 0x823C22D4;
	sub_826A14E0(ctx, base);
	// addi r6,r31,36
	ctx.r6.s64 = r31.s64 + 36;
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64));
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// lfd f2,104(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x826a15c0
	ctx.lr = 0x823C22F8;
	sub_826A15C0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// fmuls f12,f30,f27
	ctx.f12.f64 = double(float(f30.f64 * f27.f64));
	// cmpwi cr6,r31,55
	ctx.cr6.compare<int32_t>(r31.s32, 55, ctx.xer);
	// fdivs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// stfs f11,436(r30)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + 436, temp.u32);
	// stfsu f11,4(r30)
	ea = 4 + r30.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	r30.u32 = ea;
	// blt cr6,0x823c2260
	if (ctx.cr6.lt) goto loc_823C2260;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r31,43
	r31.s64 = 43;
	// addi r30,r29,452
	r30.s64 = r29.s64 + 452;
	// lfs f23,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f23.f64 = double(temp.f32);
	// lfs f30,-30880(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30880);
	f30.f64 = double(temp.f32);
loc_823C2330:
	// addi r11,r31,12
	ctx.r11.s64 = r31.s64 + 12;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * f31.f64));
	// bl 0x826a15c0
	ctx.lr = 0x823C2350;
	sub_826A15C0(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// extsw r9,r31
	ctx.r9.s64 = r31.s32;
	// std r9,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fdivs f8,f27,f11
	ctx.f8.f64 = double(float(f27.f64 / ctx.f11.f64));
	// stfs f8,-236(r30)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r30.u32 + -236, temp.u32);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fmuls f1,f7,f31
	ctx.f1.f64 = double(float(ctx.f7.f64 * f31.f64));
	// bl 0x826a15c0
	ctx.lr = 0x823C2378;
	sub_826A15C0(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// addi r8,r31,-30
	ctx.r8.s64 = r31.s64 + -30;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f5,88(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// fdivs f3,f27,f6
	ctx.f3.f64 = double(float(f27.f64 / ctx.f6.f64));
	// stfs f3,28(r30)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r30.u32 + 28, temp.u32);
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// fmuls f1,f2,f30
	ctx.f1.f64 = double(float(ctx.f2.f64 * f30.f64));
	// bl 0x826a14e0
	ctx.lr = 0x823C23A4;
	sub_826A14E0(ctx, base);
	// addi r6,r31,24
	ctx.r6.s64 = r31.s64 + 24;
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(ctx.f1.f64));
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f1,80(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * f31.f64));
	// bl 0x826a15c0
	ctx.lr = 0x823C23C8;
	sub_826A15C0(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// addi r4,r31,-42
	ctx.r4.s64 = r31.s64 + -42;
	// fmuls f11,f28,f27
	ctx.f11.f64 = double(float(f28.f64 * f27.f64));
	// stfs f23,-20(r30)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(r30.u32 + -20, temp.u32);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// stfs f23,-188(r30)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(r30.u32 + -188, temp.u32);
	// std r3,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fdivs f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// stfs f8,-212(r30)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r30.u32 + -212, temp.u32);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fmuls f1,f7,f30
	ctx.f1.f64 = double(float(ctx.f7.f64 * f30.f64));
	// bl 0x826a14e0
	ctx.lr = 0x823C2400;
	sub_826A14E0(ctx, base);
	// addi r11,r31,-12
	ctx.r11.s64 = r31.s64 + -12;
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(ctx.f1.f64));
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// lfd f6,120(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f1,f4,f31
	ctx.f1.f64 = double(float(ctx.f4.f64 * f31.f64));
	// bl 0x826a15c0
	ctx.lr = 0x823C2424;
	sub_826A15C0(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// fmuls f2,f28,f27
	ctx.f2.f64 = double(float(f28.f64 * f27.f64));
	// cmpwi cr6,r31,55
	ctx.cr6.compare<int32_t>(r31.s32, 55, ctx.xer);
	// fdivs f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 / ctx.f3.f64));
	// stfsu f1,4(r30)
	ea = 4 + r30.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	r30.u32 = ea;
	// blt cr6,0x823c2330
	if (ctx.cr6.lt) goto loc_823C2330;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// li r19,1
	r19.s64 = 1;
	// addi r11,r11,12436
	ctx.r11.s64 = ctx.r11.s64 + 12436;
	// mr r31,r19
	r31.u64 = r19.u64;
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,-30884(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30884);
	f31.f64 = double(temp.f32);
loc_823C245C:
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * f31.f64));
	// bl 0x826a15c0
	ctx.lr = 0x823C2478;
	sub_826A15C0(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// cmpwi cr6,r31,19
	ctx.cr6.compare<int32_t>(r31.s32, 19, ctx.xer);
	// fdivs f10,f27,f11
	ctx.f10.f64 = double(float(f27.f64 / ctx.f11.f64));
	// stfsu f10,4(r30)
	ea = 4 + r30.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	r30.u32 = ea;
	// blt cr6,0x823c245c
	if (ctx.cr6.lt) goto loc_823C245C;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// mr r31,r19
	r31.u64 = r19.u64;
	// addi r11,r11,-25696
	ctx.r11.s64 = ctx.r11.s64 + -25696;
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f22,-30888(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30888);
	f22.f64 = double(temp.f32);
loc_823C24A8:
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f22
	ctx.f1.f64 = double(float(ctx.f12.f64 * f22.f64));
	// bl 0x826a15c0
	ctx.lr = 0x823C24C4;
	sub_826A15C0(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(r31.s32, 7, ctx.xer);
	// fdivs f10,f27,f11
	ctx.f10.f64 = double(float(f27.f64 / ctx.f11.f64));
	// stfsu f10,4(r30)
	ea = 4 + r30.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	r30.u32 = ea;
	// blt cr6,0x823c24a8
	if (ctx.cr6.lt) goto loc_823C24A8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f1,-30896(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -30896);
	// bl 0x826a15c0
	ctx.lr = 0x823C24E8;
	sub_826A15C0(ctx, base);
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f0,-25684(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + -25684, temp.u32);
	// lfd f1,-30904(r9)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r9.u32 + -30904);
	// bl 0x826a15c0
	ctx.lr = 0x823C2500;
	sub_826A15C0(ctx, base);
	// lis r8,-32121
	ctx.r8.s64 = -2105081856;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stfs f0,-26540(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + -26540, temp.u32);
	// lfd f1,-30912(r7)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r7.u32 + -30912);
	// bl 0x826a15c0
	ctx.lr = 0x823C2518;
	sub_826A15C0(ctx, base);
	// lis r6,-32121
	ctx.r6.s64 = -2105081856;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r31,r6,-25708
	r31.s64 = ctx.r6.s64 + -25708;
	// stfs f0,-25708(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + -25708, temp.u32);
	// lfd f1,-30920(r5)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r5.u32 + -30920);
	// bl 0x826a15c0
	ctx.lr = 0x823C2534;
	sub_826A15C0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfd f1,-30928(r4)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r4.u32 + -30928);
	// bl 0x826a15c0
	ctx.lr = 0x823C2548;
	sub_826A15C0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lfd f1,-30936(r3)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r3.u32 + -30936);
	// bl 0x826a15c0
	ctx.lr = 0x823C255C;
	sub_826A15C0(ctx, base);
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r31,r11,21308
	r31.s64 = ctx.r11.s64 + 21308;
	// stfs f0,21308(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 21308, temp.u32);
	// lfd f1,-30944(r10)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + -30944);
	// bl 0x826a15c0
	ctx.lr = 0x823C2578;
	sub_826A15C0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfd f1,-30952(r9)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r9.u32 + -30952);
	// bl 0x826a15c0
	ctx.lr = 0x823C258C;
	sub_826A15C0(ctx, base);
	// li r17,7
	r17.s64 = 7;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// mr r31,r17
	r31.u64 = r17.u64;
	// addi r30,r29,284
	r30.s64 = r29.s64 + 284;
loc_823C25A0:
	// addi r11,r31,-6
	ctx.r11.s64 = r31.s64 + -6;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f30
	ctx.f1.f64 = double(float(ctx.f12.f64 * f30.f64));
	// bl 0x826a14e0
	ctx.lr = 0x823C25C0;
	sub_826A14E0(ctx, base);
	// extsw r9,r31
	ctx.r9.s64 = r31.s32;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64));
	// std r9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f11,112(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f1,f9,f30
	ctx.f1.f64 = double(float(ctx.f9.f64 * f30.f64));
	// bl 0x826a15c0
	ctx.lr = 0x823C25E0;
	sub_826A15C0(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// fmuls f7,f31,f27
	ctx.f7.f64 = double(float(f31.f64 * f27.f64));
	// cmpwi cr6,r31,31
	ctx.cr6.compare<int32_t>(r31.s32, 31, ctx.xer);
	// fdivs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 / ctx.f8.f64));
	// stfsu f6,4(r30)
	ea = 4 + r30.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	r30.u32 = ea;
	// blt cr6,0x823c25a0
	if (ctx.cr6.lt) goto loc_823C25A0;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// addi r5,r11,26584
	ctx.r5.s64 = ctx.r11.s64 + 26584;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r7,r11,-20968
	ctx.r7.s64 = ctx.r11.s64 + -20968;
loc_823C2614:
	// lwz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823c2644
	if (!ctx.cr6.gt) goto loc_823C2644;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823C2634:
	// lfsx f0,r11,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r7
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x823c2634
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C2634;
loc_823C2644:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x823c267c
	if (!ctx.cr6.gt) goto loc_823C267C;
	// addi r10,r9,-2
	ctx.r10.s64 = ctx.r9.s64 + -2;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823C2660:
	// addi r10,r29,4
	ctx.r10.s64 = r29.s64 + 4;
	// addi r9,r7,4
	ctx.r9.s64 = ctx.r7.s64 + 4;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfsx f13,r11,r9
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x823c2660
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C2660;
loc_823C267C:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r11,r5,16
	ctx.r11.s64 = ctx.r5.s64 + 16;
	// addi r8,r8,144
	ctx.r8.s64 = ctx.r8.s64 + 144;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823c2614
	if (ctx.cr6.lt) goto loc_823C2614;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// lfs f24,-30956(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -30956);
	f24.f64 = double(temp.f32);
	// lis r9,-32121
	ctx.r9.s64 = -2105081856;
	// lfs f26,11204(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 11204);
	f26.f64 = double(temp.f32);
	// lis r8,-32121
	ctx.r8.s64 = -2105081856;
	// lfs f25,-30960(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -30960);
	f25.f64 = double(temp.f32);
	// lis r7,-32121
	ctx.r7.s64 = -2105081856;
	// lis r6,-32121
	ctx.r6.s64 = -2105081856;
	// lis r5,-32121
	ctx.r5.s64 = -2105081856;
	// lis r4,-32121
	ctx.r4.s64 = -2105081856;
	// mr r20,r18
	r20.u64 = r18.u64;
	// mr r29,r18
	r29.u64 = r18.u64;
	// addi r28,r11,13232
	r28.s64 = ctx.r11.s64 + 13232;
	// addi r27,r10,13104
	r27.s64 = ctx.r10.s64 + 13104;
	// addi r26,r9,12976
	r26.s64 = ctx.r9.s64 + 12976;
	// addi r25,r8,21320
	r25.s64 = ctx.r8.s64 + 21320;
	// addi r24,r7,-21032
	r24.s64 = ctx.r7.s64 + -21032;
	// addi r23,r6,-23144
	r23.s64 = ctx.r6.s64 + -23144;
	// addi r22,r5,26920
	r22.s64 = ctx.r5.s64 + 26920;
	// addi r21,r4,-26712
	r21.s64 = ctx.r4.s64 + -26712;
loc_823C26F0:
	// extsw r11,r20
	ctx.r11.s64 = r20.s32;
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f28,f13
	f28.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f28,f22
	ctx.f1.f64 = double(float(f28.f64 * f22.f64));
	// bl 0x8269ff50
	ctx.lr = 0x823C270C;
	sub_8269FF50(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fadds f0,f13,f29
	ctx.f0.f64 = double(float(ctx.f13.f64 + f29.f64));
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, f23.f64);
	// bne cr6,0x823c2738
	if (!ctx.cr6.eq) goto loc_823C2738;
	// fmuls f0,f13,f25
	ctx.f0.f64 = double(float(ctx.f13.f64 * f25.f64));
	// stfsx f0,r29,r21
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + r21.u32, temp.u32);
	// stfsx f25,r29,r22
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r29.u32 + r22.u32, temp.u32);
	// stfsx f24,r29,r24
	temp.f32 = float(f24.f64);
	REX_STORE_U32(r29.u32 + r24.u32, temp.u32);
	// fmuls f13,f0,f26
	ctx.f13.f64 = double(float(ctx.f0.f64 * f26.f64));
	// stfsx f13,r29,r23
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + r23.u32, temp.u32);
	// b 0x823c275c
	goto loc_823C275C;
loc_823C2738:
	// fmuls f12,f13,f26
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 * f26.f64));
	// fdivs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfsx f11,r29,r21
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r29.u32 + r21.u32, temp.u32);
	// fdivs f10,f29,f0
	ctx.f10.f64 = double(float(f29.f64 / ctx.f0.f64));
	// stfsx f10,r29,r22
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r29.u32 + r22.u32, temp.u32);
	// fdivs f9,f26,f0
	ctx.f9.f64 = double(float(f26.f64 / ctx.f0.f64));
	// stfsx f9,r29,r24
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r29.u32 + r24.u32, temp.u32);
	// fdivs f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// stfsx f8,r29,r23
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r29.u32 + r23.u32, temp.u32);
loc_823C275C:
	// mr r30,r18
	r30.u64 = r18.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_823C2764:
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// fmr f1,f20
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f20.f64;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fadds f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 + f29.f64));
	// fmuls f2,f11,f21
	ctx.f2.f64 = double(float(ctx.f11.f64 * f21.f64));
	// bl 0x8269f778
	ctx.lr = 0x823C2788;
	sub_8269F778(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// fmr f31,f29
	f31.f64 = f29.f64;
	// fmr f30,f29
	f30.f64 = f29.f64;
	// ble cr6,0x823c27c8
	if (!ctx.cr6.gt) goto loc_823C27C8;
	// clrlwi r11,r20,31
	ctx.r11.u64 = r20.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823c27bc
	if (ctx.cr6.eq) goto loc_823C27BC;
	// fadds f0,f28,f29
	ctx.f0.f64 = double(float(f28.f64 + f29.f64));
	// fmuls f2,f0,f27
	ctx.f2.f64 = double(float(ctx.f0.f64 * f27.f64));
	// bl 0x8269f778
	ctx.lr = 0x823C27B4;
	sub_8269F778(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64));
	// b 0x823c27c8
	goto loc_823C27C8;
loc_823C27BC:
	// fmuls f2,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(f28.f64 * f27.f64));
	// bl 0x8269f778
	ctx.lr = 0x823C27C4;
	sub_8269F778(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64));
loc_823C27C8:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// fmuls f0,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 * f26.f64));
	// fmuls f13,f30,f26
	ctx.f13.f64 = double(float(f30.f64 * f26.f64));
	// stfsx f31,r31,r25
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + r25.u32, temp.u32);
	// stfsx f30,r31,r26
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + r26.u32, temp.u32);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// stfsx f0,r31,r27
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + r27.u32, temp.u32);
	// stfsx f13,r31,r28
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + r28.u32, temp.u32);
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// blt cr6,0x823c2764
	if (ctx.cr6.lt) goto loc_823C2764;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// cmpwi cr6,r29,64
	ctx.cr6.compare<int32_t>(r29.s32, 64, ctx.xer);
	// blt cr6,0x823c26f0
	if (ctx.cr6.lt) goto loc_823C26F0;
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r23,r10,21448
	r23.s64 = ctx.r10.s64 + 21448;
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// addi r22,r11,17720
	r22.s64 = ctx.r11.s64 + 17720;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r25,r10,13968
	r25.s64 = ctx.r10.s64 + 13968;
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// lis r7,-32121
	ctx.r7.s64 = -2105081856;
	// addi r24,r11,19616
	r24.s64 = ctx.r11.s64 + 19616;
	// addi r9,r22,100
	ctx.r9.s64 = r22.s64 + 100;
	// addi r11,r23,120
	ctx.r11.s64 = r23.s64 + 120;
	// mr r30,r18
	r30.u64 = r18.u64;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r29,2
	r29.s64 = 2;
	// li r20,4
	r20.s64 = 4;
	// li r16,5
	r16.s64 = 5;
	// li r21,6
	r21.s64 = 6;
	// addi r26,r10,21200
	r26.s64 = ctx.r10.s64 + 21200;
	// addi r27,r7,-26648
	r27.s64 = ctx.r7.s64 + -26648;
loc_823C2850:
	// lwz r7,-8(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + -8);
	// addi r10,r11,-120
	ctx.r10.s64 = ctx.r11.s64 + -120;
	// li r3,10
	ctx.r3.s64 = 10;
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// stwx r10,r30,r27
	REX_STORE_U32(r30.u32 + r27.u32, ctx.r10.u32);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// stw r6,-120(r11)
	REX_STORE_U32(ctx.r11.u32 + -120, ctx.r6.u32);
	// addi r28,r9,-100
	r28.s64 = ctx.r9.s64 + -100;
	// stw r18,-116(r11)
	REX_STORE_U32(ctx.r11.u32 + -116, r18.u32);
	// addi r4,r9,144
	ctx.r4.s64 = ctx.r9.s64 + 144;
	// stw r8,-112(r11)
	REX_STORE_U32(ctx.r11.u32 + -112, ctx.r8.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// stw r18,-108(r11)
	REX_STORE_U32(ctx.r11.u32 + -108, r18.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// lwz r10,-8(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + -8);
	// lwz r3,-4(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// srawi r7,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 1;
	// stw r7,-104(r11)
	REX_STORE_U32(ctx.r11.u32 + -104, ctx.r7.u32);
	// stw r10,-100(r11)
	REX_STORE_U32(ctx.r11.u32 + -100, ctx.r10.u32);
	// stw r8,-96(r11)
	REX_STORE_U32(ctx.r11.u32 + -96, ctx.r8.u32);
	// stw r19,-92(r11)
	REX_STORE_U32(ctx.r11.u32 + -92, r19.u32);
	// lwz r7,-4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// lwz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stw r3,-88(r11)
	REX_STORE_U32(ctx.r11.u32 + -88, ctx.r3.u32);
	// stw r10,-84(r11)
	REX_STORE_U32(ctx.r11.u32 + -84, ctx.r10.u32);
	// stw r8,-80(r11)
	REX_STORE_U32(ctx.r11.u32 + -80, ctx.r8.u32);
	// stw r29,-76(r11)
	REX_STORE_U32(ctx.r11.u32 + -76, r29.u32);
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r3,4(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stw r3,-72(r11)
	REX_STORE_U32(ctx.r11.u32 + -72, ctx.r3.u32);
	// stw r10,-68(r11)
	REX_STORE_U32(ctx.r11.u32 + -68, ctx.r10.u32);
	// stw r8,-64(r11)
	REX_STORE_U32(ctx.r11.u32 + -64, ctx.r8.u32);
	// stw r8,-60(r11)
	REX_STORE_U32(ctx.r11.u32 + -60, ctx.r8.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,8(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stw r3,-56(r11)
	REX_STORE_U32(ctx.r11.u32 + -56, ctx.r3.u32);
	// stw r10,-52(r11)
	REX_STORE_U32(ctx.r11.u32 + -52, ctx.r10.u32);
	// stw r8,-48(r11)
	REX_STORE_U32(ctx.r11.u32 + -48, ctx.r8.u32);
	// stw r20,-44(r11)
	REX_STORE_U32(ctx.r11.u32 + -44, r20.u32);
	// lwz r7,8(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r3,12(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stw r3,-40(r11)
	REX_STORE_U32(ctx.r11.u32 + -40, ctx.r3.u32);
	// stw r10,-36(r11)
	REX_STORE_U32(ctx.r11.u32 + -36, ctx.r10.u32);
	// stw r8,-32(r11)
	REX_STORE_U32(ctx.r11.u32 + -32, ctx.r8.u32);
	// stw r16,-28(r11)
	REX_STORE_U32(ctx.r11.u32 + -28, r16.u32);
	// lwz r7,12(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r3,16(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stw r3,-24(r11)
	REX_STORE_U32(ctx.r11.u32 + -24, ctx.r3.u32);
	// stw r10,-20(r11)
	REX_STORE_U32(ctx.r11.u32 + -20, ctx.r10.u32);
	// stw r8,-16(r11)
	REX_STORE_U32(ctx.r11.u32 + -16, ctx.r8.u32);
	// stw r21,-12(r11)
	REX_STORE_U32(ctx.r11.u32 + -12, r21.u32);
	// lwz r7,16(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r3,20(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stw r3,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r3.u32);
	// addi r10,r5,4
	ctx.r10.s64 = ctx.r5.s64 + 4;
	// stw r7,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r17,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r17.u32);
	// lwz r31,20(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// add r7,r31,r7
	ctx.r7.u64 = r31.u64 + ctx.r7.u64;
loc_823C2970:
	// lwzu r5,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r5.u64 = REX_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// addi r31,r7,1
	r31.s64 = ctx.r7.s64 + 1;
	// addi r14,r7,2
	r14.s64 = ctx.r7.s64 + 2;
	// srawi r5,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// stw r5,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// add r3,r5,r3
	ctx.r3.u64 = ctx.r5.u64 + ctx.r3.u64;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stwu r18,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, r18.u32);
	ctx.r10.u32 = ea;
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// stwu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// stwu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, r31.u32);
	ctx.r10.u32 = ea;
	// stwu r19,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, r19.u32);
	ctx.r10.u32 = ea;
	// stwu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// stwu r14,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, r14.u32);
	ctx.r10.u32 = ea;
	// stwu r29,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r10.u32 = ea;
	// stwu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823c2970
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C2970;
	// addi r5,r27,4
	ctx.r5.s64 = r27.s64 + 4;
	// stwx r10,r30,r26
	REX_STORE_U32(r30.u32 + r26.u32, ctx.r10.u32);
	// li r7,13
	ctx.r7.s64 = 13;
	// addi r4,r28,232
	ctx.r4.s64 = r28.s64 + 232;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// stwx r25,r30,r5
	REX_STORE_U32(r30.u32 + ctx.r5.u32, r25.u32);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_823C29F0:
	// lwzu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// addi r31,r6,1
	r31.s64 = ctx.r6.s64 + 1;
	// addi r14,r6,2
	r14.s64 = ctx.r6.s64 + 2;
	// srawi r7,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stwu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// add r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 + ctx.r3.u64;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stwu r18,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, r18.u32);
	ctx.r10.u32 = ea;
	// add r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 + ctx.r6.u64;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// stwu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, r31.u32);
	ctx.r10.u32 = ea;
	// stwu r19,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, r19.u32);
	ctx.r10.u32 = ea;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// stwu r14,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, r14.u32);
	ctx.r10.u32 = ea;
	// stwu r29,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r10.u32 = ea;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823c29f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C29F0;
	// addi r4,r26,4
	ctx.r4.s64 = r26.s64 + 4;
	// addi r3,r27,8
	ctx.r3.s64 = r27.s64 + 8;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r6,r28,88
	ctx.r6.s64 = r28.s64 + 88;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// stwx r10,r30,r4
	REX_STORE_U32(r30.u32 + ctx.r4.u32, ctx.r10.u32);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// stwx r24,r30,r3
	REX_STORE_U32(r30.u32 + ctx.r3.u32, r24.u32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_823C2A70:
	// lwz r5,4(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// addi r4,r7,1
	ctx.r4.s64 = ctx.r7.s64 + 1;
	// srawi r3,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 1;
	// stw r3,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// lwzu r5,8(r6)
	ea = 8 + ctx.r6.u32;
	ctx.r5.u64 = REX_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// srawi r5,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// stwu r4,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r10.u32 = ea;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823c2a70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C2A70;
	// addi r7,r26,8
	ctx.r7.s64 = r26.s64 + 8;
	// addi r11,r11,608
	ctx.r11.s64 = ctx.r11.s64 + 608;
	// addi r6,r23,5592
	ctx.r6.s64 = r23.s64 + 5592;
	// addi r9,r9,288
	ctx.r9.s64 = ctx.r9.s64 + 288;
	// addi r25,r25,624
	r25.s64 = r25.s64 + 624;
	// stwx r10,r30,r7
	REX_STORE_U32(r30.u32 + ctx.r7.u32, ctx.r10.u32);
	// addi r24,r24,176
	r24.s64 = r24.s64 + 176;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x823c2850
	if (ctx.cr6.lt) goto loc_823C2850;
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r5,r10,-26536
	ctx.r5.s64 = ctx.r10.s64 + -26536;
	// addi r10,r11,12472
	ctx.r10.s64 = ctx.r11.s64 + 12472;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// addi r6,r22,180
	ctx.r6.s64 = r22.s64 + 180;
	// li r7,18
	ctx.r7.s64 = 18;
loc_823C2AE4:
	// li r11,23
	ctx.r11.s64 = 23;
	// addi r9,r6,-180
	ctx.r9.s64 = ctx.r6.s64 + -180;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823C2AF0:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// divw r11,r11,r7
	ctx.r11.u64 = uint32_t((ctx.r7.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r11.s32 / ctx.r7.s32 : 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// cmpw cr6,r11,r15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r15.s32, ctx.xer);
	// ble cr6,0x823c2b10
	if (!ctx.cr6.gt) goto loc_823C2B10;
	// stw r15,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, r15.u32);
loc_823C2B10:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x823c2af0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C2AF0;
	// li r11,14
	ctx.r11.s64 = 14;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823C2B28:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// divw r11,r11,r7
	ctx.r11.u64 = uint32_t((ctx.r7.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r11.s32 / ctx.r7.s32 : 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// cmpw cr6,r11,r15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r15.s32, ctx.xer);
	// ble cr6,0x823c2b48
	if (!ctx.cr6.gt) goto loc_823C2B48;
	// stw r15,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r15.u32);
loc_823C2B48:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823c2b28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C2B28;
	// addi r11,r5,828
	ctx.r11.s64 = ctx.r5.s64 + 828;
	// addi r6,r6,288
	ctx.r6.s64 = ctx.r6.s64 + 288;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823c2ae4
	if (ctx.cr6.lt) goto loc_823C2AE4;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// addi r7,r11,-25680
	ctx.r7.s64 = ctx.r11.s64 + -25680;
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
loc_823C2B74:
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
loc_823C2B80:
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// ori r6,r8,12288
	ctx.r6.u64 = ctx.r8.u64 | 12288;
	// or r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 | ctx.r10.u64;
	// or r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 | ctx.r10.u64;
	// or r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 | ctx.r10.u64;
	// or r8,r6,r10
	ctx.r8.u64 = ctx.r6.u64 | ctx.r10.u64;
	// or r31,r6,r10
	r31.u64 = ctx.r6.u64 | ctx.r10.u64;
	// or r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 | ctx.r10.u64;
	// ori r5,r5,64
	ctx.r5.u64 = ctx.r5.u64 | 64;
	// stw r6,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r6.u32);
	// ori r4,r4,128
	ctx.r4.u64 = ctx.r4.u64 | 128;
	// ori r3,r3,192
	ctx.r3.u64 = ctx.r3.u64 | 192;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// ori r8,r8,256
	ctx.r8.u64 = ctx.r8.u64 | 256;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// ori r6,r31,320
	ctx.r6.u64 = r31.u64 | 320;
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r6,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// bdnz 0x823c2b80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C2B80;
	// addi r9,r7,724
	ctx.r9.s64 = ctx.r7.s64 + 724;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823c2b74
	if (ctx.cr6.lt) goto loc_823C2B74;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// addi r11,r7,724
	ctx.r11.s64 = ctx.r7.s64 + 724;
loc_823C2BF0:
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// mtctr r20
	ctx.ctr.u64 = r20.u64;
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
loc_823C2BFC:
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// ori r6,r8,16384
	ctx.r6.u64 = ctx.r8.u64 | 16384;
	// or r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 | ctx.r10.u64;
	// or r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 | ctx.r10.u64;
	// or r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 | ctx.r10.u64;
	// or r8,r6,r10
	ctx.r8.u64 = ctx.r6.u64 | ctx.r10.u64;
	// ori r6,r5,64
	ctx.r6.u64 = ctx.r5.u64 | 64;
	// ori r5,r4,128
	ctx.r5.u64 = ctx.r4.u64 | 128;
	// stw r8,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// ori r4,r3,192
	ctx.r4.u64 = ctx.r3.u64 | 192;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x823c2bfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C2BFC;
	// addi r9,r7,980
	ctx.r9.s64 = ctx.r7.s64 + 980;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823c2bf0
	if (ctx.cr6.lt) goto loc_823C2BF0;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// mtctr r20
	ctx.ctr.u64 = r20.u64;
	// lis r9,-32121
	ctx.r9.s64 = -2105081856;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// addi r6,r9,-23080
	ctx.r6.s64 = ctx.r9.s64 + -23080;
loc_823C2C64:
	// addi r9,r7,976
	ctx.r9.s64 = ctx.r7.s64 + 976;
	// addi r8,r6,2000
	ctx.r8.s64 = ctx.r6.s64 + 2000;
	// ori r28,r10,20480
	r28.u64 = ctx.r10.u64 | 20480;
	// ori r5,r10,8
	ctx.r5.u64 = ctx.r10.u64 | 8;
	// ori r27,r10,40960
	r27.u64 = ctx.r10.u64 | 40960;
	// addi r4,r7,980
	ctx.r4.s64 = ctx.r7.s64 + 980;
	// stwx r28,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r28.u32);
	// addi r3,r6,2004
	ctx.r3.s64 = ctx.r6.s64 + 2004;
	// stwx r27,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, r27.u32);
	// ori r31,r10,16
	r31.u64 = ctx.r10.u64 | 16;
	// addi r30,r7,984
	r30.s64 = ctx.r7.s64 + 984;
	// addi r29,r6,2008
	r29.s64 = ctx.r6.s64 + 2008;
	// ori r26,r5,20480
	r26.u64 = ctx.r5.u64 | 20480;
	// ori r9,r5,40960
	ctx.r9.u64 = ctx.r5.u64 | 40960;
	// ori r8,r31,20480
	ctx.r8.u64 = r31.u64 | 20480;
	// stwx r26,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, r26.u32);
	// ori r5,r31,40960
	ctx.r5.u64 = r31.u64 | 40960;
	// stwx r9,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// stwx r8,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r8.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r5,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, ctx.r5.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bdnz 0x823c2c64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C2C64;
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
loc_823C2CC8:
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
loc_823C2CCC:
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mtctr r20
	ctx.ctr.u64 = r20.u64;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
loc_823C2CD8:
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// or r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r3,r5,r8
	ctx.r3.u64 = ctx.r5.u64 | ctx.r8.u64;
	// rlwinm r7,r4,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r3,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// or r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 | ctx.r9.u64;
	// or r3,r7,r9
	ctx.r3.u64 = ctx.r7.u64 | ctx.r9.u64;
	// or r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 | ctx.r9.u64;
	// or r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 | ctx.r9.u64;
	// ori r4,r4,512
	ctx.r4.u64 = ctx.r4.u64 | 512;
	// ori r3,r3,1024
	ctx.r3.u64 = ctx.r3.u64 | 1024;
	// stw r5,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r5.u32);
	// ori r7,r7,1536
	ctx.r7.u64 = ctx.r7.u64 | 1536;
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x823c2cd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C2CD8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// blt cr6,0x823c2ccc
	if (ctx.cr6.lt) goto loc_823C2CCC;
	// addi r10,r6,1604
	ctx.r10.s64 = ctx.r6.s64 + 1604;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823c2cc8
	if (ctx.cr6.lt) goto loc_823C2CC8;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// addi r11,r6,1604
	ctx.r11.s64 = ctx.r6.s64 + 1604;
loc_823C2D4C:
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// mtctr r16
	ctx.ctr.u64 = r16.u64;
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
loc_823C2D58:
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// ori r7,r8,4096
	ctx.r7.u64 = ctx.r8.u64 | 4096;
	// or r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 | ctx.r10.u64;
	// ori r7,r5,64
	ctx.r7.u64 = ctx.r5.u64 | 64;
	// ori r5,r4,128
	ctx.r5.u64 = ctx.r4.u64 | 128;
	// stw r8,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// ori r4,r3,192
	ctx.r4.u64 = ctx.r3.u64 | 192;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x823c2d58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C2D58;
	// addi r9,r6,2004
	ctx.r9.s64 = ctx.r6.s64 + 2004;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823c2d4c
	if (ctx.cr6.lt) goto loc_823C2D4C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cd4
	ctx.lr = 0x823C2DB8;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8240E5E0) {
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
	// bl 0x826a1ca8
	ctx.lr = 0x8240E5E8;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ca8
	ctx.lr = 0x8240E5F0;
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
	// beq cr6,0x8240e61c
	if (ctx.cr6.eq) goto loc_8240E61C;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82408848
	ctx.lr = 0x8240E618;
	sub_82408848(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8240E61C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240e638
	if (ctx.cr6.eq) goto loc_8240E638;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824094e0
	ctx.lr = 0x8240E634;
	sub_824094E0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8240E638:
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
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
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
	// bne 0x8240e6a8
	if (!ctx.cr0.eq) goto loc_8240E6A8;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x8240e6b0
	goto loc_8240E6B0;
loc_8240E6A8:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_8240E6B0:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240e6c8
	if (ctx.cr6.eq) goto loc_8240E6C8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409a88
	ctx.lr = 0x8240E6C8;
	sub_82409A88(ctx, base);
loc_8240E6C8:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8240ea40
	if (!ctx.cr6.gt) goto loc_8240EA40;
	// add r10,r30,r29
	ctx.r10.u64 = r30.u64 + r29.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f11,15196(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15196);
	ctx.f11.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// lfd f10,20216(r10)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r10.u32 + 20216);
	// rlwinm r25,r30,2,0,29
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,20208(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20208);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,17280(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,19656(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 19656);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r30,r30,4,0,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f5,19032(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 19032);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// subf r29,r25,r28
	r29.u64 = r28.u64 - r25.u64;
loc_8240E72C:
	// add r10,r27,r11
	ctx.r10.u64 = r27.u64 + ctx.r11.u64;
	// lfsx f9,r27,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f29,f9
	ctx.f9.f64 = double(float(f29.f64 + ctx.f9.f64));
	// rlwinm r7,r26,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xC;
	// lwz r6,92(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f8,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 + f31.f64));
	// lfs f6,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f7,f7,f30
	ctx.f7.f64 = double(float(ctx.f7.f64 + f30.f64));
	// fadds f6,f6,f28
	ctx.f6.f64 = double(float(ctx.f6.f64 + f28.f64));
	// lfsx f4,r7,r24
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + r24.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f7,f7,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fadds f3,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// fadds f2,f8,f4
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f4.f64));
	// fadds f1,f7,f4
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// fadds f4,f6,f4
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// fctiwz f3,f3
	ctx.f3.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f3,f2
	ctx.f3.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// fctiwz f3,f1
	ctx.f3.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f3.u64);
	// fctiwz f4,f4
	ctx.f4.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f4,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f4.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// beq cr6,0x8240e964
	if (ctx.cr6.eq) goto loc_8240E964;
	// extsw r7,r5
	ctx.r7.s64 = ctx.r5.s32;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r28,r4
	r28.s64 = ctx.r4.s32;
	// std r7,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f4,104(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r28,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r28.u64);
	// lfd f3,112(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f3
	ctx.f3.f64 = double(ctx.f3.s64);
	// extsw r7,r6
	ctx.r7.s64 = ctx.r6.s32;
	// frsp f3,f3
	ctx.f3.f64 = double(float(ctx.f3.f64));
	// std r7,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f2,120(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsw r28,r3
	r28.s64 = ctx.r3.s32;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// std r28,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, r28.u64);
	// lfs f1,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f8,f8,f3
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f3.f64));
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fsubs f7,f7,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f4.f64));
	// fmadds f4,f8,f13,f1
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f1.f64)));
	// stfs f4,16(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f4,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f4,f8,f12,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f4.f64)));
	// stfs f4,16(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// fcfid f4,f2
	ctx.f4.f64 = double(ctx.f2.s64);
	// lfs f3,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// fmadds f3,f8,f11,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f3.f64)));
	// stfs f3,16(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// lfs f3,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f3,f7,f13,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f3.f64)));
	// stfs f3,20(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fsubs f9,f9,f4
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// lfs f4,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f4,f7,f12,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f4.f64)));
	// stfs f4,20(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f4,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f4,f7,f11,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f7.f64, ctx.f11.f64, ctx.f4.f64)));
	// stfs f4,20(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fmul f8,f8,f10
	ctx.f8.f64 = ctx.f8.f64 * ctx.f10.f64;
	// lfs f4,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f4,f9,f13,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f4.f64)));
	// stfs f4,24(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmul f7,f7,f10
	ctx.f7.f64 = ctx.f7.f64 * ctx.f10.f64;
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// frsp f31,f8
	f31.f64 = double(float(ctx.f8.f64));
	// lfs f8,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f9,f12,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f8.f64)));
	// stfs f8,24(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// frsp f30,f7
	f30.f64 = double(float(ctx.f7.f64));
	// lfd f7,128(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f8,f7
	ctx.f8.f64 = double(ctx.f7.s64);
	// lfs f7,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f7,f9,f11,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f7.f64)));
	// fmul f9,f9,f10
	ctx.f9.f64 = ctx.f9.f64 * ctx.f10.f64;
	// stfs f7,24(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// frsp f29,f9
	f29.f64 = double(float(ctx.f9.f64));
	// lfs f7,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f9,f6,f8
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// addi r7,r10,28
	ctx.r7.s64 = ctx.r10.s64 + 28;
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f8,f9,f13,f7
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f7.f64)));
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
	// fmadds f8,f9,f12,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f8.f64)));
	// fmul f7,f9,f10
	ctx.f7.f64 = ctx.f9.f64 * ctx.f10.f64;
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
	// fmadds f9,f9,f11,f8
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f8.f64)));
	// stfs f9,28(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// frsp f28,f7
	f28.f64 = double(float(ctx.f7.f64));
	// addi r7,r10,28
	ctx.r7.s64 = ctx.r10.s64 + 28;
loc_8240E964:
	// cmpwi cr6,r4,127
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 127, ctx.xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt cr6,0x8240e974
	if (ctx.cr6.lt) goto loc_8240E974;
	// li r10,127
	ctx.r10.s64 = 127;
loc_8240E974:
	// cmpwi cr6,r10,-127
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -127, ctx.xer);
	// ble cr6,0x8240e98c
	if (!ctx.cr6.gt) goto loc_8240E98C;
	// cmpwi cr6,r4,127
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 127, ctx.xer);
	// blt cr6,0x8240e990
	if (ctx.cr6.lt) goto loc_8240E990;
	// li r4,127
	ctx.r4.s64 = 127;
	// b 0x8240e990
	goto loc_8240E990;
loc_8240E98C:
	// li r4,-127
	ctx.r4.s64 = -127;
loc_8240E990:
	// cmpwi cr6,r5,127
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 127, ctx.xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// blt cr6,0x8240e9a0
	if (ctx.cr6.lt) goto loc_8240E9A0;
	// li r10,127
	ctx.r10.s64 = 127;
loc_8240E9A0:
	// cmpwi cr6,r10,-127
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -127, ctx.xer);
	// ble cr6,0x8240e9b8
	if (!ctx.cr6.gt) goto loc_8240E9B8;
	// cmpwi cr6,r5,127
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 127, ctx.xer);
	// blt cr6,0x8240e9bc
	if (ctx.cr6.lt) goto loc_8240E9BC;
	// li r5,127
	ctx.r5.s64 = 127;
	// b 0x8240e9bc
	goto loc_8240E9BC;
loc_8240E9B8:
	// li r5,-127
	ctx.r5.s64 = -127;
loc_8240E9BC:
	// cmpwi cr6,r6,127
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 127, ctx.xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// blt cr6,0x8240e9cc
	if (ctx.cr6.lt) goto loc_8240E9CC;
	// li r10,127
	ctx.r10.s64 = 127;
loc_8240E9CC:
	// cmpwi cr6,r10,-127
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -127, ctx.xer);
	// ble cr6,0x8240e9e4
	if (!ctx.cr6.gt) goto loc_8240E9E4;
	// cmpwi cr6,r6,127
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 127, ctx.xer);
	// blt cr6,0x8240e9e8
	if (ctx.cr6.lt) goto loc_8240E9E8;
	// li r6,127
	ctx.r6.s64 = 127;
	// b 0x8240e9e8
	goto loc_8240E9E8;
loc_8240E9E4:
	// li r6,-127
	ctx.r6.s64 = -127;
loc_8240E9E8:
	// cmpwi cr6,r3,127
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 127, ctx.xer);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// blt cr6,0x8240e9f8
	if (ctx.cr6.lt) goto loc_8240E9F8;
	// li r10,127
	ctx.r10.s64 = 127;
loc_8240E9F8:
	// cmpwi cr6,r10,-127
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -127, ctx.xer);
	// ble cr6,0x8240ea10
	if (!ctx.cr6.gt) goto loc_8240EA10;
	// cmpwi cr6,r3,127
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 127, ctx.xer);
	// blt cr6,0x8240ea14
	if (ctx.cr6.lt) goto loc_8240EA14;
	// li r3,127
	ctx.r3.s64 = 127;
	// b 0x8240ea14
	goto loc_8240EA14;
loc_8240EA10:
	// li r3,-127
	ctx.r3.s64 = -127;
loc_8240EA14:
	// rlwimi r6,r3,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// rlwimi r5,r6,8,0,23
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r5.u64 & 0xFFFFFFFF000000FF);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// rlwimi r4,r5,8,0,23
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r4.u64 & 0xFFFFFFFF000000FF);
	// add r9,r30,r9
	ctx.r9.u64 = r30.u64 + ctx.r9.u64;
	// stwux r4,r29,r25
	ea = r29.u32 + r25.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	r29.u32 = ea;
	// add r8,r30,r8
	ctx.r8.u64 = r30.u64 + ctx.r8.u64;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8240e72c
	if (ctx.cr6.lt) goto loc_8240E72C;
loc_8240EA40:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2cf4
	ctx.lr = 0x8240EA4C;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82437CE8) {
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
	// beq 0x82437d20
	if (ctx.cr0.eq) goto loc_82437D20;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r11,r6,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r6.u64;
loc_82437D08:
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
	// bdnz 0x82437d08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82437D08;
loc_82437D20:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x822c9108
	ctx.lr = 0x82437D28;
	sub_822C9108(ctx, base);
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

DEFINE_REX_FUNC(sub_8243AB50) {
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
	// bl 0x82437998
	ctx.lr = 0x8243AB70;
	sub_82437998(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8243ab84
	if (ctx.cr0.eq) goto loc_8243AB84;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x8243AB84;
	sub_823F0350(ctx, base);
loc_8243AB84:
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

DEFINE_REX_FUNC(sub_8243BC78) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// not r3,r11
	ctx.r3.u64 = ~ctx.r11.u64;
	// bl 0x8243b790
	ctx.lr = 0x8243BC94;
	sub_8243B790(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8243bca0
	if (ctx.cr0.eq) goto loc_8243BCA0;
	// not r3,r3
	ctx.r3.u64 = ~ctx.r3.u64;
loc_8243BCA0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8243E060) {
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
	ctx.lr = 0x8243E068;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,24(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243e0ac
	if (!ctx.cr6.eq) goto loc_8243E0AC;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243E090;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8243e0a4
	if (!ctx.cr6.eq) goto loc_8243E0A4;
loc_8243E098:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_8243E0A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_8243E0AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r27,r9,8
	r27.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// bne 0x8243e0e0
	if (!ctx.cr0.eq) goto loc_8243E0E0;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243E0D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8243e098
	if (ctx.cr6.eq) goto loc_8243E098;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_8243E0E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
	// addi r28,r10,-1
	r28.s64 = ctx.r10.s64 + -1;
	// add r11,r9,r27
	ctx.r11.u64 = ctx.r9.u64 + r27.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8243e118
	if (ctx.cr6.eq) goto loc_8243E118;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r10,11
	ctx.r10.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8243E118;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243E118:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8243e140
	if (!ctx.cr6.eq) goto loc_8243E140;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243E130;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8243e098
	if (ctx.cr6.eq) goto loc_8243E098;
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r28,4(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_8243E140:
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// addic. r27,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r27.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// rotlwi r28,r11,8
	r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// bne 0x8243e174
	if (!ctx.cr0.eq) goto loc_8243E174;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243E164;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8243e098
	if (ctx.cr6.eq) goto loc_8243E098;
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r27,4(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_8243E174:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r9,82
	ctx.r9.s64 = 82;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// stw r9,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r28,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, r28.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8243E1A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r29,1
	ctx.r5.s64 = r29.s64 + 1;
	// addi r4,r27,-1
	ctx.r4.s64 = r27.s64 + -1;
	// stw r28,280(r30)
	REX_STORE_U32(r30.u32 + 280, r28.u32);
	// stw r5,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82444868) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82444880
	if (ctx.cr6.eq) goto loc_82444880;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82444880:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82444EF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r31,-32254
	r31.s64 = -2113798144;
	// stw r5,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// stw r6,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// addi r6,r31,-8056
	ctx.r6.s64 = r31.s64 + -8056;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r6,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r7,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// stw r8,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r8.u32);
	// stw r9,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// stw r10,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82445FF8) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r10,-7972
	ctx.r10.s64 = ctx.r10.s64 + -7972;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824473B0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,13
	ctx.r9.s64 = 13;
	// addi r10,r10,-7912
	ctx.r10.s64 = ctx.r10.s64 + -7912;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82447860) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,-7888
	ctx.r8.s64 = ctx.r11.s64 + -7888;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// ld r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// ld r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// std r10,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r10.u64);
	// ld r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// std r10,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r10.u64);
	// ld r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// std r11,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
	// ld r11,16(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 16);
	// std r11,48(r3)
	REX_STORE_U64(ctx.r3.u32 + 48, ctx.r11.u64);
	// ld r11,24(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 24);
	// std r11,56(r3)
	REX_STORE_U64(ctx.r3.u32 + 56, ctx.r11.u64);
	// bne cr6,0x824478f4
	if (!ctx.cr6.eq) goto loc_824478F4;
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824478f4
	if (ctx.cr6.eq) goto loc_824478F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824478F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
loc_824478F4:
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

DEFINE_REX_FUNC(sub_8244A1D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8244a234
	if (ctx.cr6.eq) goto loc_8244A234;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
loc_8244A1F0:
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
loc_8244A1FC:
	// lbz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r30,0(r9)
	r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r6,r30,r6
	ctx.r6.u64 = ctx.r6.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x8244a21c
	if (!ctx.cr0.eq) goto loc_8244A21C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8244a1fc
	if (!ctx.cr6.eq) goto loc_8244A1FC;
loc_8244A21C:
	// cmpwi r6,0
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8244a270
	if (ctx.cr0.eq) goto loc_8244A270;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8244a1f0
	if (ctx.cr6.lt) goto loc_8244A1F0;
loc_8244A234:
	// rlwinm r3,r8,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stwx r9,r3,r4
	REX_STORE_U32(ctx.r3.u32 + ctx.r4.u32, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r8,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
loc_8244A264:
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8244A270:
	// rlwinm r3,r31,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x8244a264
	goto loc_8244A264;
}

DEFINE_REX_FUNC(sub_82451BB0) {
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
	ctx.lr = 0x82451BB8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// li r24,0
	r24.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r24,300(r3)
	REX_STORE_U32(ctx.r3.u32 + 300, r24.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r10,80(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 80);
	// li r26,1
	r26.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r24,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r24.u64);
	// beq cr6,0x82451bf0
	if (ctx.cr6.eq) goto loc_82451BF0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,11460
	ctx.r4.s64 = ctx.r11.s64 + 11460;
	// bl 0x8244beb0
	ctx.lr = 0x82451BF0;
	sub_8244BEB0(ctx, base);
loc_82451BF0:
	// lwz r28,92(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 92);
	// lis r23,3328
	r23.s64 = 218103808;
	// lwz r31,52(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 52);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82451c14
	if (ctx.cr6.eq) goto loc_82451C14;
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// mr r25,r26
	r25.u64 = r26.u64;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// bne cr6,0x82451c18
	if (!ctx.cr6.eq) goto loc_82451C18;
loc_82451C14:
	// mr r25,r24
	r25.u64 = r24.u64;
loc_82451C18:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82451c58
	if (ctx.cr6.eq) goto loc_82451C58;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82451c48
	if (ctx.cr6.eq) goto loc_82451C48;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(r31.u32, 2, ctx.xer);
	// ble cr6,0x82451c58
	if (!ctx.cr6.gt) goto loc_82451C58;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(r31.u32, 8, ctx.xer);
	// beq cr6,0x82451c58
	if (ctx.cr6.eq) goto loc_82451C58;
	// cmplwi cr6,r31,249
	ctx.cr6.compare<uint32_t>(r31.u32, 249, ctx.xer);
	// ble cr6,0x82451c48
	if (!ctx.cr6.gt) goto loc_82451C48;
	// cmplwi cr6,r31,251
	ctx.cr6.compare<uint32_t>(r31.u32, 251, ctx.xer);
	// ble cr6,0x82451c58
	if (!ctx.cr6.gt) goto loc_82451C58;
loc_82451C48:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,11420
	ctx.r4.s64 = ctx.r11.s64 + 11420;
	// bl 0x8244beb0
	ctx.lr = 0x82451C58;
	sub_8244BEB0(ctx, base);
loc_82451C58:
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwimi r11,r31,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x82450858
	ctx.lr = 0x82451C70;
	sub_82450858(ctx, base);
	// bl 0x822cdea0
	ctx.lr = 0x82451C74;
	sub_822CDEA0(ctx, base);
	// slw r11,r26,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (r26.u32 << (r31.u8 & 0x3F));
	// andi. r11,r11,16404
	ctx.r11.u64 = ctx.r11.u64 & 16404;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82451c8c
	if (ctx.cr0.eq) goto loc_82451C8C;
	// stw r26,304(r30)
	REX_STORE_U32(r30.u32 + 304, r26.u32);
loc_82451C8C:
	// cmplwi cr6,r31,30
	ctx.cr6.compare<uint32_t>(r31.u32, 30, ctx.xer);
	// bgt cr6,0x82452044
	if (ctx.cr6.gt) goto loc_82452044;
	// beq cr6,0x82451f98
	if (ctx.cr6.eq) goto loc_82451F98;
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x82452140
	if (ctx.cr6.gt) goto loc_82452140;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,1384
	ctx.r12.s64 = ctx.r12.s64 + 1384;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32187
	ctx.r12.s64 = -2109407232;
	// addi r12,r12,7372
	ctx.r12.s64 = ctx.r12.s64 + 7372;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82451CCC;
	case 1:
		goto loc_82451D14;
	case 2:
		goto loc_82451D48;
	case 3:
		goto loc_82451D48;
	case 4:
		goto loc_82452140;
	case 5:
		goto loc_82452140;
	case 6:
		goto loc_82451DB4;
	case 7:
		goto loc_82451E4C;
	case 8:
		goto loc_82451F18;
	case 9:
		goto loc_82452140;
	case 10:
		goto loc_82451EC0;
	case 11:
		goto loc_82451F80;
	case 12:
		goto loc_82451D48;
	case 13:
		goto loc_82451D48;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82451CCC:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8244f608
	ctx.lr = 0x82451CD8;
	sub_8244F608(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// rlwimi r11,r3,15,16,16
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 15) & 0x8000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF7FFF);
	// rlwimi r11,r29,0,20,31
	ctx.r11.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF000);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// beq cr6,0x82452140
	if (ctx.cr6.eq) goto loc_82452140;
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// li r10,20480
	ctx.r10.s64 = 20480;
	// ori r12,r12,23551
	ctx.r12.u64 = ctx.r12.u64 | 23551;
loc_82451CFC:
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// rlwimi r10,r25,10,21,21
	ctx.r10.u64 = (__builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 10) & 0x400) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFBFF);
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_82451D0C:
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// b 0x82452140
	goto loc_82452140;
loc_82451D14:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8244f608
	ctx.lr = 0x82451D20;
	sub_8244F608(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// rlwimi r11,r3,15,16,16
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 15) & 0x8000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF7FFF);
	// rlwimi r11,r29,0,20,31
	ctx.r11.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF000);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// beq cr6,0x82452140
	if (ctx.cr6.eq) goto loc_82452140;
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// li r10,24576
	ctx.r10.s64 = 24576;
	// ori r12,r12,27647
	ctx.r12.u64 = ctx.r12.u64 | 27647;
	// b 0x82451cfc
	goto loc_82451CFC;
loc_82451D48:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8244f608
	ctx.lr = 0x82451D54;
	sub_8244F608(ctx, base);
	// lwz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,96(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 96);
	// rlwimi r10,r3,15,16,16
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 15) & 0x8000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF7FFF);
	// rlwimi r10,r29,0,20,31
	ctx.r10.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF000);
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// bne cr6,0x82451da0
	if (!ctx.cr6.eq) goto loc_82451DA0;
	// lbz r10,27(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 27);
	// lwz r9,124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// rlwinm r9,r9,0,30,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFC03;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// beq cr6,0x82452140
	if (ctx.cr6.eq) goto loc_82452140;
	// ori r11,r10,1024
	ctx.r11.u64 = ctx.r10.u64 | 1024;
	// b 0x82451d0c
	goto loc_82451D0C;
loc_82451DA0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,11380
	ctx.r4.s64 = ctx.r11.s64 + 11380;
loc_82451DA8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8244beb0
	ctx.lr = 0x82451DB0;
	sub_8244BEB0(ctx, base);
	// b 0x82452140
	goto loc_82452140;
loc_82451DB4:
	// lwz r11,96(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 96);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x82451dd8
	if (ctx.cr6.eq) goto loc_82451DD8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,11336
	ctx.r4.s64 = ctx.r11.s64 + 11336;
	// bl 0x8244beb0
	ctx.lr = 0x82451DD4;
	sub_8244BEB0(ctx, base);
	// b 0x82451de8
	goto loc_82451DE8;
loc_82451DD8:
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// rlwimi r10,r11,16,11,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFE0FFFF);
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
loc_82451DE8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824518c0
	ctx.lr = 0x82451DF8;
	sub_824518C0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,11328
	ctx.r5.s64 = ctx.r11.s64 + 11328;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8244f500
	ctx.lr = 0x82451E10;
	sub_8244F500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82452140
	if (ctx.cr0.eq) goto loc_82452140;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r24,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// bl 0x8244a980
	ctx.lr = 0x82451E24;
	sub_8244A980(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82451e40
	if (ctx.cr0.lt) goto loc_82451E40;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwimi r11,r10,13,18,18
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x2000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFDFFF);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// b 0x82452140
	goto loc_82452140;
loc_82451E40:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,11284
	ctx.r4.s64 = ctx.r11.s64 + 11284;
	// b 0x82451da8
	goto loc_82451DA8;
loc_82451E4C:
	// lwz r11,96(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 96);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x82451e70
	if (ctx.cr6.eq) goto loc_82451E70;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,11336
	ctx.r4.s64 = ctx.r11.s64 + 11336;
	// bl 0x8244beb0
	ctx.lr = 0x82451E6C;
	sub_8244BEB0(ctx, base);
	// b 0x82451e80
	goto loc_82451E80;
loc_82451E70:
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// rlwimi r10,r11,16,11,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFE0FFFF);
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
loc_82451E80:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824518c0
	ctx.lr = 0x82451E90;
	sub_824518C0(ctx, base);
	// lwz r11,92(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82452140
	if (ctx.cr6.eq) goto loc_82452140;
	// lwz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// oris r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 2097152;
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// beq cr6,0x82452140
	if (ctx.cr6.eq) goto loc_82452140;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// b 0x82451d0c
	goto loc_82451D0C;
loc_82451EC0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,11272
	ctx.r5.s64 = ctx.r11.s64 + 11272;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8244f500
	ctx.lr = 0x82451ED8;
	sub_8244F500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82451f18
	if (ctx.cr0.eq) goto loc_82451F18;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r24,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// bl 0x8244a980
	ctx.lr = 0x82451EEC;
	sub_8244A980(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82451f08
	if (ctx.cr0.lt) goto loc_82451F08;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwimi r11,r10,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// b 0x82451f1c
	goto loc_82451F1C;
loc_82451F08:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,11220
	ctx.r4.s64 = ctx.r11.s64 + 11220;
	// bl 0x8244beb0
	ctx.lr = 0x82451F18;
	sub_8244BEB0(ctx, base);
loc_82451F18:
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
loc_82451F1C:
	// lwz r10,96(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 96);
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,14
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14, ctx.xer);
	// bne cr6,0x82451f5c
	if (!ctx.cr6.eq) goto loc_82451F5C;
	// lbz r9,27(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 27);
	// rlwinm r11,r11,0,30,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFC03;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// subf r10,r10,r23
	ctx.r10.u64 = r23.u64 - ctx.r10.u64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r11,r10,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// b 0x82451f6c
	goto loc_82451F6C;
loc_82451F5C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,11176
	ctx.r4.s64 = ctx.r11.s64 + 11176;
	// bl 0x8244beb0
	ctx.lr = 0x82451F6C;
	sub_8244BEB0(ctx, base);
loc_82451F6C:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82451F70:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824518c0
	ctx.lr = 0x82451F7C;
	sub_824518C0(ctx, base);
	// b 0x82452140
	goto loc_82452140;
loc_82451F80:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8244f088
	ctx.lr = 0x82451F90;
	sub_8244F088(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// b 0x82452138
	goto loc_82452138;
loc_82451F98:
	// lwz r11,96(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 96);
	// mr r26,r24
	r26.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// beq cr6,0x82451fc0
	if (ctx.cr6.eq) goto loc_82451FC0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,11128
	ctx.r4.s64 = ctx.r11.s64 + 11128;
	// bl 0x8244beb0
	ctx.lr = 0x82451FBC;
	sub_8244BEB0(ctx, base);
	// b 0x82452020
	goto loc_82452020;
loc_82451FC0:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,24(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82450858
	ctx.lr = 0x82451FCC;
	sub_82450858(ctx, base);
	// bl 0x822cdda0
	ctx.lr = 0x82451FD0;
	sub_822CDDA0(ctx, base);
	// lwz r11,328(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 328);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82452034
	if (ctx.cr6.eq) goto loc_82452034;
loc_82451FE0:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// beq cr6,0x82451ff8
	if (ctx.cr6.eq) goto loc_82451FF8;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82451fe0
	if (!ctx.cr6.eq) goto loc_82451FE0;
loc_82451FF8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82452034
	if (ctx.cr6.eq) goto loc_82452034;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8245202c
	if (ctx.cr6.eq) goto loc_8245202C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,11108
	ctx.r4.s64 = ctx.r11.s64 + 11108;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8244beb0
	ctx.lr = 0x82452020;
	sub_8244BEB0(ctx, base);
loc_82452020:
	// lis r24,-32768
	r24.s64 = -2147483648;
	// ori r24,r24,16389
	r24.u64 = r24.u64 | 16389;
	// b 0x82452188
	goto loc_82452188;
loc_8245202C:
	// stw r5,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// b 0x82452140
	goto loc_82452140;
loc_82452034:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8244b5d8
	ctx.lr = 0x82452040;
	sub_8244B5D8(ctx, base);
	// b 0x82452140
	goto loc_82452140;
loc_82452044:
	// cmplwi cr6,r31,250
	ctx.cr6.compare<uint32_t>(r31.u32, 250, ctx.xer);
	// beq cr6,0x82452098
	if (ctx.cr6.eq) goto loc_82452098;
	// cmplwi cr6,r31,251
	ctx.cr6.compare<uint32_t>(r31.u32, 251, ctx.xer);
	// bne cr6,0x82452140
	if (!ctx.cr6.eq) goto loc_82452140;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// rlwinm r11,r11,0,19,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF9FFF;
	// ori r11,r11,36864
	ctx.r11.u64 = ctx.r11.u64 | 36864;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// beq cr6,0x82452084
	if (ctx.cr6.eq) goto loc_82452084;
	// lwz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// rlwimi r11,r25,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// ori r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 16384;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// b 0x82452090
	goto loc_82452090;
loc_82452084:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_82452090:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82451f70
	goto loc_82451F70;
loc_82452098:
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// rlwinm r11,r11,0,18,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// ori r11,r11,45056
	ctx.r11.u64 = ctx.r11.u64 | 45056;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// beq cr6,0x824520c8
	if (ctx.cr6.eq) goto loc_824520C8;
	// lwz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// rlwimi r11,r25,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// ori r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 16384;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// b 0x824520d4
	goto loc_824520D4;
loc_824520C8:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_824520D4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824518c0
	ctx.lr = 0x824520E4;
	sub_824518C0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,11272
	ctx.r5.s64 = ctx.r11.s64 + 11272;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8244f500
	ctx.lr = 0x824520FC;
	sub_8244F500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82452140
	if (ctx.cr0.eq) goto loc_82452140;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r24,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// bl 0x8244a980
	ctx.lr = 0x82452110;
	sub_8244A980(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82452128
	if (ctx.cr0.lt) goto loc_82452128;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwimi r11,r10,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// b 0x82451d0c
	goto loc_82451D0C;
loc_82452128:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,11220
	ctx.r4.s64 = ctx.r11.s64 + 11220;
	// bl 0x8244beb0
	ctx.lr = 0x82452138;
	sub_8244BEB0(ctx, base);
loc_82452138:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt cr6,0x82452188
	if (ctx.cr6.lt) goto loc_82452188;
loc_82452140:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82452188
	if (ctx.cr0.eq) goto loc_82452188;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82450858
	ctx.lr = 0x82452154;
	sub_82450858(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x822cdcb8
	ctx.lr = 0x8245215C;
	sub_822CDCB8(ctx, base);
	// lwz r11,324(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 324);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82452188
	if (ctx.cr6.eq) goto loc_82452188;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,36(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 36);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r6,32(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,316(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 316);
	// bl 0x824dd560
	ctx.lr = 0x82452188;
	sub_824DD560(ctx, base);
loc_82452188:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82479658) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x824796a0
	if (ctx.cr6.eq) goto loc_824796A0;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r9,8(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r10,r8,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// beq cr6,0x82479690
	if (ctx.cr6.eq) goto loc_82479690;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x824796b4
	if (ctx.cr6.gt) goto loc_824796B4;
	// b 0x82479698
	goto loc_82479698;
loc_82479690:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x824796b4
	if (!ctx.cr6.gt) goto loc_824796B4;
loc_82479698:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x824796b4
	goto loc_824796B4;
loc_824796A0:
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_824796B4:
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x824796d0
	goto loc_824796D0;
loc_824796C4:
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwzx r10,r8,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
loc_824796D0:
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824796c4
	if (!ctx.cr6.eq) goto loc_824796C4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8247EEE0) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c88
	ctx.lr = 0x8247EEE8;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,16(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r17,r4
	r17.u64 = ctx.r4.u64;
	// lwzx r3,r11,r7
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// lwzx r11,r10,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwzx r10,r9,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r9,r8,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r23,48(r11)
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r20,48(r10)
	r20.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r19,48(r9)
	r19.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// rlwinm r9,r23,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r20,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r4,r19,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwzx r26,r9,r7
	r26.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r27,r5,r7
	r27.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// lwzx r30,r4,r7
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8247f0b8
	if (ctx.cr0.eq) goto loc_8247F0B8;
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8247f0b8
	if (!ctx.cr0.eq) goto loc_8247F0B8;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r9,12288
	ctx.r9.s64 = 805306368;
	// bne 0x8247efe0
	if (!ctx.cr0.eq) goto loc_8247EFE0;
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8247efe0
	if (!ctx.cr6.eq) goto loc_8247EFE0;
	// lwz r7,0(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwinm. r7,r11,0,4,4
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8247efa4
	if (ctx.cr0.eq) goto loc_8247EFA4;
	// oris r11,r10,2048
	ctx.r11.u64 = ctx.r10.u64 | 134217728;
	// b 0x8247efc0
	goto loc_8247EFC0;
loc_8247EFA4:
	// rlwinm. r7,r11,0,5,5
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8247efb4
	if (ctx.cr0.eq) goto loc_8247EFB4;
	// oris r11,r10,1024
	ctx.r11.u64 = ctx.r10.u64 | 67108864;
	// b 0x8247efc0
	goto loc_8247EFC0;
loc_8247EFB4:
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247efc4
	if (ctx.cr0.eq) goto loc_8247EFC4;
	// oris r11,r10,512
	ctx.r11.u64 = ctx.r10.u64 | 33554432;
loc_8247EFC0:
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_8247EFC4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_8247EFE0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247f014
	if (ctx.cr0.eq) goto loc_8247F014;
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8247f014
	if (!ctx.cr6.eq) goto loc_8247F014;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,64
	ctx.r8.s64 = 64;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_8247F014:
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8247f090
	if (!ctx.cr6.eq) goto loc_8247F090;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247f034
	if (ctx.cr0.eq) goto loc_8247F034;
	// li r8,64
	ctx.r8.s64 = 64;
loc_8247F034:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r23,r20
	ctx.cr6.compare<uint32_t>(r23.u32, r20.u32, ctx.xer);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8247f070
	if (!ctx.cr6.eq) goto loc_8247F070;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247f070
	if (ctx.cr0.eq) goto loc_8247F070;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_8247F070:
	// cmplw cr6,r23,r19
	ctx.cr6.compare<uint32_t>(r23.u32, r19.u32, ctx.xer);
	// bne cr6,0x8247f090
	if (!ctx.cr6.eq) goto loc_8247F090;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247f090
	if (ctx.cr0.eq) goto loc_8247F090;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_8247F090:
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8247f0b8
	if (!ctx.cr6.eq) goto loc_8247F0B8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8247f0c4
	if (!ctx.cr6.eq) goto loc_8247F0C4;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247f0c4
	if (ctx.cr0.eq) goto loc_8247F0C4;
loc_8247F0B4:
	// stw r20,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, r20.u32);
loc_8247F0B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247F0BC:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1cd8
	return;
loc_8247F0C4:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r22,16(r24)
	r22.u64 = REX_LOAD_U32(r24.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	// lwz r28,4(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r28,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247f110
	if (ctx.cr0.eq) goto loc_8247F110;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8247f110
	if (!ctx.cr6.eq) goto loc_8247F110;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f13,32(r26)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(r26.u32 + 32);
	// lfd f0,-3744(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8247f108
	if (!ctx.cr6.lt) goto loc_8247F108;
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_8247F108:
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// b 0x8247f0b8
	goto loc_8247F0B8;
loc_8247F110:
	// cmplw cr6,r20,r19
	ctx.cr6.compare<uint32_t>(r20.u32, r19.u32, ctx.xer);
	// beq cr6,0x8247f0b4
	if (ctx.cr6.eq) goto loc_8247F0B4;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r29,r11,0,23,23
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8247f170
	if (ctx.cr0.eq) goto loc_8247F170;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8247f170
	if (!ctx.cr6.eq) goto loc_8247F170;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247f170
	if (ctx.cr0.eq) goto loc_8247F170;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8247f170
	if (!ctx.cr6.eq) goto loc_8247F170;
	// lfd f0,32(r27)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r27.u32 + 32);
	// lfd f13,32(r30)
	ctx.f13.u64 = REX_LOAD_U64(r30.u32 + 32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8247f0b4
	if (ctx.cr6.eq) goto loc_8247F0B4;
loc_8247F170:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8247f0b8
	if (!ctx.cr6.eq) goto loc_8247F0B8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r31,8(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r21,4112
	r21.s64 = 269484032;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(r31.s32, -1, ctx.xer);
	// lfd f12,3728(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// lfd f13,-3744(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
	// bne cr6,0x8247f0b8
	if (!ctx.cr6.eq) goto loc_8247F0B8;
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247f274
	if (ctx.cr0.eq) goto loc_8247F274;
	// lwz r11,72(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 72);
	// lwz r10,24(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r21.u32, ctx.xer);
	// bne cr6,0x8247f274
	if (!ctx.cr6.eq) goto loc_8247F274;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8247f274
	if (ctx.cr6.eq) goto loc_8247F274;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8247f274
	if (!ctx.cr6.eq) goto loc_8247F274;
	// lfd f0,32(r27)
	ctx.f0.u64 = REX_LOAD_U64(r27.u32 + 32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8247f274
	if (!ctx.cr6.eq) goto loc_8247F274;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247f274
	if (ctx.cr0.eq) goto loc_8247F274;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8247f274
	if (!ctx.cr6.eq) goto loc_8247F274;
	// lfd f0,32(r30)
	ctx.f0.u64 = REX_LOAD_U64(r30.u32 + 32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x8247f274
	if (!ctx.cr6.eq) goto loc_8247F274;
	// lwz r7,12(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8247f244
	if (ctx.cr6.eq) goto loc_8247F244;
	// lwz r8,16(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247F228:
	// lwzx r6,r11,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r6,r23
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r23.u32, ctx.xer);
	// beq cr6,0x8247f244
	if (ctx.cr6.eq) goto loc_8247F244;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8247f228
	if (ctx.cr6.lt) goto loc_8247F228;
loc_8247F244:
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 20);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8247f108
	if (!ctx.cr0.eq) goto loc_8247F108;
loc_8247F274:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(r31.s32, -1, ctx.xer);
	// bne cr6,0x8247f0b8
	if (!ctx.cr6.eq) goto loc_8247F0B8;
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247f3d4
	if (ctx.cr0.eq) goto loc_8247F3D4;
	// lwz r11,72(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 72);
	// lis r10,8272
	ctx.r10.s64 = 542113792;
	// lwz r9,24(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8247f3d4
	if (!ctx.cr6.eq) goto loc_8247F3D4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8247f3d4
	if (ctx.cr6.eq) goto loc_8247F3D4;
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8247f3d4
	if (!ctx.cr6.eq) goto loc_8247F3D4;
	// lfd f0,32(r27)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r27.u32 + 32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8247f3d4
	if (!ctx.cr6.eq) goto loc_8247F3D4;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r22
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r22.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247f3d4
	if (ctx.cr0.eq) goto loc_8247F3D4;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8247f3d4
	if (!ctx.cr6.eq) goto loc_8247F3D4;
	// lfd f0,32(r30)
	ctx.f0.u64 = REX_LOAD_U64(r30.u32 + 32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x8247f3d4
	if (!ctx.cr6.eq) goto loc_8247F3D4;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8247f32c
	if (ctx.cr6.eq) goto loc_8247F32C;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
loc_8247F310:
	// lwzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r7,r23
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r23.u32, ctx.xer);
	// beq cr6,0x8247f32c
	if (ctx.cr6.eq) goto loc_8247F32C;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8247f310
	if (ctx.cr6.lt) goto loc_8247F310;
loc_8247F32C:
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 20);
loc_8247F340:
	// mullw r7,r10,r8
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r5,r7,r4
	ctx.r5.u64 = ctx.r7.u64 + ctx.r4.u64;
	// mullw r7,r6,r10
	ctx.r7.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwzx r25,r7,r11
	r25.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwz r7,48(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 48);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r25,48(r25)
	r25.u64 = REX_LOAD_U32(r25.u32 + 48);
	// rlwinm r25,r25,2,0,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r16,r5,r11
	r16.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwzx r5,r25,r11
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + ctx.r11.u32);
	// lwz r25,0(r16)
	r25.u64 = REX_LOAD_U32(r16.u32 + 0);
	// clrlwi. r25,r25,31
	r25.u64 = r25.u32 & 0x1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq 0x8247f3c4
	if (ctx.cr0.eq) goto loc_8247F3C4;
	// lwz r25,4(r5)
	r25.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r25,r25,2,0,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r25,r25,r22
	r25.u64 = REX_LOAD_U32(r25.u32 + r22.u32);
	// lwz r25,4(r25)
	r25.u64 = REX_LOAD_U32(r25.u32 + 4);
	// rlwinm. r25,r25,0,23,23
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq 0x8247f3c4
	if (ctx.cr0.eq) goto loc_8247F3C4;
	// lwz r25,8(r5)
	r25.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(r25.s32, -1, ctx.xer);
	// bne cr6,0x8247f3c4
	if (!ctx.cr6.eq) goto loc_8247F3C4;
	// lfd f0,32(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r5.u32 + 32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8247f464
	if (ctx.cr6.lt) goto loc_8247F464;
loc_8247F3C4:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// blt cr6,0x8247f340
	if (ctx.cr6.lt) goto loc_8247F340;
loc_8247F3D4:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(r31.s32, -1, ctx.xer);
	// bne cr6,0x8247f0b8
	if (!ctx.cr6.eq) goto loc_8247F0B8;
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247f0b8
	if (ctx.cr0.eq) goto loc_8247F0B8;
	// lwz r11,72(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 72);
	// lis r9,8256
	ctx.r9.s64 = 541065216;
	// lwz r25,24(r24)
	r25.u64 = REX_LOAD_U32(r24.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8247f0b8
	if (!ctx.cr6.eq) goto loc_8247F0B8;
	// li r31,-1
	r31.s64 = -1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8247f488
	if (ctx.cr6.eq) goto loc_8247F488;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8247f488
	if (!ctx.cr6.eq) goto loc_8247F488;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247f488
	if (ctx.cr0.eq) goto loc_8247F488;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8247f488
	if (!ctx.cr6.eq) goto loc_8247F488;
	// lfd f0,32(r27)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r27.u32 + 32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8247f46c
	if (!ctx.cr6.eq) goto loc_8247F46C;
	// lfd f11,32(r30)
	ctx.f11.u64 = REX_LOAD_U64(r30.u32 + 32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bne cr6,0x8247f46c
	if (!ctx.cr6.eq) goto loc_8247F46C;
	// lis r31,8224
	r31.s64 = 538968064;
	// b 0x8247f484
	goto loc_8247F484;
loc_8247F464:
	// stw r7,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// b 0x8247f0b8
	goto loc_8247F0B8;
loc_8247F46C:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x8247f488
	if (!ctx.cr6.eq) goto loc_8247F488;
	// lfd f0,32(r30)
	ctx.f0.u64 = REX_LOAD_U64(r30.u32 + 32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8247f488
	if (!ctx.cr6.eq) goto loc_8247F488;
	// lis r31,8240
	r31.s64 = 540016640;
loc_8247F484:
	// ori r31,r31,1
	r31.u64 = r31.u64 | 1;
loc_8247F488:
	// lwz r7,12(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8247f4bc
	if (ctx.cr6.eq) goto loc_8247F4BC;
	// lwz r8,16(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247F4A0:
	// lwzx r6,r11,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r6,r23
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r23.u32, ctx.xer);
	// beq cr6,0x8247f4bc
	if (ctx.cr6.eq) goto loc_8247F4BC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8247f4a0
	if (ctx.cr6.lt) goto loc_8247F4A0;
loc_8247F4BC:
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r3,20(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 20);
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r26,r11,-4
	r26.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(-4));
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_8247F4E8:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwz r6,48(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r28,48(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8247f5c8
	if (!ctx.cr6.eq) goto loc_8247F5C8;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r22
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r22.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247f5c8
	if (ctx.cr0.eq) goto loc_8247F5C8;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r21.u32, ctx.xer);
	// bne cr6,0x8247f5c8
	if (!ctx.cr6.eq) goto loc_8247F5C8;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8247f584
	if (ctx.cr6.eq) goto loc_8247F584;
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
loc_8247F568:
	// lwzx r30,r10,r8
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8247f584
	if (ctx.cr6.eq) goto loc_8247F584;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8247f568
	if (ctx.cr6.lt) goto loc_8247F568;
loc_8247F584:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 20);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(r31.s32, -1, ctx.xer);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r30,48(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// bne cr6,0x8247f5f0
	if (!ctx.cr6.eq) goto loc_8247F5F0;
	// cmplw cr6,r20,r30
	ctx.cr6.compare<uint32_t>(r20.u32, r30.u32, ctx.xer);
	// bne cr6,0x8247f5b8
	if (!ctx.cr6.eq) goto loc_8247F5B8;
	// cmplw cr6,r19,r28
	ctx.cr6.compare<uint32_t>(r19.u32, r28.u32, ctx.xer);
	// beq cr6,0x8247f5e0
	if (ctx.cr6.eq) goto loc_8247F5E0;
loc_8247F5B8:
	// cmplw cr6,r20,r28
	ctx.cr6.compare<uint32_t>(r20.u32, r28.u32, ctx.xer);
	// bne cr6,0x8247f5c8
	if (!ctx.cr6.eq) goto loc_8247F5C8;
	// cmplw cr6,r19,r30
	ctx.cr6.compare<uint32_t>(r19.u32, r30.u32, ctx.xer);
	// beq cr6,0x8247f5e8
	if (ctx.cr6.eq) goto loc_8247F5E8;
loc_8247F5C8:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r5,r27,r5
	ctx.r5.u64 = r27.u64 + ctx.r5.u64;
	// add r4,r26,r4
	ctx.r4.u64 = r26.u64 + ctx.r4.u64;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(r29.u32, 2, ctx.xer);
	// blt cr6,0x8247f4e8
	if (ctx.cr6.lt) goto loc_8247F4E8;
	// b 0x8247f0b8
	goto loc_8247F0B8;
loc_8247F5E0:
	// lis r31,8192
	r31.s64 = 536870912;
	// b 0x8247f5ec
	goto loc_8247F5EC;
loc_8247F5E8:
	// lis r31,8208
	r31.s64 = 537919488;
loc_8247F5EC:
	// ori r31,r31,1
	r31.u64 = r31.u64 | 1;
loc_8247F5F0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824773d0
	ctx.lr = 0x8247F5F8;
	sub_824773D0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82477b60
	ctx.lr = 0x8247F610;
	sub_82477B60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8247f65c
	if (ctx.cr0.lt) goto loc_8247F65C;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82477420
	ctx.lr = 0x8247F624;
	sub_82477420(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8247f65c
	if (ctx.cr0.lt) goto loc_8247F65C;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r18,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r18.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
	// bl 0x8247dad0
	ctx.lr = 0x8247F65C;
	sub_8247DAD0(ctx, base);
loc_8247F65C:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82130e88
	ctx.lr = 0x8247F668;
	sub_82130E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8247f0bc
	goto loc_8247F0BC;
}

DEFINE_REX_FUNC(sub_824C54D8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,7468
	ctx.r11.s64 = ctx.r11.s64 + 7468;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C56F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,60(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 60);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,44(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwzx r7,r7,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x824c5730
	if (!ctx.cr6.gt) goto loc_824C5730;
loc_824C5728:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_824C5730:
	// lwz r7,44(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// lwzx r11,r7,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwzx r10,r7,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824c574c
	if (!ctx.cr6.lt) goto loc_824C574C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_824C574C:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x824c5728
	if (ctx.cr6.lt) goto loc_824C5728;
	// subfc r11,r9,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r9.u32;
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C7878) {
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
	ctx.lr = 0x824C7880;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,352(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 352);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r22,432(r3)
	r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 432);
	// mr r17,r4
	r17.u64 = ctx.r4.u64;
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// lwz r11,324(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 324);
	// li r16,0
	r16.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// lwz r18,24(r22)
	r18.u64 = REX_LOAD_U32(r22.u32 + 24);
	// lwz r10,28(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 28);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpw cr6,r18,r10
	ctx.cr6.compare<int32_t>(r18.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x824c7a48
	if (!ctx.cr6.lt) goto loc_824C7A48;
loc_824C78BC:
	// lwz r19,20(r22)
	r19.u64 = REX_LOAD_U32(r22.u32 + 20);
	// cmplw cr6,r19,r29
	ctx.cr6.compare<uint32_t>(r19.u32, r29.u32, ctx.xer);
	// bgt cr6,0x824c7a34
	if (ctx.cr6.gt) goto loc_824C7A34;
loc_824C78C8:
	// lwz r11,360(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 360);
	// addi r31,r22,32
	r31.s64 = r22.s64 + 32;
	// lwz r3,32(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 32);
	// rlwinm r4,r11,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// bl 0x824c1c70
	ctx.lr = 0x824C78DC;
	sub_824C1C70(ctx, base);
	// lwz r10,448(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 448);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824C78F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824c7a98
	if (ctx.cr6.eq) goto loc_824C7A98;
	// lwz r11,332(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 332);
	// mr r20,r16
	r20.u64 = r16.u64;
	// mr r14,r16
	r14.u64 = r16.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824c7a28
	if (!ctx.cr6.gt) goto loc_824C7A28;
	// addi r15,r25,336
	r15.s64 = r25.s64 + 336;
loc_824C7914:
	// lwz r30,0(r15)
	r30.u64 = REX_LOAD_U32(r15.u32 + 0);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824c7930
	if (!ctx.cr6.eq) goto loc_824C7930;
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 60);
	// add r20,r11,r20
	r20.u64 = ctx.r11.u64 + r20.u64;
	// b 0x824c7a14
	goto loc_824C7A14;
loc_824C7930:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r19,r29
	ctx.cr6.compare<uint32_t>(r19.u32, r29.u32, ctx.xer);
	// lwz r10,452(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 452);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r23,4(r10)
	r23.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bge cr6,0x824c7954
	if (!ctx.cr6.lt) goto loc_824C7954;
	// lwz r26,52(r30)
	r26.u64 = REX_LOAD_U32(r30.u32 + 52);
	// b 0x824c7958
	goto loc_824C7958;
loc_824C7954:
	// lwz r26,68(r30)
	r26.u64 = REX_LOAD_U32(r30.u32 + 68);
loc_824C7958:
	// lwzx r9,r11,r17
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r17.u32);
	// mr r24,r16
	r24.u64 = r16.u64;
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lwz r8,64(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 64);
	// mullw r7,r11,r18
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(r18.s32);
	// lwz r6,56(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 56);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r21,r8,r19
	r21.s64 = int64_t(ctx.r8.s32) * int64_t(r19.s32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r28,r10,r9
	r28.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ble cr6,0x824c7a14
	if (!ctx.cr6.gt) goto loc_824C7A14;
loc_824C7984:
	// lwz r10,152(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 152);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824c79a4
	if (ctx.cr6.lt) goto loc_824C79A4;
	// lwz r10,72(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 72);
	// add r9,r24,r18
	ctx.r9.u64 = r24.u64 + r18.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x824c79f0
	if (!ctx.cr6.lt) goto loc_824C79F0;
loc_824C79A4:
	// mr r29,r21
	r29.u64 = r21.u64;
	// mr r31,r16
	r31.u64 = r16.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x824c79f0
	if (!ctx.cr6.gt) goto loc_824C79F0;
	// addi r27,r20,8
	r27.s64 = r20.s64 + 8;
loc_824C79B8:
	// add r11,r27,r31
	ctx.r11.u64 = r27.u64 + r31.u64;
	// mtctr r23
	ctx.ctr.u64 = r23.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwzx r5,r10,r22
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + r22.u32);
	// bctrl 
	ctx.lr = 0x824C79DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(r31.s32, r26.s32, ctx.xer);
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// blt cr6,0x824c79b8
	if (ctx.cr6.lt) goto loc_824C79B8;
loc_824C79F0:
	// lwz r9,52(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 52);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,56(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 56);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// add r20,r9,r20
	r20.u64 = ctx.r9.u64 + r20.u64;
	// add r28,r10,r28
	r28.u64 = ctx.r10.u64 + r28.u64;
	// cmpw cr6,r24,r8
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x824c7984
	if (ctx.cr6.lt) goto loc_824C7984;
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_824C7A14:
	// lwz r11,332(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 332);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addi r15,r15,4
	r15.s64 = r15.s64 + 4;
	// cmpw cr6,r14,r11
	ctx.cr6.compare<int32_t>(r14.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824c7914
	if (ctx.cr6.lt) goto loc_824C7914;
loc_824C7A28:
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// cmplw cr6,r19,r29
	ctx.cr6.compare<uint32_t>(r19.u32, r29.u32, ctx.xer);
	// ble cr6,0x824c78c8
	if (!ctx.cr6.gt) goto loc_824C78C8;
loc_824C7A34:
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// stw r16,20(r22)
	REX_STORE_U32(r22.u32 + 20, r16.u32);
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 28);
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(r18.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824c78bc
	if (ctx.cr6.lt) goto loc_824C78BC;
loc_824C7A48:
	// lwz r11,160(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 160);
	// lwz r10,324(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 324);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r11,152(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 152);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,160(r25)
	REX_STORE_U32(r25.u32 + 160, ctx.r9.u32);
	// stw r11,152(r25)
	REX_STORE_U32(r25.u32 + 152, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824c7af4
	if (!ctx.cr6.lt) goto loc_824C7AF4;
	// lwz r8,332(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 332);
	// lwz r9,432(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 432);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x824c7aac
	if (!ctx.cr6.gt) goto loc_824C7AAC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r16,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, r16.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r16,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, r16.u32);
	// stw r11,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
loc_824C7A98:
	// stw r18,24(r22)
	REX_STORE_U32(r22.u32 + 24, r18.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r19,20(r22)
	REX_STORE_U32(r22.u32 + 20, r19.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
loc_824C7AAC:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r11,336(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 336);
	// bge cr6,0x824c7ad8
	if (!ctx.cr6.lt) goto loc_824C7AD8;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r16,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, r16.u32);
	// stw r16,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, r16.u32);
	// stw r10,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
loc_824C7AD8:
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r16,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, r16.u32);
	// stw r16,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, r16.u32);
	// stw r10,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
loc_824C7AF4:
	// lwz r11,440(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 440);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824C7B08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_824D7C30) {
	REX_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D7E30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x824d7f0c
	if (ctx.cr6.lt) goto loc_824D7F0C;
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// add r31,r4,r5
	r31.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r31.u32, ctx.xer);
	// bge cr6,0x824d7f0c
	if (!ctx.cr6.lt) goto loc_824D7F0C;
	// li r6,38
	ctx.r6.s64 = 38;
	// li r5,116
	ctx.r5.s64 = 116;
	// li r7,59
	ctx.r7.s64 = 59;
loc_824D7E6C:
	// lbz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,60
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 60, ctx.xer);
	// bne cr6,0x824d7ea0
	if (!ctx.cr6.eq) goto loc_824D7EA0;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x824d7f20
	if (ctx.cr6.lt) goto loc_824D7F20;
	// li r9,108
	ctx.r9.s64 = 108;
loc_824D7E88:
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// stbu r5,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
loc_824D7E98:
	// stbu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// b 0x824d7efc
	goto loc_824D7EFC;
loc_824D7EA0:
	// cmpwi cr6,r9,62
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 62, ctx.xer);
	// bne cr6,0x824d7eb8
	if (!ctx.cr6.eq) goto loc_824D7EB8;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x824d7f20
	if (ctx.cr6.lt) goto loc_824D7F20;
	// li r9,103
	ctx.r9.s64 = 103;
	// b 0x824d7e88
	goto loc_824D7E88;
loc_824D7EB8:
	// cmpwi cr6,r9,38
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 38, ctx.xer);
	// bne cr6,0x824d7eec
	if (!ctx.cr6.eq) goto loc_824D7EEC;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// blt cr6,0x824d7f20
	if (ctx.cr6.lt) goto loc_824D7F20;
	// li r9,97
	ctx.r9.s64 = 97;
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// li r8,109
	ctx.r8.s64 = 109;
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// li r9,112
	ctx.r9.s64 = 112;
	// addi r10,r10,-5
	ctx.r10.s64 = ctx.r10.s64 + -5;
	// stbu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// b 0x824d7e98
	goto loc_824D7E98;
loc_824D7EEC:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x824d7f20
	if (ctx.cr6.lt) goto loc_824D7F20;
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_824D7EFC:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r31.u32, ctx.xer);
	// blt cr6,0x824d7e6c
	if (ctx.cr6.lt) goto loc_824D7E6C;
loc_824D7F0C:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
loc_824D7F18:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_824D7F20:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// b 0x824d7f18
	goto loc_824D7F18;
}

DEFINE_REX_FUNC(sub_824DBF98) {
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
	ctx.lr = 0x824DBFA0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r27,r3,144
	r27.s64 = ctx.r3.s64 + 144;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824dc020
	if (ctx.cr6.lt) goto loc_824DC020;
	// lwz r31,100(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x824dc000
	if (ctx.cr6.gt) goto loc_824DC000;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r30,r4,1
	r30.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824dbff0
	if (!ctx.cr6.gt) goto loc_824DBFF0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d8118
	ctx.lr = 0x824DBFF0;
	sub_824D8118(ctx, base);
loc_824DBFF0:
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824dc020
	if (ctx.cr6.lt) goto loc_824DC020;
loc_824DC000:
	// lwz r10,100(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 100);
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r26.u32);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_824DC020:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824DE338) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824DE340;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824DE360;
	sub_826A1E70(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x824de394
	if (ctx.cr6.eq) goto loc_824DE394;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// bl 0x824de338
	ctx.lr = 0x824DE38C;
	sub_824DE338(ctx, base);
	// mullw r29,r3,r31
	r29.s64 = int64_t(ctx.r3.s32) * int64_t(r31.s32);
	// b 0x824de440
	goto loc_824DE440;
loc_824DE394:
	// lwz r31,116(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824de408
	if (ctx.cr6.eq) goto loc_824DE408;
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// beq cr6,0x824de440
	if (ctx.cr6.eq) goto loc_824DE440;
	// addi r28,r11,-4
	r28.s64 = ctx.r11.s64 + -4;
loc_824DE3B4:
	// lwzu r11,8(r28)
	ea = 8 + r28.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r28.u32 = ea;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + r30.u64;
	// lhz r10,6(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 6);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lhz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 4);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lhzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + r30.u32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lhz r11,2(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 2);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lhz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 8);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lhz r11,10(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 10);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x824de338
	ctx.lr = 0x824DE3F8;
	sub_824DE338(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r29,r3,r29
	r29.u64 = ctx.r3.u64 + r29.u64;
	// bne 0x824de3b4
	if (!ctx.cr0.eq) goto loc_824DE3B4;
	// b 0x824de440
	goto loc_824DE440;
loc_824DE408:
	// lhz r10,6(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 6);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U16(r28.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// mullw r29,r10,r9
	r29.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// beq cr6,0x824de428
	if (ctx.cr6.eq) goto loc_824DE428;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824de440
	if (!ctx.cr6.eq) goto loc_824DE440;
loc_824DE428:
	// clrlwi. r11,r29,30
	ctx.r11.u64 = r29.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824de438
	if (!ctx.cr0.eq) goto loc_824DE438;
	// rlwinm r29,r29,30,2,31
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x824de440
	goto loc_824DE440;
loc_824DE438:
	// rlwinm r11,r29,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
loc_824DE440:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824E6100) {
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
	// bne cr6,0x824e6128
	if (!ctx.cr6.eq) goto loc_824E6128;
	// bl 0x826b40a0
	ctx.lr = 0x824E6128;
	sub_826B40A0(ctx, base);
loc_824E6128:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e5fc8
	ctx.lr = 0x824E6134;
	sub_824E5FC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x824e6168
	if (!ctx.cr0.eq) goto loc_824E6168;
	// bl 0x824e6018
	ctx.lr = 0x824E6148;
	sub_824E6018(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824e6160
	if (ctx.cr0.eq) goto loc_824E6160;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e5f60
	ctx.lr = 0x824E615C;
	sub_824E5F60(ctx, base);
	// b 0x824e6180
	goto loc_824E6180;
loc_824E6160:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824e6180
	goto loc_824E6180;
loc_824E6168:
	// bl 0x824e5f60
	ctx.lr = 0x824E616C;
	sub_824E5F60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x826a2e60
	ctx.lr = 0x824E617C;
	sub_826A2E60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824E6180:
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

DEFINE_REX_FUNC(sub_824EA490) {
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
	// bl 0x826a1c90
	ctx.lr = 0x824EA498;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r6,12
	ctx.r11.s64 = ctx.r6.s64 + 12;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// stw r11,16(r5)
	REX_STORE_U32(ctx.r5.u32 + 16, ctx.r11.u32);
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// stw r7,16(r6)
	REX_STORE_U32(ctx.r6.u32 + 16, ctx.r7.u32);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// lwz r9,16(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r27,0(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r27,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFF0000;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// stw r27,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r27.u32);
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824ea4f0
	if (ctx.cr6.eq) goto loc_824EA4F0;
	// bl 0x826b40a0
	ctx.lr = 0x824EA4F0;
	sub_826B40A0(ctx, base);
loc_824EA4F0:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm r20,r31,30,2,31
	r20.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x824ea50c
	if (!ctx.cr6.eq) goto loc_824EA50C;
	// bl 0x826b40a0
	ctx.lr = 0x824EA508;
	sub_826B40A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_824EA50C:
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// ori r23,r10,512
	r23.u64 = ctx.r10.u64 | 512;
	// li r10,2
	ctx.r10.s64 = 2;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(r27.u32, r23.u32, ctx.xer);
	// blt cr6,0x824ea524
	if (ctx.cr6.lt) goto loc_824EA524;
	// li r10,0
	ctx.r10.s64 = 0;
loc_824EA524:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(r27.u32, r23.u32, ctx.xer);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bge cr6,0x824ea590
	if (!ctx.cr6.lt) goto loc_824EA590;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824ea150
	ctx.lr = 0x824EA564;
	sub_824EA150(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824ea2d8
	ctx.lr = 0x824EA570;
	sub_824EA2D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824ea580
	if (ctx.cr0.eq) goto loc_824EA580;
loc_824EA578:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824ea86c
	goto loc_824EA86C;
loc_824EA580:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e9d20
	ctx.lr = 0x824EA590;
	sub_824E9D20(ctx, base);
loc_824EA590:
	// addi r11,r21,4
	ctx.r11.s64 = r21.s64 + 4;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x824ea7d8
	if (ctx.cr6.eq) goto loc_824EA7D8;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r25,r11,18136
	r25.s64 = ctx.r11.s64 + 18136;
loc_824EA5AC:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824ea2d8
	ctx.lr = 0x824EA5B8;
	sub_824EA2D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824ea578
	if (!ctx.cr0.eq) goto loc_824EA578;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r22,80(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r8,r11,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// beq 0x824ea5e0
	if (ctx.cr0.eq) goto loc_824EA5E0;
loc_824EA5D8:
	// bl 0x826b40a0
	ctx.lr = 0x824EA5DC;
	sub_826B40A0(ctx, base);
	// b 0x824ea79c
	goto loc_824EA79C;
loc_824EA5E0:
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x824ea5fc
	if (!ctx.cr6.eq) goto loc_824EA5FC;
	// rlwinm r11,r11,16,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x824ea798
	goto loc_824EA798;
loc_824EA5FC:
	// cmplwi cr6,r10,65533
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65533, ctx.xer);
	// beq cr6,0x824ea794
	if (ctx.cr6.eq) goto loc_824EA794;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824ea794
	if (ctx.cr6.eq) goto loc_824EA794;
	// cmplwi cr6,r10,81
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 81, ctx.xer);
	// bne cr6,0x824ea638
	if (!ctx.cr6.eq) goto loc_824EA638;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(r27.u32, r23.u32, ctx.xer);
	// blt cr6,0x824ea630
	if (ctx.cr6.lt) goto loc_824EA630;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824e9598
	ctx.lr = 0x824EA62C;
	sub_824E9598(ctx, base);
	// b 0x824ea79c
	goto loc_824EA79C;
loc_824EA630:
	// addi r11,r9,24
	ctx.r11.s64 = ctx.r9.s64 + 24;
	// b 0x824ea798
	goto loc_824EA798;
loc_824EA638:
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// bne cr6,0x824ea654
	if (!ctx.cr6.eq) goto loc_824EA654;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824e9648
	ctx.lr = 0x824EA650;
	sub_824E9648(ctx, base);
	// b 0x824ea79c
	goto loc_824EA79C;
loc_824EA654:
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// bne cr6,0x824ea6d8
	if (!ctx.cr6.eq) goto loc_824EA6D8;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(r27.u32, r23.u32, ctx.xer);
	// bge cr6,0x824ea66c
	if (!ctx.cr6.lt) goto loc_824EA66C;
	// bl 0x826b40a0
	ctx.lr = 0x824EA668;
	sub_826B40A0(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_824EA66C:
	// lwz r29,4(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r30,r29,21
	r30.u64 = r29.u32 & 0x7FF;
	// addi r28,r11,4
	r28.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(r30.u32, 16, ctx.xer);
	// blt cr6,0x824ea690
	if (ctx.cr6.lt) goto loc_824EA690;
	// bl 0x826b40a0
	ctx.lr = 0x824EA68C;
	sub_826B40A0(ctx, base);
	// li r30,15
	r30.s64 = 15;
loc_824EA690:
	// rlwimi r29,r29,12,21,23
	r29.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 12) & 0x700) | (r29.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r29,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3584
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3584, ctx.xer);
	// beq cr6,0x824ea6a4
	if (ctx.cr6.eq) goto loc_824EA6A4;
	// bl 0x826b40a0
	ctx.lr = 0x824EA6A4;
	sub_826B40A0(ctx, base);
loc_824EA6A4:
	// li r11,29
	ctx.r11.s64 = 29;
	// clrlwi r10,r30,16
	ctx.r10.u64 = r30.u32 & 0xFFFF;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r11,r28,4
	ctx.r11.s64 = r28.s64 + 4;
	// stwu r10,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	r31.u32 = ea;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stwu r10,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	r31.u32 = ea;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x824ea79c
	goto loc_824EA79C;
loc_824EA6D8:
	// cmplwi cr6,r10,31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 31, ctx.xer);
	// bne cr6,0x824ea714
	if (!ctx.cr6.eq) goto loc_824EA714;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(r27.u32, r23.u32, ctx.xer);
	// bge cr6,0x824ea6ec
	if (!ctx.cr6.lt) goto loc_824EA6EC;
	// bl 0x826b40a0
	ctx.lr = 0x824EA6EC;
	sub_826B40A0(ctx, base);
loc_824EA6EC:
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824e9ae8
	ctx.lr = 0x824EA708;
	sub_824E9AE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824ea86c
	if (!ctx.cr0.eq) goto loc_824EA86C;
	// b 0x824ea79c
	goto loc_824EA79C;
loc_824EA714:
	// cmplwi cr6,r10,28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 28, ctx.xer);
	// bne cr6,0x824ea760
	if (!ctx.cr6.eq) goto loc_824EA760;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824ea768
	if (!ctx.cr6.eq) goto loc_824EA768;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(r27.u32, r23.u32, ctx.xer);
	// bge cr6,0x824ea738
	if (!ctx.cr6.lt) goto loc_824EA738;
	// bl 0x826b40a0
	ctx.lr = 0x824EA738;
	sub_826B40A0(ctx, base);
loc_824EA738:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824ea368
	ctx.lr = 0x824EA74C;
	sub_824EA368(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824ea86c
	if (!ctx.cr0.eq) goto loc_824EA86C;
	// lwz r11,228(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 228);
	// lwz r5,224(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 224);
	// b 0x824ea778
	goto loc_824EA778;
loc_824EA760:
	// cmplwi cr6,r10,97
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 97, ctx.xer);
	// bge cr6,0x824ea5d8
	if (!ctx.cr6.lt) goto loc_824EA5D8;
loc_824EA768:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r25,4
	ctx.r10.s64 = r25.s64 + 4;
	// lwzx r5,r11,r25
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_824EA778:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r6,16(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 16);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x824EA790;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824ea79c
	goto loc_824EA79C;
loc_824EA794:
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_824EA798:
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_824EA79C:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r21,r11
	ctx.r11.u64 = ctx.r11.u64 - r21.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r20.s32, ctx.xer);
	// bgt cr6,0x824ea874
	if (ctx.cr6.gt) goto loc_824EA874;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r22,r11
	ctx.r11.u64 = ctx.r11.u64 - r22.u64;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r11,1024
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1024, ctx.xer);
	// blt cr6,0x824ea7c8
	if (ctx.cr6.lt) goto loc_824EA7C8;
	// bl 0x826b40a0
	ctx.lr = 0x824EA7C8;
	sub_826B40A0(ctx, base);
loc_824EA7C8:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x824ea5ac
	if (!ctx.cr6.eq) goto loc_824EA5AC;
loc_824EA7D8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// subf r10,r21,r11
	ctx.r10.u64 = ctx.r11.u64 - r21.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r20.s32, ctx.xer);
	// bne cr6,0x824ea878
	if (!ctx.cr6.eq) goto loc_824EA878;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824ea2d8
	ctx.lr = 0x824EA7FC;
	sub_824EA2D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824ea578
	if (!ctx.cr0.eq) goto loc_824EA578;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824ea830
	if (!ctx.cr6.eq) goto loc_824EA830;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824ea368
	ctx.lr = 0x824EA828;
	sub_824EA368(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824ea86c
	if (!ctx.cr0.eq) goto loc_824EA86C;
loc_824EA830:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,40
	ctx.r10.s64 = 40;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r10,4(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 4);
	// subf r9,r9,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// stw r9,8(r24)
	REX_STORE_U32(r24.u32 + 8, ctx.r9.u32);
	// ble cr6,0x824ea868
	if (!ctx.cr6.gt) goto loc_824EA868;
	// bl 0x826b40a0
	ctx.lr = 0x824EA868;
	sub_826B40A0(ctx, base);
loc_824EA868:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824EA86C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce0
	return;
loc_824EA874:
	// bl 0x826b40a0
	ctx.lr = 0x824EA878;
	sub_826B40A0(ctx, base);
loc_824EA878:
	// bl 0x826b40a0
	ctx.lr = 0x824EA87C;
	sub_826B40A0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x824ea86c
	goto loc_824EA86C;
}

DEFINE_REX_FUNC(sub_8250A5D8) {
	REX_FUNC_PROLOGUE();
	// rlwinm. r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250a5ec
	if (ctx.cr0.eq) goto loc_8250A5EC;
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250a5ec
	if (ctx.cr0.eq) goto loc_8250A5EC;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
loc_8250A5EC:
	// and r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 & ctx.r4.u64;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250a600
	if (ctx.cr0.eq) goto loc_8250A600;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_8250A600:
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250a614
	if (ctx.cr0.eq) goto loc_8250A614;
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250a614
	if (ctx.cr0.eq) goto loc_8250A614;
	// addi r4,r4,-2
	ctx.r4.s64 = ctx.r4.s64 + -2;
loc_8250A614:
	// or r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 | ctx.r4.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8250BB20) {
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
	// lwz r11,112(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 112);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8250bb74
	if (ctx.cr0.eq) goto loc_8250BB74;
	// b 0x8250bb58
	goto loc_8250BB58;
loc_8250BB4C:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8250bb64
	if (ctx.cr0.eq) goto loc_8250BB64;
loc_8250BB58:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8250bb4c
	if (!ctx.cr6.eq) goto loc_8250BB4C;
loc_8250BB64:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250bb58
	if (!ctx.cr0.eq) goto loc_8250BB58;
	// stw r11,112(r4)
	REX_STORE_U32(ctx.r4.u32 + 112, ctx.r11.u32);
loc_8250BB74:
	// lwz r10,112(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 112);
	// lwz r11,36(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250bbf0
	if (!ctx.cr0.eq) goto loc_8250BBF0;
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r3.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8250bbf0
	if (ctx.cr0.eq) goto loc_8250BBF0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r9,r11,15,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8250bbf0
	if (ctx.cr0.eq) goto loc_8250BBF0;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x8250bbd8
	if (ctx.cr6.eq) goto loc_8250BBD8;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x8250bbd8
	if (ctx.cr6.eq) goto loc_8250BBD8;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x8250bbd8
	if (ctx.cr6.eq) goto loc_8250BBD8;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x8250bbd8
	if (ctx.cr6.eq) goto loc_8250BBD8;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x8250bbd8
	if (ctx.cr6.eq) goto loc_8250BBD8;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8250bbdc
	if (!ctx.cr6.eq) goto loc_8250BBDC;
loc_8250BBD8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8250BBDC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250bbf0
	if (ctx.cr0.eq) goto loc_8250BBF0;
	// bl 0x824ff9c0
	ctx.lr = 0x8250BBE8;
	sub_824FF9C0(ctx, base);
	// lwz r31,12(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x8250bbf4
	goto loc_8250BBF4;
loc_8250BBF0:
	// lwz r31,96(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 96);
loc_8250BBF4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8250bc28
	if (ctx.cr6.eq) goto loc_8250BC28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f6ec8
	ctx.lr = 0x8250BC04;
	sub_824F6EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250bc28
	if (ctx.cr0.eq) goto loc_8250BC28;
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
loc_8250BC28:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4368
	ctx.lr = 0x8250BC34;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_8251ED40) {
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
	ctx.lr = 0x8251ED48;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r4,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r3,8
	r30.s64 = ctx.r3.s64 + 8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x8251e928
	ctx.lr = 0x8251ED78;
	sub_8251E928(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251ed90
	if (ctx.cr0.eq) goto loc_8251ED90;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r4,3526
	ctx.r4.s64 = 3526;
	// bl 0x824e4368
	ctx.lr = 0x8251ED90;
	sub_824E4368(ctx, base);
loc_8251ED90:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82502060
	ctx.lr = 0x8251EDA0;
	sub_82502060(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82520268) {
	REX_FUNC_PROLOGUE();
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
loc_8252027C:
	// rlwinm r11,r10,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// addi r7,r10,3
	ctx.r7.s64 = ctx.r10.s64 + 3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrldi r7,r7,58
	ctx.r7.u64 = ctx.r7.u64 & 0x3F;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,2
	ctx.r6.s64 = 2;
	// sld r11,r6,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r7.u8 & 0x7F));
	// ldx r7,r5,r3
	ctx.r7.u64 = REX_LOAD_U64(ctx.r5.u32 + ctx.r3.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrldi r6,r10,58
	ctx.r6.u64 = ctx.r10.u64 & 0x3F;
	// li r5,-1
	ctx.r5.s64 = -1;
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// sld r7,r5,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r5.u64 << (ctx.r6.u8 & 0x7F));
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// srd r11,r11,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825202f0
	if (ctx.cr0.eq) goto loc_825202F0;
	// rlwimi r11,r9,4,0,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r6,r7,30,2,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrldi r6,r6,58
	ctx.r6.u64 = ctx.r6.u64 & 0x3F;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// clrldi r7,r7,60
	ctx.r7.u64 = ctx.r7.u64 & 0xF;
	// sld r7,r7,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r6.u8 & 0x7F));
	// ldx r6,r11,r3
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r3.u32);
	// subf r7,r7,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r7.u64;
	// stdx r7,r11,r3
	REX_STORE_U64(ctx.r11.u32 + ctx.r3.u32, ctx.r7.u64);
loc_825202F0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8252027c
	if (ctx.cr6.lt) goto loc_8252027C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82528DD0) {
	REX_FUNC_PROLOGUE();
	// rlwinm. r11,r3,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82528de8
	if (ctx.cr0.eq) goto loc_82528DE8;
	// rlwinm. r11,r4,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82528de8
	if (ctx.cr0.eq) goto loc_82528DE8;
loc_82528DE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82528DE8:
	// rlwinm. r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82528df8
	if (ctx.cr0.eq) goto loc_82528DF8;
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82528de0
	if (!ctx.cr0.eq) goto loc_82528DE0;
loc_82528DF8:
	// rlwinm. r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82528e0c
	if (ctx.cr0.eq) goto loc_82528E0C;
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_82528E0C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8252E2F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8252E300;
	// lwz r30,4(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8252E308:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8252e3f0
	if (ctx.cr6.eq) goto loc_8252E3F0;
	// lwz r6,16(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8252e3e8
	if (ctx.cr6.eq) goto loc_8252E3E8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252e3e8
	if (ctx.cr0.eq) goto loc_8252E3E8;
	// lwz r11,8(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bne cr6,0x8252e3e8
	if (!ctx.cr6.eq) goto loc_8252E3E8;
	// lwz r31,4(r5)
	r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
loc_8252E33C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8252e3e8
	if (ctx.cr6.eq) goto loc_8252E3E8;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252e3e0
	if (ctx.cr6.eq) goto loc_8252E3E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252e3e0
	if (ctx.cr0.eq) goto loc_8252E3E0;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bne cr6,0x8252e3e0
	if (!ctx.cr6.eq) goto loc_8252E3E0;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8252e37c
	if (!ctx.cr6.eq) goto loc_8252E37C;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// b 0x8252e3e0
	goto loc_8252E3E0;
loc_8252E37C:
	// lwz r10,44(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 44);
	// lwz r8,44(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r9,48(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 48);
	// lwz r29,48(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r7,12(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// lwz r8,12(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bne cr6,0x8252e3b4
	if (!ctx.cr6.eq) goto loc_8252E3B4;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8252e3b4
	if (!ctx.cr6.eq) goto loc_8252E3B4;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8252e3cc
	if (ctx.cr6.eq) goto loc_8252E3CC;
loc_8252E3B4:
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8252e3d4
	if (!ctx.cr6.eq) goto loc_8252E3D4;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8252e3d4
	if (!ctx.cr6.eq) goto loc_8252E3D4;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8252e3d4
	if (!ctx.cr6.eq) goto loc_8252E3D4;
loc_8252E3CC:
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// b 0x8252e3e0
	goto loc_8252E3E0;
loc_8252E3D4:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8252e3e0
	if (!ctx.cr6.eq) goto loc_8252E3E0;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
loc_8252E3E0:
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x8252e33c
	goto loc_8252E33C;
loc_8252E3E8:
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// b 0x8252e308
	goto loc_8252E308;
loc_8252E3F0:
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82537760) {
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
	ctx.lr = 0x82537768;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_82537784:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825377fc
	if (ctx.cr6.eq) goto loc_825377FC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825377e8
	if (!ctx.cr0.eq) goto loc_825377E8;
	// clrlwi. r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825377b4
	if (!ctx.cr0.eq) goto loc_825377B4;
	// rlwinm. r9,r10,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825377b4
	if (ctx.cr0.eq) goto loc_825377B4;
	// rlwinm. r10,r10,0,7,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825377e8
	if (ctx.cr0.eq) goto loc_825377E8;
loc_825377B4:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x825377c8
	goto loc_825377C8;
loc_825377C0:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_825377C8:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825377c0
	if (!ctx.cr6.eq) goto loc_825377C0;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stw r30,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r30.u32);
loc_825377E8:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82537784
	if (!ctx.cr6.eq) goto loc_82537784;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// b 0x82537784
	goto loc_82537784;
loc_825377FC:
	// addi r29,r28,4
	r29.s64 = r28.s64 + 4;
loc_82537800:
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825378b8
	if (ctx.cr6.eq) goto loc_825378B8;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825378a4
	if (ctx.cr6.eq) goto loc_825378A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8253786c
	if (ctx.cr0.eq) goto loc_8253786C;
	// rlwinm r10,r11,22,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x6;
	// rlwinm r9,r11,24,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x6;
	// srw r10,r27,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r10.u8 & 0x3F));
	// srw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwimi r9,r10,2,28,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r8,r11,26,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x6;
	// rlwinm r10,r11,28,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// srw r8,r27,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r8.u8 & 0x3F));
	// srw r10,r27,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwimi r8,r9,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwimi r10,r8,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x825335b8
	ctx.lr = 0x8253786C;
	sub_825335B8(ctx, base);
loc_8253786C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82537884
	goto loc_82537884;
loc_8253787C:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_82537884:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x8253787c
	if (!ctx.cr6.eq) goto loc_8253787C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r30)
	REX_STORE_U32(r30.u32 + 4, r31.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
loc_825378A4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x82537800
	if (!ctx.cr6.eq) goto loc_82537800;
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// b 0x82537800
	goto loc_82537800;
loc_825378B8:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825378f4
	if (ctx.cr0.eq) goto loc_825378F4;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x825378e0
	if (!ctx.cr6.eq) goto loc_825378E0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82548eb8
	ctx.lr = 0x825378DC;
	sub_82548EB8(ctx, base);
	// b 0x825378e8
	goto loc_825378E8;
loc_825378E0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250aed8
	ctx.lr = 0x825378E8;
	sub_8250AED8(ctx, base);
loc_825378E8:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_825378F4:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825379f4
	if (!ctx.cr0.eq) goto loc_825379F4;
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825379f4
	if (ctx.cr0.eq) goto loc_825379F4;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lhz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 16);
	// clrlwi. r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82537990
	if (ctx.cr0.eq) goto loc_82537990;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// sth r11,18(r30)
	REX_STORE_U16(r30.u32 + 18, ctx.r11.u16);
	// lwz r10,16(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 16);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwimi r11,r10,0,13,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x70000) | (ctx.r11.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// lhz r11,18(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 18);
	// lwz r10,16(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 16);
	// rlwinm r9,r10,16,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x7;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825379f4
	if (!ctx.cr6.lt) goto loc_825379F4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82537958:
	// lwz r9,708(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 708);
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r28.u32, ctx.xer);
	// bne cr6,0x8253796c
	if (!ctx.cr6.eq) goto loc_8253796C;
	// stwx r30,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r30.u32);
loc_8253796C:
	// lwz r8,16(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r9,r8,16,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x7;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82537958
	if (ctx.cr6.lt) goto loc_82537958;
	// b 0x825379f4
	goto loc_825379F4;
loc_82537990:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82516448
	ctx.lr = 0x82537998;
	sub_82516448(ctx, base);
	// sth r3,18(r30)
	REX_STORE_U16(r30.u32 + 18, ctx.r3.u16);
	// lwz r3,660(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 660);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825379d0
	if (!ctx.cr0.eq) goto loc_825379D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825379d0
	if (ctx.cr0.eq) goto loc_825379D0;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x825379dc
	if (!ctx.cr6.gt) goto loc_825379DC;
loc_825379D0:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x825379D8;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_825379DC:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stwx r30,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r30.u32);
loc_825379F4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825335b8
	ctx.lr = 0x82537A00;
	sub_825335B8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,652(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 652);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825c2288
	ctx.lr = 0x82537A14;
	sub_825C2288(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82557968) {
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
	ctx.lr = 0x82557970;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// rlwinm r26,r11,18,29,31
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r28,r10,18,29,31
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// add r11,r28,r26
	ctx.r11.u64 = r28.u64 + r26.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// add r30,r11,r6
	r30.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bl 0x825bcf88
	ctx.lr = 0x825579AC;
	sub_825BCF88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825579b8
	if (ctx.cr0.eq) goto loc_825579B8;
	// mr r31,r27
	r31.u64 = r27.u64;
loc_825579B8:
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,113
	ctx.r6.s64 = 113;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825bb860
	ctx.lr = 0x825579D4;
	sub_825BB860(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// addi r5,r10,-36
	ctx.r5.s64 = ctx.r10.s64 + -36;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r29,4
	ctx.r8.s64 = r29.s64 + 4;
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r5,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_82557A1C:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82557a80
	if (ctx.cr6.eq) goto loc_82557A80;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82557a6c
	if (ctx.cr6.eq) goto loc_82557A6C;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82557a4c
	goto loc_82557A4C;
loc_82557A44:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_82557A4C:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82557a44
	if (!ctx.cr6.eq) goto loc_82557A44;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_82557A6C:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82557a1c
	if (!ctx.cr6.eq) goto loc_82557A1C;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x82557a1c
	goto loc_82557A1C;
loc_82557A80:
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r7,r11,20036
	ctx.r7.s64 = ctx.r11.s64 + 20036;
	// lwz r11,20048(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20048);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82557ab8
	if (!ctx.cr0.eq) goto loc_82557AB8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// li r9,249
	ctx.r9.s64 = 249;
	// stw r11,20048(r10)
	REX_STORE_U32(ctx.r10.u32 + 20048, ctx.r11.u32);
	// li r8,254
	ctx.r8.s64 = 254;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r9,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// stw r8,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// stw r11,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
loc_82557AB8:
	// addi r8,r27,4
	ctx.r8.s64 = r27.s64 + 4;
loc_82557ABC:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82557b7c
	if (ctx.cr6.eq) goto loc_82557B7C;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82557b68
	if (ctx.cr6.eq) goto loc_82557B68;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82557aec
	goto loc_82557AEC;
loc_82557AE4:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_82557AEC:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82557ae4
	if (!ctx.cr6.eq) goto loc_82557AE4;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// beq 0x82557b68
	if (ctx.cr0.eq) goto loc_82557B68;
	// add r9,r26,r24
	ctx.r9.u64 = r26.u64 + r24.u64;
	// rlwinm r6,r10,22,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r10,24,29,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r4,r10,26,29,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// rlwinm r31,r10,28,29,30
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// lwz r9,-4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// srw r6,r9,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// srw r5,r9,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// rlwimi r5,r6,2,28,29
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xC) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw r6,r9,r4
	ctx.r6.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r4.u8 & 0x3F));
	// clrlwi r5,r5,28
	ctx.r5.u64 = ctx.r5.u32 & 0xF;
	// srw r9,r9,r31
	ctx.r9.u64 = r31.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (r31.u8 & 0x3F));
	// rlwimi r6,r5,2,0,29
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r6.u64 & 0xFFFFFFFF00000003);
	// rlwimi r9,r6,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82557B68:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82557abc
	if (!ctx.cr6.eq) goto loc_82557ABC;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x82557abc
	goto loc_82557ABC;
loc_82557B7C:
	// li r5,15
	ctx.r5.s64 = 15;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82557bd0
	if (ctx.cr6.eq) goto loc_82557BD0;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82557B90:
	// lhz r8,14(r29)
	ctx.r8.u64 = REX_LOAD_U16(r29.u32 + 14);
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// slw r9,r5,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// srw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// and r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 & ctx.r9.u64;
	// slw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82557bc8
	if (ctx.cr6.eq) goto loc_82557BC8;
	// andc r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// sth r10,14(r3)
	REX_STORE_U16(ctx.r3.u32 + 14, ctx.r10.u16);
loc_82557BC8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82557b90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82557B90;
loc_82557BD0:
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82557c34
	if (ctx.cr6.eq) goto loc_82557C34;
	// add r7,r26,r24
	ctx.r7.u64 = r26.u64 + r24.u64;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82557BE8:
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lhz r9,14(r27)
	ctx.r9.u64 = REX_LOAD_U16(r27.u32 + 14);
	// clrlwi r4,r8,16
	ctx.r4.u64 = ctx.r8.u32 & 0xFFFF;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r31,r10,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// srw r9,r9,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r4.u8 & 0x3F));
	// slw r10,r5,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (ctx.r5.u32 << (r31.u8 & 0x3F));
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// and r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 & ctx.r10.u64;
	// slw r9,r9,r31
	ctx.r9.u64 = r31.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r31.u8 & 0x3F));
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82557c28
	if (ctx.cr6.eq) goto loc_82557C28;
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// sth r11,14(r3)
	REX_STORE_U16(ctx.r3.u32 + 14, ctx.r11.u16);
loc_82557C28:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82557be8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82557BE8;
loc_82557C34:
	// lwz r11,536(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 536);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82557c94
	if (!ctx.cr6.gt) goto loc_82557C94;
	// addi r11,r25,352
	ctx.r11.s64 = r25.s64 + 352;
loc_82557C48:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, ctx.xer);
	// bne cr6,0x82557c58
	if (!ctx.cr6.eq) goto loc_82557C58;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_82557C58:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r27.u32, ctx.xer);
	// bne cr6,0x82557c80
	if (!ctx.cr6.eq) goto loc_82557C80;
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// add r8,r26,r24
	ctx.r8.u64 = r26.u64 + r24.u64;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// rlwinm r7,r9,23,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 23) & 0xF;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// rlwimi r9,r8,9,19,22
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 9) & 0x1E00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE1FF);
	// stw r9,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
loc_82557C80:
	// lwz r9,536(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 536);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82557c48
	if (ctx.cr6.lt) goto loc_82557C48;
loc_82557C94:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825c2288
	ctx.lr = 0x82557CA8;
	sub_825C2288(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825c2288
	ctx.lr = 0x82557CBC;
	sub_825C2288(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82580708) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82580710;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,88
	ctx.r6.s64 = 88;
	// addi r5,r4,32
	ctx.r5.s64 = ctx.r4.s64 + 32;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x825bb860
	ctx.lr = 0x82580730;
	sub_825BB860(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82580758
	if (!ctx.cr6.eq) goto loc_82580758;
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r31.u32);
	// b 0x82580780
	goto loc_82580780;
loc_82580758:
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ff930
	ctx.lr = 0x82580768;
	sub_824FF930(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// stw r3,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
loc_82580780:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,24(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82580568
	ctx.lr = 0x82580790;
	sub_82580568(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82582308) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82582310;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,101
	ctx.r6.s64 = 101;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82582334;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82582358
	if (ctx.cr6.eq) goto loc_82582358;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82582354;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82582358:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82582360;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lwz r11,564(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 564);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r9,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82584728) {
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
	// cmplwi cr6,r4,10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 10, ctx.xer);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bgt cr6,0x82584750
	if (ctx.cr6.gt) goto loc_82584750;
	// li r30,10
	r30.s64 = 10;
loc_82584750:
	// mulli r11,r30,24
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(24));
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7d10
	ctx.lr = 0x82584760;
	sub_824F7D10(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// ori r8,r31,1
	ctx.r8.u64 = r31.u64 | 1;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_825869D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825869D8;
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
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82586A00;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82586a24
	if (ctx.cr6.eq) goto loc_82586A24;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82586A20;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82586A24:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82586A2C;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82584ed0
	ctx.lr = 0x82586A3C;
	sub_82584ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82586A48;
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

DEFINE_REX_FUNC(sub_8258DC48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8258DC50;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8258dc74
	if (ctx.cr6.eq) goto loc_8258DC74;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// bl 0x824e4368
	ctx.lr = 0x8258DC74;
	sub_824E4368(ctx, base);
loc_8258DC74:
	// lwz r30,24(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8258dd64
	if (ctx.cr6.eq) goto loc_8258DD64;
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8258dd64
	if (ctx.cr6.eq) goto loc_8258DD64;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mulli r10,r4,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(40));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8258dcc4
	if (ctx.cr6.eq) goto loc_8258DCC4;
	// bl 0x8257f6f8
	ctx.lr = 0x8258DCB4;
	sub_8257F6F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3520
	ctx.r4.s64 = 3520;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258DCC4;
	sub_824E4368(ctx, base);
loc_8258DCC4:
	// cmplwi cr6,r8,16383
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16383, ctx.xer);
	// ble cr6,0x8258dcd4
	if (!ctx.cr6.gt) goto loc_8258DCD4;
	// li r4,3519
	ctx.r4.s64 = 3519;
	// bl 0x824e4368
	ctx.lr = 0x8258DCD4;
	sub_824E4368(ctx, base);
loc_8258DCD4:
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8258d470
	ctx.lr = 0x8258DCE8;
	sub_8258D470(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r9,1
	ctx.r9.s64 = 1;
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwimi r8,r9,1,29,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x7) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF8);
	// stwx r8,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// oris r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 67108864;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r9,752(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 752);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r9,r10,0,0,12
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF80000) | (ctx.r9.u64 & 0xFFFFFFFF0007FFFF);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r6,52(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 52);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8258dd64
	if (ctx.cr6.eq) goto loc_8258DD64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,16(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825879a0
	ctx.lr = 0x8258DD64;
	sub_825879A0(ctx, base);
loc_8258DD64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825A2590) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825A2598;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,22852
	r31.s64 = ctx.r11.s64 + 22852;
	// addi r30,r10,-11824
	r30.s64 = ctx.r10.s64 + -11824;
	// bne cr6,0x825a25d4
	if (!ctx.cr6.eq) goto loc_825A25D4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r11,-13852
	ctx.r5.s64 = ctx.r11.s64 + -13852;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,447
	ctx.r7.s64 = 447;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A25D4;
	sub_824EA978(ctx, base);
loc_825A25D4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825a25f8
	if (ctx.cr6.eq) goto loc_825A25F8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r11,-11712
	ctx.r5.s64 = ctx.r11.s64 + -11712;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,448
	ctx.r7.s64 = 448;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A25F8;
	sub_824EA978(ctx, base);
loc_825A25F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825A3E48) {
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
	ctx.lr = 0x825A3E50;
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r30,r11,22852
	r30.s64 = ctx.r11.s64 + 22852;
	// addi r29,r10,-10648
	r29.s64 = ctx.r10.s64 + -10648;
	// bge cr6,0x825a3e94
	if (!ctx.cr6.lt) goto loc_825A3E94;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-10660
	ctx.r5.s64 = ctx.r11.s64 + -10660;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,283
	ctx.r7.s64 = 283;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A3E94;
	sub_824EA978(ctx, base);
loc_825A3E94:
	// cmpwi cr6,r31,44
	ctx.cr6.compare<int32_t>(r31.s32, 44, ctx.xer);
	// blt cr6,0x825a3eb8
	if (ctx.cr6.lt) goto loc_825A3EB8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-10540
	ctx.r5.s64 = ctx.r11.s64 + -10540;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,284
	ctx.r7.s64 = 284;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A3EB8;
	sub_824EA978(ctx, base);
loc_825A3EB8:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A3EE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825A5EA8) {
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
	ctx.lr = 0x825A5EB0;
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,22852
	r28.s64 = ctx.r11.s64 + 22852;
	// addi r27,r10,-8736
	r27.s64 = ctx.r10.s64 + -8736;
	// bne cr6,0x825a5ef4
	if (!ctx.cr6.eq) goto loc_825A5EF4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-8568
	ctx.r5.s64 = ctx.r11.s64 + -8568;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,683
	ctx.r7.s64 = 683;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A5EF4;
	sub_824EA978(ctx, base);
loc_825A5EF4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d6e68
	ctx.lr = 0x825A5F04;
	sub_825D6E68(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// divwu r9,r3,r11
	ctx.r9.u64 = uint32_t(ctx.r11.u32 ? ctx.r3.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825a5f4c
	if (!ctx.cr6.eq) goto loc_825A5F4C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-26292
	ctx.r5.s64 = ctx.r11.s64 + -26292;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,694
	ctx.r7.s64 = 694;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A5F4C;
	sub_824EA978(ctx, base);
loc_825A5F4C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eeab8
	ctx.lr = 0x825A5F58;
	sub_824EEAB8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x825a5f90
	if (ctx.cr0.eq) goto loc_825A5F90;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eeb68
	ctx.lr = 0x825A5F68;
	sub_824EEB68(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825a5f90
	if (ctx.cr0.eq) goto loc_825A5F90;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-8644
	ctx.r5.s64 = ctx.r11.s64 + -8644;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,701
	ctx.r7.s64 = 701;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A5F8C;
	sub_824EA978(ctx, base);
	// li r30,0
	r30.s64 = 0;
loc_825A5F90:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825AEA88) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb4
	ctx.lr = 0x825AEA90;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2ca8
	ctx.lr = 0x825AEA98;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r27,28(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lfs f30,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f30.f64 = double(temp.f32);
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x825b6f58
	ctx.lr = 0x825AEACC;
	sub_825B6F58(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r31,r11,22852
	r31.s64 = ctx.r11.s64 + 22852;
	// addi r30,r10,-7244
	r30.s64 = ctx.r10.s64 + -7244;
	// addi r29,r9,-8552
	r29.s64 = ctx.r9.s64 + -8552;
	// beq 0x825aeb04
	if (ctx.cr0.eq) goto loc_825AEB04;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15097
	ctx.r7.s64 = 15097;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AEB04;
	sub_824EA978(ctx, base);
loc_825AEB04:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f28,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f28.f64 = double(temp.f32);
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x825b6f58
	ctx.lr = 0x825AEB24;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825aeb44
	if (ctx.cr0.eq) goto loc_825AEB44;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15103
	ctx.r7.s64 = 15103;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AEB44;
	sub_824EA978(ctx, base);
loc_825AEB44:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f29,3720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	f29.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x825b6f58
	ctx.lr = 0x825AEB64;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825aeb84
	if (ctx.cr0.eq) goto loc_825AEB84;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15109
	ctx.r7.s64 = 15109;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AEB84;
	sub_824EA978(ctx, base);
loc_825AEB84:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,3788(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3788);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b6f58
	ctx.lr = 0x825AEBA0;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825aebc0
	if (ctx.cr0.eq) goto loc_825AEBC0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15115
	ctx.r7.s64 = 15115;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AEBC0;
	sub_824EA978(ctx, base);
loc_825AEBC0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f1,-6748(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6748);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b6f58
	ctx.lr = 0x825AEBDC;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825aebfc
	if (ctx.cr0.eq) goto loc_825AEBFC;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15121
	ctx.r7.s64 = 15121;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AEBFC;
	sub_824EA978(ctx, base);
loc_825AEBFC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f1,-6752(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6752);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b6f58
	ctx.lr = 0x825AEC18;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825aec38
	if (ctx.cr0.eq) goto loc_825AEC38;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15127
	ctx.r7.s64 = 15127;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AEC38;
	sub_824EA978(ctx, base);
loc_825AEC38:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f1,11208(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 11208);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b6f58
	ctx.lr = 0x825AEC54;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825aec74
	if (ctx.cr0.eq) goto loc_825AEC74;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15133
	ctx.r7.s64 = 15133;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AEC74;
	sub_824EA978(ctx, base);
loc_825AEC74:
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b6f58
	ctx.lr = 0x825AEC8C;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825aecac
	if (ctx.cr0.eq) goto loc_825AECAC;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15139
	ctx.r7.s64 = 15139;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AECAC;
	sub_824EA978(ctx, base);
loc_825AECAC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f1,3804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3804);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b6f58
	ctx.lr = 0x825AECC8;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825aece8
	if (ctx.cr0.eq) goto loc_825AECE8;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15145
	ctx.r7.s64 = 15145;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AECE8;
	sub_824EA978(ctx, base);
loc_825AECE8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f1,8300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8300);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b6f58
	ctx.lr = 0x825AED04;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825aed24
	if (ctx.cr0.eq) goto loc_825AED24;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15151
	ctx.r7.s64 = 15151;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AED24;
	sub_824EA978(ctx, base);
loc_825AED24:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f1,5912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5912);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b6f58
	ctx.lr = 0x825AED40;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825aed60
	if (ctx.cr0.eq) goto loc_825AED60;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15157
	ctx.r7.s64 = 15157;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AED60;
	sub_824EA978(ctx, base);
loc_825AED60:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f1,22428(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 22428);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b6f58
	ctx.lr = 0x825AED7C;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825aed9c
	if (ctx.cr0.eq) goto loc_825AED9C;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15163
	ctx.r7.s64 = 15163;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AED9C;
	sub_824EA978(ctx, base);
loc_825AED9C:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x825b6f58
	ctx.lr = 0x825AEDB4;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825aedd4
	if (ctx.cr0.eq) goto loc_825AEDD4;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15169
	ctx.r7.s64 = 15169;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AEDD4;
	sub_824EA978(ctx, base);
loc_825AEDD4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r5,3
	ctx.r5.s64 = 3;
	// lfs f1,3712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3712);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b6f58
	ctx.lr = 0x825AEDF0;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825aee10
	if (ctx.cr0.eq) goto loc_825AEE10;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15175
	ctx.r7.s64 = 15175;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AEE10;
	sub_824EA978(ctx, base);
loc_825AEE10:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r5,3
	ctx.r5.s64 = 3;
	// lfs f1,16236(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16236);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b6f58
	ctx.lr = 0x825AEE2C;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825aee4c
	if (ctx.cr0.eq) goto loc_825AEE4C;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15181
	ctx.r7.s64 = 15181;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AEE4C;
	sub_824EA978(ctx, base);
loc_825AEE4C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r5,3
	ctx.r5.s64 = 3;
	// lfs f1,3708(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3708);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b6f58
	ctx.lr = 0x825AEE68;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825aee88
	if (ctx.cr0.eq) goto loc_825AEE88;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15187
	ctx.r7.s64 = 15187;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AEE88;
	sub_824EA978(ctx, base);
loc_825AEE88:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r5,4
	ctx.r5.s64 = 4;
	// lfs f1,-6756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6756);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b6f58
	ctx.lr = 0x825AEEA4;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825aeec4
	if (ctx.cr0.eq) goto loc_825AEEC4;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15195
	ctx.r7.s64 = 15195;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AEEC4;
	sub_824EA978(ctx, base);
loc_825AEEC4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r5,4
	ctx.r5.s64 = 4;
	// lfs f1,-6760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6760);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b6f58
	ctx.lr = 0x825AEEE0;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825aef00
	if (ctx.cr0.eq) goto loc_825AEF00;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15203
	ctx.r7.s64 = 15203;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AEF00;
	sub_824EA978(ctx, base);
loc_825AEF00:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r5,4
	ctx.r5.s64 = 4;
	// lfs f1,-6764(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6764);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b6f58
	ctx.lr = 0x825AEF1C;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825aef3c
	if (ctx.cr0.eq) goto loc_825AEF3C;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15211
	ctx.r7.s64 = 15211;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AEF3C;
	sub_824EA978(ctx, base);
loc_825AEF3C:
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// bl 0x825b6f58
	ctx.lr = 0x825AEF54;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825aef74
	if (ctx.cr0.eq) goto loc_825AEF74;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15217
	ctx.r7.s64 = 15217;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AEF74;
	sub_824EA978(ctx, base);
loc_825AEF74:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r5,5
	ctx.r5.s64 = 5;
	// lfs f31,20332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20332);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x825b6f58
	ctx.lr = 0x825AEF94;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825aefb4
	if (ctx.cr0.eq) goto loc_825AEFB4;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15223
	ctx.r7.s64 = 15223;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AEFB4;
	sub_824EA978(ctx, base);
loc_825AEFB4:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x825b6f58
	ctx.lr = 0x825AEFCC;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825aefec
	if (ctx.cr0.eq) goto loc_825AEFEC;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15229
	ctx.r7.s64 = 15229;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AEFEC;
	sub_824EA978(ctx, base);
loc_825AEFEC:
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x825b6f58
	ctx.lr = 0x825AF004;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825af024
	if (ctx.cr0.eq) goto loc_825AF024;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15235
	ctx.r7.s64 = 15235;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AF024;
	sub_824EA978(ctx, base);
loc_825AF024:
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x825b6f58
	ctx.lr = 0x825AF03C;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825af05c
	if (ctx.cr0.eq) goto loc_825AF05C;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15241
	ctx.r7.s64 = 15241;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AF05C;
	sub_824EA978(ctx, base);
loc_825AF05C:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x825b6f58
	ctx.lr = 0x825AF074;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825af094
	if (ctx.cr0.eq) goto loc_825AF094;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15247
	ctx.r7.s64 = 15247;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AF094;
	sub_824EA978(ctx, base);
loc_825AF094:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r5,6
	ctx.r5.s64 = 6;
	// lfs f1,-6768(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6768);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b6f58
	ctx.lr = 0x825AF0B0;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825af0d0
	if (ctx.cr0.eq) goto loc_825AF0D0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15253
	ctx.r7.s64 = 15253;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AF0D0;
	sub_824EA978(ctx, base);
loc_825AF0D0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r5,6
	ctx.r5.s64 = 6;
	// lfs f1,20344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20344);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b6f58
	ctx.lr = 0x825AF0EC;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825af10c
	if (ctx.cr0.eq) goto loc_825AF10C;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15259
	ctx.r7.s64 = 15259;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AF10C;
	sub_824EA978(ctx, base);
loc_825AF10C:
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x825b6f58
	ctx.lr = 0x825AF124;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825af144
	if (ctx.cr0.eq) goto loc_825AF144;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15265
	ctx.r7.s64 = 15265;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AF144;
	sub_824EA978(ctx, base);
loc_825AF144:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r5,7
	ctx.r5.s64 = 7;
	// lfs f1,20328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20328);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b6f58
	ctx.lr = 0x825AF160;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825af180
	if (ctx.cr0.eq) goto loc_825AF180;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15271
	ctx.r7.s64 = 15271;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AF180;
	sub_824EA978(ctx, base);
loc_825AF180:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r5,7
	ctx.r5.s64 = 7;
	// lfs f1,-6772(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6772);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b6f58
	ctx.lr = 0x825AF19C;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825af1bc
	if (ctx.cr0.eq) goto loc_825AF1BC;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15277
	ctx.r7.s64 = 15277;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AF1BC;
	sub_824EA978(ctx, base);
loc_825AF1BC:
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x825b6f58
	ctx.lr = 0x825AF1D4;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825af1f4
	if (ctx.cr0.eq) goto loc_825AF1F4;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15283
	ctx.r7.s64 = 15283;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AF1F4;
	sub_824EA978(ctx, base);
loc_825AF1F4:
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x825b6f58
	ctx.lr = 0x825AF20C;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825af22c
	if (ctx.cr0.eq) goto loc_825AF22C;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15289
	ctx.r7.s64 = 15289;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AF22C;
	sub_824EA978(ctx, base);
loc_825AF22C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r5,8
	ctx.r5.s64 = 8;
	// lfs f1,-6776(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6776);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b6f58
	ctx.lr = 0x825AF248;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825af268
	if (ctx.cr0.eq) goto loc_825AF268;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15295
	ctx.r7.s64 = 15295;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AF268;
	sub_824EA978(ctx, base);
loc_825AF268:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r5,8
	ctx.r5.s64 = 8;
	// lfs f1,-6780(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6780);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b6f58
	ctx.lr = 0x825AF284;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825af2a4
	if (ctx.cr0.eq) goto loc_825AF2A4;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15301
	ctx.r7.s64 = 15301;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AF2A4;
	sub_824EA978(ctx, base);
loc_825AF2A4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r5,8
	ctx.r5.s64 = 8;
	// lfs f1,-6784(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6784);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b6f58
	ctx.lr = 0x825AF2C0;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825af2e0
	if (ctx.cr0.eq) goto loc_825AF2E0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15307
	ctx.r7.s64 = 15307;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AF2E0;
	sub_824EA978(ctx, base);
loc_825AF2E0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r5,8
	ctx.r5.s64 = 8;
	// lfs f1,-6788(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6788);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b6f58
	ctx.lr = 0x825AF2FC;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825af31c
	if (ctx.cr0.eq) goto loc_825AF31C;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15313
	ctx.r7.s64 = 15313;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AF31C;
	sub_824EA978(ctx, base);
loc_825AF31C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r5,9
	ctx.r5.s64 = 9;
	// lfs f1,-6792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6792);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b6f58
	ctx.lr = 0x825AF338;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825af358
	if (ctx.cr0.eq) goto loc_825AF358;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15319
	ctx.r7.s64 = 15319;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AF358;
	sub_824EA978(ctx, base);
loc_825AF358:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r5,9
	ctx.r5.s64 = 9;
	// lfs f1,-6796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6796);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b6f58
	ctx.lr = 0x825AF374;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825af394
	if (ctx.cr0.eq) goto loc_825AF394;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15325
	ctx.r7.s64 = 15325;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AF394;
	sub_824EA978(ctx, base);
loc_825AF394:
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r5,9
	ctx.r5.s64 = 9;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// bl 0x825b6f58
	ctx.lr = 0x825AF3AC;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825af3cc
	if (ctx.cr0.eq) goto loc_825AF3CC;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15331
	ctx.r7.s64 = 15331;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AF3CC;
	sub_824EA978(ctx, base);
loc_825AF3CC:
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r5,9
	ctx.r5.s64 = 9;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x825b6f58
	ctx.lr = 0x825AF3E4;
	sub_825B6F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825af404
	if (ctx.cr0.eq) goto loc_825AF404;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,15337
	ctx.r7.s64 = 15337;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AF404;
	sub_824EA978(ctx, base);
loc_825AF404:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2cf4
	ctx.lr = 0x825AF410;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825D54C0) {
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
	ctx.lr = 0x825D54C8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,22852
	r29.s64 = ctx.r11.s64 + 22852;
	// addi r28,r10,5624
	r28.s64 = ctx.r10.s64 + 5624;
	// bne cr6,0x825d5510
	if (!ctx.cr6.eq) goto loc_825D5510;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,23184
	ctx.r5.s64 = ctx.r11.s64 + 23184;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,3754
	ctx.r7.s64 = 3754;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D5510;
	sub_824EA978(ctx, base);
loc_825D5510:
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825D551C;
	sub_824F02C0(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x825d5538
	if (!ctx.cr6.eq) goto loc_825D5538;
	// li r4,166
	ctx.r4.s64 = 166;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a57a8
	ctx.lr = 0x825D5530;
	sub_825A57A8(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// b 0x825d5544
	goto loc_825D5544;
loc_825D5538:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
loc_825D5544:
	// li r4,170
	ctx.r4.s64 = 170;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825D5550;
	sub_824F02C0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x825d5574
	if (ctx.cr6.eq) goto loc_825D5574;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,6000
	ctx.r5.s64 = ctx.r11.s64 + 6000;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,3767
	ctx.r7.s64 = 3767;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D5574;
	sub_824EA978(ctx, base);
loc_825D5574:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d55b8
	if (ctx.cr6.eq) goto loc_825D55B8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x825d55b8
	if (ctx.cr6.eq) goto loc_825D55B8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825d1a98
	ctx.lr = 0x825D5590;
	sub_825D1A98(ctx, base);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5952
	ctx.r4.s64 = ctx.r10.s64 + 5952;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,26
	ctx.r6.s64 = 26;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,104(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// bctrl 
	ctx.lr = 0x825D55B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D55B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_825DE3A0) {
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
	// lwz r30,12(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,1488(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DE3D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x825d22c8
	ctx.lr = 0x825DE3EC;
	sub_825D22C8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x825de424
	if (ctx.cr6.eq) goto loc_825DE424;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x825de42c
	if (!ctx.cr6.eq) goto loc_825DE42C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,9792
	ctx.r6.s64 = ctx.r11.s64 + 9792;
	// addi r5,r10,19324
	ctx.r5.s64 = ctx.r10.s64 + 19324;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,1741
	ctx.r7.s64 = 1741;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DE420;
	sub_824EA978(ctx, base);
	// b 0x825de42c
	goto loc_825DE42C;
loc_825DE424:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dcb10
	ctx.lr = 0x825DE42C;
	sub_825DCB10(ctx, base);
loc_825DE42C:
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

DEFINE_REX_FUNC(sub_825E1918) {
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
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x825fa4d0
	ctx.lr = 0x825E1938;
	sub_825FA4D0(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x825e19a8
	if (ctx.cr6.eq) goto loc_825E19A8;
	// ble cr6,0x825e1954
	if (!ctx.cr6.gt) goto loc_825E1954;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// ble cr6,0x825e196c
	if (!ctx.cr6.gt) goto loc_825E196C;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// ble cr6,0x825e19a8
	if (!ctx.cr6.gt) goto loc_825E19A8;
loc_825E1954:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825E1958:
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
loc_825E196C:
	// lbz r11,125(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 125);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825e1954
	if (!ctx.cr0.eq) goto loc_825E1954;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,2736(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// lwz r11,2084(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2084);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825e199c
	if (!ctx.cr6.eq) goto loc_825E199C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e0348
	ctx.lr = 0x825E199C;
	sub_825E0348(ctx, base);
loc_825E199C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,125(r31)
	REX_STORE_U8(r31.u32 + 125, ctx.r11.u8);
	// b 0x825e19bc
	goto loc_825E19BC;
loc_825E19A8:
	// lbz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 124);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825e1954
	if (!ctx.cr0.eq) goto loc_825E1954;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,124(r31)
	REX_STORE_U8(r31.u32 + 124, ctx.r11.u8);
loc_825E19BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825e1958
	goto loc_825E1958;
}

DEFINE_REX_FUNC(sub_825E7538) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825E7540;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r5,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stw r4,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// lwz r4,24(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f79d0
	ctx.lr = 0x825E756C;
	sub_825F79D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825e7584
	if (!ctx.cr0.eq) goto loc_825E7584;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e6c50
	ctx.lr = 0x825E7584;
	sub_825E6C50(ctx, base);
loc_825E7584:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825EB1B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825EB1C0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,136(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// b 0x825eb234
	goto loc_825EB234;
loc_825EB1CC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825fd078
	ctx.lr = 0x825EB1D4;
	sub_825FD078(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825eb230
	if (ctx.cr0.eq) goto loc_825EB230;
	// li r29,0
	r29.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// li r30,1
	r30.s64 = 1;
loc_825EB1E8:
	// lwz r11,60(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 60);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825eb200
	if (!ctx.cr6.gt) goto loc_825EB200;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825eb20c
	goto loc_825EB20C;
loc_825EB200:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r29,r10,r31
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
loc_825EB20C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825eb230
	if (ctx.cr0.eq) goto loc_825EB230;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825fd060
	ctx.lr = 0x825EB21C;
	sub_825FD060(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825eb24c
	if (!ctx.cr0.eq) goto loc_825EB24C;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x825eb1e8
	goto loc_825EB1E8;
loc_825EB230:
	// lwz r28,8(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 8);
loc_825EB234:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825eb1cc
	if (!ctx.cr6.eq) goto loc_825EB1CC;
	// li r3,1
	ctx.r3.s64 = 1;
loc_825EB244:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_825EB24C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825eb244
	goto loc_825EB244;
}

DEFINE_REX_FUNC(sub_825F1630) {
	REX_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lbz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// stw r10,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// beq 0x825f1654
	if (ctx.cr0.eq) goto loc_825F1654;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825f1658
	goto loc_825F1658;
loc_825F1654:
	// lbz r11,28(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 28);
loc_825F1658:
	// lbz r10,21(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 21);
	// stb r11,-16(r1)
	REX_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825f1670
	if (ctx.cr0.eq) goto loc_825F1670;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825f1674
	goto loc_825F1674;
loc_825F1670:
	// lbz r11,29(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 29);
loc_825F1674:
	// lbz r10,22(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 22);
	// stb r11,-15(r1)
	REX_STORE_U8(ctx.r1.u32 + -15, ctx.r11.u8);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825f168c
	if (ctx.cr0.eq) goto loc_825F168C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825f1690
	goto loc_825F1690;
loc_825F168C:
	// lbz r11,30(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 30);
loc_825F1690:
	// lbz r10,23(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 23);
	// stb r11,-14(r1)
	REX_STORE_U8(ctx.r1.u32 + -14, ctx.r11.u8);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825f16a8
	if (ctx.cr0.eq) goto loc_825F16A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825f16ac
	goto loc_825F16AC;
loc_825F16A8:
	// lbz r11,31(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 31);
loc_825F16AC:
	// stb r11,-13(r1)
	REX_STORE_U8(ctx.r1.u32 + -13, ctx.r11.u8);
	// lwz r3,-16(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825F42B0) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c88
	ctx.lr = 0x825F42B8;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,1872(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1872);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// li r17,0
	r17.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825f4718
	if (ctx.cr0.eq) goto loc_825F4718;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r10,r1,95
	ctx.r10.s64 = ctx.r1.s64 + 95;
	// li r19,0
	r19.s64 = 0;
	// addi r8,r3,1040
	ctx.r8.s64 = ctx.r3.s64 + 1040;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_825F42EC:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x825f42ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825F42EC;
	// li r11,16
	ctx.r11.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_825F42FC:
	// lwz r11,-64(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -64);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// bne cr6,0x825f431c
	if (!ctx.cr6.eq) goto loc_825F431C;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r19.s32, ctx.xer);
	// ble cr6,0x825f431c
	if (!ctx.cr6.gt) goto loc_825F431C;
	// mr r19,r11
	r19.u64 = ctx.r11.u64;
loc_825F431C:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x825f42fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825F42FC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,18964
	r29.s64 = ctx.r11.s64 + 18964;
	// addi r21,r10,22852
	r21.s64 = ctx.r10.s64 + 22852;
	// addi r28,r9,18944
	r28.s64 = ctx.r9.s64 + 18944;
	// addi r20,r8,18176
	r20.s64 = ctx.r8.s64 + 18176;
loc_825F4348:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825f3b80
	ctx.lr = 0x825F4354;
	sub_825F3B80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825f4400
	if (ctx.cr0.eq) goto loc_825F4400;
	// addi r27,r1,96
	r27.s64 = ctx.r1.s64 + 96;
	// lbzx r11,r30,r27
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + r27.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825f4384
	if (ctx.cr0.eq) goto loc_825F4384;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,210
	ctx.r7.s64 = 210;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825F4384;
	sub_824EA978(ctx, base);
loc_825F4384:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825f3c30
	ctx.lr = 0x825F4390;
	sub_825F3C30(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x825f4400
	if (ctx.cr0.lt) goto loc_825F4400;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lbzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825f4500
	if (!ctx.cr0.eq) goto loc_825F4500;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(r31.s32, r30.s32, ctx.xer);
	// beq cr6,0x825f43f8
	if (ctx.cr6.eq) goto loc_825F43F8;
	// addi r11,r26,896
	ctx.r11.s64 = r26.s64 + 896;
	// lbzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825f43cc
	if (!ctx.cr0.eq) goto loc_825F43CC;
	// lbzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825f43e4
	if (ctx.cr0.eq) goto loc_825F43E4;
loc_825F43CC:
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,217
	ctx.r7.s64 = 217;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825F43E4;
	sub_824EA978(ctx, base);
loc_825F43E4:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825f3d88
	ctx.lr = 0x825F43F8;
	sub_825F3D88(ctx, base);
loc_825F43F8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stbx r11,r30,r27
	REX_STORE_U8(r30.u32 + r27.u32, ctx.r11.u8);
loc_825F4400:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(r30.s32, 16, ctx.xer);
	// blt cr6,0x825f4348
	if (ctx.cr6.lt) goto loc_825F4348;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r26,912
	r30.s64 = r26.s64 + 912;
	// subfic r28,r26,-880
	ctx.xer.ca = r26.u32 <= 4294966416;
	r28.u64 = static_cast<uint64_t>(-880) - r26.u64;
	// li r27,2
	r27.s64 = 2;
	// addi r25,r11,18932
	r25.s64 = ctx.r11.s64 + 18932;
	// addi r24,r10,18916
	r24.s64 = ctx.r10.s64 + 18916;
	// addi r23,r9,18840
	r23.s64 = ctx.r9.s64 + 18840;
	// addi r22,r8,18760
	r22.s64 = ctx.r8.s64 + 18760;
loc_825F443C:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lbzx r31,r29,r11
	r31.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne 0x825f447c
	if (!ctx.cr0.eq) goto loc_825F447C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825f447c
	if (ctx.cr6.eq) goto loc_825F447C;
	// lwz r3,56(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825f4474
	if (ctx.cr6.eq) goto loc_825F4474;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F4474;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825F4474:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_825F447C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825f3b80
	ctx.lr = 0x825F4488;
	sub_825F3B80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825f4704
	if (ctx.cr0.eq) goto loc_825F4704;
	// lwz r4,-912(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + -912);
	// cmpwi cr6,r4,18
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 18, ctx.xer);
	// beq cr6,0x825f44a0
	if (ctx.cr6.eq) goto loc_825F44A0;
	// mr r17,r29
	r17.u64 = r29.u64;
loc_825F44A0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825f4630
	if (!ctx.cr6.eq) goto loc_825F4630;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r8,r28,r30
	ctx.r8.u64 = r28.u64 + r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825F44BC:
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r26.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x825f4518
	if (!ctx.cr6.eq) goto loc_825F4518;
	// li r9,1
	ctx.r9.s64 = 1;
loc_825F44D4:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stbx r27,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, r27.u8);
loc_825F44DC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x825f44bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825F44BC;
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825f4704
	if (ctx.cr0.eq) goto loc_825F4704;
	// cmpwi cr6,r4,33
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 33, ctx.xer);
	// bne cr6,0x825f4534
	if (!ctx.cr6.eq) goto loc_825F4534;
	// mr r31,r19
	r31.u64 = r19.u64;
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// b 0x825f4538
	goto loc_825F4538;
loc_825F4500:
	// lwz r11,1876(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1876);
	// li r10,24
	ctx.r10.s64 = 24;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r10,1364(r11)
	REX_STORE_U32(ctx.r11.u32 + 1364, ctx.r10.u32);
	// bl 0x826a4440
	ctx.lr = 0x825F4518;
	ppc_longjmp(ctx.r3.u32, ctx.r4.s32);
loc_825F4518:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x825f44d4
	if (!ctx.cr6.eq) goto loc_825F44D4;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r9,1
	ctx.r9.s64 = 1;
	// stbx r7,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u8);
	// b 0x825f44dc
	goto loc_825F44DC;
loc_825F4534:
	// lwz r31,-848(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + -848);
loc_825F4538:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,172(r18)
	ctx.r3.u64 = REX_LOAD_U32(r18.u32 + 172);
	// bl 0x825e6c30
	ctx.lr = 0x825F4544;
	sub_825E6C30(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825f4564
	if (ctx.cr0.eq) goto loc_825F4564;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,282
	ctx.r7.s64 = 282;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825F4564;
	sub_824EA978(ctx, base);
loc_825F4564:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,172(r18)
	ctx.r3.u64 = REX_LOAD_U32(r18.u32 + 172);
	// lwz r4,-912(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + -912);
	// bl 0x825e6c50
	ctx.lr = 0x825F4574;
	sub_825E6C50(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// beq cr6,0x825f45d0
	if (ctx.cr6.eq) goto loc_825F45D0;
	// add r10,r29,r26
	ctx.r10.u64 = r29.u64 + r26.u64;
	// lbz r10,896(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 896);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825f45a4
	if (!ctx.cr0.eq) goto loc_825F45A4;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// lbz r11,896(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 896);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825f45bc
	if (ctx.cr0.eq) goto loc_825F45BC;
loc_825F45A4:
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,288
	ctx.r7.s64 = 288;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825F45BC;
	sub_824EA978(ctx, base);
loc_825F45BC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825f3d88
	ctx.lr = 0x825F45D0;
	sub_825F3D88(ctx, base);
loc_825F45D0:
	// lwz r11,1876(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1876);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r16,1452(r11)
	r16.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825F45E4;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r16,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r16.u32);
	// beq 0x825f460c
	if (ctx.cr0.eq) goto loc_825F460C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,1876(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 1876);
	// bl 0x825fad98
	ctx.lr = 0x825F4604;
	sub_825FAD98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x825f4610
	goto loc_825F4610;
loc_825F460C:
	// li r31,0
	r31.s64 = 0;
loc_825F4610:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,168(r18)
	ctx.r3.u64 = REX_LOAD_U32(r18.u32 + 168);
	// bl 0x825fcb18
	ctx.lr = 0x825F461C;
	sub_825FCB18(ctx, base);
	// lwz r3,96(r18)
	ctx.r3.u64 = REX_LOAD_U32(r18.u32 + 96);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825F4628;
	sub_825F7718(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// b 0x825f4704
	goto loc_825F4704;
loc_825F4630:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825f4654
	if (!ctx.cr6.eq) goto loc_825F4654;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,297
	ctx.r7.s64 = 297;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825F4654;
	sub_824EA978(ctx, base);
loc_825F4654:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r31,56(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825f467c
	if (!ctx.cr6.eq) goto loc_825F467C;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,301
	ctx.r7.s64 = 301;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825F467C;
	sub_824EA978(ctx, base);
loc_825F467C:
	// lwz r9,128(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 128);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
loc_825F4690:
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lbzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x825f46d0
	if (!ctx.cr6.eq) goto loc_825F46D0;
	// add r10,r28,r30
	ctx.r10.u64 = r28.u64 + r30.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r26.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x825f46f0
	if (ctx.cr6.eq) goto loc_825F46F0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stbx r10,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// b 0x825f46f4
	goto loc_825F46F4;
loc_825F46D0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825f46f4
	if (!ctx.cr6.eq) goto loc_825F46F4;
	// add r10,r28,r30
	ctx.r10.u64 = r28.u64 + r30.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r26.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825f46f4
	if (!ctx.cr6.eq) goto loc_825F46F4;
loc_825F46F0:
	// stbx r27,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, r27.u8);
loc_825F46F4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x825f4690
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825F4690;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
loc_825F4704:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(r29.s32, 16, ctx.xer);
	// blt cr6,0x825f443c
	if (ctx.cr6.lt) goto loc_825F443C;
	// b 0x825f4854
	goto loc_825F4854;
loc_825F4718:
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x825f47dc
	if (!ctx.cr6.lt) goto loc_825F47DC;
	// cmpwi cr6,r5,19
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 19, ctx.xer);
	// beq cr6,0x825f4730
	if (ctx.cr6.eq) goto loc_825F4730;
	// cmpwi cr6,r5,33
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 33, ctx.xer);
	// bne cr6,0x825f47dc
	if (!ctx.cr6.eq) goto loc_825F47DC;
loc_825F4730:
	// li r31,0
	r31.s64 = 0;
	// addi r11,r26,1040
	ctx.r11.s64 = r26.s64 + 1040;
loc_825F4738:
	// lwz r10,-64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -64);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x825f4758
	if (!ctx.cr6.eq) goto loc_825F4758;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x825f4758
	if (ctx.cr6.lt) goto loc_825F4758;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x825f476c
	if (ctx.cr6.lt) goto loc_825F476C;
loc_825F4758:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(r31.s32, 16, ctx.xer);
	// blt cr6,0x825f4738
	if (ctx.cr6.lt) goto loc_825F4738;
	// b 0x825f47dc
	goto loc_825F47DC;
loc_825F476C:
	// addi r11,r31,260
	ctx.r11.s64 = r31.s64 + 260;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// subf r30,r6,r11
	r30.u64 = ctx.r11.u64 - ctx.r6.u64;
	// add r29,r30,r26
	r29.u64 = r30.u64 + r26.u64;
	// lbz r11,896(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 896);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825f479c
	if (!ctx.cr0.eq) goto loc_825F479C;
	// add r11,r31,r26
	ctx.r11.u64 = r31.u64 + r26.u64;
	// lbz r11,896(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 896);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825f47c0
	if (ctx.cr0.eq) goto loc_825F47C0;
loc_825F479C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,18176
	ctx.r6.s64 = ctx.r11.s64 + 18176;
	// addi r5,r10,18700
	ctx.r5.s64 = ctx.r10.s64 + 18700;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,336
	ctx.r7.s64 = 336;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825F47C0;
	sub_824EA978(ctx, base);
loc_825F47C0:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825f3d88
	ctx.lr = 0x825F47D4;
	sub_825F3D88(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,896(r29)
	REX_STORE_U8(r29.u32 + 896, ctx.r11.u8);
loc_825F47DC:
	// li r31,0
	r31.s64 = 0;
	// addi r29,r26,976
	r29.s64 = r26.s64 + 976;
loc_825F47E4:
	// addi r30,r31,1
	r30.s64 = r31.s64 + 1;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(r30.s32, 16, ctx.xer);
	// bge cr6,0x825f4828
	if (!ctx.cr6.lt) goto loc_825F4828;
loc_825F47F4:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825f37a8
	ctx.lr = 0x825F4804;
	sub_825F37A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x825f481c
	if (!ctx.cr0.lt) goto loc_825F481C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825f3d88
	ctx.lr = 0x825F481C;
	sub_825F3D88(ctx, base);
loc_825F481C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpwi cr6,r6,16
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16, ctx.xer);
	// blt cr6,0x825f47f4
	if (ctx.cr6.lt) goto loc_825F47F4;
loc_825F4828:
	// lwz r11,-64(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825f4844
	if (ctx.cr6.eq) goto loc_825F4844;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x825f4844
	if (ctx.cr6.eq) goto loc_825F4844;
	// mr r17,r31
	r17.u64 = r31.u64;
loc_825F4844:
	// mr r31,r30
	r31.u64 = r30.u64;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(r30.s32, 15, ctx.xer);
	// blt cr6,0x825f47e4
	if (ctx.cr6.lt) goto loc_825F47E4;
loc_825F4854:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_826149B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826149C0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8260e7b8
	ctx.lr = 0x826149DC;
	sub_8260E7B8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x826149f4
	if (ctx.cr6.eq) goto loc_826149F4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,-140
	ctx.r3.s64 = r31.s64 + -140;
	// bl 0x82613eb8
	ctx.lr = 0x826149F4;
	sub_82613EB8(ctx, base);
loc_826149F4:
	// addi r3,r31,-140
	ctx.r3.s64 = r31.s64 + -140;
	// bl 0x826148a8
	ctx.lr = 0x826149FC;
	sub_826148A8(ctx, base);
	// lwz r3,332(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 332);
	// bl 0x826110e0
	ctx.lr = 0x82614A04;
	sub_826110E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82615FB0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x8261bbe8
	sub_8261BBE8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82616008) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82615fa8
	sub_82615FA8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82616350) {
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
	// addi r31,r3,36
	r31.s64 = ctx.r3.s64 + 36;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827938a4
	ctx.lr = 0x82616374;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,32(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 32);
	// bl 0x82793e24
	ctx.lr = 0x82616384;
	__imp__KeSetEvent(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827938b4
	ctx.lr = 0x8261638C;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

DEFINE_REX_FUNC(sub_82617FF8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-36
	ctx.r3.s64 = ctx.r3.s64 + -36;
	// b 0x82617e00
	sub_82617E00(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82618580) {
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
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-12400
	ctx.r4.s64 = ctx.r11.s64 + -12400;
	// bl 0x8262b390
	ctx.lr = 0x826185A0;
	sub_8262B390(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-13960
	ctx.r10.s64 = ctx.r10.s64 + -13960;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// lis r9,-32120
	ctx.r9.s64 = -2105016320;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// addi r3,r9,20576
	ctx.r3.s64 = ctx.r9.s64 + 20576;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// bl 0x8260b4a0
	ctx.lr = 0x826185C8;
	sub_8260B4A0(ctx, base);
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

DEFINE_REX_FUNC(sub_8261B718) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// ori r10,r10,14
	ctx.r10.u64 = ctx.r10.u64 | 14;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r10,r10,16385
	ctx.r10.u64 = ctx.r10.u64 | 16385;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// srawi r10,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 16;
	// clrlwi r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
	// cmpwi cr6,r10,2198
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2198, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-30600
	ctx.r10.s64 = -2005401600;
	// ori r10,r10,120
	ctx.r10.u64 = ctx.r10.u64 | 120;
	// subf. r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8261b798
	if (ctx.cr0.eq) goto loc_8261B798;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x8261b798
	if (ctx.cr6.eq) goto loc_8261B798;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// ori r10,r10,65417
	ctx.r10.u64 = ctx.r10.u64 | 65417;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8261b798
	if (ctx.cr6.eq) goto loc_8261B798;
	// lis r10,30
	ctx.r10.s64 = 1966080;
	// ori r10,r10,65417
	ctx.r10.u64 = ctx.r10.u64 | 65417;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-30570
	ctx.r11.s64 = -2003435520;
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// b 0x8261b7a0
	goto loc_8261B7A0;
loc_8261B798:
	// lis r11,-30570
	ctx.r11.s64 = -2003435520;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_8261B7A0:
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826236A8) {
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
	ctx.lr = 0x826236B0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// mr r19,r10
	r19.u64 = ctx.r10.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8262393c
	if (ctx.cr6.eq) goto loc_8262393C;
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8262393c
	if (ctx.cr6.eq) goto loc_8262393C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8262393c
	if (ctx.cr6.eq) goto loc_8262393C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82623708
	if (ctx.cr6.eq) goto loc_82623708;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8262393c
	if (ctx.cr6.eq) goto loc_8262393C;
loc_82623708:
	// lwz r10,692(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 692);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82623720
	if (ctx.cr6.eq) goto loc_82623720;
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x8262394c
	goto loc_8262394C;
loc_82623720:
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r22,700(r31)
	r22.u64 = REX_LOAD_U32(r31.u32 + 700);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r4,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r4.u16);
	// beq cr6,0x82623754
	if (ctx.cr6.eq) goto loc_82623754;
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82623750
	if (ctx.cr6.eq) goto loc_82623750;
	// stw r10,412(r31)
	REX_STORE_U32(r31.u32 + 412, ctx.r10.u32);
	// b 0x82623754
	goto loc_82623754;
loc_82623750:
	// stw r26,412(r31)
	REX_STORE_U32(r31.u32 + 412, r26.u32);
loc_82623754:
	// lwz r9,416(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 416);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82623764
	if (ctx.cr6.eq) goto loc_82623764;
	// stw r10,412(r31)
	REX_STORE_U32(r31.u32 + 412, ctx.r10.u32);
loc_82623764:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82623778
	if (ctx.cr6.eq) goto loc_82623778;
	// lhz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 24);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x8262377c
	goto loc_8262377C;
loc_82623778:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_8262377C:
	// lwz r30,192(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 192);
	// extsh r25,r11
	r25.s64 = ctx.r11.s16;
	// stw r26,692(r31)
	REX_STORE_U32(r31.u32 + 692, r26.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r11,34(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 34);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x826a2e60
	ctx.lr = 0x8262379C;
	sub_826A2E60(ctx, base);
	// lhz r8,34(r29)
	ctx.r8.u64 = REX_LOAD_U16(r29.u32 + 34);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x826237e0
	if (!ctx.cr6.gt) goto loc_826237E0;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// rlwinm r9,r26,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
loc_826237B4:
	// lwz r10,88(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 88);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + r27.u64;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// stwx r7,r9,r30
	REX_STORE_U32(ctx.r9.u32 + r30.u32, ctx.r7.u32);
	// lhz r8,34(r29)
	ctx.r8.u64 = REX_LOAD_U16(r29.u32 + 34);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x826237b4
	if (ctx.cr6.lt) goto loc_826237B4;
loc_826237E0:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8262380c
	if (ctx.cr6.eq) goto loc_8262380C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8262380c
	if (ctx.cr6.eq) goto loc_8262380C;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8262380c
	if (ctx.cr6.eq) goto loc_8262380C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8262394c
	goto loc_8262394C;
loc_8262380C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,336(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 336);
	// lwz r7,452(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 452);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82623840
	if (ctx.cr6.eq) goto loc_82623840;
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 328);
	// mr r28,r24
	r28.u64 = r24.u64;
	// lwz r9,332(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 332);
	// mullw r7,r11,r24
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(r24.s32);
	// divwu r11,r7,r9
	ctx.r11.u64 = uint32_t(ctx.r9.u32 ? ctx.r7.u32 / ctx.r9.u32 : 0);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82623840
	if (ctx.cr6.lt) goto loc_82623840;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_82623840:
	// lwz r11,424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 424);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8262385c
	if (!ctx.cr6.eq) goto loc_8262385C;
	// mullw r11,r10,r28
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// li r10,6
	ctx.r10.s64 = 6;
	// divwu r11,r11,r10
	ctx.r11.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// b 0x82623868
	goto loc_82623868;
loc_8262385C:
	// lwz r11,360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 360);
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// divwu r11,r10,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
loc_82623868:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82623874
	if (ctx.cr6.lt) goto loc_82623874;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_82623874:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r9,708(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 708);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82636e20
	ctx.lr = 0x82623890;
	sub_82636E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82623948
	if (ctx.cr6.lt) goto loc_82623948;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lhz r30,80(r1)
	r30.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82623500
	ctx.lr = 0x826238B4;
	sub_82623500(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82623948
	if (ctx.cr6.lt) goto loc_82623948;
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x826238e0
	if (ctx.cr6.eq) goto loc_826238E0;
	// lwz r10,368(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 368);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r8,360(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 360);
	// mullw r7,r10,r8
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// mullw r6,r7,r9
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// stw r6,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r6.u32);
loc_826238E0:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82623908
	if (ctx.cr6.eq) goto loc_82623908;
	// lis r10,152
	ctx.r10.s64 = 9961472;
	// ld r9,184(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 184);
	// lwz r8,336(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 336);
	// ori r7,r10,38528
	ctx.r7.u64 = ctx.r10.u64 | 38528;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// mulld r5,r9,r7
	ctx.r5.s64 = static_cast<int64_t>(ctx.r9.u64 * ctx.r7.u64);
	// divd r4,r5,r6
	ctx.r4.s64 = (ctx.r6.s64 && !(ctx.r5.s64 == INT64_MIN && ctx.r6.s64 == -1)) ? ctx.r5.s64 / ctx.r6.s64 : 0;
	// std r4,0(r21)
	REX_STORE_U64(r21.u32 + 0, ctx.r4.u64);
loc_82623908:
	// clrlwi r8,r30,16
	ctx.r8.u64 = r30.u32 & 0xFFFF;
	// ld r9,184(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 184);
	// clrldi r10,r11,48
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFF;
	// subf r7,r8,r22
	ctx.r7.u64 = r22.u64 - ctx.r8.u64;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subfic r5,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r5.u64 = static_cast<uint64_t>(0) - ctx.r7.u64;
	// stw r7,700(r31)
	REX_STORE_U32(r31.u32 + 700, ctx.r7.u32);
	// std r6,184(r31)
	REX_STORE_U64(r31.u32 + 184, ctx.r6.u64);
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r10,692(r31)
	REX_STORE_U32(r31.u32 + 692, ctx.r10.u32);
	// b 0x8262394c
	goto loc_8262394C;
loc_8262393C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x8262394c
	goto loc_8262394C;
loc_82623948:
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
loc_8262394C:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8262395c
	if (ctx.cr6.eq) goto loc_8262395C;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r11,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r11.u32);
loc_8262395C:
	// lwz r11,704(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82623998
	if (ctx.cr6.eq) goto loc_82623998;
	// lwz r11,696(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82623998
	if (ctx.cr6.eq) goto loc_82623998;
	// lwz r11,692(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 692);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82623998
	if (!ctx.cr6.eq) goto loc_82623998;
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,692(r31)
	REX_STORE_U32(r31.u32 + 692, ctx.r8.u32);
loc_82623998:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x826239a8
	if (ctx.cr6.eq) goto loc_826239A8;
	// lwz r11,692(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 692);
	// stw r11,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r11.u32);
loc_826239A8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_826388D8) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r10,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r7,212(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 212);
	// stw r7,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r7.u32);
	// stw r9,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r6,704(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 704);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82638958
	if (ctx.cr6.eq) goto loc_82638958;
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
loc_82638958:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r10,r11,3720
	ctx.r10.s64 = ctx.r11.s64 + 3720;
	// stw r10,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8263C658) {
	REX_FUNC_PROLOGUE();
	// lwz r9,52(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// addic. r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// ble 0x8263c6cc
	if (!ctx.cr0.gt) goto loc_8263C6CC;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lfd f0,14880(r6)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r6.u32 + 14880);
loc_8263C67C:
	// lfd f13,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r6,-12(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8263c6b4
	if (ctx.cr6.lt) goto loc_8263C6B4;
	// lfd f13,24(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r5,-12(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x8263c6d4
	if (!ctx.cr6.gt) goto loc_8263C6D4;
loc_8263C6B4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// addi r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 + 24;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8263c67c
	if (ctx.cr6.lt) goto loc_8263C67C;
loc_8263C6CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8263C6D4:
	// lfd f13,0(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// lfd f11,0(r9)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// subf r10,r6,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r6.u64;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// lfd f0,14872(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 14872);
	// fmul f10,f11,f0
	ctx.f10.f64 = ctx.f11.f64 * ctx.f0.f64;
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lwz r8,-12(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// mulld r6,r7,r9
	ctx.r6.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r9.u64);
	// fctiwz f8,f10
	ctx.f8.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lwz r5,-12(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// sradi r4,r6,20
	ctx.xer.ca = (ctx.r6.s64 < 0) & ((ctx.r6.u64 & 0xFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s64 >> 20;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// subf r3,r5,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r5.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82641D88) {
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
	// lwz r3,132(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lwz r4,128(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 128);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82641DCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,2184
	ctx.r11.s64 = 143130624;
	// ori r11,r11,1638
	ctx.r11.u64 = ctx.r11.u64 | 1638;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82641de8
	if (!ctx.cr6.eq) goto loc_82641DE8;
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r11.u32);
loc_82641DE8:
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

DEFINE_REX_FUNC(sub_826430B0) {
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
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r7,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r7.u32);
	// bl 0x82642b50
	ctx.lr = 0x826430CC;
	sub_82642B50(ctx, base);
	// stw r7,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r7.u32);
	// lwz r3,264(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826430ec
	if (ctx.cr6.eq) goto loc_826430EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826430EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826430EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82643F38) {
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
	ctx.lr = 0x82643F40;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82643f60
	if (ctx.cr6.eq) goto loc_82643F60;
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82643f64
	goto loc_82643F64;
loc_82643F60:
	// mr r28,r27
	r28.u64 = r27.u64;
loc_82643F64:
	// lwz r11,44(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 44);
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r10,52(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 52);
	// lwz r9,252(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 252);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lhz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// divwu r4,r10,r11
	ctx.r4.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// beq cr6,0x82643fa8
	if (ctx.cr6.eq) goto loc_82643FA8;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82643FA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82643FA8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82643fd0
	if (ctx.cr6.eq) goto loc_82643FD0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82643FCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82643FD0:
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82643ff4
	if (ctx.cr6.eq) goto loc_82643FF4;
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82643ff4
	if (!ctx.cr6.eq) goto loc_82643FF4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82642bc8
	ctx.lr = 0x82643FF4;
	sub_82642BC8(ctx, base);
loc_82643FF4:
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264400C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8264405c
	if (ctx.cr0.eq) goto loc_8264405C;
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8264405c
	if (!ctx.cr6.eq) goto loc_8264405C;
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82644038
	if (!ctx.cr6.eq) goto loc_82644038;
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264405c
	if (ctx.cr6.eq) goto loc_8264405C;
loc_82644038:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lhz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// mullw r4,r11,r30
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// bl 0x82643d48
	ctx.lr = 0x8264404C;
	sub_82643D48(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x82644064
	goto loc_82644064;
loc_8264405C:
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
loc_82644064:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r28,r28,56
	r28.s64 = r28.s64 + 56;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264409c
	if (ctx.cr6.eq) goto loc_8264409C;
	// lwz r10,252(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 252);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8264409c
	if (ctx.cr6.eq) goto loc_8264409C;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
	// stw r29,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// lwz r10,544(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 544);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// b 0x826440b0
	goto loc_826440B0;
loc_8264409C:
	// lwz r10,252(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 252);
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826440b0
	if (!ctx.cr6.eq) goto loc_826440B0;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_826440B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826440e0
	if (ctx.cr6.eq) goto loc_826440E0;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r8,96(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826440E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826440E0:
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 252);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82644114
	if (ctx.cr6.eq) goto loc_82644114;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r8,260(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82644114;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82644114:
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82644134
	if (ctx.cr6.eq) goto loc_82644134;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82644134;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82644134:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8264F740) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8264f6f0
	ctx.lr = 0x8264F75C;
	sub_8264F6F0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264f800
	if (ctx.cr0.lt) goto loc_8264F800;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8264f7f0
	if (ctx.cr6.eq) goto loc_8264F7F0;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8264f7e0
	if (ctx.cr6.eq) goto loc_8264F7E0;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8264f7c8
	if (ctx.cr6.eq) goto loc_8264F7C8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8264f7b8
	if (ctx.cr6.eq) goto loc_8264F7B8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x8264f79c
	if (ctx.cr6.eq) goto loc_8264F79C;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,13
	r31.u64 = r31.u64 | 13;
	// b 0x8264f800
	goto loc_8264F800;
loc_8264F79C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwbrx r11,0,r11
	ctx.r11.u64 = __builtin_bswap32(REX_LOAD_U32(ctx.r11.u32));
	// lwbrx r10,0,r10
	ctx.r10.u64 = __builtin_bswap32(REX_LOAD_U32(ctx.r10.u32));
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// b 0x8264f800
	goto loc_8264F800;
loc_8264F7B8:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwbrx r11,0,r11
	ctx.r11.u64 = __builtin_bswap32(REX_LOAD_U32(ctx.r11.u32));
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// b 0x8264f800
	goto loc_8264F800;
loc_8264F7C8:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// sth r10,0(r7)
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r10.u16);
	// b 0x8264f800
	goto loc_8264F800;
loc_8264F7E0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// b 0x8264f800
	goto loc_8264F800;
loc_8264F7F0:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x826a1e70
	ctx.lr = 0x8264F800;
	sub_826A1E70(ctx, base);
loc_8264F800:
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

DEFINE_REX_FUNC(sub_82655788) {
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
	// lwz r11,740(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 740);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826557b4
	if (!ctx.cr0.eq) goto loc_826557B4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1314
	ctx.r3.u64 = ctx.r3.u64 | 1314;
	// b 0x82655800
	goto loc_82655800;
loc_826557B4:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x826557cc
	if (ctx.cr6.eq) goto loc_826557CC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1609
	ctx.r3.u64 = ctx.r3.u64 | 1609;
	// b 0x82655800
	goto loc_82655800;
loc_826557CC:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826557f4
	if (ctx.cr6.eq) goto loc_826557F4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,95
	ctx.r4.s64 = 95;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82654278
	ctx.lr = 0x826557EC;
	sub_82654278(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82655800
	if (ctx.cr0.lt) goto loc_82655800;
loc_826557F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82655560
	ctx.lr = 0x826557FC;
	sub_82655560(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82655800:
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

DEFINE_REX_FUNC(sub_8265A150) {
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
	ctx.lr = 0x8265A158;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8265a458
	if (ctx.cr6.eq) goto loc_8265A458;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// beq cr6,0x8265a458
	if (ctx.cr6.eq) goto loc_8265A458;
	// cmpwi cr6,r7,9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 9, ctx.xer);
	// beq cr6,0x8265a43c
	if (ctx.cr6.eq) goto loc_8265A43C;
	// lwz r11,740(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 740);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// stw r11,740(r3)
	REX_STORE_U32(ctx.r3.u32 + 740, ctx.r11.u32);
	// bne cr6,0x8265a1a8
	if (!ctx.cr6.eq) goto loc_8265A1A8;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8265a1a8
	if (ctx.cr0.eq) goto loc_8265A1A8;
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// stw r11,740(r3)
	REX_STORE_U32(ctx.r3.u32 + 740, ctx.r11.u32);
loc_8265A1A8:
	// cmpwi cr6,r7,7
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 7, ctx.xer);
	// beq cr6,0x8265a458
	if (ctx.cr6.eq) goto loc_8265A458;
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// bne cr6,0x8265a1dc
	if (!ctx.cr6.eq) goto loc_8265A1DC;
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// addi r10,r10,-27872
	ctx.r10.s64 = ctx.r10.s64 + -27872;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8265a27c
	if (!ctx.cr6.eq) goto loc_8265A27C;
loc_8265A1D0:
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8265a43c
	if (!ctx.cr0.eq) goto loc_8265A43C;
loc_8265A1DC:
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r7,6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 6, ctx.xer);
	// bne cr6,0x8265a248
	if (!ctx.cr6.eq) goto loc_8265A248;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265a248
	if (ctx.cr6.eq) goto loc_8265A248;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8265a290
	if (!ctx.cr6.eq) goto loc_8265A290;
	// li r11,4
	ctx.r11.s64 = 4;
	// lbz r9,171(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 171);
	// lbz r10,170(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 170);
	// addi r8,r31,380
	ctx.r8.s64 = r31.s64 + 380;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8265A218:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265a228
	if (ctx.cr6.eq) goto loc_8265A228;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8265A228:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x8265a218
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265A218;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8265a290
	if (ctx.cr6.eq) goto loc_8265A290;
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8265a290
	if (!ctx.cr0.eq) goto loc_8265A290;
	// li r28,1
	r28.s64 = 1;
loc_8265A248:
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bne cr6,0x8265a2e8
	if (!ctx.cr6.eq) goto loc_8265A2E8;
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265a2e8
	if (ctx.cr0.eq) goto loc_8265A2E8;
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265a2e8
	if (ctx.cr6.eq) goto loc_8265A2E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r29,r31,248
	r29.s64 = r31.s64 + 248;
	// stw r11,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r11.u32);
	// lwz r11,248(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 248);
	// b 0x8265a2cc
	goto loc_8265A2CC;
loc_8265A27C:
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// addi r10,r10,24696
	ctx.r10.s64 = ctx.r10.s64 + 24696;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8265a43c
	if (!ctx.cr6.eq) goto loc_8265A43C;
	// b 0x8265a1d0
	goto loc_8265A1D0;
loc_8265A290:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82659f28
	ctx.lr = 0x8265A29C;
	sub_82659F28(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8265a434
	if (ctx.cr0.lt) goto loc_8265A434;
	// b 0x8265a458
	goto loc_8265A458;
loc_8265A2A8:
	// lwz r11,304(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 304);
	// addi r4,r30,-92
	ctx.r4.s64 = r30.s64 + -92;
	// rlwinm. r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8265a2c8
	if (!ctx.cr0.eq) goto loc_8265A2C8;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8265a2c8
	if (!ctx.cr0.eq) goto loc_8265A2C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826592b0
	ctx.lr = 0x8265A2C8;
	sub_826592B0(ctx, base);
loc_8265A2C8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_8265A2CC:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x8265a2e0
	if (ctx.cr6.eq) goto loc_8265A2E0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// bne 0x8265a2a8
	if (!ctx.cr0.eq) goto loc_8265A2A8;
loc_8265A2E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r11.u32);
loc_8265A2E8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82650370
	ctx.lr = 0x8265A2F4;
	sub_82650370(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// li r4,0
	ctx.r4.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// rlwinm r27,r11,27,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// rlwinm r11,r11,0,24,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
	// bl 0x826a2e60
	ctx.lr = 0x8265A320;
	sub_826A2E60(ctx, base);
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// rlwinm r11,r11,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
	// blt cr6,0x8265a350
	if (ctx.cr6.lt) goto loc_8265A350;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8265a348
	if (ctx.cr6.eq) goto loc_8265A348;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8265a350
	if (!ctx.cr6.eq) goto loc_8265A350;
loc_8265A348:
	// lis r26,-32761
	r26.s64 = -2147024896;
	// ori r26,r26,1235
	r26.u64 = r26.u64 | 1235;
loc_8265A350:
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r26,24(r31)
	REX_STORE_U32(r31.u32 + 24, r26.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265A37C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x8265a3dc
	if (ctx.cr6.eq) goto loc_8265A3DC;
	// lwz r11,248(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 248);
	// addi r28,r31,248
	r28.s64 = r31.s64 + 248;
	// b 0x8265a3c8
	goto loc_8265A3C8;
loc_8265A390:
	// lwz r11,304(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 304);
	// addi r30,r29,-92
	r30.s64 = r29.s64 + -92;
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265a3c4
	if (ctx.cr0.eq) goto loc_8265A3C4;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265A3B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,396(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 396);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,396(r30)
	REX_STORE_U32(r30.u32 + 396, ctx.r11.u32);
loc_8265A3C4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_8265A3C8:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// beq cr6,0x8265a3dc
	if (ctx.cr6.eq) goto loc_8265A3DC;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// bne 0x8265a390
	if (!ctx.cr0.eq) goto loc_8265A390;
loc_8265A3DC:
	// lwz r11,400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 400);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265a414
	if (ctx.cr6.eq) goto loc_8265A414;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82654550
	ctx.lr = 0x8265A3F8;
	sub_82654550(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8265a434
	if (ctx.cr0.lt) goto loc_8265A434;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826537e0
	ctx.lr = 0x8265A410;
	sub_826537E0(ctx, base);
	// b 0x8265a45c
	goto loc_8265A45C;
loc_8265A414:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x826537e0
	ctx.lr = 0x8265A420;
	sub_826537E0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82659660
	ctx.lr = 0x8265A42C;
	sub_82659660(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x8265a45c
	if (!ctx.cr0.lt) goto loc_8265A45C;
loc_8265A434:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x8265a45c
	if (ctx.cr6.eq) goto loc_8265A45C;
loc_8265A43C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt cr6,0x8265a44c
	if (ctx.cr6.lt) goto loc_8265A44C;
	// lis r26,-32761
	r26.s64 = -2147024896;
	// ori r26,r26,1235
	r26.u64 = r26.u64 | 1235;
loc_8265A44C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82654f40
	ctx.lr = 0x8265A458;
	sub_82654F40(ctx, base);
loc_8265A458:
	// li r30,0
	r30.s64 = 0;
loc_8265A45C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8266C8D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8266C8D8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,56(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,292(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 292);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266c924
	if (ctx.cr0.eq) goto loc_8266C924;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826652d0
	ctx.lr = 0x8266C8FC;
	sub_826652D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826708d8
	ctx.lr = 0x8266C908;
	sub_826708D8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,65(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 65);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8266bfc8
	ctx.lr = 0x8266C91C;
	sub_8266BFC8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x8266c938
	if (!ctx.cr0.eq) goto loc_8266C938;
loc_8266C924:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826748e8
	ctx.lr = 0x8266C934;
	sub_826748E8(ctx, base);
	// b 0x8266c948
	goto loc_8266C948;
loc_8266C938:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826748e8
	ctx.lr = 0x8266C944;
	sub_826748E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C948:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82670618) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-10804
	ctx.r11.s64 = ctx.r11.s64 + -10804;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x826704e8
	sub_826704E8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82670954) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82670B40) {
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
	// lwz r4,88(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82670b98
	if (ctx.cr6.eq) goto loc_82670B98;
loc_82670B68:
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
	// bne 0x82670b68
	if (!ctx.cr0.eq) goto loc_82670B68;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82670b94
	if (!ctx.cr6.eq) goto loc_82670B94;
	// lwz r3,4(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8265d850
	ctx.lr = 0x82670B94;
	sub_8265D850(ctx, base);
loc_82670B94:
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
loc_82670B98:
	// lwz r4,92(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82670bd4
	if (ctx.cr6.eq) goto loc_82670BD4;
loc_82670BA4:
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
	// bne 0x82670ba4
	if (!ctx.cr0.eq) goto loc_82670BA4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82670bd0
	if (!ctx.cr6.eq) goto loc_82670BD0;
	// lwz r3,4(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8265d850
	ctx.lr = 0x82670BD0;
	sub_8265D850(ctx, base);
loc_82670BD0:
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
loc_82670BD4:
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82130e88
	ctx.lr = 0x82670BE0;
	sub_82130E88(ctx, base);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82670648
	ctx.lr = 0x82670BE8;
	sub_82670648(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = r31.s64 + 212;
	// bl 0x82670648
	ctx.lr = 0x82670BF0;
	sub_82670648(ctx, base);
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
	// bl 0x82670648
	ctx.lr = 0x82670BF8;
	sub_82670648(ctx, base);
	// addi r3,r31,188
	ctx.r3.s64 = r31.s64 + 188;
	// bl 0x82670648
	ctx.lr = 0x82670C00;
	sub_82670648(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82130e88
	ctx.lr = 0x82670C08;
	sub_82130E88(ctx, base);
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

DEFINE_REX_FUNC(sub_82675BB0) {
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
	ctx.lr = 0x82675BB8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82675c34
	if (ctx.cr6.eq) goto loc_82675C34;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82675BE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82675c1c
	if (ctx.cr6.lt) goto loc_82675C1C;
	// beq cr6,0x82675c00
	if (ctx.cr6.eq) goto loc_82675C00;
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4105
	ctx.r3.u64 = ctx.r3.u64 | 4105;
	// b 0x82675c44
	goto loc_82675C44;
loc_82675C00:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267e448
	ctx.lr = 0x82675C18;
	sub_8267E448(ctx, base);
	// b 0x82675c44
	goto loc_82675C44;
loc_82675C1C:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82677a40
	ctx.lr = 0x82675C30;
	sub_82677A40(ctx, base);
	// b 0x82675c44
	goto loc_82675C44;
loc_82675C34:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82680148
	ctx.lr = 0x82675C44;
	sub_82680148(ctx, base);
loc_82675C44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826777A0) {
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
	// lwz r11,448(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,448(r3)
	REX_STORE_U32(ctx.r3.u32 + 448, ctx.r11.u32);
	// bl 0x826776e8
	ctx.lr = 0x826777C8;
	sub_826776E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82677880
	if (ctx.cr0.eq) goto loc_82677880;
	// addi r30,r31,364
	r30.s64 = r31.s64 + 364;
loc_826777D4:
	// lwz r11,388(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 388);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lwz r3,280(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 280);
	// addi r8,r11,40
	ctx.r8.s64 = ctx.r11.s64 + 40;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x8264cff8
	ctx.lr = 0x82677814;
	sub_8264CFF8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82677834
	if (!ctx.cr6.eq) goto loc_82677834;
	// bl 0x8264d050
	ctx.lr = 0x82677820;
	sub_8264D050(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82677854
	if (ctx.cr6.eq) goto loc_82677854;
	// bl 0x826610a8
	ctx.lr = 0x8267782C;
	sub_826610A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82677838
	goto loc_82677838;
loc_82677834:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82677838:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82676f20
	ctx.lr = 0x82677840;
	sub_82676F20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826776e8
	ctx.lr = 0x82677848;
	sub_826776E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826777d4
	if (!ctx.cr0.eq) goto loc_826777D4;
	// b 0x82677880
	goto loc_82677880;
loc_82677854:
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
loc_82677858:
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
	// bne 0x82677858
	if (!ctx.cr0.eq) goto loc_82677858;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,348
	ctx.r3.s64 = r31.s64 + 348;
	// bl 0x82681410
	ctx.lr = 0x82677880;
	sub_82681410(ctx, base);
loc_82677880:
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,448(r31)
	REX_STORE_U32(r31.u32 + 448, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8267CC88) {
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
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8267cd18
	if (ctx.cr6.eq) goto loc_8267CD18;
	// addi r10,r3,184
	ctx.r10.s64 = ctx.r3.s64 + 184;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8267ccc4
	if (!ctx.cr6.eq) goto loc_8267CCC4;
	// bl 0x8267a620
	ctx.lr = 0x8267CCC0;
	sub_8267A620(ctx, base);
	// b 0x8267cd18
	goto loc_8267CD18;
loc_8267CCC4:
	// addi r10,r31,244
	ctx.r10.s64 = r31.s64 + 244;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8267ccdc
	if (!ctx.cr6.eq) goto loc_8267CCDC;
	// lbz r11,1184(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1184);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// b 0x8267ccf0
	goto loc_8267CCF0;
loc_8267CCDC:
	// addi r10,r31,304
	ctx.r10.s64 = r31.s64 + 304;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8267ccf8
	if (!ctx.cr6.eq) goto loc_8267CCF8;
	// lbz r11,1184(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1184);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_8267CCF0:
	// stb r11,1184(r31)
	REX_STORE_U8(r31.u32 + 1184, ctx.r11.u8);
	// b 0x8267cd18
	goto loc_8267CD18;
loc_8267CCF8:
	// addi r10,r31,364
	ctx.r10.s64 = r31.s64 + 364;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8267cd10
	if (!ctx.cr6.eq) goto loc_8267CD10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267a818
	ctx.lr = 0x8267CD0C;
	sub_8267A818(ctx, base);
	// b 0x8267cd18
	goto loc_8267CD18;
loc_8267CD10:
	// addi r3,r11,-80
	ctx.r3.s64 = ctx.r11.s64 + -80;
	// bl 0x826852a0
	ctx.lr = 0x8267CD18;
	sub_826852A0(ctx, base);
loc_8267CD18:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267cae0
	ctx.lr = 0x8267CD20;
	sub_8267CAE0(ctx, base);
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

DEFINE_REX_FUNC(sub_82681330) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82681338;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lbz r9,2(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi r11,r11,22
	ctx.r11.u64 = ctx.r11.u32 & 0x3FF;
	// addi r4,r3,6
	ctx.r4.s64 = ctx.r3.s64 + 6;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// rlwinm r3,r11,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwinm. r5,r9,0,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stb r11,5(r30)
	REX_STORE_U8(r30.u32 + 5, ctx.r11.u8);
	// rlwimi r3,r10,2,24,29
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFC) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFF03);
	// stb r3,4(r30)
	REX_STORE_U8(r30.u32 + 4, ctx.r3.u8);
	// beq 0x82681388
	if (ctx.cr0.eq) goto loc_82681388;
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x8268137c
	goto loc_8268137C;
loc_82681378:
	// lbzu r11,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
loc_8268137C:
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82681378
	if (ctx.cr0.eq) goto loc_82681378;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_82681388:
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// subf r31,r30,r4
	r31.u64 = ctx.r4.u64 - r30.u64;
	// lhz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 4);
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826813b0
	if (!ctx.cr6.eq) goto loc_826813B0;
	// andi. r11,r9,247
	ctx.r11.u64 = ctx.r9.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,2(r30)
	REX_STORE_U8(r30.u32 + 2, ctx.r11.u8);
	// b 0x826813f4
	goto loc_826813F4;
loc_826813B0:
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r7.u32, ctx.xer);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// divw r11,r11,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r11.s32 / ctx.r9.s32 : 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// beq cr6,0x826813f4
	if (ctx.cr6.eq) goto loc_826813F4;
	// lbz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 2);
	// subf r5,r31,r7
	ctx.r5.u64 = ctx.r7.u64 - r31.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stb r11,2(r30)
	REX_STORE_U8(r30.u32 + 2, ctx.r11.u8);
	// bl 0x826867c0
	ctx.lr = 0x826813F0;
	sub_826867C0(ctx, base);
	// add r31,r3,r31
	r31.u64 = ctx.r3.u64 + r31.u64;
loc_826813F4:
	// add r11,r31,r29
	ctx.r11.u64 = r31.u64 + r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// sth r11,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82685AE8) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82685FF0) {
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
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// lwz r9,8(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// stw r11,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82686064
	if (ctx.cr6.eq) goto loc_82686064;
	// lwz r10,204(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// rlwinm. r10,r10,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8268604c
	if (!ctx.cr0.eq) goto loc_8268604C;
	// lhz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 76);
	// andi. r10,r10,65279
	ctx.r10.u64 = ctx.r10.u64 & 65279;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r10,76(r11)
	REX_STORE_U16(ctx.r11.u32 + 76, ctx.r10.u16);
loc_8268604C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// b 0x82686080
	goto loc_82686080;
loc_82686064:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82686074
	if (ctx.cr6.eq) goto loc_82686074;
	// bl 0x82685aa8
	ctx.lr = 0x82686070;
	sub_82685AA8(ctx, base);
	// b 0x82686080
	goto loc_82686080;
loc_82686074:
	// lwz r11,200(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,200(r3)
	REX_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
loc_82686080:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82676d18
	ctx.lr = 0x82686088;
	sub_82676D18(ctx, base);
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

DEFINE_REX_FUNC(sub_82689DD8) {
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
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82689DEC:
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
	// bne 0x82689dec
	if (!ctx.cr0.eq) goto loc_82689DEC;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82689e3c
	if (!ctx.cr6.eq) goto loc_82689E3C;
	// bl 0x82689c80
	ctx.lr = 0x82689E18;
	sub_82689C80(ctx, base);
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-6016
	ctx.r11.s64 = ctx.r11.s64 + -6016;
loc_82689E24:
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
	// stwcx. r8,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82689e24
	if (!ctx.cr0.eq) goto loc_82689E24;
loc_82689E3C:
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

DEFINE_REX_FUNC(sub_8268E9F0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bne cr6,0x8268ea04
	if (!ctx.cr6.eq) goto loc_8268EA04;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8268ea10
	goto loc_8268EA10;
loc_8268EA04:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
loc_8268EA10:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x8268eea0
	sub_8268EEA0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82691650) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82691658;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82691688
	if (!ctx.cr6.eq) goto loc_82691688;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_82691688:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826916c4
	if (ctx.cr6.eq) goto loc_826916C4;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,208(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// rlwinm. r10,r10,0,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826916c4
	if (ctx.cr0.eq) goto loc_826916C4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x827941c4
	ctx.lr = 0x826916C4;
	__imp__XamVoiceSubmitPacket(ctx, base);
loc_826916C4:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826916dc
	if (ctx.cr6.eq) goto loc_826916DC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x826916f0
	if (!ctx.cr6.lt) goto loc_826916F0;
loc_826916DC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_826916F0:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,116
	ctx.r11.s64 = r30.s64 + 116;
	// stw r10,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// lwz r10,120(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82691710
	if (ctx.cr6.eq) goto loc_82691710;
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// b 0x82691714
	goto loc_82691714;
loc_82691710:
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
loc_82691714:
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826978C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lfs f0,17280(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 17280);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f0,13960(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 13960);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f12.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// ble cr6,0x82697944
	if (!ctx.cr6.gt) goto loc_82697944;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// lfs f12,3248(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3248);
	ctx.f12.f64 = double(temp.f32);
loc_82697908:
	// lfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// fadds f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// blt cr6,0x82697924
	if (ctx.cr6.lt) goto loc_82697924;
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
loc_82697924:
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82697938
	if (!ctx.cr0.eq) goto loc_82697938;
	// lfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_82697938:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82697908
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82697908;
loc_82697944:
	// addi r11,r4,3
	ctx.r11.s64 = ctx.r4.s64 + 3;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr 
	if (!ctx.cr0.gt) return;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82697958:
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vexptefp128 v63,v63
	ctx.fpscr.enableFlushMode();
	{
		simde__m128 x = simde_mm_load_ps(ctx.v63.f32);
		simde__m128 n = simde_mm_round_ps(x, SIMDE_MM_FROUND_TO_NEG_INF | SIMDE_MM_FROUND_NO_EXC);
		simde__m128 f = simde_mm_sub_ps(x, n);
		simde__m128 p = simde_mm_set1_ps(1.8775767e-3f);
		p = simde_mm_add_ps(simde_mm_mul_ps(p, f), simde_mm_set1_ps(8.9893397e-3f));
		p = simde_mm_add_ps(simde_mm_mul_ps(p, f), simde_mm_set1_ps(5.5826318e-2f));
		p = simde_mm_add_ps(simde_mm_mul_ps(p, f), simde_mm_set1_ps(2.4015361e-1f));
		p = simde_mm_add_ps(simde_mm_mul_ps(p, f), simde_mm_set1_ps(6.9315308e-1f));
		p = simde_mm_add_ps(simde_mm_mul_ps(p, f), simde_mm_set1_ps(1.0f));
		simde__m128i exp_bits = simde_mm_slli_epi32(
			simde_mm_add_epi32(simde_mm_cvttps_epi32(n), simde_mm_set1_epi32(127)), 23);
		simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(p, simde_mm_castsi128_ps(exp_bits)));
	}
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82697958
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82697958;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8269C9F0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// addi r11,r11,8896
	ctx.r11.s64 = ctx.r11.s64 + 8896;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8269ca10
	if (ctx.cr6.eq) goto loc_8269CA10;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8269CA10:
	// li r3,120
	ctx.r3.s64 = 120;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8269D008) {
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
	// bl 0x8269cf00
	ctx.lr = 0x8269D018;
	sub_8269CF00(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8269E4B8) {
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
	ctx.lr = 0x8269E4C0;
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// stw r6,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r6.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8269e508
	if (ctx.cr6.eq) goto loc_8269E508;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8269e508
	if (ctx.cr6.eq) goto loc_8269E508;
	// addic r11,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// subfe. r11,r11,r6
	temp.u8 = (~ctx.r11.u32 + ctx.r6.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8269e514
	if (!ctx.cr0.eq) goto loc_8269E514;
	// bl 0x826a33d0
	ctx.lr = 0x8269E4FC;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x8269E508;
	sub_8269CB20(ctx, base);
loc_8269E508:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269E50C:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x826a1d04
	return;
loc_8269E514:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269e120
	ctx.lr = 0x8269E51C;
	sub_8269E120(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8269e248
	ctx.lr = 0x8269E534;
	sub_8269E248(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = r31.s64 + 144;
	// bl 0x8269e56c
	ctx.lr = 0x8269E544;
	ctx.r27 = r27;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_8269E56C(ctx, base);
	r27 = ctx.r27;
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// b 0x8269e50c
	goto loc_8269E50C;
}

DEFINE_REX_FUNC(sub_826A18C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r11,0,17,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// addi r11,r11,-32752
	ctx.r11.s64 = ctx.r11.s64 + -32752;
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

DEFINE_REX_FUNC(__restgprlr_21) {
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
	// ld r21,-96(r1)
	r21.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	r22.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	r23.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	r24.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	r25.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	r26.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	r27.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
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

DEFINE_REX_FUNC(__restfpr_15) {
	REX_FUNC_PROLOGUE();
	PPCRegister f15{};
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
	// lfd f15,-136(r12)
	ctx.fpscr.disableFlushMode();
	f15.u64 = REX_LOAD_U64(ctx.r12.u32 + -136);
	// lfd f16,-128(r12)
	f16.u64 = REX_LOAD_U64(ctx.r12.u32 + -128);
	// lfd f17,-120(r12)
	f17.u64 = REX_LOAD_U64(ctx.r12.u32 + -120);
	// lfd f18,-112(r12)
	f18.u64 = REX_LOAD_U64(ctx.r12.u32 + -112);
	// lfd f19,-104(r12)
	f19.u64 = REX_LOAD_U64(ctx.r12.u32 + -104);
	// lfd f20,-96(r12)
	f20.u64 = REX_LOAD_U64(ctx.r12.u32 + -96);
	// lfd f21,-88(r12)
	f21.u64 = REX_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	f22.u64 = REX_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	f23.u64 = REX_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	f24.u64 = REX_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	f25.u64 = REX_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	f26.u64 = REX_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	f27.u64 = REX_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	f28.u64 = REX_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = REX_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = REX_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = REX_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_78) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826AE138) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826ae168
	if (ctx.cr6.eq) goto loc_826AE168;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826ae168
	if (ctx.cr6.eq) goto loc_826AE168;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x826ae168
	if (ctx.cr6.eq) goto loc_826AE168;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_826AE168:
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x826ae080
	sub_826AE080(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826AFCB0) {
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
	ctx.lr = 0x826AFCB8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x826afcec
	if (!ctx.cr6.eq) goto loc_826AFCEC;
loc_826AFCD4:
	// bl 0x826a33d0
	ctx.lr = 0x826AFCD8;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826AFCE4;
	sub_8269CB20(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x826afe5c
	goto loc_826AFE5C;
loc_826AFCEC:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826afcd4
	if (ctx.cr6.eq) goto loc_826AFCD4;
	// extsb. r26,r7
	r26.s64 = ctx.r7.s8;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// li r28,48
	r28.s64 = 48;
	// beq 0x826afd2c
	if (ctx.cr0.eq) goto loc_826AFD2C;
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r27.s32, ctx.xer);
	// bne cr6,0x826afd2c
	if (!ctx.cr6.eq) goto loc_826AFD2C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-45
	ctx.r11.s64 = ctx.r11.s64 + -45;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r28,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r28.u8);
	// stb r9,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
loc_826AFD2C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x826afd44
	if (!ctx.cr6.eq) goto loc_826AFD44;
	// addi r30,r3,1
	r30.s64 = ctx.r3.s64 + 1;
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
loc_826AFD44:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x826afd8c
	if (ctx.cr6.gt) goto loc_826AFD8C;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_826AFD54:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826afd54
	if (!ctx.cr6.eq) goto loc_826AFD54;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// addi r31,r30,1
	r31.s64 = r30.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x8269cc20
	ctx.lr = 0x826AFD84;
	sub_8269CC20(ctx, base);
	// stb r28,0(r30)
	REX_STORE_U8(r30.u32 + 0, r28.u8);
	// b 0x826afd90
	goto loc_826AFD90;
loc_826AFD8C:
	// add r31,r11,r30
	r31.u64 = ctx.r11.u64 + r30.u64;
loc_826AFD90:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x826afe58
	if (!ctx.cr6.gt) goto loc_826AFE58;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_826AFD9C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826afd9c
	if (!ctx.cr6.eq) goto loc_826AFD9C;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// addi r30,r31,1
	r30.s64 = r31.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x8269cc20
	ctx.lr = 0x826AFDCC;
	sub_8269CC20(ctx, base);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lwz r11,27400(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 27400);
	// lwz r11,188(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x826afe58
	if (!ctx.cr6.lt) goto loc_826AFE58;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x826afe00
	if (ctx.cr6.eq) goto loc_826AFE00;
	// neg r27,r11
	r27.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// b 0x826afe10
	goto loc_826AFE10;
loc_826AFE00:
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826afe10
	if (ctx.cr6.lt) goto loc_826AFE10;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_826AFE10:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x826afe48
	if (ctx.cr6.eq) goto loc_826AFE48;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_826AFE1C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826afe1c
	if (!ctx.cr6.eq) goto loc_826AFE1C;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r3,r30,r27
	ctx.r3.u64 = r30.u64 + r27.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x8269cc20
	ctx.lr = 0x826AFE48;
	sub_8269CC20(ctx, base);
loc_826AFE48:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a2e60
	ctx.lr = 0x826AFE58;
	sub_826A2E60(ctx, base);
loc_826AFE58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AFE5C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826BC208) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x827938c4
	ctx.lr = 0x826BC21C;
	__imp__RtlTryEnterCriticalSection(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r7,r9,16389
	ctx.r7.u64 = ctx.r9.u64 | 16389;
	// and r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 & ctx.r7.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826BF468) {
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
	// beq cr6,0x826bf4bc
	if (ctx.cr6.eq) goto loc_826BF4BC;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x826bf4bc
	if (ctx.cr6.lt) goto loc_826BF4BC;
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// bgt cr6,0x826bf4bc
	if (ctx.cr6.gt) goto loc_826BF4BC;
	// lwz r11,528(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826bf4bc
	if (ctx.cr6.eq) goto loc_826BF4BC;
	// li r5,1
	ctx.r5.s64 = 1;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// bl 0x826bd1b0
	ctx.lr = 0x826BF4A8;
	sub_826BD1B0(ctx, base);
	// bl 0x826bd9a0
	ctx.lr = 0x826BF4AC;
	sub_826BD9A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_826BF4BC:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C1AC8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,68(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C1D50) {
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
	ctx.lr = 0x826C1D58;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C1D7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c1e50
	if (ctx.cr6.lt) goto loc_826C1E50;
	// add r11,r31,r27
	ctx.r11.u64 = r31.u64 + r27.u64;
	// addi r10,r27,-1
	ctx.r10.s64 = r27.s64 + -1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// andc r25,r9,r10
	r25.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// ori r4,r4,32782
	ctx.r4.u64 = ctx.r4.u64 | 32782;
	// mullw r11,r25,r29
	ctx.r11.s64 = int64_t(r25.s32) * int64_t(r29.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// bl 0x823f02b8
	ctx.lr = 0x826C1DB0;
	sub_823F02B8(ctx, base);
	// stw r3,44(r28)
	REX_STORE_U32(r28.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x826c1dc8
	if (!ctx.cr6.eq) goto loc_826C1DC8;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822f6280
	ctx.lr = 0x826C1DC4;
	sub_822F6280(ctx, base);
	// b 0x826c1df4
	goto loc_826C1DF4;
loc_826C1DC8:
	// lis r11,1092
	ctx.r11.s64 = 71565312;
	// ori r10,r11,17476
	ctx.r10.u64 = ctx.r11.u64 | 17476;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x826c1dec
	if (ctx.cr6.gt) goto loc_826C1DEC;
	// mulli r11,r29,60
	ctx.r11.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(60));
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x826c1df0
	if (!ctx.cr6.gt) goto loc_826C1DF0;
loc_826C1DEC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_826C1DF0:
	// bl 0x826ba988
	ctx.lr = 0x826C1DF4;
	sub_826BA988(ctx, base);
loc_826C1DF4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826c1e2c
	if (ctx.cr6.eq) goto loc_826C1E2C;
	// addi r26,r3,4
	r26.s64 = ctx.r3.s64 + 4;
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// addic. r31,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r31.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// mr r30,r26
	r30.u64 = r26.u64;
	// blt 0x826c1e24
	if (ctx.cr0.lt) goto loc_826C1E24;
loc_826C1E10:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826bac00
	ctx.lr = 0x826C1E18;
	sub_826BAC00(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,60
	r30.s64 = r30.s64 + 60;
	// bge 0x826c1e10
	if (!ctx.cr0.lt) goto loc_826C1E10;
loc_826C1E24:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// b 0x826c1e30
	goto loc_826C1E30;
loc_826C1E2C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_826C1E30:
	// lwz r11,44(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 44);
	// stw r10,48(r28)
	REX_STORE_U32(r28.u32 + 48, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c1e48
	if (ctx.cr6.eq) goto loc_826C1E48;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826c1e70
	if (!ctx.cr6.eq) goto loc_826C1E70;
loc_826C1E48:
	// lis r24,-32761
	r24.s64 = -2147024896;
	// ori r24,r24,14
	r24.u64 = r24.u64 | 14;
loc_826C1E50:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C1E64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826C1E64:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_826C1E70:
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// stw r29,52(r28)
	REX_STORE_U32(r28.u32 + 52, r29.u32);
	// addi r10,r27,-1
	ctx.r10.s64 = r27.s64 + -1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// li r31,0
	r31.s64 = 0;
	// andc r30,r9,r10
	r30.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x826c1e64
	if (ctx.cr6.eq) goto loc_826C1E64;
	// li r29,0
	r29.s64 = 0;
loc_826C1E94:
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + ctx.r11.u64;
	// bl 0x826ba9a8
	ctx.lr = 0x826C1EA8;
	sub_826BA9A8(ctx, base);
	// lwz r11,52(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 52);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// add r30,r30,r25
	r30.u64 = r30.u64 + r25.u64;
	// addi r29,r29,60
	r29.s64 = r29.s64 + 60;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826c1e94
	if (ctx.cr6.lt) goto loc_826C1E94;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_826D17C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826D17C8;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x826d18f0
	if (ctx.cr6.eq) goto loc_826D18F0;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x826d18f0
	if (ctx.cr6.lt) goto loc_826D18F0;
	// lwz r11,472(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826d18f0
	if (!ctx.cr6.eq) goto loc_826D18F0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ed1d8
	ctx.lr = 0x826D1800;
	sub_826ED1D8(ctx, base);
	// lwz r10,488(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 488);
	// lwz r9,484(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 484);
	// li r29,3
	r29.s64 = 3;
	// li r28,1
	r28.s64 = 1;
	// lwz r11,336(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 336);
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r28,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r10,452(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 452);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// blt cr6,0x826d1840
	if (ctx.cr6.lt) goto loc_826D1840;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_826D1840:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lhz r9,110(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 110);
	// stw r9,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// bl 0x8263c5a0
	ctx.lr = 0x826D1860;
	sub_8263C5A0(ctx, base);
	// lwz r8,624(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 624);
	// lwz r7,496(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 496);
	// lwz r6,492(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 492);
	// stw r28,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r28.u32);
	// stw r29,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// stw r8,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// stw r7,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// stw r6,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// stw r29,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r29.u32);
	// stw r28,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, r28.u32);
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 568);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826d18a8
	if (ctx.cr6.eq) goto loc_826D18A8;
	// bl 0x826ed328
	ctx.lr = 0x826D1898;
	sub_826ED328(ctx, base);
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 568);
	// bl 0x82634e78
	ctx.lr = 0x826D18A0;
	sub_82634E78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,568(r31)
	REX_STORE_U32(r31.u32 + 568, ctx.r11.u32);
loc_826D18A8:
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x826e07e0
	ctx.lr = 0x826D18B0;
	sub_826E07E0(ctx, base);
	// stw r3,568(r31)
	REX_STORE_U32(r31.u32 + 568, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826d18cc
	if (!ctx.cr6.eq) goto loc_826D18CC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1d08
	return;
loc_826D18CC:
	// bl 0x826ed220
	ctx.lr = 0x826D18D0;
	sub_826ED220(ctx, base);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 568);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826ed8c0
	ctx.lr = 0x826D18E4;
	sub_826ED8C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d18f0
	if (ctx.cr6.lt) goto loc_826D18F0;
	// stw r28,472(r30)
	REX_STORE_U32(r30.u32 + 472, r28.u32);
loc_826D18F0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826DB1D0) {
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
	ctx.lr = 0x826DB1D8;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// lwz r31,28(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// stw r26,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// mr r21,r26
	r21.u64 = r26.u64;
	// stw r26,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r26.u32);
	// mr r20,r26
	r20.u64 = r26.u64;
	// stw r26,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r26.u32);
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// mr r17,r26
	r17.u64 = r26.u64;
	// stw r26,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r26.u32);
	// li r25,1
	r25.s64 = 1;
	// stb r26,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r26.u8);
	// lis r18,-32688
	r18.s64 = -2142240768;
	// li r19,5
	r19.s64 = 5;
	// li r16,8
	r16.s64 = 8;
	// li r24,13
	r24.s64 = 13;
	// ori r15,r11,22
	r15.u64 = ctx.r11.u64 | 22;
	// li r14,12
	r14.s64 = 12;
	// li r22,15
	r22.s64 = 15;
loc_826DB230:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x826db230
	if (ctx.cr6.gt) goto loc_826DB230;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x826db440
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826DB440;
	// bdzf 4*cr6+eq,0x826db498
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826DB498;
	// bdzf 4*cr6+eq,0x826db4f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826DB4F0;
	// bdzf 4*cr6+eq,0x826db524
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826DB524;
	// bdzf 4*cr6+eq,0x826db5cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826DB5CC;
	// bdzf 4*cr6+eq,0x826db7ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826DB7AC;
	// bdzf 4*cr6+eq,0x826dbd90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826DBD90;
	// bne cr6,0x826dc26c
	if (!ctx.cr6.eq) goto loc_826DC26C;
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826db2f8
	if (ctx.cr6.eq) goto loc_826DB2F8;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826db2f8
	if (ctx.cr6.eq) goto loc_826DB2F8;
	// ld r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 24);
	// ld r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 32);
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x826db2cc
	if (!ctx.cr6.lt) goto loc_826DB2CC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lbz r4,196(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + 196);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// std r26,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, r26.u64);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826d3470
	ctx.lr = 0x826DB2A8;
	sub_826D3470(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dc31c
	if (ctx.cr6.lt) goto loc_826DC31C;
	// ld r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// std r4,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r4.u64);
	// bl 0x826d3588
	ctx.lr = 0x826DB2C0;
	sub_826D3588(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dc31c
	if (ctx.cr6.lt) goto loc_826DC31C;
	// b 0x826db2e4
	goto loc_826DB2E4;
loc_826DB2CC:
	// stw r26,184(r31)
	REX_STORE_U32(r31.u32 + 184, r26.u32);
	// stw r26,192(r31)
	REX_STORE_U32(r31.u32 + 192, r26.u32);
	// stb r26,196(r31)
	REX_STORE_U8(r31.u32 + 196, r26.u8);
	// stw r26,220(r31)
	REX_STORE_U32(r31.u32 + 220, r26.u32);
	// stw r26,212(r31)
	REX_STORE_U32(r31.u32 + 212, r26.u32);
	// stw r26,204(r31)
	REX_STORE_U32(r31.u32 + 204, r26.u32);
loc_826DB2E4:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// ld r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 32);
	// bl 0x826d3588
	ctx.lr = 0x826DB2F0;
	sub_826D3588(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dc31c
	if (ctx.cr6.lt) goto loc_826DC31C;
loc_826DB2F8:
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826db3a8
	if (ctx.cr6.eq) goto loc_826DB3A8;
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826db318
	if (ctx.cr6.eq) goto loc_826DB318;
	// stw r25,216(r31)
	REX_STORE_U32(r31.u32 + 216, r25.u32);
	// b 0x826db394
	goto loc_826DB394;
loc_826DB318:
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// ld r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 32);
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x826db370
	if (!ctx.cr6.gt) goto loc_826DB370;
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// std r26,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, r26.u64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826db394
	if (ctx.cr6.eq) goto loc_826DB394;
	// li r6,1
	ctx.r6.s64 = 1;
	// lbz r4,196(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + 196);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826d3470
	ctx.lr = 0x826DB34C;
	sub_826D3470(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dc31c
	if (ctx.cr6.lt) goto loc_826DC31C;
	// ld r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// std r4,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r4.u64);
	// bl 0x826d3588
	ctx.lr = 0x826DB364;
	sub_826D3588(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dc31c
	if (ctx.cr6.lt) goto loc_826DC31C;
	// b 0x826db394
	goto loc_826DB394;
loc_826DB370:
	// stw r26,188(r31)
	REX_STORE_U32(r31.u32 + 188, r26.u32);
	// stw r26,192(r31)
	REX_STORE_U32(r31.u32 + 192, r26.u32);
	// stb r26,196(r31)
	REX_STORE_U8(r31.u32 + 196, r26.u8);
	// stw r26,220(r31)
	REX_STORE_U32(r31.u32 + 220, r26.u32);
	// stw r26,200(r31)
	REX_STORE_U32(r31.u32 + 200, r26.u32);
	// stw r26,208(r31)
	REX_STORE_U32(r31.u32 + 208, r26.u32);
	// stw r26,216(r31)
	REX_STORE_U32(r31.u32 + 216, r26.u32);
	// stw r26,212(r31)
	REX_STORE_U32(r31.u32 + 212, r26.u32);
	// stw r26,204(r31)
	REX_STORE_U32(r31.u32 + 204, r26.u32);
loc_826DB394:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// ld r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 32);
	// bl 0x826d3588
	ctx.lr = 0x826DB3A0;
	sub_826D3588(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dc31c
	if (ctx.cr6.lt) goto loc_826DC31C;
loc_826DB3A8:
	// ld r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 24);
	// ld r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 32);
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x826dc2c4
	if (!ctx.cr6.lt) goto loc_826DC2C4;
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x826dc2f4
	if (!ctx.cr6.lt) goto loc_826DC2F4;
	// ld r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 40);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ld r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 8);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// std r9,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r9.u64);
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// std r7,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r7.u64);
	// ble cr6,0x826db428
	if (!ctx.cr6.gt) goto loc_826DB428;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// subf r30,r8,r7
	r30.u64 = ctx.r7.u64 - ctx.r8.u64;
	// lwz r6,20(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826DB410;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dc31c
	if (ctx.cr6.lt) goto loc_826DC31C;
	// ld r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 8);
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
loc_826DB428:
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r9,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r9.u32);
	// b 0x826db230
	goto loc_826DB230;
loc_826DB440:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826d7848
	ctx.lr = 0x826DB44C;
	sub_826D7848(ctx, base);
	// cmplw cr6,r3,r18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r18.u32, ctx.xer);
	// beq cr6,0x826dc31c
	if (ctx.cr6.eq) goto loc_826DC31C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x826db464
	if (!ctx.cr6.lt) goto loc_826DB464;
	// stw r19,80(r31)
	REX_STORE_U32(r31.u32 + 80, r19.u32);
	// b 0x826db230
	goto loc_826DB230;
loc_826DB464:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826db488
	if (ctx.cr6.eq) goto loc_826DB488;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826db488
	if (ctx.cr6.eq) goto loc_826DB488;
	// stw r19,80(r31)
	REX_STORE_U32(r31.u32 + 80, r19.u32);
	// b 0x826db230
	goto loc_826DB230;
loc_826DB488:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r26,56(r31)
	REX_STORE_U32(r31.u32 + 56, r26.u32);
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// b 0x826db230
	goto loc_826DB230;
loc_826DB498:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,68(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x826d7c20
	ctx.lr = 0x826DB4A8;
	sub_826D7C20(ctx, base);
	// cmplw cr6,r3,r18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r18.u32, ctx.xer);
	// beq cr6,0x826dc31c
	if (ctx.cr6.eq) goto loc_826DC31C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x826db4c0
	if (!ctx.cr6.lt) goto loc_826DB4C0;
	// stw r19,80(r31)
	REX_STORE_U32(r31.u32 + 80, r19.u32);
	// b 0x826db230
	goto loc_826DB230;
loc_826DB4C0:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826db4e4
	if (ctx.cr6.eq) goto loc_826DB4E4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826db4e4
	if (ctx.cr6.eq) goto loc_826DB4E4;
	// stw r19,80(r31)
	REX_STORE_U32(r31.u32 + 80, r19.u32);
	// b 0x826db230
	goto loc_826DB230;
loc_826DB4E4:
	// stw r16,80(r31)
	REX_STORE_U32(r31.u32 + 80, r16.u32);
	// stw r26,56(r31)
	REX_STORE_U32(r31.u32 + 56, r26.u32);
	// b 0x826db230
	goto loc_826DB230;
loc_826DB4F0:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,72(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// bl 0x826d80a0
	ctx.lr = 0x826DB500;
	sub_826D80A0(ctx, base);
	// cmplw cr6,r3,r18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r18.u32, ctx.xer);
	// beq cr6,0x826dc31c
	if (ctx.cr6.eq) goto loc_826DC31C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x826db518
	if (!ctx.cr6.lt) goto loc_826DB518;
loc_826DB510:
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x826db230
	goto loc_826DB230;
loc_826DB518:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// b 0x826db230
	goto loc_826DB230;
loc_826DB524:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,80(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// bl 0x826dad70
	ctx.lr = 0x826DB534;
	sub_826DAD70(ctx, base);
	// cmplw cr6,r3,r18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r18.u32, ctx.xer);
	// beq cr6,0x826dc31c
	if (ctx.cr6.eq) goto loc_826DC31C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x826db54c
	if (!ctx.cr6.lt) goto loc_826DB54C;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x826db230
	goto loc_826DB230;
loc_826DB54C:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// ld r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 32);
	// ld r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 8);
	// lhz r8,28(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// lhz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r11,64(r31)
	REX_STORE_U16(r31.u32 + 64, ctx.r11.u16);
	// cmpld cr6,r5,r9
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, ctx.r9.u64, ctx.xer);
	// ble cr6,0x826db5c0
	if (!ctx.cr6.gt) goto loc_826DB5C0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r10,r7,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r7.u64;
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826DB5A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dc31c
	if (ctx.cr6.lt) goto loc_826DC31C;
	// ld r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 8);
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
loc_826DB5C0:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// b 0x826db230
	goto loc_826DB230;
loc_826DB5CC:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lbz r30,4(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826c6cf0
	ctx.lr = 0x826DB5E4;
	sub_826C6CF0(ctx, base);
	// cmplw cr6,r3,r15
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r15.u32, ctx.xer);
	// bne cr6,0x826db5f4
	if (!ctx.cr6.eq) goto loc_826DB5F4;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x826db230
	goto loc_826DB230;
loc_826DB5F4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x826db604
	if (!ctx.cr6.lt) goto loc_826DB604;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x826db230
	goto loc_826DB230;
loc_826DB604:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r20,4(r11)
	r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne cr6,0x826db61c
	if (!ctx.cr6.eq) goto loc_826DB61C;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x826db230
	goto loc_826DB230;
loc_826DB61C:
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lhz r11,28(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826db634
	if (!ctx.cr6.eq) goto loc_826DB634;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x826db230
	goto loc_826DB230;
loc_826DB634:
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826db678
	if (ctx.cr6.eq) goto loc_826DB678;
	// lbz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 196);
	// clrlwi r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826db510
	if (!ctx.cr6.eq) goto loc_826DB510;
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826db510
	if (ctx.cr6.eq) goto loc_826DB510;
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r10,192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x826db510
	if (!ctx.cr6.gt) goto loc_826DB510;
	// stw r26,184(r31)
	REX_STORE_U32(r31.u32 + 184, r26.u32);
	// stb r26,196(r31)
	REX_STORE_U8(r31.u32 + 196, r26.u8);
	// stw r26,204(r31)
	REX_STORE_U32(r31.u32 + 204, r26.u32);
loc_826DB678:
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826db73c
	if (ctx.cr6.eq) goto loc_826DB73C;
	// lbz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 196);
	// clrlwi r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826db510
	if (!ctx.cr6.eq) goto loc_826DB510;
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826db510
	if (ctx.cr6.eq) goto loc_826DB510;
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r10,192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826db510
	if (!ctx.cr6.lt) goto loc_826DB510;
	// lwz r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bgt cr6,0x826db510
	if (ctx.cr6.gt) goto loc_826DB510;
	// lwz r10,212(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 212);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826db6f8
	if (ctx.cr6.eq) goto loc_826DB6F8;
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 208);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826db6f8
	if (!ctx.cr6.eq) goto loc_826DB6F8;
	// stw r26,188(r31)
	REX_STORE_U32(r31.u32 + 188, r26.u32);
	// stw r26,192(r31)
	REX_STORE_U32(r31.u32 + 192, r26.u32);
	// stb r26,196(r31)
	REX_STORE_U8(r31.u32 + 196, r26.u8);
	// stw r26,220(r31)
	REX_STORE_U32(r31.u32 + 220, r26.u32);
	// stw r26,200(r31)
	REX_STORE_U32(r31.u32 + 200, r26.u32);
	// stw r26,208(r31)
	REX_STORE_U32(r31.u32 + 208, r26.u32);
	// stw r26,212(r31)
	REX_STORE_U32(r31.u32 + 212, r26.u32);
	// stw r26,216(r31)
	REX_STORE_U32(r31.u32 + 216, r26.u32);
	// stw r26,204(r31)
	REX_STORE_U32(r31.u32 + 204, r26.u32);
loc_826DB6F8:
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826db728
	if (!ctx.cr6.eq) goto loc_826DB728;
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r10,192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826db728
	if (!ctx.cr6.lt) goto loc_826DB728;
	// stw r25,212(r31)
	REX_STORE_U32(r31.u32 + 212, r25.u32);
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// stw r11,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r11.u32);
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x826db230
	goto loc_826DB230;
loc_826DB728:
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826db73c
	if (ctx.cr6.eq) goto loc_826DB73C;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x826db230
	goto loc_826DB230;
loc_826DB73C:
	// ld r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 64);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r21,48(r8)
	r21.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// stw r6,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r6.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r4,28(r9)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + 28);
	// lwz r11,12(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r17,100(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 100);
	// bctrl 
	ctx.lr = 0x826DB778;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dc31c
	if (ctx.cr6.lt) goto loc_826DC31C;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lbz r10,6(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x826db7a0
	if (ctx.cr6.eq) goto loc_826DB7A0;
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r10,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r26,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r26.u32);
	// b 0x826db230
	goto loc_826DB230;
loc_826DB7A0:
	// stw r14,80(r31)
	REX_STORE_U32(r31.u32 + 80, r14.u32);
	// stw r25,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r25.u32);
	// b 0x826db230
	goto loc_826DB230;
loc_826DB7AC:
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826dbb84
	if (!ctx.cr6.eq) goto loc_826DBB84;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826db7ec
	if (!ctx.cr6.eq) goto loc_826DB7EC;
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(r21.s32, 2, ctx.xer);
	// bne cr6,0x826db7e8
	if (!ctx.cr6.eq) goto loc_826DB7E8;
	// lwz r10,20(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826db7e8
	if (!ctx.cr6.eq) goto loc_826DB7E8;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x826db230
	goto loc_826DB230;
loc_826DB7E8:
	// stw r25,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r25.u32);
loc_826DB7EC:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(r21.s32, 1, ctx.xer);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r8,52(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r7,12(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r7,16(r6)
	REX_STORE_U32(ctx.r6.u32 + 16, ctx.r7.u32);
	// lwz r5,52(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lhz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + 28);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r4,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// bne cr6,0x826db83c
	if (!ctx.cr6.eq) goto loc_826DB83C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r25,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r25.u32);
loc_826DB83C:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r20,3
	ctx.cr6.compare<int32_t>(r20.s32, 3, ctx.xer);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lbz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// sth r8,132(r1)
	REX_STORE_U16(ctx.r1.u32 + 132, ctx.r8.u16);
	// lwz r7,52(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r6,8(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r6,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r5,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// lwz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lhz r3,28(r4)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + 28);
	// stw r3,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ld r8,56(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// subf r6,r7,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r7.u64;
	// lwz r5,20(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// subf r4,r5,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r5.u64;
	// clrldi r3,r4,32
	ctx.r3.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r3,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r3.u64);
	// beq cr6,0x826db8a8
	if (ctx.cr6.eq) goto loc_826DB8A8;
	// cmpwi cr6,r20,2
	ctx.cr6.compare<int32_t>(r20.s32, 2, ctx.xer);
	// bne cr6,0x826db8cc
	if (!ctx.cr6.eq) goto loc_826DB8CC;
loc_826DB8A8:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lbz r4,32(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// bl 0x826c6cf0
	ctx.lr = 0x826DB8B8;
	sub_826C6CF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x826db8c8
	if (!ctx.cr6.lt) goto loc_826DB8C8;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x826db230
	goto loc_826DB230;
loc_826DB8C8:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_826DB8CC:
	// cmpwi cr6,r20,3
	ctx.cr6.compare<int32_t>(r20.s32, 3, ctx.xer);
	// bne cr6,0x826dbaa8
	if (!ctx.cr6.eq) goto loc_826DBAA8;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,36(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826db8f8
	if (!ctx.cr6.eq) goto loc_826DB8F8;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r25,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, r25.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_826DB8F8:
	// stw r25,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r25.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,12(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x826db95c
	if (!ctx.cr6.gt) goto loc_826DB95C;
	// stw r26,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, r26.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r26,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r26.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r25,76(r10)
	REX_STORE_U32(ctx.r10.u32 + 76, r25.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, r26.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r26,32(r8)
	REX_STORE_U8(ctx.r8.u32 + 32, r26.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r7,196(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 196);
	// lbz r6,32(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x826db95c
	if (!ctx.cr6.eq) goto loc_826DB95C;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// stb r10,196(r31)
	REX_STORE_U8(r31.u32 + 196, ctx.r10.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_826DB95C:
	// stw r26,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r26.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r26,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, r26.u8);
loc_826DB968:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// ld r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 8);
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lhz r5,28(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826DB98C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dc31c
	if (ctx.cr6.lt) goto loc_826DC31C;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lhz r30,28(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// stw r26,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r26.u32);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r9,76(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826db9f4
	if (ctx.cr6.eq) goto loc_826DB9F4;
	// stw r25,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r25.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lhz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// stw r10,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r9,60(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826db9e8
	if (!ctx.cr6.eq) goto loc_826DB9E8;
	// addi r9,r11,44
	ctx.r9.s64 = ctx.r11.s64 + 44;
	// lhz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// stw r9,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// addi r30,r10,-15
	r30.s64 = ctx.r10.s64 + -15;
	// lwz r8,52(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 52);
	// stw r22,68(r8)
	REX_STORE_U32(ctx.r8.u32 + 68, r22.u32);
loc_826DB9E8:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
loc_826DB9F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826DBA0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dc31c
	if (ctx.cr6.lt) goto loc_826DC31C;
	// ld r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 8);
	// clrldi r9,r30,32
	ctx.r9.u64 = r30.u64 & 0xFFFFFFFF;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// std r10,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r10.u64);
	// lhz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// addi r9,r10,-15
	ctx.r9.s64 = ctx.r10.s64 + -15;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x826dba60
	if (!ctx.cr6.eq) goto loc_826DBA60;
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826d4230
	ctx.lr = 0x826DBA58;
	sub_826D4230(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dc31c
	if (ctx.cr6.lt) goto loc_826DC31C;
loc_826DBA60:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x826c7270
	ctx.lr = 0x826DBA70;
	sub_826C7270(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dc31c
	if (ctx.cr6.lt) goto loc_826DC31C;
	// li r9,4
	ctx.r9.s64 = 4;
	// lhz r6,132(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 132);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r5,10
	ctx.r5.s64 = 655360;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x826c6658
	ctx.lr = 0x826DBA98;
	sub_826C6658(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dc31c
	if (ctx.cr6.lt) goto loc_826DC31C;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x826db230
	goto loc_826DB230;
loc_826DBAA8:
	// cmpwi cr6,r20,2
	ctx.cr6.compare<int32_t>(r20.s32, 2, ctx.xer);
	// bne cr6,0x826db968
	if (!ctx.cr6.eq) goto loc_826DB968;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826dbacc
	if (ctx.cr6.eq) goto loc_826DBACC;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x826dbad8
	if (ctx.cr6.gt) goto loc_826DBAD8;
loc_826DBACC:
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826db968
	if (ctx.cr6.eq) goto loc_826DB968;
loc_826DBAD8:
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r26.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lbz r10,196(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 196);
	// lbz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x826dbafc
	if (!ctx.cr6.eq) goto loc_826DBAFC;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// stb r10,196(r31)
	REX_STORE_U8(r31.u32 + 196, ctx.r10.u8);
loc_826DBAFC:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, r26.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826dbb44
	if (ctx.cr6.eq) goto loc_826DBB44;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// lbz r8,32(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x826dbb44
	if (!ctx.cr6.eq) goto loc_826DBB44;
	// stw r26,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r26.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r26,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, r26.u8);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r26,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, r26.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r26,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, r26.u32);
loc_826DBB44:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r26.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, r26.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, r26.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,28(r8)
	REX_STORE_U32(ctx.r8.u32 + 28, r26.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r26,32(r7)
	REX_STORE_U8(ctx.r7.u32 + 32, r26.u8);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, r26.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,40(r5)
	REX_STORE_U32(ctx.r5.u32 + 40, r26.u32);
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x826db230
	goto loc_826DB230;
loc_826DBB84:
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,20(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826dbb9c
	if (!ctx.cr6.eq) goto loc_826DBB9C;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x826db230
	goto loc_826DB230;
loc_826DBB9C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826dbd84
	if (!ctx.cr6.eq) goto loc_826DBD84;
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(r21.s32, 1, ctx.xer);
	// stw r11,16(r8)
	REX_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,20(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// stw r8,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// bne cr6,0x826dbbcc
	if (!ctx.cr6.eq) goto loc_826DBBCC;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r25,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r25.u32);
loc_826DBBCC:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lbz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// sth r8,132(r1)
	REX_STORE_U16(ctx.r1.u32 + 132, ctx.r8.u16);
	// lwz r7,52(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r5,8(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r5,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r4,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lhz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 28);
	// stw r10,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r8,52(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 52);
	// ld r7,56(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r4,20(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r3,16(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// subf r11,r5,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r5.u64;
	// subf r10,r4,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r4.u64;
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r9,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r9.u64);
	// lwz r8,52(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 52);
	// ld r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 8);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r5,28(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// lhz r5,28(r8)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + 28);
	// bctrl 
	ctx.lr = 0x826DBC50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dc31c
	if (ctx.cr6.lt) goto loc_826DC31C;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lhz r30,28(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// stw r26,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r26.u32);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r9,76(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826dbcb8
	if (ctx.cr6.eq) goto loc_826DBCB8;
	// stw r25,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r25.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lhz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// stw r10,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r9,60(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826dbcac
	if (!ctx.cr6.eq) goto loc_826DBCAC;
	// addi r9,r11,44
	ctx.r9.s64 = ctx.r11.s64 + 44;
	// lhz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// stw r9,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// addi r30,r10,-15
	r30.s64 = ctx.r10.s64 + -15;
	// lwz r8,52(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 52);
	// stw r22,68(r8)
	REX_STORE_U32(ctx.r8.u32 + 68, r22.u32);
loc_826DBCAC:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
loc_826DBCB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826DBCD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dc31c
	if (ctx.cr6.lt) goto loc_826DC31C;
	// ld r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 8);
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r10,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r10.u64);
	// lhz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// addi r9,r10,-15
	ctx.r9.s64 = ctx.r10.s64 + -15;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x826dbd24
	if (!ctx.cr6.eq) goto loc_826DBD24;
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826d4230
	ctx.lr = 0x826DBD1C;
	sub_826D4230(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dc31c
	if (ctx.cr6.lt) goto loc_826DC31C;
loc_826DBD24:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x826c7270
	ctx.lr = 0x826DBD34;
	sub_826C7270(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dc31c
	if (ctx.cr6.lt) goto loc_826DC31C;
	// li r9,4
	ctx.r9.s64 = 4;
	// lhz r6,132(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 132);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r5,10
	ctx.r5.s64 = 655360;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x826c6658
	ctx.lr = 0x826DBD5C;
	sub_826C6658(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dc31c
	if (ctx.cr6.lt) goto loc_826DC31C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lhz r10,28(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 28);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x826db230
	goto loc_826DB230;
loc_826DBD84:
	// stw r26,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, r26.u32);
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x826db230
	goto loc_826DB230;
loc_826DBD90:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r27,r26
	r27.u64 = r26.u64;
	// mr r30,r26
	r30.u64 = r26.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826dbdcc
	if (!ctx.cr6.eq) goto loc_826DBDCC;
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(r21.s32, 2, ctx.xer);
	// bne cr6,0x826dbdc8
	if (!ctx.cr6.eq) goto loc_826DBDC8;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826dbdc8
	if (!ctx.cr6.eq) goto loc_826DBDC8;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x826db230
	goto loc_826DB230;
loc_826DBDC8:
	// stw r25,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r25.u32);
loc_826DBDCC:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r7,52(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r6,12(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lhz r4,28(r7)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r7.u32 + 28);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826DBDF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dc31c
	if (ctx.cr6.lt) goto loc_826DC31C;
	// stw r25,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r28,r25
	r28.u64 = r25.u64;
	// bl 0x826d3a88
	ctx.lr = 0x826DBE20;
	sub_826D3A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dc31c
	if (ctx.cr6.lt) goto loc_826DC31C;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lbz r29,80(r1)
	r29.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lhz r11,30(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// blt cr6,0x826db510
	if (ctx.cr6.lt) goto loc_826DB510;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x826db510
	if (ctx.cr6.eq) goto loc_826DB510;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// ble cr6,0x826dbe54
	if (!ctx.cr6.gt) goto loc_826DBE54;
	// addi r27,r29,1
	r27.s64 = r29.s64 + 1;
	// b 0x826dbe5c
	goto loc_826DBE5C;
loc_826DBE54:
	// bne cr6,0x826dbe5c
	if (!ctx.cr6.eq) goto loc_826DBE5C;
	// mr r27,r29
	r27.u64 = r29.u64;
loc_826DBE5C:
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// blt cr6,0x826dc264
	if (ctx.cr6.lt) goto loc_826DC264;
loc_826DBE64:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(r21.s32, 1, ctx.xer);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r29,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, r29.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r29,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, r29.u32);
	// lwz r7,52(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,20(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// stw r5,24(r6)
	REX_STORE_U32(ctx.r6.u32 + 24, ctx.r5.u32);
	// bne cr6,0x826dbea4
	if (!ctx.cr6.eq) goto loc_826DBEA4;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r25,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r25.u32);
loc_826DBEA4:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r20,3
	ctx.cr6.compare<int32_t>(r20.s32, 3, ctx.xer);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lbz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// sth r8,132(r1)
	REX_STORE_U16(ctx.r1.u32 + 132, ctx.r8.u16);
	// lwz r7,52(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r6,8(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r6,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r26,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r26.u32);
	// stw r26,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r26.u32);
	// stw r29,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r29.u32);
	// stw r5,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// ld r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// subf r8,r9,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r9.u64;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// subf r6,r7,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r7.u64;
	// clrldi r5,r6,32
	ctx.r5.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// std r5,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// beq cr6,0x826dbf10
	if (ctx.cr6.eq) goto loc_826DBF10;
	// cmpwi cr6,r20,2
	ctx.cr6.compare<int32_t>(r20.s32, 2, ctx.xer);
	// bne cr6,0x826dbf2c
	if (!ctx.cr6.eq) goto loc_826DBF2C;
loc_826DBF10:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lbz r4,32(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// bl 0x826c6cf0
	ctx.lr = 0x826DBF20;
	sub_826C6CF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dc260
	if (ctx.cr6.lt) goto loc_826DC260;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_826DBF2C:
	// cmpwi cr6,r20,3
	ctx.cr6.compare<int32_t>(r20.s32, 3, ctx.xer);
	// bne cr6,0x826dbf94
	if (!ctx.cr6.eq) goto loc_826DBF94;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r25,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, r25.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,12(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r8,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r8.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r25,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, r25.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,12(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x826dbfc4
	if (!ctx.cr6.gt) goto loc_826DBFC4;
	// stw r26,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, r26.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r26,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r26.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r25,76(r10)
	REX_STORE_U32(ctx.r10.u32 + 76, r25.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, r26.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r26,32(r8)
	REX_STORE_U8(ctx.r8.u32 + 32, r26.u8);
	// b 0x826dbfc4
	goto loc_826DBFC4;
loc_826DBF94:
	// cmpwi cr6,r20,2
	ctx.cr6.compare<int32_t>(r20.s32, 2, ctx.xer);
	// bne cr6,0x826dbfc4
	if (!ctx.cr6.eq) goto loc_826DBFC4;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826dbfb8
	if (ctx.cr6.eq) goto loc_826DBFB8;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x826dc1dc
	if (ctx.cr6.gt) goto loc_826DC1DC;
loc_826DBFB8:
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826dc1dc
	if (!ctx.cr6.eq) goto loc_826DC1DC;
loc_826DBFC4:
	// lhz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 64);
	// clrldi r8,r28,32
	ctx.r8.u64 = r28.u64 & 0xFFFFFFFF;
	// ld r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 32);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 8);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// ble cr6,0x826dc02c
	if (!ctx.cr6.gt) goto loc_826DC02C;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,20(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826DC014;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dc31c
	if (ctx.cr6.lt) goto loc_826DC31C;
	// ld r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 8);
	// clrldi r11,r30,32
	ctx.r11.u64 = r30.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
loc_826DC02C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x826dc160
	if (ctx.cr6.eq) goto loc_826DC160;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// ld r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826DC054;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dc31c
	if (ctx.cr6.lt) goto loc_826DC31C;
	// stw r26,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r26.u32);
	// mr r30,r29
	r30.u64 = r29.u64;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826dc0b0
	if (ctx.cr6.eq) goto loc_826DC0B0;
	// stw r25,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r25.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// stw r29,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, r29.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826dc0a4
	if (!ctx.cr6.eq) goto loc_826DC0A4;
	// addi r10,r11,44
	ctx.r10.s64 = ctx.r11.s64 + 44;
	// addi r30,r29,-15
	r30.s64 = r29.s64 + -15;
	// stw r10,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 52);
	// stw r22,68(r9)
	REX_STORE_U32(ctx.r9.u32 + 68, r22.u32);
loc_826DC0A4:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
loc_826DC0B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826DC0C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dc31c
	if (ctx.cr6.lt) goto loc_826DC31C;
	// ld r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 8);
	// clrldi r11,r30,32
	ctx.r11.u64 = r30.u64 & 0xFFFFFFFF;
	// addi r9,r29,-15
	ctx.r9.s64 = r29.s64 + -15;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, ctx.xer);
	// std r8,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r8.u64);
	// bne cr6,0x826dc118
	if (!ctx.cr6.eq) goto loc_826DC118;
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826d4230
	ctx.lr = 0x826DC110;
	sub_826D4230(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dc31c
	if (ctx.cr6.lt) goto loc_826DC31C;
loc_826DC118:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x826c7270
	ctx.lr = 0x826DC128;
	sub_826C7270(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dc31c
	if (ctx.cr6.lt) goto loc_826DC31C;
	// li r9,4
	ctx.r9.s64 = 4;
	// lhz r6,132(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 132);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r5,10
	ctx.r5.s64 = 655360;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x826c6658
	ctx.lr = 0x826DC150;
	sub_826C6658(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dc31c
	if (ctx.cr6.lt) goto loc_826DC31C;
	// add r28,r29,r28
	r28.u64 = r29.u64 + r28.u64;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
loc_826DC160:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lhz r10,30(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, ctx.xer);
	// ble cr6,0x826dc264
	if (!ctx.cr6.gt) goto loc_826DC264;
	// stw r25,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// bl 0x826d3a88
	ctx.lr = 0x826DC190;
	sub_826D3A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dc31c
	if (ctx.cr6.lt) goto loc_826DC31C;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// lhz r9,30(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x826dc260
	if (ctx.cr6.lt) goto loc_826DC260;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826dc260
	if (ctx.cr6.eq) goto loc_826DC260;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r30,32(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// addi r27,r10,1
	r27.s64 = ctx.r10.s64 + 1;
	// lhz r8,30(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 30);
	// cmplw cr6,r8,r27
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r27.u32, ctx.xer);
	// bge cr6,0x826dbe64
	if (!ctx.cr6.lt) goto loc_826DBE64;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x826db230
	goto loc_826DB230;
loc_826DC1DC:
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r26.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, r26.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826dc228
	if (ctx.cr6.eq) goto loc_826DC228;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// lbz r8,32(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x826dc228
	if (!ctx.cr6.eq) goto loc_826DC228;
	// stw r26,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r26.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r26,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, r26.u8);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r26,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, r26.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r26,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, r26.u32);
loc_826DC228:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r26.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, r26.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, r26.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,28(r8)
	REX_STORE_U32(ctx.r8.u32 + 28, r26.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r26,32(r7)
	REX_STORE_U8(ctx.r7.u32 + 32, r26.u8);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, r26.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,40(r5)
	REX_STORE_U32(ctx.r5.u32 + 40, r26.u32);
loc_826DC260:
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
loc_826DC264:
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x826db230
	goto loc_826DB230;
loc_826DC26C:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// lwz r9,60(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x826dc2bc
	if (ctx.cr6.lt) goto loc_826DC2BC;
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826dc2a4
	if (ctx.cr6.eq) goto loc_826DC2A4;
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826dc2a4
	if (!ctx.cr6.eq) goto loc_826DC2A4;
	// stw r25,200(r31)
	REX_STORE_U32(r31.u32 + 200, r25.u32);
loc_826DC2A4:
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826dc2b4
	if (ctx.cr6.eq) goto loc_826DC2B4;
	// stw r25,204(r31)
	REX_STORE_U32(r31.u32 + 204, r25.u32);
loc_826DC2B4:
	// stw r19,80(r31)
	REX_STORE_U32(r31.u32 + 80, r19.u32);
	// b 0x826db230
	goto loc_826DB230;
loc_826DC2BC:
	// stw r16,80(r31)
	REX_STORE_U32(r31.u32 + 80, r16.u32);
	// b 0x826db230
	goto loc_826DB230;
loc_826DC2C4:
	// li r11,18
	ctx.r11.s64 = 18;
	// lwz r3,224(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x826c65a8
	ctx.lr = 0x826DC2E0;
	sub_826C65A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dc31c
	if (ctx.cr6.lt) goto loc_826DC31C;
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// b 0x826dc31c
	goto loc_826DC31C;
loc_826DC2F4:
	// stw r25,228(r31)
	REX_STORE_U32(r31.u32 + 228, r25.u32);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r3,224(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,48
	ctx.r5.u64 = ctx.r5.u64 | 48;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x826c6658
	ctx.lr = 0x826DC31C;
	sub_826C6658(ctx, base);
loc_826DC31C:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x826dc330
	if (ctx.cr6.eq) goto loc_826DC330;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x826dc338
	if (!ctx.cr6.eq) goto loc_826DC338;
loc_826DC330:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
loc_826DC338:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8275B6D8) {
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
	ctx.lr = 0x8275B6E0;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r8,44(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwz r7,36(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addi r6,r11,15
	ctx.r6.s64 = ctx.r11.s64 + 15;
	// subf r10,r7,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r7.u64;
	// srawi r5,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 4;
	// addi r4,r10,15
	ctx.r4.s64 = ctx.r10.s64 + 15;
	// addze r16,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	r16.s64 = temp.s64;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// stw r16,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r16.u32);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// addze r15,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	r15.s64 = temp.s64;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r15,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r15.u32);
	// bne cr6,0x8275b740
	if (!ctx.cr6.eq) goto loc_8275B740;
	// stw r9,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
loc_8275B740:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8275b74c
	if (!ctx.cr6.eq) goto loc_8275B74C;
	// stw r9,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
loc_8275B74C:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// li r21,0
	r21.s64 = 0;
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// lwz r7,3740(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3740);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r30,96(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,220(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r8,224(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r4,8(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r19,22372(r31)
	r19.u64 = REX_LOAD_U32(r31.u32 + 22372);
	// lwz r18,22376(r31)
	r18.u64 = REX_LOAD_U32(r31.u32 + 22376);
	// lwz r17,22380(r31)
	r17.u64 = REX_LOAD_U32(r31.u32 + 22380);
	// srawi r5,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// mullw r7,r30,r11
	ctx.r7.s64 = int64_t(r30.s32) * int64_t(ctx.r11.s32);
	// addze r11,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r5,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 1;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addze r10,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r10.s64 = temp.s64;
	// add r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r6,r4,r8
	ctx.r6.u64 = ctx.r4.u64 + ctx.r8.u64;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r8,r5,r10
	ctx.r8.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r20,r7,r9
	r20.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r22,r8,r11
	r22.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r7,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// beq cr6,0x8275b938
	if (ctx.cr6.eq) goto loc_8275B938;
loc_8275B7CC:
	// mr r29,r20
	r29.u64 = r20.u64;
	// mr r30,r22
	r30.u64 = r22.u64;
	// mr r28,r19
	r28.u64 = r19.u64;
	// mr r27,r18
	r27.u64 = r18.u64;
	// mr r26,r17
	r26.u64 = r17.u64;
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x8275b900
	if (ctx.cr6.eq) goto loc_8275B900;
	// subf r23,r22,r7
	r23.u64 = ctx.r7.u64 - r22.u64;
loc_8275B7F0:
	// addi r11,r16,-1
	ctx.r11.s64 = r16.s64 + -1;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8275b860
	if (ctx.cr6.eq) goto loc_8275B860;
	// addi r11,r15,-1
	ctx.r11.s64 = r15.s64 + -1;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8275b858
	if (ctx.cr6.eq) goto loc_8275B858;
	// lwz r11,15656(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15656);
	// add r9,r23,r30
	ctx.r9.u64 = r23.u64 + r30.u64;
	// lwz r10,15916(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15916);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r24,15652(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 15652);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r14,108(r31)
	r14.u64 = REX_LOAD_U32(r31.u32 + 108);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r10,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r14.u32);
	// bctrl 
	ctx.lr = 0x8275B854;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8275b8d4
	goto loc_8275B8D4;
loc_8275B858:
	// li r24,16
	r24.s64 = 16;
	// b 0x8275b864
	goto loc_8275B864;
loc_8275B860:
	// lwz r24,128(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
loc_8275B864:
	// addi r11,r15,-1
	ctx.r11.s64 = r15.s64 + -1;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r11.u32, ctx.xer);
	// li r11,16
	ctx.r11.s64 = 16;
	// bne cr6,0x8275b878
	if (!ctx.cr6.eq) goto loc_8275B878;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_8275B878:
	// lwz r16,15656(r31)
	r16.u64 = REX_LOAD_U32(r31.u32 + 15656);
	// add r9,r23,r30
	ctx.r9.u64 = r23.u64 + r30.u64;
	// lwz r10,15920(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15920);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r15,15652(r31)
	r15.u64 = REX_LOAD_U32(r31.u32 + 15652);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r14,108(r31)
	r14.u64 = REX_LOAD_U32(r31.u32 + 108);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r16,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r16.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r10,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r16,140(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// mtctr r16
	ctx.ctr.u64 = r16.u64;
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r24.u32);
	// stw r15,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r15.u32);
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r14.u32);
	// bctrl 
	ctx.lr = 0x8275B8CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r15,144(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r16,148(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
loc_8275B8D4:
	// lwz r11,15672(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15672);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lwz r10,15664(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15664);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// add r28,r10,r28
	r28.u64 = ctx.r10.u64 + r28.u64;
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// add r26,r11,r26
	r26.u64 = ctx.r11.u64 + r26.u64;
	// cmplw cr6,r25,r16
	ctx.cr6.compare<uint32_t>(r25.u32, r16.u32, ctx.xer);
	// blt cr6,0x8275b7f0
	if (ctx.cr6.lt) goto loc_8275B7F0;
	// lwz r7,136(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
loc_8275B900:
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// lwz r11,15684(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15684);
	// lwz r8,100(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 100);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r9,15676(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15676);
	// add r22,r10,r22
	r22.u64 = ctx.r10.u64 + r22.u64;
	// stw r7,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// add r20,r8,r20
	r20.u64 = ctx.r8.u64 + r20.u64;
	// add r19,r9,r19
	r19.u64 = ctx.r9.u64 + r19.u64;
	// add r18,r11,r18
	r18.u64 = ctx.r11.u64 + r18.u64;
	// add r17,r11,r17
	r17.u64 = ctx.r11.u64 + r17.u64;
	// cmplw cr6,r21,r15
	ctx.cr6.compare<uint32_t>(r21.u32, r15.u32, ctx.xer);
	// blt cr6,0x8275b7cc
	if (ctx.cr6.lt) goto loc_8275B7CC;
loc_8275B938:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82769B90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82769B98;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r4,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// stb r6,8(r31)
	REX_STORE_U8(r31.u32 + 8, ctx.r6.u8);
	// beq cr6,0x82769bc8
	if (ctx.cr6.eq) goto loc_82769BC8;
	// bl 0x8271b1a0
	ctx.lr = 0x82769BC0;
	sub_8271B1A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82769BC8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi r30,r30,24
	r30.u64 = r30.u32 & 0xFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,27,5,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFE;
	// slw r10,r10,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// rlwinm r3,r9,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x8271b190
	ctx.lr = 0x82769BEC;
	sub_8271B190(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82769c14
	if (ctx.cr6.eq) goto loc_82769C14;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82769898
	ctx.lr = 0x82769C08;
	sub_82769898(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_82769C14:
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8276BD40) {
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
	ctx.lr = 0x8276BD48;
	// lwz r3,256(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8276c02c
	if (ctx.cr6.eq) goto loc_8276C02C;
	// li r9,8
	ctx.r9.s64 = 8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r5,8
	ctx.r10.s64 = ctx.r5.s64 + 8;
	// addi r11,r6,2
	ctx.r11.s64 = ctx.r6.s64 + 2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// beq cr6,0x8276bea4
	if (ctx.cr6.eq) goto loc_8276BEA4;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
loc_8276BD70:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r5,1(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r4,-4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// lbz r31,-1(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lwz r5,-8(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + -8);
	// add r6,r31,r4
	ctx.r6.u64 = r31.u64 + ctx.r4.u64;
	// lbz r30,-2(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// or r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 | ctx.r9.u64;
	// add r5,r30,r5
	ctx.r5.u64 = r30.u64 + ctx.r5.u64;
	// or r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 | ctx.r6.u64;
	// or r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rlwinm r4,r4,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFF00;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8276bdd4
	if (!ctx.cr6.eq) goto loc_8276BDD4;
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rlwinm r6,r4,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r4,r8
	ctx.r9.u64 = ctx.r4.u64 | ctx.r8.u64;
	// b 0x8276bdfc
	goto loc_8276BDFC;
loc_8276BDD4:
	// lbzx r5,r5,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// lbzx r4,r6,r3
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// rotlwi r6,r5,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbzx r5,r9,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// lbzx r9,r8,r3
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// or r8,r6,r4
	ctx.r8.u64 = ctx.r6.u64 | ctx.r4.u64;
	// rlwinm r6,r8,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
loc_8276BDFC:
	// stw r9,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// lwz r6,20(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lbz r5,5(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lwz r4,12(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lbz r31,3(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r30,2(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lwz r5,8(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r6,r31,r4
	ctx.r6.u64 = r31.u64 + ctx.r4.u64;
	// or r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 | ctx.r9.u64;
	// add r5,r30,r5
	ctx.r5.u64 = r30.u64 + ctx.r5.u64;
	// or r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 | ctx.r6.u64;
	// or r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rlwinm r4,r4,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFF00;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8276be64
	if (!ctx.cr6.eq) goto loc_8276BE64;
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rlwinm r6,r4,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r4,r8
	ctx.r9.u64 = ctx.r4.u64 | ctx.r8.u64;
	// b 0x8276be8c
	goto loc_8276BE8C;
loc_8276BE64:
	// lbzx r5,r5,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// lbzx r4,r6,r3
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// rotlwi r6,r5,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbzx r5,r9,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// lbzx r9,r8,r3
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// or r8,r6,r4
	ctx.r8.u64 = ctx.r6.u64 | ctx.r4.u64;
	// rlwinm r6,r8,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
loc_8276BE8C:
	// stw r9,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r9.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r29,r29,r7
	r29.u64 = r29.u64 + ctx.r7.u64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// bdnz 0x8276bd70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8276BD70;
	// b 0x826a1cfc
	return;
loc_8276BEA4:
	// subf r8,r6,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r6.u64;
	// addi r28,r4,4
	r28.s64 = ctx.r4.s64 + 4;
	// addi r27,r8,-2
	r27.s64 = ctx.r8.s64 + -2;
loc_8276BEB0:
	// lbz r9,-1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r5,-2(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r31,r5,r9
	r31.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lbz r6,1(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// add r30,r9,r8
	r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// srawi r29,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r29.s64 = r31.s32 >> 1;
	// lwz r5,-4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// srawi r31,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	r31.s64 = r30.s32 >> 1;
	// lwz r30,-8(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + -8);
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// srawi r6,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 1;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r8,r6,r4
	ctx.r8.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r6,r31,r5
	ctx.r6.u64 = r31.u64 + ctx.r5.u64;
	// or r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 | ctx.r9.u64;
	// add r5,r29,r30
	ctx.r5.u64 = r29.u64 + r30.u64;
	// or r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 | ctx.r6.u64;
	// or r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rlwinm r4,r4,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFF00;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8276bf38
	if (!ctx.cr6.eq) goto loc_8276BF38;
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rlwinm r6,r4,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r4,r8
	ctx.r9.u64 = ctx.r4.u64 | ctx.r8.u64;
	// b 0x8276bf60
	goto loc_8276BF60;
loc_8276BF38:
	// lbzx r5,r5,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// lbzx r4,r6,r3
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// rotlwi r6,r5,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbzx r5,r9,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// lbzx r9,r8,r3
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// or r8,r6,r4
	ctx.r8.u64 = ctx.r6.u64 | ctx.r4.u64;
	// rlwinm r6,r8,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
loc_8276BF60:
	// stwx r9,r27,r11
	REX_STORE_U32(r27.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r31,20(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r29,12(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lbz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r6,5(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r4,6(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r9,3(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r26,r4,r6
	r26.u64 = ctx.r4.u64 + ctx.r6.u64;
	// lwz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// add r30,r8,r9
	r30.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// srawi r5,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// srawi r6,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r6.s64 = r30.s32 >> 1;
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// srawi r30,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	r30.s64 = r26.s32 >> 1;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r8,r30,r31
	ctx.r8.u64 = r30.u64 + r31.u64;
	// add r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 + r29.u64;
	// or r31,r8,r9
	r31.u64 = ctx.r8.u64 | ctx.r9.u64;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// or r4,r31,r6
	ctx.r4.u64 = r31.u64 | ctx.r6.u64;
	// or r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rlwinm r4,r4,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFF00;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8276bfec
	if (!ctx.cr6.eq) goto loc_8276BFEC;
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rlwinm r6,r4,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r4,r8
	ctx.r9.u64 = ctx.r4.u64 | ctx.r8.u64;
	// b 0x8276c014
	goto loc_8276C014;
loc_8276BFEC:
	// lbzx r5,r5,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// lbzx r4,r6,r3
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// rotlwi r6,r5,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbzx r5,r9,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// lbzx r9,r8,r3
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// or r8,r6,r4
	ctx.r8.u64 = ctx.r6.u64 | ctx.r4.u64;
	// rlwinm r6,r8,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
loc_8276C014:
	// stw r9,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r28,r28,r7
	r28.u64 = r28.u64 + ctx.r7.u64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// bdnz 0x8276beb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8276BEB0;
	// b 0x826a1cfc
	return;
loc_8276C02C:
	// li r11,8
	ctx.r11.s64 = 8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x8276c1b0
	if (ctx.cr6.eq) goto loc_8276C1B0;
	// addi r10,r5,8
	ctx.r10.s64 = ctx.r5.s64 + 8;
loc_8276C040:
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// lbzx r28,r6,r7
	r28.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// lbz r29,1(r6)
	r29.u64 = REX_LOAD_U8(ctx.r6.u32 + 1);
	// lbz r31,2(r6)
	r31.u64 = REX_LOAD_U8(ctx.r6.u32 + 2);
	// add r26,r9,r28
	r26.u64 = ctx.r9.u64 + r28.u64;
	// lbz r8,3(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 3);
	// lbz r30,1(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,3(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// add r25,r5,r31
	r25.u64 = ctx.r5.u64 + r31.u64;
	// lwz r27,0(r10)
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r28,4(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// srawi r31,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	r31.s64 = r26.s32 >> 1;
	// lwz r29,-4(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// srawi r5,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r5.s64 = r30.s32 >> 1;
	// lwz r30,-8(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + -8);
	// srawi r9,r25,1
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x1) != 0);
	ctx.r9.s64 = r25.s32 >> 1;
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + r28.u64;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + r29.u64;
	// or r29,r8,r9
	r29.u64 = ctx.r8.u64 | ctx.r9.u64;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// or r30,r29,r5
	r30.u64 = r29.u64 | ctx.r5.u64;
	// or r30,r30,r31
	r30.u64 = r30.u64 | r31.u64;
	// rlwinm r30,r30,0,0,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFF00;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8276c0c4
	if (!ctx.cr6.eq) goto loc_8276C0C4;
	// rlwinm r31,r31,8,0,23
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 8) & 0xFFFFFF00;
	// b 0x8276c0d8
	goto loc_8276C0D8;
loc_8276C0C4:
	// lbzx r31,r31,r3
	r31.u64 = REX_LOAD_U8(r31.u32 + ctx.r3.u32);
	// lbzx r5,r5,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// lbzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// rotlwi r31,r31,8
	r31.u64 = __builtin_rotateleft32(r31.u32, 8);
	// lbzx r8,r8,r3
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
loc_8276C0D8:
	// or r5,r31,r5
	ctx.r5.u64 = r31.u64 | ctx.r5.u64;
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 | ctx.r9.u64;
	// rlwinm r5,r9,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r5,r8
	ctx.r9.u64 = ctx.r5.u64 | ctx.r8.u64;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lbz r30,6(r6)
	r30.u64 = REX_LOAD_U8(ctx.r6.u32 + 6);
	// lbz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lwz r28,16(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lbz r8,5(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 5);
	// lbz r9,5(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r31,4(r6)
	r31.u64 = REX_LOAD_U8(ctx.r6.u32 + 4);
	// add r29,r9,r8
	r29.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r8,7(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 7);
	// lbz r9,7(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbz r31,6(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// lwz r30,12(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// srawi r5,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r6,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r6.s64 = r29.s32 >> 1;
	// lwz r29,20(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// srawi r9,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	ctx.r9.s64 = r31.s32 >> 1;
	// lwz r31,8(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + r29.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// or r30,r8,r9
	r30.u64 = ctx.r8.u64 | ctx.r9.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// or r31,r30,r6
	r31.u64 = r30.u64 | ctx.r6.u64;
	// or r31,r31,r5
	r31.u64 = r31.u64 | ctx.r5.u64;
	// rlwinm r31,r31,0,0,23
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFF00;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8276c170
	if (!ctx.cr6.eq) goto loc_8276C170;
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// b 0x8276c184
	goto loc_8276C184;
loc_8276C170:
	// lbzx r5,r5,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// lbzx r6,r6,r3
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// lbzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// rotlwi r5,r5,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbzx r8,r8,r3
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
loc_8276C184:
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 | ctx.r9.u64;
	// rlwinm r6,r9,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 | ctx.r8.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stw r5,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r5.u32);
	// add r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 + ctx.r7.u64;
	// bdnz 0x8276c040
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8276C040;
	// b 0x826a1cfc
	return;
loc_8276C1B0:
	// addi r10,r4,2
	ctx.r10.s64 = ctx.r4.s64 + 2;
	// addi r9,r5,-4
	ctx.r9.s64 = ctx.r5.s64 + -4;
loc_8276C1B8:
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbz r30,1(r6)
	r30.u64 = REX_LOAD_U8(ctx.r6.u32 + 1);
	// lbzx r31,r6,r7
	r31.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// lbz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// lwz r4,4(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + r30.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// rlwinm r5,r5,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lbzx r5,r4,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// stb r5,-2(r10)
	REX_STORE_U8(ctx.r10.u32 + -2, ctx.r5.u8);
	// lwz r5,8(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lbz r31,2(r6)
	r31.u64 = REX_LOAD_U8(ctx.r6.u32 + 2);
	// lbz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + r31.u64;
	// add r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 + ctx.r8.u64;
	// rlwinm r8,r4,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lbzx r5,r8,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// stb r5,-1(r10)
	REX_STORE_U8(ctx.r10.u32 + -1, ctx.r5.u8);
	// lbz r31,2(r6)
	r31.u64 = REX_LOAD_U8(ctx.r6.u32 + 2);
	// lbz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r4,3(r6)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + 3);
	// lbz r8,3(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lwz r4,12(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// rlwinm r5,r5,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lbzx r5,r4,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// stb r5,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// lwz r5,16(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lbz r31,4(r6)
	r31.u64 = REX_LOAD_U8(ctx.r6.u32 + 4);
	// lbz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + r31.u64;
	// add r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 + ctx.r8.u64;
	// rlwinm r8,r4,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lbzx r5,r8,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// stb r5,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r5.u8);
	// lbz r31,4(r6)
	r31.u64 = REX_LOAD_U8(ctx.r6.u32 + 4);
	// lbz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r4,5(r6)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + 5);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lwz r4,20(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// rlwinm r5,r5,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lbzx r5,r4,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// stb r5,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r5.u8);
	// lwz r5,24(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// lbz r31,6(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r4,6(r6)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + 6);
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + r31.u64;
	// add r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 + ctx.r8.u64;
	// rlwinm r8,r4,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lbzx r5,r8,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// stb r5,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r5.u8);
	// lbz r5,6(r6)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + 6);
	// lbz r31,6(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r4,7(r6)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + 7);
	// lbz r8,7(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lwz r4,28(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// rlwinm r5,r5,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lbzx r5,r4,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// stb r5,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r5.u8);
	// lbz r4,8(r6)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + 8);
	// lbz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwzu r11,32(r9)
	ea = 32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 + ctx.r8.u64;
	// rlwinm r8,r4,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbzx r8,r11,r3
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// stb r8,5(r10)
	REX_STORE_U8(ctx.r10.u32 + 5, ctx.r8.u8);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// bdnz 0x8276c1b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8276C1B8;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_827924C8) {
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
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-10944
	ctx.r3.s64 = ctx.r11.s64 + -10944;
	// bl 0x822f65c0
	ctx.lr = 0x827924E0;
	sub_822F65C0(ctx, base);
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r3,r11,13496
	ctx.r3.s64 = ctx.r11.s64 + 13496;
	// bl 0x8269d008
	ctx.lr = 0x827924EC;
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

DEFINE_REX_FUNC(sub_82792B40) {
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
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// li r5,504
	ctx.r5.s64 = 504;
	// addi r31,r11,22312
	r31.s64 = ctx.r11.s64 + 22312;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x826a2e60
	ctx.lr = 0x82792B68;
	sub_826A2E60(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,528
	ctx.r3.s64 = r31.s64 + 528;
	// addi r4,r11,-14032
	ctx.r4.s64 = ctx.r11.s64 + -14032;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x826a1e70
	ctx.lr = 0x82792B7C;
	sub_826A1E70(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = r31.s64 + 600;
	// bl 0x826a2e60
	ctx.lr = 0x82792B8C;
	sub_826A2E60(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,31
	ctx.r9.s64 = 31;
	// stw r10,1044(r31)
	REX_STORE_U32(r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	REX_STORE_U32(r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	REX_STORE_U32(r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	REX_STORE_U32(r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	REX_STORE_U32(r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	REX_STORE_U32(r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	REX_STORE_U32(r31.u32 + 1064, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82793788) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000266
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_827938B8) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010130
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793A08) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100d2
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793B88) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100e8
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793D28) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101c3
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793EF8) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010154
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82794108) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000014
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82794318) {
	REX_FUNC_PROLOGUE();
	// .long 0x201012f
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8279BFD0) {
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
	ctx.lr = 0x8279BFD8;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r25,50(r3)
	r25.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lwz r26,0(r7)
	r26.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r17,r4
	r17.u64 = ctx.r4.u64;
	// lwz r27,348(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// mr r15,r5
	r15.u64 = ctx.r5.u64;
	// stw r5,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r5.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r20,0
	r20.s64 = 0;
	// srawi r21,r25,1
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x1) != 0);
	r21.s64 = r25.s32 >> 1;
	// beq cr6,0x8279c020
	if (ctx.cr6.eq) goto loc_8279C020;
	// lwz r11,1304(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1304);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r16,r20
	r16.u64 = r20.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8279c024
	if (ctx.cr6.eq) goto loc_8279C024;
loc_8279C020:
	// li r16,1
	r16.s64 = 1;
loc_8279C024:
	// lwz r10,340(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 340);
	// lwz r31,0(r22)
	r31.u64 = REX_LOAD_U32(r22.u32 + 0);
	// lhz r24,62(r22)
	r24.u64 = REX_LOAD_U16(r22.u32 + 62);
	// lhz r19,66(r22)
	r19.u64 = REX_LOAD_U16(r22.u32 + 66);
	// lhz r23,64(r22)
	r23.u64 = REX_LOAD_U16(r22.u32 + 64);
	// lbz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r30,0(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lhz r18,68(r22)
	r18.u64 = REX_LOAD_U16(r22.u32 + 68);
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
	// blt cr6,0x8279c128
	if (ctx.cr6.lt) goto loc_8279C128;
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
	// bge cr6,0x8279c120
	if (!ctx.cr6.lt) goto loc_8279C120;
loc_8279C088:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8279c0b4
	if (ctx.cr6.lt) goto loc_8279C0B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x8279C0A4;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8279c088
	if (ctx.cr6.eq) goto loc_8279C088;
	// srawi r29,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r29.s64 = r29.s32 >> 4;
	// b 0x8279c168
	goto loc_8279C168;
loc_8279C0B4:
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
loc_8279C120:
	// srawi r29,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r29.s64 = r29.s32 >> 4;
	// b 0x8279c168
	goto loc_8279C168;
loc_8279C128:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x8279C130;
	sub_82725F80(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r28,r11,32768
	r28.u64 = ctx.r11.u64 | 32768;
loc_8279C138:
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
	ctx.lr = 0x8279C150;
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
	// blt cr6,0x8279c138
	if (ctx.cr6.lt) goto loc_8279C138;
loc_8279C168:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8279c184
	if (ctx.cr6.eq) goto loc_8279C184;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cd0
	return;
loc_8279C184:
	// rlwinm r11,r29,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x8;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8279c1a0
	if (ctx.cr6.eq) goto loc_8279C1A0;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r4,336(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 336);
	// bl 0x8279a080
	ctx.lr = 0x8279C1A0;
	sub_8279A080(ctx, base);
loc_8279C1A0:
	// stw r20,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r20.u32);
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// stw r20,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r20.u32);
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// stw r20,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r20.u32);
	// beq cr6,0x8279c1dc
	if (ctx.cr6.eq) goto loc_8279C1DC;
	// lwz r11,-24(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + -24);
	// rlwinm r9,r11,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8279c1dc
	if (ctx.cr6.eq) goto loc_8279C1DC;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
loc_8279C1DC:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// bne cr6,0x8279c2b8
	if (!ctx.cr6.eq) goto loc_8279C2B8;
	// rlwinm r9,r21,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r25,r26
	ctx.r11.u64 = r26.u64 - r25.u64;
	// add r9,r21,r9
	ctx.r9.u64 = r21.u64 + ctx.r9.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r8,r8,r17
	ctx.r8.u64 = r17.u64 - ctx.r8.u64;
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r7,r9,0,14,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8279c244
	if (ctx.cr6.eq) goto loc_8279C244;
	// rlwinm r9,r9,0,21,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x700;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r9,512
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 512, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bge cr6,0x8279c230
	if (!ctx.cr6.lt) goto loc_8279C230;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lwzx r5,r9,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + r27.u32);
	// stwx r5,r7,r6
	REX_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r5.u32);
	// b 0x8279c244
	goto loc_8279C244;
loc_8279C230:
	// subf r9,r25,r11
	ctx.r9.u64 = ctx.r11.u64 - r25.u64;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r6,r27
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + r27.u32);
	// stwx r4,r7,r5
	REX_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r4.u32);
loc_8279C244:
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(r21.s32, 1, ctx.xer);
	// beq cr6,0x8279c2b8
	if (ctx.cr6.eq) goto loc_8279C2B8;
	// addi r9,r21,-1
	ctx.r9.s64 = r21.s64 + -1;
	// cmpw cr6,r15,r9
	ctx.cr6.compare<int32_t>(r15.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8279c264
	if (ctx.cr6.eq) goto loc_8279C264;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r9,r8,24
	ctx.r9.s64 = ctx.r8.s64 + 24;
	// b 0x8279c26c
	goto loc_8279C26C;
loc_8279C264:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r8,-24
	ctx.r9.s64 = ctx.r8.s64 + -24;
loc_8279C26C:
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r9,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8279c2b8
	if (ctx.cr6.eq) goto loc_8279C2B8;
	// rlwinm r9,r9,0,21,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r9,512
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 512, ctx.xer);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bge cr6,0x8279c2a4
	if (!ctx.cr6.lt) goto loc_8279C2A4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// lwzx r7,r11,r27
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// stwx r7,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// b 0x8279c2b8
	goto loc_8279C2B8;
loc_8279C2A4:
	// subf r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - r25.u64;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r27
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + r27.u32);
	// stwx r6,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r6.u32);
loc_8279C2B8:
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8279c3e8
	if (!ctx.cr6.gt) goto loc_8279C3E8;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
loc_8279C2DC:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r4,r5,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8279c2fc
	if (ctx.cr6.eq) goto loc_8279C2FC;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stwu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
	// b 0x8279c304
	goto loc_8279C304;
loc_8279C2FC:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwu r5,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r8.u32 = ea;
loc_8279C304:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8279c2dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8279C2DC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8279c3e8
	if (!ctx.cr6.gt) goto loc_8279C3E8;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x8279c344
	if (ctx.cr6.eq) goto loc_8279C344;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x8279c344
	if (ctx.cr6.eq) goto loc_8279C344;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8279c338
	if (ctx.cr6.lt) goto loc_8279C338;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8279c3ec
	goto loc_8279C3EC;
loc_8279C338:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8279c3ec
	goto loc_8279C3EC;
loc_8279C344:
	// lhz r11,114(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 114);
	// lhz r10,110(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// lhz r9,106(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// extsh r31,r9
	r31.s64 = ctx.r9.s16;
	// lhz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 108);
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
	// b 0x8279c3ec
	goto loc_8279C3EC;
loc_8279C3E8:
	// stw r20,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r20.u32);
loc_8279C3EC:
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// rlwinm r8,r29,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x4;
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
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// and r5,r7,r19
	ctx.r5.u64 = ctx.r7.u64 & r19.u64;
	// add r31,r11,r27
	r31.u64 = ctx.r11.u64 + r27.u64;
	// and r4,r6,r18
	ctx.r4.u64 = ctx.r6.u64 & r18.u64;
	// subf r3,r24,r5
	ctx.r3.u64 = ctx.r5.u64 - r24.u64;
	// subf r10,r23,r4
	ctx.r10.u64 = ctx.r4.u64 - r23.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sth r3,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r3.u16);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// sthx r10,r11,r27
	REX_STORE_U16(ctx.r11.u32 + r27.u32, ctx.r10.u16);
	// beq cr6,0x8279c44c
	if (ctx.cr6.eq) goto loc_8279C44C;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r4,336(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 336);
	// bl 0x8279a080
	ctx.lr = 0x8279C44C;
	sub_8279A080(ctx, base);
loc_8279C44C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r20,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r20.u32);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// stw r20,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r20.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bne cr6,0x8279c534
	if (!ctx.cr6.eq) goto loc_8279C534;
	// rlwinm r11,r21,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r25,r26
	ctx.r10.u64 = r26.u64 - r25.u64;
	// add r9,r21,r11
	ctx.r9.u64 = r21.u64 + ctx.r11.u64;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r7,r17
	ctx.r9.u64 = r17.u64 - ctx.r7.u64;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r6,r10,0,14,14
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8279c4c0
	if (ctx.cr6.eq) goto loc_8279C4C0;
	// rlwinm r10,r10,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x700;
	// li r8,2
	ctx.r8.s64 = 2;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bge cr6,0x8279c4b0
	if (!ctx.cr6.lt) goto loc_8279C4B0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r27
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// b 0x8279c4c0
	goto loc_8279C4C0;
loc_8279C4B0:
	// subf r10,r25,r11
	ctx.r10.u64 = ctx.r11.u64 - r25.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r27
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + r27.u32);
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
loc_8279C4C0:
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(r21.s32, 1, ctx.xer);
	// beq cr6,0x8279c534
	if (ctx.cr6.eq) goto loc_8279C534;
	// addi r10,r21,-1
	ctx.r10.s64 = r21.s64 + -1;
	// cmpw cr6,r15,r10
	ctx.cr6.compare<int32_t>(r15.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8279c4e0
	if (ctx.cr6.eq) goto loc_8279C4E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r9,24
	ctx.r10.s64 = ctx.r9.s64 + 24;
	// b 0x8279c4e8
	goto loc_8279C4E8;
loc_8279C4E0:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r10,r9,-24
	ctx.r10.s64 = ctx.r9.s64 + -24;
loc_8279C4E8:
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r10,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8279c534
	if (ctx.cr6.eq) goto loc_8279C534;
	// rlwinm r10,r10,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bge cr6,0x8279c520
	if (!ctx.cr6.lt) goto loc_8279C520;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// lwzx r7,r11,r27
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// stwx r7,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u32);
	// b 0x8279c534
	goto loc_8279C534;
loc_8279C520:
	// subf r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - r25.u64;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r27
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + r27.u32);
	// stwx r6,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r6.u32);
loc_8279C534:
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8279c670
	if (!ctx.cr6.gt) goto loc_8279C670;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
loc_8279C558:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r4,r5,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8279c578
	if (ctx.cr6.eq) goto loc_8279C578;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// b 0x8279c580
	goto loc_8279C580;
loc_8279C578:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
loc_8279C580:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8279c558
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8279C558;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8279c670
	if (!ctx.cr6.gt) goto loc_8279C670;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x8279c5c0
	if (ctx.cr6.eq) goto loc_8279C5C0;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x8279c5c0
	if (ctx.cr6.eq) goto loc_8279C5C0;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8279c5b4
	if (ctx.cr6.lt) goto loc_8279C5B4;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8279c674
	goto loc_8279C674;
loc_8279C5B4:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8279c674
	goto loc_8279C674;
loc_8279C5C0:
	// lhz r11,114(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 114);
	// lhz r10,110(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// lhz r9,106(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// extsh r30,r9
	r30.s64 = ctx.r9.s16;
	// lhz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 108);
	// extsh r28,r11
	r28.s64 = ctx.r11.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// std r3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lwz r15,324(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// subf r11,r30,r5
	ctx.r11.u64 = ctx.r5.u64 - r30.u64;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r9,r30,r7
	ctx.r9.u64 = ctx.r7.u64 - r30.u64;
	// subf r8,r28,r4
	ctx.r8.u64 = ctx.r4.u64 - r28.u64;
	// subf r14,r6,r4
	r14.u64 = ctx.r4.u64 - ctx.r6.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r3,r28,r6
	ctx.r3.u64 = ctx.r6.u64 - r28.u64;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r14,r14,r8
	r14.u64 = r14.u64 ^ ctx.r8.u64;
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// xor r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 ^ ctx.r8.u64;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// srawi r9,r14,31
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = r14.s32 >> 31;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// or r14,r11,r10
	r14.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & r30.u64;
	// andc r7,r7,r14
	ctx.r7.u64 = ctx.r7.u64 & ~r14.u64;
	// andc r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r3.u64;
	// ld r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// and r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 & r28.u64;
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
	// b 0x8279c674
	goto loc_8279C674;
loc_8279C670:
	// stw r20,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r20.u32);
loc_8279C674:
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// rlwinm r8,r29,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2;
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
	// and r5,r7,r19
	ctx.r5.u64 = ctx.r7.u64 & r19.u64;
	// and r4,r6,r18
	ctx.r4.u64 = ctx.r6.u64 & r18.u64;
	// subf r3,r24,r5
	ctx.r3.u64 = ctx.r5.u64 - r24.u64;
	// subf r11,r23,r4
	ctx.r11.u64 = ctx.r4.u64 - r23.u64;
	// sth r3,6(r31)
	REX_STORE_U16(r31.u32 + 6, ctx.r3.u16);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// sth r11,4(r31)
	REX_STORE_U16(r31.u32 + 4, ctx.r11.u16);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8279c6cc
	if (ctx.cr6.eq) goto loc_8279C6CC;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r4,336(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 336);
	// bl 0x8279a080
	ctx.lr = 0x8279C6CC;
	sub_8279A080(ctx, base);
loc_8279C6CC:
	// stw r20,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r20.u32);
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// stw r20,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r20.u32);
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// stw r20,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r20.u32);
	// beq cr6,0x8279c70c
	if (ctx.cr6.eq) goto loc_8279C70C;
	// lwz r11,-24(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + -24);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279c70c
	if (ctx.cr6.eq) goto loc_8279C70C;
	// add r11,r26,r25
	ctx.r11.u64 = r26.u64 + r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + r27.u64;
	// lwz r9,-4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
loc_8279C70C:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// bne cr6,0x8279c7a0
	if (!ctx.cr6.eq) goto loc_8279C7A0;
	// rlwinm r11,r21,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r25,r26
	ctx.r10.u64 = r26.u64 - r25.u64;
	// add r11,r21,r11
	ctx.r11.u64 = r21.u64 + ctx.r11.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r9,r17
	ctx.r11.u64 = r17.u64 - ctx.r9.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r8,0,14,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8279c750
	if (ctx.cr6.eq) goto loc_8279C750;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwzx r5,r9,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + r27.u32);
	// stwx r5,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r5.u32);
loc_8279C750:
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(r21.s32, 1, ctx.xer);
	// beq cr6,0x8279c7a0
	if (ctx.cr6.eq) goto loc_8279C7A0;
	// addi r9,r21,-1
	ctx.r9.s64 = r21.s64 + -1;
	// cmpw cr6,r15,r9
	ctx.cr6.compare<int32_t>(r15.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8279c770
	if (ctx.cr6.eq) goto loc_8279C770;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// b 0x8279c778
	goto loc_8279C778;
loc_8279C770:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
loc_8279C778:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r11,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8279c7a0
	if (ctx.cr6.eq) goto loc_8279C7A0;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwzx r8,r11,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
loc_8279C7A0:
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8279c8d0
	if (!ctx.cr6.gt) goto loc_8279C8D0;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
loc_8279C7C4:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r4,r5,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8279c7e4
	if (ctx.cr6.eq) goto loc_8279C7E4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// b 0x8279c7ec
	goto loc_8279C7EC;
loc_8279C7E4:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
loc_8279C7EC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8279c7c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8279C7C4;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8279c8d0
	if (!ctx.cr6.gt) goto loc_8279C8D0;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x8279c82c
	if (ctx.cr6.eq) goto loc_8279C82C;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x8279c82c
	if (ctx.cr6.eq) goto loc_8279C82C;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8279c820
	if (ctx.cr6.lt) goto loc_8279C820;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8279c8d4
	goto loc_8279C8D4;
loc_8279C820:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8279c8d4
	goto loc_8279C8D4;
loc_8279C82C:
	// lhz r11,114(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 114);
	// lhz r10,110(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// lhz r9,106(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// extsh r31,r9
	r31.s64 = ctx.r9.s16;
	// lhz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 108);
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
	// b 0x8279c8d4
	goto loc_8279C8D4;
loc_8279C8D0:
	// stw r20,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r20.u32);
loc_8279C8D4:
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// add r31,r26,r25
	r31.u64 = r26.u64 + r25.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 + r24.u64;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r23
	ctx.r8.u64 = ctx.r10.u64 + r23.u64;
	// and r7,r9,r19
	ctx.r7.u64 = ctx.r9.u64 & r19.u64;
	// and r6,r8,r18
	ctx.r6.u64 = ctx.r8.u64 & r18.u64;
	// add r30,r11,r27
	r30.u64 = ctx.r11.u64 + r27.u64;
	// subf r5,r24,r7
	ctx.r5.u64 = ctx.r7.u64 - r24.u64;
	// subf r4,r23,r6
	ctx.r4.u64 = ctx.r6.u64 - r23.u64;
	// clrlwi r9,r29,31
	ctx.r9.u64 = r29.u32 & 0x1;
	// sthx r4,r11,r27
	REX_STORE_U16(ctx.r11.u32 + r27.u32, ctx.r4.u16);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// sth r5,2(r30)
	REX_STORE_U16(r30.u32 + 2, ctx.r5.u16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8279c938
	if (ctx.cr6.eq) goto loc_8279C938;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r4,336(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 336);
	// bl 0x8279a080
	ctx.lr = 0x8279C938;
	sub_8279A080(ctx, base);
loc_8279C938:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r20,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r20.u32);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// stw r20,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r20.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bne cr6,0x8279c9e0
	if (!ctx.cr6.eq) goto loc_8279C9E0;
	// rlwinm r11,r21,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r21,r11
	ctx.r9.u64 = r21.u64 + ctx.r11.u64;
	// subf r11,r10,r31
	ctx.r11.u64 = r31.u64 - ctx.r10.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// subf r11,r8,r17
	ctx.r11.u64 = r17.u64 - ctx.r8.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r7,0,14,14
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8279c990
	if (ctx.cr6.eq) goto loc_8279C990;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwzx r8,r9,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + r27.u32);
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
loc_8279C990:
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(r21.s32, 1, ctx.xer);
	// beq cr6,0x8279c9e0
	if (ctx.cr6.eq) goto loc_8279C9E0;
	// addi r9,r21,-1
	ctx.r9.s64 = r21.s64 + -1;
	// cmpw cr6,r15,r9
	ctx.cr6.compare<int32_t>(r15.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8279c9b0
	if (ctx.cr6.eq) goto loc_8279C9B0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// b 0x8279c9b8
	goto loc_8279C9B8;
loc_8279C9B0:
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
loc_8279C9B8:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r11,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8279c9e0
	if (ctx.cr6.eq) goto loc_8279C9E0;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwzx r8,r11,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
loc_8279C9E0:
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8279cb10
	if (!ctx.cr6.gt) goto loc_8279CB10;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
loc_8279CA04:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r4,r5,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8279ca24
	if (ctx.cr6.eq) goto loc_8279CA24;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// b 0x8279ca2c
	goto loc_8279CA2C;
loc_8279CA24:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
loc_8279CA2C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8279ca04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8279CA04;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8279cb10
	if (!ctx.cr6.gt) goto loc_8279CB10;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x8279ca6c
	if (ctx.cr6.eq) goto loc_8279CA6C;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x8279ca6c
	if (ctx.cr6.eq) goto loc_8279CA6C;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8279ca60
	if (ctx.cr6.lt) goto loc_8279CA60;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8279cb14
	goto loc_8279CB14;
loc_8279CA60:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8279cb14
	goto loc_8279CB14;
loc_8279CA6C:
	// lhz r11,114(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 114);
	// lhz r10,110(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// lhz r9,106(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// extsh r31,r9
	r31.s64 = ctx.r9.s16;
	// lhz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 108);
	// extsh r29,r11
	r29.s64 = ctx.r11.s16;
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
	// subf r8,r29,r4
	ctx.r8.u64 = ctx.r4.u64 - r29.u64;
	// subf r28,r6,r4
	r28.u64 = ctx.r4.u64 - ctx.r6.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r27,r29,r6
	r27.u64 = ctx.r6.u64 - r29.u64;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r28,r28,r8
	r28.u64 = r28.u64 ^ ctx.r8.u64;
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// xor r8,r27,r8
	ctx.r8.u64 = r27.u64 ^ ctx.r8.u64;
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
	// or r27,r9,r8
	r27.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 & r31.u64;
	// andc r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 & ~r28.u64;
	// and r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 & r29.u64;
	// andc r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 & ~r27.u64;
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
	// b 0x8279cb14
	goto loc_8279CB14;
loc_8279CB10:
	// stw r20,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r20.u32);
loc_8279CB14:
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 + r24.u64;
	// add r8,r10,r23
	ctx.r8.u64 = ctx.r10.u64 + r23.u64;
	// and r7,r9,r19
	ctx.r7.u64 = ctx.r9.u64 & r19.u64;
	// and r6,r8,r18
	ctx.r6.u64 = ctx.r8.u64 & r18.u64;
	// subf r5,r24,r7
	ctx.r5.u64 = ctx.r7.u64 - r24.u64;
	// subf r4,r23,r6
	ctx.r4.u64 = ctx.r6.u64 - r23.u64;
	// sth r5,6(r30)
	REX_STORE_U16(r30.u32 + 6, ctx.r5.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r4,4(r30)
	REX_STORE_U16(r30.u32 + 4, ctx.r4.u16);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cd0
	return;
}

