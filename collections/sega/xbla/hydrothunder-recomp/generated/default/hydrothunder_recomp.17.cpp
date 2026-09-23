#include "hydrothunder_funcs.17.h"

DEFINE_REX_FUNC(sub_82120DC8) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82120e00
	if (!ctx.cr6.lt) goto loc_82120E00;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26956
	ctx.r3.s64 = ctx.r11.s64 + -26956;
	// bl 0x822f6058
	ctx.lr = 0x82120E00;
	sub_822F6058(ctx, base);
loc_82120E00:
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r30.u32, ctx.xer);
	// bge cr6,0x82120e10
	if (!ctx.cr6.lt) goto loc_82120E10;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
loc_82120E10:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82120e84
	if (ctx.cr6.eq) goto loc_82120E84;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x82120e2c
	if (ctx.cr6.lt) goto loc_82120E2C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x82120e30
	goto loc_82120E30;
loc_82120E2C:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_82120E30:
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x82120e40
	if (ctx.cr6.lt) goto loc_82120E40;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x82120e44
	goto loc_82120E44;
loc_82120E40:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_82120E44:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r5,r30,r8
	ctx.r5.u64 = ctx.r8.u64 - r30.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bl 0x8269cc20
	ctx.lr = 0x82120E58;
	sub_8269CC20(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// blt cr6,0x82120e78
	if (ctx.cr6.lt) goto loc_82120E78;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x82120e7c
	goto loc_82120E7C;
loc_82120E78:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_82120E7C:
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
loc_82120E84:
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

DEFINE_REX_FUNC(sub_8212CD48) {
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
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120600
	ctx.lr = 0x8212CD68;
	sub_82120600(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r30,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// bl 0x822f6280
	ctx.lr = 0x8212CD78;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8212cdd8
	if (ctx.cr0.eq) goto loc_8212CDD8;
	// stw r3,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stb r10,136(r1)
	REX_STORE_U8(ctx.r1.u32 + 136, ctx.r10.u8);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x8212cdf0
	ctx.lr = 0x8212CDA8;
	sub_8212CDF0(ctx, base);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x8214ab00
	ctx.lr = 0x8212CDB0;
	sub_8214AB00(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8212CDC0;
	sub_82120AC0(ctx, base);
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
loc_8212CDD8:
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
	ctx.lr = 0x8212CDF0;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82132398) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821323A0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,436
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(436));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lbz r11,272(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 272);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821323cc
	if (!ctx.cr0.eq) goto loc_821323CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821323fc
	goto loc_821323FC;
loc_821323CC:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r31,2020
	ctx.r3.s64 = r31.s64 + 2020;
	// bl 0x8214fcc8
	ctx.lr = 0x821323D8;
	sub_8214FCC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821323FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821323FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821349E8) {
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
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,-12540
	ctx.r7.s64 = ctx.r11.s64 + -12540;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwzx r4,r10,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// bl 0x822c2398
	ctx.lr = 0x82134A10;
	sub_822C2398(ctx, base);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r3,4(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x822c2428
	ctx.lr = 0x82134A20;
	sub_822C2428(ctx, base);
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

DEFINE_REX_FUNC(sub_82137380) {
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
	ctx.lr = 0x82137388;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32106
	r28.s64 = -2104098816;
	// addi r5,r3,68
	ctx.r5.s64 = ctx.r3.s64 + 68;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r3,80
	r29.s64 = ctx.r3.s64 + 80;
	// lwz r11,6096(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 6096);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82173338
	ctx.lr = 0x821373AC;
	sub_82173338(ctx, base);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lwz r11,6096(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 6096);
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
	// lwz r4,72(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// bctrl 
	ctx.lr = 0x821373D4;
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
	ctx.lr = 0x821373F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwz r5,72(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82137460
	if (ctx.cr6.lt) goto loc_82137460;
	// beq cr6,0x82137458
	if (ctx.cr6.eq) goto loc_82137458;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82137450
	if (ctx.cr6.lt) goto loc_82137450;
	// beq cr6,0x82137444
	if (ctx.cr6.eq) goto loc_82137444;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x82137450
	if (ctx.cr6.lt) goto loc_82137450;
	// beq cr6,0x8213743c
	if (ctx.cr6.eq) goto loc_8213743C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-19404
	ctx.r4.s64 = ctx.r11.s64 + -19404;
	// addi r3,r10,-19372
	ctx.r3.s64 = ctx.r10.s64 + -19372;
	// li r5,49
	ctx.r5.s64 = 49;
	// bl 0x821231d0
	ctx.lr = 0x82137434;
	sub_821231D0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82137460
	goto loc_82137460;
loc_8213743C:
	// addi r5,r5,-2
	ctx.r5.s64 = ctx.r5.s64 + -2;
	// b 0x82137460
	goto loc_82137460;
loc_82137444:
	// li r11,3
	ctx.r11.s64 = 3;
	// divw r5,r5,r11
	ctx.r5.u64 = uint32_t((ctx.r11.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r5.s32 / ctx.r11.s32 : 0);
	// b 0x82137460
	goto loc_82137460;
loc_82137450:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// b 0x82137460
	goto loc_82137460;
loc_82137458:
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// addze r5,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r5.s64 = temp.s64;
loc_82137460:
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// li r7,12
	ctx.r7.s64 = 12;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,248(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82137480;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8213FA08) {
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
	ctx.lr = 0x8213FA10;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,5461
	ctx.r10.s64 = 357892096;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// ori r10,r10,21844
	ctx.r10.u64 = ctx.r10.u64 | 21844;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8213fa48
	if (ctx.cr6.lt) goto loc_8213FA48;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8213FA3C;
	sub_8269CE98(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26888
	ctx.r3.s64 = ctx.r11.s64 + -26888;
	// bl 0x822f6020
	ctx.lr = 0x8213FA48;
	sub_822F6020(ctx, base);
loc_8213FA48:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// stw r6,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8213fa74
	if (!ctx.cr6.eq) goto loc_8213FA74;
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x8213faac
	goto loc_8213FAAC;
loc_8213FA74:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213fa98
	if (ctx.cr0.eq) goto loc_8213FA98;
	// stw r28,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213fab0
	if (!ctx.cr6.eq) goto loc_8213FAB0;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// b 0x8213fab0
	goto loc_8213FAB0;
loc_8213FA98:
	// stw r28,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213fab0
	if (!ctx.cr6.eq) goto loc_8213FAB0;
loc_8213FAAC:
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r28.u32);
loc_8213FAB0:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r31,r28
	r31.u64 = r28.u64;
	// li r29,1
	r29.s64 = 1;
	// lbz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8213fbb0
	if (!ctx.cr0.eq) goto loc_8213FBB0;
	// li r27,0
	r27.s64 = 0;
loc_8213FACC:
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213fb30
	if (!ctx.cr6.eq) goto loc_8213FB30;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8213fb40
	if (ctx.cr0.eq) goto loc_8213FB40;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8213fb08
	if (!ctx.cr6.eq) goto loc_8213FB08;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8213f588
	ctx.lr = 0x8213FB08;
	sub_8213F588(ctx, base);
loc_8213FB08:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8213f5f0
	ctx.lr = 0x8213FB2C;
	sub_8213F5F0(ctx, base);
	// b 0x8213fba0
	goto loc_8213FBA0;
loc_8213FB30:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8213fb64
	if (!ctx.cr0.eq) goto loc_8213FB64;
loc_8213FB40:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stb r29,24(r10)
	REX_STORE_U8(ctx.r10.u32 + 24, r29.u8);
	// stb r29,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8213fba0
	goto loc_8213FBA0;
loc_8213FB64:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8213fb7c
	if (!ctx.cr6.eq) goto loc_8213FB7C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8213f5f0
	ctx.lr = 0x8213FB7C;
	sub_8213F5F0(ctx, base);
loc_8213FB7C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8213f588
	ctx.lr = 0x8213FBA0;
	sub_8213F588(ctx, base);
loc_8213FBA0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lbz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213facc
	if (ctx.cr0.eq) goto loc_8213FACC;
loc_8213FBB0:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r28,0(r26)
	REX_STORE_U32(r26.u32 + 0, r28.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8214E548) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15544
	ctx.r3.s64 = ctx.r11.s64 + -15544;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214F3D0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r5,r10,-23804
	ctx.r5.s64 = ctx.r10.s64 + -23804;
	// lwz r3,6048(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82150248) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,45(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 45);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82150268
	if (!ctx.cr0.eq) goto loc_82150268;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82150268:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82150288
	if (!ctx.cr6.eq) goto loc_82150288;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x821502a4
	goto loc_821502A4;
loc_82150288:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821502a0
	if (!ctx.cr6.eq) goto loc_821502A0;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x821502a4
	goto loc_821502A4;
loc_821502A0:
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_821502A4:
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82152438) {
	REX_FUNC_PROLOGUE();
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// b 0x823edc50
	sub_823EDC50(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82152688) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82152690;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821526B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82152710
	if (!ctx.cr0.gt) goto loc_82152710;
loc_821526B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821526D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821526E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U64(r28.u32 + 0);
	// cmpld cr6,r11,r3
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r3.u64, ctx.xer);
	// beq cr6,0x8215271c
	if (ctx.cr6.eq) goto loc_8215271C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82152708;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x821526b8
	if (ctx.cr6.lt) goto loc_821526B8;
loc_82152710:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82152714:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8215271C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x82152714
	goto loc_82152714;
}

DEFINE_REX_FUNC(sub_82157038) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82157040;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821570c8
	if (!ctx.cr6.eq) goto loc_821570C8;
	// lwz r11,4664(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4664);
	// addi r30,r3,4664
	r30.s64 = ctx.r3.s64 + 4664;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x821570c0
	if (ctx.cr6.eq) goto loc_821570C0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ede70
	ctx.lr = 0x8215706C;
	sub_823EDE70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82157090
	if (!ctx.cr0.lt) goto loc_82157090;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_82157084:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82157088:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_82157090:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4728(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4728);
	// bl 0x8264dc88
	ctx.lr = 0x8215709C;
	sub_8264DC88(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x821570b0
	if (ctx.cr6.eq) goto loc_821570B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821570b8
	goto loc_821570B8;
loc_821570B0:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,3
	ctx.r3.s64 = 3;
loc_821570B8:
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x82157088
	goto loc_82157088;
loc_821570C0:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82157088
	goto loc_82157088;
loc_821570C8:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82157124
	if (!ctx.cr6.eq) goto loc_82157124;
	// lwz r11,4664(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4664);
	// addi r29,r31,4664
	r29.s64 = r31.s64 + 4664;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x821570c0
	if (ctx.cr6.eq) goto loc_821570C0;
	// lwz r3,4728(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4728);
	// bl 0x823ede68
	ctx.lr = 0x821570E8;
	sub_823EDE68(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r11,4728(r31)
	REX_STORE_U32(r31.u32 + 4728, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stb r30,4724(r31)
	REX_STORE_U8(r31.u32 + 4724, r30.u8);
	// bl 0x823ede70
	ctx.lr = 0x8215710C;
	sub_823EDE70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8215711c
	if (!ctx.cr0.lt) goto loc_8215711C;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x82157084
	goto loc_82157084;
loc_8215711C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82157088
	goto loc_82157088;
loc_82157124:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82157084
	if (!ctx.cr6.eq) goto loc_82157084;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// b 0x82157088
	goto loc_82157088;
}

DEFINE_REX_FUNC(sub_8215D0A0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215d0d4
	if (ctx.cr0.eq) goto loc_8215D0D4;
	// bl 0x8215d238
	ctx.lr = 0x8215D0D4;
	sub_8215D238(ctx, base);
loc_8215D0D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,56(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215d100
	if (ctx.cr6.eq) goto loc_8215D100;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215D100;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215D100:
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

DEFINE_REX_FUNC(sub_8215FCE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8215FCF0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8215fd28
	if (ctx.cr6.eq) goto loc_8215FD28;
	// lwz r29,4(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8215fd18
	goto loc_8215FD18;
loc_8215FD0C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8215FD14;
	sub_8215F0F0(ctx, base);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
loc_8215FD18:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x8215fd0c
	if (!ctx.cr6.eq) goto loc_8215FD0C;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x8215FD28;
	sub_8269CE98(ctx, base);
loc_8215FD28:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82163F00) {
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
	ctx.lr = 0x82163F08;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r3,60
	ctx.r3.s64 = 60;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// addi r30,r4,4
	r30.s64 = ctx.r4.s64 + 4;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r25,4(r29)
	r25.u64 = REX_LOAD_U32(r29.u32 + 4);
	// bl 0x822f6280
	ctx.lr = 0x82163F30;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82163fc0
	if (ctx.cr0.eq) goto loc_82163FC0;
	// addic. r26,r31,8
	ctx.xer.ca = r31.u32 > 4294967287;
	r26.s64 = r31.s64 + 8;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r25,4(r31)
	REX_STORE_U32(r31.u32 + 4, r25.u32);
	// beq 0x82163f64
	if (ctx.cr0.eq) goto loc_82163F64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82120670
	ctx.lr = 0x82163F54;
	sub_82120670(ctx, base);
	// addi r4,r24,28
	ctx.r4.s64 = r24.s64 + 28;
	// addi r3,r26,28
	ctx.r3.s64 = r26.s64 + 28;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x826a1e70
	ctx.lr = 0x82163F64;
	sub_826A1E70(ctx, base);
loc_82163F64:
	// lis r10,1260
	ctx.r10.s64 = 82575360;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// ori r10,r10,20163
	ctx.r10.u64 = ctx.r10.u64 | 20163;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bge cr6,0x82163f88
	if (!ctx.cr6.lt) goto loc_82163F88;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26228
	ctx.r3.s64 = ctx.r11.s64 + -26228;
	// bl 0x822f6020
	ctx.lr = 0x82163F88;
	sub_822F6020(ctx, base);
loc_82163F88:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r31,4(r29)
	REX_STORE_U32(r29.u32 + 4, r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r6,8
	ctx.r5.s64 = ctx.r6.s64 + 8;
	// bl 0x821640c0
	ctx.lr = 0x82163FB4;
	sub_821640C0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_82163FC0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x82163FDC;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_8216BA58) {
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
	ctx.lr = 0x8216BA60;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
	// bl 0x822f6280
	ctx.lr = 0x8216BA78;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8216bb3c
	if (ctx.cr0.eq) goto loc_8216BB3C;
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r9,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// addi r29,r11,1028
	r29.s64 = ctx.r11.s64 + 1028;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r9,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r9.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stb r10,20(r9)
	REX_STORE_U8(ctx.r9.u32 + 20, ctx.r10.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stb r10,21(r9)
	REX_STORE_U8(ctx.r9.u32 + 21, ctx.r10.u8);
	// lwz r30,1028(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1028);
	// lwz r28,4(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x822f6280
	ctx.lr = 0x8216BAC4;
	sub_822F6280(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216bb24
	if (ctx.cr0.eq) goto loc_8216BB24;
	// addic. r10,r11,8
	ctx.xer.ca = ctx.r11.u32 > 4294967287;
	ctx.r10.s64 = ctx.r11.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// beq 0x8216bae0
	if (ctx.cr0.eq) goto loc_8216BAE0;
	// stw r31,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r31.u32);
loc_8216BAE0:
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// ori r9,r9,65534
	ctx.r9.u64 = ctx.r9.u64 | 65534;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bge cr6,0x8216bb04
	if (!ctx.cr6.lt) goto loc_8216BB04;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26228
	ctx.r3.s64 = ctx.r11.s64 + -26228;
	// bl 0x822f6020
	ctx.lr = 0x8216BB04;
	sub_822F6020(ctx, base);
loc_8216BB04:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
loc_8216BB24:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x8216BB3C;
	sub_82120018(ctx, base);
loc_8216BB3C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x8216BB54;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82172D18) {
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
	// li r31,0
	r31.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// sth r31,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r31.u16);
	// sth r31,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, r31.u16);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stb r31,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, r31.u8);
	// bl 0x82154800
	ctx.lr = 0x82172D60;
	sub_82154800(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r31,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r31.u16);
	// li r9,5
	ctx.r9.s64 = 5;
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r31,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, r31.u8);
	// bl 0x82154800
	ctx.lr = 0x82172D8C;
	sub_82154800(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

DEFINE_REX_FUNC(sub_82178388) {
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
	ctx.lr = 0x82178390;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,60(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r27,0
	r27.s64 = 0;
	// addi r11,r11,28412
	ctx.r11.s64 = ctx.r11.s64 + 28412;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82178424
	if (ctx.cr6.eq) goto loc_82178424;
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// addi r30,r3,64
	r30.s64 = ctx.r3.s64 + 64;
	// lwz r31,64(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// b 0x821783d4
	goto loc_821783D4;
loc_821783C4:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// beq cr6,0x821783dc
	if (ctx.cr6.eq) goto loc_821783DC;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_821783D4:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821783c4
	if (!ctx.cr6.eq) goto loc_821783C4;
loc_821783DC:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82178424
	if (ctx.cr6.eq) goto loc_82178424;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821783F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,60(r29)
	REX_STORE_U32(r29.u32 + 60, r27.u32);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269cc20
	ctx.lr = 0x82178418;
	sub_8269CC20(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
loc_82178424:
	// lwz r4,108(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 108);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82178448
	if (ctx.cr6.eq) goto loc_82178448;
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
	ctx.lr = 0x82178448;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82178448:
	// lwz r11,64(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 64);
	// addi r31,r29,64
	r31.s64 = r29.s64 + 64;
	// lwz r10,68(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 68);
	// mr r28,r27
	r28.u64 = r27.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821784a0
	if (!ctx.cr0.gt) goto loc_821784A0;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_82178468:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// stw r27,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, r27.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x821357c8
	ctx.lr = 0x82178480;
	sub_821357C8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82178468
	if (ctx.cr6.lt) goto loc_82178468;
loc_821784A0:
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x821784d0
	if (ctx.cr6.eq) goto loc_821784D0;
	// subf r11,r4,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x8269cc20
	ctx.lr = 0x821784C8;
	sub_8269CC20(ctx, base);
	// add r11,r28,r30
	ctx.r11.u64 = r28.u64 + r30.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_821784D0:
	// addi r3,r29,96
	ctx.r3.s64 = r29.s64 + 96;
	// bl 0x821d38e8
	ctx.lr = 0x821784D8;
	sub_821D38E8(ctx, base);
	// addi r3,r29,80
	ctx.r3.s64 = r29.s64 + 80;
	// bl 0x8219b738
	ctx.lr = 0x821784E0;
	sub_8219B738(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821784f0
	if (ctx.cr6.eq) goto loc_821784F0;
	// bl 0x8269ce98
	ctx.lr = 0x821784F0;
	sub_8269CE98(ctx, base);
loc_821784F0:
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,4(r31)
	REX_STORE_U32(r31.u32 + 4, r27.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
	// addi r3,r29,32
	ctx.r3.s64 = r29.s64 + 32;
	// bl 0x82120ac0
	ctx.lr = 0x8217850C;
	sub_82120AC0(ctx, base);
	// addi r3,r29,12
	ctx.r3.s64 = r29.s64 + 12;
	// bl 0x8216bb58
	ctx.lr = 0x82178514;
	sub_8216BB58(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8214e4b0
	ctx.lr = 0x8217851C;
	sub_8214E4B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82185ED8) {
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
	ctx.lr = 0x82185EE0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2047
	ctx.r11.s64 = 134152192;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// rlwinm r3,r4,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// ble cr6,0x82185f04
	if (!ctx.cr6.gt) goto loc_82185F04;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82185F04:
	// bl 0x822f6338
	ctx.lr = 0x82185F08;
	sub_822F6338(ctx, base);
	// rlwinm r25,r29,5,0,26
	r25.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82185F1C;
	sub_826A2E60(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r28,r26,12
	r28.s64 = r26.s64 + 12;
	// lwz r31,12(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 12);
	// lwz r27,4(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x822f6280
	ctx.lr = 0x82185F30;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82185fc8
	if (ctx.cr0.eq) goto loc_82185FC8;
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// stw r27,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r27.u32);
	// beq 0x82185f4c
	if (ctx.cr0.eq) goto loc_82185F4C;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
loc_82185F4C:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// ori r10,r10,65534
	ctx.r10.u64 = ctx.r10.u64 | 65534;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bge cr6,0x82185f70
	if (!ctx.cr6.lt) goto loc_82185F70;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26228
	ctx.r3.s64 = ctx.r11.s64 + -26228;
	// bl 0x822f6020
	ctx.lr = 0x82185F70;
	sub_822F6020(ctx, base);
loc_82185F70:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82185fa4
	if (ctx.cr6.eq) goto loc_82185FA4;
	// addi r11,r30,20
	ctx.r11.s64 = r30.s64 + 20;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_82185F94:
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bdnz 0x82185f94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82185F94;
loc_82185FA4:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// add r10,r25,r30
	ctx.r10.u64 = r25.u64 + r30.u64;
	// stw r11,-12(r10)
	REX_STORE_U32(ctx.r10.u32 + -12, ctx.r11.u32);
	// lwz r11,32(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// stw r30,4(r26)
	REX_STORE_U32(r26.u32 + 4, r30.u32);
	// stw r11,32(r26)
	REX_STORE_U32(r26.u32 + 32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_82185FC8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x82185FE4;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_8218DD00) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,92(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 92);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// addi r9,r9,16592
	ctx.r9.s64 = ctx.r9.s64 + 16592;
	// lfs f10,15048(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 15048);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
loc_8218DD38:
	// lfs f12,196(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f12,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,212(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,244(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,116(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f7,f0,f7
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// fmadds f13,f12,f9,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f9.f64, ctx.f13.f64)));
	// fadds f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f7
	ctx.cr6.compare(ctx.f12.f64, ctx.f7.f64);
	// ble cr6,0x8218de0c
	if (!ctx.cr6.gt) goto loc_8218DE0C;
	// lfs f9,256(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 256);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// bge cr6,0x8218dd88
	if (!ctx.cr6.lt) goto loc_8218DD88;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmsubs f13,f9,f13,f0
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, -ctx.f0.f64)));
	// b 0x8218dd94
	goto loc_8218DD94;
loc_8218DD88:
	// fsubs f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fnmsubs f13,f9,f13,f0
	ctx.f13.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f13.f64, -ctx.f0.f64)));
loc_8218DD94:
	// lfs f9,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f9,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f13,f13,f11,f9
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f9.f64)));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f13,288(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,304(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 304);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,116(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// fdivs f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f7.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f6,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f7,f0,f12
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f5,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f13,f9,f7,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f7.f64, ctx.f13.f64)));
	// fadds f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,308(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 308);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,292(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 292);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f13,f13,f7,f9
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, ctx.f9.f64)));
	// fadds f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,312(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 312);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,296(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 296);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f13,f13,f7,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, ctx.f12.f64)));
	// fadds f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// b 0x8218de48
	goto loc_8218DE48;
loc_8218DE0C:
	// lfs f12,260(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 260);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f13,f12,f13,f9
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f9.f64)));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,288(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 288);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f9,292(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 292);
	ctx.f9.f64 = double(temp.f32);
	// fadds f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,296(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 296);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
loc_8218DE48:
	// stfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r6,0(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r9,96(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 96);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8218dd38
	if (ctx.cr6.lt) goto loc_8218DD38;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82198838) {
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
	// bl 0x826a1ca8
	ctx.lr = 0x82198840;
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-848(r1)
	ea = -848 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// lwz r28,4(r4)
	r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r4,12(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,164(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82198874;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r5,r26,16
	ctx.r5.s64 = r26.s64 + 16;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219889C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r30,r11,224
	r30.s64 = ctx.r11.s64 + 224;
	// addi r5,r30,368
	ctx.r5.s64 = r30.s64 + 368;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821988CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r5,r30,400
	ctx.r5.s64 = r30.s64 + 400;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821988F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,384(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 384);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,388(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 388);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lfs f0,392(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 392);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82198940;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lfs f1,188(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 188);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82198968;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lfs f1,148(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 148);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82198990;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r27,-32106
	r27.s64 = -2104098816;
	// addi r25,r11,16592
	r25.s64 = ctx.r11.s64 + 16592;
	// lwz r11,6176(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 6176);
	// lfs f31,12(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 12);
	f31.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821989bc
	if (ctx.cr6.eq) goto loc_821989BC;
	// lfs f0,152(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x821989c0
	if (ctx.cr6.lt) goto loc_821989C0;
loc_821989BC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_821989C0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r24,r10,24
	r24.u64 = ctx.r10.u32 & 0xFF;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821989EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r24,0
	ctx.cr0.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq 0x82198a1c
	if (ctx.cr0.eq) goto loc_82198A1C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lfs f1,152(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 152);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82198A1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82198A1C:
	// lwz r11,192(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 192);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82198a34
	if (ctx.cr6.eq) goto loc_82198A34;
	// lwz r5,96(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// b 0x82198a38
	goto loc_82198A38;
loc_82198A34:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82198A38:
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// lwz r4,92(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82198A50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,92(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82198A70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,92(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 92);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82198A94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// lwz r4,92(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lfs f30,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f30.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,228(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82198AB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82198bf8
	if (ctx.cr6.eq) goto loc_82198BF8;
	// lbz r11,164(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 164);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82198bf8
	if (ctx.cr0.eq) goto loc_82198BF8;
	// lwz r3,6176(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6176);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82198AE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82198bf8
	if (ctx.cr0.eq) goto loc_82198BF8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lbz r5,164(r28)
	ctx.r5.u64 = REX_LOAD_U8(r28.u32 + 164);
	// lwz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82198B14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lfs f1,168(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 168);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82198B3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r5,r30,240
	ctx.r5.s64 = r30.s64 + 240;
	// lwz r4,60(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82198B64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6176(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6176);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r30,6092(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// lwz r27,0(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bctrl 
	ctx.lr = 0x82198B80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,212(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 212);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82198B98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,100(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82198BB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,100(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 100);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82198BDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lwz r4,100(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,228(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82198BF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82198BF8:
	// lbz r11,172(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 172);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82198cfc
	if (ctx.cr0.eq) goto loc_82198CFC;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r26,80
	ctx.r4.s64 = r26.s64 + 80;
	// lwz r3,6216(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6216);
	// bl 0x821595c0
	ctx.lr = 0x82198C18;
	sub_821595C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,736(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 736);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82198C40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,736(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 736);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82198d24
	if (ctx.cr6.eq) goto loc_82198D24;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,68(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82198C74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// lwz r6,736(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 736);
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82198CA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// lwz r6,736(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 736);
	// lwz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82198CCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r5,r1,608
	ctx.r5.s64 = ctx.r1.s64 + 608;
	// lwz r6,736(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 736);
	// lwz r4,80(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82198CF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82198d24
	goto loc_82198D24;
loc_82198CFC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82198D24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82198D24:
	// lwz r11,196(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 196);
	// lwz r4,84(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r30,104(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x82198e04
	if (ctx.cr6.eq) goto loc_82198E04;
	// li r5,1
	ctx.r5.s64 = 1;
	// bctrl 
	ctx.lr = 0x82198D5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lfs f1,184(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 184);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82198D84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// lwz r5,96(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 96);
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82198DA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82198DC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 96);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82198DE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,228(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82198E00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82198e0c
	goto loc_82198E0C;
loc_82198E04:
	// li r5,0
	ctx.r5.s64 = 0;
	// bctrl 
	ctx.lr = 0x82198E0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82198E0C:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// lwz r9,112(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 112);
	// lfs f13,116(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r26,128
	ctx.r10.s64 = r26.s64 + 128;
	// addi r6,r11,-2544
	ctx.r6.s64 = ctx.r11.s64 + -2544;
	// li r8,0
	ctx.r8.s64 = 0;
	// addis r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 262144;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82199194
	if (!ctx.cr6.gt) goto loc_82199194;
	// lfs f0,8(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,-12
	ctx.r10.s64 = ctx.r10.s64 + -12;
loc_82198E38:
	// lfs f12,28(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,36(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f12,44(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f12,48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f12,52(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f12,60(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f12,64(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f12,68(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,32(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f12,72(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f12,76(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,40(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f12,100(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f12,104(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,48(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f12,92(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,52(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lfs f12,108(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,64(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lfs f12,112(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,68(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lfs f12,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// stfsu f12,72(r11)
	ea = 72 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lfs f12,32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,36(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f12,44(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f12,48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f12,52(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f12,60(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f12,64(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f12,68(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,32(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f12,72(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f12,76(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,40(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f12,100(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f12,104(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,48(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f12,92(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,52(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f31,56(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lfs f12,108(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,64(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lfs f12,112(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,68(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lfs f12,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// stfsu f12,72(r11)
	ea = 72 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lfs f12,32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,36(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f12,44(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f12,48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f12,52(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f12,60(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f12,64(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f12,68(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,32(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f12,72(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f12,76(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,40(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f12,100(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f12,104(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,48(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f12,92(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,52(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f31,56(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,60(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lfs f12,108(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,64(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lfs f12,112(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,68(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lfs f12,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// stfsu f12,72(r11)
	ea = 72 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lfs f12,32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,36(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f12,44(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f12,48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f12,52(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f12,60(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f12,64(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f12,68(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,32(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f12,72(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f12,76(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,40(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f12,100(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f12,104(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,48(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f12,92(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,52(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f31,56(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,60(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lfs f12,108(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,64(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lfs f12,112(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,68(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lfs f12,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// stfsu f12,72(r11)
	ea = 72 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lfs f12,32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,36(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f12,44(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f12,48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f12,52(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f12,60(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f12,64(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f12,68(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,32(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f12,72(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f12,76(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,40(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lfs f12,100(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f12,104(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,48(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f12,92(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,52(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f31,60(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lfs f12,108(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,64(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lfs f12,112(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,68(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lfs f12,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// stfsu f12,72(r11)
	ea = 72 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lfs f12,32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,36(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f12,44(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f12,48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f12,52(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f12,60(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f12,64(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f12,68(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,32(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f12,72(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f12,76(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,40(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f12,100(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f12,104(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,48(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f12,92(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,52(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lfs f12,108(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,64(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lfsu f12,112(r10)
	ea = 112 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfs f12,68(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// lwz r9,112(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 112);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82198e38
	if (ctx.cr6.lt) goto loc_82198E38;
loc_82199194:
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r7,72
	ctx.r7.s64 = 72;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addis r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 262144;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,248(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821991B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_821EBBD0) {
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
	ctx.lr = 0x821EBBD8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821a5c28
	ctx.lr = 0x821EBBF0;
	sub_821A5C28(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r29,4(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r29,64
	ctx.r4.s64 = r29.s64 + 64;
	// bl 0x82125c20
	ctx.lr = 0x821EBC00;
	sub_82125C20(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x821EBC0C;
	sub_82125C98(ctx, base);
	// addi r4,r30,48
	ctx.r4.s64 = r30.s64 + 48;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x826a1e70
	ctx.lr = 0x821EBC18;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r29,4(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r29,32
	ctx.r4.s64 = r29.s64 + 32;
	// bl 0x82125c20
	ctx.lr = 0x821EBC28;
	sub_82125C20(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x821EBC34;
	sub_82125C98(ctx, base);
	// addi r4,r30,128
	ctx.r4.s64 = r30.s64 + 128;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x826a1e70
	ctx.lr = 0x821EBC40;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r28,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	r28.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r28,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// lwz r29,4(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r29,1
	ctx.r4.s64 = r29.s64 + 1;
	// bl 0x82125c20
	ctx.lr = 0x821EBC60;
	sub_82125C20(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// bl 0x82125c98
	ctx.lr = 0x821EBC70;
	sub_82125C98(ctx, base);
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// clrlwi. r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// beq 0x821ebc90
	if (ctx.cr0.eq) goto loc_821EBC90;
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x821a5c28
	ctx.lr = 0x821EBC90;
	sub_821A5C28(ctx, base);
loc_821EBC90:
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 120);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x821626c0
	ctx.lr = 0x821EBCA4;
	sub_821626C0(ctx, base);
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 116);
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821ebcc4
	goto loc_821EBCC4;
loc_821EBCB0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
	// bl 0x821ebbd0
	ctx.lr = 0x821EBCBC;
	sub_821EBBD0(ctx, base);
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 116);
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_821EBCC4:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821ebcb0
	if (!ctx.cr6.eq) goto loc_821EBCB0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821F6260) {
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
	ctx.lr = 0x821F627C;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821f62f4
	if (ctx.cr0.eq) goto loc_821F62F4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,23708
	ctx.r11.s64 = ctx.r11.s64 + 23708;
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// bl 0x822f6280
	ctx.lr = 0x821F62A0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f62dc
	if (ctx.cr0.eq) goto loc_821F62DC;
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
	// stb r10,44(r9)
	REX_STORE_U8(ctx.r9.u32 + 44, ctx.r10.u8);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stb r10,45(r9)
	REX_STORE_U8(ctx.r9.u32 + 45, ctx.r10.u8);
	// b 0x821f62f8
	goto loc_821F62F8;
loc_821F62DC:
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
	ctx.lr = 0x821F62F4;
	sub_82120018(ctx, base);
loc_821F62F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821F62F8:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r11,r11,6260
	ctx.r11.s64 = ctx.r11.s64 + 6260;
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

DEFINE_REX_FUNC(sub_821FB128) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821fb168
	if (ctx.cr6.eq) goto loc_821FB168;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,25200
	ctx.r4.s64 = ctx.r11.s64 + 25200;
	// addi r3,r10,25300
	ctx.r3.s64 = ctx.r10.s64 + 25300;
	// li r5,183
	ctx.r5.s64 = 183;
	// bl 0x821231d0
	ctx.lr = 0x821FB168;
	sub_821231D0(ctx, base);
loc_821FB168:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x821FB17C;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,25364
	ctx.r4.s64 = ctx.r11.s64 + 25364;
	// bl 0x8215f338
	ctx.lr = 0x821FB188;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,17480
	ctx.r4.s64 = ctx.r11.s64 + 17480;
	// bl 0x8215f338
	ctx.lr = 0x821FB194;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x821FB19C;
	sub_8215F1B0(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821FB1A0;
	sub_8215F990(ctx, base);
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

DEFINE_REX_FUNC(sub_821FE628) {
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
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FE64C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821fe664
	if (!ctx.cr6.lt) goto loc_821FE664;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_821FE664:
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_822009B8) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6288(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6288);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822009F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6288(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6288);
	// stw r3,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82200A0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82202070
	ctx.lr = 0x82200A18;
	sub_82202070(ctx, base);
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

DEFINE_REX_FUNC(sub_822040D0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,77(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 77);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x822040f0
	if (!ctx.cr0.eq) goto loc_822040F0;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_822040F0:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82204110
	if (!ctx.cr6.eq) goto loc_82204110;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x8220412c
	goto loc_8220412C;
loc_82204110:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82204128
	if (!ctx.cr6.eq) goto loc_82204128;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x8220412c
	goto loc_8220412C;
loc_82204128:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8220412C:
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82205F30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82205F38;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r11,-15352
	r30.s64 = ctx.r11.s64 + -15352;
	// lwz r4,-15352(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -15352);
	// bl 0x82120600
	ctx.lr = 0x82205F58;
	sub_82120600(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82205F74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82205F88;
	sub_82120AC0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82205fbc
	if (ctx.cr6.eq) goto loc_82205FBC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82121ec8
	ctx.lr = 0x82205F9C;
	sub_82121EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82205fbc
	if (!ctx.cr0.eq) goto loc_82205FBC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-26528
	ctx.r4.s64 = ctx.r11.s64 + -26528;
	// addi r3,r10,-26456
	ctx.r3.s64 = ctx.r10.s64 + -26456;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x821231d0
	ctx.lr = 0x82205FBC;
	sub_821231D0(ctx, base);
loc_82205FBC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82209208) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14420
	ctx.r3.s64 = ctx.r11.s64 + -14420;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220A5A0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14396
	ctx.r3.s64 = ctx.r11.s64 + -14396;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220A6C8) {
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
	// bl 0x8219c888
	ctx.lr = 0x8220A6E0;
	sub_8219C888(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220a70c
	if (ctx.cr6.eq) goto loc_8220A70C;
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220a70c
	if (ctx.cr6.eq) goto loc_8220A70C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f0,684(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 684);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,60(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
loc_8220A70C:
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

DEFINE_REX_FUNC(sub_8220CEE8) {
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
	// li r3,296
	ctx.r3.s64 = 296;
	// bl 0x822f6280
	ctx.lr = 0x8220CF00;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8220cf34
	if (ctx.cr0.eq) goto loc_8220CF34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e8048
	ctx.lr = 0x8220CF10;
	sub_822E8048(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-30920
	ctx.r11.s64 = ctx.r11.s64 + -30920;
	// addi r4,r10,-31800
	ctx.r4.s64 = ctx.r10.s64 + -31800;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,260
	ctx.r3.s64 = r31.s64 + 260;
	// bl 0x82120600
	ctx.lr = 0x8220CF2C;
	sub_82120600(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8220cf38
	goto loc_8220CF38;
loc_8220CF34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220CF38:
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

DEFINE_REX_FUNC(sub_8220FAB0) {
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
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,204(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// addi r11,r11,-29868
	ctx.r11.s64 = ctx.r11.s64 + -29868;
	// addi r10,r10,-28804
	ctx.r10.s64 = ctx.r10.s64 + -28804;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r10,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// beq cr6,0x8220fb08
	if (ctx.cr6.eq) goto loc_8220FB08;
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
	ctx.lr = 0x8220FB08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220FB08:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x8220FB18;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x8220FB20;
	sub_82178388(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220fb30
	if (ctx.cr0.eq) goto loc_8220FB30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8220FB30;
	sub_8269CE98(ctx, base);
loc_8220FB30:
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

DEFINE_REX_FUNC(sub_82215160) {
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
	// lbz r11,248(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 248);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822151e4
	if (!ctx.cr0.eq) goto loc_822151E4;
	// lwz r11,240(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822151e4
	if (ctx.cr6.eq) goto loc_822151E4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x822151e4
	if (ctx.cr6.eq) goto loc_822151E4;
	// lwz r11,256(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822151e4
	if (!ctx.cr6.gt) goto loc_822151E4;
	// lwz r10,116(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 116);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// lwz r9,296(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 296);
	// xoris r7,r31,32768
	ctx.r7.u64 = r31.u64 ^ 2147483648;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r31,244(r4)
	REX_STORE_U32(ctx.r4.u32 + 244, r31.u32);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r8,120(r4)
	REX_STORE_U32(ctx.r4.u32 + 120, ctx.r8.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addc r11,r11,r7
	ctx.xer.ca = ctx.r11.u32 + ctx.r7.u32 < ctx.r11.u32;
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r11,256(r4)
	REX_STORE_U32(ctx.r4.u32 + 256, ctx.r11.u32);
	// bl 0x822166e8
	ctx.lr = 0x822151E4;
	sub_822166E8(ctx, base);
loc_822151E4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
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

DEFINE_REX_FUNC(sub_8221DAD0) {
	REX_FUNC_PROLOGUE();
	// lwz r10,1024(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 1024);
	// lwz r9,1020(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 1020);
	// lwz r11,1036(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 1036);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8221dafc
	if (!ctx.cr6.lt) goto loc_8221DAFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1036(r4)
	REX_STORE_U32(ctx.r4.u32 + 1036, ctx.r11.u32);
	// stw r11,968(r4)
	REX_STORE_U32(ctx.r4.u32 + 968, ctx.r11.u32);
loc_8221DAFC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822208D8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82220904;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82220928
	if (ctx.cr6.lt) goto loc_82220928;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82220924;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r3,-1
	r31.s64 = ctx.r3.s64 + -1;
loc_82220928:
	// subfic r11,r31,0
	ctx.xer.ca = r31.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r31.u64;
	// rlwinm r11,r31,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0x1;
	// addme r11,r11
	temp.u8 = (ctx.r11.u32 + 0xFFFFFFFFu < ctx.r11.u32) | (ctx.r11.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r11.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & r31.u64;
	// stw r11,708(r30)
	REX_STORE_U32(r30.u32 + 708, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82226218) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13964
	ctx.r3.s64 = ctx.r11.s64 + -13964;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82226578) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82226580;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-24056
	ctx.r11.s64 = ctx.r11.s64 + -24056;
	// addi r10,r10,-23956
	ctx.r10.s64 = ctx.r10.s64 + -23956;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r29,-32106
	r29.s64 = -2104098816;
	// stw r10,672(r3)
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r10.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,684(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 684);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822265C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,688(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 688);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822265D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// lwz r4,692(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 692);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822265F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822717d8
	ctx.lr = 0x822265F8;
	sub_822717D8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82226608
	if (ctx.cr0.eq) goto loc_82226608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82226608;
	sub_8269CE98(ctx, base);
loc_82226608:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822296F0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13860
	ctx.r3.s64 = ctx.r11.s64 + -13860;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82229920) {
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
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x822f6280
	ctx.lr = 0x82229938;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8222995c
	if (ctx.cr0.eq) goto loc_8222995C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82229520
	ctx.lr = 0x82229948;
	sub_82229520(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-22648
	ctx.r11.s64 = ctx.r11.s64 + -22648;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x82229960
	goto loc_82229960;
loc_8222995C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82229960:
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

DEFINE_REX_FUNC(sub_8222A5E8) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-23012
	ctx.r3.s64 = ctx.r11.s64 + -23012;
	// bl 0x8216bc98
	ctx.lr = 0x8222A618;
	sub_8216BC98(ctx, base);
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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

DEFINE_REX_FUNC(sub_8222B830) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13660
	ctx.r3.s64 = ctx.r11.s64 + -13660;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222C1A0) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,6048(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222C1D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8222c6c0
	ctx.lr = 0x8222C1D8;
	sub_8222C6C0(ctx, base);
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

DEFINE_REX_FUNC(sub_8222E798) {
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
	// li r3,156
	ctx.r3.s64 = 156;
	// bl 0x822f6280
	ctx.lr = 0x8222E7AC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222e7bc
	if (ctx.cr0.eq) goto loc_8222E7BC;
	// bl 0x8222e7d0
	ctx.lr = 0x8222E7B8;
	sub_8222E7D0(ctx, base);
	// b 0x8222e7c0
	goto loc_8222E7C0;
loc_8222E7BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222E7C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82230250) {
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
	ctx.lr = 0x82230258;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r27,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r27.u32);
	// mr r28,r27
	r28.u64 = r27.u64;
	// bl 0x82178268
	ctx.lr = 0x82230274;
	sub_82178268(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-20452
	ctx.r11.s64 = ctx.r11.s64 + -20452;
	// addi r30,r31,124
	r30.s64 = r31.s64 + 124;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r4,r10,-20732
	ctx.r4.s64 = ctx.r10.s64 + -20732;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120600
	ctx.lr = 0x82230294;
	sub_82120600(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r27,152(r31)
	REX_STORE_U32(r31.u32 + 152, r27.u32);
	// li r3,104
	ctx.r3.s64 = 104;
	// stb r11,156(r31)
	REX_STORE_U8(r31.u32 + 156, ctx.r11.u8);
	// stb r27,157(r31)
	REX_STORE_U8(r31.u32 + 157, r27.u8);
	// bl 0x822f6280
	ctx.lr = 0x822302AC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822302e4
	if (ctx.cr0.eq) goto loc_822302E4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-20724
	ctx.r4.s64 = ctx.r11.s64 + -20724;
	// bl 0x82120600
	ctx.lr = 0x822302C4;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,16348
	ctx.r6.s64 = ctx.r11.s64 + 16348;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x821e9d10
	ctx.lr = 0x822302E0;
	sub_821E9D10(ctx, base);
	// b 0x822302e8
	goto loc_822302E8;
loc_822302E4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_822302E8:
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x822302F8;
	sub_82145710(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82230310
	if (ctx.cr0.eq) goto loc_82230310;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x82230310;
	sub_82120AC0(ctx, base);
loc_82230310:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x82230318;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82230338
	if (ctx.cr0.eq) goto loc_82230338;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x82230330;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8223033c
	goto loc_8223033C;
loc_82230338:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_8223033C:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x8223034C;
	sub_821D3988(ctx, base);
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x822f6280
	ctx.lr = 0x82230354;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8223036c
	if (ctx.cr0.eq) goto loc_8223036C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821a1e80
	ctx.lr = 0x82230364;
	sub_821A1E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82230370
	goto loc_82230370;
loc_8223036C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_82230370:
	// stw r4,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x8223037C;
	sub_821D3988(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x82230384;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8223039c
	if (ctx.cr0.eq) goto loc_8223039C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82230108
	ctx.lr = 0x82230394;
	sub_82230108(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822303a0
	goto loc_822303A0;
loc_8223039C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_822303A0:
	// stw r4,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x822303AC;
	sub_821D3988(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x822303B4;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-29688
	r29.s64 = ctx.r11.s64 + -29688;
	// beq 0x822303e0
	if (ctx.cr0.eq) goto loc_822303E0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,2408
	ctx.r11.s64 = ctx.r11.s64 + 2408;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x822303e4
	goto loc_822303E4;
loc_822303E0:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_822303E4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// addi r5,r11,17116
	ctx.r5.s64 = ctx.r11.s64 + 17116;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216be80
	ctx.lr = 0x822303F8;
	sub_8216BE80(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x82230400;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82230424
	if (ctx.cr0.eq) goto loc_82230424;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,3720
	ctx.r11.s64 = ctx.r11.s64 + 3720;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82230428
	goto loc_82230428;
loc_82230424:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_82230428:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r11,-20712
	ctx.r5.s64 = ctx.r11.s64 + -20712;
	// bl 0x8216be80
	ctx.lr = 0x82230438;
	sub_8216BE80(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x82230440;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r11,-15424
	r29.s64 = ctx.r11.s64 + -15424;
	// addi r28,r10,-23836
	r28.s64 = ctx.r10.s64 + -23836;
	// beq 0x822304c0
	if (ctx.cr0.eq) goto loc_822304C0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8216b9a8
	ctx.lr = 0x82230468;
	sub_8216B9A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-20700
	ctx.r4.s64 = ctx.r11.s64 + -20700;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x82230480;
	sub_821DBB48(ctx, base);
	// stw r28,0(r30)
	REX_STORE_U32(r30.u32 + 0, r28.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x8223048C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822304b0
	if (ctx.cr0.eq) goto loc_822304B0;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,2528
	ctx.r10.s64 = ctx.r10.s64 + 2528;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x822304b4
	goto loc_822304B4;
loc_822304B0:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_822304B4:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x822304c4
	goto loc_822304C4;
loc_822304C0:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_822304C4:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x822304DC;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x822304E4;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82230554
	if (ctx.cr0.eq) goto loc_82230554;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8216b9a8
	ctx.lr = 0x822304FC;
	sub_8216B9A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-20684
	ctx.r4.s64 = ctx.r11.s64 + -20684;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x82230514;
	sub_821DBB48(ctx, base);
	// stw r28,0(r30)
	REX_STORE_U32(r30.u32 + 0, r28.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x82230520;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82230544
	if (ctx.cr0.eq) goto loc_82230544;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,2768
	ctx.r10.s64 = ctx.r10.s64 + 2768;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82230548
	goto loc_82230548;
loc_82230544:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_82230548:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x82230558
	goto loc_82230558;
loc_82230554:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_82230558:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x82230570;
	sub_82264568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822450D8) {
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
	ctx.lr = 0x822450F8;
	sub_82178268(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r3,100
	ctx.r3.s64 = 100;
	// addi r11,r11,-15692
	ctx.r11.s64 = ctx.r11.s64 + -15692;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x8224510C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224512c
	if (ctx.cr0.eq) goto loc_8224512C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,120
	ctx.r5.s64 = 120;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x82245124;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82245130
	goto loc_82245130;
loc_8224512C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82245130:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x8224513C;
	sub_821D3988(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x82245144;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82245180
	if (ctx.cr0.eq) goto loc_82245180;
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
	ctx.lr = 0x8224516C;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,-23824
	ctx.r11.s64 = ctx.r11.s64 + -23824;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x82245184
	goto loc_82245184;
loc_82245180:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82245184:
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
	ctx.lr = 0x8224519C;
	sub_82264568(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x822451A4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822451d0
	if (ctx.cr0.eq) goto loc_822451D0;
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
	// b 0x822451d4
	goto loc_822451D4;
loc_822451D0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822451D4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// addi r5,r11,17244
	ctx.r5.s64 = ctx.r11.s64 + 17244;
	// bl 0x8216be80
	ctx.lr = 0x822451E4;
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

DEFINE_REX_FUNC(sub_8224EB58) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb0
	ctx.lr = 0x8224EB60;
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,705(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 705);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224ebec
	if (ctx.cr0.eq) goto loc_8224EBEC;
	// lwz r29,488(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 488);
	// lbz r11,148(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 148);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224ef04
	if (ctx.cr0.eq) goto loc_8224EF04;
	// lwz r11,160(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 160);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8224ef04
	if (!ctx.cr6.gt) goto loc_8224EF04;
	// li r31,255
	r31.s64 = 255;
	// addi r28,r29,156
	r28.s64 = r29.s64 + 156;
	// stb r31,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r31.u8);
	// stb r31,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r31.u8);
	// stb r31,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r31.u8);
	// stb r31,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r31.u8);
loc_8224EBB8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8228ca78
	ctx.lr = 0x8224EBC4;
	sub_8228CA78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// lwz r3,128(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// bl 0x821a7978
	ctx.lr = 0x8224EBD8;
	sub_821A7978(ctx, base);
	// lwz r11,160(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 160);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8224ebb8
	if (ctx.cr6.lt) goto loc_8224EBB8;
	// b 0x8224ef04
	goto loc_8224EF04;
loc_8224EBEC:
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,128(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 128);
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8224EC00:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x8224ec00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8224EC00;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,476(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 476);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82282a90
	ctx.lr = 0x8224EC1C;
	sub_82282A90(ctx, base);
	// addi r31,r26,576
	r31.s64 = r26.s64 + 576;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x823fbd18
	ctx.lr = 0x8224EC30;
	sub_823FBD18(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r30,r10,16592
	r30.s64 = ctx.r10.s64 + 16592;
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r8,r10,-8
	ctx.r8.s64 = ctx.r10.s64 + -8;
	// addi r10,r9,-8
	ctx.r10.s64 = ctx.r9.s64 + -8;
	// lfs f0,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,468(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 468);
	// lfs f30,352(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 352);
	f30.f64 = double(temp.f32);
loc_8224EC68:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r8)
	ea = 8 + ctx.r8.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x8224ec68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8224EC68;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8216d040
	ctx.lr = 0x8224EC80;
	sub_8216D040(ctx, base);
	// addi r27,r29,176
	r27.s64 = r29.s64 + 176;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x823fbf60
	ctx.lr = 0x8224EC94;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,200
	ctx.r10.s64 = ctx.r1.s64 + 200;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8224ECA4:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8224eca4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8224ECA4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f31,1256(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 1256);
	f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// li r31,255
	r31.s64 = 255;
	// ld r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// li r29,64
	r29.s64 = 64;
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lis r28,-32106
	r28.s64 = -2104098816;
	// ld r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stb r31,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r31.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r29,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r29.u8);
	// stb r29,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r29.u8);
	// std r3,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r3.u64);
	// stb r31,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// std r10,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// std r7,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// std r11,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// lwz r3,6096(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6096);
	// bl 0x82137488
	ctx.lr = 0x8224ED20;
	sub_82137488(ctx, base);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 / f30.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82130e88
	ctx.lr = 0x8224ED38;
	sub_82130E88(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,352
	ctx.r10.s64 = ctx.r1.s64 + 352;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r8,r10,-8
	ctx.r8.s64 = ctx.r10.s64 + -8;
	// addi r10,r9,-8
	ctx.r10.s64 = ctx.r9.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8224ED50:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r8)
	ea = 8 + ctx.r8.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x8224ed50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8224ED50;
	// lwz r11,472(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 472);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x8216d040
	ctx.lr = 0x8224ED6C;
	sub_8216D040(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x823fbf60
	ctx.lr = 0x8224ED7C;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,280
	ctx.r10.s64 = ctx.r1.s64 + 280;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8224ED8C:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8224ed8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8224ED8C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stfs f31,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// stb r29,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r29.u8);
	// stb r29,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r29.u8);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// ld r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ld r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r3,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r3.u64);
	// std r11,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// stb r31,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r31.u8);
	// stb r31,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// std r7,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// std r11,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// lwz r3,6096(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6096);
	// bl 0x82137488
	ctx.lr = 0x8224EDF8;
	sub_82137488(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x823fbf60
	ctx.lr = 0x8224EE08;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,280
	ctx.r10.s64 = ctx.r1.s64 + 280;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8224EE18:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8224ee18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8224EE18;
	// li r11,128
	ctx.r11.s64 = 128;
	// stb r31,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// lwz r3,6096(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6096);
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// addi r5,r26,544
	ctx.r5.s64 = r26.s64 + 544;
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// bl 0x82137488
	ctx.lr = 0x8224EE4C;
	sub_82137488(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lbz r11,-21634(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -21634);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224ee8c
	if (ctx.cr0.eq) goto loc_8224EE8C;
	// lwz r11,472(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 472);
	// lwz r11,436(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 436);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8224ee8c
	if (ctx.cr6.eq) goto loc_8224EE8C;
	// stb r31,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r31.u8);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stb r31,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r31.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r31,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r31.u8);
	// stb r31,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// bl 0x821a7978
	ctx.lr = 0x8224EE8C;
	sub_821A7978(ctx, base);
loc_8224EE8C:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r30,r11,23
	r30.s64 = ctx.r11.s64 + 23;
	// lbz r11,-1(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + -1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224eec8
	if (ctx.cr0.eq) goto loc_8224EEC8;
	// lwz r3,940(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 940);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224eec8
	if (ctx.cr6.eq) goto loc_8224EEC8;
	// stb r31,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r31.u8);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stb r31,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r31.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r31,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r31.u8);
	// stb r31,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// bl 0x821a97d8
	ctx.lr = 0x8224EEC8;
	sub_821A97D8(ctx, base);
loc_8224EEC8:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224ef04
	if (ctx.cr0.eq) goto loc_8224EF04;
	// lwz r11,484(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 484);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8224ef04
	if (ctx.cr6.eq) goto loc_8224EF04;
	// stb r31,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r31.u8);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stb r31,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r31.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r31,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r31.u8);
	// stb r31,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// bl 0x821a7978
	ctx.lr = 0x8224EF04;
	sub_821A7978(ctx, base);
loc_8224EF04:
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82267F70) {
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
	ctx.lr = 0x82267F78;
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x82267F8C;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,-19168
	ctx.r4.s64 = ctx.r11.s64 + -19168;
	// bl 0x82120600
	ctx.lr = 0x82267F9C;
	sub_82120600(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// lwz r3,6316(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6316);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82267FBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82120ac0
	ctx.lr = 0x82267FCC;
	sub_82120AC0(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6072(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6072);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82267FE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// bl 0x82126238
	ctx.lr = 0x82267FF4;
	sub_82126238(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120700
	ctx.lr = 0x82268000;
	sub_82120700(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82120ac0
	ctx.lr = 0x82268010;
	sub_82120AC0(ctx, base);
	// li r26,0
	r26.s64 = 0;
	// li r3,60
	ctx.r3.s64 = 60;
	// stw r26,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// bl 0x822f6280
	ctx.lr = 0x82268020;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822684e0
	if (ctx.cr0.eq) goto loc_822684E0;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r22,-32106
	r22.s64 = -2104098816;
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r10,56(r11)
	REX_STORE_U8(ctx.r11.u32 + 56, ctx.r10.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r10,57(r11)
	REX_STORE_U8(ctx.r11.u32 + 57, ctx.r10.u8);
	// lwz r31,6040(r22)
	r31.u64 = REX_LOAD_U32(r22.u32 + 6040);
	// lwz r4,-15352(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + -15352);
	// bl 0x82120600
	ctx.lr = 0x8226806C;
	sub_82120600(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82268084;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82120ac0
	ctx.lr = 0x82268098;
	sub_82120AC0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8212ab28
	ctx.lr = 0x822680A4;
	sub_8212AB28(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r20,28
	r20.s64 = 28;
	// mr r25,r26
	r25.u64 = r26.u64;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw. r23,r10,r20
	r23.u64 = uint32_t((r20.s32 && !(ctx.r10.s32 == INT32_MIN && r20.s32 == -1)) ? ctx.r10.s32 / r20.s32 : 0);
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble 0x82268278
	if (!ctx.cr0.gt) goto loc_82268278;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_822680C4:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,6040(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 6040);
	// bl 0x82205f30
	ctx.lr = 0x822680D0;
	sub_82205F30(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r24,r3,96
	r24.s64 = ctx.r3.s64 + 96;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822680E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82120600
	ctx.lr = 0x822680F8;
	sub_82120600(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822684f8
	ctx.lr = 0x82268104;
	sub_822684F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x822f6280
	ctx.lr = 0x82268110;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82268370
	if (ctx.cr0.eq) goto loc_82268370;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addic. r3,r31,12
	ctx.xer.ca = r31.u32 > 4294967283;
	ctx.r3.s64 = r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stb r26,40(r31)
	REX_STORE_U8(r31.u32 + 40, r26.u8);
	// stb r26,41(r31)
	REX_STORE_U8(r31.u32 + 41, r26.u8);
	// beq 0x82268148
	if (ctx.cr0.eq) goto loc_82268148;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82120d70
	ctx.lr = 0x82268148;
	sub_82120D70(ctx, base);
loc_82268148:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8213ca00
	ctx.lr = 0x82268158;
	sub_8213CA00(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x82268168;
	sub_82120AC0(ctx, base);
	// mr r29,r26
	r29.u64 = r26.u64;
loc_8226816C:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82268190
	if (!ctx.cr6.eq) goto loc_82268190;
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x82268194
	goto loc_82268194;
loc_82268190:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_82268194:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82268250
	if (!ctx.cr6.lt) goto loc_82268250;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x822681A8;
	sub_8215F1B0(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x822681AC;
	sub_8215FA30(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8217a160
	ctx.lr = 0x822681BC;
	sub_8217A160(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8217a1d8
	ctx.lr = 0x822681C8;
	sub_8217A1D8(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82268670
	ctx.lr = 0x822681D4;
	sub_82268670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x822f6280
	ctx.lr = 0x822681E0;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82268358
	if (ctx.cr0.eq) goto loc_82268358;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addic. r3,r31,12
	ctx.xer.ca = r31.u32 > 4294967283;
	ctx.r3.s64 = r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stb r26,40(r31)
	REX_STORE_U8(r31.u32 + 40, r26.u8);
	// stb r26,41(r31)
	REX_STORE_U8(r31.u32 + 41, r26.u8);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// beq 0x82268218
	if (ctx.cr0.eq) goto loc_82268218;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// bl 0x82120d70
	ctx.lr = 0x82268218;
	sub_82120D70(ctx, base);
loc_82268218:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8213ca00
	ctx.lr = 0x82268228;
	sub_8213CA00(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82120ac0
	ctx.lr = 0x82268238;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82120ac0
	ctx.lr = 0x82268248;
	sub_82120AC0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x8226816c
	goto loc_8226816C;
loc_82268250:
	// lwz r3,6040(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 6040);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82268268;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r27,r27,28
	r27.s64 = r27.s64 + 28;
	// cmpw cr6,r25,r23
	ctx.cr6.compare<int32_t>(r25.s32, r23.s32, ctx.xer);
	// blt cr6,0x822680c4
	if (ctx.cr6.lt) goto loc_822680C4;
loc_82268278:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82122800
	ctx.lr = 0x82268280;
	sub_82122800(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,160(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82268294
	if (!ctx.cr6.lt) goto loc_82268294;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
loc_82268294:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,19680
	ctx.r4.s64 = ctx.r11.s64 + 19680;
	// bl 0x8269f338
	ctx.lr = 0x822682A0;
	sub_8269F338(ctx, base);
	// lwz r11,6040(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 6040);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,44(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822682BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8212ab28
	ctx.lr = 0x822682C8;
	sub_8212AB28(ctx, base);
	// lwz r10,192(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r11,196(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// divw. r11,r11,r20
	ctx.r11.u64 = uint32_t((r20.s32 && !(ctx.r11.s32 == INT32_MIN && r20.s32 == -1)) ? ctx.r11.s32 / r20.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x822684a4
	if (!ctx.cr0.gt) goto loc_822684A4;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// addi r21,r11,-6684
	r21.s64 = ctx.r11.s64 + -6684;
loc_822682EC:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82268670
	ctx.lr = 0x822682F8;
	sub_82268670(ctx, base);
	// lwz r11,6040(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 6040);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,48(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82268318;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8212ab28
	ctx.lr = 0x82268324;
	sub_8212AB28(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// divw. r11,r11,r20
	ctx.r11.u64 = uint32_t((r20.s32 && !(ctx.r11.s32 == INT32_MIN && r20.s32 == -1)) ? ctx.r11.s32 / r20.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82268490
	if (!ctx.cr0.gt) goto loc_82268490;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
loc_82268340:
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// lwz r3,6040(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 6040);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82268388
	if (ctx.cr6.lt) goto loc_82268388;
	// lwz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 0);
	// b 0x8226838c
	goto loc_8226838C;
loc_82268358:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r26,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r26.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x82268370;
	sub_82120018(ctx, base);
loc_82268370:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r26,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r26.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x82268388;
	sub_82120018(ctx, base);
loc_82268388:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_8226838C:
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822683a0
	if (ctx.cr6.lt) goto loc_822683A0;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// b 0x822683a4
	goto loc_822683A4;
loc_822683A0:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_822683A4:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822683B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82268484
	if (!ctx.cr0.eq) goto loc_82268484;
	// lwz r29,4(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 4);
	// mr r30,r29
	r30.u64 = r29.u64;
	// lwz r31,4(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 4);
	// b 0x822683f0
	goto loc_822683F0;
loc_822683CC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x822683D8;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822683e8
	if (!ctx.cr0.lt) goto loc_822683E8;
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x822683f0
	goto loc_822683F0;
loc_822683E8:
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_822683F0:
	// lbz r11,41(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 41);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822683cc
	if (ctx.cr0.eq) goto loc_822683CC;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// stw r30,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r30.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82268428
	if (ctx.cr6.eq) goto loc_82268428;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120780
	ctx.lr = 0x82268418;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82268428
	if (ctx.cr0.lt) goto loc_82268428;
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// b 0x82268434
	goto loc_82268434;
loc_82268428:
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
loc_82268434:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x82268484
	if (!ctx.cr6.eq) goto loc_82268484;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82268484
	if (ctx.cr6.eq) goto loc_82268484;
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8226845c
	if (ctx.cr6.lt) goto loc_8226845C;
	// lwz r6,0(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 0);
	// b 0x82268460
	goto loc_82268460;
loc_8226845C:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
loc_82268460:
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82268474
	if (ctx.cr6.lt) goto loc_82268474;
	// lwz r5,0(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 0);
	// b 0x82268478
	goto loc_82268478;
loc_82268474:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
loc_82268478:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8269f3c0
	ctx.lr = 0x82268484;
	sub_8269F3C0(ctx, base);
loc_82268484:
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r28,r28,28
	r28.s64 = r28.s64 + 28;
	// bne 0x82268340
	if (!ctx.cr0.eq) goto loc_82268340;
loc_82268490:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82122800
	ctx.lr = 0x82268498;
	sub_82122800(ctx, base);
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// addi r27,r27,28
	r27.s64 = r27.s64 + 28;
	// bne 0x822682ec
	if (!ctx.cr0.eq) goto loc_822682EC;
loc_822684A4:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x822684b4
	if (ctx.cr6.eq) goto loc_822684B4;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8269ef08
	ctx.lr = 0x822684B4;
	sub_8269EF08(ctx, base);
loc_822684B4:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82122800
	ctx.lr = 0x822684BC;
	sub_82122800(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822687e8
	ctx.lr = 0x822684C4;
	sub_822687E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x822684D4;
	sub_82120AC0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x826a1ce8
	return;
loc_822684E0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r26,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r26.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x822684F8;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_8228C7B8) {
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
	ctx.lr = 0x8228C7C0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,16(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r29,r3,16
	r29.s64 = ctx.r3.s64 + 16;
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8228c7fc
	if (ctx.cr6.eq) goto loc_8228C7FC;
	// subf r11,r4,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x8269cc20
	ctx.lr = 0x8228C7F4;
	sub_8269CC20(ctx, base);
	// add r11,r28,r31
	ctx.r11.u64 = r28.u64 + r31.u64;
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
loc_8228C7FC:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r25,0
	r25.s64 = 0;
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8228c834
	if (!ctx.cr6.gt) goto loc_8228C834;
loc_8228C810:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145980
	ctx.lr = 0x8228C81C;
	sub_82145980(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8228c810
	if (ctx.cr6.lt) goto loc_8228C810;
loc_8228C834:
	// lwz r4,20(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r28,r30,4
	r28.s64 = r30.s64 + 4;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// subf r11,r3,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r3.u64;
	// srawi r5,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// bl 0x8228cae8
	ctx.lr = 0x8228C850;
	sub_8228CAE8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r26,r25
	r26.u64 = r25.u64;
	// li r24,1
	r24.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8228c8d8
	if (!ctx.cr6.gt) goto loc_8228C8D8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r27,r25
	r27.u64 = r25.u64;
	// addi r23,r11,3700
	r23.s64 = ctx.r11.s64 + 3700;
	// addi r22,r10,3600
	r22.s64 = ctx.r10.s64 + 3600;
loc_8228C878:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r4,r27,r11
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	// bl 0x8228ca78
	ctx.lr = 0x8228C888;
	sub_8228CA78(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// bge cr6,0x8228c89c
	if (!ctx.cr6.lt) goto loc_8228C89C;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
loc_8228C89C:
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bgt cr6,0x8228c8b8
	if (ctx.cr6.gt) goto loc_8228C8B8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// li r5,65
	ctx.r5.s64 = 65;
	// bl 0x821231d0
	ctx.lr = 0x8228C8B8;
	sub_821231D0(ctx, base);
loc_8228C8B8:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// stw r24,76(r31)
	REX_STORE_U32(r31.u32 + 76, r24.u32);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8228c878
	if (ctx.cr6.lt) goto loc_8228C878;
loc_8228C8D8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_822945D0) {
	REX_FUNC_PROLOGUE();
	// lhz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 4);
	// lhz r10,14(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 14);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822945fc
	if (ctx.cr0.eq) goto loc_822945FC;
	// lhz r11,6(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 6);
	// lhz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 12);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82294600
	if (!ctx.cr0.eq) goto loc_82294600;
loc_822945FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82294600:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82296478) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,224(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82296500
	if (ctx.cr6.gt) goto loc_82296500;
	// lwz r10,228(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// ld r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// ld r6,8(r4)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ld r30,0(r5)
	r30.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// std r11,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// std r8,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// std r6,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// std r30,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, r30.u64);
	// stfs f1,144(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r3,224(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82296500;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82296500:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

DEFINE_REX_FUNC(sub_8229E970) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r11,73(r3)
	REX_STORE_U8(ctx.r3.u32 + 73, ctx.r11.u8);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229E9A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f0,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,920(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 920);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f13,f13,f13,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f11.f64)));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f13.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8229ea0c
	if (!ctx.cr6.gt) goto loc_8229EA0C;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 0);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// std r10,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 8);
	// std r10,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// bl 0x822b0630
	ctx.lr = 0x8229EA0C;
	sub_822B0630(ctx, base);
loc_8229EA0C:
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

DEFINE_REX_FUNC(sub_822A47E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822A47E8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A480C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a3a68
	ctx.lr = 0x822A4820;
	sub_822A3A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822A51C0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// ld r8,8(r5)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// std r10,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r8,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// lfs f12,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f13
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f10,f12,f12,f0
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// lfs f9,304(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 304);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,15048(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmadds f10,f11,f11,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f10.f64)));
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// bge cr6,0x822a5244
	if (!ctx.cr6.lt) goto loc_822A5244;
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// b 0x822a5268
	goto loc_822A5268;
loc_822A5244:
	// fsqrts f9,f10
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// lfs f10,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fmuls f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_822A5268:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f13,100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,308(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 308);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r9,r9,6420
	ctx.r9.s64 = ctx.r9.s64 + 6420;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r3,112(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 112);
	// ld r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// std r8,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A52E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B4BF0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb8
	ctx.lr = 0x822B4BF8;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2c98
	ctx.lr = 0x822B4C00;
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x822b48a8
	ctx.lr = 0x822B4C20;
	sub_822B48A8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,432
	ctx.r9.s64 = ctx.r1.s64 + 432;
	// li r29,0
	r29.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// lfs f31,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r10,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// stfs f31,448(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 448, temp.u32);
	// stw r29,672(r1)
	REX_STORE_U32(ctx.r1.u32 + 672, r29.u32);
	// stw r8,684(r1)
	REX_STORE_U32(ctx.r1.u32 + 684, ctx.r8.u32);
	// stw r29,676(r1)
	REX_STORE_U32(ctx.r1.u32 + 676, r29.u32);
	// bl 0x822b26f8
	ctx.lr = 0x822B4C78;
	sub_822B26F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822b4f38
	if (!ctx.cr0.eq) goto loc_822B4F38;
	// lwz r11,680(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 680);
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	f30.f64 = f31.f64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// fmr f29,f31
	f29.f64 = f31.f64;
	// fmr f28,f31
	f28.f64 = f31.f64;
	// fmr f27,f31
	f27.f64 = f31.f64;
	// fmr f26,f31
	f26.f64 = f31.f64;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// fmr f25,f31
	f25.f64 = f31.f64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x822b4d84
	if (!ctx.cr6.gt) goto loc_822B4D84;
loc_822B4CAC:
	// lwz r10,272(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// add r9,r29,r11
	ctx.r9.u64 = r29.u64 + ctx.r11.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwzx r5,r29,r11
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwz r4,144(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lfs f24,16(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	f24.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B4CCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,680(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 680);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwzx r9,r29,r9
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lfs f13,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f11,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// std r8,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f13,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfs f0,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 * f24.f64));
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fadds f30,f0,f30
	f30.f64 = double(float(ctx.f0.f64 + f30.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f13,f13,f24
	ctx.f13.f64 = double(float(ctx.f13.f64 * f24.f64));
	// lfs f0,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 * f24.f64));
	// fadds f29,f0,f29
	f29.f64 = double(float(ctx.f0.f64 + f29.f64));
	// fadds f28,f13,f28
	f28.f64 = double(float(ctx.f13.f64 + f28.f64));
	// bl 0x822b25a8
	ctx.lr = 0x822B4D48;
	sub_822B25A8(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,680(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 680);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 * f24.f64));
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f24
	ctx.f13.f64 = double(float(ctx.f13.f64 * f24.f64));
	// fmuls f12,f12,f24
	ctx.f12.f64 = double(float(ctx.f12.f64 * f24.f64));
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// fadds f27,f0,f27
	f27.f64 = double(float(ctx.f0.f64 + f27.f64));
	// fadds f26,f13,f26
	f26.f64 = double(float(ctx.f13.f64 + f26.f64));
	// fadds f25,f12,f25
	f25.f64 = double(float(ctx.f12.f64 + f25.f64));
	// blt cr6,0x822b4cac
	if (ctx.cr6.lt) goto loc_822B4CAC;
loc_822B4D84:
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * f28.f64));
	// lfs f13,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * f29.f64));
	// fmuls f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 * f28.f64));
	// lfs f11,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f3,f29,f26
	ctx.f3.f64 = double(float(f29.f64 - f26.f64));
	// lfs f9,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f5,f30,f27
	ctx.f5.f64 = double(float(f30.f64 - f27.f64));
	// lfs f8,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lfs f7,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f1,f28,f25
	ctx.f1.f64 = double(float(f28.f64 - f25.f64));
	// lfs f6,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f4,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r31,32
	ctx.r11.s64 = r31.s64 + 32;
	// lfs f2,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// fmadds f0,f11,f30,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, f30.f64, ctx.f0.f64)));
	// lfs f11,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f10,f28,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, f28.f64, ctx.f13.f64)));
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmadds f12,f9,f30,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, f30.f64, ctx.f12.f64)));
	// stfs f3,100(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r30,16
	ctx.r11.s64 = r30.s64 + 16;
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r11,r30,48
	ctx.r11.s64 = r30.s64 + 48;
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f0,f8,f29,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, f29.f64, ctx.f0.f64)));
	// fmadds f13,f30,f7,f13
	ctx.f13.f64 = double(float(std::fma(f30.f64, ctx.f7.f64, ctx.f13.f64)));
	// fmadds f12,f6,f29,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f6.f64, f29.f64, ctx.f12.f64)));
	// fadds f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f13,f2
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r10,16(r30)
	REX_STORE_U64(r30.u32 + 16, ctx.r10.u64);
	// std r7,24(r30)
	REX_STORE_U64(r30.u32 + 24, ctx.r7.u64);
	// lfs f13,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f3,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 * f25.f64));
	// fmuls f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 * f26.f64));
	// fmuls f3,f3,f25
	ctx.f3.f64 = double(float(ctx.f3.f64 * f25.f64));
	// fmadds f0,f12,f27,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, f27.f64, ctx.f0.f64)));
	// fmadds f13,f11,f25,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, f25.f64, ctx.f13.f64)));
	// fmadds f10,f10,f27,f3
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, f27.f64, ctx.f3.f64)));
	// fmadds f0,f9,f26,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, f26.f64, ctx.f0.f64)));
	// fmadds f13,f27,f8,f13
	ctx.f13.f64 = double(float(std::fma(f27.f64, ctx.f8.f64, ctx.f13.f64)));
	// fmadds f12,f7,f26,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f7.f64, f26.f64, ctx.f10.f64)));
	// fadds f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f12,f12,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r10,32(r30)
	REX_STORE_U64(r30.u32 + 32, ctx.r10.u64);
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// std r9,40(r30)
	REX_STORE_U64(r30.u32 + 40, ctx.r9.u64);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// std r10,48(r30)
	REX_STORE_U64(r30.u32 + 48, ctx.r10.u64);
	// addi r9,r9,16592
	ctx.r9.s64 = ctx.r9.s64 + 16592;
	// std r8,56(r30)
	REX_STORE_U64(r30.u32 + 56, ctx.r8.u64);
	// lfs f0,48(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// lfs f13,304(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f0.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,64(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 64, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822b4f08
	if (ctx.cr6.gt) goto loc_822B4F08;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_822B4F08:
	// fdivs f0,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f11,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x822b4f54
	goto loc_822B4F54;
loc_822B4F38:
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_822B4F54:
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2ce4
	ctx.lr = 0x822B4F60;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822CD8E8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// mulli r11,r11,9936
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9936));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r11,r11,368
	ctx.r11.s64 = ctx.r11.s64 + 368;
	// stw r10,9564(r11)
	REX_STORE_U32(ctx.r11.u32 + 9564, ctx.r10.u32);
	// beq cr6,0x822cd928
	if (ctx.cr6.eq) goto loc_822CD928;
	// addi r10,r11,9496
	ctx.r10.s64 = ctx.r11.s64 + 9496;
	// rlwinm r9,r4,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r7,r4,27
	ctx.r7.u64 = ctx.r4.u32 & 0x1F;
	// slw r7,r8,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r6,r9,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stwx r7,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u32);
loc_822CD928:
	// addi r10,r11,9528
	ctx.r10.s64 = ctx.r11.s64 + 9528;
	// rlwinm r9,r4,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r7,r4,27
	ctx.r7.u64 = ctx.r4.u32 & 0x1F;
	// rlwinm r6,r4,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// slw r7,r8,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r5,r9,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// subfic r6,r6,31
	ctx.xer.ca = ctx.r6.u32 <= 31;
	ctx.r6.u64 = static_cast<uint64_t>(31) - ctx.r6.u64;
	// or r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 | ctx.r5.u64;
	// clrldi r6,r6,32
	ctx.r6.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// stwx r7,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u32);
	// sld r10,r8,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r6.u8 & 0x7F));
	// ld r9,9128(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 9128);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// std r10,9128(r11)
	REX_STORE_U64(ctx.r11.u32 + 9128, ctx.r10.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D1458) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822d1568
	if (!ctx.cr6.eq) goto loc_822D1568;
	// lwz r7,12616(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 12616);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne 0x822d1484
	if (!ctx.cr0.eq) goto loc_822D1484;
	// lwz r11,12632(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12632);
loc_822D1484:
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// li r5,0
	ctx.r5.s64 = 0;
	// lbz r11,10940(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 10940);
	// rlwinm r10,r9,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3FFF;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// rlwinm r9,r9,29,17,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x7FFF;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm. r31,r11,0,27,27
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq 0x822d14c0
	if (ctx.cr0.eq) goto loc_822D14C0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822d154c
	goto loc_822D154C;
loc_822D14C0:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d1544
	if (ctx.cr0.eq) goto loc_822D1544;
	// lwz r11,12904(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12904);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x822d14dc
	if (ctx.cr6.eq) goto loc_822D14DC;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822d1544
	if (!ctx.cr6.eq) goto loc_822D1544;
loc_822D14DC:
	// lwz r11,12620(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12620);
	// lwz r10,12908(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12908);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822d14f4
	if (ctx.cr6.eq) goto loc_822D14F4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d1544
	if (!ctx.cr6.eq) goto loc_822D1544;
loc_822D14F4:
	// lwz r11,12624(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12624);
	// lwz r10,12912(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12912);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822d150c
	if (ctx.cr6.eq) goto loc_822D150C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d1544
	if (!ctx.cr6.eq) goto loc_822D1544;
loc_822D150C:
	// lwz r11,12628(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12628);
	// lwz r10,12916(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12916);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822d1524
	if (ctx.cr6.eq) goto loc_822D1524;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d1544
	if (!ctx.cr6.eq) goto loc_822D1544;
loc_822D1524:
	// lwz r11,12632(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12632);
	// lwz r10,12920(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12920);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822d153c
	if (ctx.cr6.eq) goto loc_822D153C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d1544
	if (!ctx.cr6.eq) goto loc_822D1544;
loc_822D153C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822d1548
	goto loc_822D1548;
loc_822D1544:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_822D1548:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_822D154C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d1564
	if (ctx.cr0.eq) goto loc_822D1564;
	// lwz r11,13356(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 13356);
	// lwz r10,13360(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 13360);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_822D1564:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_822D1568:
	// bl 0x822d0ce8
	ctx.lr = 0x822D156C;
	sub_822D0CE8(ctx, base);
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

DEFINE_REX_FUNC(sub_822DA470) {
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
	ctx.lr = 0x822DA478;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,1488
	ctx.r3.s64 = 1488;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DA490;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,9160
	ctx.r5.s64 = ctx.r11.s64 + 9160;
	// addi r4,r10,9172
	ctx.r4.s64 = ctx.r10.s64 + 9172;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r28,0
	r28.s64 = 0;
	// bl 0x822da3f0
	ctx.lr = 0x822DA4B4;
	sub_822DA3F0(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r26,11
	r26.s64 = 11;
	// addi r27,r11,-21040
	r27.s64 = ctx.r11.s64 + -21040;
	// addi r11,r27,-328
	ctx.r11.s64 = r27.s64 + -328;
	// addi r30,r11,4
	r30.s64 = ctx.r11.s64 + 4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r25,r11,9192
	r25.s64 = ctx.r11.s64 + 9192;
loc_822DA4D0:
	// lwz r11,-4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -4);
	// and. r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822da500
	if (ctx.cr0.eq) goto loc_822DA500;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x822da4f0
	if (ctx.cr6.eq) goto loc_822DA4F0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822da3f0
	ctx.lr = 0x822DA4F0;
	sub_822DA3F0(ctx, base);
loc_822DA4F0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x822da3f0
	ctx.lr = 0x822DA4FC;
	sub_822DA3F0(ctx, base);
	// li r28,1
	r28.s64 = 1;
loc_822DA500:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x822da4d0
	if (!ctx.cr0.eq) goto loc_822DA4D0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x822da524
	if (!ctx.cr6.eq) goto loc_822DA524;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,9196
	ctx.r4.s64 = ctx.r11.s64 + 9196;
	// bl 0x822da3f0
	ctx.lr = 0x822DA524;
	sub_822DA3F0(ctx, base);
loc_822DA524:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,9216
	ctx.r4.s64 = ctx.r11.s64 + 9216;
	// bl 0x822da3f0
	ctx.lr = 0x822DA534;
	sub_822DA3F0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,3857
	ctx.r3.s64 = 3857;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DA548;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823ecca8
	ctx.lr = 0x822DA550;
	sub_823ECCA8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r3,3858
	ctx.r3.s64 = 3858;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DA560;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r28,r11,9240
	r28.s64 = ctx.r11.s64 + 9240;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r10,9220
	ctx.r5.s64 = ctx.r10.s64 + 9220;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822da3f0
	ctx.lr = 0x822DA580;
	sub_822DA3F0(ctx, base);
	// addi r11,r27,-240
	ctx.r11.s64 = r27.s64 + -240;
	// li r29,30
	r29.s64 = 30;
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
loc_822DA58C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DA59C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwzu r5,8(r30)
	ea = 8 + r30.u32;
	ctx.r5.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822da3f0
	ctx.lr = 0x822DA5B0;
	sub_822DA3F0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x822da58c
	if (!ctx.cr0.eq) goto loc_822DA58C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r30,r27,16
	r30.s64 = r27.s64 + 16;
	// li r23,5
	r23.s64 = 5;
	// addi r26,r11,-16844
	r26.s64 = ctx.r11.s64 + -16844;
	// addi r27,r10,9272
	r27.s64 = ctx.r10.s64 + 9272;
	// addi r25,r9,9260
	r25.s64 = ctx.r9.s64 + 9260;
	// addi r24,r8,-19772
	r24.s64 = ctx.r8.s64 + -19772;
loc_822DA5E0:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822da3f0
	ctx.lr = 0x822DA5EC;
	sub_822DA3F0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822da6c4
	if (!ctx.cr6.gt) goto loc_822DA6C4;
loc_822DA5FC:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82793d54
	ctx.lr = 0x822DA610;
	__imp__sprintf(ctx, base);
	// mr r28,r29
	r28.u64 = r29.u64;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
loc_822DA618:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822da628
	if (!ctx.cr6.lt) goto loc_822DA628;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_822DA628:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822da6a8
	if (!ctx.cr6.lt) goto loc_822DA6A8;
	// lwz r11,-4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -4);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,-8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + -8);
	// slw r11,r28,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r11.u8 & 0x3F));
	// or r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 | ctx.r9.u64;
	// lwz r3,-16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822DA650;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823ecca8
	ctx.lr = 0x822DA658;
	sub_823ECCA8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,-12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DA668;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822DA674:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822da674
	if (!ctx.cr6.eq) goto loc_822DA674;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82793d54
	ctx.lr = 0x822DA6A0;
	__imp__sprintf(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x822da618
	goto loc_822DA618;
loc_822DA6A8:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822da3f0
	ctx.lr = 0x822DA6B8;
	sub_822DA3F0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822da5fc
	if (ctx.cr6.lt) goto loc_822DA5FC;
loc_822DA6C4:
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// bne 0x822da5e0
	if (!ctx.cr0.eq) goto loc_822DA5E0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_822E8750) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-12984
	ctx.r3.s64 = ctx.r11.s64 + -12984;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E8D90) {
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
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x822E8DBC;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x822E8DC4;
	sub_82178388(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e8dd4
	if (ctx.cr0.eq) goto loc_822E8DD4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822E8DD4;
	sub_8269CE98(ctx, base);
loc_822E8DD4:
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

DEFINE_REX_FUNC(sub_822EBE98) {
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
	ctx.lr = 0x822EBEA0;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r26
	r30.u64 = r26.u64;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// bl 0x822ec410
	ctx.lr = 0x822EBEB8;
	sub_822EC410(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stb r26,296(r31)
	REX_STORE_U8(r31.u32 + 296, r26.u8);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// stb r26,297(r31)
	REX_STORE_U8(r31.u32 + 297, r26.u8);
	// addi r10,r10,14628
	ctx.r10.s64 = ctx.r10.s64 + 14628;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// stb r9,288(r31)
	REX_STORE_U8(r31.u32 + 288, ctx.r9.u8);
	// addi r29,r31,288
	r29.s64 = r31.s64 + 288;
	// lfs f0,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// addi r27,r31,292
	r27.s64 = r31.s64 + 292;
	// stfs f0,292(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 292, temp.u32);
	// bl 0x822f6280
	ctx.lr = 0x822EBEF4;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x822ebf24
	if (ctx.cr0.eq) goto loc_822EBF24;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,14348
	ctx.r4.s64 = ctx.r11.s64 + 14348;
	// bl 0x82120600
	ctx.lr = 0x822EBF0C;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r30,1
	r30.s64 = 1;
	// bl 0x82191600
	ctx.lr = 0x822EBF20;
	sub_82191600(ctx, base);
	// b 0x822ebf28
	goto loc_822EBF28;
loc_822EBF24:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_822EBF28:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r28,r31,80
	r28.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x822EBF3C;
	sub_82145710(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ebf58
	if (ctx.cr0.eq) goto loc_822EBF58;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r30,r30,0,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x822EBF58;
	sub_82120AC0(ctx, base);
loc_822EBF58:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x822EBF60;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822ebf90
	if (ctx.cr0.eq) goto loc_822EBF90;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,14364
	ctx.r4.s64 = ctx.r11.s64 + 14364;
	// bl 0x82120600
	ctx.lr = 0x822EBF78;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,2
	r30.u64 = r30.u64 | 2;
	// bl 0x82196ba8
	ctx.lr = 0x822EBF8C;
	sub_82196BA8(ctx, base);
	// b 0x822ebf94
	goto loc_822EBF94;
loc_822EBF90:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_822EBF94:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x822EBFA4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ebfbc
	if (ctx.cr0.eq) goto loc_822EBFBC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x822EBFBC;
	sub_82120AC0(ctx, base);
loc_822EBFBC:
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x822EBFC4;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r28,r11,-15424
	r28.s64 = ctx.r11.s64 + -15424;
	// addi r29,r10,-23836
	r29.s64 = ctx.r10.s64 + -23836;
	// beq 0x822ec038
	if (ctx.cr0.eq) goto loc_822EC038;
	// stw r26,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r26.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,14380
	ctx.r4.s64 = ctx.r11.s64 + 14380;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822EBFF8;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x822EC004;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ec028
	if (ctx.cr0.eq) goto loc_822EC028;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-15488
	ctx.r10.s64 = ctx.r10.s64 + -15488;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x822ec02c
	goto loc_822EC02C;
loc_822EC028:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_822EC02C:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x822ec03c
	goto loc_822EC03C;
loc_822EC038:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_822EC03C:
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
	ctx.lr = 0x822EC054;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x822EC05C;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822ec0c0
	if (ctx.cr0.eq) goto loc_822EC0C0;
	// stw r26,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r26.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,14392
	ctx.r4.s64 = ctx.r11.s64 + 14392;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822EC080;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x822EC08C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ec0b0
	if (ctx.cr0.eq) goto loc_822EC0B0;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-15464
	ctx.r10.s64 = ctx.r10.s64 + -15464;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x822ec0b4
	goto loc_822EC0B4;
loc_822EC0B0:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_822EC0B4:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x822ec0c4
	goto loc_822EC0C4;
loc_822EC0C0:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_822EC0C4:
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
	ctx.lr = 0x822EC0DC;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x822EC0E4;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822ec148
	if (ctx.cr0.eq) goto loc_822EC148;
	// stw r26,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r26.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,14404
	ctx.r4.s64 = ctx.r11.s64 + 14404;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822EC108;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x822EC114;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ec138
	if (ctx.cr0.eq) goto loc_822EC138;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-15448
	ctx.r10.s64 = ctx.r10.s64 + -15448;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x822ec13c
	goto loc_822EC13C;
loc_822EC138:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_822EC13C:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x822ec14c
	goto loc_822EC14C;
loc_822EC148:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_822EC14C:
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
	ctx.lr = 0x822EC164;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x822EC16C;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822ec1a4
	if (ctx.cr0.eq) goto loc_822EC1A4;
	// stw r26,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r26.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,14416
	ctx.r4.s64 = ctx.r11.s64 + 14416;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822EC190;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,-23824
	ctx.r11.s64 = ctx.r11.s64 + -23824;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x822ec1a8
	goto loc_822EC1A8;
loc_822EC1A4:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_822EC1A8:
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
	ctx.lr = 0x822EC1C0;
	sub_82264568(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x822EC1C8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ec1f4
	if (ctx.cr0.eq) goto loc_822EC1F4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,21984
	ctx.r10.s64 = ctx.r10.s64 + 21984;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x822ec1f8
	goto loc_822EC1F8;
loc_822EC1F4:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_822EC1F8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// addi r5,r11,-28924
	ctx.r5.s64 = ctx.r11.s64 + -28924;
	// bl 0x8216be80
	ctx.lr = 0x822EC208;
	sub_8216BE80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_822FF4A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,48(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x822ff4d8
	if (ctx.cr6.lt) goto loc_822FF4D8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_822FF4D8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f13,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822ff4f0
	if (ctx.cr6.gt) goto loc_822FF4F0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_822FF4F0:
	// stfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x822ff508
	if (ctx.cr6.eq) goto loc_822FF508;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
loc_822FF508:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823010F8) {
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
	ctx.lr = 0x82301100;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230117c
	if (ctx.cr6.eq) goto loc_8230117C;
	// lwz r29,4(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82301124:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82301138
	if (!ctx.cr6.eq) goto loc_82301138;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82301138:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8230117c
	if (ctx.cr6.eq) goto loc_8230117C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// addi r4,r29,-4
	ctx.r4.s64 = r29.s64 + -4;
	// bne cr6,0x82301150
	if (!ctx.cr6.eq) goto loc_82301150;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82301150:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,184(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230116C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823011cc
	if (!ctx.cr0.eq) goto loc_823011CC;
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x82301124
	goto loc_82301124;
loc_8230117C:
	// addi r30,r30,52
	r30.s64 = r30.s64 + 52;
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x823011c0
	goto loc_823011C0;
loc_82301188:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r11,r31,-8
	ctx.r11.s64 = r31.s64 + -8;
	// bne cr6,0x82301198
	if (!ctx.cr6.eq) goto loc_82301198;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82301198:
	// lwz r3,312(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 312);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823011B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823011cc
	if (!ctx.cr0.eq) goto loc_823011CC;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_823011C0:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x82301188
	if (!ctx.cr6.eq) goto loc_82301188;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823011CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82308458) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82308460;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82308560
	if (ctx.cr6.eq) goto loc_82308560;
loc_82308474:
	// lwz r10,40(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82308560
	if (ctx.cr6.eq) goto loc_82308560;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// mr r29,r30
	r29.u64 = r30.u64;
	// b 0x82308498
	goto loc_82308498;
loc_8230848C:
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// beq cr6,0x823084a0
	if (ctx.cr6.eq) goto loc_823084A0;
	// lbzu r11,1(r29)
	ea = 1 + r29.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r29.u32 = ea;
loc_82308498:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8230848c
	if (!ctx.cr0.eq) goto loc_8230848C;
loc_823084A0:
	// lwz r31,4(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_823084A4:
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x823084b8
	if (!ctx.cr6.eq) goto loc_823084B8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823084B8:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82308560
	if (ctx.cr6.eq) goto loc_82308560;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
	// bne cr6,0x823084d0
	if (!ctx.cr6.eq) goto loc_823084D0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823084D0:
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82308528
	if (ctx.cr6.eq) goto loc_82308528;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
	// bne cr6,0x823084ec
	if (!ctx.cr6.eq) goto loc_823084EC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823084EC:
	// subf r5,r30,r29
	ctx.r5.u64 = r29.u64 - r30.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823316d8
	ctx.lr = 0x823084FC;
	sub_823316D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82308528
	if (!ctx.cr0.eq) goto loc_82308528;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
	// bne cr6,0x82308514
	if (!ctx.cr6.eq) goto loc_82308514;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82308514:
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82308530
	if (ctx.cr0.eq) goto loc_82308530;
loc_82308528:
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x823084a4
	goto loc_823084A4;
loc_82308530:
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82308558
	if (ctx.cr0.eq) goto loc_82308558;
	// addi r28,r31,-4
	r28.s64 = r31.s64 + -4;
	// bne cr6,0x8230854c
	if (!ctx.cr6.eq) goto loc_8230854C;
	// li r28,0
	r28.s64 = 0;
loc_8230854C:
	// addic. r30,r29,1
	ctx.xer.ca = r29.u32 > 4294967294;
	r30.s64 = r29.s64 + 1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82308474
	if (!ctx.cr0.eq) goto loc_82308474;
	// b 0x82308560
	goto loc_82308560;
loc_82308558:
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bne cr6,0x82308564
	if (!ctx.cr6.eq) goto loc_82308564;
loc_82308560:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82308564:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82310D78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f1,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r10,r9,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82310e40
	if (!ctx.cr6.eq) goto loc_82310E40;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r30,-32256
	r30.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,44(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,5388(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 5388);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f1
	ctx.cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// lfs f31,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	f31.f64 = double(temp.f32);
	// fmuls f30,f13,f0
	f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq cr6,0x82310e14
	if (ctx.cr6.eq) goto loc_82310E14;
	// bl 0x826a1b88
	ctx.lr = 0x82310DE0;
	sub_826A1B88(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f13,5388(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 5388);
	ctx.f13.f64 = double(temp.f32);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,3816(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3816);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,44(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// fmsubs f0,f12,f0,f31
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, -f31.f64)));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmadds f30,f0,f13,f30
	f30.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, f30.f64)));
loc_82310E14:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f30,80(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vexptefp128 v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
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
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82310f90
	goto loc_82310F90;
loc_82310E40:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82310f90
	if (!ctx.cr6.eq) goto loc_82310F90;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f11,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f0,5388(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 5388);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f31,3704(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	f31.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vexptefp128 v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
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
	// stvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stfs f12,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vexptefp128 v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
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
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vexptefp128 v62,v62
	ctx.fpscr.enableFlushModeUnconditional();
	{
		simde__m128 x = simde_mm_load_ps(ctx.v62.f32);
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
		simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(p, simde_mm_castsi128_ps(exp_bits)));
	}
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stvx128 v62,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f30,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	f30.f64 = double(temp.f32);
	// fsubs f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 - f30.f64));
	// lfs f0,3744(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 3744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f1
	ctx.cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x82310f64
	if (ctx.cr6.eq) goto loc_82310F64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x82310f64
	if (ctx.cr6.eq) goto loc_82310F64;
	// bl 0x826a1b88
	ctx.lr = 0x82310F14;
	sub_826A1B88(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// divw r9,r3,r31
	ctx.r9.u64 = uint32_t((r31.s32 && !(ctx.r3.s32 == INT32_MIN && r31.s32 == -1)) ? ctx.r3.s32 / r31.s32 : 0);
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// mullw r9,r9,r31
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r31.s32);
	// lfs f0,5432(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 5432);
	ctx.f0.f64 = double(temp.f32);
	// subf r10,r9,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r9.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// andc r11,r31,r11
	ctx.r11.u64 = r31.u64 & ~ctx.r11.u64;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// twllei r31,0
	if (r31.s32 == 0 || r31.u32 < 0u) ppc_trap(ctx, base, 0);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// fadds f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 + f31.f64));
	// fmadds f0,f12,f0,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, f30.f64)));
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x82310f6c
	goto loc_82310F6C;
loc_82310F64:
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82310F6C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5440(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5440);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82310f8c
	if (ctx.cr6.lt) goto loc_82310F8C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5436(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5436);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82310f90
	if (!ctx.cr6.gt) goto loc_82310F90;
loc_82310F8C:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_82310F90:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

DEFINE_REX_FUNC(sub_8232D148) {
	REX_FUNC_PROLOGUE();
	// ld r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 64);
	// ld r10,56(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 56);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232D480) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232d4b8
	if (ctx.cr6.eq) goto loc_8232D4B8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8232d4a8
	if (ctx.cr6.eq) goto loc_8232D4A8;
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x8232d4ac
	goto loc_8232D4AC;
loc_8232D4A8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8232D4AC:
	// bl 0x82317118
	ctx.lr = 0x8232D4B0;
	sub_82317118(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232d4bc
	if (!ctx.cr0.eq) goto loc_8232D4BC;
loc_8232D4B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232D4BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232F588) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8232F590;
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
	// bl 0x82332760
	ctx.lr = 0x8232F5A8;
	sub_82332760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232f5c4
	if (!ctx.cr6.eq) goto loc_8232F5C4;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8233d060
	ctx.lr = 0x8232F5C4;
	sub_8233D060(ctx, base);
loc_8232F5C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82330238) {
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
	// bl 0x82351018
	ctx.lr = 0x82330254;
	sub_82351018(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82330268
	if (!ctx.cr6.eq) goto loc_82330268;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823514c8
	ctx.lr = 0x82330268;
	sub_823514C8(ctx, base);
loc_82330268:
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

DEFINE_REX_FUNC(sub_82332760) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82332770
	if (!ctx.cr6.eq) goto loc_82332770;
loc_82332768:
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_82332770:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82332780
	if (!ctx.cr6.eq) goto loc_82332780;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82332780:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_82332798:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823327c8
	if (ctx.cr6.eq) goto loc_823327C8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82332798
	if (!ctx.cr6.eq) goto loc_82332798;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823327B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82332768
	if (ctx.cr6.eq) goto loc_82332768;
	// stw r3,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823327C8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823327b0
	goto loc_823327B0;
}

DEFINE_REX_FUNC(sub_8233CB78) {
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
	ctx.lr = 0x8233CB80;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,21(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 21);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233cbb0
	if (!ctx.cr6.eq) goto loc_8233CBB0;
	// li r3,81
	ctx.r3.s64 = 81;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cec
	return;
loc_8233CBB0:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// bne cr6,0x8233cbc4
	if (!ctx.cr6.eq) goto loc_8233CBC4;
loc_8233CBB8:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cec
	return;
loc_8233CBC4:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x8233cbd8
	if (!ctx.cr6.eq) goto loc_8233CBD8;
	// rlwinm r11,r28,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233cbb8
	if (ctx.cr6.eq) goto loc_8233CBB8;
loc_8233CBD8:
	// rlwinm r11,r28,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233cbf4
	if (ctx.cr6.eq) goto loc_8233CBF4;
	// rlwinm r11,r28,0,25,26
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x60;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233cbf4
	if (!ctx.cr6.eq) goto loc_8233CBF4;
	// ori r28,r28,32
	r28.u64 = r28.u64 | 32;
loc_8233CBF4:
	// rlwinm r10,r28,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8233cc18
	if (!ctx.cr6.eq) goto loc_8233CC18;
	// lwz r11,1176(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233cc18
	if (!ctx.cr6.eq) goto loc_8233CC18;
	// li r3,63
	ctx.r3.s64 = 63;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cec
	return;
loc_8233CC18:
	// rlwinm r11,r28,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233cc48
	if (ctx.cr6.eq) goto loc_8233CC48;
	// rlwinm r11,r28,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233cc48
	if (ctx.cr6.eq) goto loc_8233CC48;
	// rlwinm r11,r28,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233cc48
	if (!ctx.cr6.eq) goto loc_8233CC48;
	// li r3,51
	ctx.r3.s64 = 51;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cec
	return;
loc_8233CC48:
	// li r21,0
	r21.s64 = 0;
	// rlwinm r11,r28,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x10000;
	// stw r21,0(r22)
	REX_STORE_U32(r22.u32 + 0, r21.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233cfd0
	if (ctx.cr6.eq) goto loc_8233CFD0;
	// rlwinm r9,r28,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x80;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r24,1
	r24.s64 = 1;
	// lis r26,-32129
	r26.s64 = -2105606144;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r27,r11,8872
	r27.s64 = ctx.r11.s64 + 8872;
	// beq cr6,0x8233ccbc
	if (ctx.cr6.eq) goto loc_8233CCBC;
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8746
	ctx.r6.s64 = 8746;
	// li r4,312
	ctx.r4.s64 = 312;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8233CC94;
	sub_82330E40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233cca8
	if (ctx.cr6.eq) goto loc_8233CCA8;
	// bl 0x8239edc8
	ctx.lr = 0x8233CCA0;
	sub_8239EDC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233ccb4
	if (!ctx.cr6.eq) goto loc_8233CCB4;
loc_8233CCA8:
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cec
	return;
loc_8233CCB4:
	// stw r3,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r3.u32);
	// b 0x8233cd60
	goto loc_8233CD60;
loc_8233CCBC:
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// bne cr6,0x8233cd3c
	if (!ctx.cr6.eq) goto loc_8233CD3C;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82338ae0
	ctx.lr = 0x8233CCE0;
	sub_82338AE0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233cd3c
	if (ctx.cr6.eq) goto loc_8233CD3C;
	// lwz r11,1176(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1176);
	// lwz r10,304(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 304);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233cd3c
	if (ctx.cr6.eq) goto loc_8233CD3C;
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// addi r9,r10,-25864
	ctx.r9.s64 = ctx.r10.s64 + -25864;
	// stw r9,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// lwz r11,1176(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bne cr6,0x8233cd1c
	if (!ctx.cr6.eq) goto loc_8233CD1C;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
loc_8233CD1C:
	// lwz r11,304(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 304);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233CD34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r24,21813(r29)
	REX_STORE_U8(r29.u32 + 21813, r24.u8);
	// b 0x8233cd50
	goto loc_8233CD50;
loc_8233CD3C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,20884(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 20884);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823560f0
	ctx.lr = 0x8233CD50;
	sub_823560F0(ctx, base);
loc_8233CD50:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233d04c
	if (!ctx.cr6.eq) goto loc_8233D04C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
loc_8233CD60:
	// lwz r31,0(r22)
	r31.u64 = REX_LOAD_U32(r22.u32 + 0);
	// li r30,668
	r30.s64 = 668;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8233cdac
	if (ctx.cr6.eq) goto loc_8233CDAC;
	// lwz r11,40(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 40);
	// lwz r3,56(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 56);
	// addi r11,r11,167
	ctx.r11.s64 = ctx.r11.s64 + 167;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x8233cd94
	if (ctx.cr6.eq) goto loc_8233CD94;
	// bl 0x82331458
	ctx.lr = 0x8233CD8C;
	sub_82331458(ctx, base);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + r30.u64;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
loc_8233CD94:
	// lwz r3,60(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233cdac
	if (ctx.cr6.eq) goto loc_8233CDAC;
	// bl 0x82331458
	ctx.lr = 0x8233CDA4;
	sub_82331458(ctx, base);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + r30.u64;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
loc_8233CDAC:
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8816
	ctx.r6.s64 = 8816;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8233CDC8;
	sub_82330E40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r3.u32);
	// beq cr6,0x8233cca8
	if (ctx.cr6.eq) goto loc_8233CCA8;
	// rlwinm r11,r28,0,3,20
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x1FFFF800;
	// rlwinm r11,r11,0,20,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF0000FFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233cdec
	if (ctx.cr6.eq) goto loc_8233CDEC;
	// stw r23,536(r3)
	REX_STORE_U32(ctx.r3.u32 + 536, r23.u32);
	// b 0x8233ce14
	goto loc_8233CE14;
loc_8233CDEC:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8233ce14
	if (ctx.cr6.eq) goto loc_8233CE14;
	// rlwinm r11,r28,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x1000000;
	// li r5,256
	ctx.r5.s64 = 256;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// beq cr6,0x8233ce10
	if (ctx.cr6.eq) goto loc_8233CE10;
	// bl 0x8239d578
	ctx.lr = 0x8233CE0C;
	sub_8239D578(ctx, base);
	// b 0x8233ce14
	goto loc_8233CE14;
loc_8233CE10:
	// bl 0x823314a0
	ctx.lr = 0x8233CE14;
	sub_823314A0(ctx, base);
loc_8233CE14:
	// lwz r11,22048(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 22048);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// lwz r10,216(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 216);
	// stw r11,512(r10)
	REX_STORE_U32(ctx.r10.u32 + 512, ctx.r11.u32);
	// lwz r9,22052(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 22052);
	// lwz r8,216(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 216);
	// stw r9,516(r8)
	REX_STORE_U32(ctx.r8.u32 + 516, ctx.r9.u32);
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// stw r28,32(r31)
	REX_STORE_U32(r31.u32 + 32, r28.u32);
	// stw r29,192(r31)
	REX_STORE_U32(r31.u32 + 192, r29.u32);
	// stw r24,220(r31)
	REX_STORE_U32(r31.u32 + 220, r24.u32);
	// beq cr6,0x8233cf18
	if (ctx.cr6.eq) goto loc_8233CF18;
	// li r5,112
	ctx.r5.s64 = 112;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r11,540
	ctx.r3.s64 = ctx.r11.s64 + 540;
	// bl 0x823ef2f8
	ctx.lr = 0x8233CE54;
	sub_823EF2F8(ctx, base);
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// stb r24,652(r11)
	REX_STORE_U8(ctx.r11.u32 + 652, r24.u8);
	// lwz r4,96(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 96);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8233ce7c
	if (ctx.cr6.eq) goto loc_8233CE7C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233CE7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233CE7C:
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// addi r30,r11,668
	r30.s64 = ctx.r11.s64 + 668;
	// lwz r10,580(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 580);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233ceb8
	if (ctx.cr6.eq) goto loc_8233CEB8;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,576(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 576);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x8233CEA0;
	sub_823EF2F8(ctx, base);
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// stw r30,576(r11)
	REX_STORE_U32(ctx.r11.u32 + 576, r30.u32);
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// lwz r10,580(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 580);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r30
	r30.u64 = ctx.r10.u64 + r30.u64;
loc_8233CEB8:
	// lwz r4,596(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 596);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8233cee8
	if (ctx.cr6.eq) goto loc_8233CEE8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82331480
	ctx.lr = 0x8233CECC;
	sub_82331480(ctx, base);
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// stw r30,596(r11)
	REX_STORE_U32(ctx.r11.u32 + 596, r30.u32);
	// lwz r10,216(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 216);
	// lwz r3,596(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 596);
	// bl 0x82331458
	ctx.lr = 0x8233CEE0;
	sub_82331458(ctx, base);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + r30.u64;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
loc_8233CEE8:
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// lwz r4,600(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 600);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8233cf1c
	if (ctx.cr6.eq) goto loc_8233CF1C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82331480
	ctx.lr = 0x8233CF00;
	sub_82331480(ctx, base);
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// stw r30,600(r11)
	REX_STORE_U32(ctx.r11.u32 + 600, r30.u32);
	// lwz r10,216(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 216);
	// lwz r3,600(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 600);
	// bl 0x82331458
	ctx.lr = 0x8233CF14;
	sub_82331458(ctx, base);
	// b 0x8233cf1c
	goto loc_8233CF1C;
loc_8233CF18:
	// stb r21,652(r11)
	REX_STORE_U8(ctx.r11.u32 + 652, r21.u8);
loc_8233CF1C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82341f30
	ctx.lr = 0x8233CF24;
	sub_82341F30(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233cf60
	if (ctx.cr6.eq) goto loc_8233CF60;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233CF50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r21,0(r22)
	REX_STORE_U32(r22.u32 + 0, r21.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cec
	return;
loc_8233CF60:
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// lwz r10,520(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 520);
	// lwz r3,324(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 324);
	// bl 0x8233e7e0
	ctx.lr = 0x8233CF70;
	sub_8233E7E0(ctx, base);
	// lwz r9,216(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 216);
	// stw r31,532(r9)
	REX_STORE_U32(ctx.r9.u32 + 532, r31.u32);
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// addi r9,r11,524
	ctx.r9.s64 = ctx.r11.s64 + 524;
	// lwz r10,520(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 520);
	// addi r10,r10,312
	ctx.r10.s64 = ctx.r10.s64 + 312;
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,528(r11)
	REX_STORE_U32(ctx.r11.u32 + 528, ctx.r8.u32);
	// stw r10,524(r11)
	REX_STORE_U32(ctx.r11.u32 + 524, ctx.r10.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r7,528(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 528);
	// stw r9,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// lwz r6,216(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 216);
	// lwz r5,520(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 520);
	// lwz r3,324(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 324);
	// bl 0x8233e820
	ctx.lr = 0x8233CFB0;
	sub_8233E820(ctx, base);
	// lwz r3,216(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 216);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,520(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 520);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x823537f0
	ctx.lr = 0x8233CFC4;
	sub_823537F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cec
	return;
loc_8233CFD0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8233cff0
	if (ctx.cr6.eq) goto loc_8233CFF0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,112
	ctx.r5.s64 = 112;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8233CFE8;
	sub_826A1E70(ctx, base);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// b 0x8233cff4
	goto loc_8233CFF4;
loc_8233CFF0:
	// li r8,0
	ctx.r8.s64 = 0;
loc_8233CFF4:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// lwz r6,22048(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 22048);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,22052(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 22052);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823394f8
	ctx.lr = 0x8233D014;
	sub_823394F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,0(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233d048
	if (ctx.cr6.eq) goto loc_8233D048;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8233d048
	if (ctx.cr6.eq) goto loc_8233D048;
	// lwz r4,96(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 96);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8233d048
	if (ctx.cr6.eq) goto loc_8233D048;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233D048;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233D048:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8233D04C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_8235E058) {
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
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235e08c
	if (ctx.cr6.eq) goto loc_8235E08C;
loc_8235E078:
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
loc_8235E08C:
	// stw r6,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x8235e0b0
	if (ctx.cr6.eq) goto loc_8235E0B0;
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// bne cr6,0x8235e078
	if (!ctx.cr6.eq) goto loc_8235E078;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// b 0x8235e0b8
	goto loc_8235E0B8;
loc_8235E0B0:
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_8235E0B8:
	// addis r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 131072;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r10,r10,1512
	ctx.r10.s64 = ctx.r10.s64 + 1512;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r5,r11,40
	ctx.r5.s64 = ctx.r11.s64 + 40;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bne cr6,0x8235e0ec
	if (!ctx.cr6.eq) goto loc_8235E0EC;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r7,r9,1468
	ctx.r7.u64 = ctx.r9.u64 | 1468;
	// stwx r5,r5,r7
	REX_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r5.u32);
	// b 0x8235e110
	goto loc_8235E110;
loc_8235E0EC:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8235e110
	if (ctx.cr6.eq) goto loc_8235E110;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x8235e110
	if (!ctx.cr6.eq) goto loc_8235E110;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// addis r7,r5,1
	ctx.r7.s64 = ctx.r5.s64 + 65536;
	// ori r6,r9,1468
	ctx.r6.u64 = ctx.r9.u64 | 1468;
	// addi r7,r7,-10044
	ctx.r7.s64 = ctx.r7.s64 + -10044;
	// stwx r7,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r7.u32);
loc_8235E110:
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// stw r8,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// bl 0x8235dc98
	ctx.lr = 0x8235E128;
	sub_8235DC98(ctx, base);
	// subfic r9,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// li r7,62
	ctx.r7.s64 = 62;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 & ctx.r7.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82363CF0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// lwz r9,1188(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 1188);
	// lfs f12,8616(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8616);
	ctx.f12.f64 = double(temp.f32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f13,f11
	ctx.f13.f64 = double(float(ctx.f11.f64));
	// fdivs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// stfs f10,312(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 312, temp.u32);
	// bgt cr6,0x82363de4
	if (ctx.cr6.gt) goto loc_82363DE4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82363d78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82363D78;
	// bdzf 4*cr6+eq,0x82363d9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82363D9C;
	// bne cr6,0x82363dc0
	if (!ctx.cr6.eq) goto loc_82363DC0;
	// stfs f0,332(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 332, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,8516(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8516);
	ctx.f13.f64 = double(temp.f32);
	// lfd f1,10608(r10)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + 10608);
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x8269f778
	ctx.lr = 0x82363D6C;
	sub_8269F778(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,336(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 336, temp.u32);
	// b 0x82363de4
	goto loc_82363DE4;
loc_82363D78:
	// stfs f0,316(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 316, temp.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,11504(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 11504);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bl 0x826a03b0
	ctx.lr = 0x82363D90;
	sub_826A03B0(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,320(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 320, temp.u32);
	// b 0x82363de4
	goto loc_82363DE4;
loc_82363D9C:
	// stfs f0,324(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 324, temp.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,11504(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 11504);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bl 0x826a03b0
	ctx.lr = 0x82363DB4;
	sub_826A03B0(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,328(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 328, temp.u32);
	// b 0x82363de4
	goto loc_82363DE4;
loc_82363DC0:
	// stfs f0,340(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 340, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,8516(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8516);
	ctx.f13.f64 = double(temp.f32);
	// lfd f1,10608(r10)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + 10608);
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x8269f778
	ctx.lr = 0x82363DDC;
	sub_8269F778(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,344(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 344, temp.u32);
loc_82363DE4:
	// li r3,0
	ctx.r3.s64 = 0;
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

DEFINE_REX_FUNC(sub_8236E558) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8236e568
	if (!ctx.cr6.eq) goto loc_8236E568;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236E568:
	// b 0x8236e380
	sub_8236E380(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236F908) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8236f918
	if (!ctx.cr6.eq) goto loc_8236F918;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236F918:
	// b 0x8236e6f0
	sub_8236E6F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236FB40) {
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
	// bl 0x826a1ca4
	ctx.lr = 0x8236FB48;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2c70
	ctx.lr = 0x8236FB50;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x8236fdc0
	if (!ctx.cr6.eq) goto loc_8236FDC0;
	// lhz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82370734
	if (ctx.cr6.eq) goto loc_82370734;
	// lis r7,-32129
	ctx.r7.s64 = -2105606144;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// lfs f0,9824(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 9824);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x8236fd28
	if (ctx.cr6.lt) goto loc_8236FD28;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r5,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r5.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_8236FB9C:
	// lfs f13,396(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 396);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,608(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 608);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f10,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,332(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 332);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f7,604(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 604);
	ctx.f7.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f6,600(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 600);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,460(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 460);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,592(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 592);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,524(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 524);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,596(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 596);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,588(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 588);
	ctx.f1.f64 = double(temp.f32);
	// stfs f9,396(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// fmadds f13,f9,f7,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f7.f64, ctx.f11.f64)));
	// stfs f8,332(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 332, temp.u32);
	// stfs f5,524(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 524, temp.u32);
	// fmadds f12,f8,f6,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f8.f64, ctx.f6.f64, ctx.f13.f64)));
	// fnmsubs f11,f5,f4,f12
	ctx.f11.f64 = double(float(-std::fma(ctx.f5.f64, ctx.f4.f64, -ctx.f12.f64)));
	// fnmsubs f10,f2,f3,f11
	ctx.f10.f64 = double(float(-std::fma(ctx.f2.f64, ctx.f3.f64, -ctx.f11.f64)));
	// fdivs f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f1.f64));
	// stfs f9,460(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 460, temp.u32);
	// stfs f9,-4(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f8,608(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 608);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,604(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 604);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,600(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 600);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,460(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 460);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,592(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 592);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,396(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 396);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,524(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 524);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,596(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 596);
	ctx.f1.f64 = double(temp.f32);
	// lfsx f13,r8,r11
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmuls f11,f8,f3
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// lfs f10,332(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 332);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,588(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 588);
	ctx.f9.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f5,524(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 524, temp.u32);
	// stfs f10,396(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// fmadds f8,f10,f7,f11
	ctx.f8.f64 = double(float(std::fma(ctx.f10.f64, ctx.f7.f64, ctx.f11.f64)));
	// stfs f12,332(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 332, temp.u32);
	// fmadds f7,f12,f6,f8
	ctx.f7.f64 = double(float(std::fma(ctx.f12.f64, ctx.f6.f64, ctx.f8.f64)));
	// fnmsubs f6,f5,f4,f7
	ctx.f6.f64 = double(float(-std::fma(ctx.f5.f64, ctx.f4.f64, -ctx.f7.f64)));
	// fnmsubs f5,f1,f2,f6
	ctx.f5.f64 = double(float(-std::fma(ctx.f1.f64, ctx.f2.f64, -ctx.f6.f64)));
	// fdivs f4,f5,f9
	ctx.f4.f64 = double(float(ctx.f5.f64 / ctx.f9.f64));
	// stfs f4,460(r3)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 460, temp.u32);
	// stfs f4,0(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f3,608(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 608);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,604(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 604);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,600(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 600);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,460(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 460);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,592(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 592);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,396(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 396);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,524(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 524);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,596(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 596);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fmuls f6,f3,f11
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// lfs f5,332(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 332);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,588(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 588);
	ctx.f4.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f5,396(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// fmadds f3,f5,f2,f6
	ctx.f3.f64 = double(float(std::fma(ctx.f5.f64, ctx.f2.f64, ctx.f6.f64)));
	// stfs f13,524(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 524, temp.u32);
	// stfs f7,332(r3)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r3.u32 + 332, temp.u32);
	// fmadds f2,f7,f1,f3
	ctx.f2.f64 = double(float(std::fma(ctx.f7.f64, ctx.f1.f64, ctx.f3.f64)));
	// fnmsubs f1,f13,f12,f2
	ctx.f1.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f12.f64, -ctx.f2.f64)));
	// fnmsubs f13,f9,f10,f1
	ctx.f13.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f10.f64, -ctx.f1.f64)));
	// fdivs f12,f13,f4
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f4.f64));
	// stfs f12,460(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 460, temp.u32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,604(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 604);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,332(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 332);
	ctx.f10.f64 = double(temp.f32);
	// lfsu f13,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// lfs f9,608(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 608);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,396(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 396);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// lfs f6,460(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 460);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f10,f11,f7
	ctx.f5.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f7.f64)));
	// fadds f4,f13,f0
	ctx.f4.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f3,600(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 600);
	ctx.f3.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmadds f2,f4,f3,f5
	ctx.f2.f64 = double(float(std::fma(ctx.f4.f64, ctx.f3.f64, ctx.f5.f64)));
	// lfs f1,592(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 592);
	ctx.f1.f64 = double(temp.f32);
	// stfs f10,396(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// lfs f13,524(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 524);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,596(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 596);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,588(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 588);
	ctx.f11.f64 = double(temp.f32);
	// stfs f4,332(r3)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 332, temp.u32);
	// stfs f6,524(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 524, temp.u32);
	// fnmsubs f10,f6,f1,f2
	ctx.f10.f64 = double(float(-std::fma(ctx.f6.f64, ctx.f1.f64, -ctx.f2.f64)));
	// fnmsubs f9,f12,f13,f10
	ctx.f9.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f13.f64, -ctx.f10.f64)));
	// fdivs f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f11.f64));
	// stfs f8,460(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 460, temp.u32);
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x8236fb9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236FB9C;
	// stfs f0,9824(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 9824, temp.u32);
loc_8236FD28:
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82370a88
	if (!ctx.cr6.lt) goto loc_82370A88;
	// subf r8,r9,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r5,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r5.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8236FD44:
	// lfs f13,396(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 396);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,608(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 608);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfsx f10,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,332(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 332);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f7,604(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 604);
	ctx.f7.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f6,600(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 600);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,460(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 460);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,592(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 592);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,524(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 524);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,596(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 596);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,588(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 588);
	ctx.f1.f64 = double(temp.f32);
	// stfs f9,396(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// fmadds f13,f9,f7,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f7.f64, ctx.f11.f64)));
	// stfs f8,332(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 332, temp.u32);
	// stfs f5,524(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 524, temp.u32);
	// fmadds f12,f8,f6,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f8.f64, ctx.f6.f64, ctx.f13.f64)));
	// fnmsubs f11,f5,f4,f12
	ctx.f11.f64 = double(float(-std::fma(ctx.f5.f64, ctx.f4.f64, -ctx.f12.f64)));
	// fnmsubs f10,f2,f3,f11
	ctx.f10.f64 = double(float(-std::fma(ctx.f2.f64, ctx.f3.f64, -ctx.f11.f64)));
	// fdivs f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f1.f64));
	// stfs f9,460(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 460, temp.u32);
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8236fd44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236FD44;
	// stfs f0,9824(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 9824, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2cbc
	ctx.lr = 0x8236FDBC;
	// b 0x826a1cf4
	return;
loc_8236FDC0:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x823701ac
	if (!ctx.cr6.eq) goto loc_823701AC;
	// lhz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82370734
	if (!ctx.cr6.eq) goto loc_82370734;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-32129
	ctx.r7.s64 = -2105606144;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// lfs f13,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9824(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 9824);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x823700c0
	if (ctx.cr6.lt) goto loc_823700C0;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r5,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r5.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_8236FE14:
	// lfs f12,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r11,r8
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f8,600(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 600);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,332(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 332);
	ctx.f7.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f4,396(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 396);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,604(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 604);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,336(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 336);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,400(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 400);
	ctx.f3.f64 = double(temp.f32);
	// stfs f7,396(r3)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// stfs f6,400(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 400, temp.u32);
	// lfs f2,608(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 608);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f11,f8,f10
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// lfs f1,460(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 460);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f8,f8,f9
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// lfs f12,464(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 464);
	ctx.f12.f64 = double(temp.f32);
	// lfs f31,592(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 592);
	f31.f64 = double(temp.f32);
	// lfs f30,524(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 524);
	f30.f64 = double(temp.f32);
	// lfs f29,528(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 528);
	f29.f64 = double(temp.f32);
	// lfs f28,596(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 596);
	f28.f64 = double(temp.f32);
	// lfs f27,588(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 588);
	f27.f64 = double(temp.f32);
	// stfs f1,524(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 524, temp.u32);
	// fdivs f27,f13,f27
	f27.f64 = double(float(ctx.f13.f64 / f27.f64));
	// stfs f12,528(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 528, temp.u32);
	// stfs f10,332(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 332, temp.u32);
	// fmadds f7,f7,f5,f11
	ctx.f7.f64 = double(float(std::fma(ctx.f7.f64, ctx.f5.f64, ctx.f11.f64)));
	// stfs f9,336(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 336, temp.u32);
	// fmadds f6,f6,f5,f8
	ctx.f6.f64 = double(float(std::fma(ctx.f6.f64, ctx.f5.f64, ctx.f8.f64)));
	// fmadds f5,f2,f4,f7
	ctx.f5.f64 = double(float(std::fma(ctx.f2.f64, ctx.f4.f64, ctx.f7.f64)));
	// fmadds f4,f2,f3,f6
	ctx.f4.f64 = double(float(std::fma(ctx.f2.f64, ctx.f3.f64, ctx.f6.f64)));
	// fnmsubs f3,f1,f31,f5
	ctx.f3.f64 = double(float(-std::fma(ctx.f1.f64, f31.f64, -ctx.f5.f64)));
	// fnmsubs f2,f12,f31,f4
	ctx.f2.f64 = double(float(-std::fma(ctx.f12.f64, f31.f64, -ctx.f4.f64)));
	// fnmsubs f1,f28,f30,f3
	ctx.f1.f64 = double(float(-std::fma(f28.f64, f30.f64, -ctx.f3.f64)));
	// fnmsubs f12,f28,f29,f2
	ctx.f12.f64 = double(float(-std::fma(f28.f64, f29.f64, -ctx.f2.f64)));
	// fmuls f11,f1,f27
	ctx.f11.f64 = double(float(ctx.f1.f64 * f27.f64));
	// stfs f11,460(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 460, temp.u32);
	// fmuls f10,f12,f27
	ctx.f10.f64 = double(float(ctx.f12.f64 * f27.f64));
	// stfs f10,464(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 464, temp.u32);
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f11,-4(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f3,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f9,332(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 332);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,604(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 604);
	ctx.f8.f64 = double(temp.f32);
	// lfs f31,336(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 336);
	f31.f64 = double(temp.f32);
	// lfs f6,396(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 396);
	ctx.f6.f64 = double(temp.f32);
	// lfs f30,608(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 608);
	f30.f64 = double(temp.f32);
	// lfs f7,400(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 400);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// fadds f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// lfs f1,460(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 460);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,464(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 464);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,600(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 600);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f4
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fmuls f11,f11,f2
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// lfs f27,588(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 588);
	f27.f64 = double(temp.f32);
	// fmadds f10,f9,f8,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, ctx.f8.f64, ctx.f10.f64)));
	// lfs f29,592(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 592);
	f29.f64 = double(temp.f32);
	// stfs f9,396(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// lfs f3,528(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 528);
	ctx.f3.f64 = double(temp.f32);
	// lfs f28,596(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 596);
	f28.f64 = double(temp.f32);
	// lfs f5,524(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 524);
	ctx.f5.f64 = double(temp.f32);
	// stfs f2,336(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 336, temp.u32);
	// stfs f4,332(r3)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 332, temp.u32);
	// stfs f31,400(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 400, temp.u32);
	// stfs f12,528(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 528, temp.u32);
	// fmadds f8,f31,f8,f11
	ctx.f8.f64 = double(float(std::fma(f31.f64, ctx.f8.f64, ctx.f11.f64)));
	// stfs f1,524(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 524, temp.u32);
	// fmadds f11,f30,f6,f10
	ctx.f11.f64 = double(float(std::fma(f30.f64, ctx.f6.f64, ctx.f10.f64)));
	// fmadds f10,f30,f7,f8
	ctx.f10.f64 = double(float(std::fma(f30.f64, ctx.f7.f64, ctx.f8.f64)));
	// fdivs f2,f13,f27
	ctx.f2.f64 = double(float(ctx.f13.f64 / f27.f64));
	// fnmsubs f9,f1,f29,f11
	ctx.f9.f64 = double(float(-std::fma(ctx.f1.f64, f29.f64, -ctx.f11.f64)));
	// fnmsubs f8,f12,f29,f10
	ctx.f8.f64 = double(float(-std::fma(ctx.f12.f64, f29.f64, -ctx.f10.f64)));
	// fnmsubs f7,f28,f5,f9
	ctx.f7.f64 = double(float(-std::fma(f28.f64, ctx.f5.f64, -ctx.f9.f64)));
	// fnmsubs f6,f28,f3,f8
	ctx.f6.f64 = double(float(-std::fma(f28.f64, ctx.f3.f64, -ctx.f8.f64)));
	// fmuls f5,f7,f2
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// stfs f5,460(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 460, temp.u32);
	// fmuls f4,f6,f2
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// stfs f4,464(r3)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 464, temp.u32);
	// stfs f5,4(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f4,8(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f3,600(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 600);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,336(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 336);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,604(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 604);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,400(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 400);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,608(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 608);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,460(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 460);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f6,464(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 464);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// lfs f4,592(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 592);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f10,f3,f7
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// lfs f31,596(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 596);
	f31.f64 = double(temp.f32);
	// lfs f30,528(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 528);
	f30.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f29,588(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 588);
	f29.f64 = double(temp.f32);
	// lfs f28,332(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 332);
	f28.f64 = double(temp.f32);
	// stfs f5,336(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 336, temp.u32);
	// lfs f27,396(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 396);
	f27.f64 = double(temp.f32);
	// stfs f2,400(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 400, temp.u32);
	// stfs f7,332(r3)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r3.u32 + 332, temp.u32);
	// lfs f9,524(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 524);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f3,f3,f5
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// stfs f8,524(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 524, temp.u32);
	// fmadds f5,f2,f1,f3
	ctx.f5.f64 = double(float(std::fma(ctx.f2.f64, ctx.f1.f64, ctx.f3.f64)));
	// stfs f28,396(r3)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// fmadds f10,f28,f1,f10
	ctx.f10.f64 = double(float(std::fma(f28.f64, ctx.f1.f64, ctx.f10.f64)));
	// stfs f6,528(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 528, temp.u32);
	// fdivs f7,f13,f29
	ctx.f7.f64 = double(float(ctx.f13.f64 / f29.f64));
	// fmadds f2,f11,f12,f5
	ctx.f2.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, ctx.f5.f64)));
	// fmadds f3,f11,f27,f10
	ctx.f3.f64 = double(float(std::fma(ctx.f11.f64, f27.f64, ctx.f10.f64)));
	// fnmsubs f12,f6,f4,f2
	ctx.f12.f64 = double(float(-std::fma(ctx.f6.f64, ctx.f4.f64, -ctx.f2.f64)));
	// fnmsubs f1,f8,f4,f3
	ctx.f1.f64 = double(float(-std::fma(ctx.f8.f64, ctx.f4.f64, -ctx.f3.f64)));
	// fnmsubs f10,f31,f30,f12
	ctx.f10.f64 = double(float(-std::fma(f31.f64, f30.f64, -ctx.f12.f64)));
	// fnmsubs f11,f31,f9,f1
	ctx.f11.f64 = double(float(-std::fma(f31.f64, ctx.f9.f64, -ctx.f1.f64)));
	// fmuls f8,f10,f7
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// stfs f8,464(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 464, temp.u32);
	// fmuls f9,f11,f7
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// stfs f9,460(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 460, temp.u32);
	// stfs f9,12(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f8,16(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f31,600(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 600);
	f31.f64 = double(temp.f32);
	// lfs f28,604(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 604);
	f28.f64 = double(temp.f32);
	// lfs f27,608(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 608);
	f27.f64 = double(temp.f32);
	// lfs f6,400(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 400);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,592(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 592);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,524(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 524);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,596(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 596);
	ctx.f1.f64 = double(temp.f32);
	// lfs f29,332(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 332);
	f29.f64 = double(temp.f32);
	// lfs f9,396(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 396);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fadds f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// lfs f7,336(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 336);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f30,f31,f8
	f30.f64 = double(float(f31.f64 * ctx.f8.f64));
	// lfsu f12,32(r10)
	ea = 32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f3,464(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 464);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f31,f31,f12
	f31.f64 = double(float(f31.f64 * ctx.f12.f64));
	// lfs f10,588(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 588);
	ctx.f10.f64 = double(temp.f32);
	// stfs f8,332(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 332, temp.u32);
	// fmadds f8,f29,f28,f30
	ctx.f8.f64 = double(float(std::fma(f29.f64, f28.f64, f30.f64)));
	// stfs f7,400(r3)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r3.u32 + 400, temp.u32);
	// stfs f12,336(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 336, temp.u32);
	// lfs f4,460(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 460);
	ctx.f4.f64 = double(temp.f32);
	// lfs f11,528(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 528);
	ctx.f11.f64 = double(temp.f32);
	// stfs f4,524(r3)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 524, temp.u32);
	// fmadds f7,f7,f28,f31
	ctx.f7.f64 = double(float(std::fma(ctx.f7.f64, f28.f64, f31.f64)));
	// stfs f29,396(r3)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// fmadds f12,f27,f9,f8
	ctx.f12.f64 = double(float(std::fma(f27.f64, ctx.f9.f64, ctx.f8.f64)));
	// fdivs f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// fmadds f9,f27,f6,f7
	ctx.f9.f64 = double(float(std::fma(f27.f64, ctx.f6.f64, ctx.f7.f64)));
	// fnmsubs f8,f4,f5,f12
	ctx.f8.f64 = double(float(-std::fma(ctx.f4.f64, ctx.f5.f64, -ctx.f12.f64)));
	// fnmsubs f7,f3,f5,f9
	ctx.f7.f64 = double(float(-std::fma(ctx.f3.f64, ctx.f5.f64, -ctx.f9.f64)));
	// fnmsubs f6,f1,f2,f8
	ctx.f6.f64 = double(float(-std::fma(ctx.f1.f64, ctx.f2.f64, -ctx.f8.f64)));
	// fnmsubs f5,f1,f11,f7
	ctx.f5.f64 = double(float(-std::fma(ctx.f1.f64, ctx.f11.f64, -ctx.f7.f64)));
	// fmuls f4,f6,f10
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f2,f5,f10
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// stfs f4,460(r3)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 460, temp.u32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f3,528(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 528, temp.u32);
	// stfs f2,464(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 464, temp.u32);
	// stfs f4,20(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f2,24(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bdnz 0x8236fe14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236FE14;
	// stfs f0,9824(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 9824, temp.u32);
loc_823700C0:
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82370a88
	if (!ctx.cr6.lt) goto loc_82370A88;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r9,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r9.u64;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r9,r5,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r5.u64;
loc_823700E8:
	// lfsu f12,8(r10)
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// lfs f9,608(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 608);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f7,396(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 396);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f11,r9,r11
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// lfs f6,400(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 400);
	ctx.f6.f64 = double(temp.f32);
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fmuls f4,f9,f6
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// lfs f3,600(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 600);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,332(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 332);
	ctx.f2.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,604(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 604);
	ctx.f12.f64 = double(temp.f32);
	// lfs f1,336(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 336);
	ctx.f1.f64 = double(temp.f32);
	// stfs f2,396(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// stfs f1,400(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 400, temp.u32);
	// lfs f11,460(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 460);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,592(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 592);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f5,f3,f8,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f3.f64, ctx.f8.f64, ctx.f5.f64)));
	// lfs f9,464(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 464);
	ctx.f9.f64 = double(temp.f32);
	// lfs f31,524(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 524);
	f31.f64 = double(temp.f32);
	// fmadds f4,f3,f10,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, ctx.f4.f64)));
	// stfs f11,524(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 524, temp.u32);
	// lfs f6,596(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 596);
	ctx.f6.f64 = double(temp.f32);
	// lfs f30,528(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 528);
	f30.f64 = double(temp.f32);
	// lfs f3,588(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 588);
	ctx.f3.f64 = double(temp.f32);
	// stfs f10,336(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 336, temp.u32);
	// fdivs f3,f13,f3
	ctx.f3.f64 = double(float(ctx.f13.f64 / ctx.f3.f64));
	// stfs f9,528(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 528, temp.u32);
	// stfs f8,332(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 332, temp.u32);
	// fmadds f2,f2,f12,f5
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f12.f64, ctx.f5.f64)));
	// fmadds f1,f1,f12,f4
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f12.f64, ctx.f4.f64)));
	// fnmsubs f12,f11,f7,f2
	ctx.f12.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f7.f64, -ctx.f2.f64)));
	// fnmsubs f11,f9,f7,f1
	ctx.f11.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f7.f64, -ctx.f1.f64)));
	// fnmsubs f10,f6,f31,f12
	ctx.f10.f64 = double(float(-std::fma(ctx.f6.f64, f31.f64, -ctx.f12.f64)));
	// fnmsubs f9,f6,f30,f11
	ctx.f9.f64 = double(float(-std::fma(ctx.f6.f64, f30.f64, -ctx.f11.f64)));
	// fmuls f8,f10,f3
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// stfs f8,460(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 460, temp.u32);
	// fmuls f7,f9,f3
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// stfs f7,464(r3)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r3.u32 + 464, temp.u32);
	// stfs f8,-4(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x823700e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823700E8;
	// stfs f0,9824(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 9824, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2cbc
	ctx.lr = 0x823701A8;
	// b 0x826a1cf4
	return;
loc_823701AC:
	// cmpwi cr6,r7,6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 6, ctx.xer);
	// bne cr6,0x823703ec
	if (!ctx.cr6.eq) goto loc_823703EC;
	// lhz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r10,63
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 63, ctx.xer);
	// bne cr6,0x82370734
	if (!ctx.cr6.eq) goto loc_82370734;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82370a88
	if (ctx.cr6.eq) goto loc_82370A88;
	// lis r8,-32129
	ctx.r8.s64 = -2105606144;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// subf r9,r4,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r4.u64;
	// lfs f0,9824(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 9824);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3704(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-300(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -300, temp.u32);
	// stfs f0,-304(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -304, temp.u32);
loc_823701F4:
	// lfs f13,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f10,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f8,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f6,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fadds f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// lfs f3,600(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 600);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,608(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 608);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,404(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 404);
	ctx.f1.f64 = double(temp.f32);
	// stfs f2,-296(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + -296, temp.u32);
	// fmuls f13,f1,f2
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// lfs f12,604(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 604);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,332(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 332);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f3,f11
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// lfs f1,336(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 336);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f2,f3,f9
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// lfs f28,344(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 344);
	f28.f64 = double(temp.f32);
	// fmuls f31,f3,f7
	f31.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// stfs f11,-292(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -292, temp.u32);
	// fmuls f29,f3,f5
	f29.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// lfs f30,340(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 340);
	f30.f64 = double(temp.f32);
	// fmuls f27,f3,f4
	f27.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// lfs f26,348(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 348);
	f26.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f25,352(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 352);
	f25.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fmadds f13,f30,f12,f13
	ctx.f13.f64 = double(float(std::fma(f30.f64, ctx.f12.f64, ctx.f13.f64)));
	// lfs f10,396(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 396);
	ctx.f10.f64 = double(temp.f32);
	// lfs f24,400(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 400);
	f24.f64 = double(temp.f32);
	// lfs f23,408(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 408);
	f23.f64 = double(temp.f32);
	// fmadds f8,f6,f12,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, ctx.f8.f64)));
	// lfs f22,412(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 412);
	f22.f64 = double(temp.f32);
	// fmadds f2,f1,f12,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f1.f64, ctx.f12.f64, ctx.f2.f64)));
	// lfs f21,416(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 416);
	f21.f64 = double(temp.f32);
	// fmadds f11,f28,f12,f31
	ctx.f11.f64 = double(float(std::fma(f28.f64, ctx.f12.f64, f31.f64)));
	// lfs f31,592(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 592);
	f31.f64 = double(temp.f32);
	// fmadds f29,f26,f12,f29
	f29.f64 = double(float(std::fma(f26.f64, ctx.f12.f64, f29.f64)));
	// lfs f20,460(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 460);
	f20.f64 = double(temp.f32);
	// fmadds f12,f25,f12,f27
	ctx.f12.f64 = double(float(std::fma(f25.f64, ctx.f12.f64, f27.f64)));
	// lfs f27,464(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 464);
	f27.f64 = double(temp.f32);
	// lfs f18,472(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 472);
	f18.f64 = double(temp.f32);
	// stfs f6,396(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// lfs f17,-296(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -296);
	f17.f64 = double(temp.f32);
	// fmadds f3,f3,f0,f13
	ctx.f3.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f9,-296(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -296, temp.u32);
	// lfs f13,476(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 476);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f17,f10,f8
	ctx.f10.f64 = double(float(std::fma(f17.f64, ctx.f10.f64, ctx.f8.f64)));
	// lfs f19,468(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 468);
	f19.f64 = double(temp.f32);
	// fmadds f2,f17,f24,f2
	ctx.f2.f64 = double(float(std::fma(f17.f64, f24.f64, ctx.f2.f64)));
	// lfs f16,480(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 480);
	f16.f64 = double(temp.f32);
	// fmadds f11,f17,f23,f11
	ctx.f11.f64 = double(float(std::fma(f17.f64, f23.f64, ctx.f11.f64)));
	// lfs f6,-292(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -292);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f29,f17,f22,f29
	f29.f64 = double(float(std::fma(f17.f64, f22.f64, f29.f64)));
	// stfs f6,332(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 332, temp.u32);
	// fmadds f12,f17,f21,f12
	ctx.f12.f64 = double(float(std::fma(f17.f64, f21.f64, ctx.f12.f64)));
	// lfs f22,-300(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -300);
	f22.f64 = double(temp.f32);
	// lfs f24,588(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 588);
	f24.f64 = double(temp.f32);
	// lfs f8,596(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 596);
	ctx.f8.f64 = double(temp.f32);
	// fdivs f24,f22,f24
	f24.f64 = double(float(f22.f64 / f24.f64));
	// fnmsubs f3,f19,f31,f3
	ctx.f3.f64 = double(float(-std::fma(f19.f64, f31.f64, -ctx.f3.f64)));
	// lfs f23,524(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 524);
	f23.f64 = double(temp.f32);
	// lfs f21,528(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 528);
	f21.f64 = double(temp.f32);
	// lfs f22,536(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 536);
	f22.f64 = double(temp.f32);
	// fnmsubs f10,f20,f31,f10
	ctx.f10.f64 = double(float(-std::fma(f20.f64, f31.f64, -ctx.f10.f64)));
	// lfs f15,540(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 540);
	f15.f64 = double(temp.f32);
	// fnmsubs f9,f27,f31,f2
	ctx.f9.f64 = double(float(-std::fma(f27.f64, f31.f64, -ctx.f2.f64)));
	// lfs f17,532(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 532);
	f17.f64 = double(temp.f32);
	// fnmsubs f2,f18,f31,f11
	ctx.f2.f64 = double(float(-std::fma(f18.f64, f31.f64, -ctx.f11.f64)));
	// lfs f14,544(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 544);
	f14.f64 = double(temp.f32);
	// fnmsubs f11,f13,f31,f29
	ctx.f11.f64 = double(float(-std::fma(ctx.f13.f64, f31.f64, -f29.f64)));
	// fnmsubs f6,f16,f31,f12
	ctx.f6.f64 = double(float(-std::fma(f16.f64, f31.f64, -ctx.f12.f64)));
	// fnmsubs f3,f17,f8,f3
	ctx.f3.f64 = double(float(-std::fma(f17.f64, ctx.f8.f64, -ctx.f3.f64)));
	// fnmsubs f12,f8,f23,f10
	ctx.f12.f64 = double(float(-std::fma(ctx.f8.f64, f23.f64, -ctx.f10.f64)));
	// fnmsubs f10,f8,f21,f9
	ctx.f10.f64 = double(float(-std::fma(ctx.f8.f64, f21.f64, -ctx.f9.f64)));
	// fnmsubs f9,f8,f22,f2
	ctx.f9.f64 = double(float(-std::fma(ctx.f8.f64, f22.f64, -ctx.f2.f64)));
	// fnmsubs f2,f8,f15,f11
	ctx.f2.f64 = double(float(-std::fma(ctx.f8.f64, f15.f64, -ctx.f11.f64)));
	// fnmsubs f11,f8,f14,f6
	ctx.f11.f64 = double(float(-std::fma(ctx.f8.f64, f14.f64, -ctx.f6.f64)));
	// fmuls f6,f3,f24
	ctx.f6.f64 = double(float(ctx.f3.f64 * f24.f64));
	// lfs f3,-296(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -296);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,336(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 336, temp.u32);
	// fmuls f3,f2,f24
	ctx.f3.f64 = double(float(ctx.f2.f64 * f24.f64));
	// lfs f8,-304(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f12,f12,f24
	ctx.f12.f64 = double(float(ctx.f12.f64 * f24.f64));
	// fmuls f10,f10,f24
	ctx.f10.f64 = double(float(ctx.f10.f64 * f24.f64));
	// stfs f0,340(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 340, temp.u32);
	// fmuls f9,f9,f24
	ctx.f9.f64 = double(float(ctx.f9.f64 * f24.f64));
	// stfs f1,400(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 400, temp.u32);
	// fmuls f2,f11,f24
	ctx.f2.f64 = double(float(ctx.f11.f64 * f24.f64));
	// stfs f30,404(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 404, temp.u32);
	// stfs f28,408(r3)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r3.u32 + 408, temp.u32);
	// fneg f0,f8
	ctx.f0.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// stfs f7,344(r3)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r3.u32 + 344, temp.u32);
	// stfs f26,412(r3)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r3.u32 + 412, temp.u32);
	// stfs f5,348(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 348, temp.u32);
	// stfs f25,416(r3)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r3.u32 + 416, temp.u32);
	// stfs f4,352(r3)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 352, temp.u32);
	// stfs f20,524(r3)
	temp.f32 = float(f20.f64);
	REX_STORE_U32(ctx.r3.u32 + 524, temp.u32);
	// stfs f12,460(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 460, temp.u32);
	// stfs f27,528(r3)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r3.u32 + 528, temp.u32);
	// stfs f10,464(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 464, temp.u32);
	// stfs f19,532(r3)
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ctx.r3.u32 + 532, temp.u32);
	// stfs f6,468(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 468, temp.u32);
	// stfs f18,536(r3)
	temp.f32 = float(f18.f64);
	REX_STORE_U32(ctx.r3.u32 + 536, temp.u32);
	// stfs f9,472(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 472, temp.u32);
	// stfs f13,540(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 540, temp.u32);
	// stfs f3,476(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 476, temp.u32);
	// stfs f16,544(r3)
	temp.f32 = float(f16.f64);
	REX_STORE_U32(ctx.r3.u32 + 544, temp.u32);
	// stfs f2,480(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 480, temp.u32);
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f10,8(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfsx f6,r9,r11
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stfs f9,16(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// stfs f3,20(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// stfs f0,-304(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -304, temp.u32);
	// stfsu f2,24(r10)
	ea = 24 + ctx.r10.u32;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823701f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823701F4;
	// stfs f0,9824(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 9824, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2cbc
	ctx.lr = 0x823703E8;
	// b 0x826a1cf4
	return;
loc_823703EC:
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// bne cr6,0x82370734
	if (!ctx.cr6.eq) goto loc_82370734;
	// lbz r11,37(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 37);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82370734
	if (!ctx.cr6.eq) goto loc_82370734;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82370a88
	if (ctx.cr6.eq) goto loc_82370A88;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// lis r8,-32129
	ctx.r8.s64 = -2105606144;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// subf r9,r4,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r4.u64;
	// lfs f13,3704(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9824(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 9824);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,-300(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -300, temp.u32);
loc_8237042C:
	// lfs f12,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f9,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,608(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 608);
	ctx.f13.f64 = double(temp.f32);
	// fadds f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// lfs f5,404(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 404);
	ctx.f5.f64 = double(temp.f32);
	// lfs f11,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f3,f5,f13
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f7,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f9,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fadds f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// lfs f2,600(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 600);
	ctx.f2.f64 = double(temp.f32);
	// fadds f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// lfs f1,604(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 604);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,340(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 340);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f2,f10
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// lfs f27,332(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 332);
	f27.f64 = double(temp.f32);
	// fadds f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f29,348(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 348);
	f29.f64 = double(temp.f32);
	// fmuls f28,f2,f6
	f28.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// lfs f11,336(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 336);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f3,f12,f1,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f12.f64, ctx.f1.f64, ctx.f3.f64)));
	// lfs f31,344(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 344);
	f31.f64 = double(temp.f32);
	// fmuls f30,f2,f8
	f30.f64 = double(float(ctx.f2.f64 * ctx.f8.f64));
	// lfs f18,352(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 352);
	f18.f64 = double(temp.f32);
	// fmuls f26,f2,f4
	f26.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// lfs f24,396(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 396);
	f24.f64 = double(temp.f32);
	// fmuls f19,f2,f5
	f19.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// stfs f2,-296(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + -296, temp.u32);
	// stfs f27,-256(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + -256, temp.u32);
	// lfs f20,468(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 468);
	f20.f64 = double(temp.f32);
	// lfs f25,592(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 592);
	f25.f64 = double(temp.f32);
	// fmadds f9,f27,f1,f9
	ctx.f9.f64 = double(float(std::fma(f27.f64, ctx.f1.f64, ctx.f9.f64)));
	// lfs f27,588(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 588);
	f27.f64 = double(temp.f32);
	// lfs f23,400(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 400);
	f23.f64 = double(temp.f32);
	// fmadds f28,f31,f1,f28
	f28.f64 = double(float(std::fma(f31.f64, ctx.f1.f64, f28.f64)));
	// lfs f22,408(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 408);
	f22.f64 = double(temp.f32);
	// fmadds f3,f2,f7,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f2.f64, ctx.f7.f64, ctx.f3.f64)));
	// lfs f2,-300(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -300);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f30,f11,f1,f30
	f30.f64 = double(float(std::fma(ctx.f11.f64, ctx.f1.f64, f30.f64)));
	// lfs f21,412(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 412);
	f21.f64 = double(temp.f32);
	// fmadds f26,f29,f1,f26
	f26.f64 = double(float(std::fma(f29.f64, ctx.f1.f64, f26.f64)));
	// stfs f18,-244(r1)
	temp.f32 = float(f18.f64);
	REX_STORE_U32(ctx.r1.u32 + -244, temp.u32);
	// fmadds f19,f18,f1,f19
	f19.f64 = double(float(std::fma(f18.f64, ctx.f1.f64, f19.f64)));
	// lfs f17,460(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 460);
	f17.f64 = double(temp.f32);
	// fdivs f2,f2,f27
	ctx.f2.f64 = double(float(ctx.f2.f64 / f27.f64));
	// lfs f27,416(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 416);
	f27.f64 = double(temp.f32);
	// lfs f18,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	f18.f64 = double(temp.f32);
	// stfs f7,-248(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -248, temp.u32);
	// fadds f18,f18,f0
	f18.f64 = double(float(f18.f64 + ctx.f0.f64));
	// fmadds f9,f13,f24,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f13.f64, f24.f64, ctx.f9.f64)));
	// lfs f24,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	f24.f64 = double(temp.f32);
	// stfs f29,-292(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + -292, temp.u32);
	// fadds f24,f24,f0
	f24.f64 = double(float(f24.f64 + ctx.f0.f64));
	// stfs f20,-240(r1)
	temp.f32 = float(f20.f64);
	REX_STORE_U32(ctx.r1.u32 + -240, temp.u32);
	// fmadds f28,f13,f22,f28
	f28.f64 = double(float(std::fma(ctx.f13.f64, f22.f64, f28.f64)));
	// stfs f1,-252(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + -252, temp.u32);
	// fnmsubs f3,f20,f25,f3
	ctx.f3.f64 = double(float(-std::fma(f20.f64, f25.f64, -ctx.f3.f64)));
	// stfs f2,-304(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + -304, temp.u32);
	// fmadds f30,f13,f23,f30
	f30.f64 = double(float(std::fma(ctx.f13.f64, f23.f64, f30.f64)));
	// stfs f10,-288(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -288, temp.u32);
	// fmadds f26,f13,f21,f26
	f26.f64 = double(float(std::fma(ctx.f13.f64, f21.f64, f26.f64)));
	// lfs f16,464(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 464);
	f16.f64 = double(temp.f32);
	// fmadds f10,f13,f27,f19
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, f27.f64, f19.f64)));
	// lfs f15,472(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 472);
	f15.f64 = double(temp.f32);
	// lfs f14,476(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 476);
	f14.f64 = double(temp.f32);
	// lfs f7,596(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 596);
	ctx.f7.f64 = double(temp.f32);
	// lfs f29,532(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 532);
	f29.f64 = double(temp.f32);
	// fnmsubs f9,f17,f25,f9
	ctx.f9.f64 = double(float(-std::fma(f17.f64, f25.f64, -ctx.f9.f64)));
	// lfs f23,524(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 524);
	f23.f64 = double(temp.f32);
	// lfs f22,528(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 528);
	f22.f64 = double(temp.f32);
	// lfs f21,536(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 536);
	f21.f64 = double(temp.f32);
	// lfs f20,540(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 540);
	f20.f64 = double(temp.f32);
	// lfs f1,480(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 480);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,544(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 544);
	ctx.f2.f64 = double(temp.f32);
	// stfs f8,-280(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -280, temp.u32);
	// stfs f6,-268(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -268, temp.u32);
	// stfs f4,-264(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + -264, temp.u32);
	// stfs f12,-276(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -276, temp.u32);
	// stfs f5,-260(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -260, temp.u32);
	// fnmsubs f5,f14,f25,f26
	ctx.f5.f64 = double(float(-std::fma(f14.f64, f25.f64, -f26.f64)));
	// lfs f12,-296(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -296);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f8,f16,f25,f30
	ctx.f8.f64 = double(float(-std::fma(f16.f64, f25.f64, -f30.f64)));
	// stfs f11,-284(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -284, temp.u32);
	// fmuls f11,f12,f18
	ctx.f11.f64 = double(float(ctx.f12.f64 * f18.f64));
	// fmuls f12,f12,f24
	ctx.f12.f64 = double(float(ctx.f12.f64 * f24.f64));
	// stfs f31,-272(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + -272, temp.u32);
	// fnmsubs f4,f29,f7,f3
	ctx.f4.f64 = double(float(-std::fma(f29.f64, ctx.f7.f64, -ctx.f3.f64)));
	// lfs f3,-292(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -292);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,-292(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + -292, temp.u32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f3,420(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 420);
	ctx.f3.f64 = double(temp.f32);
	// fnmsubs f10,f1,f25,f10
	ctx.f10.f64 = double(float(-std::fma(ctx.f1.f64, f25.f64, -ctx.f10.f64)));
	// lfs f31,424(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 424);
	f31.f64 = double(temp.f32);
	// fnmsubs f6,f15,f25,f28
	ctx.f6.f64 = double(float(-std::fma(f15.f64, f25.f64, -f28.f64)));
	// lfs f30,356(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 356);
	f30.f64 = double(temp.f32);
	// fnmsubs f9,f7,f23,f9
	ctx.f9.f64 = double(float(-std::fma(ctx.f7.f64, f23.f64, -ctx.f9.f64)));
	// lfs f29,360(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 360);
	f29.f64 = double(temp.f32);
	// fnmsubs f5,f7,f20,f5
	ctx.f5.f64 = double(float(-std::fma(ctx.f7.f64, f20.f64, -ctx.f5.f64)));
	// lfs f28,484(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 484);
	f28.f64 = double(temp.f32);
	// fnmsubs f8,f7,f22,f8
	ctx.f8.f64 = double(float(-std::fma(ctx.f7.f64, f22.f64, -ctx.f8.f64)));
	// lfs f22,-304(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -304);
	f22.f64 = double(temp.f32);
	// fmadds f11,f3,f13,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f3.f64, ctx.f13.f64, ctx.f11.f64)));
	// lfs f3,-280(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -280);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f13,f13,f31,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, ctx.f12.f64)));
	// lfs f31,-268(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -268);
	f31.f64 = double(temp.f32);
	// stfs f0,-268(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -268, temp.u32);
	// fmuls f4,f4,f22
	ctx.f4.f64 = double(float(ctx.f4.f64 * f22.f64));
	// lfs f0,-264(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -264);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,-264(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + -264, temp.u32);
	// fnmsubs f10,f7,f2,f10
	ctx.f10.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f2.f64, -ctx.f10.f64)));
	// fnmsubs f6,f7,f21,f6
	ctx.f6.f64 = double(float(-std::fma(ctx.f7.f64, f21.f64, -ctx.f6.f64)));
	// lfs f27,488(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 488);
	f27.f64 = double(temp.f32);
	// stfs f3,336(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 336, temp.u32);
	// fmuls f9,f9,f22
	ctx.f9.f64 = double(float(ctx.f9.f64 * f22.f64));
	// lfs f12,-276(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -276);
	ctx.f12.f64 = double(temp.f32);
	// lfs f1,-260(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -260);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f5,f5,f22
	ctx.f5.f64 = double(float(ctx.f5.f64 * f22.f64));
	// stfs f5,-260(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -260, temp.u32);
	// fmuls f8,f8,f22
	ctx.f8.f64 = double(float(ctx.f8.f64 * f22.f64));
	// lfs f5,-256(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -256);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,396(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// lfs f5,-252(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -252);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f11,f30,f5,f11
	ctx.f11.f64 = double(float(std::fma(f30.f64, ctx.f5.f64, ctx.f11.f64)));
	// lfs f2,-272(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f5,f29,f5,f13
	ctx.f5.f64 = double(float(std::fma(f29.f64, ctx.f5.f64, ctx.f13.f64)));
	// lfs f26,548(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 548);
	f26.f64 = double(temp.f32);
	// fmuls f3,f10,f22
	ctx.f3.f64 = double(float(ctx.f10.f64 * f22.f64));
	// stfs f12,404(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 404, temp.u32);
	// lfs f21,-288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -288);
	f21.f64 = double(temp.f32);
	// fmuls f6,f6,f22
	ctx.f6.f64 = double(float(ctx.f6.f64 * f22.f64));
	// lfs f20,-284(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -284);
	f20.f64 = double(temp.f32);
	// lfs f19,-292(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -292);
	f19.f64 = double(temp.f32);
	// lfs f13,-248(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -248);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-244(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -244);
	ctx.f12.f64 = double(temp.f32);
	// stfs f2,408(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 408, temp.u32);
	// lfs f23,552(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 552);
	f23.f64 = double(temp.f32);
	// fnmsubs f11,f28,f25,f11
	ctx.f11.f64 = double(float(-std::fma(f28.f64, f25.f64, -ctx.f11.f64)));
	// stfs f21,332(r3)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r3.u32 + 332, temp.u32);
	// fnmsubs f10,f27,f25,f5
	ctx.f10.f64 = double(float(-std::fma(f27.f64, f25.f64, -ctx.f5.f64)));
	// lfs f5,-240(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -240);
	ctx.f5.f64 = double(temp.f32);
	// stfs f20,400(r3)
	temp.f32 = float(f20.f64);
	REX_STORE_U32(ctx.r3.u32 + 400, temp.u32);
	// stfs f13,340(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 340, temp.u32);
	// stfs f31,344(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 344, temp.u32);
	// stfs f19,412(r3)
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ctx.r3.u32 + 412, temp.u32);
	// stfs f0,348(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 348, temp.u32);
	// stfs f12,416(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 416, temp.u32);
	// stfs f1,352(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 352, temp.u32);
	// stfs f30,420(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 420, temp.u32);
	// stfs f18,356(r3)
	temp.f32 = float(f18.f64);
	REX_STORE_U32(ctx.r3.u32 + 356, temp.u32);
	// fnmsubs f2,f26,f7,f11
	ctx.f2.f64 = double(float(-std::fma(f26.f64, ctx.f7.f64, -ctx.f11.f64)));
	// stfs f29,424(r3)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r3.u32 + 424, temp.u32);
	// stfs f24,360(r3)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r3.u32 + 360, temp.u32);
	// stfs f17,524(r3)
	temp.f32 = float(f17.f64);
	REX_STORE_U32(ctx.r3.u32 + 524, temp.u32);
	// stfs f9,460(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 460, temp.u32);
	// stfs f16,528(r3)
	temp.f32 = float(f16.f64);
	REX_STORE_U32(ctx.r3.u32 + 528, temp.u32);
	// stfs f8,464(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 464, temp.u32);
	// stfs f5,532(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 532, temp.u32);
	// stfs f4,468(r3)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 468, temp.u32);
	// stfs f15,536(r3)
	temp.f32 = float(f15.f64);
	REX_STORE_U32(ctx.r3.u32 + 536, temp.u32);
	// fnmsubs f1,f7,f23,f10
	ctx.f1.f64 = double(float(-std::fma(ctx.f7.f64, f23.f64, -ctx.f10.f64)));
	// lfs f0,-260(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-264(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -264);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f2,f22
	ctx.f11.f64 = double(float(ctx.f2.f64 * f22.f64));
	// stfs f0,476(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 476, temp.u32);
	// stfs f6,472(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 472, temp.u32);
	// stfs f14,540(r3)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r3.u32 + 540, temp.u32);
	// stfs f13,544(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 544, temp.u32);
	// stfs f3,480(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 480, temp.u32);
	// stfs f28,548(r3)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r3.u32 + 548, temp.u32);
	// stfs f27,552(r3)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r3.u32 + 552, temp.u32);
	// stfs f11,484(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 484, temp.u32);
	// fmuls f10,f1,f22
	ctx.f10.f64 = double(float(ctx.f1.f64 * f22.f64));
	// stfs f10,488(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 488, temp.u32);
	// lfs f12,-268(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -268);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// stfsx f4,r11,r9
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stfs f9,4(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f8,8(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f6,16(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// stfs f3,24(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// stfs f11,28(r10)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// stfs f12,-304(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -304, temp.u32);
	// stfsu f10,32(r10)
	ea = 32 + ctx.r10.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8237042c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237042C;
	// stfs f12,9824(r8)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r8.u32 + 9824, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2cbc
	ctx.lr = 0x82370730;
	// b 0x826a1cf4
	return;
loc_82370734:
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82370a88
	if (!ctx.cr6.gt) goto loc_82370A88;
	// lis r24,-32129
	r24.s64 = -2105606144;
	// rlwinm r28,r7,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r11,r3,332
	ctx.r11.s64 = ctx.r3.s64 + 332;
	// add r25,r28,r5
	r25.u64 = r28.u64 + ctx.r5.u64;
	// lfs f0,9824(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 9824);
	ctx.f0.f64 = double(temp.f32);
	// subf r29,r5,r4
	r29.u64 = ctx.r4.u64 - ctx.r5.u64;
	// li r23,1
	r23.s64 = 1;
loc_82370760:
	// lhz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// slw r9,r23,r27
	ctx.r9.u64 = r27.u8 & 0x20 ? 0 : (r23.u32 << (r27.u8 & 0x3F));
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// add r10,r29,r26
	ctx.r10.u64 = r29.u64 + r26.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823707fc
	if (!ctx.cr6.eq) goto loc_823707FC;
	// rlwinm r31,r7,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r6,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r7,r31
	r31.u64 = ctx.r7.u64 + r31.u64;
	// rlwinm r30,r7,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823707d4
	if (ctx.cr6.eq) goto loc_823707D4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// rlwinm r4,r31,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r30,2,0,29
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_823707A8:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfsx f12,r10,r28
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r9,r28
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + r28.u32, temp.u32);
	// lfsx f11,r10,r8
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r9,r8
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// lfsx f10,r10,r4
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// stfsx f10,r9,r4
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r4.u32, temp.u32);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// bdnz 0x823707a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823707A8;
loc_823707D4:
	// clrlwi r8,r6,30
	ctx.r8.u64 = ctx.r6.u32 & 0x3;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82370a6c
	if (ctx.cr6.eq) goto loc_82370A6C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// subf r9,r28,r9
	ctx.r9.u64 = ctx.r9.u64 - r28.u64;
	// subf r10,r28,r10
	ctx.r10.u64 = ctx.r10.u64 - r28.u64;
loc_823707EC:
	// lfsux f13,r10,r28
	ctx.fpscr.disableFlushMode();
	ea = ctx.r10.u32 + r28.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfsux f13,r9,r28
	temp.f32 = float(ctx.f13.f64);
	ea = ctx.r9.u32 + r28.u32;
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x823707ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823707EC;
	// b 0x82370a6c
	goto loc_82370A6C;
loc_823707FC:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x823709e0
	if (ctx.cr6.lt) goto loc_823709E0;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r6,-4
	ctx.r9.s64 = ctx.r6.s64 + -4;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r9,1
	r30.s64 = ctx.r9.s64 + 1;
	// add r4,r10,r27
	ctx.r4.u64 = ctx.r10.u64 + r27.u64;
	// add r10,r8,r27
	ctx.r10.u64 = ctx.r8.u64 + r27.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// add r4,r9,r5
	ctx.r4.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r31,r7,4,0,27
	r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_8237084C:
	// lfsx f13,r10,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,600(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 600);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,604(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 604);
	ctx.f10.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f9,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,608(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 608);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,592(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 592);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,596(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 596);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,588(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 588);
	ctx.f2.f64 = double(temp.f32);
	// lfs f7,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f5,128(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f3,192(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f3.f64 = double(temp.f32);
	// stfs f9,64(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f5,192(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// fmadds f13,f9,f10,f1
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f10.f64, ctx.f1.f64)));
	// fmadds f12,f7,f8,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f7.f64, ctx.f8.f64, ctx.f13.f64)));
	// fnmsubs f11,f5,f6,f12
	ctx.f11.f64 = double(float(-std::fma(ctx.f5.f64, ctx.f6.f64, -ctx.f12.f64)));
	// fnmsubs f10,f3,f4,f11
	ctx.f10.f64 = double(float(-std::fma(ctx.f3.f64, ctx.f4.f64, -ctx.f11.f64)));
	// fdivs f9,f10,f2
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f2.f64));
	// stfs f9,128(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// stfs f9,0(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f5,600(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 600);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f13,608(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 608);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f7,r9,r29
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + r29.u32);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// lfs f11,592(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 592);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// lfs f10,128(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f7,192(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f7.f64 = double(temp.f32);
	// lfs f2,604(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 604);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f3,f2,f4
	ctx.f1.f64 = double(float(std::fma(ctx.f3.f64, ctx.f2.f64, ctx.f4.f64)));
	// lfs f4,588(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 588);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f12,f8,f13,f1
	ctx.f12.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f1.f64)));
	// lfs f8,596(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 596);
	ctx.f8.f64 = double(temp.f32);
	// stfs f3,64(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// fnmsubs f9,f10,f11,f12
	ctx.f9.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f11.f64, -ctx.f12.f64)));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f10,192(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// fnmsubs f5,f7,f8,f9
	ctx.f5.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f8.f64, -ctx.f9.f64)));
	// fdivs f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 / ctx.f4.f64));
	// stfs f3,128(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// stfs f3,0(r9)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f12,600(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 600);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,608(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 608);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f2,r8,r29
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r29.u32);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// lfs f13,128(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// lfs f10,604(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 604);
	ctx.f10.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f4,592(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 592);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,596(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 596);
	ctx.f2.f64 = double(temp.f32);
	// lfs f12,588(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 588);
	ctx.f12.f64 = double(temp.f32);
	// stfs f9,64(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// fmadds f8,f9,f10,f11
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f10.f64, ctx.f11.f64)));
	// lfs f11,192(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,192(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// fmadds f5,f6,f7,f8
	ctx.f5.f64 = double(float(std::fma(ctx.f6.f64, ctx.f7.f64, ctx.f8.f64)));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fnmsubs f3,f13,f4,f5
	ctx.f3.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f4.f64, -ctx.f5.f64)));
	// fnmsubs f10,f11,f2,f3
	ctx.f10.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f2.f64, -ctx.f3.f64)));
	// fdivs f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f12.f64));
	// stfs f9,128(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// stfs f9,0(r8)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f8,600(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 600);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,604(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 604);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f5,r4,r29
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + r29.u32);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// fmuls f3,f4,f8
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// lfs f2,128(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f13,f6,f7,f3
	ctx.f13.f64 = double(float(std::fma(ctx.f6.f64, ctx.f7.f64, ctx.f3.f64)));
	// lfs f12,608(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 608);
	ctx.f12.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmadds f11,f1,f12,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f1.f64, ctx.f12.f64, ctx.f13.f64)));
	// lfs f10,592(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 592);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,596(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 596);
	ctx.f9.f64 = double(temp.f32);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// lfs f7,588(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 588);
	ctx.f7.f64 = double(temp.f32);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// stfs f6,64(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// lfs f8,192(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f8.f64 = double(temp.f32);
	// stfs f4,0(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f2,192(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// fnmsubs f6,f2,f10,f11
	ctx.f6.f64 = double(float(-std::fma(ctx.f2.f64, ctx.f10.f64, -ctx.f11.f64)));
	// fnmsubs f5,f8,f9,f6
	ctx.f5.f64 = double(float(-std::fma(ctx.f8.f64, ctx.f9.f64, -ctx.f6.f64)));
	// fdivs f4,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 / ctx.f7.f64));
	// stfs f4,128(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// stfs f4,0(r4)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + r31.u64;
	// bdnz 0x8237084c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237084C;
loc_823709E0:
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82370a6c
	if (!ctx.cr6.lt) goto loc_82370A6C;
	// mullw r10,r30,r7
	ctx.r10.s64 = int64_t(r30.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// subf r9,r30,r6
	ctx.r9.u64 = ctx.r6.u64 - r30.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82370A00:
	// lfsx f13,r29,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,600(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 600);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,604(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 604);
	ctx.f10.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f9,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,608(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 608);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,592(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 592);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,596(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 596);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,588(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 588);
	ctx.f2.f64 = double(temp.f32);
	// lfs f7,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f5,128(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f3,192(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f3.f64 = double(temp.f32);
	// stfs f9,64(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f5,192(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// stfs f0,9824(r24)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r24.u32 + 9824, temp.u32);
	// fmadds f13,f9,f10,f1
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f10.f64, ctx.f1.f64)));
	// fmadds f12,f7,f8,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f7.f64, ctx.f8.f64, ctx.f13.f64)));
	// fnmsubs f11,f5,f6,f12
	ctx.f11.f64 = double(float(-std::fma(ctx.f5.f64, ctx.f6.f64, -ctx.f12.f64)));
	// fnmsubs f10,f3,f4,f11
	ctx.f10.f64 = double(float(-std::fma(ctx.f3.f64, ctx.f4.f64, -ctx.f11.f64)));
	// fdivs f9,f10,f2
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f2.f64));
	// stfs f9,128(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// stfs f9,0(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// bdnz 0x82370a00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82370A00;
loc_82370A6C:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r27,r7
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82370760
	if (ctx.cr6.lt) goto loc_82370760;
	// stfs f0,9824(r24)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r24.u32 + 9824, temp.u32);
loc_82370A88:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2cbc
	ctx.lr = 0x82370A94;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8240B620) {
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
	ctx.lr = 0x8240B628;
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
	// beq cr6,0x8240b660
	if (ctx.cr6.eq) goto loc_8240B660;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82408848
	ctx.lr = 0x8240B65C;
	sub_82408848(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8240B660:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240b67c
	if (ctx.cr6.eq) goto loc_8240B67C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824094e0
	ctx.lr = 0x8240B678;
	sub_824094E0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8240B67C:
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
	// bne 0x8240b6e8
	if (!ctx.cr0.eq) goto loc_8240B6E8;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x8240b6f0
	goto loc_8240B6F0;
loc_8240B6E8:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_8240B6F0:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240b708
	if (ctx.cr6.eq) goto loc_8240B708;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409a88
	ctx.lr = 0x8240B708;
	sub_82409A88(ctx, base);
loc_8240B708:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8240b9d0
	if (!ctx.cr6.gt) goto loc_8240B9D0;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// rlwinm r25,r30,1,0,30
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r30,r25,r28
	r30.u64 = r28.u64 - r25.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r28,-32255
	r28.s64 = -2113863680;
	// lfd f10,20216(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r11.u32 + 20216);
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f11,15196(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15196);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,20208(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20208);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,17280(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17280);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r27,8
	r29.s64 = r27.s64 + 8;
	// lfs f0,20244(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20244);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,20240(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 20240);
	ctx.f6.f64 = double(temp.f32);
loc_8240B76C:
	// add r11,r29,r10
	ctx.r11.u64 = r29.u64 + ctx.r10.u64;
	// lfsx f9,r29,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f9,f29
	ctx.f9.f64 = double(float(ctx.f9.f64 + f29.f64));
	// rlwinm r7,r26,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xC;
	// lwz r6,92(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f8,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 + f31.f64));
	// fadds f7,f7,f30
	ctx.f7.f64 = double(float(ctx.f7.f64 + f30.f64));
	// lfsx f5,r7,r24
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + r24.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fadds f4,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// fadds f3,f8,f5
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// fadds f5,f7,f5
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// fctiwz f4,f4
	ctx.f4.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f4,f3
	ctx.f4.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// fctiwz f5,f5
	ctx.f5.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f5,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f5.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// beq cr6,0x8240b91c
	if (ctx.cr6.eq) goto loc_8240B91C;
	// extsw r28,r6
	r28.s64 = ctx.r6.s32;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r7,r4
	ctx.r7.s64 = ctx.r4.s32;
	// std r28,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r28.u64);
	// extsw r28,r5
	r28.s64 = ctx.r5.s32;
	// std r7,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f5,96(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r28,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r28.u64);
	// lfd f2,112(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// lfd f4,104(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lfs f3,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// frsp f5,f2
	ctx.f5.f64 = double(float(ctx.f2.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fsubs f7,f7,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// frsp f5,f4
	ctx.f5.f64 = double(float(ctx.f4.f64));
	// fmadds f4,f8,f13,f3
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f3.f64)));
	// stfs f4,16(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fsubs f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// fmul f4,f7,f10
	ctx.f4.f64 = ctx.f7.f64 * ctx.f10.f64;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// fmul f5,f8,f10
	ctx.f5.f64 = ctx.f8.f64 * ctx.f10.f64;
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// frsp f30,f4
	f30.f64 = double(float(ctx.f4.f64));
	// lfs f4,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f4,f8,f12,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f4.f64)));
	// stfs f4,16(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f4,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f8,f8,f11,f4
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f4.f64)));
	// stfs f8,16(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f8,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f7,f13,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f8.f64)));
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f8,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f7,f12,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f8.f64)));
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f8,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f7,f11,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f7.f64, ctx.f11.f64, ctx.f8.f64)));
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f8,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f9,f13,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f8.f64)));
	// stfs f8,24(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f8,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// frsp f31,f5
	f31.f64 = double(float(ctx.f5.f64));
	// fmadds f8,f9,f12,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f8.f64)));
	// stfs f8,24(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmul f5,f9,f10
	ctx.f5.f64 = ctx.f9.f64 * ctx.f10.f64;
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f8,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f9,f9,f11,f8
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f8.f64)));
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// frsp f29,f5
	f29.f64 = double(float(ctx.f5.f64));
loc_8240B91C:
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x8240b92c
	if (ctx.cr6.lt) goto loc_8240B92C;
	// li r11,15
	ctx.r11.s64 = 15;
loc_8240B92C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8240b944
	if (!ctx.cr6.gt) goto loc_8240B944;
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// blt cr6,0x8240b948
	if (ctx.cr6.lt) goto loc_8240B948;
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x8240b948
	goto loc_8240B948;
loc_8240B944:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8240B948:
	// cmpwi cr6,r5,15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 15, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x8240b958
	if (ctx.cr6.lt) goto loc_8240B958;
	// li r11,15
	ctx.r11.s64 = 15;
loc_8240B958:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8240b970
	if (!ctx.cr6.gt) goto loc_8240B970;
	// cmpwi cr6,r5,15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 15, ctx.xer);
	// blt cr6,0x8240b974
	if (ctx.cr6.lt) goto loc_8240B974;
	// li r5,15
	ctx.r5.s64 = 15;
	// b 0x8240b974
	goto loc_8240B974;
loc_8240B970:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8240B974:
	// cmpwi cr6,r6,15
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 15, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x8240b984
	if (ctx.cr6.lt) goto loc_8240B984;
	// li r11,15
	ctx.r11.s64 = 15;
loc_8240B984:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8240b99c
	if (!ctx.cr6.gt) goto loc_8240B99C;
	// cmpwi cr6,r6,15
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 15, ctx.xer);
	// blt cr6,0x8240b9a0
	if (ctx.cr6.lt) goto loc_8240B9A0;
	// li r6,15
	ctx.r6.s64 = 15;
	// b 0x8240b9a0
	goto loc_8240B9A0;
loc_8240B99C:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8240B9A0:
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// sthux r11,r30,r25
	ea = r30.u32 + r25.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	r30.u32 = ea;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8240b76c
	if (ctx.cr6.lt) goto loc_8240B76C;
loc_8240B9D0:
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

DEFINE_REX_FUNC(sub_82422FF8) {
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca0
	ctx.lr = 0x82423000;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82423018
	if (ctx.cr6.eq) goto loc_82423018;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x824231d4
	goto loc_824231D4;
loc_82423018:
	// mullw. r11,r6,r7
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82423028
	if (!ctx.cr0.eq) goto loc_82423028;
loc_82423020:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824231d4
	goto loc_824231D4;
loc_82423028:
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824230f8
	if (ctx.cr6.eq) goto loc_824230F8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r25,20(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r24,16(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
loc_82423044:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r25
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// lwz r29,4(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r26,r11,r24
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + r24.u32);
	// beq cr6,0x824230e8
	if (ctx.cr6.eq) goto loc_824230E8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r28,r7,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r27,20(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
loc_82423078:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824231d0
	if (!ctx.cr6.eq) goto loc_824231D0;
	// lwz r8,4(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 4);
	// rlwinm. r8,r8,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x824230c8
	if (ctx.cr0.eq) goto loc_824230C8;
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm r5,r10,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r22,12(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r22
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r22.u32, ctx.xer);
	// bne cr6,0x824231d0
	if (!ctx.cr6.eq) goto loc_824231D0;
	// lwz r8,16(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// clrlwi r5,r10,30
	ctx.r5.u64 = ctx.r10.u32 & 0x3;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// b 0x824230d0
	goto loc_824230D0;
loc_824230C8:
	// lwz r8,72(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
loc_824230D0:
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824231d0
	if (!ctx.cr6.eq) goto loc_824231D0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r30,r28,r30
	r30.u64 = r28.u64 + r30.u64;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82423078
	if (ctx.cr6.lt) goto loc_82423078;
loc_824230E8:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r23,r7
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82423044
	if (ctx.cr6.lt) goto loc_82423044;
loc_824230F8:
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824231d0
	if (ctx.cr6.eq) goto loc_824231D0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// rlwinm r24,r7,2,0,29
	r24.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r27,20(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r26,16(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
loc_8242311C:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// lwz r30,4(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r25,r10,r26
	r25.u64 = REX_LOAD_U32(ctx.r10.u32 + r26.u32);
	// beq cr6,0x824231bc
	if (ctx.cr6.eq) goto loc_824231BC;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r28,20(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
loc_82423148:
	// add r10,r29,r11
	ctx.r10.u64 = r29.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82423020
	if (!ctx.cr6.eq) goto loc_82423020;
	// lwz r8,4(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 4);
	// rlwinm. r8,r8,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x824231a0
	if (ctx.cr0.eq) goto loc_824231A0;
	// lwz r5,12(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm r8,r11,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r22,12(r10)
	r22.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// cmplw cr6,r8,r22
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r22.u32, ctx.xer);
	// bne cr6,0x82423020
	if (!ctx.cr6.eq) goto loc_82423020;
	// lwz r5,16(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// clrlwi r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// b 0x824231a8
	goto loc_824231A8;
loc_824231A0:
	// lwz r8,72(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// lwz r10,72(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
loc_824231A8:
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82423020
	if (!ctx.cr6.eq) goto loc_82423020;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82423148
	if (ctx.cr6.lt) goto loc_82423148;
loc_824231BC:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// add r29,r29,r7
	r29.u64 = r29.u64 + ctx.r7.u64;
	// add r31,r31,r24
	r31.u64 = r31.u64 + r24.u64;
	// cmplw cr6,r23,r6
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8242311c
	if (ctx.cr6.lt) goto loc_8242311C;
loc_824231D0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_824231D4:
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8243F3F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,40(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82440138) {
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
	ctx.lr = 0x82440140;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r29,r25
	r29.u64 = r25.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
	// beq cr6,0x8244016c
	if (ctx.cr6.eq) goto loc_8244016C;
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_8244016C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82440178
	if (ctx.cr6.eq) goto loc_82440178;
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
loc_82440178:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82440184
	if (ctx.cr6.eq) goto loc_82440184;
	// lwz r30,0(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 0);
loc_82440184:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8244019c
	if (ctx.cr6.eq) goto loc_8244019C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8243ffe8
	ctx.lr = 0x8244019C;
	sub_8243FFE8(ctx, base);
loc_8244019C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824401b0
	if (ctx.cr6.eq) goto loc_824401B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824bf4b8
	ctx.lr = 0x824401AC;
	sub_824BF4B8(ctx, base);
	// stw r25,0(r28)
	REX_STORE_U32(r28.u32 + 0, r25.u32);
loc_824401B0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824401c4
	if (ctx.cr6.eq) goto loc_824401C4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824bf4b8
	ctx.lr = 0x824401C0;
	sub_824BF4B8(ctx, base);
	// stw r25,0(r26)
	REX_STORE_U32(r26.u32 + 0, r25.u32);
loc_824401C4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824401d8
	if (ctx.cr6.eq) goto loc_824401D8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824bf4b8
	ctx.lr = 0x824401D4;
	sub_824BF4B8(ctx, base);
	// stw r25,0(r27)
	REX_STORE_U32(r27.u32 + 0, r25.u32);
loc_824401D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82444380) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 + 12;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// subf r8,r8,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824443A4:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r8,r11
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f13,-8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f12,-4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x824443a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824443A4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82443c58
	ctx.lr = 0x824443E4;
	sub_82443C58(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82445010) {
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
	ctx.lr = 0x8244502C;
	sub_82448598(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,44
	ctx.r4.s64 = 44;
	// bl 0x82444608
	ctx.lr = 0x8244503C;
	sub_82444608(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82445088
	if (ctx.cr0.eq) goto loc_82445088;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r10,-8056
	ctx.r10.s64 = ctx.r10.s64 + -8056;
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
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// b 0x8244508c
	goto loc_8244508C;
loc_82445088:
	// li r31,0
	r31.s64 = 0;
loc_8244508C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8244509c
	if (!ctx.cr6.eq) goto loc_8244509C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82445100
	goto loc_82445100;
loc_8244509C:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824450fc
	if (ctx.cr6.eq) goto loc_824450FC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824450EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x82445100
	if (ctx.cr0.eq) goto loc_82445100;
loc_824450FC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82445100:
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

DEFINE_REX_FUNC(sub_82448B58) {
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
	ctx.lr = 0x82448B60;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// li r30,0
	r30.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x82448c84
	if (!ctx.cr6.eq) goto loc_82448C84;
	// lwz r27,32(r6)
	r27.u64 = REX_LOAD_U32(ctx.r6.u32 + 32);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82448c74
	if (!ctx.cr6.eq) goto loc_82448C74;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82448bb4
	if (!ctx.cr6.gt) goto loc_82448BB4;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82448BB4:
	// bl 0x822f6280
	ctx.lr = 0x82448BB8;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82448bcc
	if (!ctx.cr0.eq) goto loc_82448BCC;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x82448c74
	goto loc_82448C74;
loc_82448BCC:
	// rlwinm r30,r29,4,0,27
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82448BE0;
	sub_826A2E60(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82448c54
	if (ctx.cr6.eq) goto loc_82448C54;
loc_82448BEC:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82448c48
	if (ctx.cr6.eq) goto loc_82448C48;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
loc_82448C00:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x82448c28
	if (!ctx.cr6.eq) goto loc_82448C28;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfd f0,24(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r11,r31
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + r31.u32, temp.u32);
	// b 0x82448c3c
	goto loc_82448C3C;
loc_82448C28:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r31
	REX_STORE_U32(ctx.r8.u32 + r31.u32, ctx.r11.u32);
loc_82448C3C:
	// lwz r27,12(r27)
	r27.u64 = REX_LOAD_U32(r27.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82448c00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82448C00;
loc_82448C48:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r29.u32, ctx.xer);
	// blt cr6,0x82448bec
	if (ctx.cr6.lt) goto loc_82448BEC;
loc_82448C54:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,6
	ctx.r6.s64 = 6;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82449708
	ctx.lr = 0x82448C70;
	sub_82449708(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82448C74:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82448C7C;
	sub_8269CE98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82448c88
	goto loc_82448C88;
loc_82448C84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82448C88:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82454DC8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,592(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 592);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82455048) {
	REX_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,600(r12)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r12.u32 + 600);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824550E8) {
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
	// lwz r3,1532(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 1532);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,13352
	ctx.r11.s64 = ctx.r11.s64 + 13352;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8245511c
	if (ctx.cr6.eq) goto loc_8245511C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x823f0350
	ctx.lr = 0x8245511C;
	sub_823F0350(ctx, base);
loc_8245511C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82474968
	ctx.lr = 0x82455124;
	sub_82474968(ctx, base);
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

DEFINE_REX_FUNC(sub_82457ED0) {
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
	ctx.lr = 0x82457ED8;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// addi r31,r11,14432
	r31.s64 = ctx.r11.s64 + 14432;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x8269f180
	ctx.lr = 0x82457F08;
	sub_8269F180(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82457f34
	if (ctx.cr0.eq) goto loc_82457F34;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269f180
	ctx.lr = 0x82457F20;
	sub_8269F180(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82457f34
	if (ctx.cr0.eq) goto loc_82457F34;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,14372
	ctx.r5.s64 = ctx.r11.s64 + 14372;
	// b 0x82457f80
	goto loc_82457F80;
loc_82457F34:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r31,r11,14364
	r31.s64 = ctx.r11.s64 + 14364;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8269f180
	ctx.lr = 0x82457F4C;
	sub_8269F180(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82457f78
	if (ctx.cr0.eq) goto loc_82457F78;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269f180
	ctx.lr = 0x82457F64;
	sub_8269F180(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82457f78
	if (ctx.cr0.eq) goto loc_82457F78;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,14160
	ctx.r5.s64 = ctx.r11.s64 + 14160;
	// b 0x82457f80
	goto loc_82457F80;
loc_82457F78:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,14148
	ctx.r5.s64 = ctx.r11.s64 + 14148;
loc_82457F80:
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8244a6e0
	ctx.lr = 0x82457F8C;
	sub_8244A6E0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r26,r11,14096
	r26.s64 = ctx.r11.s64 + 14096;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r10,14172
	r29.s64 = ctx.r10.s64 + 14172;
	// lwz r11,1816(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82458060
	if (ctx.cr6.eq) goto loc_82458060;
loc_82457FAC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82455688
	ctx.lr = 0x82457FB4;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82458140
	if (ctx.cr0.lt) goto loc_82458140;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82404168
	ctx.lr = 0x82457FD4;
	sub_82404168(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82404168
	ctx.lr = 0x82457FEC;
	sub_82404168(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404168
	ctx.lr = 0x82458000;
	sub_82404168(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824555b8
	ctx.lr = 0x82458010;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82458140
	if (ctx.cr0.lt) goto loc_82458140;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,512(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 512);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82458034;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82458140
	if (ctx.cr0.lt) goto loc_82458140;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824555b8
	ctx.lr = 0x82458048;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82458140
	if (ctx.cr0.lt) goto loc_82458140;
	// lwz r11,1816(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1816);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82457fac
	if (ctx.cr6.lt) goto loc_82457FAC;
loc_82458060:
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245813c
	if (ctx.cr6.eq) goto loc_8245813C;
loc_8245806C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82455688
	ctx.lr = 0x82458074;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82458140
	if (ctx.cr0.lt) goto loc_82458140;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82404168
	ctx.lr = 0x82458094;
	sub_82404168(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82404168
	ctx.lr = 0x824580AC;
	sub_82404168(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82404168
	ctx.lr = 0x824580C4;
	sub_82404168(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404168
	ctx.lr = 0x824580D8;
	sub_82404168(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824555b8
	ctx.lr = 0x824580E8;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82458140
	if (ctx.cr0.lt) goto loc_82458140;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,520(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82458110;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82458140
	if (ctx.cr0.lt) goto loc_82458140;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824555b8
	ctx.lr = 0x82458124;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82458140
	if (ctx.cr0.lt) goto loc_82458140;
	// lwz r11,1816(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1816);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8245806c
	if (ctx.cr6.lt) goto loc_8245806C;
loc_8245813C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82458140:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82468998) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82468b70
	if (!ctx.cr6.gt) goto loc_82468B70;
	// li r8,0
	ctx.r8.s64 = 0;
loc_824689BC:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stw r9,256(r3)
	REX_STORE_U32(ctx.r3.u32 + 256, ctx.r9.u32);
	// lwzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stw r10,260(r3)
	REX_STORE_U32(ctx.r3.u32 + 260, ctx.r10.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82468b34
	if (ctx.cr0.eq) goto loc_82468B34;
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82468b34
	if (ctx.cr6.eq) goto loc_82468B34;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lis r6,24656
	ctx.r6.s64 = 1615855616;
	// lwz r5,20(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// beq cr6,0x82468b1c
	if (ctx.cr6.eq) goto loc_82468B1C;
	// lis r6,24688
	ctx.r6.s64 = 1617952768;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82468b1c
	if (ctx.cr6.eq) goto loc_82468B1C;
	// lis r6,24704
	ctx.r6.s64 = 1619001344;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82468b1c
	if (ctx.cr6.eq) goto loc_82468B1C;
	// lis r6,24720
	ctx.r6.s64 = 1620049920;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82468b1c
	if (ctx.cr6.eq) goto loc_82468B1C;
	// lis r6,24672
	ctx.r6.s64 = 1616904192;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82468b1c
	if (ctx.cr6.eq) goto loc_82468B1C;
	// lis r6,24576
	ctx.r6.s64 = 1610612736;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82468b1c
	if (ctx.cr6.eq) goto loc_82468B1C;
	// lis r6,24608
	ctx.r6.s64 = 1612709888;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82468b1c
	if (ctx.cr6.eq) goto loc_82468B1C;
	// lis r6,24624
	ctx.r6.s64 = 1613758464;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82468b1c
	if (ctx.cr6.eq) goto loc_82468B1C;
	// lis r6,24640
	ctx.r6.s64 = 1614807040;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82468b1c
	if (ctx.cr6.eq) goto loc_82468B1C;
	// lis r6,24592
	ctx.r6.s64 = 1611661312;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82468b1c
	if (ctx.cr6.eq) goto loc_82468B1C;
	// lis r6,24736
	ctx.r6.s64 = 1621098496;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82468b00
	if (ctx.cr6.eq) goto loc_82468B00;
	// lis r6,24768
	ctx.r6.s64 = 1623195648;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82468b00
	if (ctx.cr6.eq) goto loc_82468B00;
	// lis r6,24784
	ctx.r6.s64 = 1624244224;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82468b00
	if (ctx.cr6.eq) goto loc_82468B00;
	// lis r6,24800
	ctx.r6.s64 = 1625292800;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82468b00
	if (ctx.cr6.eq) goto loc_82468B00;
	// lis r6,24752
	ctx.r6.s64 = 1622147072;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82468b00
	if (ctx.cr6.eq) goto loc_82468B00;
	// lis r6,24816
	ctx.r6.s64 = 1626341376;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82468ae8
	if (ctx.cr6.eq) goto loc_82468AE8;
	// lis r6,24848
	ctx.r6.s64 = 1628438528;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82468ae8
	if (ctx.cr6.eq) goto loc_82468AE8;
	// lis r6,24864
	ctx.r6.s64 = 1629487104;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82468ae8
	if (ctx.cr6.eq) goto loc_82468AE8;
	// lis r6,24880
	ctx.r6.s64 = 1630535680;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82468ae8
	if (ctx.cr6.eq) goto loc_82468AE8;
	// lis r6,24832
	ctx.r6.s64 = 1627389952;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82468b34
	if (!ctx.cr6.eq) goto loc_82468B34;
loc_82468AE8:
	// lwz r11,60(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// rlwinm. r11,r11,0,9,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x600000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82468af8
	if (ctx.cr0.eq) goto loc_82468AF8;
	// li r7,1
	ctx.r7.s64 = 1;
loc_82468AF8:
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// b 0x82468b30
	goto loc_82468B30;
loc_82468B00:
	// lwz r11,60(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// andis. r11,r11,160
	ctx.r11.u64 = ctx.r11.u64 & 10485760;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82468b14
	if (ctx.cr0.eq) goto loc_82468B14;
	// li r7,1
	ctx.r7.s64 = 1;
loc_82468B14:
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// b 0x82468b30
	goto loc_82468B30;
loc_82468B1C:
	// lwz r11,60(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// rlwinm. r11,r11,0,8,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82468b2c
	if (ctx.cr0.eq) goto loc_82468B2C;
	// li r7,1
	ctx.r7.s64 = 1;
loc_82468B2C:
	// lis r11,32
	ctx.r11.s64 = 2097152;
loc_82468B30:
	// stw r11,60(r10)
	REX_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
loc_82468B34:
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824689bc
	if (ctx.cr6.lt) goto loc_824689BC;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82468b70
	if (ctx.cr6.eq) goto loc_82468B70;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,4539
	ctx.r5.s64 = 4539;
	// addi r6,r11,27440
	ctx.r6.s64 = ctx.r11.s64 + 27440;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82489c30
	ctx.lr = 0x82468B64;
	sub_82489C30(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82468b74
	goto loc_82468B74;
loc_82468B70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82468B74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82473E60) {
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
	ctx.lr = 0x82473E68;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,260(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r28,12(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r27,16(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r30,r11,12
	r30.u64 = ctx.r11.u32 & 0xFFFFF;
	// bl 0x82477448
	ctx.lr = 0x82473E98;
	sub_82477448(ctx, base);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,260(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 260);
	// bl 0x82477448
	ctx.lr = 0x82473EA8;
	sub_82477448(ctx, base);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,260(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 260);
	// bl 0x82477448
	ctx.lr = 0x82473EB8;
	sub_82477448(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// beq cr6,0x82473f40
	if (ctx.cr6.eq) goto loc_82473F40;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_82473ED0:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82473f40
	if (!ctx.cr6.eq) goto loc_82473F40;
	// lwz r7,0(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82473f30
	if (ctx.cr6.eq) goto loc_82473F30;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82473f30
	if (ctx.cr6.eq) goto loc_82473F30;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82473EFC:
	// lwzx r26,r7,r11
	r26.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r26,r26,2,0,29
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r26,r26,r8
	r26.u64 = REX_LOAD_U32(r26.u32 + ctx.r8.u32);
	// lwzx r26,r26,r10
	r26.u64 = REX_LOAD_U32(r26.u32 + ctx.r10.u32);
	// rlwinm. r26,r26,0,7,7
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne 0x82473f2c
	if (!ctx.cr0.eq) goto loc_82473F2C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, ctx.xer);
	// blt cr6,0x82473efc
	if (ctx.cr6.lt) goto loc_82473EFC;
	// b 0x82473f30
	goto loc_82473F30;
loc_82473F2C:
	// li r6,1
	ctx.r6.s64 = 1;
loc_82473F30:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x82473ed0
	if (ctx.cr6.lt) goto loc_82473ED0;
loc_82473F40:
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,120(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r7,112(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82471828
	ctx.lr = 0x82473F74;
	sub_82471828(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82478758) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb4
	ctx.lr = 0x82478760;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r3,128
	ctx.r3.s64 = 128;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82478258
	ctx.lr = 0x82478784;
	sub_82478258(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82478798
	if (ctx.cr0.eq) goto loc_82478798;
	// bl 0x82130e88
	ctx.lr = 0x82478790;
	sub_82130E88(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8247879c
	goto loc_8247879C;
loc_82478798:
	// li r31,0
	r31.s64 = 0;
loc_8247879C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x824787ac
	if (!ctx.cr6.eq) goto loc_824787AC;
loc_824787A4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x824787ec
	goto loc_824787EC;
loc_824787AC:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82478050
	ctx.lr = 0x824787C4;
	sub_82478050(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x824787e0
	if (!ctx.cr0.lt) goto loc_824787E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82130e88
	ctx.lr = 0x824787D4;
	sub_82130E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824782b0
	ctx.lr = 0x824787DC;
	sub_824782B0(ctx, base);
	// b 0x824787a4
	goto loc_824787A4;
loc_824787E0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82478430
	ctx.lr = 0x824787EC;
	sub_82478430(ctx, base);
loc_824787EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8247C608) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8247C610;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8247c6f0
	if (ctx.cr6.eq) goto loc_8247C6F0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8247c734
	if (ctx.cr6.eq) goto loc_8247C734;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8247C638:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8247c638
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8247C638;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8247c734
	if (ctx.cr6.eq) goto loc_8247C734;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_8247C654:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r31,r11,-1
	r31.s64 = ctx.r11.s64 + -1;
	// lwz r4,20(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 20);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// lwzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// lwz r7,16(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// bge cr6,0x8247c6cc
	if (!ctx.cr6.lt) goto loc_8247C6CC;
	// subf r9,r11,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r11.u64;
	// addi r29,r10,4
	r29.s64 = ctx.r10.s64 + 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8247C68C:
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// lwz r9,16(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8247c6b8
	if (ctx.cr6.lt) goto loc_8247C6B8;
	// bne cr6,0x8247c6c0
	if (!ctx.cr6.eq) goto loc_8247C6C0;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// bge cr6,0x8247c6c0
	if (!ctx.cr6.lt) goto loc_8247C6C0;
loc_8247C6B8:
	// mr r31,r30
	r31.u64 = r30.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
loc_8247C6C0:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bdnz 0x8247c68c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8247C68C;
loc_8247C6CC:
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// lwzx r4,r9,r5
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// stw r4,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stwx r8,r9,r5
	REX_STORE_U32(ctx.r9.u32 + ctx.r5.u32, ctx.r8.u32);
	// blt cr6,0x8247c654
	if (ctx.cr6.lt) goto loc_8247C654;
loc_8247C6F0:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8247c734
	if (ctx.cr6.eq) goto loc_8247C734;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
loc_8247C708:
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8247c708
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8247C708;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8247c734
	if (ctx.cr6.eq) goto loc_8247C734;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a22f8
	ctx.lr = 0x8247C734;
	sub_826A22F8(ctx, base);
loc_8247C734:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82490B68) {
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
	ctx.lr = 0x82490B70;
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r15,-1
	r15.s64 = -1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r15,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r15.u32);
	// bl 0x82481098
	ctx.lr = 0x82490B8C;
	sub_82481098(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r14,0
	r14.s64 = 0;
	// mr r9,r14
	ctx.r9.u64 = r14.u64;
	// stw r14,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r14.u32);
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82490be8
	if (ctx.cr6.eq) goto loc_82490BE8;
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
	// lwz r5,136(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 136);
loc_82490BB4:
	// lwzx r11,r10,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82490bd4
	if (!ctx.cr6.eq) goto loc_82490BD4;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82490bd4
	if (ctx.cr6.gt) goto loc_82490BD4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
loc_82490BD4:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82490bb4
	if (ctx.cr6.lt) goto loc_82490BB4;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_82490BE8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f02b8
	ctx.lr = 0x82490C04;
	sub_823F02B8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// stw r27,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// bne 0x82490c1c
	if (!ctx.cr0.eq) goto loc_82490C1C;
loc_82490C10:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8249134c
	goto loc_8249134C;
loc_82490C1C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82490C2C;
	sub_826A2E60(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82490c8c
	if (!ctx.cr6.gt) goto loc_82490C8C;
	// mr r9,r14
	ctx.r9.u64 = r14.u64;
loc_82490C40:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82490c78
	if (!ctx.cr6.eq) goto loc_82490C78;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r27
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82490c78
	if (ctx.cr6.gt) goto loc_82490C78;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r10,r27
	REX_STORE_U32(ctx.r10.u32 + r27.u32, ctx.r11.u32);
loc_82490C78:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82490c40
	if (ctx.cr6.lt) goto loc_82490C40;
loc_82490C8C:
	// lwz r17,12(r31)
	r17.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r14,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r14.u32);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x824912e4
	if (ctx.cr6.eq) goto loc_824912E4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r16,r14
	r16.u64 = r14.u64;
	// lfd f30,3728(r11)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// lfd f31,-3744(r10)
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
loc_82490CB0:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r29,r11,r16
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + r16.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824912a8
	if (ctx.cr0.eq) goto loc_824912A8;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r28,1
	r28.s64 = 1;
	// mr r30,r14
	r30.u64 = r14.u64;
	// bl 0x82477448
	ctx.lr = 0x82490CDC;
	sub_82477448(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249135c
	if (ctx.cr0.eq) goto loc_8249135C;
loc_82490CE4:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r10,r15
	ctx.r10.u64 = r15.u64;
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248d5c8
	ctx.lr = 0x82490D08;
	sub_8248D5C8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// and r28,r11,r28
	r28.u64 = ctx.r11.u64 & r28.u64;
	// bl 0x82477448
	ctx.lr = 0x82490D28;
	sub_82477448(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82490ce4
	if (!ctx.cr0.eq) goto loc_82490CE4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x8249135c
	if (!ctx.cr6.eq) goto loc_8249135C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824774a0
	ctx.lr = 0x82490D40;
	sub_824774A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8249135c
	if (!ctx.cr0.eq) goto loc_8249135C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r20,r14
	r20.u64 = r14.u64;
	// bl 0x82477448
	ctx.lr = 0x82490D5C;
	sub_82477448(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq 0x82490d74
	if (ctx.cr0.eq) goto loc_82490D74;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// twllei r26,0
	if (r26.s32 == 0 || r26.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r22,r11,r26
	r22.u64 = uint32_t(r26.u32 ? ctx.r11.u32 / r26.u32 : 0);
	// b 0x82490d78
	goto loc_82490D78;
loc_82490D74:
	// mr r22,r14
	r22.u64 = r14.u64;
loc_82490D78:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r23,r14
	r23.u64 = r14.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// std r14,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r14.u64);
	// std r14,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r14.u64);
	// beq cr6,0x824912a8
	if (ctx.cr6.eq) goto loc_824912A8;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r18,80(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r24,r14
	r24.u64 = r14.u64;
	// addi r21,r1,128
	r21.s64 = ctx.r1.s64 + 128;
	// addi r19,r11,-4
	r19.s64 = ctx.r11.s64 + -4;
loc_82490DA4:
	// addi r10,r24,4
	ctx.r10.s64 = r24.s64 + 4;
	// lwzx r11,r10,r19
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r19.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82491108
	if (!ctx.cr6.eq) goto loc_82491108;
	// addi r11,r23,1
	ctx.r11.s64 = r23.s64 + 1;
	// li r25,1
	r25.s64 = 1;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bge cr6,0x82490e84
	if (!ctx.cr6.lt) goto loc_82490E84;
	// subf r11,r11,r26
	ctx.r11.u64 = r26.u64 - ctx.r11.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82490DD0:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwzx r11,r5,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82490e7c
	if (!ctx.cr6.eq) goto loc_82490E7C;
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82490e70
	if (ctx.cr6.eq) goto loc_82490E70;
	// lwz r8,8(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r9,r14
	ctx.r9.u64 = r14.u64;
	// rlwinm r6,r26,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
loc_82490DF8:
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r10,r24,r11
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + ctx.r11.u32);
	// lwzx r11,r5,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r4
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// lwzx r4,r11,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,4(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82490e70
	if (!ctx.cr6.eq) goto loc_82490E70;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r3,r10,r4
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// lwzx r4,r11,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r4,8(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82490e70
	if (!ctx.cr6.eq) goto loc_82490E70;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r10,r4,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// lwzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82490e70
	if (!ctx.cr6.eq) goto loc_82490E70;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// cmplw cr6,r7,r22
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r22.u32, ctx.xer);
	// blt cr6,0x82490df8
	if (ctx.cr6.lt) goto loc_82490DF8;
loc_82490E70:
	// cmplw cr6,r7,r22
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r22.u32, ctx.xer);
	// bne cr6,0x82490e7c
	if (!ctx.cr6.eq) goto loc_82490E7C;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
loc_82490E7C:
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bdnz 0x82490dd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82490DD0;
loc_82490E84:
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// rlwimi r4,r25,0,12,31
	ctx.r4.u64 = (__builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFF00000);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824787f8
	ctx.lr = 0x82490E9C;
	sub_824787F8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82491400
	if (ctx.cr6.eq) goto loc_82491400;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwzx r30,r10,r11
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82477420
	ctx.lr = 0x82490EC0;
	sub_82477420(ctx, base);
	// addi r11,r25,-1
	ctx.r11.s64 = r25.s64 + -1;
	// cmplw cr6,r26,r23
	ctx.cr6.compare<uint32_t>(r26.u32, r23.u32, ctx.xer);
	// ble cr6,0x82491014
	if (!ctx.cr6.gt) goto loc_82491014;
	// rlwinm r4,r26,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// subf r27,r23,r26
	r27.u64 = r26.u64 - r23.u64;
loc_82490EDC:
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8249100c
	if (!ctx.cr6.eq) goto loc_8249100C;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82490fc0
	if (ctx.cr6.eq) goto loc_82490FC0;
	// lwz r7,8(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
loc_82490F04:
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r15,20(r31)
	r15.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r10,r24,r11
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + ctx.r11.u32);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r14,r15,r10
	r14.u64 = REX_LOAD_U32(r15.u32 + ctx.r10.u32);
	// lwzx r15,r11,r15
	r15.u64 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	// lwz r14,4(r14)
	r14.u64 = REX_LOAD_U32(r14.u32 + 4);
	// lwz r15,4(r15)
	r15.u64 = REX_LOAD_U32(r15.u32 + 4);
	// cmplw cr6,r14,r15
	ctx.cr6.compare<uint32_t>(r14.u32, r15.u32, ctx.xer);
	// bne cr6,0x82490f7c
	if (!ctx.cr6.eq) goto loc_82490F7C;
	// lwz r15,20(r31)
	r15.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r14,r15,r10
	r14.u64 = REX_LOAD_U32(r15.u32 + ctx.r10.u32);
	// lwzx r15,r11,r15
	r15.u64 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	// lwz r14,8(r14)
	r14.u64 = REX_LOAD_U32(r14.u32 + 8);
	// lwz r15,8(r15)
	r15.u64 = REX_LOAD_U32(r15.u32 + 8);
	// cmplw cr6,r14,r15
	ctx.cr6.compare<uint32_t>(r14.u32, r15.u32, ctx.xer);
	// bne cr6,0x82490f7c
	if (!ctx.cr6.eq) goto loc_82490F7C;
	// lwz r15,20(r31)
	r15.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r10,r15,r10
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + ctx.r10.u32);
	// lwzx r11,r11,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82490f7c
	if (!ctx.cr6.eq) goto loc_82490F7C;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// cmplw cr6,r6,r22
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r22.u32, ctx.xer);
	// blt cr6,0x82490f04
	if (ctx.cr6.lt) goto loc_82490F04;
loc_82490F7C:
	// cmplw cr6,r6,r22
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r22.u32, ctx.xer);
	// blt cr6,0x82491004
	if (ctx.cr6.lt) goto loc_82491004;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
	// rlwinm r8,r25,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82490F94:
	// lwz r7,8(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r15,8(r30)
	r15.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stwx r6,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r6.u32);
	// lwzx r7,r11,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stwx r7,r10,r15
	REX_STORE_U32(ctx.r10.u32 + r15.u32, ctx.r7.u32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// bdnz 0x82490f94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82490F94;
	// li r14,0
	r14.s64 = 0;
	// li r15,-1
	r15.s64 = -1;
loc_82490FC0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lis r10,20480
	ctx.r10.s64 = 1342177280;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82490ffc
	if (ctx.cr6.eq) goto loc_82490FFC;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stwx r11,r5,r10
	REX_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r11,r5,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r28,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, r28.u32);
loc_82490FFC:
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// b 0x8249100c
	goto loc_8249100C;
loc_82491004:
	// li r14,0
	r14.s64 = 0;
	// li r15,-1
	r15.s64 = -1;
loc_8249100C:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne 0x82490edc
	if (!ctx.cr0.eq) goto loc_82490EDC;
loc_82491014:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lis r10,20480
	ctx.r10.s64 = 1342177280;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82491108
	if (!ctx.cr6.eq) goto loc_82491108;
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(r25.u32, r26.u32, ctx.xer);
	// bne cr6,0x82491044
	if (!ctx.cr6.eq) goto loc_82491044;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x824910f0
	goto loc_824910F0;
loc_82491044:
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82478758
	ctx.lr = 0x8249105C;
	sub_82478758(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r3,0(r21)
	REX_STORE_U32(r21.u32 + 0, ctx.r3.u32);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82491400
	if (ctx.cr6.eq) goto loc_82491400;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// bl 0x8247f670
	ctx.lr = 0x824910E0;
	sub_8247F670(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8249134c
	if (ctx.cr0.lt) goto loc_8249134C;
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
loc_824910F0:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r28,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, r28.u32);
loc_82491108:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// cmplw cr6,r23,r26
	ctx.cr6.compare<uint32_t>(r23.u32, r26.u32, ctx.xer);
	// blt cr6,0x82490da4
	if (ctx.cr6.lt) goto loc_82490DA4;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x824912a4
	if (ctx.cr6.eq) goto loc_824912A4;
	// cmplwi cr6,r20,2
	ctx.cr6.compare<uint32_t>(r20.u32, 2, ctx.xer);
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// bne cr6,0x824911d0
	if (!ctx.cr6.eq) goto loc_824911D0;
	// lis r4,8256
	ctx.r4.s64 = 541065216;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x824787f8
	ctx.lr = 0x82491140;
	sub_824787F8(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82491150:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r8,72(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 72);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r8,r8,0,0,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824911c4
	if (!ctx.cr6.eq) goto loc_824911C4;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r9,72(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r14,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r14.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,72(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_824911C4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82491150
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82491150;
	// b 0x824911e4
	goto loc_824911E4;
loc_824911D0:
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// rlwimi r4,r11,28,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// bl 0x824787f8
	ctx.lr = 0x824911E0;
	sub_824787F8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_824911E4:
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(r28.s32, -1, ctx.xer);
	// beq cr6,0x82490c10
	if (ctx.cr6.eq) goto loc_82490C10;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwzx r30,r10,r11
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82477420
	ctx.lr = 0x82491204;
	sub_82477420(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwinm r27,r20,2,0,29
	r27.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r28,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, r28.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x826a1e70
	ctx.lr = 0x82491240;
	sub_826A1E70(ctx, base);
	// cmplwi cr6,r20,2
	ctx.cr6.compare<uint32_t>(r20.u32, 2, ctx.xer);
	// beq cr6,0x8249129c
	if (ctx.cr6.eq) goto loc_8249129C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82491278
	if (!ctx.cr6.eq) goto loc_82491278;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,120(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 120);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82478758
	ctx.lr = 0x8249126C;
	sub_82478758(ctx, base);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82491400
	if (ctx.cr6.eq) goto loc_82491400;
loc_82491278:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8249129c
	if (ctx.cr6.eq) goto loc_8249129C;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// mtctr r20
	ctx.ctr.u64 = r20.u64;
loc_82491288:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82491288
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82491288;
loc_8249129C:
	// addi r11,r18,1
	ctx.r11.s64 = r18.s64 + 1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_824912A4:
	// lwz r27,88(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_824912A8:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r16,r16,4
	r16.s64 = r16.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r17.u32, ctx.xer);
	// blt cr6,0x82490cb0
	if (ctx.cr6.lt) goto loc_82490CB0;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x824912e4
	if (ctx.cr6.eq) goto loc_824912E4;
	// mtctr r17
	ctx.ctr.u64 = r17.u64;
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
loc_824912D0:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r14,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r14.u32);
	// bdnz 0x824912d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824912D0;
loc_824912E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82482568
	ctx.lr = 0x824912EC;
	sub_82482568(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82491300
	if (ctx.cr0.eq) goto loc_82491300;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8249133c
	if (ctx.cr6.lt) goto loc_8249133C;
loc_82491300:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8247d160
	ctx.lr = 0x82491308;
	sub_8247D160(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8249131c
	if (ctx.cr0.eq) goto loc_8249131C;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8249133c
	if (ctx.cr6.lt) goto loc_8249133C;
loc_8249131C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82482c68
	ctx.lr = 0x82491324;
	sub_82482C68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82491338
	if (ctx.cr0.eq) goto loc_82491338;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8249133c
	if (ctx.cr6.lt) goto loc_8249133C;
loc_82491338:
	// mr r30,r14
	r30.u64 = r14.u64;
loc_8249133C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823f0350
	ctx.lr = 0x82491348;
	sub_823F0350(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8249134C:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
loc_8249135C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r6,12(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r5,4(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 4);
	// bl 0x824787f8
	ctx.lr = 0x82491370;
	sub_824787F8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82491400
	if (ctx.cr6.eq) goto loc_82491400;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwzx r30,r10,r11
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82477420
	ctx.lr = 0x82491394;
	sub_82477420(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x826a1e70
	ctx.lr = 0x824913A8;
	sub_826A1E70(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r4,16(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 16);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// bl 0x826a1e70
	ctx.lr = 0x824913BC;
	sub_826A1E70(ctx, base);
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x824912a8
	if (!ctx.cr6.gt) goto loc_824912A8;
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
loc_824913D0:
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r28,72(r9)
	REX_STORE_U32(ctx.r9.u32 + 72, r28.u32);
	// lwz r9,12(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824913d0
	if (ctx.cr6.lt) goto loc_824913D0;
	// b 0x824912a8
	goto loc_824912A8;
loc_82491400:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// lwz r27,88(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x8249133c
	goto loc_8249133C;
}

DEFINE_REX_FUNC(sub_824CB7A8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r8,112(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x824c1c00
	sub_824C1C00(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824CBD70) {
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
	ctx.lr = 0x824CBD78;
	// lwz r10,460(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 460);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r3.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,52(r1)
	REX_STORE_U32(ctx.r1.u32 + 52, ctx.r3.u32);
	// lwz r19,112(r11)
	r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r8,24(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r29,28(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r28,32(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r27,36(r10)
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r26,40(r10)
	r26.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r25,44(r10)
	r25.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r24,48(r10)
	r24.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r23,52(r10)
	r23.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r22,56(r10)
	r22.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r21,60(r10)
	r21.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// blt 0x824cbed0
	if (ctx.cr0.lt) goto loc_824CBED0;
	// rlwinm r20,r5,2,0,29
	r20.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r18,r6,-4
	r18.s64 = ctx.r6.s64 + -4;
loc_824CBDC0:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// lwz r7,4(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r6,8(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r5,12(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwzu r10,4(r18)
	ea = 4 + r18.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	r18.u32 = ea;
	// lwzx r9,r20,r11
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + ctx.r11.u32);
	// lwzx r11,r20,r7
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + ctx.r7.u32);
	// lwzx r7,r20,r6
	ctx.r7.u64 = REX_LOAD_U32(r20.u32 + ctx.r6.u32);
	// lwzx r6,r20,r5
	ctx.r6.u64 = REX_LOAD_U32(r20.u32 + ctx.r5.u32);
	// addi r20,r20,4
	r20.s64 = r20.s64 + 4;
	// beq cr6,0x824cbec4
	if (ctx.cr6.eq) goto loc_824CBEC4;
	// mtctr r19
	ctx.ctr.u64 = r19.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r3,r11,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r31,r11,r7
	r31.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r30,r11,r6
	r30.u64 = ctx.r6.u64 - ctx.r11.u64;
loc_824CBE04:
	// lbzx r9,r3,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// subfic r9,r9,255
	ctx.xer.ca = ctx.r9.u32 <= 255;
	ctx.r9.u64 = static_cast<uint64_t>(255) - ctx.r9.u64;
	// lbzx r5,r30,r11
	ctx.r5.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// subfic r7,r7,255
	ctx.xer.ca = ctx.r7.u32 <= 255;
	ctx.r7.u64 = static_cast<uint64_t>(255) - ctx.r7.u64;
	// subfic r6,r6,255
	ctx.xer.ca = ctx.r6.u32 <= 255;
	ctx.r6.u64 = static_cast<uint64_t>(255) - ctx.r6.u64;
	// subfic r5,r5,255
	ctx.xer.ca = ctx.r5.u32 <= 255;
	ctx.r5.u64 = static_cast<uint64_t>(255) - ctx.r5.u64;
	// rlwinm r17,r9,2,0,29
	r17.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r5,r17,r29
	ctx.r5.u64 = REX_LOAD_U32(r17.u32 + r29.u32);
	// lwzx r16,r9,r8
	r16.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r15,r7,r26
	r15.u64 = REX_LOAD_U32(ctx.r7.u32 + r26.u32);
	// mullw r5,r5,r16
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r16.s32);
	// lwzx r16,r6,r23
	r16.u64 = REX_LOAD_U32(ctx.r6.u32 + r23.u32);
	// rlwinm r5,r5,16,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF;
	// mullw r5,r5,r15
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r15.s32);
	// rlwinm r5,r5,16,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF;
	// mullw r5,r5,r16
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r16.s32);
	// rlwinm r5,r5,8,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFF;
	// stb r5,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r5.u8);
	// lwzx r5,r6,r22
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + r22.u32);
	// lwzx r16,r17,r28
	r16.u64 = REX_LOAD_U32(r17.u32 + r28.u32);
	// lwzx r14,r9,r8
	r14.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r15,r7,r25
	r15.u64 = REX_LOAD_U32(ctx.r7.u32 + r25.u32);
	// mullw r15,r15,r14
	r15.s64 = int64_t(r15.s32) * int64_t(r14.s32);
	// rlwinm r15,r15,16,16,31
	r15.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 16) & 0xFFFF;
	// mullw r5,r15,r5
	ctx.r5.s64 = int64_t(r15.s32) * int64_t(ctx.r5.s32);
	// rlwinm r5,r5,16,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF;
	// mullw r5,r5,r16
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r16.s32);
	// rlwinm r5,r5,8,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFF;
	// stb r5,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r5.u8);
	// lwzx r5,r17,r27
	ctx.r5.u64 = REX_LOAD_U32(r17.u32 + r27.u32);
	// lwzx r7,r7,r24
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + r24.u32);
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r6,r6,r21
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r21.u32);
	// mullw r6,r6,r9
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// rlwinm r9,r6,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF;
	// mullw r6,r9,r5
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// rlwinm r5,r6,16,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF;
	// mullw r9,r5,r7
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// rlwinm r7,r9,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// stbu r7,3(r10)
	ea = 3 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x824cbe04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824CBE04;
	// lwz r3,52(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
loc_824CBEC4:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,52(r1)
	REX_STORE_U32(ctx.r1.u32 + 52, ctx.r3.u32);
	// bge 0x824cbdc0
	if (!ctx.cr0.lt) goto loc_824CBDC0;
loc_824CBED0:
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_824D6D80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r11,r7,31
	ctx.r11.s64 = ctx.r7.s64 + 31;
	// rlwinm r10,r5,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r11,r11,28,4,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFE;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cntlzw r30,r8
	r30.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// addi r11,r6,31
	ctx.r11.s64 = ctx.r6.s64 + 31;
	// rlwinm r7,r4,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r9,r3,29
	ctx.r9.u64 = ctx.r3.u32 & 0x7;
	// rlwinm r8,r4,2,27,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x18;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// rlwinm r6,r11,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subfic r11,r30,31
	ctx.xer.ca = r30.u32 <= 31;
	ctx.r11.u64 = static_cast<uint64_t>(31) - r30.u64;
	// mullw r8,r7,r6
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// rlwinm r9,r3,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// slw r6,r5,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r8,r6,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r9,r4,3,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x8;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// clrldi r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// addi r30,r11,6
	r30.s64 = ctx.r11.s64 + 6;
	// rldicr r8,r9,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// sld r9,r7,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r5.u8 & 0x7F));
	// clrldi r7,r30,32
	ctx.r7.u64 = r30.u64 & 0xFFFFFFFF;
	// clrldi r5,r31,62
	ctx.r5.u64 = r31.u64 & 0x3;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sld r8,r5,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r5.u64 << (ctx.r7.u8 & 0x7F));
	// rlwinm r7,r4,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// clrldi r8,r6,60
	ctx.r8.u64 = ctx.r6.u64 & 0xF;
	// clrldi r5,r10,63
	ctx.r5.u64 = ctx.r10.u64 & 0x1;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rldicr r8,r5,8,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rldicr r9,r10,0,54
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0xFFFFFFFFFFFFFE00;
	// rlwinm r6,r10,0,23,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1C0;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rldicl r9,r3,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u64, 3) & 0x7FFFFFFFF;
	// rldicr r7,r8,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// rldicr r9,r9,0,57
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 0) & 0xFFFFFFFFFFFFFFC0;
	// mulli r8,r5,-128
	ctx.r8.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(-128));
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r7,r9,0,24,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC0;
	// rldicr r8,r8,2,61
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// clrldi r9,r10,58
	ctx.r9.u64 = ctx.r10.u64 & 0x3F;
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srd r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824DBC80) {
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
	ctx.lr = 0x824DBC88;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r5,r3,144
	ctx.r5.s64 = ctx.r3.s64 + 144;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824dbd14
	if (ctx.cr6.lt) goto loc_824DBD14;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r28,72(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// li r30,0
	r30.s64 = 0;
	// lwz r27,228(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// rlwinm r31,r4,4,0,27
	r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwimi r10,r9,1,30,30
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwinm r9,r8,31,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x80000000;
	// std r30,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r30.u64);
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// std r30,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r30.u64);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwimi r27,r10,13,0,18
	r27.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFFFE000) | (r27.u64 & 0xFFFFFFFF00001FFF);
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwimi r6,r27,7,0,24
	ctx.r6.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 7) & 0xFFFFFF80) | (ctx.r6.u64 & 0xFFFFFFFF0000007F);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// rlwinm r10,r6,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 9) & 0xFFFFFE00;
	// lwzx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// oris r8,r8,32768
	ctx.r8.u64 = ctx.r8.u64 | 2147483648;
	// stwx r8,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r8.u32);
	// lwz r3,68(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r11,r11,23
	ctx.r11.u64 = ctx.r11.u32 & 0x1FF;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,0,23,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFF800001FF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x824da958
	ctx.lr = 0x824DBD14;
	sub_824DA958(ctx, base);
loc_824DBD14:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824DE4B0) {
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
	ctx.lr = 0x824DE4B8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,22852
	r28.s64 = ctx.r11.s64 + 22852;
	// addi r27,r10,23200
	r27.s64 = ctx.r10.s64 + 23200;
	// bne cr6,0x824de4fc
	if (!ctx.cr6.eq) goto loc_824DE4FC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,23184
	ctx.r5.s64 = ctx.r11.s64 + 23184;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,411
	ctx.r7.s64 = 411;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824DE4FC;
	sub_824EA978(ctx, base);
loc_824DE4FC:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824de524
	if (ctx.cr6.lt) goto loc_824DE524;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,23128
	ctx.r5.s64 = ctx.r11.s64 + 23128;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,411
	ctx.r7.s64 = 411;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824DE524;
	sub_824EA978(ctx, base);
loc_824DE524:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// rlwinm r29,r30,3,0,28
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824de558
	if (ctx.cr6.lt) goto loc_824DE558;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,23040
	ctx.r5.s64 = ctx.r11.s64 + 23040;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,411
	ctx.r7.s64 = 411;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824DE558;
	sub_824EA978(ctx, base);
loc_824DE558:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stwx r26,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r26.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwzx r9,r10,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	// rlwinm r10,r9,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824E46E0) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824E4CD0) {
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
	ctx.lr = 0x824E4CD8;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x824e4d0c
	if (ctx.cr6.eq) goto loc_824E4D0C;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
loc_824E4D0C:
	// lwz r30,356(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// lis r29,-1
	r29.s64 = -65536;
	// stw r27,52(r31)
	REX_STORE_U32(r31.u32 + 52, r27.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r28,48(r31)
	REX_STORE_U32(r31.u32 + 48, r28.u32);
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
	// beq cr6,0x824e4dc0
	if (ctx.cr6.eq) goto loc_824E4DC0;
	// lwz r6,16(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r6,64
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 64, ctx.xer);
	// stw r6,792(r31)
	REX_STORE_U32(r31.u32 + 792, ctx.r6.u32);
	// ble cr6,0x824e4d48
	if (!ctx.cr6.gt) goto loc_824E4D48;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,3589
	ctx.r4.s64 = 3589;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x824E4D48;
	sub_824E4368(ctx, base);
loc_824E4D48:
	// rlwinm r11,r28,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x824e4d6c
	if (!ctx.cr6.eq) goto loc_824E4D6C;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// stw r11,800(r31)
	REX_STORE_U32(r31.u32 + 800, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// stw r11,804(r31)
	REX_STORE_U32(r31.u32 + 804, ctx.r11.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// b 0x824e4d80
	goto loc_824E4D80;
loc_824E4D6C:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// stw r11,800(r31)
	REX_STORE_U32(r31.u32 + 800, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// stw r11,804(r31)
	REX_STORE_U32(r31.u32 + 804, ctx.r11.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
loc_824E4D80:
	// stw r11,808(r31)
	REX_STORE_U32(r31.u32 + 808, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e4d9c
	if (ctx.cr0.eq) goto loc_824E4D9C;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
loc_824E4D9C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824e4dc0
	if (ctx.cr6.eq) goto loc_824E4DC0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e4dc0
	if (ctx.cr0.eq) goto loc_824E4DC0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x824dd558
	ctx.lr = 0x824E4DC0;
	sub_824DD558(ctx, base);
loc_824E4DC0:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// beq cr6,0x824e4dfc
	if (ctx.cr6.eq) goto loc_824E4DFC;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824e4de8
	if (ctx.cr6.eq) goto loc_824E4DE8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e4df4
	if (ctx.cr0.eq) goto loc_824E4DF4;
loc_824E4DE8:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
loc_824E4DF4:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bne cr6,0x824e4e20
	if (!ctx.cr6.eq) goto loc_824E4E20;
loc_824E4DFC:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824e4e20
	if (ctx.cr6.eq) goto loc_824E4E20;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e4e20
	if (ctx.cr0.eq) goto loc_824E4E20;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
loc_824E4E20:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8259b1a0
	ctx.lr = 0x824E4E30;
	sub_8259B1A0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x824e4e48
	if (!ctx.cr0.eq) goto loc_824E4E48;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,3501
	ctx.r4.s64 = 3501;
	// bl 0x824e4368
	ctx.lr = 0x824E4E48;
	sub_824E4368(ctx, base);
loc_824E4E48:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// bl 0x82597e68
	ctx.lr = 0x824E4E50;
	sub_82597E68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257e300
	ctx.lr = 0x824E4E58;
	sub_8257E300(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
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
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824e4e8c
	if (!ctx.cr0.eq) goto loc_824E4E8C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824e4e8c
	if (ctx.cr6.eq) goto loc_824E4E8C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257c7d0
	ctx.lr = 0x824E4E8C;
	sub_8257C7D0(ctx, base);
loc_824E4E8C:
	// addi r3,r31,972
	ctx.r3.s64 = r31.s64 + 972;
	// bl 0x824e4528
	ctx.lr = 0x824E4E94;
	sub_824E4528(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r7,348(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r6,340(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e46f0
	ctx.lr = 0x824E4EB0;
	sub_824E46F0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_824F0F18) {
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
	ctx.lr = 0x824F0F20;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824f0f60
	if (!ctx.cr6.eq) goto loc_824F0F60;
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
	// li r7,1870
	ctx.r7.s64 = 1870;
	// bl 0x824ea978
	ctx.lr = 0x824F0F60;
	sub_824EA978(ctx, base);
loc_824F0F60:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x824f16a8
	ctx.lr = 0x824F0F78;
	sub_824F16A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824F4518) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824F4520;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// bl 0x824f3b98
	ctx.lr = 0x824F4550;
	sub_824F3B98(ctx, base);
	// lis r10,3328
	ctx.r10.s64 = 218103808;
	// rlwinm r11,r31,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xF000000;
	// lis r5,228
	ctx.r5.s64 = 14942208;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r31,0,8,15
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFF0000;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// and r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 & ctx.r10.u64;
	// lis r11,68
	ctx.r11.s64 = 4456448;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bne cr6,0x824f4598
	if (!ctx.cr6.eq) goto loc_824F4598;
	// ori r9,r6,12816
	ctx.r9.u64 = ctx.r6.u64 | 12816;
	// stwu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r7.u32 = ea;
	// b 0x824f45a8
	goto loc_824F45A8;
loc_824F4598:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f3f80
	ctx.lr = 0x824F45A0;
	sub_824F3F80(ctx, base);
	// or r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 | ctx.r6.u64;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r7.u32 = ea;
loc_824F45A8:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r5.u32, ctx.xer);
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// bne cr6,0x824f45d0
	if (!ctx.cr6.eq) goto loc_824F45D0;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// ori r10,r10,33
	ctx.r10.u64 = ctx.r10.u64 | 33;
	// stw r10,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// b 0x824f45ec
	goto loc_824F45EC;
loc_824F45D0:
	// lis r11,68
	ctx.r11.s64 = 4456448;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r11,r11,33
	ctx.r11.u64 = ctx.r11.u64 | 33;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// bl 0x824f3f80
	ctx.lr = 0x824F45E4;
	sub_824F3F80(ctx, base);
	// stwu r3,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r7.u32 = ea;
	// addi r11,r6,2
	ctx.r11.s64 = ctx.r6.s64 + 2;
loc_824F45EC:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r3,r7,4
	ctx.r3.s64 = ctx.r7.s64 + 4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824FE6F0) {
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
	ctx.lr = 0x824FE6F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824fe7ec
	if (ctx.cr6.eq) goto loc_824FE7EC;
	// lwz r11,68(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 68);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824fe71c
	if (!ctx.cr6.lt) goto loc_824FE71C;
loc_824FE710:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824fe7f0
	goto loc_824FE7F0;
loc_824FE71C:
	// lwz r10,72(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x824fe710
	if (ctx.cr6.gt) goto loc_824FE710;
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x824fe710
	if (ctx.cr6.gt) goto loc_824FE710;
	// cmplwi cr6,r29,28
	ctx.cr6.compare<uint32_t>(r29.u32, 28, ctx.xer);
	// blt cr6,0x824fe710
	if (ctx.cr6.lt) goto loc_824FE710;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// lwz r27,16(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r29.u32, ctx.xer);
	// bgt cr6,0x824fe710
	if (ctx.cr6.gt) goto loc_824FE710;
	// clrldi r11,r27,32
	ctx.r11.u64 = r27.u64 & 0xFFFFFFFF;
	// clrldi r10,r8,32
	ctx.r10.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// mulli r11,r11,20
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(20));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r11,r29
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, r29.u64, ctx.xer);
	// bgt cr6,0x824fe710
	if (ctx.cr6.gt) goto loc_824FE710;
	// li r6,240
	ctx.r6.s64 = 240;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824fe458
	ctx.lr = 0x824FE798;
	sub_824FE458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824fe7f0
	if (ctx.cr0.lt) goto loc_824FE7F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x824fe458
	ctx.lr = 0x824FE7AC;
	sub_824FE458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824fe7f0
	if (ctx.cr0.lt) goto loc_824FE7F0;
	// add r30,r8,r31
	r30.u64 = ctx.r8.u64 + r31.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824fe7ec
	if (ctx.cr6.eq) goto loc_824FE7EC;
loc_824FE7C4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824fe5d0
	ctx.lr = 0x824FE7D4;
	sub_824FE5D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824fe7f0
	if (ctx.cr0.lt) goto loc_824FE7F0;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,20
	r30.s64 = r30.s64 + 20;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(r28.u32, r27.u32, ctx.xer);
	// blt cr6,0x824fe7c4
	if (ctx.cr6.lt) goto loc_824FE7C4;
loc_824FE7EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824FE7F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82504FA8) {
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
	ctx.lr = 0x82504FB0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r31,r4,30,2,29
	r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFC;
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// addi r29,r31,3
	r29.s64 = r31.s64 + 3;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r26,r11,28,4,31
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r28,r11,28
	r28.u64 = ctx.r11.u32 & 0xF;
	// bl 0x82504128
	ctx.lr = 0x82504FE0;
	sub_82504128(ctx, base);
	// and. r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 & r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82504ff8
	if (ctx.cr0.eq) goto loc_82504FF8;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r4,3526
	ctx.r4.s64 = 3526;
	// bl 0x824e4368
	ctx.lr = 0x82504FF8;
	sub_824E4368(ctx, base);
loc_82504FF8:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825041b8
	ctx.lr = 0x8250500C;
	sub_825041B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8250A8A0) {
	REX_FUNC_PROLOGUE();
	// lwz r8,4(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
loc_8250A8A4:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,16(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8250a920
	if (ctx.cr6.eq) goto loc_8250A920;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8250a920
	if (ctx.cr0.eq) goto loc_8250A920;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8250A8C8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8250a920
	if (ctx.cr6.eq) goto loc_8250A920;
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8250a918
	if (ctx.cr6.eq) goto loc_8250A918;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bne cr6,0x8250a900
	if (!ctx.cr6.eq) goto loc_8250A900;
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8250a928
	if (!ctx.cr6.eq) goto loc_8250A928;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// b 0x8250a918
	goto loc_8250A918;
loc_8250A900:
	// cmplwi cr6,r10,63
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 63, ctx.xer);
	// bne cr6,0x8250a918
	if (!ctx.cr6.eq) goto loc_8250A918;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8250a930
	if (!ctx.cr6.eq) goto loc_8250A930;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_8250A918:
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x8250a8c8
	goto loc_8250A8C8;
loc_8250A920:
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// b 0x8250a8a4
	goto loc_8250A8A4;
loc_8250A928:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// b 0x824e4368
	sub_824E4368(ctx, base);
	return;
loc_8250A930:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// b 0x824e4368
	sub_824E4368(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82510D78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82510D80;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, r30.u32);
	// stw r30,44(r4)
	REX_STORE_U32(ctx.r4.u32 + 44, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82552240
	ctx.lr = 0x82510DA8;
	sub_82552240(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82510e40
	if (!ctx.cr0.eq) goto loc_82510E40;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82510e40
	if (ctx.cr0.eq) goto loc_82510E40;
loc_82510DC0:
	// lwz r11,44(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 44);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x82510e24
	if (!ctx.cr6.eq) goto loc_82510E24;
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82510e24
	if (!ctx.cr0.eq) goto loc_82510E24;
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r4,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r4.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82510e24
	if (ctx.cr0.eq) goto loc_82510E24;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,83
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 83, ctx.xer);
	// blt cr6,0x82510e04
	if (ctx.cr6.lt) goto loc_82510E04;
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82510e08
	if (!ctx.cr6.gt) goto loc_82510E08;
loc_82510E04:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82510E08:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82510e24
	if (ctx.cr0.eq) goto loc_82510E24;
	// rlwinm. r11,r10,5,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82510e24
	if (!ctx.cr0.eq) goto loc_82510E24;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82510ab0
	ctx.lr = 0x82510E24;
	sub_82510AB0(ctx, base);
loc_82510E24:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82510e40
	if (!ctx.cr0.eq) goto loc_82510E40;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82510dc0
	if (!ctx.cr6.eq) goto loc_82510DC0;
loc_82510E40:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8251EC00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// li r7,2
	ctx.r7.s64 = 2;
	// clrlwi r8,r5,27
	ctx.r8.u64 = ctx.r5.u32 & 0x1F;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r10,r4,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r9,r5,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFC;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// li r3,-1
	ctx.r3.s64 = -1;
	// rlwinm r7,r4,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r6,r5,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r31,r4,27
	r31.u64 = ctx.r4.u32 & 0x1F;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// slw r8,r3,r31
	ctx.r8.u64 = r31.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r31.u8 & 0x3F));
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8251ec4c
	if (!ctx.cr6.eq) goto loc_8251EC4C;
	// and r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 & ctx.r11.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8251EC4C:
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// and. r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251ec60
	if (ctx.cr0.eq) goto loc_8251EC60;
	// rlwinm r10,r5,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFE0;
	// b 0x8251ec90
	goto loc_8251EC90;
loc_8251EC60:
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// b 0x8251ec78
	goto loc_8251EC78;
loc_8251EC68:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8251eca4
	if (!ctx.cr6.eq) goto loc_8251ECA4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8251EC78:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8251ec68
	if (ctx.cr6.gt) goto loc_8251EC68;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// and. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251ec9c
	if (ctx.cr0.eq) goto loc_8251EC9C;
	// rlwinm r10,r4,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFE0;
loc_8251EC90:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8251EC98:
	// addi r3,r11,31
	ctx.r3.s64 = ctx.r11.s64 + 31;
loc_8251EC9C:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8251ECA4:
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r10,r4,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFE0;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// b 0x8251ec98
	goto loc_8251EC98;
}

DEFINE_REX_FUNC(sub_82524CA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82524CB0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,101
	ctx.r6.s64 = 101;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82524CD4;
	sub_825BB860(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// beq cr6,0x82524cf8
	if (ctx.cr6.eq) goto loc_82524CF8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82524CF4;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82524CF8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82524D00;
	sub_8250AD28(ctx, base);
	// stw r3,44(r28)
	REX_STORE_U32(r28.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82524d40
	if (ctx.cr6.eq) goto loc_82524D40;
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r31,-36
	ctx.r10.s64 = r31.s64 + -36;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82524D40:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8252E3F8) {
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
	ctx.lr = 0x8252E400;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm. r30,r11,13,29,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8252e454
	if (ctx.cr0.eq) goto loc_8252E454;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r28,r3,40
	r28.s64 = ctx.r3.s64 + 40;
	// subf r27,r5,r6
	r27.u64 = ctx.r6.u64 - ctx.r5.u64;
	// subf r26,r5,r4
	r26.u64 = ctx.r4.u64 - ctx.r5.u64;
loc_8252E424:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwzu r3,4(r28)
	ea = 4 + r28.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r28.u32 = ea;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,28(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 28);
	// add r7,r27,r31
	ctx.r7.u64 = r27.u64 + r31.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// add r5,r26,r31
	ctx.r5.u64 = r26.u64 + r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825ba3a0
	ctx.lr = 0x8252E448;
	sub_825BA3A0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x8252e424
	if (!ctx.cr0.eq) goto loc_8252E424;
loc_8252E454:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_825309C0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82530BB0) {
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
	ctx.lr = 0x82530BB8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82530BE8;
	sub_825BB860(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// beq cr6,0x82530c0c
	if (ctx.cr6.eq) goto loc_82530C0C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82530C08;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82530C0C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82530C14;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// beq cr6,0x82530c38
	if (ctx.cr6.eq) goto loc_82530C38;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82530C34;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82530C38:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82530C40;
	sub_8250AD28(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// rlwimi r10,r11,14,15,17
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1C000) | (ctx.r10.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bl 0x824ffc30
	ctx.lr = 0x82530C70;
	sub_824FFC30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_825385D8) {
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
	ctx.lr = 0x825385E0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r20,r8
	r20.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8253860c
	if (!ctx.cr6.eq) goto loc_8253860C;
loc_82538604:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825389d0
	goto loc_825389D0;
loc_8253860C:
	// lwz r24,12(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r27,4
	r27.s64 = 4;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// ble cr6,0x8253864c
	if (!ctx.cr6.gt) goto loc_8253864C;
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// addi r9,r5,12
	ctx.r9.s64 = ctx.r5.s64 + 12;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82538628:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r10,r10,18,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, ctx.xer);
	// bge cr6,0x82538644
	if (!ctx.cr6.lt) goto loc_82538644;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
loc_82538644:
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x82538628
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82538628;
loc_8253864C:
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r21,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	r21.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ble cr6,0x82538604
	if (!ctx.cr6.gt) goto loc_82538604;
	// addi r31,r6,-1
	r31.s64 = ctx.r6.s64 + -1;
	// addi r30,r5,12
	r30.s64 = ctx.r5.s64 + 12;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_8253867C:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825386a8
	if (ctx.cr6.eq) goto loc_825386A8;
	// lwz r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r10,r10,18,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// ble cr6,0x825386b0
	if (!ctx.cr6.gt) goto loc_825386B0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x825386b0
	if (ctx.cr6.eq) goto loc_825386B0;
loc_825386A8:
	// addi r26,r26,-1
	r26.s64 = r26.s64 + -1;
	// b 0x825386c4
	goto loc_825386C4;
loc_825386B0:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,-4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825386c4
	if (ctx.cr6.eq) goto loc_825386C4;
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
loc_825386C4:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x8253867c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8253867C;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(r26.u32, 1, ctx.xer);
	// ble cr6,0x82538604
	if (!ctx.cr6.gt) goto loc_82538604;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x825389cc
	if (ctx.cr6.eq) goto loc_825389CC;
	// addi r11,r26,6
	ctx.r11.s64 = r26.s64 + 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r25,r11,2,0,29
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x824f7dc0
	ctx.lr = 0x825386F8;
	sub_824F7DC0(ctx, base);
	// subf r11,r21,r26
	ctx.r11.u64 = r26.u64 - r21.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mulli r10,r11,10
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(10));
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r11,r26,0,19,31
	ctx.r11.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x1FFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE000);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-10
	ctx.r10.s64 = ctx.r10.s64 + -10;
	// bgt cr6,0x82538720
	if (ctx.cr6.gt) goto loc_82538720;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82538720:
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// addi r29,r28,24
	r29.s64 = r28.s64 + 24;
	// stw r24,24(r28)
	REX_STORE_U32(r28.u32 + 24, r24.u32);
	// rlwimi r11,r10,13,3,18
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1FFFE000) | (ctx.r11.u64 & 0xFFFFFFFFE0001FFF);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// addi r8,r28,24
	ctx.r8.s64 = r28.s64 + 24;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_82538744:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82538770
	if (ctx.cr6.eq) goto loc_82538770;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,18,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x8253876c
	if (ctx.cr6.gt) goto loc_8253876C;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
loc_8253876C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82538770:
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x82538744
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82538744;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x825388fc
	if (ctx.cr6.eq) goto loc_825388FC;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8253878C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// lwz r4,32(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x825388d8
	goto loc_825388D8;
loc_8253879C:
	// lwz r31,0(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r7,r11,19
	ctx.r7.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r26,r7
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x8253887c
	if (!ctx.cr6.gt) goto loc_8253887C;
	// addi r6,r31,24
	ctx.r6.s64 = r31.s64 + 24;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_825387C4:
	// lwz r18,0(r9)
	r18.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r17,0(r10)
	r17.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r17,r18
	ctx.cr6.compare<uint32_t>(r17.u32, r18.u32, ctx.xer);
	// bne cr6,0x825387e4
	if (!ctx.cr6.eq) goto loc_825387E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x825387fc
	if (ctx.cr6.eq) goto loc_825387FC;
loc_825387E4:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r26
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r26.u32, ctx.xer);
	// blt cr6,0x825387c4
	if (ctx.cr6.lt) goto loc_825387C4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x825388d0
	if (!ctx.cr6.eq) goto loc_825388D0;
loc_825387FC:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8253885c
	if (ctx.cr6.eq) goto loc_8253885C;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_8253880C:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// beq cr6,0x82538844
	if (ctx.cr6.eq) goto loc_82538844;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
loc_8253881C:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825389d8
	if (ctx.cr6.eq) goto loc_825389D8;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r31.u32, ctx.xer);
	// beq cr6,0x8253883c
	if (ctx.cr6.eq) goto loc_8253883C;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// b 0x8253881c
	goto loc_8253881C;
loc_8253883C:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82538844:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8253880c
	if (ctx.cr6.lt) goto loc_8253880C;
loc_8253885C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r28.u32);
	// rlwinm r11,r11,0,19,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFE0001FFF;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// b 0x825388d4
	goto loc_825388D4;
loc_8253887C:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x825388c8
	if (ctx.cr6.eq) goto loc_825388C8;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// addi r11,r31,24
	ctx.r11.s64 = r31.s64 + 24;
loc_82538890:
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x825388b0
	if (!ctx.cr6.eq) goto loc_825388B0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, ctx.xer);
	// beq cr6,0x825388e4
	if (ctx.cr6.eq) goto loc_825388E4;
loc_825388B0:
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r7,r7,19
	ctx.r7.u64 = ctx.r7.u32 & 0x1FFF;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82538890
	if (ctx.cr6.lt) goto loc_82538890;
loc_825388C8:
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, ctx.xer);
	// beq cr6,0x825388e4
	if (ctx.cr6.eq) goto loc_825388E4;
loc_825388D0:
	// addi r5,r4,4
	ctx.r5.s64 = ctx.r4.s64 + 4;
loc_825388D4:
	// lwz r4,0(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
loc_825388D8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8253879c
	if (!ctx.cr6.eq) goto loc_8253879C;
	// li r31,0
	r31.s64 = 0;
loc_825388E4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825389e4
	if (!ctx.cr6.eq) goto loc_825389E4;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(r27.u32, r26.u32, ctx.xer);
	// blt cr6,0x8253878c
	if (ctx.cr6.lt) goto loc_8253878C;
loc_825388FC:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// stw r11,12(r28)
	REX_STORE_U32(r28.u32 + 12, ctx.r11.u32);
	// stw r28,0(r23)
	REX_STORE_U32(r23.u32 + 0, r28.u32);
	// beq cr6,0x82538944
	if (ctx.cr6.eq) goto loc_82538944;
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_82538918:
	// li r5,49
	ctx.r5.s64 = 49;
	// lwzu r31,4(r29)
	ea = 4 + r29.u32;
	r31.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824f7678
	ctx.lr = 0x8253892C;
	sub_824F7678(ctx, base);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// bne 0x82538918
	if (!ctx.cr0.eq) goto loc_82538918;
loc_82538944:
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82538974
	if (!ctx.cr0.eq) goto loc_82538974;
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82538974
	if (ctx.cr0.eq) goto loc_82538974;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82538980
	if (!ctx.cr6.gt) goto loc_82538980;
loc_82538974:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8251fe00
	ctx.lr = 0x82538980;
	sub_8251FE00(ctx, base);
loc_82538980:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r28,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r28.u32);
loc_82538998:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x825389cc
	if (ctx.cr6.eq) goto loc_825389CC;
	// addi r11,r26,-2
	ctx.r11.s64 = r26.s64 + -2;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x825389cc
	if (ctx.cr6.gt) goto loc_825389CC;
	// li r5,49
	ctx.r5.s64 = 49;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824f7678
	ctx.lr = 0x825389BC;
	sub_824F7678(ctx, base);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// lwz r11,20(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 20);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,20(r19)
	REX_STORE_U32(r19.u32 + 20, ctx.r3.u32);
loc_825389CC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_825389D0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cdc
	return;
loc_825389D8:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824e4368
	ctx.lr = 0x825389E4;
	sub_824E4368(ctx, base);
loc_825389E4:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82538a0c
	if (ctx.cr0.eq) goto loc_82538A0C;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
	// rlwinm r11,r11,0,19,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFE0001FFF;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// stw r11,12(r28)
	REX_STORE_U32(r28.u32 + 12, ctx.r11.u32);
	// stw r28,0(r23)
	REX_STORE_U32(r23.u32 + 0, r28.u32);
	// b 0x82538a20
	goto loc_82538A20;
loc_82538A0C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824ffbd8
	ctx.lr = 0x82538A20;
	sub_824FFBD8(ctx, base);
loc_82538A20:
	// mr r28,r31
	r28.u64 = r31.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x825389cc
	if (ctx.cr6.eq) goto loc_825389CC;
	// cmplw cr6,r19,r31
	ctx.cr6.compare<uint32_t>(r19.u32, r31.u32, ctx.xer);
	// beq cr6,0x82538604
	if (ctx.cr6.eq) goto loc_82538604;
	// lwz r11,20(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 20);
	// b 0x82538a4c
	goto loc_82538A4C;
loc_82538A3C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// beq cr6,0x82538604
	if (ctx.cr6.eq) goto loc_82538604;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82538A4C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82538a3c
	if (!ctx.cr6.eq) goto loc_82538A3C;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8252e650
	ctx.lr = 0x82538A64;
	sub_8252E650(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8252e6f0
	ctx.lr = 0x82538A74;
	sub_8252E6F0(ctx, base);
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82538998
	if (ctx.cr0.eq) goto loc_82538998;
	// b 0x82538604
	goto loc_82538604;
}

DEFINE_REX_FUNC(sub_8257B120) {
	REX_FUNC_PROLOGUE();
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// bl 0x826a1930
	ctx.lr = 0x8257B138;
	sub_826A1930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8257b160
	if (!ctx.cr0.gt) goto loc_8257B160;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x8257b158
	if (!ctx.cr6.gt) goto loc_8257B158;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8257b158
	if (ctx.cr6.eq) goto loc_8257B158;
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// bne cr6,0x8257b160
	if (!ctx.cr6.eq) goto loc_8257B160;
loc_8257B158:
	// bl 0x82579b68
	ctx.lr = 0x8257B15C;
	sub_82579B68(ctx, base);
	// b 0x8257b1a4
	goto loc_8257B1A4;
loc_8257B160:
	// frsp f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r6,-32120
	ctx.r6.s64 = -2105016320;
	// addi r7,r11,-20616
	ctx.r7.s64 = ctx.r11.s64 + -20616;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r6,20088
	ctx.r5.s64 = ctx.r6.s64 + 20088;
	// addi r10,r7,768
	ctx.r10.s64 = ctx.r7.s64 + 768;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r9,r7,512
	ctx.r9.s64 = ctx.r7.s64 + 512;
	// addi r8,r7,256
	ctx.r8.s64 = ctx.r7.s64 + 256;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x8257acc0
	ctx.lr = 0x8257B19C;
	sub_8257ACC0(ctx, base);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
loc_8257B1A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8257DFD8) {
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
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824f7dc0
	ctx.lr = 0x8257DFFC;
	sub_824F7DC0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r3,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8257e050
	if (!ctx.cr0.eq) goto loc_8257E050;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8257e050
	if (ctx.cr0.eq) goto loc_8257E050;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8257E018:
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r7,r11,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// rlwinm r9,r9,2,11,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1FFFFC;
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r10,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// lwz r8,96(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 96);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r11,-4(r9)
	REX_STORE_U32(ctx.r9.u32 + -4, ctx.r11.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8257e050
	if (!ctx.cr0.eq) goto loc_8257E050;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8257e018
	if (!ctx.cr6.eq) goto loc_8257E018;
loc_8257E050:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,92(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 92);
	// bl 0x8257cfe0
	ctx.lr = 0x8257E05C;
	sub_8257CFE0(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824ffbd8
	ctx.lr = 0x8257E074;
	sub_824FFBD8(ctx, base);
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

DEFINE_REX_FUNC(sub_8257F8E8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// beq 0x8257f908
	if (ctx.cr0.eq) goto loc_8257F908;
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// b 0x8257f90c
	goto loc_8257F90C;
loc_8257F908:
	// rlwinm r11,r11,0,3,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
loc_8257F90C:
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// beq 0x8257f928
	if (ctx.cr0.eq) goto loc_8257F928;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// b 0x8257f92c
	goto loc_8257F92C;
loc_8257F928:
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_8257F92C:
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8257FEC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8257FEC8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x8257fd20
	ctx.lr = 0x8257FEE4;
	sub_8257FD20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8257fe28
	ctx.lr = 0x8257FEF8;
	sub_8257FE28(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257fdd8
	ctx.lr = 0x8257FF04;
	sub_8257FDD8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r30.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82580CB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82580CC0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,124
	ctx.r4.s64 = 124;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x824ff930
	ctx.lr = 0x82580CD8;
	sub_824FF930(ctx, base);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// addi r6,r11,-36
	ctx.r6.s64 = ctx.r11.s64 + -36;
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// addi r5,r10,-36
	ctx.r5.s64 = ctx.r10.s64 + -36;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// addi r9,r9,-36
	ctx.r9.s64 = ctx.r9.s64 + -36;
	// stw r6,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// ori r6,r5,1
	ctx.r6.u64 = ctx.r5.u64 | 1;
	// stw r8,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stw r6,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r6,68(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// ori r9,r30,1
	ctx.r9.u64 = r30.u64 | 1;
	// lwz r8,48(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// oris r8,r8,8
	ctx.r8.u64 = ctx.r8.u64 | 524288;
	// rlwimi r6,r7,0,4,31
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF) | (ctx.r6.u64 & 0xFFFFFFFFF0000000);
	// stw r8,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r8.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r6,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r6.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r29,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, r29.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,744(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82580d94
	if (ctx.cr6.eq) goto loc_82580D94;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825804b8
	ctx.lr = 0x82580D94;
	sub_825804B8(ctx, base);
loc_82580D94:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82582E18) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82582E20;
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
	ctx.lr = 0x82582E48;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82582e6c
	if (ctx.cr6.eq) goto loc_82582E6C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82582E68;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82582E6C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82582E74;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82582E84;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82582E90;
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

DEFINE_REX_FUNC(sub_82587488) {
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
	// lwz r10,584(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 584);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825874b0
	if (ctx.cr0.eq) goto loc_825874B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825874bc
	goto loc_825874BC;
loc_825874B0:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_825874BC:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x825874e0
	if (ctx.cr0.eq) goto loc_825874E0;
	// lwz r9,44(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// stw r9,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
loc_825874E0:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,-4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r9,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82587500
	if (ctx.cr0.eq) goto loc_82587500;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8258750c
	goto loc_8258750C;
loc_82587500:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_8258750C:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x82587554
	if (!ctx.cr0.eq) goto loc_82587554;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
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
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// bl 0x824e4308
	ctx.lr = 0x82587554;
	sub_824E4308(ctx, base);
loc_82587554:
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

DEFINE_REX_FUNC(sub_8259D2F0) {
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
	// beq cr6,0x8259d324
	if (ctx.cr6.eq) goto loc_8259D324;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259D324;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8259D324:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8259d344
	if (ctx.cr6.eq) goto loc_8259D344;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259D344;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8259D344:
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

DEFINE_REX_FUNC(sub_8259F5C8) {
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
	// bl 0x826a1ca0
	ctx.lr = 0x8259F5D0;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x826a2c84
	ctx.lr = 0x8259F5D8;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8259f8a4
	if (ctx.cr6.eq) goto loc_8259F8A4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8259f8a4
	if (ctx.cr6.eq) goto loc_8259F8A4;
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// clrldi r10,r4,32
	ctx.r10.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f21,f0
	f21.f64 = double(float(ctx.f0.f64));
	// addic r10,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// lfs f24,3720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	f24.f64 = double(temp.f32);
	// li r3,16
	ctx.r3.s64 = 16;
	// subfe r10,r10,r5
	temp.u8 = (~ctx.r10.u32 + ctx.r5.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f26,3704(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	f26.f64 = double(temp.f32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// frsp f22,f13
	f22.f64 = double(float(ctx.f13.f64));
	// fdivs f27,f22,f21
	f27.f64 = double(float(f22.f64 / f21.f64));
	// fdivs f19,f24,f27
	f19.f64 = double(float(f24.f64 / f27.f64));
	// beq cr6,0x8259f6b4
	if (ctx.cr6.eq) goto loc_8259F6B4;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_8259F668:
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f13,f13,f24
	ctx.f13.f64 = double(float(ctx.f13.f64 - f24.f64));
	// fmuls f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 * f27.f64));
	// fadds f12,f13,f27
	ctx.f12.f64 = double(float(ctx.f13.f64 + f27.f64));
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 + f26.f64));
	// fctidz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// bdnz 0x8259f668
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8259F668;
loc_8259F6B4:
	// bl 0x822f6280
	ctx.lr = 0x8259F6B8;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8259f8a4
	if (ctx.cr0.eq) goto loc_8259F8A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,4
	r31.s64 = 4;
	// li r26,0
	r26.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// lfs f25,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f25.f64 = double(temp.f32);
	// fmr f28,f25
	f28.f64 = f25.f64;
	// beq cr6,0x8259f898
	if (ctx.cr6.eq) goto loc_8259F898;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f20,17272(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17272);
	f20.f64 = double(temp.f32);
loc_8259F6E8:
	// clrldi r11,r30,32
	ctx.r11.u64 = r30.u64 & 0xFFFFFFFF;
	// mr r25,r31
	r25.u64 = r31.u64;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// add r24,r31,r28
	r24.u64 = r31.u64 + r28.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// li r29,0
	r29.s64 = 0;
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f23,f0
	f23.f64 = double(float(ctx.f0.f64));
loc_8259F70C:
	// clrldi r11,r29,32
	ctx.r11.u64 = r29.u64 & 0xFFFFFFFF;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 + f23.f64));
	// fsubs f29,f0,f24
	f29.f64 = double(float(ctx.f0.f64 - f24.f64));
	// fmuls f30,f29,f27
	f30.f64 = double(float(f29.f64 * f27.f64));
	// fadds f31,f30,f27
	f31.f64 = double(float(f30.f64 + f27.f64));
	// bne cr6,0x8259f750
	if (!ctx.cr6.eq) goto loc_8259F750;
	// fcmpu cr6,f30,f25
	ctx.cr6.compare(f30.f64, f25.f64);
	// bge cr6,0x8259f744
	if (!ctx.cr6.lt) goto loc_8259F744;
	// fmr f30,f25
	f30.f64 = f25.f64;
loc_8259F744:
	// fcmpu cr6,f31,f22
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f22.f64);
	// ble cr6,0x8259f750
	if (!ctx.cr6.gt) goto loc_8259F750;
	// fmr f31,f22
	f31.f64 = f22.f64;
loc_8259F750:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x826a2f00
	ctx.lr = 0x8259F758;
	sub_826A2F00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8259f85c
	if (!ctx.cr6.lt) goto loc_8259F85C;
	// subf r8,r23,r10
	ctx.r8.u64 = ctx.r10.u64 - r23.u64;
loc_8259F788:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fadds f13,f0,f26
	ctx.f13.f64 = double(float(ctx.f0.f64 + f26.f64));
	// bge cr6,0x8259f7a0
	if (!ctx.cr6.lt) goto loc_8259F7A0;
	// add r9,r10,r23
	ctx.r9.u64 = ctx.r10.u64 + r23.u64;
	// b 0x8259f7b0
	goto loc_8259F7B0;
loc_8259F7A0:
	// cmpw cr6,r10,r23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r23.s32, ctx.xer);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// bge cr6,0x8259f7b0
	if (!ctx.cr6.lt) goto loc_8259F7B0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8259F7B0:
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, ctx.xer);
	// beq cr6,0x8259f7d8
	if (ctx.cr6.eq) goto loc_8259F7D8;
	// fcmpu cr6,f28,f20
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f28.f64, f20.f64);
	// ble cr6,0x8259f7d0
	if (!ctx.cr6.gt) goto loc_8259F7D0;
	// add r11,r31,r28
	ctx.r11.u64 = r31.u64 + r28.u64;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// stfs f28,4(r11)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r26.u32);
loc_8259F7D0:
	// fmr f28,f25
	ctx.fpscr.disableFlushMode();
	f28.f64 = f25.f64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
loc_8259F7D8:
	// fcmpu cr6,f12,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, f30.f64);
	// bge cr6,0x8259f7e4
	if (!ctx.cr6.lt) goto loc_8259F7E4;
	// fmr f12,f30
	ctx.f12.f64 = f30.f64;
loc_8259F7E4:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// ble cr6,0x8259f7f0
	if (!ctx.cr6.gt) goto loc_8259F7F0;
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
loc_8259F7F0:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// bne cr6,0x8259f81c
	if (!ctx.cr6.eq) goto loc_8259F81C;
	// fcmpu cr6,f29,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, f25.f64);
	// bge cr6,0x8259f808
	if (!ctx.cr6.lt) goto loc_8259F808;
	// fmr f0,f26
	ctx.f0.f64 = f26.f64;
	// b 0x8259f824
	goto loc_8259F824;
loc_8259F808:
	// fadds f0,f29,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f29.f64 + f26.f64));
	// fcmpu cr6,f0,f21
	ctx.cr6.compare(ctx.f0.f64, f21.f64);
	// blt cr6,0x8259f81c
	if (ctx.cr6.lt) goto loc_8259F81C;
	// fmr f0,f25
	ctx.f0.f64 = f25.f64;
	// b 0x8259f824
	goto loc_8259F824;
loc_8259F81C:
	// fadds f0,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fmsubs f0,f0,f19,f29
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f19.f64, -f29.f64)));
loc_8259F824:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8259f830
	if (ctx.cr6.eq) goto loc_8259F830;
	// fsubs f0,f26,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f26.f64 - ctx.f0.f64));
loc_8259F830:
	// fsubs f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// fmadds f28,f13,f0,f28
	f28.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, f28.f64)));
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x8259f788
	if (ctx.cr6.lt) goto loc_8259F788;
loc_8259F85C:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(r29.u32, 2, ctx.xer);
	// blt cr6,0x8259f70c
	if (ctx.cr6.lt) goto loc_8259F70C;
	// fcmpu cr6,f28,f20
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f28.f64, f20.f64);
	// ble cr6,0x8259f880
	if (!ctx.cr6.gt) goto loc_8259F880;
	// add r11,r31,r28
	ctx.r11.u64 = r31.u64 + r28.u64;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// stfs f28,4(r11)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r26.u32);
loc_8259F880:
	// subf r11,r25,r31
	ctx.r11.u64 = r31.u64 - r25.u64;
	// fmr f28,f25
	ctx.fpscr.disableFlushMode();
	f28.f64 = f25.f64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// blt cr6,0x8259f6e8
	if (ctx.cr6.lt) goto loc_8259F6E8;
loc_8259F898:
	// stw r31,0(r28)
	REX_STORE_U32(r28.u32 + 0, r31.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x8259f8a8
	goto loc_8259F8A8;
loc_8259F8A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8259F8A8:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x826a2cd0
	ctx.lr = 0x8259F8B4;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_825B3658) {
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
	ctx.lr = 0x825B3660;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// lbz r11,1380(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1380);
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// mr r20,r10
	r20.u64 = ctx.r10.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825b3698
	if (ctx.cr0.eq) goto loc_825B3698;
	// lwz r25,4(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x825b369c
	goto loc_825B369C;
loc_825B3698:
	// lwz r25,8(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
loc_825B369C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r31,r30,3,0,28
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r29,r11,-4824
	r29.s64 = ctx.r11.s64 + -4824;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r27,r11,22852
	r27.s64 = ctx.r11.s64 + 22852;
	// addi r26,r10,-4368
	r26.s64 = ctx.r10.s64 + -4368;
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + r29.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x825b36e0
	if (ctx.cr6.eq) goto loc_825B36E0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-4428
	ctx.r5.s64 = ctx.r11.s64 + -4428;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,494
	ctx.r7.s64 = 494;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B36E0;
	sub_824EA978(ctx, base);
loc_825B36E0:
	// addi r11,r29,4
	ctx.r11.s64 = r29.s64 + 4;
	// cmpwi cr6,r30,33
	ctx.cr6.compare<int32_t>(r30.s32, 33, ctx.xer);
	// lwzx r31,r31,r11
	r31.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// bne cr6,0x825b3734
	if (!ctx.cr6.eq) goto loc_825B3734;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_825B36F8:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 21, ctx.xer);
	// beq cr6,0x825b3720
	if (ctx.cr6.eq) goto loc_825B3720;
	// cmpwi cr6,r9,22
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 22, ctx.xer);
	// beq cr6,0x825b3720
	if (ctx.cr6.eq) goto loc_825B3720;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x825b36f8
	if (ctx.cr6.lt) goto loc_825B36F8;
	// b 0x825b3734
	goto loc_825B3734;
loc_825B3720:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,4
	ctx.r10.s64 = r29.s64 + 4;
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r31,r11,r10
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_825B3734:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bgt cr6,0x825b3758
	if (ctx.cr6.gt) goto loc_825B3758;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-4440
	ctx.r5.s64 = ctx.r11.s64 + -4440;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,507
	ctx.r7.s64 = 507;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B3758;
	sub_824EA978(ctx, base);
loc_825B3758:
	// cntlzw r11,r22
	ctx.r11.u64 = r22.u32 == 0 ? 32 : __builtin_clz(r22.u32);
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// lis r7,257
	ctx.r7.s64 = 16842752;
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// ori r7,r7,257
	ctx.r7.u64 = ctx.r7.u64 | 257;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824f10b8
	ctx.lr = 0x825B378C;
	sub_824F10B8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_825B7C10) {
	REX_FUNC_PROLOGUE();
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -24, f30.u64);
	// stfd f31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lfd f30,3728(r11)
	f30.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, f30.f64);
	// bne cr6,0x825b7c40
	if (!ctx.cr6.eq) goto loc_825B7C40;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// b 0x825b7cb4
	goto loc_825B7CB4;
loc_825B7C40:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x826a1930
	ctx.lr = 0x825B7C48;
	sub_826A1930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x825b7cac
	if (!ctx.cr0.gt) goto loc_825B7CAC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x825b7c9c
	if (!ctx.cr6.gt) goto loc_825B7C9C;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x825b7c94
	if (ctx.cr6.eq) goto loc_825B7C94;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// beq cr6,0x825b7c8c
	if (ctx.cr6.eq) goto loc_825B7C8C;
	// cmpwi cr6,r3,64
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 64, ctx.xer);
	// beq cr6,0x825b7c84
	if (ctx.cr6.eq) goto loc_825B7C84;
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// bne cr6,0x825b7cac
	if (!ctx.cr6.eq) goto loc_825B7CAC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f1,-3744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// b 0x825b7cb4
	goto loc_825B7CB4;
loc_825B7C84:
	// lis r11,32640
	ctx.r11.s64 = 2139095040;
	// b 0x825b7ca0
	goto loc_825B7CA0;
loc_825B7C8C:
	// lis r11,-128
	ctx.r11.s64 = -8388608;
	// b 0x825b7ca0
	goto loc_825B7CA0;
loc_825B7C94:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// b 0x825b7ca0
	goto loc_825B7CA0;
loc_825B7C9C:
	// lis r11,-64
	ctx.r11.s64 = -4194304;
loc_825B7CA0:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// b 0x825b7cb4
	goto loc_825B7CB4;
loc_825B7CAC:
	// fdiv f1,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64 / f31.f64;
	// bl 0x8254f960
	ctx.lr = 0x825B7CB4;
	sub_8254F960(ctx, base);
loc_825B7CB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825BA910) {
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
	ctx.lr = 0x825BA918;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_825BA928:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825ba9bc
	if (ctx.cr6.eq) goto loc_825BA9BC;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r9,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825ba94c
	if (!ctx.cr0.eq) goto loc_825BA94C;
	// rlwinm. r11,r9,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x825ba950
	if (ctx.cr0.eq) goto loc_825BA950;
loc_825BA94C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825BA950:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ba9a8
	if (ctx.cr0.eq) goto loc_825BA9A8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825ba96c
	if (!ctx.cr6.eq) goto loc_825BA96C;
	// rlwinm. r11,r9,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x825ba970
	if (ctx.cr0.eq) goto loc_825BA970;
loc_825BA96C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825BA970:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ba984
	if (ctx.cr0.eq) goto loc_825BA984;
	// rlwinm. r11,r9,0,7,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x825ba988
	if (!ctx.cr0.eq) goto loc_825BA988;
loc_825BA984:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825BA988:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ba9a8
	if (ctx.cr0.eq) goto loc_825BA9A8;
	// rlwinm r11,r9,19,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0xFFF;
	// lwz r3,28(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 28);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x825c6a50
	ctx.lr = 0x825BA9A8;
	sub_825C6A50(ctx, base);
loc_825BA9A8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x825ba928
	if (!ctx.cr6.eq) goto loc_825BA928;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// b 0x825ba928
	goto loc_825BA928;
loc_825BA9BC:
	// addi r28,r27,4
	r28.s64 = r27.s64 + 4;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_825BA9C4:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825baa64
	if (ctx.cr6.eq) goto loc_825BAA64;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825baa50
	if (ctx.cr6.eq) goto loc_825BAA50;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r9,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825ba9f4
	if (!ctx.cr0.eq) goto loc_825BA9F4;
	// rlwinm. r11,r9,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x825ba9f8
	if (ctx.cr0.eq) goto loc_825BA9F8;
loc_825BA9F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825BA9F8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825baa50
	if (ctx.cr0.eq) goto loc_825BAA50;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825baa14
	if (!ctx.cr6.eq) goto loc_825BAA14;
	// rlwinm. r11,r9,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x825baa18
	if (ctx.cr0.eq) goto loc_825BAA18;
loc_825BAA14:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825BAA18:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825baa2c
	if (ctx.cr0.eq) goto loc_825BAA2C;
	// rlwinm. r11,r9,0,7,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x825baa30
	if (!ctx.cr0.eq) goto loc_825BAA30;
loc_825BAA2C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825BAA30:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825baa50
	if (ctx.cr0.eq) goto loc_825BAA50;
	// rlwinm r11,r9,19,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0xFFF;
	// lwz r3,28(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 28);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x825c6a50
	ctx.lr = 0x825BAA50;
	sub_825C6A50(ctx, base);
loc_825BAA50:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x825ba9c4
	if (!ctx.cr6.eq) goto loc_825BA9C4;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// b 0x825ba9c4
	goto loc_825BA9C4;
loc_825BAA64:
	// lwz r30,0(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 0);
loc_825BAA68:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825baaec
	if (ctx.cr6.eq) goto loc_825BAAEC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825baa88
	if (!ctx.cr0.eq) goto loc_825BAA88;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x825baa8c
	if (ctx.cr0.eq) goto loc_825BAA8C;
loc_825BAA88:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825BAA8C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825baae4
	if (ctx.cr0.eq) goto loc_825BAAE4;
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
loc_825BAA98:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825baae4
	if (ctx.cr6.eq) goto loc_825BAAE4;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825baadc
	if (ctx.cr6.eq) goto loc_825BAADC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825baac4
	if (!ctx.cr0.eq) goto loc_825BAAC4;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x825baac8
	if (ctx.cr0.eq) goto loc_825BAAC8;
loc_825BAAC4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825BAAC8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825baadc
	if (ctx.cr0.eq) goto loc_825BAADC;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x8250adf0
	ctx.lr = 0x825BAADC;
	sub_8250ADF0(ctx, base);
loc_825BAADC:
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x825baa98
	goto loc_825BAA98;
loc_825BAAE4:
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x825baa68
	goto loc_825BAA68;
loc_825BAAEC:
	// lwz r30,0(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825bab94
	if (ctx.cr6.eq) goto loc_825BAB94;
	// lwz r29,16(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825bab80
	if (ctx.cr6.eq) goto loc_825BAB80;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825bab1c
	if (!ctx.cr0.eq) goto loc_825BAB1C;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x825bab20
	if (ctx.cr0.eq) goto loc_825BAB20;
loc_825BAB1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825BAB20:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825bab80
	if (ctx.cr0.eq) goto loc_825BAB80;
	// lwz r31,0(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 0);
loc_825BAB2C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825bab70
	if (ctx.cr6.eq) goto loc_825BAB70;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825bab4c
	if (!ctx.cr0.eq) goto loc_825BAB4C;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x825bab50
	if (ctx.cr0.eq) goto loc_825BAB50;
loc_825BAB4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825BAB50:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825bab68
	if (ctx.cr0.eq) goto loc_825BAB68;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250adf0
	ctx.lr = 0x825BAB68;
	sub_8250ADF0(ctx, base);
loc_825BAB68:
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x825bab2c
	goto loc_825BAB2C;
loc_825BAB70:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250b470
	ctx.lr = 0x825BAB80;
	sub_8250B470(ctx, base);
loc_825BAB80:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x825baaec
	if (!ctx.cr6.eq) goto loc_825BAAEC;
	// addi r28,r30,8
	r28.s64 = r30.s64 + 8;
	// b 0x825baaec
	goto loc_825BAAEC;
loc_825BAB94:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_825CDCA0) {
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
	// bge cr6,0x825cdd80
	if (!ctx.cr6.lt) goto loc_825CDD80;
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
	// lfs f0,20232(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20232);
	ctx.f0.f64 = double(temp.f32);
loc_825CDCFC:
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r10,r10,22,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1F;
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
	// rlwinm r10,r10,27,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1F;
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
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
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
	// rlwinm r10,r10,17,15,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1FFFF;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x825cdcfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825CDCFC;
loc_825CDD80:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cdd9c
	if (ctx.cr6.eq) goto loc_825CDD9C;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c73b8
	ctx.lr = 0x825CDD9C;
	sub_825C73B8(ctx, base);
loc_825CDD9C:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cddb8
	if (ctx.cr6.eq) goto loc_825CDDB8;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c7788
	ctx.lr = 0x825CDDB8;
	sub_825C7788(ctx, base);
loc_825CDDB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825D0EF0) {
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
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ori r10,r10,43866
	ctx.r10.u64 = ctx.r10.u64 | 43866;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x825d1458
	if (ctx.cr6.gt) goto loc_825D1458;
	// beq cr6,0x825d1428
	if (ctx.cr6.eq) goto loc_825D1428;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,84
	ctx.r10.u64 = ctx.r10.u64 | 84;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x825d11ac
	if (ctx.cr6.gt) goto loc_825D11AC;
	// beq cr6,0x825d12ac
	if (ctx.cr6.eq) goto loc_825D12AC;
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// ori r10,r10,323
	ctx.r10.u64 = ctx.r10.u64 | 323;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x825d1078
	if (ctx.cr6.gt) goto loc_825D1078;
	// beq cr6,0x825d0f94
	if (ctx.cr6.eq) goto loc_825D0F94;
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// ori r10,r10,75
	ctx.r10.u64 = ctx.r10.u64 | 75;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x825d1024
	if (ctx.cr6.gt) goto loc_825D1024;
	// beq cr6,0x825d1138
	if (ctx.cr6.eq) goto loc_825D1138;
	// addis r11,r11,-1168
	ctx.r11.s64 = ctx.r11.s64 + -76546048;
	// addic. r11,r11,-2
	ctx.xer.ca = ctx.r11.u32 > 1;
	ctx.r11.s64 = ctx.r11.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d0ff4
	if (ctx.cr0.eq) goto loc_825D0FF4;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x825d0ff4
	if (ctx.cr6.eq) goto loc_825D0FF4;
	// addis r11,r11,-880
	ctx.r11.s64 = ctx.r11.s64 + -57671680;
	// addic. r11,r11,-72
	ctx.xer.ca = ctx.r11.u32 > 71;
	ctx.r11.s64 = ctx.r11.s64 + -72;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d0fc4
	if (ctx.cr0.eq) goto loc_825D0FC4;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x825d0fc4
	if (ctx.cr6.eq) goto loc_825D0FC4;
	// lis r10,4135
	ctx.r10.s64 = 270991360;
	// ori r10,r10,65529
	ctx.r10.u64 = ctx.r10.u64 | 65529;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825d19c0
	if (!ctx.cr6.eq) goto loc_825D19C0;
loc_825D0F94:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x825D0F9C;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6e00
	ctx.lr = 0x825D0FB8;
	sub_825C6E00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,648
	ctx.r11.s64 = ctx.r11.s64 + 648;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D0FC4:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x825D0FCC;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6e00
	ctx.lr = 0x825D0FE8;
	sub_825C6E00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,824
	ctx.r11.s64 = ctx.r11.s64 + 824;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D0FF4:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x825D0FFC;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6e00
	ctx.lr = 0x825D1018;
	sub_825C6E00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,680
	ctx.r11.s64 = ctx.r11.s64 + 680;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D1024:
	// addis r11,r11,-6184
	ctx.r11.s64 = ctx.r11.s64 + -405274624;
	// addic. r11,r11,-76
	ctx.xer.ca = ctx.r11.u32 > 75;
	ctx.r11.s64 = ctx.r11.s64 + -76;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d1110
	if (ctx.cr0.eq) goto loc_825D1110;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x825d10e0
	if (ctx.cr6.eq) goto loc_825D10E0;
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// beq cr6,0x825d10b0
	if (ctx.cr6.eq) goto loc_825D10B0;
	// cmplwi cr6,r11,106
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 106, ctx.xer);
	// bne cr6,0x825d19c0
	if (!ctx.cr6.eq) goto loc_825D19C0;
loc_825D1048:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x825D1050;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6e00
	ctx.lr = 0x825D106C;
	sub_825C6E00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,776
	ctx.r11.s64 = ctx.r11.s64 + 776;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D1078:
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// ori r10,r10,438
	ctx.r10.u64 = ctx.r10.u64 | 438;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x825d1160
	if (ctx.cr6.gt) goto loc_825D1160;
	// beq cr6,0x825d1048
	if (ctx.cr6.eq) goto loc_825D1048;
	// addis r11,r11,-6184
	ctx.r11.s64 = ctx.r11.s64 + -405274624;
	// addic. r11,r11,-331
	ctx.xer.ca = ctx.r11.u32 > 330;
	ctx.r11.s64 = ctx.r11.s64 + -331;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d1138
	if (ctx.cr0.eq) goto loc_825D1138;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x825d1110
	if (ctx.cr6.eq) goto loc_825D1110;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x825d10e0
	if (ctx.cr6.eq) goto loc_825D10E0;
	// cmplwi cr6,r11,59
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 59, ctx.xer);
	// bne cr6,0x825d19c0
	if (!ctx.cr6.eq) goto loc_825D19C0;
loc_825D10B0:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x825D10B8;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6e00
	ctx.lr = 0x825D10D4;
	sub_825C6E00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,584
	ctx.r11.s64 = ctx.r11.s64 + 584;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D10E0:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x825D10E8;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6e00
	ctx.lr = 0x825D1104;
	sub_825C6E00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,664
	ctx.r11.s64 = ctx.r11.s64 + 664;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D1110:
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x822f6280
	ctx.lr = 0x825D1118;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825cf840
	ctx.lr = 0x825D112C;
	sub_825CF840(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,1080
	ctx.r11.s64 = ctx.r11.s64 + 1080;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D1138:
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x822f6280
	ctx.lr = 0x825D1140;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825cf840
	ctx.lr = 0x825D1154;
	sub_825CF840(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,1080
	ctx.r11.s64 = ctx.r11.s64 + 1080;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D1160:
	// addis r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -438304768;
	// addic. r11,r11,-75
	ctx.xer.ca = ctx.r11.u32 > 74;
	ctx.r11.s64 = ctx.r11.s64 + -75;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_825D1168:
	// beq 0x825d1284
	if (ctx.cr0.eq) goto loc_825D1284;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x825d125c
	if (ctx.cr6.eq) goto loc_825D125C;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x825d1234
	if (ctx.cr6.eq) goto loc_825D1234;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x825d19c0
	if (!ctx.cr6.eq) goto loc_825D19C0;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x822f6280
	ctx.lr = 0x825D118C;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d0228
	ctx.lr = 0x825D11A0;
	sub_825D0228(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,1064
	ctx.r11.s64 = ctx.r11.s64 + 1064;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D11AC:
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,340
	ctx.r10.u64 = ctx.r10.u64 | 340;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x825d12d4
	if (ctx.cr6.gt) goto loc_825D12D4;
	// beq cr6,0x825d12ac
	if (ctx.cr6.eq) goto loc_825D12AC;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,182
	ctx.r10.u64 = ctx.r10.u64 | 182;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x825d1228
	if (ctx.cr6.gt) goto loc_825D1228;
	// beq cr6,0x825d1374
	if (ctx.cr6.eq) goto loc_825D1374;
	// addis r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -438304768;
	// addic. r11,r11,-90
	ctx.xer.ca = ctx.r11.u32 > 89;
	ctx.r11.s64 = ctx.r11.s64 + -90;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_825D11DC:
	// beq 0x825d1344
	if (ctx.cr0.eq) goto loc_825D1344;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x825d131c
	if (ctx.cr6.eq) goto loc_825D131C;
	// cmplwi cr6,r11,33
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 33, ctx.xer);
	// beq cr6,0x825d12f4
	if (ctx.cr6.eq) goto loc_825D12F4;
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// bne cr6,0x825d19c0
	if (!ctx.cr6.eq) goto loc_825D19C0;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x825D1200;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6e00
	ctx.lr = 0x825D121C;
	sub_825C6E00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,728
	ctx.r11.s64 = ctx.r11.s64 + 728;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D1228:
	// addis r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -438304768;
	// addic. r11,r11,-331
	ctx.xer.ca = ctx.r11.u32 > 330;
	ctx.r11.s64 = ctx.r11.s64 + -331;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x825d1168
	goto loc_825D1168;
loc_825D1234:
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x822f6280
	ctx.lr = 0x825D123C;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d0228
	ctx.lr = 0x825D1250;
	sub_825D0228(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,1064
	ctx.r11.s64 = ctx.r11.s64 + 1064;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D125C:
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x822f6280
	ctx.lr = 0x825D1264;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825cf840
	ctx.lr = 0x825D1278;
	sub_825CF840(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,1080
	ctx.r11.s64 = ctx.r11.s64 + 1080;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D1284:
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x822f6280
	ctx.lr = 0x825D128C;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825cf840
	ctx.lr = 0x825D12A0;
	sub_825CF840(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,1080
	ctx.r11.s64 = ctx.r11.s64 + 1080;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D12AC:
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x822f6280
	ctx.lr = 0x825D12B4;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d0228
	ctx.lr = 0x825D12C8;
	sub_825D0228(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,1064
	ctx.r11.s64 = ctx.r11.s64 + 1064;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D12D4:
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,438
	ctx.r10.u64 = ctx.r10.u64 | 438;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x825d13a4
	if (ctx.cr6.gt) goto loc_825D13A4;
	// beq cr6,0x825d1374
	if (ctx.cr6.eq) goto loc_825D1374;
	// addis r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -438304768;
	// addic. r11,r11,-346
	ctx.xer.ca = ctx.r11.u32 > 345;
	ctx.r11.s64 = ctx.r11.s64 + -346;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x825d11dc
	goto loc_825D11DC;
loc_825D12F4:
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x822f6280
	ctx.lr = 0x825D12FC;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d0228
	ctx.lr = 0x825D1310;
	sub_825D0228(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,1064
	ctx.r11.s64 = ctx.r11.s64 + 1064;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D131C:
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x822f6280
	ctx.lr = 0x825D1324;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d0228
	ctx.lr = 0x825D1338;
	sub_825D0228(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,1064
	ctx.r11.s64 = ctx.r11.s64 + 1064;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D1344:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x825D134C;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6e00
	ctx.lr = 0x825D1368;
	sub_825C6E00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,792
	ctx.r11.s64 = ctx.r11.s64 + 792;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D1374:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x825D137C;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6e00
	ctx.lr = 0x825D1398;
	sub_825C6E00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,712
	ctx.r11.s64 = ctx.r11.s64 + 712;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D13A4:
	// addis r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -438304768;
	// addic. r11,r11,-10934
	ctx.xer.ca = ctx.r11.u32 > 10933;
	ctx.r11.s64 = ctx.r11.s64 + -10934;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d13f8
	if (ctx.cr0.eq) goto loc_825D13F8;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x825d13f8
	if (ctx.cr6.eq) goto loc_825D13F8;
	// cmplwi cr6,r11,32676
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32676, ctx.xer);
	// beq cr6,0x825d1428
	if (ctx.cr6.eq) goto loc_825D1428;
	// cmplwi cr6,r11,32720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32720, ctx.xer);
	// bne cr6,0x825d19c0
	if (!ctx.cr6.eq) goto loc_825D19C0;
loc_825D13C8:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x825D13D0;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6e00
	ctx.lr = 0x825D13EC;
	sub_825C6E00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,888
	ctx.r11.s64 = ctx.r11.s64 + 888;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D13F8:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x825D1400;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6e00
	ctx.lr = 0x825D141C;
	sub_825C6E00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,920
	ctx.r11.s64 = ctx.r11.s64 + 920;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D1428:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x825D1430;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6e00
	ctx.lr = 0x825D144C;
	sub_825C6E00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,936
	ctx.r11.s64 = ctx.r11.s64 + 936;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D1458:
	// lis r10,10784
	ctx.r10.s64 = 706740224;
	// ori r10,r10,134
	ctx.r10.u64 = ctx.r10.u64 | 134;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x825d16fc
	if (ctx.cr6.gt) goto loc_825D16FC;
	// beq cr6,0x825d1778
	if (ctx.cr6.eq) goto loc_825D1778;
	// lis r10,10240
	ctx.r10.s64 = 671088640;
	// ori r10,r10,258
	ctx.r10.u64 = ctx.r10.u64 | 258;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x825d15d8
	if (ctx.cr6.gt) goto loc_825D15D8;
	// beq cr6,0x825d15a8
	if (ctx.cr6.eq) goto loc_825D15A8;
	// lis r10,6690
	ctx.r10.s64 = 438435840;
	// ori r10,r10,43686
	ctx.r10.u64 = ctx.r10.u64 | 43686;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x825d1520
	if (ctx.cr6.gt) goto loc_825D1520;
	// beq cr6,0x825d1578
	if (ctx.cr6.eq) goto loc_825D1578;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,43910
	ctx.r10.u64 = ctx.r10.u64 | 43910;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825d13c8
	if (ctx.cr6.eq) goto loc_825D13C8;
	// addis r11,r11,-6690
	ctx.r11.s64 = ctx.r11.s64 + -438435840;
	// addic. r11,r11,-88
	ctx.xer.ca = ctx.r11.u32 > 87;
	ctx.r11.s64 = ctx.r11.s64 + -88;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d14f0
	if (ctx.cr0.eq) goto loc_825D14F0;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x825d14f0
	if (ctx.cr6.eq) goto loc_825D14F0;
	// cmplwi cr6,r11,43528
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43528, ctx.xer);
	// bne cr6,0x825d19c0
	if (!ctx.cr6.eq) goto loc_825D19C0;
loc_825D14C0:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x825D14C8;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6e00
	ctx.lr = 0x825D14E4;
	sub_825C6E00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,1000
	ctx.r11.s64 = ctx.r11.s64 + 1000;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D14F0:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x825D14F8;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6e00
	ctx.lr = 0x825D1514;
	sub_825C6E00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,952
	ctx.r11.s64 = ctx.r11.s64 + 952;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D1520:
	// addis r11,r11,-6691
	ctx.r11.s64 = ctx.r11.s64 + -438501376;
	// addic. r11,r11,21664
	ctx.xer.ca = ctx.r11.u32 > 4294945631;
	ctx.r11.s64 = ctx.r11.s64 + 21664;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d14c0
	if (ctx.cr0.eq) goto loc_825D14C0;
	// cmplwi cr6,r11,70
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 70, ctx.xer);
	// beq cr6,0x825d1578
	if (ctx.cr6.eq) goto loc_825D1578;
	// addis r11,r11,-3549
	ctx.r11.s64 = ctx.r11.s64 + -232587264;
	// addic. r11,r11,-21666
	ctx.xer.ca = ctx.r11.u32 > 21665;
	ctx.r11.s64 = ctx.r11.s64 + -21666;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d15a8
	if (ctx.cr0.eq) goto loc_825D15A8;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// bne cr6,0x825d19c0
	if (!ctx.cr6.eq) goto loc_825D19C0;
loc_825D1548:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x825D1550;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6e00
	ctx.lr = 0x825D156C;
	sub_825C6E00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,952
	ctx.r11.s64 = ctx.r11.s64 + 952;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D1578:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x825D1580;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6e00
	ctx.lr = 0x825D159C;
	sub_825C6E00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,1048
	ctx.r11.s64 = ctx.r11.s64 + 1048;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D15A8:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x825D15B0;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6e00
	ctx.lr = 0x825D15CC;
	sub_825C6E00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,808
	ctx.r11.s64 = ctx.r11.s64 + 808;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D15D8:
	// lis r10,10280
	ctx.r10.s64 = 673710080;
	// ori r10,r10,134
	ctx.r10.u64 = ctx.r10.u64 | 134;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x825d1648
	if (ctx.cr6.gt) goto loc_825D1648;
	// beq cr6,0x825d166c
	if (ctx.cr6.eq) goto loc_825D166C;
	// lis r10,10240
	ctx.r10.s64 = 671088640;
	// ori r10,r10,344
	ctx.r10.u64 = ctx.r10.u64 | 344;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825d1548
	if (ctx.cr6.eq) goto loc_825D1548;
	// addis r11,r11,-10280
	ctx.r11.s64 = ctx.r11.s64 + -673710080;
	// addic. r11,r11,-67
	ctx.xer.ca = ctx.r11.u32 > 66;
	ctx.r11.s64 = ctx.r11.s64 + -67;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d16cc
	if (ctx.cr0.eq) goto loc_825D16CC;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x825d169c
	if (ctx.cr6.eq) goto loc_825D169C;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x825d19c0
	if (!ctx.cr6.eq) goto loc_825D19C0;
loc_825D1618:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x825D1620;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6e00
	ctx.lr = 0x825D163C;
	sub_825C6E00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,696
	ctx.r11.s64 = ctx.r11.s64 + 696;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D1648:
	// addis r11,r11,-10280
	ctx.r11.s64 = ctx.r11.s64 + -673710080;
	// addic. r11,r11,-323
	ctx.xer.ca = ctx.r11.u32 > 322;
	ctx.r11.s64 = ctx.r11.s64 + -323;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d16cc
	if (ctx.cr0.eq) goto loc_825D16CC;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x825d169c
	if (ctx.cr6.eq) goto loc_825D169C;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x825d1618
	if (ctx.cr6.eq) goto loc_825D1618;
	// cmplwi cr6,r11,67
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 67, ctx.xer);
	// bne cr6,0x825d19c0
	if (!ctx.cr6.eq) goto loc_825D19C0;
loc_825D166C:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x825D1674;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6e00
	ctx.lr = 0x825D1690;
	sub_825C6E00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,600
	ctx.r11.s64 = ctx.r11.s64 + 600;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D169C:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x825D16A4;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6e00
	ctx.lr = 0x825D16C0;
	sub_825C6E00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,616
	ctx.r11.s64 = ctx.r11.s64 + 616;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D16CC:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x825D16D4;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6e00
	ctx.lr = 0x825D16F0;
	sub_825C6E00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,632
	ctx.r11.s64 = ctx.r11.s64 + 632;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D16FC:
	// lis r10,11552
	ctx.r10.s64 = 757071872;
	// ori r10,r10,43850
	ctx.r10.u64 = ctx.r10.u64 | 43850;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x825d188c
	if (ctx.cr6.gt) goto loc_825D188C;
	// beq cr6,0x825d185c
	if (ctx.cr6.eq) goto loc_825D185C;
	// lis r10,10784
	ctx.r10.s64 = 706740224;
	// ori r10,r10,2950
	ctx.r10.u64 = ctx.r10.u64 | 2950;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x825d17d8
	if (ctx.cr6.gt) goto loc_825D17D8;
	// beq cr6,0x825d17a8
	if (ctx.cr6.eq) goto loc_825D17A8;
	// addis r11,r11,-10784
	ctx.r11.s64 = ctx.r11.s64 + -706740224;
	// addic. r11,r11,-390
	ctx.xer.ca = ctx.r11.u32 > 389;
	ctx.r11.s64 = ctx.r11.s64 + -390;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d1778
	if (ctx.cr0.eq) goto loc_825D1778;
	// cmplwi cr6,r11,2239
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2239, ctx.xer);
	// beq cr6,0x825d1748
	if (ctx.cr6.eq) goto loc_825D1748;
	// cmplwi cr6,r11,2304
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2304, ctx.xer);
	// beq cr6,0x825d17a8
	if (ctx.cr6.eq) goto loc_825D17A8;
	// cmplwi cr6,r11,2495
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2495, ctx.xer);
	// bne cr6,0x825d19c0
	if (!ctx.cr6.eq) goto loc_825D19C0;
loc_825D1748:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x825D1750;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6e00
	ctx.lr = 0x825D176C;
	sub_825C6E00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,856
	ctx.r11.s64 = ctx.r11.s64 + 856;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D1778:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x825D1780;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6e00
	ctx.lr = 0x825D179C;
	sub_825C6E00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,744
	ctx.r11.s64 = ctx.r11.s64 + 744;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D17A8:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x825D17B0;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6e00
	ctx.lr = 0x825D17CC;
	sub_825C6E00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,872
	ctx.r11.s64 = ctx.r11.s64 + 872;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D17D8:
	// addis r11,r11,-11552
	ctx.r11.s64 = ctx.r11.s64 + -757071872;
	// addic. r11,r11,-153
	ctx.xer.ca = ctx.r11.u32 > 152;
	ctx.r11.s64 = ctx.r11.s64 + -153;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d182c
	if (ctx.cr0.eq) goto loc_825D182C;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x825d182c
	if (ctx.cr6.eq) goto loc_825D182C;
	// cmplwi cr6,r11,43441
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43441, ctx.xer);
	// beq cr6,0x825d185c
	if (ctx.cr6.eq) goto loc_825D185C;
	// cmplwi cr6,r11,43520
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43520, ctx.xer);
	// bne cr6,0x825d19c0
	if (!ctx.cr6.eq) goto loc_825D19C0;
loc_825D17FC:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x825D1804;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6e00
	ctx.lr = 0x825D1820;
	sub_825C6E00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,904
	ctx.r11.s64 = ctx.r11.s64 + 904;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D182C:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x825D1834;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6e00
	ctx.lr = 0x825D1850;
	sub_825C6E00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,760
	ctx.r11.s64 = ctx.r11.s64 + 760;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D185C:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x825D1864;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6e00
	ctx.lr = 0x825D1880;
	sub_825C6E00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,840
	ctx.r11.s64 = ctx.r11.s64 + 840;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D188C:
	// lis r10,11554
	ctx.r10.s64 = 757202944;
	// ori r10,r10,43941
	ctx.r10.u64 = ctx.r10.u64 | 43941;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x825d192c
	if (ctx.cr6.gt) goto loc_825D192C;
	// beq cr6,0x825d18fc
	if (ctx.cr6.eq) goto loc_825D18FC;
	// lis r10,11552
	ctx.r10.s64 = 757071872;
	// ori r10,r10,43929
	ctx.r10.u64 = ctx.r10.u64 | 43929;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825d17fc
	if (ctx.cr6.eq) goto loc_825D17FC;
	// addis r11,r11,-11555
	ctx.r11.s64 = ctx.r11.s64 + -757268480;
	// addic. r11,r11,21857
	ctx.xer.ca = ctx.r11.u32 > 4294945438;
	ctx.r11.s64 = ctx.r11.s64 + 21857;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d18cc
	if (ctx.cr0.eq) goto loc_825D18CC;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x825d18fc
	if (ctx.cr6.eq) goto loc_825D18FC;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x825d19c0
	if (!ctx.cr6.eq) goto loc_825D19C0;
loc_825D18CC:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x825D18D4;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6e00
	ctx.lr = 0x825D18F0;
	sub_825C6E00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,984
	ctx.r11.s64 = ctx.r11.s64 + 984;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D18FC:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x825D1904;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6e00
	ctx.lr = 0x825D1920;
	sub_825C6E00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,1032
	ctx.r11.s64 = ctx.r11.s64 + 1032;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D192C:
	// addis r11,r11,-11683
	ctx.r11.s64 = ctx.r11.s64 + -765657088;
	// addic. r11,r11,21922
	ctx.xer.ca = ctx.r11.u32 > 4294945373;
	ctx.r11.s64 = ctx.r11.s64 + 21922;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d1980
	if (ctx.cr0.eq) goto loc_825D1980;
	// cmplwi cr6,r11,70
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 70, ctx.xer);
	// beq cr6,0x825d1950
	if (ctx.cr6.eq) goto loc_825D1950;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x825d1980
	if (ctx.cr6.eq) goto loc_825D1980;
	// cmplwi cr6,r11,326
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 326, ctx.xer);
	// bne cr6,0x825d19c0
	if (!ctx.cr6.eq) goto loc_825D19C0;
loc_825D1950:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x825D1958;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6e00
	ctx.lr = 0x825D1974;
	sub_825C6E00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,1016
	ctx.r11.s64 = ctx.r11.s64 + 1016;
	// b 0x825d19ac
	goto loc_825D19AC;
loc_825D1980:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x825D1988;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825d19b4
	if (ctx.cr0.eq) goto loc_825D19B4;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6e00
	ctx.lr = 0x825D19A4;
	sub_825C6E00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,968
	ctx.r11.s64 = ctx.r11.s64 + 968;
loc_825D19AC:
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x825d19b8
	goto loc_825D19B8;
loc_825D19B4:
	// li r31,0
	r31.s64 = 0;
loc_825D19B8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825d19c8
	if (!ctx.cr6.eq) goto loc_825D19C8;
loc_825D19C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825d1a28
	goto loc_825D1A28;
loc_825D19C8:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825d1a04
	if (ctx.cr6.eq) goto loc_825D1A04;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c7158
	ctx.lr = 0x825D19E0;
	sub_825C7158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x825d1a04
	if (!ctx.cr0.lt) goto loc_825D1A04;
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
	ctx.lr = 0x825D1A00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825d19c0
	goto loc_825D19C0;
loc_825D1A04:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825d1a24
	if (ctx.cr6.eq) goto loc_825D1A24;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D1A24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D1A24:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825D1A28:
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

DEFINE_REX_FUNC(sub_826165D8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82616E70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82616E78;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r9,15
	ctx.r9.s64 = 15;
	// li r8,128
	ctx.r8.s64 = 128;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r9,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// sth r8,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r7,r7,48000
	ctx.r7.u64 = ctx.r7.u64 | 48000;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// bl 0x82615350
	ctx.lr = 0x82616EC0;
	sub_82615350(ctx, base);
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x823f02b8
	ctx.lr = 0x82616ECC;
	sub_823F02B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82616ee0
	if (!ctx.cr0.eq) goto loc_82616EE0;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x82616f9c
	goto loc_82616F9C;
loc_82616EE0:
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x823f02b8
	ctx.lr = 0x82616EEC;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82616f88
	if (ctx.cr0.eq) goto loc_82616F88;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r11,-14324
	ctx.r9.s64 = ctx.r11.s64 + -14324;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// subf r8,r31,r9
	ctx.r8.u64 = ctx.r9.u64 - r31.u64;
loc_82616F10:
	// lhzx r9,r8,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82616f2c
	if (ctx.cr0.eq) goto loc_82616F2C;
	// sth r9,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x82616f10
	if (!ctx.cr0.eq) goto loc_82616F10;
loc_82616F2C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82616f38
	if (!ctx.cr6.eq) goto loc_82616F38;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_82616F38:
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// sth r7,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// li r10,44
	ctx.r10.s64 = 44;
	// addi r9,r9,-14368
	ctx.r9.s64 = ctx.r9.s64 + -14368;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r8,r3,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r3.u64;
loc_82616F50:
	// lhzx r9,r8,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82616f6c
	if (ctx.cr0.eq) goto loc_82616F6C;
	// sth r9,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x82616f50
	if (!ctx.cr0.eq) goto loc_82616F50;
loc_82616F6C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82616f78
	if (!ctx.cr6.eq) goto loc_82616F78;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_82616F78:
	// sth r7,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// stw r31,8(r30)
	REX_STORE_U32(r30.u32 + 8, r31.u32);
	// stw r3,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// b 0x82616f9c
	goto loc_82616F9C;
loc_82616F88:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// bl 0x823f0350
	ctx.lr = 0x82616F9C;
	sub_823F0350(ctx, base);
loc_82616F9C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82622BC8) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c9c
	ctx.lr = 0x82622BD0;
	// stfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, f29.u64);
	// stfd f30,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, f30.u64);
	// stfd f31,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82622f48
	if (ctx.cr6.eq) goto loc_82622F48;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82622f48
	if (ctx.cr6.eq) goto loc_82622F48;
	// lwz r11,372(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 372);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82622c6c
	if (ctx.cr6.eq) goto loc_82622C6C;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82622c58
	if (!ctx.cr6.gt) goto loc_82622C58;
	// mr r30,r23
	r30.u64 = r23.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
loc_82622C2C:
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82622c4c
	if (ctx.cr6.eq) goto loc_82622C4C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82634e78
	ctx.lr = 0x82622C44;
	sub_82634E78(ctx, base);
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// stwx r23,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r23.u32);
loc_82622C4C:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82622c2c
	if (!ctx.cr0.eq) goto loc_82622C2C;
loc_82622C58:
	// lwz r3,372(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 372);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82622c6c
	if (ctx.cr6.eq) goto loc_82622C6C;
	// bl 0x82634e78
	ctx.lr = 0x82622C68;
	sub_82634E78(ctx, base);
	// stw r23,372(r31)
	REX_STORE_U32(r31.u32 + 372, r23.u32);
loc_82622C6C:
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 376);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82622cc8
	if (ctx.cr6.eq) goto loc_82622CC8;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x82622cb4
	if (!ctx.cr6.gt) goto loc_82622CB4;
	// mr r30,r23
	r30.u64 = r23.u64;
	// mr r29,r27
	r29.u64 = r27.u64;
loc_82622C88:
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 376);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82622ca8
	if (ctx.cr6.eq) goto loc_82622CA8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82634e78
	ctx.lr = 0x82622CA0;
	sub_82634E78(ctx, base);
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 376);
	// stwx r23,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r23.u32);
loc_82622CA8:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82622c88
	if (!ctx.cr0.eq) goto loc_82622C88;
loc_82622CB4:
	// lwz r3,376(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 376);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82622cc8
	if (ctx.cr6.eq) goto loc_82622CC8;
	// bl 0x82634e78
	ctx.lr = 0x82622CC4;
	sub_82634E78(ctx, base);
	// stw r23,376(r31)
	REX_STORE_U32(r31.u32 + 376, r23.u32);
loc_82622CC8:
	// rlwinm r24,r27,2,0,29
	r24.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826e07e0
	ctx.lr = 0x82622CD4;
	sub_826E07E0(ctx, base);
	// stw r3,372(r31)
	REX_STORE_U32(r31.u32 + 372, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82622cec
	if (!ctx.cr6.eq) goto loc_82622CEC;
loc_82622CE0:
	// lis r23,-32761
	r23.s64 = -2147024896;
	// ori r23,r23,14
	r23.u64 = r23.u64 | 14;
	// b 0x82622f50
	goto loc_82622F50;
loc_82622CEC:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x82622CF8;
	sub_826A2E60(ctx, base);
	// mr r29,r23
	r29.u64 = r23.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x82622d4c
	if (!ctx.cr6.gt) goto loc_82622D4C;
	// rlwinm r28,r22,2,0,29
	r28.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r23
	r30.u64 = r23.u64;
loc_82622D0C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826e07e0
	ctx.lr = 0x82622D14;
	sub_826E07E0(ctx, base);
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// stwx r3,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82622ce0
	if (ctx.cr6.eq) goto loc_82622CE0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x82622D3C;
	sub_826A2E60(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// blt cr6,0x82622d0c
	if (ctx.cr6.lt) goto loc_82622D0C;
loc_82622D4C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826e07e0
	ctx.lr = 0x82622D54;
	sub_826E07E0(ctx, base);
	// stw r3,376(r31)
	REX_STORE_U32(r31.u32 + 376, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82622ce0
	if (ctx.cr6.eq) goto loc_82622CE0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x82622D6C;
	sub_826A2E60(ctx, base);
	// mr r29,r23
	r29.u64 = r23.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x82622dc0
	if (!ctx.cr6.gt) goto loc_82622DC0;
	// rlwinm r28,r22,2,0,29
	r28.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r23
	r30.u64 = r23.u64;
loc_82622D80:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826e07e0
	ctx.lr = 0x82622D88;
	sub_826E07E0(ctx, base);
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 376);
	// stwx r3,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 376);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82622ce0
	if (ctx.cr6.eq) goto loc_82622CE0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x82622DB0;
	sub_826A2E60(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// blt cr6,0x82622d80
	if (ctx.cr6.lt) goto loc_82622D80;
loc_82622DC0:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82622e70
	if (ctx.cr6.eq) goto loc_82622E70;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x82622f50
	if (!ctx.cr6.gt) goto loc_82622F50;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r28,r23
	r28.u64 = r23.u64;
	// mr r25,r27
	r25.u64 = r27.u64;
	// lfd f30,10608(r11)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r11.u32 + 10608);
	// lis r26,-32768
	r26.s64 = -2147483648;
	// lfd f31,-13256(r10)
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + -13256);
	// lfs f29,3716(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	f29.f64 = double(temp.f32);
loc_82622DF4:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x82622e60
	if (!ctx.cr6.gt) goto loc_82622E60;
	// mr r30,r23
	r30.u64 = r23.u64;
	// add r29,r28,r21
	r29.u64 = r28.u64 + r21.u64;
	// mr r27,r22
	r27.u64 = r22.u64;
loc_82622E08:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// bne cr6,0x82622e24
	if (!ctx.cr6.eq) goto loc_82622E24;
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// lwzx r10,r28,r11
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// stfsx f29,r10,r30
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r10.u32 + r30.u32, temp.u32);
	// b 0x82622e50
	goto loc_82622E50;
loc_82622E24:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fmul f2,f13,f31
	ctx.f2.f64 = ctx.f13.f64 * f31.f64;
	// bl 0x8269f778
	ctx.lr = 0x82622E40;
	sub_8269F778(ctx, base);
	// lwz r10,372(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 372);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lwzx r9,r28,r10
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + ctx.r10.u32);
	// stfsx f12,r9,r30
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + r30.u32, temp.u32);
loc_82622E50:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// add r29,r29,r24
	r29.u64 = r29.u64 + r24.u64;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82622e08
	if (!ctx.cr0.eq) goto loc_82622E08;
loc_82622E60:
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x82622df4
	if (!ctx.cr0.eq) goto loc_82622DF4;
	// b 0x82622f50
	goto loc_82622F50;
loc_82622E70:
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82622ea0
	if (ctx.cr6.eq) goto loc_82622EA0;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// lwz r8,376(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 376);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r7,372(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 372);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82622338
	ctx.lr = 0x82622E98;
	sub_82622338(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// b 0x82622f50
	goto loc_82622F50;
loc_82622EA0:
	// cmpw cr6,r27,r22
	ctx.cr6.compare<int32_t>(r27.s32, r22.s32, ctx.xer);
	// beq cr6,0x82622eb0
	if (ctx.cr6.eq) goto loc_82622EB0;
	// lis r23,-32764
	r23.s64 = -2147221504;
	// b 0x82622f50
	goto loc_82622F50;
loc_82622EB0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(r27.s32, 4, ctx.xer);
	// lfs f0,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x82622f1c
	if (ctx.cr6.lt) goto loc_82622F1C;
	// addi r6,r27,-3
	ctx.r6.s64 = r27.s64 + -3;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82622ECC:
	// lwz r7,372(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 372);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// lwzx r5,r11,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// stfsx f0,r5,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
	// lwz r7,372(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 372);
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r7,4(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// add r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lwz r7,372(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 372);
	// lwzx r5,r8,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stfsx f0,r5,r8
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r8.u32, temp.u32);
	// lwz r4,372(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 372);
	// lwzx r3,r10,r4
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stfsx f0,r3,r10
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + ctx.r10.u32, temp.u32);
	// blt cr6,0x82622ecc
	if (ctx.cr6.lt) goto loc_82622ECC;
loc_82622F1C:
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r27.s32, ctx.xer);
	// bge cr6,0x82622f50
	if (!ctx.cr6.lt) goto loc_82622F50;
	// subf r10,r9,r27
	ctx.r10.u64 = r27.u64 - ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82622F30:
	// lwz r10,372(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 372);
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82622f30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82622F30;
	// b 0x82622f50
	goto loc_82622F50;
loc_82622F48:
	// lis r23,-32761
	r23.s64 = -2147024896;
	// ori r23,r23,87
	r23.u64 = r23.u64 | 87;
loc_82622F50:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_8263E458) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,288(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 288);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8263e4d4
	if (!ctx.cr6.eq) goto loc_8263E4D4;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8263e4a4
	if (!ctx.cr6.eq) goto loc_8263E4A4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r8,r11,22944
	ctx.r8.s64 = ctx.r11.s64 + 22944;
	// addi r7,r10,-29648
	ctx.r7.s64 = ctx.r10.s64 + -29648;
	// addi r6,r9,-28776
	ctx.r6.s64 = ctx.r9.s64 + -28776;
	// stw r8,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r8.u32);
	// li r5,40
	ctx.r5.s64 = 40;
	// stw r7,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r7.u32);
	// stw r6,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r6.u32);
	// sth r5,314(r3)
	REX_STORE_U16(ctx.r3.u32 + 314, ctx.r5.u16);
	// blr 
	return;
loc_8263E4A4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r8,r11,15504
	ctx.r8.s64 = ctx.r11.s64 + 15504;
	// addi r7,r10,-31552
	ctx.r7.s64 = ctx.r10.s64 + -31552;
	// addi r6,r9,-30600
	ctx.r6.s64 = ctx.r9.s64 + -30600;
	// stw r8,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r8.u32);
	// li r5,70
	ctx.r5.s64 = 70;
	// stw r7,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r7.u32);
	// stw r6,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r6.u32);
	// sth r5,314(r3)
	REX_STORE_U16(ctx.r3.u32 + 314, ctx.r5.u16);
	// blr 
	return;
loc_8263E4D4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8263e548
	if (!ctx.cr6.eq) goto loc_8263E548;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8263e518
	if (!ctx.cr6.eq) goto loc_8263E518;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r8,r11,31136
	ctx.r8.s64 = ctx.r11.s64 + 31136;
	// addi r7,r10,-15616
	ctx.r7.s64 = ctx.r10.s64 + -15616;
	// addi r6,r9,-14504
	ctx.r6.s64 = ctx.r9.s64 + -14504;
	// stw r8,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r8.u32);
	// li r5,40
	ctx.r5.s64 = 40;
	// stw r7,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r7.u32);
	// stw r6,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r6.u32);
	// sth r5,314(r3)
	REX_STORE_U16(ctx.r3.u32 + 314, ctx.r5.u16);
	// blr 
	return;
loc_8263E518:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r8,r11,28648
	ctx.r8.s64 = ctx.r11.s64 + 28648;
	// addi r7,r10,-18272
	ctx.r7.s64 = ctx.r10.s64 + -18272;
	// addi r6,r9,-16944
	ctx.r6.s64 = ctx.r9.s64 + -16944;
	// stw r8,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r8.u32);
	// li r5,60
	ctx.r5.s64 = 60;
	// stw r7,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r7.u32);
	// stw r6,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r6.u32);
	// sth r5,314(r3)
	REX_STORE_U16(ctx.r3.u32 + 314, ctx.r5.u16);
	// blr 
	return;
loc_8263E548:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8263e58c
	if (!ctx.cr6.eq) goto loc_8263E58C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r8,r11,24640
	ctx.r8.s64 = ctx.r11.s64 + 24640;
	// addi r7,r10,-22560
	ctx.r7.s64 = ctx.r10.s64 + -22560;
	// addi r6,r9,-20416
	ctx.r6.s64 = ctx.r9.s64 + -20416;
	// stw r8,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r8.u32);
	// li r5,180
	ctx.r5.s64 = 180;
	// stw r7,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r7.u32);
	// stw r6,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r6.u32);
	// sth r5,314(r3)
	REX_STORE_U16(ctx.r3.u32 + 314, ctx.r5.u16);
	// blr 
	return;
loc_8263E58C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r8,r11,17248
	ctx.r8.s64 = ctx.r11.s64 + 17248;
	// addi r7,r10,-27904
	ctx.r7.s64 = ctx.r10.s64 + -27904;
	// addi r6,r9,-25232
	ctx.r6.s64 = ctx.r9.s64 + -25232;
	// stw r8,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r8.u32);
	// li r5,340
	ctx.r5.s64 = 340;
	// stw r7,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r7.u32);
	// stw r6,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r6.u32);
	// sth r5,314(r3)
	REX_STORE_U16(ctx.r3.u32 + 314, ctx.r5.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82642910) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r9,-14164
	ctx.r4.s64 = ctx.r9.s64 + -14164;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82642954;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// blt 0x82642994
	if (ctx.cr0.lt) goto loc_82642994;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82642974;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82642990;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826429ac
	goto loc_826429AC;
loc_82642994:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826429A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_826429AC:
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

DEFINE_REX_FUNC(sub_82647C10) {
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
	ctx.lr = 0x82647C18;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82647eb4
	if (ctx.cr6.eq) goto loc_82647EB4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82647eb4
	if (ctx.cr6.eq) goto loc_82647EB4;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,14
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 14, ctx.xer);
	// blt cr6,0x82647eac
	if (ctx.cr6.lt) goto loc_82647EAC;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// clrlwi r20,r7,16
	r20.u64 = ctx.r7.u32 & 0xFFFF;
	// lfs f0,15504(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15504);
	ctx.f0.f64 = double(temp.f32);
	// addi r21,r11,-26936
	r21.s64 = ctx.r11.s64 + -26936;
	// addi r23,r10,-26964
	r23.s64 = ctx.r10.s64 + -26964;
	// addi r22,r9,-26992
	r22.s64 = ctx.r9.s64 + -26992;
loc_82647C58:
	// cmplw cr6,r4,r20
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r20.u32, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x82647c68
	if (ctx.cr6.lt) goto loc_82647C68;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_82647C68:
	// lbz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// addic. r6,r11,-14
	ctx.xer.ca = ctx.r11.u32 > 13;
	ctx.r6.s64 = ctx.r11.s64 + -14;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lbzu r10,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// rotlwi r18,r10,2
	r18.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lbzu r29,1(r3)
	ea = 1 + ctx.r3.u32;
	r29.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// lwzx r25,r8,r22
	r25.u64 = REX_LOAD_U32(ctx.r8.u32 + r22.u32);
	// lwzx r24,r8,r23
	r24.u64 = REX_LOAD_U32(ctx.r8.u32 + r23.u32);
	// lwzx r26,r18,r23
	r26.u64 = REX_LOAD_U32(r18.u32 + r23.u32);
	// lbz r7,1(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lbzu r30,2(r3)
	ea = 2 + ctx.r3.u32;
	r30.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + r29.u64;
	// lbz r10,1(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lbzu r11,2(r3)
	ea = 2 + ctx.r3.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// rotlwi r31,r10,8
	r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lbz r9,1(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lbzu r28,2(r3)
	ea = 2 + ctx.r3.u32;
	r28.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// rotlwi r8,r9,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r8,1(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lbzu r9,2(r3)
	ea = 2 + ctx.r3.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rotlwi r27,r8,8
	r27.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// std r10,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r10.u64);
	// lfd f13,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lbz r11,1(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// add r8,r27,r28
	ctx.r8.u64 = r27.u64 + r28.u64;
	// lbzu r10,2(r3)
	ea = 2 + ctx.r3.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// extsw r29,r8
	r29.s64 = ctx.r8.s32;
	// lwzx r27,r18,r22
	r27.u64 = REX_LOAD_U32(r18.u32 + r22.u32);
	// std r29,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, r29.u64);
	// lfd f10,-168(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lbz r29,1(r3)
	r29.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// rotlwi r28,r29,8
	r28.u64 = __builtin_rotateleft32(r29.u32, 8);
	// add r10,r28,r10
	ctx.r10.u64 = r28.u64 + ctx.r10.u64;
	// rotlwi r28,r11,8
	r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// add r9,r28,r9
	ctx.r9.u64 = r28.u64 + ctx.r9.u64;
	// std r11,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r11.u64);
	// lfd f6,-160(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// std r11,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, ctx.r11.u64);
	// lfd f4,-152(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// fmuls f13,f8,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfsu f11,4(r5)
	ea = 4 + ctx.r5.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r5.u32 = ea;
	// stfsu f7,4(r5)
	ea = 4 + ctx.r5.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r5.u32 = ea;
	// stfsu f13,4(r5)
	ea = 4 + ctx.r5.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r5.u32 = ea;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// beq 0x82647ea4
	if (ctx.cr0.eq) goto loc_82647EA4;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82647D78:
	// lbz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mullw r11,r9,r24
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(r24.s32);
	// extsb r9,r6
	ctx.r9.s64 = ctx.r6.s8;
	// mullw r6,r7,r25
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(r25.s32);
	// srawi r29,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	r29.s64 = ctx.r9.s32 >> 4;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// srawi r6,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 8;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x82647dbc
	if (!ctx.cr6.gt) goto loc_82647DBC;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x82647dc8
	goto loc_82647DC8;
loc_82647DBC:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x82647dc8
	if (!ctx.cr6.lt) goto loc_82647DC8;
	// li r11,-32768
	ctx.r11.s64 = -32768;
loc_82647DC8:
	// rlwinm r6,r29,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0x3C;
	// lwzx r6,r6,r21
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r21.u32);
	// mullw r6,r6,r30
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(r30.s32);
	// srawi r30,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	r30.s64 = ctx.r6.s32 >> 8;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(r30.s32, 16, ctx.xer);
	// bge cr6,0x82647de4
	if (!ctx.cr6.lt) goto loc_82647DE4;
	// li r30,16
	r30.s64 = 16;
loc_82647DE4:
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// std r6,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.r6.u64);
	// mullw r10,r10,r26
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r26.s32);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mullw r9,r8,r27
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(r27.s32);
	// lfd f13,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r6,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 4;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// rlwinm r29,r6,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// extsb r11,r29
	ctx.r11.s64 = r29.s8;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r5)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x82647e50
	if (!ctx.cr6.gt) goto loc_82647E50;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x82647e5c
	goto loc_82647E5C;
loc_82647E50:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x82647e5c
	if (!ctx.cr6.lt) goto loc_82647E5C;
	// li r11,-32768
	ctx.r11.s64 = -32768;
loc_82647E5C:
	// rlwinm r10,r6,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// lwzx r6,r10,r21
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + r21.u32);
	// mullw r10,r6,r31
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(r31.s32);
	// srawi r31,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	r31.s64 = ctx.r10.s32 >> 8;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(r31.s32, 16, ctx.xer);
	// bge cr6,0x82647e78
	if (!ctx.cr6.lt) goto loc_82647E78;
	// li r31,16
	r31.s64 = 16;
loc_82647E78:
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// std r6,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, ctx.r6.u64);
	// lfd f13,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r5)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bdnz 0x82647d78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82647D78;
loc_82647EA4:
	// cmplwi cr6,r4,14
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 14, ctx.xer);
	// bge cr6,0x82647c58
	if (!ctx.cr6.lt) goto loc_82647C58;
loc_82647EAC:
	// subf r3,r19,r5
	ctx.r3.u64 = ctx.r5.u64 - r19.u64;
	// b 0x826a1ce0
	return;
loc_82647EB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_826592B0) {
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
	// lwz r11,84(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 84);
	// b 0x826592cc
	goto loc_826592CC;
loc_826592C4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
loc_826592CC:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x826592c4
	if (!ctx.cr0.eq) goto loc_826592C4;
loc_826592D4:
	// lwz r11,396(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 396);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,396(r4)
	REX_STORE_U32(ctx.r4.u32 + 396, ctx.r11.u32);
	// lwz r4,88(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 88);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x826592d4
	if (!ctx.cr6.eq) goto loc_826592D4;
	// lwz r11,188(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,188(r3)
	REX_STORE_U32(ctx.r3.u32 + 188, ctx.r11.u32);
	// bne 0x82659308
	if (!ctx.cr0.eq) goto loc_82659308;
	// bl 0x82659168
	ctx.lr = 0x82659300;
	sub_82659168(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8265930c
	if (ctx.cr0.lt) goto loc_8265930C;
loc_82659308:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265930C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8265C758) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8265C760;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8265c7ac
	if (!ctx.cr6.gt) goto loc_8265C7AC;
	// li r30,0
	r30.s64 = 0;
loc_8265C780:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823ee5d8
	ctx.lr = 0x8265C798;
	sub_823EE5D8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8265c780
	if (ctx.cr6.lt) goto loc_8265C780;
loc_8265C7AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8265D6D0) {
	REX_FUNC_PROLOGUE();
	// b 0x82663490
	sub_82663490(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8265D700) {
	REX_FUNC_PROLOGUE();
	// b 0x826637c0
	sub_826637C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8265D718) {
	REX_FUNC_PROLOGUE();
	// b 0x82670138
	sub_82670138(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8265D750) {
	REX_FUNC_PROLOGUE();
	// b 0x82663b58
	sub_82663B58(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8265D7B8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265d7c4
	if (ctx.cr6.eq) goto loc_8265D7C4;
	// b 0x82664278
	sub_82664278(ctx, base);
	return;
loc_8265D7C4:
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// b 0x82663130
	sub_82663130(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8265DE90) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r5,31
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 31, ctx.xer);
	// bne cr6,0x8265ded4
	if (!ctx.cr6.eq) goto loc_8265DED4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8265DE9C:
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm. r8,r10,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// bne 0x8265ded4
	if (!ctx.cr0.eq) goto loc_8265DED4;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r8,r11,2,22,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stwx r9,r8,r3
	REX_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r9.u32);
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// blt cr6,0x8265de9c
	if (ctx.cr6.lt) goto loc_8265DE9C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8265DED4:
	// lis r3,-32747
	ctx.r3.s64 = -2146107392;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8265F398) {
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
	// lwz r10,396(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 396);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8265f3d8
	if (ctx.cr0.eq) goto loc_8265F3D8;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82651818
	ctx.lr = 0x8265F3D0;
	sub_82651818(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8265f3e0
	if (!ctx.cr0.lt) goto loc_8265F3E0;
loc_8265F3D8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8265f3e4
	goto loc_8265F3E4;
loc_8265F3E0:
	// ld r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
loc_8265F3E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826609F0) {
	REX_FUNC_PROLOGUE();
	// b 0x82660910
	sub_82660910(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82660DD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82660DE0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// clrlwi. r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82660e14
	if (!ctx.cr0.eq) goto loc_82660E14;
	// li r10,1001
	ctx.r10.s64 = 1001;
	// sth r10,36(r3)
	REX_STORE_U16(ctx.r3.u32 + 36, ctx.r10.u16);
	// b 0x82660e18
	goto loc_82660E18;
loc_82660E14:
	// sth r7,36(r31)
	REX_STORE_U16(r31.u32 + 36, ctx.r7.u16);
loc_82660E18:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82660e50
	if (ctx.cr6.eq) goto loc_82660E50;
	// li r30,0
	r30.s64 = 0;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82660E38;
	sub_826A1E70(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82660E48;
	sub_826A1E70(ctx, base);
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
	// b 0x82660e8c
	goto loc_82660E8C;
loc_82660E50:
	// bl 0x823ef900
	ctx.lr = 0x82660E54;
	sub_823EF900(ctx, base);
	// addic. r11,r3,-1000
	ctx.xer.ca = ctx.r3.u32 > 999;
	ctx.r11.s64 = ctx.r3.s64 + -1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bne 0x82660e68
	if (!ctx.cr0.eq) goto loc_82660E68;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_82660E68:
	// li r30,0
	r30.s64 = 0;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
loc_82660E8C:
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x826a2e60
	ctx.lr = 0x82660E9C;
	sub_826A2E60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826668B8) {
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
	ctx.lr = 0x826668C0;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,60(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// li r29,1
	r29.s64 = 1;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rlwinm r11,r10,29,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1F;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// slw r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r10.u8 & 0x3F));
	// lbz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 136);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266690c
	if (ctx.cr0.eq) goto loc_8266690C;
	// lis r5,-32646
	ctx.r5.s64 = -2139488256;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,4113
	ctx.r5.u64 = ctx.r5.u64 | 4113;
	// bl 0x8266bfc8
	ctx.lr = 0x82666904;
	sub_8266BFC8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82666b48
	goto loc_82666B48;
loc_8266690C:
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x82675ee0
	ctx.lr = 0x82666918;
	sub_82675EE0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8266692c
	if (!ctx.cr0.eq) goto loc_8266692C;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x82666b48
	goto loc_82666B48;
loc_8266692C:
	// stb r29,69(r31)
	REX_STORE_U8(r31.u32 + 69, r29.u8);
	// li r7,131
	ctx.r7.s64 = 131;
	// lhz r10,284(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 284);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,284(r30)
	REX_STORE_U16(r30.u32 + 284, ctx.r11.u16);
	// addi r5,r31,36
	ctx.r5.s64 = r31.s64 + 36;
	// sth r11,70(r31)
	REX_STORE_U16(r31.u32 + 70, ctx.r11.u16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 60);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// addi r11,r31,68
	ctx.r11.s64 = r31.s64 + 68;
	// lwz r11,292(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 292);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// stw r11,292(r30)
	REX_STORE_U32(r30.u32 + 292, ctx.r11.u32);
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x826711d8
	ctx.lr = 0x82666974;
	sub_826711D8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826715f0
	ctx.lr = 0x82666990;
	sub_826715F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82671558
	ctx.lr = 0x8266699C;
	sub_82671558(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// bne 0x82666b54
	if (!ctx.cr0.eq) goto loc_82666B54;
loc_826669A8:
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
	// bne 0x826669a8
	if (!ctx.cr0.eq) goto loc_826669A8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826669e4
	if (!ctx.cr6.eq) goto loc_826669E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826669E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826669E4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r28,188
	ctx.r3.s64 = r28.s64 + 188;
	// bl 0x826707c0
	ctx.lr = 0x826669F0;
	sub_826707C0(ctx, base);
	// lwz r11,176(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 176);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,176(r28)
	REX_STORE_U32(r28.u32 + 176, ctx.r11.u32);
	// bl 0x82670f60
	ctx.lr = 0x82666A08;
	sub_82670F60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r25,188
	ctx.r3.s64 = r25.s64 + 188;
	// bl 0x826706a8
	ctx.lr = 0x82666A14;
	sub_826706A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82666a28
	if (!ctx.cr0.eq) goto loc_82666A28;
	// lwz r11,176(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 176);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,176(r25)
	REX_STORE_U32(r25.u32 + 176, ctx.r11.u32);
loc_82666A28:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82666b48
	if (!ctx.cr6.eq) goto loc_82666B48;
	// lwz r11,244(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 244);
	// addi r27,r28,244
	r27.s64 = r28.s64 + 244;
	// li r26,0
	r26.s64 = 0;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// beq cr6,0x82666a54
	if (ctx.cr6.eq) goto loc_82666A54;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-20
	r31.s64 = ctx.r11.s64 + -20;
	// bne 0x82666a58
	if (!ctx.cr0.eq) goto loc_82666A58;
loc_82666A54:
	// li r31,0
	r31.s64 = 0;
loc_82666A58:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82666ad4
	if (ctx.cr6.eq) goto loc_82666AD4;
loc_82666A60:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// beq cr6,0x82666a78
	if (ctx.cr6.eq) goto loc_82666A78;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r28,r11,-20
	r28.s64 = ctx.r11.s64 + -20;
	// bne 0x82666a7c
	if (!ctx.cr0.eq) goto loc_82666A7C;
loc_82666A78:
	// li r28,0
	r28.s64 = 0;
loc_82666A7C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x82666aac
	if (!ctx.cr6.eq) goto loc_82666AAC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82671cb0
	ctx.lr = 0x82666A94;
	sub_82671CB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82671810
	ctx.lr = 0x82666AA0;
	sub_82671810(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x82666b48
	if (!ctx.cr0.eq) goto loc_82666B48;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
loc_82666AAC:
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82666a60
	if (!ctx.cr6.eq) goto loc_82666A60;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82666ad4
	if (ctx.cr6.eq) goto loc_82666AD4;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,72(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 72);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82675cf0
	ctx.lr = 0x82666AD4;
	sub_82675CF0(ctx, base);
loc_82666AD4:
	// lwz r11,244(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 244);
	// addi r28,r30,244
	r28.s64 = r30.s64 + 244;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// beq cr6,0x82666af0
	if (ctx.cr6.eq) goto loc_82666AF0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-20
	r31.s64 = ctx.r11.s64 + -20;
	// bne 0x82666af4
	if (!ctx.cr0.eq) goto loc_82666AF4;
loc_82666AF0:
	// li r31,0
	r31.s64 = 0;
loc_82666AF4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82666b44
	if (ctx.cr6.eq) goto loc_82666B44;
loc_82666AFC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// beq cr6,0x82666b14
	if (ctx.cr6.eq) goto loc_82666B14;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r11,-20
	r30.s64 = ctx.r11.s64 + -20;
	// bne 0x82666b18
	if (!ctx.cr0.eq) goto loc_82666B18;
loc_82666B14:
	// li r30,0
	r30.s64 = 0;
loc_82666B18:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82671d90
	ctx.lr = 0x82666B24;
	sub_82671D90(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82671810
	ctx.lr = 0x82666B30;
	sub_82671810(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x82666b48
	if (!ctx.cr0.eq) goto loc_82666B48;
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82666afc
	if (!ctx.cr6.eq) goto loc_82666AFC;
loc_82666B44:
	// li r29,0
	r29.s64 = 0;
loc_82666B48:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cfc
	return;
loc_82666B54:
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
	// bne 0x82666b54
	if (!ctx.cr0.eq) goto loc_82666B54;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82666b48
	if (!ctx.cr6.eq) goto loc_82666B48;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82666B90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82666b48
	goto loc_82666B48;
}

DEFINE_REX_FUNC(sub_82676DA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82676DA8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,172
	r29.s64 = ctx.r3.s64 + 172;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x827938a4
	ctx.lr = 0x82676DC0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82676ddc
	if (ctx.cr0.eq) goto loc_82676DDC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8267c840
	ctx.lr = 0x82676DD8;
	sub_8267C840(ctx, base);
	// b 0x82676dfc
	goto loc_82676DFC;
loc_82676DDC:
	// addi r10,r31,200
	ctx.r10.s64 = r31.s64 + 200;
	// addi r11,r30,168
	ctx.r11.s64 = r30.s64 + 168;
	// stw r10,168(r30)
	REX_STORE_U32(r30.u32 + 168, ctx.r10.u32);
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// stw r10,172(r30)
	REX_STORE_U32(r30.u32 + 172, ctx.r10.u32);
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r11.u32);
loc_82676DFC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827938b4
	ctx.lr = 0x82676E04;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82678F50) {
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
	// bl 0x82676d18
	ctx.lr = 0x82678F6C;
	sub_82676D18(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82678f90
	if (!ctx.cr6.eq) goto loc_82678F90;
	// bl 0x823ef900
	ctx.lr = 0x82678F7C;
	sub_823EF900(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// lwz r4,144(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// bl 0x826829f0
	ctx.lr = 0x82678F90;
	sub_826829F0(ctx, base);
loc_82678F90:
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

DEFINE_REX_FUNC(sub_8267A348) {
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
	ctx.lr = 0x8267A350;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8267a4d8
	if (!ctx.cr6.eq) goto loc_8267A4D8;
	// lwz r3,424(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 424);
	// bl 0x82676d18
	ctx.lr = 0x8267A36C;
	sub_82676D18(ctx, base);
	// lhz r9,1076(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 1076);
	// li r30,0
	r30.s64 = 0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r30,424(r31)
	REX_STORE_U32(r31.u32 + 424, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// sth r9,1076(r31)
	REX_STORE_U16(r31.u32 + 1076, ctx.r9.u16);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lwz r29,428(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 428);
	// lwz r9,1188(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1188);
	// stw r30,428(r31)
	REX_STORE_U32(r31.u32 + 428, r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// rlwinm. r9,r9,0,5,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8267a430
	if (ctx.cr0.eq) goto loc_8267A430;
	// li r28,1
	r28.s64 = 1;
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// beq cr6,0x8267a3e8
	if (ctx.cr6.eq) goto loc_8267A3E8;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// lwz r5,44(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 44);
	// lwz r4,40(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 40);
	// bl 0x82681220
	ctx.lr = 0x8267A3C4;
	sub_82681220(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82680b00
	ctx.lr = 0x8267A3D4;
	sub_82680B00(ctx, base);
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subfic r11,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
loc_8267A3E8:
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r8,40
	ctx.r8.s64 = 40;
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r6,7
	ctx.r6.s64 = 7;
	// lbz r5,676(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 676);
	// addi r4,r31,676
	ctx.r4.s64 = r31.s64 + 676;
	// stw r11,1128(r31)
	REX_STORE_U32(r31.u32 + 1128, ctx.r11.u32);
	// addi r11,r31,1136
	ctx.r11.s64 = r31.s64 + 1136;
	// stw r8,1100(r31)
	REX_STORE_U32(r31.u32 + 1100, ctx.r8.u32);
	// stw r6,1104(r31)
	REX_STORE_U32(r31.u32 + 1104, ctx.r6.u32);
	// stw r9,1108(r31)
	REX_STORE_U32(r31.u32 + 1108, ctx.r9.u32);
	// stw r7,1112(r31)
	REX_STORE_U32(r31.u32 + 1112, ctx.r7.u32);
	// stw r30,1116(r31)
	REX_STORE_U32(r31.u32 + 1116, r30.u32);
	// stw r28,1120(r31)
	REX_STORE_U32(r31.u32 + 1120, r28.u32);
	// stw r30,1124(r31)
	REX_STORE_U32(r31.u32 + 1124, r30.u32);
	// stw r10,1132(r31)
	REX_STORE_U32(r31.u32 + 1132, ctx.r10.u32);
	// stb r5,1136(r31)
	REX_STORE_U8(r31.u32 + 1136, ctx.r5.u8);
	// b 0x8267a4b8
	goto loc_8267A4B8;
loc_8267A430:
	// li r28,2
	r28.s64 = 2;
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// beq cr6,0x8267a470
	if (ctx.cr6.eq) goto loc_8267A470;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// lwz r5,44(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 44);
	// lwz r4,40(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 40);
	// bl 0x826812d8
	ctx.lr = 0x8267A454;
	sub_826812D8(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267a46c
	if (ctx.cr6.eq) goto loc_8267A46C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// b 0x8267a470
	goto loc_8267A470;
loc_8267A46C:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8267A470:
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r7,40
	ctx.r7.s64 = 40;
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r9,r31,676
	ctx.r9.s64 = r31.s64 + 676;
	// lbz r3,676(r31)
	ctx.r3.u64 = REX_LOAD_U8(r31.u32 + 676);
	// addi r9,r31,1136
	ctx.r9.s64 = r31.s64 + 1136;
	// stw r7,1100(r31)
	REX_STORE_U32(r31.u32 + 1100, ctx.r7.u32);
	// stw r5,1104(r31)
	REX_STORE_U32(r31.u32 + 1104, ctx.r5.u32);
	// stw r8,1108(r31)
	REX_STORE_U32(r31.u32 + 1108, ctx.r8.u32);
	// stw r6,1112(r31)
	REX_STORE_U32(r31.u32 + 1112, ctx.r6.u32);
	// stw r30,1116(r31)
	REX_STORE_U32(r31.u32 + 1116, r30.u32);
	// stw r28,1120(r31)
	REX_STORE_U32(r31.u32 + 1120, r28.u32);
	// stw r4,1124(r31)
	REX_STORE_U32(r31.u32 + 1124, ctx.r4.u32);
	// stw r11,1128(r31)
	REX_STORE_U32(r31.u32 + 1128, ctx.r11.u32);
	// stw r10,1132(r31)
	REX_STORE_U32(r31.u32 + 1132, ctx.r10.u32);
	// stb r3,1136(r31)
	REX_STORE_U8(r31.u32 + 1136, ctx.r3.u8);
loc_8267A4B8:
	// lbz r11,677(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 677);
	// stb r11,1137(r31)
	REX_STORE_U8(r31.u32 + 1137, ctx.r11.u8);
	// lbz r11,678(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 678);
	// stb r11,1138(r31)
	REX_STORE_U8(r31.u32 + 1138, ctx.r11.u8);
	// lbz r11,679(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 679);
	// stb r11,1139(r31)
	REX_STORE_U8(r31.u32 + 1139, ctx.r11.u8);
	// stw r29,1176(r31)
	REX_STORE_U32(r31.u32 + 1176, r29.u32);
	// b 0x8267a594
	goto loc_8267A594;
loc_8267A4D8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,40
	ctx.r11.s64 = 40;
	// li r30,0
	r30.s64 = 0;
	// stw r11,1100(r31)
	REX_STORE_U32(r31.u32 + 1100, ctx.r11.u32);
	// addi r11,r31,676
	ctx.r11.s64 = r31.s64 + 676;
	// stw r30,1128(r31)
	REX_STORE_U32(r31.u32 + 1128, r30.u32);
	// addi r11,r31,1136
	ctx.r11.s64 = r31.s64 + 1136;
	// stw r30,1132(r31)
	REX_STORE_U32(r31.u32 + 1132, r30.u32);
	// bne cr6,0x8267a53c
	if (!ctx.cr6.eq) goto loc_8267A53C;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r28,2
	r28.s64 = 2;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r6,7
	ctx.r6.s64 = 7;
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r5,1
	ctx.r5.s64 = 1;
	// lbz r7,676(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 676);
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// stw r6,1104(r31)
	REX_STORE_U32(r31.u32 + 1104, ctx.r6.u32);
	// stw r10,1108(r31)
	REX_STORE_U32(r31.u32 + 1108, ctx.r10.u32);
	// stw r9,1112(r31)
	REX_STORE_U32(r31.u32 + 1112, ctx.r9.u32);
	// stw r5,1116(r31)
	REX_STORE_U32(r31.u32 + 1116, ctx.r5.u32);
	// stw r28,1120(r31)
	REX_STORE_U32(r31.u32 + 1120, r28.u32);
	// stw r8,1124(r31)
	REX_STORE_U32(r31.u32 + 1124, ctx.r8.u32);
	// stb r7,1136(r31)
	REX_STORE_U8(r31.u32 + 1136, ctx.r7.u8);
	// b 0x8267a578
	goto loc_8267A578;
loc_8267A53C:
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r4,2
	ctx.r4.s64 = 2;
	// lbz r6,676(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 676);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r5,1104(r31)
	REX_STORE_U32(r31.u32 + 1104, ctx.r5.u32);
	// stw r9,1108(r31)
	REX_STORE_U32(r31.u32 + 1108, ctx.r9.u32);
	// stw r8,1112(r31)
	REX_STORE_U32(r31.u32 + 1112, ctx.r8.u32);
	// stw r4,1116(r31)
	REX_STORE_U32(r31.u32 + 1116, ctx.r4.u32);
	// stw r10,1120(r31)
	REX_STORE_U32(r31.u32 + 1120, ctx.r10.u32);
	// stw r7,1124(r31)
	REX_STORE_U32(r31.u32 + 1124, ctx.r7.u32);
	// stb r6,1136(r31)
	REX_STORE_U8(r31.u32 + 1136, ctx.r6.u8);
loc_8267A578:
	// lbz r11,677(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 677);
	// stb r11,1137(r31)
	REX_STORE_U8(r31.u32 + 1137, ctx.r11.u8);
	// lbz r11,678(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 678);
	// stb r11,1138(r31)
	REX_STORE_U8(r31.u32 + 1138, ctx.r11.u8);
	// lbz r11,679(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 679);
	// stb r11,1139(r31)
	REX_STORE_U8(r31.u32 + 1139, ctx.r11.u8);
	// stw r30,1176(r31)
	REX_STORE_U32(r31.u32 + 1176, r30.u32);
loc_8267A594:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826871C8) {
	REX_FUNC_PROLOGUE();
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82687250) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bge cr6,0x82687260
	if (!ctx.cr6.lt) goto loc_82687260;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82687260:
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82688D90) {
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
	// lbz r11,79(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 79);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82688dc8
	if (ctx.cr0.eq) goto loc_82688DC8;
	// bl 0x82688ac8
	ctx.lr = 0x82688DB4;
	sub_82688AC8(ctx, base);
	// lbz r11,79(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 79);
	// andi. r11,r11,239
	ctx.r11.u64 = ctx.r11.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_82688DBC:
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,79(r31)
	REX_STORE_U8(r31.u32 + 79, ctx.r11.u8);
	// b 0x82688e7c
	goto loc_82688E7C;
loc_82688DC8:
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82688dfc
	if (ctx.cr0.eq) goto loc_82688DFC;
	// lhz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 76);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82688de4
	if (!ctx.cr0.eq) goto loc_82688DE4;
	// lwz r6,80(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 80);
loc_82688DE4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826889d0
	ctx.lr = 0x82688DF0;
	sub_826889D0(ctx, base);
	// lbz r11,79(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 79);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// b 0x82688dbc
	goto loc_82688DBC;
loc_82688DFC:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82688e30
	if (ctx.cr0.eq) goto loc_82688E30;
	// lhz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 76);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82688e18
	if (!ctx.cr0.eq) goto loc_82688E18;
	// lwz r6,80(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 80);
loc_82688E18:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826889d0
	ctx.lr = 0x82688E24;
	sub_826889D0(ctx, base);
	// lbz r11,79(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 79);
	// andi. r11,r11,191
	ctx.r11.u64 = ctx.r11.u64 & 191;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82688dbc
	goto loc_82688DBC;
loc_82688E30:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 76);
	// beq 0x82688e64
	if (ctx.cr0.eq) goto loc_82688E64;
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// bne 0x82688e4c
	if (!ctx.cr0.eq) goto loc_82688E4C;
	// lwz r6,80(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 80);
loc_82688E4C:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826889d0
	ctx.lr = 0x82688E58;
	sub_826889D0(ctx, base);
	// lbz r11,79(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 79);
	// andi. r11,r11,223
	ctx.r11.u64 = ctx.r11.u64 & 223;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82688dbc
	goto loc_82688DBC;
loc_82688E64:
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r11,76(r31)
	REX_STORE_U16(r31.u32 + 76, ctx.r11.u16);
	// bl 0x826847a0
	ctx.lr = 0x82688E78;
	sub_826847A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82688E7C:
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

DEFINE_REX_FUNC(sub_82691DE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82691DE8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,12(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826917a0
	ctx.lr = 0x82691DF8;
	sub_826917A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82691278
	ctx.lr = 0x82691E00;
	sub_82691278(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// b 0x82691e3c
	goto loc_82691E3C;
loc_82691E08:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// subf r11,r30,r10
	ctx.r11.u64 = ctx.r10.u64 - r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82691e28
	if (ctx.cr6.lt) goto loc_82691E28;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x82691e34
	goto loc_82691E34;
loc_82691E28:
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82691E34:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82691650
	ctx.lr = 0x82691E3C;
	sub_82691650(ctx, base);
loc_82691E3C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82691e08
	if (!ctx.cr6.eq) goto loc_82691E08;
	// li r11,600
	ctx.r11.s64 = 600;
	// stb r29,140(r31)
	REX_STORE_U8(r31.u32 + 140, r29.u8);
	// stw r29,144(r31)
	REX_STORE_U32(r31.u32 + 144, r29.u32);
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
	// stw r29,152(r31)
	REX_STORE_U32(r31.u32 + 152, r29.u32);
	// stw r29,156(r31)
	REX_STORE_U32(r31.u32 + 156, r29.u32);
	// bl 0x823ef900
	ctx.lr = 0x82691E60;
	sub_823EF900(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826958B8) {
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
	// bl 0x826a1cb8
	ctx.lr = 0x826958C0;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2ca8
	ctx.lr = 0x826958C8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfs f29,3804(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3804);
	f29.f64 = double(temp.f32);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// srawi r28,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	r28.s64 = ctx.r4.s32 >> 1;
	// lwz r8,-5944(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -5944);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,11196(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 11196);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// fdivs f11,f29,f0
	ctx.f11.f64 = double(float(f29.f64 / ctx.f0.f64));
	// lfs f0,10556(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 10556);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lfs f13,10552(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 10552);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f28,f11,f0
	f28.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f31,f11,f13
	f31.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fdivs f1,f12,f10
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// fmr f30,f28
	f30.f64 = f28.f64;
	// bctrl 
	ctx.lr = 0x82695954;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f12,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f31,f28
	ctx.f11.f64 = double(float(f31.f64 - f28.f64));
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// li r9,2
	ctx.r9.s64 = 2;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(r28.s32, 4, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fmuls f0,f13,f28
	ctx.f0.f64 = double(float(ctx.f13.f64 * f28.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f12,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fsubs f11,f31,f0
	ctx.f11.f64 = double(float(f31.f64 - ctx.f0.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f12,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * f29.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f12,4(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// lfsu f12,-4(r31)
	ea = -4 + r31.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	r31.u32 = ea;
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// addi r10,r31,-4
	ctx.r10.s64 = r31.s64 + -4;
	// ble cr6,0x82695a2c
	if (!ctx.cr6.gt) goto loc_82695A2C;
	// li r8,4
	ctx.r8.s64 = 4;
loc_826959B4:
	// fmsubs f12,f0,f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, -f30.f64)));
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// cmpw cr6,r8,r28
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r28.s32, ctx.xer);
	// fmsubs f30,f12,f13,f0
	f30.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, -ctx.f0.f64)));
	// fsubs f10,f31,f12
	ctx.f10.f64 = double(float(f31.f64 - ctx.f12.f64));
	// fmsubs f0,f13,f30,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f30.f64, -ctx.f12.f64)));
	// fsubs f12,f31,f30
	ctx.f12.f64 = double(float(f31.f64 - f30.f64));
	// fmuls f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f11,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fsubs f10,f31,f0
	ctx.f10.f64 = double(float(f31.f64 - ctx.f0.f64));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f11,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f11,-4(r10)
	ea = -4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfsu f12,-4(r10)
	ea = -4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// blt cr6,0x826959b4
	if (ctx.cr6.lt) goto loc_826959B4;
loc_82695A2C:
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r28.s32, ctx.xer);
	// bge cr6,0x82695a88
	if (!ctx.cr6.lt) goto loc_82695A88;
	// fmsubs f12,f0,f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, -f30.f64)));
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r28.s32, ctx.xer);
	// fsubs f10,f31,f12
	ctx.f10.f64 = double(float(f31.f64 - ctx.f12.f64));
	// fmuls f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f11,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bge cr6,0x82695a88
	if (!ctx.cr6.lt) goto loc_82695A88;
	// fmsubs f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, -ctx.f0.f64)));
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 - ctx.f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f13,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + -4, temp.u32);
loc_82695A88:
	// clrlwi. r10,r29,31
	ctx.r10.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82695aa0
	if (ctx.cr0.eq) goto loc_82695AA0;
	// fadds f0,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 + f28.f64));
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_82695AA0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2cf4
	ctx.lr = 0x82695AAC;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(__restgprlr_28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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

DEFINE_REX_FUNC(sub_826A2A40) {
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
	// bl 0x826a3990
	ctx.lr = 0x826A2A5C;
	sub_826A3990(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x826a2a84
	if (!ctx.cr0.eq) goto loc_826A2A84;
loc_826A2A64:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,16896
	ctx.r3.s64 = ctx.r11.s64 + 16896;
loc_826A2A6C:
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
loc_826A2A84:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826a2aa8
	if (!ctx.cr6.eq) goto loc_826A2AA8;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,134
	ctx.r3.s64 = 134;
	// bl 0x826a2b40
	ctx.lr = 0x826A2A9C;
	sub_826A2B40(ctx, base);
	// stw r3,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a2a64
	if (ctx.cr0.eq) goto loc_826A2A64;
loc_826A2AA8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r31,36(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 36);
	// bl 0x826a29e8
	ctx.lr = 0x826A2AB4;
	sub_826A29E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,134
	ctx.r4.s64 = 134;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a1bc8
	ctx.lr = 0x826A2AC4;
	sub_826A1BC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826a2ad4
	if (!ctx.cr0.eq) goto loc_826A2AD4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x826a2a6c
	goto loc_826A2A6C;
loc_826A2AD4:
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
	ctx.lr = 0x826A2AEC;
	sub_8269CBF8(ctx, base);
}

DEFINE_REX_FUNC(__savevmx_106) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_121) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
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

DEFINE_REX_FUNC(sub_826A50E8) {
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
	ctx.lr = 0x826A50F0;
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r27,0
	r27.s64 = 0;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,92(r31)
	REX_STORE_U32(r31.u32 + 92, r27.u32);
	// stw r27,96(r31)
	REX_STORE_U32(r31.u32 + 96, r27.u32);
	// bne 0x826a5130
	if (!ctx.cr0.eq) goto loc_826A5130;
	// bl 0x826a33d0
	ctx.lr = 0x826A511C;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826A5128;
	sub_8269CB20(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x826a537c
	goto loc_826A537C;
loc_826A5130:
	// stw r27,0(r26)
	REX_STORE_U32(r26.u32 + 0, r27.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x826a97e8
	ctx.lr = 0x826A513C;
	sub_826A97E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826a5150
	if (!ctx.cr0.eq) goto loc_826A5150;
	// bl 0x826a33d0
	ctx.lr = 0x826A5148;
	sub_826A33D0(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x826a537c
	goto loc_826A537C;
loc_826A5150:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x826a9928
	ctx.lr = 0x826A5158;
	sub_826A9928(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// addi r30,r11,8992
	r30.s64 = ctx.r11.s64 + 8992;
	// lbz r11,8992(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 8992);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// bne 0x826a5254
	if (!ctx.cr0.eq) goto loc_826A5254;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r5,r11,19248
	ctx.r5.s64 = ctx.r11.s64 + 19248;
	// bl 0x826a1bc8
	ctx.lr = 0x826A5184;
	sub_826A1BC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a51a4
	if (ctx.cr0.eq) goto loc_826A51A4;
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
	ctx.lr = 0x826A51A4;
	sub_8269CBF8(ctx, base);
loc_826A51A4:
	// lbz r10,2(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 2);
	// addi r11,r30,3
	ctx.r11.s64 = r30.s64 + 3;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r10,92
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 92, ctx.xer);
	// beq cr6,0x826a51d4
	if (ctx.cr6.eq) goto loc_826A51D4;
	// cmpwi cr6,r10,47
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 47, ctx.xer);
	// beq cr6,0x826a51d4
	if (ctx.cr6.eq) goto loc_826A51D4;
	// li r10,92
	ctx.r10.s64 = 92;
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// stb r10,3(r30)
	REX_STORE_U8(r30.u32 + 3, ctx.r10.u8);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
loc_826A51D4:
	// li r10,116
	ctx.r10.s64 = 116;
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r30,20
	ctx.r11.s64 = r30.s64 + 20;
	// stw r29,84(r31)
	REX_STORE_U32(r31.u32 + 84, r29.u32);
	// subf r28,r29,r11
	r28.u64 = ctx.r11.u64 - r29.u64;
	// bl 0x823eea88
	ctx.lr = 0x826A51F0;
	sub_823EEA88(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x826b08f0
	ctx.lr = 0x826A5200;
	sub_826B08F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a5220
	if (ctx.cr0.eq) goto loc_826A5220;
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
	ctx.lr = 0x826A5220;
	sub_8269CBF8(ctx, base);
loc_826A5220:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r11,-14240
	ctx.r5.s64 = ctx.r11.s64 + -14240;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x826b06b8
	ctx.lr = 0x826A5234;
	sub_826B06B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a5268
	if (ctx.cr0.eq) goto loc_826A5268;
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
	ctx.lr = 0x826A5254;
	sub_8269CBF8(ctx, base);
loc_826A5254:
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// bl 0x826a5018
	ctx.lr = 0x826A5260;
	sub_826A5018(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826a5354
	if (!ctx.cr0.eq) goto loc_826A5354;
loc_826A5268:
	// bl 0x826aad40
	ctx.lr = 0x826A526C;
	sub_826AAD40(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r29,88(r31)
	REX_STORE_U32(r31.u32 + 88, r29.u32);
	// bne 0x826a5284
	if (!ctx.cr0.eq) goto loc_826A5284;
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// b 0x826a5358
	goto loc_826A5358;
loc_826A5284:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// bl 0x826a33d0
	ctx.lr = 0x826A5290;
	sub_826A33D0(ctx, base);
	// lwz r28,0(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826a33d0
	ctx.lr = 0x826A5298;
	sub_826A33D0(ctx, base);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
loc_826A529C:
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,384
	ctx.r7.s64 = 384;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// ori r5,r5,34114
	ctx.r5.u64 = ctx.r5.u64 | 34114;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x826b11d8
	ctx.lr = 0x826A52B8;
	sub_826B11D8(ctx, base);
	// cmpwi cr6,r3,17
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 17, ctx.xer);
	// bne cr6,0x826a52e4
	if (!ctx.cr6.eq) goto loc_826A52E4;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x826a5018
	ctx.lr = 0x826A52D4;
	sub_826A5018(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826a52e4
	if (!ctx.cr0.eq) goto loc_826A52E4;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x826a529c
	goto loc_826A529C;
loc_826A52E4:
	// bl 0x826a33d0
	ctx.lr = 0x826A52E8;
	sub_826A33D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826a52fc
	if (!ctx.cr6.eq) goto loc_826A52FC;
	// bl 0x826a33d0
	ctx.lr = 0x826A52F8;
	sub_826A33D0(ctx, base);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
loc_826A52FC:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x826a5358
	if (ctx.cr6.eq) goto loc_826A5358;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b0a98
	ctx.lr = 0x826A5310;
	sub_826B0A98(ctx, base);
	// stw r3,28(r29)
	REX_STORE_U32(r29.u32 + 28, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x826a5328
	if (!ctx.cr0.eq) goto loc_826A5328;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// bl 0x826aa6a0
	ctx.lr = 0x826A5324;
	sub_826AA6A0(ctx, base);
	// b 0x826a5358
	goto loc_826A5358;
loc_826A5328:
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// stw r27,4(r29)
	REX_STORE_U32(r29.u32 + 4, r27.u32);
	// stw r27,0(r29)
	REX_STORE_U32(r29.u32 + 0, r27.u32);
	// stw r27,8(r29)
	REX_STORE_U32(r29.u32 + 8, r27.u32);
	// lwz r11,9476(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 9476);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r11,16(r29)
	REX_STORE_U32(r29.u32 + 16, ctx.r11.u32);
	// stw r29,0(r26)
	REX_STORE_U32(r26.u32 + 0, r29.u32);
	// b 0x826a5358
	goto loc_826A5358;
loc_826A5354:
	// lwz r29,88(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 88);
loc_826A5358:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = r31.s64 + 176;
	// bl 0x826a53a4
	ctx.lr = 0x826A5364;
	ctx.r25 = r25;
	ctx.r26 = r26;
	ctx.r27 = r27;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_826A53A4(ctx, base);
	r25 = ctx.r25;
	r26 = ctx.r26;
	r27 = ctx.r27;
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r30,96(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x826a5378
	if (ctx.cr6.eq) goto loc_826A5378;
	// bl 0x826a33d0
	ctx.lr = 0x826A5374;
	sub_826A33D0(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
loc_826A5378:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_826A537C:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_826B6600) {
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
	// beq cr6,0x826b6638
	if (ctx.cr6.eq) goto loc_826B6638;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B6638;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B6638:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B664C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,44(r30)
	REX_STORE_U32(r30.u32 + 44, r31.u32);
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

DEFINE_REX_FUNC(sub_826BA018) {
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
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826BA044;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,316(r31)
	REX_STORE_U32(r31.u32 + 316, ctx.r9.u32);
	// std r30,304(r31)
	REX_STORE_U64(r31.u32 + 304, r30.u64);
	// lwz r7,120(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 120);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x826BA064;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,20(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x826BA078;
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

DEFINE_REX_FUNC(sub_826BC4A8) {
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
	// addi r3,r3,136
	ctx.r3.s64 = ctx.r3.s64 + 136;
	// stw r3,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826BC4D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r5,r7,10
	ctx.r5.u64 = ctx.r7.u64 | 10;
	// and r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 & ctx.r5.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826BFF90) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x826bffb0
	if (ctx.cr6.eq) goto loc_826BFFB0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,592(r11)
	REX_STORE_U32(ctx.r11.u32 + 592, ctx.r4.u32);
	// stw r10,552(r11)
	REX_STORE_U32(ctx.r11.u32 + 552, ctx.r10.u32);
	// blr 
	return;
loc_826BFFB0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,552(r11)
	REX_STORE_U32(ctx.r11.u32 + 552, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C1800) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,284
	ctx.r3.s64 = ctx.r3.s64 + 284;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C19E8) {
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
	// lwz r8,68(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 68);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_826C2290) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826c22c8
	if (ctx.cr6.eq) goto loc_826C22C8;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C22C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826C22C8:
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826c22ec
	if (ctx.cr6.eq) goto loc_826C22EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C22E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
loc_826C22EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
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

DEFINE_REX_FUNC(sub_826C6700) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r4,1524(r3)
	REX_STORE_U8(ctx.r3.u32 + 1524, ctx.r4.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,1528(r11)
	REX_STORE_U32(ctx.r11.u32 + 1528, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C6958) {
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
	ctx.lr = 0x826C6960;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,1524(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1524);
	// lis r24,80
	r24.s64 = 5242880;
	// lwz r26,1528(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 1528);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// extsb r30,r11
	r30.s64 = ctx.r11.s8;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// ori r24,r24,14
	r24.u64 = r24.u64 | 14;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x826c6a4c
	if (ctx.cr6.eq) goto loc_826C6A4C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x826c6a4c
	if (ctx.cr6.eq) goto loc_826C6A4C;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// li r31,1
	r31.s64 = 1;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// ble cr6,0x826c6a08
	if (!ctx.cr6.gt) goto loc_826C6A08;
	// addi r29,r26,4
	r29.s64 = r26.s64 + 4;
loc_826C69B0:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x826c69cc
	if (ctx.cr6.lt) goto loc_826C69CC;
	// bne cr6,0x826c6a14
	if (!ctx.cr6.eq) goto loc_826C6A14;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x826c6a24
	if (!ctx.cr6.eq) goto loc_826C6A24;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x826c69f8
	goto loc_826C69F8;
loc_826C69CC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,45
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 45, ctx.xer);
	// bne cr6,0x826c6a3c
	if (!ctx.cr6.eq) goto loc_826C6A3C;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x826c6718
	ctx.lr = 0x826C69E8;
	sub_826C6718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826c69f4
	if (!ctx.cr6.eq) goto loc_826C69F4;
	// li r27,1
	r27.s64 = 1;
loc_826C69F4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_826C69F8:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(r31.s32, r30.s32, ctx.xer);
	// blt cr6,0x826c69b0
	if (ctx.cr6.lt) goto loc_826C69B0;
loc_826C6A08:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_826C6A14:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,179
	ctx.r3.u64 = ctx.r3.u64 | 179;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_826C6A24:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwzx r10,r11,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_826C6A3C:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,190
	ctx.r3.u64 = ctx.r3.u64 | 190;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_826C6A4C:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,191
	ctx.r3.u64 = ctx.r3.u64 | 191;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_826D1CA0) {
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
	ctx.lr = 0x826D1CA8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x826d1cd4
	if (ctx.cr6.eq) goto loc_826D1CD4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x826d1ce0
	if (!ctx.cr6.eq) goto loc_826D1CE0;
loc_826D1CD4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x826d1e20
	goto loc_826D1E20;
loc_826D1CE0:
	// lwz r10,368(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 368);
	// lwz r9,360(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 360);
	// lhz r29,0(r27)
	r29.u64 = REX_LOAD_U16(r27.u32 + 0);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// sth r29,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r29.u16);
	// mullw r7,r8,r29
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(r29.s32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// cmpw cr6,r7,r28
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r28.s32, ctx.xer);
	// bgt cr6,0x826d1e34
	if (ctx.cr6.gt) goto loc_826D1E34;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// bgt cr6,0x826d1e34
	if (ctx.cr6.gt) goto loc_826D1E34;
	// lwz r10,352(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 352);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x826d1d8c
	if (!ctx.cr6.eq) goto loc_826D1D8C;
	// lwz r10,420(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 420);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826d1d34
	if (ctx.cr6.eq) goto loc_826D1D34;
	// lwz r10,424(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 424);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x826d1d60
	if (!ctx.cr6.eq) goto loc_826D1D60;
loc_826D1D34:
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bne cr6,0x826d1d54
	if (!ctx.cr6.eq) goto loc_826D1D54;
	// bl 0x8261fa98
	ctx.lr = 0x826D1D50;
	sub_8261FA98(ctx, base);
	// b 0x826d1d58
	goto loc_826D1D58;
loc_826D1D54:
	// bl 0x8261f448
	ctx.lr = 0x826D1D58;
	sub_8261F448(ctx, base);
loc_826D1D58:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d1e20
	if (ctx.cr6.lt) goto loc_826D1E20;
loc_826D1D60:
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826d1d8c
	if (!ctx.cr6.eq) goto loc_826D1D8C;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82620090
	ctx.lr = 0x826D1D80;
	sub_82620090(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d1e1c
	if (ctx.cr6.lt) goto loc_826D1E1C;
	// lhz r29,80(r1)
	r29.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
loc_826D1D8C:
	// lwz r11,316(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826d1dc4
	if (ctx.cr6.eq) goto loc_826D1DC4;
	// clrlwi r11,r29,16
	ctx.r11.u64 = r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d1dc4
	if (ctx.cr6.eq) goto loc_826D1DC4;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cdd38
	ctx.lr = 0x826D1DB8;
	sub_826CDD38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d1e1c
	if (ctx.cr6.lt) goto loc_826D1E1C;
	// lhz r29,80(r1)
	r29.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
loc_826D1DC4:
	// lwz r11,324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826d1dfc
	if (ctx.cr6.eq) goto loc_826D1DFC;
	// clrlwi r11,r29,16
	ctx.r11.u64 = r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d1dfc
	if (ctx.cr6.eq) goto loc_826D1DFC;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cdf08
	ctx.lr = 0x826D1DF0;
	sub_826CDF08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d1e1c
	if (ctx.cr6.lt) goto loc_826D1E1C;
	// lhz r29,80(r1)
	r29.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
loc_826D1DFC:
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 356);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826d1e20
	if (!ctx.cr6.eq) goto loc_826D1E20;
	// clrlwi r5,r29,16
	ctx.r5.u64 = r29.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826d12f8
	ctx.lr = 0x826D1E18;
	sub_826D12F8(ctx, base);
	// b 0x826d1e20
	goto loc_826D1E20;
loc_826D1E1C:
	// lhz r29,80(r1)
	r29.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
loc_826D1E20:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x826d1e3c
	if (ctx.cr6.eq) goto loc_826D1E3C;
	// sth r29,0(r27)
	REX_STORE_U16(r27.u32 + 0, r29.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
loc_826D1E34:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_826D1E3C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826DD508) {
	REX_FUNC_PROLOGUE();
	// b 0x826dd148
	sub_826DD148(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826DD888) {
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
	ctx.lr = 0x826DD890;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r29,44(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x826de4e0
	ctx.lr = 0x826DD8D0;
	sub_826DE4E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826ddacc
	if (ctx.cr6.lt) goto loc_826DDACC;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826dd8f4
	if (!ctx.cr6.eq) goto loc_826DD8F4;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
loc_826DD8F4:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826ddac4
	if (ctx.cr6.eq) goto loc_826DDAC4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826dd358
	ctx.lr = 0x826DD914;
	sub_826DD358(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826ddacc
	if (ctx.cr6.lt) goto loc_826DDACC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r26,1
	r26.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826dda20
	if (!ctx.cr6.eq) goto loc_826DDA20;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826dd970
	if (ctx.cr6.eq) goto loc_826DD970;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 16);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826dd2e8
	ctx.lr = 0x826DD94C;
	sub_826DD2E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826ddacc
	if (ctx.cr6.lt) goto loc_826DDACC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826dd970
	if (ctx.cr6.eq) goto loc_826DD970;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_826DD970:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826dd2e8
	ctx.lr = 0x826DD984;
	sub_826DD2E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826ddacc
	if (ctx.cr6.lt) goto loc_826DDACC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826dda20
	if (!ctx.cr6.eq) goto loc_826DDA20;
	// std r4,48(r29)
	REX_STORE_U64(r29.u32 + 48, ctx.r4.u64);
	// stw r26,56(r29)
	REX_STORE_U32(r29.u32 + 56, r26.u32);
	// lwz r11,76(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 76);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826DD9B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826ddacc
	if (ctx.cr6.lt) goto loc_826DDACC;
	// lwz r11,76(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 76);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826DD9D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826ddacc
	if (ctx.cr6.lt) goto loc_826DDACC;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,40(r29)
	REX_STORE_U64(r29.u32 + 40, ctx.r11.u64);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x826dd148
	ctx.lr = 0x826DD9FC;
	sub_826DD148(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826ddacc
	if (ctx.cr6.lt) goto loc_826DDACC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826dd2e8
	ctx.lr = 0x826DDA18;
	sub_826DD2E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826ddacc
	if (ctx.cr6.lt) goto loc_826DDACC;
loc_826DDA20:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// ld r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// subf r6,r10,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r10.u64;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// cmpld cr6,r6,r7
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r7.u64, ctx.xer);
	// bge cr6,0x826dda68
	if (!ctx.cr6.lt) goto loc_826DDA68;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_826DDA68:
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r7.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// subf r7,r10,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r7,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// ld r4,8(r5)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// subf r11,r11,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// stw r26,8(r31)
	REX_STORE_U32(r31.u32 + 8, r26.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// bne cr6,0x826ddacc
	if (!ctx.cr6.eq) goto loc_826DDACC;
loc_826DDAC4:
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
loc_826DDACC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826EE5A0) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c94
	ctx.lr = 0x826EE5A8;
	// stfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -136, f29.u64);
	// stfd f30,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, f30.u64);
	// stfd f31,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,284(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// li r19,0
	r19.s64 = 0;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// blt cr6,0x826eeaec
	if (ctx.cr6.lt) goto loc_826EEAEC;
	// beq cr6,0x826ee600
	if (ctx.cr6.eq) goto loc_826EE600;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// blt cr6,0x826ee5f8
	if (ctx.cr6.lt) goto loc_826EE5F8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f29,-136(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x826a1ce4
	return;
loc_826EE5F8:
	// li r20,1
	r20.s64 = 1;
	// b 0x826ee604
	goto loc_826EE604;
loc_826EE600:
	// li r20,0
	r20.s64 = 0;
loc_826EE604:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826ee61c
	if (!ctx.cr6.eq) goto loc_826EE61C;
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826eeaec
	if (ctx.cr6.eq) goto loc_826EEAEC;
loc_826EE61C:
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826ee630
	if (!ctx.cr6.eq) goto loc_826EE630;
	// lis r22,16
	r22.s64 = 1048576;
	// b 0x826ee640
	goto loc_826EE640;
loc_826EE630:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// rlwinm r10,r5,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3FC;
	// addi r9,r11,30208
	ctx.r9.s64 = ctx.r11.s64 + 30208;
	// lwzx r22,r10,r9
	r22.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_826EE640:
	// lwz r24,120(r27)
	r24.u64 = REX_LOAD_U32(r27.u32 + 120);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x826ee678
	if (!ctx.cr6.gt) goto loc_826EE678;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826EE658:
	// lwz r9,320(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 320);
	// lwz r6,392(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 392);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
	// lwz r4,60(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 60);
	// stwx r4,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826ee658
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826EE658;
loc_826EE678:
	// srawi r11,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 8;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bge cr6,0x826ee690
	if (!ctx.cr6.lt) goto loc_826EE690;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x826ee69c
	goto loc_826EE69C;
loc_826EE690:
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// ble cr6,0x826ee69c
	if (!ctx.cr6.gt) goto loc_826EE69C;
	// li r10,16
	ctx.r10.s64 = 16;
loc_826EE69C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x826eeaec
	if (ctx.cr6.lt) goto loc_826EEAEC;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_826EE6B4:
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r6,r11,r10
	ctx.r6.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// stwu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// andc r4,r10,r5
	ctx.r4.u64 = ctx.r10.u64 & ~ctx.r5.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bdnz 0x826ee6b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826EE6B4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826eeaec
	if (!ctx.cr6.gt) goto loc_826EEAEC;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,127
	ctx.r8.s64 = 8323072;
	// addi r26,r1,148
	r26.s64 = ctx.r1.s64 + 148;
	// lfs f31,3720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	f31.f64 = double(temp.f32);
	// ori r21,r8,65535
	r21.u64 = ctx.r8.u64 | 65535;
	// lfs f30,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	f30.f64 = double(temp.f32);
	// lfs f29,14888(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 14888);
	f29.f64 = double(temp.f32);
loc_826EE708:
	// lwz r29,-4(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + -4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r28,0(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x826ee780
	if (!ctx.cr6.gt) goto loc_826EE780;
	// lwz r8,392(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 392);
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
loc_826EE728:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// bge cr6,0x826ee768
	if (!ctx.cr6.lt) goto loc_826EE768;
	// subf r11,r29,r28
	ctx.r11.u64 = r28.u64 - r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_826EE744:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x826ee754
	if (ctx.cr6.gt) goto loc_826EE754;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_826EE754:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x826ee760
	if (!ctx.cr6.gt) goto loc_826EE760;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_826EE760:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x826ee744
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826EE744;
loc_826EE768:
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x826ee774
	if (!ctx.cr6.gt) goto loc_826EE774;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_826EE774:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x826ee728
	if (!ctx.cr0.eq) goto loc_826EE728;
loc_826EE780:
	// lwz r11,124(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826ee794
	if (!ctx.cr6.gt) goto loc_826EE794;
	// slw r5,r5,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x826ee7a0
	goto loc_826EE7A0;
loc_826EE794:
	// bge cr6,0x826ee7a0
	if (!ctx.cr6.lt) goto loc_826EE7A0;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// sraw r5,r5,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r5.s64 = ctx.r5.s32 >> temp.u32;
loc_826EE7A0:
	// cmpw cr6,r5,r21
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r21.s32, ctx.xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// blt cr6,0x826ee7b0
	if (ctx.cr6.lt) goto loc_826EE7B0;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_826EE7B0:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ee85c
	if (ctx.cr6.eq) goto loc_826EE85C;
	// lwz r9,196(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 196);
	// rlwinm r11,r20,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// extsw r9,r22
	ctx.r9.s64 = r22.s32;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x826ee838
	if (ctx.cr6.eq) goto loc_826EE838;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// lwz r6,260(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 260);
	// lwz r10,280(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 280);
	// mulld r3,r7,r9
	ctx.r3.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r9.u64);
	// lwz r8,264(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 264);
	// lwz r4,296(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 296);
	// lwzx r7,r6,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// sradi r3,r3,20
	ctx.xer.ca = (ctx.r3.s64 < 0) & ((ctx.r3.u64 & 0xFFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s64 >> 20;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// srawi r11,r10,13
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 13;
	// clrlwi r3,r10,19
	ctx.r3.u64 = ctx.r10.u32 & 0x1FFF;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r11,r7,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// mullw r8,r10,r3
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// sraw r10,r8,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r10.s64 = ctx.r8.s32 >> temp.u32;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r4,r7
	ctx.r4.s64 = ctx.r7.s32;
	// mulld r3,r4,r9
	ctx.r3.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r9.u64);
	// sradi r11,r3,20
	ctx.xer.ca = (ctx.r3.s64 < 0) & ((ctx.r3.u64 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s64 >> 20;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// b 0x826ee868
	goto loc_826EE868;
loc_826EE838:
	// lwz r10,192(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 192);
	// lwz r8,280(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 280);
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r6,r8,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// extsw r4,r7
	ctx.r4.s64 = ctx.r7.s32;
	// mulld r3,r4,r9
	ctx.r3.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r9.u64);
	// sradi r11,r3,20
	ctx.xer.ca = (ctx.r3.s64 < 0) & ((ctx.r3.u64 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s64 >> 20;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// b 0x826ee868
	goto loc_826EE868;
loc_826EE85C:
	// lis r6,127
	ctx.r6.s64 = 8323072;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// ori r6,r6,65534
	ctx.r6.u64 = ctx.r6.u64 | 65534;
loc_826EE868:
	// subf r30,r29,r28
	r30.u64 = r28.u64 - r29.u64;
	// lwz r31,172(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 172);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x826ee4b8
	ctx.lr = 0x826EE87C;
	sub_826EE4B8(ctx, base);
	// srawi. r11,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r11.s64 = r30.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826ee8a0
	if (ctx.cr0.eq) goto loc_826EE8A0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x826ee8a0
	if (!ctx.cr6.gt) goto loc_826EE8A0;
loc_826EE890:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x826ee890
	if (ctx.cr6.gt) goto loc_826EE890;
loc_826EE8A0:
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r31.s32, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// bgt cr6,0x826ee8b0
	if (ctx.cr6.gt) goto loc_826EE8B0;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_826EE8B0:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x826ee8bc
	if (ctx.cr6.gt) goto loc_826EE8BC;
	// li r11,2
	ctx.r11.s64 = 2;
loc_826EE8BC:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x826ee8dc
	if (!ctx.cr6.gt) goto loc_826EE8DC;
loc_826EE8CC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x826ee8cc
	if (ctx.cr6.gt) goto loc_826EE8CC;
loc_826EE8DC:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f12,f29
	ctx.f13.f64 = double(float(ctx.f12.f64 * f29.f64));
	// ble cr6,0x826eeadc
	if (!ctx.cr6.gt) goto loc_826EEADC;
	// rlwinm r6,r29,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
loc_826EE908:
	// lwz r11,392(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 392);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bge cr6,0x826eead0
	if (!ctx.cr6.lt) goto loc_826EEAD0;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x826eea6c
	if (ctx.cr6.lt) goto loc_826EEA6C;
	// addi r8,r28,-3
	ctx.r8.s64 = r28.s64 + -3;
loc_826EE92C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsw r4,r10
	ctx.r4.s64 = ctx.r10.s32;
	// std r4,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x826ee964
	if (!ctx.cr6.lt) goto loc_826EE964;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x826ee974
	goto loc_826EE974;
loc_826EE964:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_826EE974:
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x826ee9b0
	if (!ctx.cr6.lt) goto loc_826EE9B0;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x826ee9c0
	goto loc_826EE9C0;
loc_826EE9B0:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_826EE9C0:
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x826ee9fc
	if (!ctx.cr6.lt) goto loc_826EE9FC;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x826eea0c
	goto loc_826EEA0C;
loc_826EE9FC:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_826EEA0C:
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r10,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x826eea48
	if (!ctx.cr6.lt) goto loc_826EEA48;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x826eea58
	goto loc_826EEA58;
loc_826EEA48:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_826EEA58:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x826ee92c
	if (ctx.cr6.lt) goto loc_826EE92C;
loc_826EEA6C:
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r28.s32, ctx.xer);
	// bge cr6,0x826eead0
	if (!ctx.cr6.lt) goto loc_826EEAD0;
	// subf r10,r9,r28
	ctx.r10.u64 = r28.u64 - ctx.r9.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826EEA80:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x826eeab8
	if (!ctx.cr6.lt) goto loc_826EEAB8;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x826eeac8
	goto loc_826EEAC8;
loc_826EEAB8:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_826EEAC8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x826eea80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826EEA80;
loc_826EEAD0:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x826ee908
	if (!ctx.cr0.eq) goto loc_826EE908;
loc_826EEADC:
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// stw r3,172(r27)
	REX_STORE_U32(r27.u32 + 172, ctx.r3.u32);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// bne 0x826ee708
	if (!ctx.cr0.eq) goto loc_826EE708;
loc_826EEAEC:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_82724948) {
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
	ctx.lr = 0x82724950;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82724ad0
	if (ctx.cr6.eq) goto loc_82724AD0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82724ad0
	if (ctx.cr6.eq) goto loc_82724AD0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82724ad0
	if (ctx.cr6.eq) goto loc_82724AD0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82724ad0
	if (ctx.cr6.eq) goto loc_82724AD0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82724ad0
	if (ctx.cr6.eq) goto loc_82724AD0;
	// lwz r11,296(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 296);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x827249bc
	if (!ctx.cr6.eq) goto loc_827249BC;
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// bl 0x82723af0
	ctx.lr = 0x827249B0;
	sub_82723AF0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
loc_827249BC:
	// li r26,1
	r26.s64 = 1;
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// stw r11,252(r31)
	REX_STORE_U32(r31.u32 + 252, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r26,128(r31)
	REX_STORE_U32(r31.u32 + 128, r26.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82723d60
	ctx.lr = 0x827249E8;
	sub_82723D60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82724ad0
	if (ctx.cr6.eq) goto loc_82724AD0;
	// srawi r11,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r11.s64 = r29.s32 >> 1;
	// lwz r7,308(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 308);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lwz r4,304(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 304);
	// addze r29,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r29.s64 = temp.s64;
	// srawi r10,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r10.s64 = r30.s32 >> 1;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// addze r30,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	r30.s64 = temp.s64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82722b38
	ctx.lr = 0x82724A20;
	sub_82722B38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82724ad4
	if (!ctx.cr6.eq) goto loc_82724AD4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827241d8
	ctx.lr = 0x82724A38;
	sub_827241D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82724ad0
	if (ctx.cr6.eq) goto loc_82724AD0;
	// stw r26,92(r31)
	REX_STORE_U32(r31.u32 + 92, r26.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r26,252(r31)
	REX_STORE_U32(r31.u32 + 252, r26.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82723d60
	ctx.lr = 0x82724A58;
	sub_82723D60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82724ad0
	if (ctx.cr6.eq) goto loc_82724AD0;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// lwz r7,308(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 308);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// lwz r4,304(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 304);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82722b38
	ctx.lr = 0x82724A80;
	sub_82722B38(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82724ac4
	if (!ctx.cr6.eq) goto loc_82724AC4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827241d8
	ctx.lr = 0x82724A9C;
	sub_827241D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82724ad0
	if (ctx.cr6.eq) goto loc_82724AD0;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r9.u32);
	// stw r8,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r8.u32);
loc_82724AC4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
loc_82724AD0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82724AD4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8272F568) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cbc
	ctx.lr = 0x8272F570;
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f29.u64);
	// stfd f30,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// lfs f0,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bgt cr6,0x8272f630
	if (ctx.cr6.gt) goto loc_8272F630;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82730168
	if (!ctx.cr6.gt) goto loc_82730168;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,3704(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// lfd f0,32424(r8)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 32424);
	// fsubs f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fadd f10,f1,f0
	ctx.f10.f64 = ctx.f1.f64 + ctx.f0.f64;
	// fadd f9,f12,f0
	ctx.f9.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fadd f8,f11,f0
	ctx.f8.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fctiwz f7,f10
	ctx.f7.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f6,f9
	ctx.f6.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// fctiwz f5,f8
	ctx.f5.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f5,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f5.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,92(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_8272F5F8:
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r8,r6,r11
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stwx r9,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stwx r7,r4,r11
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stwx r9,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8272f5f8
	if (ctx.cr6.lt) goto loc_8272F5F8;
	// b 0x82730168
	goto loc_82730168;
loc_8272F630:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,25700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 25700);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// blt cr6,0x8272f6b0
	if (ctx.cr6.lt) goto loc_8272F6B0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82730168
	if (!ctx.cr6.gt) goto loc_82730168;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfd f0,32424(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 32424);
	// fadd f0,f31,f0
	ctx.f0.f64 = f31.f64 + ctx.f0.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_8272F66C:
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r7,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u32);
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stwx r9,r6,r11
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r5,28(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r8,-1
	ctx.r4.s64 = ctx.r8.s64 + -1;
	// stwx r4,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r4.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stwx r9,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8272f66c
	if (ctx.cr6.lt) goto loc_8272F66C;
	// b 0x82730168
	goto loc_82730168;
loc_8272F6B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,30752(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 30752);
	// fmul f1,f3,f0
	ctx.f1.f64 = ctx.f3.f64 * ctx.f0.f64;
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f29,f9,f10
	f29.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// bl 0x8269ff50
	ctx.lr = 0x8272F6F4;
	sub_8269FF50(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// fcmpu cr6,f10,f29
	ctx.cr6.compare(ctx.f10.f64, f29.f64);
	// lfd f8,88(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fneg f12,f6
	ctx.f12.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// bge cr6,0x8272f724
	if (!ctx.cr6.lt) goto loc_8272F724;
	// fmuls f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// b 0x8272f740
	goto loc_8272F740;
loc_8272F724:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fneg f0,f11
	ctx.f0.u64 = ctx.f11.u64 ^ 0x8000000000000000;
loc_8272F740:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f11,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(f30.f64 - ctx.f0.f64));
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// lfd f0,32424(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 32424);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// fadd f13,f31,f0
	ctx.f13.f64 = f31.f64 + ctx.f0.f64;
	// lfd f8,80(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// fctiwz f9,f13
	ctx.f9.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// frsp f13,f7
	ctx.f13.f64 = double(float(ctx.f7.f64));
	// fcmpu cr6,f30,f13
	ctx.cr6.compare(f30.f64, ctx.f13.f64);
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f6,88(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fadds f12,f4,f12
	ctx.f12.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// bgt cr6,0x8272f798
	if (ctx.cr6.gt) goto loc_8272F798;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
loc_8272F798:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r3,4
	ctx.r3.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,-4
	ctx.r4.s64 = -4;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x8272f89c
	if (ctx.cr6.lt) goto loc_8272F89C;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8272F7C4:
	// addi r30,r10,-1
	r30.s64 = ctx.r10.s64 + -1;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r29,r10,1
	r29.s64 = ctx.r10.s64 + 1;
	// extsw r30,r30
	r30.s64 = r30.s32;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r30,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, r30.u64);
	// extsw r30,r29
	r30.s64 = r29.s32;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r30,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r30.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// lfd f5,96(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// lfd f3,104(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// frsp f13,f6
	ctx.f13.f64 = double(float(ctx.f6.f64));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// frsp f9,f4
	ctx.f9.f64 = double(float(ctx.f4.f64));
	// fsubs f6,f13,f30
	ctx.f6.f64 = double(float(ctx.f13.f64 - f30.f64));
	// frsp f8,f2
	ctx.f8.f64 = double(float(ctx.f2.f64));
	// fsubs f1,f7,f30
	ctx.f1.f64 = double(float(ctx.f7.f64 - f30.f64));
	// fsubs f5,f9,f30
	ctx.f5.f64 = double(float(ctx.f9.f64 - f30.f64));
	// fmadds f2,f6,f10,f31
	ctx.f2.f64 = double(float(std::fma(ctx.f6.f64, ctx.f10.f64, f31.f64)));
	// fsubs f4,f8,f30
	ctx.f4.f64 = double(float(ctx.f8.f64 - f30.f64));
	// fmadds f7,f1,f10,f31
	ctx.f7.f64 = double(float(std::fma(ctx.f1.f64, ctx.f10.f64, f31.f64)));
	// fmadds f1,f5,f10,f31
	ctx.f1.f64 = double(float(std::fma(ctx.f5.f64, ctx.f10.f64, f31.f64)));
	// fadd f8,f2,f0
	ctx.f8.f64 = ctx.f2.f64 + ctx.f0.f64;
	// fmadds f13,f4,f10,f31
	ctx.f13.f64 = double(float(std::fma(ctx.f4.f64, ctx.f10.f64, f31.f64)));
	// fadd f3,f7,f0
	ctx.f3.f64 = ctx.f7.f64 + ctx.f0.f64;
	// fadd f7,f1,f0
	ctx.f7.f64 = ctx.f1.f64 + ctx.f0.f64;
	// fctiwz f5,f8
	ctx.f5.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f5,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.f5.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// fadd f6,f13,f0
	ctx.f6.f64 = ctx.f13.f64 + ctx.f0.f64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// fctiwz f4,f7
	ctx.f4.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfiwx f4,r7,r3
	REX_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.f4.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// fctiwz f9,f3
	ctx.f9.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// fctiwz f3,f6
	ctx.f3.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfiwx f3,r7,r4
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.f3.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stfiwx f9,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.f9.u32);
	// blt cr6,0x8272f7c4
	if (ctx.cr6.lt) goto loc_8272F7C4;
loc_8272F89C:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8272f8e8
	if (!ctx.cr6.lt) goto loc_8272F8E8;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8272F8B0:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fsubs f7,f8,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 - f30.f64));
	// fmadds f6,f7,f10,f31
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, ctx.f10.f64, f31.f64)));
	// fadd f5,f6,f0
	ctx.f5.f64 = ctx.f6.f64 + ctx.f0.f64;
	// fctiwz f4,f5
	ctx.f4.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfiwx f4,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.f4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8272f8b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272F8B0;
loc_8272F8E8:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// frsp f13,f9
	ctx.f13.f64 = double(float(ctx.f9.f64));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bgt cr6,0x8272f90c
	if (ctx.cr6.gt) goto loc_8272F90C;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
loc_8272F90C:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8272f9b8
	if (!ctx.cr6.lt) goto loc_8272F9B8;
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8272f980
	if (ctx.cr6.lt) goto loc_8272F980;
	// fadd f13,f12,f0
	ctx.f13.f64 = ctx.f12.f64 + ctx.f0.f64;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fctiwz f9,f13
	ctx.f9.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f9.u64);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8272F944:
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// stwx r9,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r9,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r9,-4(r7)
	REX_STORE_U32(ctx.r7.u32 + -4, ctx.r9.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stwx r9,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// blt cr6,0x8272f944
	if (ctx.cr6.lt) goto loc_8272F944;
loc_8272F980:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8272f9b8
	if (!ctx.cr6.lt) goto loc_8272F9B8;
	// fadd f13,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f12.f64 + ctx.f0.f64;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8272F9A8:
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8272f9a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272F9A8;
loc_8272F9B8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lfs f9,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f9.f64 = double(temp.f32);
	// bge cr6,0x8272fa00
	if (!ctx.cr6.lt) goto loc_8272FA00;
	// fadds f13,f31,f9
	ctx.f13.f64 = double(float(f31.f64 + ctx.f9.f64));
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fadd f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f8,f12
	ctx.f8.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f8.u64);
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8272F9E4:
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8272f9e4
	if (ctx.cr6.lt) goto loc_8272F9E4;
loc_8272FA00:
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f30,f13
	ctx.cr6.compare(f30.f64, ctx.f13.f64);
	// bgt cr6,0x8272fa20
	if (ctx.cr6.gt) goto loc_8272FA20;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
loc_8272FA20:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x8272fa8c
	if (ctx.cr6.lt) goto loc_8272FA8C;
	// fadd f13,f31,f0
	ctx.f13.f64 = f31.f64 + ctx.f0.f64;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// li r10,0
	ctx.r10.s64 = 0;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8272FA50:
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// stwx r9,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r9,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r9,-4(r7)
	REX_STORE_U32(ctx.r7.u32 + -4, ctx.r9.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stwx r9,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// blt cr6,0x8272fa50
	if (ctx.cr6.lt) goto loc_8272FA50;
loc_8272FA8C:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8272fac4
	if (!ctx.cr6.lt) goto loc_8272FAC4;
	// fadd f13,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64 + ctx.f0.f64;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8272FAB4:
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8272fab4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272FAB4;
loc_8272FAC4:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bgt cr6,0x8272fae8
	if (ctx.cr6.gt) goto loc_8272FAE8;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
loc_8272FAE8:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8272fc40
	if (!ctx.cr6.lt) goto loc_8272FC40;
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8272fbf0
	if (ctx.cr6.lt) goto loc_8272FBF0;
	// fdivs f13,f9,f10
	ctx.f13.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8272FB18:
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r30,r10,-1
	r30.s64 = ctx.r10.s64 + -1;
	// std r8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// addi r29,r10,1
	r29.s64 = ctx.r10.s64 + 1;
	// extsw r30,r30
	r30.s64 = r30.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r30,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r30.u64);
	// extsw r30,r29
	r30.s64 = r29.s32;
	// std r8,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f8,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r30,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, r30.u64);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// lfd f12,104(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// frsp f1,f6
	ctx.f1.f64 = double(float(ctx.f6.f64));
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfd f7,88(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// lfd f4,80(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// fsubs f7,f1,f30
	ctx.f7.f64 = double(float(ctx.f1.f64 - f30.f64));
	// frsp f2,f11
	ctx.f2.f64 = double(float(ctx.f11.f64));
	// frsp f12,f5
	ctx.f12.f64 = double(float(ctx.f5.f64));
	// frsp f11,f3
	ctx.f11.f64 = double(float(ctx.f3.f64));
	// fnmsubs f3,f7,f13,f31
	ctx.f3.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f13.f64, -f31.f64)));
	// fsubs f8,f2,f30
	ctx.f8.f64 = double(float(ctx.f2.f64 - f30.f64));
	// fsubs f6,f12,f30
	ctx.f6.f64 = double(float(ctx.f12.f64 - f30.f64));
	// fsubs f5,f11,f30
	ctx.f5.f64 = double(float(ctx.f11.f64 - f30.f64));
	// fadd f11,f3,f0
	ctx.f11.f64 = ctx.f3.f64 + ctx.f0.f64;
	// fnmsubs f4,f8,f13,f31
	ctx.f4.f64 = double(float(-std::fma(ctx.f8.f64, ctx.f13.f64, -f31.f64)));
	// fnmsubs f2,f6,f13,f31
	ctx.f2.f64 = double(float(-std::fma(ctx.f6.f64, ctx.f13.f64, -f31.f64)));
	// fnmsubs f1,f5,f13,f31
	ctx.f1.f64 = double(float(-std::fma(ctx.f5.f64, ctx.f13.f64, -f31.f64)));
	// fadd f12,f4,f0
	ctx.f12.f64 = ctx.f4.f64 + ctx.f0.f64;
	// fadd f8,f2,f0
	ctx.f8.f64 = ctx.f2.f64 + ctx.f0.f64;
	// fadd f7,f1,f0
	ctx.f7.f64 = ctx.f1.f64 + ctx.f0.f64;
	// fctiwz f4,f11
	ctx.f4.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// fctiwz f6,f12
	ctx.f6.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f6,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.f6.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// fctiwz f5,f8
	ctx.f5.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f5,r7,r3
	REX_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.f5.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stfiwx f4,r7,r4
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.f4.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// fctiwz f3,f7
	ctx.f3.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stfiwx f3,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.f3.u32);
	// blt cr6,0x8272fb18
	if (ctx.cr6.lt) goto loc_8272FB18;
loc_8272FBF0:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8272fc40
	if (!ctx.cr6.lt) goto loc_8272FC40;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// fdivs f13,f9,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8272FC08:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f12,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// fsubs f7,f8,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 - f30.f64));
	// fnmsubs f6,f7,f13,f31
	ctx.f6.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f13.f64, -f31.f64)));
	// fadd f5,f6,f0
	ctx.f5.f64 = ctx.f6.f64 + ctx.f0.f64;
	// fctiwz f4,f5
	ctx.f4.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfiwx f4,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.f4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8272fc08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272FC08;
loc_8272FC40:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8272fc7c
	if (!ctx.cr6.lt) goto loc_8272FC7C;
	// fadd f13,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64 + ctx.f0.f64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8272FC60:
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8272fc60
	if (ctx.cr6.lt) goto loc_8272FC60;
loc_8272FC7C:
	// fcmpu cr6,f10,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, f29.f64);
	// bge cr6,0x8272fca0
	if (!ctx.cr6.lt) goto loc_8272FCA0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// b 0x8272fcb8
	goto loc_8272FCB8;
loc_8272FCA0:
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
loc_8272FCB8:
	// fadd f12,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = f31.f64 + ctx.f0.f64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// fmuls f11,f13,f10
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// std r9,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// fctiwz f8,f12
	ctx.f8.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f8.u64);
	// fsubs f12,f30,f11
	ctx.f12.f64 = double(float(f30.f64 - ctx.f11.f64));
	// lfd f6,88(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f7,96(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// frsp f13,f4
	ctx.f13.f64 = double(float(ctx.f4.f64));
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// lfd f2,104(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f11,f1
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fadds f11,f11,f3
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// bgt cr6,0x8272fd20
	if (ctx.cr6.gt) goto loc_8272FD20;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_8272FD20:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x8272fd90
	if (ctx.cr6.lt) goto loc_8272FD90;
	// fsubs f13,f31,f9
	ctx.f13.f64 = double(float(f31.f64 - ctx.f9.f64));
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// li r10,0
	ctx.r10.s64 = 0;
	// fadd f8,f13,f0
	ctx.f8.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f7.u64);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8272FD54:
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// stwx r9,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r9,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r9,-4(r7)
	REX_STORE_U32(ctx.r7.u32 + -4, ctx.r9.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stwx r9,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// blt cr6,0x8272fd54
	if (ctx.cr6.lt) goto loc_8272FD54;
loc_8272FD90:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8272fdcc
	if (!ctx.cr6.lt) goto loc_8272FDCC;
	// fsubs f13,f31,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f31.f64 - ctx.f9.f64));
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fadd f8,f13,f0
	ctx.f8.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f7.u64);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8272FDBC:
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8272fdbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272FDBC;
loc_8272FDCC:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// frsp f13,f8
	ctx.f13.f64 = double(float(ctx.f8.f64));
	// fcmpu cr6,f30,f13
	ctx.cr6.compare(f30.f64, ctx.f13.f64);
	// bgt cr6,0x8272fdf0
	if (ctx.cr6.gt) goto loc_8272FDF0;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
loc_8272FDF0:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8272fe9c
	if (!ctx.cr6.lt) goto loc_8272FE9C;
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8272fe64
	if (ctx.cr6.lt) goto loc_8272FE64;
	// fadd f13,f11,f0
	ctx.f13.f64 = ctx.f11.f64 + ctx.f0.f64;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fctiwz f8,f13
	ctx.f8.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f8.u64);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8272FE28:
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// stwx r9,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r9,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r9,-4(r7)
	REX_STORE_U32(ctx.r7.u32 + -4, ctx.r9.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stwx r9,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// blt cr6,0x8272fe28
	if (ctx.cr6.lt) goto loc_8272FE28;
loc_8272FE64:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8272fe9c
	if (!ctx.cr6.lt) goto loc_8272FE9C;
	// fadd f13,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f11.f64 + ctx.f0.f64;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8272FE8C:
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8272fe8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272FE8C;
loc_8272FE9C:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8272feec
	if (!ctx.cr6.lt) goto loc_8272FEEC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8272FEAC:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// fsubs f7,f8,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 - f30.f64));
	// fmadds f6,f7,f10,f31
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, ctx.f10.f64, f31.f64)));
	// fadd f5,f6,f0
	ctx.f5.f64 = ctx.f6.f64 + ctx.f0.f64;
	// fctiwz f4,f5
	ctx.f4.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfiwx f4,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.f4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8272feac
	if (ctx.cr6.lt) goto loc_8272FEAC;
loc_8272FEEC:
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f13,f11
	ctx.f13.f64 = double(float(ctx.f11.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x8272ff0c
	if (ctx.cr6.gt) goto loc_8272FF0C;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_8272FF0C:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x8272ff78
	if (ctx.cr6.lt) goto loc_8272FF78;
	// fadd f13,f31,f0
	ctx.f13.f64 = f31.f64 + ctx.f0.f64;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// li r10,0
	ctx.r10.s64 = 0;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8272FF3C:
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// stwx r9,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r9,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r9,-4(r7)
	REX_STORE_U32(ctx.r7.u32 + -4, ctx.r9.u32);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stwx r9,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// blt cr6,0x8272ff3c
	if (ctx.cr6.lt) goto loc_8272FF3C;
loc_8272FF78:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8272ffb0
	if (!ctx.cr6.lt) goto loc_8272FFB0;
	// fadd f13,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64 + ctx.f0.f64;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8272FFA0:
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8272ffa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272FFA0;
loc_8272FFB0:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f30,f13
	ctx.cr6.compare(f30.f64, ctx.f13.f64);
	// bgt cr6,0x8272ffd4
	if (ctx.cr6.gt) goto loc_8272FFD4;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
loc_8272FFD4:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8273012c
	if (!ctx.cr6.lt) goto loc_8273012C;
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x827300dc
	if (ctx.cr6.lt) goto loc_827300DC;
	// fdivs f13,f9,f10
	ctx.f13.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82730004:
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r30,r10,-1
	r30.s64 = ctx.r10.s64 + -1;
	// std r8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// addi r29,r10,1
	r29.s64 = ctx.r10.s64 + 1;
	// extsw r30,r30
	r30.s64 = r30.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r30,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r30.u64);
	// extsw r30,r29
	r30.s64 = r29.s32;
	// std r8,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// std r30,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, r30.u64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// lfd f12,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfd f7,88(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// lfd f8,96(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f4,80(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f11
	ctx.f2.f64 = double(float(ctx.f11.f64));
	// frsp f12,f5
	ctx.f12.f64 = double(float(ctx.f5.f64));
	// frsp f1,f6
	ctx.f1.f64 = double(float(ctx.f6.f64));
	// frsp f11,f3
	ctx.f11.f64 = double(float(ctx.f3.f64));
	// fsubs f8,f2,f30
	ctx.f8.f64 = double(float(ctx.f2.f64 - f30.f64));
	// fsubs f6,f12,f30
	ctx.f6.f64 = double(float(ctx.f12.f64 - f30.f64));
	// fsubs f7,f1,f30
	ctx.f7.f64 = double(float(ctx.f1.f64 - f30.f64));
	// fsubs f5,f11,f30
	ctx.f5.f64 = double(float(ctx.f11.f64 - f30.f64));
	// fnmsubs f4,f8,f13,f31
	ctx.f4.f64 = double(float(-std::fma(ctx.f8.f64, ctx.f13.f64, -f31.f64)));
	// fnmsubs f2,f6,f13,f31
	ctx.f2.f64 = double(float(-std::fma(ctx.f6.f64, ctx.f13.f64, -f31.f64)));
	// fnmsubs f3,f7,f13,f31
	ctx.f3.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f13.f64, -f31.f64)));
	// fnmsubs f1,f5,f13,f31
	ctx.f1.f64 = double(float(-std::fma(ctx.f5.f64, ctx.f13.f64, -f31.f64)));
	// fadd f12,f4,f0
	ctx.f12.f64 = ctx.f4.f64 + ctx.f0.f64;
	// fadd f8,f2,f0
	ctx.f8.f64 = ctx.f2.f64 + ctx.f0.f64;
	// fadd f11,f3,f0
	ctx.f11.f64 = ctx.f3.f64 + ctx.f0.f64;
	// fadd f7,f1,f0
	ctx.f7.f64 = ctx.f1.f64 + ctx.f0.f64;
	// fctiwz f6,f12
	ctx.f6.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f6,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.f6.u32);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// fctiwz f5,f8
	ctx.f5.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f5,r7,r3
	REX_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.f5.u32);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// fctiwz f4,f11
	ctx.f4.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfiwx f4,r7,r4
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.f4.u32);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// fctiwz f3,f7
	ctx.f3.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stfiwx f3,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.f3.u32);
	// blt cr6,0x82730004
	if (ctx.cr6.lt) goto loc_82730004;
loc_827300DC:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8273012c
	if (!ctx.cr6.lt) goto loc_8273012C;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// fdivs f13,f9,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_827300F4:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f12,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fsubs f9,f10,f30
	ctx.f9.f64 = double(float(ctx.f10.f64 - f30.f64));
	// fnmsubs f8,f9,f13,f31
	ctx.f8.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f13.f64, -f31.f64)));
	// fadd f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 + ctx.f0.f64;
	// fctiwz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfiwx f6,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.f6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x827300f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827300F4;
loc_8273012C:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82730168
	if (!ctx.cr6.lt) goto loc_82730168;
	// fadd f0,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64 + ctx.f0.f64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8273014C:
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8273014c
	if (ctx.cr6.lt) goto loc_8273014C;
loc_82730168:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82788168) {
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
	ctx.lr = 0x82788170;
	// lwz r11,14588(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// subf. r28,r7,r8
	r28.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lwz r10,14604(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14604);
	// mullw r8,r11,r7
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// lwz r7,14608(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 14608);
	// lwz r29,14492(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 14492);
	// lwz r31,14500(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 14500);
	// srawi r27,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	r27.s64 = ctx.r8.s32 >> 2;
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// addze r7,r27
	temp.s64 = r27.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r27.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r27,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r27.s64 = ctx.r10.s32 >> 1;
	// mullw r30,r29,r30
	r30.s64 = int64_t(r29.s32) * int64_t(r30.s32);
	// addze r29,r27
	temp.s64 = r27.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r27.u32;
	r29.s64 = temp.s64;
	// srawi r27,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	r27.s64 = ctx.r11.s32 >> 2;
	// add r30,r30,r31
	r30.u64 = r30.u64 + r31.u64;
	// addze r31,r27
	temp.s64 = r27.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r27.u32;
	r31.s64 = temp.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r29,r31
	ctx.r11.u64 = r29.u64 + r31.u64;
	// add r21,r30,r3
	r21.u64 = r30.u64 + ctx.r3.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r22,r11,r5
	r22.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r20,r11,r6
	r20.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// ble 0x8278822c
	if (!ctx.cr0.gt) goto loc_8278822C;
	// lwz r7,14524(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
loc_827881E4:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82788218
	if (!ctx.cr6.gt) goto loc_82788218;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// addi r10,r6,-2
	ctx.r10.s64 = ctx.r6.s64 + -2;
loc_827881F8:
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r7,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r7.u8);
	// lbzu r7,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// lwz r7,14524(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x827881f8
	if (ctx.cr6.lt) goto loc_827881F8;
loc_82788218:
	// lwz r11,14492(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14492);
	// lwz r10,14588(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// bdnz 0x827881e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827881E4;
loc_8278822C:
	// lwz r7,14496(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 14496);
	// srawi r11,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r11.s64 = r28.s32 >> 1;
	// lwz r10,14588(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// li r24,2
	r24.s64 = 2;
	// addze r23,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r23.s64 = temp.s64;
	// add r8,r7,r21
	ctx.r8.u64 = ctx.r7.u64 + r21.u64;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// add r26,r10,r22
	r26.u64 = ctx.r10.u64 + r22.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// add r25,r10,r20
	r25.u64 = ctx.r10.u64 + r20.u64;
	// add r27,r7,r8
	r27.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(r23.s32, 2, ctx.xer);
	// ble cr6,0x8278836c
	if (!ctx.cr6.gt) goto loc_8278836C;
	// addi r10,r23,-3
	ctx.r10.s64 = r23.s64 + -3;
	// lwz r6,14524(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rlwinm r24,r7,1,0,30
	r24.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8278827C:
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82788348
	if (!ctx.cr6.gt) goto loc_82788348;
	// addi r3,r8,-3
	ctx.r3.s64 = ctx.r8.s64 + -3;
	// subf r28,r27,r8
	r28.u64 = ctx.r8.u64 - r27.u64;
	// addi r10,r27,3
	ctx.r10.s64 = r27.s64 + 3;
	// subf r31,r11,r26
	r31.u64 = r26.u64 - ctx.r11.u64;
	// subf r8,r11,r25
	ctx.r8.u64 = r25.u64 - ctx.r11.u64;
	// subf r7,r11,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r11.u64;
loc_827882A0:
	// lbzx r6,r11,r31
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r30,r6,1
	r30.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// rotlwi r29,r5,2
	r29.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// add r30,r6,r30
	r30.u64 = ctx.r6.u64 + r30.u64;
	// add r6,r5,r29
	ctx.r6.u64 = ctx.r5.u64 + r29.u64;
	// add r6,r30,r6
	ctx.r6.u64 = r30.u64 + ctx.r6.u64;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// srawi r5,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// stbu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r3.u32 = ea;
	// lbz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r5,r11,r31
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// rotlwi r30,r5,3
	r30.u64 = __builtin_rotateleft32(ctx.r5.u32, 3);
	// subf r5,r5,r30
	ctx.r5.u64 = r30.u64 - ctx.r5.u64;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// srawi r5,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// stb r5,-2(r10)
	REX_STORE_U8(ctx.r10.u32 + -2, ctx.r5.u8);
	// lbzx r5,r11,r8
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// lbzx r6,r11,r7
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// rotlwi r30,r6,2
	r30.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// rotlwi r29,r5,1
	r29.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// add r30,r6,r30
	r30.u64 = ctx.r6.u64 + r30.u64;
	// add r6,r5,r29
	ctx.r6.u64 = ctx.r5.u64 + r29.u64;
	// add r6,r30,r6
	ctx.r6.u64 = r30.u64 + ctx.r6.u64;
	// addi r5,r6,4
	ctx.r5.s64 = ctx.r6.s64 + 4;
	// srawi r6,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 3;
	// stbx r6,r28,r10
	REX_STORE_U8(r28.u32 + ctx.r10.u32, ctx.r6.u8);
	// lbzx r5,r11,r7
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// lbzx r6,r11,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// rotlwi r30,r6,3
	r30.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// subf r6,r6,r30
	ctx.r6.u64 = r30.u64 - ctx.r6.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r5,r6,4
	ctx.r5.s64 = ctx.r6.s64 + 4;
	// srawi r6,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 3;
	// stb r6,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r6,14524(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x827882a0
	if (ctx.cr6.lt) goto loc_827882A0;
loc_82788348:
	// lwz r7,14496(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 14496);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// lwz r10,14588(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// add r8,r7,r27
	ctx.r8.u64 = ctx.r7.u64 + r27.u64;
	// add r26,r10,r26
	r26.u64 = ctx.r10.u64 + r26.u64;
	// add r27,r7,r8
	r27.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r25,r10,r25
	r25.u64 = ctx.r10.u64 + r25.u64;
	// bdnz 0x8278827c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278827C;
loc_8278836C:
	// cmpw cr6,r24,r23
	ctx.cr6.compare<int32_t>(r24.s32, r23.s32, ctx.xer);
	// bne cr6,0x827883a8
	if (!ctx.cr6.eq) goto loc_827883A8;
	// lwz r7,14524(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x827883a8
	if (!ctx.cr6.gt) goto loc_827883A8;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_82788388:
	// lbzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stb r7,2(r8)
	REX_STORE_U8(ctx.r8.u32 + 2, ctx.r7.u8);
	// lbzx r6,r10,r5
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r6,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r8.u32 = ea;
	// lwz r4,14524(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82788388
	if (ctx.cr6.lt) goto loc_82788388;
loc_827883A8:
	// lwz r10,14588(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// li r24,3
	r24.s64 = 3;
	// lwz r11,14492(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14492);
	// cmpwi cr6,r23,3
	ctx.cr6.compare<int32_t>(r23.s32, 3, ctx.xer);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// lwz r6,14496(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 14496);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r11,r8,r22
	ctx.r11.u64 = ctx.r8.u64 + r22.u64;
	// add r7,r8,r20
	ctx.r7.u64 = ctx.r8.u64 + r20.u64;
	// add r8,r5,r21
	ctx.r8.u64 = ctx.r5.u64 + r21.u64;
	// add r26,r10,r11
	r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r25,r10,r7
	r25.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r27,r6,r8
	r27.u64 = ctx.r6.u64 + ctx.r8.u64;
	// ble cr6,0x827884f4
	if (!ctx.cr6.gt) goto loc_827884F4;
	// addi r10,r23,-4
	ctx.r10.s64 = r23.s64 + -4;
	// lwz r6,14524(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r24,r5,3
	r24.s64 = ctx.r5.s64 + 3;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82788404:
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x827884d0
	if (!ctx.cr6.gt) goto loc_827884D0;
	// addi r3,r8,-3
	ctx.r3.s64 = ctx.r8.s64 + -3;
	// subf r28,r27,r8
	r28.u64 = ctx.r8.u64 - r27.u64;
	// addi r10,r27,3
	ctx.r10.s64 = r27.s64 + 3;
	// subf r31,r11,r26
	r31.u64 = r26.u64 - ctx.r11.u64;
	// subf r8,r11,r25
	ctx.r8.u64 = r25.u64 - ctx.r11.u64;
	// subf r7,r11,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r11.u64;
loc_82788428:
	// lbz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lbzx r5,r11,r31
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// rotlwi r30,r6,3
	r30.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// subf r6,r6,r30
	ctx.r6.u64 = r30.u64 - ctx.r6.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r5,r6,4
	ctx.r5.s64 = ctx.r6.s64 + 4;
	// srawi r6,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 3;
	// stbu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r3.u32 = ea;
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r6,r11,r31
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// rotlwi r30,r6,2
	r30.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// rotlwi r29,r5,1
	r29.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + r29.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// srawi r5,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// stb r5,-2(r10)
	REX_STORE_U8(ctx.r10.u32 + -2, ctx.r5.u8);
	// lbzx r5,r11,r8
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// lbzx r6,r11,r7
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// rotlwi r30,r6,3
	r30.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// subf r6,r6,r30
	ctx.r6.u64 = r30.u64 - ctx.r6.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r5,r6,4
	ctx.r5.s64 = ctx.r6.s64 + 4;
	// srawi r6,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 3;
	// stbx r6,r10,r28
	REX_STORE_U8(ctx.r10.u32 + r28.u32, ctx.r6.u8);
	// lbzx r6,r11,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// rotlwi r5,r6,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lbzx r6,r11,r7
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// rotlwi r30,r6,1
	r30.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// srawi r5,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// stb r5,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r6,14524(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82788428
	if (ctx.cr6.lt) goto loc_82788428;
loc_827884D0:
	// lwz r5,14496(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 14496);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// lwz r10,14588(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// add r8,r5,r27
	ctx.r8.u64 = ctx.r5.u64 + r27.u64;
	// add r26,r10,r26
	r26.u64 = ctx.r10.u64 + r26.u64;
	// add r27,r5,r8
	r27.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r25,r10,r25
	r25.u64 = ctx.r10.u64 + r25.u64;
	// bdnz 0x82788404
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82788404;
loc_827884F4:
	// lwz r6,14524(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82788554
	if (!ctx.cr6.gt) goto loc_82788554;
	// addi r10,r8,3
	ctx.r10.s64 = ctx.r8.s64 + 3;
	// subf r4,r8,r27
	ctx.r4.u64 = r27.u64 - ctx.r8.u64;
	// subf r7,r11,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r11.u64;
loc_82788510:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmpw cr6,r24,r23
	ctx.cr6.compare<int32_t>(r24.s32, r23.s32, ctx.xer);
	// stb r8,-2(r10)
	REX_STORE_U8(ctx.r10.u32 + -2, ctx.r8.u8);
	// lbzx r6,r11,r7
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// stb r6,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// bne cr6,0x8278853c
	if (!ctx.cr6.eq) goto loc_8278853C;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// add r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stb r6,-2(r8)
	REX_STORE_U8(ctx.r8.u32 + -2, ctx.r6.u8);
	// lbz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// stbx r3,r4,r10
	REX_STORE_U8(ctx.r4.u32 + ctx.r10.u32, ctx.r3.u8);
loc_8278853C:
	// lwz r6,14524(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82788510
	if (ctx.cr6.lt) goto loc_82788510;
loc_82788554:
	// lwz r8,14588(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r10,14492(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14492);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// add r8,r10,r21
	ctx.r8.u64 = ctx.r10.u64 + r21.u64;
	// addze r10,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r10.s64 = temp.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r6,r10,r22
	ctx.r6.u64 = ctx.r10.u64 + r22.u64;
	// add r5,r10,r20
	ctx.r5.u64 = ctx.r10.u64 + r20.u64;
	// ble cr6,0x827885c8
	if (!ctx.cr6.gt) goto loc_827885C8;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r10,r21,-1
	ctx.r10.s64 = r21.s64 + -1;
	// subf r3,r22,r20
	ctx.r3.u64 = r20.u64 - r22.u64;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
loc_82788594:
	// lbz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stb r4,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r4.u8);
	// lbzx r4,r3,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r4,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r10.u32 = ea;
	// lbzu r4,1(r6)
	ea = 1 + ctx.r6.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// stb r4,2(r8)
	REX_STORE_U8(ctx.r8.u32 + 2, ctx.r4.u8);
	// lbzu r4,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stbu r4,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r8.u32 = ea;
	// lwz r4,14524(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82788594
	if (ctx.cr6.lt) goto loc_82788594;
loc_827885C8:
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_827AFE10) {
	REX_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// vspltish v0,8
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x8)));
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// vspltish v12,-1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// vspltisb v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_set1_epi8(char(0x0)));
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltish v6,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x1)));
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// vslh v31,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v11,4
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x4)));
	// vspltish v5,5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x5)));
	// vspltish v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x0)));
	// bne cr6,0x827afec8
	if (!ctx.cr6.eq) goto loc_827AFEC8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x827affb0
	if (!ctx.cr6.gt) goto loc_827AFFB0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,16
	ctx.r10.s64 = 16;
loc_827AFE58:
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v9,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v12,v0,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// vsldoi128 v10,v0,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// vsldoi128 v4,v0,v63,6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 10));
	// vsubshs v3,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vslh v30,v12,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v12,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v10,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v29,v30
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vadduhm v24,v28,v12
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v23,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v26,v27
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v21,v24,v25
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vsubshs v20,v7,v23
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vadduhm v19,v21,v22
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v18,v3,v20
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v17,v19,v2
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v16,v17,v18
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vsrah v15,v16,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v15,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v8,v8,v15
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bdnz 0x827afe58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827AFE58;
	// b 0x827affb0
	goto loc_827AFFB0;
loc_827AFEC8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x827affb0
	if (!ctx.cr6.gt) goto loc_827AFFB0;
	// li r8,-16
	ctx.r8.s64 = -16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r9,16
	ctx.r9.s64 = 16;
loc_827AFEE4:
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v62,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v30,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v10,v12,v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 12));
	// vsldoi128 v9,v0,v62,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 12));
	// vsldoi v4,v12,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 14));
	// vsubshs v29,v0,v3
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsldoi128 v3,v0,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 14));
	// vsubshs v28,v12,v30
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vslh v27,v10,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v26,v12,v0,6
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 10));
	// vslh v25,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v24,v0,v62,6
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 10));
	// vslh v23,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v9,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v25,v27
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v16,v23,v10
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v19,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v4,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v3,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v0,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v12,v20,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v14,v3,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v9,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v4,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vslh v10,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v30,v14,v15
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vslh v3,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v27,v12,v0
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vsubshs v26,v7,v10
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vadduhm v25,v4,v9
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsubshs v24,v7,v3
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vadduhm v23,v27,v30
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vadduhm v22,v28,v26
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v21,v25,v2
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v20,v29,v24
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vadduhm v19,v23,v2
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v18,v21,v22
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v17,v19,v20
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vsrah v16,v18,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v17,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v61,v8,v16
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// stvx128 v16,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v15,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// vor128 v8,v61,v15
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// bdnz 0x827afee4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827AFEE4;
loc_827AFFB0:
	// vand v0,v8,v31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// mfocrf r11,2
	ctx.r11.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827B9D98) {
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
	// bl 0x826a1c80
	ctx.lr = 0x827B9DA0;
	// stwu r1,-1024(r1)
	ea = -1024 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// stw r5,1060(r1)
	REX_STORE_U32(ctx.r1.u32 + 1060, ctx.r5.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r6,1068(r1)
	REX_STORE_U32(ctx.r1.u32 + 1068, ctx.r6.u32);
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// beq cr6,0x827ba238
	if (ctx.cr6.eq) goto loc_827BA238;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// beq cr6,0x827ba07c
	if (ctx.cr6.eq) goto loc_827BA07C;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x827ba010
	if (!ctx.cr6.gt) goto loc_827BA010;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r14,-96
	r14.s64 = -96;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// li r5,-48
	ctx.r5.s64 = -48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r7,96
	ctx.r7.s64 = 96;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r15,144
	r15.s64 = 144;
	// li r16,192
	r16.s64 = 192;
	// li r17,240
	r17.s64 = 240;
	// li r18,-80
	r18.s64 = -80;
	// li r19,-32
	r19.s64 = -32;
	// li r20,64
	r20.s64 = 64;
	// li r21,112
	r21.s64 = 112;
	// li r22,160
	r22.s64 = 160;
	// li r23,208
	r23.s64 = 208;
	// li r24,256
	r24.s64 = 256;
loc_827B9E38:
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r31,r4,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v61,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r31,r9
	r31.u64 = r31.u64 + ctx.r9.u64;
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r30,r8,r4
	r30.u64 = ctx.r8.u64 + ctx.r4.u64;
	// vperm128 v5,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// add r26,r9,r4
	r26.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v62,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r27,r31,r4
	r27.u64 = r31.u64 + ctx.r4.u64;
	// add r29,r30,r4
	r29.u64 = r30.u64 + ctx.r4.u64;
	// lvx128 v60,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v28,v0,v5
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r28,r28,r9
	r28.u64 = r28.u64 + ctx.r9.u64;
	// vmrglb v27,v0,v5
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r25,r29,r4
	r25.u64 = r29.u64 + ctx.r4.u64;
	// lvx128 v56,r26,r10
	ea = (r26.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r26
	temp.u32 = r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v59,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v62,v56,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v57,r31,r4
	ea = (r31.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r27,r10
	ea = (r27.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r27
	temp.u32 = r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v4,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v11,v59,v55,v6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v3,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v10,v57,v54,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v9,v60,v53,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v51,r30,r4
	ea = (r30.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v58,v52,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvx128 v50,r29,r4
	ea = (r29.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v49,r29,r10
	ea = (r29.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v3,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v48,r25,r10
	ea = (r25.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v2,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v47,r28,r10
	ea = (r28.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v1,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v46,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v31,v0,v9
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v5,r0,r28
	temp.u32 = r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v30,v0,v8
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v7,r0,r29
	temp.u32 = r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrglb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v6,r0,r25
	temp.u32 = r25.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v46,v47,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v7,v51,v49,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vadduhm v23,v3,v28
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vperm128 v6,v50,v48,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vadduhm v26,v2,v3
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vmrglb v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v25,v1,v2
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrghb v20,v0,v4
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v24,v31,v1
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vmrghb v29,v0,v7
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v22,v30,v31
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vmrghb v28,v0,v6
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v21,v12,v27
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v19,v11,v12
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrglb v14,v0,v4
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v18,v29,v30
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v17,v28,v29
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v15,v20,v28
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v12,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v5,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v2,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v1,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v16,r11,r14
	ea = (ctx.r11.u32 + r14.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v31,v8,v9
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v12,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v30,v7,v8
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// stvx128 v5,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v29,v6,v7
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// stvx128 v4,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v28,v14,v6
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// stvx128 v3,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v27,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// vslh v26,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v15,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v27,r11,r15
	ea = (ctx.r11.u32 + r15.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v22,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v26,r11,r16
	ea = (ctx.r11.u32 + r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v21,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v24,r11,r18
	ea = (ctx.r11.u32 + r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v20,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v23,r11,r19
	ea = (ctx.r11.u32 + r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v19,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v25,r11,r17
	ea = (ctx.r11.u32 + r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v18,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v22,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v17,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v21,r11,r20
	ea = (ctx.r11.u32 + r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r11,r21
	ea = (ctx.r11.u32 + r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v19,r11,r22
	ea = (ctx.r11.u32 + r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v18,r11,r23
	ea = (ctx.r11.u32 + r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r11,r24
	ea = (ctx.r11.u32 + r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,384
	ctx.r11.s64 = ctx.r11.s64 + 384;
	// bdnz 0x827b9e38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B9E38;
	// lwz r28,1068(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1068);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_827BA010:
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x827ba2f8
	if (!ctx.cr6.gt) goto loc_827BA2F8;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r29,r10,r4
	r29.u64 = ctx.r4.u64 - ctx.r10.u64;
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r9,r3,-48
	ctx.r9.s64 = ctx.r3.s64 + -48;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_827BA044:
	// lbzx r6,r29,r11
	ctx.r6.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
	// lbzux r3,r8,r10
	ea = ctx.r8.u32 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lbz r30,0(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// add r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r3,r30,r6
	ctx.r3.u64 = r30.u64 + ctx.r6.u64;
	// rlwinm r6,r5,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r6,48(r9)
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r6.u16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sthu r5,96(r9)
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r5.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x827ba044
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827BA044;
	// b 0x827ba2f8
	goto loc_827BA2F8;
loc_827BA07C:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v45,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v44,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r30,r3,r4
	r30.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r31,r11,r4
	r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v43,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lvsl v2,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v45,v43,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v42,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvx128 v41,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v30,v44,v38,v2
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvx128 v40,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,192
	r29.s64 = ctx.r1.s64 + 192;
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v39,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v31,v0,v6
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v4,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r11,r4
	r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vperm128 v3,v42,v41,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v35,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v1,v40,v39,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v34,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v12,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v37,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v36,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,240
	r30.s64 = ctx.r1.s64 + 240;
	// lvx128 v62,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v33,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v10,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v32,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v5,v12,v31
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// lvx128 v63,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,288
	r27.s64 = ctx.r1.s64 + 288;
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lvsl v2,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v30,v11,v12
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v3,v63,v37,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v4,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v28,v36,v62,v2
	simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vperm128 v1,v35,v33,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// vperm128 v31,v34,v32,v4
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vadduhm v29,v10,v11
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghb v7,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v26,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v6,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v27,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v9,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r31,r1,336
	r31.s64 = ctx.r1.s64 + 336;
	// vmrghb v8,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,384
	r26.s64 = ctx.r1.s64 + 384;
	// vadduhm v3,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v25,v9,v10
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// addi r25,r1,432
	r25.s64 = ctx.r1.s64 + 432;
	// vadduhm v24,v8,v9
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v26,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v4,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// stvx128 v27,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v2,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v1,v61,v60,v5
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vslh v31,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r5,4
	ctx.r5.s64 = 4;
	// vslh v30,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v27,v0,v1
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r9,r1,64
	ctx.r9.s64 = ctx.r1.s64 + 64;
	// stvx128 v2,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stvx128 v31,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v26,v27,v6
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// stvx128 v30,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v29,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r5,r11,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r11.u64;
	// stvx128 v28,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// vslh v25,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v25,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_827BA200:
	// lbzx r6,r10,r5
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// lbzux r30,r8,r11
	ea = ctx.r8.u32 + ctx.r11.u32;
	r30.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// lbz r31,0(r10)
	r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// add r6,r30,r6
	ctx.r6.u64 = r30.u64 + ctx.r6.u64;
	// add r3,r31,r3
	ctx.r3.u64 = r31.u64 + ctx.r3.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r6,48(r9)
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r6.u16);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sthu r3,96(r9)
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x827ba200
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827BA200;
	// b 0x827ba2f8
	goto loc_827BA2F8;
loc_827BA238:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v59,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v58,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r10,16
	ctx.r10.s64 = 16;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v57,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvx128 v56,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,144
	r31.s64 = ctx.r1.s64 + 144;
	// lvx128 v55,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,192
	r30.s64 = ctx.r1.s64 + 192;
	// lvx128 v54,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,240
	r29.s64 = ctx.r1.s64 + 240;
	// lvx128 v53,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v6,v59,v52,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v4,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v3,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v2,v58,v54,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvsl v1,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v31,v57,v55,v4
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vperm128 v30,v56,v53,v3
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vperm128 v29,v50,v51,v1
	simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrghb v12,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v28,v0,v6
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v27,v0,v29
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v26,v11,v12
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v25,v10,v11
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v24,v12,v28
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v23,v27,v10
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v22,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v22,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v19,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_827BA2F8:
	// li r11,1104
	ctx.r11.s64 = 1104;
	// lwz r5,1060(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1060);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v1,r28,r11
	ea = (r28.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x827b93f0
	ctx.lr = 0x827BA310;
	sub_827B93F0(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x826a1cd0
	return;
}

