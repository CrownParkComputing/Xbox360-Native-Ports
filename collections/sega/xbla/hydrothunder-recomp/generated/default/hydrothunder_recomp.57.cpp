#include "hydrothunder_funcs.57.h"

DEFINE_REX_FUNC(sub_82122A08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82122A10;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,57(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 57);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// b 0x82122a64
	goto loc_82122A64;
loc_82122A28:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82122a08
	ctx.lr = 0x82122A34;
	sub_82122A08(ctx, base);
	// addi r29,r30,12
	r29.s64 = r30.s64 + 12;
	// addi r3,r29,28
	ctx.r3.s64 = r29.s64 + 28;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82122800
	ctx.lr = 0x82122A44;
	sub_82122800(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120ac0
	ctx.lr = 0x82122A54;
	sub_82120AC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82122A5C;
	sub_8269CE98(ctx, base);
	// lbz r11,57(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 57);
	// mr r30,r31
	r30.u64 = r31.u64;
loc_82122A64:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82122a28
	if (ctx.cr0.eq) goto loc_82122A28;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82129088) {
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
	ctx.lr = 0x82129090;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,56(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r29,r3,52
	r29.s64 = ctx.r3.s64 + 52;
	// lwz r31,4(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x821290d0
	goto loc_821290D0;
loc_821290AC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x821290B8;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821290c8
	if (!ctx.cr0.lt) goto loc_821290C8;
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x821290d0
	goto loc_821290D0;
loc_821290C8:
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_821290D0:
	// lbz r11,61(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 61);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821290ac
	if (ctx.cr0.eq) goto loc_821290AC;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82129108
	if (ctx.cr6.eq) goto loc_82129108;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120780
	ctx.lr = 0x821290F8;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82129108
	if (ctx.cr0.lt) goto loc_82129108;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// b 0x82129114
	goto loc_82129114;
loc_82129108:
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82129114:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,56(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8212912c
	if (ctx.cr6.eq) goto loc_8212912C;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
loc_8212912C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8212EED8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,880
	ctx.r3.s64 = ctx.r11.s64 + 880;
	// li r5,84
	ctx.r5.s64 = 84;
	// b 0x826a1e70
	sub_826A1E70(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8212FC90) {
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
	ctx.lr = 0x8212FCB4;
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
	ctx.lr = 0x8212FCCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6060(r10)
	REX_STORE_U32(ctx.r10.u32 + 6060, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82132408) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,436
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(436));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,272
	ctx.r11.s64 = ctx.r11.s64 + 272;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82132490
	if (ctx.cr0.eq) goto loc_82132490;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82132490
	if (!ctx.cr6.gt) goto loc_82132490;
	// lwz r10,2016(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2016);
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82132490
	if (ctx.cr6.gt) goto loc_82132490;
	// lwz r10,432(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 432);
	// lwz r8,428(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 428);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi r7,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 4;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82132490
	if (ctx.cr6.eq) goto loc_82132490;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r9,432(r11)
	REX_STORE_U32(ctx.r11.u32 + 432, ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addic. r11,r11,172
	ctx.xer.ca = ctx.r11.u32 > 4294967123;
	ctx.r11.s64 = ctx.r11.s64 + 172;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82132490
	if (ctx.cr0.eq) goto loc_82132490;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
loc_82132490:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82136F38) {
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
	ctx.lr = 0x82136F40;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32106
	r26.s64 = -2104098816;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,112
	ctx.r4.s64 = 112;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,6060(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6060);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x8212dd28
	ctx.lr = 0x82136F68;
	sub_8212DD28(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82136F78;
	sub_826A1E70(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lwz r3,6060(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6060);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r10,28656
	ctx.r7.s64 = ctx.r10.s64 + 28656;
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
	// stb r11,67(r25)
	REX_STORE_U8(r25.u32 + 67, ctx.r11.u8);
	// ld r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 0);
	// std r11,80(r25)
	REX_STORE_U64(r25.u32 + 80, ctx.r11.u64);
	// ld r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 8);
	// std r11,88(r25)
	REX_STORE_U64(r25.u32 + 88, ctx.r11.u64);
	// ld r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U64(r28.u32 + 0);
	// std r11,96(r25)
	REX_STORE_U64(r25.u32 + 96, ctx.r11.u64);
	// ld r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U64(r28.u32 + 8);
	// std r11,104(r25)
	REX_STORE_U64(r25.u32 + 104, ctx.r11.u64);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,76(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x82139b18
	ctx.lr = 0x82136FE4;
	sub_82139B18(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8213BFA8) {
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
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x8213bc98
	ctx.lr = 0x8213BFD4;
	sub_8213BC98(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// bl 0x8213c8b8
	ctx.lr = 0x8213BFEC;
	sub_8213C8B8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8213c014
	if (!ctx.cr6.eq) goto loc_8213C014;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-18332
	ctx.r4.s64 = ctx.r11.s64 + -18332;
	// addi r3,r10,-18080
	ctx.r3.s64 = ctx.r10.s64 + -18080;
	// li r5,90
	ctx.r5.s64 = 90;
	// bl 0x821231d0
	ctx.lr = 0x8213C014;
	sub_821231D0(ctx, base);
loc_8213C014:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8213c4a8
	ctx.lr = 0x8213C024;
	sub_8213C4A8(ctx, base);
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

DEFINE_REX_FUNC(sub_821416B8) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82141BA8) {
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
	ctx.lr = 0x82141BB0;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82141c34
	if (!ctx.cr6.gt) goto loc_82141C34;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r31,r3,52
	r31.s64 = ctx.r3.s64 + 52;
	// li r29,0
	r29.s64 = 0;
	// addi r28,r11,-25252
	r28.s64 = ctx.r11.s64 + -25252;
	// addi r26,r10,-25320
	r26.s64 = ctx.r10.s64 + -25320;
loc_82141BE8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82141bfc
	if (ctx.cr6.lt) goto loc_82141BFC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82141c0c
	if (ctx.cr6.lt) goto loc_82141C0C;
loc_82141BFC:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r5,111
	ctx.r5.s64 = 111;
	// bl 0x821231d0
	ctx.lr = 0x82141C0C;
	sub_821231D0(ctx, base);
loc_82141C0C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// beq cr6,0x82141c40
	if (ctx.cr6.eq) goto loc_82141C40;
	// lwz r11,56(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 56);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,92
	r29.s64 = r29.s64 + 92;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82141be8
	if (ctx.cr6.lt) goto loc_82141BE8;
loc_82141C34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82141C38:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cf8
	return;
loc_82141C40:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82141c54
	if (ctx.cr6.lt) goto loc_82141C54;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82141c64
	if (ctx.cr6.lt) goto loc_82141C64;
loc_82141C54:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r5,111
	ctx.r5.s64 = 111;
	// bl 0x821231d0
	ctx.lr = 0x82141C64;
	sub_821231D0(ctx, base);
loc_82141C64:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mulli r29,r30,92
	r29.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(92));
	// add r4,r29,r11
	ctx.r4.u64 = r29.u64 + ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x826a1e70
	ctx.lr = 0x82141C7C;
	sub_826A1E70(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82141c94
	if (ctx.cr6.lt) goto loc_82141C94;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82141ca8
	if (!ctx.cr6.gt) goto loc_82141CA8;
loc_82141C94:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,-23616
	ctx.r3.s64 = ctx.r11.s64 + -23616;
	// li r5,81
	ctx.r5.s64 = 81;
	// bl 0x821231d0
	ctx.lr = 0x82141CA8;
	sub_821231D0(ctx, base);
loc_82141CA8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + ctx.r11.u64;
	// subf r11,r30,r10
	ctx.r11.u64 = ctx.r10.u64 - r30.u64;
	// addi r4,r3,92
	ctx.r4.s64 = ctx.r3.s64 + 92;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mulli r5,r11,92
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(92));
	// bl 0x826a1e70
	ctx.lr = 0x82141CC8;
	sub_826A1E70(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r28,4(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r28,-1
	r30.s64 = r28.s64 + -1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82141d28
	if (!ctx.cr6.gt) goto loc_82141D28;
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
	// bgt cr6,0x82141cf4
	if (ctx.cr6.gt) goto loc_82141CF4;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82141CF4:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82141d28
	if (!ctx.cr6.gt) goto loc_82141D28;
	// li r4,16
	ctx.r4.s64 = 16;
	// mulli r3,r29,92
	ctx.r3.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(92));
	// bl 0x8269d1d0
	ctx.lr = 0x82141D08;
	sub_8269D1D0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mulli r5,r28,92
	ctx.r5.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(92));
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82141D18;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x82141D20;
	sub_8269D1B8(ctx, base);
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
loc_82141D28:
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// lwz r3,180(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82144750
	ctx.lr = 0x82141D38;
	sub_82144750(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-16776
	ctx.r4.s64 = ctx.r11.s64 + -16776;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8215f338
	ctx.lr = 0x82141D4C;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82141D50;
	sub_8215F990(ctx, base);
	// lwz r10,44(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 44);
	// li r11,2
	ctx.r11.s64 = 2;
	// or r30,r3,r30
	r30.u64 = ctx.r3.u64 | r30.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82141D80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,44(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 44);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82141DA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// b 0x82141c38
	goto loc_82141C38;
}

DEFINE_REX_FUNC(sub_821513B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821513B8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x822f6280
	ctx.lr = 0x821513C4;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82151448
	if (ctx.cr0.eq) goto loc_82151448;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-11124
	ctx.r11.s64 = ctx.r11.s64 + -11124;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,640
	ctx.r3.s64 = 640;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x821513F8;
	sub_8269D1D0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x82151404;
	sub_8269D1B8(ctx, base);
	// li r29,8
	r29.s64 = 8;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x8215142C;
	sub_8269D1D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x82151438;
	sub_8269D1B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r29,24(r31)
	REX_STORE_U32(r31.u32 + 24, r29.u32);
	// b 0x8215144c
	goto loc_8215144C;
loc_82151448:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215144C:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r11,r11,6188
	ctx.r11.s64 = ctx.r11.s64 + 6188;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821555C8) {
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
	ctx.lr = 0x821555D0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x82155fd0
	ctx.lr = 0x821555E4;
	sub_82155FD0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// stw r30,10020(r31)
	REX_STORE_U32(r31.u32 + 10020, r30.u32);
	// stw r28,10016(r31)
	REX_STORE_U32(r31.u32 + 10016, r28.u32);
	// beq cr6,0x82155610
	if (ctx.cr6.eq) goto loc_82155610;
	// li r4,4
	ctx.r4.s64 = 4;
	// clrldi r3,r30,32
	ctx.r3.u64 = r30.u64 & 0xFFFFFFFF;
	// bl 0x823edd90
	ctx.lr = 0x82155610;
	sub_823EDD90(ctx, base);
loc_82155610:
	// addis r30,r29,1
	r30.s64 = r29.s64 + 65536;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r30,r30,-25128
	r30.s64 = r30.s64 + -25128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8215562C;
	sub_826A2E60(ctx, base);
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82155640
	if (ctx.cr0.eq) goto loc_82155640;
	// lwz r11,10016(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10016);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// stw r11,10016(r31)
	REX_STORE_U32(r31.u32 + 10016, ctx.r11.u32);
loc_82155640:
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
	// addi r7,r31,4
	ctx.r7.s64 = r31.s64 + 4;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r5,10016(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 10016);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x823ed290
	ctx.lr = 0x82155660;
	sub_823ED290(ctx, base);
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// bne cr6,0x82155670
	if (!ctx.cr6.eq) goto loc_82155670;
	// li r10,10
	ctx.r10.s64 = 10;
	// b 0x82155684
	goto loc_82155684;
loc_82155670:
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82155680
	if (ctx.cr6.eq) goto loc_82155680;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821556ac
	goto loc_821556AC;
loc_82155680:
	// li r10,9
	ctx.r10.s64 = 9;
loc_82155684:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// ori r11,r11,40444
	ctx.r11.u64 = ctx.r11.u64 | 40444;
	// li r3,6
	ctx.r3.s64 = 6;
	// stwx r10,r29,r11
	REX_STORE_U32(r29.u32 + ctx.r11.u32, ctx.r10.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// ori r11,r11,40448
	ctx.r11.u64 = ctx.r11.u64 | 40448;
	// stwx r10,r29,r11
	REX_STORE_U32(r29.u32 + ctx.r11.u32, ctx.r10.u32);
	// stw r9,10012(r31)
	REX_STORE_U32(r31.u32 + 10012, ctx.r9.u32);
loc_821556AC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8215BD58) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8215BD78;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120ea0
	ctx.lr = 0x8215BD88;
	sub_82120EA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215bddc
	if (ctx.cr0.eq) goto loc_8215BDDC;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8215bda4
	if (ctx.cr6.lt) goto loc_8215BDA4;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x8215bda8
	goto loc_8215BDA8;
loc_8215BDA4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8215BDA8:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x8215BDB4;
	sub_826A2E60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8215bdd0
	if (ctx.cr6.lt) goto loc_8215BDD0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x8215bdd4
	goto loc_8215BDD4;
loc_8215BDD0:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_8215BDD4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,8(r11)
	REX_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
loc_8215BDDC:
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

DEFINE_REX_FUNC(sub_8215F200) {
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
	// bl 0x8215fc78
	ctx.lr = 0x8215F220;
	sub_8215FC78(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8215f244
	if (ctx.cr6.lt) goto loc_8215F244;
	// addi r4,r31,1
	ctx.r4.s64 = r31.s64 + 1;
	// bl 0x8215dc10
	ctx.lr = 0x8215F244;
	sub_8215DC10(ctx, base);
loc_8215F244:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
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

DEFINE_REX_FUNC(sub_82162210) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// ori r4,r4,62237
	ctx.r4.u64 = ctx.r4.u64 | 62237;
	// xoris r3,r11,24237
	ctx.r3.u64 = ctx.r11.u64 ^ 1588396032;
	// xori r3,r3,48879
	ctx.r3.u64 = ctx.r3.u64 ^ 48879;
	// bl 0x8269d658
	ctx.lr = 0x82162240;
	sub_8269D658(ctx, base);
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r11,r11,16807
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(16807));
	// mulli r10,r10,2836
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(2836));
	// subf. r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x82162264
	if (!ctx.cr0.lt) goto loc_82162264;
	// addis r10,r10,-32768
	ctx.r10.s64 = ctx.r10.s64 + -2147483648;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_82162264:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x82162284
	if (ctx.cr6.gt) goto loc_82162284;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
loc_82162284:
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

DEFINE_REX_FUNC(sub_82169540) {
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
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,6072(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6072);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82169568;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r10,19
	ctx.r10.s64 = 19;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216B3B8) {
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
	ctx.lr = 0x8216B3C0;
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f29.u64);
	// stfd f30,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stfs f1,120(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// addi r30,r11,16592
	r30.s64 = ctx.r11.s64 + 16592;
	// fmr f29,f2
	f29.f64 = ctx.f2.f64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f31,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	f31.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x8216b2e8
	ctx.lr = 0x8216B40C;
	sub_8216B2E8(ctx, base);
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stfs f29,120(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b2e8
	ctx.lr = 0x8216B428;
	sub_8216B2E8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stfs f30,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f31,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x8216b2e8
	ctx.lr = 0x8216B44C;
	sub_8216B2E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f29,120(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f31,f12,f12,f0
	f31.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// bl 0x8216b2e8
	ctx.lr = 0x8216B49C;
	sub_8216B2E8(ctx, base);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f12,f0,f8
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// lfs f5,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// lfs f13,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f11,f13,f7
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// lfs f9,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// lfs f6,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f10,f9,f6
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// fsubs f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// fmr f5,f12
	ctx.f5.f64 = ctx.f12.f64;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmr f4,f11
	ctx.f4.f64 = ctx.f11.f64;
	// fmr f3,f10
	ctx.f3.f64 = ctx.f10.f64;
	// fmuls f5,f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f5,f11,f11,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f5.f64)));
	// fmadds f13,f9,f9,f0
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f0.f64)));
	// fmadds f0,f10,f10,f5
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f5.f64)));
	// fadds f9,f0,f31
	ctx.f9.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// bge cr6,0x8216b528
	if (!ctx.cr6.lt) goto loc_8216B528;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fsqrts f0,f13
	ctx.f0.f64 = double(float(sqrt(ctx.f13.f64)));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
	// b 0x8216b5b0
	goto loc_8216B5B0;
loc_8216B528:
	// fmr f9,f12
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f12.f64;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsqrts f5,f0
	ctx.f5.f64 = double(float(sqrt(ctx.f0.f64)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f0,-19392(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -19392);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - f31.f64));
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmadds f5,f11,f11,f4
	ctx.f5.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f4.f64)));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmadds f13,f10,f10,f5
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f5.f64)));
	// fmadds f5,f0,f0,f31
	ctx.f5.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, f31.f64)));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fsqrts f12,f5
	ctx.f12.f64 = double(float(sqrt(ctx.f5.f64)));
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// fmuls f12,f13,f10
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f10,f13,f9
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fadds f13,f12,f6
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f13,f11,f8
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
	// std r10,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r10.u64);
loc_8216B5B0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

DEFINE_REX_FUNC(sub_8217E708) {
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
	ctx.lr = 0x8217E710;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x8217d058
	ctx.lr = 0x8217E72C;
	sub_8217D058(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8217e8c8
	if (ctx.cr0.eq) goto loc_8217E8C8;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217e8c8
	if (ctx.cr0.eq) goto loc_8217E8C8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8217e768
	if (ctx.cr6.eq) goto loc_8217E768;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8217cef0
	ctx.lr = 0x8217E758;
	sub_8217CEF0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_8217E768:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r30,20
	ctx.r4.s64 = r30.s64 + 20;
	// bl 0x8217d180
	ctx.lr = 0x8217E774;
	sub_8217D180(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217e8a8
	if (ctx.cr0.eq) goto loc_8217E8A8;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217e8a8
	if (ctx.cr0.eq) goto loc_8217E8A8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8217d058
	ctx.lr = 0x8217E790;
	sub_8217D058(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8217e898
	if (ctx.cr0.eq) goto loc_8217E898;
	// lbz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217e898
	if (ctx.cr0.eq) goto loc_8217E898;
	// cmpwi cr6,r11,61
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 61, ctx.xer);
	// bne cr6,0x8217e898
	if (!ctx.cr6.eq) goto loc_8217E898;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r5,1
	ctx.r3.s64 = ctx.r5.s64 + 1;
	// bl 0x8217d058
	ctx.lr = 0x8217E7B8;
	sub_8217D058(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8217e8a8
	if (ctx.cr0.eq) goto loc_8217E8A8;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217e8a8
	if (ctx.cr0.eq) goto loc_8217E8A8;
	// cmpwi cr6,r11,39
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 39, ctx.xer);
	// bne cr6,0x8217e7e0
	if (!ctx.cr6.eq) goto loc_8217E7E0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r6,r11,28544
	ctx.r6.s64 = ctx.r11.s64 + 28544;
	// b 0x8217e7f0
	goto loc_8217E7F0;
loc_8217E7E0:
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// bne cr6,0x8217e80c
	if (!ctx.cr6.eq) goto loc_8217E80C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r6,r11,28528
	ctx.r6.s64 = ctx.r11.s64 + 28528;
loc_8217E7F0:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,24
	ctx.r4.s64 = r30.s64 + 24;
	// addi r3,r31,1
	ctx.r3.s64 = r31.s64 + 1;
	// bl 0x8217d568
	ctx.lr = 0x8217E804;
	sub_8217D568(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8217e890
	goto loc_8217E890;
loc_8217E80C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r30,24
	r28.s64 = r30.s64 + 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8217a390
	ctx.lr = 0x8217E824;
	sub_8217A390(ctx, base);
loc_8217E824:
	// lbz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217e890
	if (ctx.cr0.eq) goto loc_8217E890;
	// bl 0x8217cd98
	ctx.lr = 0x8217E834;
	sub_8217CD98(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8217e890
	if (!ctx.cr0.eq) goto loc_8217E890;
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x8217e890
	if (ctx.cr6.eq) goto loc_8217E890;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8217e890
	if (ctx.cr6.eq) goto loc_8217E890;
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// beq cr6,0x8217e890
	if (ctx.cr6.eq) goto loc_8217E890;
	// cmpwi cr6,r11,62
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 62, ctx.xer);
	// beq cr6,0x8217e890
	if (ctx.cr6.eq) goto loc_8217E890;
	// cmpwi cr6,r11,39
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 39, ctx.xer);
	// beq cr6,0x8217e8a8
	if (ctx.cr6.eq) goto loc_8217E8A8;
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// beq cr6,0x8217e8a8
	if (ctx.cr6.eq) goto loc_8217E8A8;
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8217a438
	ctx.lr = 0x8217E888;
	sub_8217A438(ctx, base);
	// addic. r31,r31,1
	ctx.xer.ca = r31.u32 > 4294967294;
	r31.s64 = r31.s64 + 1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8217e824
	if (!ctx.cr0.eq) goto loc_8217E824;
loc_8217E890:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8217e8cc
	goto loc_8217E8CC;
loc_8217E898:
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217e8c8
	if (ctx.cr6.eq) goto loc_8217E8C8;
	// b 0x8217e8b8
	goto loc_8217E8B8;
loc_8217E8A8:
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217e8c8
	if (ctx.cr6.eq) goto loc_8217E8C8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_8217E8B8:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x8217daf0
	ctx.lr = 0x8217E8C8;
	sub_8217DAF0(ctx, base);
loc_8217E8C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8217E8CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8218D778) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15596
	ctx.r3.s64 = ctx.r11.s64 + -15596;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218DB40) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
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
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x826a2c8c
	ctx.lr = 0x8218DB58;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f1,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,16592
	r30.s64 = ctx.r11.s64 + 16592;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
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
	ctx.lr = 0x8218DB90;
	sub_821265F8(ctx, base);
	// lfs f31,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	f31.f64 = double(temp.f32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// lfs f13,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f28,f13,f31
	f28.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f27,f11,f31
	f27.f64 = double(float(ctx.f11.f64 * f31.f64));
	// lfs f30,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	f30.f64 = double(temp.f32);
	// lfs f29,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	f29.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f30,80(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f29,84(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f25,f12,f28
	f25.f64 = double(float(ctx.f12.f64 * f28.f64));
	// fmuls f24,f27,f0
	f24.f64 = double(float(f27.f64 * ctx.f0.f64));
	// lfs f13,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f26,f28,f13
	f26.f64 = double(float(f28.f64 * ctx.f13.f64));
	// fmuls f23,f27,f13
	f23.f64 = double(float(f27.f64 * ctx.f13.f64));
	// fsubs f21,f29,f25
	f21.f64 = double(float(f29.f64 - f25.f64));
	// fsubs f22,f30,f26
	f22.f64 = double(float(f30.f64 - f26.f64));
	// fsubs f0,f22,f24
	ctx.f0.f64 = double(float(f22.f64 - f24.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f0,f21,f23
	ctx.f0.f64 = double(float(f21.f64 - f23.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x8216cea8
	ctx.lr = 0x8218DBF8;
	sub_8216CEA8(ctx, base);
	// fadds f30,f26,f30
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(f26.f64 + f30.f64));
	// fadds f29,f25,f29
	f29.f64 = double(float(f25.f64 + f29.f64));
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fsubs f0,f30,f24
	ctx.f0.f64 = double(float(f30.f64 - f24.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f0,f29,f23
	ctx.f0.f64 = double(float(f29.f64 - f23.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x8216cea8
	ctx.lr = 0x8218DC20;
	sub_8216CEA8(ctx, base);
	// fadds f0,f30,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 + f24.f64));
	// fadds f13,f29,f23
	ctx.f13.f64 = double(float(f29.f64 + f23.f64));
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
	ctx.lr = 0x8218DC40;
	sub_8216CEA8(ctx, base);
	// fadds f0,f22,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f22.f64 + f24.f64));
	// fadds f13,f21,f23
	ctx.f13.f64 = double(float(f21.f64 + f23.f64));
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
	ctx.lr = 0x8218DC60;
	sub_8216CEA8(ctx, base);
	// lfs f0,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lfs f12,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f28,f28
	ctx.f13.f64 = double(float(f28.f64 * f28.f64));
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// std r11,48(r31)
	REX_STORE_U64(r31.u32 + 48, ctx.r11.u64);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f0,f27,f27,f13
	ctx.f0.f64 = double(float(std::fma(f27.f64, f27.f64, ctx.f13.f64)));
	// lfs f13,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f13,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,124(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
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
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x826a2cd8
	ctx.lr = 0x8218DCE8;
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

DEFINE_REX_FUNC(sub_8219B738) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8219B740;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r28
	r29.u64 = r28.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8219b7ac
	if (!ctx.cr0.gt) goto loc_8219B7AC;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_8219B768:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8219b78c
	if (ctx.cr6.eq) goto loc_8219B78C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219B78C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8219B78C:
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
	// blt cr6,0x8219b768
	if (ctx.cr6.lt) goto loc_8219B768;
loc_8219B7AC:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8219b7bc
	if (ctx.cr6.eq) goto loc_8219B7BC;
	// bl 0x8269ce98
	ctx.lr = 0x8219B7BC;
	sub_8269CE98(ctx, base);
loc_8219B7BC:
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8219F848) {
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
	ctx.lr = 0x8219F850;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r28,16(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r27,r11,-17272
	r27.s64 = ctx.r11.s64 + -17272;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821a33a0
	ctx.lr = 0x8219F870;
	sub_821A33A0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,208(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f13,192(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 192);
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
	ctx.lr = 0x8219F89C;
	sub_821A33A0(ctx, base);
	// lfs f0,212(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f10,f1
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// lfs f13,196(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// bl 0x821a33a0
	ctx.lr = 0x8219F8B8;
	sub_821A33A0(ctx, base);
	// lfs f0,216(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f10,f1
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// lfs f13,200(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// bl 0x821a33a0
	ctx.lr = 0x8219F8D4;
	sub_821A33A0(ctx, base);
	// lfs f0,240(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f10,f1
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// lfs f13,224(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
	// bl 0x821a33a0
	ctx.lr = 0x8219F8F0;
	sub_821A33A0(ctx, base);
	// lfs f0,244(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f10,f1
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// lfs f13,228(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// bl 0x821a33a0
	ctx.lr = 0x8219F90C;
	sub_821A33A0(ctx, base);
	// lfs f0,248(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f10,f1
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// lfs f13,232(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
	// lwz r3,12(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219F938;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82126320
	ctx.lr = 0x8219F944;
	sub_82126320(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821262a8
	ctx.lr = 0x8219F950;
	sub_821262A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218cc20
	ctx.lr = 0x8219F95C;
	sub_8218CC20(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821264e8
	ctx.lr = 0x8219F968;
	sub_821264E8(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r11.u64);
	// ld r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// std r11,88(r31)
	REX_STORE_U64(r31.u32 + 88, ctx.r11.u64);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821A8B28) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,93(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 93);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,93(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 93);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x821a8b84
	if (!ctx.cr0.eq) goto loc_821A8B84;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x821a8b58
	goto loc_821A8B58;
loc_821A8B50:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821A8B58:
	// lbz r9,93(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 93);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x821a8b50
	if (ctx.cr0.eq) goto loc_821A8B50;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_821A8B6C:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821a8b94
	if (!ctx.cr6.eq) goto loc_821A8B94;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_821A8B84:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,93(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 93);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821a8b6c
	if (ctx.cr0.eq) goto loc_821A8B6C;
loc_821A8B94:
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821ABD60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821ABD68;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// bl 0x82178268
	ctx.lr = 0x821ABD80;
	sub_82178268(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r30,112
	r29.s64 = r30.s64 + 112;
	// addi r11,r11,-24280
	ctx.r11.s64 = ctx.r11.s64 + -24280;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120ac0
	ctx.lr = 0x821ABDA0;
	sub_82120AC0(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821ABDA8;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821abe14
	if (ctx.cr0.eq) goto loc_821ABE14;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-24312
	ctx.r4.s64 = ctx.r11.s64 + -24312;
	// bl 0x82120600
	ctx.lr = 0x821ABDC0;
	sub_82120600(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r28,1
	r28.s64 = 1;
	// lwz r4,-15360(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -15360);
	// bl 0x82120600
	ctx.lr = 0x821ABDD4;
	sub_82120600(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821d58c8
	ctx.lr = 0x821ABDE8;
	sub_821D58C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821ABDF8;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-24240
	ctx.r9.s64 = ctx.r11.s64 + -24240;
	// stw r10,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// b 0x821abe18
	goto loc_821ABE18;
loc_821ABE14:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821ABE18:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,80
	ctx.r3.s64 = r30.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x821ABE28;
	sub_82145710(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821abe40
	if (ctx.cr0.eq) goto loc_821ABE40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x821ABE40;
	sub_82120AC0(ctx, base);
loc_821ABE40:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821B1B28) {
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
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x822f6280
	ctx.lr = 0x821B1B3C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b1b4c
	if (ctx.cr0.eq) goto loc_821B1B4C;
	// bl 0x821b1b60
	ctx.lr = 0x821B1B48;
	sub_821B1B60(ctx, base);
	// b 0x821b1b50
	goto loc_821B1B50;
loc_821B1B4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B1B50:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B3DB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821B3DB8;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821b3e8c
	if (ctx.cr0.eq) goto loc_821B3E8C;
	// lis r8,-32106
	ctx.r8.s64 = -2104098816;
	// lwz r10,124(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r29,6096(r8)
	r29.u64 = REX_LOAD_U32(ctx.r8.u32 + 6096);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821B3DEC:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x821b3dec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B3DEC;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,176
	ctx.r4.s64 = ctx.r11.s64 + 176;
	// bl 0x8218cc20
	ctx.lr = 0x821B3E08;
	sub_8218CC20(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lfs f2,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 168);
	ctx.f2.f64 = double(temp.f32);
	// li r30,255
	r30.s64 = 255;
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,-19392(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -19392);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// ble cr6,0x821b3e58
	if (!ctx.cr6.gt) goto loc_821B3E58;
	// li r11,128
	ctx.r11.s64 = 128;
	// stb r30,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// lfs f0,164(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// li r7,32
	ctx.r7.s64 = 32;
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x821375f8
	ctx.lr = 0x821B3E58;
	sub_821375F8(ctx, base);
loc_821B3E58:
	// li r11,64
	ctx.r11.s64 = 64;
	// stb r30,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r30.u8);
	// stb r30,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// lfs f0,164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f2,172(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 172);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x821375f8
	ctx.lr = 0x821B3E8C;
	sub_821375F8(ctx, base);
loc_821B3E8C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821BB110) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r10,280(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 280);
	// lwz r8,284(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,6168(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 6168);
	// lwz r3,28(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x8216d8d8
	ctx.lr = 0x821BB14C;
	sub_8216D8D8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BCBE8) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r11,116(r4)
	REX_STORE_U8(ctx.r4.u32 + 116, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BCF70) {
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
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x822f6280
	ctx.lr = 0x821BCF84;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bcf94
	if (ctx.cr0.eq) goto loc_821BCF94;
	// bl 0x821bcfa8
	ctx.lr = 0x821BCF90;
	sub_821BCFA8(ctx, base);
	// b 0x821bcf98
	goto loc_821BCF98;
loc_821BCF94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BCF98:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BE770) {
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
	// lwz r3,6036(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6036);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BE79C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_821BFDE8) {
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
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x821c0228
	ctx.lr = 0x821BFE08;
	sub_821C0228(ctx, base);
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

DEFINE_REX_FUNC(sub_821C1CD0) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c1d5c
	if (ctx.cr0.eq) goto loc_821C1D5C;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r5,r11,176
	ctx.r5.s64 = ctx.r11.s64 + 176;
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// bl 0x823fbf60
	ctx.lr = 0x821C1D08;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821C1D18:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821c1d18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C1D18;
	// li r11,128
	ctx.r11.s64 = 128;
	// lfs f1,140(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f1.f64 = double(temp.f32);
	// li r10,255
	ctx.r10.s64 = 255;
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// li r7,8
	ctx.r7.s64 = 8;
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,6096(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 6096);
	// bl 0x82137838
	ctx.lr = 0x821C1D5C;
	sub_82137838(ctx, base);
loc_821C1D5C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C5778) {
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
	// lwz r3,132(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 132);
	// bl 0x82191520
	ctx.lr = 0x821C5794;
	sub_82191520(ctx, base);
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

DEFINE_REX_FUNC(sub_821C7E98) {
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
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// bl 0x821e30b8
	ctx.lr = 0x821C7EB4;
	sub_821E30B8(ctx, base);
	// addi r3,r31,464
	ctx.r3.s64 = r31.s64 + 464;
	// bl 0x821e4548
	ctx.lr = 0x821C7EBC;
	sub_821E4548(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r3,140(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C7F00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_821CCB00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,144(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821ccb30
	if (ctx.cr0.eq) goto loc_821CCB30;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// bl 0x821ccb40
	ctx.lr = 0x821CCB30;
	sub_821CCB40(ctx, base);
loc_821CCB30:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CE7F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821CE7F8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82178268
	ctx.lr = 0x821CE808;
	sub_82178268(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r3,100
	ctx.r3.s64 = 100;
	// addi r11,r11,-14020
	ctx.r11.s64 = ctx.r11.s64 + -14020;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821CE81C;
	sub_822F6280(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ce840
	if (ctx.cr0.eq) goto loc_821CE840;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821dc550
	ctx.lr = 0x821CE838;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821ce844
	goto loc_821CE844;
loc_821CE840:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_821CE844:
	// stw r4,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r4.u32);
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x821CE850;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821CE858;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821ce8cc
	if (ctx.cr0.eq) goto loc_821CE8CC;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-22996
	ctx.r4.s64 = ctx.r11.s64 + -22996;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821CE87C;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r11,r11,-23836
	ctx.r11.s64 = ctx.r11.s64 + -23836;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821CE890;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ce8bc
	if (ctx.cr0.eq) goto loc_821CE8BC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r11,r11,-15424
	ctx.r11.s64 = ctx.r11.s64 + -15424;
	// addi r10,r10,-5808
	ctx.r10.s64 = ctx.r10.s64 + -5808;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821ce8c0
	goto loc_821CE8C0;
loc_821CE8BC:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_821CE8C0:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x821ce8d0
	goto loc_821CE8D0;
loc_821CE8CC:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_821CE8D0:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821CE8E8;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821CE8F0;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821ce928
	if (ctx.cr0.eq) goto loc_821CE928;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-14072
	ctx.r4.s64 = ctx.r11.s64 + -14072;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821CE914;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// addi r11,r11,-23824
	ctx.r11.s64 = ctx.r11.s64 + -23824;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x821ce92c
	goto loc_821CE92C;
loc_821CE928:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_821CE92C:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821CE944;
	sub_82264568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821D8E90) {
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
	ctx.lr = 0x821D8E98;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,4(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r31,4(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 4);
	// b 0x821d8ed4
	goto loc_821D8ED4;
loc_821D8EB0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x821D8EBC;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821d8ecc
	if (!ctx.cr0.lt) goto loc_821D8ECC;
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x821d8ed4
	goto loc_821D8ED4;
loc_821D8ECC:
	// mr r27,r31
	r27.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_821D8ED4:
	// lbz r11,93(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 93);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d8eb0
	if (ctx.cr0.eq) goto loc_821D8EB0;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821d8f04
	if (ctx.cr6.eq) goto loc_821D8F04;
	// addi r4,r27,12
	ctx.r4.s64 = r27.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120780
	ctx.lr = 0x821D8EFC;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821d8fdc
	if (!ctx.cr0.lt) goto loc_821D8FDC;
loc_821D8F04:
	// li r31,0
	r31.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r31,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// stb r11,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// stw r31,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// stb r11,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// stw r31,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// stw r31,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r31.u32);
	// stw r31,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r31.u32);
	// stb r11,144(r1)
	REX_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
	// bl 0x82120d70
	ctx.lr = 0x821D8F48;
	sub_82120D70(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x821d9000
	ctx.lr = 0x821D8F54;
	sub_821D9000(ctx, base);
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x822f6280
	ctx.lr = 0x821D8F5C;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d8fe8
	if (ctx.cr0.eq) goto loc_821D8FE8;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addic. r28,r30,12
	ctx.xer.ca = r30.u32 > 4294967283;
	r28.s64 = r30.s64 + 12;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// stb r31,92(r30)
	REX_STORE_U8(r30.u32 + 92, r31.u8);
	// stb r31,93(r30)
	REX_STORE_U8(r30.u32 + 93, r31.u8);
	// beq 0x821d8fa4
	if (ctx.cr0.eq) goto loc_821D8FA4;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120d70
	ctx.lr = 0x821D8F98;
	sub_82120D70(ctx, base);
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// addi r3,r28,28
	ctx.r3.s64 = r28.s64 + 28;
	// bl 0x821d9000
	ctx.lr = 0x821D8FA4;
	sub_821D9000(ctx, base);
loc_821D8FA4:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821d9200
	ctx.lr = 0x821D8FB8;
	sub_821D9200(ctx, base);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821a8d60
	ctx.lr = 0x821D8FC4;
	sub_821A8D60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x821D8FD4;
	sub_82120AC0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821a8d60
	ctx.lr = 0x821D8FDC;
	sub_821A8D60(ctx, base);
loc_821D8FDC:
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1d04
	return;
loc_821D8FE8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x821D9000;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_821E0418) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822d6a60
	ctx.lr = 0x821E0430;
	sub_822D6A60(ctx, base);
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

DEFINE_REX_FUNC(sub_821E09B8) {
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
	ctx.lr = 0x821E09C0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x821e09dc
	if (!ctx.cr6.eq) goto loc_821E09DC;
	// li r28,1
	r28.s64 = 1;
	// b 0x821e09e8
	goto loc_821E09E8;
loc_821E09DC:
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(r27.s32, 3, ctx.xer);
	// bne cr6,0x821e0a78
	if (!ctx.cr6.eq) goto loc_821E0A78;
	// li r28,6
	r28.s64 = 6;
loc_821E09E8:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x822f6280
	ctx.lr = 0x821E09F0;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821e0a68
	if (ctx.cr0.eq) goto loc_821E0A68;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,13020
	ctx.r10.s64 = ctx.r10.s64 + 13020;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r30,r31,24
	r30.s64 = r31.s64 + 24;
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824d19f0
	ctx.lr = 0x821E0A38;
	sub_824D19F0(ctx, base);
	// li r6,1028
	ctx.r6.s64 = 1028;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ed608
	ctx.lr = 0x821E0A4C;
	sub_823ED608(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x824d1dd0
	ctx.lr = 0x821E0A60;
	sub_824D1DD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x821e0a6c
	goto loc_821E0A6C;
loc_821E0A68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E0A6C:
	// stw r29,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r29.u32);
	// stw r27,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r27.u32);
	// b 0x821e0a7c
	goto loc_821E0A7C;
loc_821E0A78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E0A7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821E78E8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6060(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6060);
	// bl 0x8212e8b0
	ctx.lr = 0x821E790C;
	sub_8212E8B0(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821e7938
	if (ctx.cr6.eq) goto loc_821E7938;
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
	ctx.lr = 0x821E7934;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
loc_821E7938:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e794c
	if (ctx.cr6.eq) goto loc_821E794C;
	// bl 0x821357c8
	ctx.lr = 0x821E7948;
	sub_821357C8(ctx, base);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
loc_821E794C:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e7960
	if (ctx.cr6.eq) goto loc_821E7960;
	// bl 0x821357c8
	ctx.lr = 0x821E795C;
	sub_821357C8(ctx, base);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
loc_821E7960:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x8269d6a0
	ctx.lr = 0x821E7968;
	sub_8269D6A0(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x8269d6a0
	ctx.lr = 0x821E7970;
	sub_8269D6A0(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x8269d6a0
	ctx.lr = 0x821E7978;
	sub_8269D6A0(ctx, base);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
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

DEFINE_REX_FUNC(sub_821EC3A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821EC3A8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bgt cr6,0x821ec3e4
	if (ctx.cr6.gt) goto loc_821EC3E4;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r10,r11,1072
	ctx.r10.s64 = ctx.r11.s64 + 1072;
	// ld r11,1072(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 1072);
	// ld r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r8,16(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 16);
	// ld r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 24);
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// std r10,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r10.u64);
	// b 0x821ec4b8
	goto loc_821EC4B8;
loc_821EC3E4:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821ec898
	ctx.lr = 0x821EC3F0;
	sub_821EC898(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8216ab58
	ctx.lr = 0x821EC3F8;
	sub_8216AB58(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// lfs f0,172(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,596(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 596);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// std r10,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r11,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// std r9,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r9.u64);
	// ble cr6,0x821ec49c
	if (!ctx.cr6.gt) goto loc_821EC49C;
loc_821EC458:
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823fbd18
	ctx.lr = 0x821EC468;
	sub_823FBD18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x82176218
	ctx.lr = 0x821EC490;
	sub_82176218(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// bne 0x821ec458
	if (!ctx.cr0.eq) goto loc_821EC458;
loc_821EC49C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// ld r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// std r10,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r10.u64);
	// std r11,24(r29)
	REX_STORE_U64(r29.u32 + 24, ctx.r11.u64);
loc_821EC4B8:
	// std r8,16(r29)
	REX_STORE_U64(r29.u32 + 16, ctx.r8.u64);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// std r9,8(r29)
	REX_STORE_U64(r29.u32 + 8, ctx.r9.u64);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821F8198) {
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
	// lwz r4,72(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6204(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6204);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F81C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x821f81d8
	if (!ctx.cr6.eq) goto loc_821F81D8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
loc_821F81D8:
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

DEFINE_REX_FUNC(sub_821FAB00) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r4,r11,24948
	ctx.r4.s64 = ctx.r11.s64 + 24948;
	// bl 0x8215f338
	ctx.lr = 0x821FAB1C;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
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
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FB848) {
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
	ctx.lr = 0x821FB850;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// addi r24,r11,25300
	r24.s64 = ctx.r11.s64 + 25300;
	// addi r23,r10,25200
	r23.s64 = ctx.r10.s64 + 25200;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x821fb888
	if (ctx.cr6.eq) goto loc_821FB888;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// li r5,430
	ctx.r5.s64 = 430;
	// bl 0x821231d0
	ctx.lr = 0x821FB888;
	sub_821231D0(ctx, base);
loc_821FB888:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x821FB89C;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,25456
	ctx.r4.s64 = ctx.r11.s64 + 25456;
	// bl 0x8215f338
	ctx.lr = 0x821FB8A8;
	sub_8215F338(ctx, base);
	// lis r27,32767
	r27.s64 = 2147418112;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// ori r27,r27,65535
	r27.u64 = r27.u64 | 65535;
	// li r29,0
	r29.s64 = 0;
	// addi r25,r11,25628
	r25.s64 = ctx.r11.s64 + 25628;
loc_821FB8C4:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821fb8e8
	if (!ctx.cr6.eq) goto loc_821FB8E8;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x821fb8ec
	goto loc_821FB8EC;
loc_821FB8E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821FB8EC:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821fb97c
	if (!ctx.cr6.lt) goto loc_821FB97C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x821FB900;
	sub_8215F1B0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821fb920
	if (ctx.cr6.eq) goto loc_821FB920;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// li r5,705
	ctx.r5.s64 = 705;
	// bl 0x821231d0
	ctx.lr = 0x821FB920;
	sub_821231D0(ctx, base);
loc_821FB920:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8215f338
	ctx.lr = 0x821FB934;
	sub_8215F338(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8215fb00
	ctx.lr = 0x821FB93C;
	sub_8215FB00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FB950;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821fb974
	if (!ctx.cr6.lt) goto loc_821FB974;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// bge cr6,0x821fb970
	if (!ctx.cr6.lt) goto loc_821FB970;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_821FB970:
	// li r26,1
	r26.s64 = 1;
loc_821FB974:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x821fb8c4
	goto loc_821FB8C4;
loc_821FB97C:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821fb990
	if (ctx.cr0.eq) goto loc_821FB990;
	// stw r27,0(r22)
	REX_STORE_U32(r22.u32 + 0, r27.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821fb994
	goto loc_821FB994;
loc_821FB990:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821FB994:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82204388) {
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
	ctx.lr = 0x82204390;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r25,1
	r25.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lbz r10,77(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 77);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x822043f0
	if (!ctx.cr0.eq) goto loc_822043F0;
	// lwz r10,12(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
loc_822043C0:
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// subfc r9,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r29,r9,31
	r29.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822043e0
	if (ctx.cr0.eq) goto loc_822043E0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822043e4
	goto loc_822043E4;
loc_822043E0:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_822043E4:
	// lbz r9,77(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 77);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x822043c0
	if (ctx.cr0.eq) goto loc_822043C0;
loc_822043F0:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r26,r30
	r26.u64 = r30.u64;
	// beq 0x82204444
	if (ctx.cr0.eq) goto loc_82204444;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8220443c
	if (!ctx.cr6.eq) goto loc_8220443C;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82204418:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// bl 0x822044b0
	ctx.lr = 0x82204428;
	sub_822044B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r31)
	REX_STORE_U8(r31.u32 + 4, r25.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x822044a4
	goto loc_822044A4;
loc_8220443C:
	// bl 0x822046a8
	ctx.lr = 0x82204440;
	sub_822046A8(ctx, base);
	// lwz r26,80(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82204444:
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// lwz r10,12(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82204460
	if (!ctx.cr6.lt) goto loc_82204460;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82204418
	goto loc_82204418;
loc_82204460:
	// lwz r3,52(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 52);
	// addi r30,r28,16
	r30.s64 = r28.s64 + 16;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82204474
	if (ctx.cr6.eq) goto loc_82204474;
	// bl 0x8269ce98
	ctx.lr = 0x82204474;
	sub_8269CE98(ctx, base);
loc_82204474:
	// li r29,0
	r29.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,36(r30)
	REX_STORE_U32(r30.u32 + 36, r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r29,40(r30)
	REX_STORE_U32(r30.u32 + 40, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,44(r30)
	REX_STORE_U32(r30.u32 + 44, r29.u32);
	// bl 0x82120ac0
	ctx.lr = 0x82204494;
	sub_82120AC0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8220449C;
	sub_8269CE98(ctx, base);
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// stb r29,4(r31)
	REX_STORE_U8(r31.u32 + 4, r29.u8);
loc_822044A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8220BD18) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8220BD20;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82178268
	ctx.lr = 0x8220BD30;
	sub_82178268(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,-32456
	ctx.r11.s64 = ctx.r11.s64 + -32456;
	// stw r29,112(r31)
	REX_STORE_U32(r31.u32 + 112, r29.u32);
	// li r3,100
	ctx.r3.s64 = 100;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x8220BD4C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220bd6c
	if (ctx.cr0.eq) goto loc_8220BD6C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x8220BD64;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8220bd70
	goto loc_8220BD70;
loc_8220BD6C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_8220BD70:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x8220BD78;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x8220BD80;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220bdb0
	if (ctx.cr0.eq) goto loc_8220BDB0;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-32748
	ctx.r4.s64 = ctx.r10.s64 + -32748;
	// addi r6,r11,-16544
	ctx.r6.s64 = ctx.r11.s64 + -16544;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x822737d8
	ctx.lr = 0x8220BDA8;
	sub_822737D8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8220bdb4
	goto loc_8220BDB4;
loc_8220BDB0:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8220BDB4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x821dc4e0
	ctx.lr = 0x8220BDC0;
	sub_821DC4E0(ctx, base);
	// stw r3,80(r30)
	REX_STORE_U32(r30.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82264568
	ctx.lr = 0x8220BDD0;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x8220BDD8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220be08
	if (ctx.cr0.eq) goto loc_8220BE08;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-32728
	ctx.r4.s64 = ctx.r10.s64 + -32728;
	// addi r6,r11,-16456
	ctx.r6.s64 = ctx.r11.s64 + -16456;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x822737d8
	ctx.lr = 0x8220BE00;
	sub_822737D8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8220be0c
	goto loc_8220BE0C;
loc_8220BE08:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8220BE0C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x821dc4e0
	ctx.lr = 0x8220BE18;
	sub_821DC4E0(ctx, base);
	// stw r3,80(r30)
	REX_STORE_U32(r30.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82264568
	ctx.lr = 0x8220BE28;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x8220BE30;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220be60
	if (ctx.cr0.eq) goto loc_8220BE60;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-32708
	ctx.r4.s64 = ctx.r10.s64 + -32708;
	// addi r6,r11,-16368
	ctx.r6.s64 = ctx.r11.s64 + -16368;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x822737d8
	ctx.lr = 0x8220BE58;
	sub_822737D8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8220be64
	goto loc_8220BE64;
loc_8220BE60:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8220BE64:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x821dc4e0
	ctx.lr = 0x8220BE70;
	sub_821DC4E0(ctx, base);
	// stw r3,80(r30)
	REX_STORE_U32(r30.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82264568
	ctx.lr = 0x8220BE80;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x8220BE88;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220beb8
	if (ctx.cr0.eq) goto loc_8220BEB8;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-32692
	ctx.r4.s64 = ctx.r10.s64 + -32692;
	// addi r6,r11,-30168
	ctx.r6.s64 = ctx.r11.s64 + -30168;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x822737d8
	ctx.lr = 0x8220BEB0;
	sub_822737D8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8220bebc
	goto loc_8220BEBC;
loc_8220BEB8:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8220BEBC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x821dc4e0
	ctx.lr = 0x8220BEC8;
	sub_821DC4E0(ctx, base);
	// stw r3,80(r30)
	REX_STORE_U32(r30.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82264568
	ctx.lr = 0x8220BED8;
	sub_82264568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8221A3D0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8221be80
	ctx.lr = 0x8221A3F4;
	sub_8221BE80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221a410
	if (ctx.cr0.eq) goto loc_8221A410;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221bae8
	ctx.lr = 0x8221A404;
	sub_8221BAE8(ctx, base);
	// addi r3,r31,800
	ctx.r3.s64 = r31.s64 + 800;
	// bl 0x8215f0f0
	ctx.lr = 0x8221A40C;
	sub_8215F0F0(ctx, base);
	// b 0x8221a43c
	goto loc_8221A43C;
loc_8221A410:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r31,r31,800
	r31.s64 = r31.s64 + 800;
	// addi r4,r11,-26344
	ctx.r4.s64 = ctx.r11.s64 + -26344;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x8221A424;
	sub_8215F670(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x8221A428;
	sub_8215F990(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8221a438
	if (!ctx.cr0.eq) goto loc_8221A438;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8221A438;
	sub_8215F0F0(ctx, base);
loc_8221A438:
	// bl 0x8221c0e8
	ctx.lr = 0x8221A43C;
	sub_8221C0E8(ctx, base);
loc_8221A43C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

DEFINE_REX_FUNC(sub_822209C0) {
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
	// lwz r11,128(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 128);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82208568
	ctx.lr = 0x822209EC;
	sub_82208568(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8213bce8
	ctx.lr = 0x822209F8;
	sub_8213BCE8(ctx, base);
	// subf r11,r3,r30
	ctx.r11.u64 = r30.u64 - ctx.r3.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,705(r31)
	REX_STORE_U8(r31.u32 + 705, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_82224FB0) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r11,-24572
	ctx.r4.s64 = ctx.r11.s64 + -24572;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f338
	ctx.lr = 0x82224FD8;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x82224FE0;
	sub_8215F2D0(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82224FE4;
	sub_8215FA30(ctx, base);
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

DEFINE_REX_FUNC(sub_82226FE0) {
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
	ctx.lr = 0x82226FE8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-17296
	ctx.r4.s64 = ctx.r11.s64 + -17296;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8215f338
	ctx.lr = 0x82227008;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8222700C;
	sub_8215FA30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16192
	ctx.r4.s64 = ctx.r11.s64 + 16192;
	// bl 0x82125d00
	ctx.lr = 0x82227018;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8222718c
	if (!ctx.cr0.eq) goto loc_8222718C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215fa30
	ctx.lr = 0x82227028;
	sub_8215FA30(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,22808
	r30.s64 = ctx.r11.s64 + 22808;
	// lwz r11,692(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 692);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x82227044;
	sub_8215F338(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x8222704C;
	sub_8215F2D0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x8222705C;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r4,r11,16408
	ctx.r4.s64 = ctx.r11.s64 + 16408;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// lwz r29,680(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 680);
	// bl 0x8215f670
	ctx.lr = 0x82227074;
	sub_8215F670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16420
	ctx.r4.s64 = ctx.r11.s64 + 16420;
	// bl 0x8215f670
	ctx.lr = 0x82227080;
	sub_8215F670(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f200
	ctx.lr = 0x82227088;
	sub_8215F200(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-17264
	ctx.r4.s64 = ctx.r11.s64 + -17264;
	// bl 0x8215f670
	ctx.lr = 0x82227094;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r29,r11,-24168
	r29.s64 = ctx.r11.s64 + -24168;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f670
	ctx.lr = 0x822270A4;
	sub_8215F670(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x822270A8;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120b20
	ctx.lr = 0x822270BC;
	sub_82120B20(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-17148
	ctx.r4.s64 = ctx.r11.s64 + -17148;
	// bl 0x8215f338
	ctx.lr = 0x822270CC;
	sub_8215F338(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// addi r26,r11,-17164
	r26.s64 = ctx.r11.s64 + -17164;
loc_822270DC:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82227100
	if (!ctx.cr6.eq) goto loc_82227100;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x82227104
	goto loc_82227104;
loc_82227100:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82227104:
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8222717c
	if (!ctx.cr6.lt) goto loc_8222717C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82227118;
	sub_8215F1B0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8215f338
	ctx.lr = 0x82227120;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82227124;
	sub_8215FA30(ctx, base);
	// lwz r11,692(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 692);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x82227138;
	sub_8215F338(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x82227140;
	sub_8215F2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x82227148;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8222714C;
	sub_8215FA30(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82120780
	ctx.lr = 0x82227154;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82227164
	if (ctx.cr0.eq) goto loc_82227164;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x822270dc
	goto loc_822270DC;
loc_82227164:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82227174;
	sub_82120AC0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x82227190
	goto loc_82227190;
loc_8222717C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x8222718C;
	sub_82120AC0(ctx, base);
loc_8222718C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82227190:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8222E7D0) {
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
	ctx.lr = 0x8222E7D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82178268
	ctx.lr = 0x8222E7E8;
	sub_82178268(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r8,r11,16592
	ctx.r8.s64 = ctx.r11.s64 + 16592;
	// addi r10,r10,-21052
	ctx.r10.s64 = ctx.r10.s64 + -21052;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// li r28,0
	r28.s64 = 0;
	// lfs f0,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,-14036
	ctx.r10.s64 = ctx.r11.s64 + -14036;
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r28,132(r31)
	REX_STORE_U32(r31.u32 + 132, r28.u32);
	// lfs f0,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r10.u32);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// stw r28,136(r31)
	REX_STORE_U32(r31.u32 + 136, r28.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r28,140(r31)
	REX_STORE_U32(r31.u32 + 140, r28.u32);
	// addi r10,r31,124
	ctx.r10.s64 = r31.s64 + 124;
	// stb r11,151(r31)
	REX_STORE_U8(r31.u32 + 151, ctx.r11.u8);
	// stb r11,150(r31)
	REX_STORE_U8(r31.u32 + 150, ctx.r11.u8);
	// stb r11,149(r31)
	REX_STORE_U8(r31.u32 + 149, ctx.r11.u8);
	// stb r11,148(r31)
	REX_STORE_U8(r31.u32 + 148, ctx.r11.u8);
	// stb r28,152(r31)
	REX_STORE_U8(r31.u32 + 152, r28.u8);
	// bl 0x822f6280
	ctx.lr = 0x8222E850;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-29688
	r30.s64 = ctx.r11.s64 + -29688;
	// beq 0x8222e87c
	if (ctx.cr0.eq) goto loc_8222E87C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-5504
	ctx.r11.s64 = ctx.r11.s64 + -5504;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8222e880
	goto loc_8222E880;
loc_8222E87C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_8222E880:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r29,r31,12
	r29.s64 = r31.s64 + 12;
	// addi r5,r11,-26644
	ctx.r5.s64 = ctx.r11.s64 + -26644;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8216be80
	ctx.lr = 0x8222E894;
	sub_8216BE80(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x8222E89C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222e8c0
	if (ctx.cr0.eq) goto loc_8222E8C0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-5240
	ctx.r11.s64 = ctx.r11.s64 + -5240;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8222e8c4
	goto loc_8222E8C4;
loc_8222E8C0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_8222E8C4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r5,r11,30476
	ctx.r5.s64 = ctx.r11.s64 + 30476;
	// bl 0x8216be80
	ctx.lr = 0x8222E8D4;
	sub_8216BE80(ctx, base);
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x822f6280
	ctx.lr = 0x8222E8DC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222e8f4
	if (ctx.cr0.eq) goto loc_8222E8F4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821a1e80
	ctx.lr = 0x8222E8EC;
	sub_821A1E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8222e8f8
	goto loc_8222E8F8;
loc_8222E8F4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_8222E8F8:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x8222E908;
	sub_821D3988(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x8222E910;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222e928
	if (ctx.cr0.eq) goto loc_8222E928;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8222edf0
	ctx.lr = 0x8222E920;
	sub_8222EDF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8222e92c
	goto loc_8222E92C;
loc_8222E928:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_8222E92C:
	// stw r4,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x8222E938;
	sub_821D3988(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x8222E940;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222e95c
	if (ctx.cr0.eq) goto loc_8222E95C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821912a0
	ctx.lr = 0x8222E954;
	sub_821912A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8222e960
	goto loc_8222E960;
loc_8222E95C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_8222E960:
	// stw r4,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x8222E96C;
	sub_821D3988(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r30,112(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x822f6280
	ctx.lr = 0x8222E978;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222e9a8
	if (ctx.cr0.eq) goto loc_8222E9A8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r9,r9,-4872
	ctx.r9.s64 = ctx.r9.s64 + -4872;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x8222e9ac
	goto loc_8222E9AC;
loc_8222E9A8:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_8222E9AC:
	// stw r11,96(r30)
	REX_STORE_U32(r30.u32 + 96, ctx.r11.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r30,120(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 120);
	// bl 0x822f6280
	ctx.lr = 0x8222E9BC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222e9ec
	if (ctx.cr0.eq) goto loc_8222E9EC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r9,r9,-5048
	ctx.r9.s64 = ctx.r9.s64 + -5048;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x8222e9f0
	goto loc_8222E9F0;
loc_8222E9EC:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_8222E9F0:
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8222ed28
	ctx.lr = 0x8222E9FC;
	sub_8222ED28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8223FCB0) {
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
	ctx.lr = 0x8223FCB8;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r10,224(r5)
	REX_STORE_U8(ctx.r5.u32 + 224, ctx.r10.u8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lfs f31,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// addi r28,r3,124
	r28.s64 = ctx.r3.s64 + 124;
	// stfs f31,32(r5)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// lwz r11,616(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 616);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r10,698(r4)
	REX_STORE_U8(ctx.r4.u32 + 698, ctx.r10.u8);
	// stw r11,616(r4)
	REX_STORE_U32(ctx.r4.u32 + 616, ctx.r11.u32);
	// addi r27,r3,3776
	r27.s64 = ctx.r3.s64 + 3776;
	// bl 0x8227a148
	ctx.lr = 0x8223FCFC;
	sub_8227A148(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x8223FD04;
	sub_8215F2D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x8223FD0C;
	sub_8215F2D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223fd7c
	if (ctx.cr6.eq) goto loc_8223FD7C;
	// addi r4,r31,3804
	ctx.r4.s64 = r31.s64 + 3804;
	// bl 0x8215f2d0
	ctx.lr = 0x8223FD20;
	sub_8215F2D0(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8223FD2C:
	// cmpwi cr6,r7,5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 5, ctx.xer);
	// bne cr6,0x8223fd4c
	if (!ctx.cr6.eq) goto loc_8223FD4C;
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x8223fd50
	goto loc_8223FD50;
loc_8223FD4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8223FD50:
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8223fd78
	if (!ctx.cr6.lt) goto loc_8223FD78;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x8223FD60;
	sub_8215F1B0(ctx, base);
	// bl 0x8215f9e0
	ctx.lr = 0x8223FD64;
	sub_8215F9E0(ctx, base);
	// lfs f0,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x8223fd78
	if (!ctx.cr6.gt) goto loc_8223FD78;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x8223fd2c
	goto loc_8223FD2C;
loc_8223FD78:
	// stw r4,304(r29)
	REX_STORE_U32(r29.u32 + 304, ctx.r4.u32);
loc_8223FD7C:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,460(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 460);
	// addi r4,r11,-13316
	ctx.r4.s64 = ctx.r11.s64 + -13316;
	// bl 0x821fd140
	ctx.lr = 0x8223FD8C;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223fddc
	if (ctx.cr0.eq) goto loc_8223FDDC;
	// lfs f0,648(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 648);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8223fddc
	if (!ctx.cr6.gt) goto loc_8223FDDC;
	// lbz r11,657(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 657);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8223fddc
	if (!ctx.cr0.eq) goto loc_8223FDDC;
	// lwz r11,304(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 304);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8223fddc
	if (!ctx.cr6.gt) goto loc_8223FDDC;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r10,-16984
	ctx.r5.s64 = ctx.r10.s64 + -16984;
	// lwz r3,6296(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6296);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223FDDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223FDDC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822471F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// bl 0x82247728
	ctx.lr = 0x82247214;
	sub_82247728(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82249768) {
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
	ctx.lr = 0x82249770;
	// stwu r1,-2240(r1)
	ea = -2240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r30,0
	r30.s64 = 0;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// li r8,128
	ctx.r8.s64 = 128;
	// lfs f0,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// lfs f13,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// stb r11,39(r31)
	REX_STORE_U8(r31.u32 + 39, ctx.r11.u8);
	// stb r11,38(r31)
	REX_STORE_U8(r31.u32 + 38, ctx.r11.u8);
	// addi r4,r10,16340
	ctx.r4.s64 = ctx.r10.s64 + 16340;
	// stb r11,37(r31)
	REX_STORE_U8(r31.u32 + 37, ctx.r11.u8);
	// stb r8,36(r31)
	REX_STORE_U8(r31.u32 + 36, ctx.r8.u8);
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,564(r31)
	REX_STORE_U32(r31.u32 + 564, r30.u32);
	// stw r30,568(r31)
	REX_STORE_U32(r31.u32 + 568, r30.u32);
	// stw r30,572(r31)
	REX_STORE_U32(r31.u32 + 572, r30.u32);
	// stw r30,576(r31)
	REX_STORE_U32(r31.u32 + 576, r30.u32);
	// stw r30,580(r31)
	REX_STORE_U32(r31.u32 + 580, r30.u32);
	// bl 0x82120600
	ctx.lr = 0x822497E8;
	sub_82120600(ctx, base);
	// lis r29,-32106
	r29.s64 = -2104098816;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x822497F8;
	sub_82180E18(ctx, base);
	// stw r3,560(r31)
	REX_STORE_U32(r31.u32 + 560, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x8224980C;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,-13992
	ctx.r4.s64 = ctx.r11.s64 + -13992;
	// bl 0x82120600
	ctx.lr = 0x8224981C;
	sub_82120600(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// bl 0x82154b70
	ctx.lr = 0x82249828;
	sub_82154B70(ctx, base);
	// stw r3,564(r31)
	REX_STORE_U32(r31.u32 + 564, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82120ac0
	ctx.lr = 0x8224983C;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r28,r11,-13984
	r28.s64 = ctx.r11.s64 + -13984;
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82249864
	if (!ctx.cr6.eq) goto loc_82249864;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,-13948
	ctx.r3.s64 = ctx.r11.s64 + -13948;
	// li r5,79
	ctx.r5.s64 = 79;
	// bl 0x821231d0
	ctx.lr = 0x82249864;
	sub_821231D0(ctx, base);
loc_82249864:
	// lwz r3,564(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 564);
	// bl 0x82153030
	ctx.lr = 0x8224986C;
	sub_82153030(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821a4270
	ctx.lr = 0x8224987C;
	sub_821A4270(ctx, base);
	// stw r3,568(r31)
	REX_STORE_U32(r31.u32 + 568, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8224989c
	if (!ctx.cr0.eq) goto loc_8224989C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,-13900
	ctx.r3.s64 = ctx.r11.s64 + -13900;
	// li r5,83
	ctx.r5.s64 = 83;
	// bl 0x821231d0
	ctx.lr = 0x8224989C;
	sub_821231D0(ctx, base);
loc_8224989C:
	// lwz r3,564(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 564);
	// bl 0x82153080
	ctx.lr = 0x822498A4;
	sub_82153080(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821a4270
	ctx.lr = 0x822498B4;
	sub_821A4270(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// bne 0x822498c4
	if (!ctx.cr0.eq) goto loc_822498C4;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_822498C4:
	// stw r11,572(r31)
	REX_STORE_U32(r31.u32 + 572, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822498e4
	if (!ctx.cr6.eq) goto loc_822498E4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,-13840
	ctx.r3.s64 = ctx.r11.s64 + -13840;
	// li r5,86
	ctx.r5.s64 = 86;
	// bl 0x821231d0
	ctx.lr = 0x822498E4;
	sub_821231D0(ctx, base);
loc_822498E4:
	// lwz r11,572(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 572);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r10,-13784
	ctx.r4.s64 = ctx.r10.s64 + -13784;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224990C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,572(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 572);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,584(r31)
	REX_STORE_U32(r31.u32 + 584, ctx.r3.u32);
	// addi r4,r10,27580
	ctx.r4.s64 = ctx.r10.s64 + 27580;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249938;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,572(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 572);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r3,588(r31)
	REX_STORE_U32(r31.u32 + 588, ctx.r3.u32);
	// addi r4,r10,-13772
	ctx.r4.s64 = ctx.r10.s64 + -13772;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249964;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,572(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 572);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r3,592(r31)
	REX_STORE_U32(r31.u32 + 592, ctx.r3.u32);
	// addi r4,r10,-13760
	ctx.r4.s64 = ctx.r10.s64 + -13760;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249990;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,572(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 572);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r3,596(r31)
	REX_STORE_U32(r31.u32 + 596, ctx.r3.u32);
	// addi r4,r10,-13744
	ctx.r4.s64 = ctx.r10.s64 + -13744;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822499BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r28,1
	r28.s64 = 1;
	// stw r3,600(r31)
	REX_STORE_U32(r31.u32 + 600, ctx.r3.u32);
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// sth r30,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r30.u16);
	// sth r30,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, r30.u16);
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stb r30,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, r30.u8);
	// bl 0x82154800
	ctx.lr = 0x822499F0;
	sub_82154800(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r27,5
	r27.s64 = 5;
	// sth r30,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r30.u16);
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r27,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// stb r30,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, r30.u8);
	// bl 0x82154800
	ctx.lr = 0x82249A18;
	sub_82154800(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// sth r30,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r30.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r27,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// stb r28,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, r28.u8);
	// bl 0x82154800
	ctx.lr = 0x82249A3C;
	sub_82154800(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821a48f8
	ctx.lr = 0x82249A44;
	sub_821A48F8(ctx, base);
	// stw r3,576(r31)
	REX_STORE_U32(r31.u32 + 576, ctx.r3.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r5,572(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 572);
	// lwz r4,568(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 568);
	// bl 0x8216fc68
	ctx.lr = 0x82249A58;
	sub_8216FC68(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// lwz r3,6060(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6060);
	// bl 0x8212e940
	ctx.lr = 0x82249A68;
	sub_8212E940(ctx, base);
	// stw r3,580(r31)
	REX_STORE_U32(r31.u32 + 580, ctx.r3.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-13728
	ctx.r4.s64 = ctx.r11.s64 + -13728;
	// bl 0x82120600
	ctx.lr = 0x82249A7C;
	sub_82120600(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// bl 0x82154c08
	ctx.lr = 0x82249A88;
	sub_82154C08(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82249A9C;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-13712
	ctx.r4.s64 = ctx.r11.s64 + -13712;
	// bl 0x82120600
	ctx.lr = 0x82249AAC;
	sub_82120600(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// bl 0x82154c08
	ctx.lr = 0x82249AB8;
	sub_82154C08(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x82249ACC;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-13696
	ctx.r4.s64 = ctx.r11.s64 + -13696;
	// bl 0x82120600
	ctx.lr = 0x82249ADC;
	sub_82120600(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// bl 0x82154c08
	ctx.lr = 0x82249AE8;
	sub_82154C08(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x82249AFC;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-13676
	ctx.r4.s64 = ctx.r11.s64 + -13676;
	// bl 0x82120600
	ctx.lr = 0x82249B0C;
	sub_82120600(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// bl 0x82154c08
	ctx.lr = 0x82249B18;
	sub_82154C08(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82120ac0
	ctx.lr = 0x82249B2C;
	sub_82120AC0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82154908
	ctx.lr = 0x82249B34;
	sub_82154908(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,2240
	ctx.r1.s64 = ctx.r1.s64 + 2240;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82263CF8) {
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
	ctx.lr = 0x82263D00;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r22,r3,192
	r22.s64 = ctx.r3.s64 + 192;
	// addi r21,r11,17480
	r21.s64 = ctx.r11.s64 + 17480;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82125d00
	ctx.lr = 0x82263D20;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82263d30
	if (ctx.cr0.eq) goto loc_82263D30;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82263dfc
	goto loc_82263DFC;
loc_82263D30:
	// li r25,0
	r25.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// addi r29,r24,280
	r29.s64 = r24.s64 + 280;
loc_82263D40:
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82263dc0
	if (ctx.cr0.eq) goto loc_82263DC0;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// li r26,0
	r26.s64 = 0;
	// addi r30,r29,16
	r30.s64 = r29.s64 + 16;
	// li r27,8
	r27.s64 = 8;
loc_82263D5C:
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 0);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82263dac
	if (ctx.cr6.eq) goto loc_82263DAC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// bl 0x8228c390
	ctx.lr = 0x82263D78;
	sub_8228C390(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82263dac
	if (ctx.cr0.eq) goto loc_82263DAC;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82125d00
	ctx.lr = 0x82263D8C;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82263dac
	if (!ctx.cr0.eq) goto loc_82263DAC;
	// addi r4,r24,220
	ctx.r4.s64 = r24.s64 + 220;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228c150
	ctx.lr = 0x82263DA0;
	sub_8228C150(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82263dac
	if (ctx.cr0.eq) goto loc_82263DAC;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
loc_82263DAC:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x82263d5c
	if (!ctx.cr0.eq) goto loc_82263D5C;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// bne cr6,0x82263e04
	if (!ctx.cr6.eq) goto loc_82263E04;
loc_82263DC0:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r29,r29,80
	r29.s64 = r29.s64 + 80;
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(r23.s32, 2, ctx.xer);
	// blt cr6,0x82263d40
	if (ctx.cr6.lt) goto loc_82263D40;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// blt cr6,0x82263e04
	if (ctx.cr6.lt) goto loc_82263E04;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82263DF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf r11,r25,r3
	ctx.r11.u64 = ctx.r3.u64 - r25.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82263DFC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
loc_82263E04:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82263dfc
	goto loc_82263DFC;
}

DEFINE_REX_FUNC(sub_8226AB70) {
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
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226ac28
	if (ctx.cr6.eq) goto loc_8226AC28;
	// lwa r10,16(r11)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + 16));
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// addi r10,r9,16592
	ctx.r10.s64 = ctx.r9.s64 + 16592;
	// lwa r8,12(r11)
	ctx.r8.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + 12));
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// lfs f11,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f8,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lfs f0,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fdivs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r3,6096(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 6096);
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// frsp f0,f9
	ctx.f0.f64 = double(float(ctx.f9.f64));
	// fmuls f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f11,f12,f8
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82136128
	ctx.lr = 0x8226AC28;
	sub_82136128(ctx, base);
loc_8226AC28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82270F10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82270F18;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x822f6280
	ctx.lr = 0x82270F28;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// li r30,0
	r30.s64 = 0;
	// beq 0x82270f84
	if (ctx.cr0.eq) goto loc_82270F84;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// std r30,8(r31)
	REX_STORE_U64(r31.u32 + 8, r30.u64);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,-4376
	ctx.r11.s64 = ctx.r11.s64 + -4376;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r4,r10,-26856
	ctx.r4.s64 = ctx.r10.s64 + -26856;
	// bl 0x82120600
	ctx.lr = 0x82270F54;
	sub_82120600(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x82120ac0
	ctx.lr = 0x82270F64;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x82120ac0
	ctx.lr = 0x82270F74;
	sub_82120AC0(ctx, base);
	// stw r30,100(r31)
	REX_STORE_U32(r31.u32 + 100, r30.u32);
	// stw r30,104(r31)
	REX_STORE_U32(r31.u32 + 104, r30.u32);
	// stw r30,112(r31)
	REX_STORE_U32(r31.u32 + 112, r30.u32);
	// b 0x82270f88
	goto loc_82270F88;
loc_82270F84:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82270F88:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82270fc0
	if (ctx.cr6.eq) goto loc_82270FC0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82270ae8
	ctx.lr = 0x82270F9C;
	sub_82270AE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82270fc0
	if (!ctx.cr0.eq) goto loc_82270FC0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82270FBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82270FC0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82275A38) {
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
	ctx.lr = 0x82275A40;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,860(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 860);
	ctx.f0.f64 = double(temp.f32);
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// lfs f31,852(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 852);
	f31.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x82139c28
	ctx.lr = 0x82275A6C;
	sub_82139C28(ctx, base);
	// lfs f0,848(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 848);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,864(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 864);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,868(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 868);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,872(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 872);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f11,856(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 856);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f31,f11
	ctx.cr6.compare(f31.f64, ctx.f11.f64);
	// fmuls f0,f13,f1
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f13,f12,f1
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmuls f12,f10,f1
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// bge cr6,0x82275ab0
	if (!ctx.cr6.lt) goto loc_82275AB0;
	// fdivs f11,f31,f11
	ctx.f11.f64 = double(float(f31.f64 / ctx.f11.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
loc_82275AB0:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f11,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f9,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// std r11,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r11.u64);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// std r9,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r9.u64);
	// lfs f10,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f7,f7,f8
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fsubs f6,f11,f10
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f5,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f7,f7
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// lfs f11,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// fmadds f4,f6,f6,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f6.f64, ctx.f6.f64, ctx.f4.f64)));
	// fmadds f4,f9,f9,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f4.f64)));
	// fsqrts f4,f4
	ctx.f4.f64 = double(float(sqrt(ctx.f4.f64)));
	// fdivs f11,f11,f4
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f4.f64));
	// fmuls f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f7,f7,f11
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f11,f6,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fadds f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// fadds f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// fadds f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fsubs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f0,f8,f13
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r11.u64);
	// std r10,8(r29)
	REX_STORE_U64(r29.u32 + 8, ctx.r10.u64);
	// lfs f0,852(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 852);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - f30.f64));
	// stfs f0,852(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 852, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82283868) {
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
	ctx.lr = 0x82283870;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82283898
	if (ctx.cr6.eq) goto loc_82283898;
	// bl 0x821357c8
	ctx.lr = 0x82283894;
	sub_821357C8(ctx, base);
	// stw r27,4(r31)
	REX_STORE_U32(r31.u32 + 4, r27.u32);
loc_82283898:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822838ac
	if (ctx.cr6.eq) goto loc_822838AC;
	// bl 0x821357c8
	ctx.lr = 0x822838A8;
	sub_821357C8(ctx, base);
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
loc_822838AC:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822838c0
	if (ctx.cr6.eq) goto loc_822838C0;
	// bl 0x821357c8
	ctx.lr = 0x822838BC;
	sub_821357C8(ctx, base);
	// stw r27,12(r31)
	REX_STORE_U32(r31.u32 + 12, r27.u32);
loc_822838C0:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822838d4
	if (ctx.cr6.eq) goto loc_822838D4;
	// bl 0x821357c8
	ctx.lr = 0x822838D0;
	sub_821357C8(ctx, base);
	// stw r27,16(r31)
	REX_STORE_U32(r31.u32 + 16, r27.u32);
loc_822838D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r4,r10,-13316
	ctx.r4.s64 = ctx.r10.s64 + -13316;
	// lwz r3,460(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 460);
	// bl 0x821fd140
	ctx.lr = 0x822838E8;
	sub_821FD140(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r3,56(r31)
	REX_STORE_U8(r31.u32 + 56, ctx.r3.u8);
	// addi r29,r31,60
	r29.s64 = r31.s64 + 60;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822838FC:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r27,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r27.u32);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82283914
	if (ctx.cr6.lt) goto loc_82283914;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82283918
	goto loc_82283918;
loc_82283914:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82283918:
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stb r27,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r27.u8);
	// bdnz 0x822838fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822838FC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x82283934;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82283944;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82283954;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,1480
	ctx.r4.s64 = ctx.r11.s64 + 1480;
	// bl 0x8215f338
	ctx.lr = 0x82283964;
	sub_8215F338(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x8215fba8
	ctx.lr = 0x8228396C;
	sub_8215FBA8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,1492
	ctx.r4.s64 = ctx.r11.s64 + 1492;
	// bl 0x8215f338
	ctx.lr = 0x8228397C;
	sub_8215F338(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8215fba8
	ctx.lr = 0x82283984;
	sub_8215FBA8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,1504
	ctx.r4.s64 = ctx.r11.s64 + 1504;
	// bl 0x8215f338
	ctx.lr = 0x82283994;
	sub_8215F338(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8215fba8
	ctx.lr = 0x8228399C;
	sub_8215FBA8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-23796
	ctx.r4.s64 = ctx.r11.s64 + -23796;
	// bl 0x8215f338
	ctx.lr = 0x822839AC;
	sub_8215F338(ctx, base);
	// lbz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 56);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822839c4
	if (ctx.cr0.eq) goto loc_822839C4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-23184
	ctx.r4.s64 = ctx.r11.s64 + -23184;
	// b 0x822839cc
	goto loc_822839CC;
loc_822839C4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,22752
	ctx.r4.s64 = ctx.r11.s64 + 22752;
loc_822839CC:
	// bl 0x8215f338
	ctx.lr = 0x822839D0;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,1520
	ctx.r4.s64 = ctx.r11.s64 + 1520;
	// bl 0x8215f338
	ctx.lr = 0x822839E0;
	sub_8215F338(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215fba8
	ctx.lr = 0x822839E8;
	sub_8215FBA8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,1540
	ctx.r4.s64 = ctx.r11.s64 + 1540;
	// bl 0x8215f338
	ctx.lr = 0x822839F8;
	sub_8215F338(ctx, base);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// bl 0x8215fba8
	ctx.lr = 0x82283A00;
	sub_8215FBA8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,1560
	ctx.r4.s64 = ctx.r11.s64 + 1560;
	// bl 0x8215f338
	ctx.lr = 0x82283A10;
	sub_8215F338(ctx, base);
	// addi r4,r31,116
	ctx.r4.s64 = r31.s64 + 116;
	// bl 0x8215fba8
	ctx.lr = 0x82283A18;
	sub_8215FBA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,928(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 928);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82283c1c
	if (ctx.cr6.eq) goto loc_82283C1C;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x822f6280
	ctx.lr = 0x82283A34;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82283a50
	if (ctx.cr0.eq) goto loc_82283A50;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,928(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 928);
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x821e9330
	ctx.lr = 0x82283A4C;
	sub_821E9330(ctx, base);
	// b 0x82283a54
	goto loc_82283A54;
loc_82283A50:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82283A54:
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// bl 0x821d0378
	ctx.lr = 0x82283A68;
	sub_821D0378(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82283b00
	if (ctx.cr0.eq) goto loc_82283B00;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x822f6280
	ctx.lr = 0x82283A78;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82283a90
	if (ctx.cr0.eq) goto loc_82283A90;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x821e97e8
	ctx.lr = 0x82283A88;
	sub_821E97E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82283a94
	goto loc_82283A94;
loc_82283A90:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_82283A94:
	// stw r4,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r4.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x821e9778
	ctx.lr = 0x82283AA0;
	sub_821E9778(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,1576
	ctx.r4.s64 = ctx.r11.s64 + 1576;
	// bl 0x8215f338
	ctx.lr = 0x82283AB0;
	sub_8215F338(ctx, base);
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// bl 0x8215fb50
	ctx.lr = 0x82283AB8;
	sub_8215FB50(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,1592
	ctx.r4.s64 = ctx.r11.s64 + 1592;
	// bl 0x8215f338
	ctx.lr = 0x82283AC8;
	sub_8215F338(ctx, base);
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// bl 0x8215fb50
	ctx.lr = 0x82283AD0;
	sub_8215FB50(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,1608
	ctx.r4.s64 = ctx.r11.s64 + 1608;
	// bl 0x8215f338
	ctx.lr = 0x82283AE0;
	sub_8215F338(ctx, base);
	// addi r4,r31,28
	ctx.r4.s64 = r31.s64 + 28;
	// bl 0x8215fb50
	ctx.lr = 0x82283AE8;
	sub_8215FB50(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,1624
	ctx.r4.s64 = ctx.r11.s64 + 1624;
	// bl 0x8215f338
	ctx.lr = 0x82283AF8;
	sub_8215F338(ctx, base);
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// bl 0x8215fb50
	ctx.lr = 0x82283B00;
	sub_8215FB50(ctx, base);
loc_82283B00:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// bl 0x821d0378
	ctx.lr = 0x82283B0C;
	sub_821D0378(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// beq 0x82283b94
	if (ctx.cr0.eq) goto loc_82283B94;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x822f6280
	ctx.lr = 0x82283B24;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82283b3c
	if (ctx.cr0.eq) goto loc_82283B3C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x821e97e8
	ctx.lr = 0x82283B34;
	sub_821E97E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82283b40
	goto loc_82283B40;
loc_82283B3C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_82283B40:
	// stw r4,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x821e9778
	ctx.lr = 0x82283B4C;
	sub_821E9778(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stfs f31,24(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lfs f13,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// bl 0x821e9910
	ctx.lr = 0x82283B7C;
	sub_821E9910(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,1636
	ctx.r4.s64 = ctx.r11.s64 + 1636;
	// bl 0x8215f338
	ctx.lr = 0x82283B8C;
	sub_8215F338(ctx, base);
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// bl 0x8215fb50
	ctx.lr = 0x82283B94;
	sub_8215FB50(ctx, base);
loc_82283B94:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// bl 0x821d0378
	ctx.lr = 0x82283BA0;
	sub_821D0378(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82283c1c
	if (ctx.cr0.eq) goto loc_82283C1C;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x822f6280
	ctx.lr = 0x82283BB0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82283bc4
	if (ctx.cr0.eq) goto loc_82283BC4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821e97e8
	ctx.lr = 0x82283BC0;
	sub_821E97E8(ctx, base);
	// b 0x82283bc8
	goto loc_82283BC8;
loc_82283BC4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82283BC8:
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// stb r27,20(r3)
	REX_STORE_U8(ctx.r3.u32 + 20, r27.u8);
	// bl 0x821e9910
	ctx.lr = 0x82283BD8;
	sub_821E9910(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stfs f31,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x821e9778
	ctx.lr = 0x82283BEC;
	sub_821E9778(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,1648
	ctx.r4.s64 = ctx.r11.s64 + 1648;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x82283BFC;
	sub_8215F338(ctx, base);
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// bl 0x8215fb50
	ctx.lr = 0x82283C04;
	sub_8215FB50(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,1668
	ctx.r4.s64 = ctx.r11.s64 + 1668;
	// bl 0x8215f338
	ctx.lr = 0x82283C14;
	sub_8215F338(ctx, base);
	// addi r4,r31,44
	ctx.r4.s64 = r31.s64 + 44;
	// bl 0x8215fb50
	ctx.lr = 0x82283C1C;
	sub_8215FB50(ctx, base);
loc_82283C1C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82283C2C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82283C3C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x82283C4C;
	sub_82120AC0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8229ED90) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8229ee24
	if (ctx.cr0.eq) goto loc_8229EE24;
	// lfs f13,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,148(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// lfs f0,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f9,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f12,48(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,56(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f12,f9,f10
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lhz r10,-10(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + -10);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// fctidz f0,f13
	ctx.f0.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lhz r9,-10(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + -10);
	// fctidz f0,f12
	ctx.f0.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lhz r8,-10(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + -10);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// sth r8,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// blr 
	return;
loc_8229EE24:
	// lwz r10,108(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// rlwinm r11,r4,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// ld r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stdx r9,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u64);
	// ld r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// std r11,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A4F10) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// lfs f11,15048(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	ctx.f11.f64 = double(temp.f32);
loc_822A4F2C:
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f13,f0,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// beq cr6,0x822a4f88
	if (ctx.cr6.eq) goto loc_822A4F88;
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// bge cr6,0x822a4f74
	if (!ctx.cr6.lt) goto loc_822A4F74;
	// fneg f0,f10
	ctx.f0.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// b 0x822a4f78
	goto loc_822A4F78;
loc_822A4F74:
	// stfs f10,-8(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
loc_822A4F78:
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// b 0x822a4fac
	goto loc_822A4FAC;
loc_822A4F88:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,-16(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x822a4fa4
	if (!ctx.cr6.lt) goto loc_822A4FA4;
	// fneg f0,f10
	ctx.f0.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// b 0x822a4fa8
	goto loc_822A4FA8;
loc_822A4FA4:
	// stfs f10,-8(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
loc_822A4FA8:
	// stfs f11,-12(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
loc_822A4FAC:
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// ld r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// std r7,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r8,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x822a4f2c
	if (!ctx.cr0.eq) goto loc_822A4F2C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822AC430) {
	REX_FUNC_PROLOGUE();
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// bl 0x826a1ca8
	ctx.lr = 0x822AC438;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2c98
	ctx.lr = 0x822AC440;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r29,36(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mulli r11,r29,80
	ctx.r11.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(80));
	// lwz r10,204(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 204);
	// lwz r9,20(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r28,64(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// beq cr6,0x822ac698
	if (ctx.cr6.eq) goto loc_822AC698;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822AC490;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm. r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ac698
	if (ctx.cr0.eq) goto loc_822AC698;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f7,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lfs f11,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lfs f8,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// ld r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// ld r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// ld r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// addi r6,r6,16592
	ctx.r6.s64 = ctx.r6.s64 + 16592;
	// ld r31,24(r11)
	r31.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// ld r27,32(r11)
	r27.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// ld r26,40(r11)
	r26.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// fsubs f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// ld r25,48(r11)
	r25.u64 = REX_LOAD_U64(ctx.r11.u32 + 48);
	// ld r24,56(r11)
	r24.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// lfs f0,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// std r5,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// std r4,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r4.u64);
	// fmuls f1,f9,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// std r3,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r3.u64);
	// fmuls f31,f6,f0
	f31.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// std r31,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, r31.u64);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// std r27,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, r27.u64);
	// std r26,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, r26.u64);
	// fmuls f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// std r25,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, r25.u64);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// std r24,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, r24.u64);
	// lfs f10,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f8,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f6,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f4,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f4.f64 = double(temp.f32);
	// lfs f8,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f8.f64 = double(temp.f32);
	// lfs f3,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f3.f64 = double(temp.f32);
	// lfs f5,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f7.f64 = double(temp.f32);
	// lfs f29,176(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	f29.f64 = double(temp.f32);
	// lfs f30,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	f30.f64 = double(temp.f32);
	// lfs f11,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f28,f11,f2
	f28.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// fmuls f27,f10,f2
	f27.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmuls f2,f9,f2
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fabs f24,f6
	f24.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fmadds f28,f4,f1,f28
	f28.f64 = double(float(std::fma(ctx.f4.f64, ctx.f1.f64, f28.f64)));
	// fabs f11,f11
	ctx.f11.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f26,f8
	f26.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fabs f4,f4
	ctx.f4.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// fabs f25,f7
	f25.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fabs f9,f9
	ctx.f9.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fabs f10,f10
	ctx.f10.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fmadds f6,f6,f1,f27
	ctx.f6.f64 = double(float(std::fma(ctx.f6.f64, ctx.f1.f64, f27.f64)));
	// fmadds f8,f8,f1,f2
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f1.f64, ctx.f2.f64)));
	// fabs f1,f5
	ctx.f1.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fmadds f2,f3,f31,f28
	ctx.f2.f64 = double(float(std::fma(ctx.f3.f64, f31.f64, f28.f64)));
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fabs f3,f3
	ctx.f3.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fmadds f6,f5,f31,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f5.f64, f31.f64, ctx.f6.f64)));
	// fmadds f8,f7,f31,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f7.f64, f31.f64, ctx.f8.f64)));
	// fmuls f5,f0,f24
	ctx.f5.f64 = double(float(ctx.f0.f64 * f24.f64));
	// fadds f7,f2,f29
	ctx.f7.f64 = double(float(ctx.f2.f64 + f29.f64));
	// lfs f2,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f31,f0,f26
	f31.f64 = double(float(ctx.f0.f64 * f26.f64));
	// fmadds f11,f0,f4,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f4.f64, ctx.f11.f64)));
	// fadds f6,f6,f30
	ctx.f6.f64 = double(float(ctx.f6.f64 + f30.f64));
	// fmadds f10,f12,f10,f5
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f10.f64, ctx.f5.f64)));
	// lfs f0,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f12,f9,f31
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f9.f64, f31.f64)));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fadds f8,f8,f2
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f0,f3,f13,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f3.f64, ctx.f13.f64, ctx.f11.f64)));
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// fmadds f11,f1,f13,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f1.f64, ctx.f13.f64, ctx.f10.f64)));
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// fmadds f13,f13,f25,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f25.f64, ctx.f12.f64)));
	// fsubs f12,f7,f0
	ctx.f12.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f0,f6,f11
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f0,f8,f13
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// fadds f0,f11,f6
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// fadds f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// std r3,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r3.u64);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r31,8(r9)
	r31.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r9,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// std r10,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// std r31,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, r31.u64);
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822AC698;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822AC698:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822abe18
	ctx.lr = 0x822AC6A8;
	sub_822ABE18(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ce4
	ctx.lr = 0x822AC6B4;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_822C26D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f12,10500(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10500);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,656(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 656);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2AF8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,18,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2BF0) {
	REX_FUNC_PROLOGUE();
	// lbz r3,10499(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 10499);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2C70) {
	REX_FUNC_PROLOGUE();
	// lbz r3,10494(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 10494);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2DD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f12,10832(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10832);
	ctx.f12.f64 = double(temp.f32);
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f13,28(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x822c2df8
	if (!ctx.cr6.eq) goto loc_822C2DF8;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x822c2dfc
	if (ctx.cr6.eq) goto loc_822C2DFC;
loc_822C2DF8:
	// li r10,1
	ctx.r10.s64 = 1;
loc_822C2DFC:
	// lwz r11,10568(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10568);
	// lfs f12,10840(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10840);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// rlwimi r11,r10,11,20,20
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x800) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r11,10568(r3)
	REX_STORE_U32(ctx.r3.u32 + 10568, ctx.r11.u32);
	// bne cr6,0x822c2e20
	if (!ctx.cr6.eq) goto loc_822C2E20;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x822c2e24
	if (ctx.cr6.eq) goto loc_822C2E24;
loc_822C2E20:
	// li r10,1
	ctx.r10.s64 = 1;
loc_822C2E24:
	// li r12,1
	ctx.r12.s64 = 1;
	// stfs f13,10836(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 10836, temp.u32);
	// rlwimi r11,r10,12,19,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFEFFF);
	// stfs f13,10844(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 10844, temp.u32);
	// rldicr r12,r12,44,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10568(r3)
	REX_STORE_U32(ctx.r3.u32 + 10568, ctx.r11.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// rldicr r12,r12,42,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C6BC8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// vor128 v60,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,8080
	ctx.r11.s64 = ctx.r11.s64 + 8080;
	// addi r10,r10,8064
	ctx.r10.s64 = ctx.r10.s64 + 8064;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r9,r9,8096
	ctx.r9.s64 = ctx.r9.s64 + 8096;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v59,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v0,v62,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x0));
	// vspltw128 v56,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// lvx128 v61,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v55,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// vmulfp128 v59,v60,v59
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v59.f32)));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// vspltw128 v58,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vspltw128 v57,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vcmpgtfp128 v12,v56,v60
	simde_mm_store_ps(ctx.v12.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vspltw128 v9,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x55));
	// vcmpgtfp128 v7,v55,v60
	simde_mm_store_ps(ctx.v7.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vcmpgtfp128 v8,v62,v60
	simde_mm_store_ps(ctx.v8.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vspltw128 v4,v61,3
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x0));
	// vspltw128 v11,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// vspltw128 v63,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vrfin128 v62,v59
	simde_mm_store_ps(ctx.v62.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v59.f32), SIMDE_MM_FROUND_TO_NEAREST_INT | SIMDE_MM_FROUND_NO_EXC));
	// vmulfp128 v61,v62,v58
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v58.f32)));
	// vmulfp128 v59,v62,v57
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vmulfp128 v63,v62,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v13,v62,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vrfiz128 v10,v61
	simde_mm_store_ps(ctx.v10.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v61.f32), SIMDE_MM_FROUND_TO_ZERO | SIMDE_MM_FROUND_NO_EXC));
	// vrfiz128 v5,v59
	simde_mm_store_ps(ctx.v5.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v59.f32), SIMDE_MM_FROUND_TO_ZERO | SIMDE_MM_FROUND_NO_EXC));
	// vrfiz128 v6,v63
	simde_mm_store_ps(ctx.v6.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v63.f32), SIMDE_MM_FROUND_TO_ZERO | SIMDE_MM_FROUND_NO_EXC));
	// vmaddfp v9,v10,v0,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v10,v5,v0,v4
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vmaddfp v11,v6,v0,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vsel v12,v10,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// vsel v0,v12,v11,v7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8))));
	// vsel v1,v0,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vrlimi128 v1,v60,1,0
	simde_mm_store_ps(ctx.v1.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 228), 1));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D2ED8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r11,r11,26,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xF;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D30A8) {
	REX_FUNC_PROLOGUE();
	// b 0x822d21f8
	sub_822D21F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D3498) {
	REX_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// rlwinm r5,r11,4,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// rlwinm r4,r11,10,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3F;
	// b 0x822d2838
	sub_822D2838(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D48B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822D48C0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r30,r4,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822d4924
	if (!ctx.cr6.gt) goto loc_822D4924;
	// bl 0x822d5b28
	ctx.lr = 0x822D48E8;
	sub_822D5B28(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822d4924
	if (!ctx.cr6.gt) goto loc_822D4924;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5048
	ctx.lr = 0x822D4908;
	sub_822D5048(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822d4924
	if (!ctx.cr0.eq) goto loc_822D4924;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x822d4928
	if (ctx.cr6.gt) goto loc_822D4928;
loc_822D4924:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
loc_822D4928:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822D9018) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// beq cr6,0x822d906c
	if (ctx.cr6.eq) goto loc_822D906C;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfd f0,848(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 848);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x822d904c
	if (ctx.cr6.gt) goto loc_822D904C;
	// lfs f0,844(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 844);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822d9080
	goto loc_822D9080;
loc_822D904C:
	// lfs f0,856(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 856);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f0,860(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 860);
	ctx.f0.f64 = double(temp.f32);
	// lfd f2,864(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 864);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x8269f778
	ctx.lr = 0x822D9064;
	sub_8269F778(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// b 0x822d90a0
	goto loc_822D90A0;
loc_822D906C:
	// addi r31,r11,16592
	r31.s64 = ctx.r11.s64 + 16592;
	// lfd f0,872(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 872);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x822d9088
	if (ctx.cr6.gt) goto loc_822D9088;
	// lfs f0,880(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 880);
	ctx.f0.f64 = double(temp.f32);
loc_822D9080:
	// fmuls f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// b 0x822d90a0
	goto loc_822D90A0;
loc_822D9088:
	// lfd f2,888(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(r31.u32 + 888);
	// bl 0x8269f778
	ctx.lr = 0x822D9090;
	sub_8269F778(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f0,884(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 884);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,856(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 856);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f1,f12,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, -ctx.f13.f64)));
loc_822D90A0:
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

DEFINE_REX_FUNC(sub_822DDDD8) {
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
	ctx.lr = 0x822DDDE0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r9,256
	ctx.r9.s64 = 16777216;
	// b 0x822dde0c
	goto loc_822DDE0C;
loc_822DDDF4:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822dde18
	if (!ctx.cr0.eq) goto loc_822DDE18;
	// db16cyc 
	std::this_thread::yield();
loc_822DDE0C:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822dddf4
	if (!ctx.cr6.eq) goto loc_822DDDF4;
loc_822DDE18:
	// li r29,0
	r29.s64 = 0;
	// li r28,1
	r28.s64 = 1;
loc_822DDE20:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r31
	ea = r31.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bne cr6,0x822dde44
	if (!ctx.cr6.eq) goto loc_822DDE44;
	// stwcx. r28,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(r28.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x822dde20
	if (!ctx.cr0.eq) goto loc_822DDE20;
	// b 0x822dde4c
	goto loc_822DDE4C;
loc_822DDE44:
	// stwcx. r11,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_822DDE4C:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822dde20
	if (!ctx.cr6.eq) goto loc_822DDE20;
	// lwsync 
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 84);
	// lwz r10,88(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 88);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822dde7c
	if (!ctx.cr6.eq) goto loc_822DDE7C;
	// lwsync 
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
loc_822DDE74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_822DDE7C:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 88);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,23
	ctx.r10.s64 = ctx.r10.s64 + 23;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// stw r8,88(r30)
	REX_STORE_U32(r30.u32 + 88, ctx.r8.u32);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r8,60(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x822ddebc
	if (!ctx.cr6.gt) goto loc_822DDEBC;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// b 0x822ddee8
	goto loc_822DDEE8;
loc_822DDEBC:
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// stw r29,104(r31)
	REX_STORE_U32(r31.u32 + 104, r29.u32);
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ddee0
	if (ctx.cr6.eq) goto loc_822DDEE0;
	// stw r29,72(r31)
	REX_STORE_U32(r31.u32 + 72, r29.u32);
	// b 0x822ddee8
	goto loc_822DDEE8;
loc_822DDEE0:
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
loc_822DDEE8:
	// lis r27,-16384
	r27.s64 = -1073741824;
loc_822DDEEC:
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822ddf14
	if (!ctx.cr6.lt) goto loc_822DDF14;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// lwsync 
	// b 0x822ddf64
	goto loc_822DDF64;
loc_822DDF14:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822ddf80
	if (!ctx.cr0.eq) goto loc_822DDF80;
	// lwz r9,360(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 360);
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// lwz r8,356(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 356);
	// rlwinm r10,r11,16,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7FFF;
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822ddf40
	if (!ctx.cr0.eq) goto loc_822DDF40;
	// add r3,r10,r5
	ctx.r3.u64 = ctx.r10.u64 + ctx.r5.u64;
	// b 0x822ddeec
	goto loc_822DDEEC;
loc_822DDF40:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r5,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r5.u32);
	// stw r28,24(r31)
	REX_STORE_U32(r31.u32 + 24, r28.u32);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// lwsync 
	// li r6,0
	ctx.r6.s64 = 0;
loc_822DDF64:
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DDF78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// b 0x822ddeec
	goto loc_822DDEEC;
loc_822DDF80:
	// lis r10,-29440
	ctx.r10.s64 = -1929379840;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822ddf9c
	if (!ctx.cr6.eq) goto loc_822DDF9C;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r11,360(r31)
	REX_STORE_U32(r31.u32 + 360, ctx.r11.u32);
	// b 0x822ddeec
	goto loc_822DDEEC;
loc_822DDF9C:
	// lis r10,-29696
	ctx.r10.s64 = -1946157056;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822ddfc0
	if (!ctx.cr6.eq) goto loc_822DDFC0;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// b 0x822ddeec
	goto loc_822DDEEC;
loc_822DDFC0:
	// rlwinm r10,r11,0,0,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, ctx.xer);
	// bne cr6,0x822ddff8
	if (!ctx.cr6.eq) goto loc_822DDFF8;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bne cr6,0x822ddff0
	if (!ctx.cr6.eq) goto loc_822DDFF0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ddc08
	ctx.lr = 0x822DDFE4;
	sub_822DDC08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822ddeec
	if (!ctx.cr0.eq) goto loc_822DDEEC;
	// b 0x822dde74
	goto loc_822DDE74;
loc_822DDFF0:
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x822ddeec
	goto loc_822DDEEC;
loc_822DDFF8:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// stw r28,96(r31)
	REX_STORE_U32(r31.u32 + 96, r28.u32);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822de078
	if (ctx.cr6.eq) goto loc_822DE078;
	// stw r3,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// lwsync 
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x822de028
	goto loc_822DE028;
loc_822DE024:
	// db16cyc 
	std::this_thread::yield();
loc_822DE028:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822de024
	if (!ctx.cr6.eq) goto loc_822DE024;
loc_822DE034:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r31
	ea = r31.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bne cr6,0x822de058
	if (!ctx.cr6.eq) goto loc_822DE058;
	// stwcx. r28,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(r28.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x822de034
	if (!ctx.cr0.eq) goto loc_822DE034;
	// b 0x822de060
	goto loc_822DE060;
loc_822DE058:
	// stwcx. r11,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_822DE060:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822de034
	if (!ctx.cr6.eq) goto loc_822DE034;
	// lwsync 
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// b 0x822de084
	goto loc_822DE084;
loc_822DE078:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822dd890
	ctx.lr = 0x822DE080;
	sub_822DD890(ctx, base);
	// stw r29,96(r31)
	REX_STORE_U32(r31.u32 + 96, r29.u32);
loc_822DE084:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// b 0x822ddeec
	goto loc_822DDEEC;
}

DEFINE_REX_FUNC(sub_822F0CC0) {
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
	ctx.lr = 0x822F0CC8;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r4,r10,-26960
	ctx.r4.s64 = ctx.r10.s64 + -26960;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// clrlwi r31,r11,26
	r31.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x822f3c00
	ctx.lr = 0x822F0CF8;
	sub_822F3C00(ctx, base);
	// li r21,0
	r21.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x822f0d10
	if (!ctx.cr6.eq) goto loc_822F0D10;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822f0d14
	if (!ctx.cr6.eq) goto loc_822F0D14;
loc_822F0D10:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_822F0D14:
	// clrlwi r28,r11,24
	r28.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x822f0d38
	if (!ctx.cr6.eq) goto loc_822F0D38;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x822f0d30
	if (ctx.cr6.eq) goto loc_822F0D30;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// bne cr6,0x822f0d38
	if (!ctx.cr6.eq) goto loc_822F0D38;
loc_822F0D30:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822f0d3c
	goto loc_822F0D3C;
loc_822F0D38:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_822F0D3C:
	// clrlwi r27,r11,24
	r27.u64 = ctx.r11.u32 & 0xFF;
	// li r30,-1
	r30.s64 = -1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x822f0df4
	if (ctx.cr6.eq) goto loc_822F0DF4;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(r31.s32, 32, ctx.xer);
	// beq cr6,0x822f0de8
	if (ctx.cr6.eq) goto loc_822F0DE8;
	// ble cr6,0x822f0d98
	if (!ctx.cr6.gt) goto loc_822F0D98;
	// cmpwi cr6,r31,37
	ctx.cr6.compare<int32_t>(r31.s32, 37, ctx.xer);
	// ble cr6,0x822f0d88
	if (!ctx.cr6.gt) goto loc_822F0D88;
	// cmpwi cr6,r31,62
	ctx.cr6.compare<int32_t>(r31.s32, 62, ctx.xer);
	// beq cr6,0x822f0d7c
	if (ctx.cr6.eq) goto loc_822F0D7C;
	// cmpwi cr6,r31,63
	ctx.cr6.compare<int32_t>(r31.s32, 63, ctx.xer);
	// bne cr6,0x822f0d98
	if (!ctx.cr6.eq) goto loc_822F0D98;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r5,r11,17960
	ctx.r5.s64 = ctx.r11.s64 + 17960;
	// b 0x822f0e00
	goto loc_822F0E00;
loc_822F0D7C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r5,r11,17952
	ctx.r5.s64 = ctx.r11.s64 + 17952;
	// b 0x822f0e00
	goto loc_822F0E00;
loc_822F0D88:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r30,r31,-33
	r30.s64 = r31.s64 + -33;
	// addi r5,r11,17948
	ctx.r5.s64 = ctx.r11.s64 + 17948;
	// b 0x822f0e00
	goto loc_822F0E00;
loc_822F0D98:
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// rlwinm. r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f0ddc
	if (ctx.cr0.eq) goto loc_822F0DDC;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r10,r11,4,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x7;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822f0dc0
	if (!ctx.cr6.lt) goto loc_822F0DC0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r5,r11,17968
	ctx.r5.s64 = ctx.r11.s64 + 17968;
	// b 0x822f0dfc
	goto loc_822F0DFC;
loc_822F0DC0:
	// cmpwi cr6,r31,61
	ctx.cr6.compare<int32_t>(r31.s32, 61, ctx.xer);
	// bne cr6,0x822f0ddc
	if (!ctx.cr6.eq) goto loc_822F0DDC;
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f0ddc
	if (ctx.cr0.eq) goto loc_822F0DDC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r5,r11,17972
	ctx.r5.s64 = ctx.r11.s64 + 17972;
	// b 0x822f0e00
	goto loc_822F0E00;
loc_822F0DDC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r5,r11,17980
	ctx.r5.s64 = ctx.r11.s64 + 17980;
	// b 0x822f0dfc
	goto loc_822F0DFC;
loc_822F0DE8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r5,r11,17944
	ctx.r5.s64 = ctx.r11.s64 + 17944;
	// b 0x822f0e00
	goto loc_822F0E00;
loc_822F0DF4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r5,r11,17984
	ctx.r5.s64 = ctx.r11.s64 + 17984;
loc_822F0DFC:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_822F0E00:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,28576
	ctx.r4.s64 = ctx.r11.s64 + 28576;
	// bl 0x822f3c00
	ctx.lr = 0x822F0E10;
	sub_822F3C00(ctx, base);
	// clrlwi. r31,r28,24
	r31.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x822f0e28
	if (ctx.cr0.eq) goto loc_822F0E28;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,28260
	ctx.r4.s64 = ctx.r11.s64 + 28260;
	// bl 0x822f3c00
	ctx.lr = 0x822F0E28;
	sub_822F3C00(ctx, base);
loc_822F0E28:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x822f0e48
	if (!ctx.cr6.eq) goto loc_822F0E48;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x822f0e48
	if (ctx.cr6.eq) goto loc_822F0E48;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,17988
	ctx.r4.s64 = ctx.r11.s64 + 17988;
	// bl 0x822f3c00
	ctx.lr = 0x822F0E48;
	sub_822F3C00(ctx, base);
loc_822F0E48:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x822f0e64
	if (ctx.cr6.lt) goto loc_822F0E64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,28480
	ctx.r4.s64 = ctx.r11.s64 + 28480;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F0E64;
	sub_822F3C00(ctx, base);
loc_822F0E64:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822f0e7c
	if (ctx.cr6.eq) goto loc_822F0E7C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,28268
	ctx.r4.s64 = ctx.r11.s64 + 28268;
	// bl 0x822f3c00
	ctx.lr = 0x822F0E7C;
	sub_822F3C00(ctx, base);
loc_822F0E7C:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f0e90
	if (ctx.cr0.eq) goto loc_822F0E90;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,17992
	ctx.r4.s64 = ctx.r11.s64 + 17992;
	// b 0x822f1028
	goto loc_822F1028;
loc_822F0E90:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x822f0f0c
	if (!ctx.cr6.eq) goto loc_822F0F0C;
	// cmpwi cr6,r24,15
	ctx.cr6.compare<int32_t>(r24.s32, 15, ctx.xer);
	// beq cr6,0x822f1030
	if (ctx.cr6.eq) goto loc_822F1030;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,-14240
	ctx.r4.s64 = ctx.r11.s64 + -14240;
	// bl 0x822f3c00
	ctx.lr = 0x822F0EB0;
	sub_822F3C00(ctx, base);
	// clrlwi. r11,r24,31
	ctx.r11.u64 = r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f0ec8
	if (ctx.cr0.eq) goto loc_822F0EC8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,17996
	ctx.r4.s64 = ctx.r11.s64 + 17996;
	// bl 0x822f3c00
	ctx.lr = 0x822F0EC8;
	sub_822F3C00(ctx, base);
loc_822F0EC8:
	// rlwinm. r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f0ee0
	if (ctx.cr0.eq) goto loc_822F0EE0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,18000
	ctx.r4.s64 = ctx.r11.s64 + 18000;
	// bl 0x822f3c00
	ctx.lr = 0x822F0EE0;
	sub_822F3C00(ctx, base);
loc_822F0EE0:
	// rlwinm. r11,r24,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f0ef8
	if (ctx.cr0.eq) goto loc_822F0EF8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,18004
	ctx.r4.s64 = ctx.r11.s64 + 18004;
	// bl 0x822f3c00
	ctx.lr = 0x822F0EF8;
	sub_822F3C00(ctx, base);
loc_822F0EF8:
	// rlwinm. r11,r24,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f1030
	if (ctx.cr0.eq) goto loc_822F1030;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28512
	ctx.r4.s64 = ctx.r11.s64 + 28512;
	// b 0x822f1028
	goto loc_822F1028;
loc_822F0F0C:
	// cmpwi cr6,r24,15
	ctx.cr6.compare<int32_t>(r24.s32, 15, ctx.xer);
	// bne cr6,0x822f0f1c
	if (!ctx.cr6.eq) goto loc_822F0F1C;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x822f1030
	if (ctx.cr6.eq) goto loc_822F1030;
loc_822F0F1C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,-14240
	ctx.r4.s64 = ctx.r11.s64 + -14240;
	// bl 0x822f3c00
	ctx.lr = 0x822F0F2C;
	sub_822F3C00(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r9,r11,10472
	ctx.r9.s64 = ctx.r11.s64 + 10472;
loc_822F0F40:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// and. r8,r11,r24
	ctx.r8.u64 = ctx.r11.u64 & r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822f0f68
	if (ctx.cr0.eq) goto loc_822F0F68;
	// and. r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 & r23.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f0f60
	if (ctx.cr0.eq) goto loc_822F0F60;
	// li r11,49
	ctx.r11.s64 = 49;
	// b 0x822f0f8c
	goto loc_822F0F8C;
loc_822F0F60:
	// lbzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// b 0x822f0f8c
	goto loc_822F0F8C;
loc_822F0F68:
	// and. r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 & r23.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f0f78
	if (ctx.cr0.eq) goto loc_822F0F78;
	// li r11,95
	ctx.r11.s64 = 95;
	// b 0x822f0f8c
	goto loc_822F0F8C;
loc_822F0F78:
	// subfic r11,r22,0
	ctx.xer.ca = r22.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r22.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,31,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF1;
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r11,r11,95
	ctx.r11.s64 = ctx.r11.s64 + 95;
loc_822F0F8C:
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stbx r11,r10,r8
	REX_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x822f0f40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F0F40;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r8,r1,152
	ctx.r8.s64 = ctx.r1.s64 + 152;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_822F0FA8:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lbzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x822f0fe4
	if (ctx.cr6.eq) goto loc_822F0FE4;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// beq cr6,0x822f0fe4
	if (ctx.cr6.eq) goto loc_822F0FE4;
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// beq cr6,0x822f0fd4
	if (ctx.cr6.eq) goto loc_822F0FD4;
	// stb r9,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_822F0FD4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x822f0fa8
	if (ctx.cr6.lt) goto loc_822F0FA8;
	// b 0x822f0fe8
	goto loc_822F0FE8;
loc_822F0FE4:
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
loc_822F0FE8:
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f0ffc
	if (ctx.cr0.eq) goto loc_822F0FFC;
	// stb r21,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, r21.u8);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// b 0x822f1028
	goto loc_822F1028;
loc_822F0FFC:
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r21,148(r1)
	REX_STORE_U8(ctx.r1.u32 + 148, r21.u8);
loc_822F1004:
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,95
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 95, ctx.xer);
	// bne cr6,0x822f1024
	if (!ctx.cr6.eq) goto loc_822F1024;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r21,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r21.u8);
	// bgt 0x822f1004
	if (ctx.cr0.gt) goto loc_822F1004;
loc_822F1024:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_822F1028:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F1030;
	sub_822F3C00(ctx, base);
loc_822F1030:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_82308200) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,4824
	ctx.r11.s64 = ctx.r11.s64 + 4824;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8230822c
	if (ctx.cr0.eq) goto loc_8230822C;
	// bl 0x8269ce98
	ctx.lr = 0x8230822C;
	sub_8269CE98(ctx, base);
loc_8230822C:
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

DEFINE_REX_FUNC(sub_82309550) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82309560
	if (!ctx.cr6.eq) goto loc_82309560;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82309560:
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8230BB70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8230BB78;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r30,12(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230bbe4
	if (ctx.cr6.eq) goto loc_8230BBE4;
	// lwz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
loc_8230BBA0:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r7,r11
	r30.u64 = ctx.r7.u64 & ctx.r11.u64;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lhz r7,100(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 100);
	// rlwinm. r7,r7,0,24,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8230bbd8
	if (ctx.cr0.eq) goto loc_8230BBD8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8230bba0
	if (ctx.cr6.lt) goto loc_8230BBA0;
	// b 0x8230bbe4
	goto loc_8230BBE4;
loc_8230BBD8:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8230bbfc
	if (!ctx.cr0.eq) goto loc_8230BBFC;
loc_8230BBE4:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,40(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82309058
	ctx.lr = 0x8230BBF4;
	sub_82309058(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230bc0c
	if (!ctx.cr0.eq) goto loc_8230BC0C;
loc_8230BBFC:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_8230BC0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8230FF30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8230FF38;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8230ff54
	if (!ctx.cr6.eq) goto loc_8230FF54;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82310090
	goto loc_82310090;
loc_8230FF54:
	// lwz r11,68(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 68);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230ff80
	if (ctx.cr6.eq) goto loc_8230FF80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x8230ef38
	ctx.lr = 0x8230FF70;
	sub_8230EF38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82310024
	if (ctx.cr0.eq) goto loc_82310024;
	// li r3,90
	ctx.r3.s64 = 90;
	// b 0x82310090
	goto loc_82310090;
loc_8230FF80:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,5356
	ctx.r5.s64 = ctx.r10.s64 + 5356;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// li r6,517
	ctx.r6.s64 = 517;
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x8230FFA8;
	sub_82330A38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8230ffb8
	if (ctx.cr0.eq) goto loc_8230FFB8;
	// bl 0x8230fd10
	ctx.lr = 0x8230FFB4;
	sub_8230FD10(ctx, base);
	// b 0x8230ffbc
	goto loc_8230FFBC;
loc_8230FFB8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8230FFBC:
	// stw r3,68(r29)
	REX_STORE_U32(r29.u32 + 68, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230ffd0
	if (!ctx.cr6.eq) goto loc_8230FFD0;
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x82310090
	goto loc_82310090;
loc_8230FFD0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r30.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r30,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r30.u32);
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// stb r30,28(r3)
	REX_STORE_U8(ctx.r3.u32 + 28, r30.u8);
	// stb r30,29(r3)
	REX_STORE_U8(ctx.r3.u32 + 29, r30.u8);
	// stw r30,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, r30.u32);
	// lfs f0,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// sth r30,44(r3)
	REX_STORE_U16(ctx.r3.u32 + 44, r30.u16);
	// lfs f13,3716(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, r30.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r30,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, r30.u32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r30,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, r30.u32);
	// stw r30,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, r30.u32);
	// stw r30,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, r30.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r30,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, r30.u32);
loc_82310024:
	// lwz r11,68(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82310038
	if (!ctx.cr6.eq) goto loc_82310038;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_82310038:
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r29,72(r31)
	REX_STORE_U32(r31.u32 + 72, r29.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x82310068
	goto loc_82310068;
loc_82310060:
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82310068:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82310060
	if (!ctx.cr6.eq) goto loc_82310060;
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// lbz r4,29(r29)
	ctx.r4.u64 = REX_LOAD_U8(r29.u32 + 29);
	// lwz r11,56(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82310090;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82310090:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82317578) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,6196
	ctx.r11.s64 = ctx.r11.s64 + 6196;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x823175bc
	if (ctx.cr6.eq) goto loc_823175BC;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823175B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
loc_823175BC:
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

DEFINE_REX_FUNC(sub_823199E8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,28
	ctx.r6.s64 = 28;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82331a00
	ctx.lr = 0x82319A08;
	sub_82331A00(ctx, base);
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

DEFINE_REX_FUNC(sub_8231AA48) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,5964
	ctx.r11.s64 = ctx.r11.s64 + 5964;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8231aa74
	if (ctx.cr0.eq) goto loc_8231AA74;
	// bl 0x8269ce98
	ctx.lr = 0x8231AA74;
	sub_8269CE98(ctx, base);
loc_8231AA74:
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

DEFINE_REX_FUNC(sub_8231E650) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8231e660
	if (ctx.cr6.eq) goto loc_8231E660;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_8231E660:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8231e6b0
	if (ctx.cr6.eq) goto loc_8231E6B0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x8231e678
	if (!ctx.cr6.eq) goto loc_8231E678;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8231E678:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10820(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -10820);
	// addi r10,r11,124
	ctx.r10.s64 = ctx.r11.s64 + 124;
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// b 0x8231e6a0
	goto loc_8231E6A0;
loc_8231E690:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8231e6ac
	if (ctx.cr6.eq) goto loc_8231E6AC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8231E6A0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8231e690
	if (!ctx.cr6.eq) goto loc_8231E690;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_8231E6AC:
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
loc_8231E6B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82321A40) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82321A48;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r30,r3,12
	r30.s64 = ctx.r3.s64 + 12;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x82321aa4
	if (ctx.cr6.eq) goto loc_82321AA4;
loc_82321A64:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r29.u32);
	// bl 0x8232c350
	ctx.lr = 0x82321A98;
	sub_8232C350(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x82321a64
	if (!ctx.cr6.eq) goto loc_82321A64;
loc_82321AA4:
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// addi r30,r28,24
	r30.s64 = r28.s64 + 24;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x82321af4
	if (ctx.cr6.eq) goto loc_82321AF4;
loc_82321AB4:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r29.u32);
	// bl 0x82300118
	ctx.lr = 0x82321AE8;
	sub_82300118(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x82321ab4
	if (!ctx.cr6.eq) goto loc_82321AB4;
loc_82321AF4:
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// addi r30,r28,36
	r30.s64 = r28.s64 + 36;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x82321b44
	if (ctx.cr6.eq) goto loc_82321B44;
loc_82321B04:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r29.u32);
	// bl 0x823288f0
	ctx.lr = 0x82321B38;
	sub_823288F0(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x82321b04
	if (!ctx.cr6.eq) goto loc_82321B04;
loc_82321B44:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8232ACD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8232ACE0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232AD00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x823165c0
	ctx.lr = 0x8232AD08;
	sub_823165C0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232AD1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8232ad2c
	if (!ctx.cr0.eq) goto loc_8232AD2C;
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x8232ada8
	goto loc_8232ADA8;
loc_8232AD2C:
	// addi r28,r31,64
	r28.s64 = r31.s64 + 64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82329a20
	ctx.lr = 0x8232AD3C;
	sub_82329A20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232ada8
	if (!ctx.cr0.eq) goto loc_8232ADA8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232AD5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8232ad9c
	if (ctx.cr0.eq) goto loc_8232AD9C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8232aa00
	ctx.lr = 0x8232AD80;
	sub_8232AA00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232ada8
	if (!ctx.cr0.eq) goto loc_8232ADA8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82329ec8
	ctx.lr = 0x8232AD94;
	sub_82329EC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232ada8
	if (!ctx.cr0.eq) goto loc_8232ADA8;
loc_8232AD9C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82329b18
	ctx.lr = 0x8232ADA8;
	sub_82329B18(ctx, base);
loc_8232ADA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8232F608) {
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
	ctx.lr = 0x8232F61C;
	sub_82332760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232f62c
	if (!ctx.cr6.eq) goto loc_8232F62C;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82336ff8
	ctx.lr = 0x8232F62C;
	sub_82336FF8(ctx, base);
loc_8232F62C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232FFE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8232FFF0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x8235ace0
	ctx.lr = 0x8233000C;
	sub_8235ACE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82330038
	if (!ctx.cr6.eq) goto loc_82330038;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82330038;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82330038:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82333B58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82333B60;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82333bb8
	if (ctx.cr6.eq) goto loc_82333BB8;
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x82333bb8
	if (ctx.cr6.gt) goto loc_82333BB8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82333bb8
	if (ctx.cr6.lt) goto loc_82333BB8;
	// lwz r30,0(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r3,21640
	ctx.r4.s64 = ctx.r3.s64 + 21640;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,32(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r28,64(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 64);
	// bl 0x823ef2f8
	ctx.lr = 0x82333BA0;
	sub_823EF2F8(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,32(r31)
	REX_STORE_U32(r31.u32 + 32, r29.u32);
	// stw r28,64(r31)
	REX_STORE_U32(r31.u32 + 64, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82333BB8:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8233E270) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823ef790
	ctx.lr = 0x8233E288;
	sub_823EF790(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,19
	ctx.r10.s64 = 19;
	// subf r9,r3,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r3.u64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 & ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8233ED40) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8234aac0
	ctx.lr = 0x8233ED64;
	sub_8234AAC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233ed7c
	if (!ctx.cr6.eq) goto loc_8233ED7C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8234c980
	ctx.lr = 0x8233ED7C;
	sub_8234C980(ctx, base);
loc_8233ED7C:
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

DEFINE_REX_FUNC(sub_8233F898) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8233F8A0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x8235ace0
	ctx.lr = 0x8233F8B8;
	sub_8235ACE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233f8e0
	if (!ctx.cr6.eq) goto loc_8233F8E0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233F8E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233F8E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823414F0) {
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
	ctx.lr = 0x823414F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32129
	r28.s64 = -2105606144;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,1012(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// addi r9,r10,40
	ctx.r9.s64 = ctx.r10.s64 + 40;
	// lwz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82341544
	if (ctx.cr6.eq) goto loc_82341544;
loc_82341520:
	// lwz r7,336(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 336);
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmpwi cr6,r7,5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 5, ctx.xer);
	// beq cr6,0x82341540
	if (ctx.cr6.eq) goto loc_82341540;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82341520
	if (!ctx.cr6.eq) goto loc_82341520;
	// b 0x82341544
	goto loc_82341544;
loc_82341540:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82341544:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823415e0
	if (!ctx.cr6.eq) goto loc_823415E0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r29,r11,9276
	r29.s64 = ctx.r11.s64 + 9276;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,384
	ctx.r6.s64 = 384;
	// li r4,344
	ctx.r4.s64 = 344;
	// bl 0x82330a38
	ctx.lr = 0x82341574;
	sub_82330A38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234158c
	if (ctx.cr6.eq) goto loc_8234158C;
	// bl 0x82341210
	ctx.lr = 0x82341580;
	sub_82341210(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82341598
	if (!ctx.cr6.eq) goto loc_82341598;
loc_8234158C:
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_82341598:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,396(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 396);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82341420
	ctx.lr = 0x823415AC;
	sub_82341420(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823415e0
	if (ctx.cr6.eq) goto loc_823415E0;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,393
	ctx.r6.s64 = 393;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823415D4;
	sub_82330D00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_823415E0:
	// stw r31,384(r27)
	REX_STORE_U32(r27.u32 + 384, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8234B368) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r8,16
	ctx.r8.s64 = 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r3,220
	ctx.r9.s64 = ctx.r3.s64 + 220;
	// stw r10,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// lis r7,16256
	ctx.r7.s64 = 1065353216;
	// stw r10,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// stw r10,416(r3)
	REX_STORE_U32(ctx.r3.u32 + 416, ctx.r10.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// stw r10,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
loc_8234B398:
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8234b398
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8234B398;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r10,284(r11)
	REX_STORE_U32(ctx.r11.u32 + 284, ctx.r10.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r10,396(r11)
	REX_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r10,400(r11)
	REX_STORE_U32(ctx.r11.u32 + 400, ctx.r10.u32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// lfs f0,3704(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,128
	ctx.r4.s64 = 128;
	// lfs f12,9368(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 9368);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r11,116
	ctx.r9.s64 = ctx.r11.s64 + 116;
	// lfs f13,3716(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3716);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,3796(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 3796);
	ctx.f11.f64 = double(temp.f32);
	// stw r3,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r3.u32);
	// stfs f0,176(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// stw r5,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r5.u32);
	// stfs f0,128(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// stw r4,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r4.u32);
	// stfs f0,132(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// stw r10,136(r11)
	REX_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
	// stfs f12,180(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 180, temp.u32);
	// stw r10,144(r11)
	REX_STORE_U32(ctx.r11.u32 + 144, ctx.r10.u32);
	// stfs f13,184(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 184, temp.u32);
	// stw r10,148(r11)
	REX_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
	// stfs f0,188(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 188, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,192(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// stfs f0,196(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 196, temp.u32);
	// stfs f0,200(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 200, temp.u32);
	// stfs f0,204(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 204, temp.u32);
	// stfs f0,208(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 208, temp.u32);
	// stfs f0,212(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 212, temp.u32);
	// stfs f0,216(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 216, temp.u32);
	// stfs f0,292(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 292, temp.u32);
	// stfs f0,296(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 296, temp.u32);
	// stfs f0,336(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 336, temp.u32);
	// stfs f13,364(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 364, temp.u32);
	// stfs f0,288(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 288, temp.u32);
	// stfs f13,300(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 300, temp.u32);
	// stfs f13,304(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 304, temp.u32);
	// stfs f13,308(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 308, temp.u32);
	// stfs f13,312(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 312, temp.u32);
	// stfs f13,316(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 316, temp.u32);
	// stfs f13,320(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 320, temp.u32);
	// stfs f0,328(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 328, temp.u32);
	// stfs f11,332(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 332, temp.u32);
	// stfs f0,168(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 168, temp.u32);
	// stw r9,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r9.u32);
	// stw r9,120(r11)
	REX_STORE_U32(ctx.r11.u32 + 120, ctx.r9.u32);
	// stw r10,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82353AE8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,300(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 300);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82353b14
	if (ctx.cr6.eq) goto loc_82353B14;
	// mulli r10,r4,44
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(44));
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82353b14
	if (!ctx.cr6.eq) goto loc_82353B14;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_82353B14:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823540F0) {
	REX_FUNC_PROLOGUE();
	// lwz r10,392(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 392);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r4,416(r3)
	REX_STORE_U32(ctx.r3.u32 + 416, ctx.r4.u32);
	// rlwinm r8,r10,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,412(r11)
	REX_STORE_U32(ctx.r11.u32 + 412, ctx.r9.u32);
	// stw r8,392(r11)
	REX_STORE_U32(ctx.r11.u32 + 392, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82354980) {
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
	ctx.lr = 0x82354988;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,296(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 296);
	// addi r28,r3,296
	r28.s64 = ctx.r3.s64 + 296;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r27,4348(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 4348);
	// bne cr6,0x82354a3c
	if (!ctx.cr6.eq) goto loc_82354A3C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8233e7e0
	ctx.lr = 0x823549B0;
	sub_8233E7E0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r30,1200(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1200);
	// beq cr6,0x823549ec
	if (ctx.cr6.eq) goto loc_823549EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82348c90
	ctx.lr = 0x823549CC;
	sub_82348C90(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823549ec
	if (ctx.cr6.eq) goto loc_823549EC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8233e820
	ctx.lr = 0x823549E0;
	sub_8233E820(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_823549EC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,300(r31)
	REX_STORE_U32(r31.u32 + 300, ctx.r10.u32);
	// lwz r11,1196(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1196);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82354a08
	if (!ctx.cr6.lt) goto loc_82354A08;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_82354A08:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82348c80
	ctx.lr = 0x82354A18;
	sub_82348C80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// beq cr6,0x82354a38
	if (ctx.cr6.eq) goto loc_82354A38;
	// bl 0x8233e820
	ctx.lr = 0x82354A2C;
	sub_8233E820(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_82354A38:
	// bl 0x8233e820
	ctx.lr = 0x82354A3C;
	sub_8233E820(ctx, base);
loc_82354A3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82358490) {
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
	ctx.lr = 0x82358498;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r27,-32129
	r27.s64 = -2105606144;
	// addi r28,r11,10464
	r28.s64 = ctx.r11.s64 + 10464;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82358524
	if (ctx.cr6.eq) goto loc_82358524;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82358508
	if (!ctx.cr6.gt) goto loc_82358508;
	// li r30,0
	r30.s64 = 0;
loc_823584CC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823584f4
	if (ctx.cr6.eq) goto loc_823584F4;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823584F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823584F4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823584cc
	if (ctx.cr6.lt) goto loc_823584CC;
loc_82358508:
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r6,108
	ctx.r6.s64 = 108;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82358524;
	sub_82330D00(ctx, base);
loc_82358524:
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,111
	ctx.r6.s64 = 111;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82358540;
	sub_82330D00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8235E320) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// bne cr6,0x8235e34c
	if (!ctx.cr6.eq) goto loc_8235E34C;
	// li r31,9264
	r31.s64 = 9264;
loc_8235E34C:
	// bl 0x823b2598
	ctx.lr = 0x8235E350;
	sub_823B2598(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e3a8
	if (!ctx.cr6.eq) goto loc_8235E3A8;
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// clrlwi r3,r31,16
	ctx.r3.u64 = r31.u32 & 0xFFFF;
	// bl 0x823b2658
	ctx.lr = 0x8235E364;
	sub_823B2658(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235e37c
	if (ctx.cr6.eq) goto loc_8235E37C;
loc_8235E370:
	// bl 0x823b2610
	ctx.lr = 0x8235E374;
	sub_823B2610(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8235e3a8
	goto loc_8235E3A8;
loc_8235E37C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x8233e6b8
	ctx.lr = 0x8235E388;
	sub_8233E6B8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e370
	if (!ctx.cr6.eq) goto loc_8235E370;
	// addi r3,r30,44
	ctx.r3.s64 = r30.s64 + 44;
	// bl 0x8233e338
	ctx.lr = 0x8235E39C;
	sub_8233E338(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e370
	if (!ctx.cr6.eq) goto loc_8235E370;
loc_8235E3A8:
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

DEFINE_REX_FUNC(sub_82361600) {
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
	// addi r31,r3,312
	r31.s64 = ctx.r3.s64 + 312;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1212(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1212);
	// bl 0x823bae40
	ctx.lr = 0x82361624;
	sub_823BAE40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82361644
	if (ctx.cr6.eq) goto loc_82361644;
	// li r3,44
	ctx.r3.s64 = 44;
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
loc_82361644:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823bc498
	ctx.lr = 0x8236164C;
	sub_823BC498(ctx, base);
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

DEFINE_REX_FUNC(sub_823640F0) {
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
	ctx.lr = 0x823640F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r3,340
	r31.s64 = ctx.r3.s64 + 340;
	// li r27,2
	r27.s64 = 2;
	// li r30,0
	r30.s64 = 0;
	// lis r28,-32129
	r28.s64 = -2105606144;
	// addi r29,r11,12232
	r29.s64 = ctx.r11.s64 + 12232;
loc_82364114:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82364140
	if (ctx.cr6.eq) goto loc_82364140;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,179
	ctx.r6.s64 = 179;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82364138;
	sub_82330D00(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,-8(r31)
	REX_STORE_U32(r31.u32 + -8, r30.u32);
loc_82364140:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x82364114
	if (!ctx.cr0.eq) goto loc_82364114;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823677D0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bgt cr6,0x823678d8
	if (ctx.cr6.gt) goto loc_823678D8;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8236784c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8236784C;
	// bdzf 4*cr6+eq,0x82367870
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82367870;
	// bne cr6,0x82367894
	if (!ctx.cr6.eq) goto loc_82367894;
	// lis r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ori r10,r10,49464
	ctx.r10.u64 = ctx.r10.u64 | 49464;
	// beq cr6,0x82367818
	if (ctx.cr6.eq) goto loc_82367818;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82367818:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823678d8
	if (ctx.cr6.eq) goto loc_823678D8;
	// lfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// addi r4,r11,11508
	ctx.r4.s64 = ctx.r11.s64 + 11508;
	// bl 0x826a0568
	ctx.lr = 0x82367838;
	sub_826A0568(ctx, base);
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
loc_8236784C:
	// lis r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ori r10,r10,49468
	ctx.r10.u64 = ctx.r10.u64 | 49468;
	// beq cr6,0x823678c0
	if (ctx.cr6.eq) goto loc_823678C0;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x823678b4
	goto loc_823678B4;
loc_82367870:
	// lis r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ori r10,r10,49472
	ctx.r10.u64 = ctx.r10.u64 | 49472;
	// beq cr6,0x823678c0
	if (ctx.cr6.eq) goto loc_823678C0;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x823678b4
	goto loc_823678B4;
loc_82367894:
	// lis r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ori r10,r10,49476
	ctx.r10.u64 = ctx.r10.u64 | 49476;
	// beq cr6,0x823678c0
	if (ctx.cr6.eq) goto loc_823678C0;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
loc_823678B4:
	// fcfid f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_823678C0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823678d8
	if (ctx.cr6.eq) goto loc_823678D8;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r4,r9,28480
	ctx.r4.s64 = ctx.r9.s64 + 28480;
	// bl 0x826a0568
	ctx.lr = 0x823678D8;
	sub_826A0568(ctx, base);
loc_823678D8:
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

DEFINE_REX_FUNC(sub_823721A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-28
	ctx.r11.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x823721b0
	if (!ctx.cr6.eq) goto loc_823721B0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823721B0:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
loc_823721C4:
	// stfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfsu f0,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823721c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823721C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823749B0) {
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
	ctx.lr = 0x823749B8;
	// stwu r1,-2208(r1)
	ea = -2208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// lwz r11,260(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823749ec
	if (!ctx.cr6.eq) goto loc_823749EC;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lwz r3,272(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 272);
	// lwz r4,-7928(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -7928);
	// bl 0x823c07d0
	ctx.lr = 0x823749E8;
	sub_823C07D0(ctx, base);
	// b 0x82374a2c
	goto loc_82374A2C;
loc_823749EC:
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r31,r26
	r31.u64 = r26.u64;
	// addze. r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82374a2c
	if (!ctx.cr0.gt) goto loc_82374A2C;
	// addi r30,r28,268
	r30.s64 = r28.s64 + 268;
	// lis r29,-32124
	r29.s64 = -2105278464;
loc_82374A04:
	// lwzu r3,4(r30)
	ea = 4 + r30.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// lwz r4,-7924(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + -7924);
	// bl 0x823c07d0
	ctx.lr = 0x82374A10;
	sub_823C07D0(ctx, base);
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r10,260(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82374a04
	if (ctx.cr6.lt) goto loc_82374A04;
loc_82374A2C:
	// lwz r6,32(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 32);
	// lwz r9,600(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 600);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r11,260(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 260);
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw. r10,r5,r27
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(r27.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// divwu r11,r10,r9
	ctx.r11.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// beq 0x82374a74
	if (ctx.cr0.eq) goto loc_82374A74;
	// mullw r7,r9,r11
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// li r8,1
	ctx.r8.s64 = 1;
	// subf r7,r7,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r7.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82374a64
	if (!ctx.cr6.lt) goto loc_82374A64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82374A64:
	// mullw r10,r9,r8
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// add r30,r10,r7
	r30.u64 = ctx.r10.u64 + ctx.r7.u64;
	// b 0x82374a7c
	goto loc_82374A7C;
loc_82374A74:
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r27,r26
	r27.u64 = r26.u64;
loc_82374A7C:
	// divwu r10,r30,r5
	ctx.r10.u64 = uint32_t(ctx.r5.u32 ? r30.u32 / ctx.r5.u32 : 0);
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82374ab0
	if (!ctx.cr6.gt) goto loc_82374AB0;
	// lwz r10,272(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 272);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r8,268(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 268);
	// mullw r7,r10,r5
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// divwu r5,r7,r9
	ctx.r5.u64 = uint32_t(ctx.r9.u32 ? ctx.r7.u32 / ctx.r9.u32 : 0);
	// divwu r4,r8,r5
	ctx.r4.u64 = uint32_t(ctx.r5.u32 ? ctx.r8.u32 / ctx.r5.u32 : 0);
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r10,r4,r11
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// b 0x82374ab4
	goto loc_82374AB4;
loc_82374AB0:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_82374AB4:
	// lwz r11,188(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 188);
	// lwz r9,268(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 268);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82374ad0
	if (!ctx.cr6.gt) goto loc_82374AD0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82374AD0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 256);
	// bl 0x82340e38
	ctx.lr = 0x82374ADC;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82374b64
	if (!ctx.cr6.eq) goto loc_82374B64;
	// lwz r11,204(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 204);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82374afc
	if (!ctx.cr6.eq) goto loc_82374AFC;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,204(r28)
	REX_STORE_U32(r28.u32 + 204, ctx.r11.u32);
loc_82374AFC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82374b54
	if (ctx.cr6.eq) goto loc_82374B54;
loc_82374B04:
	// li r31,2048
	r31.s64 = 2048;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// cmplwi cr6,r30,2048
	ctx.cr6.compare<uint32_t>(r30.u32, 2048, ctx.xer);
	// bge cr6,0x82374b18
	if (!ctx.cr6.lt) goto loc_82374B18;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82374B18:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8239e890
	ctx.lr = 0x82374B2C;
	sub_8239E890(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82374b54
	if (!ctx.cr6.eq) goto loc_82374B54;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82374b44
	if (!ctx.cr6.eq) goto loc_82374B44;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_82374B44:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82374b54
	if (ctx.cr6.lt) goto loc_82374B54;
	// subf. r30,r11,r30
	r30.u64 = r30.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82374b04
	if (!ctx.cr0.eq) goto loc_82374B04;
loc_82374B54:
	// lwz r11,204(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 204);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r10,204(r28)
	REX_STORE_U32(r28.u32 + 204, ctx.r10.u32);
loc_82374B64:
	// addi r1,r1,2208
	ctx.r1.s64 = ctx.r1.s64 + 2208;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8238C050) {
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
	ctx.lr = 0x8238C058;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32129
	r31.s64 = -2105606144;
	// li r5,116
	ctx.r5.s64 = 116;
	// addi r26,r31,15032
	r26.s64 = r31.s64 + 15032;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8238C074;
	sub_823EF5F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r11,19744
	ctx.r11.s64 = ctx.r11.s64 + 19744;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// lis r27,-32199
	r27.s64 = -2110193664;
	// stw r11,15032(r31)
	REX_STORE_U32(r31.u32 + 15032, ctx.r11.u32);
	// stw r10,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r10.u32);
	// li r9,1794
	ctx.r9.s64 = 1794;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r27,-16328
	ctx.r10.s64 = r27.s64 + -16328;
	// stw r9,12(r26)
	REX_STORE_U32(r26.u32 + 12, ctx.r9.u32);
	// lis r28,-32199
	r28.s64 = -2110193664;
	// stw r11,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r11.u32);
	// lis r29,-32199
	r29.s64 = -2110193664;
	// stw r10,16(r26)
	REX_STORE_U32(r26.u32 + 16, ctx.r10.u32);
	// lis r30,-32195
	r30.s64 = -2109931520;
	// addi r9,r28,-23016
	ctx.r9.s64 = r28.s64 + -23016;
	// addi r11,r29,-21864
	ctx.r11.s64 = r29.s64 + -21864;
	// addi r10,r30,-29712
	ctx.r10.s64 = r30.s64 + -29712;
	// stw r9,20(r26)
	REX_STORE_U32(r26.u32 + 20, ctx.r9.u32);
	// lis r3,-32195
	ctx.r3.s64 = -2109931520;
	// stw r11,24(r26)
	REX_STORE_U32(r26.u32 + 24, ctx.r11.u32);
	// lis r31,-32199
	r31.s64 = -2110193664;
	// stw r10,28(r26)
	REX_STORE_U32(r26.u32 + 28, ctx.r10.u32);
	// lis r4,-32195
	ctx.r4.s64 = -2109931520;
	// addi r11,r3,-29600
	ctx.r11.s64 = ctx.r3.s64 + -29600;
	// addi r9,r31,-22992
	ctx.r9.s64 = r31.s64 + -22992;
	// addi r10,r4,-29504
	ctx.r10.s64 = ctx.r4.s64 + -29504;
	// stw r11,36(r26)
	REX_STORE_U32(r26.u32 + 36, ctx.r11.u32);
	// lis r5,-32195
	ctx.r5.s64 = -2109931520;
	// stw r9,32(r26)
	REX_STORE_U32(r26.u32 + 32, ctx.r9.u32);
	// lis r6,-32195
	ctx.r6.s64 = -2109931520;
	// stw r10,92(r26)
	REX_STORE_U32(r26.u32 + 92, ctx.r10.u32);
	// lis r7,-32195
	ctx.r7.s64 = -2109931520;
	// addi r9,r5,-29456
	ctx.r9.s64 = ctx.r5.s64 + -29456;
	// addi r11,r6,-29352
	ctx.r11.s64 = ctx.r6.s64 + -29352;
	// addi r10,r7,-28656
	ctx.r10.s64 = ctx.r7.s64 + -28656;
	// stw r9,96(r26)
	REX_STORE_U32(r26.u32 + 96, ctx.r9.u32);
	// lis r8,-32199
	ctx.r8.s64 = -2110193664;
	// stw r11,100(r26)
	REX_STORE_U32(r26.u32 + 100, ctx.r11.u32);
	// stw r10,104(r26)
	REX_STORE_U32(r26.u32 + 104, ctx.r10.u32);
	// li r11,21
	ctx.r11.s64 = 21;
	// addi r9,r8,-22968
	ctx.r9.s64 = ctx.r8.s64 + -22968;
	// li r10,2212
	ctx.r10.s64 = 2212;
	// stw r11,64(r26)
	REX_STORE_U32(r26.u32 + 64, ctx.r11.u32);
	// stw r9,108(r26)
	REX_STORE_U32(r26.u32 + 108, ctx.r9.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r10,68(r26)
	REX_STORE_U32(r26.u32 + 68, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_823939C8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x823939d8
	if (!ctx.cr6.eq) goto loc_823939D8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823939D8:
	// b 0x823937d8
	sub_823937D8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82393F40) {
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
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82393f5c
	if (!ctx.cr6.eq) goto loc_82393F5C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82393F5C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r3,272
	ctx.r4.s64 = ctx.r3.s64 + 272;
	// stw r11,272(r3)
	REX_STORE_U32(ctx.r3.u32 + 272, ctx.r11.u32);
	// bl 0x823ce8e0
	ctx.lr = 0x82393F6C;
	sub_823CE8E0(ctx, base);
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

DEFINE_REX_FUNC(sub_82395490) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x823954a0
	if (!ctx.cr6.eq) goto loc_823954A0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823954A0:
	// b 0x82394e50
	sub_82394E50(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82395FC8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82395fd8
	if (!ctx.cr6.eq) goto loc_82395FD8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82395FD8:
	// b 0x82395ee0
	sub_82395EE0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82398088) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82398090;
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,336(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 336);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823968a0
	ctx.lr = 0x823980AC;
	sub_823968A0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340ff0
	ctx.lr = 0x823980B8;
	sub_82340FF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239811c
	if (!ctx.cr6.eq) goto loc_8239811C;
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 336);
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// lwz r10,332(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 332);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// subf r11,r7,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r7.u64;
	// bne cr6,0x82398118
	if (!ctx.cr6.eq) goto loc_82398118;
	// lwz r10,352(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82398118
	if (!ctx.cr6.eq) goto loc_82398118;
	// lwz r10,356(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8239810c
	if (ctx.cr6.eq) goto loc_8239810C;
	// mulli r11,r11,14
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(14));
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r8,r9,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// stw r8,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r8.u32);
loc_8239810C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826a1d0c
	return;
loc_82398118:
	// li r3,37
	ctx.r3.s64 = 37;
loc_8239811C:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8239D988) {
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
	ctx.lr = 0x8239D990;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8239da34
	if (ctx.cr6.lt) goto loc_8239DA34;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8239d9f0
	if (!ctx.cr6.eq) goto loc_8239D9F0;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8239d9e4
	if (ctx.cr6.eq) goto loc_8239D9E4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8239d9dc
	if (!ctx.cr6.gt) goto loc_8239D9DC;
loc_8239D9CC:
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// beq cr6,0x8239d9e4
	if (ctx.cr6.eq) goto loc_8239D9E4;
	// bdnz 0x8239d9cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239D9CC;
loc_8239D9DC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8239daa8
	if (!ctx.cr6.eq) goto loc_8239DAA8;
loc_8239D9E4:
	// li r3,78
	ctx.r3.s64 = 78;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_8239D9F0:
	// li r28,0
	r28.s64 = 0;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// beq cr6,0x8239da28
	if (ctx.cr6.eq) goto loc_8239DA28;
loc_8239D9FC:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x823315e8
	ctx.lr = 0x8239DA08;
	sub_823315E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239da1c
	if (!ctx.cr6.eq) goto loc_8239DA1C;
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(r28.s32, r29.s32, ctx.xer);
	// beq cr6,0x8239daa8
	if (ctx.cr6.eq) goto loc_8239DAA8;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_8239DA1C:
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x8239d9fc
	if (!ctx.cr6.eq) goto loc_8239D9FC;
loc_8239DA28:
	// li r3,78
	ctx.r3.s64 = 78;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_8239DA34:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x8239da68
	if (!ctx.cr6.eq) goto loc_8239DA68;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// beq cr6,0x8239da5c
	if (ctx.cr6.eq) goto loc_8239DA5C;
loc_8239DA44:
	// lbz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239daa8
	if (!ctx.cr6.eq) goto loc_8239DAA8;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x8239da44
	if (!ctx.cr6.eq) goto loc_8239DA44;
loc_8239DA5C:
	// li r3,78
	ctx.r3.s64 = 78;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_8239DA68:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// beq cr6,0x8239da9c
	if (ctx.cr6.eq) goto loc_8239DA9C;
loc_8239DA70:
	// lbz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239da90
	if (ctx.cr6.eq) goto loc_8239DA90;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x823315e8
	ctx.lr = 0x8239DA88;
	sub_823315E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239daa8
	if (ctx.cr6.eq) goto loc_8239DAA8;
loc_8239DA90:
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x8239da70
	if (!ctx.cr6.eq) goto loc_8239DA70;
loc_8239DA9C:
	// li r3,78
	ctx.r3.s64 = 78;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_8239DAA8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r10,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r10.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r9,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r9.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r8,12(r26)
	REX_STORE_U32(r26.u32 + 12, ctx.r8.u32);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r7,16(r26)
	REX_STORE_U32(r26.u32 + 16, ctx.r7.u32);
	// lbz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 36);
	// stw r6,20(r26)
	REX_STORE_U32(r26.u32 + 20, ctx.r6.u32);
	// lbz r5,36(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 36);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8239daec
	if (ctx.cr6.eq) goto loc_8239DAEC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,36(r31)
	REX_STORE_U8(r31.u32 + 36, ctx.r11.u8);
loc_8239DAEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_823A7ED0) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823a813c
	if (ctx.cr6.eq) goto loc_823A813C;
loc_823A7EE8:
	// lwz r11,24(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823a8130
	if (!ctx.cr6.eq) goto loc_823A8130;
	// lwz r4,52(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 52);
	// lwz r3,48(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 48);
	// bl 0x823a7da0
	ctx.lr = 0x823A7F04;
	sub_823A7DA0(ctx, base);
	// lwz r11,56(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a7fac
	if (ctx.cr6.eq) goto loc_823A7FAC;
loc_823A7F10:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x823a7f24
	if (!ctx.cr6.lt) goto loc_823A7F24;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823A7F24:
	// stfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x823a7f3c
	if (!ctx.cr6.gt) goto loc_823A7F3C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823A7F3C:
	// stfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x823a7f54
	if (!ctx.cr6.lt) goto loc_823A7F54;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823A7F54:
	// stfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f0,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x823a7f6c
	if (!ctx.cr6.gt) goto loc_823A7F6C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823A7F6C:
	// stfs f0,12(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lfs f0,16(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x823a7f84
	if (!ctx.cr6.lt) goto loc_823A7F84;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823A7F84:
	// stfs f0,16(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lfs f0,20(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x823a7f9c
	if (!ctx.cr6.gt) goto loc_823A7F9C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823A7F9C:
	// stfs f0,20(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a7f10
	if (!ctx.cr6.eq) goto loc_823A7F10;
loc_823A7FAC:
	// lwz r10,24(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// lwz r11,48(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 48);
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// stw r9,24(r5)
	REX_STORE_U32(ctx.r5.u32 + 24, ctx.r9.u32);
	// lwz r8,24(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r7,r8,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x823a8074
	if (ctx.cr6.eq) goto loc_823A8074;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a8074
	if (ctx.cr6.eq) goto loc_823A8074;
loc_823A7FD8:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x823a7fec
	if (!ctx.cr6.lt) goto loc_823A7FEC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823A7FEC:
	// stfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x823a8004
	if (!ctx.cr6.gt) goto loc_823A8004;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823A8004:
	// stfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x823a801c
	if (!ctx.cr6.lt) goto loc_823A801C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823A801C:
	// stfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f0,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x823a8034
	if (!ctx.cr6.gt) goto loc_823A8034;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823A8034:
	// stfs f0,12(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lfs f0,16(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x823a804c
	if (!ctx.cr6.lt) goto loc_823A804C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823A804C:
	// stfs f0,16(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lfs f0,20(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x823a8064
	if (!ctx.cr6.gt) goto loc_823A8064;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823A8064:
	// stfs f0,20(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a7fd8
	if (!ctx.cr6.eq) goto loc_823A7FD8;
loc_823A8074:
	// lwz r11,52(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 52);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823a8130
	if (ctx.cr6.eq) goto loc_823A8130;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a8130
	if (ctx.cr6.eq) goto loc_823A8130;
loc_823A8094:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x823a80a8
	if (!ctx.cr6.lt) goto loc_823A80A8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823A80A8:
	// stfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x823a80c0
	if (!ctx.cr6.gt) goto loc_823A80C0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823A80C0:
	// stfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x823a80d8
	if (!ctx.cr6.lt) goto loc_823A80D8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823A80D8:
	// stfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f0,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x823a80f0
	if (!ctx.cr6.gt) goto loc_823A80F0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823A80F0:
	// stfs f0,12(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lfs f0,16(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x823a8108
	if (!ctx.cr6.lt) goto loc_823A8108;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823A8108:
	// stfs f0,16(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lfs f0,20(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x823a8120
	if (!ctx.cr6.gt) goto loc_823A8120;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823A8120:
	// stfs f0,20(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a8094
	if (!ctx.cr6.eq) goto loc_823A8094;
loc_823A8130:
	// lwz r5,44(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x823a7ee8
	if (!ctx.cr6.eq) goto loc_823A7EE8;
loc_823A813C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823C7540) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c80
	ctx.lr = 0x823C7548;
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// lwz r6,264(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 264);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r5,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r5.u32);
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lwz r27,18512(r6)
	r27.u64 = REX_LOAD_U32(ctx.r6.u32 + 18512);
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// lwz r7,18520(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 18520);
	// lis r9,-32120
	ctx.r9.s64 = -2105016320;
	// lwz r18,18516(r6)
	r18.u64 = REX_LOAD_U32(ctx.r6.u32 + 18516);
	// lis r8,-32121
	ctx.r8.s64 = -2105081856;
	// lfs f31,3716(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 3716);
	f31.f64 = double(temp.f32);
	// lwz r16,18508(r6)
	r16.u64 = REX_LOAD_U32(ctx.r6.u32 + 18508);
	// li r31,0
	r31.s64 = 0;
	// addi r21,r11,-31064
	r21.s64 = ctx.r11.s64 + -31064;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// addi r20,r10,-31448
	r20.s64 = ctx.r10.s64 + -31448;
	// addi r19,r9,-31544
	r19.s64 = ctx.r9.s64 + -31544;
	// addi r29,r8,27080
	r29.s64 = ctx.r8.s64 + 27080;
	// ble cr6,0x823c7790
	if (!ctx.cr6.gt) goto loc_823C7790;
	// addi r17,r5,128
	r17.s64 = ctx.r5.s64 + 128;
	// mr r15,r18
	r15.u64 = r18.u64;
loc_823C75BC:
	// lhz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U16(r16.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// extsh r14,r11
	r14.s64 = ctx.r11.s16;
	// ble cr6,0x823c7770
	if (!ctx.cr6.gt) goto loc_823C7770;
	// mr r30,r17
	r30.u64 = r17.u64;
	// mr r22,r27
	r22.u64 = r27.u64;
loc_823C75D4:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823c7750
	if (ctx.cr6.eq) goto loc_823C7750;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + r16.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r26,r10
	r26.s64 = ctx.r10.s16;
	// extsh r27,r9
	r27.s64 = ctx.r9.s16;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bge cr6,0x823c76b0
	if (!ctx.cr6.lt) goto loc_823C76B0;
	// rlwinm r10,r23,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r27,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 6) & 0xFFFFFFC0;
	// lwzx r10,r10,r24
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r24.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f30,r8,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r29.u32);
	f30.f64 = double(temp.f32);
	// bl 0x823c1638
	ctx.lr = 0x823C762C;
	sub_823C1638(ctx, base);
	// add r7,r3,r26
	ctx.r7.u64 = ctx.r3.u64 + r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// std r6,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * f30.f64));
	// stfs f11,-128(r30)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + -128, temp.u32);
	// bl 0x823c1638
	ctx.lr = 0x823C7658;
	sub_823C1638(ctx, base);
	// add r5,r3,r26
	ctx.r5.u64 = ctx.r3.u64 + r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f10,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 * f30.f64));
	// stfs f7,0(r30)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// bl 0x823c1638
	ctx.lr = 0x823C7684;
	sub_823C1638(ctx, base);
	// add r10,r3,r26
	ctx.r10.u64 = ctx.r3.u64 + r26.u64;
	// lwz r27,84(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r24,r24,12
	r24.s64 = r24.s64 + 12;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f6,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f30
	ctx.f3.f64 = double(float(ctx.f4.f64 * f30.f64));
	// stfs f3,128(r30)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r30.u32 + 128, temp.u32);
	// b 0x823c775c
	goto loc_823C775C;
loc_823C76B0:
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r19,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r19.u32);
	// stw r20,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r20.u32);
	// stw r21,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r21.u32);
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// stw r31,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// lwzx r28,r11,r24
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + r24.u32);
	// stw r31,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r31.u32);
	// stw r31,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// stw r31,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r31.u32);
	// stw r31,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, r31.u32);
	// stw r31,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// bl 0x823c1638
	ctx.lr = 0x823C76E4;
	sub_823C1638(ctx, base);
	// rlwinm r9,r26,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r27,84(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r24,r24,12
	r24.s64 = r24.s64 + 12;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwzx r11,r9,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r7,6
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 6);
	// add r6,r10,r28
	ctx.r6.u64 = ctx.r10.u64 + r28.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r5,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-128(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + -128, temp.u32);
	// lbzu r4,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r10,r4,6
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 6);
	// add r3,r10,r28
	ctx.r3.u64 = ctx.r10.u64 + r28.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r10,r29
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r11,r9,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + r28.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r7,r29
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + r29.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,128(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + 128, temp.u32);
	// b 0x823c775c
	goto loc_823C775C;
loc_823C7750:
	// stfs f31,128(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 128, temp.u32);
	// stfs f31,0(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f31,-128(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + -128, temp.u32);
loc_823C775C:
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r22,r22,-1
	ctx.xer.ca = r22.u32 > 0;
	r22.s64 = r22.s64 + -1;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// addi r30,r30,512
	r30.s64 = r30.s64 + 512;
	// bne 0x823c75d4
	if (!ctx.cr0.eq) goto loc_823C75D4;
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_823C7770:
	// li r11,1
	ctx.r11.s64 = 1;
	// addic. r15,r15,-1
	ctx.xer.ca = r15.u32 > 0;
	r15.s64 = r15.s64 + -1;
	ctx.cr0.compare<int32_t>(r15.s32, 0, ctx.xer);
	// slw r10,r11,r14
	ctx.r10.u64 = r14.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r14.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r17,r17,4
	r17.s64 = r17.s64 + 4;
	// add r16,r11,r16
	r16.u64 = ctx.r11.u64 + r16.u64;
	// bne 0x823c75bc
	if (!ctx.cr0.eq) goto loc_823C75BC;
	// lwz r5,372(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
loc_823C7790:
	// cmpw cr6,r18,r7
	ctx.cr6.compare<int32_t>(r18.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x823c79fc
	if (!ctx.cr6.lt) goto loc_823C79FC;
	// addi r11,r18,160
	ctx.r11.s64 = r18.s64 + 160;
	// subf r18,r18,r7
	r18.u64 = ctx.r7.u64 - r18.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r5
	r30.u64 = ctx.r11.u64 + ctx.r5.u64;
	// b 0x823c77b0
	goto loc_823C77B0;
loc_823C77AC:
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823C77B0:
	// lwzu r11,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// lhz r10,0(r16)
	ctx.r10.u64 = REX_LOAD_U16(r16.u32 + 0);
	// addi r9,r4,4
	ctx.r9.s64 = ctx.r4.s64 + 4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// extsh r17,r10
	r17.s64 = ctx.r10.s16;
	// beq cr6,0x823c79c4
	if (ctx.cr6.eq) goto loc_823C79C4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + r16.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r23,3
	ctx.r11.s64 = r23.s64 + 3;
	// extsh r22,r10
	r22.s64 = ctx.r10.s16;
	// extsh r26,r9
	r26.s64 = ctx.r9.s16;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bge cr6,0x823c78d4
	if (!ctx.cr6.lt) goto loc_823C78D4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r26,6,0,25
	r28.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 6) & 0xFFFFFFC0;
	// lwzx r11,r10,r24
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r24.u32);
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + r28.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f30,r8,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r29.u32);
	f30.f64 = double(temp.f32);
	// bl 0x823c1638
	ctx.lr = 0x823C7814;
	sub_823C1638(ctx, base);
	// add r7,r3,r22
	ctx.r7.u64 = ctx.r3.u64 + r22.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// std r6,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,-640(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + -640, temp.u32);
	// fmuls f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * f30.f64));
	// stfs f11,-128(r30)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + -128, temp.u32);
	// bl 0x823c1638
	ctx.lr = 0x823C7844;
	sub_823C1638(ctx, base);
	// add r5,r3,r22
	ctx.r5.u64 = ctx.r3.u64 + r22.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f10,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// stfs f8,-512(r30)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r30.u32 + -512, temp.u32);
	// fmuls f7,f8,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 * f30.f64));
	// stfs f7,0(r30)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// bl 0x823c1638
	ctx.lr = 0x823C7874;
	sub_823C1638(ctx, base);
	// add r10,r3,r22
	ctx.r10.u64 = ctx.r3.u64 + r22.u64;
	// rlwinm r9,r23,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f6,-640(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + -640);
	ctx.f6.f64 = double(temp.f32);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lfs f5,-512(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + -512);
	ctx.f5.f64 = double(temp.f32);
	// std r8,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f4,96(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// stfs f2,-384(r30)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r30.u32 + -384, temp.u32);
	// fmuls f1,f2,f30
	ctx.f1.f64 = double(float(ctx.f2.f64 * f30.f64));
	// stfs f1,128(r30)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 128, temp.u32);
	// lwzx r11,r9,r24
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + r24.u32);
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + r28.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r24,24
	r24.s64 = r24.s64 + 24;
	// lfsx f0,r6,r29
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f6,f0
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f12,f5,f0
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f13,-640(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + -640, temp.u32);
	// fmuls f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f12,-512(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + -512, temp.u32);
	// stfs f11,-384(r30)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + -384, temp.u32);
	// b 0x823c79dc
	goto loc_823C79DC;
loc_823C78D4:
	// rlwinm r10,r23,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r19,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r19.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r20,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r20.u32);
	// stw r21,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r21.u32);
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// stw r31,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// lwzx r27,r10,r24
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + r24.u32);
	// lwzx r28,r9,r24
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + r24.u32);
	// stw r31,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r31.u32);
	// stw r31,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// stw r31,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r31.u32);
	// stw r31,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, r31.u32);
	// stw r31,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// bl 0x823c1638
	ctx.lr = 0x823C7910;
	sub_823C1638(ctx, base);
	// rlwinm r8,r22,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r24,r24,24
	r24.s64 = r24.s64 + 24;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwzx r11,r8,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r6,6
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 6);
	// add r5,r10,r27
	ctx.r5.u64 = ctx.r10.u64 + r27.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r4,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-640(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + -640, temp.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r3,6
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 6);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r9,r29
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + r29.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-128(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + -128, temp.u32);
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r10,r8,6
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 6);
	// add r7,r10,r27
	ctx.r7.u64 = ctx.r10.u64 + r27.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r6,r29
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + r29.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-512(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + -512, temp.u32);
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r5,6
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 6);
	// add r4,r10,r28
	ctx.r4.u64 = ctx.r10.u64 + r28.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r3,r29
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + r29.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r10,r10,6
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 6);
	// add r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 + r27.u64;
	// lwz r27,84(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f10,r8,r29
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r29.u32);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,-384(r30)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r30.u32 + -384, temp.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r7,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 6);
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + r28.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f9,r5,r29
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + r29.u32);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,128(r30)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r30.u32 + 128, temp.u32);
	// b 0x823c79dc
	goto loc_823C79DC;
loc_823C79C4:
	// stfs f31,128(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 128, temp.u32);
	// stfs f31,0(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f31,-128(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + -128, temp.u32);
	// stfs f31,-384(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + -384, temp.u32);
	// stfs f31,-512(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + -512, temp.u32);
	// stfs f31,-640(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + -640, temp.u32);
loc_823C79DC:
	// li r11,1
	ctx.r11.s64 = 1;
	// addic. r18,r18,-1
	ctx.xer.ca = r18.u32 > 0;
	r18.s64 = r18.s64 + -1;
	ctx.cr0.compare<int32_t>(r18.s32, 0, ctx.xer);
	// slw r10,r11,r17
	ctx.r10.u64 = r17.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r17.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// add r16,r11,r16
	r16.u64 = ctx.r11.u64 + r16.u64;
	// bne 0x823c77ac
	if (!ctx.cr0.eq) goto loc_823C77AC;
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_823C79FC:
	// cmpwi cr6,r7,32
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 32, ctx.xer);
	// bge cr6,0x823c7a44
	if (!ctx.cr6.lt) goto loc_823C7A44;
	// addi r11,r7,32
	ctx.r11.s64 = ctx.r7.s64 + 32;
	// lwz r10,372(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// subfic r9,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	ctx.r9.u64 = static_cast<uint64_t>(32) - ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_823C7A18:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x823c7a38
	if (!ctx.cr6.gt) goto loc_823C7A38;
	// addi r11,r10,-640
	ctx.r11.s64 = ctx.r10.s64 + -640;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_823C7A28:
	// stfs f31,768(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 768, temp.u32);
	// stfs f31,640(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 640, temp.u32);
	// stfsu f31,512(r11)
	ea = 512 + ctx.r11.u32;
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823c7a28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C7A28;
loc_823C7A38:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x823c7a18
	if (!ctx.cr0.eq) goto loc_823C7A18;
loc_823C7A44:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_823E6DD0) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca0
	ctx.lr = 0x823E6DD8;
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, f29.u64);
	// stfd f30,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r6,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r25,r6,r11
	r25.u64 = ctx.r6.u64 + ctx.r11.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x823e6f54
	if (!ctx.cr6.gt) goto loc_823E6F54;
	// addi r24,r5,268
	r24.s64 = ctx.r5.s64 + 268;
	// rlwinm r22,r8,3,0,28
	r22.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
loc_823E6E08:
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x823e6f48
	if (!ctx.cr6.gt) goto loc_823E6F48;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// rlwinm r10,r25,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r4,r11
	r28.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r8,r26,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + r31.u64;
	// add r27,r8,r31
	r27.u64 = ctx.r8.u64 + r31.u64;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// rlwinm r30,r4,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r29,r4,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r28,r28,3,0,28
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r27,-4
	ctx.r10.s64 = r27.s64 + -4;
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
loc_823E6E5C:
	// lfs f0,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f8,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f5,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f2,f4,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f1,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f1,f12
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// lfs f0,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// add r7,r30,r7
	ctx.r7.u64 = r30.u64 + ctx.r7.u64;
	// lfs f31,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	f31.f64 = double(temp.f32);
	// add r5,r28,r5
	ctx.r5.u64 = r28.u64 + ctx.r5.u64;
	// lfs f30,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	f30.f64 = double(temp.f32);
	// add r3,r29,r3
	ctx.r3.u64 = r29.u64 + ctx.r3.u64;
	// lfs f29,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	f29.f64 = double(temp.f32);
	// fmadds f9,f5,f0,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f5.f64, ctx.f0.f64, ctx.f9.f64)));
	// fmadds f7,f4,f12,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f4.f64, ctx.f12.f64, ctx.f7.f64)));
	// fmadds f6,f1,f31,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f1.f64, f31.f64, ctx.f6.f64)));
	// fmsubs f5,f11,f0,f3
	ctx.f5.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, -ctx.f3.f64)));
	// fmsubs f4,f10,f12,f2
	ctx.f4.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, -ctx.f2.f64)));
	// fmsubs f3,f8,f31,f13
	ctx.f3.f64 = double(float(std::fma(ctx.f8.f64, f31.f64, -ctx.f13.f64)));
	// fadds f2,f7,f9
	ctx.f2.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// fadds f1,f30,f6
	ctx.f1.f64 = double(float(f30.f64 + ctx.f6.f64));
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fsubs f10,f9,f7
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// fadds f13,f4,f5
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// fadds f12,f29,f3
	ctx.f12.f64 = double(float(f29.f64 + ctx.f3.f64));
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fsubs f0,f30,f6
	ctx.f0.f64 = double(float(f30.f64 - ctx.f6.f64));
	// fsubs f11,f5,f4
	ctx.f11.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fsubs f9,f29,f3
	ctx.f9.f64 = double(float(f29.f64 - ctx.f3.f64));
	// fsubs f8,f1,f2
	ctx.f8.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// stfs f8,4(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f7,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// stfsu f6,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lfs f5,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f0,f11
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f3,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f2
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// stfs f2,4(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f1,f5,f13
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// stfsu f1,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fadds f13,f10,f9
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f4,4(r9)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fadds f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfsu f13,8(r9)
	ea = 8 + ctx.r9.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fsubs f11,f9,f10
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// stfs f12,4(r8)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfsu f11,8(r8)
	ea = 8 + ctx.r8.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x823e6e5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E6E5C;
loc_823E6F48:
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// add r31,r22,r31
	r31.u64 = r22.u64 + r31.u64;
	// bne 0x823e6e08
	if (!ctx.cr0.eq) goto loc_823E6E08;
loc_823E6F54:
	// lfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f30,-104(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_823EDE68) {
	REX_FUNC_PROLOGUE();
	// b 0x823ed360
	sub_823ED360(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823EE090) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r7,34
	ctx.r7.s64 = 34;
	// li r6,56
	ctx.r6.s64 = 56;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r11,-30824(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -30824);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EE0C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823ee0dc
	if (!ctx.cr0.lt) goto loc_823EE0DC;
	// bl 0x823f0020
	ctx.lr = 0x823EE0D4;
	sub_823F0020(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823ee0e8
	goto loc_823EE0E8;
loc_823EE0DC:
	// ld r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
loc_823EE0E8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EF270) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823EF278;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,256
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 256, ctx.xer);
	// bge cr6,0x823ef29c
	if (!ctx.cr6.lt) goto loc_823EF29C;
	// bl 0x826a1e70
	ctx.lr = 0x823EF294;
	sub_826A1E70(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823EF29C:
	// lis r11,-24576
	ctx.r11.s64 = -1610612736;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823ef2e0
	if (ctx.cr6.lt) goto loc_823EF2E0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823ef2e0
	if (!ctx.cr6.lt) goto loc_823EF2E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82793a44
	ctx.lr = 0x823EF2BC;
	__imp__MmQueryAddressProtect(ctx, base);
	// rlwinm r11,r3,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 22) & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823ef2e0
	if (ctx.cr6.eq) goto loc_823EF2E0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ef110
	ctx.lr = 0x823EF2D8;
	sub_823EF110(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823EF2E0:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ef1c0
	ctx.lr = 0x823EF2F0;
	sub_823EF1C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823F1B28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823F1B30;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r28,r3,56
	r28.s64 = ctx.r3.s64 + 56;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f1bcc
	if (ctx.cr6.eq) goto loc_823F1BCC;
	// li r8,0
	ctx.r8.s64 = 0;
loc_823F1B54:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bgt cr6,0x823f1c14
	if (ctx.cr6.gt) goto loc_823F1C14;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r29.u32, ctx.xer);
	// bne cr6,0x823f1bbc
	if (!ctx.cr6.eq) goto loc_823F1BBC;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// add r30,r9,r30
	r30.u64 = ctx.r9.u64 + r30.u64;
	// stw r7,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r7.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r10,76(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r11,76(r10)
	REX_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// ble cr6,0x823f1bc0
	if (!ctx.cr6.gt) goto loc_823F1BC0;
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// b 0x823f1bc0
	goto loc_823F1BC0;
loc_823F1BBC:
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_823F1BC0:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823f1b54
	if (!ctx.cr6.eq) goto loc_823F1B54;
loc_823F1BCC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f1950
	ctx.lr = 0x823F1BD4;
	sub_823F1950(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f1c0c
	if (ctx.cr0.eq) goto loc_823F1C0C;
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r3,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// blt cr6,0x823f1c0c
	if (ctx.cr6.lt) goto loc_823F1C0C;
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
loc_823F1C0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_823F1C14:
	// add r9,r29,r30
	ctx.r9.u64 = r29.u64 + r30.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823f1bcc
	if (!ctx.cr6.eq) goto loc_823F1BCC;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823f1c0c
	if (!ctx.cr6.gt) goto loc_823F1C0C;
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// b 0x823f1c0c
	goto loc_823F1C0C;
}

DEFINE_REX_FUNC(sub_823FBC10) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// subf r11,r6,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r6.u64;
loc_823FBC24:
	// addi r9,r1,-12
	ctx.r9.s64 = ctx.r1.s64 + -12;
	// lfsux f0,r11,r6
	ctx.fpscr.disableFlushMode();
	ea = ctx.r11.u32 + ctx.r6.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// addi r8,r1,-12
	ctx.r8.s64 = ctx.r1.s64 + -12;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lvsl v0,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v0,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vpkd3d128 v0,v63,5,2,2
	ctx.fpscr.enableFlushModeUnconditional();
	temp.u32 = (ctx.v63.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v0.u16[7] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v0.u16[7] |= ((ctx.v63.u32[3]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v0.u16[6] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v0.u16[6] |= ((ctx.v63.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v0.u16[5] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v0.u16[5] |= ((ctx.v63.u32[1]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v0.u16[4] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v0.u16[4] |= ((ctx.v63.u32[0]&0x80000000)>>16);
	// vsplth v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xF0E))));
	// stvehx v0,r0,r7
	ea = (ctx.r7.u32) & ~0x1;
	REX_STORE_U16(ea, ctx.v0.u16[7 - ((ea & 0xF) >> 1)]);
	// lhz r9,-16(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + -16);
	// sthux r9,r10,r4
	ea = ctx.r10.u32 + ctx.r4.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x823fbc24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FBC24;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824006D8) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,17548
	ctx.r11.s64 = ctx.r11.s64 + 17548;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x823f0350
	ctx.lr = 0x8240070C;
	sub_823F0350(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82400720
	if (ctx.cr0.eq) goto loc_82400720;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x82400720;
	sub_823F0350(ctx, base);
loc_82400720:
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

DEFINE_REX_FUNC(sub_824041C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824041D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,14
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 14, ctx.xer);
	// blt cr6,0x8240422c
	if (ctx.cr6.lt) goto loc_8240422C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,14
	ctx.r5.s64 = 14;
	// bl 0x826a1e70
	ctx.lr = 0x824041F4;
	sub_826A1E70(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82400a50
	ctx.lr = 0x82404200;
	sub_82400A50(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,19778
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19778, ctx.xer);
	// bne cr6,0x8240422c
	if (!ctx.cr6.eq) goto loc_8240422C;
	// lwz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 82);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bgt cr6,0x8240422c
	if (ctx.cr6.gt) goto loc_8240422C;
	// addi r5,r31,-14
	ctx.r5.s64 = r31.s64 + -14;
	// addi r4,r30,14
	ctx.r4.s64 = r30.s64 + 14;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82401b38
	ctx.lr = 0x82404228;
	sub_82401B38(ctx, base);
	// b 0x82404234
	goto loc_82404234;
loc_8240422C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82404234:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82406CB8) {
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
	ctx.lr = 0x82406CC0;
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -176, f29.u64);
	// stfd f30,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r14,0
	r14.s64 = 0;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// not r8,r11
	ctx.r8.u64 = ~ctx.r11.u64;
	// not r7,r11
	ctx.r7.u64 = ~ctx.r11.u64;
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r14.u32);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// stw r14,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r14.u32);
	// rlwinm r5,r8,16,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x1;
	// lwz r4,104(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// mr r28,r14
	r28.u64 = r14.u64;
	// lwz r3,104(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// mr r20,r14
	r20.u64 = r14.u64;
	// mr r18,r14
	r18.u64 = r14.u64;
	// mr r22,r14
	r22.u64 = r14.u64;
	// rlwinm r31,r7,15,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0x1;
	// rlwinm r30,r11,14,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// bl 0x82406930
	ctx.lr = 0x82406D20;
	sub_82406930(ctx, base);
	// mr. r17,r3
	r17.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r17.s32, 0, ctx.xer);
	// beq 0x82407424
	if (ctx.cr0.eq) goto loc_82407424;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r4,108(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r3,108(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// bl 0x82406930
	ctx.lr = 0x82406D40;
	sub_82406930(ctx, base);
	// mr. r20,r3
	r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq 0x82407424
	if (ctx.cr0.eq) goto loc_82407424;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r4,112(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r3,112(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// bl 0x82406930
	ctx.lr = 0x82406D60;
	sub_82406930(ctx, base);
	// mr. r18,r3
	r18.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r18.s32, 0, ctx.xer);
	// beq 0x82407424
	if (ctx.cr0.eq) goto loc_82407424;
	// lwz r8,4(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lis r9,5461
	ctx.r9.s64 = 357892096;
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// li r3,-1
	ctx.r3.s64 = -1;
	// ori r7,r9,21845
	ctx.r7.u64 = ctx.r9.u64 | 21845;
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 0);
	// lwz r9,0(r18)
	ctx.r9.u64 = REX_LOAD_U32(r18.u32 + 0);
	// add r16,r11,r17
	r16.u64 = ctx.r11.u64 + r17.u64;
	// add r15,r10,r20
	r15.u64 = ctx.r10.u64 + r20.u64;
	// lwz r31,112(r8)
	r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 112);
	// add r19,r9,r18
	r19.u64 = ctx.r9.u64 + r18.u64;
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r7.u32, ctx.xer);
	// mulli r11,r31,12
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(12));
	// ble cr6,0x82406da4
	if (!ctx.cr6.gt) goto loc_82406DA4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82406DA4:
	// li r10,-5
	ctx.r10.s64 = -5;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82406db4
	if (ctx.cr6.gt) goto loc_82406DB4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_82406DB4:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x823f02b8
	ctx.lr = 0x82406DBC;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82406df8
	if (ctx.cr0.eq) goto loc_82406DF8;
	// addic. r11,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	ctx.r11.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// blt 0x82406df0
	if (ctx.cr0.lt) goto loc_82406DF0;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82406DE0:
	// stw r14,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r14.u32);
	// stw r14,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r14.u32);
	// stwu r14,12(r11)
	ea = 12 + ctx.r11.u32;
	REX_STORE_U32(ea, r14.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82406de0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82406DE0;
loc_82406DF0:
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// b 0x82406dfc
	goto loc_82406DFC;
loc_82406DF8:
	// mr r22,r14
	r22.u64 = r14.u64;
loc_82406DFC:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82407418
	if (ctx.cr6.eq) goto loc_82407418;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x823f02b8
	ctx.lr = 0x82406E18;
	sub_823F02B8(ctx, base);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82407418
	if (ctx.cr0.eq) goto loc_82407418;
	// addi r7,r18,4
	ctx.r7.s64 = r18.s64 + 4;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r19
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r19.u32, ctx.xer);
	// bge cr6,0x82406e8c
	if (!ctx.cr6.lt) goto loc_82406E8C;
loc_82406E34:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82406e80
	if (!ctx.cr6.lt) goto loc_82406E80;
	// subf r9,r11,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r11.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82406E60:
	// lwzu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + r22.u64;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// bdnz 0x82406e60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82406E60;
loc_82406E80:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmplw cr6,r8,r19
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r19.u32, ctx.xer);
	// blt cr6,0x82406e34
	if (ctx.cr6.lt) goto loc_82406E34;
loc_82406E8C:
	// mr r21,r14
	r21.u64 = r14.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r19
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r19.u32, ctx.xer);
	// bge cr6,0x82407410
	if (!ctx.cr6.lt) goto loc_82407410;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f29,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	f29.f64 = double(temp.f32);
	// lfs f31,3704(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	f31.f64 = double(temp.f32);
	// lfs f30,3788(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3788);
	f30.f64 = double(temp.f32);
loc_82406EB4:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r24,r11,4
	r24.s64 = ctx.r11.s64 + 4;
	// add r23,r10,r11
	r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(r24.u32, r23.u32, ctx.xer);
	// bge cr6,0x82406f58
	if (!ctx.cr6.lt) goto loc_82406F58;
loc_82406ECC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mulli r31,r11,12
	r31.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r11,r31,r22
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + r22.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82406f4c
	if (!ctx.cr6.eq) goto loc_82406F4C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82406f04
	if (ctx.cr6.eq) goto loc_82406F04;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stwx r11,r31,r22
	REX_STORE_U32(r31.u32 + r22.u32, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r14,0(r28)
	REX_STORE_U32(r28.u32 + 0, r14.u32);
	// rotlwi r28,r11,0
	r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82406f2c
	goto loc_82406F2C;
loc_82406F04:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x823f02b8
	ctx.lr = 0x82406F20;
	sub_823F02B8(ctx, base);
	// stwx r3,r31,r22
	REX_STORE_U32(r31.u32 + r22.u32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82407418
	if (ctx.cr0.eq) goto loc_82407418;
loc_82406F2C:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r31,r22
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + r22.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x826a2e60
	ctx.lr = 0x82406F4C;
	sub_826A2E60(ctx, base);
loc_82406F4C:
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(r30.u32, r23.u32, ctx.xer);
	// blt cr6,0x82406ecc
	if (ctx.cr6.lt) goto loc_82406ECC;
loc_82406F58:
	// addi r30,r20,4
	r30.s64 = r20.s64 + 4;
	// mr r27,r14
	r27.u64 = r14.u64;
	// cmplw cr6,r30,r15
	ctx.cr6.compare<uint32_t>(r30.u32, r15.u32, ctx.xer);
	// bge cr6,0x824070e0
	if (!ctx.cr6.lt) goto loc_824070E0;
	// addi r26,r17,4
	r26.s64 = r17.s64 + 4;
loc_82406F6C:
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r29,r11,r30
	r29.u64 = ctx.r11.u64 + r30.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82406F98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r26
	r31.u64 = r26.u64;
	// cmplw cr6,r26,r16
	ctx.cr6.compare<uint32_t>(r26.u32, r16.u32, ctx.xer);
	// bge cr6,0x824070cc
	if (!ctx.cr6.lt) goto loc_824070CC;
	// addi r8,r28,8
	ctx.r8.s64 = r28.s64 + 8;
loc_82406FA8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(r24.u32, r23.u32, ctx.xer);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// bge cr6,0x824070bc
	if (!ctx.cr6.lt) goto loc_824070BC;
	// addi r28,r30,4
	r28.s64 = r30.s64 + 4;
loc_82406FC0:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(r28.u32, r29.u32, ctx.xer);
	// bge cr6,0x824070b0
	if (!ctx.cr6.lt) goto loc_824070B0;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
loc_82406FD0:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lwzx r10,r10,r22
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r22.u32);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bge cr6,0x824070a4
	if (!ctx.cr6.lt) goto loc_824070A4;
	// subf r9,r4,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r4.u64;
	// addi r11,r4,-8
	ctx.r11.s64 = ctx.r4.s64 + -8;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82407014:
	// lfs f13,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f0,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f12,-8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmadds f13,f0,f12,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f11.f64)));
	// stfsx f13,r9,r10
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// lfs f13,-4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// lfs f12,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f0,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f13,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r9,8
	ctx.r7.s64 = ctx.r9.s64 + 8;
	// lfs f12,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f0,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwzu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lfs f13,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r9,12
	ctx.r7.s64 = ctx.r9.s64 + 12;
	// lfs f12,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// bdnz 0x82407014
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82407014;
loc_824070A4:
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r29.u32, ctx.xer);
	// blt cr6,0x82406fd0
	if (ctx.cr6.lt) goto loc_82406FD0;
loc_824070B0:
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// cmplw cr6,r5,r23
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r23.u32, ctx.xer);
	// blt cr6,0x82406fc0
	if (ctx.cr6.lt) goto loc_82406FC0;
loc_824070BC:
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r16
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r16.u32, ctx.xer);
	// blt cr6,0x82406fa8
	if (ctx.cr6.lt) goto loc_82406FA8;
loc_824070CC:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplw cr6,r29,r15
	ctx.cr6.compare<uint32_t>(r29.u32, r15.u32, ctx.xer);
	// blt cr6,0x82406f6c
	if (ctx.cr6.lt) goto loc_82406F6C;
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_824070E0:
	// mr r29,r24
	r29.u64 = r24.u64;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(r24.u32, r23.u32, ctx.xer);
	// bge cr6,0x82407400
	if (!ctx.cr6.lt) goto loc_82407400;
loc_824070EC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r30,r11,r22
	r30.u64 = ctx.r11.u64 + r22.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// bne 0x824073f4
	if (!ctx.cr0.eq) goto loc_824073F4;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// mr r31,r14
	r31.u64 = r14.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x824073e8
	if (!ctx.cr6.gt) goto loc_824073E8;
loc_8240711C:
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mullw r8,r31,r11
	ctx.r8.s64 = int64_t(r31.s32) * int64_t(ctx.r11.s32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// beq cr6,0x824072e0
	if (ctx.cr6.eq) goto loc_824072E0;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x82407218
	if (ctx.cr6.eq) goto loc_82407218;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x824073a4
	if (!ctx.cr6.eq) goto loc_824073A4;
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824073a4
	if (ctx.cr6.eq) goto loc_824073A4;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
loc_82407160:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, f30.f64);
	// bge cr6,0x82407174
	if (!ctx.cr6.lt) goto loc_82407174;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
	// b 0x82407180
	goto loc_82407180;
loc_82407174:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// blt cr6,0x82407180
	if (ctx.cr6.lt) goto loc_82407180;
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
loc_82407180:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x82407198
	if (!ctx.cr6.lt) goto loc_82407198;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
	// b 0x824071ac
	goto loc_824071AC;
loc_82407198:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x824071a8
	if (!ctx.cr6.lt) goto loc_824071A8;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x824071ac
	goto loc_824071AC;
loc_824071A8:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_824071AC:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x824071c4
	if (!ctx.cr6.lt) goto loc_824071C4;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
	// b 0x824071d8
	goto loc_824071D8;
loc_824071C4:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x824071d4
	if (!ctx.cr6.lt) goto loc_824071D4;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x824071d8
	goto loc_824071D8;
loc_824071D4:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_824071D8:
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x824071f0
	if (!ctx.cr6.lt) goto loc_824071F0;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// b 0x824071fc
	goto loc_824071FC;
loc_824071F0:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x824071fc
	if (ctx.cr6.lt) goto loc_824071FC;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_824071FC:
	// stfsu f0,16(r11)
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lwz r9,4(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,104(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82407160
	if (ctx.cr6.lt) goto loc_82407160;
	// b 0x824073a4
	goto loc_824073A4;
loc_82407218:
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824073a4
	if (ctx.cr6.eq) goto loc_824073A4;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
loc_82407228:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, f30.f64);
	// bge cr6,0x8240723c
	if (!ctx.cr6.lt) goto loc_8240723C;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
	// b 0x82407248
	goto loc_82407248;
loc_8240723C:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// blt cr6,0x82407248
	if (ctx.cr6.lt) goto loc_82407248;
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
loc_82407248:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x82407260
	if (!ctx.cr6.lt) goto loc_82407260;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
	// b 0x82407274
	goto loc_82407274;
loc_82407260:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82407270
	if (!ctx.cr6.lt) goto loc_82407270;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x82407274
	goto loc_82407274;
loc_82407270:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_82407274:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x8240728c
	if (!ctx.cr6.lt) goto loc_8240728C;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
	// b 0x824072a0
	goto loc_824072A0;
loc_8240728C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8240729c
	if (!ctx.cr6.lt) goto loc_8240729C;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x824072a0
	goto loc_824072A0;
loc_8240729C:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_824072A0:
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x824072b8
	if (!ctx.cr6.lt) goto loc_824072B8;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
	// b 0x824072c4
	goto loc_824072C4;
loc_824072B8:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x824072c4
	if (ctx.cr6.lt) goto loc_824072C4;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_824072C4:
	// stfsu f0,16(r11)
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,4(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r9,104(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82407228
	if (ctx.cr6.lt) goto loc_82407228;
	// b 0x824073a4
	goto loc_824073A4;
loc_824072E0:
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824073a4
	if (ctx.cr6.eq) goto loc_824073A4;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
loc_824072F0:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, f29.f64);
	// bge cr6,0x82407304
	if (!ctx.cr6.lt) goto loc_82407304;
	// fmr f13,f29
	ctx.f13.f64 = f29.f64;
	// b 0x82407310
	goto loc_82407310;
loc_82407304:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// blt cr6,0x82407310
	if (ctx.cr6.lt) goto loc_82407310;
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
loc_82407310:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x82407328
	if (!ctx.cr6.lt) goto loc_82407328;
	// fmr f13,f29
	ctx.f13.f64 = f29.f64;
	// b 0x8240733c
	goto loc_8240733C;
loc_82407328:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82407338
	if (!ctx.cr6.lt) goto loc_82407338;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x8240733c
	goto loc_8240733C;
loc_82407338:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_8240733C:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x82407354
	if (!ctx.cr6.lt) goto loc_82407354;
	// fmr f13,f29
	ctx.f13.f64 = f29.f64;
	// b 0x82407368
	goto loc_82407368;
loc_82407354:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82407364
	if (!ctx.cr6.lt) goto loc_82407364;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x82407368
	goto loc_82407368;
loc_82407364:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_82407368:
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x82407380
	if (!ctx.cr6.lt) goto loc_82407380;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
	// b 0x8240738c
	goto loc_8240738C;
loc_82407380:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x8240738c
	if (ctx.cr6.lt) goto loc_8240738C;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_8240738C:
	// stfsu f0,16(r11)
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lwz r9,4(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,104(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824072f0
	if (ctx.cr6.lt) goto loc_824072F0;
loc_824073A4:
	// lwz r3,4(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,104(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r9,r9,r31
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r31.s32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824073D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8240711c
	if (ctx.cr6.lt) goto loc_8240711C;
loc_824073E8:
	// stw r28,4(r30)
	REX_STORE_U32(r30.u32 + 4, r28.u32);
	// rotlwi r28,r30,0
	r28.u64 = __builtin_rotateleft32(r30.u32, 0);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_824073F4:
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplw cr6,r29,r23
	ctx.cr6.compare<uint32_t>(r29.u32, r23.u32, ctx.xer);
	// blt cr6,0x824070ec
	if (ctx.cr6.lt) goto loc_824070EC;
loc_82407400:
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// cmplw cr6,r23,r19
	ctx.cr6.compare<uint32_t>(r23.u32, r19.u32, ctx.xer);
	// blt cr6,0x82406eb4
	if (ctx.cr6.lt) goto loc_82406EB4;
loc_82407410:
	// mr r31,r14
	r31.u64 = r14.u64;
	// b 0x8240742c
	goto loc_8240742C;
loc_82407418:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8240742c
	goto loc_8240742C;
loc_82407424:
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
loc_8240742C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82407440
	if (ctx.cr6.eq) goto loc_82407440;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82406c28
	ctx.lr = 0x82407440;
	sub_82406C28(ctx, base);
loc_82407440:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x823f0350
	ctx.lr = 0x8240744C;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x823f0350
	ctx.lr = 0x82407458;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x823f0350
	ctx.lr = 0x82407464;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x823f0350
	ctx.lr = 0x82407470;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823f0350
	ctx.lr = 0x8240747C;
	sub_823F0350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
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

DEFINE_REX_FUNC(sub_82445760) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r4,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// li r9,21
	ctx.r9.s64 = 21;
	// addi r10,r10,-8020
	ctx.r10.s64 = ctx.r10.s64 + -8020;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82446180) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r10,r10,-7960
	ctx.r10.s64 = ctx.r10.s64 + -7960;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r8,10
	ctx.r8.s64 = 10;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r8,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82447528) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8244766c
	if (ctx.cr6.eq) goto loc_8244766C;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8244766c
	if (!ctx.cr6.eq) goto loc_8244766C;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8244766c
	if (!ctx.cr6.eq) goto loc_8244766C;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,24(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8244766c
	if (!ctx.cr6.eq) goto loc_8244766C;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,28(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8244766c
	if (!ctx.cr6.eq) goto loc_8244766C;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,40(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8244766c
	if (!ctx.cr6.eq) goto loc_8244766C;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,44(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8244766c
	if (!ctx.cr6.eq) goto loc_8244766C;
	// addi r4,r4,48
	ctx.r4.s64 = ctx.r4.s64 + 48;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x82444c38
	ctx.lr = 0x824475B8;
	sub_82444C38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8244766c
	if (ctx.cr0.eq) goto loc_8244766C;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824475e4
	if (ctx.cr6.eq) goto loc_824475E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824475E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824475f0
	goto loc_824475F0;
loc_824475E4:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_824475F0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8244766c
	if (ctx.cr6.eq) goto loc_8244766C;
	// lwz r3,32(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 32);
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244761c
	if (ctx.cr6.eq) goto loc_8244761C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82447618;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82447628
	goto loc_82447628;
loc_8244761C:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82447628:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8244766c
	if (ctx.cr6.eq) goto loc_8244766C;
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82447654
	if (ctx.cr6.eq) goto loc_82447654;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82447650;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82447660
	goto loc_82447660;
loc_82447654:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82447660:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x82447670
	if (!ctx.cr6.eq) goto loc_82447670;
loc_8244766C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82447670:
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

DEFINE_REX_FUNC(sub_82453A28) {
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
	ctx.lr = 0x82453A30;
	// stwu r1,-3232(r1)
	ea = -3232 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// bl 0x82415778
	ctx.lr = 0x82453A5C;
	sub_82415778(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82453a68
	if (!ctx.cr6.eq) goto loc_82453A68;
	// addi r29,r30,24
	r29.s64 = r30.s64 + 24;
loc_82453A68:
	// li r30,0
	r30.s64 = 0;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r28,100(r31)
	REX_STORE_U32(r31.u32 + 100, r28.u32);
	// li r26,1
	r26.s64 = 1;
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r30,328(r31)
	REX_STORE_U32(r31.u32 + 328, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,8(r31)
	REX_STORE_U8(r31.u32 + 8, r30.u8);
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// stw r30,296(r31)
	REX_STORE_U32(r31.u32 + 296, r30.u32);
	// stw r26,300(r31)
	REX_STORE_U32(r31.u32 + 300, r26.u32);
	// bl 0x8244b528
	ctx.lr = 0x82453AA8;
	sub_8244B528(ctx, base);
	// clrlwi. r11,r27,31
	ctx.r11.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,308(r31)
	REX_STORE_U32(r31.u32 + 308, r30.u32);
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
	// beq 0x82453ac4
	if (ctx.cr0.eq) goto loc_82453AC4;
	// stw r26,64(r31)
	REX_STORE_U32(r31.u32 + 64, r26.u32);
	// stw r26,68(r31)
	REX_STORE_U32(r31.u32 + 68, r26.u32);
	// b 0x82453acc
	goto loc_82453ACC;
loc_82453AC4:
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
	// stw r30,68(r31)
	REX_STORE_U32(r31.u32 + 68, r30.u32);
loc_82453ACC:
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82453adc
	if (ctx.cr0.eq) goto loc_82453ADC;
	// stw r26,72(r31)
	REX_STORE_U32(r31.u32 + 72, r26.u32);
	// b 0x82453ae0
	goto loc_82453AE0;
loc_82453ADC:
	// stw r30,72(r31)
	REX_STORE_U32(r31.u32 + 72, r30.u32);
loc_82453AE0:
	// lwz r11,312(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 312);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82453b08
	if (!ctx.cr6.eq) goto loc_82453B08;
	// bl 0x822ce510
	ctx.lr = 0x82453AF0;
	sub_822CE510(ctx, base);
	// stw r3,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82453b08
	if (!ctx.cr0.eq) goto loc_82453B08;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82453c1c
	goto loc_82453C1C;
loc_82453B08:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// beq cr6,0x82453b28
	if (ctx.cr6.eq) goto loc_82453B28;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
loc_82453B28:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82453b40
	if (ctx.cr6.eq) goto loc_82453B40;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// bne 0x82453b44
	if (!ctx.cr0.eq) goto loc_82453B44;
loc_82453B40:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82453B44:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r11.u32);
	// stw r30,320(r31)
	REX_STORE_U32(r31.u32 + 320, r30.u32);
	// beq cr6,0x82453ba4
	if (ctx.cr6.eq) goto loc_82453BA4;
	// lwz r11,316(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 316);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82453ba4
	if (!ctx.cr6.eq) goto loc_82453BA4;
	// lwz r3,20(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,316(r31)
	REX_STORE_U32(r31.u32 + 316, ctx.r3.u32);
	// bne cr6,0x82453b78
	if (!ctx.cr6.eq) goto loc_82453B78;
	// stw r30,324(r31)
	REX_STORE_U32(r31.u32 + 324, r30.u32);
	// b 0x82453ba4
	goto loc_82453BA4;
loc_82453B78:
	// bl 0x825ed5b8
	ctx.lr = 0x82453B7C;
	sub_825ED5B8(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// stw r26,320(r31)
	REX_STORE_U32(r31.u32 + 320, r26.u32);
	// lis r5,-1
	ctx.r5.s64 = -65536;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82453b94
	if (ctx.cr6.eq) goto loc_82453B94;
	// lis r5,-2
	ctx.r5.s64 = -131072;
loc_82453B94:
	// ori r5,r5,1021
	ctx.r5.u64 = ctx.r5.u64 | 1021;
	// lwz r3,316(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 316);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824dd558
	ctx.lr = 0x82453BA4;
	sub_824DD558(ctx, base);
loc_82453BA4:
	// li r5,3036
	ctx.r5.s64 = 3036;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826a2e60
	ctx.lr = 0x82453BB4;
	sub_826A2E60(ctx, base);
	// stw r31,3160(r1)
	REX_STORE_U32(ctx.r1.u32 + 3160, r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82453250
	ctx.lr = 0x82453BC0;
	sub_82453250(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8265edb0
	ctx.lr = 0x82453BC8;
	sub_8265EDB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82453bf8
	if (!ctx.cr0.eq) goto loc_82453BF8;
	// lwz r11,304(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 304);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82453bf8
	if (!ctx.cr6.eq) goto loc_82453BF8;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82453bf8
	if (!ctx.cr6.eq) goto loc_82453BF8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,12632
	ctx.r4.s64 = ctx.r11.s64 + 12632;
	// bl 0x8244beb0
	ctx.lr = 0x82453BF8;
	sub_8244BEB0(ctx, base);
loc_82453BF8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824519a0
	ctx.lr = 0x82453C00;
	sub_824519A0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8265edb0
	ctx.lr = 0x82453C08;
	sub_8265EDB0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// lis r10,-30602
	ctx.r10.s64 = -2005532672;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r10,r10,2905
	ctx.r10.u64 = ctx.r10.u64 | 2905;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_82453C1C:
	// addi r1,r1,3232
	ctx.r1.s64 = ctx.r1.s64 + 3232;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82461818) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82461820;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824618ac
	if (!ctx.cr6.gt) goto loc_824618AC;
	// li r30,0
	r30.s64 = 0;
loc_8246183C:
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r3,r30,r9
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r9.u32);
	// lwz r10,56(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82461898
	if (ctx.cr6.eq) goto loc_82461898;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82461878
	goto loc_82461878;
loc_8246185C:
	// lwz r9,60(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r11,60(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lwz r11,56(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
loc_82461878:
	// lwzx r4,r8,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r9,56(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x8246185c
	if (!ctx.cr6.eq) goto loc_8246185C;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82461898
	if (ctx.cr6.eq) goto loc_82461898;
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// bl 0x824781d0
	ctx.lr = 0x82461898;
	sub_824781D0(ctx, base);
loc_82461898:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8246183c
	if (ctx.cr6.lt) goto loc_8246183C;
loc_824618AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82468028) {
	REX_FUNC_PROLOGUE();
	// lis r9,1280
	ctx.r9.s64 = 83886080;
	// rlwinm r11,r3,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xF000000;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x824680a8
	if (ctx.cr6.gt) goto loc_824680A8;
	// beq cr6,0x824680a0
	if (ctx.cr6.eq) goto loc_824680A0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82468098
	if (ctx.cr6.eq) goto loc_82468098;
	// lis r8,256
	ctx.r8.s64 = 16777216;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82468090
	if (ctx.cr6.eq) goto loc_82468090;
	// lis r8,512
	ctx.r8.s64 = 33554432;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82468088
	if (ctx.cr6.eq) goto loc_82468088;
	// lis r8,768
	ctx.r8.s64 = 50331648;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82468080
	if (ctx.cr6.eq) goto loc_82468080;
	// lis r8,1024
	ctx.r8.s64 = 67108864;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824680f4
	if (!ctx.cr6.eq) goto loc_824680F4;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x824680f4
	goto loc_824680F4;
loc_82468080:
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// b 0x824680f4
	goto loc_824680F4;
loc_82468088:
	// lis r10,768
	ctx.r10.s64 = 50331648;
	// b 0x824680f4
	goto loc_824680F4;
loc_82468090:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x824680f4
	goto loc_824680F4;
loc_82468098:
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// b 0x824680f4
	goto loc_824680F4;
loc_824680A0:
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// b 0x824680f4
	goto loc_824680F4;
loc_824680A8:
	// lis r9,1792
	ctx.r9.s64 = 117440512;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824680f0
	if (ctx.cr6.eq) goto loc_824680F0;
	// lis r9,2048
	ctx.r9.s64 = 134217728;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824680e8
	if (ctx.cr6.eq) goto loc_824680E8;
	// lis r9,2816
	ctx.r9.s64 = 184549376;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824680e0
	if (ctx.cr6.eq) goto loc_824680E0;
	// lis r9,3072
	ctx.r9.s64 = 201326592;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824680f4
	if (!ctx.cr6.eq) goto loc_824680F4;
	// lis r10,2816
	ctx.r10.s64 = 184549376;
	// b 0x824680f4
	goto loc_824680F4;
loc_824680E0:
	// lis r10,3072
	ctx.r10.s64 = 201326592;
	// b 0x824680f4
	goto loc_824680F4;
loc_824680E8:
	// lis r10,1792
	ctx.r10.s64 = 117440512;
	// b 0x824680f4
	goto loc_824680F4;
loc_824680F0:
	// lis r10,2048
	ctx.r10.s64 = 134217728;
loc_824680F4:
	// rlwinm r11,r3,0,8,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
	// or r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 | ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8246C308) {
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
	ctx.lr = 0x8246C310;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,204(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8246c32c
	if (ctx.cr0.eq) goto loc_8246C32C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8246c6f0
	goto loc_8246C6F0;
loc_8246C32C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8247d160
	ctx.lr = 0x8246C334;
	sub_8247D160(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8246c6f0
	if (ctx.cr0.lt) goto loc_8246C6F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82481560
	ctx.lr = 0x8246C344;
	sub_82481560(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8246c6f0
	if (ctx.cr0.lt) goto loc_8246C6F0;
	// li r5,100
	ctx.r5.s64 = 100;
	// lwz r29,12(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r26,0
	r26.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x8246C36C;
	sub_826A2E60(ctx, base);
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x826a2e60
	ctx.lr = 0x8246C37C;
	sub_826A2E60(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8246c454
	if (!ctx.cr0.eq) goto loc_8246C454;
	// lwz r6,48(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8246c3c4
	if (ctx.cr6.eq) goto loc_8246C3C4;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r5,140(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 140);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824891f8
	ctx.lr = 0x8246C3A4;
	sub_824891F8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8246c6a4
	if (ctx.cr0.lt) goto loc_8246C6A4;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248efc0
	ctx.lr = 0x8246C3BC;
	sub_8248EFC0(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// xori r23,r11,1
	r23.u64 = ctx.r11.u64 ^ 1;
loc_8246C3C4:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,136(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// bl 0x824891f8
	ctx.lr = 0x8246C3DC;
	sub_824891F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8246c3fc
	if (ctx.cr0.lt) goto loc_8246C3FC;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248efc0
	ctx.lr = 0x8246C3F4;
	sub_8248EFC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8246c454
	if (!ctx.cr0.lt) goto loc_8246C454;
loc_8246C3FC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82480f90
	ctx.lr = 0x8246C408;
	sub_82480F90(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r5,136(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 136);
	// bl 0x824891f8
	ctx.lr = 0x8246C41C;
	sub_824891F8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8246c43c
	if (ctx.cr0.lt) goto loc_8246C43C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248efc0
	ctx.lr = 0x8246C434;
	sub_8248EFC0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x8246c454
	if (!ctx.cr0.lt) goto loc_8246C454;
loc_8246C43C:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8246c6a4
	if (ctx.cr6.eq) goto loc_8246C6A4;
	// li r30,1
	r30.s64 = 1;
	// b 0x8246c6a4
	goto loc_8246C6A4;
loc_8246C454:
	// rlwinm r25,r29,2,0,29
	r25.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823f02b8
	ctx.lr = 0x8246C464;
	sub_823F02B8(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq 0x8246c480
	if (ctx.cr0.eq) goto loc_8246C480;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823f02b8
	ctx.lr = 0x8246C478;
	sub_823F02B8(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne 0x8246c48c
	if (!ctx.cr0.eq) goto loc_8246C48C;
loc_8246C480:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x8246c6a4
	goto loc_8246C6A4;
loc_8246C48C:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8246C49C;
	sub_826A1E70(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x826a1e70
	ctx.lr = 0x8246C4AC;
	sub_826A1E70(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8246c4d8
	if (ctx.cr6.eq) goto loc_8246C4D8;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8246C4BC:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r10.u32);
	// stw r9,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// bdnz 0x8246c4bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8246C4BC;
loc_8246C4D8:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8246c6a0
	if (ctx.cr0.lt) goto loc_8246C6A0;
	// rlwinm r27,r29,2,0,29
	r27.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_8246C4E4:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r3,r27,r11
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	// stw r3,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8246c694
	if (ctx.cr0.eq) goto loc_8246C694;
	// rlwinm r11,r11,0,0,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// lis r10,24576
	ctx.r10.s64 = 1610612736;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8246c694
	if (ctx.cr6.eq) goto loc_8246C694;
	// bl 0x824777d8
	ctx.lr = 0x8246C510;
	sub_824777D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8246c694
	if (!ctx.cr0.eq) goto loc_8246C694;
	// lwz r5,260(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lis r11,4352
	ctx.r11.s64 = 285212672;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8246c694
	if (ctx.cr6.eq) goto loc_8246C694;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245fa18
	ctx.lr = 0x8246C540;
	sub_8245FA18(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8246c64c
	if (ctx.cr0.eq) goto loc_8246C64C;
	// lwz r6,260(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lis r11,20480
	ctx.r11.s64 = 1342177280;
	// li r28,0
	r28.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8246c570
	if (!ctx.cr6.eq) goto loc_8246C570;
	// li r30,1
	r30.s64 = 1;
loc_8246C570:
	// lwz r11,12(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8246c60c
	if (!ctx.cr6.gt) goto loc_8246C60C;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 260);
	// rlwinm r11,r11,29,0,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xE0000000;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// lwz r4,12(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
loc_8246C5A0:
	// lwz r11,16(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// bne cr6,0x8246c5e4
	if (!ctx.cr6.eq) goto loc_8246C5E4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r22,80(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r22,r10
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8246c5e4
	if (!ctx.cr6.eq) goto loc_8246C5E4;
	// lwz r22,12(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r11,r22,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// b 0x8246c5e8
	goto loc_8246C5E8;
loc_8246C5E4:
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
loc_8246C5E8:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8246c5f8
	if (!ctx.cr6.eq) goto loc_8246C5F8;
	// li r28,1
	r28.s64 = 1;
	// b 0x8246c5fc
	goto loc_8246C5FC;
loc_8246C5F8:
	// li r30,1
	r30.s64 = 1;
loc_8246C5FC:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8246c5a0
	if (ctx.cr6.lt) goto loc_8246C5A0;
loc_8246C60C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x8246c638
	if (!ctx.cr6.eq) goto loc_8246C638;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8246C61C:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246bec8
	ctx.lr = 0x8246C634;
	sub_8246BEC8(ctx, base);
	// b 0x8246c66c
	goto loc_8246C66C;
loc_8246C638:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x8246c694
	if (!ctx.cr6.eq) goto loc_8246C694;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x8246c61c
	goto loc_8246C61C;
loc_8246C64C:
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246c138
	ctx.lr = 0x8246C66C;
	sub_8246C138(ctx, base);
loc_8246C66C:
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8246c6a4
	if (ctx.cr0.lt) goto loc_8246C6A4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x8246c694
	if (!ctx.cr6.eq) goto loc_8246C694;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// addi r27,r27,-4
	r27.s64 = r27.s64 + -4;
	// bl 0x826a1e70
	ctx.lr = 0x8246C694;
	sub_826A1E70(ctx, base);
loc_8246C694:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r27,r27,-4
	r27.s64 = r27.s64 + -4;
	// bge 0x8246c4e4
	if (!ctx.cr0.lt) goto loc_8246C4E4;
loc_8246C6A0:
	// li r30,0
	r30.s64 = 0;
loc_8246C6A4:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8246c6d4
	if (!ctx.cr0.eq) goto loc_8246C6D4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82480f90
	ctx.lr = 0x8246C6BC;
	sub_82480F90(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8246c6d4
	if (ctx.cr6.eq) goto loc_8246C6D4;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82480f90
	ctx.lr = 0x8246C6D4;
	sub_82480F90(ctx, base);
loc_8246C6D4:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823f0350
	ctx.lr = 0x8246C6E0;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823f0350
	ctx.lr = 0x8246C6EC;
	sub_823F0350(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8246C6F0:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82489D98) {
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
	ctx.lr = 0x82489DA0;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r20,0
	r20.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82489de8
	if (!ctx.cr6.gt) goto loc_82489DE8;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82489DC4:
	// lwz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r8,r9,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r11,40(r8)
	REX_STORE_U32(ctx.r8.u32 + 40, ctx.r11.u32);
	// stw r11,36(r8)
	REX_STORE_U32(ctx.r8.u32 + 36, ctx.r11.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82489dc4
	if (ctx.cr6.lt) goto loc_82489DC4;
loc_82489DE8:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82489e20
	if (!ctx.cr6.gt) goto loc_82489E20;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82489DFC:
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwzx r8,r10,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,84(r8)
	REX_STORE_U32(ctx.r8.u32 + 84, ctx.r11.u32);
	// stw r11,72(r8)
	REX_STORE_U32(ctx.r8.u32 + 72, ctx.r11.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82489dfc
	if (ctx.cr6.lt) goto loc_82489DFC;
loc_82489E20:
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8248a050
	if (!ctx.cr6.gt) goto loc_8248A050;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82489E34:
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwzx r5,r4,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8248a03c
	if (ctx.cr0.eq) goto loc_8248A03C;
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82489f30
	if (!ctx.cr6.gt) goto loc_82489F30;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82489E5C:
	// lwz r10,8(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwzx r10,r7,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,84(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82489e80
	if (!ctx.cr6.lt) goto loc_82489E80;
	// stw r11,84(r8)
	REX_STORE_U32(ctx.r8.u32 + 84, ctx.r11.u32);
loc_82489E80:
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lwz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x82489ed8
	goto loc_82489ED8;
loc_82489E90:
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwz r3,40(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82489eb0
	if (!ctx.cr6.lt) goto loc_82489EB0;
	// stw r11,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
loc_82489EB0:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r9,84(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82489ed0
	if (!ctx.cr6.lt) goto loc_82489ED0;
	// stw r11,84(r10)
	REX_STORE_U32(ctx.r10.u32 + 84, ctx.r11.u32);
loc_82489ED0:
	// lwz r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
loc_82489ED8:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82489e90
	if (!ctx.cr6.eq) goto loc_82489E90;
	// lwz r9,20(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// addi r10,r8,20
	ctx.r10.s64 = ctx.r8.s64 + 20;
	// b 0x82489f14
	goto loc_82489F14;
loc_82489EEC:
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r9,84(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82489f0c
	if (!ctx.cr6.lt) goto loc_82489F0C;
	// stw r11,84(r10)
	REX_STORE_U32(ctx.r10.u32 + 84, ctx.r11.u32);
loc_82489F0C:
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
loc_82489F14:
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82489eec
	if (!ctx.cr6.eq) goto loc_82489EEC;
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82489e5c
	if (ctx.cr6.lt) goto loc_82489E5C;
loc_82489F30:
	// lwz r10,12(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8248a03c
	if (!ctx.cr6.gt) goto loc_8248A03C;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82489F44:
	// lwz r10,16(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwzx r10,r7,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,72(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 72);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82489f68
	if (!ctx.cr6.lt) goto loc_82489F68;
	// stw r11,72(r8)
	REX_STORE_U32(ctx.r8.u32 + 72, ctx.r11.u32);
loc_82489F68:
	// lwz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82489fe0
	if (ctx.cr6.eq) goto loc_82489FE0;
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r9,36(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82489f98
	if (!ctx.cr6.lt) goto loc_82489F98;
	// stw r11,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
loc_82489F98:
	// lwz r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// b 0x82489fc4
	goto loc_82489FC4;
loc_82489FA0:
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lwz r3,40(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82489fc0
	if (!ctx.cr6.lt) goto loc_82489FC0;
	// stw r11,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r11.u32);
loc_82489FC0:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_82489FC4:
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r9,84(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82489fe0
	if (!ctx.cr6.lt) goto loc_82489FE0;
	// stw r11,84(r10)
	REX_STORE_U32(ctx.r10.u32 + 84, ctx.r11.u32);
loc_82489FE0:
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82489fa0
	if (!ctx.cr6.eq) goto loc_82489FA0;
	// lwz r9,20(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// addi r10,r8,20
	ctx.r10.s64 = ctx.r8.s64 + 20;
	// b 0x8248a020
	goto loc_8248A020;
loc_82489FF8:
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r9,84(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8248a018
	if (!ctx.cr6.lt) goto loc_8248A018;
	// stw r11,84(r10)
	REX_STORE_U32(ctx.r10.u32 + 84, ctx.r11.u32);
loc_8248A018:
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
loc_8248A020:
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82489ff8
	if (!ctx.cr6.eq) goto loc_82489FF8;
	// lwz r10,12(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82489f44
	if (ctx.cr6.lt) goto loc_82489F44;
loc_8248A03C:
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82489e34
	if (ctx.cr6.lt) goto loc_82489E34;
loc_8248A050:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8247c860
	ctx.lr = 0x8248A058;
	sub_8247C860(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8248a2b8
	if (!ctx.cr6.gt) goto loc_8248A2B8;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r21,0
	r21.s64 = 0;
	// addi r22,r6,30936
	r22.s64 = ctx.r6.s64 + 30936;
	// addi r24,r5,30884
	r24.s64 = ctx.r5.s64 + 30884;
	// addi r26,r7,30828
	r26.s64 = ctx.r7.s64 + 30828;
	// addi r28,r8,30768
	r28.s64 = ctx.r8.s64 + 30768;
	// addi r25,r9,30708
	r25.s64 = ctx.r9.s64 + 30708;
	// addi r23,r10,30632
	r23.s64 = ctx.r10.s64 + 30632;
	// addi r27,r11,30564
	r27.s64 = ctx.r11.s64 + 30564;
loc_8248A0A4:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwzx r31,r11,r21
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r21.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r9,84(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 84);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8248a0d0
	if (!ctx.cr6.lt) goto loc_8248A0D0;
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
loc_8248A0D0:
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8248a0e4
	if (!ctx.cr6.lt) goto loc_8248A0E4;
	// stw r10,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r10.u32);
loc_8248A0E4:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8248a17c
	if (!ctx.cr0.eq) goto loc_8248A17C;
	// lwz r8,84(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x8248a17c
	if (ctx.cr6.eq) goto loc_8248A17C;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8248a17c
	if (ctx.cr6.gt) goto loc_8248A17C;
	// lwz r31,96(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8248a174
	if (ctx.cr6.eq) goto loc_8248A174;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8248a174
	if (!ctx.cr6.eq) goto loc_8248A174;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8248a174
	if (ctx.cr6.eq) goto loc_8248A174;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8248a174
	if (!ctx.cr6.eq) goto loc_8248A174;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8248a28c
	if (!ctx.cr6.eq) goto loc_8248A28C;
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,24(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,4000
	ctx.r5.s64 = 4000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r11,r9,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82489c30
	ctx.lr = 0x8248A168;
	sub_82489C30(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// b 0x8248a28c
	goto loc_8248A28C;
loc_8248A174:
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// b 0x8248a25c
	goto loc_8248A25C;
loc_8248A17C:
	// rlwinm. r9,r11,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8248a198
	if (ctx.cr0.eq) goto loc_8248A198;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x8248a198
	if (!ctx.cr6.eq) goto loc_8248A198;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// b 0x8248a278
	goto loc_8248A278;
loc_8248A198:
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8248a1b4
	if (!ctx.cr0.eq) goto loc_8248A1B4;
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x8248a1b4
	if (ctx.cr6.eq) goto loc_8248A1B4;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// b 0x8248a25c
	goto loc_8248A25C;
loc_8248A1B4:
	// andi. r9,r11,13
	ctx.r9.u64 = ctx.r11.u64 & 13;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8248a1d4
	if (!ctx.cr0.eq) goto loc_8248A1D4;
	// lwz r9,84(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8248a1d4
	if (ctx.cr6.eq) goto loc_8248A1D4;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// b 0x8248a278
	goto loc_8248A278;
loc_8248A1D4:
	// lwz r9,216(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 216);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8248a290
	if (ctx.cr6.eq) goto loc_8248A290;
	// lis r12,1
	ctx.r12.s64 = 65536;
	// ori r12,r12,800
	ctx.r12.u64 = ctx.r12.u64 | 800;
	// and. r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8248a290
	if (!ctx.cr0.eq) goto loc_8248A290;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8248a290
	if (!ctx.cr6.eq) goto loc_8248A290;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8248a24c
	if (!ctx.cr6.eq) goto loc_8248A24C;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8248a290
	if (ctx.cr6.eq) goto loc_8248A290;
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824774a0
	ctx.lr = 0x8248A220;
	sub_824774A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8248a290
	if (!ctx.cr0.eq) goto loc_8248A290;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lis r10,8336
	ctx.r10.s64 = 546308096;
	// lwz r9,24(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8248a290
	if (ctx.cr6.eq) goto loc_8248A290;
loc_8248A24C:
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x8248a274
	if (ctx.cr6.eq) goto loc_8248A274;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
loc_8248A25C:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82489c30
	ctx.lr = 0x8248A270;
	sub_82489C30(ctx, base);
	// b 0x8248a28c
	goto loc_8248A28C;
loc_8248A274:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
loc_8248A278:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82489c30
	ctx.lr = 0x8248A28C;
	sub_82489C30(ctx, base);
loc_8248A28C:
	// li r20,1
	r20.s64 = 1;
loc_8248A290:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8248a0a4
	if (ctx.cr6.lt) goto loc_8248A0A4;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq cr6,0x8248a2b8
	if (ctx.cr6.eq) goto loc_8248A2B8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8248a2bc
	goto loc_8248A2BC;
loc_8248A2B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8248A2BC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_824B7558) {
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
	ctx.lr = 0x824B7560;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r29,0
	r29.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// std r29,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r29.u64);
	// li r21,1
	r21.s64 = 1;
	// std r29,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, r29.u64);
	// li r5,24
	ctx.r5.s64 = 24;
	// std r29,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, r29.u64);
	// li r4,255
	ctx.r4.s64 = 255;
	// std r29,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r29.u64);
	// addi r3,r3,1040
	ctx.r3.s64 = ctx.r3.s64 + 1040;
	// std r29,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, r29.u64);
	// mr r14,r29
	r14.u64 = r29.u64;
	// std r29,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, r29.u64);
	// mr r23,r21
	r23.u64 = r21.u64;
	// std r29,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, r29.u64);
	// std r29,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, r29.u64);
	// std r29,16(r9)
	REX_STORE_U64(ctx.r9.u32 + 16, r29.u64);
	// mr r17,r29
	r17.u64 = r29.u64;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// bl 0x826a2e60
	ctx.lr = 0x824B75C0;
	sub_826A2E60(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r31,1064
	ctx.r3.s64 = r31.s64 + 1064;
	// bl 0x826a2e60
	ctx.lr = 0x824B75D0;
	sub_826A2E60(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r20,r29
	r20.u64 = r29.u64;
	// lis r18,24576
	r18.s64 = 1610612736;
	// mr r24,r29
	r24.u64 = r29.u64;
	// lis r19,4352
	r19.s64 = 285212672;
	// lis r15,29376
	r15.s64 = 1925185536;
	// lis r16,29392
	r16.s64 = 1926234112;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b782c
	if (!ctx.cr6.gt) goto loc_824B782C;
	// mr r22,r29
	r22.u64 = r29.u64;
loc_824B75F8:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r10,r11,r22
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r29,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, r29.u32);
	// rlwinm r11,r9,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r18.u32, ctx.xer);
	// beq cr6,0x824b7770
	if (ctx.cr6.eq) goto loc_824B7770;
	// lis r8,24656
	ctx.r8.s64 = 1615855616;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x824b7770
	if (ctx.cr6.eq) goto loc_824B7770;
	// lis r8,24736
	ctx.r8.s64 = 1621098496;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x824b7770
	if (ctx.cr6.eq) goto loc_824B7770;
	// lis r8,24816
	ctx.r8.s64 = 1626341376;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x824b7770
	if (ctx.cr6.eq) goto loc_824B7770;
	// lis r8,29408
	ctx.r8.s64 = 1927282688;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x824b7770
	if (ctx.cr6.eq) goto loc_824B7770;
	// lis r8,24688
	ctx.r8.s64 = 1617952768;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x824b7770
	if (ctx.cr6.eq) goto loc_824B7770;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r19.u32, ctx.xer);
	// beq cr6,0x824b7778
	if (ctx.cr6.eq) goto loc_824B7778;
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r15.u32, ctx.xer);
	// beq cr6,0x824b7770
	if (ctx.cr6.eq) goto loc_824B7770;
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r16.u32, ctx.xer);
	// beq cr6,0x824b7770
	if (ctx.cr6.eq) goto loc_824B7770;
	// clrlwi. r28,r9,12
	r28.u64 = ctx.r9.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x824b7808
	if (ctx.cr0.eq) goto loc_824B7808;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824b7808
	if (ctx.cr6.eq) goto loc_824B7808;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b7768
	if (!ctx.cr6.gt) goto loc_824B7768;
	// lwz r27,128(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 128);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r26,r28,2,0,29
	r26.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,20(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rotlwi r25,r11,0
	r25.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_824B76A0:
	// lwzx r11,r3,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, ctx.xer);
	// bne cr6,0x824b7758
	if (!ctx.cr6.eq) goto loc_824B7758;
	// lbz r10,111(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 111);
	// lbz r11,110(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 110);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x824b7758
	if (!ctx.cr6.eq) goto loc_824B7758;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824b76fc
	if (ctx.cr6.eq) goto loc_824B76FC;
	// lhz r9,202(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 202);
	// cmplwi cr6,r9,260
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 260, ctx.xer);
	// beq cr6,0x824b76fc
	if (ctx.cr6.eq) goto loc_824B76FC;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r23,r9,r23
	r23.u64 = ctx.r9.u64 & r23.u64;
loc_824B76FC:
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// stwx r21,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r21.u32);
	// add r7,r5,r28
	ctx.r7.u64 = ctx.r5.u64 + r28.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// stwx r21,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r21.u32);
	// bge cr6,0x824b7758
	if (!ctx.cr6.lt) goto loc_824B7758;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_824B7720:
	// lwzx r10,r3,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// lwzx r14,r11,r8
	r14.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r14.u32, ctx.xer);
	// ble cr6,0x824b7744
	if (!ctx.cr6.gt) goto loc_824B7744;
	// stwx r10,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
loc_824B7744:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x824b7720
	if (ctx.cr6.lt) goto loc_824B7720;
	// lwz r14,80(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_824B7758:
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + r28.u64;
	// add r4,r26,r4
	ctx.r4.u64 = r26.u64 + ctx.r4.u64;
	// cmplw cr6,r5,r25
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r25.u32, ctx.xer);
	// blt cr6,0x824b76a0
	if (ctx.cr6.lt) goto loc_824B76A0;
loc_824B7768:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// b 0x824b7808
	goto loc_824B7808;
loc_824B7770:
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r19.u32, ctx.xer);
	// bne cr6,0x824b7790
	if (!ctx.cr6.eq) goto loc_824B7790;
loc_824B7778:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x824b77a8
	goto loc_824B77A8;
loc_824B7790:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r10,r9,2,10,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FFFFC;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
loc_824B77A8:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,128(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824b7804
	if (!ctx.cr6.eq) goto loc_824B7804;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824b7804
	if (!ctx.cr6.eq) goto loc_824B7804;
	// lbz r9,111(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 111);
	// lbz r10,110(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 110);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bne cr6,0x824b7894
	if (!ctx.cr6.eq) goto loc_824B7894;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824b77fc
	if (ctx.cr6.eq) goto loc_824B77FC;
	// lhz r9,202(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 202);
	// addi r9,r9,-260
	ctx.r9.s64 = ctx.r9.s64 + -260;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r23,r9,r23
	r23.u64 = ctx.r9.u64 & r23.u64;
loc_824B77FC:
	// stwx r21,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r21.u32);
	// b 0x824b7808
	goto loc_824B7808;
loc_824B7804:
	// mr r23,r29
	r23.u64 = r29.u64;
loc_824B7808:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b75f8
	if (ctx.cr6.lt) goto loc_824B75F8;
	// subfic r11,r20,16
	ctx.xer.ca = r20.u32 <= 16;
	ctx.r11.u64 = static_cast<uint64_t>(16) - r20.u64;
	// addze r10,r20
	temp.s64 = r20.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r20.u32;
	ctx.r10.s64 = temp.s64;
	// subf r11,r10,r20
	ctx.r11.u64 = r20.u64 - ctx.r10.u64;
	// and r23,r11,r23
	r23.u64 = ctx.r11.u64 & r23.u64;
loc_824B782C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b7860
	if (!ctx.cr6.gt) goto loc_824B7860;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_824B7840:
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r29,64(r9)
	REX_STORE_U32(ctx.r9.u32 + 64, r29.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824b7840
	if (ctx.cr6.lt) goto loc_824B7840;
loc_824B7860:
	// lwz r24,12(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,2048
	ctx.r3.s64 = 2048;
	// beq cr6,0x824b78f0
	if (ctx.cr6.eq) goto loc_824B78F0;
	// stw r29,560(r31)
	REX_STORE_U32(r31.u32 + 560, r29.u32);
	// bl 0x823f02b8
	ctx.lr = 0x824B787C;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,564(r31)
	REX_STORE_U32(r31.u32 + 564, ctx.r3.u32);
	// bne 0x824b78b8
	if (!ctx.cr0.eq) goto loc_824B78B8;
loc_824B7888:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824b7c1c
	goto loc_824B7C1C;
loc_824B7894:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r4,96(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// li r5,4513
	ctx.r5.s64 = 4513;
	// addi r6,r10,2456
	ctx.r6.s64 = ctx.r10.s64 + 2456;
loc_824B78A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82489c30
	ctx.lr = 0x824B78AC;
	sub_82489C30(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824b7c1c
	goto loc_824B7C1C;
loc_824B78B8:
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x824B78C4;
	sub_826A2E60(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// addi r5,r31,552
	ctx.r5.s64 = r31.s64 + 552;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824aebd8
	ctx.lr = 0x824B78E4;
	sub_824AEBD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x824b7ba8
	if (!ctx.cr0.lt) goto loc_824B7BA8;
	// b 0x824b7c1c
	goto loc_824B7C1C;
loc_824B78F0:
	// bl 0x823f02b8
	ctx.lr = 0x824B78F4;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,560(r31)
	REX_STORE_U32(r31.u32 + 560, ctx.r3.u32);
	// beq 0x824b7888
	if (ctx.cr0.eq) goto loc_824B7888;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,2048
	ctx.r3.s64 = 2048;
	// bl 0x823f02b8
	ctx.lr = 0x824B790C;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,564(r31)
	REX_STORE_U32(r31.u32 + 564, ctx.r3.u32);
	// beq 0x824b7888
	if (ctx.cr0.eq) goto loc_824B7888;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,2048
	ctx.r3.s64 = 2048;
	// bl 0x823f02b8
	ctx.lr = 0x824B7924;
	sub_823F02B8(ctx, base);
	// mr. r14,r3
	r14.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq 0x824b7888
	if (ctx.cr0.eq) goto loc_824B7888;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,2048
	ctx.r3.s64 = 2048;
	// bl 0x823f02b8
	ctx.lr = 0x824B7938;
	sub_823F02B8(ctx, base);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// lwz r3,560(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 560);
	// bl 0x826a2e60
	ctx.lr = 0x824B794C;
	sub_826A2E60(ctx, base);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,564(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 564);
	// bl 0x826a2e60
	ctx.lr = 0x824B795C;
	sub_826A2E60(ctx, base);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x826a2e60
	ctx.lr = 0x824B796C;
	sub_826A2E60(ctx, base);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x826a2e60
	ctx.lr = 0x824B797C;
	sub_826A2E60(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r25,r31,548
	r25.s64 = r31.s64 + 548;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r26,r31,552
	r26.s64 = r31.s64 + 552;
	// stw r29,548(r31)
	REX_STORE_U32(r31.u32 + 548, r29.u32);
	// mr r27,r29
	r27.u64 = r29.u64;
	// stw r29,552(r31)
	REX_STORE_U32(r31.u32 + 552, r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b7af8
	if (!ctx.cr6.gt) goto loc_824B7AF8;
	// mr r28,r29
	r28.u64 = r29.u64;
loc_824B79A4:
	// cmplwi cr6,r28,2048
	ctx.cr6.compare<uint32_t>(r28.u32, 2048, ctx.xer);
	// bge cr6,0x824b7c24
	if (!ctx.cr6.lt) goto loc_824B7C24;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r8,r11,r28
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r11,r9,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r18.u32, ctx.xer);
	// beq cr6,0x824b7a18
	if (ctx.cr6.eq) goto loc_824B7A18;
	// lis r10,24656
	ctx.r10.s64 = 1615855616;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b7a18
	if (ctx.cr6.eq) goto loc_824B7A18;
	// lis r10,24736
	ctx.r10.s64 = 1621098496;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b7a18
	if (ctx.cr6.eq) goto loc_824B7A18;
	// lis r10,29408
	ctx.r10.s64 = 1927282688;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b7a18
	if (ctx.cr6.eq) goto loc_824B7A18;
	// lis r10,24688
	ctx.r10.s64 = 1617952768;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b7a18
	if (ctx.cr6.eq) goto loc_824B7A18;
	// lis r10,24816
	ctx.r10.s64 = 1626341376;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b7a18
	if (ctx.cr6.eq) goto loc_824B7A18;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r19.u32, ctx.xer);
	// beq cr6,0x824b7a18
	if (ctx.cr6.eq) goto loc_824B7A18;
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r16.u32, ctx.xer);
	// beq cr6,0x824b7a18
	if (ctx.cr6.eq) goto loc_824B7A18;
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r15.u32, ctx.xer);
	// bne cr6,0x824b7ae4
	if (!ctx.cr6.eq) goto loc_824B7AE4;
loc_824B7A18:
	// subf r11,r11,r19
	ctx.r11.u64 = r19.u64 - ctx.r11.u64;
	// lwz r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// clrlwi r9,r9,12
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFFF;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// lwz r6,136(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 136);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x824b7ac4
	if (ctx.cr6.eq) goto loc_824B7AC4;
	// lwz r7,60(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x824b7ac4
	if (!ctx.cr6.eq) goto loc_824B7AC4;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824b7ae4
	if (!ctx.cr6.eq) goto loc_824B7AE4;
	// lbz r11,111(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 111);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x824b7c38
	if (!ctx.cr6.eq) goto loc_824B7C38;
	// lbz r11,110(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 110);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824b7ae4
	if (ctx.cr6.eq) goto loc_824B7AE4;
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// cmplwi cr6,r11,260
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 260, ctx.xer);
	// beq cr6,0x824b7ae4
	if (ctx.cr6.eq) goto loc_824B7AE4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,4520
	ctx.r5.s64 = 4520;
	// addi r6,r11,2376
	ctx.r6.s64 = ctx.r11.s64 + 2376;
loc_824B7AAC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82489c30
	ctx.lr = 0x824B7AB8;
	sub_82489C30(ctx, base);
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
	// b 0x824b7bf0
	goto loc_824B7BF0;
loc_824B7AC4:
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ae948
	ctx.lr = 0x824B7ADC;
	sub_824AE948(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824b7bf0
	if (ctx.cr0.lt) goto loc_824B7BF0;
loc_824B7AE4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b79a4
	if (ctx.cr6.lt) goto loc_824B79A4;
loc_824B7AF8:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824b7b30
	if (ctx.cr6.eq) goto loc_824B7B30;
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
	// subf r9,r14,r17
	ctx.r9.u64 = r17.u64 - r14.u64;
loc_824B7B10:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r8,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x824b7b10
	if (ctx.cr6.lt) goto loc_824B7B10;
loc_824B7B30:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824aebd8
	ctx.lr = 0x824B7B50;
	sub_824AEBD8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824b7bf0
	if (ctx.cr0.lt) goto loc_824B7BF0;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824b7b84
	if (ctx.cr6.eq) goto loc_824B7B84;
	// addi r10,r17,-4
	ctx.r10.s64 = r17.s64 + -4;
loc_824B7B6C:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r29,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, r29.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x824b7b6c
	if (ctx.cr6.lt) goto loc_824B7B6C;
loc_824B7B84:
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 76);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r8,564(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 564);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,560(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 560);
	// bl 0x824aebd8
	ctx.lr = 0x824B7BA0;
	sub_824AEBD8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824b7bf0
	if (ctx.cr0.lt) goto loc_824B7BF0;
loc_824B7BA8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b7bec
	if (!ctx.cr6.gt) goto loc_824B7BEC;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_824B7BBC:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r8,64(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x824b7bd8
	if (!ctx.cr6.eq) goto loc_824B7BD8;
	// lwz r8,116(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 116);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_824B7BD8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824b7bbc
	if (ctx.cr6.lt) goto loc_824B7BBC;
loc_824B7BEC:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_824B7BF0:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x824b7c04
	if (ctx.cr6.eq) goto loc_824B7C04;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x823f0350
	ctx.lr = 0x824B7C04;
	sub_823F0350(ctx, base);
loc_824B7C04:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x824b7c18
	if (ctx.cr6.eq) goto loc_824B7C18;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x823f0350
	ctx.lr = 0x824B7C18;
	sub_823F0350(ctx, base);
loc_824B7C18:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824B7C1C:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1cd0
	return;
loc_824B7C24:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,4514
	ctx.r5.s64 = 4514;
	// addi r6,r11,424
	ctx.r6.s64 = ctx.r11.s64 + 424;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824b78a4
	goto loc_824B78A4;
loc_824B7C38:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,4513
	ctx.r5.s64 = 4513;
	// addi r6,r11,-80
	ctx.r6.s64 = ctx.r11.s64 + -80;
	// b 0x824b7aac
	goto loc_824B7AAC;
}

DEFINE_REX_FUNC(sub_824DBF38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824DBF40;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r29,r3,144
	r29.s64 = ctx.r3.s64 + 144;
	// lwz r3,144(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824dbf8c
	if (ctx.cr6.lt) goto loc_824DBF8C;
	// lwz r30,100(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x824dbf8c
	if (ctx.cr6.gt) goto loc_824DBF8C;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824dbf84
	if (!ctx.cr6.gt) goto loc_824DBF84;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d8118
	ctx.lr = 0x824DBF84;
	sub_824D8118(ctx, base);
loc_824DBF84:
	// stw r31,4(r30)
	REX_STORE_U32(r30.u32 + 4, r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_824DBF8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824DD758) {
	REX_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824dd7a8
	if (ctx.cr6.eq) goto loc_824DD7A8;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r10,r10,22832
	ctx.r10.s64 = ctx.r10.s64 + 22832;
loc_824DD76C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x824dd790
	if (ctx.cr0.eq) goto loc_824DD790;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824dd76c
	if (ctx.cr6.eq) goto loc_824DD76C;
loc_824DD790:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824dd7a8
	if (!ctx.cr0.eq) goto loc_824DD7A8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_824DD7A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824DF258) {
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
	ctx.lr = 0x824DF260;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r3,4684
	ctx.r3.s64 = 4684;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// bl 0x823f02b8
	ctx.lr = 0x824DF29C;
	sub_823F02B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x824df2b0
	if (!ctx.cr0.eq) goto loc_824DF2B0;
	// lis r28,-32761
	r28.s64 = -2147024896;
	// ori r28,r28,14
	r28.u64 = r28.u64 | 14;
	// b 0x824df35c
	goto loc_824DF35C;
loc_824DF2B0:
	// addic r11,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	ctx.r11.s64 = r30.s64 + -1;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// subfe r8,r11,r30
	temp.u8 = (~ctx.r11.u32 + r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r11.u64 + r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824deaf0
	ctx.lr = 0x824DF2D0;
	sub_824DEAF0(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r11,-8536
	ctx.r5.s64 = ctx.r11.s64 + -8536;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824de6b8
	ctx.lr = 0x824DF2F0;
	sub_824DE6B8(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ded20
	ctx.lr = 0x824DF300;
	sub_824DED20(ctx, base);
	// lwz r27,80(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x824df33c
	if (ctx.cr0.lt) goto loc_824DF33C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,20
	ctx.r10.s64 = 20;
	// divwu. r29,r11,r10
	r29.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x824df33c
	if (ctx.cr0.eq) goto loc_824DF33C;
	// addi r30,r27,2
	r30.s64 = r27.s64 + 2;
loc_824DF320:
	// addi r5,r30,2
	ctx.r5.s64 = r30.s64 + 2;
	// lhz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U16(r30.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x822cd9e8
	ctx.lr = 0x824DF330;
	sub_822CD9E8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,20
	r30.s64 = r30.s64 + 20;
	// bne 0x824df320
	if (!ctx.cr0.eq) goto loc_824DF320;
loc_824DF33C:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x824DF348;
	sub_823F0350(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824df35c
	if (ctx.cr6.eq) goto loc_824DF35C;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823f0350
	ctx.lr = 0x824DF35C;
	sub_823F0350(ctx, base);
loc_824DF35C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_824E6018) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824E6020;
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
	// bne cr6,0x824e6038
	if (!ctx.cr6.eq) goto loc_824E6038;
	// bl 0x826b40a0
	ctx.lr = 0x824E6038;
	sub_826B40A0(ctx, base);
loc_824E6038:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824e6048
	if (!ctx.cr6.eq) goto loc_824E6048;
	// bl 0x826b40a0
	ctx.lr = 0x824E6048;
	sub_826B40A0(ctx, base);
loc_824E6048:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824e60ec
	if (ctx.cr6.lt) goto loc_824E60EC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824e6070
	if (ctx.cr6.eq) goto loc_824E6070;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// b 0x824e6074
	goto loc_824E6074;
loc_824E6070:
	// li r11,4096
	ctx.r11.s64 = 4096;
loc_824E6074:
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// b 0x824e6084
	goto loc_824E6084;
loc_824E607C:
	// rlwinm. r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e60f8
	if (ctx.cr0.eq) goto loc_824E60F8;
loc_824E6084:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r11,-32
	r30.s64 = ctx.r11.s64 + -32;
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824e607c
	if (ctx.cr6.lt) goto loc_824E607C;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f02b8
	ctx.lr = 0x824E60A4;
	sub_823F02B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x824e60f8
	if (ctx.cr0.eq) goto loc_824E60F8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824e60d8
	if (ctx.cr6.eq) goto loc_824E60D8;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mullw r5,r10,r11
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// bl 0x826a1e70
	ctx.lr = 0x824E60CC;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// bl 0x823f0350
	ctx.lr = 0x824E60D8;
	sub_823F0350(ctx, base);
loc_824E60D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r30,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? r30.u32 / ctx.r11.u32 : 0);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_824E60EC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_824E60F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_824E60F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824e60f0
	goto loc_824E60F0;
}

DEFINE_REX_FUNC(sub_824ECC90) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c8c
	ctx.lr = 0x824ECC98;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// mr r17,r7
	r17.u64 = ctx.r7.u64;
	// mr r18,r8
	r18.u64 = ctx.r8.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x824ece8c
	if (ctx.cr6.eq) goto loc_824ECE8C;
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r7,-32128
	ctx.r7.s64 = -2105540608;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r23,r3,19040
	r23.s64 = ctx.r3.s64 + 19040;
	// addi r27,r4,22852
	r27.s64 = ctx.r4.s64 + 22852;
	// addi r26,r5,19324
	r26.s64 = ctx.r5.s64 + 19324;
	// addi r25,r6,-27520
	r25.s64 = ctx.r6.s64 + -27520;
	// addi r22,r7,-19552
	r22.s64 = ctx.r7.s64 + -19552;
	// addi r24,r8,23744
	r24.s64 = ctx.r8.s64 + 23744;
	// addi r21,r9,-27532
	r21.s64 = ctx.r9.s64 + -27532;
	// addi r20,r10,-27528
	r20.s64 = ctx.r10.s64 + -27528;
	// addi r30,r11,28460
	r30.s64 = ctx.r11.s64 + 28460;
loc_824ECD00:
	// clrlwi r11,r17,31
	ctx.r11.u64 = r17.u32 & 0x1;
	// clrlwi r31,r18,31
	r31.u64 = r18.u32 & 0x1;
	// srawi r18,r18,1
	ctx.xer.ca = (r18.s32 < 0) & ((r18.u32 & 0x1) != 0);
	r18.s64 = r18.s32 >> 1;
	// srawi r17,r17,2
	ctx.xer.ca = (r17.s32 < 0) & ((r17.u32 & 0x3) != 0);
	r17.s64 = r17.s32 >> 2;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824ecd40
	if (!ctx.cr6.eq) goto loc_824ECD40;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824ec260
	ctx.lr = 0x824ECD20;
	sub_824EC260(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824eace8
	ctx.lr = 0x824ECD2C;
	sub_824EACE8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824ec3a8
	ctx.lr = 0x824ECD3C;
	sub_824EC3A8(ctx, base);
	// b 0x824ece80
	goto loc_824ECE80;
loc_824ECD40:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm r11,r11,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x824ecd74
	if (ctx.cr6.lt) goto loc_824ECD74;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x824ecd68
	if (ctx.cr6.eq) goto loc_824ECD68;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
loc_824ECD68:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824eace8
	ctx.lr = 0x824ECD74;
	sub_824EACE8(ctx, base);
loc_824ECD74:
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 0);
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824ecd94
	if (!ctx.cr0.eq) goto loc_824ECD94;
	// lbz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 8);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x824ecd98
	if (ctx.cr6.eq) goto loc_824ECD98;
loc_824ECD94:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824ECD98:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824ecdc0
	if (!ctx.cr0.eq) goto loc_824ECDC0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824ec260
	ctx.lr = 0x824ECDA8;
	sub_824EC260(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824eace8
	ctx.lr = 0x824ECDB4;
	sub_824EACE8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824ebde8
	ctx.lr = 0x824ECDC0;
	sub_824EBDE8(ctx, base);
loc_824ECDC0:
	// lbz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 8);
	// rlwinm r11,r11,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// lwzx r11,r11,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// blt cr6,0x824ecdfc
	if (ctx.cr6.lt) goto loc_824ECDFC;
	// rlwinm. r11,r11,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824ece80
	if (ctx.cr0.eq) goto loc_824ECE80;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,1151
	ctx.r7.s64 = 1151;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824ECDF8;
	sub_824EA978(ctx, base);
	// b 0x824ece80
	goto loc_824ECE80;
loc_824ECDFC:
	// rlwinm. r10,r11,0,8,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824ece24
	if (!ctx.cr0.eq) goto loc_824ECE24;
	// rlwinm r10,r11,0,0,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// lis r9,5120
	ctx.r9.s64 = 335544320;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824ece24
	if (!ctx.cr6.eq) goto loc_824ECE24;
	// rlwinm r11,r11,0,18,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F00;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x824ece28
	if (!ctx.cr6.eq) goto loc_824ECE28;
loc_824ECE24:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824ECE28:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824ece80
	if (!ctx.cr0.eq) goto loc_824ECE80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824ec260
	ctx.lr = 0x824ECE38;
	sub_824EC260(ctx, base);
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 0);
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824ece58
	if (!ctx.cr0.eq) goto loc_824ECE58;
	// lbz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 8);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x824ece5c
	if (ctx.cr6.eq) goto loc_824ECE5C;
loc_824ECE58:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824ECE5C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// beq 0x824ece70
	if (ctx.cr0.eq) goto loc_824ECE70;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_824ECE70:
	// bl 0x824eace8
	ctx.lr = 0x824ECE74;
	sub_824EACE8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824ec0c0
	ctx.lr = 0x824ECE80;
	sub_824EC0C0(ctx, base);
loc_824ECE80:
	// addic. r19,r19,-1
	ctx.xer.ca = r19.u32 > 0;
	r19.s64 = r19.s64 + -1;
	ctx.cr0.compare<int32_t>(r19.s32, 0, ctx.xer);
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
	// bne 0x824ecd00
	if (!ctx.cr0.eq) goto loc_824ECD00;
loc_824ECE8C:
	// stw r28,12(r29)
	REX_STORE_U32(r29.u32 + 12, r28.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_824FD098) {
	REX_FUNC_PROLOGUE();
	// mulli r11,r4,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(12));
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824fd1d0
	if (ctx.cr0.eq) goto loc_824FD1D0;
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fd0cc
	if (!ctx.cr0.eq) goto loc_824FD0CC;
	// rlwinm. r10,r11,0,18,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F00;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fd0cc
	if (!ctx.cr0.eq) goto loc_824FD0CC;
	// clrlwi r8,r11,26
	ctx.r8.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r8,15
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 15, ctx.xer);
	// ble cr6,0x824fd0d8
	if (!ctx.cr6.gt) goto loc_824FD0D8;
	// cmplwi cr6,r8,61
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 61, ctx.xer);
	// bge cr6,0x824fd0f0
	if (!ctx.cr6.lt) goto loc_824FD0F0;
loc_824FD0CC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_824FD0D8:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,32856
	ctx.r10.u64 = ctx.r10.u64 | 32856;
	// lwzx r10,r5,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824fd0cc
	if (!ctx.cr6.lt) goto loc_824FD0CC;
	// cmplwi cr6,r8,61
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 61, ctx.xer);
loc_824FD0F0:
	// bne cr6,0x824fd19c
	if (!ctx.cr6.eq) goto loc_824FD19C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,32860
	ctx.r10.u64 = ctx.r10.u64 | 32860;
loc_824FD0FC:
	// lwzx r10,r5,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824fd0cc
	if (ctx.cr6.eq) goto loc_824FD0CC;
	// li r9,1
	ctx.r9.s64 = 1;
loc_824FD10C:
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r7,r11,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// and r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 & ctx.r10.u64;
	// clrlwi. r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x824fd0cc
	if (!ctx.cr0.eq) goto loc_824FD0CC;
	// rlwinm r7,r11,16,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// clrlwi. r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fd0cc
	if (!ctx.cr0.eq) goto loc_824FD0CC;
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fd0cc
	if (!ctx.cr0.eq) goto loc_824FD0CC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x824fd10c
	if (ctx.cr6.lt) goto loc_824FD10C;
loc_824FD148:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r8,62
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 62, ctx.xer);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// blt cr6,0x824fd17c
	if (ctx.cr6.lt) goto loc_824FD17C;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824fd0cc
	if (ctx.cr0.eq) goto loc_824FD0CC;
	// cmplwi cr6,r8,62
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 62, ctx.xer);
	// bne cr6,0x824fd17c
	if (!ctx.cr6.eq) goto loc_824FD17C;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_824FD17C:
	// cmplwi cr6,r8,61
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 61, ctx.xer);
	// beq cr6,0x824fd18c
	if (ctx.cr6.eq) goto loc_824FD18C;
	// cmplwi cr6,r8,15
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 15, ctx.xer);
	// bgt cr6,0x824fd1fc
	if (ctx.cr6.gt) goto loc_824FD1FC;
loc_824FD18C:
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824fd1fc
	if (!ctx.cr0.eq) goto loc_824FD1FC;
	// b 0x824fd0cc
	goto loc_824FD0CC;
loc_824FD19C:
	// cmplwi cr6,r8,62
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 62, ctx.xer);
	// bne cr6,0x824fd1bc
	if (!ctx.cr6.eq) goto loc_824FD1BC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,32864
	ctx.r11.u64 = ctx.r11.u64 | 32864;
	// lwzx r11,r5,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824fd148
	if (!ctx.cr6.eq) goto loc_824FD148;
	// b 0x824fd0cc
	goto loc_824FD0CC;
loc_824FD1BC:
	// cmplwi cr6,r8,63
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 63, ctx.xer);
	// bne cr6,0x824fd148
	if (!ctx.cr6.eq) goto loc_824FD148;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,32868
	ctx.r10.u64 = ctx.r10.u64 | 32868;
	// b 0x824fd0fc
	goto loc_824FD0FC;
loc_824FD1D0:
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fd0cc
	if (!ctx.cr0.eq) goto loc_824FD0CC;
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fd0cc
	if (!ctx.cr0.eq) goto loc_824FD0CC;
	// lwz r10,32(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// rlwinm r9,r11,24,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x824fd0cc
	if (ctx.cr6.gt) goto loc_824FD0CC;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x824fd0cc
	if (ctx.cr6.gt) goto loc_824FD0CC;
loc_824FD1FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8250A940) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250a954
	if (!ctx.cr0.eq) goto loc_8250A954;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8250A954:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
loc_8250A958:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8250a974
	if (ctx.cr6.eq) goto loc_8250A974;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250a974
	if (!ctx.cr0.eq) goto loc_8250A974;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8250a958
	goto loc_8250A958;
loc_8250A974:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x8250a990
	if (ctx.cr6.lt) goto loc_8250A990;
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8250a994
	if (!ctx.cr6.gt) goto loc_8250A994;
loc_8250A990:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8250A994:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8250D258) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c80
	ctx.lr = 0x8250D260;
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// lfs f30,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f30.f64 = double(temp.f32);
	// mr r15,r6
	r15.u64 = ctx.r6.u64;
	// lfs f31,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	f31.f64 = double(temp.f32);
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// li r31,0
	r31.s64 = 0;
loc_8250D294:
	// lwz r10,36(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 36);
	// addi r11,r20,32
	ctx.r11.s64 = r20.s64 + 32;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r16,r9,r10
	r16.u64 = ctx.r9.u64 & ctx.r10.u64;
loc_8250D2AC:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x8250d89c
	if (ctx.cr6.eq) goto loc_8250D89C;
	// lwz r11,8(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14976
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14976, ctx.xer);
	// bne cr6,0x8250d850
	if (!ctx.cr6.eq) goto loc_8250D850;
	// mr r14,r16
	r14.u64 = r16.u64;
loc_8250D2C8:
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r14.u32);
loc_8250D2CC:
	// lwz r18,0(r14)
	r18.u64 = REX_LOAD_U32(r14.u32 + 0);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x8250d844
	if (ctx.cr6.eq) goto loc_8250D844;
	// lwz r8,0(r18)
	ctx.r8.u64 = REX_LOAD_U32(r18.u32 + 0);
	// rlwinm. r11,r8,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250d830
	if (ctx.cr0.eq) goto loc_8250D830;
	// lwz r19,12(r18)
	r19.u64 = REX_LOAD_U32(r18.u32 + 12);
	// lwz r11,8(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 8);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250d830
	if (ctx.cr0.eq) goto loc_8250D830;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,0(r16)
	ctx.r9.u64 = REX_LOAD_U32(r16.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
loc_8250D304:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8250d334
	if (ctx.cr6.eq) goto loc_8250D334;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r7,r10,0,4,6
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8250d32c
	if (ctx.cr0.eq) goto loc_8250D32C;
	// xor r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// rlwinm. r7,r7,0,7,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1FE0000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8250d32c
	if (!ctx.cr0.eq) goto loc_8250D32C;
	// rlwinm r10,r10,19,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_8250D32C:
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8250d304
	goto loc_8250D304;
loc_8250D334:
	// rlwimi r11,r8,19,20,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 19) & 0xFF0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF00F);
	// lwz r31,0(r15)
	r31.u64 = REX_LOAD_U32(r15.u32 + 0);
	// clrlwi r23,r11,20
	r23.u64 = ctx.r11.u32 & 0xFFF;
loc_8250D340:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8250d37c
	if (ctx.cr6.eq) goto loc_8250D37C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8250d374
	if (ctx.cr0.eq) goto loc_8250D374;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8250d374
	if (ctx.cr0.eq) goto loc_8250D374;
	// rlwinm r11,r11,19,20,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFF0;
	// xor r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 ^ r23.u64;
	// rlwinm. r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250d37c
	if (ctx.cr0.eq) goto loc_8250D37C;
loc_8250D374:
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x8250d340
	goto loc_8250D340;
loc_8250D37C:
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r10,r10,36262
	ctx.r10.u64 = ctx.r10.u64 | 36262;
	// clrlwi r9,r23,28
	ctx.r9.u64 = r23.u32 & 0xF;
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// clrlwi r24,r11,29
	r24.u64 = ctx.r11.u32 & 0x7;
	// bne cr6,0x8250d4ac
	if (!ctx.cr6.eq) goto loc_8250D4AC;
	// addi r28,r17,24
	r28.s64 = r17.s64 + 24;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825bb9c8
	ctx.lr = 0x8250D3C4;
	sub_825BB9C8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8250d444
	if (ctx.cr6.eq) goto loc_8250D444;
	// addi r29,r3,44
	r29.s64 = ctx.r3.s64 + 44;
	// mr r27,r24
	r27.u64 = r24.u64;
loc_8250D3D8:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825bb908
	ctx.lr = 0x8250D3E4;
	sub_825BB908(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8250D3F4;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8250D400;
	sub_8250AD28(ctx, base);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8250d438
	if (ctx.cr6.eq) goto loc_8250D438;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r21,-4(r31)
	REX_STORE_U32(r31.u32 + -4, r21.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824f71b8
	ctx.lr = 0x8250D424;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-8
	ctx.r11.s64 = r31.s64 + -8;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r23,0,17,31
	ctx.r10.u64 = (__builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x7FFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF8000);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8250D438:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x8250d3d8
	if (!ctx.cr0.eq) goto loc_8250D3D8;
loc_8250D444:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8250D450;
	sub_8250AB60(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8250c998
	ctx.lr = 0x8250D468;
	sub_8250C998(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8250D478;
	sub_8250AB60(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// rlwimi r10,r23,13,7,18
	ctx.r10.u64 = (__builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 13) & 0x1FFE000) | (ctx.r10.u64 & 0xFFFFFFFFFE001FFF);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,19,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFE001FFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8250ad28
	ctx.lr = 0x8250D4AC;
	sub_8250AD28(ctx, base);
loc_8250D4AC:
	// li r22,0
	r22.s64 = 0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// bne cr6,0x8250d4c8
	if (!ctx.cr6.eq) goto loc_8250D4C8;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r22,12(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x8250d6bc
	goto loc_8250D6BC;
loc_8250D4C8:
	// li r27,0
	r27.s64 = 0;
	// mr r25,r20
	r25.u64 = r20.u64;
loc_8250D4D0:
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8250d884
	if (ctx.cr6.eq) goto loc_8250D884;
	// lwz r25,0(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8250d884
	if (ctx.cr6.eq) goto loc_8250D884;
	// lwz r31,20(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 20);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250d5a0
	if (!ctx.cr0.eq) goto loc_8250D5A0;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x8250d5a0
	if (ctx.cr0.eq) goto loc_8250D5A0;
loc_8250D4FC:
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -4);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r21.u32, ctx.xer);
	// bne cr6,0x8250d534
	if (!ctx.cr6.eq) goto loc_8250D534;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824f71b8
	ctx.lr = 0x8250D51C;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-8
	ctx.r11.s64 = r31.s64 + -8;
	// rlwinm r10,r23,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFF0;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r11,r11,0,17,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8250d550
	if (ctx.cr6.eq) goto loc_8250D550;
loc_8250D534:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250d5a0
	if (!ctx.cr0.eq) goto loc_8250D5A0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8250d4fc
	if (!ctx.cr6.eq) goto loc_8250D4FC;
	// b 0x8250d5a0
	goto loc_8250D5A0;
loc_8250D550:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_8250D554:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8250d594
	if (ctx.cr6.eq) goto loc_8250D594;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8250d584
	if (ctx.cr6.eq) goto loc_8250D584;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14080
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14080, ctx.xer);
	// bne cr6,0x8250d584
	if (!ctx.cr6.eq) goto loc_8250D584;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8250d58c
	if (!ctx.cr0.eq) goto loc_8250D58C;
loc_8250D584:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8250d554
	goto loc_8250D554;
loc_8250D58C:
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// b 0x8250d598
	goto loc_8250D598;
loc_8250D594:
	// li r29,0
	r29.s64 = 0;
loc_8250D598:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8250d668
	if (!ctx.cr6.eq) goto loc_8250D668;
loc_8250D5A0:
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8250d5bc
	if (ctx.cr6.eq) goto loc_8250D5BC;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8250d5c0
	if (!ctx.cr6.eq) goto loc_8250D5C0;
loc_8250D5BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8250D5C0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250d4d0
	if (ctx.cr0.eq) goto loc_8250D4D0;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// addi r5,r25,24
	ctx.r5.s64 = r25.s64 + 24;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825bb9c8
	ctx.lr = 0x8250D5DC;
	sub_825BB9C8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8250d658
	if (ctx.cr6.eq) goto loc_8250D658;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824f71b8
	ctx.lr = 0x8250D5FC;
	sub_824F71B8(ctx, base);
	// addi r30,r3,-8
	r30.s64 = ctx.r3.s64 + -8;
	// clrlwi r28,r23,17
	r28.u64 = r23.u32 & 0x7FFF;
	// addi r29,r27,40
	r29.s64 = r27.s64 + 40;
	// mr r31,r24
	r31.u64 = r24.u64;
loc_8250D60C:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825bb908
	ctx.lr = 0x8250D618;
	sub_825BB908(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8250D628;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8250D634;
	sub_8250AD28(ctx, base);
	// stwu r3,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r29.u32 = ea;
	// stw r21,-4(r14)
	REX_STORE_U32(r14.u32 + -4, r21.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// lwzx r11,r30,r14
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r14.u32);
	// rlwinm r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | r28.u64;
	// stwx r11,r30,r14
	REX_STORE_U32(r30.u32 + r14.u32, ctx.r11.u32);
	// bne 0x8250d60c
	if (!ctx.cr0.eq) goto loc_8250D60C;
	// lwz r14,84(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8250D658:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// bne cr6,0x8250d4d0
	if (!ctx.cr6.eq) goto loc_8250D4D0;
	// mr r22,r27
	r22.u64 = r27.u64;
	// b 0x8250d4d0
	goto loc_8250D4D0;
loc_8250D668:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8250d6b0
	if (ctx.cr6.eq) goto loc_8250D6B0;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8250d6b0
	if (ctx.cr6.eq) goto loc_8250D6B0;
	// addi r30,r29,40
	r30.s64 = r29.s64 + 40;
loc_8250D680:
	// lwzu r11,4(r30)
	ea = 4 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r28,12(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8250ac70
	ctx.lr = 0x8250D698;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8250D6A4;
	sub_8250AD28(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r24
	ctx.cr6.compare<uint32_t>(r31.u32, r24.u32, ctx.xer);
	// blt cr6,0x8250d680
	if (ctx.cr6.lt) goto loc_8250D680;
loc_8250D6B0:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// bne cr6,0x8250d6bc
	if (!ctx.cr6.eq) goto loc_8250D6BC;
	// mr r22,r29
	r22.u64 = r29.u64;
loc_8250D6BC:
	// lwz r11,8(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 8);
	// lwz r10,0(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 0);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// rlwinm r29,r10,19,28,31
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8250d788
	if (!ctx.cr6.eq) goto loc_8250D788;
	// lwz r28,44(r19)
	r28.u64 = REX_LOAD_U32(r19.u32 + 44);
	// li r30,0
	r30.s64 = 0;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250d810
	if (ctx.cr0.eq) goto loc_8250D810;
loc_8250D6E8:
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// andc r11,r29,r11
	ctx.r11.u64 = r29.u64 & ~ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// subf r29,r11,r29
	r29.u64 = r29.u64 - ctx.r11.u64;
	// subfic r27,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	r27.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// bl 0x82580638
	ctx.lr = 0x8250D70C;
	sub_82580638(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r20.u32, ctx.xer);
	// beq cr6,0x8250d748
	if (ctx.cr6.eq) goto loc_8250D748;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825bb908
	ctx.lr = 0x8250D72C;
	sub_825BB908(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8250D738;
	sub_8250AD28(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8250D744;
	sub_8250AB60(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8250D748:
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8250d890
	if (!ctx.cr6.lt) goto loc_8250D890;
	// addi r11,r27,11
	ctx.r11.s64 = r27.s64 + 11;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8250ad28
	ctx.lr = 0x8250D770;
	sub_8250AD28(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8250d6e8
	if (ctx.cr6.lt) goto loc_8250D6E8;
	// b 0x8250d810
	goto loc_8250D810;
loc_8250D788:
	// cmplwi cr6,r11,121
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 121, ctx.xer);
	// bne cr6,0x8250d798
	if (!ctx.cr6.eq) goto loc_8250D798;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// b 0x8250d79c
	goto loc_8250D79C;
loc_8250D798:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
loc_8250D79C:
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x825c1a18
	ctx.lr = 0x8250D7B4;
	sub_825C1A18(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825bb908
	ctx.lr = 0x8250D7C4;
	sub_825BB908(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8250ac70
	ctx.lr = 0x8250D7D8;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8250D7E4;
	sub_8250AD28(ctx, base);
	// cntlzw r11,r29
	ctx.r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// subfic r11,r11,42
	ctx.xer.ca = ctx.r11.u32 <= 42;
	ctx.r11.u64 = static_cast<uint64_t>(42) - ctx.r11.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	// lwz r31,12(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8250ab60
	ctx.lr = 0x8250D804;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8250D810;
	sub_8250AD28(ctx, base);
loc_8250D810:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8250b470
	ctx.lr = 0x8250D820;
	sub_8250B470(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825c2510
	ctx.lr = 0x8250D82C;
	sub_825C2510(ctx, base);
	// lbz r31,80(r1)
	r31.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
loc_8250D830:
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r18.u32, ctx.xer);
	// bne cr6,0x8250d2cc
	if (!ctx.cr6.eq) goto loc_8250D2CC;
	// addi r14,r18,4
	r14.s64 = r18.s64 + 4;
	// b 0x8250d2c8
	goto loc_8250D2C8;
loc_8250D844:
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8250d86c
	if (ctx.cr6.eq) goto loc_8250D86C;
loc_8250D850:
	// rlwinm r11,r16,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r16,r10,r11
	r16.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x8250d2ac
	goto loc_8250D2AC;
loc_8250D86C:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825c2288
	ctx.lr = 0x8250D880;
	sub_825C2288(ctx, base);
	// b 0x8250d294
	goto loc_8250D294;
loc_8250D884:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824e4368
	ctx.lr = 0x8250D890;
	sub_824E4368(ctx, base);
loc_8250D890:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824e4368
	ctx.lr = 0x8250D89C;
	sub_824E4368(ctx, base);
loc_8250D89C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82554970) {
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
	ctx.lr = 0x82554978;
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
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x825549A8;
	sub_825BB860(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ab60
	ctx.lr = 0x825549B8;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825549C4;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// beq cr6,0x825549e8
	if (ctx.cr6.eq) goto loc_825549E8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x825549E4;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_825549E8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825549F0;
	sub_8250AD28(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// rlwimi r10,r11,14,15,17
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1C000) | (ctx.r10.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bl 0x824ffc30
	ctx.lr = 0x82554A20;
	sub_824FFC30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8255CB70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8255CB78;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8255cd98
	if (ctx.cr6.eq) goto loc_8255CD98;
	// lwz r11,536(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 536);
	// li r29,-1
	r29.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8255cd98
	if (!ctx.cr6.gt) goto loc_8255CD98;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r7,r3,348
	ctx.r7.s64 = ctx.r3.s64 + 348;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r5,r11,-17852
	ctx.r5.s64 = ctx.r11.s64 + -17852;
loc_8255CBBC:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// clrlwi r6,r11,27
	ctx.r6.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r6,18
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 18, ctx.xer);
	// beq cr6,0x8255cc44
	if (ctx.cr6.eq) goto loc_8255CC44;
	// rlwinm. r11,r11,0,23,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255cc74
	if (!ctx.cr0.eq) goto loc_8255CC74;
	// slw r11,r3,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r6.u8 & 0x3F));
	// and. r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 & ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255cc80
	if (!ctx.cr0.eq) goto loc_8255CC80;
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// or r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 | ctx.r4.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r8,r9,18,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x7;
loc_8255CBF8:
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r28,r9,21,11,31
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0x1FFFFF;
	// cmplw cr6,r28,r6
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8255cc14
	if (!ctx.cr6.eq) goto loc_8255CC14;
	// rlwinm r9,r9,24,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x7;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8255cc28
	if (ctx.cr6.eq) goto loc_8255CC28;
loc_8255CC14:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8255cbf8
	if (ctx.cr6.lt) goto loc_8255CBF8;
	// b 0x8255cc3c
	goto loc_8255CC3C;
loc_8255CC28:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r5.u32);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// and r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 & r29.u64;
	// clrlwi r29,r10,25
	r29.u64 = ctx.r10.u32 & 0x7F;
loc_8255CC3C:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x8255cc8c
	if (ctx.cr6.eq) goto loc_8255CC8C;
loc_8255CC44:
	// lwz r11,536(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 536);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8255cbbc
	if (ctx.cr6.lt) goto loc_8255CBBC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8255cd98
	if (ctx.cr6.eq) goto loc_8255CD98;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8255cc98
	if (!ctx.cr6.eq) goto loc_8255CC98;
	// li r4,3543
	ctx.r4.s64 = 3543;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4368
	ctx.lr = 0x8255CC74;
	sub_824E4368(ctx, base);
loc_8255CC74:
	// li r4,3543
	ctx.r4.s64 = 3543;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4368
	ctx.lr = 0x8255CC80;
	sub_824E4368(ctx, base);
loc_8255CC80:
	// li r4,3543
	ctx.r4.s64 = 3543;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4368
	ctx.lr = 0x8255CC8C;
	sub_824E4368(ctx, base);
loc_8255CC8C:
	// li r4,3543
	ctx.r4.s64 = 3543;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4368
	ctx.lr = 0x8255CC98;
	sub_824E4368(ctx, base);
loc_8255CC98:
	// lis r8,-32120
	ctx.r8.s64 = -2105016320;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r31,r11,20052
	r31.s64 = ctx.r11.s64 + 20052;
	// lwz r11,20080(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 20080);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255cd00
	if (!ctx.cr0.eq) goto loc_8255CD00;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// stw r11,20080(r8)
	REX_STORE_U32(ctx.r8.u32 + 20080, ctx.r11.u32);
	// lis r11,2051
	ctx.r11.s64 = 134414336;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lis r9,5940
	ctx.r9.s64 = 389283840;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// lis r10,14116
	ctx.r10.s64 = 925106176;
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lis r9,5907
	ctx.r9.s64 = 387121152;
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// lis r11,6163
	ctx.r11.s64 = 403898368;
	// lis r10,6195
	ctx.r10.s64 = 405995520;
	// ori r9,r9,53760
	ctx.r9.u64 = ctx.r9.u64 | 53760;
	// ori r11,r11,49600
	ctx.r11.u64 = ctx.r11.u64 | 49600;
	// ori r10,r10,33248
	ctx.r10.u64 = ctx.r10.u64 | 33248;
	// stw r9,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
loc_8255CD00:
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// andc r11,r29,r11
	ctx.r11.u64 = r29.u64 & ~ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,544(r30)
	REX_STORE_U32(r30.u32 + 544, ctx.r11.u32);
	// lwzx r11,r10,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// rlwinm r7,r11,18,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1F;
	// rlwinm r10,r11,27,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1F;
	// slw r9,r3,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r7.u8 & 0x3F));
	// slw r10,r3,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r5,r11,9,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1F;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// slw r9,r3,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r5.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8255cd54
	if (ctx.cr6.eq) goto loc_8255CD54;
	// li r4,3543
	ctx.r4.s64 = 3543;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4368
	ctx.lr = 0x8255CD54;
	sub_824E4368(ctx, base);
loc_8255CD54:
	// rlwinm. r4,r11,4,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8255cd68
	if (ctx.cr0.eq) goto loc_8255CD68;
	// rlwinm r6,r11,13,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8255bb20
	ctx.lr = 0x8255CD68;
	sub_8255BB20(ctx, base);
loc_8255CD68:
	// lwz r11,544(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 544);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// rlwinm. r6,r11,22,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8255cd98
	if (ctx.cr0.eq) goto loc_8255CD98;
	// rlwinm r10,r11,23,9,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// rlwinm r7,r11,27,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1F;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r5,r11,9,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1F;
	// rlwinm r4,r10,13,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8255bb20
	ctx.lr = 0x8255CD98;
	sub_8255BB20(ctx, base);
loc_8255CD98:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8257ED30) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8257edb8
	if (ctx.cr6.eq) goto loc_8257EDB8;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x8257ed5c
	if (ctx.cr6.eq) goto loc_8257ED5C;
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8257edb8
	if (!ctx.cr6.eq) goto loc_8257EDB8;
loc_8257ED5C:
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8257edb8
	if (!ctx.cr6.eq) goto loc_8257EDB8;
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8257edb8
	if (!ctx.cr6.eq) goto loc_8257EDB8;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257ee94
	if (ctx.cr6.eq) goto loc_8257EE94;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x8257ee94
	if (!ctx.cr6.eq) goto loc_8257EE94;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8257edcc
	if (ctx.cr6.eq) goto loc_8257EDCC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8257edd0
	if (ctx.cr6.eq) goto loc_8257EDD0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8257edcc
	if (ctx.cr6.eq) goto loc_8257EDCC;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x8257edd4
	if (ctx.cr6.eq) goto loc_8257EDD4;
loc_8257EDB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257EDBC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8257EDCC:
	// li r8,1
	ctx.r8.s64 = 1;
loc_8257EDD0:
	// li r9,1
	ctx.r9.s64 = 1;
loc_8257EDD4:
	// lwz r11,32(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8257edb8
	if (!ctx.cr6.eq) goto loc_8257EDB8;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8257edb8
	if (!ctx.cr6.eq) goto loc_8257EDB8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// bne cr6,0x8257edb8
	if (!ctx.cr6.eq) goto loc_8257EDB8;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8257ee70
	if (ctx.cr6.eq) goto loc_8257EE70;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8257ee84
	if (ctx.cr6.eq) goto loc_8257EE84;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8257edb8
	if (!ctx.cr6.eq) goto loc_8257EDB8;
	// clrlwi. r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8257ee38
	if (!ctx.cr0.eq) goto loc_8257EE38;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f13,24(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// lfd f0,-3744(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8257edb8
	if (ctx.cr6.lt) goto loc_8257EDB8;
loc_8257EE38:
	// lfd f0,24(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// clrlwi. r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fctidz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bne 0x8257ee88
	if (!ctx.cr0.eq) goto loc_8257EE88;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
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
	// beq cr6,0x8257ee88
	if (ctx.cr6.eq) goto loc_8257EE88;
	// b 0x8257edb8
	goto loc_8257EDB8;
loc_8257EE70:
	// clrlwi. r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8257ee84
	if (!ctx.cr0.eq) goto loc_8257EE84;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8257edb8
	if (ctx.cr6.lt) goto loc_8257EDB8;
loc_8257EE84:
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
loc_8257EE88:
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8257edbc
	goto loc_8257EDBC;
loc_8257EE94:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// bl 0x824e4368
	ctx.lr = 0x8257EE9C;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_82582A90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82582A98;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,51
	ctx.r6.s64 = 51;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82582ABC;
	sub_825BB860(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82582ACC;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82582AD8;
	sub_8250AD28(ctx, base);
	// stw r3,44(r29)
	REX_STORE_U32(r29.u32 + 44, ctx.r3.u32);
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r10,r29,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
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
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82584B18) {
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
	ctx.lr = 0x82584B20;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
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
	// bl 0x8257ecd0
	ctx.lr = 0x82584B3C;
	sub_8257ECD0(ctx, base);
	// lwz r6,24(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825837c8
	ctx.lr = 0x82584B5C;
	sub_825837C8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x82584b8c
	if (!ctx.cr0.eq) goto loc_82584B8C;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b7e00
	ctx.lr = 0x82584B7C;
	sub_825B7E00(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3523
	ctx.r4.s64 = 3523;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x82584B8C;
	sub_824E4368(ctx, base);
loc_82584B8C:
	// clrlwi. r11,r28,28
	ctx.r11.u64 = r28.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82584bc0
	if (!ctx.cr0.eq) goto loc_82584BC0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b7e00
	ctx.lr = 0x82584BAC;
	sub_825B7E00(ctx, base);
	// rlwinm r6,r28,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 28) & 0xFFFFFFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3634
	ctx.r4.s64 = 3634;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x82584BC0;
	sub_824E4368(ctx, base);
loc_82584BC0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82588778) {
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
	ctx.lr = 0x82588780;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// std r5,256(r1)
	REX_STORE_U64(ctx.r1.u32 + 256, ctx.r5.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// mr r16,r8
	r16.u64 = ctx.r8.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r20,r11
	r20.u64 = ctx.r11.u64;
	// mr r17,r11
	r17.u64 = ctx.r11.u64;
	// li r28,0
	r28.s64 = 0;
	// li r21,4
	r21.s64 = 4;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// li r22,0
	r22.s64 = 0;
	// li r19,0
	r19.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82588940
	if (ctx.cr6.eq) goto loc_82588940;
loc_825887C8:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r30,4(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r27,8(r29)
	r27.u64 = REX_LOAD_U32(r29.u32 + 8);
	// bl 0x82580ab0
	ctx.lr = 0x825887DC;
	sub_82580AB0(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// add r23,r23,r18
	r23.u64 = r23.u64 + r18.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r30,4(r29)
	REX_STORE_U32(r29.u32 + 4, r30.u32);
	// stw r27,8(r29)
	REX_STORE_U32(r29.u32 + 8, r27.u32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8258881c
	if (!ctx.cr6.eq) goto loc_8258881C;
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// rlwinm r26,r10,30,18,31
	r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFF;
	// b 0x82588844
	goto loc_82588844;
loc_8258881C:
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x82588914
	if (!ctx.cr6.eq) goto loc_82588914;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,31,17,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFE;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,12(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r11,r9,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// clrlwi r27,r9,27
	r27.u64 = ctx.r9.u32 & 0x1F;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r26,r11,30
	r26.u64 = ctx.r11.u32 & 0x3;
loc_82588844:
	// rlwinm. r11,r27,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82588914
	if (!ctx.cr0.eq) goto loc_82588914;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// bne cr6,0x82588890
	if (!ctx.cr6.eq) goto loc_82588890;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x82588874;
	sub_824F71B8(ctx, base);
	// addi r11,r30,-8
	ctx.r11.s64 = r30.s64 + -8;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r10,r10,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82588914
	if (ctx.cr0.eq) goto loc_82588914;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825888c8
	goto loc_825888C8;
loc_82588890:
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// bne cr6,0x82588914
	if (!ctx.cr6.eq) goto loc_82588914;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x825888B0;
	sub_824F71B8(ctx, base);
	// addi r11,r30,-24
	ctx.r11.s64 = r30.s64 + -24;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r10,r10,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82588914
	if (ctx.cr0.eq) goto loc_82588914;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
loc_825888C8:
	// clrlwi r10,r11,17
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFF;
	// rlwinm r11,r11,17,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x3FFF;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x82588920
	if (ctx.cr6.eq) goto loc_82588920;
	// cmplwi cr6,r19,1
	ctx.cr6.compare<uint32_t>(r19.u32, 1, ctx.xer);
	// bne cr6,0x825888ec
	if (!ctx.cr6.eq) goto loc_825888EC;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82588914
	if (!ctx.cr6.lt) goto loc_82588914;
	// subf r22,r24,r11
	r22.u64 = ctx.r11.u64 - r24.u64;
loc_825888EC:
	// cmplw cr6,r20,r10
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82588914
	if (!ctx.cr6.eq) goto loc_82588914;
	// cmplw cr6,r17,r27
	ctx.cr6.compare<uint32_t>(r17.u32, r27.u32, ctx.xer);
	// bne cr6,0x82588914
	if (!ctx.cr6.eq) goto loc_82588914;
	// cmpw cr6,r21,r26
	ctx.cr6.compare<int32_t>(r21.s32, r26.s32, ctx.xer);
	// bne cr6,0x82588914
	if (!ctx.cr6.eq) goto loc_82588914;
	// mullw r10,r19,r22
	ctx.r10.s64 = int64_t(r19.s32) * int64_t(r22.s32);
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82588934
	if (ctx.cr6.eq) goto loc_82588934;
loc_82588914:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82588918:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd8
	return;
loc_82588920:
	// mr r28,r30
	r28.u64 = r30.u64;
	// mr r20,r10
	r20.u64 = ctx.r10.u64;
	// mr r17,r27
	r17.u64 = r27.u64;
	// mr r21,r26
	r21.u64 = r26.u64;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
loc_82588934:
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// cmplw cr6,r19,r25
	ctx.cr6.compare<uint32_t>(r19.u32, r25.u32, ctx.xer);
	// blt cr6,0x825887c8
	if (ctx.cr6.lt) goto loc_825887C8;
loc_82588940:
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82584ed0
	ctx.lr = 0x8258894C;
	sub_82584ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825816a0
	ctx.lr = 0x82588958;
	sub_825816A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82588964;
	sub_8250AB60(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r22,1
	ctx.cr6.compare<uint32_t>(r22.u32, 1, ctx.xer);
	// beq cr6,0x825889c8
	if (ctx.cr6.eq) goto loc_825889C8;
	// clrldi r10,r22,32
	ctx.r10.u64 = r22.u64 & 0xFFFFFFFF;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f4,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f4.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// bl 0x825bdd18
	ctx.lr = 0x825889A4;
	sub_825BDD18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x825862f8
	ctx.lr = 0x825889B8;
	sub_825862F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x825889C4;
	sub_8250AB60(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825889C8:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// li r27,1
	r27.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// bne cr6,0x82588af4
	if (!ctx.cr6.eq) goto loc_82588AF4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// rlwimi r11,r10,26,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwimi r11,r27,26,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 26) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x82581ee8
	ctx.lr = 0x825889FC;
	sub_82581EE8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82588A0C;
	sub_8250AB60(ctx, base);
	// rlwinm r11,r21,5,22,26
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 5) & 0x3E0;
	// lis r12,-3073
	ctx.r12.s64 = -201392128;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// ori r12,r12,64671
	ctx.r12.u64 = ctx.r12.u64 | 64671;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// ori r11,r11,7296
	ctx.r11.u64 = ctx.r11.u64 | 7296;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// li r6,118
	ctx.r6.s64 = 118;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r4,24
	ctx.r5.s64 = ctx.r4.s64 + 24;
	// bl 0x825bb860
	ctx.lr = 0x82588A54;
	sub_825BB860(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82588A60;
	sub_8250AD28(ctx, base);
	// stw r3,44(r26)
	REX_STORE_U32(r26.u32 + 44, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82503400
	ctx.lr = 0x82588A74;
	sub_82503400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82588A80;
	sub_8250AD28(ctx, base);
	// stw r3,48(r26)
	REX_STORE_U32(r26.u32 + 48, ctx.r3.u32);
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ff930
	ctx.lr = 0x82588A94;
	sub_824FF930(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwimi r25,r22,14,4,17
	r25.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 14) & 0xFFFC000) | (r25.u64 & 0xFFFFFFFFF0003FFF);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rlwimi r25,r9,0,0,3
	r25.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF0000000) | (r25.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r25,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r25.u32);
	// lwz r10,16(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 16);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,16(r26)
	REX_STORE_U32(r26.u32 + 16, ctx.r11.u32);
	// bl 0x8250ab60
	ctx.lr = 0x82588AC8;
	sub_8250AB60(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwimi r11,r27,3,27,31
	ctx.r11.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0x1F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// addi r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 + 24;
	// ori r5,r11,3
	ctx.r5.u64 = ctx.r11.u64 | 3;
	// bl 0x825c0e88
	ctx.lr = 0x82588AF0;
	sub_825C0E88(ctx, base);
	// b 0x82588c3c
	goto loc_82588C3C;
loc_82588AF4:
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// bne cr6,0x82588c90
	if (!ctx.cr6.eq) goto loc_82588C90;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,48(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 48);
	// bl 0x82580da0
	ctx.lr = 0x82588B08;
	sub_82580DA0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bba68
	ctx.lr = 0x82588B18;
	sub_825BBA68(ctx, base);
	// lwz r10,564(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 564);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// stw r10,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// lwz r10,564(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 564);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r10,-36
	ctx.r8.s64 = ctx.r10.s64 + -36;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r9,r11,-36
	ctx.r9.s64 = ctx.r11.s64 + -36;
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r4,44(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 44);
	// bl 0x8250ad28
	ctx.lr = 0x82588B68;
	sub_8250AD28(ctx, base);
	// stw r3,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ac70
	ctx.lr = 0x82588B7C;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82588B88;
	sub_8250AD28(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// stw r3,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15360
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15360, ctx.xer);
	// bne cr6,0x82588c2c
	if (!ctx.cr6.eq) goto loc_82588C2C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bba68
	ctx.lr = 0x82588BAC;
	sub_825BBA68(ctx, base);
	// lwz r10,564(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 564);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// stw r10,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// lwz r10,564(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 564);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r10,-36
	ctx.r8.s64 = ctx.r10.s64 + -36;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r9,r11,-36
	ctx.r9.s64 = ctx.r11.s64 + -36;
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82588c0c
	goto loc_82588C0C;
loc_82588C04:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_82588C0C:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82588c04
	if (!ctx.cr6.eq) goto loc_82588C04;
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
loc_82588C2C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82588C38;
	sub_8250AB60(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82588C3C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwimi r11,r17,0,27,31
	ctx.r11.u64 = (__builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0x1F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r28,8(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r31,4(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 4);
	// bl 0x82580ab0
	ctx.lr = 0x82588C5C;
	sub_82580AB0(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,8(r29)
	REX_STORE_U32(r29.u32 + 8, r28.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r31,4(r29)
	REX_STORE_U32(r29.u32 + 4, r31.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r10,r27,1,16,14
	ctx.r10.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFFFFFEFFFF) | (ctx.r10.u64 & 0x10000);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x82588918
	goto loc_82588918;
loc_82588C90:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x824e4368
	ctx.lr = 0x82588C98;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_825B67E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825B67F0;
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,22852
	r30.s64 = ctx.r11.s64 + 22852;
	// addi r29,r10,-2432
	r29.s64 = ctx.r10.s64 + -2432;
	// bne cr6,0x825b682c
	if (!ctx.cr6.eq) goto loc_825B682C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-9704
	ctx.r5.s64 = ctx.r11.s64 + -9704;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,203
	ctx.r7.s64 = 203;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B682C;
	sub_824EA978(ctx, base);
loc_825B682C:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x825b6854
	if (ctx.cr6.gt) goto loc_825B6854;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-2456
	ctx.r5.s64 = ctx.r11.s64 + -2456;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,204
	ctx.r7.s64 = 204;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B6854;
	sub_824EA978(ctx, base);
loc_825B6854:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// bne 0x825b6904
	if (!ctx.cr0.eq) goto loc_825B6904;
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r28,0(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825b6884
	if (ctx.cr6.eq) goto loc_825B6884;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B6884;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825B6884:
	// lwz r4,60(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825b68a0
	if (ctx.cr6.eq) goto loc_825B68A0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B68A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825B68A0:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825b68b0
	if (ctx.cr6.eq) goto loc_825B68B0;
	// bl 0x824effc8
	ctx.lr = 0x825B68B0;
	sub_824EFFC8(ctx, base);
loc_825B68B0:
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825b68c0
	if (ctx.cr6.eq) goto loc_825B68C0;
	// bl 0x824effc8
	ctx.lr = 0x825B68C0;
	sub_824EFFC8(ctx, base);
loc_825B68C0:
	// addi r30,r31,24
	r30.s64 = r31.s64 + 24;
	// li r29,6
	r29.s64 = 6;
loc_825B68C8:
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825b68e4
	if (ctx.cr6.eq) goto loc_825B68E4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B68E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825B68E4:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x825b68c8
	if (!ctx.cr0.eq) goto loc_825B68C8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B6904;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825B6904:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825B9F78) {
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
	ctx.lr = 0x825B9F80;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r27,1
	r27.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// li r9,228
	ctx.r9.s64 = 228;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// beq cr6,0x825b9fc4
	if (ctx.cr6.eq) goto loc_825B9FC4;
	// cmplwi cr6,r11,99
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 99, ctx.xer);
	// beq cr6,0x825b9fc4
	if (ctx.cr6.eq) goto loc_825B9FC4;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x825b9fc8
	if (!ctx.cr6.eq) goto loc_825B9FC8;
loc_825B9FC4:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_825B9FC8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ba010
	if (ctx.cr0.eq) goto loc_825BA010;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x825B9FE8;
	sub_824F71B8(ctx, base);
	// addi r11,r30,-24
	ctx.r11.s64 = r30.s64 + -24;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lbz r9,14(r8)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 14);
	// b 0x825ba084
	goto loc_825BA084;
loc_825BA010:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// oris r10,r10,3871
	ctx.r10.u64 = ctx.r10.u64 | 253689856;
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// ori r10,r10,61440
	ctx.r10.u64 = ctx.r10.u64 | 61440;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,98
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 98, ctx.xer);
	// beq cr6,0x825ba078
	if (ctx.cr6.eq) goto loc_825BA078;
	// cmplwi cr6,r10,101
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 101, ctx.xer);
	// beq cr6,0x825ba06c
	if (ctx.cr6.eq) goto loc_825BA06C;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// beq cr6,0x825ba060
	if (ctx.cr6.eq) goto loc_825BA060;
	// rlwinm r11,r30,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x824e4368
	ctx.lr = 0x825BA060;
	sub_824E4368(ctx, base);
loc_825BA060:
	// li r10,13
	ctx.r10.s64 = 13;
	// rlwimi r11,r10,1,27,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE0);
	// b 0x825ba080
	goto loc_825BA080;
loc_825BA06C:
	// li r10,25
	ctx.r10.s64 = 25;
	// rlwimi r11,r10,0,27,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE0);
	// b 0x825ba080
	goto loc_825BA080;
loc_825BA078:
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwimi r11,r10,3,27,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x1F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE0);
loc_825BA080:
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_825BA084:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// rlwinm r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825ba0a4
	if (!ctx.cr6.gt) goto loc_825BA0A4;
	// lwz r29,44(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 44);
	// lwz r7,48(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 48);
	// b 0x825ba0a8
	goto loc_825BA0A8;
loc_825BA0A4:
	// lwz r7,44(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 44);
loc_825BA0A8:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_825BA0AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ba274
	if (ctx.cr6.eq) goto loc_825BA274;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825ba0cc
	if (ctx.cr6.eq) goto loc_825BA0CC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r6,r10,0,4,6
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x825ba0d4
	if (!ctx.cr0.eq) goto loc_825BA0D4;
loc_825BA0CC:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825ba0ac
	goto loc_825BA0AC;
loc_825BA0D4:
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r6,r10,27,14,19
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3F000) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0FFF);
	// stw r6,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// andi. r10,r11,9
	ctx.r10.u64 = ctx.r11.u64 & 9;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825ba104
	if (ctx.cr0.eq) goto loc_825BA104;
	// rlwinm r11,r30,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x824e4368
	ctx.lr = 0x825BA104;
	sub_824E4368(ctx, base);
loc_825BA104:
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ba118
	if (ctx.cr0.eq) goto loc_825BA118;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_825BA118:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// beq 0x825ba13c
	if (ctx.cr0.eq) goto loc_825BA13C;
	// clrlwi r6,r9,30
	ctx.r6.u64 = ctx.r9.u32 & 0x3;
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// b 0x825ba140
	goto loc_825BA140;
loc_825BA13C:
	// ori r10,r10,7
	ctx.r10.u64 = ctx.r10.u64 | 7;
loc_825BA140:
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// beq 0x825ba15c
	if (ctx.cr0.eq) goto loc_825BA15C;
	// rlwimi r10,r9,1,27,28
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x18) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE7);
	// rlwinm r10,r10,0,27,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// b 0x825ba160
	goto loc_825BA160;
loc_825BA15C:
	// ori r10,r10,56
	ctx.r10.u64 = ctx.r10.u64 | 56;
loc_825BA160:
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// beq 0x825ba17c
	if (ctx.cr0.eq) goto loc_825BA17C;
	// rlwimi r10,r9,2,24,25
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF3F);
	// rlwinm r10,r10,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// b 0x825ba180
	goto loc_825BA180;
loc_825BA17C:
	// ori r10,r10,448
	ctx.r10.u64 = ctx.r10.u64 | 448;
loc_825BA180:
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// beq 0x825ba19c
	if (ctx.cr0.eq) goto loc_825BA19C;
	// rlwimi r11,r9,3,21,22
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x600) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF9FF);
	// rlwinm r11,r11,0,21,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// b 0x825ba1a0
	goto loc_825BA1A0;
loc_825BA19C:
	// ori r11,r11,3584
	ctx.r11.u64 = ctx.r11.u64 | 3584;
loc_825BA1A0:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x825ba280
	if (ctx.cr6.eq) goto loc_825BA280;
	// lwz r11,12(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ba208
	if (ctx.cr0.eq) goto loc_825BA208;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825ba1fc
	if (ctx.cr6.lt) goto loc_825BA1FC;
	// beq cr6,0x825ba1f0
	if (ctx.cr6.eq) goto loc_825BA1F0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x825ba1e4
	if (ctx.cr6.lt) goto loc_825BA1E4;
	// bne cr6,0x825ba208
	if (!ctx.cr6.eq) goto loc_825BA208;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r11,r27,11,20,22
	ctx.r11.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 11) & 0xE00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF1FF);
	// b 0x825ba204
	goto loc_825BA204;
loc_825BA1E4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r11,r27,8,23,25
	ctx.r11.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 8) & 0x1C0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFE3F);
	// b 0x825ba204
	goto loc_825BA204;
loc_825BA1F0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r11,r27,5,26,28
	ctx.r11.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 5) & 0x38) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC7);
	// b 0x825ba204
	goto loc_825BA204;
loc_825BA1FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r11,r27,2,29,31
	ctx.r11.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0x7) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF8);
loc_825BA204:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_825BA208:
	// lwz r11,12(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// rlwinm. r11,r11,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ba280
	if (ctx.cr0.eq) goto loc_825BA280;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825ba264
	if (ctx.cr6.lt) goto loc_825BA264;
	// beq cr6,0x825ba254
	if (ctx.cr6.eq) goto loc_825BA254;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x825ba244
	if (ctx.cr6.lt) goto loc_825BA244;
	// bne cr6,0x825ba280
	if (!ctx.cr6.eq) goto loc_825BA280;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwimi r11,r10,9,20,22
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xE00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF1FF);
	// b 0x825ba27c
	goto loc_825BA27C;
loc_825BA244:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwimi r11,r10,6,23,25
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1C0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFE3F);
	// b 0x825ba27c
	goto loc_825BA27C;
loc_825BA254:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwimi r11,r10,3,26,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x38) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC7);
	// b 0x825ba27c
	goto loc_825BA27C;
loc_825BA264:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwimi r11,r10,0,29,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF8);
	// b 0x825ba27c
	goto loc_825BA27C;
loc_825BA274:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ori r11,r11,4095
	ctx.r11.u64 = ctx.r11.u64 | 4095;
loc_825BA27C:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_825BA280:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x825ba2e0
	if (ctx.cr6.eq) goto loc_825BA2E0;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r10,r11,20,21,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7E0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF81F);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r10,r11,0,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825ba2b8
	if (ctx.cr0.eq) goto loc_825BA2B8;
	// rlwinm r11,r30,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x824e4368
	ctx.lr = 0x825BA2B8;
	sub_824E4368(ctx, base);
loc_825BA2B8:
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ba2cc
	if (ctx.cr0.eq) goto loc_825BA2CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_825BA2CC:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// rlwimi r10,r11,26,0,5
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xFC000000) | (ctx.r10.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_825BA2E0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825ba32c
	if (ctx.cr6.eq) goto loc_825BA32C;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r10,3,7,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x1F00000) | (ctx.r11.u64 & 0xFFFFFFFFFE0FFFFF);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r10,48(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 48);
	// rlwinm r10,r10,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x825ba32c
	if (ctx.cr6.eq) goto loc_825BA32C;
	// rlwinm r11,r11,0,7,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00000;
	// lis r10,320
	ctx.r10.s64 = 20971520;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825ba32c
	if (ctx.cr6.lt) goto loc_825BA32C;
	// lwz r11,56(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ba32c
	if (ctx.cr6.eq) goto loc_825BA32C;
	// stw r27,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r27.u32);
loc_825BA32C:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ba364
	if (ctx.cr0.eq) goto loc_825BA364;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm r11,r11,9,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFF;
	// rlwimi r10,r11,31,0,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// b 0x825ba380
	goto loc_825BA380;
loc_825BA364:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r10,r11,13,0,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwimi r9,r11,14,0,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
loc_825BA380:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825b8ed8
	ctx.lr = 0x825BA394;
	sub_825B8ED8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825D4260) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825D4268;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825d42a4
	if (!ctx.cr6.eq) goto loc_825D42A4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,5624
	ctx.r6.s64 = ctx.r11.s64 + 5624;
	// addi r5,r10,23184
	ctx.r5.s64 = ctx.r10.s64 + 23184;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,2744
	ctx.r7.s64 = 2744;
	// bl 0x824ea978
	ctx.lr = 0x825D42A4;
	sub_824EA978(ctx, base);
loc_825D42A4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825d42c0
	if (ctx.cr6.eq) goto loc_825D42C0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D42C0;
	sub_824F0950(ctx, base);
loc_825D42C0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825d42fc
	if (ctx.cr6.eq) goto loc_825D42FC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d42fc
	if (ctx.cr6.eq) goto loc_825D42FC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5728
	ctx.r4.s64 = ctx.r10.s64 + 5728;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,101
	ctx.r6.s64 = 101;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,404(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 404);
	// bctrl 
	ctx.lr = 0x825D42FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D42FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825D5FD8) {
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
	ctx.lr = 0x825D5FE0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,22852
	r28.s64 = ctx.r11.s64 + 22852;
	// addi r27,r10,5624
	r27.s64 = ctx.r10.s64 + 5624;
	// bne cr6,0x825d602c
	if (!ctx.cr6.eq) goto loc_825D602C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,23184
	ctx.r5.s64 = ctx.r11.s64 + 23184;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,4437
	ctx.r7.s64 = 4437;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D602C;
	sub_824EA978(ctx, base);
loc_825D602C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,91
	ctx.r4.s64 = 91;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825D603C;
	sub_824F05F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825D6050;
	sub_824F05F0(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r10,-27784
	ctx.r11.s64 = ctx.r10.s64 + -27784;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,-4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// beq cr6,0x825d60b0
	if (ctx.cr6.eq) goto loc_825D60B0;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(r30.u32, 3, ctx.xer);
	// beq cr6,0x825d60b0
	if (ctx.cr6.eq) goto loc_825D60B0;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// beq cr6,0x825d60a8
	if (ctx.cr6.eq) goto loc_825D60A8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825d60a8
	if (ctx.cr6.eq) goto loc_825D60A8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,1096
	ctx.r5.s64 = ctx.r11.s64 + 1096;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,4450
	ctx.r7.s64 = 4450;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D60A8;
	sub_824EA978(ctx, base);
loc_825D60A8:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x825d60b4
	goto loc_825D60B4;
loc_825D60B0:
	// li r11,2
	ctx.r11.s64 = 2;
loc_825D60B4:
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// oris r11,r11,75
	ctx.r11.u64 = ctx.r11.u64 | 4915200;
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | r31.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// beq cr6,0x825d6110
	if (ctx.cr6.eq) goto loc_825D6110;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x825d6110
	if (ctx.cr6.eq) goto loc_825D6110;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825d1a98
	ctx.lr = 0x825D60E4;
	sub_825D1A98(ctx, base);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5980
	ctx.r4.s64 = ctx.r10.s64 + 5980;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,89
	ctx.r6.s64 = 89;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r5,356(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 356);
	// bctrl 
	ctx.lr = 0x825D6110;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D6110:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_825E04A8) {
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
	// lwz r4,952(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 952);
	// lwz r3,80(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// bl 0x825fa4d0
	ctx.lr = 0x825E04C0;
	sub_825FA4D0(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x825e0504
	if (ctx.cr6.eq) goto loc_825E0504;
	// ble cr6,0x825e04fc
	if (!ctx.cr6.gt) goto loc_825E04FC;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// ble cr6,0x825e04f4
	if (!ctx.cr6.gt) goto loc_825E04F4;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// ble cr6,0x825e0504
	if (!ctx.cr6.gt) goto loc_825E0504;
	// cmpwi cr6,r3,42
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 42, ctx.xer);
	// ble cr6,0x825e04fc
	if (!ctx.cr6.gt) goto loc_825E04FC;
	// cmpwi cr6,r3,44
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 44, ctx.xer);
	// bgt cr6,0x825e04fc
	if (ctx.cr6.gt) goto loc_825E04FC;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x825e0508
	goto loc_825E0508;
loc_825E04F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825e0508
	goto loc_825E0508;
loc_825E04FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825e0508
	goto loc_825E0508;
loc_825E0504:
	// li r3,2
	ctx.r3.s64 = 2;
loc_825E0508:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825E4D48) {
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
	ctx.lr = 0x825E4D50;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,172(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825e4dcc
	if (ctx.cr6.eq) goto loc_825E4DCC;
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e4dcc
	if (ctx.cr0.eq) goto loc_825E4DCC;
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// lwz r10,228(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// rlwinm. r10,r10,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// beq 0x825e4db4
	if (ctx.cr0.eq) goto loc_825E4DB4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,11616
	ctx.r6.s64 = ctx.r11.s64 + 11616;
	// addi r5,r10,13392
	ctx.r5.s64 = ctx.r10.s64 + 13392;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,2813
	ctx.r7.s64 = 2813;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E4DB4;
	sub_824EA978(ctx, base);
loc_825E4DB4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,2736(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 2736);
	// bl 0x82607f18
	ctx.lr = 0x825E4DC0;
	sub_82607F18(ctx, base);
	// stw r3,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// lwz r11,128(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 128);
	// b 0x825e4de0
	goto loc_825E4DE0;
loc_825E4DCC:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// lwz r11,11192(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 11192);
loc_825E4DE0:
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4118
	ctx.lr = 0x825E4DF8;
	sub_825E4118(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825EAAA8) {
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
	// bl 0x825ea8f0
	ctx.lr = 0x825EAACC;
	sub_825EA8F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7a90
	ctx.lr = 0x825EAAD8;
	sub_825F7A90(ctx, base);
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

DEFINE_REX_FUNC(sub_825ED5F8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825EDC98) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,9944
	ctx.r11.s64 = ctx.r11.s64 + 9944;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// beq 0x825edcd8
	if (ctx.cr0.eq) goto loc_825EDCD8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825edcd8
	if (ctx.cr6.eq) goto loc_825EDCD8;
	// addi r4,r3,-4
	ctx.r4.s64 = ctx.r3.s64 + -4;
	// lwz r3,-4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// bl 0x825b3528
	ctx.lr = 0x825EDCD8;
	sub_825B3528(ctx, base);
loc_825EDCD8:
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

DEFINE_REX_FUNC(sub_825F1AD8) {
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
	ctx.lr = 0x825F1AE0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// lwz r8,128(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r7,12(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lwzx r29,r9,r3
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// li r26,1
	r26.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
loc_825F1B20:
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825f1b3c
	if (ctx.cr0.eq) goto loc_825F1B3C;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// b 0x825f1b40
	goto loc_825F1B40;
loc_825F1B3C:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_825F1B40:
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// stbx r11,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x825f1b20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825F1B20;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F1B6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825f1da4
	if (ctx.cr0.eq) goto loc_825F1DA4;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-21368
	ctx.r10.s64 = ctx.r10.s64 + -21368;
	// mulli r9,r11,52
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm. r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825f1c28
	if (ctx.cr0.eq) goto loc_825F1C28;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F1BA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x825f1c20
	if (ctx.cr6.eq) goto loc_825F1C20;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x825f1bd4
	if (ctx.cr6.eq) goto loc_825F1BD4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,17472
	ctx.r6.s64 = ctx.r11.s64 + 17472;
	// addi r5,r10,19324
	ctx.r5.s64 = ctx.r10.s64 + 19324;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,639
	ctx.r7.s64 = 639;
	// b 0x825f1c14
	goto loc_825F1C14;
loc_825F1BD4:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// beq cr6,0x825f1c20
	if (ctx.cr6.eq) goto loc_825F1C20;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r10,r10,17152
	ctx.r10.s64 = ctx.r10.s64 + 17152;
	// lwzx r30,r11,r10
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// beq cr6,0x825f1ec4
	if (ctx.cr6.eq) goto loc_825F1EC4;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r4,r7,22852
	ctx.r4.s64 = ctx.r7.s64 + 22852;
	// addi r6,r9,17472
	ctx.r6.s64 = ctx.r9.s64 + 17472;
	// addi r5,r8,19324
	ctx.r5.s64 = ctx.r8.s64 + 19324;
	// li r7,635
	ctx.r7.s64 = 635;
loc_825F1C14:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825F1C1C;
	sub_824EA978(ctx, base);
	// b 0x825f1ec4
	goto loc_825F1EC4;
loc_825F1C20:
	// lbz r11,83(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// b 0x825f1e9c
	goto loc_825F1E9C;
loc_825F1C28:
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// beq cr6,0x825f1d68
	if (ctx.cr6.eq) goto loc_825F1D68;
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// beq cr6,0x825f1d2c
	if (ctx.cr6.eq) goto loc_825F1D2C;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// beq cr6,0x825f1cf0
	if (ctx.cr6.eq) goto loc_825F1CF0;
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// beq cr6,0x825f1d2c
	if (ctx.cr6.eq) goto loc_825F1D2C;
	// cmpwi cr6,r11,133
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 133, ctx.xer);
	// ble cr6,0x825f1c58
	if (!ctx.cr6.gt) goto loc_825F1C58;
	// cmpwi cr6,r11,135
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 135, ctx.xer);
	// ble cr6,0x825f1d2c
	if (!ctx.cr6.gt) goto loc_825F1D2C;
loc_825F1C58:
	// lbz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r9,r11,17152
	ctx.r9.s64 = ctx.r11.s64 + 17152;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825f1c7c
	if (!ctx.cr0.eq) goto loc_825F1C7C;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x825f1c80
	goto loc_825F1C80;
loc_825F1C7C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825F1C80:
	// lbz r11,85(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 85);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825f1c9c
	if (!ctx.cr0.eq) goto loc_825F1C9C;
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x825f1ca0
	goto loc_825F1CA0;
loc_825F1C9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825F1CA0:
	// lbz r8,86(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 86);
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne 0x825f1cc0
	if (!ctx.cr0.eq) goto loc_825F1CC0;
	// lbz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x825f1cc4
	goto loc_825F1CC4;
loc_825F1CC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825F1CC4:
	// lbz r8,87(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne 0x825f1ce4
	if (!ctx.cr0.eq) goto loc_825F1CE4;
	// lbz r11,83(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x825f1ce8
	goto loc_825F1CE8;
loc_825F1CE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825F1CE8:
	// or r30,r11,r10
	r30.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x825f1ec4
	goto loc_825F1EC4;
loc_825F1CF0:
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// li r30,0
	r30.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r10,r10,17152
	ctx.r10.s64 = ctx.r10.s64 + 17152;
loc_825F1D0C:
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lbzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// or r30,r9,r30
	r30.u64 = ctx.r9.u64 | r30.u64;
	// bdnz 0x825f1d0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825F1D0C;
	// b 0x825f1ec4
	goto loc_825F1EC4;
loc_825F1D2C:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// li r30,0
	r30.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r10,r10,17152
	ctx.r10.s64 = ctx.r10.s64 + 17152;
loc_825F1D48:
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lbzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// or r30,r9,r30
	r30.u64 = ctx.r9.u64 | r30.u64;
	// bdnz 0x825f1d48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825F1D48;
	// b 0x825f1ec4
	goto loc_825F1EC4;
loc_825F1D68:
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// li r30,0
	r30.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r10,r10,17152
	ctx.r10.s64 = ctx.r10.s64 + 17152;
loc_825F1D84:
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lbzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// or r30,r9,r30
	r30.u64 = ctx.r9.u64 | r30.u64;
	// bdnz 0x825f1d84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825F1D84;
	// b 0x825f1ec4
	goto loc_825F1EC4;
loc_825F1DA4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F1DB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825f1eb0
	if (ctx.cr0.eq) goto loc_825F1EB0;
	// lwz r10,176(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 176);
	// lwz r11,88(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 88);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825f1e98
	if (ctx.cr6.eq) goto loc_825F1E98;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x825f1e74
	if (ctx.cr6.eq) goto loc_825F1E74;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x825f1e40
	if (ctx.cr6.eq) goto loc_825F1E40;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x825f1dfc
	if (ctx.cr6.eq) goto loc_825F1DFC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x825f1e74
	if (ctx.cr6.eq) goto loc_825F1E74;
loc_825F1DFC:
	// lbz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lbz r9,81(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r10,r10,17152
	ctx.r10.s64 = ctx.r10.s64 + 17152;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lbz r7,83(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// rotlwi r8,r8,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// lwzx r10,r7,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// b 0x825f1ce8
	goto loc_825F1CE8;
loc_825F1E40:
	// lbz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lbz r9,81(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r10,r10,17152
	ctx.r10.s64 = ctx.r10.s64 + 17152;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// rotlwi r8,r8,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// b 0x825f1ce8
	goto loc_825F1CE8;
loc_825F1E74:
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lbz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r10,r10,17152
	ctx.r10.s64 = ctx.r10.s64 + 17152;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x825f1ce8
	goto loc_825F1CE8;
loc_825F1E98:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
loc_825F1E9C:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r10,r10,17152
	ctx.r10.s64 = ctx.r10.s64 + 17152;
	// lwzx r30,r11,r10
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x825f1ec4
	goto loc_825F1EC4;
loc_825F1EB0:
	// stb r26,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, r26.u8);
	// stb r26,89(r1)
	REX_STORE_U8(ctx.r1.u32 + 89, r26.u8);
	// stb r26,90(r1)
	REX_STORE_U8(ctx.r1.u32 + 90, r26.u8);
	// stb r26,91(r1)
	REX_STORE_U8(ctx.r1.u32 + 91, r26.u8);
	// lwz r30,88(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_825F1EC4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8260B088) {
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
	ctx.lr = 0x8260B090;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// li r28,0
	r28.s64 = 0;
	// li r30,0
	r30.s64 = 0;
loc_8260B0AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x8260ae78
	ctx.lr = 0x8260B0B8;
	sub_8260AE78(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne 0x8260b0d4
	if (!ctx.cr0.eq) goto loc_8260B0D4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8260b0ac
	if (ctx.cr6.lt) goto loc_8260B0AC;
loc_8260B0D4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8260b1a8
	if (!ctx.cr6.eq) goto loc_8260B1A8;
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x823f02b8
	ctx.lr = 0x8260B0EC;
	sub_823F02B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8260b1a8
	if (ctx.cr0.eq) goto loc_8260B1A8;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8260ae10
	ctx.lr = 0x8260B108;
	sub_8260AE10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// blt 0x8260b1a0
	if (ctx.cr0.lt) goto loc_8260B1A0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x8260B124;
	sub_823F02B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8260b188
	if (ctx.cr0.eq) goto loc_8260B188;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x8260B140;
	sub_826A1E70(ctx, base);
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x823f0350
	ctx.lr = 0x8260B14C;
	sub_823F0350(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r28,0
	r28.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x8260b16c
	if (!ctx.cr6.lt) goto loc_8260B16C;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_8260B16C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8260ae78
	ctx.lr = 0x8260B174;
	sub_8260AE78(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// b 0x8260b1a8
	goto loc_8260B1A8;
loc_8260B188:
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x823f0350
	ctx.lr = 0x8260B194;
	sub_823F0350(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_8260B1A0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823f0350
	ctx.lr = 0x8260B1A8;
	sub_823F0350(ctx, base);
loc_8260B1A8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8260b1c0
	if (ctx.cr6.eq) goto loc_8260B1C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
loc_8260B1C0:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_826110E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826110E8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r11,-13532
	r29.s64 = ctx.r11.s64 + -13532;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827938a4
	ctx.lr = 0x82611100;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ble cr6,0x826111e8
	if (!ctx.cr6.gt) goto loc_826111E8;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r30,16
	r30.s64 = 16;
	// li r3,32
	ctx.r3.s64 = 32;
loc_82611120:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,64(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm. r9,r10,0,10,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x300000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x826111ac
	if (ctx.cr0.eq) goto loc_826111AC;
	// lwz r8,68(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// rlwinm. r10,r10,18,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1F00;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// ble 0x82611164
	if (!ctx.cr0.gt) goto loc_82611164;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82611158:
	// dcbf r9,r8
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// bdnz 0x82611158
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82611158;
loc_82611164:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8261117c
	if (ctx.cr6.eq) goto loc_8261117C;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r6,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r6.u32);
loc_8261117C:
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82611194
	if (ctx.cr6.eq) goto loc_82611194;
	// lvx128 v63,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r7,r30
	ea = (ctx.r7.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r6,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
loc_82611194:
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826111ac
	if (ctx.cr6.eq) goto loc_826111AC;
	// lvx128 v63,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r6,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r6.u32);
loc_826111AC:
	// lhz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r11,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addis r9,r9,8187
	ctx.r9.s64 = ctx.r9.s64 + 536543232;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r9,r9,-31152
	ctx.r9.s64 = ctx.r9.s64 + -31152;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwbrx r11,0,r10
	REX_MM_STORE_U32(ctx.r10.u32, __builtin_bswap32(ctx.r11.u32));
	// eieio 
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,96
	ctx.r5.s64 = ctx.r5.s64 + 96;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82611120
	if (ctx.cr6.lt) goto loc_82611120;
loc_826111E8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r11,r11,0,15,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bl 0x827938b4
	ctx.lr = 0x826111FC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82618BB8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82617fc0
	sub_82617FC0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82618C90) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r11,-13880
	ctx.r11.s64 = ctx.r11.s64 + -13880;
	// addi r10,r10,-13900
	ctx.r10.s64 = ctx.r10.s64 + -13900;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// bl 0x82618bc0
	ctx.lr = 0x82618CC0;
	sub_82618BC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82629cd8
	ctx.lr = 0x82618CC8;
	sub_82629CD8(ctx, base);
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

DEFINE_REX_FUNC(sub_8261BAE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8261BAE8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261BB10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 132);
	// li r7,12
	ctx.r7.s64 = 12;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261BB34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261BB50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82621890) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lhz r11,580(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 580);
	// li r4,0
	ctx.r4.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82621968
	if (!ctx.cr6.gt) goto loc_82621968;
	// li r5,0
	ctx.r5.s64 = 0;
loc_826218B0:
	// lwz r11,584(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 584);
	// lwz r10,320(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// lwz r9,176(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lhzx r8,r5,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r11.u32);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// mulli r11,r6,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x82621950
	if (!ctx.cr6.eq) goto loc_82621950;
	// lwz r10,460(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 460);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826218f0
	if (ctx.cr6.eq) goto loc_826218F0;
	// lwz r10,256(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r9,456(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x82621908
	goto loc_82621908;
loc_826218F0:
	// lwz r10,448(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,256(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// beq cr6,0x82621908
	if (ctx.cr6.eq) goto loc_82621908;
	// lwz r9,456(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
loc_82621908:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r31,116(r11)
	r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 116);
	// lwz r7,140(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// add r30,r10,r9
	r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,324(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 324);
	// extsh r9,r31
	ctx.r9.s64 = r31.s16;
	// srawi r31,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	r31.s64 = r30.s32 >> 1;
	// add r30,r7,r9
	r30.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addze r31,r31
	temp.s64 = r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r31.u32;
	r31.s64 = temp.s64;
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// sth r30,116(r11)
	REX_STORE_U16(ctx.r11.u32 + 116, r30.u16);
	// mullw r10,r31,r6
	ctx.r10.s64 = int64_t(r31.s32) * int64_t(ctx.r6.s32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r10,144(r11)
	REX_STORE_U32(ctx.r11.u32 + 144, ctx.r10.u32);
loc_82621950:
	// lhz r11,580(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 580);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826218b0
	if (ctx.cr6.lt) goto loc_826218B0;
loc_82621968:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826285B8) {
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
	ctx.lr = 0x826285C0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// li r26,0
	r26.s64 = 0;
	// bl 0x826277b8
	ctx.lr = 0x826285E4;
	sub_826277B8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823eea88
	ctx.lr = 0x826285EC;
	sub_823EEA88(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82628608
	if (!ctx.cr6.eq) goto loc_82628608;
	// addi r11,r27,-1
	ctx.r11.s64 = r27.s64 + -1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	r31.u64 = ctx.r11.u64 & r31.u64;
loc_82628608:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x82628634
	if (ctx.cr6.eq) goto loc_82628634;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82628630;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826286b8
	goto loc_826286B8;
loc_82628634:
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,20576
	ctx.r3.s64 = ctx.r11.s64 + 20576;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// addi r4,r28,24
	ctx.r4.s64 = r28.s64 + 24;
	// bl 0x8260b5b8
	ctx.lr = 0x82628650;
	sub_8260B5B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82628664
	if (!ctx.cr0.eq) goto loc_82628664;
	// lis r26,-32761
	r26.s64 = -2147024896;
	// ori r26,r26,14
	r26.u64 = r26.u64 | 14;
	// b 0x826286b8
	goto loc_826286B8;
loc_82628664:
	// addic r11,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	ctx.r11.s64 = r29.s64 + -1;
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// subfe r9,r11,r29
	temp.u8 = (~ctx.r11.u32 + r29.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r29.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r27,16(r31)
	REX_STORE_U32(r31.u32 + 16, r27.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r28,20(r31)
	REX_STORE_U32(r31.u32 + 20, r28.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x826a1e70
	ctx.lr = 0x8262869C;
	sub_826A1E70(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// bl 0x82628898
	ctx.lr = 0x826286A8;
	sub_82628898(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bge 0x826286b8
	if (!ctx.cr0.lt) goto loc_826286B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x826286B8;
	sub_8264C3D0(ctx, base);
loc_826286B8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82634B20) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// bne cr6,0x82634b60
	if (!ctx.cr6.eq) goto loc_82634B60;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82634B2C:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82634b3c
	if (ctx.cr6.eq) goto loc_82634B3C;
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x82634b80
	if (!ctx.cr6.eq) goto loc_82634B80;
loc_82634B3C:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r8,r9,-5836
	ctx.r8.s64 = ctx.r9.s64 + -5836;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r11,-3
	ctx.r7.s64 = ctx.r11.s64 + -3;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r6,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// blr 
	return;
loc_82634B60:
	// cmplwi cr6,r4,16
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16, ctx.xer);
	// bne cr6,0x82634b70
	if (!ctx.cr6.eq) goto loc_82634B70;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82634b2c
	goto loc_82634B2C;
loc_82634B70:
	// cmplwi cr6,r4,32
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32, ctx.xer);
	// bne cr6,0x82634b80
	if (!ctx.cr6.eq) goto loc_82634B80;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82634b2c
	goto loc_82634B2C;
loc_82634B80:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82635E80) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,444(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82635f04
	if (ctx.cr6.eq) goto loc_82635F04;
	// lwz r11,456(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// lhz r10,118(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 118);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lhz r8,122(r4)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + 122);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// lhz r6,124(r4)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r4.u32 + 124);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r11,126(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 126);
	// sraw r10,r7,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r10.s64 = ctx.r7.s32 >> temp.u32;
	// sth r10,120(r4)
	REX_STORE_U16(ctx.r4.u32 + 120, ctx.r10.u16);
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// lwz r8,456(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// sraw r7,r5,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r7.s64 = ctx.r5.s32 >> temp.u32;
	// stw r7,140(r4)
	REX_STORE_U32(ctx.r4.u32 + 140, ctx.r7.u32);
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// lwz r5,456(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// sraw r10,r9,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r10.s64 = ctx.r9.s32 >> temp.u32;
	// sth r10,122(r4)
	REX_STORE_U16(ctx.r4.u32 + 122, ctx.r10.u16);
	// lwz r9,456(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// sraw r5,r8,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r5.s64 = ctx.r8.s32 >> temp.u32;
	// sth r5,124(r4)
	REX_STORE_U16(ctx.r4.u32 + 124, ctx.r5.u16);
	// lwz r3,456(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// sraw r10,r6,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r10.s64 = ctx.r6.s32 >> temp.u32;
	// sth r10,126(r4)
	REX_STORE_U16(ctx.r4.u32 + 126, ctx.r10.u16);
	// blr 
	return;
loc_82635F04:
	// lwz r11,448(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r11,118(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 118);
	// beq cr6,0x82635f7c
	if (ctx.cr6.eq) goto loc_82635F7C;
	// lwz r10,456(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lhz r8,122(r4)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + 122);
	// slw r6,r9,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// sth r6,120(r4)
	REX_STORE_U16(ctx.r4.u32 + 120, ctx.r6.u16);
	// lhz r7,124(r4)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + 124);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// lhz r5,126(r4)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + 126);
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lwz r7,456(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// slw r6,r9,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// stw r6,140(r4)
	REX_STORE_U32(ctx.r4.u32 + 140, ctx.r6.u32);
	// lwz r11,456(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// slw r7,r10,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// sth r7,122(r4)
	REX_STORE_U16(ctx.r4.u32 + 122, ctx.r7.u16);
	// lwz r11,456(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// slw r9,r8,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// sth r9,124(r4)
	REX_STORE_U16(ctx.r4.u32 + 124, ctx.r9.u16);
	// lwz r7,456(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// slw r5,r5,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// sth r5,126(r4)
	REX_STORE_U16(ctx.r4.u32 + 126, ctx.r5.u16);
	// blr 
	return;
loc_82635F7C:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// sth r11,120(r4)
	REX_STORE_U16(ctx.r4.u32 + 120, ctx.r11.u16);
	// stw r10,140(r4)
	REX_STORE_U32(ctx.r4.u32 + 140, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8263C4D8) {
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
	// std r4,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// li r31,0
	r31.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8263c574
	if (ctx.cr6.eq) goto loc_8263C574;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8263c538
	if (ctx.cr6.eq) goto loc_8263C538;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8263c520
	if (ctx.cr6.eq) goto loc_8263C520;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,87
	r31.u64 = r31.u64 | 87;
	// b 0x8263c578
	goto loc_8263C578;
loc_8263C520:
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r10,10404
	ctx.r3.s64 = ctx.r10.s64 + 10404;
	// rlwinm r4,r11,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// bl 0x8263c458
	ctx.lr = 0x8263C534;
	sub_8263C458(ctx, base);
	// b 0x8263c578
	goto loc_8263C578;
loc_8263C538:
	// subfic r11,r6,24
	ctx.xer.ca = ctx.r6.u32 <= 24;
	ctx.r11.u64 = static_cast<uint64_t>(24) - ctx.r6.u64;
	// lwz r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8263c55c
	if (ctx.cr6.lt) goto loc_8263C55C;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// slw r4,r10,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r3,r9,10404
	ctx.r3.s64 = ctx.r9.s64 + 10404;
	// bl 0x8263c458
	ctx.lr = 0x8263C558;
	sub_8263C458(ctx, base);
	// b 0x8263c578
	goto loc_8263C578;
loc_8263C55C:
	// neg r9,r11
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// sraw r4,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r4.s64 = ctx.r10.s32 >> temp.u32;
	// addi r3,r8,10404
	ctx.r3.s64 = ctx.r8.s64 + 10404;
	// bl 0x8263c458
	ctx.lr = 0x8263C570;
	sub_8263C458(ctx, base);
	// b 0x8263c578
	goto loc_8263C578;
loc_8263C574:
	// lwz r3,136(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
loc_8263C578:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8263c584
	if (ctx.cr6.eq) goto loc_8263C584;
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_8263C584:
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

DEFINE_REX_FUNC(sub_82641C88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82641C90;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// li r29,0
	r29.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82641ccc
	if (ctx.cr6.eq) goto loc_82641CCC;
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 132);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82641CC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82641cdc
	if (ctx.cr0.lt) goto loc_82641CDC;
loc_82641CCC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r29,148(r31)
	REX_STORE_U32(r31.u32 + 148, r29.u32);
	// bne cr6,0x82641cdc
	if (!ctx.cr6.eq) goto loc_82641CDC;
	// stw r29,152(r31)
	REX_STORE_U32(r31.u32 + 152, r29.u32);
loc_82641CDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826424D0) {
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
	ctx.lr = 0x826424D8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// bl 0x8264c468
	ctx.lr = 0x826424F4;
	sub_8264C468(ctx, base);
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// ori r23,r11,14
	r23.u64 = ctx.r11.u64 | 14;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82642554
	if (ctx.cr6.eq) goto loc_82642554;
loc_8264250C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// blt cr6,0x82642554
	if (ctx.cr6.lt) goto loc_82642554;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,4(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 4);
	// bl 0x82625828
	ctx.lr = 0x82642520;
	sub_82625828(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r27,16
	ctx.r3.s64 = r27.s64 + 16;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82625a70
	ctx.lr = 0x82642530;
	sub_82625A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82642668
	if (ctx.cr0.eq) goto loc_82642668;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r25,0
	r25.s64 = 0;
	// bl 0x826417e8
	ctx.lr = 0x82642544;
	sub_826417E8(ctx, base);
loc_82642544:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// blt cr6,0x8264250c
	if (ctx.cr6.lt) goto loc_8264250C;
loc_82642554:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x826425ac
	if (ctx.cr6.eq) goto loc_826425AC;
	// mr r31,r28
	r31.u64 = r28.u64;
loc_82642564:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// blt cr6,0x826426dc
	if (ctx.cr6.lt) goto loc_826426DC;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,4(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 4);
	// bl 0x82625828
	ctx.lr = 0x82642578;
	sub_82625828(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r27,56
	ctx.r3.s64 = r27.s64 + 56;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82625a70
	ctx.lr = 0x82642588;
	sub_82625A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82642670
	if (ctx.cr0.eq) goto loc_82642670;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r25,0
	r25.s64 = 0;
	// bl 0x826417e8
	ctx.lr = 0x8264259C;
	sub_826417E8(ctx, base);
loc_8264259C:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(r29.u32, r24.u32, ctx.xer);
	// blt cr6,0x82642564
	if (ctx.cr6.lt) goto loc_82642564;
loc_826425AC:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// blt cr6,0x826426dc
	if (ctx.cr6.lt) goto loc_826426DC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826422b8
	ctx.lr = 0x826425BC;
	sub_826422B8(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// blt 0x826426dc
	if (ctx.cr0.lt) goto loc_826426DC;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// li r29,-1
	r29.s64 = -1;
	// ori r30,r11,65535
	r30.u64 = ctx.r11.u64 | 65535;
	// rlwinm r4,r26,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(r26.u32, r30.u32, ctx.xer);
	// ble cr6,0x826425e0
	if (!ctx.cr6.gt) goto loc_826425E0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_826425E0:
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// addi r31,r11,20576
	r31.s64 = ctx.r11.s64 + 20576;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260b5b8
	ctx.lr = 0x826425FC;
	sub_8260B5B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,120(r27)
	REX_STORE_U32(r27.u32 + 120, ctx.r3.u32);
	// beq 0x82642678
	if (ctx.cr0.eq) goto loc_82642678;
	// cmplw cr6,r24,r30
	ctx.cr6.compare<uint32_t>(r24.u32, r30.u32, ctx.xer);
	// rlwinm r4,r24,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82642618
	if (!ctx.cr6.gt) goto loc_82642618;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82642618:
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// bl 0x8260b5b8
	ctx.lr = 0x8264262C;
	sub_8260B5B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,124(r27)
	REX_STORE_U32(r27.u32 + 124, ctx.r3.u32);
	// beq 0x82642678
	if (ctx.cr0.eq) goto loc_82642678;
	// lwz r9,40(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 40);
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82642698
	if (ctx.cr6.eq) goto loc_82642698;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
loc_82642650:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82642680
	if (ctx.cr6.eq) goto loc_82642680;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82642684
	goto loc_82642684;
loc_82642668:
	// mr r25,r23
	r25.u64 = r23.u64;
	// b 0x82642544
	goto loc_82642544;
loc_82642670:
	// mr r25,r23
	r25.u64 = r23.u64;
	// b 0x8264259c
	goto loc_8264259C;
loc_82642678:
	// mr r25,r23
	r25.u64 = r23.u64;
	// b 0x826426dc
	goto loc_826426DC;
loc_82642680:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82642684:
	// lwz r8,120(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 120);
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// stwx r11,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82642650
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82642650;
loc_82642698:
	// lwz r9,80(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 80);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x826426dc
	if (ctx.cr6.eq) goto loc_826426DC;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
loc_826426AC:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826426c4
	if (ctx.cr6.eq) goto loc_826426C4;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x826426c8
	goto loc_826426C8;
loc_826426C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826426C8:
	// lwz r8,124(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 124);
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// stwx r11,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826426ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826426AC;
loc_826426DC:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8264DC88) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82794164
	ctx.lr = 0x8264DCA8;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8264dd1c
	if (!ctx.cr0.eq) goto loc_8264DD1C;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ori r4,r4,17
	ctx.r4.u64 = ctx.r4.u64 | 17;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x827937c4
	ctx.lr = 0x8264DCE0;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8264dcf0
	if (!ctx.cr0.lt) goto loc_8264DCF0;
	// li r31,1627
	r31.s64 = 1627;
	// b 0x8264dd14
	goto loc_8264DD14;
loc_8264DCF0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8264dd10
	if (!ctx.cr6.eq) goto loc_8264DD10;
	// bl 0x823f0058
	ctx.lr = 0x8264DCFC;
	sub_823F0058(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r10
	r31.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8264dd14
	goto loc_8264DD14;
loc_8264DD10:
	// li r31,997
	r31.s64 = 997;
loc_8264DD14:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82793974
	ctx.lr = 0x8264DD1C;
	__imp__ObDereferenceObject(ctx, base);
loc_8264DD1C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_8264FAD8) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r6,16(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8264f740
	ctx.lr = 0x8264FAF8;
	sub_8264F740(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82650370) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// rlwinm. r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826503d8
	if (ctx.cr6.eq) goto loc_826503D8;
	// bne 0x8265041c
	if (!ctx.cr0.eq) goto loc_8265041C;
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826503b8
	if (ctx.cr0.eq) goto loc_826503B8;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x8264c870
	ctx.lr = 0x826503B8;
	sub_8264C870(ctx, base);
loc_826503B8:
	// lwz r3,400(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 400);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826503cc
	if (ctx.cr6.eq) goto loc_826503CC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8265d6d0
	ctx.lr = 0x826503CC;
	sub_8265D6D0(ctx, base);
loc_826503CC:
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// b 0x82650418
	goto loc_82650418;
loc_826503D8:
	// beq 0x8265041c
	if (ctx.cr0.eq) goto loc_8265041C;
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826503fc
	if (ctx.cr0.eq) goto loc_826503FC;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x8264c870
	ctx.lr = 0x826503FC;
	sub_8264C870(ctx, base);
loc_826503FC:
	// lwz r3,400(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 400);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82650410
	if (ctx.cr6.eq) goto loc_82650410;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8265d6d0
	ctx.lr = 0x82650410;
	sub_8265D6D0(ctx, base);
loc_82650410:
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// rlwinm r11,r11,0,11,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
loc_82650418:
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
loc_8265041C:
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

DEFINE_REX_FUNC(sub_826569D8) {
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
	ctx.lr = 0x826569E0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82656a0c
	if (ctx.cr6.eq) goto loc_82656A0C;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,1609
	r30.u64 = r30.u64 | 1609;
	// b 0x82656bdc
	goto loc_82656BDC;
loc_82656A0C:
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r27,0
	r27.s64 = 0;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r27,24(r31)
	REX_STORE_U32(r31.u32 + 24, r27.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82656A3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82652168
	ctx.lr = 0x82656A54;
	sub_82652168(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82656bbc
	if (ctx.cr0.lt) goto loc_82656BBC;
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,168(r31)
	REX_STORE_U8(r31.u32 + 168, ctx.r11.u8);
	// subf r10,r10,r29
	ctx.r10.u64 = r29.u64 - ctx.r10.u64;
	// stb r11,169(r31)
	REX_STORE_U8(r31.u32 + 169, ctx.r11.u8);
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x8264ffb8
	ctx.lr = 0x82656A80;
	sub_8264FFB8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm. r11,r3,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x6;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82656aa0
	if (ctx.cr0.eq) goto loc_82656AA0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82656aa0
	if (!ctx.cr6.eq) goto loc_82656AA0;
	// lis r30,-32747
	r30.s64 = -2146107392;
	// ori r30,r30,21001
	r30.u64 = r30.u64 | 21001;
	// b 0x82656bbc
	goto loc_82656BBC;
loc_82656AA0:
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r28,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x4;
	// rlwimi r11,r28,10,20,20
	ctx.r11.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 10) & 0x800) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF7FF);
	// li r6,254
	ctx.r6.s64 = 254;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,80(r26)
	ctx.r7.u64 = REX_LOAD_U32(r26.u32 + 80);
	// bl 0x82655208
	ctx.lr = 0x82656ACC;
	sub_82655208(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82656bbc
	if (ctx.cr0.lt) goto loc_82656BBC;
	// mr r30,r27
	r30.u64 = r27.u64;
	// addi r29,r31,380
	r29.s64 = r31.s64 + 380;
loc_82656ADC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82656b0c
	if (ctx.cr6.eq) goto loc_82656B0C;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// li r5,0
	ctx.r5.s64 = 0;
	// beq cr6,0x82656b08
	if (ctx.cr6.eq) goto loc_82656B08;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82656B08:
	// bl 0x823ee5d8
	ctx.lr = 0x82656B0C;
	sub_823EE5D8(ctx, base);
loc_82656B0C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// blt cr6,0x82656adc
	if (ctx.cr6.lt) goto loc_82656ADC;
	// lwz r30,8(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x823ef900
	ctx.lr = 0x82656B24;
	sub_823EF900(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// addi r29,r31,48
	r29.s64 = r31.s64 + 48;
	// addi r4,r26,20
	ctx.r4.s64 = r26.s64 + 20;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// li r5,60
	ctx.r5.s64 = 60;
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r11.u32);
	// bl 0x826a1e70
	ctx.lr = 0x82656B48;
	sub_826A1E70(ctx, base);
	// lbz r6,169(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 169);
	// lbz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 168);
	// addi r30,r31,200
	r30.s64 = r31.s64 + 200;
	// stw r28,176(r31)
	REX_STORE_U32(r31.u32 + 176, r28.u32);
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// addi r7,r31,40
	ctx.r7.s64 = r31.s64 + 40;
	// stb r6,173(r31)
	REX_STORE_U8(r31.u32 + 173, ctx.r6.u8);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stb r11,172(r31)
	REX_STORE_U8(r31.u32 + 172, ctx.r11.u8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// std r27,200(r31)
	REX_STORE_U64(r31.u32 + 200, r27.u64);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// std r27,208(r31)
	REX_STORE_U64(r31.u32 + 208, r27.u64);
	// std r27,216(r31)
	REX_STORE_U64(r31.u32 + 216, r27.u64);
	// stw r27,224(r31)
	REX_STORE_U32(r31.u32 + 224, r27.u32);
	// lbz r6,169(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 169);
	// lbz r5,168(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 168);
	// bl 0x8264da18
	ctx.lr = 0x82656B94;
	sub_8264DA18(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82656bcc
	if (ctx.cr0.eq) goto loc_82656BCC;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82656bcc
	if (ctx.cr6.eq) goto loc_82656BCC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ede70
	ctx.lr = 0x82656BAC;
	sub_823EDE70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82656bbc
	if (ctx.cr0.lt) goto loc_82656BBC;
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
loc_82656BBC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82654f40
	ctx.lr = 0x82656BC8;
	sub_82654F40(ctx, base);
	// b 0x82656bdc
	goto loc_82656BDC;
loc_82656BCC:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r30,r27
	r30.u64 = r27.u64;
	// addi r11,r11,24072
	ctx.r11.s64 = ctx.r11.s64 + 24072;
	// stw r11,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r11.u32);
loc_82656BDC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82660FF8) {
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
	ctx.lr = 0x82661000;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,1199
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1199, ctx.xer);
	// ble cr6,0x8266102c
	if (!ctx.cr6.gt) goto loc_8266102C;
	// lis r29,-32646
	r29.s64 = -2139488256;
	// ori r29,r29,4102
	r29.u64 = r29.u64 | 4102;
	// b 0x8266108c
	goto loc_8266108C;
loc_8266102C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826612a0
	ctx.lr = 0x82661034;
	sub_826612A0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8266107c
	if (ctx.cr0.lt) goto loc_8266107C;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82660ee0
	ctx.lr = 0x82661054;
	sub_82660EE0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82661068
	if (!ctx.cr0.eq) goto loc_82661068;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x8266107c
	goto loc_8266107C;
loc_82661068:
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82660a50
	ctx.lr = 0x82661074;
	sub_82660A50(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82661094
	if (ctx.cr0.eq) goto loc_82661094;
loc_8266107C:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266108c
	if (ctx.cr6.eq) goto loc_8266108C;
	// bl 0x82661120
	ctx.lr = 0x8266108C;
	sub_82661120(ctx, base);
loc_8266108C:
	// stw r28,0(r27)
	REX_STORE_U32(r27.u32 + 0, r28.u32);
	// b 0x82661098
	goto loc_82661098;
loc_82661094:
	// stw r31,0(r27)
	REX_STORE_U32(r27.u32 + 0, r31.u32);
loc_82661098:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82665168) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82665170;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r4,204(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-10812
	ctx.r11.s64 = ctx.r11.s64 + -10812;
	// addi r10,r10,-10880
	ctx.r10.s64 = ctx.r10.s64 + -10880;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r29,0
	r29.s64 = 0;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r28,r3,8
	r28.s64 = ctx.r3.s64 + 8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826651d4
	if (ctx.cr6.eq) goto loc_826651D4;
loc_826651A4:
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
	// bne 0x826651a4
	if (!ctx.cr0.eq) goto loc_826651A4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826651d0
	if (!ctx.cr6.eq) goto loc_826651D0;
	// lwz r3,4(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8265d850
	ctx.lr = 0x826651D0;
	sub_8265D850(ctx, base);
loc_826651D0:
	// stw r29,204(r31)
	REX_STORE_U32(r31.u32 + 204, r29.u32);
loc_826651D4:
	// lwz r4,208(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 208);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82665210
	if (ctx.cr6.eq) goto loc_82665210;
loc_826651E0:
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
	// bne 0x826651e0
	if (!ctx.cr0.eq) goto loc_826651E0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8266520c
	if (!ctx.cr6.eq) goto loc_8266520C;
	// lwz r3,4(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8265d850
	ctx.lr = 0x8266520C;
	sub_8265D850(ctx, base);
loc_8266520C:
	// stw r29,208(r31)
	REX_STORE_U32(r31.u32 + 208, r29.u32);
loc_82665210:
	// lwz r4,212(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 212);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8266524c
	if (ctx.cr6.eq) goto loc_8266524C;
loc_8266521C:
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
	// bne 0x8266521c
	if (!ctx.cr0.eq) goto loc_8266521C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82665248
	if (!ctx.cr6.eq) goto loc_82665248;
	// lwz r3,4(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8265d850
	ctx.lr = 0x82665248;
	sub_8265D850(ctx, base);
loc_82665248:
	// stw r29,212(r31)
	REX_STORE_U32(r31.u32 + 212, r29.u32);
loc_8266524C:
	// lwz r4,216(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82665288
	if (ctx.cr6.eq) goto loc_82665288;
loc_82665258:
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
	// bne 0x82665258
	if (!ctx.cr0.eq) goto loc_82665258;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82665284
	if (!ctx.cr6.eq) goto loc_82665284;
	// lwz r3,4(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8265d850
	ctx.lr = 0x82665284;
	sub_8265D850(ctx, base);
loc_82665284:
	// stw r29,216(r31)
	REX_STORE_U32(r31.u32 + 216, r29.u32);
loc_82665288:
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82130e88
	ctx.lr = 0x82665290;
	sub_82130E88(ctx, base);
	// addi r30,r31,388
	r30.s64 = r31.s64 + 388;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82130e88
	ctx.lr = 0x8266529C;
	sub_82130E88(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 128);
	// bl 0x82661120
	ctx.lr = 0x826652A4;
	sub_82661120(ctx, base);
	// stw r29,128(r31)
	REX_STORE_U32(r31.u32 + 128, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82130e88
	ctx.lr = 0x826652B0;
	sub_82130E88(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82673208
	ctx.lr = 0x826652B8;
	sub_82673208(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,31396
	ctx.r11.s64 = ctx.r11.s64 + 31396;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82671B38) {
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
	ctx.lr = 0x82671B40;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 56);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r26,52(r7)
	r26.u64 = REX_LOAD_U32(ctx.r7.u32 + 52);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82671b70
	if (ctx.cr0.eq) goto loc_82671B70;
	// ori r26,r26,3
	r26.u64 = r26.u64 | 3;
loc_82671B70:
	// rlwinm. r11,r26,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82671b80
	if (!ctx.cr0.eq) goto loc_82671B80;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82671ca4
	goto loc_82671CA4;
loc_82671B80:
	// li r21,0
	r21.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// blt cr6,0x82671b9c
	if (ctx.cr6.lt) goto loc_82671B9C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82675cf8
	ctx.lr = 0x82671B98;
	sub_82675CF8(ctx, base);
	// b 0x82671bac
	goto loc_82671BAC;
loc_82671B9C:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// std r21,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r21.u64);
	// std r21,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r21.u64);
	// stw r21,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r21.u32);
loc_82671BAC:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r24,r21
	r24.u64 = r21.u64;
	// bl 0x82671978
	ctx.lr = 0x82671BC4;
	sub_82671978(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82671ca0
	if (ctx.cr0.eq) goto loc_82671CA0;
loc_82671BCC:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82671978
	ctx.lr = 0x82671BE0;
	sub_82671978(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x82675b70
	ctx.lr = 0x82671BFC;
	sub_82675B70(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r10,r10,74
	ctx.r10.s64 = ctx.r10.s64 + 74;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82671df8
	ctx.lr = 0x82671C24;
	sub_82671DF8(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82671c54
	if (!ctx.cr0.eq) goto loc_82671C54;
	// rlwinm. r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82671c54
	if (!ctx.cr0.eq) goto loc_82671C54;
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82671c54
	if (!ctx.cr0.eq) goto loc_82671C54;
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82671c54
	if (!ctx.cr0.eq) goto loc_82671C54;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82672140
	ctx.lr = 0x82671C50;
	sub_82672140(ctx, base);
	// b 0x82671c68
	goto loc_82671C68;
loc_82671C54:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// or r24,r11,r24
	r24.u64 = ctx.r11.u64 | r24.u64;
loc_82671C68:
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82671bcc
	if (!ctx.cr6.eq) goto loc_82671BCC;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x82671ca0
	if (ctx.cr6.eq) goto loc_82671CA0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671C98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82671ca4
	if (!ctx.cr0.eq) goto loc_82671CA4;
loc_82671CA0:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
loc_82671CA4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_82678990) {
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
	ctx.lr = 0x82678998;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r31,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r29,r31
	r29.u64 = r31.u64;
	// bl 0x826612a0
	ctx.lr = 0x826789C8;
	sub_826612A0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82678a58
	if (ctx.cr0.lt) goto loc_82678A58;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1264
	ctx.r3.s64 = 1264;
	// bl 0x82681488
	ctx.lr = 0x826789DC;
	sub_82681488(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82678a58
	if (ctx.cr0.lt) goto loc_82678A58;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82681770
	ctx.lr = 0x826789EC;
	sub_82681770(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82678a58
	if (ctx.cr0.lt) goto loc_82678A58;
	// li r4,456
	ctx.r4.s64 = 456;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8265d838
	ctx.lr = 0x82678A00;
	sub_8265D838(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82678a14
	if (!ctx.cr0.eq) goto loc_82678A14;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x82678a58
	goto loc_82678A58;
loc_82678A14:
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82677230
	ctx.lr = 0x82678A2C;
	sub_82677230(ctx, base);
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// bl 0x82681660
	ctx.lr = 0x82678A40;
	sub_82681660(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82678a58
	if (ctx.cr0.lt) goto loc_82678A58;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826788a0
	ctx.lr = 0x82678A50;
	sub_826788A0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x82678ab8
	if (!ctx.cr0.lt) goto loc_82678AB8;
loc_82678A58:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82678a68
	if (ctx.cr6.eq) goto loc_82678A68;
	// bl 0x82676d18
	ctx.lr = 0x82678A68;
	sub_82676D18(ctx, base);
loc_82678A68:
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82678a78
	if (ctx.cr6.eq) goto loc_82678A78;
	// bl 0x82676d18
	ctx.lr = 0x82678A78;
	sub_82676D18(ctx, base);
loc_82678A78:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82678aa4
	if (ctx.cr6.eq) goto loc_82678AA4;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82678a94
	if (ctx.cr6.eq) goto loc_82678A94;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82681670
	ctx.lr = 0x82678A94;
	sub_82681670(ctx, base);
loc_82678A94:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// bl 0x82676d18
	ctx.lr = 0x82678AA4;
	sub_82676D18(ctx, base);
loc_82678AA4:
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82678ac4
	if (ctx.cr6.eq) goto loc_82678AC4;
	// bl 0x82661120
	ctx.lr = 0x82678AB4;
	sub_82661120(ctx, base);
	// b 0x82678ac4
	goto loc_82678AC4;
loc_82678AB8:
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r30,r31
	r30.u64 = r31.u64;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
loc_82678AC4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8267F6D8) {
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
	ctx.lr = 0x8267F6E0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,40
	r28.s64 = ctx.r3.s64 + 40;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827938a4
	ctx.lr = 0x8267F6F4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r29,0
	r29.s64 = 0;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stb r29,1185(r31)
	REX_STORE_U8(r31.u32 + 1185, r29.u8);
	// stb r29,1184(r31)
	REX_STORE_U8(r31.u32 + 1184, r29.u8);
	// lwz r11,1188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1188);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267f730
	if (ctx.cr0.eq) goto loc_8267F730;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827938b4
	ctx.lr = 0x8267F720;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267f410
	ctx.lr = 0x8267F728;
	sub_8267F410(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827938a4
	ctx.lr = 0x8267F730;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_8267F730:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826797d8
	ctx.lr = 0x8267F738;
	sub_826797D8(ctx, base);
	// lwz r3,424(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267f74c
	if (ctx.cr6.eq) goto loc_8267F74C;
	// bl 0x82676d18
	ctx.lr = 0x8267F748;
	sub_82676D18(ctx, base);
	// stw r29,424(r31)
	REX_STORE_U32(r31.u32 + 424, r29.u32);
loc_8267F74C:
	// lwz r3,428(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267f760
	if (ctx.cr6.eq) goto loc_8267F760;
	// bl 0x82676d18
	ctx.lr = 0x8267F75C;
	sub_82676D18(ctx, base);
	// stw r29,428(r31)
	REX_STORE_U32(r31.u32 + 428, r29.u32);
loc_8267F760:
	// lwz r11,1008(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1008);
	// addi r30,r31,1008
	r30.s64 = r31.s64 + 1008;
	// b 0x8267f798
	goto loc_8267F798;
loc_8267F76C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// bl 0x82676d18
	ctx.lr = 0x8267F794;
	sub_82676D18(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_8267F798:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8267f76c
	if (!ctx.cr6.eq) goto loc_8267F76C;
	// lwz r11,1016(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1016);
	// addi r30,r31,1016
	r30.s64 = r31.s64 + 1016;
	// b 0x8267f7d8
	goto loc_8267F7D8;
loc_8267F7AC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// bl 0x82676d18
	ctx.lr = 0x8267F7D4;
	sub_82676D18(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_8267F7D8:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8267f7ac
	if (!ctx.cr6.eq) goto loc_8267F7AC;
	// lwz r11,1024(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1024);
	// addi r30,r31,1024
	r30.s64 = r31.s64 + 1024;
	// b 0x8267f818
	goto loc_8267F818;
loc_8267F7EC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// bl 0x82676d18
	ctx.lr = 0x8267F814;
	sub_82676D18(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_8267F818:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8267f7ec
	if (!ctx.cr6.eq) goto loc_8267F7EC;
	// lwz r11,1032(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1032);
	// addi r30,r31,1032
	r30.s64 = r31.s64 + 1032;
	// b 0x8267f858
	goto loc_8267F858;
loc_8267F82C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// bl 0x82676d18
	ctx.lr = 0x8267F854;
	sub_82676D18(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_8267F858:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8267f82c
	if (!ctx.cr6.eq) goto loc_8267F82C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r31,640
	ctx.r3.s64 = r31.s64 + 640;
	// bl 0x82687630
	ctx.lr = 0x8267F86C;
	sub_82687630(ctx, base);
	// lwz r11,652(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 652);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// addi r3,r31,656
	ctx.r3.s64 = r31.s64 + 656;
	// stw r11,652(r31)
	REX_STORE_U32(r31.u32 + 652, ctx.r11.u32);
	// bl 0x82687630
	ctx.lr = 0x8267F884;
	sub_82687630(ctx, base);
	// lwz r11,572(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 572);
	// addi r30,r31,572
	r30.s64 = r31.s64 + 572;
	// b 0x8267f8b0
	goto loc_8267F8B0;
loc_8267F890:
	// subf r10,r11,r30
	ctx.r10.u64 = r30.u64 - ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x82679f18
	ctx.lr = 0x8267F8AC;
	sub_82679F18(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_8267F8B0:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8267f890
	if (!ctx.cr6.eq) goto loc_8267F890;
	// lwz r11,516(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 516);
	// addi r30,r31,516
	r30.s64 = r31.s64 + 516;
	// b 0x8267f8e4
	goto loc_8267F8E4;
loc_8267F8C4:
	// subf r10,r11,r30
	ctx.r10.u64 = r30.u64 - ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// bl 0x8267c1f0
	ctx.lr = 0x8267F8E0;
	sub_8267C1F0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_8267F8E4:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8267f8c4
	if (!ctx.cr6.eq) goto loc_8267F8C4;
	// lwz r11,524(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 524);
	// addi r30,r31,524
	r30.s64 = r31.s64 + 524;
	// b 0x8267f918
	goto loc_8267F918;
loc_8267F8F8:
	// subf r10,r11,r30
	ctx.r10.u64 = r30.u64 - ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// bl 0x8267c1f0
	ctx.lr = 0x8267F914;
	sub_8267C1F0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_8267F918:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8267f8f8
	if (!ctx.cr6.eq) goto loc_8267F8F8;
	// lwz r11,624(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 624);
	// addi r30,r31,624
	r30.s64 = r31.s64 + 624;
	// b 0x8267f94c
	goto loc_8267F94C;
loc_8267F92C:
	// subf r10,r11,r30
	ctx.r10.u64 = r30.u64 - ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x8267c270
	ctx.lr = 0x8267F948;
	sub_8267C270(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_8267F94C:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8267f92c
	if (!ctx.cr6.eq) goto loc_8267F92C;
	// lwz r11,1040(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1040);
	// addi r30,r31,1040
	r30.s64 = r31.s64 + 1040;
	// b 0x8267f99c
	goto loc_8267F99C;
loc_8267F960:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r10,-8
	ctx.r3.s64 = ctx.r10.s64 + -8;
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lhz r11,1078(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 1078);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,1078(r31)
	REX_STORE_U16(r31.u32 + 1078, ctx.r11.u16);
	// bl 0x82676d18
	ctx.lr = 0x8267F998;
	sub_82676D18(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_8267F99C:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8267f960
	if (!ctx.cr6.eq) goto loc_8267F960;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82681670
	ctx.lr = 0x8267F9AC;
	sub_82681670(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827938b4
	ctx.lr = 0x8267F9B4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82676d18
	ctx.lr = 0x8267F9BC;
	sub_82676D18(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82693A38) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cac
	ctx.lr = 0x82693A40;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826a2ca8
	ctx.lr = 0x82693A48;
	// stwu r1,-2608(r1)
	ea = -2608 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-32119
	r25.s64 = -2104950784;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// fmr f28,f2
	f28.f64 = ctx.f2.f64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// srawi r28,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	r28.s64 = ctx.r11.s32 >> 1;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r5,1028
	ctx.r5.s64 = 1028;
	// lwz r11,-5952(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + -5952);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82693A94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-5952(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + -5952);
	// li r5,1028
	ctx.r5.s64 = 1028;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1472
	ctx.r3.s64 = ctx.r1.s64 + 1472;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82693AAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x82693b40
	if (!ctx.cr6.gt) goto loc_82693B40;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// lis r8,-32127
	ctx.r8.s64 = -2105475072;
	// lis r7,-32127
	ctx.r7.s64 = -2105475072;
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// lfs f0,3720(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
	// subf r10,r30,r29
	ctx.r10.u64 = r29.u64 - r30.u64;
	// lwz r8,24716(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 24716);
	// lwz r9,24720(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 24720);
	// lfs f13,4736(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4736);
	ctx.f13.f64 = double(temp.f32);
loc_82693AE0:
	// lfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f31,f0
	ctx.f12.f64 = double(float(f31.f64 + ctx.f0.f64));
	// fmadds f11,f11,f13,f0
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f0.f64)));
	// lfsx f10,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// addi r7,r1,432
	ctx.r7.s64 = ctx.r1.s64 + 432;
	// addi r6,r1,1472
	ctx.r6.s64 = ctx.r1.s64 + 1472;
	// fadds f31,f31,f30
	f31.f64 = double(float(f31.f64 + f30.f64));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fctiwz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f12,f11
	ctx.f12.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,22,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FC;
	// lfsx f12,r4,r9
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfsx f12,r5,r7
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r7.u32, temp.u32);
	// lfsx f12,r4,r8
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfsx f12,r5,r6
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, temp.u32);
	// bdnz 0x82693ae0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82693AE0;
loc_82693B40:
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,1472
	ctx.r4.s64 = ctx.r1.s64 + 1472;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82695458
	ctx.lr = 0x82693B50;
	sub_82695458(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lfs f12,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f13.f64 = double(temp.f32);
	// ble cr6,0x82693b84
	if (!ctx.cr6.gt) goto loc_82693B84;
	// extsw r11,r28
	ctx.r11.s64 = r28.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// b 0x82693b88
	goto loc_82693B88;
loc_82693B84:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_82693B88:
	// li r7,40
	ctx.r7.s64 = 40;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// addi r9,r1,1292
	ctx.r9.s64 = ctx.r1.s64 + 1292;
	// addi r8,r1,2332
	ctx.r8.s64 = ctx.r1.s64 + 2332;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82693BA0:
	// fadds f9,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfsu f11,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// lfsu f10,4(r8)
	ea = 4 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f10.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fsubs f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f7,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfsu f11,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fmuls f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmadds f13,f7,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f13.f64)));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fadds f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fsubs f12,f8,f0
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fmadds f11,f11,f8,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f8.f64, ctx.f10.f64)));
	// stfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82693ba0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82693BA0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f0,13256(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 13256);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(f29.f64, ctx.f0.f64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// beq cr6,0x82693c7c
	if (ctx.cr6.eq) goto loc_82693C7C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stfs f28,80(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f28,84(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r8,r11,-8912
	ctx.r8.s64 = ctx.r11.s64 + -8912;
	// stfs f28,88(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f28,92(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// stfs f29,96(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f29,100(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f29,104(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f29,108(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_82693C30:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lvx128 v61,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v62,v62,v61
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v61.f32)));
	// lvx128 v61,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v62,v62,v63
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v62,v62,v61
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vcfpsxws128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v62.f32)));
	// vpkswss128 v62,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v62.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.s32), simde_mm_load_si128((simde__m128i*)ctx.v62.s32)));
	// vspltw128 v61,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// vspltw128 v62,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// stvewx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82693c30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82693C30;
	// b 0x82693cac
	goto loc_82693CAC;
loc_82693C7C:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_82693C80:
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,4
	ctx.r9.s64 = 4;
	// vcfpsxws128 v63,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v63.f32)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vpkswss128 v63,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v63.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.s32), simde_mm_load_si128((simde__m128i*)ctx.v63.s32)));
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v63,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// stvewx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82693c80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82693C80;
loc_82693CAC:
	// li r10,40
	ctx.r10.s64 = 40;
	// addi r11,r1,432
	ctx.r11.s64 = ctx.r1.s64 + 432;
	// addi r9,r1,1468
	ctx.r9.s64 = ctx.r1.s64 + 1468;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82693CC4:
	// lfsu f0,4(r8)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// lfsu f13,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfsu f13,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82693cc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82693CC4;
	// addi r1,r1,2608
	ctx.r1.s64 = ctx.r1.s64 + 2608;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826a2cf4
	ctx.lr = 0x82693CE8;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(__savevmx_103) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_125) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
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

DEFINE_REX_FUNC(sub_826A4A30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// cmpw r5,r4
	ctx.cr0.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x826a4a74
	if (ctx.cr6.eq) goto loc_826A4A74;
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x826a4a60
	if (ctx.cr0.eq) goto loc_826A4A60;
loc_826A4A4C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x826a4a84
	if (ctx.cr6.eq) goto loc_826A4A84;
	// lbzu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// cmpw r4,r5
	ctx.cr0.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bne 0x826a4a4c
	if (!ctx.cr0.eq) goto loc_826A4A4C;
loc_826A4A60:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lbzu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// cmpw r4,r5
	ctx.cr0.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// beq 0x826a4a60
	if (ctx.cr0.eq) goto loc_826A4A60;
	// b 0x826a4a4c
	goto loc_826A4A4C;
loc_826A4A74:
	// beq 0x826a4a84
	if (ctx.cr0.eq) goto loc_826A4A84;
	// lbzu r5,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// b 0x826a4a74
	goto loc_826A4A74;
loc_826A4A84:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A5B90) {
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
	// bne cr6,0x826a5bc4
	if (!ctx.cr6.eq) goto loc_826A5BC4;
	// bl 0x826a33d0
	ctx.lr = 0x826A5BB0;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826A5BBC;
	sub_8269CB20(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x826a5bd4
	goto loc_826A5BD4;
loc_826A5BC4:
	// bl 0x823f5788
	ctx.lr = 0x826A5BC8;
	sub_823F5788(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823f2998
	ctx.lr = 0x826A5BD4;
	sub_823F2998(ctx, base);
loc_826A5BD4:
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

DEFINE_REX_FUNC(sub_826A98F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r30,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// bl 0x827938b4
	ctx.lr = 0x826A9910;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r30,-8(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// lwz r12,-16(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826AA448) {
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
	ctx.lr = 0x826AA450;
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r3,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r3.u32);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x826aa480
	if (!ctx.cr6.eq) goto loc_826AA480;
	// bl 0x826a33d0
	ctx.lr = 0x826AA46C;
	sub_826A33D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x826aa558
	goto loc_826AA558;
loc_826AA480:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt cr6,0x826aa498
	if (ctx.cr6.lt) goto loc_826AA498;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r11,31232(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31232);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826aa4b0
	if (ctx.cr6.lt) goto loc_826AA4B0;
loc_826AA498:
	// bl 0x826a33d0
	ctx.lr = 0x826AA49C;
	sub_826A33D0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826AA4A8;
	sub_8269CB20(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x826aa558
	goto loc_826AA558;
loc_826AA4B0:
	// srawi r11,r27,5
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1F) != 0);
	ctx.r11.s64 = r27.s32 >> 5;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r10,31264
	r29.s64 = ctx.r10.s64 + 31264;
	// clrlwi r11,r27,27
	ctx.r11.u64 = r27.u32 & 0x1F;
	// mulli r30,r11,72
	r30.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r11,r28,r29
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + r29.u32);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826aa498
	if (ctx.cr0.eq) goto loc_826AA498;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826b02f0
	ctx.lr = 0x826AA4E4;
	sub_826B02F0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r28,r29
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + r29.u32);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826aa534
	if (ctx.cr0.eq) goto loc_826AA534;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826b0230
	ctx.lr = 0x826AA504;
	sub_826B0230(ctx, base);
	// bl 0x826b4340
	ctx.lr = 0x826AA508;
	sub_826B4340(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826aa51c
	if (!ctx.cr0.eq) goto loc_826AA51C;
	// bl 0x823ee280
	ctx.lr = 0x826AA514;
	sub_823EE280(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x826aa520
	goto loc_826AA520;
loc_826AA51C:
	// li r30,0
	r30.s64 = 0;
loc_826AA520:
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x826aa548
	if (ctx.cr6.eq) goto loc_826AA548;
	// bl 0x826a3408
	ctx.lr = 0x826AA530;
	sub_826A3408(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
loc_826AA534:
	// bl 0x826a33d0
	ctx.lr = 0x826AA538;
	sub_826A33D0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r10.u32);
loc_826AA548:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = r31.s64 + 144;
	// bl 0x826aa580
	ctx.lr = 0x826AA554;
	ctx.r27 = r27;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_826AA580(ctx, base);
	r27 = ctx.r27;
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
loc_826AA558:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826B2C18) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826B2C20;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r3.u64);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x826b2b38
	ctx.lr = 0x826B2C40;
	sub_826B2B38(ctx, base);
	// lhz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,17
	ctx.r5.s64 = 17;
	// rldicr r4,r11,48,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 48) & 0xFFFFFFFFFFFFFFFF;
	// ld r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826b2e58
	ctx.lr = 0x826B2C5C;
	sub_826B2E58(ctx, base);
	// lbz r11,98(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 98);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lha r10,96(r1)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 96));
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x826a1bc8
	ctx.lr = 0x826B2C84;
	sub_826A1BC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826b2c9c
	if (!ctx.cr0.eq) goto loc_826B2C9C;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d0c
	return;
loc_826B2C9C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269cbf8
	ctx.lr = 0x826B2CB4;
	sub_8269CBF8(ctx, base);
}

DEFINE_REX_FUNC(sub_826B6E68) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,26224
	ctx.r10.s64 = ctx.r11.s64 + 26224;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x826b6518
	ctx.lr = 0x826B6E94;
	sub_826B6518(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bc158
	ctx.lr = 0x826B6E9C;
	sub_826BC158(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826b6ebc
	if (ctx.cr6.eq) goto loc_826B6EBC;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32808
	ctx.r4.u64 = ctx.r4.u64 | 32808;
	// bl 0x823f0350
	ctx.lr = 0x826B6EB8;
	sub_823F0350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_826B6EBC:
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

DEFINE_REX_FUNC(sub_826BA350) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,312(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// cmpwi cr6,r11,-5000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -5000, ctx.xer);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// bgt cr6,0x826ba374
	if (ctx.cr6.gt) goto loc_826BA374;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,340(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 340);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x826ba388
	if (ctx.cr6.gt) goto loc_826BA388;
loc_826BA374:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,340(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 340);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5912(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5912);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x826ba398
	if (ctx.cr6.lt) goto loc_826BA398;
loc_826BA388:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_826BA398:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826BC2B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826bc2fc
	if (ctx.cr6.eq) goto loc_826BC2FC;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826bc2e4
	if (!ctx.cr6.eq) goto loc_826BC2E4;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// subf r10,r3,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r3.u64;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ctx.r11.u64;
	// stw r6,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
loc_826BC2E4:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
loc_826BC2FC:
	// stw r3,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r3,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r3.u32);
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C0A18) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826c0a38
	if (ctx.cr6.eq) goto loc_826C0A38;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826c0a38
	if (ctx.cr6.eq) goto loc_826C0A38;
	// lwz r11,208(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_826C0A38:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C18C0) {
	REX_FUNC_PROLOGUE();
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C1A28) {
	REX_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,60
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(60));
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,76(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_826C2348) {
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
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C2370;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,244(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 244);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826C2384;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x826c23e0
	if (!ctx.cr6.eq) goto loc_826C23E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,248(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C23A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x826c23e0
	if (!ctx.cr6.eq) goto loc_826C23E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,276(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C23C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,280(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 280);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826C23D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,0
	r30.s64 = 0;
	// b 0x826c23e8
	goto loc_826C23E8;
loc_826C23E0:
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
loc_826C23E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C23FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

DEFINE_REX_FUNC(sub_826C8600) {
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
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,64(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// bl 0x826c6880
	ctx.lr = 0x826C8638;
	sub_826C6880(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c86bc
	if (ctx.cr6.lt) goto loc_826C86BC;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,52(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// bl 0x826c6880
	ctx.lr = 0x826C8658;
	sub_826C6880(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c86bc
	if (ctx.cr6.lt) goto loc_826C86BC;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x826c6880
	ctx.lr = 0x826C8678;
	sub_826C6880(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c86bc
	if (ctx.cr6.lt) goto loc_826C86BC;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r31.u32);
	// lwz r8,68(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r6,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r6.u32);
	// stw r5,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r5.u32);
	// b 0x826c870c
	goto loc_826C870C;
loc_826C86BC:
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826c86f0
	if (ctx.cr6.eq) goto loc_826C86F0;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c86e0
	if (ctx.cr6.eq) goto loc_826C86E0;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// bl 0x826c68d8
	ctx.lr = 0x826C86E0;
	sub_826C68D8(ctx, base);
loc_826C86E0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x826c68d8
	ctx.lr = 0x826C86F0;
	sub_826C68D8(ctx, base);
loc_826C86F0:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c870c
	if (ctx.cr6.eq) goto loc_826C870C;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x826c68d8
	ctx.lr = 0x826C870C;
	sub_826C68D8(ctx, base);
loc_826C870C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

DEFINE_REX_FUNC(sub_826D4A78) {
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
	ctx.lr = 0x826D4A80;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// lwz r30,28(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r26,r4,-24
	r26.s64 = ctx.r4.s64 + -24;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r26,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// bctrl 
	ctx.lr = 0x826D4ABC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4cb0
	if (ctx.cr6.lt) goto loc_826D4CB0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lhz r10,62(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 62);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x826d4af0
	if (!ctx.cr6.gt) goto loc_826D4AF0;
loc_826D4ADC:
	// lis r31,-32688
	r31.s64 = -2142240768;
	// ori r31,r31,12
	r31.u64 = r31.u64 | 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
loc_826D4AF0:
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// addi r6,r11,120
	ctx.r6.s64 = ctx.r11.s64 + 120;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826d4b34
	if (!ctx.cr6.eq) goto loc_826D4B34;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,224(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c6880
	ctx.lr = 0x826D4B10;
	sub_826C6880(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4cb0
	if (ctx.cr6.lt) goto loc_826D4CB0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// stw r29,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// stw r29,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r29.u32);
	// stw r29,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, r29.u32);
loc_826D4B34:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// addi r28,r11,4
	r28.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826d4adc
	if (!ctx.cr6.eq) goto loc_826D4ADC;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r3,224(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 224);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c6880
	ctx.lr = 0x826D4B60;
	sub_826C6880(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4cb0
	if (ctx.cr6.lt) goto loc_826D4CB0;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(r26.u32, 4, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// lwz r25,0(r28)
	r25.u64 = REX_LOAD_U32(r28.u32 + 0);
	// blt cr6,0x826d4c84
	if (ctx.cr6.lt) goto loc_826D4C84;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826d3d18
	ctx.lr = 0x826D4B9C;
	sub_826D3D18(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4c8c
	if (ctx.cr6.lt) goto loc_826D4C8C;
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r9,4
	ctx.r9.s64 = 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x826d4c24
	if (ctx.cr6.eq) goto loc_826D4C24;
	// addi r28,r25,4
	r28.s64 = r25.s64 + 4;
	// lwz r3,224(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 224);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c6880
	ctx.lr = 0x826D4BD0;
	sub_826C6880(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4c8c
	if (ctx.cr6.lt) goto loc_826D4C8C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x826D4BEC;
	sub_826A2E60(ctx, base);
	// addi r27,r29,4
	r27.s64 = r29.s64 + 4;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(r27.u32, r26.u32, ctx.xer);
	// bgt cr6,0x826d4c84
	if (ctx.cr6.gt) goto loc_826D4C84;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826d4230
	ctx.lr = 0x826D4C14;
	sub_826D4230(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4c8c
	if (ctx.cr6.lt) goto loc_826D4C8C;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
loc_826D4C24:
	// stw r29,0(r25)
	REX_STORE_U32(r25.u32 + 0, r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lhz r10,62(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 62);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sth r8,62(r11)
	REX_STORE_U16(ctx.r11.u32 + 62, ctx.r8.u16);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r5,r6,r26
	ctx.r5.u64 = r26.u64 - ctx.r6.u64;
	// subf. r29,r9,r5
	r29.u64 = ctx.r5.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x826d4cb0
	if (ctx.cr0.eq) goto loc_826D4CB0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826D4C60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4c8c
	if (ctx.cr6.lt) goto loc_826D4C8C;
	// ld r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 8);
	// clrldi r10,r29,32
	ctx.r10.u64 = r29.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r11.u64);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
loc_826D4C84:
	// lis r31,-32688
	r31.s64 = -2142240768;
	// ori r31,r31,12
	r31.u64 = r31.u64 | 12;
loc_826D4C8C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x826d4cb0
	if (ctx.cr6.eq) goto loc_826D4CB0;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r5,r25,4
	ctx.r5.s64 = r25.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d4cb0
	if (ctx.cr6.eq) goto loc_826D4CB0;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 224);
	// bl 0x826c68d8
	ctx.lr = 0x826D4CB0;
	sub_826C68D8(ctx, base);
loc_826D4CB0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_826E0078) {
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
	ctx.lr = 0x826E0080;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r29,0
	r29.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x826e00b8
	if (!ctx.cr6.gt) goto loc_826E00B8;
	// li r11,1
	ctx.r11.s64 = 1;
	// std r4,56(r31)
	REX_STORE_U64(r31.u32 + 56, ctx.r4.u64);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_826E00B8:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826E00D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e0114
	if (ctx.cr6.lt) goto loc_826E0114;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// std r30,32(r31)
	REX_STORE_U64(r31.u32 + 32, r30.u64);
	// std r30,40(r31)
	REX_STORE_U64(r31.u32 + 40, r30.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r29,56(r31)
	REX_STORE_U64(r31.u32 + 56, r29.u64);
	// stw r29,64(r31)
	REX_STORE_U32(r31.u32 + 64, r29.u32);
	// stw r29,68(r31)
	REX_STORE_U32(r31.u32 + 68, r29.u32);
	// std r29,72(r31)
	REX_STORE_U64(r31.u32 + 72, r29.u64);
	// bne cr6,0x826e0114
	if (!ctx.cr6.eq) goto loc_826E0114;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x826e0114
	if (!ctx.cr6.gt) goto loc_826E0114;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826dfb98
	ctx.lr = 0x826E0114;
	sub_826DFB98(ctx, base);
loc_826E0114:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826E3C80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// bl 0x826a1ca8
	ctx.lr = 0x826E3C88;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2c80
	ctx.lr = 0x826E3C90;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x826e3fa8
	if (ctx.cr6.lt) goto loc_826E3FA8;
	// lhz r11,34(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// li r27,1
	r27.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x826e3fa8
	if (ctx.cr6.lt) goto loc_826E3FA8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f24,16236(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16236);
	f24.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f25,5912(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 5912);
	f25.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f31,15196(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15196);
	f31.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f26,3720(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3720);
	f26.f64 = double(temp.f32);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lfs f22,3704(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3704);
	f22.f64 = double(temp.f32);
	// lfd f21,8312(r6)
	f21.u64 = REX_LOAD_U64(ctx.r6.u32 + 8312);
	// lfs f18,3804(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 3804);
	f18.f64 = double(temp.f32);
	// addi r25,r11,31336
	r25.s64 = ctx.r11.s64 + 31336;
	// lfs f19,8300(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8300);
	f19.f64 = double(temp.f32);
	// lfd f20,3728(r3)
	f20.u64 = REX_LOAD_U64(ctx.r3.u32 + 3728);
loc_826E3D04:
	// cmplwi cr6,r27,6
	ctx.cr6.compare<uint32_t>(r27.u32, 6, ctx.xer);
	// bgt cr6,0x826e3e94
	if (ctx.cr6.gt) goto loc_826E3E94;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x826e3f98
	if (ctx.cr6.eq) goto loc_826E3F98;
	// bdz 0x826e3d30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_826E3D30;
	// bdz 0x826e3d40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_826E3D40;
	// bdz 0x826e3d64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_826E3D64;
	// bdz 0x826e3d98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_826E3D98;
	// bdz 0x826e3ddc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_826E3DDC;
	// b 0x826e3e30
	goto loc_826E3E30;
loc_826E3D30:
	// lwz r11,548(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 548);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r25,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r25.u32);
	// b 0x826e3f98
	goto loc_826E3F98;
loc_826E3D40:
	// lwz r11,548(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 548);
	// addi r10,r25,4
	ctx.r10.s64 = r25.s64 + 4;
	// addi r9,r25,12
	ctx.r9.s64 = r25.s64 + 12;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r7,548(r26)
	ctx.r7.u64 = REX_LOAD_U32(r26.u32 + 548);
	// lwz r6,8(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r9,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// b 0x826e3f98
	goto loc_826E3F98;
loc_826E3D64:
	// lwz r11,548(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 548);
	// addi r10,r25,20
	ctx.r10.s64 = r25.s64 + 20;
	// addi r9,r25,32
	ctx.r9.s64 = r25.s64 + 32;
	// addi r8,r25,44
	ctx.r8.s64 = r25.s64 + 44;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// lwz r6,548(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 548);
	// lwz r5,12(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// stw r9,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// lwz r4,548(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 548);
	// lwz r3,12(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// b 0x826e3f98
	goto loc_826E3F98;
loc_826E3D98:
	// lwz r11,548(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 548);
	// addi r10,r25,56
	ctx.r10.s64 = r25.s64 + 56;
	// addi r9,r25,72
	ctx.r9.s64 = r25.s64 + 72;
	// addi r8,r25,88
	ctx.r8.s64 = r25.s64 + 88;
	// addi r7,r25,104
	ctx.r7.s64 = r25.s64 + 104;
	// lwz r6,16(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r5,548(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 548);
	// lwz r4,16(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// stw r9,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r3,548(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 548);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r10,548(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 548);
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// stw r7,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r7.u32);
	// b 0x826e3f98
	goto loc_826E3F98;
loc_826E3DDC:
	// lwz r11,548(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 548);
	// addi r10,r25,120
	ctx.r10.s64 = r25.s64 + 120;
	// addi r9,r25,140
	ctx.r9.s64 = r25.s64 + 140;
	// addi r8,r25,160
	ctx.r8.s64 = r25.s64 + 160;
	// addi r7,r25,180
	ctx.r7.s64 = r25.s64 + 180;
	// addi r6,r25,200
	ctx.r6.s64 = r25.s64 + 200;
	// lwz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r4,548(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 548);
	// lwz r3,20(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r11,548(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 548);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r9,548(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 548);
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// stw r7,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r7.u32);
	// lwz r7,548(r26)
	ctx.r7.u64 = REX_LOAD_U32(r26.u32 + 548);
	// lwz r5,20(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// stw r6,16(r5)
	REX_STORE_U32(ctx.r5.u32 + 16, ctx.r6.u32);
	// b 0x826e3f98
	goto loc_826E3F98;
loc_826E3E30:
	// lwz r11,548(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 548);
	// addi r10,r25,220
	ctx.r10.s64 = r25.s64 + 220;
	// addi r9,r25,244
	ctx.r9.s64 = r25.s64 + 244;
	// addi r8,r25,268
	ctx.r8.s64 = r25.s64 + 268;
	// addi r7,r25,292
	ctx.r7.s64 = r25.s64 + 292;
	// addi r6,r25,316
	ctx.r6.s64 = r25.s64 + 316;
	// lwz r5,24(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r25,340
	ctx.r4.s64 = r25.s64 + 340;
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r3,548(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 548);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r10,548(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 548);
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// stw r8,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lwz r8,548(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 548);
	// lwz r5,24(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// stw r7,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r7.u32);
	// lwz r3,548(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 548);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stw r6,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// lwz r10,548(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 548);
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// stw r4,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r4.u32);
	// b 0x826e3f98
	goto loc_826E3F98;
loc_826E3E94:
	// lwz r11,548(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 548);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f1,f20
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f20.f64;
	// lwzx r24,r11,r10
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8269d440
	ctx.lr = 0x826E3EA8;
	sub_8269D440(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// fmuls f27,f0,f19
	f27.f64 = double(float(ctx.f0.f64 * f19.f64));
	// ble cr6,0x826e3f98
	if (!ctx.cr6.gt) goto loc_826E3F98;
	// extsw r11,r27
	ctx.r11.s64 = r27.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f28,f13
	f28.f64 = double(float(ctx.f13.f64));
	// fdivs f12,f18,f28
	ctx.f12.f64 = double(float(f18.f64 / f28.f64));
	// fsqrts f23,f12
	f23.f64 = double(float(sqrt(ctx.f12.f64)));
loc_826E3ED8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x826e3eec
	if (!ctx.cr6.eq) goto loc_826E3EEC;
	// fsqrts f0,f21
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(f21.f64)));
	// fdivs f0,f22,f0
	ctx.f0.f64 = double(float(f22.f64 / ctx.f0.f64));
	// b 0x826e3ef0
	goto loc_826E3EF0;
loc_826E3EEC:
	// fmr f0,f22
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f22.f64;
loc_826E3EF0:
	// extsw r11,r28
	ctx.r11.s64 = r28.s32;
	// fmuls f30,f23,f0
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(f23.f64 * ctx.f0.f64));
	// li r31,0
	r31.s64 = 0;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r29,r28,2,0,29
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f29,f13
	f29.f64 = double(float(ctx.f13.f64));
	// addi r30,r24,-4
	r30.s64 = r24.s64 + -4;
loc_826E3F14:
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fadds f11,f12,f26
	ctx.f11.f64 = double(float(ctx.f12.f64 + f26.f64));
	// fmuls f10,f11,f29
	ctx.f10.f64 = double(float(ctx.f11.f64 * f29.f64));
	// fmuls f9,f10,f27
	ctx.f9.f64 = double(float(ctx.f10.f64 * f27.f64));
	// fdivs f1,f9,f28
	ctx.f1.f64 = double(float(ctx.f9.f64 / f28.f64));
	// bl 0x826a15c0
	ctx.lr = 0x826E3F3C;
	sub_826A15C0(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// lwzu r11,4(r30)
	ea = 4 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(r31.s32, r27.s32, ctx.xer);
	// fmuls f7,f8,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 * f30.f64));
	// fsubs f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 - f31.f64));
	// fadds f5,f7,f31
	ctx.f5.f64 = double(float(ctx.f7.f64 + f31.f64));
	// fsel f4,f7,f5,f6
	ctx.f4.f64 = ctx.f7.f64 >= 0.0 ? ctx.f5.f64 : ctx.f6.f64;
	// fmuls f3,f4,f25
	ctx.f3.f64 = double(float(ctx.f4.f64 * f25.f64));
	// fctiwz f2,f3
	ctx.f2.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f2.u64);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f1,112(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// fmuls f12,f13,f24
	ctx.f12.f64 = double(float(ctx.f13.f64 * f24.f64));
	// stfsx f12,r11,r29
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + r29.u32, temp.u32);
	// blt cr6,0x826e3f14
	if (ctx.cr6.lt) goto loc_826E3F14;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(r28.s32, r27.s32, ctx.xer);
	// blt cr6,0x826e3ed8
	if (ctx.cr6.lt) goto loc_826E3ED8;
loc_826E3F98:
	// lhz r11,34(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 34);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x826e3d04
	if (!ctx.cr6.gt) goto loc_826E3D04;
loc_826E3FA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ccc
	ctx.lr = 0x826E3FB8;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82703590) {
	REX_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,5(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 5);
	// lbz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// lbz r8,3(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 3);
	// lbz r7,1(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r6,2(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// stb r11,5(r3)
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stb r10,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// stb r9,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r9.u8);
	// stb r7,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r7.u8);
	// stb r8,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r8.u8);
	// stb r6,3(r3)
	REX_STORE_U8(ctx.r3.u32 + 3, ctx.r6.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827039D0) {
	REX_FUNC_PROLOGUE();
	// lwz r10,3692(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3692);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827039e8
	if (!ctx.cr6.eq) goto loc_827039E8;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_827039E8:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,284(r11)
	REX_STORE_U32(ctx.r11.u32 + 284, ctx.r10.u32);
	// stw r10,3408(r11)
	REX_STORE_U32(ctx.r11.u32 + 3408, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827053C8) {
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
	ctx.lr = 0x827053D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r30,5
	r30.s64 = 5;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x8270544c
	if (!ctx.cr6.lt) goto loc_8270544C;
loc_827053F4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270544c
	if (ctx.cr6.eq) goto loc_8270544C;
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
	// bge 0x8270543c
	if (!ctx.cr0.lt) goto loc_8270543C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270543C;
	sub_82725E38(ctx, base);
loc_8270543C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x827053f4
	if (ctx.cr6.gt) goto loc_827053F4;
loc_8270544C:
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
	// add r28,r11,r29
	r28.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x82705484
	if (!ctx.cr0.lt) goto loc_82705484;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82705484;
	sub_82725E38(ctx, base);
loc_82705484:
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// stw r28,3680(r27)
	REX_STORE_U32(r27.u32 + 3680, r28.u32);
	// li r30,11
	r30.s64 = 11;
	// li r29,0
	r29.s64 = 0;
	// stw r28,12688(r11)
	REX_STORE_U32(ctx.r11.u32 + 12688, r28.u32);
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bge cr6,0x82705504
	if (!ctx.cr6.lt) goto loc_82705504;
loc_827054AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82705504
	if (ctx.cr6.eq) goto loc_82705504;
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
	// bge 0x827054f4
	if (!ctx.cr0.lt) goto loc_827054F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827054F4;
	sub_82725E38(ctx, base);
loc_827054F4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x827054ac
	if (ctx.cr6.gt) goto loc_827054AC;
loc_82705504:
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
	// add r28,r11,r29
	r28.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8270553c
	if (!ctx.cr0.lt) goto loc_8270553C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270553C;
	sub_82725E38(ctx, base);
loc_8270553C:
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// stw r28,3684(r27)
	REX_STORE_U32(r27.u32 + 3684, r28.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r30,1
	r30.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// stw r28,12684(r11)
	REX_STORE_U32(ctx.r11.u32 + 12684, r28.u32);
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// stw r10,3924(r27)
	REX_STORE_U32(r27.u32 + 3924, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x827055c4
	if (!ctx.cr6.lt) goto loc_827055C4;
loc_8270556C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827055c4
	if (ctx.cr6.eq) goto loc_827055C4;
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
	// bge 0x827055b4
	if (!ctx.cr0.lt) goto loc_827055B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827055B4;
	sub_82725E38(ctx, base);
loc_827055B4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270556c
	if (ctx.cr6.gt) goto loc_8270556C;
loc_827055C4:
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
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x827055fc
	if (!ctx.cr0.lt) goto loc_827055FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827055FC;
	sub_82725E38(ctx, base);
loc_827055FC:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,1
	r30.s64 = 1;
	// stw r29,3912(r27)
	REX_STORE_U32(r27.u32 + 3912, r29.u32);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82705674
	if (!ctx.cr6.lt) goto loc_82705674;
loc_8270561C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82705674
	if (ctx.cr6.eq) goto loc_82705674;
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
	// bge 0x82705664
	if (!ctx.cr0.lt) goto loc_82705664;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82705664;
	sub_82725E38(ctx, base);
loc_82705664:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270561c
	if (ctx.cr6.gt) goto loc_8270561C;
loc_82705674:
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
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x827056ac
	if (!ctx.cr0.lt) goto loc_827056AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827056AC;
	sub_82725E38(ctx, base);
loc_827056AC:
	// stw r29,3916(r27)
	REX_STORE_U32(r27.u32 + 3916, r29.u32);
	// li r30,1
	r30.s64 = 1;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82705724
	if (!ctx.cr6.lt) goto loc_82705724;
loc_827056CC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82705724
	if (ctx.cr6.eq) goto loc_82705724;
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
	// bge 0x82705714
	if (!ctx.cr0.lt) goto loc_82705714;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82705714;
	sub_82725E38(ctx, base);
loc_82705714:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x827056cc
	if (ctx.cr6.gt) goto loc_827056CC;
loc_82705724:
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
	// bge 0x8270575c
	if (!ctx.cr0.lt) goto loc_8270575C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270575C;
	sub_82725E38(ctx, base);
loc_8270575C:
	// stw r30,436(r27)
	REX_STORE_U32(r27.u32 + 436, r30.u32);
	// li r29,0
	r29.s64 = 0;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,1
	r30.s64 = 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x827057d4
	if (!ctx.cr6.lt) goto loc_827057D4;
loc_8270577C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827057d4
	if (ctx.cr6.eq) goto loc_827057D4;
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
	// bge 0x827057c4
	if (!ctx.cr0.lt) goto loc_827057C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827057C4;
	sub_82725E38(ctx, base);
loc_827057C4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270577c
	if (ctx.cr6.gt) goto loc_8270577C;
loc_827057D4:
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
	// bge 0x8270580c
	if (!ctx.cr0.lt) goto loc_8270580C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270580C;
	sub_82725E38(ctx, base);
loc_8270580C:
	// stw r30,3908(r27)
	REX_STORE_U32(r27.u32 + 3908, r30.u32);
	// li r29,0
	r29.s64 = 0;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,1
	r30.s64 = 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82705884
	if (!ctx.cr6.lt) goto loc_82705884;
loc_8270582C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82705884
	if (ctx.cr6.eq) goto loc_82705884;
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
	// bge 0x82705874
	if (!ctx.cr0.lt) goto loc_82705874;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82705874;
	sub_82725E38(ctx, base);
loc_82705874:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270582c
	if (ctx.cr6.gt) goto loc_8270582C;
loc_82705884:
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
	// bge 0x827058bc
	if (!ctx.cr0.lt) goto loc_827058BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827058BC;
	sub_82725E38(ctx, base);
loc_827058BC:
	// stw r30,444(r27)
	REX_STORE_U32(r27.u32 + 444, r30.u32);
	// li r30,1
	r30.s64 = 1;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82705934
	if (!ctx.cr6.lt) goto loc_82705934;
loc_827058DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82705934
	if (ctx.cr6.eq) goto loc_82705934;
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
	// bge 0x82705924
	if (!ctx.cr0.lt) goto loc_82705924;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82705924;
	sub_82725E38(ctx, base);
loc_82705924:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x827058dc
	if (ctx.cr6.gt) goto loc_827058DC;
loc_82705934:
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
	// bge 0x8270596c
	if (!ctx.cr0.lt) goto loc_8270596C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270596C;
	sub_82725E38(ctx, base);
loc_8270596C:
	// stw r30,396(r27)
	REX_STORE_U32(r27.u32 + 396, r30.u32);
	// li r30,3
	r30.s64 = 3;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x827059e4
	if (!ctx.cr6.lt) goto loc_827059E4;
loc_8270598C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827059e4
	if (ctx.cr6.eq) goto loc_827059E4;
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
	// bge 0x827059d4
	if (!ctx.cr0.lt) goto loc_827059D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827059D4;
	sub_82725E38(ctx, base);
loc_827059D4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270598c
	if (ctx.cr6.gt) goto loc_8270598C;
loc_827059E4:
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
	// bge 0x82705a1c
	if (!ctx.cr0.lt) goto loc_82705A1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82705A1C;
	sub_82725E38(ctx, base);
loc_82705A1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,15496(r27)
	REX_STORE_U32(r27.u32 + 15496, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_827439C0) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	uint32_t ea{};
	// vspltisb v0,15
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0xF)));
	// srawi. r10,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 6;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// vspltisb v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_set1_epi8(char(0x1)));
	// vslb v0,v0,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// ble 0x82743a44
	if (!ctx.cr0.gt) goto loc_82743A44;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r6,-16
	ctx.r6.s64 = -16;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-32
	ctx.r8.s64 = -32;
	// li r10,16
	ctx.r10.s64 = 16;
loc_827439EC:
	// lvx128 v12,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsububm v10,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v9,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsububm v8,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v7,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsububm v6,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsububm v5,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsrab v4,v10,v13
	ctx.v4.s8[0] = ctx.v10.s8[0] >> (ctx.v13.u8[0] & 0x7);
	ctx.v4.s8[1] = ctx.v10.s8[1] >> (ctx.v13.u8[1] & 0x7);
	ctx.v4.s8[2] = ctx.v10.s8[2] >> (ctx.v13.u8[2] & 0x7);
	ctx.v4.s8[3] = ctx.v10.s8[3] >> (ctx.v13.u8[3] & 0x7);
	ctx.v4.s8[4] = ctx.v10.s8[4] >> (ctx.v13.u8[4] & 0x7);
	ctx.v4.s8[5] = ctx.v10.s8[5] >> (ctx.v13.u8[5] & 0x7);
	ctx.v4.s8[6] = ctx.v10.s8[6] >> (ctx.v13.u8[6] & 0x7);
	ctx.v4.s8[7] = ctx.v10.s8[7] >> (ctx.v13.u8[7] & 0x7);
	ctx.v4.s8[8] = ctx.v10.s8[8] >> (ctx.v13.u8[8] & 0x7);
	ctx.v4.s8[9] = ctx.v10.s8[9] >> (ctx.v13.u8[9] & 0x7);
	ctx.v4.s8[10] = ctx.v10.s8[10] >> (ctx.v13.u8[10] & 0x7);
	ctx.v4.s8[11] = ctx.v10.s8[11] >> (ctx.v13.u8[11] & 0x7);
	ctx.v4.s8[12] = ctx.v10.s8[12] >> (ctx.v13.u8[12] & 0x7);
	ctx.v4.s8[13] = ctx.v10.s8[13] >> (ctx.v13.u8[13] & 0x7);
	ctx.v4.s8[14] = ctx.v10.s8[14] >> (ctx.v13.u8[14] & 0x7);
	ctx.v4.s8[15] = ctx.v10.s8[15] >> (ctx.v13.u8[15] & 0x7);
	// vsrab v3,v8,v13
	ctx.v3.s8[0] = ctx.v8.s8[0] >> (ctx.v13.u8[0] & 0x7);
	ctx.v3.s8[1] = ctx.v8.s8[1] >> (ctx.v13.u8[1] & 0x7);
	ctx.v3.s8[2] = ctx.v8.s8[2] >> (ctx.v13.u8[2] & 0x7);
	ctx.v3.s8[3] = ctx.v8.s8[3] >> (ctx.v13.u8[3] & 0x7);
	ctx.v3.s8[4] = ctx.v8.s8[4] >> (ctx.v13.u8[4] & 0x7);
	ctx.v3.s8[5] = ctx.v8.s8[5] >> (ctx.v13.u8[5] & 0x7);
	ctx.v3.s8[6] = ctx.v8.s8[6] >> (ctx.v13.u8[6] & 0x7);
	ctx.v3.s8[7] = ctx.v8.s8[7] >> (ctx.v13.u8[7] & 0x7);
	ctx.v3.s8[8] = ctx.v8.s8[8] >> (ctx.v13.u8[8] & 0x7);
	ctx.v3.s8[9] = ctx.v8.s8[9] >> (ctx.v13.u8[9] & 0x7);
	ctx.v3.s8[10] = ctx.v8.s8[10] >> (ctx.v13.u8[10] & 0x7);
	ctx.v3.s8[11] = ctx.v8.s8[11] >> (ctx.v13.u8[11] & 0x7);
	ctx.v3.s8[12] = ctx.v8.s8[12] >> (ctx.v13.u8[12] & 0x7);
	ctx.v3.s8[13] = ctx.v8.s8[13] >> (ctx.v13.u8[13] & 0x7);
	ctx.v3.s8[14] = ctx.v8.s8[14] >> (ctx.v13.u8[14] & 0x7);
	ctx.v3.s8[15] = ctx.v8.s8[15] >> (ctx.v13.u8[15] & 0x7);
	// vsrab v2,v6,v13
	ctx.v2.s8[0] = ctx.v6.s8[0] >> (ctx.v13.u8[0] & 0x7);
	ctx.v2.s8[1] = ctx.v6.s8[1] >> (ctx.v13.u8[1] & 0x7);
	ctx.v2.s8[2] = ctx.v6.s8[2] >> (ctx.v13.u8[2] & 0x7);
	ctx.v2.s8[3] = ctx.v6.s8[3] >> (ctx.v13.u8[3] & 0x7);
	ctx.v2.s8[4] = ctx.v6.s8[4] >> (ctx.v13.u8[4] & 0x7);
	ctx.v2.s8[5] = ctx.v6.s8[5] >> (ctx.v13.u8[5] & 0x7);
	ctx.v2.s8[6] = ctx.v6.s8[6] >> (ctx.v13.u8[6] & 0x7);
	ctx.v2.s8[7] = ctx.v6.s8[7] >> (ctx.v13.u8[7] & 0x7);
	ctx.v2.s8[8] = ctx.v6.s8[8] >> (ctx.v13.u8[8] & 0x7);
	ctx.v2.s8[9] = ctx.v6.s8[9] >> (ctx.v13.u8[9] & 0x7);
	ctx.v2.s8[10] = ctx.v6.s8[10] >> (ctx.v13.u8[10] & 0x7);
	ctx.v2.s8[11] = ctx.v6.s8[11] >> (ctx.v13.u8[11] & 0x7);
	ctx.v2.s8[12] = ctx.v6.s8[12] >> (ctx.v13.u8[12] & 0x7);
	ctx.v2.s8[13] = ctx.v6.s8[13] >> (ctx.v13.u8[13] & 0x7);
	ctx.v2.s8[14] = ctx.v6.s8[14] >> (ctx.v13.u8[14] & 0x7);
	ctx.v2.s8[15] = ctx.v6.s8[15] >> (ctx.v13.u8[15] & 0x7);
	// vsrab v1,v5,v13
	ctx.v1.s8[0] = ctx.v5.s8[0] >> (ctx.v13.u8[0] & 0x7);
	ctx.v1.s8[1] = ctx.v5.s8[1] >> (ctx.v13.u8[1] & 0x7);
	ctx.v1.s8[2] = ctx.v5.s8[2] >> (ctx.v13.u8[2] & 0x7);
	ctx.v1.s8[3] = ctx.v5.s8[3] >> (ctx.v13.u8[3] & 0x7);
	ctx.v1.s8[4] = ctx.v5.s8[4] >> (ctx.v13.u8[4] & 0x7);
	ctx.v1.s8[5] = ctx.v5.s8[5] >> (ctx.v13.u8[5] & 0x7);
	ctx.v1.s8[6] = ctx.v5.s8[6] >> (ctx.v13.u8[6] & 0x7);
	ctx.v1.s8[7] = ctx.v5.s8[7] >> (ctx.v13.u8[7] & 0x7);
	ctx.v1.s8[8] = ctx.v5.s8[8] >> (ctx.v13.u8[8] & 0x7);
	ctx.v1.s8[9] = ctx.v5.s8[9] >> (ctx.v13.u8[9] & 0x7);
	ctx.v1.s8[10] = ctx.v5.s8[10] >> (ctx.v13.u8[10] & 0x7);
	ctx.v1.s8[11] = ctx.v5.s8[11] >> (ctx.v13.u8[11] & 0x7);
	ctx.v1.s8[12] = ctx.v5.s8[12] >> (ctx.v13.u8[12] & 0x7);
	ctx.v1.s8[13] = ctx.v5.s8[13] >> (ctx.v13.u8[13] & 0x7);
	ctx.v1.s8[14] = ctx.v5.s8[14] >> (ctx.v13.u8[14] & 0x7);
	ctx.v1.s8[15] = ctx.v5.s8[15] >> (ctx.v13.u8[15] & 0x7);
	// vaddubm v31,v4,v0
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddubm v30,v3,v0
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddubm v29,v2,v0
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddubm v28,v1,v0
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v31,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v30,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v29,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v28,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bdnz 0x827439ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827439EC;
loc_82743A44:
	// srawi. r10,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr 
	if (!ctx.cr0.gt) return;
	// subf r11,r5,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r5.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82743A54:
	// lvx128 v12,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsububm v10,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsububm v9,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsrab v8,v10,v13
	ctx.v8.s8[0] = ctx.v10.s8[0] >> (ctx.v13.u8[0] & 0x7);
	ctx.v8.s8[1] = ctx.v10.s8[1] >> (ctx.v13.u8[1] & 0x7);
	ctx.v8.s8[2] = ctx.v10.s8[2] >> (ctx.v13.u8[2] & 0x7);
	ctx.v8.s8[3] = ctx.v10.s8[3] >> (ctx.v13.u8[3] & 0x7);
	ctx.v8.s8[4] = ctx.v10.s8[4] >> (ctx.v13.u8[4] & 0x7);
	ctx.v8.s8[5] = ctx.v10.s8[5] >> (ctx.v13.u8[5] & 0x7);
	ctx.v8.s8[6] = ctx.v10.s8[6] >> (ctx.v13.u8[6] & 0x7);
	ctx.v8.s8[7] = ctx.v10.s8[7] >> (ctx.v13.u8[7] & 0x7);
	ctx.v8.s8[8] = ctx.v10.s8[8] >> (ctx.v13.u8[8] & 0x7);
	ctx.v8.s8[9] = ctx.v10.s8[9] >> (ctx.v13.u8[9] & 0x7);
	ctx.v8.s8[10] = ctx.v10.s8[10] >> (ctx.v13.u8[10] & 0x7);
	ctx.v8.s8[11] = ctx.v10.s8[11] >> (ctx.v13.u8[11] & 0x7);
	ctx.v8.s8[12] = ctx.v10.s8[12] >> (ctx.v13.u8[12] & 0x7);
	ctx.v8.s8[13] = ctx.v10.s8[13] >> (ctx.v13.u8[13] & 0x7);
	ctx.v8.s8[14] = ctx.v10.s8[14] >> (ctx.v13.u8[14] & 0x7);
	ctx.v8.s8[15] = ctx.v10.s8[15] >> (ctx.v13.u8[15] & 0x7);
	// vsrab v7,v9,v13
	ctx.v7.s8[0] = ctx.v9.s8[0] >> (ctx.v13.u8[0] & 0x7);
	ctx.v7.s8[1] = ctx.v9.s8[1] >> (ctx.v13.u8[1] & 0x7);
	ctx.v7.s8[2] = ctx.v9.s8[2] >> (ctx.v13.u8[2] & 0x7);
	ctx.v7.s8[3] = ctx.v9.s8[3] >> (ctx.v13.u8[3] & 0x7);
	ctx.v7.s8[4] = ctx.v9.s8[4] >> (ctx.v13.u8[4] & 0x7);
	ctx.v7.s8[5] = ctx.v9.s8[5] >> (ctx.v13.u8[5] & 0x7);
	ctx.v7.s8[6] = ctx.v9.s8[6] >> (ctx.v13.u8[6] & 0x7);
	ctx.v7.s8[7] = ctx.v9.s8[7] >> (ctx.v13.u8[7] & 0x7);
	ctx.v7.s8[8] = ctx.v9.s8[8] >> (ctx.v13.u8[8] & 0x7);
	ctx.v7.s8[9] = ctx.v9.s8[9] >> (ctx.v13.u8[9] & 0x7);
	ctx.v7.s8[10] = ctx.v9.s8[10] >> (ctx.v13.u8[10] & 0x7);
	ctx.v7.s8[11] = ctx.v9.s8[11] >> (ctx.v13.u8[11] & 0x7);
	ctx.v7.s8[12] = ctx.v9.s8[12] >> (ctx.v13.u8[12] & 0x7);
	ctx.v7.s8[13] = ctx.v9.s8[13] >> (ctx.v13.u8[13] & 0x7);
	ctx.v7.s8[14] = ctx.v9.s8[14] >> (ctx.v13.u8[14] & 0x7);
	ctx.v7.s8[15] = ctx.v9.s8[15] >> (ctx.v13.u8[15] & 0x7);
	// vaddubm v6,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddubm v5,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v6,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v5,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// bdnz 0x82743a54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82743A54;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8274DD38) {
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
	ctx.lr = 0x8274DD40;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// mr r20,r10
	r20.u64 = ctx.r10.u64;
	// addi r11,r4,-5
	ctx.r11.s64 = ctx.r4.s64 + -5;
	// addi r24,r5,-5
	r24.s64 = ctx.r5.s64 + -5;
	// addi r25,r6,-5
	r25.s64 = ctx.r6.s64 + -5;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8274dde4
	if (!ctx.cr6.gt) goto loc_8274DDE4;
	// addi r10,r8,31
	ctx.r10.s64 = ctx.r8.s64 + 31;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// srawi r26,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	r26.s64 = ctx.r10.s32 >> 5;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// addi r27,r9,-1
	r27.s64 = ctx.r9.s64 + -1;
loc_8274DD7C:
	// mr r30,r23
	r30.u64 = r23.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x8274ddd8
	if (!ctx.cr6.gt) goto loc_8274DDD8;
	// lwz r6,204(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r29,r26
	r29.u64 = r26.u64;
loc_8274DD90:
	// lbzu r28,1(r27)
	ea = 1 + r27.u32;
	r28.u64 = REX_LOAD_U8(ea);
	r27.u32 = ea;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,248(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 248);
	// rlwinm r5,r28,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x82749ed8
	ctx.lr = 0x8274DDA8;
	sub_82749ED8(ctx, base);
	// lwz r6,204(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 204);
	// clrlwi r5,r28,28
	ctx.r5.u64 = r28.u32 & 0xF;
	// lwz r7,248(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 248);
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x82749ed8
	ctx.lr = 0x8274DDC4;
	sub_82749ED8(ctx, base);
	// lwz r6,204(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 204);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// rlwinm r11,r6,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// bne 0x8274dd90
	if (!ctx.cr0.eq) goto loc_8274DD90;
loc_8274DDD8:
	// addic. r21,r21,-1
	ctx.xer.ca = r21.u32 > 0;
	r21.s64 = r21.s64 + -1;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// addi r23,r23,8
	r23.s64 = r23.s64 + 8;
	// bne 0x8274dd7c
	if (!ctx.cr0.eq) goto loc_8274DD7C;
loc_8274DDE4:
	// srawi. r22,r22,1
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x1) != 0);
	r22.s64 = r22.s32 >> 1;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble 0x8274de68
	if (!ctx.cr0.gt) goto loc_8274DE68;
	// srawi r11,r19,1
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0x1) != 0);
	ctx.r11.s64 = r19.s32 >> 1;
	// mr r23,r22
	r23.u64 = r22.u64;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// addi r27,r20,-1
	r27.s64 = r20.s64 + -1;
	// srawi r26,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	r26.s64 = ctx.r11.s32 >> 5;
loc_8274DE00:
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x8274de5c
	if (!ctx.cr6.gt) goto loc_8274DE5C;
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r29,r26
	r29.u64 = r26.u64;
loc_8274DE14:
	// lbzu r28,1(r27)
	ea = 1 + r27.u32;
	r28.u64 = REX_LOAD_U8(ea);
	r27.u32 = ea;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,248(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 248);
	// rlwinm r5,r28,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x82749ed8
	ctx.lr = 0x8274DE2C;
	sub_82749ED8(ctx, base);
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// clrlwi r5,r28,28
	ctx.r5.u64 = r28.u32 & 0xF;
	// lwz r7,248(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 248);
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x82749ed8
	ctx.lr = 0x8274DE48;
	sub_82749ED8(ctx, base);
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// rlwinm r11,r6,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// bne 0x8274de14
	if (!ctx.cr0.eq) goto loc_8274DE14;
loc_8274DE5C:
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// addi r24,r24,8
	r24.s64 = r24.s64 + 8;
	// bne 0x8274de00
	if (!ctx.cr0.eq) goto loc_8274DE00;
loc_8274DE68:
	// lwz r10,276(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x8274def0
	if (!ctx.cr6.gt) goto loc_8274DEF0;
	// srawi r11,r19,1
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0x1) != 0);
	ctx.r11.s64 = r19.s32 >> 1;
	// mr r24,r22
	r24.u64 = r22.u64;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// addi r27,r10,-1
	r27.s64 = ctx.r10.s64 + -1;
	// srawi r26,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	r26.s64 = ctx.r11.s32 >> 5;
loc_8274DE88:
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x8274dee4
	if (!ctx.cr6.gt) goto loc_8274DEE4;
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r29,r26
	r29.u64 = r26.u64;
loc_8274DE9C:
	// lbzu r28,1(r27)
	ea = 1 + r27.u32;
	r28.u64 = REX_LOAD_U8(ea);
	r27.u32 = ea;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,248(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 248);
	// rlwinm r5,r28,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x82749ed8
	ctx.lr = 0x8274DEB4;
	sub_82749ED8(ctx, base);
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// clrlwi r5,r28,28
	ctx.r5.u64 = r28.u32 & 0xF;
	// lwz r7,248(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 248);
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x82749ed8
	ctx.lr = 0x8274DED0;
	sub_82749ED8(ctx, base);
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// rlwinm r11,r6,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// bne 0x8274de9c
	if (!ctx.cr0.eq) goto loc_8274DE9C;
loc_8274DEE4:
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
	// bne 0x8274de88
	if (!ctx.cr0.eq) goto loc_8274DE88;
loc_8274DEF0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_8275CA60) {
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
	ctx.lr = 0x8275CA68;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,332(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// lwz r10,152(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// rlwinm r26,r11,0,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,340(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// srawi r23,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	r23.s64 = r26.s32 >> 1;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// srawi r27,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	r27.s64 = ctx.r9.s32 >> 1;
	// beq cr6,0x8275cad4
	if (ctx.cr6.eq) goto loc_8275CAD4;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// lwz r11,15916(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15916);
	// lwz r27,324(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// lwz r31,316(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r26,308(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// bctrl 
	ctx.lr = 0x8275CACC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1ce4
	return;
loc_8275CAD4:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x8275cb50
	if (!ctx.cr6.gt) goto loc_8275CB50;
	// lwz r20,324(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// subf r22,r31,r8
	r22.u64 = ctx.r8.u64 - r31.u64;
	// lwz r24,316(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// subf r21,r30,r5
	r21.u64 = ctx.r5.u64 - r30.u64;
	// lwz r19,308(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
loc_8275CAF0:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8275CB00;
	sub_826A1E70(ctx, base);
	// add r29,r29,r25
	r29.u64 = r29.u64 + r25.u64;
	// add r28,r28,r24
	r28.u64 = r28.u64 + r24.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8275CB18;
	sub_826A1E70(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// add r4,r22,r31
	ctx.r4.u64 = r22.u64 + r31.u64;
	// add r3,r21,r30
	ctx.r3.u64 = r21.u64 + r30.u64;
	// add r29,r29,r25
	r29.u64 = r29.u64 + r25.u64;
	// add r28,r28,r24
	r28.u64 = r28.u64 + r24.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8275CB30;
	sub_826A1E70(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8275CB40;
	sub_826A1E70(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// add r31,r31,r19
	r31.u64 = r31.u64 + r19.u64;
	// add r30,r30,r20
	r30.u64 = r30.u64 + r20.u64;
	// bne 0x8275caf0
	if (!ctx.cr0.eq) goto loc_8275CAF0;
loc_8275CB50:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_82761850) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r9,r10,-28152
	ctx.r9.s64 = ctx.r10.s64 + -28152;
	// rlwinm r8,r11,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lwzx r10,r8,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// stw r6,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r10,r11,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// stw r8,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// lwz r7,1792(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1792);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827618bc
	if (ctx.cr6.eq) goto loc_827618BC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827618b4
	if (!ctx.cr6.gt) goto loc_827618B4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827618b8
	goto loc_827618B8;
loc_827618B4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_827618B8:
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_827618BC:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827618e0
	if (!ctx.cr6.gt) goto loc_827618E0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_827618E0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82765C30) {
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
	ctx.lr = 0x82765C38;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r15,0(r7)
	r15.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// li r22,0
	r22.s64 = 0;
	// lwz r14,4(r7)
	r14.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r18,1760(r3)
	r18.u64 = REX_LOAD_U32(ctx.r3.u32 + 1760);
	// mr r16,r5
	r16.u64 = ctx.r5.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,16(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r7,20(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mr r24,r22
	r24.u64 = r22.u64;
	// lwz r6,24(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// mr r19,r22
	r19.u64 = r22.u64;
	// lwz r28,4(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mr r26,r22
	r26.u64 = r22.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r23,0(r10)
	r23.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r20,28(r10)
	r20.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// addi r17,r11,1
	r17.s64 = ctx.r11.s64 + 1;
	// lwz r21,32(r10)
	r21.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// bl 0x826a2e60
	ctx.lr = 0x82765CB4;
	sub_826A2E60(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82765CC4;
	sub_826A2E60(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ori r25,r11,32768
	r25.u64 = ctx.r11.u64 | 32768;
	// bne cr6,0x827666ac
	if (!ctx.cr6.eq) goto loc_827666AC;
loc_82765CD4:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lbz r4,8(r23)
	ctx.r4.u64 = REX_LOAD_U8(r23.u32 + 8);
	// lwz r29,0(r23)
	r29.u64 = REX_LOAD_U32(r23.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
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
	// blt cr6,0x82765dc4
	if (ctx.cr6.lt) goto loc_82765DC4;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = r30.u32 & 0xF;
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
	// bge cr6,0x82765dbc
	if (!ctx.cr6.lt) goto loc_82765DBC;
loc_82765D24:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82765d50
	if (ctx.cr6.lt) goto loc_82765D50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x82765D40;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82765d24
	if (ctx.cr6.eq) goto loc_82765D24;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82765dfc
	goto loc_82765DFC;
loc_82765D50:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
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
loc_82765DBC:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82765dfc
	goto loc_82765DFC;
loc_82765DC4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x82765DCC;
	sub_82725F80(ctx, base);
loc_82765DCC:
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
	// bl 0x82725f80
	ctx.lr = 0x82765DE4;
	sub_82725F80(ctx, base);
	// add r10,r30,r25
	ctx.r10.u64 = r30.u64 + r25.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82765dcc
	if (ctx.cr6.lt) goto loc_82765DCC;
loc_82765DFC:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(r30.s32, r28.s32, ctx.xer);
	// beq cr6,0x82765e48
	if (ctx.cr6.eq) goto loc_82765E48;
	// cmpw cr6,r30,r17
	ctx.cr6.compare<int32_t>(r30.s32, r17.s32, ctx.xer);
	// blt cr6,0x82765e10
	if (ctx.cr6.lt) goto loc_82765E10;
	// li r24,1
	r24.s64 = 1;
loc_82765E10:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lbzx r11,r30,r20
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + r20.u32);
	// lbzx r28,r30,r21
	r28.u64 = REX_LOAD_U8(r30.u32 + r21.u32);
	// extsb r31,r11
	r31.s64 = ctx.r11.s8;
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82766620
	if (!ctx.cr0.lt) goto loc_82766620;
	// bl 0x82725e38
	ctx.lr = 0x82765E44;
	sub_82725E38(ctx, base);
	// b 0x82766620
	goto loc_82766620;
loc_82765E48:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82765e70
	if (!ctx.cr0.lt) goto loc_82765E70;
	// bl 0x82725e38
	ctx.lr = 0x82765E70;
	sub_82725E38(ctx, base);
loc_82765E70:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82766004
	if (ctx.cr6.eq) goto loc_82766004;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lbz r4,8(r23)
	ctx.r4.u64 = REX_LOAD_U8(r23.u32 + 8);
	// lwz r29,0(r23)
	r29.u64 = REX_LOAD_U32(r23.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
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
	// blt cr6,0x82765f68
	if (ctx.cr6.lt) goto loc_82765F68;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = r30.u32 & 0xF;
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
	// bge cr6,0x82765f60
	if (!ctx.cr6.lt) goto loc_82765F60;
loc_82765EC8:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82765ef4
	if (ctx.cr6.lt) goto loc_82765EF4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x82765EE4;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82765ec8
	if (ctx.cr6.eq) goto loc_82765EC8;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82765fa0
	goto loc_82765FA0;
loc_82765EF4:
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
loc_82765F60:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82765fa0
	goto loc_82765FA0;
loc_82765F68:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x82765F70;
	sub_82725F80(ctx, base);
loc_82765F70:
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
	// bl 0x82725f80
	ctx.lr = 0x82765F88;
	sub_82725F80(ctx, base);
	// add r10,r30,r25
	ctx.r10.u64 = r30.u64 + r25.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82765f70
	if (ctx.cr6.lt) goto loc_82765F70;
loc_82765FA0:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(r30.s32, r28.s32, ctx.xer);
	// beq cr6,0x82767068
	if (ctx.cr6.eq) goto loc_82767068;
	// lbzx r11,r30,r20
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + r20.u32);
	// cmpw cr6,r30,r17
	ctx.cr6.compare<int32_t>(r30.s32, r17.s32, ctx.xer);
	// lbzx r28,r30,r21
	r28.u64 = REX_LOAD_U8(r30.u32 + r21.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// blt cr6,0x82765fc8
	if (ctx.cr6.lt) goto loc_82765FC8;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r24,1
	r24.s64 = 1;
	// b 0x82765fcc
	goto loc_82765FCC;
loc_82765FC8:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82765FCC:
	// lbzx r9,r28,r10
	ctx.r9.u64 = REX_LOAD_U8(r28.u32 + ctx.r10.u32);
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82766620
	if (!ctx.cr0.lt) goto loc_82766620;
	// bl 0x82725e38
	ctx.lr = 0x82766000;
	sub_82725E38(ctx, base);
	// b 0x82766620
	goto loc_82766620;
loc_82766004:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8276602c
	if (!ctx.cr0.lt) goto loc_8276602C;
	// bl 0x82725e38
	ctx.lr = 0x8276602C;
	sub_82725E38(ctx, base);
loc_8276602C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x827661c4
	if (ctx.cr6.eq) goto loc_827661C4;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lbz r4,8(r23)
	ctx.r4.u64 = REX_LOAD_U8(r23.u32 + 8);
	// lwz r29,0(r23)
	r29.u64 = REX_LOAD_U32(r23.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
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
	// blt cr6,0x82766124
	if (ctx.cr6.lt) goto loc_82766124;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = r30.u32 & 0xF;
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
	// bge cr6,0x8276611c
	if (!ctx.cr6.lt) goto loc_8276611C;
loc_82766084:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827660b0
	if (ctx.cr6.lt) goto loc_827660B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x827660A0;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82766084
	if (ctx.cr6.eq) goto loc_82766084;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x8276615c
	goto loc_8276615C;
loc_827660B0:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
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
loc_8276611C:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x8276615c
	goto loc_8276615C;
loc_82766124:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x8276612C;
	sub_82725F80(ctx, base);
loc_8276612C:
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
	// bl 0x82725f80
	ctx.lr = 0x82766144;
	sub_82725F80(ctx, base);
	// add r10,r30,r25
	ctx.r10.u64 = r30.u64 + r25.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8276612c
	if (ctx.cr6.lt) goto loc_8276612C;
loc_8276615C:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(r30.s32, r28.s32, ctx.xer);
	// beq cr6,0x82767068
	if (ctx.cr6.eq) goto loc_82767068;
	// lbzx r10,r30,r20
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + r20.u32);
	// cmpw cr6,r30,r17
	ctx.cr6.compare<int32_t>(r30.s32, r17.s32, ctx.xer);
	// lbzx r11,r30,r21
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + r21.u32);
	// extsb r31,r10
	r31.s64 = ctx.r10.s8;
	// lwz r10,1932(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 1932);
	// blt cr6,0x82766188
	if (ctx.cr6.lt) goto loc_82766188;
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r24,1
	r24.s64 = 1;
	// b 0x8276618c
	goto loc_8276618C;
loc_82766188:
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_8276618C:
	// lbzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + ctx.r9.u32);
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82766620
	if (!ctx.cr0.lt) goto loc_82766620;
	// bl 0x82725e38
	ctx.lr = 0x827661C0;
	sub_82725E38(ctx, base);
	// b 0x82766620
	goto loc_82766620;
loc_827661C4:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x827661ec
	if (!ctx.cr0.lt) goto loc_827661EC;
	// bl 0x82725e38
	ctx.lr = 0x827661EC;
	sub_82725E38(ctx, base);
loc_827661EC:
	// lwz r11,15504(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 15504);
	// mr r24,r31
	r24.u64 = r31.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x827664b0
	if (ctx.cr6.lt) goto loc_827664B0;
	// lwz r11,1968(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1968);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82766214
	if (ctx.cr6.eq) goto loc_82766214;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82762ce0
	ctx.lr = 0x82766210;
	sub_82762CE0(ctx, base);
	// stw r22,1968(r27)
	REX_STORE_U32(r27.u32 + 1968, r22.u32);
loc_82766214:
	// lwz r30,84(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r31,1976(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 1976);
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(r31.u32, 32, ctx.xer);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x82766238
	if (!ctx.cr6.gt) goto loc_82766238;
	// mr r28,r22
	r28.u64 = r22.u64;
	// b 0x827662e4
	goto loc_827662E4;
loc_82766238:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82766248
	if (!ctx.cr6.eq) goto loc_82766248;
	// mr r28,r22
	r28.u64 = r22.u64;
	// b 0x827662e4
	goto loc_827662E4;
loc_82766248:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827662a8
	if (!ctx.cr6.gt) goto loc_827662A8;
loc_82766250:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827662a8
	if (ctx.cr6.eq) goto loc_827662A8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r31,r11,r31
	r31.u64 = r31.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r31.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// bge 0x82766298
	if (!ctx.cr0.lt) goto loc_82766298;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x82766298;
	sub_82725E38(ctx, base);
loc_82766298:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82766250
	if (ctx.cr6.gt) goto loc_82766250;
loc_827662A8:
	// subfic r11,r31,64
	ctx.xer.ca = r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r31.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r8,r31,32
	ctx.r8.u64 = r31.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r31,r10
	ctx.r6.u64 = ctx.r10.u64 - r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r4.u64);
	// bge 0x827662e0
	if (!ctx.cr0.lt) goto loc_827662E0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x827662E0;
	sub_82725E38(ctx, base);
loc_827662E0:
	// mr r28,r31
	r28.u64 = r31.u64;
loc_827662E4:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8276630c
	if (!ctx.cr0.lt) goto loc_8276630C;
	// bl 0x82725e38
	ctx.lr = 0x8276630C;
	sub_82725E38(ctx, base);
loc_8276630C:
	// lwz r30,84(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// lwz r31,1972(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 1972);
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x827663f4
	if (ctx.cr6.eq) goto loc_827663F4;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(r31.u32, 32, ctx.xer);
	// ble cr6,0x8276633c
	if (!ctx.cr6.gt) goto loc_8276633C;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// neg r31,r22
	r31.s64 = static_cast<int64_t>(-r22.u64);
	// b 0x82766610
	goto loc_82766610;
loc_8276633C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82766350
	if (!ctx.cr6.eq) goto loc_82766350;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// neg r31,r22
	r31.s64 = static_cast<int64_t>(-r22.u64);
	// b 0x82766610
	goto loc_82766610;
loc_82766350:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827663b0
	if (!ctx.cr6.gt) goto loc_827663B0;
loc_82766358:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827663b0
	if (ctx.cr6.eq) goto loc_827663B0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r31,r11,r31
	r31.u64 = r31.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r31.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// bge 0x827663a0
	if (!ctx.cr0.lt) goto loc_827663A0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x827663A0;
	sub_82725E38(ctx, base);
loc_827663A0:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82766358
	if (ctx.cr6.gt) goto loc_82766358;
loc_827663B0:
	// subfic r11,r31,64
	ctx.xer.ca = r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r31.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r8,r31,32
	ctx.r8.u64 = r31.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r31,r10
	ctx.r6.u64 = ctx.r10.u64 - r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r4.u64);
	// bge 0x827663e8
	if (!ctx.cr0.lt) goto loc_827663E8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x827663E8;
	sub_82725E38(ctx, base);
loc_827663E8:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// neg r31,r31
	r31.s64 = static_cast<int64_t>(-r31.u64);
	// b 0x82766610
	goto loc_82766610;
loc_827663F4:
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(r31.u32, 32, ctx.xer);
	// ble cr6,0x82766404
	if (!ctx.cr6.gt) goto loc_82766404;
	// mr r31,r22
	r31.u64 = r22.u64;
	// b 0x82766610
	goto loc_82766610;
loc_82766404:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82766414
	if (!ctx.cr6.eq) goto loc_82766414;
	// mr r31,r22
	r31.u64 = r22.u64;
	// b 0x82766610
	goto loc_82766610;
loc_82766414:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82766474
	if (!ctx.cr6.gt) goto loc_82766474;
loc_8276641C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82766474
	if (ctx.cr6.eq) goto loc_82766474;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r31,r11,r31
	r31.u64 = r31.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r31.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// bge 0x82766464
	if (!ctx.cr0.lt) goto loc_82766464;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x82766464;
	sub_82725E38(ctx, base);
loc_82766464:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8276641c
	if (ctx.cr6.gt) goto loc_8276641C;
loc_82766474:
	// subfic r11,r31,64
	ctx.xer.ca = r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r31.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r8,r31,32
	ctx.r8.u64 = r31.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r31,r10
	ctx.r6.u64 = ctx.r10.u64 - r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r4.u64);
	// bge 0x82766610
	if (!ctx.cr0.lt) goto loc_82766610;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x827664AC;
	sub_82725E38(ctx, base);
	// b 0x82766610
	goto loc_82766610;
loc_827664B0:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,6
	r30.s64 = 6;
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x82766524
	if (!ctx.cr6.lt) goto loc_82766524;
loc_827664CC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82766524
	if (ctx.cr6.eq) goto loc_82766524;
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
	// bge 0x82766514
	if (!ctx.cr0.lt) goto loc_82766514;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82766514;
	sub_82725E38(ctx, base);
loc_82766514:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x827664cc
	if (ctx.cr6.gt) goto loc_827664CC;
loc_82766524:
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
	// bge 0x8276655c
	if (!ctx.cr0.lt) goto loc_8276655C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8276655C;
	sub_82725E38(ctx, base);
loc_8276655C:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r28,r30
	r28.u64 = r30.u64;
	// li r30,8
	r30.s64 = 8;
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x827665d4
	if (!ctx.cr6.lt) goto loc_827665D4;
loc_8276657C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827665d4
	if (ctx.cr6.eq) goto loc_827665D4;
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
	// bge 0x827665c4
	if (!ctx.cr0.lt) goto loc_827665C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827665C4;
	sub_82725E38(ctx, base);
loc_827665C4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8276657c
	if (ctx.cr6.gt) goto loc_8276657C;
loc_827665D4:
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
	// bge 0x8276660c
	if (!ctx.cr0.lt) goto loc_8276660C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8276660C;
	sub_82725E38(ctx, base);
loc_8276660C:
	// extsb r31,r30
	r31.s64 = r30.s8;
loc_82766610:
	// rlwinm r30,r31,1,31,31
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge cr6,0x82766620
	if (!ctx.cr6.lt) goto loc_82766620;
	// neg r31,r31
	r31.s64 = static_cast<int64_t>(-r31.u64);
loc_82766620:
	// lwz r10,84(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 84);
	// add r11,r28,r19
	ctx.r11.u64 = r28.u64 + r19.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82767068
	if (!ctx.cr6.eq) goto loc_82767068;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x82767068
	if (!ctx.cr6.lt) goto loc_82767068;
	// lwz r10,1828(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 1828);
	// lbzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82766664
	if (ctx.cr6.eq) goto loc_82766664;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r8,r10,29
	ctx.r8.u64 = ctx.r10.u32 & 0x7;
	// slw r7,r9,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// or r26,r7,r26
	r26.u64 = ctx.r7.u64 | r26.u64;
loc_82766664:
	// mullw r10,r31,r15
	ctx.r10.s64 = int64_t(r31.s32) * int64_t(r15.s32);
	// lbzx r9,r11,r16
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + r16.u32);
	// addi r8,r30,-1
	ctx.r8.s64 = r30.s64 + -1;
	// add r7,r10,r14
	ctx.r7.u64 = ctx.r10.u64 + r14.u64;
	// not r6,r8
	ctx.r6.u64 = ~ctx.r8.u64;
	// rotlwi r5,r9,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// xor r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// addi r19,r11,1
	r19.s64 = ctx.r11.s64 + 1;
	// subf r3,r6,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r6.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// sthx r3,r5,r18
	REX_STORE_U16(ctx.r5.u32 + r18.u32, ctx.r3.u16);
	// bne cr6,0x8276669c
	if (!ctx.cr6.eq) goto loc_8276669C;
	// lwz r28,96(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x82765cd4
	goto loc_82765CD4;
loc_8276669C:
	// stw r26,1940(r27)
	REX_STORE_U32(r27.u32 + 1940, r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd0
	return;
loc_827666AC:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lbz r4,8(r23)
	ctx.r4.u64 = REX_LOAD_U8(r23.u32 + 8);
	// lwz r29,0(r23)
	r29.u64 = REX_LOAD_U32(r23.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
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
	// blt cr6,0x8276679c
	if (ctx.cr6.lt) goto loc_8276679C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = r30.u32 & 0xF;
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
	// bge cr6,0x82766794
	if (!ctx.cr6.lt) goto loc_82766794;
loc_827666FC:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82766728
	if (ctx.cr6.lt) goto loc_82766728;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x82766718;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x827666fc
	if (ctx.cr6.eq) goto loc_827666FC;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x827667d4
	goto loc_827667D4;
loc_82766728:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
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
loc_82766794:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x827667d4
	goto loc_827667D4;
loc_8276679C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x827667A4;
	sub_82725F80(ctx, base);
loc_827667A4:
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
	// bl 0x82725f80
	ctx.lr = 0x827667BC;
	sub_82725F80(ctx, base);
	// add r10,r30,r25
	ctx.r10.u64 = r30.u64 + r25.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x827667a4
	if (ctx.cr6.lt) goto loc_827667A4;
loc_827667D4:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(r30.s32, r28.s32, ctx.xer);
	// beq cr6,0x82766824
	if (ctx.cr6.eq) goto loc_82766824;
	// cmpw cr6,r30,r17
	ctx.cr6.compare<int32_t>(r30.s32, r17.s32, ctx.xer);
	// blt cr6,0x827667e8
	if (ctx.cr6.lt) goto loc_827667E8;
	// li r24,1
	r24.s64 = 1;
loc_827667E8:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lbzx r28,r30,r21
	r28.u64 = REX_LOAD_U8(r30.u32 + r21.u32);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82766814
	if (!ctx.cr0.lt) goto loc_82766814;
	// bl 0x82725e38
	ctx.lr = 0x82766814;
	sub_82725E38(ctx, base);
loc_82766814:
	// lbzx r11,r30,r20
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + r20.u32);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// extsb r31,r11
	r31.s64 = ctx.r11.s8;
	// b 0x82767004
	goto loc_82767004;
loc_82766824:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8276684c
	if (!ctx.cr0.lt) goto loc_8276684C;
	// bl 0x82725e38
	ctx.lr = 0x8276684C;
	sub_82725E38(ctx, base);
loc_8276684C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x827669e4
	if (ctx.cr6.eq) goto loc_827669E4;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lbz r4,8(r23)
	ctx.r4.u64 = REX_LOAD_U8(r23.u32 + 8);
	// lwz r29,0(r23)
	r29.u64 = REX_LOAD_U32(r23.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
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
	// blt cr6,0x82766944
	if (ctx.cr6.lt) goto loc_82766944;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = r30.u32 & 0xF;
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
	// bge cr6,0x8276693c
	if (!ctx.cr6.lt) goto loc_8276693C;
loc_827668A4:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827668d0
	if (ctx.cr6.lt) goto loc_827668D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x827668C0;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x827668a4
	if (ctx.cr6.eq) goto loc_827668A4;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x8276697c
	goto loc_8276697C;
loc_827668D0:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// neg r4,r10
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r5,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
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
loc_8276693C:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x8276697c
	goto loc_8276697C;
loc_82766944:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x8276694C;
	sub_82725F80(ctx, base);
loc_8276694C:
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
	// bl 0x82725f80
	ctx.lr = 0x82766964;
	sub_82725F80(ctx, base);
	// add r10,r30,r25
	ctx.r10.u64 = r30.u64 + r25.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8276694c
	if (ctx.cr6.lt) goto loc_8276694C;
loc_8276697C:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(r30.s32, r28.s32, ctx.xer);
	// beq cr6,0x82767068
	if (ctx.cr6.eq) goto loc_82767068;
	// lbzx r11,r30,r20
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + r20.u32);
	// cmpw cr6,r30,r17
	ctx.cr6.compare<int32_t>(r30.s32, r17.s32, ctx.xer);
	// lbzx r28,r30,r21
	r28.u64 = REX_LOAD_U8(r30.u32 + r21.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// blt cr6,0x827669a4
	if (ctx.cr6.lt) goto loc_827669A4;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r24,1
	r24.s64 = 1;
	// b 0x827669a8
	goto loc_827669A8;
loc_827669A4:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_827669A8:
	// lbzx r9,r28,r10
	ctx.r9.u64 = REX_LOAD_U8(r28.u32 + ctx.r10.u32);
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82766ba0
	if (!ctx.cr0.lt) goto loc_82766BA0;
	// bl 0x82725e38
	ctx.lr = 0x827669DC;
	sub_82725E38(ctx, base);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// b 0x82767004
	goto loc_82767004;
loc_827669E4:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82766a0c
	if (!ctx.cr0.lt) goto loc_82766A0C;
	// bl 0x82725e38
	ctx.lr = 0x82766A0C;
	sub_82725E38(ctx, base);
loc_82766A0C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82766ba8
	if (ctx.cr6.eq) goto loc_82766BA8;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lbz r4,8(r23)
	ctx.r4.u64 = REX_LOAD_U8(r23.u32 + 8);
	// lwz r29,0(r23)
	r29.u64 = REX_LOAD_U32(r23.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
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
	// blt cr6,0x82766b04
	if (ctx.cr6.lt) goto loc_82766B04;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = r30.u32 & 0xF;
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
	// bge cr6,0x82766afc
	if (!ctx.cr6.lt) goto loc_82766AFC;
loc_82766A64:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82766a90
	if (ctx.cr6.lt) goto loc_82766A90;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x82766A80;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82766a64
	if (ctx.cr6.eq) goto loc_82766A64;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82766b3c
	goto loc_82766B3C;
loc_82766A90:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// neg r4,r10
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r5,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
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
loc_82766AFC:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82766b3c
	goto loc_82766B3C;
loc_82766B04:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x82766B0C;
	sub_82725F80(ctx, base);
loc_82766B0C:
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
	// bl 0x82725f80
	ctx.lr = 0x82766B24;
	sub_82725F80(ctx, base);
	// add r10,r30,r25
	ctx.r10.u64 = r30.u64 + r25.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82766b0c
	if (ctx.cr6.lt) goto loc_82766B0C;
loc_82766B3C:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(r30.s32, r28.s32, ctx.xer);
	// beq cr6,0x82767068
	if (ctx.cr6.eq) goto loc_82767068;
	// lbzx r10,r30,r20
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + r20.u32);
	// cmpw cr6,r30,r17
	ctx.cr6.compare<int32_t>(r30.s32, r17.s32, ctx.xer);
	// lbzx r11,r30,r21
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + r21.u32);
	// lwz r9,1932(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 1932);
	// extsb r31,r10
	r31.s64 = ctx.r10.s8;
	// blt cr6,0x82766b68
	if (ctx.cr6.lt) goto loc_82766B68;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r24,1
	r24.s64 = 1;
	// b 0x82766b6c
	goto loc_82766B6C;
loc_82766B68:
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_82766B6C:
	// lbzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + ctx.r10.u32);
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82766ba0
	if (!ctx.cr0.lt) goto loc_82766BA0;
	// bl 0x82725e38
	ctx.lr = 0x82766BA0;
	sub_82725E38(ctx, base);
loc_82766BA0:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// b 0x82767004
	goto loc_82767004;
loc_82766BA8:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82766bd0
	if (!ctx.cr0.lt) goto loc_82766BD0;
	// bl 0x82725e38
	ctx.lr = 0x82766BD0;
	sub_82725E38(ctx, base);
loc_82766BD0:
	// lwz r11,15504(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 15504);
	// mr r24,r31
	r24.u64 = r31.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82766e94
	if (ctx.cr6.lt) goto loc_82766E94;
	// lwz r11,1968(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1968);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82766bf8
	if (ctx.cr6.eq) goto loc_82766BF8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82762ce0
	ctx.lr = 0x82766BF4;
	sub_82762CE0(ctx, base);
	// stw r22,1968(r27)
	REX_STORE_U32(r27.u32 + 1968, r22.u32);
loc_82766BF8:
	// lwz r30,84(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r31,1976(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 1976);
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(r31.u32, 32, ctx.xer);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x82766c1c
	if (!ctx.cr6.gt) goto loc_82766C1C;
	// mr r28,r22
	r28.u64 = r22.u64;
	// b 0x82766cc8
	goto loc_82766CC8;
loc_82766C1C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82766c2c
	if (!ctx.cr6.eq) goto loc_82766C2C;
	// mr r28,r22
	r28.u64 = r22.u64;
	// b 0x82766cc8
	goto loc_82766CC8;
loc_82766C2C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82766c8c
	if (!ctx.cr6.gt) goto loc_82766C8C;
loc_82766C34:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82766c8c
	if (ctx.cr6.eq) goto loc_82766C8C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r31,r11,r31
	r31.u64 = r31.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r31.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// bge 0x82766c7c
	if (!ctx.cr0.lt) goto loc_82766C7C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x82766C7C;
	sub_82725E38(ctx, base);
loc_82766C7C:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82766c34
	if (ctx.cr6.gt) goto loc_82766C34;
loc_82766C8C:
	// subfic r11,r31,64
	ctx.xer.ca = r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r31.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r8,r31,32
	ctx.r8.u64 = r31.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r31,r10
	ctx.r6.u64 = ctx.r10.u64 - r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r4.u64);
	// bge 0x82766cc4
	if (!ctx.cr0.lt) goto loc_82766CC4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x82766CC4;
	sub_82725E38(ctx, base);
loc_82766CC4:
	// mr r28,r31
	r28.u64 = r31.u64;
loc_82766CC8:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82766cf0
	if (!ctx.cr0.lt) goto loc_82766CF0;
	// bl 0x82725e38
	ctx.lr = 0x82766CF0;
	sub_82725E38(ctx, base);
loc_82766CF0:
	// lwz r30,84(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// lwz r31,1972(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 1972);
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x82766dd8
	if (ctx.cr6.eq) goto loc_82766DD8;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(r31.u32, 32, ctx.xer);
	// ble cr6,0x82766d20
	if (!ctx.cr6.gt) goto loc_82766D20;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// neg r31,r22
	r31.s64 = static_cast<int64_t>(-r22.u64);
	// b 0x82766ff4
	goto loc_82766FF4;
loc_82766D20:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82766d34
	if (!ctx.cr6.eq) goto loc_82766D34;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// neg r31,r22
	r31.s64 = static_cast<int64_t>(-r22.u64);
	// b 0x82766ff4
	goto loc_82766FF4;
loc_82766D34:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82766d94
	if (!ctx.cr6.gt) goto loc_82766D94;
loc_82766D3C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82766d94
	if (ctx.cr6.eq) goto loc_82766D94;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r31,r11,r31
	r31.u64 = r31.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r31.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// bge 0x82766d84
	if (!ctx.cr0.lt) goto loc_82766D84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x82766D84;
	sub_82725E38(ctx, base);
loc_82766D84:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82766d3c
	if (ctx.cr6.gt) goto loc_82766D3C;
loc_82766D94:
	// subfic r11,r31,64
	ctx.xer.ca = r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r31.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r8,r31,32
	ctx.r8.u64 = r31.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r31,r10
	ctx.r6.u64 = ctx.r10.u64 - r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r4.u64);
	// bge 0x82766dcc
	if (!ctx.cr0.lt) goto loc_82766DCC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x82766DCC;
	sub_82725E38(ctx, base);
loc_82766DCC:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// neg r31,r31
	r31.s64 = static_cast<int64_t>(-r31.u64);
	// b 0x82766ff4
	goto loc_82766FF4;
loc_82766DD8:
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(r31.u32, 32, ctx.xer);
	// ble cr6,0x82766de8
	if (!ctx.cr6.gt) goto loc_82766DE8;
	// mr r31,r22
	r31.u64 = r22.u64;
	// b 0x82766ff4
	goto loc_82766FF4;
loc_82766DE8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82766df8
	if (!ctx.cr6.eq) goto loc_82766DF8;
	// mr r31,r22
	r31.u64 = r22.u64;
	// b 0x82766ff4
	goto loc_82766FF4;
loc_82766DF8:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82766e58
	if (!ctx.cr6.gt) goto loc_82766E58;
loc_82766E00:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82766e58
	if (ctx.cr6.eq) goto loc_82766E58;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r31,r11,r31
	r31.u64 = r31.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r31.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// bge 0x82766e48
	if (!ctx.cr0.lt) goto loc_82766E48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x82766E48;
	sub_82725E38(ctx, base);
loc_82766E48:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82766e00
	if (ctx.cr6.gt) goto loc_82766E00;
loc_82766E58:
	// subfic r11,r31,64
	ctx.xer.ca = r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r31.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r8,r31,32
	ctx.r8.u64 = r31.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r31,r10
	ctx.r6.u64 = ctx.r10.u64 - r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r4.u64);
	// bge 0x82766ff4
	if (!ctx.cr0.lt) goto loc_82766FF4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x82766E90;
	sub_82725E38(ctx, base);
	// b 0x82766ff4
	goto loc_82766FF4;
loc_82766E94:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,6
	r30.s64 = 6;
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x82766f08
	if (!ctx.cr6.lt) goto loc_82766F08;
loc_82766EB0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82766f08
	if (ctx.cr6.eq) goto loc_82766F08;
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
	// bge 0x82766ef8
	if (!ctx.cr0.lt) goto loc_82766EF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82766EF8;
	sub_82725E38(ctx, base);
loc_82766EF8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82766eb0
	if (ctx.cr6.gt) goto loc_82766EB0;
loc_82766F08:
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
	// bge 0x82766f40
	if (!ctx.cr0.lt) goto loc_82766F40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82766F40;
	sub_82725E38(ctx, base);
loc_82766F40:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r28,r30
	r28.u64 = r30.u64;
	// li r30,8
	r30.s64 = 8;
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82766fb8
	if (!ctx.cr6.lt) goto loc_82766FB8;
loc_82766F60:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82766fb8
	if (ctx.cr6.eq) goto loc_82766FB8;
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
	// bge 0x82766fa8
	if (!ctx.cr0.lt) goto loc_82766FA8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82766FA8;
	sub_82725E38(ctx, base);
loc_82766FA8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82766f60
	if (ctx.cr6.gt) goto loc_82766F60;
loc_82766FB8:
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
	// bge 0x82766ff0
	if (!ctx.cr0.lt) goto loc_82766FF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82766FF0;
	sub_82725E38(ctx, base);
loc_82766FF0:
	// extsb r31,r30
	r31.s64 = r30.s8;
loc_82766FF4:
	// rlwinm r9,r31,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge cr6,0x82767004
	if (!ctx.cr6.lt) goto loc_82767004;
	// neg r31,r31
	r31.s64 = static_cast<int64_t>(-r31.u64);
loc_82767004:
	// lwz r10,84(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 84);
	// add r11,r28,r19
	ctx.r11.u64 = r28.u64 + r19.u64;
	// lwz r8,20(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82767068
	if (!ctx.cr6.eq) goto loc_82767068;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x82767068
	if (!ctx.cr6.lt) goto loc_82767068;
	// mullw r10,r31,r15
	ctx.r10.s64 = int64_t(r31.s32) * int64_t(r15.s32);
	// lbzx r8,r11,r16
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + r16.u32);
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// add r6,r10,r14
	ctx.r6.u64 = ctx.r10.u64 + r14.u64;
	// not r5,r7
	ctx.r5.u64 = ~ctx.r7.u64;
	// rotlwi r4,r8,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// xor r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// addi r19,r11,1
	r19.s64 = ctx.r11.s64 + 1;
	// subf r11,r5,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r5.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// sthx r11,r4,r18
	REX_STORE_U16(ctx.r4.u32 + r18.u32, ctx.r11.u16);
	// bne cr6,0x82767058
	if (!ctx.cr6.eq) goto loc_82767058;
	// lwz r28,96(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x827666ac
	goto loc_827666AC;
loc_82767058:
	// stw r22,1940(r27)
	REX_STORE_U32(r27.u32 + 1940, r22.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd0
	return;
loc_82767068:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd0
	return;
}

